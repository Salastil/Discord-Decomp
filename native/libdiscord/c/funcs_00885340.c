// ===== 00885340  FUN_00885340 =====

int FUN_00885340(int param_1)

{
  int iVar1;
  
  iVar1 = 0x20;
  if (param_1 == 0) {
    iVar1 = -1;
  }
  return iVar1 - (int)LZCOUNT(param_1 + -1);
}


// ===== 00885360  FUN_00885360 =====

void FUN_00885360(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00885378  FUN_00885378 =====

undefined8 * FUN_00885378(long *param_1,undefined8 *param_2)

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
    FUN_00885360();
LAB_00885494:
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
    if (0xaaaaaaaaaaaaaaa < uVar5) goto LAB_00885494;
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


// ===== 00885498  FUN_00885498 =====

void FUN_00885498(void *param_1)

{
  memset(param_1,0,0x40c);
  return;
}


// ===== 008854a8  FUN_008854a8 =====

void FUN_008854a8(undefined8 param_1)

{
  void *pvVar1;
  void *local_38;
  void *local_30;
  
  thunk_FUN_0087b608(&local_38);
  pvVar1 = (void *)0x0;
  if ((long)local_30 - (long)local_38 != 0) {
    pvVar1 = local_38;
  }
  FUN_00885530(param_1,pvVar1,(long)local_30 - (long)local_38);
  if (local_38 != (void *)0x0) {
    if ((long)local_30 - 1U < (ulong)((long)local_30 - (long)local_38)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    local_30 = local_38;
    operator_delete(local_38);
  }
  return;
}


// ===== 00885530  FUN_00885530 =====

void FUN_00885530(undefined1 *param_1,undefined8 param_2,ulong param_3)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  char *pcVar18;
  uint uVar19;
  void *pvVar20;
  ulong uVar21;
  uint uVar22;
  undefined8 *puVar23;
  int iVar24;
  char *pcVar25;
  long lVar26;
  float fVar27;
  int local_5d0;
  int iStack_5cc;
  int local_5c0;
  char *local_5b8;
  undefined8 uStack_5b0;
  char **local_5a8;
  char local_1ac;
  undefined1 uStack_1a1;
  char *local_1a0;
  undefined8 local_198;
  undefined *local_190;
  char **local_188;
  undefined8 local_180;
  undefined4 local_178;
  char *local_170;
  char **local_168;
  char *local_160;
  char **ppcStack_158;
  undefined8 local_150;
  char **ppcStack_148;
  undefined1 *local_140;
  char *local_130;
  char **ppcStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  uint uStack_110;
  uint local_10c;
  undefined8 local_108 [3];
  undefined4 uStack_f0;
  uint local_ec;
  ulong local_e8;
  ulong local_e0;
  void *local_d8;
  void *pvStack_d0;
  undefined8 local_c8;
  uint uStack_c0;
  uint uStack_bc;
  void *local_b8;
  void *pvStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  int iStack_8c;
  int iStack_88;
  uint uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = param_2;
  if ((param_3 >> 0x1c & 0x1ffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../rtc_base/numerics/safe_conversions.h",0x24,
                 "IsValueInRangeForNumericType<Dst>(value)",&DAT_001f5fa0);
  }
  local_78 = (undefined1 *)CONCAT44(0xaaaaaa01,(int)(param_3 << 3));
  uStack_118 = 0;
  local_120 = 0;
  local_108[0] = 0;
  uStack_110 = 0;
  local_10c = 0;
  local_108[2] = 0;
  local_108[1] = 0;
  local_e8 = 0;
  uStack_f0 = 0;
  local_ec = 0;
  local_e0 = 0xaaaaaaaa00000000;
  pvStack_d0 = (void *)0x0;
  local_d8 = (void *)0x0;
  uStack_c0 = 0;
  uStack_bc = 0;
  local_c8 = 0;
  pvStack_b0 = (void *)0x0;
  local_b8 = (void *)0x0;
  uStack_a0 = 0;
  local_a8 = 0;
  uStack_90 = 0;
  iStack_8c = 0;
  local_98 = 0;
  uStack_94 = 0;
  iStack_88 = 0;
  uStack_84 = 0;
  uVar4 = FUN_007d5db0(&local_80,4);
  local_78._0_5_ = CONCAT14(1,(uint)local_78);
  if ((uVar4 < 0x10) && (-1 < (int)(uint)local_78)) {
    uVar15 = FUN_007d5db0(&local_80,3);
    uVar14 = (uint)uVar15;
    local_78._0_5_ = CONCAT14(1,(uint)local_78);
    if ((uVar14 < 7) && (-1 < (int)(uint)local_78)) {
      local_120 = CONCAT44(local_120._4_4_,uVar14);
      FUN_007d6120(&local_80,1);
      local_140 = &DAT_aaaaaaaaaaaaaaaa;
      ppcStack_148 = (char **)&DAT_aaaaaaaaaaaaaaaa;
      local_150 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_00887c54(&local_150,1,local_120 & 0xffffffff,&local_80);
      if (((ulong)local_140 & 0x100000000) != 0) {
        uStack_94 = FUN_007d6508(&local_80);
        local_78._0_5_ = CONCAT14(1,(uint)local_78);
        if ((uStack_94 < 0x10) && (-1 < (int)(uint)local_78)) {
          uVar5 = FUN_007d6508(&local_80);
          local_120 = CONCAT44(uVar5,(uint)local_120);
          local_78._0_5_ = CONCAT14(1,(uint)local_78);
          if ((uVar5 < 4) && (-1 < (int)(uint)local_78)) {
            if (uVar5 == 3) {
              iVar6 = FUN_007d60c4(&local_80);
              uStack_118 = CONCAT44(uStack_118._4_4_,(uint)(iVar6 != 0));
            }
            uVar7 = FUN_007d6508(&local_80);
            local_78._0_5_ = CONCAT14(1,(uint)local_78);
            if ((uVar7 == 0) || ((int)(uint)local_78 < 0)) {
              uVar15 = FUN_004022fc();
              if ((uVar15 & 1) == 0) {
                FUN_00623bb0(&DAT_001f4ed3,"../../common_video/h265/h265_sps_parser.cc",0xdba,
                             "Error in stream: invalid value, expected ",
                             "pic_width_in_luma_samples != 0");
              }
            }
            else {
              uVar8 = FUN_007d6508(&local_80);
              local_78._0_5_ = CONCAT14(1,(uint)local_78);
              if ((uVar8 == 0) || ((int)(uint)local_78 < 0)) {
                uVar15 = FUN_004022fc();
                if ((uVar15 & 1) == 0) {
                  FUN_00623bb0(&DAT_001f4ed3,"../../common_video/h265/h265_sps_parser.cc",0xdd2,
                               "Error in stream: invalid value, expected ",
                               "pic_height_in_luma_samples != 0");
                }
              }
              else {
                if ((int)local_150._4_4_ < 0x1f) {
                  uVar19 = 0x9000;
                }
                else if (local_150._4_4_ < 0x3d) {
                  uVar19 = 0x1e000;
                }
                else if (local_150._4_4_ < 0x40) {
                  uVar19 = 0x3c000;
                }
                else if (local_150._4_4_ < 0x5b) {
                  uVar19 = 0x87000;
                }
                else if (local_150._4_4_ < 0x5e) {
                  uVar19 = 0xf0000;
                }
                else if (local_150._4_4_ < 0x7c) {
                  uVar19 = 0x220000;
                }
                else {
                  uVar19 = 0x880000;
                  if (0x9c < local_150._4_4_) {
                    uVar19 = 0x2200000;
                  }
                }
                uVar22 = uVar8 * uVar7;
                lVar26 = 6;
                if (4 < (int)local_150 - 1U) {
                  lVar26 = 7;
                }
                uVar5 = (uint)lVar26;
                if (uVar19 >> 2 < uVar22) {
                  if (uVar19 >> 1 < uVar22) {
                    if (uVar22 <= uVar19 * 3 >> 2) {
                      uVar5 = uVar5 * 0x158 >> 8;
                    }
                  }
                  else {
                    uVar5 = (uint)(lVar26 << 1);
                  }
                }
                else {
                  uVar5 = 0x10;
                }
                iVar6 = FUN_007d60c4(&local_80);
                uVar19 = 0;
                if ((int)uStack_118 == 0) {
                  uVar19 = (uint)(local_120._4_4_ - 1 < 2);
                }
                uVar22 = 0;
                if ((int)uStack_118 == 0) {
                  uVar22 = (uint)(local_120._4_4_ == 1);
                }
                if (iVar6 == 0) {
                  iVar9 = 0;
                  local_5d0 = 0;
                  iStack_5cc = 0;
                  local_5c0 = 0;
LAB_00885c98:
                  uStack_84 = FUN_007d6508(&local_80);
                  local_78._0_5_ = CONCAT14(1,(uint)local_78);
                  if ((uStack_84 < 9) && (-1 < (int)(uint)local_78)) {
                    uVar10 = FUN_007d6508(&local_80);
                    local_78._0_5_ = CONCAT14(1,(uint)local_78);
                    if ((uVar10 < 9) && (-1 < (int)(uint)local_78)) {
                      local_10c = FUN_007d6508(&local_80);
                      local_78._0_5_ = CONCAT14(1,(uint)local_78);
                      if ((local_10c < 0xd) && (-1 < (int)(uint)local_78)) {
                        iVar11 = FUN_007d60c4(&local_80);
                        uVar21 = uVar15 & 7;
                        if (iVar11 != 0) {
                          uVar21 = 0;
                        }
                        lVar26 = uVar21 << 2;
                        local_188 = (char **)0x0;
                        iVar24 = (uVar14 - (int)uVar21) + 1;
                        local_190 = (undefined *)0x0;
                        local_178 = 0;
                        local_180 = 0;
                        do {
                          uVar10 = FUN_007d6508(&local_80);
                          iVar2 = (uint)local_78;
                          *(uint *)((long)local_108 + lVar26) = uVar10;
                          local_78._0_5_ = CONCAT14(1,(uint)local_78);
                          if ((iVar2 < 0) || (uVar5 - 1 < uVar10)) {
                            uVar15 = FUN_004022fc();
                            if ((uVar15 & 1) != 0) goto LAB_00885800;
                            uStack_5b0 = 0x1012;
                            local_198 = &local_5b8;
                            local_5a8 = (char **)&uStack_1a1;
                            local_168 = &local_1a0;
                            local_160 = (char *)0x0;
                            ppcStack_158 = &local_170;
                            ppcStack_128 = &local_160;
                            pcVar18 = 
                            "Error in stream: invalid value, expected sps.sps_max_dec_pic_buffering_minus1[i] to be"
                            ;
                            local_130 = ":";
                            local_1a0 = 
                            "Error in stream: invalid value, expected sps.sps_max_dec_pic_buffering_minus1[i] to be"
                            ;
                            uVar5 = uVar5 - 1;
                            local_170 = " in range [";
                            puVar16 = &DAT_00223e13;
                            uVar17 = 0x1012;
                            uVar14 = *(uint *)((long)local_108 + lVar26);
                            goto LAB_008857f8;
                          }
                          uVar10 = FUN_007d6508(&local_80);
                          iVar2 = (uint)local_78;
                          *(uint *)((long)&local_190 + lVar26) = uVar10;
                          local_78._0_5_ = CONCAT14(1,(uint)local_78);
                          if ((iVar2 < 0) ||
                             (uVar12 = *(uint *)((long)local_108 + lVar26), uVar12 < uVar10)) {
                            uVar15 = FUN_004022fc();
                            if ((uVar15 & 1) != 0) goto LAB_00885800;
                            uStack_5b0 = 0x1032;
                            local_168 = &local_5b8;
                            local_160 = " in range [";
                            ppcStack_158 = &local_170;
                            local_5a8 = &local_1a0;
                            local_130 = (char *)0x0;
                            ppcStack_128 = &local_160;
                            pcVar18 = 
                            "Error in stream: invalid value, expected sps_max_num_reorder_pics[i] to be"
                            ;
                            uVar5 = *(uint *)((long)local_108 + lVar26);
                            local_170 = 
                            "Error in stream: invalid value, expected sps_max_num_reorder_pics[i] to be"
                            ;
                            puVar16 = &DAT_00223e13;
                            uVar17 = 0x1032;
                            uVar14 = uVar10;
                            goto LAB_008857f8;
                          }
                          if (lVar26 != 0) {
                            if (uVar12 < *(uint *)((long)&local_10c + lVar26)) {
                              uVar15 = FUN_004022fc();
                              if ((uVar15 & 1) == 0) {
                                FUN_00623bb0(&DAT_001f4ed3,
                                             "../../common_video/h265/h265_sps_parser.cc",0x104a,
                                             "Error in stream: invalid value, expected ",
                                             "sps.sps_max_dec_pic_buffering_minus1[i] >= sps.sps_max_dec_pic_buffering_minus1[i - 1]"
                                            );
                              }
                              goto LAB_00885800;
                            }
                            if (uVar10 < *(uint *)((long)&local_198 + lVar26 + 4)) {
                              uVar15 = FUN_004022fc();
                              if ((uVar15 & 1) == 0) {
                                FUN_00623bb0(&DAT_001f4ed3,
                                             "../../common_video/h265/h265_sps_parser.cc",0x105a,
                                             "Error in stream: invalid value, expected ",
                                             "sps_max_num_reorder_pics[i] >= sps_max_num_reorder_pics[i - 1]"
                                            );
                              }
                              goto LAB_00885800;
                            }
                          }
                          FUN_007d6508(&local_80);
                          iVar24 = iVar24 + -1;
                          lVar26 = lVar26 + 4;
                        } while (iVar24 != 0);
                        if ((iVar11 == 0) && (uVar14 != 0)) {
                          uVar15 = uVar15 & 7;
                          uVar1 = *(undefined4 *)((long)local_108 + uVar15 * 4);
                          puVar23 = local_108;
                          do {
                            uVar15 = uVar15 - 1;
                            *(undefined4 *)puVar23 = uVar1;
                            puVar23 = (undefined8 *)((long)puVar23 + 4);
                          } while (uVar15 != 0);
                        }
                        local_ec = FUN_007d6508(&local_80);
                        local_78._0_5_ = CONCAT14(1,(uint)local_78);
                        if ((local_ec < 0x1c) && (-1 < (int)(uint)local_78)) {
                          iVar11 = FUN_007d6508(&local_80);
                          uVar5 = local_ec;
                          local_e8 = CONCAT44(local_e8._4_4_,iVar11);
                          uVar10 = local_ec + 3;
                          local_78._0_5_ = CONCAT14(1,(uint)local_78);
                          uVar14 = uVar10 + iVar11;
                          if (((int)(uint)local_78 < 0) || (0x1e < uVar14)) {
                            uVar15 = FUN_004022fc();
                            if ((uVar15 & 1) == 0) {
                              uStack_5b0 = 0x10fa;
                              local_168 = &local_5b8;
                              ppcStack_158 = &local_170;
                              local_160 = " in range [";
                              ppcStack_128 = &local_160;
                              local_5a8 = &local_1a0;
                              local_130 = (char *)0x0;
                              pcVar18 = 
                              "Error in stream: invalid value, expected ctb_log2_size_y to be";
                              local_170 = 
                              "Error in stream: invalid value, expected ctb_log2_size_y to be";
                              puVar16 = &DAT_00223e29;
                              uVar17 = 0x10fa;
                              uVar5 = 0x1e;
                              goto LAB_008857f8;
                            }
                          }
                          else {
                            local_78._0_5_ = CONCAT14(1,(uint)local_78);
                            fVar27 = (float)(uint)(1 << (ulong)(uVar14 & 0x1f));
                            uVar12 = -1 << (ulong)(uVar10 & 0x1f);
                            iStack_8c = (int)((float)uVar7 / fVar27);
                            iStack_88 = (int)((float)uVar8 / fVar27);
                            if ((uVar7 & (uVar12 ^ 0xffffffff)) == 0) {
                              if ((uVar8 & ~uVar12) == 0) {
                                uVar12 = FUN_007d6508(&local_80);
                                local_78._0_5_ = CONCAT14(1,(uint)local_78);
                                if (((int)((uint)local_78 | uVar12) < 0) ||
                                   ((int)uVar5 < (int)uVar12)) {
                                  uVar15 = FUN_004022fc();
                                  if ((uVar15 & 1) == 0) {
                                    uStack_5b0 = 0x1162;
                                    local_168 = &local_5b8;
                                    ppcStack_158 = &local_170;
                                    local_160 = " in range [";
                                    ppcStack_128 = &local_160;
                                    local_5a8 = &local_1a0;
                                    local_130 = (char *)0x0;
                                    pcVar18 = 
                                    "Error in stream: invalid value, expected log2_min_luma_transform_block_size_minus2 to be"
                                    ;
                                    local_170 = 
                                    "Error in stream: invalid value, expected log2_min_luma_transform_block_size_minus2 to be"
                                    ;
                                    puVar16 = &DAT_00223e29;
                                    uVar17 = 0x1162;
                                    uVar14 = uVar12;
                                    goto LAB_008857f8;
                                  }
                                }
                                else {
                                  iVar11 = FUN_007d6508(&local_80);
                                  local_78._0_5_ = CONCAT14(1,(uint)local_78);
                                  if (-1 < (int)(uint)local_78) {
                                    iVar24 = uVar12 + 2;
                                    uVar12 = uVar14;
                                    if (4 < uVar14) {
                                      uVar12 = 5;
                                    }
                                    if (iVar11 <= (int)(uVar12 - iVar24)) {
                                      uVar13 = FUN_007d6508(&local_80);
                                      local_78._0_5_ = CONCAT14(1,(uint)local_78);
                                      if (((int)((uint)local_78 | uVar13) < 0) ||
                                         (uVar5 = uVar14 - iVar24,
                                         (int)(uVar14 - iVar24) < (int)uVar13)) {
                                        uVar15 = FUN_004022fc();
                                        if ((uVar15 & 1) == 0) {
                                          uStack_5b0 = 0x11b2;
                                          local_168 = &local_5b8;
                                          ppcStack_158 = &local_170;
                                          local_160 = " in range [";
                                          ppcStack_128 = &local_160;
                                          local_5a8 = &local_1a0;
                                          local_130 = (char *)0x0;
                                          pcVar18 = 
                                          "Error in stream: invalid value, expected max_transform_hierarchy_depth_inter to be"
                                          ;
                                          local_170 = 
                                          "Error in stream: invalid value, expected max_transform_hierarchy_depth_inter to be"
                                          ;
                                          uVar5 = uVar14 - iVar24;
                                          puVar16 = &DAT_00223e29;
                                          uVar17 = 0x11b2;
                                          uVar14 = uVar13;
                                          goto LAB_008857f8;
                                        }
                                      }
                                      else {
                                        uVar14 = FUN_007d6508(&local_80);
                                        local_78._0_5_ = CONCAT14(1,(uint)local_78);
                                        if (((int)((uint)local_78 | uVar14) < 0) || (uVar5 < uVar14)
                                           ) {
                                          uVar15 = FUN_004022fc();
                                          if ((uVar15 & 1) == 0) {
                                            uStack_5b0 = 0x11d2;
                                            local_168 = &local_5b8;
                                            ppcStack_158 = &local_170;
                                            local_160 = " in range [";
                                            ppcStack_128 = &local_160;
                                            local_5a8 = &local_1a0;
                                            local_130 = (char *)0x0;
                                            pcVar18 = 
                                            "Error in stream: invalid value, expected max_transform_hierarchy_depth_intra to be"
                                            ;
                                            local_170 = 
                                            "Error in stream: invalid value, expected max_transform_hierarchy_depth_intra to be"
                                            ;
                                            puVar16 = &DAT_00223e29;
                                            uVar17 = 0x11d2;
                                            goto LAB_008857f8;
                                          }
                                        }
                                        else {
                                          iVar11 = FUN_007d60c4(&local_80);
                                          if (((iVar11 == 0) ||
                                              (iVar11 = FUN_007d60c4(&local_80), iVar11 == 0)) ||
                                             (uVar15 = FUN_00886c34(&local_80), (uVar15 & 1) != 0))
                                          {
                                            FUN_007d6120(&local_80,1);
                                            iVar11 = FUN_007d60c4(&local_80);
                                            local_e8 = (ulong)CONCAT14(iVar11 != 0,
                                                                       (undefined4)local_e8);
                                            iVar11 = FUN_007d60c4(&local_80);
                                            if (iVar11 == 0) {
LAB_008866f4:
                                              uVar14 = FUN_007d6508(&local_80);
                                              local_78._0_5_ = CONCAT14(1,(uint)local_78);
                                              local_e0 = CONCAT44(local_e0._4_4_,uVar14);
                                              if ((uVar14 < 0x41) && (-1 < (int)(uint)local_78)) {
                                                FUN_0088821c(&local_d8,uVar14);
                                                uVar15 = local_e0 & 0xffffffff;
                                                if ((uint)local_e0 != 0) {
                                                  lVar26 = 0;
                                                  uVar21 = 0;
                                                  do {
                                                    if (6 < (uint)local_120) {
                    /* WARNING: Does not return */
                                                      pcVar3 = (code *)SoftwareBreakpoint(0x5512,
                                                  0x886c34);
                                                  (*pcVar3)();
                                                  }
                                                  uVar1 = *(undefined4 *)
                                                           ((long)local_108 +
                                                           (local_120 & 0xffffffff) * 4);
                                                  memset(&local_5b8,0xaa,0x410);
                                                  FUN_00886fb4(&local_5b8,uVar21 & 0xffffffff,uVar15
                                                               ,&local_d8,uVar1,&local_80);
                                                  if (local_1ac != '\x01') goto LAB_00885800;
                                                  uVar15 = ((long)pvStack_d0 - (long)local_d8 >> 2)
                                                           * 0x2f71aaff02f71ab;
                                                  if (uVar15 < uVar21 || uVar15 - uVar21 == 0)
                                                  goto LAB_00886c1c;
                                                  memcpy((void *)((long)local_d8 + lVar26),
                                                         &local_5b8,0x40c);
                                                  uVar15 = local_e0 & 0xffffffff;
                                                  uVar21 = uVar21 + 1;
                                                  lVar26 = lVar26 + 0x40c;
                                                  } while (uVar21 < uVar15);
                                                }
                                                iVar11 = FUN_007d60c4(&local_80);
                                                uStack_c0 = (uint)(iVar11 != 0);
                                                if (iVar11 != 0) {
                                                  uStack_bc = FUN_007d6508(&local_80);
                                                  local_78._0_5_ = CONCAT14(1,(uint)local_78);
                                                  if ((0x20 < uStack_bc) ||
                                                     ((int)(uint)local_78 < 0)) {
                                                    uVar15 = FUN_004022fc();
                                                    if ((uVar15 & 1) == 0) {
                                                      uStack_5b0 = 0x13fa;
                                                      local_198 = &local_5b8;
                                                      local_5a8 = (char **)&uStack_1a1;
                                                      local_168 = &local_1a0;
                                                      ppcStack_158 = &local_170;
                                                      local_160 = (char *)0x0;
                                                      ppcStack_128 = &local_160;
                                                      pcVar18 = 
                                                  "Error in stream: invalid value, expected sps.num_long_term_ref_pics_sps to be"
                                                  ;
                                                  local_130 = ":";
                                                  local_1a0 = 
                                                  "Error in stream: invalid value, expected sps.num_long_term_ref_pics_sps to be"
                                                  ;
                                                  local_170 = " in range [";
                                                  puVar16 = &DAT_00223e13;
                                                  uVar17 = 0x13fa;
                                                  uVar5 = 0x20;
                                                  uVar14 = uStack_bc;
                                                  goto LAB_008857f8;
                                                  }
                                                  goto LAB_00885800;
                                                  }
                                                  local_5b8 = (char *)((ulong)local_5b8 &
                                                                      0xffffffff00000000);
                                                  FUN_0088847c(&local_b8,uStack_bc,&local_5b8);
                                                  if (uStack_bc != 0) {
                                                    uVar15 = 0;
                                                    do {
                                                      FUN_007d6120(&local_80,local_10c + 4);
                                                      iVar11 = FUN_007d60c4(&local_80);
                                                      if ((ulong)((long)pvStack_b0 - (long)local_b8
                                                                 >> 2) <= uVar15) {
LAB_00886c1c:
                    /* WARNING: Subroutine does not return */
                                                        std::__Cr::__libcpp_verbose_abort
                                                                  ("%s",
                                                  "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                                                  );
                                                  }
                                                  *(uint *)((long)local_b8 + uVar15 * 4) =
                                                       (uint)(iVar11 != 0);
                                                  uVar15 = uVar15 + 1;
                                                  } while (uVar15 < uStack_bc);
                                                  }
                                                }
                                                iVar11 = FUN_007d60c4(&local_80);
                                                uStack_118 = CONCAT44(uVar7,(int)uStack_118);
                                                local_98 = uVar8;
                                                if (iVar6 != 0) {
                                                  uVar7 = uVar7 - (iVar9 + local_5d0 <<
                                                                  (ulong)uVar19);
                                                  local_98 = uVar8 - (local_5c0 + iStack_5cc <<
                                                                     (ulong)uVar22);
                                                }
                                                uStack_a0 = CONCAT44(uVar7,(uint)(iVar11 != 0));
                                                local_78._0_5_ = CONCAT14(1,(uint)local_78);
                                                uStack_90 = uVar4;
                                                uStack_110 = uVar8;
                                                if (-1 < (int)(uint)local_78) {
                                                  FUN_00888790(param_1,0,&local_120);
                                                  goto joined_r0x0088580c;
                                                }
                                              }
                                              else {
                                                uVar15 = FUN_004022fc();
                                                if ((uVar15 & 1) == 0) {
                                                  uStack_5b0 = 0x1342;
                                                  local_198 = &local_5b8;
                                                  local_5a8 = (char **)&uStack_1a1;
                                                  local_168 = &local_1a0;
                                                  ppcStack_158 = &local_170;
                                                  local_160 = (char *)0x0;
                                                  ppcStack_128 = &local_160;
                                                  pcVar18 = 
                                                  "Error in stream: invalid value, expected sps.num_short_term_ref_pic_sets to be"
                                                  ;
                                                  local_130 = ":";
                                                  local_1a0 = 
                                                  "Error in stream: invalid value, expected sps.num_short_term_ref_pic_sets to be"
                                                  ;
                                                  local_170 = " in range [";
                                                  puVar16 = &DAT_00223e13;
                                                  uVar17 = 0x1342;
                                                  uVar5 = 0x40;
                                                  uVar14 = (uint)local_e0;
                                                  goto LAB_008857f8;
                                                }
                                              }
                                            }
                                            else {
                                              FUN_007d6120(&local_80,4);
                                              FUN_007d6120(&local_80,4);
                                              uVar14 = FUN_007d6508(&local_80);
                                              local_78._0_5_ = CONCAT14(1,(uint)local_78);
                                              if ((uVar14 < 3) && (-1 < (int)(uint)local_78)) {
                                                uVar14 = uVar14 + 3;
                                                if (4 < (int)uVar10) {
                                                  uVar10 = 5;
                                                }
                                                pcVar25 = (char *)(ulong)uVar10;
                                                if (((int)uVar14 < (int)uVar10) || (uVar12 < uVar14)
                                                   ) {
                                                  uVar15 = FUN_004022fc();
                                                  if ((uVar15 & 1) == 0) {
                                                    uStack_5b0 = 0x12da;
                                                    local_168 = &local_5b8;
                                                    ppcStack_158 = &local_170;
                                                    local_5a8 = &local_1a0;
                                                    local_160 = " in range [";
                                                    ppcStack_128 = &local_160;
                                                    pcVar18 = 
                                                  "Error in stream: invalid value, expected log2_min_ipcm_cb_size_y to be"
                                                  ;
                                                  local_170 = 
                                                  "Error in stream: invalid value, expected log2_min_ipcm_cb_size_y to be"
                                                  ;
                                                  puVar16 = &DAT_00223e29;
                                                  uVar17 = 0x12da;
                                                  local_130 = pcVar25;
                                                  goto LAB_008857fc;
                                                  }
                                                }
                                                else {
                                                  iVar11 = FUN_007d6508(&local_80);
                                                  local_78._0_5_ = CONCAT14(1,(uint)local_78);
                                                  if ((-1 < (int)(uint)local_78) &&
                                                     (iVar11 <= (int)(uVar12 - uVar14))) {
                                                    FUN_007d6120(&local_80,1);
                                                    goto LAB_008866f4;
                                                  }
                                                  uVar15 = FUN_004022fc();
                                                  if ((uVar15 & 1) == 0) {
                                                    FUN_00623bb0(&DAT_001f4ed3,
                                                                                                                                  
                                                  "../../common_video/h265/h265_sps_parser.cc",
                                                  0x1302,"Error in stream: invalid value, expected "
                                                  ,
                                                  "log2_diff_max_min_pcm_luma_coding_block_size <= std::min(ctb_log2_size_y, 5) - log2_min_ipcm_cb_size_y"
                                                  );
                                                  }
                                                }
                                              }
                                              else {
                                                uVar15 = FUN_004022fc();
                                                if ((uVar15 & 1) == 0) {
                                                  uStack_5b0 = 0x12b2;
                                                  local_168 = &local_5b8;
                                                  ppcStack_158 = &local_170;
                                                  local_160 = " in range [";
                                                  ppcStack_128 = &local_160;
                                                  local_5a8 = &local_1a0;
                                                  local_130 = (char *)0x0;
                                                  pcVar18 = 
                                                  "Error in stream: invalid value, expected log2_min_pcm_luma_coding_block_size_minus3 to be"
                                                  ;
                                                  local_170 = 
                                                  "Error in stream: invalid value, expected log2_min_pcm_luma_coding_block_size_minus3 to be"
                                                  ;
                                                  puVar16 = &DAT_00223e29;
                                                  uVar17 = 0x12b2;
                                                  uVar5 = 2;
                                                  goto LAB_008857f8;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      goto LAB_00885800;
                                    }
                                  }
                                  uVar15 = FUN_004022fc();
                                  if ((uVar15 & 1) == 0) {
                                    FUN_00623bb0(&DAT_001f4ed3,
                                                 "../../common_video/h265/h265_sps_parser.cc",0x1192
                                                 ,"Error in stream: invalid value, expected ",
                                                 "log2_diff_max_min_luma_transform_block_size <= std::min(ctb_log2_size_y, 5) - min_tb_log2_size_y"
                                                );
                                  }
                                }
                              }
                              else {
                                uVar15 = FUN_004022fc();
                                if ((uVar15 & 1) == 0) {
                                  FUN_00623bb0(&DAT_001f4ed3,
                                               "../../common_video/h265/h265_sps_parser.cc",0x113a,
                                               "Error in stream: invalid value, expected ",
                                               "pic_height_in_luma_samples % min_cb_size_y == 0");
                                }
                              }
                            }
                            else {
                              uVar15 = FUN_004022fc();
                              if ((uVar15 & 1) == 0) {
                                FUN_00623bb0(&DAT_001f4ed3,
                                             "../../common_video/h265/h265_sps_parser.cc",0x1132,
                                             "Error in stream: invalid value, expected ",
                                             "pic_width_in_luma_samples % min_cb_size_y == 0");
                              }
                            }
                          }
                        }
                        else {
                          uVar15 = FUN_004022fc();
                          if ((uVar15 & 1) == 0) {
                            uStack_5b0 = 0x10ca;
                            local_198 = &local_5b8;
                            local_5a8 = (char **)&uStack_1a1;
                            local_168 = &local_1a0;
                            ppcStack_158 = &local_170;
                            local_160 = (char *)0x0;
                            ppcStack_128 = &local_160;
                            pcVar18 = 
                            "Error in stream: invalid value, expected sps.log2_min_luma_coding_block_size_minus3 to be"
                            ;
                            local_130 = ":";
                            local_1a0 = 
                            "Error in stream: invalid value, expected sps.log2_min_luma_coding_block_size_minus3 to be"
                            ;
                            local_170 = " in range [";
                            puVar16 = &DAT_00223e08;
                            uVar17 = 0x10ca;
                            uVar5 = 0x1b;
                            uVar14 = local_ec;
                            goto LAB_008857f8;
                          }
                        }
                      }
                      else {
                        uVar15 = FUN_004022fc();
                        if ((uVar15 & 1) == 0) {
                          uStack_5b0 = 0xfb2;
                          local_168 = &local_5b8;
                          ppcStack_158 = &local_170;
                          local_160 = " in range [";
                          ppcStack_128 = &local_160;
                          local_5a8 = &local_1a0;
                          local_130 = (char *)0x0;
                          local_188 = &local_130;
                          pcVar18 = 
                          "Error in stream: invalid value, expected sps.log2_max_pic_order_cnt_lsb_minus4 to be"
                          ;
                          local_170 = 
                          "Error in stream: invalid value, expected sps.log2_max_pic_order_cnt_lsb_minus4 to be"
                          ;
                          local_190 = &DAT_001ca603;
                          puVar16 = &DAT_00223e08;
                          uVar17 = 0xfb2;
                          uVar5 = 0xc;
                          uVar14 = local_10c;
                          goto LAB_008857f8;
                        }
                      }
                    }
                    else {
                      uVar15 = FUN_004022fc();
                      if ((uVar15 & 1) == 0) {
                        uStack_5b0 = 0xf9a;
                        pcVar18 = 
                        "Error in stream: invalid value, expected bit_depth_chroma_minus8 to be";
                        ppcStack_158 = &local_5b8;
                        local_160 = 
                        "Error in stream: invalid value, expected bit_depth_chroma_minus8 to be";
                        ppcStack_128 = &local_160;
                        local_5a8 = &local_170;
                        local_130 = " in range [";
                        local_188 = &local_130;
                        local_190 = (undefined *)0x0;
                        puVar16 = &DAT_00223e08;
                        uVar17 = 0xf9a;
                        uVar5 = 8;
                        uVar14 = uVar10;
                        goto LAB_008857f8;
                      }
                    }
                  }
                  else {
                    uVar15 = FUN_004022fc();
                    if ((uVar15 & 1) == 0) {
                      uStack_5b0 = 0xf82;
                      local_168 = &local_5b8;
                      ppcStack_158 = &local_170;
                      local_160 = " in range [";
                      ppcStack_128 = &local_160;
                      local_5a8 = &local_1a0;
                      local_130 = (char *)0x0;
                      local_188 = &local_130;
                      pcVar18 = 
                      "Error in stream: invalid value, expected sps.bit_depth_luma_minus8 to be";
                      local_170 = 
                      "Error in stream: invalid value, expected sps.bit_depth_luma_minus8 to be";
                      local_190 = &DAT_001ca603;
                      puVar16 = &DAT_00223e08;
                      uVar17 = 0xf82;
                      uVar5 = 8;
                      uVar14 = uStack_84;
LAB_008857f8:
                      pcVar25 = (char *)0x0;
                      uVar12 = uVar5;
LAB_008857fc:
                      local_5b8 = "../../common_video/h265/h265_sps_parser.cc";
                      FUN_00623bb0(puVar16,"../../common_video/h265/h265_sps_parser.cc",uVar17,
                                   pcVar18," in range [",pcVar25,&DAT_001ca603,uVar12,&DAT_0019fa9e,
                                   " found ",uVar14," instead");
                    }
                  }
                }
                else {
                  iVar9 = FUN_007d6508(&local_80);
                  local_5d0 = FUN_007d6508(&local_80);
                  local_5c0 = FUN_007d6508(&local_80);
                  iStack_5cc = FUN_007d6508(&local_80);
                  local_78._0_5_ = CONCAT14(1,(uint)local_78);
                  if (((int)(uint)local_78 < 0) ||
                     (uVar7 <= (uint)(local_5d0 + iVar9 << (ulong)uVar19))) {
                    uVar15 = FUN_004022fc();
                    if ((uVar15 & 1) == 0) {
                      FUN_00623bb0(&DAT_001f4ed3,"../../common_video/h265/h265_sps_parser.cc",0xf3a,
                                   "Error in stream: invalid value, expected ",
                                   "width_crop < pic_width_in_luma_samples");
                    }
                  }
                  else {
                    if ((uint)(iStack_5cc + local_5c0 << (ulong)uVar22) < uVar8) goto LAB_00885c98;
                    uVar15 = FUN_004022fc();
                    if ((uVar15 & 1) == 0) {
                      FUN_00623bb0(&DAT_001f4ed3,"../../common_video/h265/h265_sps_parser.cc",0xf5a,
                                   "Error in stream: invalid value, expected ",
                                   "height_crop < pic_height_in_luma_samples");
                    }
                  }
                }
              }
            }
          }
          else {
            uVar15 = FUN_004022fc();
            if ((uVar15 & 1) == 0) {
              uStack_5b0 = 0xd72;
              local_168 = &local_5b8;
              ppcStack_158 = &local_170;
              local_160 = " in range [";
              ppcStack_128 = &local_160;
              local_5a8 = &local_1a0;
              local_130 = (char *)0x0;
              local_188 = &local_130;
              pcVar18 = "Error in stream: invalid value, expected sps.chroma_format_idc to be";
              local_170 = "Error in stream: invalid value, expected sps.chroma_format_idc to be";
              local_190 = &DAT_001ca603;
              puVar16 = &DAT_00223e08;
              uVar17 = 0xd72;
              uVar5 = 3;
              uVar14 = local_120._4_4_;
              goto LAB_008857f8;
            }
          }
        }
        else {
          uVar15 = FUN_004022fc();
          if ((uVar15 & 1) == 0) {
            uStack_5b0 = 0xd5a;
            local_168 = &local_5b8;
            ppcStack_158 = &local_170;
            local_160 = " in range [";
            ppcStack_128 = &local_160;
            local_5a8 = &local_1a0;
            local_130 = (char *)0x0;
            local_188 = &local_130;
            pcVar18 = "Error in stream: invalid value, expected sps.sps_id to be";
            local_170 = "Error in stream: invalid value, expected sps.sps_id to be";
            local_190 = &DAT_001ca603;
            uVar17 = 0xd5a;
            uVar14 = uStack_94;
            goto LAB_00885764;
          }
        }
      }
    }
    else {
      uVar15 = FUN_004022fc();
      if ((uVar15 & 1) == 0) {
        uStack_5b0 = 0xcfa;
        pcVar18 = "Error in stream: invalid value, expected sps_max_sub_layers_minus1 to be";
        ppcStack_128 = &local_5b8;
        local_130 = "Error in stream: invalid value, expected sps_max_sub_layers_minus1 to be";
        ppcStack_148 = &local_130;
        local_5a8 = &local_160;
        local_150 = " in range [";
        local_188 = (char **)&local_150;
        local_190 = (undefined *)0x0;
        puVar16 = &DAT_00223e08;
        uVar17 = 0xcfa;
        uVar5 = 6;
        goto LAB_008857f8;
      }
    }
  }
  else {
    uVar15 = FUN_004022fc();
    if ((uVar15 & 1) == 0) {
      uStack_5b0 = 0xcd2;
      pcVar18 = "Error in stream: invalid value, expected sps_video_parameter_set_id to be";
      ppcStack_128 = &local_5b8;
      local_130 = "Error in stream: invalid value, expected sps_video_parameter_set_id to be";
      ppcStack_148 = &local_130;
      local_5a8 = &local_160;
      local_150 = " in range [";
      local_188 = (char **)&local_150;
      uVar17 = 0xcd2;
      local_190 = (undefined *)0x0;
      uVar14 = uVar4;
LAB_00885764:
      puVar16 = &DAT_00223e08;
      uVar5 = 0xf;
      goto LAB_008857f8;
    }
  }
LAB_00885800:
  *param_1 = 0;
  param_1[0xa0] = 0;
joined_r0x0088580c:
  if (local_b8 == (void *)0x0) {
LAB_008859c4:
    if (local_d8 == (void *)0x0) {
      return;
    }
    uVar15 = (ulong)(((long)local_d8 - (long)pvStack_d0) * 0x3d08e5500fd08e55) >> 2;
    uVar21 = (long)pvStack_d0 * -0x3d08e5500fd08e55 - 4U >> 2;
    if (uVar21 <= uVar15) {
      uVar15 = uVar21;
    }
    pvVar20 = pvStack_d0;
    if ((1 < uVar15) && ((((int)local_d8 - (int)pvStack_d0 | -(int)pvStack_d0) & 3U) == 0)) {
      uVar15 = uVar15 & 0x3ffffffffffffffe;
      pvVar20 = (void *)((long)pvStack_d0 + uVar15 * -0x40c);
      do {
        uVar15 = uVar15 - 2;
      } while (uVar15 != 0);
    }
    do {
      if (pvVar20 == local_d8) {
        pvStack_d0 = local_d8;
        operator_delete(local_d8);
        return;
      }
      pvVar20 = (void *)((long)pvVar20 + -0x40c);
    } while (pvVar20 != (void *)0x0);
  }
  else {
    uVar21 = (ulong)((long)pvStack_b0 + (-4 - ((long)pvStack_b0 << 0x3e))) >> 2;
    uVar15 = (ulong)(((long)local_b8 - (long)pvStack_b0 << 0x3e) -
                    ((long)local_b8 - (long)pvStack_b0)) >> 2;
    if (uVar21 <= uVar15) {
      uVar15 = uVar21;
    }
    pvVar20 = pvStack_b0;
    if ((1 < uVar15) && ((((int)local_b8 - (int)pvStack_b0 | -(int)pvStack_b0) & 3U) == 0)) {
      uVar15 = uVar15 & 0x3ffffffffffffffe;
      pvVar20 = (void *)((long)pvStack_b0 + uVar15 * -4);
      do {
        uVar15 = uVar15 - 2;
      } while (uVar15 != 0);
    }
    do {
      if (pvVar20 == local_b8) {
        pvStack_b0 = local_b8;
        operator_delete(local_b8);
        goto LAB_008859c4;
      }
      pvVar20 = (void *)((long)pvVar20 + -4);
    } while (pvVar20 != (void *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00886c34  FUN_00886c34 =====

uint FUN_00886c34(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 uStack_a9;
  char *local_a8;
  undefined8 uStack_a0;
  undefined1 *local_98;
  char *local_90;
  char **ppcStack_88;
  char *local_80;
  char **ppcStack_78;
  undefined8 local_70;
  char **ppcStack_68;
  
  uVar10 = 0;
  do {
    uVar8 = 0;
    uVar11 = 0x10 << (ulong)((uVar10 & 0xf) << 1);
    if (0x3f < uVar11) {
      uVar11 = 0x40;
    }
    uVar1 = uVar10;
    if (uVar10 != 3) {
      uVar1 = 1;
    }
    do {
      iVar2 = FUN_007d60c4(param_1);
      if (iVar2 == 0) {
        uVar3 = FUN_007d6508(param_1);
        uVar9 = *(uint *)(param_1 + 8);
        *(undefined1 *)(param_1 + 0xc) = 1;
        if (uVar10 == 3) {
          if (((int)(uint)(2 < uVar8) < (int)uVar3) || ((int)(uVar9 | uVar3) < 0)) {
            uVar4 = FUN_004022fc();
            if ((uVar4 & 1) != 0) {
              return 0;
            }
            uStack_a0 = 0x412;
            uVar8 = (uint)(2 < uVar8);
            uVar5 = 0x412;
            goto LAB_00886fa8;
          }
        }
        else if (((int)uVar8 < (int)uVar3) || ((int)(uVar9 | uVar3) < 0)) {
          uVar4 = FUN_004022fc();
          if ((uVar4 & 1) != 0) {
            return 0;
          }
          uStack_a0 = 0x3fa;
          uVar5 = 0x3fa;
LAB_00886fa8:
          local_70 = 0;
          local_90 = 
          "Error in stream: invalid value, expected scaling_list_pred_matrix_id_delta to be";
          pcVar6 = 
          "Error in stream: invalid value, expected scaling_list_pred_matrix_id_delta to be";
          uVar7 = 0;
LAB_00886df0:
          ppcStack_68 = &local_80;
          ppcStack_78 = &local_90;
          ppcStack_88 = &local_a8;
          local_98 = &uStack_a9;
          local_80 = " in range [";
          local_a8 = "../../common_video/h265/h265_sps_parser.cc";
          FUN_00623bb0(&DAT_00223e29,"../../common_video/h265/h265_sps_parser.cc",uVar5,pcVar6,
                       " in range [",uVar7,&DAT_001ca603,uVar8,&DAT_0019fa9e," found ",uVar3,
                       " instead");
          return 0;
        }
      }
      else {
        uVar12 = uVar11;
        if (1 < uVar10) {
          uVar3 = FUN_007d6670(param_1);
          *(undefined1 *)(param_1 + 0xc) = 1;
          if ((uVar3 - 0xf8 < 0xffffff01) || (*(int *)(param_1 + 8) < 0)) {
            uVar4 = FUN_004022fc();
            if ((uVar4 & 1) != 0) {
              return 0;
            }
            uStack_a0 = 0x45a;
            pcVar6 = 
            "Error in stream: invalid value, expected scaling_list_dc_coef_minus8[size_id - 2][matrix_id] to be"
            ;
            local_90 = 
            "Error in stream: invalid value, expected scaling_list_dc_coef_minus8[size_id - 2][matrix_id] to be"
            ;
            local_70 = 0xfffffff9;
            uVar5 = 0x45a;
            uVar7 = 0xfffffff9;
            uVar8 = 0xf7;
            goto LAB_00886df0;
          }
        }
        do {
          uVar3 = FUN_007d6670(param_1);
          *(undefined1 *)(param_1 + 0xc) = 1;
          if ((uVar3 != (int)(char)uVar3) || (uVar9 = *(uint *)(param_1 + 8), (int)uVar9 < 0)) {
            uVar4 = FUN_004022fc();
            if ((uVar4 & 1) != 0) {
              return 0;
            }
            uStack_a0 = 0x48a;
            pcVar6 = "Error in stream: invalid value, expected scaling_list_delta_coef to be";
            local_90 = "Error in stream: invalid value, expected scaling_list_delta_coef to be";
            local_70 = 0xffffff80;
            uVar5 = 0x48a;
            uVar7 = 0xffffff80;
            uVar8 = 0x7f;
            goto LAB_00886df0;
          }
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      uVar8 = uVar8 + uVar1;
    } while (uVar8 < 6);
    uVar10 = uVar10 + 1;
    if (uVar10 == 4) {
      *(undefined1 *)(param_1 + 0xc) = 1;
      return ~uVar9 >> 0x1f;
    }
  } while( true );
}


// ===== 00886fb4  FUN_00886fb4 =====

void FUN_00886fb4(undefined1 *param_1,int param_2,int param_3,long *param_4,uint param_5,
                 long param_6)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  uint uVar20;
  uint *puVar21;
  undefined1 uStack_569;
  char *local_568;
  char **ppcStack_560;
  char **local_558;
  char *pcStack_550;
  char **local_548;
  char *local_540;
  char **ppcStack_538;
  char *local_530;
  char **ppcStack_528;
  char *local_520;
  char **ppcStack_518;
  uint local_50c;
  uint local_508;
  uint local_504 [64];
  uint local_404 [64];
  uint local_304 [64];
  uint local_204 [64];
  undefined4 local_104;
  char local_100 [8];
  char **ppcStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  char *local_c0;
  undefined8 uStack_b8;
  char **local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  memset(&local_50c,0,0x40c);
  if ((param_2 == 0) || (iVar7 = FUN_007d60c4(param_6), iVar7 == 0)) {
    uVar8 = FUN_007d6508(param_6);
    local_50c = uVar8;
    uVar9 = FUN_007d6508(param_6);
    uVar17 = param_5 - uVar8;
    *(undefined1 *)(param_6 + 0xc) = 1;
    local_508 = uVar9;
    if ((param_5 < uVar8) || (*(int *)(param_6 + 8) < 0)) {
      uVar10 = FUN_004022fc();
      if ((uVar10 & 1) == 0) {
        local_c0 = "../../common_video/h265/h265_sps_parser.cc";
        uStack_b8 = 0x842;
        pcVar13 = "Error in stream: invalid value, expected st_ref_pic_set.num_negative_pics to be";
        ppcStack_518 = &local_c0;
        local_520 = 
        "Error in stream: invalid value, expected st_ref_pic_set.num_negative_pics to be";
        ppcStack_560 = &local_520;
        local_b0 = &local_530;
        local_568 = " in range [";
        ppcStack_f8 = &local_568;
        local_100[0] = '\0';
        local_100[1] = '\0';
        local_100[2] = '\0';
        local_100[3] = '\0';
        local_100[4] = '\0';
        local_100[5] = '\0';
        local_100[6] = '\0';
        local_100[7] = '\0';
        puVar11 = &DAT_00223e13;
        uVar12 = 0x842;
        goto LAB_00887bf8;
      }
    }
    else if (uVar17 < uVar9) {
      uVar10 = FUN_004022fc();
      if ((uVar10 & 1) == 0) {
        local_c0 = "../../common_video/h265/h265_sps_parser.cc";
        uStack_b8 = 0x85a;
        pcVar13 = "Error in stream: invalid value, expected st_ref_pic_set.num_positive_pics to be";
        ppcStack_518 = &local_c0;
        local_520 = 
        "Error in stream: invalid value, expected st_ref_pic_set.num_positive_pics to be";
        ppcStack_560 = &local_520;
        local_b0 = &local_530;
        local_568 = " in range [";
        ppcStack_f8 = &local_568;
        local_100[0] = '\0';
        local_100[1] = '\0';
        local_100[2] = '\0';
        local_100[3] = '\0';
        local_100[4] = '\0';
        local_100[5] = '\0';
        local_100[6] = '\0';
        local_100[7] = '\0';
        puVar11 = &DAT_00223e13;
        uVar12 = 0x85a;
        uVar8 = uVar9;
        param_5 = uVar17;
        goto LAB_00887bf8;
      }
    }
    else {
      if (uVar8 != 0) {
        uVar10 = FUN_007d6508(param_6);
        uVar17 = (uint)uVar10;
        *(undefined1 *)(param_6 + 0xc) = 1;
        if (((uVar10 >> 0xf & 0x1ffff) != 0) || (*(int *)(param_6 + 8) < 0)) {
LAB_008876dc:
          uVar10 = FUN_004022fc();
          if ((uVar10 & 1) == 0) {
            local_c0 = "../../common_video/h265/h265_sps_parser.cc";
            uStack_b8 = 0x88a;
            pcVar13 = "Error in stream: invalid value, expected delta_poc_s0_minus1 to be";
            ppcStack_518 = &local_c0;
            local_520 = "Error in stream: invalid value, expected delta_poc_s0_minus1 to be";
            ppcStack_560 = &local_520;
            local_b0 = &local_530;
            local_568 = " in range [";
            ppcStack_f8 = &local_568;
            local_100[0] = '\0';
            local_100[1] = '\0';
            local_100[2] = '\0';
            local_100[3] = '\0';
            local_100[4] = '\0';
            local_100[5] = '\0';
            local_100[6] = '\0';
            local_100[7] = '\0';
            puVar11 = &DAT_00223e29;
            uVar12 = 0x88a;
            param_5 = 0x7fff;
            uVar8 = uVar17;
            goto LAB_00887bf8;
          }
          goto LAB_00887c00;
        }
        local_504[0] = ~uVar17;
        iVar7 = FUN_007d60c4(param_6);
        local_404[0] = (uint)(iVar7 != 0);
        if (uVar8 != 1) {
          puVar21 = &local_50c;
          uVar10 = 1;
          do {
            uVar14 = FUN_007d6508(param_6);
            uVar17 = (uint)uVar14;
            *(undefined1 *)(param_6 + 0xc) = 1;
            if (((uVar14 >> 0xf & 0x1ffff) != 0) || (*(int *)(param_6 + 8) < 0)) goto LAB_008876dc;
            if (0x3f < uVar10) goto LAB_00887ac0;
            puVar21[3] = puVar21[2] + ~uVar17;
            iVar7 = FUN_007d60c4(param_6);
            uVar10 = uVar10 + 1;
            puVar21[0x43] = (uint)(iVar7 != 0);
            puVar21 = puVar21 + 1;
            uVar9 = local_508;
          } while (uVar8 != uVar10);
        }
      }
      if (uVar9 == 0) {
        uVar8 = 0;
      }
      else {
        uVar10 = FUN_007d6508(param_6);
        uVar8 = (uint)uVar10;
        *(undefined1 *)(param_6 + 0xc) = 1;
        if (((uVar10 >> 0xf & 0x1ffff) != 0) || (*(int *)(param_6 + 8) < 0)) {
LAB_00887768:
          uVar10 = FUN_004022fc();
          if ((uVar10 & 1) == 0) {
            local_c0 = "../../common_video/h265/h265_sps_parser.cc";
            uStack_b8 = 0x902;
            pcVar13 = "Error in stream: invalid value, expected delta_poc_s1_minus1 to be";
            ppcStack_518 = &local_c0;
            local_520 = "Error in stream: invalid value, expected delta_poc_s1_minus1 to be";
            ppcStack_560 = &local_520;
            local_b0 = &local_530;
            local_568 = " in range [";
            ppcStack_f8 = &local_568;
            local_100[0] = '\0';
            local_100[1] = '\0';
            local_100[2] = '\0';
            local_100[3] = '\0';
            local_100[4] = '\0';
            local_100[5] = '\0';
            local_100[6] = '\0';
            local_100[7] = '\0';
            puVar11 = &DAT_00223e29;
            uVar12 = 0x902;
            param_5 = 0x7fff;
            goto LAB_00887bf8;
          }
          goto LAB_00887c00;
        }
        local_304[0] = uVar8 + 1;
        iVar7 = FUN_007d60c4(param_6);
        local_204[0] = (uint)(iVar7 != 0);
        uVar8 = 1;
        if (uVar9 != 1) {
          uVar10 = 1;
          puVar21 = local_304;
          do {
            uVar14 = FUN_007d6508(param_6);
            uVar8 = (uint)uVar14;
            *(undefined1 *)(param_6 + 0xc) = 1;
            if (((uVar14 >> 0xf & 0x1ffff) != 0) || (*(int *)(param_6 + 8) < 0)) goto LAB_00887768;
            if (0x3f < uVar10) goto LAB_00887ac0;
            puVar21[1] = uVar8 + *puVar21 + 1;
            iVar7 = FUN_007d60c4(param_6);
            uVar10 = uVar10 + 1;
            puVar21[0x41] = (uint)(iVar7 != 0);
            puVar21 = puVar21 + 1;
            uVar8 = local_508;
          } while (uVar9 != uVar10);
        }
      }
LAB_008877f8:
      *(undefined1 *)(param_6 + 0xc) = 1;
      local_104 = uVar8 + local_50c;
      if (-1 < *(int *)(param_6 + 8)) {
        memcpy(param_1,&local_50c,0x40c);
        param_1[0x40c] = 1;
        goto LAB_00887c08;
      }
    }
  }
  else {
    if (param_2 == param_3) {
      uVar8 = FUN_007d6508(param_6);
      *(undefined1 *)(param_6 + 0xc) = 1;
      if ((param_2 - 1U < uVar8) || (*(int *)(param_6 + 8) < 0)) {
        uVar10 = FUN_004022fc();
        if ((uVar10 & 1) == 0) {
          local_c0 = "../../common_video/h265/h265_sps_parser.cc";
          uStack_b8 = 0x572;
          pcVar13 = "Error in stream: invalid value, expected delta_idx_minus1 to be";
          ppcStack_518 = &local_c0;
          local_520 = "Error in stream: invalid value, expected delta_idx_minus1 to be";
          ppcStack_560 = &local_520;
          local_b0 = &local_530;
          local_568 = " in range [";
          ppcStack_f8 = &local_568;
          local_100[0] = '\0';
          local_100[1] = '\0';
          local_100[2] = '\0';
          local_100[3] = '\0';
          local_100[4] = '\0';
          local_100[5] = '\0';
          local_100[6] = '\0';
          local_100[7] = '\0';
          puVar11 = &DAT_00223e13;
          uVar12 = 0x572;
          param_5 = param_2 - 1U;
          goto LAB_00887bf8;
        }
        goto LAB_00887c00;
      }
    }
    else {
      uVar8 = 0;
    }
    iVar7 = FUN_007d5db0(param_6,1);
    uVar10 = FUN_007d6508(param_6);
    *(undefined1 *)(param_6 + 0xc) = 1;
    if (((uVar10 >> 0xf & 0x1ffff) != 0) || (*(int *)(param_6 + 8) < 0)) {
      uVar14 = FUN_004022fc();
      if ((uVar14 & 1) == 0) {
        local_c0 = "../../common_video/h265/h265_sps_parser.cc";
        uStack_b8 = 0x5a2;
        ppcStack_518 = &local_c0;
        local_520 = "Error in stream: invalid value, expected abs_delta_rps_minus1 to be";
        ppcStack_560 = &local_520;
        local_b0 = &local_530;
        local_568 = " in range [";
        ppcStack_f8 = &local_568;
        local_100[0] = '\0';
        local_100[1] = '\0';
        local_100[2] = '\0';
        local_100[3] = '\0';
        local_100[4] = '\0';
        local_100[5] = '\0';
        local_100[6] = '\0';
        local_100[7] = '\0';
        FUN_00623bb0(&DAT_00223e29,"../../common_video/h265/h265_sps_parser.cc",0x5a2,
                     "Error in stream: invalid value, expected abs_delta_rps_minus1 to be",
                     " in range [",0,&DAT_001ca603,0x7fff,&DAT_0019fa9e," found ",(int)uVar10,
                     " instead");
      }
      *param_1 = 0;
      param_1[0x40c] = 0;
      goto LAB_00887c08;
    }
    uVar15 = (param_4[1] - *param_4 >> 2) * 0x2f71aaff02f71ab;
    uVar14 = (ulong)(param_2 + ~uVar8);
    if (uVar15 < uVar14 || uVar15 - uVar14 == 0) {
LAB_00887c3c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                );
    }
    uVar8 = *(uint *)(*param_4 + uVar14 * 0x40c + 0x408);
    if (0x40 < uVar8) {
      uVar10 = FUN_004022fc();
      if ((uVar10 & 1) == 0) {
        local_c0 = "../../common_video/h265/h265_sps_parser.cc";
        uStack_b8 = 0x5ca;
        pcVar13 = "Error in stream: invalid value, expected num_delta_pocs to be";
        ppcStack_518 = &local_c0;
        local_520 = "Error in stream: invalid value, expected num_delta_pocs to be";
        ppcStack_560 = &local_520;
        local_b0 = &local_530;
        local_568 = " in range [";
        ppcStack_f8 = &local_568;
        local_100[0] = '\0';
        local_100[1] = '\0';
        local_100[2] = '\0';
        local_100[3] = '\0';
        local_100[4] = '\0';
        local_100[5] = '\0';
        local_100[6] = '\0';
        local_100[7] = '\0';
        puVar11 = &DAT_00223e13;
        uVar12 = 0x5ca;
        param_5 = 0x40;
        goto LAB_00887bf8;
      }
      goto LAB_00887c00;
    }
    uVar15 = (param_4[1] - *param_4 >> 2) * 0x2f71aaff02f71ab;
    if (uVar15 < uVar14 || uVar15 - uVar14 == 0) goto LAB_00887c3c;
    iVar2 = (int)uVar10 + 1;
    lVar19 = 0;
    puVar21 = (uint *)(*param_4 + uVar14 * 0x40c);
    uVar17 = iVar2 + iVar7 * iVar2 * -2;
    ppcStack_f8 = (char **)0x101010101010101;
    builtin_strncpy(local_100,"\x01\x01\x01\x01\x01\x01\x01\x01",8);
    uStack_e8 = 0x101010101010101;
    uStack_f0 = 0x101010101010101;
    uStack_d8 = 0x101010101010101;
    local_e0 = 0x101010101010101;
    uStack_c8 = 0x101010101010101;
    uStack_d0 = 0x101010101010101;
    uStack_b8 = 0;
    local_c0 = (char *)0x0;
    uStack_a8 = 0;
    local_b0 = (char **)0x0;
    uStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    do {
      iVar7 = FUN_007d60c4(param_6);
      if (lVar19 == 0x40) goto LAB_00887ac0;
      *(bool *)((long)&local_c0 + lVar19) = iVar7 != 0;
      if (iVar7 == 0) {
        iVar7 = FUN_007d60c4(param_6);
        local_100[lVar19] = iVar7 != 0;
      }
      lVar19 = lVar19 + 1;
    } while ((ulong)uVar8 + 1 != lVar19);
    *(undefined1 *)(param_6 + 0xc) = 1;
    if (-1 < *(int *)(param_6 + 8)) {
      uVar8 = *puVar21;
      uVar10 = (ulong)uVar8;
      uVar9 = puVar21[1];
      if (uVar8 + uVar9 < 0x41) {
        uVar20 = 0;
        uVar18 = uVar9 - 1;
        if (-1 < (int)uVar18) {
          lVar19 = (ulong)uVar18 << 2;
          uVar16 = uVar9 + uVar8;
          do {
            uVar16 = uVar16 - 1;
            if (0x3f < uVar18) goto LAB_00887ac0;
            uVar3 = *(int *)((long)puVar21 + lVar19 + 0x208) + uVar17;
            if ((int)uVar3 < 0) {
              if (0x3f < uVar16) goto LAB_00887ac0;
              if (local_100[uVar16] == '\x01') {
                if (0x3f < uVar20) goto LAB_00887ac0;
                local_504[uVar20] = uVar3;
                local_404[uVar20] = (uint)*(byte *)((long)&local_c0 + (ulong)uVar16);
                uVar20 = uVar20 + 1;
              }
            }
            lVar19 = lVar19 + -4;
          } while (lVar19 != -4);
        }
        uVar18 = uVar20;
        if ((int)uVar17 < 0) {
          uVar16 = puVar21[0x102];
          if (0x3f < uVar16) goto LAB_00887ac0;
          if (local_100[uVar16] == '\x01') {
            if (0x3f < uVar20) goto LAB_00887ac0;
            bVar4 = *(byte *)((long)&local_c0 + (ulong)uVar16);
            uVar18 = uVar20 + 1;
            local_504[uVar20] = uVar17;
            local_404[uVar20] = (uint)bVar4;
          }
        }
        if (uVar8 == 0) {
          uVar20 = 0;
          local_50c = uVar18;
        }
        else {
          uVar14 = 0;
          do {
            if (uVar14 == 0x40) goto LAB_00887ac0;
            if (((int)(puVar21[uVar14 + 2] + uVar17) < 0) && (local_100[uVar14] == '\x01')) {
              if (0x3f < uVar18) goto LAB_00887ac0;
              local_504[uVar18] = puVar21[uVar14 + 2] + uVar17;
              local_404[uVar18] = (uint)*(byte *)((long)&local_c0 + uVar14);
              uVar18 = uVar18 + 1;
            }
            uVar14 = uVar14 + 1;
          } while (uVar10 != uVar14);
          uVar20 = 0;
          uVar14 = uVar10;
          uVar16 = uVar20;
          local_50c = uVar18;
          if (0 < (int)uVar8) {
            do {
              uVar8 = (puVar21 + 1)[uVar14] + uVar17;
              uVar20 = uVar16;
              if ((0 < (int)uVar8) && (*(char *)((long)&local_104 + uVar14 + 3) == '\x01')) {
                if (0x3f < uVar16) goto LAB_00887ac0;
                local_304[uVar16] = uVar8;
                uVar20 = uVar16 + 1;
                local_204[uVar16] = (uint)*(byte *)((long)&uStack_c8 + uVar14 + 7);
              }
              bVar1 = 1 < uVar14;
              uVar14 = uVar14 - 1;
              uVar16 = uVar20;
            } while (bVar1);
          }
        }
        uVar18 = local_50c;
        uVar8 = uVar20;
        if (0 < (int)uVar17) {
          uVar16 = puVar21[0x102];
          if (0x3f < uVar16) {
LAB_00887ac0:
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(0x5512,0x887ac4);
            (*pcVar6)();
          }
          if (local_100[uVar16] == '\x01') {
            if (0x3f < uVar20) goto LAB_00887ac0;
            bVar4 = *(byte *)((long)&local_c0 + (ulong)uVar16);
            uVar8 = uVar20 + 1;
            local_304[uVar20] = uVar17;
            local_204[uVar20] = (uint)bVar4;
          }
        }
        if (uVar9 != 0) {
          lVar19 = 0;
          uVar20 = uVar8;
          do {
            if (lVar19 == 0x100) goto LAB_00887ac0;
            uVar16 = *(int *)((long)puVar21 + lVar19 + 0x208) + uVar17;
            uVar8 = uVar20;
            if (0 < (int)uVar16) {
              if (0x3f < (uint)uVar10) goto LAB_00887ac0;
              if (local_100[uVar10] == '\x01') {
                if (0x3f < uVar20) goto LAB_00887ac0;
                local_304[uVar20] = uVar16;
                uVar8 = uVar20 + 1;
                local_204[uVar20] = (uint)*(byte *)((long)&local_c0 + uVar10);
              }
            }
            lVar19 = lVar19 + 4;
            uVar10 = (ulong)((uint)uVar10 + 1);
            uVar20 = uVar8;
          } while ((ulong)uVar9 * 4 - lVar19 != 0);
        }
        *(undefined1 *)(param_6 + 0xc) = 1;
        uVar17 = param_5 - local_50c;
        local_508 = uVar8;
        if (param_5 < local_50c) {
          uVar10 = FUN_004022fc();
          if ((uVar10 & 1) == 0) {
            local_568 = "../../common_video/h265/h265_sps_parser.cc";
            ppcStack_560 = (char **)0x7ea;
            pcVar13 = 
            "Error in stream: invalid value, expected st_ref_pic_set.num_negative_pics to be";
            ppcStack_538 = &local_568;
            local_540 = 
            "Error in stream: invalid value, expected st_ref_pic_set.num_negative_pics to be";
            ppcStack_528 = &local_540;
            local_558 = &pcStack_550;
            local_530 = " in range [";
            ppcStack_518 = &local_530;
            local_520 = (char *)0x0;
            puVar11 = &DAT_00223e13;
            uVar12 = 0x7ea;
            uVar8 = uVar18;
            goto LAB_00887bf8;
          }
        }
        else {
          if (uVar8 <= uVar17) goto LAB_008877f8;
          uVar10 = FUN_004022fc();
          if ((uVar10 & 1) == 0) {
            local_568 = "../../common_video/h265/h265_sps_parser.cc";
            ppcStack_560 = (char **)0x802;
            pcVar13 = 
            "Error in stream: invalid value, expected st_ref_pic_set.num_positive_pics to be";
            ppcStack_538 = &local_568;
            local_540 = 
            "Error in stream: invalid value, expected st_ref_pic_set.num_positive_pics to be";
            ppcStack_528 = &local_540;
            local_558 = &pcStack_550;
            local_530 = " in range [";
            ppcStack_518 = &local_530;
            local_520 = (char *)0x0;
            puVar11 = &DAT_00223e13;
            uVar12 = 0x802;
            param_5 = uVar17;
            goto LAB_00887bf8;
          }
        }
        goto LAB_00887c00;
      }
    }
    uVar10 = FUN_004022fc();
    if ((uVar10 & 1) == 0) {
      local_568 = "../../common_video/h265/h265_sps_parser.cc";
      ppcStack_560 = (char **)0x67a;
      local_548 = &local_568;
      ppcStack_538 = &pcStack_550;
      local_540 = " in range [";
      ppcStack_528 = &local_540;
      local_558 = (char **)&uStack_569;
      pcVar13 = 
      "Error in stream: invalid value, expected ref_set.num_negative_pics + ref_set.num_positive_pics to be"
      ;
      local_530 = (char *)0x0;
      ppcStack_518 = &local_530;
      pcStack_550 = 
      "Error in stream: invalid value, expected ref_set.num_negative_pics + ref_set.num_positive_pics to be"
      ;
      puVar11 = &DAT_00223e13;
      local_520 = ":";
      uVar12 = 0x67a;
      uVar8 = puVar21[1] + *puVar21;
      param_5 = 0x40;
LAB_00887bf8:
      FUN_00623bb0(puVar11,"../../common_video/h265/h265_sps_parser.cc",uVar12,pcVar13," in range ["
                   ,0,&DAT_001ca603,param_5,&DAT_0019fa9e," found ",uVar8," instead");
    }
  }
LAB_00887c00:
  *param_1 = 0;
  param_1[0x40c] = 0;
LAB_00887c08:
  if (*(long *)(lVar5 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00887c54  FUN_00887c54 =====

void FUN_00887c54(uint *param_1,ulong param_2,uint param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong local_c8;
  ulong local_c0;
  undefined1 uStack_b1;
  char *local_b0;
  undefined8 *puStack_a8;
  char *local_a0;
  char **ppcStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  bool local_78 [8];
  char **local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((param_2 & 1) != 0) {
    iVar5 = FUN_007d5db0(param_4,2);
    *(undefined1 *)(param_4 + 0xc) = 1;
    if ((iVar5 == 0) && (-1 < *(int *)(param_4 + 8))) {
      FUN_007d6120(param_4,1);
      uVar6 = FUN_007d5db0(param_4,5);
      *(undefined1 *)(param_4 + 0xc) = 1;
      if ((uVar6 < 0xc) && (-1 < *(int *)(param_4 + 8))) {
        iVar5 = FUN_007d5db0(param_4,0x10);
        uVar7 = FUN_007d5db0(param_4,0x10);
        lVar9 = FUN_007d5db0(param_4,1);
        lVar10 = FUN_007d5db0(param_4,1);
        *(undefined1 *)(param_4 + 0xc) = 1;
        if ((lVar9 != 0 || lVar10 == 0) && (-1 < *(int *)(param_4 + 8))) {
          bVar4 = lVar10 != 0;
          uVar7 = uVar7 & 0xffff | iVar5 << 0x10;
          lVar10 = FUN_007d5db0(param_4,1);
          local_c0 = (ulong)CONCAT14(lVar9 != 0,(uint)(lVar10 != 0));
          lVar9 = FUN_007d5db0(param_4,1);
          FUN_007d6120(param_4,7);
          lVar10 = FUN_007d5db0(param_4,1);
          local_c8 = (ulong)CONCAT14(lVar9 != 0,(uint)(lVar10 != 0));
          FUN_007d6120(param_4,0x23);
          FUN_007d6120(param_4,1);
          goto LAB_00887dd8;
        }
        uVar11 = FUN_004022fc();
        if ((uVar11 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../common_video/h265/h265_sps_parser.cc",0xa6a,
                       "Interlaced streams not supported");
        }
      }
      else {
        uVar11 = FUN_004022fc();
        if ((uVar11 & 1) == 0) {
          local_90 = "../../common_video/h265/h265_sps_parser.cc";
          uStack_88 = 0xa1a;
          puStack_a8 = &local_90;
          local_b0 = 
          "Error in stream: invalid value, expected pf_tier_level.general_profile_idc to be";
          ppcStack_98 = &local_b0;
          local_80 = &uStack_b1;
          local_a0 = " in range [";
          local_70 = &local_a0;
          local_78[0] = false;
          local_78[1] = false;
          local_78[2] = false;
          local_78[3] = false;
          local_78[4] = false;
          local_78[5] = false;
          local_78[6] = false;
          local_78[7] = false;
          FUN_00623bb0(&DAT_00223e29,"../../common_video/h265/h265_sps_parser.cc",0xa1a,
                       "Error in stream: invalid value, expected pf_tier_level.general_profile_idc to be"
                       ," in range [",0,&DAT_001ca603,0xb,&DAT_0019fa9e," found ",uVar6," instead");
        }
      }
    }
    else {
      uVar11 = FUN_004022fc();
      if ((uVar11 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4ed3,"../../common_video/h265/h265_sps_parser.cc",0x9fa,
                     "Error in stream: invalid value, expected ","general_profile_space == 0");
      }
    }
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 5) = 0;
    goto LAB_0088819c;
  }
  local_c8 = 0;
  local_c0 = 0;
  uVar7 = 0;
  uVar6 = 0;
  bVar4 = false;
LAB_00887dd8:
  uVar8 = FUN_007d5db0(param_4,8);
  local_90 = (char *)0x0;
  local_78[0] = false;
  local_78[1] = false;
  local_78[2] = false;
  local_78[3] = false;
  local_78[4] = false;
  local_78[5] = false;
  local_78[6] = false;
  local_78[7] = false;
  if (0 < (int)param_3) {
    lVar9 = FUN_007d5db0(param_4,1);
    local_90 = (char *)CONCAT71(local_90._1_7_,lVar9 != 0);
    lVar9 = FUN_007d5db0(param_4,1);
    local_78[0] = lVar9 != 0;
    if (param_3 == 1) {
LAB_00887f80:
      iVar5 = param_3 - 8;
      do {
        FUN_007d6120(param_4,2);
        bVar3 = iVar5 != -1;
        iVar5 = iVar5 + 1;
      } while (bVar3);
    }
    else {
      lVar9 = FUN_007d5db0(param_4,1);
      local_90._0_2_ = CONCAT11(lVar9 != 0,(undefined1)local_90);
      lVar9 = FUN_007d5db0(param_4,1);
      local_78[1] = lVar9 != 0;
      if (param_3 == 2) goto LAB_00887f80;
      lVar9 = FUN_007d5db0(param_4,1);
      local_90._0_3_ = CONCAT12(lVar9 != 0,(undefined2)local_90);
      lVar9 = FUN_007d5db0(param_4,1);
      local_78[2] = lVar9 != 0;
      if (param_3 == 3) goto LAB_00887f80;
      lVar9 = FUN_007d5db0(param_4,1);
      local_90._0_4_ = CONCAT13(lVar9 != 0,(undefined3)local_90);
      lVar9 = FUN_007d5db0(param_4,1);
      local_78[3] = lVar9 != 0;
      if (param_3 == 4) goto LAB_00887f80;
      lVar9 = FUN_007d5db0(param_4,1);
      local_90._0_5_ = CONCAT14(lVar9 != 0,(undefined4)local_90);
      lVar9 = FUN_007d5db0(param_4,1);
      local_78[4] = lVar9 != 0;
      if (param_3 == 5) goto LAB_00887f80;
      lVar9 = FUN_007d5db0(param_4,1);
      local_90._0_6_ = CONCAT15(lVar9 != 0,(undefined5)local_90);
      lVar9 = FUN_007d5db0(param_4,1);
      local_78[5] = lVar9 != 0;
      if (param_3 == 6) goto LAB_00887f80;
      lVar9 = FUN_007d5db0(param_4,1);
      local_90._0_7_ = CONCAT16(lVar9 != 0,(undefined6)local_90);
      lVar9 = FUN_007d5db0(param_4,1);
      local_78[6] = lVar9 != 0;
      if (param_3 == 7) goto LAB_00887f80;
      lVar9 = FUN_007d5db0(param_4,1);
      local_90 = (char *)CONCAT17(lVar9 != 0,(undefined7)local_90);
      lVar9 = FUN_007d5db0(param_4,1);
      local_78[7] = lVar9 != 0;
      if (param_3 != 8) {
        FUN_007d5db0(param_4,1);
LAB_00888214:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(0x5512,0x888218);
        (*pcVar2)();
      }
    }
    uVar11 = 0;
    do {
      if (uVar11 == 8) goto LAB_00888214;
      if (*(char *)((long)&local_90 + uVar11) == '\x01') {
        FUN_007d6120(param_4,2);
        FUN_007d6120(param_4,1);
        FUN_007d6120(param_4,5);
        FUN_007d6120(param_4,0x20);
        FUN_007d6120(param_4,2);
        FUN_007d6120(param_4,2);
        FUN_007d6120(param_4,0x2b);
        FUN_007d6120(param_4,1);
      }
      if (local_78[uVar11] == true) {
        FUN_007d6120(param_4,8);
      }
      uVar11 = uVar11 + 1;
    } while (param_3 != uVar11);
  }
  *(undefined1 *)(param_4 + 0xc) = 1;
  bVar3 = *(int *)(param_4 + 8) < 0;
  if (bVar3) {
    *(undefined1 *)param_1 = 0;
  }
  else {
    *param_1 = uVar6;
    param_1[1] = uVar8;
    param_1[2] = uVar7;
    *(char *)(param_1 + 3) = (char)(local_c0 >> 0x20);
    *(bool *)((long)param_1 + 0xd) = bVar4;
    *(char *)((long)param_1 + 0xf) = (char)(local_c8 >> 0x20);
    *(char *)((long)param_1 + 0xe) = (char)local_c0;
    *(char *)(param_1 + 4) = (char)local_c8;
    *(undefined2 *)((long)param_1 + 0x11) = 0xaaaa;
    *(undefined1 *)((long)param_1 + 0x13) = 0xaa;
  }
  *(bool *)(param_1 + 5) = !bVar3;
LAB_0088819c:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0088821c  FUN_0088821c =====

void FUN_0088821c(undefined8 *param_1,ulong param_2)

{
  size_t sVar1;
  bool bVar2;
  void *pvVar3;
  ulong uVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  void *pvVar8;
  size_t __n;
  long lVar9;
  
  pvVar8 = (void *)*param_1;
  pvVar3 = (void *)param_1[1];
  __n = (long)pvVar3 - (long)pvVar8;
  bVar2 = param_2 < (ulong)(((long)__n >> 2) * 0x2f71aaff02f71ab);
  lVar9 = param_2 + ((long)__n >> 2) * -0x2f71aaff02f71ab;
  if (bVar2 || lVar9 == 0) {
    if (bVar2) {
      pvVar5 = (void *)((long)pvVar8 + param_2 * 0x40c);
      uVar4 = (ulong)(((long)pvVar5 - (long)pvVar3) * 0x3d08e5500fd08e55) >> 2;
      uVar7 = (long)pvVar3 * -0x3d08e5500fd08e55 - 4U >> 2;
      if (uVar7 <= uVar4) {
        uVar4 = uVar7;
      }
      if ((1 < uVar4) && ((((int)pvVar8 - (int)pvVar3 | -(int)pvVar3) & 3U) == 0)) {
        uVar4 = uVar4 & 0x3ffffffffffffffe;
        pvVar3 = (void *)((long)pvVar3 + uVar4 * -0x40c);
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      while (pvVar3 != pvVar5) {
        pvVar3 = (void *)((long)pvVar3 + -0x40c);
        if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      param_1[1] = pvVar5;
    }
  }
  else {
    lVar6 = param_1[2] - (long)pvVar8 >> 2;
    uVar4 = lVar6 * 0x2f71aaff02f71ab;
    if (uVar4 < param_2) {
      if (param_2 < 0x3f42395403f424) {
        uVar7 = lVar6 * 0x5ee355fe05ee356;
        if (uVar7 < param_2 || uVar7 - param_2 == 0) {
          uVar7 = param_2;
        }
        if (0x1fa11caa01fa10 < uVar4) {
          uVar7 = 0x3f42395403f423;
        }
        if (uVar7 < 0x3f42395403f424) {
          pvVar3 = operator_new(uVar7 * 0x40c);
          lVar9 = lVar9 * 0x40c;
          sVar1 = __n;
          if (lVar9 != 0) {
            sVar1 = lVar9 + __n;
            pvVar5 = (void *)((long)pvVar3 + __n);
            do {
              if (pvVar5 == (void *)0x0) goto LAB_00888460;
              memset(pvVar5,0,0x40c);
              lVar9 = lVar9 + -0x40c;
              pvVar5 = (void *)((long)pvVar5 + 0x40c);
            } while (lVar9 != 0);
          }
          memcpy(pvVar3,pvVar8,__n);
          *param_1 = pvVar3;
          param_1[1] = (long)pvVar3 + sVar1;
          param_1[2] = (void *)((long)pvVar3 + uVar7 * 0x40c);
          if (pvVar8 == (void *)0x0) {
            return;
          }
          operator_delete(pvVar8);
          return;
        }
      }
      else {
        FUN_00883b74();
      }
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    lVar9 = lVar9 * 0x40c;
    pvVar8 = pvVar3;
    if (lVar9 != 0) {
      pvVar8 = (void *)((long)pvVar3 + lVar9);
      do {
        if (pvVar3 == (void *)0x0) {
LAB_00888460:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        memset(pvVar3,0,0x40c);
        lVar9 = lVar9 + -0x40c;
        pvVar3 = (void *)((long)pvVar3 + 0x40c);
      } while (lVar9 != 0);
    }
    param_1[1] = pvVar8;
  }
  return;
}


// ===== 0088847c  FUN_0088847c =====

void FUN_0088847c(undefined8 *param_1,ulong param_2,undefined4 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  void *__src;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  void *__dest;
  size_t __n;
  ulong uVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  ulong uVar13;
  
  __src = (void *)*param_1;
  puVar5 = (undefined4 *)param_1[1];
  __n = (long)puVar5 - (long)__src;
  uVar13 = (long)__n >> 2;
  uVar6 = param_2 - uVar13;
  iVar11 = (int)puVar5;
  if (param_2 < uVar13 || uVar6 == 0) {
    if (param_2 < uVar13) {
      puVar10 = (undefined4 *)((long)__src + param_2 * 4);
      uVar6 = (ulong)(((long)puVar10 - (long)puVar5 << 0x3e) - ((long)puVar10 - (long)puVar5)) >> 2;
      uVar13 = (ulong)((long)puVar5 + (-4 - ((long)puVar5 << 0x3e))) >> 2;
      if (uVar13 <= uVar6) {
        uVar6 = uVar13;
      }
      if ((1 < uVar6) && ((((int)__src - iVar11 | -iVar11) & 3U) == 0)) {
        uVar6 = uVar6 & 0x3ffffffffffffffe;
        puVar5 = puVar5 + -uVar6;
        do {
          uVar6 = uVar6 - 2;
        } while (uVar6 != 0);
      }
      while (puVar5 != puVar10) {
        puVar5 = puVar5 + -1;
        if (puVar5 == (undefined4 *)0x0) {
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
    uVar9 = param_1[2] - (long)__src;
    if ((ulong)((long)uVar9 >> 2) < param_2) {
      if (param_2 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005da79c();
      }
      uVar1 = (long)uVar9 >> 1;
      if ((ulong)((long)uVar9 >> 1) <= param_2) {
        uVar1 = param_2;
      }
      if (0x7ffffffffffffffb < uVar9) {
        uVar1 = 0x3fffffffffffffff;
      }
      if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      pvVar4 = operator_new(uVar1 * 4);
      if (uVar6 * 4 == 0) {
        puVar10 = (undefined4 *)((long)pvVar4 + __n);
      }
      else {
        puVar10 = (undefined4 *)((long)pvVar4 + uVar6 * 4 + __n);
        uVar6 = (ulong)((long)__src + (-(long)pvVar4 - (long)puVar5)) >> 2;
        uVar9 = (param_2 * 4 - __n) - 4 >> 2;
        if (uVar9 <= uVar6) {
          uVar6 = uVar9;
        }
        uVar3 = *param_3;
        if (uVar6 < 8) {
          puVar5 = (undefined4 *)((long)pvVar4 + __n);
        }
        else {
          puVar5 = (undefined4 *)((long)pvVar4 + __n);
          if ((((int)__src - iVar11) - (int)pvVar4 & 3U) == 0) {
            uVar9 = uVar6 + 1 & 7;
            uVar2 = 8;
            if (uVar9 != 0) {
              uVar2 = uVar9;
            }
            lVar8 = (uVar6 + 1) - uVar2;
            puVar7 = (undefined8 *)((long)pvVar4 + __n + 0x10);
            puVar5 = (undefined4 *)((long)pvVar4 + lVar8 * 4 + __n);
            do {
              lVar8 = lVar8 + -8;
              puVar7[-1] = CONCAT44(uVar3,uVar3);
              puVar7[-2] = CONCAT44(uVar3,uVar3);
              puVar7[1] = CONCAT44(uVar3,uVar3);
              *puVar7 = CONCAT44(uVar3,uVar3);
              puVar7 = puVar7 + 4;
            } while (lVar8 != 0);
          }
        }
        do {
          if (puVar5 == (undefined4 *)0x0) {
LAB_00888774:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          puVar12 = puVar5 + 1;
          *puVar5 = uVar3;
          puVar5 = puVar12;
        } while (puVar12 != puVar10);
      }
      __dest = (void *)((long)pvVar4 + uVar13 * -4 + __n);
      memcpy(__dest,__src,__n);
      *param_1 = __dest;
      param_1[1] = puVar10;
      param_1[2] = (void *)((long)pvVar4 + uVar1 * 4);
      if (__src != (void *)0x0) {
        operator_delete(__src);
        return;
      }
    }
    else {
      puVar10 = puVar5;
      if ((uVar6 & 0x3fffffffffffffff) != 0) {
        puVar10 = puVar5 + uVar6;
        uVar13 = (param_2 * 4 - __n) - 4 >> 2;
        uVar6 = (ulong)-(long)puVar5 >> 2;
        if (uVar13 <= (ulong)-(long)puVar5 >> 2) {
          uVar6 = uVar13;
        }
        if (0x33 < uVar6) {
          uVar9 = (ulong)-(long)puVar5 >> 2;
          if (uVar13 <= uVar9) {
            uVar9 = uVar13;
          }
          if (((-(long)puVar5 & 3U) == 0) && (puVar5 <= puVar5 + uVar9)) {
            uVar9 = (ulong)-(long)puVar5 >> 2;
            if (uVar13 <= (ulong)-(long)puVar5 >> 2) {
              uVar9 = uVar13;
            }
            if ((puVar5 + uVar9 + 1 <= param_3) || (param_3 + 1 <= puVar5)) {
              uVar3 = *param_3;
              uVar13 = uVar6 + 1 & 7;
              uVar9 = 8;
              if (uVar13 != 0) {
                uVar9 = uVar13;
              }
              puVar7 = (undefined8 *)(puVar5 + 4);
              lVar8 = (uVar6 + 1) - uVar9;
              puVar5 = puVar5 + lVar8;
              do {
                lVar8 = lVar8 + -8;
                puVar7[-1] = CONCAT44(uVar3,uVar3);
                puVar7[-2] = CONCAT44(uVar3,uVar3);
                puVar7[1] = CONCAT44(uVar3,uVar3);
                *puVar7 = CONCAT44(uVar3,uVar3);
                puVar7 = puVar7 + 4;
              } while (lVar8 != 0);
            }
          }
        }
        do {
          if (puVar5 == (undefined4 *)0x0) goto LAB_00888774;
          puVar12 = puVar5 + 1;
          *puVar5 = *param_3;
          puVar5 = puVar12;
        } while (puVar12 != puVar10);
      }
      param_1[1] = puVar10;
    }
  }
  return;
}


// ===== 00888790  FUN_00888790 =====

void FUN_00888790(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar7 = param_3[4];
  uVar6 = param_3[7];
  uVar5 = param_3[6];
  uVar9 = param_3[1];
  uVar8 = *param_3;
  uVar11 = param_3[3];
  uVar10 = param_3[2];
  param_1[5] = param_3[5];
  param_1[4] = uVar7;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  param_1[1] = uVar9;
  *param_1 = uVar8;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  uVar2 = *(undefined4 *)(param_3 + 8);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 8) = uVar2;
  pvVar1 = (void *)param_3[9];
  uVar3 = param_3[10] - (long)pvVar1;
  if (uVar3 != 0) {
    if (0x3f42395403f423 < (ulong)(((long)uVar3 >> 2) * 0x2f71aaff02f71ab)) {
      FUN_00883b74();
      goto LAB_0088889c;
    }
    pvVar4 = operator_new(uVar3);
    param_1[9] = pvVar4;
    param_1[10] = pvVar4;
    param_1[0xb] = (long)pvVar4 + uVar3;
    memcpy(pvVar4,pvVar1,uVar3);
    param_1[10] = (long)pvVar4 + uVar3;
  }
  uVar5 = param_3[0xc];
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = uVar5;
  param_1[0xd] = 0;
  pvVar1 = (void *)param_3[0xd];
  uVar3 = param_3[0xe] - (long)pvVar1;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) {
LAB_0088889c:
                    /* WARNING: Subroutine does not return */
      FUN_005da79c();
    }
    pvVar4 = operator_new(uVar3);
    param_1[0xd] = pvVar4;
    param_1[0xe] = pvVar4;
    param_1[0xf] = (long)pvVar4 + uVar3;
    memcpy(pvVar4,pvVar1,uVar3);
    param_1[0xe] = (long)pvVar4 + uVar3;
  }
  uVar7 = param_3[0x10];
  uVar6 = param_3[0x13];
  uVar5 = param_3[0x12];
  param_1[0x11] = param_3[0x11];
  param_1[0x10] = uVar7;
  param_1[0x13] = uVar6;
  param_1[0x12] = uVar5;
  *(undefined1 *)(param_1 + 0x14) = 1;
  return;
}


// ===== 008888a0  FUN_008888a0 =====

void FUN_008888a0(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 008888ac  FUN_008888ac =====

ulong FUN_008888ac(void)

{
  int iVar1;
  ulong uVar2;
  void *local_48;
  void *local_40;
  void *local_30;
  undefined8 local_28;
  
  thunk_FUN_0087b608(&local_48);
  uVar2 = (long)local_40 - (long)local_48;
  local_30 = (void *)0x0;
  if (uVar2 != 0) {
    local_30 = local_48;
  }
  local_28 = 0xaaaaaa01aaaaaaaa;
  if ((uVar2 >> 0x1c & 0x1ffffffff) == 0) {
    local_28 = CONCAT44(0xaaaaaa01,(int)uVar2 * 8);
    uVar2 = FUN_007d5db0(&local_30,4);
    iVar1 = (int)local_28;
    if (local_48 != (void *)0x0) {
      if ((long)local_40 - 1U < (ulong)((long)local_40 - (long)local_48)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      local_40 = local_48;
      operator_delete(local_48);
    }
    uVar2 = uVar2 & 0xffffffff | 0x100000000;
    if (iVar1 == -1 || iVar1 + 1 < 0 != SCARRY4(iVar1,1)) {
      uVar2 = 0;
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../rtc_base/numerics/safe_conversions.h",0x24,
               "IsValueInRangeForNumericType<Dst>(value)",&DAT_001f5fa0);
}


// ===== 0088898c  FUN_0088898c =====

void FUN_0088898c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  void *local_38;
  void *local_30;
  
  thunk_FUN_0087b608(&local_38);
  pvVar1 = (void *)0x0;
  if ((long)local_30 - (long)local_38 != 0) {
    pvVar1 = local_38;
  }
  FUN_00888a1c(param_1,pvVar1,(long)local_30 - (long)local_38,param_4);
  if (local_38 != (void *)0x0) {
    if ((long)local_30 - 1U < (ulong)((long)local_30 - (long)local_38)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    local_30 = local_38;
    operator_delete(local_38);
  }
  return;
}


// ===== 00888a1c  FUN_00888a1c =====

void FUN_00888a1c(undefined8 *param_1,undefined8 param_2,ulong param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined1 *puVar9;
  ulong uVar10;
  char **ppcVar11;
  undefined1 **ppuVar12;
  undefined1 uStack_199;
  char *local_198;
  char **ppcStack_190;
  undefined1 *local_188;
  char *pcStack_180;
  char **local_178;
  char *local_170;
  undefined1 *puStack_168;
  char **local_160;
  undefined1 *puStack_158;
  undefined1 *puStack_150;
  undefined1 *puStack_148;
  undefined1 *local_140;
  undefined1 *puStack_138;
  undefined1 *puStack_130;
  undefined1 *puStack_128;
  undefined4 local_120;
  char *local_110;
  char **ppcStack_108;
  undefined1 *local_100;
  char **ppcStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined1 *puStack_bc;
  char *local_b0;
  char **ppcStack_a8;
  undefined1 local_a0;
  undefined1 uStack_9f;
  undefined1 uStack_9e;
  undefined1 uStack_9d;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  undefined1 uStack_8c;
  undefined1 uStack_8b;
  undefined1 uStack_8a;
  undefined1 uStack_89;
  undefined8 local_88;
  int local_80;
  undefined8 local_70;
  undefined8 local_68;
  
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = param_2;
  if ((param_3 >> 0x1c & 0x1ffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../rtc_base/numerics/safe_conversions.h",0x24,
                 "IsValueInRangeForNumericType<Dst>(value)",&DAT_001f5fa0);
  }
  local_88 = 0;
  local_68 = (undefined1 *)CONCAT44(0xaaaaaa01,(int)(param_3 << 3));
  uStack_9d = 0xaa;
  uStack_89 = 0xaa;
  local_a0 = 0;
  uStack_9f = 0;
  uStack_9e = 0;
  local_80 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_8b = 0;
  uStack_8a = 0;
  if ((param_4 == 0) ||
     (uVar5 = FUN_00889730(&local_70,&local_88,(long)&local_88 + 4), (uVar5 & 1) == 0))
  goto LAB_00888e38;
  iVar2 = FUN_007d60c4(&local_70);
  local_a0 = iVar2 != 0;
  iVar2 = FUN_007d60c4(&local_70);
  uStack_9e = iVar2 != 0;
  uVar3 = FUN_007d5db0(&local_70,3);
  local_68._0_5_ = CONCAT14(1,(uint)local_68);
  uStack_9c = uVar3;
  if ((2 < uVar3) || ((int)(uint)local_68 < 0)) {
    uVar5 = FUN_004022fc();
    if ((uVar5 & 1) != 0) goto LAB_00888e38;
    local_170 = "../../common_video/h265/h265_pps_parser.cc";
    puStack_168 = (undefined1 *)0x38a;
    pcVar8 = "Error in stream: invalid value, expected pps.num_extra_slice_header_bits to be";
    ppcStack_a8 = &local_170;
    local_b0 = "Error in stream: invalid value, expected pps.num_extra_slice_header_bits to be";
    ppcStack_190 = &local_b0;
    local_160 = &local_110;
    local_198 = " in range [";
    ppcStack_f8 = &local_198;
    local_100 = (undefined1 *)0x0;
    puVar6 = &DAT_00223e08;
    uVar7 = 0x38a;
    iVar2 = 2;
    goto LAB_00888e30;
  }
  FUN_007d6120(&local_70,1);
  iVar2 = FUN_007d60c4(&local_70);
  uStack_9f = iVar2 != 0;
  uVar3 = FUN_007d6508(&local_70);
  local_68._0_5_ = CONCAT14(1,(uint)local_68);
  uStack_98 = uVar3;
  if ((uVar3 < 0xf) && (-1 < (int)(uint)local_68)) {
    uVar3 = FUN_007d6508(&local_70);
    local_68._0_5_ = CONCAT14(1,(uint)local_68);
    uStack_94 = uVar3;
    if ((0xe < uVar3) || ((int)(uint)local_68 < 0)) {
      uVar5 = FUN_004022fc();
      if ((uVar5 & 1) != 0) goto LAB_00888e38;
      puStack_168 = (undefined1 *)0x3ea;
      pcVar8 = 
      "Error in stream: invalid value, expected pps.num_ref_idx_l1_default_active_minus1 to be";
      local_b0 = 
      "Error in stream: invalid value, expected pps.num_ref_idx_l1_default_active_minus1 to be";
      uVar7 = 0x3ea;
      goto LAB_00888e2c;
    }
    uVar3 = FUN_007d6670(&local_70);
    iVar2 = *(int *)(param_4 + 0x9c);
    local_68._0_5_ = CONCAT14(1,(uint)local_68);
    local_80 = iVar2 * 6;
    uStack_90 = uVar3;
    if (((-1 < (int)(uint)local_68) && ((int)uVar3 < 0x1a)) && (iVar2 * -6 + -0x1a <= (int)uVar3)) {
      FUN_007d6120(&local_70,1);
      FUN_007d6120(&local_70,1);
      iVar2 = FUN_007d60c4(&local_70);
      if (iVar2 != 0) {
        uVar3 = FUN_007d6508(&local_70);
        local_68._0_5_ = CONCAT14(1,(uint)local_68);
        if (((int)(uint)local_68 < 0) || (*(uint *)(param_4 + 0x38) < uVar3)) {
          uVar5 = FUN_004022fc();
          if ((uVar5 & 1) != 0) goto LAB_00888e38;
          local_170 = "../../common_video/h265/h265_pps_parser.cc";
          puStack_168 = (undefined1 *)0x46a;
          pcVar8 = "Error in stream: invalid value, expected diff_cu_qp_delta_depth to be";
          local_b0 = "Error in stream: invalid value, expected diff_cu_qp_delta_depth to be";
          ppcStack_190 = &local_b0;
          local_160 = &local_110;
          local_198 = " in range [";
          ppcStack_f8 = &local_198;
          iVar2 = *(int *)(param_4 + 0x38);
          local_100 = (undefined1 *)0x0;
          puVar6 = &DAT_00223e13;
          uVar7 = 0x46a;
          ppcStack_a8 = &local_170;
          goto LAB_00888e30;
        }
      }
      uVar3 = FUN_007d6670(&local_70);
      local_68._0_5_ = CONCAT14(1,(uint)local_68);
      if ((0x18 < uVar3 + 0xc) || ((int)(uint)local_68 < 0)) {
        uVar5 = FUN_004022fc();
        if ((uVar5 & 1) != 0) goto LAB_00888e38;
        puStack_168 = (undefined1 *)0x48a;
        pcVar8 = "Error in stream: invalid value, expected pps_cb_qp_offset to be";
        local_b0 = "Error in stream: invalid value, expected pps_cb_qp_offset to be";
        uVar7 = 0x48a;
LAB_00889164:
        local_100 = (undefined1 *)0xfffffff4;
        iVar2 = 0xc;
        goto LAB_00888ef0;
      }
      uVar3 = FUN_007d6670(&local_70);
      local_68._0_5_ = CONCAT14(1,(uint)local_68);
      if ((0x18 < uVar3 + 0xc) || ((int)(uint)local_68 < 0)) {
        uVar5 = FUN_004022fc();
        if ((uVar5 & 1) != 0) goto LAB_00888e38;
        puStack_168 = (undefined1 *)0x4a2;
        pcVar8 = "Error in stream: invalid value, expected pps_cr_qp_offset to be";
        local_b0 = "Error in stream: invalid value, expected pps_cr_qp_offset to be";
        uVar7 = 0x4a2;
        goto LAB_00889164;
      }
      FUN_007d6120(&local_70,1);
      iVar2 = FUN_007d60c4(&local_70);
      uStack_8c = iVar2 != 0;
      iVar2 = FUN_007d60c4(&local_70);
      uStack_8b = iVar2 != 0;
      FUN_007d6120(&local_70,1);
      iVar2 = FUN_007d60c4(&local_70);
      FUN_007d6120(&local_70,1);
      if (iVar2 == 0) {
LAB_0088928c:
        FUN_007d6120(&local_70,1);
        iVar2 = FUN_007d60c4(&local_70);
        if (iVar2 != 0) {
          FUN_007d6120(&local_70,1);
          iVar2 = FUN_007d60c4(&local_70);
          if (iVar2 == 0) {
            uVar3 = FUN_007d6670(&local_70);
            local_68._0_5_ = CONCAT14(1,(uint)local_68);
            if ((uVar3 + 6 < 0xd) && (-1 < (int)(uint)local_68)) {
              uVar3 = FUN_007d6670(&local_70);
              local_68._0_5_ = CONCAT14(1,(uint)local_68);
              if ((uVar3 + 6 < 0xd) && (-1 < (int)(uint)local_68)) goto LAB_008892c0;
              uVar5 = FUN_004022fc();
              if ((uVar5 & 1) != 0) goto LAB_00888e38;
              puStack_168 = (undefined1 *)0x6ca;
              pcVar8 = "Error in stream: invalid value, expected pps_tc_offset_div2 to be";
              local_b0 = "Error in stream: invalid value, expected pps_tc_offset_div2 to be";
              uVar7 = 0x6ca;
            }
            else {
              uVar5 = FUN_004022fc();
              if ((uVar5 & 1) != 0) goto LAB_00888e38;
              puStack_168 = (undefined1 *)0x6b2;
              pcVar8 = "Error in stream: invalid value, expected pps_beta_offset_div2 to be";
              local_b0 = "Error in stream: invalid value, expected pps_beta_offset_div2 to be";
              uVar7 = 0x6b2;
            }
            local_100 = (undefined1 *)0xfffffffa;
            iVar2 = 6;
            goto LAB_00888ef0;
          }
        }
LAB_008892c0:
        iVar2 = FUN_007d60c4(&local_70);
        if ((iVar2 == 0) || (uVar5 = FUN_00886c34(&local_70), (uVar5 & 1) != 0)) {
          iVar2 = FUN_007d60c4(&local_70);
          if (-1 < (int)(uint)local_68) {
            *(undefined1 *)((long)param_1 + 0x24) = 1;
            param_1[1] = CONCAT44(uStack_94,uStack_98);
            *param_1 = CONCAT44(uStack_9c,
                                CONCAT13(uStack_9d,CONCAT12(uStack_9e,CONCAT11(uStack_9f,local_a0)))
                               );
            param_1[3] = local_88;
            param_1[2] = CONCAT17(uStack_89,
                                  CONCAT16(iVar2 != 0,
                                           CONCAT15(uStack_8b,CONCAT14(uStack_8c,uStack_90))));
            *(int *)(param_1 + 4) = local_80;
            return;
          }
        }
        goto LAB_00888e38;
      }
      uVar3 = FUN_007d6508(&local_70);
      uVar5 = (ulong)uVar3;
      local_68._0_5_ = CONCAT14(1,(uint)local_68);
      if (((int)(uint)local_68 < 0) || (*(int *)(param_4 + 0x94) - 1U < uVar3)) {
        uVar5 = FUN_004022fc();
        if ((uVar5 & 1) != 0) goto LAB_00888e38;
        local_170 = "../../common_video/h265/h265_pps_parser.cc";
        puStack_168 = (undefined1 *)0x52a;
        pcVar8 = "Error in stream: invalid value, expected num_tile_columns_minus1 to be";
        local_b0 = "Error in stream: invalid value, expected num_tile_columns_minus1 to be";
        ppcStack_190 = &local_b0;
        local_160 = &local_110;
        local_198 = " in range [";
        ppcStack_f8 = &local_198;
        puVar6 = &DAT_00223e13;
        iVar2 = *(int *)(param_4 + 0x94) + -1;
        local_100 = (undefined1 *)0x0;
        uVar7 = 0x52a;
        ppcStack_a8 = &local_170;
      }
      else {
        if (0x12 < uVar3) {
          uVar5 = FUN_004022fc();
          if ((uVar5 & 1) == 0) {
            FUN_00623bb0(&DAT_001f4ed3,"../../common_video/h265/h265_pps_parser.cc",0x532,
                         "Error in stream: invalid value, expected ",
                         "num_tile_columns_minus1 < kMaxNumTileColumnWidth");
          }
          goto LAB_00888e38;
        }
        uVar4 = FUN_007d6508(&local_70);
        local_68._0_5_ = CONCAT14(1,(uint)local_68);
        if ((-1 < (int)(uint)local_68) && (uVar4 <= *(int *)(param_4 + 0x98) - 1U)) {
          if (uVar4 == 0 && uVar3 == 0) {
            uVar5 = FUN_004022fc();
            if ((uVar5 & 1) == 0) {
              FUN_00623bb0(&DAT_001f4ed3,"../../common_video/h265/h265_pps_parser.cc",0x562,
                           "Error in stream: invalid value, expected ",
                           "(num_tile_columns_minus1 != 0) || (num_tile_rows_minus1 != 0)");
            }
            goto LAB_00888e38;
          }
          if (0x14 < uVar4) {
            uVar5 = FUN_004022fc();
            if ((uVar5 & 1) == 0) {
              FUN_00623bb0(&DAT_001f4ed3,"../../common_video/h265/h265_pps_parser.cc",0x56a,
                           "Error in stream: invalid value, expected ",
                           "num_tile_rows_minus1 < kMaxNumTileRowHeight");
            }
            goto LAB_00888e38;
          }
          iVar2 = FUN_007d60c4(&local_70);
          if (iVar2 == 0) {
            puStack_bc = &DAT_aaaaaaaaaaaaaaaa;
            uStack_c0 = 0xaaaaaaaa;
            ppcStack_f8 = (char **)&DAT_aaaaaaaaaaaaaaaa;
            local_100 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_f0 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
            local_e0 = &DAT_aaaaaaaaaaaaaaaa;
            uStack_c8 = 0xaaaaaaaa;
            local_c4 = 0xaaaaaaaa;
            puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
            *(int *)((long)&local_100 + (ulong)uVar3 * 4) = *(int *)(param_4 + 0x94) + -1;
            ppcStack_a8 = &local_110;
            if (uVar3 != 0) {
              uVar10 = uVar5;
              ppuVar12 = &local_100;
              do {
                uVar3 = FUN_007d6508(&local_70);
                uVar1 = (uint)local_68;
                local_68._0_5_ = CONCAT14(1,(uint)local_68);
                *(uint *)ppuVar12 = uVar3;
                if (((int)(uVar1 | uVar3) < 0) ||
                   (iVar2 = *(int *)((long)&local_100 + uVar5 * 4), iVar2 + -1 < (int)uVar3)) {
                  uVar10 = FUN_004022fc();
                  if ((uVar10 & 1) != 0) goto LAB_00888e38;
                  local_170 = "../../common_video/h265/h265_pps_parser.cc";
                  puStack_168 = (undefined1 *)0x5ca;
                  pcVar8 = "Error in stream: invalid value, expected column_width_minus1[i] to be";
                  local_160 = &pcStack_180;
                  local_110 = 
                  "Error in stream: invalid value, expected column_width_minus1[i] to be";
                  ppcStack_108 = &local_170;
                  ppcStack_190 = &local_b0;
                  local_b0 = " in range [";
                  puVar6 = &DAT_00223e29;
                  iVar2 = *(int *)((long)&local_100 + uVar5 * 4) + -1;
                  local_198 = (char *)0x0;
                  uVar7 = 0x5ca;
                  goto LAB_00888e30;
                }
                uVar10 = uVar10 - 1;
                *(uint *)((long)&local_100 + uVar5 * 4) = iVar2 + ~uVar3;
                ppuVar12 = (undefined1 **)((long)ppuVar12 + 4);
              } while (uVar10 != 0);
            }
            puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
            local_160 = (char **)&DAT_aaaaaaaaaaaaaaaa;
            puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_150 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
            local_140 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
            local_170 = &DAT_aaaaaaaaaaaaaaaa;
            local_120 = 0xaaaaaaaa;
            *(int *)((long)&local_170 + (ulong)uVar4 * 4) = *(int *)(param_4 + 0x98) + -1;
            if (uVar4 != 0) {
              uVar10 = (ulong)uVar4;
              uVar5 = uVar10;
              ppcVar11 = &local_170;
              do {
                uVar3 = FUN_007d6508(&local_70);
                uVar4 = (uint)local_68;
                local_68._0_5_ = CONCAT14(1,(uint)local_68);
                *(uint *)ppcVar11 = uVar3;
                if (((int)(uVar4 | uVar3) < 0) ||
                   (iVar2 = *(int *)((long)&local_170 + uVar10 * 4), iVar2 + -1 < (int)uVar3)) {
                  uVar5 = FUN_004022fc();
                  if ((uVar5 & 1) != 0) goto LAB_00888e38;
                  local_198 = "../../common_video/h265/h265_pps_parser.cc";
                  ppcStack_190 = (char **)0x61a;
                  local_188 = &uStack_199;
                  pcVar8 = "Error in stream: invalid value, expected row_height_minus1[i] to be";
                  local_178 = &local_198;
                  pcStack_180 = 
                  "Error in stream: invalid value, expected row_height_minus1[i] to be";
                  local_110 = " in range [";
                  ppcStack_108 = &pcStack_180;
                  local_b0 = (char *)0x0;
                  puVar6 = &DAT_00223e29;
                  iVar2 = *(int *)((long)&local_170 + uVar10 * 4) + -1;
                  uVar7 = 0x61a;
                  goto LAB_00888e30;
                }
                uVar5 = uVar5 - 1;
                *(uint *)((long)&local_170 + uVar10 * 4) = iVar2 + ~uVar3;
                ppcVar11 = (char **)((long)ppcVar11 + 4);
              } while (uVar5 != 0);
            }
            FUN_007d6120(&local_70,1);
          }
          goto LAB_0088928c;
        }
        uVar5 = FUN_004022fc();
        if ((uVar5 & 1) != 0) goto LAB_00888e38;
        local_170 = "../../common_video/h265/h265_pps_parser.cc";
        puStack_168 = (undefined1 *)0x552;
        pcVar8 = "Error in stream: invalid value, expected num_tile_rows_minus1 to be";
        local_b0 = "Error in stream: invalid value, expected num_tile_rows_minus1 to be";
        ppcStack_190 = &local_b0;
        local_160 = &local_110;
        local_198 = " in range [";
        ppcStack_f8 = &local_198;
        puVar6 = &DAT_00223e13;
        iVar2 = *(int *)(param_4 + 0x98) + -1;
        local_100 = (undefined1 *)0x0;
        uVar7 = 0x552;
        uVar3 = uVar4;
        ppcStack_a8 = &local_170;
      }
      goto LAB_00888e30;
    }
    uVar5 = FUN_004022fc();
    if ((uVar5 & 1) != 0) goto LAB_00888e38;
    puStack_168 = (undefined1 *)0x412;
    pcVar8 = "Error in stream: invalid value, expected pps.init_qp_minus26 to be";
    local_b0 = "Error in stream: invalid value, expected pps.init_qp_minus26 to be";
    local_100 = (undefined1 *)(ulong)(iVar2 * -6 - 0x1a);
    uVar7 = 0x412;
    iVar2 = 0x19;
LAB_00888ef0:
    ppcStack_a8 = &local_170;
    ppcStack_f8 = &local_198;
    local_160 = &local_110;
    ppcStack_190 = &local_b0;
    local_170 = "../../common_video/h265/h265_pps_parser.cc";
    local_198 = " in range [";
    puVar6 = &DAT_00223e29;
    puVar9 = local_100;
  }
  else {
    uVar5 = FUN_004022fc();
    if ((uVar5 & 1) != 0) goto LAB_00888e38;
    puStack_168 = (undefined1 *)0x3ca;
    pcVar8 = 
    "Error in stream: invalid value, expected pps.num_ref_idx_l0_default_active_minus1 to be";
    local_b0 = 
    "Error in stream: invalid value, expected pps.num_ref_idx_l0_default_active_minus1 to be";
    uVar7 = 0x3ca;
LAB_00888e2c:
    ppcStack_a8 = &local_170;
    ppcStack_f8 = &local_198;
    local_160 = &local_110;
    ppcStack_190 = &local_b0;
    local_100 = (undefined1 *)0x0;
    local_170 = "../../common_video/h265/h265_pps_parser.cc";
    local_198 = " in range [";
    puVar6 = &DAT_00223e08;
    iVar2 = 0xe;
LAB_00888e30:
    puVar9 = (undefined1 *)0x0;
  }
  FUN_00623bb0(puVar6,"../../common_video/h265/h265_pps_parser.cc",uVar7,pcVar8," in range [",puVar9
               ,&DAT_001ca603,iVar2,&DAT_0019fa9e," found ",uVar3," instead");
LAB_00888e38:
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  return;
}


// ===== 00889730  FUN_00889730 =====

undefined8 FUN_00889730(long param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *local_88;
  undefined8 uStack_80;
  undefined1 *local_78;
  char *pcStack_70;
  char **local_68;
  char *local_60;
  char **ppcStack_58;
  undefined8 local_50;
  char **ppcStack_48;
  undefined *local_40;
  undefined8 *puStack_38;
  undefined1 uStack_11;
  
  uVar1 = FUN_007d6508();
  *param_2 = uVar1;
  *(undefined1 *)(param_1 + 0xc) = 1;
  if ((*(int *)(param_1 + 8) < 0) || (0x3f < *param_2)) {
    uVar2 = FUN_004022fc();
    if ((uVar2 & 1) != 0) {
      return 0;
    }
    uStack_80 = 0x7a2;
    pcVar4 = "Error in stream: invalid value, expected pps_id to be";
    pcStack_70 = "Error in stream: invalid value, expected pps_id to be";
    uVar1 = *param_2;
    uVar3 = 0x7a2;
    uVar5 = 0x3f;
  }
  else {
    uVar1 = FUN_007d6508(param_1);
    *param_3 = uVar1;
    *(undefined1 *)(param_1 + 0xc) = 1;
    if ((-1 < *(int *)(param_1 + 8)) && (*param_3 < 0x10)) {
      return 1;
    }
    uVar2 = FUN_004022fc();
    if ((uVar2 & 1) != 0) {
      return 0;
    }
    uStack_80 = 0x7ba;
    pcVar4 = "Error in stream: invalid value, expected sps_id to be";
    pcStack_70 = "Error in stream: invalid value, expected sps_id to be";
    uVar1 = *param_3;
    uVar3 = 0x7ba;
    uVar5 = 0xf;
  }
  puStack_38 = &local_50;
  ppcStack_48 = &local_60;
  ppcStack_58 = &pcStack_70;
  local_68 = &local_88;
  local_78 = &uStack_11;
  local_40 = &DAT_001ca603;
  local_50 = 0;
  local_60 = " in range [";
  local_88 = "../../common_video/h265/h265_pps_parser.cc";
  FUN_00623bb0(&DAT_00223e08,"../../common_video/h265/h265_pps_parser.cc",uVar3,pcVar4," in range ["
               ,0,&DAT_001ca603,uVar5,&DAT_0019fa9e," found ",uVar1," instead");
  return 0;
}


// ===== 008898f0  FUN_008898f0 =====

long FUN_008898f0(uint param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = (ulong)param_1 | 0x3ffffff00000000;
  if (param_1 < 0x80000001) {
    uVar1 = (ulong)param_1;
  }
  lVar2 = (uVar1 * 1000000 >> 0xf & 1) + (uVar1 * 1000000 >> 0x10);
  if (0x80000000 < param_1) {
    lVar2 = -(uVar1 * -1000000 >> 0x10) - (ulong)(0x8000 < (uVar1 * -1000000 & 0xffc0));
  }
  return lVar2;
}


// ===== 00889940  FUN_00889940 =====

long FUN_00889940(uint param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = (ulong)param_1 | 0x3ffffff00000000;
  if (param_1 < 0x80000001) {
    uVar1 = (ulong)param_1;
  }
  lVar2 = (uVar1 * 1000000 >> 0xf & 1) + (uVar1 * 1000000 >> 0x10);
  if (0x80000000 < param_1) {
    lVar2 = -(uVar1 * -1000000 >> 0x10) - (ulong)(0x8000 < (uVar1 * -1000000 & 0xffc0));
  }
  if (lVar2 < 0x3e9) {
    lVar2 = 1000;
  }
  return lVar2;
}


// ===== 0088999c  FUN_0088999c =====

void FUN_0088999c(undefined8 *param_1,void *param_2,ulong param_3)

{
  void *__dest;
  
  *param_1 = &PTR_FUN_00d3afe0;
  param_1[1] = 0;
  param_1[2] = param_3;
  param_1[3] = param_3;
  if (param_3 != 0) {
    __dest = operator_new__(param_3);
    param_1[4] = __dest;
    memcpy(__dest,param_2,param_3);
    return;
  }
  param_1[4] = 0;
  return;
}


// ===== 00889a10  FUN_00889a10 =====

void FUN_00889a10(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
    return;
  }
  return;
}


// ===== 00889a2c  FUN_00889a2c =====

void FUN_00889a2c(void *param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((long)param_1 + 0x20);
  *(undefined8 *)((long)param_1 + 0x20) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00889a68  FUN_00889a68 =====

undefined8 FUN_00889a68(void)

{
  return 0x11;
}


// ===== 00889a74  FUN_00889a74 =====

undefined8 FUN_00889a74(void)

{
  return 0;
}


// ===== 00889a80  FUN_00889a80 =====

void FUN_00889a80(undefined8 *param_1,void *param_2,ulong param_3)

{
  void *__dest;
  
  *param_1 = &PTR_FUN_00d3b018;
  param_1[1] = 0;
  param_1[2] = param_3;
  param_1[3] = param_3;
  if (param_3 != 0) {
    __dest = operator_new__(param_3);
    param_1[4] = __dest;
    memcpy(__dest,param_2,param_3);
    return;
  }
  param_1[4] = 0;
  return;
}


// ===== 00889af4  FUN_00889af4 =====

void FUN_00889af4(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
    return;
  }
  return;
}


// ===== 00889b10  FUN_00889b10 =====

void FUN_00889b10(void *param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((long)param_1 + 0x20);
  *(undefined8 *)((long)param_1 + 0x20) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00889b4c  FUN_00889b4c =====

undefined8 FUN_00889b4c(void)

{
  return 0x12;
}


// ===== 00889b58  FUN_00889b58 =====

undefined8 FUN_00889b58(void)

{
  return 0;
}


// ===== 00889b64  FUN_00889b64 =====

void FUN_00889b64(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = &PTR_FUN_00d3b050;
  param_1[1] = 0;
  FUN_007d9c20(param_1 + 2);
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return;
}


// ===== 00889ba0  FUN_00889ba0 =====

void FUN_00889ba0(long param_1)

{
  FUN_007d9f60(param_1 + 0x10);
  return;
}


// ===== 00889bac  FUN_00889bac =====

void FUN_00889bac(void *param_1)

{
  FUN_007d9f60((long)param_1 + 0x10);
  operator_delete(param_1);
  return;
}


// ===== 00889be0  FUN_00889be0 =====

undefined8 FUN_00889be0(void)

{
  return 0x13;
}


// ===== 00889bec  FUN_00889bec =====

undefined8 FUN_00889bec(void)

{
  return 0;
}


// ===== 00889bf8  FUN_00889bf8 =====

void FUN_00889bf8(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = &PTR_FUN_00d3b088;
  param_1[1] = 0;
  FUN_007d9c20(param_1 + 2);
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)((long)param_1 + 0x84) = param_4;
  return;
}


// ===== 00889c40  FUN_00889c40 =====

void FUN_00889c40(long param_1)

{
  FUN_007d9f60(param_1 + 0x10);
  return;
}


// ===== 00889c4c  FUN_00889c4c =====

void FUN_00889c4c(void *param_1)

{
  FUN_007d9f60((long)param_1 + 0x10);
  operator_delete(param_1);
  return;
}


// ===== 00889c80  FUN_00889c80 =====

undefined8 FUN_00889c80(void)

{
  return 0x14;
}


// ===== 00889c8c  FUN_00889c8c =====

undefined8 FUN_00889c8c(void)

{
  return 0;
}


// ===== 00889c98  FUN_00889c98 =====

void FUN_00889c98(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}


// ===== 00889ca4  FUN_00889ca4 =====

long FUN_00889ca4(ulong *param_1,long param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_1 ^ *param_1 >> 0xc;
  uVar1 = uVar1 ^ uVar1 << 0x19;
  uVar1 = uVar1 ^ uVar1 >> 0x1b;
  uVar2 = (ulong)(uint)((int)uVar1 * 0x4f6cdd1d);
  *param_1 = uVar1;
  return param_2 + (uVar2 + uVar2 * (uint)(param_3 - (int)param_2) >> 0x20);
}


// ===== 00889ce0  FUN_00889ce0 =====

long FUN_00889ce0(ulong *param_1,long param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_1 ^ *param_1 >> 0xc;
  uVar1 = uVar1 ^ uVar1 << 0x19;
  uVar1 = uVar1 ^ uVar1 >> 0x1b;
  uVar2 = (ulong)(uint)((int)uVar1 * 0x4f6cdd1d);
  *param_1 = uVar1;
  return param_2 + (uVar2 + uVar2 * (uint)(param_3 - (int)param_2) >> 0x20);
}


// ===== 00889d1c  FUN_00889d1c =====

void FUN_00889d1c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *local_28;
  
  *param_1 = param_2;
  local_28 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_28);
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 1),(pthread_mutexattr_t *)&local_28);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_28);
  FUN_007de7c4(0x45fa0000,param_1 + 6,param_3);
  param_1[0x12] = param_3;
  *(undefined4 *)(param_1 + 0x13) = 0xffffffff;
  return;
}


// ===== 00889d94  FUN_00889d94 =====

int FUN_00889d94(long param_1)

{
  int iVar1;
  
  FUN_007de938(param_1 + 0x30);
  iVar1 = pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 8));
  return iVar1;
}


// ===== 00889dc4  FUN_00889dc4 =====

undefined4 FUN_00889dc4(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 1));
  uVar1 = (**(code **)(*(long *)*param_1 + 0x10))();
  uVar2 = uVar1 / 1000;
  if (499 < uVar1 % 1000) {
    uVar2 = uVar2 + 1;
  }
  if ((uVar1 & 0x8000000000000000) != 0) {
    uVar2 = -(-uVar1 / 1000) - (ulong)(500 < -uVar1 % 1000);
  }
  auVar4 = FUN_007df10c(param_1 + 6,uVar2);
  if ((auVar4 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
    uVar1 = 0;
    if (param_1[0x12] != 0) {
      uVar1 = (ulong)(param_2 * 8000) / (ulong)param_1[0x12];
    }
    if ((ulong)*(uint *)(param_1 + 0x13) < uVar1 + (auVar4._0_8_ & 0xffffffff)) {
      uVar3 = 0;
      goto LAB_00889e9c;
    }
  }
  FUN_007dec4c(param_1 + 6,param_2,uVar2);
  uVar3 = 1;
LAB_00889e9c:
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 1));
  return uVar3;
}


// ===== 00889ebc  FUN_00889ebc =====

int FUN_00889ebc(long param_1,undefined4 param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  *(undefined4 *)(param_1 + 0x98) = param_2;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  return iVar1;
}


// ===== 00889ef4  FUN_00889ef4 =====

uint FUN_00889ef4(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 1));
  param_1[0x12] = param_2;
  uVar2 = (**(code **)(*(long *)*param_1 + 0x10))();
  uVar3 = uVar2 / 1000;
  if (499 < uVar2 % 1000) {
    uVar3 = uVar3 + 1;
  }
  if ((uVar2 & 0x8000000000000000) != 0) {
    uVar3 = -(-uVar2 / 1000) - (ulong)(500 < -uVar2 % 1000);
  }
  uVar1 = FUN_007df1d0(param_1 + 6,param_2,uVar3);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 1));
  return uVar1 & 1;
}


// ===== 00889fac  FUN_00889fac =====

undefined8 FUN_00889fac(int *param_1,ulong param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  bool bVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
    uVar12 = (ulong)param_3;
  }
  else {
    uVar4 = param_3 - param_1[0x10];
    bVar6 = (uint)param_1[0x10] <= param_3 && uVar4 != 0;
    if (uVar4 != 0x80000000) {
      bVar6 = uVar4 != 0xffffffff && (int)(uVar4 + 1) < 0 == SCARRY4(uVar4,1);
    }
    uVar12 = (ulong)uVar4;
    if (!bVar6) {
      uVar12 = (ulong)uVar4 | 0xffffffff00000000;
    }
    uVar12 = uVar12 + *(long *)(param_1 + 0xe);
  }
  plVar9 = *(long **)(param_1 + 4);
  plVar2 = (long *)(param_1 + 2);
  *(ulong *)(param_1 + 0xe) = uVar12;
  param_1[0x10] = param_3;
  *(undefined1 *)(param_1 + 0x11) = 1;
  for (plVar11 = plVar9; plVar11 != plVar2; plVar11 = (long *)plVar11[1]) {
    if ((plVar11[2] == param_2) || (plVar11[3] == uVar12)) {
      return 1;
    }
  }
  if (param_2 == 0) {
LAB_0088a0e8:
    uVar8 = 0;
  }
  else {
    if (*(long *)(param_1 + 6) == 0) {
      *param_1 = 0;
    }
    else {
      if (((ulong)plVar9[2] < param_2) && (param_2 <= plVar9[2] + 0xe1000000000U)) {
        if ((long)uVar12 <= plVar9[3]) {
          uVar7 = FUN_004022fc();
          if ((uVar7 & 1) == 0) {
            FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/rtp_to_ntp_estimator.cc",0x32a,
                         "Newer RTCP SR report with older RTP timestamp, dropping");
          }
          goto LAB_0088a0d4;
        }
        if (0x2000000 < (long)(uVar12 - plVar9[3])) goto LAB_0088a0d4;
      }
      else {
LAB_0088a0d4:
        iVar3 = *param_1;
        *param_1 = iVar3 + 1;
        if (iVar3 + 1 < 3) goto LAB_0088a0e8;
        uVar7 = FUN_004022fc();
        if ((uVar7 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/rtp_to_ntp_estimator.cc",0x39a,
                       "Multiple consecutively invalid RTCP SR reports, clearing measurements.");
        }
        if (*(long *)(param_1 + 6) != 0) {
          plVar11 = *(long **)(param_1 + 4);
          plVar9 = *(long **)(*(long *)(param_1 + 2) + 8);
          *(long **)(*plVar11 + 8) = plVar9;
          *plVar9 = *plVar11;
          param_1[6] = 0;
          param_1[7] = 0;
          while (plVar11 != plVar2) {
            if ((plVar11 == (long *)0xfffffffffffffff0) || (plVar11 == (long *)0x0))
            goto LAB_0088a2cc;
            plVar9 = (long *)plVar11[1];
            operator_delete(plVar11);
            plVar11 = plVar9;
          }
        }
        if ((char)param_1[0xc] == '\x01') {
          *(undefined1 *)(param_1 + 0xc) = 0;
        }
      }
      *param_1 = 0;
      if (*(long *)(param_1 + 6) == 0x14) {
        plVar9 = *(long **)(param_1 + 2);
        plVar11 = (long *)plVar9[1];
        *(long **)(*plVar9 + 8) = plVar11;
        *plVar11 = *plVar9;
        *(long *)(param_1 + 6) = *(long *)(param_1 + 6) + -1;
        if ((plVar9 == (long *)0xfffffffffffffff0) || (plVar9 == (long *)0x0)) {
LAB_0088a2cc:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        operator_delete(plVar9);
      }
    }
    plVar11 = (long *)operator_new(0x20);
    if ((plVar11 == (long *)0x0) || (plVar11 == (long *)0xfffffffffffffff0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar10 = *(undefined8 **)(param_1 + 4);
    plVar11[2] = param_2;
    plVar11[3] = uVar12;
    *plVar11 = (long)plVar2;
    plVar11[1] = (long)puVar10;
    *puVar10 = plVar11;
    uVar12 = *(long *)(param_1 + 6) + 1;
    *(long **)(param_1 + 4) = plVar11;
    *(ulong *)(param_1 + 6) = uVar12;
    if (1 < uVar12) {
      if (plVar11 == plVar2) {
        dVar15 = 0.0;
        dVar16 = 0.0;
        dVar14 = 0.0 / (double)uVar12;
        dVar13 = dVar14;
      }
      else {
        dVar13 = 0.0;
        dVar14 = 0.0;
        plVar9 = plVar11;
        do {
          plVar1 = plVar9 + 2;
          plVar5 = plVar9 + 3;
          plVar9 = (long *)plVar9[1];
          dVar15 = (double)NEON_ucvtf(*plVar1);
          dVar13 = dVar13 + (double)*plVar5;
          dVar14 = dVar14 + dVar15;
        } while (plVar9 != plVar2);
        dVar13 = dVar13 / (double)uVar12;
        dVar14 = dVar14 / (double)uVar12;
        dVar16 = 0.0;
        dVar15 = 0.0;
        do {
          plVar9 = plVar11 + 2;
          plVar1 = plVar11 + 3;
          plVar11 = (long *)plVar11[1];
          dVar18 = (double)NEON_ucvtf(*plVar9);
          dVar17 = (double)*plVar1 - dVar13;
          dVar16 = dVar16 + dVar17 * dVar17;
          dVar15 = dVar15 + dVar17 * (dVar18 - dVar14);
        } while (plVar11 != plVar2);
      }
      if (DAT_001f5660 <= ABS(dVar16)) {
        *(undefined1 *)(param_1 + 0xc) = 1;
        *(double *)(param_1 + 8) = dVar15 / dVar16;
        *(double *)(param_1 + 10) = dVar14 - dVar13 * (dVar15 / dVar16);
      }
    }
    uVar8 = 2;
  }
  return uVar8;
}


// ===== 0088a2f4  FUN_0088a2f4 =====

long FUN_0088a2f4(long param_1,uint param_2)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  double dVar4;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    if ((*(byte *)(param_1 + 0x44) & 1) == 0) {
      uVar2 = (ulong)param_2;
    }
    else {
      uVar3 = param_2 - *(uint *)(param_1 + 0x40);
      bVar1 = *(uint *)(param_1 + 0x40) <= param_2 && uVar3 != 0;
      if (uVar3 != 0x80000000) {
        bVar1 = uVar3 != 0xffffffff && (int)(uVar3 + 1) < 0 == SCARRY4(uVar3,1);
      }
      uVar2 = (ulong)uVar3;
      if (!bVar1) {
        uVar2 = (ulong)uVar3 | 0xffffffff00000000;
      }
      uVar2 = uVar2 + *(long *)(param_1 + 0x38);
    }
    *(ulong *)(param_1 + 0x38) = uVar2;
    *(uint *)(param_1 + 0x40) = param_2;
    dVar4 = *(double *)(param_1 + 0x20) * (double)(long)uVar2 + *(double *)(param_1 + 0x28) + 0.5;
    uVar3 = 0;
    if (1.8446744073709552e+19 < dVar4) {
      uVar3 = 2;
    }
    if (dVar4 < 0.0 != NAN(dVar4)) {
      uVar3 = uVar3 + 1;
    }
    *(undefined1 *)(param_1 + 0x44) = 1;
    if (1 < uVar3) {
      if (uVar3 == 2) {
        return -1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_0061ff28();
    }
    if (uVar3 == 0) {
      return (long)dVar4;
    }
  }
  return 0;
}


// ===== 0088a3c8  FUN_0088a3c8 =====

undefined1  [16] FUN_0088a3c8(long param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  
  dVar1 = 0.0;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    dVar1 = DAT_001f4ff8 / *(double *)(param_1 + 0x20);
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = dVar1;
  return auVar2;
}


// ===== 0088a3f0  FUN_0088a3f0 =====

void FUN_0088a3f0(undefined4 *param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined4 local_58 [2];
  void *local_50;
  undefined8 uStack_48;
  long local_40;
  undefined3 local_38;
  undefined1 uStack_35;
  undefined3 uStack_34;
  
  pcVar4 = *(code **)(param_2 + 0x18);
  if (pcVar4 != (code *)0x0) {
    local_58[0] = *param_3;
    if (*(char *)((long)param_3 + 0x1f) < '\0') {
      FUN_005478d8(&local_50,*(undefined8 *)(param_3 + 2),*(undefined8 *)(param_3 + 4));
      pcVar4 = *(code **)(param_2 + 0x18);
    }
    else {
      uStack_48 = *(undefined8 *)(param_3 + 4);
      local_50 = *(void **)(param_3 + 2);
      local_40 = *(long *)(param_3 + 6);
    }
    local_38 = (undefined3)param_3[8];
    uStack_35 = (undefined1)*(undefined4 *)((long)param_3 + 0x23);
    uStack_34 = (undefined3)((uint)*(undefined4 *)((long)param_3 + 0x23) >> 8);
    (*pcVar4)(param_2,local_58);
    if (local_40 < 0) {
      operator_delete(local_50);
    }
    (**(code **)(param_2 + 0x10))(0,param_2,param_2);
    *(code **)(param_2 + 0x10) = FUN_00433984;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  cVar2 = *(char *)((long)param_3 + 0x1f);
  *param_1 = *param_3;
  if (cVar2 < '\0') {
    FUN_005478d8(param_1 + 2,*(undefined8 *)(param_3 + 2),*(undefined8 *)(param_3 + 4));
  }
  else {
    uVar5 = *(undefined8 *)(param_3 + 2);
    uVar3 = *(undefined8 *)(param_3 + 6);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_3 + 4);
    *(undefined8 *)(param_1 + 2) = uVar5;
    *(undefined8 *)(param_1 + 6) = uVar3;
  }
  uVar1 = *(undefined4 *)((long)param_3 + 0x23);
  param_1[8] = param_3[8];
  *(undefined4 *)((long)param_1 + 0x23) = uVar1;
  return;
}


// ===== 0088a500  FUN_0088a500 =====

void FUN_0088a500(undefined2 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


// ===== 0088a51c  FUN_0088a51c =====

void FUN_0088a51c(void)

{
  return;
}


// ===== 0088a524  FUN_0088a524 =====

void FUN_0088a524(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  *param_1 = &PTR_FUN_00d3b0c0;
  param_1[2] = &PTR_FUN_00d3b138;
  *(undefined1 *)(param_1 + 1) = 0;
  FUN_007ebd84(param_1 + 3);
  param_1[4] = param_2;
  *(undefined1 *)(param_1 + 5) = param_3;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  return;
}


// ===== 0088a58c  FUN_0088a58c =====

void FUN_0088a58c(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  
  pvVar2 = (void *)param_1[3];
  *param_1 = &PTR_FUN_00d3b0c0;
  param_1[2] = &PTR_FUN_00d3b138;
  if ((pvVar2 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar2), iVar1 == 1)) {
    operator_delete(pvVar2);
    return;
  }
  return;
}


// ===== 0088a5f8  FUN_0088a5f8 =====

void FUN_0088a5f8(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  
  pvVar2 = (void *)param_1[3];
  *param_1 = &PTR_FUN_00d3b0c0;
  param_1[2] = &PTR_FUN_00d3b138;
  if ((pvVar2 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar2), iVar1 == 1)) {
    operator_delete(pvVar2);
  }
  operator_delete(param_1);
  return;
}


// ===== 0088a664  FUN_0088a664 =====

void FUN_0088a664(long param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  undefined4 uVar3;
  
  if (param_2 == (long *)0x0) {
    FUN_007ebdcc(*(undefined8 *)(param_1 + 0x18));
  }
  else {
    FUN_007ebdd8();
  }
  *(long **)(param_1 + 0x30) = param_2;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    uVar3 = *(undefined4 *)(param_1 + 0x38);
  }
  else {
    uVar3 = 0;
  }
  if (((param_2 != (long *)0x0) &&
      (iVar1 = (**(code **)(*param_2 + 0x10))(param_2,0,5,uVar3), iVar1 == 0)) &&
     (plVar2 = *(long **)(param_1 + 0x30), plVar2 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0088a718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))(plVar2,1,5,uVar3);
    return;
  }
  return;
}


// ===== 0088a71c  FUN_0088a71c =====

undefined8 FUN_0088a71c(void)

{
  return 0xffffffff;
}


// ===== 0088a728  FUN_0088a728 =====

undefined8 FUN_0088a728(long param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0088a73c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x10))();
    return uVar1;
  }
  return 0xffffffff;
}


// ===== 0088a748  FUN_0088a748 =====

void FUN_0088a748(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 8) = param_2;
  return;
}


// ===== 0088a754  FUN_0088a754 =====

undefined1 FUN_0088a754(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}


// ===== 0088a760  FUN_0088a760 =====

bool FUN_0088a760(long param_1)

{
  return *(long *)(param_1 + 0x30) != 0;
}


// ===== 0088a774  FUN_0088a774 =====

void FUN_0088a774(long param_1)

{
  FUN_0088a780(param_1 + 0x10);
  return;
}


// ===== 0088a780  FUN_0088a780 =====

void FUN_0088a780(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined1 uStack_52;
  undefined1 uStack_51;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  
  lVar4 = *(long *)(param_1 + 0x10);
  lVar2 = FUN_005d6490();
  if (lVar2 == lVar4) {
    if (param_2 != *(int *)(param_1 + 0x28)) {
      plVar3 = *(long **)(param_1 + 0x20);
      *(int *)(param_1 + 0x28) = param_2;
      if (*(char *)(param_1 + 0x18) == '\0') {
        param_2 = 0;
      }
      if (((plVar3 != (long *)0x0) &&
          (iVar1 = (**(code **)(*plVar3 + 0x10))(plVar3,0,5,param_2), iVar1 == 0)) &&
         (plVar3 = *(long **)(param_1 + 0x20), plVar3 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0088a8c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3,1,5,param_2);
        return;
      }
    }
  }
  else {
    lVar2 = *(long *)(param_1 + 8);
    plVar3 = *(long **)(param_1 + 0x10);
    if (lVar2 != 0) {
      FUN_00d0f740(1,lVar2);
    }
    local_50[0] = (long *)operator_new(0x30);
    *local_50[0] = lVar2;
    local_50[0][4] = (long)FUN_004473ec;
    local_50[0][5] = (long)FUN_0088cc38;
    local_50[0][2] = param_1;
    *(int *)(local_50[0] + 3) = param_2;
    local_40 = FUN_005db390;
    pcStack_38 = FUN_005db348;
    (**(code **)(*plVar3 + 8))(plVar3,local_50,&uStack_51,&uStack_52);
    (*local_40)(0,local_50,local_50);
  }
  return;
}


// ===== 0088a8c4  FUN_0088a8c4 =====

void FUN_0088a8c4(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = *(void **)(param_1 + 0xa8);
  if (pvVar1 == (void *)0x0) {
LAB_0088a958:
    pvVar1 = *(void **)(param_1 + 0x90);
    if (pvVar1 == (void *)0x0) {
LAB_0088a9d8:
      pvVar1 = *(void **)(param_1 + 0x78);
      if (pvVar1 == (void *)0x0) {
LAB_0088aa68:
        if (*(char *)(param_1 + 0x6f) < '\0') {
          operator_delete(*(void **)(param_1 + 0x58));
          return;
        }
        return;
      }
      pvVar2 = *(void **)(param_1 + 0x80);
      uVar4 = (ulong)((long)pvVar2 + (-0x10 - ((long)pvVar2 << 0x3c))) >> 4;
      uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3c) - ((long)pvVar1 - (long)pvVar2)) >> 4;
      if (uVar4 <= uVar3) {
        uVar3 = uVar4;
      }
      if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 0xfU) == 0)) {
        uVar3 = uVar3 & 0xffffffffffffffe;
        pvVar2 = (void *)((long)pvVar2 + uVar3 * -0x10);
        do {
          uVar3 = uVar3 - 2;
        } while (uVar3 != 0);
      }
      do {
        if (pvVar2 == pvVar1) {
          *(void **)(param_1 + 0x80) = pvVar1;
          operator_delete(pvVar1);
          goto LAB_0088aa68;
        }
        pvVar2 = (void *)((long)pvVar2 + -0x10);
      } while (pvVar2 != (void *)0x0);
    }
    else {
      pvVar2 = *(void **)(param_1 + 0x98);
      uVar4 = (ulong)((long)pvVar2 + (-0x10 - ((long)pvVar2 << 0x3c))) >> 4;
      uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3c) - ((long)pvVar1 - (long)pvVar2)) >> 4;
      if (uVar4 <= uVar3) {
        uVar3 = uVar4;
      }
      if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 0xfU) == 0)) {
        uVar3 = uVar3 & 0xffffffffffffffe;
        pvVar2 = (void *)((long)pvVar2 + uVar3 * -0x10);
        do {
          uVar3 = uVar3 - 2;
        } while (uVar3 != 0);
      }
      do {
        if (pvVar2 == pvVar1) {
          *(void **)(param_1 + 0x98) = pvVar1;
          operator_delete(pvVar1);
          goto LAB_0088a9d8;
        }
        pvVar2 = (void *)((long)pvVar2 + -0x10);
      } while (pvVar2 != (void *)0x0);
    }
  }
  else {
    pvVar2 = *(void **)(param_1 + 0xb0);
    uVar4 = (ulong)((long)pvVar2 + (-0x40 - ((long)pvVar2 << 0x3a))) >> 6;
    uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3a) - ((long)pvVar1 - (long)pvVar2)) >> 6;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 0x3fU) == 0)) {
      uVar3 = uVar3 & 0x3fffffffffffffe;
      pvVar2 = (void *)((long)pvVar2 + uVar3 * -0x40);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    do {
      if (pvVar2 == pvVar1) {
        *(void **)(param_1 + 0xb0) = pvVar1;
        operator_delete(pvVar1);
        goto LAB_0088a958;
      }
      pvVar2 = (void *)((long)pvVar2 + -0x40);
    } while (pvVar2 != (void *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0088aa9c  FUN_0088aa9c =====

void FUN_0088aa9c(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = *(void **)(param_1 + 0xd0);
  if (pvVar1 == (void *)0x0) {
LAB_0088ab30:
    pvVar1 = *(void **)(param_1 + 0xb8);
    if (pvVar1 == (void *)0x0) {
LAB_0088abc0:
      if (*(char *)(param_1 + 0xaf) < '\0') {
        operator_delete(*(void **)(param_1 + 0x98));
        return;
      }
      return;
    }
    pvVar2 = *(void **)(param_1 + 0xc0);
    uVar4 = (ulong)((long)pvVar2 + (-0x10 - ((long)pvVar2 << 0x3c))) >> 4;
    uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3c) - ((long)pvVar1 - (long)pvVar2)) >> 4;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 0xfU) == 0)) {
      uVar3 = uVar3 & 0xffffffffffffffe;
      pvVar2 = (void *)((long)pvVar2 + uVar3 * -0x10);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    do {
      if (pvVar2 == pvVar1) {
        *(void **)(param_1 + 0xc0) = pvVar1;
        operator_delete(pvVar1);
        goto LAB_0088abc0;
      }
      pvVar2 = (void *)((long)pvVar2 + -0x10);
    } while (pvVar2 != (void *)0x0);
  }
  else {
    pvVar2 = *(void **)(param_1 + 0xd8);
    uVar4 = (ulong)((long)pvVar2 + (-0x10 - ((long)pvVar2 << 0x3c))) >> 4;
    uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3c) - ((long)pvVar1 - (long)pvVar2)) >> 4;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 0xfU) == 0)) {
      uVar3 = uVar3 & 0xffffffffffffffe;
      pvVar2 = (void *)((long)pvVar2 + uVar3 * -0x10);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    do {
      if (pvVar2 == pvVar1) {
        *(void **)(param_1 + 0xd8) = pvVar1;
        operator_delete(pvVar1);
        goto LAB_0088ab30;
      }
      pvVar2 = (void *)((long)pvVar2 + -0x10);
    } while (pvVar2 != (void *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0088abf4  FUN_0088abf4 =====

void FUN_0088abf4(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)((long)param_1 + 0x74) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((long)param_1 + 0x69) = 0;
  *(undefined8 *)((long)param_1 + 0x61) = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((long)param_1 + 0xba) = 0;
  *(undefined8 *)((long)param_1 + 0xb2) = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  FUN_00666a34(param_1 + 0x1d);
  FUN_0065f054(param_1 + 0x24);
  return;
}


// ===== 0088ac70  FUN_0088ac70 =====

void FUN_0088ac70(long param_1)

{
  FUN_0065f0c8(param_1 + 0x120);
  FUN_00666a74(param_1 + 0xe8);
  FUN_0088a8c4(param_1);
  return;
}


// ===== 0088aca8  FUN_0088aca8 =====

void FUN_0088aca8(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  param_1[0x3e] = 0;
  param_1[0x3d] = 0;
  param_1[0x40] = 0;
  param_1[0x3f] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)((long)param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((long)param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2a] = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x43] = 0xffffffffffffffff;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  return;
}


// ===== 0088ad78  FUN_0088ad78 =====

void FUN_0088ad78(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[0x2a] = param_1 + 0x2b;
  param_1[0x2b] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)((long)param_1 + 0x74) = 0;
  param_1[0x19] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((long)param_1 + 0x69) = 0;
  *(undefined8 *)((long)param_1 + 0x61) = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((long)param_1 + 0xba) = 0;
  *(undefined8 *)((long)param_1 + 0xb2) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined8 *)((long)param_1 + 0x1d1) = 0;
  *(undefined8 *)((long)param_1 + 0x1c9) = 0;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  return;
}


// ===== 0088ae28  FUN_0088ae28 =====

void FUN_0088ae28(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  long local_18;
  
  if ((*(char *)(param_1 + 0x1f0) == '\x01') && (*(char *)(param_1 + 0x1ef) < '\0')) {
    operator_delete(*(void **)(param_1 + 0x1d8));
  }
  local_18 = param_1 + 0x150;
  FUN_0061b080(&local_18,*(undefined8 *)(param_1 + 0x158));
  if ((*(char *)(param_1 + 0x110) == '\x01') && (*(char *)(param_1 + 0x10f) < '\0')) {
    operator_delete(*(void **)(param_1 + 0xf8));
    pvVar3 = *(void **)(param_1 + 0xe0);
  }
  else {
    pvVar3 = *(void **)(param_1 + 0xe0);
  }
  if (pvVar3 != (void *)0x0) {
    pvVar2 = *(void **)(param_1 + 0xe8);
    pvVar1 = pvVar3;
    if (pvVar3 != pvVar2) {
      do {
        pvVar2 = (void *)((long)pvVar2 + -0x30);
        if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_0088cfa4(pvVar2);
      } while (pvVar2 != pvVar3);
      pvVar1 = *(void **)(param_1 + 0xe0);
    }
    *(void **)(param_1 + 0xe8) = pvVar3;
    operator_delete(pvVar1);
  }
  FUN_0088a8c4(param_1);
  return;
}


// ===== 0088af1c  FUN_0088af1c =====

void FUN_0088af1c(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  *(undefined8 *)((long)param_1 + 0x27d) = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)((long)param_1 + 0x1cc) = 0;
  *(undefined8 *)((long)param_1 + 0x1c4) = 0;
  *(undefined8 *)((long)param_1 + 0x1dc) = 0;
  *(undefined8 *)((long)param_1 + 0x1d4) = 0;
  *(undefined8 *)((long)param_1 + 0x1ec) = 0;
  *(undefined8 *)((long)param_1 + 0x1e4) = 0;
  *(undefined8 *)((long)param_1 + 0x1f9) = 0;
  *(undefined8 *)((long)param_1 + 0x1f1) = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)((long)param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((long)param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x2c] = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  *(undefined2 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x41) = 0;
  *(undefined1 *)(param_1 + 0x42) = 0;
  *(undefined1 *)(param_1 + 0x43) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  param_1[0x49] = 0;
  param_1[0x4d] = 0xffffffffffffffff;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x56] = 0xffffffffffffffff;
  param_1[0x55] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x57) = 0;
  *(undefined1 *)(param_1 + 0x65) = 0;
  return;
}


// ===== 0088b060  FUN_0088b060 =====

void FUN_0088b060(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  if ((*(char *)(param_1 + 0x1b8) == '\x01') && (*(char *)(param_1 + 0x1b7) < '\0')) {
    operator_delete(*(void **)(param_1 + 0x1a0));
    pvVar3 = *(void **)(param_1 + 0x188);
  }
  else {
    pvVar3 = *(void **)(param_1 + 0x188);
  }
  if (pvVar3 != (void *)0x0) {
    pvVar2 = *(void **)(param_1 + 400);
    pvVar1 = pvVar3;
    if (pvVar3 != pvVar2) {
      do {
        pvVar2 = (void *)((long)pvVar2 + -0x30);
        if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_0088cfa4(pvVar2);
      } while (pvVar2 != pvVar3);
      pvVar1 = *(void **)(param_1 + 0x188);
    }
    *(void **)(param_1 + 400) = pvVar3;
    operator_delete(pvVar1);
  }
  FUN_0088aa9c(param_1);
  return;
}


// ===== 0088b118  FUN_0088b118 =====

void FUN_0088b118(undefined8 *param_1)

{
  param_1[0xb] = 0;
  param_1[7] = 0;
  param_1[6] = param_1 + 7;
  param_1[10] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[9] = param_1 + 10;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


// ===== 0088b14c  FUN_0088b14c =====

void FUN_0088b14c(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 *local_38;
  
  local_38 = param_1 + 9;
  FUN_0088c818(&local_38,param_1[10]);
  local_38 = param_1 + 6;
  FUN_0088c818(&local_38,param_1[7]);
  pvVar3 = (void *)param_1[3];
  if (pvVar3 != (void *)0x0) {
    pvVar2 = (void *)param_1[4];
    pvVar1 = pvVar3;
    if (pvVar3 != pvVar2) {
      do {
        pvVar2 = (void *)((long)pvVar2 + -0x240);
        if (pvVar2 == (void *)0x0) goto LAB_0088b244;
        FUN_0088aa9c(pvVar2);
      } while (pvVar2 != pvVar3);
      pvVar1 = (void *)param_1[3];
    }
    param_1[4] = pvVar3;
    operator_delete(pvVar1);
  }
  pvVar3 = (void *)*param_1;
  if (pvVar3 != (void *)0x0) {
    pvVar2 = pvVar3;
    pvVar1 = (void *)param_1[1];
    if (pvVar3 != (void *)param_1[1]) {
      do {
        pvVar2 = (void *)((long)pvVar1 + -400);
        if (pvVar2 == (void *)0x0) {
LAB_0088b244:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_0065f0c8((long)pvVar1 + -0x70);
        FUN_00666a74((long)pvVar1 + -0xa8);
        FUN_0088a8c4(pvVar2);
        pvVar1 = pvVar2;
      } while (pvVar2 != pvVar3);
      pvVar2 = (void *)*param_1;
    }
    param_1[1] = pvVar3;
    operator_delete(pvVar2);
  }
  return;
}


// ===== 0088b258  FUN_0088b258 =====

void FUN_0088b258(undefined8 *param_1)

{
  param_1[0xe] = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  param_1[9] = param_1 + 10;
  param_1[0xd] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = param_1 + 0xd;
  return;
}


// ===== 0088b288  FUN_0088b288 =====

void FUN_0088b288(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 *local_18;
  
  local_18 = param_1 + 0xc;
  FUN_0088c818(&local_18,param_1[0xd]);
  local_18 = param_1 + 9;
  FUN_0088c818(&local_18,param_1[10]);
  pvVar3 = (void *)param_1[6];
  if (pvVar3 != (void *)0x0) {
    pvVar2 = (void *)param_1[7];
    pvVar1 = pvVar3;
    if (pvVar3 != pvVar2) {
      do {
        pvVar2 = (void *)((long)pvVar2 + -0x330);
        if (pvVar2 == (void *)0x0) goto LAB_0088b3a8;
        FUN_0088b060(pvVar2);
      } while (pvVar2 != pvVar3);
      pvVar1 = (void *)param_1[6];
    }
    param_1[7] = pvVar3;
    operator_delete(pvVar1);
  }
  pvVar3 = (void *)param_1[3];
  if (pvVar3 != (void *)0x0) {
    pvVar2 = (void *)param_1[4];
    pvVar1 = pvVar3;
    if (pvVar3 != pvVar2) {
      do {
        pvVar2 = (void *)((long)pvVar2 + -0x200);
        if (pvVar2 == (void *)0x0) goto LAB_0088b3a8;
        FUN_0088ae28(pvVar2);
      } while (pvVar2 != pvVar3);
      pvVar1 = (void *)param_1[3];
    }
    param_1[4] = pvVar3;
    operator_delete(pvVar1);
  }
  pvVar3 = (void *)*param_1;
  if (pvVar3 != (void *)0x0) {
    pvVar2 = (void *)param_1[1];
    pvVar1 = pvVar3;
    if (pvVar3 != pvVar2) {
      do {
        pvVar2 = (void *)((long)pvVar2 + -0x200);
        if (pvVar2 == (void *)0x0) {
LAB_0088b3a8:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_0088ae28(pvVar2);
      } while (pvVar2 != pvVar3);
      pvVar1 = (void *)*param_1;
    }
    param_1[1] = pvVar3;
    operator_delete(pvVar1);
  }
  return;
}


// ===== 0088b3bc  FUN_0088b3bc =====

void FUN_0088b3bc(undefined8 *param_1)

{
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = param_1 + 7;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  return;
}


// ===== 0088b3e0  FUN_0088b3e0 =====

void FUN_0088b3e0(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 *local_18;
  
  local_18 = param_1 + 6;
  FUN_0088c818(&local_18,param_1[7]);
  pvVar3 = (void *)param_1[3];
  if (pvVar3 != (void *)0x0) {
    pvVar2 = (void *)param_1[4];
    pvVar1 = pvVar3;
    if (pvVar3 != pvVar2) {
      do {
        pvVar2 = (void *)((long)pvVar2 + -0x200);
        if (pvVar2 == (void *)0x0) goto LAB_0088b4a8;
        FUN_0088ae28(pvVar2);
      } while (pvVar2 != pvVar3);
      pvVar1 = (void *)param_1[3];
    }
    param_1[4] = pvVar3;
    operator_delete(pvVar1);
  }
  pvVar3 = (void *)*param_1;
  if (pvVar3 != (void *)0x0) {
    pvVar2 = (void *)param_1[1];
    pvVar1 = pvVar3;
    if (pvVar3 != pvVar2) {
      do {
        pvVar2 = (void *)((long)pvVar2 + -0x200);
        if (pvVar2 == (void *)0x0) {
LAB_0088b4a8:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_0088ae28(pvVar2);
      } while (pvVar2 != pvVar3);
      pvVar1 = (void *)*param_1;
    }
    param_1[1] = pvVar3;
    operator_delete(pvVar1);
  }
  return;
}


// ===== 0088b4bc  FUN_0088b4bc =====

void FUN_0088b4bc(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[3] = param_1 + 4;
  return;
}


// ===== 0088b4d8  FUN_0088b4d8 =====

void FUN_0088b4d8(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 *local_38;
  
  local_38 = param_1 + 3;
  FUN_0088c818(&local_38,param_1[4]);
  pvVar2 = (void *)*param_1;
  if (pvVar2 != (void *)0x0) {
    pvVar1 = pvVar2;
    pvVar3 = (void *)param_1[1];
    if (pvVar2 != (void *)param_1[1]) {
      do {
        pvVar1 = (void *)((long)pvVar3 + -400);
        if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_0065f0c8((long)pvVar3 + -0x70);
        FUN_00666a74((long)pvVar3 + -0xa8);
        FUN_0088a8c4(pvVar1);
        pvVar3 = pvVar1;
      } while (pvVar1 != pvVar2);
      pvVar1 = (void *)*param_1;
    }
    param_1[1] = pvVar2;
    operator_delete(pvVar1);
  }
  return;
}


// ===== 0088b58c  FUN_0088b58c =====

void FUN_0088b58c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[3] = param_1 + 4;
  return;
}


// ===== 0088b5a8  FUN_0088b5a8 =====

void FUN_0088b5a8(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 *local_18;
  
  local_18 = param_1 + 3;
  FUN_0088c818(&local_18,param_1[4]);
  pvVar3 = (void *)*param_1;
  if (pvVar3 != (void *)0x0) {
    pvVar2 = (void *)param_1[1];
    pvVar1 = pvVar3;
    if (pvVar3 != pvVar2) {
      do {
        pvVar2 = (void *)((long)pvVar2 + -0x330);
        if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_0088b060(pvVar2);
      } while (pvVar2 != pvVar3);
      pvVar1 = (void *)*param_1;
    }
    param_1[1] = pvVar3;
    operator_delete(pvVar1);
  }
  return;
}


// ===== 0088b640  FUN_0088b640 =====

void FUN_0088b640(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[3] = param_1 + 4;
  *(undefined4 *)(param_1 + 6) = 0;
  return;
}


// ===== 0088b660  FUN_0088b660 =====

void FUN_0088b660(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 *local_18;
  
  local_18 = param_1 + 3;
  FUN_0088c818(&local_18,param_1[4]);
  pvVar3 = (void *)*param_1;
  if (pvVar3 != (void *)0x0) {
    pvVar2 = (void *)param_1[1];
    pvVar1 = pvVar3;
    if (pvVar3 != pvVar2) {
      do {
        pvVar2 = (void *)((long)pvVar2 + -0x240);
        if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_0088aa9c(pvVar2);
      } while (pvVar2 != pvVar3);
      pvVar1 = (void *)*param_1;
    }
    param_1[1] = pvVar3;
    operator_delete(pvVar1);
  }
  return;
}


// ===== 0088b6f8  FUN_0088b6f8 =====

void FUN_0088b6f8(undefined8 *param_1)

{
  *(undefined2 *)(param_1 + 0xb) = 1;
  *(undefined4 *)((long)param_1 + 0x5c) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x54) = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined8 *)((long)param_1 + 0x49) = 0;
  *(undefined8 *)((long)param_1 + 0x41) = 0;
  *(undefined1 *)((long)param_1 + 0x5a) = 0;
  *param_1 = &PTR_FUN_00d3b0e8;
  *(undefined1 *)(param_1 + 0xc) = 0;
  FUN_00897504(param_1 + 0xd);
  return;
}


// ===== 0088b744  FUN_0088b744 =====

void FUN_0088b744(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3b0e8;
  FUN_00897538(param_1 + 0xd);
  FUN_0088c128(param_1);
  return;
}


// ===== 0088b77c  FUN_0088b77c =====

void FUN_0088b77c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3b0e8;
  FUN_00897538(param_1 + 0xd);
  FUN_0088c128(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0088b7c0  FUN_0088b7c0 =====

void FUN_0088b7c0(undefined8 *param_1,long param_2)

{
  long lVar1;
  void *local_68 [2];
  char cStack_51;
  undefined1 local_50;
  undefined7 uStack_4f;
  undefined8 uStack_48;
  undefined7 local_40;
  char cStack_39;
  undefined1 uStack_31;
  void **local_30;
  undefined8 *puStack_28;
  
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0088b8ac();
  FUN_00897680(&local_50,param_2 + 0x68);
  FUN_005d3510(local_68,"options");
  local_30 = local_68;
  puStack_28 = param_1;
  lVar1 = FUN_0088c894(&puStack_28,local_68,&DAT_001f94c3,&local_30,&uStack_31);
  if (*(char *)(lVar1 + 0x4f) < '\0') {
    operator_delete(*(void **)(lVar1 + 0x38));
    *(undefined8 *)(lVar1 + 0x38) = 0;
    *(undefined8 *)(lVar1 + 0x40) = 0;
    *(undefined8 *)(lVar1 + 0x48) = 0;
  }
  *(ulong *)(lVar1 + 0x48) = CONCAT17(cStack_39,local_40);
  *(undefined8 *)(lVar1 + 0x40) = uStack_48;
  *(ulong *)(lVar1 + 0x38) = CONCAT71(uStack_4f,local_50);
  cStack_39 = '\0';
  local_50 = 0;
  if ((cStack_51 < '\0') && (operator_delete(local_68[0]), cStack_39 < '\0')) {
    operator_delete((void *)CONCAT71(uStack_4f,local_50));
  }
  return;
}


// ===== 0088b8ac  FUN_0088b8ac =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0088b8ac(undefined8 ******param_1,long param_2)

{
  undefined8 *******pppppppuVar1;
  ulong uVar2;
  char *pcVar3;
  undefined8 *******pppppppuVar4;
  long lVar5;
  char cVar6;
  undefined8 ******local_78 [2];
  char cStack_61;
  undefined8 *******local_60;
  ulong uStack_58;
  ulong local_50;
  undefined1 uStack_39;
  undefined8 ******local_38;
  undefined8 *******local_18;
  
  param_1[1] = (undefined8 *****)&DAT_aaaaaaaaaaaaaaaa;
  *param_1 = (undefined8 *****)&DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = (undefined8 *****)&DAT_aaaaaaaaaaaaaaaa;
  FUN_0088c264();
  uStack_58 = 0;
  local_50 = 0;
  local_60 = (undefined8 *******)0x0;
  FUN_005f55c4(&local_60,0x16,*(undefined4 *)(param_2 + 0x5c));
  FUN_005d3510(local_78,"max_bandwidth_bps");
  local_38 = local_78;
  local_18 = (undefined8 *******)param_1;
  lVar5 = FUN_0088c894(&local_18,local_78,&DAT_001f94c3,&local_38,&uStack_39);
  if (*(char *)(lVar5 + 0x4f) < '\0') {
    operator_delete(*(void **)(lVar5 + 0x38));
    *(undefined8 *)(lVar5 + 0x38) = 0;
    *(undefined8 *)(lVar5 + 0x40) = 0;
    *(undefined8 *)(lVar5 + 0x48) = 0;
  }
  *(ulong *)(lVar5 + 0x48) = local_50;
  *(ulong *)(lVar5 + 0x40) = uStack_58;
  *(undefined8 ********)(lVar5 + 0x38) = local_60;
  local_50 = local_50 & 0xffffffffffffff;
  local_60 = (undefined8 *******)((ulong)local_60 & 0xffffffffffffff00);
  if ((cStack_61 < '\0') && (operator_delete(local_78[0]), (long)local_50 < 0)) {
    operator_delete(local_60);
    cVar6 = *(char *)(param_2 + 0x1f);
    if (cVar6 < '\0') goto LAB_0088b9c0;
LAB_0088b990:
    if (cVar6 != '\0') {
      uStack_58 = *(ulong *)(param_2 + 0x10);
      local_60 = *(undefined8 ********)(param_2 + 8);
      local_50 = *(ulong *)(param_2 + 0x18);
      goto LAB_0088b9e8;
    }
  }
  else {
    cVar6 = *(char *)(param_2 + 0x1f);
    if (-1 < cVar6) goto LAB_0088b990;
LAB_0088b9c0:
    if (*(long *)(param_2 + 0x10) != 0) {
      FUN_005478d8(&local_60,*(undefined8 *)(param_2 + 8));
      goto LAB_0088b9e8;
    }
  }
  FUN_005d3510(&local_60,"<not set>");
LAB_0088b9e8:
  FUN_005d3510(local_78,&DAT_001c368f);
  local_38 = local_78;
  local_18 = (undefined8 *******)param_1;
  lVar5 = FUN_0088c894(&local_18,local_78,&DAT_001f94c3,&local_38,&uStack_39);
  pppppppuVar1 = (undefined8 *******)(lVar5 + 0x38);
  if ((undefined8 ********)pppppppuVar1 != &local_60) {
    if (*(char *)(lVar5 + 0x4f) < '\0') {
      uVar2 = uStack_58;
      pppppppuVar4 = local_60;
      if (-1 < (long)local_50) {
        uVar2 = local_50 >> 0x38;
        pppppppuVar4 = &local_60;
      }
      FUN_00547f08(pppppppuVar1,pppppppuVar4,uVar2);
    }
    else if ((long)local_50 < 0) {
      FUN_00547fc0(pppppppuVar1,local_60,uStack_58);
    }
    else {
      *(ulong *)(lVar5 + 0x48) = local_50;
      *(ulong *)(lVar5 + 0x40) = uStack_58;
      *pppppppuVar1 = local_60;
    }
  }
  if (cStack_61 < '\0') {
    operator_delete(local_78[0]);
  }
  if ((long)local_50 < 0) {
    operator_delete(local_60);
  }
  cVar6 = *(char *)(param_2 + 0x60);
  FUN_005d3510(&local_60,"extmap-allow-mixed");
  local_78[0] = param_1;
  local_18 = &local_60;
  lVar5 = FUN_0088c894(local_78,&local_60,&DAT_001f94c3,&local_18,&local_38);
  pcVar3 = "true";
  if (cVar6 == '\0') {
    pcVar3 = "false";
  }
  FUN_00547bf8(lVar5 + 0x38,pcVar3);
  if ((long)local_50 < 0) {
    operator_delete(local_60);
  }
  return;
}


// ===== 0088bb54  FUN_0088bb54 =====

void FUN_0088bb54(undefined8 *param_1)

{
  *(undefined1 *)((long)param_1 + 0x54) = 0;
  *(undefined2 *)(param_1 + 0xb) = 1;
  *(undefined4 *)((long)param_1 + 0x5c) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x5a) = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined8 *)((long)param_1 + 0x49) = 0;
  *(undefined8 *)((long)param_1 + 0x41) = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *param_1 = &PTR_thunk_FUN_0088c128_00d3b110;
  return;
}


// ===== 0088bb9c  thunk_FUN_0088c128 =====

void thunk_FUN_0088c128(void)

{
  FUN_0088c128();
  return;
}


// ===== 0088bba4  FUN_0088bba4 =====

void FUN_0088bba4(void *param_1)

{
  FUN_0088c128();
  operator_delete(param_1);
  return;
}


// ===== 0088bbd4  FUN_0088bbd4 =====

void FUN_0088bbd4(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  void *local_58 [2];
  char cStack_41;
  undefined1 uStack_39;
  void **local_38;
  undefined8 *local_18;
  
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0088b8ac();
  cVar2 = *(char *)(param_2 + 0x61);
  FUN_005d3510(local_58,"conference_mode");
  local_38 = local_58;
  local_18 = param_1;
  lVar3 = FUN_0088c894(&local_18,local_58,&DAT_001f94c3,&local_38,&uStack_39);
  puVar1 = &DAT_001b37c4;
  if (cVar2 == '\0') {
    puVar1 = &UNK_001d3110;
  }
  FUN_00547bf8(lVar3 + 0x38,puVar1);
  if (cStack_41 < '\0') {
    operator_delete(local_58[0]);
  }
  return;
}


// ===== 0088bc90  FUN_0088bc90 =====

void FUN_0088bc90(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  
  pvVar2 = (void *)param_1[1];
  *param_1 = &PTR_FUN_00d3b138;
  if ((pvVar2 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar2), iVar1 == 1)) {
    operator_delete(pvVar2);
    return;
  }
  return;
}


// ===== 0088bcf0  FUN_0088bcf0 =====

void FUN_0088bcf0(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  
  pvVar2 = (void *)param_1[1];
  *param_1 = &PTR_FUN_00d3b138;
  if ((pvVar2 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar2), iVar1 == 1)) {
    operator_delete(pvVar2);
  }
  operator_delete(param_1);
  return;
}


// ===== 0088bd50  FUN_0088bd50 =====

undefined8 FUN_0088bd50(long param_1,void *param_2,undefined1 *param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined1 uStack_f1;
  long local_f0;
  undefined1 *local_e8;
  undefined1 *puStack_e0;
  undefined1 *local_d8;
  undefined1 *puStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 *puStack_b8;
  code *local_b0;
  code *pcStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined8 local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 uStack_41;
  
  puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
  local_d8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e0 = &DAT_aaaaaaaaaaaaaaaa;
  local_e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_f0 = param_1;
  FUN_007b54d0(&local_e8,param_3,0x800);
  if (local_e8 != (undefined1 *)0x0) {
    memcpy(*(void **)(local_e8 + 0x10),param_2,(size_t)param_3);
    puStack_e0 = (undefined1 *)0x0;
    local_d8 = param_3;
  }
  FUN_005d34f0(&puStack_d0,param_4);
  lVar5 = *(long *)(param_1 + 0x10);
  lVar2 = FUN_005d6490();
  lVar1 = local_f0;
  if (lVar2 == lVar5) {
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    local_58 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
    pcStack_a8 = (code *)&DAT_aaaaaaaaaaaaaaaa;
    local_b0 = (code *)&DAT_aaaaaaaaaaaaaaaa;
    puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_c0 = (long *)&DAT_aaaaaaaaaaaaaaaa;
    FUN_00897b38(&local_c0);
    puStack_b8 = puStack_d0;
    if (*(char *)(lVar1 + 0x18) == '\x01') {
      local_c0 = (long *)CONCAT44(local_c0._4_4_,*(undefined4 *)(lVar1 + 0x28));
    }
    local_80._0_3_ = CONCAT12((undefined1)local_c8,local_c8._1_2_);
    local_c0._0_5_ = CONCAT14(local_c8._3_1_,(undefined4)local_c0);
    local_58 = (undefined1 *)CONCAT62(local_58._2_6_,local_c8._4_2_);
    plVar4 = *(long **)(lVar1 + 0x20);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))(plVar4,&local_e8,&local_c0);
    }
    FUN_00897c8c(&local_c0);
  }
  else {
    lVar1 = *(long *)(param_1 + 8);
    plVar4 = *(long **)(param_1 + 0x10);
    if (lVar1 != 0) {
      FUN_00d0f740(1,lVar1);
    }
    plVar3 = (long *)operator_new(0x30);
    *plVar3 = local_f0;
    FUN_007b5434(plVar3 + 1,&local_e8);
    FUN_005d34f0(plVar3 + 4,&puStack_d0);
    local_c0 = (long *)operator_new(0x30);
    *local_c0 = lVar1;
    local_c0[4] = (long)FUN_0088caac;
    local_c0[5] = (long)FUN_0088ca00;
    local_c0[2] = (long)plVar3;
    local_b0 = FUN_005db390;
    pcStack_a8 = FUN_005db348;
    (**(code **)(*plVar4 + 8))(plVar4,&local_c0,&uStack_41,&uStack_f1);
    (*local_b0)(0,&local_c0,&local_c0);
  }
  FUN_005d3508(&puStack_d0);
  FUN_007b5554(&local_e8);
  return 1;
}


// ===== 0088bf3c  FUN_0088bf3c =====

undefined8 FUN_0088bf3c(long param_1,void *param_2,undefined1 *param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 uStack_f1;
  long local_f0;
  undefined1 *local_e8;
  undefined1 *puStack_e0;
  undefined1 *local_d8;
  undefined1 *puStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 *puStack_b8;
  code *local_b0;
  code *pcStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined8 local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 uStack_41;
  
  puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
  local_d8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e0 = &DAT_aaaaaaaaaaaaaaaa;
  local_e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_f0 = param_1;
  FUN_007b54d0(&local_e8,param_3,0x800);
  if (local_e8 != (undefined1 *)0x0) {
    memcpy(*(void **)(local_e8 + 0x10),param_2,(size_t)param_3);
    puStack_e0 = (undefined1 *)0x0;
    local_d8 = param_3;
  }
  FUN_005d34f0(&puStack_d0,param_4);
  lVar6 = *(long *)(param_1 + 0x10);
  lVar3 = FUN_005d6490();
  lVar1 = local_f0;
  if (lVar3 == lVar6) {
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    local_58 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
    pcStack_a8 = (code *)&DAT_aaaaaaaaaaaaaaaa;
    local_b0 = (code *)&DAT_aaaaaaaaaaaaaaaa;
    puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_c0 = (long *)&DAT_aaaaaaaaaaaaaaaa;
    FUN_00897b38(&local_c0);
    puStack_b8 = puStack_d0;
    if (*(char *)(lVar1 + 0x18) == '\x01') {
      local_c0 = (long *)CONCAT44(local_c0._4_4_,*(undefined4 *)(lVar1 + 0x28));
    }
    local_80._0_3_ = CONCAT12((undefined1)local_c8,local_c8._1_2_);
    local_c0._0_5_ = CONCAT14(local_c8._3_1_,(undefined4)local_c0);
    local_58 = (undefined1 *)CONCAT62(local_58._2_6_,local_c8._4_2_);
    puVar5 = *(undefined8 **)(lVar1 + 0x20);
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,&local_e8,&local_c0);
    }
    FUN_00897c8c(&local_c0);
  }
  else {
    lVar1 = *(long *)(param_1 + 8);
    plVar2 = *(long **)(param_1 + 0x10);
    if (lVar1 != 0) {
      FUN_00d0f740(1,lVar1);
    }
    plVar4 = (long *)operator_new(0x30);
    *plVar4 = local_f0;
    FUN_007b5434(plVar4 + 1,&local_e8);
    FUN_005d34f0(plVar4 + 4,&puStack_d0);
    local_c0 = (long *)operator_new(0x30);
    *local_c0 = lVar1;
    local_c0[4] = (long)FUN_0088cbc8;
    local_c0[5] = (long)FUN_0088cb1c;
    local_c0[2] = (long)plVar4;
    local_b0 = FUN_005db390;
    pcStack_a8 = FUN_005db348;
    (**(code **)(*plVar2 + 8))(plVar2,&local_c0,&uStack_41,&uStack_f1);
    (*local_b0)(0,&local_c0,&local_c0);
  }
  FUN_005d3508(&puStack_d0);
  FUN_007b5554(&local_e8);
  return 1;
}


// ===== 0088c128  FUN_0088c128 =====

void FUN_0088c128(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 *puVar6;
  
  pvVar5 = (void *)param_1[7];
  *param_1 = &PTR_FUN_00d3b168;
  if (pvVar5 != (void *)0x0) {
    pvVar4 = (void *)param_1[8];
    pvVar1 = pvVar5;
    if (pvVar5 != pvVar4) {
      do {
        pvVar4 = (void *)((long)pvVar4 + -0x20);
        if (pvVar4 == (void *)0x0) goto LAB_0088c220;
        FUN_00668f8c(pvVar4);
      } while (pvVar4 != pvVar5);
      pvVar1 = (void *)param_1[7];
    }
    param_1[8] = pvVar5;
    operator_delete(pvVar1);
  }
  puVar6 = (undefined8 *)param_1[4];
  if (puVar6 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)param_1[5];
    puVar2 = puVar6;
    if (puVar6 != puVar3) {
      do {
        puVar3 = puVar3 + -0x1b;
        if (puVar3 == (undefined8 *)0x0) {
LAB_0088c220:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        (**(code **)*puVar3)(puVar3);
      } while (puVar3 != puVar6);
      puVar2 = (undefined8 *)param_1[4];
    }
    param_1[5] = puVar6;
    operator_delete(puVar2);
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 0088c234  FUN_0088c234 =====

void FUN_0088c234(void *param_1)

{
  FUN_0088c128();
  operator_delete(param_1);
  return;
}


// ===== 0088c264  FUN_0088c264 =====

/* WARNING: Removing unreachable block (ram,0x0088c790) */
/* WARNING: Removing unreachable block (ram,0x0088c508) */
/* WARNING: Removing unreachable block (ram,0x0088c464) */
/* WARNING: Removing unreachable block (ram,0x0088c2e8) */
/* WARNING: Removing unreachable block (ram,0x0088c3b4) */
/* WARNING: Removing unreachable block (ram,0x0088c7c0) */

void FUN_0088c264(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ****ppppuVar2;
  undefined8 ***pppuVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  undefined8 uVar8;
  undefined8 ***local_170;
  ulong local_168;
  ulong local_160;
  void *local_158;
  undefined8 local_150;
  long local_148;
  void *local_140;
  undefined8 uStack_138;
  long local_130;
  void *local_120;
  undefined8 uStack_118;
  long local_110;
  void *local_108;
  undefined8 uStack_100;
  long local_f8;
  void *local_f0 [2];
  char cStack_d9;
  undefined8 ***local_d8;
  ulong uStack_d0;
  ulong local_c8;
  void *local_c0 [2];
  char cStack_a9;
  void *local_a8;
  undefined8 uStack_a0;
  long local_98;
  undefined8 ***local_90;
  ulong uStack_88;
  ulong local_80;
  undefined8 ***local_70;
  ulong uStack_68;
  ulong local_60;
  
  local_120 = (void *)0x0;
  uStack_118 = 0;
  local_110 = 0;
  FUN_00547cac(&local_120,&DAT_0019769a,1);
  if (*(long *)(param_2 + 0x28) != *(long *)(param_2 + 0x20)) {
    FUN_00891f68(&local_70);
    uVar5 = uStack_68;
    ppppuVar2 = (undefined8 ****)local_70;
    if (-1 < (long)local_60) {
      uVar5 = local_60 >> 0x38;
      ppppuVar2 = &local_70;
    }
    FUN_00547cac(&local_120,ppppuVar2,uVar5);
    if (1 < (ulong)((*(long *)(param_2 + 0x28) - *(long *)(param_2 + 0x20) >> 3) *
                   -0x7b425ed097b425ed)) {
      uVar5 = 1;
      lVar6 = 0xd8;
      do {
        FUN_00547cac(&local_120,&DAT_001e1644,2);
        if ((ulong)((*(long *)(param_2 + 0x28) - *(long *)(param_2 + 0x20) >> 3) *
                   -0x7b425ed097b425ed) <= uVar5) goto LAB_0088c804;
        FUN_00891f68(&local_70,*(long *)(param_2 + 0x20) + lVar6);
        uVar1 = uStack_68;
        ppppuVar2 = (undefined8 ****)local_70;
        if (-1 < (long)local_60) {
          uVar1 = local_60 >> 0x38;
          ppppuVar2 = &local_70;
        }
        FUN_00547cac(&local_120,ppppuVar2,uVar1);
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0xd8;
      } while (uVar5 < (ulong)((*(long *)(param_2 + 0x28) - *(long *)(param_2 + 0x20) >> 3) *
                              -0x7b425ed097b425ed));
    }
  }
  FUN_00547cac(&local_120,&DAT_0019fa9e,1);
  lVar6 = local_110;
  uVar8 = uStack_118;
  pvVar7 = local_120;
  FUN_005d3510(&local_120,"codecs");
  local_f8 = lVar6;
  uStack_100 = uVar8;
  local_108 = pvVar7;
  local_70 = (undefined8 ****)0x0;
  uStack_68 = 0;
  local_60 = 0;
  FUN_00547cac(&local_70,&DAT_0019769a,1);
  if (*(long *)(param_2 + 0x40) != *(long *)(param_2 + 0x38)) {
    FUN_006699d4(&local_90);
    uVar5 = uStack_88;
    ppppuVar2 = (undefined8 ****)local_90;
    if (-1 < (long)local_80) {
      uVar5 = local_80 >> 0x38;
      ppppuVar2 = &local_90;
    }
    FUN_00547cac(&local_70,ppppuVar2,uVar5);
    if (0x20 < (ulong)(*(long *)(param_2 + 0x40) - *(long *)(param_2 + 0x38))) {
      uVar5 = 1;
      lVar6 = 0x20;
      do {
        FUN_00547cac(&local_70,&DAT_001e1644,2);
        if ((ulong)(*(long *)(param_2 + 0x40) - *(long *)(param_2 + 0x38) >> 5) <= uVar5) {
LAB_0088c804:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                    );
        }
        FUN_006699d4(&local_90,*(long *)(param_2 + 0x38) + lVar6);
        uVar1 = uStack_88;
        ppppuVar2 = (undefined8 ****)local_90;
        if (-1 < (long)local_80) {
          uVar1 = local_80 >> 0x38;
          ppppuVar2 = &local_90;
        }
        FUN_00547cac(&local_70,ppppuVar2,uVar1);
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x20;
      } while (uVar5 < (ulong)(*(long *)(param_2 + 0x40) - *(long *)(param_2 + 0x38) >> 5));
    }
  }
  FUN_00547cac(&local_70,&DAT_0019fa9e,1);
  uVar1 = local_60;
  uVar5 = uStack_68;
  pppuVar3 = local_70;
  FUN_005d3510(local_f0,"extensions");
  local_c8 = uVar1;
  uStack_d0 = uVar5;
  local_d8 = pppuVar3;
  local_150 = 0;
  local_148 = 0;
  local_158 = (void *)0x0;
  FUN_005f55c4(&local_158,0x16,*(undefined1 *)(param_2 + 0x59));
  puVar4 = (undefined8 *)FUN_00547994(&local_158,0,"{reduced_size:",0xe);
  uStack_138 = puVar4[1];
  local_140 = (void *)*puVar4;
  local_130 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  puVar4 = (undefined8 *)FUN_00547cac(&local_140,", remote_estimate:",0x12);
  uStack_88 = puVar4[1];
  local_90 = (undefined8 ***)*puVar4;
  local_80 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  local_168 = 0;
  local_160 = 0;
  local_170 = (undefined8 ****)0x0;
  FUN_005f55c4(&local_170,0x16,*(undefined1 *)(param_2 + 0x5a));
  uVar5 = local_168;
  ppppuVar2 = (undefined8 ****)local_170;
  if (-1 < (long)local_160) {
    uVar5 = local_160 >> 0x38;
    ppppuVar2 = &local_170;
  }
  puVar4 = (undefined8 *)FUN_00547cac(&local_90,ppppuVar2,uVar5);
  uStack_68 = puVar4[1];
  local_70 = (undefined8 ***)*puVar4;
  local_60 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  puVar4 = (undefined8 *)FUN_00547cac(&local_70,&DAT_001b0cbb,1);
  uVar8 = puVar4[1];
  pvVar7 = (void *)*puVar4;
  lVar6 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  FUN_005d3510(local_c0,&DAT_001e5a02);
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  local_a8 = pvVar7;
  uStack_a0 = uVar8;
  local_98 = lVar6;
  FUN_00673fa0(param_1,&local_120,&local_90);
  if (local_98 < 0) {
    operator_delete(local_a8);
  }
  if (cStack_a9 < '\0') {
    operator_delete(local_c0[0]);
  }
  if ((long)local_c8 < 0) {
    operator_delete(local_d8);
  }
  if (cStack_d9 < '\0') {
    operator_delete(local_f0[0]);
  }
  if (local_f8 < 0) {
    operator_delete(local_108);
  }
  if (local_110 < 0) {
    operator_delete(local_120);
  }
  if ((long)local_160 < 0) {
    operator_delete(local_170);
  }
  if (local_130 < 0) {
    operator_delete(local_140);
  }
  if (local_148 < 0) {
    operator_delete(local_158);
  }
  return;
}


// ===== 0088c818  FUN_0088c818 =====

void FUN_0088c818(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_0088c818(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      puVar1 = (undefined8 *)param_2[1];
      FUN_00668620(param_2 + 5);
      operator_delete(param_2);
      param_2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
  }
  return;
}


// ===== 0088c894  FUN_0088c894 =====

undefined1  [16]
FUN_0088c894(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

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
          goto LAB_0088c9c4;
        }
        if (uVar2 <= uVar1) goto LAB_0088c8dc;
LAB_0088c92c:
        plVar6 = (long *)*plVar4;
        plVar10 = plVar4;
        if ((long *)*plVar4 == (long *)0x0) goto LAB_0088c948;
      }
      if (iVar3 < 0) goto LAB_0088c92c;
LAB_0088c8dc:
      plVar6 = (long *)plVar4[1];
    } while ((long *)plVar4[1] != (long *)0x0);
    plVar10 = plVar4 + 1;
  }
LAB_0088c948:
  plVar4 = (long *)operator_new(0x50);
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
      plVar4[8] = 0;
      plVar4[9] = 0;
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
LAB_0088c9c4:
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


// ===== 0088ca00  FUN_0088ca00 =====

void FUN_0088ca00(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined8 local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *local_28;
  
  param_1 = (long *)*param_1;
  lVar2 = *param_1;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_28 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00897b38(&local_90);
  puStack_88 = (undefined1 *)param_1[4];
  if (*(char *)(lVar2 + 0x18) == '\x01') {
    local_90 = (undefined1 *)CONCAT44(local_90._4_4_,*(undefined4 *)(lVar2 + 0x28));
  }
  local_50._0_3_ = CONCAT12((char)param_1[5],*(undefined2 *)((long)param_1 + 0x29));
  local_90._0_5_ = CONCAT14(*(undefined1 *)((long)param_1 + 0x2b),(undefined4)local_90);
  local_28 = (undefined1 *)CONCAT62(local_28._2_6_,*(undefined2 *)((long)param_1 + 0x2c));
  plVar1 = *(long **)(lVar2 + 0x20);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,param_1 + 1,&local_90);
  }
  FUN_00897c8c(&local_90);
  return;
}


// ===== 0088caac  FUN_0088caac =====

void FUN_0088caac(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x88cb1c);
      (*pcVar1)();
    }
    pvVar2 = (void *)*param_2;
    if (pvVar2 != (void *)0x0) {
      FUN_005d3508((long)pvVar2 + 0x20);
      FUN_007b5554((long)pvVar2 + 8);
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}


// ===== 0088cb1c  FUN_0088cb1c =====

void FUN_0088cb1c(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined8 local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *local_28;
  
  param_1 = (long *)*param_1;
  lVar2 = *param_1;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_28 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00897b38(&local_90);
  puStack_88 = (undefined1 *)param_1[4];
  if (*(char *)(lVar2 + 0x18) == '\x01') {
    local_90 = (undefined1 *)CONCAT44(local_90._4_4_,*(undefined4 *)(lVar2 + 0x28));
  }
  local_50._0_3_ = CONCAT12((char)param_1[5],*(undefined2 *)((long)param_1 + 0x29));
  local_90._0_5_ = CONCAT14(*(undefined1 *)((long)param_1 + 0x2b),(undefined4)local_90);
  local_28 = (undefined1 *)CONCAT62(local_28._2_6_,*(undefined2 *)((long)param_1 + 0x2c));
  puVar1 = *(undefined8 **)(lVar2 + 0x20);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,param_1 + 1,&local_90);
  }
  FUN_00897c8c(&local_90);
  return;
}


// ===== 0088cbc8  FUN_0088cbc8 =====

void FUN_0088cbc8(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x88cc38);
      (*pcVar1)();
    }
    pvVar2 = (void *)*param_2;
    if (pvVar2 != (void *)0x0) {
      FUN_005d3508((long)pvVar2 + 0x20);
      FUN_007b5554((long)pvVar2 + 8);
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}


// ===== 0088cc38  FUN_0088cc38 =====

void FUN_0088cc38(undefined8 *param_1)

{
  FUN_0088a780(*param_1,*(undefined4 *)(param_1 + 1));
  return;
}


// ===== 0088cc4c  FUN_0088cc4c =====

undefined8 * FUN_0088cc4c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
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
    FUN_005e72f8(param_1 + 3,param_2[3],param_2[4],(long)(param_2[4] - param_2[3]) >> 2);
    FUN_0088e978(param_1 + 6,param_2[6],param_2[7],
                 ((long)(param_2[7] - param_2[6]) >> 4) * -0x5555555555555555);
    bVar2 = *(byte *)((long)param_2 + 0x5f);
    if (*(char *)((long)param_1 + 0x5f) < '\0') {
      uVar1 = param_2[10];
      puVar3 = (undefined8 *)param_2[9];
      if (-1 < (char)bVar2) {
        uVar1 = (ulong)bVar2;
        puVar3 = param_2 + 9;
      }
      FUN_00547f08(param_1 + 9,puVar3,uVar1);
    }
    else if ((char)bVar2 < '\0') {
      FUN_00547fc0(param_1 + 9,param_2[9],param_2[10]);
    }
    else {
      uVar5 = param_2[10];
      uVar4 = param_2[9];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar5;
      param_1[9] = uVar4;
    }
    FUN_007eeac8(param_1 + 0xc,param_2[0xc],param_2[0xd],
                 ((long)(param_2[0xd] - param_2[0xc]) >> 3) * -0x5555555555555555);
    FUN_0088ec84(param_1 + 0xf,param_2[0xf],param_2[0x10],
                 ((long)(param_2[0x10] - param_2[0xf]) >> 4) * -0x3333333333333333);
  }
  return param_1;
}


// ===== 0088cd98  FUN_0088cd98 =====

void FUN_0088cd98(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined8 *param_4)

{
  ulong uVar1;
  void *__src;
  ulong uVar2;
  undefined8 *__dest;
  void *__dest_00;
  
  if (0x7ffffffffffffff6 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_3 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)param_3;
    __dest = param_1;
  }
  else {
    uVar2 = (param_3 & 0x7ffffffffffffff8) + 8;
    uVar1 = 0x19;
    if (uVar2 != 0x18) {
      uVar1 = uVar2;
    }
    __dest = (undefined8 *)operator_new(uVar1);
    *param_1 = __dest;
    param_1[1] = param_3;
    param_1[2] = uVar1 | 0x8000000000000000;
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
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[3] = 0;
    __src = (void *)*param_4;
    uVar2 = param_4[1] - (long)__src;
    if (uVar2 != 0) {
      if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005da79c();
      }
      __dest_00 = operator_new(uVar2);
      param_1[3] = __dest_00;
      param_1[4] = __dest_00;
      param_1[5] = (long)__dest_00 + uVar2;
      memcpy(__dest_00,__src,uVar2);
      param_1[4] = (long)__dest_00 + uVar2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 0088cec4  FUN_0088cec4 =====

void FUN_0088cec4(undefined8 *param_1,undefined8 *param_2)

{
  void *__src;
  ulong __n;
  void *__dest;
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_005478d8(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  __src = (void *)param_2[3];
  __n = param_2[4] - (long)__src;
  if (__n != 0) {
    if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005da79c();
    }
    __dest = operator_new(__n);
    param_1[3] = __dest;
    param_1[4] = __dest;
    param_1[5] = (long)__dest + __n;
    memcpy(__dest,__src,__n);
    param_1[4] = (long)__dest + __n;
  }
  return;
}


// ===== 0088cf5c  FUN_0088cf5c =====

void FUN_0088cf5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  return;
}


// ===== 0088cfa4  FUN_0088cfa4 =====

void FUN_0088cfa4(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[3];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[4];
    uVar4 = (ulong)((long)pvVar2 + (-4 - ((long)pvVar2 << 0x3e))) >> 2;
    uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3e) - ((long)pvVar1 - (long)pvVar2)) >> 2;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 3U) == 0)) {
      uVar3 = uVar3 & 0x3ffffffffffffffe;
      pvVar2 = (void *)((long)pvVar2 + uVar3 * -4);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -4);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[4] = pvVar1;
    operator_delete(pvVar1);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
  operator_delete((void *)*param_1);
  return;
}


// ===== 0088d07c  FUN_0088d07c =====

bool FUN_0088d07c(undefined8 *param_1,void *param_2,size_t param_3)

{
  undefined8 *__s2;
  bool bVar1;
  int iVar2;
  size_t __n;
  
  __n = (size_t)*(char *)((long)param_1 + 0x17);
  __s2 = param_1;
  if ((long)__n < 0) {
    __n = param_1[1];
    __s2 = (undefined8 *)*param_1;
  }
  if ((param_3 == __n) && (iVar2 = memcmp(param_2,__s2,__n), iVar2 == 0)) {
    bVar1 = param_1[3] != param_1[4];
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


// ===== 0088d0ec  FUN_0088d0ec =====

void FUN_0088d0ec(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 *local_450;
  undefined1 *puStack_448;
  undefined1 *local_440;
  undefined1 auStack_438 [1024];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  memset(auStack_438,0xaa,0x400);
  local_440 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_448 = &DAT_aaaaaaaaaaaaaaaa;
  local_450 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00622830(&local_450,auStack_438,0x400);
  FUN_006228b0(&local_450,&DAT_001d05bd,1);
  uVar3 = FUN_006228b0(&local_450,"semantics:",10);
  lVar5 = (long)*(char *)((long)param_2 + 0x17);
  puVar4 = param_2;
  if (lVar5 < 0) {
    lVar5 = param_2[1];
    puVar4 = (undefined8 *)*param_2;
  }
  uVar3 = FUN_006228b0(uVar3,puVar4,lVar5);
  FUN_006228b0(uVar3,&DAT_001a5eba,1);
  lVar1 = param_2[4] - param_2[3];
  lVar5 = 0;
  if (lVar1 != 0) {
    lVar5 = param_2[3];
  }
  FUN_0088d1f8(lVar5,lVar1 >> 2,&local_450);
  FUN_006228b0(&local_450,&DAT_001b0cbb,1);
  FUN_005d3510(param_1,local_450);
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0088d1f8  FUN_0088d1f8 =====

void FUN_0088d1f8(undefined4 *param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 *puVar4;
  
  FUN_006228b0(param_3,"ssrcs:[",7);
  if (param_2 * 4 != 0) {
    uVar1 = *param_1;
    uVar2 = FUN_006228b0(param_3,&DAT_001b3348,0);
    FUN_006229f8(uVar2,uVar1);
    lVar3 = param_2 * 4 + -4;
    if (lVar3 != 0) {
      puVar4 = param_1 + 1;
      do {
        uVar1 = *puVar4;
        uVar2 = FUN_006228b0(param_3,&DAT_001ea264,1);
        FUN_006229f8(uVar2,uVar1);
        lVar3 = lVar3 + -4;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
    }
  }
  FUN_006228b0(param_3,&DAT_0019fa9e,1);
  return;
}


// ===== 0088d2b8  FUN_0088d2b8 =====

void FUN_0088d2b8(undefined8 *param_1)

{
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}


// ===== 0088d2d8  FUN_0088d2d8 =====

void FUN_0088d2d8(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  void *__dest;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_005478d8(param_1,*param_2,param_2[1]);
  }
  else {
    uVar7 = param_2[1];
    uVar6 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar7;
    *param_1 = uVar6;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  pvVar3 = (void *)param_2[3];
  uVar2 = param_2[4] - (long)pvVar3;
  if (uVar2 != 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005da79c();
    }
    __dest = operator_new(uVar2);
    param_1[3] = __dest;
    param_1[4] = __dest;
    param_1[5] = (long)__dest + uVar2;
    memcpy(__dest,pvVar3,uVar2);
    param_1[4] = (long)__dest + uVar2;
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  lVar4 = param_2[6];
  lVar1 = param_2[7];
  uVar2 = lVar1 - lVar4;
  if (uVar2 != 0) {
    uVar5 = ((long)uVar2 >> 4) * -0x5555555555555555;
    if (0x555555555555555 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_0088e848();
    }
    pvVar3 = operator_new(uVar2);
    param_1[6] = pvVar3;
    param_1[7] = pvVar3;
    param_1[8] = (long)pvVar3 + uVar2;
    FUN_0088e75c(param_1 + 6,lVar4,lVar1,uVar5);
  }
  if (*(char *)((long)param_2 + 0x5f) < '\0') {
    FUN_005478d8(param_1 + 9,param_2[9],param_2[10]);
  }
  else {
    uVar7 = param_2[10];
    uVar6 = param_2[9];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar7;
    param_1[9] = uVar6;
  }
  FUN_00843ef4(param_1 + 0xc,param_2 + 0xc);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  lVar4 = param_2[0xf];
  lVar1 = param_2[0x10];
  uVar2 = lVar1 - lVar4;
  if (uVar2 != 0) {
    if (0x333333333333333 < (ulong)(((long)uVar2 >> 4) * -0x3333333333333333)) {
                    /* WARNING: Subroutine does not return */
      FUN_0088e860();
    }
    pvVar3 = operator_new(uVar2);
    param_1[0xf] = pvVar3;
    param_1[0x10] = pvVar3;
    param_1[0x11] = (long)pvVar3 + uVar2;
    do {
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_0088f9d8(pvVar3,lVar4);
      lVar4 = lVar4 + 0x50;
      pvVar3 = (void *)((long)pvVar3 + 0x50);
    } while (lVar4 != lVar1);
    param_1[0x10] = pvVar3;
  }
  return;
}


// ===== 0088d4a0  FUN_0088d4a0 =====

void FUN_0088d4a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  uVar2 = param_2[10];
  uVar1 = param_2[9];
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar2;
  param_1[9] = uVar1;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  return;
}


// ===== 0088d578  FUN_0088d578 =====

/* WARNING: Removing unreachable block (ram,0x0088d60c) */

void FUN_0088d578(undefined8 *param_1)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar5 = (void *)param_1[0xf];
  if (pvVar5 != (void *)0x0) {
    pvVar4 = (void *)param_1[0x10];
    pvVar1 = pvVar5;
    if (pvVar5 != pvVar4) {
      do {
        pvVar4 = (void *)((long)pvVar4 + -0x50);
        if (pvVar4 == (void *)0x0) goto LAB_0088d6d8;
        FUN_0088fb24(pvVar4);
      } while (pvVar4 != pvVar5);
      pvVar1 = (void *)param_1[0xf];
    }
    param_1[0x10] = pvVar5;
    operator_delete(pvVar1);
  }
  pvVar5 = (void *)param_1[0xc];
  if (pvVar5 != (void *)0x0) {
    pvVar4 = (void *)param_1[0xd];
    pvVar1 = pvVar5;
    if (pvVar5 != pvVar4) {
      do {
        pvVar4 = (void *)((long)pvVar4 + -0x18);
        if (pvVar4 == (void *)0x0) goto LAB_0088d6d8;
      } while (pvVar4 != pvVar5);
      pvVar1 = (void *)param_1[0xc];
    }
    param_1[0xd] = pvVar5;
    operator_delete(pvVar1);
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  if (param_1[6] != 0) {
    FUN_0088e878();
    operator_delete((void *)param_1[6]);
  }
  pvVar5 = (void *)param_1[3];
  if (pvVar5 != (void *)0x0) {
    pvVar4 = (void *)param_1[4];
    uVar3 = (ulong)((long)pvVar4 + (-4 - ((long)pvVar4 << 0x3e))) >> 2;
    uVar2 = (ulong)(((long)pvVar5 - (long)pvVar4 << 0x3e) - ((long)pvVar5 - (long)pvVar4)) >> 2;
    if (uVar3 <= uVar2) {
      uVar2 = uVar3;
    }
    if ((1 < uVar2) && ((((int)pvVar5 - (int)pvVar4 | -(int)pvVar4) & 3U) == 0)) {
      uVar2 = uVar2 & 0x3ffffffffffffffe;
      pvVar4 = (void *)((long)pvVar4 + uVar2 * -4);
      do {
        uVar2 = uVar2 - 2;
      } while (uVar2 != 0);
    }
    while (pvVar4 != pvVar5) {
      pvVar4 = (void *)((long)pvVar4 + -4);
      if (pvVar4 == (void *)0x0) {
LAB_0088d6d8:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[4] = pvVar5;
    operator_delete(pvVar5);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
  operator_delete((void *)*param_1);
  return;
}


// ===== 0088d738  FUN_0088d738 =====

/* WARNING: Removing unreachable block (ram,0x0088d90c) */

undefined8 * FUN_0088d738(undefined8 *param_1,undefined8 *param_2)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    operator_delete((void *)*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  uVar9 = param_2[1];
  uVar8 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar9;
  *param_1 = uVar8;
  *(undefined1 *)((long)param_2 + 0x17) = 0;
  *(undefined1 *)param_2 = 0;
  pvVar1 = (void *)param_1[3];
  if (pvVar1 != (void *)0x0) {
    pvVar3 = (void *)param_1[4];
    uVar5 = (ulong)((long)pvVar3 + (-4 - ((long)pvVar3 << 0x3e))) >> 2;
    uVar4 = (ulong)(((long)pvVar1 - (long)pvVar3 << 0x3e) - ((long)pvVar1 - (long)pvVar3)) >> 2;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    if ((1 < uVar4) && ((((int)pvVar1 - (int)pvVar3 | -(int)pvVar3) & 3U) == 0)) {
      uVar4 = uVar4 & 0x3ffffffffffffffe;
      pvVar3 = (void *)((long)pvVar3 + uVar4 * -4);
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    do {
      if (pvVar3 == pvVar1) {
        param_1[4] = pvVar1;
        operator_delete(pvVar1);
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        goto LAB_0088d82c;
      }
      pvVar3 = (void *)((long)pvVar3 + -4);
    } while (pvVar3 != (void *)0x0);
LAB_0088d800:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
LAB_0088d82c:
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  plVar6 = param_1 + 6;
  if (*plVar6 != 0) {
    FUN_0088e878(plVar6);
    operator_delete((void *)param_1[6]);
    *plVar6 = 0;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  uVar9 = param_2[10];
  uVar8 = param_2[9];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar9;
  param_1[9] = uVar8;
  *(undefined1 *)((long)param_2 + 0x5f) = 0;
  *(undefined1 *)(param_2 + 9) = 0;
  puVar7 = param_1 + 0xc;
  pvVar1 = (void *)*puVar7;
  if (pvVar1 != (void *)0x0) {
    pvVar3 = (void *)param_1[0xd];
    pvVar2 = pvVar1;
    if (pvVar1 != pvVar3) {
      do {
        pvVar3 = (void *)((long)pvVar3 + -0x18);
        if (pvVar3 == (void *)0x0) goto LAB_0088d800;
      } while (pvVar3 != pvVar1);
      pvVar2 = (void *)*puVar7;
    }
    param_1[0xd] = pvVar1;
    operator_delete(pvVar2);
    *puVar7 = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  puVar7 = param_1 + 0xf;
  pvVar1 = (void *)*puVar7;
  if (pvVar1 != (void *)0x0) {
    pvVar3 = (void *)param_1[0x10];
    pvVar2 = pvVar1;
    if (pvVar1 != pvVar3) {
      do {
        pvVar3 = (void *)((long)pvVar3 + -0x50);
        if (pvVar3 == (void *)0x0) goto LAB_0088d800;
        FUN_0088fb24(pvVar3);
      } while (pvVar3 != pvVar1);
      pvVar2 = (void *)*puVar7;
    }
    param_1[0x10] = pvVar1;
    operator_delete(pvVar2);
    *puVar7 = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  return param_1;
}


// ===== 0088d9e8  FUN_0088d9e8 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0088d9e8(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *******pppppppuVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined1 *local_8a0;
  undefined1 *puStack_898;
  undefined1 *local_890;
  undefined8 *******local_880;
  ulong uStack_878;
  byte bStack_869;
  undefined1 auStack_868 [2048];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  memset(auStack_868,0xaa,0x800);
  local_890 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_898 = &DAT_aaaaaaaaaaaaaaaa;
  local_8a0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00622830(&local_8a0,auStack_868,0x800);
  FUN_006228b0(&local_8a0,&DAT_001d05bd,1);
  lVar9 = (long)*(char *)((long)param_2 + 0x17);
  if (lVar9 < 0) {
    lVar9 = param_2[1];
  }
  if (lVar9 != 0) {
    uVar4 = FUN_006228b0(&local_8a0,&DAT_001b7c50,3);
    lVar9 = (long)*(char *)((long)param_2 + 0x17);
    puVar5 = param_2;
    if (lVar9 < 0) {
      lVar9 = param_2[1];
      puVar5 = (undefined8 *)*param_2;
    }
    uVar4 = FUN_006228b0(uVar4,puVar5,lVar9);
    FUN_006228b0(uVar4,&DAT_001a5eba,1);
  }
  lVar8 = param_2[4] - param_2[3];
  lVar9 = 0;
  if (lVar8 != 0) {
    lVar9 = param_2[3];
  }
  FUN_0088d1f8(lVar9,lVar8 >> 2,&local_8a0);
  FUN_006228b0(&local_8a0,&DAT_001a5eba,1);
  lVar9 = param_2[6];
  lVar8 = param_2[7];
  FUN_006228b0(&local_8a0,"ssrc_groups:",0xc);
  lVar8 = lVar8 - lVar9;
  if (lVar8 != 0) {
    uVar4 = FUN_006228b0(&local_8a0,&DAT_001b3348,0);
    FUN_0088d0ec(&local_880,lVar9);
    uVar1 = uStack_878;
    pppppppuVar3 = local_880;
    if (-1 < (char)bStack_869) {
      uVar1 = (ulong)bStack_869;
      pppppppuVar3 = &local_880;
    }
    FUN_006228b0(uVar4,pppppppuVar3,uVar1);
    if ((char)bStack_869 < '\0') {
      operator_delete(local_880);
    }
    if (lVar8 != 0x30) {
      lVar10 = lVar9 + 0x30;
      do {
        uVar4 = FUN_006228b0(&local_8a0,&DAT_001ea264,1);
        FUN_0088d0ec(&local_880,lVar10);
        uVar1 = uStack_878;
        pppppppuVar3 = local_880;
        if (-1 < (char)bStack_869) {
          uVar1 = (ulong)bStack_869;
          pppppppuVar3 = &local_880;
        }
        FUN_006228b0(uVar4,pppppppuVar3,uVar1);
        if ((char)bStack_869 < '\0') {
          operator_delete(local_880);
        }
        lVar10 = lVar10 + 0x30;
      } while (lVar10 != lVar9 + lVar8);
    }
  }
  FUN_006228b0(&local_8a0,&DAT_001a5eba,1);
  lVar9 = (long)*(char *)((long)param_2 + 0x5f);
  if (lVar9 < 0) {
    lVar9 = param_2[10];
  }
  if (lVar9 != 0) {
    uVar4 = FUN_006228b0(&local_8a0,"cname:",6);
    lVar9 = (long)*(char *)((long)param_2 + 0x5f);
    if (lVar9 < 0) {
      puVar5 = (undefined8 *)param_2[9];
      lVar9 = param_2[10];
    }
    else {
      puVar5 = param_2 + 9;
    }
    uVar4 = FUN_006228b0(uVar4,puVar5,lVar9);
    FUN_006228b0(uVar4,&DAT_001a5eba,1);
  }
  plVar11 = (long *)param_2[0xc];
  lVar9 = param_2[0xd];
  FUN_006228b0(&local_8a0,"stream_ids:",0xb);
  lVar9 = lVar9 - (long)plVar11;
  if (lVar9 != 0) {
    uVar4 = FUN_006228b0(&local_8a0,&DAT_001b3348,0);
    lVar8 = (long)*(char *)((long)plVar11 + 0x17);
    plVar6 = plVar11;
    if (lVar8 < 0) {
      lVar8 = plVar11[1];
      plVar6 = (long *)*plVar11;
    }
    FUN_006228b0(uVar4,plVar6,lVar8);
    if (lVar9 != 0x18) {
      plVar6 = plVar11 + 3;
      do {
        uVar4 = FUN_006228b0(&local_8a0,&DAT_001ea264,1);
        lVar8 = (long)*(char *)((long)plVar6 + 0x17);
        plVar7 = plVar6;
        if (lVar8 < 0) {
          lVar8 = plVar6[1];
          plVar7 = (long *)*plVar6;
        }
        FUN_006228b0(uVar4,plVar7,lVar8);
        plVar6 = plVar6 + 3;
      } while (plVar6 != (long *)((long)plVar11 + lVar9));
    }
  }
  FUN_006228b0(&local_8a0,&DAT_001a5eba,1);
  plVar11 = (long *)param_2[0xf];
  plVar6 = (long *)param_2[0x10];
  if (plVar11 != plVar6) {
    FUN_006228b0(&local_8a0,"rids:[",6);
    uVar4 = FUN_006228b0(&local_8a0,&DAT_001b3348,0);
    lVar9 = (long)*(char *)((long)plVar11 + 0x17);
    plVar7 = plVar11;
    if (lVar9 < 0) {
      lVar9 = plVar11[1];
      plVar7 = (long *)*plVar11;
    }
    FUN_006228b0(uVar4,plVar7,lVar9);
    if ((long)plVar6 - (long)plVar11 != 0x50) {
      plVar11 = plVar11 + 10;
      do {
        uVar4 = FUN_006228b0(&local_8a0,&DAT_001ea264,1);
        lVar9 = (long)*(char *)((long)plVar11 + 0x17);
        plVar7 = plVar11;
        if (lVar9 < 0) {
          lVar9 = plVar11[1];
          plVar7 = (long *)*plVar11;
        }
        FUN_006228b0(uVar4,plVar7,lVar9);
        plVar11 = plVar11 + 10;
      } while (plVar11 != plVar6);
    }
    FUN_006228b0(&local_8a0,&DAT_0019fa9e,1);
    FUN_006228b0(&local_8a0,&DAT_001a5eba,1);
  }
  FUN_006228b0(&local_8a0,&DAT_001b0cbb,1);
  FUN_005d3510(param_1,local_8a0);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0088de20  FUN_0088de20 =====

void FUN_0088de20(long param_1,int param_2,ulong param_3,ulong param_4,undefined8 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  void *__dest;
  undefined8 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined4 local_6c;
  undefined4 *local_68;
  undefined4 *local_60;
  undefined4 *local_58;
  
  local_68 = (undefined4 *)0x0;
  local_60 = (undefined4 *)0x0;
  local_58 = (undefined4 *)0x0;
  iVar9 = param_2;
  if (0 < param_2) {
    do {
      local_6c = FUN_00897014(param_5);
      if (local_60 < local_58) {
        if (local_60 == (undefined4 *)0x0) goto LAB_0088e108;
        puVar4 = local_60 + 1;
        *local_60 = local_6c;
      }
      else {
        puVar4 = (undefined4 *)FUN_00852528(&local_68,&local_6c);
      }
      puVar1 = *(undefined4 **)(param_1 + 0x20);
      local_a0 = (undefined1 *)CONCAT44(local_a0._4_4_,local_6c);
      local_60 = puVar4;
      if (puVar1 < *(undefined4 **)(param_1 + 0x28)) {
        if (puVar1 == (undefined4 *)0x0) goto LAB_0088e108;
        puVar4 = puVar1 + 1;
        *puVar1 = local_6c;
      }
      else {
        puVar4 = (undefined4 *)FUN_00852528(param_1 + 0x18,&local_a0);
      }
      iVar9 = iVar9 + -1;
      *(undefined4 **)(param_1 + 0x20) = puVar4;
    } while (iVar9 != 0);
    if (param_2 != 1) {
      puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
      local_90 = &DAT_aaaaaaaaaaaaaaaa;
      local_78 = &DAT_aaaaaaaaaaaaaaaa;
      local_80 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
      local_a0 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_0088cd98(&local_a0,&DAT_00223e3f,3,&local_68);
      puVar5 = *(undefined8 **)(param_1 + 0x38);
      if (puVar5 < *(undefined8 **)(param_1 + 0x40)) {
        if (puVar5 == (undefined8 *)0x0) {
LAB_0088e108:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        if ((long)local_90 < 0) {
          FUN_005478d8(puVar5,local_a0,puStack_98);
        }
        else {
          puVar5[2] = local_90;
          puVar5[1] = puStack_98;
          *puVar5 = local_a0;
        }
        puVar6 = puStack_88;
        puVar5[3] = 0;
        puVar5[4] = 0;
        puVar5[5] = 0;
        uVar7 = (long)local_80 - (long)puStack_88;
        if (uVar7 != 0) {
          if ((long)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_005da79c();
          }
          __dest = operator_new(uVar7);
          puVar5[3] = __dest;
          puVar5[4] = __dest;
          puVar5[5] = (long)__dest + uVar7;
          memcpy(__dest,puVar6,uVar7);
          puVar5[4] = (long)__dest + uVar7;
        }
        puVar5 = puVar5 + 6;
      }
      else {
        puVar5 = (undefined8 *)FUN_0088eedc(param_1 + 0x30,&local_a0);
      }
      *(undefined8 **)(param_1 + 0x38) = puVar5;
      if (puStack_88 != (undefined1 *)0x0) {
        uVar7 = (ulong)(((long)puStack_88 - (long)local_80 << 0x3e) -
                       ((long)puStack_88 - (long)local_80)) >> 2;
        if ((ulong)(local_80 + (-4 - ((long)local_80 << 0x3e))) >> 2 <= uVar7) {
          uVar7 = (ulong)(local_80 + (-4 - ((long)local_80 << 0x3e))) >> 2;
        }
        puVar6 = local_80;
        if ((1 < uVar7) && ((((int)puStack_88 - (int)local_80 | -(int)local_80) & 3U) == 0)) {
          uVar7 = uVar7 & 0x3ffffffffffffffe;
          puVar6 = local_80 + uVar7 * -4;
          do {
            uVar7 = uVar7 - 2;
          } while (uVar7 != 0);
        }
        do {
          if (puVar6 == puStack_88) {
            local_80 = puStack_88;
            operator_delete(puStack_88);
            goto LAB_0088e160;
          }
          puVar6 = puVar6 + -4;
        } while (puVar6 != (undefined1 *)0x0);
        goto LAB_0088e0f4;
      }
LAB_0088e160:
      if ((long)local_90 < 0) {
        operator_delete(local_a0);
      }
    }
  }
  puVar1 = local_60;
  puVar4 = local_68;
  if ((param_3 & 1) != 0) {
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      uVar2 = *puVar4;
      uVar3 = FUN_00897014(param_5);
      FUN_0088e4b4(param_1,&DAT_00223e3b,3,uVar2,uVar3);
    }
  }
  puVar1 = local_60;
  puVar4 = local_68;
  if ((param_4 & 1) != 0) {
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      uVar2 = *puVar4;
      uVar3 = FUN_00897014(param_5);
      FUN_0088e4b4(param_1,"FEC-FR",6,uVar2,uVar3);
    }
  }
  if (local_68 == (undefined4 *)0x0) {
    return;
  }
  uVar8 = (ulong)((long)local_60 + (-4 - ((long)local_60 << 0x3e))) >> 2;
  uVar7 = (ulong)(((long)local_68 - (long)local_60 << 0x3e) - ((long)local_68 - (long)local_60)) >>
          2;
  if (uVar8 <= uVar7) {
    uVar7 = uVar8;
  }
  puVar4 = local_60;
  if ((1 < uVar7) && ((((int)local_68 - (int)local_60 | -(int)local_60) & 3U) == 0)) {
    uVar7 = uVar7 & 0x3ffffffffffffffe;
    puVar4 = local_60 + -uVar7;
    do {
      uVar7 = uVar7 - 2;
    } while (uVar7 != 0);
  }
  do {
    if (puVar4 == local_68) {
      local_60 = local_68;
      operator_delete(local_68);
      return;
    }
    puVar4 = puVar4 + -1;
  } while (puVar4 != (undefined4 *)0x0);
LAB_0088e0f4:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0088e194  FUN_0088e194 =====

void FUN_0088e194(long param_1,long param_2)

{
  short *psVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined4 *puVar5;
  short *psVar6;
  undefined4 local_4;
  
  psVar1 = *(short **)(param_1 + 0x30);
  do {
    if (psVar1 == *(short **)(param_1 + 0x38)) {
LAB_0088e234:
      if (*(undefined4 **)(param_1 + 0x18) == *(undefined4 **)(param_1 + 0x20)) {
        local_4 = 0;
      }
      else {
        local_4 = **(undefined4 **)(param_1 + 0x18);
      }
      puVar3 = *(undefined4 **)(param_2 + 8);
      if (puVar3 < *(undefined4 **)(param_2 + 0x10)) {
        if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar5 = puVar3 + 1;
        *puVar3 = local_4;
      }
      else {
        puVar5 = (undefined4 *)FUN_007cff60(param_2,&local_4);
      }
      *(undefined4 **)(param_2 + 8) = puVar5;
      return;
    }
    if (*(char *)((long)psVar1 + 0x17) < '\0') {
      psVar6 = *(short **)psVar1;
      if (*(long *)(psVar1 + 4) == 3) goto LAB_0088e1f0;
    }
    else {
      psVar6 = psVar1;
      if (*(char *)((long)psVar1 + 0x17) == '\x03') {
LAB_0088e1f0:
        if (*psVar6 == 0x4953 && (char)psVar6[1] == 'M') {
          lVar2 = *(long *)(psVar1 + 0xc);
          lVar4 = *(long *)(psVar1 + 0x10);
          if (lVar2 != lVar4) {
            if (psVar1 != (short *)0x0) {
              FUN_0088f2f0(param_2,*(undefined8 *)(param_2 + 8),lVar2,lVar4,lVar4 - lVar2 >> 2);
              return;
            }
            goto LAB_0088e234;
          }
        }
      }
    }
    psVar1 = psVar1 + 0x18;
  } while( true );
}


// ===== 0088e29c  FUN_0088e29c =====

void FUN_0088e29c(long param_1,void *param_2,size_t param_3,undefined8 *param_4,long param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *__s2;
  int iVar7;
  int *piVar8;
  size_t sVar9;
  int local_64;
  
  piVar1 = (int *)*param_4;
  piVar4 = (int *)param_4[1];
  do {
    if (piVar1 == piVar4) {
      return;
    }
    puVar2 = *(undefined8 **)(param_1 + 0x30);
    puVar5 = *(undefined8 **)(param_1 + 0x38);
    iVar6 = *piVar1;
    local_64 = -0x55555556;
    for (; puVar2 != puVar5; puVar2 = puVar2 + 6) {
      sVar9 = (size_t)*(char *)((long)puVar2 + 0x17);
      __s2 = puVar2;
      if ((long)sVar9 < 0) {
        sVar9 = puVar2[1];
        __s2 = (undefined8 *)*puVar2;
      }
      if ((param_3 == sVar9) && (iVar7 = memcmp(param_2,__s2,param_3), iVar7 == 0)) {
        piVar8 = (int *)puVar2[3];
        if (((int *)puVar2[4] != piVar8) &&
           ((4 < (ulong)((long)puVar2[4] - (long)piVar8) && (*piVar8 == iVar6)))) {
          piVar3 = *(int **)(param_5 + 8);
          local_64 = piVar8[1];
          if (piVar3 < *(int **)(param_5 + 0x10)) {
            if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                        );
            }
            piVar8 = piVar3 + 1;
            *piVar3 = local_64;
          }
          else {
            piVar8 = (int *)FUN_00852528(param_5,&local_64);
          }
          *(int **)(param_5 + 8) = piVar8;
          break;
        }
      }
    }
    piVar1 = piVar1 + 1;
  } while( true );
}


// ===== 0088e3d0  FUN_0088e3d0 =====

undefined8 FUN_0088e3d0(long param_1,void *param_2,size_t param_3,int param_4,int *param_5)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *__s2;
  int iVar4;
  size_t sVar5;
  
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  puVar3 = *(undefined8 **)(param_1 + 0x38);
  do {
    if (puVar1 == puVar3) {
      return 0;
    }
    sVar5 = (size_t)*(char *)((long)puVar1 + 0x17);
    __s2 = puVar1;
    if ((long)sVar5 < 0) {
      sVar5 = puVar1[1];
      __s2 = (undefined8 *)*puVar1;
    }
    if ((param_3 == sVar5) && (iVar4 = memcmp(param_2,__s2,param_3), iVar4 == 0)) {
      piVar2 = (int *)puVar1[3];
      if (((int *)puVar1[4] != piVar2) &&
         ((4 < (ulong)((long)puVar1[4] - (long)piVar2) && (*piVar2 == param_4)))) {
        *param_5 = piVar2[1];
        return 1;
      }
    }
    puVar1 = puVar1 + 6;
  } while( true );
}


// ===== 0088e494  FUN_0088e494 =====

void FUN_0088e494(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0088e29c(param_1,&DAT_00223e3b,3,param_2,param_3);
  return;
}


// ===== 0088e4b4  FUN_0088e4b4 =====

bool FUN_0088e4b4(long param_1,undefined8 param_2,undefined8 param_3,wchar_t param_4,wchar_t param_5
                 )

{
  bool bVar1;
  wchar_t wVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  undefined8 *puVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  wchar_t *local_98;
  wchar_t *local_90;
  wchar_t *local_88;
  void *local_80;
  undefined8 uStack_78;
  long local_70;
  void *local_68;
  void *local_60;
  undefined8 local_58;
  wchar_t local_34;
  
  pwVar3 = *(wchar_t **)(param_1 + 0x18);
  pwVar4 = *(wchar_t **)(param_1 + 0x20);
  local_34 = param_5;
  pwVar3 = wmemchr(pwVar3,param_4,(long)pwVar4 - (long)pwVar3 >> 2);
  bVar1 = pwVar3 != (wchar_t *)0x0 && pwVar3 != pwVar4;
  if (pwVar3 == (wchar_t *)0x0 || pwVar3 == pwVar4) {
    return bVar1;
  }
  pwVar3 = *(wchar_t **)(param_1 + 0x20);
  if (pwVar3 < *(wchar_t **)(param_1 + 0x28)) {
    if (pwVar3 == (wchar_t *)0x0) goto LAB_0088e6a0;
    pwVar4 = pwVar3 + 1;
    *pwVar3 = param_5;
  }
  else {
    pwVar4 = (wchar_t *)FUN_00852528((undefined8 *)(param_1 + 0x18),&local_34);
  }
  wVar2 = local_34;
  *(wchar_t **)(param_1 + 0x20) = pwVar4;
  pwVar3 = (wchar_t *)operator_new(8);
  local_88 = pwVar3 + 2;
  local_98 = pwVar3;
  if (pwVar3 != (wchar_t *)0x0) {
    *pwVar3 = param_4;
    if (pwVar3 + 1 != (wchar_t *)0x0) {
      pwVar3[1] = wVar2;
      local_90 = local_88;
      FUN_0088cd98(&local_80,param_2,param_3,&local_98);
      puVar5 = *(undefined8 **)(param_1 + 0x38);
      if (puVar5 < *(undefined8 **)(param_1 + 0x40)) {
        if (puVar5 == (undefined8 *)0x0) goto LAB_0088e6a0;
        puVar5[2] = local_70;
        puVar5[1] = uStack_78;
        *puVar5 = local_80;
        local_80 = (void *)0x0;
        uStack_78 = 0;
        puVar5[3] = local_68;
        local_70 = 0;
        local_68 = (void *)0x0;
        puVar5[4] = local_60;
        puVar5[5] = local_58;
        puVar5 = puVar5 + 6;
        local_60 = (void *)0x0;
        local_58 = 0;
      }
      else {
        puVar5 = (undefined8 *)FUN_0088f6cc(param_1 + 0x30,&local_80);
      }
      *(undefined8 **)(param_1 + 0x38) = puVar5;
      if (local_68 == (void *)0x0) {
LAB_0088e650:
        if (local_70 < 0) {
          operator_delete(local_80);
        }
        if (pwVar3 != (wchar_t *)0xfffffffffffffffc) {
          operator_delete(pwVar3);
          return bVar1;
        }
      }
      else {
        uVar8 = (ulong)((long)local_60 + (-4 - ((long)local_60 << 0x3e))) >> 2;
        uVar7 = (ulong)(((long)local_68 - (long)local_60 << 0x3e) -
                       ((long)local_68 - (long)local_60)) >> 2;
        if (uVar8 <= uVar7) {
          uVar7 = uVar8;
        }
        pvVar6 = local_60;
        if ((1 < uVar7) && ((((int)local_68 - (int)local_60 | -(int)local_60) & 3U) == 0)) {
          uVar7 = uVar7 & 0x3ffffffffffffffe;
          pvVar6 = (void *)((long)local_60 + uVar7 * -4);
          do {
            uVar7 = uVar7 - 2;
          } while (uVar7 != 0);
        }
        do {
          if (pvVar6 == local_68) {
            local_60 = local_68;
            operator_delete(local_68);
            goto LAB_0088e650;
          }
          pvVar6 = (void *)((long)pvVar6 + -4);
        } while (pvVar6 != (void *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
  }
LAB_0088e6a0:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0088e6d8  FUN_0088e6d8 =====

void FUN_0088e6d8(undefined8 param_1,long param_2)

{
  FUN_00843ef4(param_1,param_2 + 0x60);
  return;
}


// ===== 0088e6e8  FUN_0088e6e8 =====

void FUN_0088e6e8(long param_1,long *param_2)

{
  if ((long *)(param_1 + 0x60) != param_2) {
    FUN_007eeac8((long *)(param_1 + 0x60),*param_2,param_2[1],
                 (param_2[1] - *param_2 >> 3) * -0x5555555555555555);
    return;
  }
  return;
}


// ===== 0088e71c  FUN_0088e71c =====

undefined1  [16] FUN_0088e71c(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(undefined1 (**) [16])(param_1 + 0x60);
  if (auVar1._0_8_ == *(undefined1 (**) [16])(param_1 + 0x68)) {
    return ZEXT816(0x1b3348);
  }
  auVar1._8_8_ = (long)(char)auVar1._0_8_[1][7];
  if (-1 < auVar1._8_8_) {
    return auVar1;
  }
  return *auVar1._0_8_;
}


// ===== 0088e75c  FUN_0088e75c =====

void FUN_0088e75c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  void *__src;
  ulong __n;
  void *__dest;
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (param_2 != param_3) {
    do {
      if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        FUN_005478d8(puVar1,*param_2,param_2[1]);
      }
      else {
        uVar3 = param_2[1];
        uVar2 = *param_2;
        puVar1[2] = param_2[2];
        puVar1[1] = uVar3;
        *puVar1 = uVar2;
      }
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      __src = (void *)param_2[3];
      __n = param_2[4] - (long)__src;
      if (__n != 0) {
        if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_005da79c();
        }
        __dest = operator_new(__n);
        puVar1[3] = __dest;
        puVar1[4] = __dest;
        puVar1[5] = (long)__dest + __n;
        memcpy(__dest,__src,__n);
        puVar1[4] = (long)__dest + __n;
      }
      param_2 = param_2 + 6;
      puVar1 = puVar1 + 6;
    } while (param_2 != param_3);
  }
  *(undefined8 **)(param_1 + 8) = puVar1;
  return;
}


// ===== 0088e848  FUN_0088e848 =====

void FUN_0088e848(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 0088e860  FUN_0088e860 =====

void FUN_0088e860(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 0088e878  FUN_0088e878 =====

/* WARNING: Removing unreachable block (ram,0x0088e930) */

void FUN_0088e878(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar1 = *(long *)(param_1 + 8);
  while( true ) {
    lVar2 = lVar1;
    if (param_2 == lVar2) {
      *(long *)(param_1 + 8) = param_2;
      return;
    }
    lVar1 = lVar2 + -0x30;
    if (lVar1 == 0) break;
    pvVar3 = *(void **)(lVar2 + -0x18);
    if (pvVar3 != (void *)0x0) {
      pvVar4 = *(void **)(lVar2 + -0x10);
      uVar6 = (ulong)((long)pvVar4 + (-4 - ((long)pvVar4 << 0x3e))) >> 2;
      uVar5 = (ulong)(((long)pvVar3 - (long)pvVar4 << 0x3e) - ((long)pvVar3 - (long)pvVar4)) >> 2;
      if (uVar6 <= uVar5) {
        uVar5 = uVar6;
      }
      if ((1 < uVar5) && ((((int)pvVar3 - (int)pvVar4 | -(int)pvVar4) & 3U) == 0)) {
        uVar5 = uVar5 & 0x3ffffffffffffffe;
        pvVar4 = (void *)((long)pvVar4 + uVar5 * -4);
        do {
          uVar5 = uVar5 - 2;
        } while (uVar5 != 0);
      }
      while (pvVar4 != pvVar3) {
        pvVar4 = (void *)((long)pvVar4 + -4);
        if (pvVar4 == (void *)0x0) goto LAB_0088e964;
      }
      *(void **)(lVar2 + -0x10) = pvVar3;
      operator_delete(pvVar3);
    }
  }
LAB_0088e964:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0088e978  FUN_0088e978 =====

void FUN_0088e978(long *param_1,long param_2,long param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar7 = param_1[2];
  lVar9 = *param_1;
  if (param_4 <= (ulong)((lVar7 - lVar9 >> 4) * -0x5555555555555555)) {
    uVar8 = (param_1[1] - lVar9 >> 4) * -0x5555555555555555;
    if (param_4 <= uVar8) {
      if (param_2 != param_3) {
        lVar7 = 0;
        do {
          if (param_2 != lVar9) {
            puVar1 = (undefined8 *)(lVar9 + lVar7);
            puVar2 = (undefined8 *)(param_2 + lVar7);
            bVar5 = *(byte *)((long)puVar2 + 0x17);
            if (*(char *)((long)puVar1 + 0x17) < '\0') {
              uVar8 = ((long *)(param_2 + lVar7))[1];
              puVar1 = *(undefined8 **)(param_2 + lVar7);
              if (-1 < (char)bVar5) {
                uVar8 = (ulong)bVar5;
                puVar1 = puVar2;
              }
              FUN_00547f08(lVar9 + lVar7,puVar1,uVar8);
            }
            else if ((char)bVar5 < '\0') {
              FUN_00547fc0(lVar9 + lVar7,*(undefined8 *)(param_2 + lVar7),
                           ((undefined8 *)(param_2 + lVar7))[1]);
            }
            else {
              uVar11 = puVar2[1];
              uVar10 = *puVar2;
              puVar1[2] = puVar2[2];
              puVar1[1] = uVar11;
              *puVar1 = uVar10;
            }
            lVar3 = *(long *)(param_2 + lVar7 + 0x18);
            lVar4 = *(long *)(param_2 + lVar7 + 0x20);
            FUN_005e72f8(lVar9 + lVar7 + 0x18,lVar3,lVar4,lVar4 - lVar3 >> 2);
          }
          lVar7 = lVar7 + 0x30;
        } while (param_2 + lVar7 != param_3);
        lVar9 = lVar9 + lVar7;
      }
      FUN_0088e878(param_1,lVar9);
      return;
    }
    param_2 = FUN_0088eb90(param_2,uVar8,lVar9);
    param_4 = param_4 + (param_1[1] - *param_1 >> 4) * 0x5555555555555555;
LAB_0088eaac:
    FUN_0088e75c(param_1,param_2,param_3,param_4);
    return;
  }
  if (lVar9 != 0) {
    FUN_0088e878(param_1,lVar9);
    operator_delete((void *)*param_1);
    lVar7 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (param_4 < 0x555555555555556) {
    uVar8 = (lVar7 >> 4) * 0x5555555555555556;
    if (uVar8 < param_4 || uVar8 - param_4 == 0) {
      uVar8 = param_4;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)((lVar7 >> 4) * -0x5555555555555555)) {
      uVar8 = 0x555555555555555;
    }
    if (uVar8 < 0x555555555555556) {
      pvVar6 = operator_new(uVar8 * 0x30);
      *param_1 = (long)pvVar6;
      param_1[1] = (long)pvVar6;
      param_1[2] = (long)((long)pvVar6 + uVar8 * 0x30);
      goto LAB_0088eaac;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0088e848();
}


// ===== 0088eb90  FUN_0088eb90 =====

undefined1  [16] FUN_0088eb90(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  
  param_2 = param_2 * 0x30;
  if (param_2 != 0) {
    lVar7 = 0;
    do {
      if (param_1 != param_3) {
        puVar1 = (undefined8 *)(param_3 + lVar7);
        puVar2 = (undefined8 *)(param_1 + lVar7);
        bVar6 = *(byte *)((long)puVar2 + 0x17);
        if (*(char *)((long)puVar1 + 0x17) < '\0') {
          uVar3 = ((long *)(param_1 + lVar7))[1];
          puVar1 = *(undefined8 **)(param_1 + lVar7);
          if (-1 < (char)bVar6) {
            uVar3 = (ulong)bVar6;
            puVar1 = puVar2;
          }
          FUN_00547f08(param_3 + lVar7,puVar1,uVar3);
        }
        else if ((char)bVar6 < '\0') {
          FUN_00547fc0(param_3 + lVar7,*(undefined8 *)(param_1 + lVar7),
                       ((undefined8 *)(param_1 + lVar7))[1]);
        }
        else {
          uVar9 = puVar2[1];
          uVar8 = *puVar2;
          puVar1[2] = puVar2[2];
          puVar1[1] = uVar9;
          *puVar1 = uVar8;
        }
        lVar4 = *(long *)(param_1 + lVar7 + 0x18);
        lVar5 = *(long *)(param_1 + lVar7 + 0x20);
        FUN_005e72f8(param_3 + lVar7 + 0x18,lVar4,lVar5,lVar5 - lVar4 >> 2);
      }
      lVar7 = lVar7 + 0x30;
    } while (param_2 - lVar7 != 0);
    param_3 = param_3 + lVar7;
    param_1 = param_1 + param_2;
  }
  auVar10._8_8_ = param_3;
  auVar10._0_8_ = param_1;
  return auVar10;
}


// ===== 0088ec84  FUN_0088ec84 =====

void FUN_0088ec84(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  void *pvVar6;
  
  lVar3 = param_1[2];
  pvVar5 = (void *)*param_1;
  if (param_4 <= (ulong)((lVar3 - (long)pvVar5 >> 4) * -0x3333333333333333)) {
    pvVar6 = (void *)param_1[1];
    lVar3 = (long)pvVar6 - (long)pvVar5;
    if ((ulong)((lVar3 >> 4) * -0x3333333333333333) < param_4) {
      lVar1 = param_2;
      pvVar2 = pvVar6;
      if (pvVar6 != pvVar5) {
        lVar1 = param_2 + lVar3;
        do {
          FUN_0088fbec(pvVar5,param_2);
          lVar3 = lVar3 + -0x50;
          param_2 = param_2 + 0x50;
          pvVar5 = (void *)((long)pvVar5 + 0x50);
        } while (lVar3 != 0);
        pvVar6 = (void *)param_1[1];
        pvVar2 = pvVar6;
      }
      while( true ) {
        if (lVar1 == param_3) {
          param_1[1] = pvVar2;
          return;
        }
        if (pvVar6 == (void *)0x0) break;
        FUN_0088f9d8(pvVar6,lVar1);
        pvVar6 = (void *)((long)pvVar6 + 0x50);
        lVar1 = lVar1 + 0x50;
        pvVar2 = (void *)((long)pvVar2 + 0x50);
      }
LAB_0088eeb0:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    if (param_2 != param_3) {
      do {
        FUN_0088fbec(pvVar5,param_2);
        param_2 = param_2 + 0x50;
        pvVar5 = (void *)((long)pvVar5 + 0x50);
      } while (param_2 != param_3);
      pvVar6 = (void *)param_1[1];
    }
    while (pvVar5 != pvVar6) {
      pvVar6 = (void *)((long)pvVar6 + -0x50);
      if (pvVar6 == (void *)0x0) goto LAB_0088eec4;
      FUN_0088fb24(pvVar6);
    }
LAB_0088ee90:
    param_1[1] = pvVar5;
    return;
  }
  if (pvVar5 != (void *)0x0) {
    pvVar6 = (void *)param_1[1];
    pvVar2 = pvVar5;
    if (pvVar5 != pvVar6) {
      do {
        pvVar6 = (void *)((long)pvVar6 + -0x50);
        if (pvVar6 == (void *)0x0) {
LAB_0088eec4:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_0088fb24(pvVar6);
      } while (pvVar6 != pvVar5);
      pvVar2 = (void *)*param_1;
    }
    param_1[1] = pvVar5;
    operator_delete(pvVar2);
    lVar3 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (param_4 < 0x333333333333334) {
    uVar4 = (lVar3 >> 4) * -0x6666666666666666;
    if (uVar4 < param_4 || uVar4 - param_4 == 0) {
      uVar4 = param_4;
    }
    if (0x199999999999998 < (ulong)((lVar3 >> 4) * -0x3333333333333333)) {
      uVar4 = 0x333333333333333;
    }
    if (uVar4 < 0x333333333333334) {
      pvVar5 = operator_new(uVar4 * 0x50);
      *param_1 = pvVar5;
      param_1[1] = pvVar5;
      param_1[2] = (void *)((long)pvVar5 + uVar4 * 0x50);
      if (param_2 != param_3) {
        do {
          if (pvVar5 == (void *)0x0) goto LAB_0088eeb0;
          FUN_0088f9d8(pvVar5,param_2);
          param_2 = param_2 + 0x50;
          pvVar5 = (void *)((long)pvVar5 + 0x50);
        } while (param_2 != param_3);
      }
      goto LAB_0088ee90;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0088e860();
}


// ===== 0088eedc  FUN_0088eedc =====

undefined8 * FUN_0088eedc(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *__src;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *__dest;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  void *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  void *local_48;
  
  lVar9 = param_1[1] - *param_1;
  uVar6 = (lVar9 >> 4) * -0x5555555555555555 + 1;
  if (0x555555555555555 < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_0088e848();
  }
  local_60 = (void *)0x0;
  lVar7 = param_1[2] - *param_1 >> 4;
  uVar8 = lVar7 * 0x5555555555555556;
  if (uVar8 < uVar6 || uVar8 - uVar6 == 0) {
    uVar8 = uVar6;
  }
  if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar7 * -0x5555555555555555)) {
    uVar8 = 0x555555555555555;
  }
  if (uVar8 != 0) {
    if (0x555555555555555 < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    local_60 = operator_new(uVar8 * 0x30);
  }
  puVar2 = (undefined8 *)((long)local_60 + lVar9);
  local_48 = (void *)((long)local_60 + uVar8 * 0x30);
  local_58 = puVar2;
  local_50 = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      FUN_005478d8(puVar2,*param_2,param_2[1]);
    }
    else {
      uVar11 = param_2[1];
      uVar10 = *param_2;
      puVar2[2] = param_2[2];
      puVar2[1] = uVar11;
      *puVar2 = uVar10;
    }
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    __src = (void *)param_2[3];
    uVar6 = param_2[4] - (long)__src;
    puVar5 = puVar2;
    if (uVar6 != 0) {
      if ((long)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005da79c();
      }
      __dest = operator_new(uVar6);
      puVar2[3] = __dest;
      puVar2[4] = __dest;
      puVar2[5] = (long)__dest + uVar6;
      memcpy(__dest,__src,uVar6);
      puVar2[4] = (long)__dest + uVar6;
      puVar5 = local_58;
    }
    puVar3 = (undefined8 *)*param_1;
    puVar4 = (undefined8 *)param_1[1];
    puVar5 = (undefined8 *)((long)puVar5 + ((long)puVar3 - (long)puVar4));
    puVar1 = puVar5;
    while( true ) {
      if (puVar4 == puVar3) {
        FUN_0088f0fc(param_1);
        local_60 = (void *)*param_1;
        lVar9 = param_1[2];
        *param_1 = (long)puVar5;
        param_1[1] = (long)(puVar2 + 6);
        param_1[2] = (long)local_48;
        local_58 = (undefined8 *)local_60;
        local_50 = (undefined8 *)local_60;
        local_48 = (void *)lVar9;
        FUN_0088f1e8(&local_60);
        if (local_60 != (void *)0x0) {
          operator_delete(local_60);
        }
        return puVar2 + 6;
      }
      if (puVar1 == (undefined8 *)0x0) break;
      uVar11 = puVar3[1];
      uVar10 = *puVar3;
      puVar1[2] = puVar3[2];
      puVar1[1] = uVar11;
      *puVar1 = uVar10;
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[3] = puVar3[3];
      puVar1[4] = puVar3[4];
      puVar1[5] = puVar3[5];
      puVar1 = puVar1 + 6;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3 = puVar3 + 6;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0088f0fc  FUN_0088f0fc =====

void FUN_0088f0fc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 != param_3) {
    do {
      if (param_2 == (undefined8 *)0x0) {
LAB_0088f1d4:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pvVar1 = (void *)param_2[3];
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)param_2[4];
        uVar4 = (ulong)((long)pvVar2 + (-4 - ((long)pvVar2 << 0x3e))) >> 2;
        uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3e) - ((long)pvVar1 - (long)pvVar2)) >> 2;
        if (uVar4 <= uVar3) {
          uVar3 = uVar4;
        }
        if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 3U) == 0)) {
          uVar3 = uVar3 & 0x3ffffffffffffffe;
          pvVar2 = (void *)((long)pvVar2 + uVar3 * -4);
          do {
            uVar3 = uVar3 - 2;
          } while (uVar3 != 0);
        }
        while (pvVar2 != pvVar1) {
          pvVar2 = (void *)((long)pvVar2 + -4);
          if (pvVar2 == (void *)0x0) goto LAB_0088f1d4;
        }
        param_2[4] = pvVar1;
        operator_delete(pvVar1);
      }
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        operator_delete((void *)*param_2);
      }
      param_2 = param_2 + 6;
    } while (param_2 != param_3);
  }
  return;
}


// ===== 0088f1e8  FUN_0088f1e8 =====

/* WARNING: Removing unreachable block (ram,0x0088f2a0) */

void FUN_0088f1e8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while( true ) {
    lVar2 = lVar1;
    if (param_2 == lVar2) {
      *(long *)(param_1 + 0x10) = lVar2;
      return;
    }
    lVar1 = lVar2 + -0x30;
    if (lVar1 == 0) break;
    pvVar3 = *(void **)(lVar2 + -0x18);
    if (pvVar3 != (void *)0x0) {
      pvVar4 = *(void **)(lVar2 + -0x10);
      uVar6 = (ulong)((long)pvVar4 + (-4 - ((long)pvVar4 << 0x3e))) >> 2;
      uVar5 = (ulong)(((long)pvVar3 - (long)pvVar4 << 0x3e) - ((long)pvVar3 - (long)pvVar4)) >> 2;
      if (uVar6 <= uVar5) {
        uVar5 = uVar6;
      }
      if ((1 < uVar5) && ((((int)pvVar3 - (int)pvVar4 | -(int)pvVar4) & 3U) == 0)) {
        uVar5 = uVar5 & 0x3ffffffffffffffe;
        pvVar4 = (void *)((long)pvVar4 + uVar5 * -4);
        do {
          uVar5 = uVar5 - 2;
        } while (uVar5 != 0);
      }
      while (pvVar4 != pvVar3) {
        pvVar4 = (void *)((long)pvVar4 + -4);
        if (pvVar4 == (void *)0x0) goto LAB_0088f2c0;
      }
      *(void **)(lVar2 + -0x10) = pvVar3;
      operator_delete(pvVar3);
    }
  }
LAB_0088f2c0:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0088f2f0  FUN_0088f2f0 =====

undefined4 *
FUN_0088f2f0(long *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,long param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  size_t sVar5;
  size_t __n;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  puVar17 = param_2;
  if (0 < param_5) {
    puVar18 = (undefined4 *)param_1[1];
    if (param_1[2] - (long)puVar18 >> 2 < param_5) {
      lVar19 = *param_1;
      uVar1 = param_5 + ((long)puVar18 - lVar19 >> 2);
      if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005da79c();
      }
      uVar6 = param_1[2] - lVar19;
      uVar10 = (long)uVar6 >> 1;
      if (uVar10 <= uVar1) {
        uVar10 = uVar1;
      }
      if (0x7ffffffffffffffb < uVar6) {
        uVar10 = 0x3fffffffffffffff;
      }
      if (uVar10 == 0) {
        pvVar3 = (void *)0x0;
      }
      else {
        if (uVar10 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_005d55a4();
        }
        pvVar3 = operator_new(uVar10 << 2);
      }
      lVar7 = (long)param_2 - lVar19;
      puVar17 = (undefined4 *)((long)pvVar3 + lVar7);
      puVar8 = puVar17;
      if (param_5 * 4 != 0) {
        uVar16 = param_5 * 4 - 4U >> 2;
        uVar6 = (ulong)(lVar19 - ((long)pvVar3 + (long)param_2)) >> 2;
        uVar1 = uVar6;
        if (uVar16 <= uVar6) {
          uVar1 = uVar16;
        }
        puVar18 = puVar17;
        if (0x2b < uVar1) {
          if (uVar16 <= uVar6) {
            uVar6 = uVar16;
          }
          if (((((-(int)((long)pvVar3 + (long)param_2) & 3U) == 0) && (puVar17 <= puVar17 + uVar6))
              && (param_3 <= param_3 + uVar6)) &&
             (puVar18 = (undefined4 *)((long)pvVar3 + lVar7),
             0x1f < (ulong)((((long)pvVar3 + (long)param_2) - (long)param_3) - lVar19))) {
            uVar6 = uVar1 + 1 & 7;
            puVar15 = (undefined8 *)((long)pvVar3 + lVar7 + 0x10);
            uVar16 = 8;
            if (uVar6 != 0) {
              uVar16 = uVar6;
            }
            lVar19 = (uVar1 + 1) - uVar16;
            puVar18 = puVar17 + lVar19;
            puVar8 = param_3 + lVar19;
            puVar13 = (undefined8 *)(param_3 + 4);
            do {
              puVar2 = puVar13 + -1;
              uVar20 = puVar13[-2];
              uVar22 = puVar13[1];
              uVar21 = *puVar13;
              lVar19 = lVar19 + -8;
              puVar13 = puVar13 + 4;
              puVar15[-1] = *puVar2;
              puVar15[-2] = uVar20;
              puVar15[1] = uVar22;
              *puVar15 = uVar21;
              puVar15 = puVar15 + 4;
              param_3 = puVar8;
            } while (lVar19 != 0);
          }
        }
        do {
          if (puVar18 == (undefined4 *)0x0) goto LAB_0088f6b0;
          puVar8 = puVar18 + 1;
          *puVar18 = *param_3;
          puVar18 = puVar8;
          param_3 = param_3 + 1;
        } while (puVar8 != puVar17 + param_5);
        puVar18 = (undefined4 *)param_1[1];
        puVar8 = puVar17 + param_5;
      }
      memcpy(puVar8,param_2,(long)puVar18 - (long)param_2);
      lVar19 = param_1[1];
      param_1[1] = (long)param_2;
      sVar5 = (long)param_2 - *param_1;
      memcpy((void *)((long)puVar17 - sVar5),(void *)*param_1,sVar5);
      pvVar4 = (void *)*param_1;
      *param_1 = (long)puVar17 - sVar5;
      param_1[1] = (long)puVar8 + (lVar19 - (long)param_2);
      param_1[2] = (long)((long)pvVar3 + uVar10 * 4);
      if (pvVar4 != (void *)0x0) {
        operator_delete(pvVar4);
      }
    }
    else {
      sVar5 = (long)puVar18 - (long)param_2;
      if ((long)sVar5 >> 2 < param_5) {
        puVar8 = (undefined4 *)((long)param_3 + sVar5);
        puVar12 = puVar18;
        if (puVar8 != param_4) {
          uVar6 = ((((long)param_4 + (long)param_2) - (long)param_3) - (long)puVar18) - 4;
          uVar10 = uVar6 >> 2;
          uVar1 = uVar10;
          if ((ulong)-(long)puVar18 >> 2 <= uVar10) {
            uVar1 = (ulong)-(long)puVar18 >> 2;
          }
          puVar11 = puVar18;
          puVar14 = puVar18;
          if (0x2f < uVar1) {
            uVar16 = (ulong)-(long)puVar18 >> 2;
            if (uVar16 <= uVar10) {
              uVar10 = uVar16;
            }
            if ((((((uint)uVar6 | (uint)-(long)puVar18) & 3) == 0) && (puVar18 <= puVar18 + uVar10))
               && ((puVar8 <= puVar8 + uVar10 && (0x1f < (ulong)((long)param_2 - (long)param_3)))))
            {
              uVar10 = uVar1 + 1 & 7;
              uVar6 = 8;
              if (uVar10 != 0) {
                uVar6 = uVar10;
              }
              puVar15 = (undefined8 *)(puVar18 + 4);
              lVar19 = (uVar1 + 1) - uVar6;
              puVar13 = (undefined8 *)((long)param_3 + ((long)puVar15 - (long)param_2));
              puVar8 = puVar8 + lVar19;
              puVar11 = puVar18 + lVar19;
              do {
                puVar2 = puVar13 + -1;
                uVar20 = puVar13[-2];
                uVar22 = puVar13[1];
                uVar21 = *puVar13;
                lVar19 = lVar19 + -8;
                puVar13 = puVar13 + 4;
                puVar15[-1] = *puVar2;
                puVar15[-2] = uVar20;
                puVar15[1] = uVar22;
                *puVar15 = uVar21;
                puVar15 = puVar15 + 4;
                puVar14 = puVar11;
              } while (lVar19 != 0);
            }
          }
          do {
            if (puVar14 == (undefined4 *)0x0) goto LAB_0088f6b0;
            puVar9 = puVar8 + 1;
            *puVar14 = *puVar8;
            puVar8 = puVar9;
            puVar12 = puVar11 + 1;
            puVar11 = puVar11 + 1;
            puVar14 = puVar14 + 1;
          } while (puVar9 != param_4);
        }
        param_1[1] = (long)puVar12;
        if ((long)sVar5 >> 2 < 1) {
          return param_2;
        }
        puVar11 = puVar12;
        for (puVar8 = puVar12 + -param_5; puVar8 < puVar18; puVar8 = puVar8 + 1) {
          if (puVar11 == (undefined4 *)0x0) {
LAB_0088f6b0:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          *puVar11 = *puVar8;
          puVar11 = puVar11 + 1;
        }
        param_1[1] = (long)puVar11;
        __n = (long)puVar12 + (param_5 * -4 - (long)param_2);
        memmove((void *)((long)puVar12 - __n),param_2,__n);
      }
      else {
        sVar5 = param_5 * 4;
        puVar8 = puVar18;
        for (puVar12 = puVar18 + -param_5; puVar12 < puVar18; puVar12 = puVar12 + 1) {
          if (puVar8 == (undefined4 *)0x0) goto LAB_0088f6b0;
          *puVar8 = *puVar12;
          puVar8 = puVar8 + 1;
        }
        param_1[1] = (long)puVar8;
        memmove((void *)((long)puVar18 - ((long)puVar18 - (long)(param_2 + param_5))),param_2,
                (long)puVar18 - (long)(param_2 + param_5));
      }
      memmove(param_2,param_3,sVar5);
    }
  }
  return puVar17;
}


// ===== 0088f6cc  FUN_0088f6cc =====

undefined8 * FUN_0088f6cc(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  void *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  void *local_38;
  
  lVar8 = param_1[1] - *param_1;
  uVar5 = (lVar8 >> 4) * -0x5555555555555555 + 1;
  if (0x555555555555555 < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_0088e848();
  }
  local_50 = (void *)0x0;
  lVar6 = param_1[2] - *param_1 >> 4;
  uVar7 = lVar6 * 0x5555555555555556;
  if (uVar7 < uVar5 || uVar7 - uVar5 == 0) {
    uVar7 = uVar5;
  }
  if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar6 * -0x5555555555555555)) {
    uVar7 = 0x555555555555555;
  }
  if (uVar7 != 0) {
    if (0x555555555555555 < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    local_50 = operator_new(uVar7 * 0x30);
  }
  local_38 = (void *)((long)local_50 + uVar7 * 0x30);
  local_48 = (undefined8 *)((long)local_50 + lVar8);
  local_40 = local_48;
  if (local_48 != (undefined8 *)0x0) {
    uVar10 = param_2[1];
    uVar9 = *param_2;
    local_48[2] = param_2[2];
    local_48[1] = uVar10;
    *local_48 = uVar9;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    local_48[3] = 0;
    local_48[4] = 0;
    local_48[5] = 0;
    local_48[3] = param_2[3];
    local_48[4] = param_2[4];
    local_48[5] = param_2[5];
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    puVar3 = (undefined8 *)*param_1;
    puVar4 = (undefined8 *)param_1[1];
    puVar2 = (undefined8 *)((long)local_48 + ((long)puVar3 - (long)puVar4));
    puVar1 = puVar2;
    while( true ) {
      if (puVar4 == puVar3) {
        puVar1 = local_48 + 6;
        FUN_0088f0fc(param_1);
        local_50 = (void *)*param_1;
        lVar8 = param_1[2];
        *param_1 = (long)puVar2;
        param_1[1] = (long)puVar1;
        param_1[2] = (long)local_38;
        local_48 = (undefined8 *)local_50;
        local_40 = (undefined8 *)local_50;
        local_38 = (void *)lVar8;
        FUN_0088f1e8(&local_50);
        if (local_50 != (void *)0x0) {
          operator_delete(local_50);
        }
        return puVar1;
      }
      if (puVar1 == (undefined8 *)0x0) break;
      uVar10 = puVar3[1];
      uVar9 = *puVar3;
      puVar1[2] = puVar3[2];
      puVar1[1] = uVar10;
      *puVar1 = uVar9;
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[3] = puVar3[3];
      puVar1[4] = puVar3[4];
      puVar1[5] = puVar3[5];
      puVar1 = puVar1 + 6;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3 = puVar3 + 6;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0088f8b4  FUN_0088f8b4 =====

void FUN_0088f8b4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = param_1 + 8;
  return;
}


// ===== 0088f8d8  FUN_0088f8d8 =====

void FUN_0088f8d8(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined4 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *__dest;
  
  if (0x7ffffffffffffff6 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_3 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)param_3;
    __dest = param_1;
  }
  else {
    uVar1 = (param_3 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (undefined8 *)operator_new(uVar2);
    *param_1 = __dest;
    param_1[1] = param_3;
    param_1[2] = uVar2 | 0x8000000000000000;
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
    param_1[8] = 0;
    *(undefined4 *)(param_1 + 3) = param_4;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[9] = 0;
    param_1[6] = 0;
    param_1[7] = param_1 + 8;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 0088f9d8  FUN_0088f9d8 =====

void FUN_0088f9d8(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_005478d8(param_1,*param_2,param_2[1]);
  }
  else {
    uVar10 = param_2[1];
    uVar9 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar10;
    *param_1 = uVar9;
  }
  uVar2 = *(undefined4 *)(param_2 + 3);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 3) = uVar2;
  lVar6 = param_2[4];
  lVar1 = param_2[5];
  uVar3 = lVar1 - lVar6;
  if (uVar3 != 0) {
    if (0x12f684bda12f684 < (ulong)(((long)uVar3 >> 3) * -0x7b425ed097b425ed)) {
                    /* WARNING: Subroutine does not return */
      FUN_0088fd20();
    }
    pvVar4 = operator_new(uVar3);
    param_1[4] = pvVar4;
    param_1[5] = pvVar4;
    param_1[6] = (long)pvVar4 + uVar3;
    do {
      if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_00890830(pvVar4,lVar6);
      lVar6 = lVar6 + 0xd8;
      pvVar4 = (void *)((long)pvVar4 + 0xd8);
    } while (lVar6 != lVar1);
    param_1[5] = pvVar4;
  }
  plVar8 = param_1 + 8;
  *plVar8 = 0;
  puVar5 = param_1 + 7;
  *puVar5 = plVar8;
  param_1[9] = 0;
  if (param_2[9] != 0) {
    lVar6 = FUN_0060b868(puVar5,param_2[8],puVar5);
    *plVar8 = lVar6;
    *(long **)(lVar6 + 0x10) = plVar8;
    plVar8 = (long *)*plVar8;
    do {
      plVar7 = plVar8;
      plVar8 = (long *)*plVar7;
    } while (plVar8 != (long *)0x0);
    param_1[7] = plVar7;
    param_1[9] = param_2[9];
  }
  return;
}


// ===== 0088fb24  FUN_0088fb24 =====

void FUN_0088fb24(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *local_38;
  
  local_38 = param_1 + 7;
  FUN_0060b2cc(&local_38,param_1[8]);
  puVar3 = (undefined8 *)param_1[4];
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)param_1[5];
    puVar1 = puVar3;
    if (puVar3 != puVar2) {
      do {
        puVar2 = puVar2 + -0x1b;
        if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        (**(code **)*puVar2)(puVar2);
      } while (puVar2 != puVar3);
      puVar1 = (undefined8 *)param_1[4];
    }
    param_1[5] = puVar3;
    operator_delete(puVar1);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    operator_delete((void *)*param_1);
  }
  return;
}


// ===== 0088fbec  FUN_0088fbec =====

undefined8 * FUN_0088fbec(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_1 == param_2) {
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
    return param_1;
  }
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
    uVar8 = param_2[1];
    uVar7 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar8;
    *param_1 = uVar7;
  }
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  FUN_0088fd38(param_1 + 4,param_2[4],param_2[5],
               ((long)(param_2[5] - param_2[4]) >> 3) * -0x7b425ed097b425ed);
  if (param_1[9] == 0) {
    lVar5 = FUN_0060b868(param_1 + 7,param_2[8],param_1 + 7);
    plVar6 = param_1 + 8;
    *plVar6 = lVar5;
    if (lVar5 == 0) goto LAB_0088fd00;
    *(long **)(lVar5 + 0x10) = plVar6;
    plVar4 = (long *)*plVar6;
  }
  else {
    plVar4 = (long *)FUN_00667af8(param_1 + 7,param_1[8],param_2[8],0,param_1 + 7);
    param_1[8] = plVar4;
  }
  if (plVar4 == (long *)0x0) {
    plVar6 = param_1 + 8;
  }
  else {
    do {
      plVar6 = plVar4;
      plVar4 = (long *)*plVar6;
    } while ((long *)*plVar6 != (long *)0x0);
  }
LAB_0088fd00:
  param_1[7] = plVar6;
  param_1[9] = param_2[9];
  return param_1;
}


// ===== 0088fd20  FUN_0088fd20 =====

void FUN_0088fd20(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 0088fd38  FUN_0088fd38 =====

void FUN_0088fd38(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  lVar3 = param_1[2];
  puVar6 = (undefined8 *)*param_1;
  if (param_4 <= (ulong)((lVar3 - (long)puVar6 >> 3) * -0x7b425ed097b425ed)) {
    puVar4 = (undefined8 *)param_1[1];
    lVar3 = (long)puVar4 - (long)puVar6;
    if ((ulong)((lVar3 >> 3) * -0x7b425ed097b425ed) < param_4) {
      lVar1 = param_2;
      puVar2 = puVar4;
      if (puVar4 != puVar6) {
        lVar1 = param_2 + lVar3;
        do {
          FUN_00890db8(puVar6,param_2);
          lVar3 = lVar3 + -0xd8;
          param_2 = param_2 + 0xd8;
          puVar6 = puVar6 + 0x1b;
        } while (lVar3 != 0);
        puVar4 = (undefined8 *)param_1[1];
        puVar2 = puVar4;
      }
      while( true ) {
        if (lVar1 == param_3) {
          param_1[1] = puVar2;
          return;
        }
        if (puVar4 == (undefined8 *)0x0) break;
        FUN_00890830(puVar4,lVar1);
        puVar4 = puVar4 + 0x1b;
        lVar1 = lVar1 + 0xd8;
        puVar2 = puVar2 + 0x1b;
      }
LAB_0088ff94:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    if (param_2 != param_3) {
      do {
        FUN_00890db8(puVar6,param_2);
        param_2 = param_2 + 0xd8;
        puVar6 = puVar6 + 0x1b;
      } while (param_2 != param_3);
      puVar4 = (undefined8 *)param_1[1];
    }
    while (puVar6 != puVar4) {
      puVar4 = puVar4 + -0x1b;
      if (puVar4 == (undefined8 *)0x0) goto LAB_0088ffa8;
      (**(code **)*puVar4)(puVar4);
    }
LAB_0088ff74:
    param_1[1] = puVar6;
    return;
  }
  if (puVar6 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)param_1[1];
    puVar2 = puVar6;
    if (puVar6 != puVar4) {
      do {
        puVar4 = puVar4 + -0x1b;
        if (puVar4 == (undefined8 *)0x0) {
LAB_0088ffa8:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        (**(code **)*puVar4)(puVar4);
      } while (puVar4 != puVar6);
      puVar2 = (undefined8 *)*param_1;
    }
    param_1[1] = puVar6;
    operator_delete(puVar2);
    lVar3 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (param_4 < 0x12f684bda12f685) {
    uVar5 = (lVar3 >> 3) * 0x97b425ed097b426;
    if (uVar5 < param_4 || uVar5 - param_4 == 0) {
      uVar5 = param_4;
    }
    if (0x97b425ed097b41 < (ulong)((lVar3 >> 3) * -0x7b425ed097b425ed)) {
      uVar5 = 0x12f684bda12f684;
    }
    if (uVar5 < 0x12f684bda12f685) {
      puVar6 = (undefined8 *)operator_new(uVar5 * 0xd8);
      *param_1 = puVar6;
      param_1[1] = puVar6;
      param_1[2] = puVar6 + uVar5 * 0x1b;
      if (param_2 != param_3) {
        do {
          if (puVar6 == (undefined8 *)0x0) goto LAB_0088ff94;
          FUN_00890830(puVar6,param_2);
          param_2 = param_2 + 0xd8;
          puVar6 = puVar6 + 0x1b;
        } while (param_2 != param_3);
      }
      goto LAB_0088ff74;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0088fd20();
}


// ===== 0088ffc0  FUN_0088ffc0 =====

/* WARNING: Removing unreachable block (ram,0x0089001c) */
/* WARNING: Removing unreachable block (ram,0x00890038) */

void FUN_0088ffc0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  puVar2 = puVar3;
  if (puVar3 != (undefined8 *)param_1[1]) {
    puVar2 = (undefined8 *)param_1[1] + -3;
    do {
      puVar1 = puVar2 + -3;
      if (puVar2 == (undefined8 *)0x18) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        operator_delete((void *)*puVar2);
      }
      puVar2 = puVar2 + -6;
    } while (puVar1 != puVar3);
    puVar2 = (undefined8 *)*param_1;
  }
  param_1[1] = puVar3;
  operator_delete(puVar2);
  return;
}


// ===== 00890098  FUN_00890098 =====

undefined8 FUN_00890098(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar5 = *param_1;
  lVar7 = param_1[1];
  lVar6 = *param_2;
  if (lVar7 - lVar5 == param_2[1] - lVar6) {
    if (lVar5 != lVar7) {
      lVar11 = 0;
      do {
        plVar1 = (long *)(lVar6 + lVar11);
        plVar2 = (long *)(lVar5 + lVar11);
        plVar3 = (long *)*plVar1;
        uVar9 = plVar1[1];
        if (-1 < (char)*(byte *)((long)plVar1 + 0x17)) {
          plVar3 = plVar1;
          uVar9 = (ulong)*(byte *)((long)plVar1 + 0x17);
        }
        uVar4 = plVar2[1];
        plVar8 = (long *)*plVar2;
        if (-1 < (char)*(byte *)((long)plVar2 + 0x17)) {
          uVar4 = (ulong)*(byte *)((long)plVar2 + 0x17);
          plVar8 = plVar2;
        }
        uVar9 = FUN_0061ff84(plVar3,uVar9,plVar8,uVar4);
        if ((uVar9 & 1) == 0) goto LAB_0089016c;
        uVar9 = plVar1[4];
        plVar3 = (long *)plVar1[3];
        if (-1 < (char)*(byte *)((long)plVar1 + 0x2f)) {
          uVar9 = (ulong)*(byte *)((long)plVar1 + 0x2f);
          plVar3 = plVar1 + 3;
        }
        uVar4 = plVar2[4];
        plVar1 = (long *)plVar2[3];
        if (-1 < (char)*(byte *)((long)plVar2 + 0x2f)) {
          uVar4 = (ulong)*(byte *)((long)plVar2 + 0x2f);
          plVar1 = plVar2 + 3;
        }
        uVar9 = FUN_0061ff84(plVar3,uVar9,plVar1,uVar4);
        if ((uVar9 & 1) == 0) goto LAB_0089016c;
        lVar11 = lVar11 + 0x30;
      } while (lVar5 + lVar11 != lVar7);
    }
    uVar10 = 1;
  }
  else {
LAB_0089016c:
    uVar10 = 0;
  }
  return uVar10;
}


// ===== 00890188  FUN_00890188 =====

void FUN_00890188(void)

{
  FUN_00890190();
  return;
}


// ===== 00890190  FUN_00890190 =====

bool FUN_00890190(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar4 == puVar1) {
    bVar2 = false;
  }
  else {
    do {
      uVar3 = param_2[1];
      puVar5 = (undefined8 *)*param_2;
      if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
        uVar3 = (ulong)*(byte *)((long)param_2 + 0x17);
        puVar5 = param_2;
      }
      if (*(char *)((long)puVar4 + 0x17) < '\0') {
        uVar3 = FUN_0061ff84(puVar5,uVar3,*puVar4,puVar4[1]);
      }
      else {
        uVar3 = FUN_0061ff84(puVar5,uVar3,puVar4);
      }
      if ((uVar3 & 1) != 0) {
        uVar3 = param_2[4];
        puVar5 = (undefined8 *)param_2[3];
        if (-1 < (char)*(byte *)((long)param_2 + 0x2f)) {
          uVar3 = (ulong)*(byte *)((long)param_2 + 0x2f);
          puVar5 = param_2 + 3;
        }
        if (*(char *)((long)puVar4 + 0x2f) < '\0') {
          uVar3 = FUN_0061ff84(puVar5,uVar3,puVar4[3],puVar4[4]);
        }
        else {
          uVar3 = FUN_0061ff84(puVar5,uVar3,puVar4 + 3);
        }
        puVar5 = puVar4;
        if ((uVar3 & 1) != 0) break;
      }
      puVar4 = puVar4 + 6;
      puVar5 = puVar1;
    } while (puVar4 != puVar1);
    bVar2 = puVar5 != puVar1;
  }
  return bVar2;
}


// ===== 00890268  FUN_00890268 =====

void FUN_00890268(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 < *(undefined8 **)(param_1 + 0x10)) {
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      FUN_005478d8(puVar1,*param_2,param_2[1]);
      cVar2 = *(char *)((long)param_2 + 0x2f);
    }
    else {
      uVar5 = param_2[1];
      uVar4 = *param_2;
      puVar1[2] = param_2[2];
      puVar1[1] = uVar5;
      *puVar1 = uVar4;
      cVar2 = *(char *)((long)param_2 + 0x2f);
    }
    if (cVar2 < '\0') {
      FUN_005478d8(puVar1 + 3,param_2[3],param_2[4]);
      puVar3 = puVar1 + 6;
    }
    else {
      uVar5 = param_2[4];
      uVar4 = param_2[3];
      puVar3 = puVar1 + 6;
      puVar1[5] = param_2[5];
      puVar1[4] = uVar5;
      puVar1[3] = uVar4;
    }
  }
  else {
    puVar3 = (undefined8 *)FUN_00893418(param_1,param_2);
  }
  *(undefined8 **)(param_1 + 8) = puVar3;
  return;
}


// ===== 0089032c  FUN_0089032c =====

undefined8 FUN_0089032c(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  if (puVar4 != puVar3) {
    do {
      puVar1 = puVar4 + 6;
      if (puVar3 != puVar1) {
        puVar5 = puVar4 + 6;
        do {
          uVar2 = puVar4[1];
          puVar3 = (undefined8 *)*puVar4;
          if (-1 < (char)*(byte *)((long)puVar4 + 0x17)) {
            uVar2 = (ulong)*(byte *)((long)puVar4 + 0x17);
            puVar3 = puVar4;
          }
          if (*(char *)((long)puVar5 + 0x17) < '\0') {
            uVar2 = FUN_0061ff84(puVar3,uVar2,*puVar5,puVar5[1]);
          }
          else {
            uVar2 = FUN_0061ff84(puVar3,uVar2,puVar5);
          }
          if ((uVar2 & 1) != 0) {
            uVar2 = puVar4[4];
            puVar3 = (undefined8 *)puVar4[3];
            if (-1 < (char)*(byte *)((long)puVar4 + 0x2f)) {
              uVar2 = (ulong)*(byte *)((long)puVar4 + 0x2f);
              puVar3 = puVar4 + 3;
            }
            if (*(char *)((long)puVar5 + 0x2f) < '\0') {
              uVar2 = FUN_0061ff84(puVar3,uVar2,puVar5[3],puVar5[4]);
            }
            else {
              uVar2 = FUN_0061ff84(puVar3,uVar2,puVar5 + 3);
            }
            if ((uVar2 & 1) != 0) {
              return 1;
            }
          }
          puVar3 = (undefined8 *)param_1[1];
          puVar5 = puVar5 + 6;
        } while (puVar5 != puVar3);
      }
      puVar4 = puVar1;
    } while (puVar1 != puVar3);
  }
  return 0;
}


// ===== 0089042c  FUN_0089042c =====

uint FUN_0089042c(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00890190();
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_0089395c(*param_1,param_1[1],param_2);
    FUN_008937a8(param_1,uVar2,param_1[1]);
  }
  return uVar1 & 1;
}


// ===== 00890488  FUN_00890488 =====

/* WARNING: Removing unreachable block (ram,0x00890588) */
/* WARNING: Removing unreachable block (ram,0x008905a4) */

undefined8 * FUN_00890488(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (param_2 == puVar2) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:1160: libc++ Hardening assertion __position != end() failed: vector::erase(iterator) called with a non-dereferenceable iterator\n"
              );
  }
  puVar4 = param_2;
  if (param_2 + 6 == puVar2) {
    puVar3 = param_2;
    if (param_2 == puVar2) goto LAB_008905b8;
  }
  else {
    do {
      if (*(char *)((long)puVar4 + 0x17) < '\0') {
        operator_delete((void *)*puVar4);
      }
      *(undefined1 *)((long)puVar4 + 0x47) = 0;
      puVar4[1] = puVar4[7];
      *puVar4 = puVar4[6];
      puVar4[2] = puVar4[8];
      *(undefined1 *)(puVar4 + 6) = 0;
      if (*(char *)((long)puVar4 + 0x2f) < '\0') {
        operator_delete((void *)puVar4[3]);
      }
      puVar1 = puVar4 + 0xc;
      puVar3 = puVar4 + 6;
      *(undefined1 *)((long)puVar4 + 0x5f) = 0;
      puVar4[4] = puVar4[10];
      puVar4[3] = puVar4[9];
      puVar4[5] = puVar4[0xb];
      *(undefined1 *)(puVar4 + 9) = 0;
      puVar4 = puVar3;
    } while (puVar1 != puVar2);
    puVar2 = *(undefined8 **)(param_1 + 8);
    if (puVar3 == puVar2) goto LAB_008905b8;
  }
  puVar2 = puVar2 + -3;
  do {
    puVar4 = puVar2 + -3;
    if (puVar2 == (undefined8 *)0x18) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    if (*(char *)((long)puVar2 + 0x17) < '\0') {
      operator_delete((void *)*puVar2);
    }
    puVar2 = puVar2 + -6;
  } while (puVar4 != puVar3);
LAB_008905b8:
  *(undefined8 **)(param_1 + 8) = puVar3;
  return param_2;
}


// ===== 00890600  FUN_00890600 =====

void FUN_00890600(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined4 *)(param_2 + 3);
  uVar5 = param_2[4];
  *param_1 = &PTR_FUN_00d3b190;
  param_1[1] = 0xffffffff00000000;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_005478d8(param_1 + 2,*param_2,param_2[1]);
  }
  else {
    uVar7 = param_2[1];
    uVar6 = *param_2;
    param_1[4] = param_2[2];
    param_1[3] = uVar7;
    param_1[2] = uVar6;
  }
  puVar4 = param_1 + 0x16;
  *puVar4 = 0;
  puVar2 = param_1 + 0x15;
  *puVar2 = puVar4;
  *(undefined4 *)(param_1 + 5) = uVar1;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  param_1[6] = uVar5;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (puVar2 != param_2 + 5) {
    lVar3 = FUN_0060b868(puVar2,param_2[6],puVar2);
    param_1[0x16] = lVar3;
    if (lVar3 != 0) {
      *(undefined8 **)(lVar3 + 0x10) = puVar4;
      for (puVar2 = (undefined8 *)*puVar4; puVar2 != (undefined8 *)0x0;
          puVar2 = (undefined8 *)*puVar2) {
        puVar4 = puVar2;
      }
    }
    param_1[0x15] = puVar4;
    param_1[0x17] = param_2[7];
  }
  return;
}


// ===== 008906f4  FUN_008906f4 =====

void FUN_008906f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = DAT_001f5550;
  *param_1 = &PTR_FUN_00d3b190;
  param_1[1] = uVar6;
  uVar1 = DAT_001ff1ac;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_005478d8(param_1 + 2,*param_2,param_2[1]);
  }
  else {
    uVar7 = param_2[1];
    uVar6 = *param_2;
    param_1[4] = param_2[2];
    param_1[3] = uVar7;
    param_1[2] = uVar6;
  }
  puVar4 = param_1 + 0xb;
  *puVar4 = 0;
  puVar5 = param_1 + 0x16;
  *puVar5 = 0;
  puVar2 = param_1 + 0x15;
  *puVar2 = puVar5;
  *(undefined4 *)(param_1 + 5) = uVar1;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (puVar2 != param_2 + 3) {
    lVar3 = FUN_0060b868(puVar2,param_2[4],puVar2);
    param_1[0x16] = lVar3;
    if (lVar3 != 0) {
      *(undefined8 **)(lVar3 + 0x10) = puVar5;
      for (puVar2 = (undefined8 *)*puVar5; puVar2 != (undefined8 *)0x0;
          puVar2 = (undefined8 *)*puVar2) {
        puVar5 = puVar2;
      }
    }
    param_1[0x15] = puVar5;
    param_1[0x17] = param_2[5];
  }
  if (puVar4 == param_2 + 6) {
    return;
  }
  puVar5 = param_2 + 7;
  if ((param_2[6] & 1) != 0) {
    puVar5 = (undefined8 *)param_2[7];
  }
  FUN_007b802c(puVar4,puVar5,(ulong)param_2[6] >> 1);
  return;
}


// ===== 00890830  FUN_00890830 =====

void FUN_00890830(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  void *pvVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  *param_1 = &PTR_FUN_00d3b190;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  if (*(char *)(param_2 + 0x27) < '\0') {
    FUN_005478d8(param_1 + 2,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
  }
  else {
    uVar12 = *(undefined8 *)(param_2 + 0x18);
    uVar11 = *(undefined8 *)(param_2 + 0x10);
    param_1[4] = *(undefined8 *)(param_2 + 0x20);
    param_1[3] = uVar12;
    param_1[2] = uVar11;
  }
  uVar12 = *(undefined8 *)(param_2 + 0x30);
  uVar11 = *(undefined8 *)(param_2 + 0x28);
  puVar4 = param_1 + 7;
  *(undefined1 *)puVar4 = 0;
  param_1[6] = uVar12;
  param_1[5] = uVar11;
  *(undefined1 *)(param_1 + 10) = 0;
  if (*(char *)(param_2 + 0x50) == '\x01') {
    if (*(char *)(param_2 + 0x4f) < '\0') {
      FUN_005478d8(puVar4,*(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x40));
    }
    else {
      uVar12 = *(undefined8 *)(param_2 + 0x40);
      uVar11 = *(undefined8 *)(param_2 + 0x38);
      param_1[9] = *(undefined8 *)(param_2 + 0x48);
      param_1[8] = uVar12;
      *puVar4 = uVar11;
    }
    *(undefined1 *)(param_1 + 10) = 1;
  }
  param_1[0xb] = 0;
  uVar7 = *(ulong *)(param_2 + 0x58);
  if (1 < uVar7) {
    if ((uVar7 & 1) == 0) {
      param_1[0xb] = uVar7;
      uVar14 = *(undefined8 *)(param_2 + 0x68);
      uVar13 = *(undefined8 *)(param_2 + 0x60);
      uVar12 = *(undefined8 *)(param_2 + 0x78);
      uVar11 = *(undefined8 *)(param_2 + 0x70);
      param_1[0x10] = *(undefined8 *)(param_2 + 0x80);
      param_1[0xd] = uVar14;
      param_1[0xc] = uVar13;
      param_1[0xf] = uVar12;
      param_1[0xe] = uVar11;
    }
    else {
      FUN_007b7fb0();
    }
  }
  puVar4 = param_1 + 0x11;
  *(undefined1 *)puVar4 = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    if (*(char *)(param_2 + 0x9f) < '\0') {
      FUN_005478d8(puVar4,*(undefined8 *)(param_2 + 0x88),*(undefined8 *)(param_2 + 0x90));
    }
    else {
      uVar12 = *(undefined8 *)(param_2 + 0x90);
      uVar11 = *(undefined8 *)(param_2 + 0x88);
      param_1[0x13] = *(undefined8 *)(param_2 + 0x98);
      param_1[0x12] = uVar12;
      *puVar4 = uVar11;
    }
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  plVar9 = param_1 + 0x16;
  *plVar9 = 0;
  puVar4 = param_1 + 0x15;
  *puVar4 = plVar9;
  param_1[0x17] = 0;
  if (*(long *)(param_2 + 0xb8) != 0) {
    lVar5 = FUN_0060b868(puVar4,*(undefined8 *)(param_2 + 0xb0),puVar4);
    *plVar9 = lVar5;
    *(long **)(lVar5 + 0x10) = plVar9;
    plVar9 = (long *)*plVar9;
    do {
      plVar8 = plVar9;
      plVar9 = (long *)*plVar8;
    } while (plVar9 != (long *)0x0);
    param_1[0x15] = plVar8;
    param_1[0x17] = *(undefined8 *)(param_2 + 0xb8);
  }
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  lVar5 = *(long *)(param_2 + 0xc0);
  lVar3 = *(long *)(param_2 + 200);
  uVar7 = lVar3 - lVar5;
  if (uVar7 != 0) {
    if (0x555555555555555 < (ulong)(((long)uVar7 >> 4) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
      FUN_00893790();
    }
    pvVar6 = operator_new(uVar7);
    lVar10 = 0;
    param_1[0x18] = pvVar6;
    param_1[0x19] = pvVar6;
    param_1[0x1a] = (long)pvVar6 + uVar7;
    do {
      puVar4 = (undefined8 *)((long)pvVar6 + lVar10);
      if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar1 = (undefined8 *)(lVar5 + lVar10);
      if (*(char *)((long)puVar1 + 0x17) < '\0') {
        FUN_005478d8(puVar4,*(undefined8 *)(lVar5 + lVar10),((undefined8 *)(lVar5 + lVar10))[1]);
      }
      else {
        uVar12 = puVar1[1];
        uVar11 = *puVar1;
        puVar4[2] = puVar1[2];
        puVar4[1] = uVar12;
        *puVar4 = uVar11;
      }
      lVar2 = lVar5 + lVar10;
      if (*(char *)(lVar2 + 0x2f) < '\0') {
        FUN_005478d8((long)pvVar6 + lVar10 + 0x18,*(undefined8 *)(lVar2 + 0x18),
                     *(undefined8 *)(lVar2 + 0x20));
      }
      else {
        uVar12 = *(undefined8 *)(lVar2 + 0x20);
        uVar11 = *(undefined8 *)(lVar2 + 0x18);
        *(undefined8 *)((long)pvVar6 + lVar10 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
        *(undefined8 *)((long)pvVar6 + lVar10 + 0x20) = uVar12;
        *(undefined8 *)((long)pvVar6 + lVar10 + 0x18) = uVar11;
      }
      lVar10 = lVar10 + 0x30;
    } while (lVar5 + lVar10 != lVar3);
    param_1[0x19] = (long)pvVar6 + lVar10;
  }
  return;
}


// ===== 00890aa0  FUN_00890aa0 =====

void FUN_00890aa0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  *param_1 = &PTR_FUN_00d3b190;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  uVar12 = *(undefined8 *)(param_2 + 0x18);
  uVar11 = *(undefined8 *)(param_2 + 0x10);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar12;
  param_1[2] = uVar11;
  uVar12 = *(undefined8 *)(param_2 + 0x30);
  uVar11 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[6] = uVar12;
  param_1[5] = uVar11;
  *(undefined1 *)(param_1 + 10) = 0;
  if (*(char *)(param_2 + 0x50) == '\x01') {
    uVar12 = *(undefined8 *)(param_2 + 0x40);
    uVar11 = *(undefined8 *)(param_2 + 0x38);
    param_1[9] = *(undefined8 *)(param_2 + 0x48);
    param_1[8] = uVar12;
    param_1[7] = uVar11;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  param_1[0xb] = 0;
  param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
  uVar14 = *(undefined8 *)(param_2 + 0x68);
  uVar13 = *(undefined8 *)(param_2 + 0x60);
  uVar12 = *(undefined8 *)(param_2 + 0x78);
  uVar11 = *(undefined8 *)(param_2 + 0x70);
  param_1[0x10] = *(undefined8 *)(param_2 + 0x80);
  param_1[0xd] = uVar14;
  param_1[0xc] = uVar13;
  param_1[0xf] = uVar12;
  param_1[0xe] = uVar11;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    uVar12 = *(undefined8 *)(param_2 + 0x90);
    uVar11 = *(undefined8 *)(param_2 + 0x88);
    param_1[0x13] = *(undefined8 *)(param_2 + 0x98);
    param_1[0x12] = uVar12;
    param_1[0x11] = uVar11;
    *(undefined8 *)(param_2 + 0x90) = 0;
    *(undefined8 *)(param_2 + 0x98) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  param_1[0x15] = *(undefined8 *)(param_2 + 0xa8);
  plVar6 = (long *)(param_2 + 0xb0);
  lVar8 = *plVar6;
  plVar7 = param_1 + 0x16;
  *plVar7 = lVar8;
  lVar9 = *(long *)(param_2 + 0xb8);
  param_1[0x17] = lVar9;
  if (lVar9 == 0) {
    param_1[0x15] = plVar7;
  }
  else {
    *(long **)(lVar8 + 0x10) = plVar7;
    *(long **)(param_2 + 0xa8) = plVar6;
    *plVar6 = 0;
    *(undefined8 *)(param_2 + 0xb8) = 0;
  }
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  lVar8 = *(long *)(param_2 + 0xc0);
  lVar9 = *(long *)(param_2 + 200);
  uVar4 = lVar9 - lVar8;
  if (uVar4 != 0) {
    if (0x555555555555555 < (ulong)(((long)uVar4 >> 4) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
      FUN_00893790();
    }
    pvVar5 = operator_new(uVar4);
    lVar10 = 0;
    param_1[0x18] = pvVar5;
    param_1[0x19] = pvVar5;
    param_1[0x1a] = (long)pvVar5 + uVar4;
    do {
      puVar1 = (undefined8 *)((long)pvVar5 + lVar10);
      if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar2 = (undefined8 *)(lVar8 + lVar10);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        FUN_005478d8(puVar1,*(undefined8 *)(lVar8 + lVar10),((undefined8 *)(lVar8 + lVar10))[1]);
      }
      else {
        uVar12 = puVar2[1];
        uVar11 = *puVar2;
        puVar1[2] = puVar2[2];
        puVar1[1] = uVar12;
        *puVar1 = uVar11;
      }
      lVar3 = lVar8 + lVar10;
      if (*(char *)(lVar3 + 0x2f) < '\0') {
        FUN_005478d8((long)pvVar5 + lVar10 + 0x18,*(undefined8 *)(lVar3 + 0x18),
                     *(undefined8 *)(lVar3 + 0x20));
      }
      else {
        uVar12 = *(undefined8 *)(lVar3 + 0x20);
        uVar11 = *(undefined8 *)(lVar3 + 0x18);
        *(undefined8 *)((long)pvVar5 + lVar10 + 0x28) = *(undefined8 *)(lVar3 + 0x28);
        *(undefined8 *)((long)pvVar5 + lVar10 + 0x20) = uVar12;
        *(undefined8 *)((long)pvVar5 + lVar10 + 0x18) = uVar11;
      }
      lVar10 = lVar10 + 0x30;
    } while (lVar8 + lVar10 != lVar9);
    param_1[0x19] = (long)pvVar5 + lVar10;
  }
  return;
}


// ===== 00890cb8  FUN_00890cb8 =====

void FUN_00890cb8(undefined8 *param_1)

{
  byte bVar1;
  char cVar2;
  undefined8 *local_8;
  
  *param_1 = &PTR_FUN_00d3b190;
  FUN_0088ffc0(param_1 + 0x18);
  local_8 = param_1 + 0x15;
  FUN_0060b2cc(&local_8,param_1[0x16]);
  if ((*(char *)(param_1 + 0x14) == '\x01') && (*(char *)((long)param_1 + 0x9f) < '\0')) {
    operator_delete((void *)param_1[0x11]);
    bVar1 = *(byte *)(param_1 + 0xb);
  }
  else {
    bVar1 = *(byte *)(param_1 + 0xb);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete((void *)param_1[0xc]);
  }
  if ((*(char *)(param_1 + 10) == '\x01') && (*(char *)((long)param_1 + 0x4f) < '\0')) {
    operator_delete((void *)param_1[7]);
    cVar2 = *(char *)((long)param_1 + 0x27);
  }
  else {
    cVar2 = *(char *)((long)param_1 + 0x27);
  }
  if (cVar2 < '\0') {
    operator_delete((void *)param_1[2]);
  }
  return;
}


// ===== 00890d88  FUN_00890d88 =====

void FUN_00890d88(void *param_1)

{
  FUN_00890cb8();
  operator_delete(param_1);
  return;
}


// ===== 00890db8  FUN_00890db8 =====

long FUN_00890db8(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  byte bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  if (param_1 == param_2) {
    uVar7 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = uVar7;
    FUN_005e7520(param_1 + 0x38,param_2 + 0x38);
    FUN_005e7520(param_1 + 0x88,param_2 + 0x88);
    return param_1;
  }
  bVar3 = *(byte *)(param_2 + 0x27);
  if (*(char *)(param_1 + 0x27) < '\0') {
    uVar1 = *(ulong *)(param_2 + 0x18);
    puVar2 = *(undefined8 **)(param_2 + 0x10);
    if (-1 < (char)bVar3) {
      uVar1 = (ulong)bVar3;
      puVar2 = (undefined8 *)(param_2 + 0x10);
    }
    FUN_00547f08(param_1 + 0x10,puVar2,uVar1);
  }
  else if ((char)bVar3 < '\0') {
    FUN_00547fc0(param_1 + 0x10,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
  }
  else {
    uVar8 = *(undefined8 *)(param_2 + 0x18);
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x18) = uVar8;
    *(undefined8 *)(param_1 + 0x10) = uVar7;
  }
  uVar7 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar7;
  FUN_005e7520(param_1 + 0x38,param_2 + 0x38);
  puVar2 = (undefined8 *)(param_2 + 0x60);
  if ((*(ulong *)(param_2 + 0x58) & 1) != 0) {
    puVar2 = *(undefined8 **)(param_2 + 0x60);
  }
  FUN_007b802c(param_1 + 0x58,puVar2,*(ulong *)(param_2 + 0x58) >> 1);
  FUN_005e7520(param_1 + 0x88,param_2 + 0x88);
  if (*(long *)(param_1 + 0xb8) == 0) {
    lVar5 = FUN_0060b868(param_1 + 0xa8,*(undefined8 *)(param_2 + 0xb0),param_1 + 0xa8);
    plVar6 = (long *)(param_1 + 0xb0);
    *plVar6 = lVar5;
    if (lVar5 == 0) goto LAB_00890f04;
    *(long **)(lVar5 + 0x10) = plVar6;
    plVar4 = (long *)*plVar6;
  }
  else {
    plVar4 = (long *)FUN_00667af8(param_1 + 0xa8,*(undefined8 *)(param_1 + 0xb0),
                                  *(undefined8 *)(param_2 + 0xb0),0,param_1 + 0xa8);
    *(long **)(param_1 + 0xb0) = plVar4;
  }
  if (plVar4 == (long *)0x0) {
    plVar6 = (long *)(param_1 + 0xb0);
  }
  else {
    do {
      plVar6 = plVar4;
      plVar4 = (long *)*plVar6;
    } while ((long *)*plVar6 != (long *)0x0);
  }
LAB_00890f04:
  *(long **)(param_1 + 0xa8) = plVar6;
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  FUN_00893b48(param_1 + 0xc0,*(long *)(param_2 + 0xc0),*(long *)(param_2 + 200),
               (*(long *)(param_2 + 200) - *(long *)(param_2 + 0xc0) >> 4) * -0x5555555555555555);
  return param_1;
}


// ===== 00890f48  FUN_00890f48 =====

long FUN_00890f48(long param_1,long param_2)

{
  undefined8 *puVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *local_38;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  if (*(char *)(param_1 + 0x27) < '\0') {
    operator_delete(*(void **)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar8 = *(undefined8 *)(param_2 + 0x18);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  puVar1 = (undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar8;
  *(undefined8 *)(param_1 + 0x10) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x28);
  *(undefined1 *)(param_2 + 0x27) = 0;
  *(undefined1 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar7;
  cVar2 = *(char *)(param_1 + 0x50);
  if (cVar2 == *(char *)(param_2 + 0x50)) {
    if (cVar2 != '\0') {
      if (*(char *)(param_1 + 0x4f) < '\0') {
        operator_delete(*(void **)(param_1 + 0x38));
        *puVar1 = 0;
        *(undefined8 *)(param_1 + 0x40) = 0;
        *(undefined8 *)(param_1 + 0x48) = 0;
      }
      uVar8 = *(undefined8 *)(param_2 + 0x40);
      uVar7 = *(undefined8 *)(param_2 + 0x38);
      *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
      *(undefined8 *)(param_1 + 0x40) = uVar8;
      *puVar1 = uVar7;
      *(undefined1 *)(param_2 + 0x4f) = 0;
      *(undefined1 *)(param_2 + 0x38) = 0;
    }
  }
  else if (cVar2 == '\0') {
    if (puVar1 == (undefined8 *)0x0) goto LAB_008911b4;
    uVar8 = *(undefined8 *)(param_2 + 0x40);
    uVar7 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x40) = uVar8;
    *puVar1 = uVar7;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  else {
    if (*(char *)(param_1 + 0x4f) < '\0') {
      operator_delete(*(void **)(param_1 + 0x38));
    }
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  if (param_1 != param_2) {
    if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
      operator_delete(*(void **)(param_1 + 0x60));
    }
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
    uVar10 = *(undefined8 *)(param_2 + 0x68);
    uVar9 = *(undefined8 *)(param_2 + 0x60);
    uVar8 = *(undefined8 *)(param_2 + 0x78);
    uVar7 = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
    *(undefined8 *)(param_1 + 0x68) = uVar10;
    *(undefined8 *)(param_1 + 0x60) = uVar9;
    *(undefined8 *)(param_1 + 0x78) = uVar8;
    *(undefined8 *)(param_1 + 0x70) = uVar7;
    *(undefined8 *)(param_2 + 0x58) = 0;
  }
  cVar2 = *(char *)(param_1 + 0xa0);
  puVar1 = (undefined8 *)(param_1 + 0x88);
  if (cVar2 == *(char *)(param_2 + 0xa0)) {
    if (cVar2 != '\0') {
      if (*(char *)(param_1 + 0x9f) < '\0') {
        operator_delete(*(void **)(param_1 + 0x88));
        *puVar1 = 0;
        *(undefined8 *)(param_1 + 0x90) = 0;
        *(undefined8 *)(param_1 + 0x98) = 0;
      }
      uVar8 = *(undefined8 *)(param_2 + 0x90);
      uVar7 = *(undefined8 *)(param_2 + 0x88);
      *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
      *(undefined8 *)(param_1 + 0x90) = uVar8;
      *puVar1 = uVar7;
      *(undefined1 *)(param_2 + 0x9f) = 0;
      *(undefined1 *)(param_2 + 0x88) = 0;
    }
  }
  else if (cVar2 == '\0') {
    if (puVar1 == (undefined8 *)0x0) {
LAB_008911b4:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar8 = *(undefined8 *)(param_2 + 0x90);
    uVar7 = *(undefined8 *)(param_2 + 0x88);
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
    *(undefined8 *)(param_1 + 0x90) = uVar8;
    *puVar1 = uVar7;
    *(undefined8 *)(param_2 + 0x90) = 0;
    *(undefined8 *)(param_2 + 0x98) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
    *(undefined1 *)(param_1 + 0xa0) = 1;
  }
  else {
    if (*(char *)(param_1 + 0x9f) < '\0') {
      operator_delete(*(void **)(param_1 + 0x88));
    }
    *(undefined1 *)(param_1 + 0xa0) = 0;
  }
  plVar6 = (long *)(param_1 + 0xb0);
  local_38 = (undefined8 *)(param_1 + 0xa8);
  FUN_0060b2cc(&local_38,*plVar6);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  plVar3 = (long *)(param_2 + 0xb0);
  lVar4 = *plVar3;
  *plVar6 = lVar4;
  lVar5 = *(long *)(param_2 + 0xb8);
  *(long *)(param_1 + 0xb8) = lVar5;
  if (lVar5 == 0) {
    *(undefined8 *)(param_1 + 0xa8) = plVar6;
  }
  else {
    *(long **)(lVar4 + 0x10) = plVar6;
    *(long **)(param_2 + 0xa8) = plVar3;
    *plVar3 = 0;
    *(undefined8 *)(param_2 + 0xb8) = 0;
  }
  if (param_1 != param_2) {
    FUN_00893b48(param_1 + 0xc0,*(long *)(param_2 + 0xc0),*(long *)(param_2 + 200),
                 (*(long *)(param_2 + 200) - *(long *)(param_2 + 0xc0) >> 4) * -0x5555555555555555);
  }
  return param_1;
}


// ===== 008911c8  FUN_008911c8 =====

ulong FUN_008911c8(long param_1,long param_2)

{
  size_t __n;
  size_t sVar1;
  undefined8 *__s1;
  undefined8 *__s2;
  byte bVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  
  if ((*(int *)(param_1 + 8) == *(int *)(param_2 + 8)) &&
     (*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc))) {
    bVar2 = *(byte *)(param_1 + 0x27);
    bVar3 = *(byte *)(param_2 + 0x27);
    __n = *(size_t *)(param_1 + 0x18);
    if (-1 < (char)bVar2) {
      __n = (ulong)bVar2;
    }
    sVar1 = *(size_t *)(param_2 + 0x18);
    if (-1 < (char)bVar3) {
      sVar1 = (ulong)bVar3;
    }
    if (__n == sVar1) {
      __s1 = (undefined8 *)*(void **)(param_1 + 0x10);
      if (-1 < (char)bVar2) {
        __s1 = (undefined8 *)(param_1 + 0x10);
      }
      __s2 = (undefined8 *)*(void **)(param_2 + 0x10);
      if (-1 < (char)bVar3) {
        __s2 = (undefined8 *)(param_2 + 0x10);
      }
      iVar4 = memcmp(__s1,__s2,__n);
      if ((((iVar4 == 0) && (*(int *)(param_1 + 0x28) == *(int *)(param_2 + 0x28))) &&
          (*(long *)(param_1 + 0xb8) == *(long *)(param_2 + 0xb8))) &&
         ((uVar5 = FUN_00667cd4(*(undefined8 *)(param_1 + 0xa8),param_1 + 0xb0,
                                *(undefined8 *)(param_2 + 0xa8)), (uVar5 & 1) != 0 &&
          (uVar5 = FUN_00890098(param_1 + 0xc0,param_2 + 0xc0), (uVar5 & 1) != 0)))) {
        if (*(int *)(param_1 + 8) != 0) {
          uVar5 = FUN_008912f4(param_1 + 0x38,param_2 + 0x38);
          return uVar5;
        }
        if (*(int *)(param_1 + 0x2c) == *(int *)(param_2 + 0x2c)) {
          return (ulong)(*(long *)(param_1 + 0x30) == *(long *)(param_2 + 0x30));
        }
      }
    }
  }
  return 0;
}


// ===== 008912f4  FUN_008912f4 =====

bool FUN_008912f4(undefined8 *param_1,undefined8 *param_2)

{
  size_t __n;
  size_t sVar1;
  undefined8 *__s1;
  undefined8 *__s2;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  
  bVar2 = *(byte *)(param_2 + 3);
  bVar4 = *(byte *)(param_1 + 3) == bVar2;
  if ((bVar2 & *(byte *)(param_1 + 3)) != 0) {
    if ((bVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    bVar2 = *(byte *)((long)param_1 + 0x17);
    bVar3 = *(byte *)((long)param_2 + 0x17);
    __n = param_1[1];
    if (-1 < (char)bVar2) {
      __n = (ulong)bVar2;
    }
    sVar1 = param_2[1];
    if (-1 < (char)bVar3) {
      sVar1 = (ulong)bVar3;
    }
    if (__n == sVar1) {
      __s1 = (undefined8 *)*param_1;
      if (-1 < (char)bVar2) {
        __s1 = param_1;
      }
      __s2 = (undefined8 *)*param_2;
      if (-1 < (char)bVar3) {
        __s2 = param_2;
      }
      iVar5 = memcmp(__s1,__s2,__n);
      bVar4 = iVar5 == 0;
    }
    else {
      bVar4 = false;
    }
  }
  return bVar4;
}


// ===== 0089139c  thunk_FUN_00894770 =====

void thunk_FUN_00894770(void)

{
  FUN_00894770();
  return;
}


// ===== 008913a4  FUN_008913a4 =====

uint FUN_008913a4(long *param_1,long param_2)

{
  undefined1 *puVar1;
  undefined8 *__s2;
  byte bVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 *__s1;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*param_1 + 0x10))(&local_b0);
  puVar5 = puStack_98;
  puVar4 = local_a0;
  __s1 = puStack_a8;
  bVar2 = *(byte *)(param_2 + 0x1f);
  puVar3 = (undefined1 *)((ulong)puStack_98 >> 0x38);
  puVar8 = local_a0;
  if (((ulong)puStack_98 & 0x8000000000000000) == 0) {
    puVar8 = puVar3;
  }
  puVar1 = *(undefined1 **)(param_2 + 0x10);
  if (-1 < (char)bVar2) {
    puVar1 = (undefined1 *)(ulong)bVar2;
  }
  if (puVar8 == puVar1) {
    puVar1 = puStack_a8;
    if (((ulong)puStack_98 & 0x8000000000000000) == 0) {
      puVar1 = (undefined1 *)((ulong)&local_b0 | 8);
    }
    __s2 = (undefined8 *)*(void **)(param_2 + 8);
    if (-1 < (char)bVar2) {
      __s2 = (undefined8 *)(param_2 + 8);
    }
    iVar6 = memcmp(puVar1,__s2,(size_t)puVar8);
    if ((iVar6 == 0) && ((int)local_90 == *(int *)(param_2 + 0x20))) {
      bVar2 = *(byte *)(param_2 + 0x30);
      if ((bVar2 & (byte)local_80) == 0) {
        if ((byte)local_80 == bVar2) {
LAB_00891480:
          bVar2 = *(byte *)(param_2 + 0x28);
          if ((bVar2 & (byte)local_88) == 0) {
            if ((byte)local_88 == bVar2) {
LAB_008914b0:
              puVar8 = (undefined1 *)strlen("rtx");
              if ((long)puVar5 < 0) {
                if (puVar8 == puVar4) {
                  if (puVar4 == (undefined1 *)0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                    FUN_005f5590();
                  }
                  goto LAB_008914e4;
                }
              }
              else {
                __s1 = (undefined1 *)((ulong)&local_b0 | 8);
                if (puVar8 == puVar3) {
LAB_008914e4:
                  iVar6 = memcmp(__s1,PTR_DAT_00d52130,(size_t)puVar8);
                  if (iVar6 == 0) {
                    uVar7 = 1;
                    goto LAB_00891528;
                  }
                }
              }
              if (local_50 == *(undefined1 **)(param_2 + 0x60)) {
                uVar7 = FUN_00667cd4(local_60,&puStack_58,*(undefined8 *)(param_2 + 0x50));
                goto LAB_00891528;
              }
            }
          }
          else {
            if ((bVar2 & 1) == 0) {
LAB_00891558:
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                        );
            }
            if (local_90._4_4_ == *(int *)(param_2 + 0x24)) goto LAB_008914b0;
          }
        }
      }
      else {
        if ((bVar2 & 1) == 0) goto LAB_00891558;
        if (local_88._4_4_ == *(int *)(param_2 + 0x2c)) goto LAB_00891480;
      }
    }
  }
  uVar7 = 0;
LAB_00891528:
  FUN_00668620(&local_b0);
  return uVar7 & 1;
}


// ===== 00891570  FUN_00891570 =====

undefined8 FUN_00891570(long param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  size_t __n;
  ulong uVar2;
  byte bVar3;
  undefined8 *__s1;
  ulong uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  plVar6 = *(long **)(param_1 + 0xb0);
  if (plVar6 != (long *)0x0) {
    __s1 = (undefined8 *)*param_2;
    uVar2 = param_2[1];
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      __s1 = param_2;
      uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    do {
      while( true ) {
        plVar1 = (long *)plVar6[4];
        uVar4 = plVar6[5];
        if (-1 < (char)*(byte *)((long)plVar6 + 0x37)) {
          plVar1 = plVar6 + 4;
          uVar4 = (ulong)*(byte *)((long)plVar6 + 0x37);
        }
        __n = uVar4;
        if (uVar2 <= uVar4) {
          __n = uVar2;
        }
        iVar5 = memcmp(__s1,plVar1,__n);
        if (iVar5 == 0) break;
        if (-1 < iVar5) goto LAB_008915b4;
LAB_00891604:
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          return 0;
        }
      }
      if (uVar2 == uVar4) {
        if (plVar6 == (long *)(param_1 + 0xb0)) {
          return 0;
        }
        plVar1 = plVar6 + 7;
        if (param_3 != plVar1) {
          bVar3 = *(byte *)((long)plVar6 + 0x4f);
          if (*(char *)((long)param_3 + 0x17) < '\0') {
            uVar2 = plVar6[8];
            plVar6 = (long *)plVar6[7];
            if (-1 < (char)bVar3) {
              uVar2 = (ulong)bVar3;
              plVar6 = plVar1;
            }
            FUN_00547f08(param_3,plVar6,uVar2);
          }
          else if ((char)bVar3 < '\0') {
            FUN_00547fc0(param_3,plVar6[7],plVar6[8]);
          }
          else {
            lVar8 = plVar6[8];
            lVar7 = *plVar1;
            param_3[2] = plVar6[9];
            param_3[1] = lVar8;
            *param_3 = lVar7;
          }
        }
        return 1;
      }
      if (uVar2 < uVar4) goto LAB_00891604;
LAB_008915b4:
      plVar6 = (long *)plVar6[1];
    } while (plVar6 != (long *)0x0);
  }
  return 0;
}


// ===== 00891698  FUN_00891698 =====

undefined8 FUN_00891698(long param_1,undefined8 *param_2,undefined4 *param_3)

{
  size_t __n;
  undefined8 *__s1;
  ulong uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined1 auVar7 [12];
  
  plVar6 = *(long **)(param_1 + 0xb0);
  if (plVar6 != (long *)0x0) {
    __s1 = (undefined8 *)*param_2;
    uVar5 = param_2[1];
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      __s1 = param_2;
      uVar5 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    do {
      while( true ) {
        plVar3 = (long *)plVar6[4];
        uVar1 = plVar6[5];
        if (-1 < (char)*(byte *)((long)plVar6 + 0x37)) {
          plVar3 = plVar6 + 4;
          uVar1 = (ulong)*(byte *)((long)plVar6 + 0x37);
        }
        __n = uVar1;
        if (uVar5 <= uVar1) {
          __n = uVar5;
        }
        iVar2 = memcmp(__s1,plVar3,__n);
        if (iVar2 == 0) break;
        if (-1 < iVar2) goto LAB_008916dc;
LAB_0089172c:
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          return 0;
        }
      }
      if (uVar5 == uVar1) {
        if (plVar6 == (long *)(param_1 + 0xb0)) {
          return 0;
        }
        lVar4 = (long)*(char *)((long)plVar6 + 0x4f);
        if (lVar4 < 0) {
          plVar3 = (long *)plVar6[7];
          lVar4 = plVar6[8];
        }
        else {
          plVar3 = plVar6 + 7;
        }
        auVar7 = FUN_00675340(plVar3,lVar4,10);
        uVar5 = auVar7._0_8_ & 0xffffffff | 0x100000000;
        if ((auVar7._8_4_ & (uint)(auVar7._0_8_ + 0x80000000 >> 0x20 == 0)) == 0) {
          uVar5 = 0;
        }
        if (uVar5 >> 0x20 == 0) {
          return 0;
        }
        *param_3 = (int)uVar5;
        return 1;
      }
      if (uVar5 < uVar1) goto LAB_0089172c;
LAB_008916dc:
      plVar6 = (long *)plVar6[1];
    } while (plVar6 != (long *)0x0);
  }
  return 0;
}


// ===== 008917b0  FUN_008917b0 =====

void FUN_008917b0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uStack_29;
  undefined8 local_28;
  long local_8;
  
  local_8 = param_1 + 0xa8;
  local_28 = param_2;
  lVar5 = FUN_0066d1b4(&local_8,param_2,&DAT_001f94c3,&local_28,&uStack_29);
  puVar1 = (undefined8 *)(lVar5 + 0x38);
  if (puVar1 != param_3) {
    bVar3 = *(byte *)((long)param_3 + 0x17);
    if (*(char *)(lVar5 + 0x4f) < '\0') {
      uVar2 = param_3[1];
      puVar4 = (undefined8 *)*param_3;
      if (-1 < (char)bVar3) {
        uVar2 = (ulong)bVar3;
        puVar4 = param_3;
      }
      FUN_00547f08(puVar1,puVar4,uVar2);
    }
    else if ((char)bVar3 < '\0') {
      FUN_00547fc0(puVar1,*param_3,param_3[1]);
    }
    else {
      uVar7 = param_3[1];
      uVar6 = *param_3;
      *(undefined8 *)(lVar5 + 0x48) = param_3[2];
      *(undefined8 *)(lVar5 + 0x40) = uVar7;
      *puVar1 = uVar6;
    }
  }
  return;
}


// ===== 00891858  FUN_00891858 =====

void FUN_00891858(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 uStack_31;
  undefined8 local_30;
  long lStack_28;
  
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  FUN_005f55c4(&local_50,0x16,param_3);
  lStack_28 = param_1 + 0xa8;
  local_30 = param_2;
  lVar1 = FUN_0066d1b4(&lStack_28,param_2,&DAT_001f94c3,&local_30,&uStack_31);
  if (*(char *)(lVar1 + 0x4f) < '\0') {
    operator_delete(*(void **)(lVar1 + 0x38));
    *(undefined8 *)(lVar1 + 0x38) = 0;
    *(undefined8 *)(lVar1 + 0x40) = 0;
    *(undefined8 *)(lVar1 + 0x48) = 0;
  }
  *(undefined8 *)(lVar1 + 0x48) = local_40;
  *(undefined8 *)(lVar1 + 0x40) = uStack_48;
  *(undefined8 *)(lVar1 + 0x38) = local_50;
  return;
}


// ===== 008918f8  FUN_008918f8 =====

void FUN_008918f8(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_2 + 8);
  if ((*(byte *)(param_2 + 0x17) & 0x80) == 0) {
    uVar1 = (ulong)*(byte *)(param_2 + 0x17);
  }
  if ((uVar1 != 0) && (uVar1 = FUN_00890190(param_1 + 0xc0), (uVar1 & 1) == 0)) {
    FUN_00890268(param_1 + 0xc0,param_2);
    uVar1 = FUN_0089032c(param_1 + 0xc0);
    if ((uVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../media/base/codec.cc",0x41,"!HasDuplicateEntries()",&DAT_001f5fa0);
    }
  }
  return;
}


// ===== 00891978  FUN_00891978 =====

void FUN_00891978(long param_1)

{
  FUN_00890190(param_1 + 0xc0);
  return;
}


// ===== 00891984  FUN_00891984 =====

void FUN_00891984(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xc0);
  if (lVar2 != *(long *)(param_1 + 200)) {
    do {
      uVar1 = FUN_00890190(param_2 + 0xc0,lVar2);
      if ((uVar1 & 1) == 0) {
        lVar2 = FUN_00890488((long *)(param_1 + 0xc0),lVar2);
      }
      else {
        lVar2 = lVar2 + 0x30;
      }
    } while (lVar2 != *(long *)(param_1 + 200));
  }
  return;
}


// ===== 008919fc  FUN_008919fc =====

void FUN_008919fc(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined4 uVar3;
  int iVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[7] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[6] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[9] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[8] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xb] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[10] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xd] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xc] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_006692b8(param_1);
  puVar1 = (undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xc);
  if (param_1 + 1 != puVar1) {
    bVar5 = *(byte *)(param_2 + 0x27);
    if (*(char *)((long)param_1 + 0x1f) < '\0') {
      uVar2 = *(ulong *)(param_2 + 0x18);
      puVar6 = *(undefined8 **)(param_2 + 0x10);
      if (-1 < (char)bVar5) {
        uVar2 = (ulong)bVar5;
        puVar6 = puVar1;
      }
      FUN_00547f08(param_1 + 1,puVar6,uVar2);
    }
    else if ((char)bVar5 < '\0') {
      FUN_00547fc0(param_1 + 1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
    }
    else {
      uVar8 = *puVar1;
      uVar7 = *(undefined8 *)(param_2 + 0x20);
      param_1[2] = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = uVar8;
      param_1[3] = uVar7;
    }
  }
  uVar3 = *(undefined4 *)(param_2 + 0x28);
  uVar7 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined1 *)(param_1 + 5) = 1;
  *(undefined4 *)((long)param_1 + 0x24) = uVar3;
  FUN_0089436c(param_1 + 10,uVar7,param_2 + 0xb0);
  iVar4 = *(int *)(param_2 + 8);
  if (iVar4 != 1) {
    if (iVar4 != 0) {
      return;
    }
    uVar7 = *(undefined8 *)(param_2 + 0x30);
    *(undefined1 *)(param_1 + 6) = 1;
    *(int *)((long)param_1 + 0x2c) = (int)uVar7;
  }
  *(int *)(param_1 + 4) = iVar4;
  return;
}


// ===== 00891aec  FUN_00891aec =====

uint FUN_00891aec(long param_1)

{
  int iVar1;
  uint uVar2;
  size_t sVar3;
  long lVar4;
  long lVar5;
  
  iVar1 = FUN_00891b68();
  if (iVar1 == 0) {
    lVar4 = (long)*(char *)(param_1 + 0x27);
    if (lVar4 < 0) {
      lVar5 = *(long *)(param_1 + 0x10);
      lVar4 = *(long *)(param_1 + 0x18);
    }
    else {
      lVar5 = param_1 + 0x10;
    }
    sVar3 = strlen("CN");
    uVar2 = FUN_0061ff84(lVar5,lVar4,&DAT_001ff304,sVar3);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2 & 1;
}


// ===== 00891b68  FUN_00891b68 =====

undefined4 FUN_00891b68(long param_1)

{
  size_t sVar1;
  ulong uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = (long)*(char *)(param_1 + 0x27);
  lVar4 = param_1 + 0x10;
  if (lVar5 < 0) {
    lVar6 = *(long *)(param_1 + 0x10);
    lVar5 = *(long *)(param_1 + 0x18);
  }
  else {
    lVar6 = param_1 + 0x10;
  }
  sVar1 = strlen("red");
  uVar2 = FUN_0061ff84(lVar6,lVar5,&DAT_001ff1bc,sVar1);
  if ((uVar2 & 1) == 0) {
    lVar5 = (long)*(char *)(param_1 + 0x27);
    if (lVar5 < 0) {
      lVar6 = *(long *)(param_1 + 0x10);
      lVar5 = *(long *)(param_1 + 0x18);
    }
    else {
      lVar6 = param_1 + 0x10;
    }
    sVar1 = strlen("ulpfec");
    uVar2 = FUN_0061ff84(lVar6,lVar5,"ulpfec",sVar1);
    if ((uVar2 & 1) == 0) {
      lVar5 = (long)*(char *)(param_1 + 0x27);
      if (lVar5 < 0) {
        lVar6 = *(long *)(param_1 + 0x10);
        lVar5 = *(long *)(param_1 + 0x18);
      }
      else {
        lVar6 = param_1 + 0x10;
      }
      sVar1 = strlen("flexfec-03");
      uVar2 = FUN_0061ff84(lVar6,lVar5,"flexfec-03",sVar1);
      if ((uVar2 & 1) == 0) {
        lVar5 = (long)*(char *)(param_1 + 0x27);
        if (lVar5 < 0) {
          lVar4 = *(long *)(param_1 + 0x10);
          lVar5 = *(long *)(param_1 + 0x18);
        }
        sVar1 = strlen("rtx");
        uVar2 = FUN_0061ff84(lVar4,lVar5,&DAT_001ff1e0,sVar1);
        uVar3 = 4;
        if ((uVar2 & 1) == 0) {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 3;
      }
    }
    else {
      uVar3 = 2;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


// ===== 00891ca8  FUN_00891ca8 =====

/* WARNING: Removing unreachable block (ram,0x00891ec0) */
/* WARNING: Removing unreachable block (ram,0x00891d14) */

undefined8 FUN_00891ca8(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  size_t sVar6;
  undefined8 ****ppppuVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined8 ***local_78;
  size_t sStack_70;
  undefined8 local_68;
  int local_60;
  int local_5c;
  undefined8 ***local_58;
  size_t sStack_50;
  undefined8 local_48;
  
  if (*(uint *)(param_1 + 0xc) < 0x80) {
    iVar3 = FUN_00891b68(param_1);
    puVar2 = PTR_s_x_google_min_bitrate_00d52288;
    if (iVar3 == 0) {
      local_5c = -1;
      local_60 = -1;
      sVar6 = strlen(PTR_s_x_google_min_bitrate_00d52288);
      if (0x7ffffffffffffff6 < sVar6) {
LAB_00891f64:
                    /* WARNING: Subroutine does not return */
        FUN_005d45ec();
      }
      if (sVar6 < 0x17) {
        local_48 = CONCAT17((char)sVar6,(undefined7)local_48);
        ppppuVar7 = &local_58;
      }
      else {
        uVar5 = (sVar6 & 0x7ffffffffffffff8) + 8;
        uVar1 = 0x19;
        if (uVar5 != 0x18) {
          uVar1 = uVar5;
        }
        ppppuVar7 = (undefined8 ****)operator_new(uVar1);
        local_48 = uVar1 | 0x8000000000000000;
        local_58 = ppppuVar7;
        sStack_50 = sVar6;
      }
      if ((undefined8 ****)((long)ppppuVar7 + sVar6) < ppppuVar7) {
LAB_00891f3c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                  );
      }
      if ((ppppuVar7 <= puVar2) && (puVar2 < (undefined8 ****)((long)ppppuVar7 + sVar6))) {
LAB_00891f50:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                  );
      }
      memcpy(ppppuVar7,PTR_s_x_google_min_bitrate_00d52288,sVar6);
      *(undefined1 *)((long)ppppuVar7 + sVar6) = 0;
      uVar5 = FUN_00891698(param_1,&local_58,&local_5c);
      uVar4 = 0;
      if ((uVar5 & 1) != 0) {
        sVar6 = strlen("x-google-max-bitrate");
        if (0x7ffffffffffffff6 < sVar6) goto LAB_00891f64;
        if (sVar6 < 0x17) {
          local_68 = CONCAT17((char)sVar6,(undefined7)local_68);
          ppppuVar7 = &local_78;
        }
        else {
          uVar5 = (sVar6 & 0x7ffffffffffffff8) + 8;
          uVar1 = 0x19;
          if (uVar5 != 0x18) {
            uVar1 = uVar5;
          }
          ppppuVar7 = (undefined8 ****)operator_new(uVar1);
          local_68 = uVar1 | 0x8000000000000000;
          local_78 = ppppuVar7;
          sStack_70 = sVar6;
        }
        if ((undefined8 ****)((long)ppppuVar7 + sVar6) < ppppuVar7) goto LAB_00891f3c;
        if ((ppppuVar7 < (undefined8 ****)0x1ff293) &&
           ("x-google-max-bitrate" < (undefined8 ****)((long)ppppuVar7 + sVar6))) goto LAB_00891f50;
        memcpy(ppppuVar7,PTR_s_x_google_max_bitrate_00d52280,sVar6);
        *(char *)((long)ppppuVar7 + sVar6) = '\0';
        uVar4 = FUN_00891698(param_1,&local_78,&local_60);
        if ((long)local_68 < 0) {
          operator_delete(local_78);
        }
      }
      if (((uVar4 & 1) != 0) && (local_60 < local_5c)) {
        uVar5 = FUN_004249b0();
        if ((uVar5 & 1) == 0) {
          FUN_00891f68(&local_58,param_1);
          pcVar9 = "Codec with max < min bitrate: ";
          uVar8 = 0x843;
          goto LAB_00891d08;
        }
        goto LAB_00891d24;
      }
    }
    uVar8 = 1;
  }
  else {
    uVar5 = FUN_004249b0();
    if ((uVar5 & 1) == 0) {
      FUN_00891f68(&local_58,param_1);
      pcVar9 = "Codec with invalid payload type: ";
      uVar8 = 0x7e3;
LAB_00891d08:
      FUN_00623bb0(&DAT_001f4e90,"../../media/base/codec.cc",uVar8,pcVar9,&local_58);
    }
LAB_00891d24:
    uVar8 = 0;
  }
  return uVar8;
}


// ===== 00891f68  FUN_00891f68 =====

void FUN_00891f68(char *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  char *__src;
  undefined8 uVar4;
  char **ppcVar5;
  size_t __n;
  char *__dest;
  long lVar6;
  long lVar7;
  char *local_170;
  undefined1 *puStack_168;
  undefined1 *local_160;
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
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
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
  local_160 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
  local_170 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00622830(&local_170,&local_150,0x100);
  if (*(int *)(param_2 + 8) == 1) {
    uVar4 = FUN_006228b0(&local_170,"VideoCodec[",0xb);
    uVar4 = FUN_00622910(uVar4,*(undefined4 *)(param_2 + 0xc));
    uVar4 = FUN_006228b0(uVar4,&DAT_001ca603,1);
    lVar7 = (long)*(char *)(param_2 + 0x27);
    if (lVar7 < 0) {
      lVar6 = *(long *)(param_2 + 0x10);
      lVar7 = *(long *)(param_2 + 0x18);
    }
    else {
      lVar6 = param_2 + 0x10;
    }
    FUN_006228b0(uVar4,lVar6,lVar7);
    ppcVar5 = &local_170;
    if (*(char *)(param_2 + 0x50) == '\x01') {
      uVar4 = FUN_006228b0(&local_170,&DAT_001ca603,1);
      if ((*(byte *)(param_2 + 0x50) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                  );
      }
      lVar7 = (long)*(char *)(param_2 + 0x4f);
      if (lVar7 < 0) {
        lVar6 = *(long *)(param_2 + 0x38);
        lVar7 = *(long *)(param_2 + 0x40);
      }
      else {
        lVar6 = param_2 + 0x38;
      }
      FUN_006228b0(uVar4,lVar6,lVar7);
      ppcVar5 = &local_170;
    }
  }
  else {
    if (*(int *)(param_2 + 8) != 0) goto LAB_00892108;
    uVar4 = FUN_006228b0(&local_170,"AudioCodec[",0xb);
    uVar4 = FUN_00622910(uVar4,*(undefined4 *)(param_2 + 0xc));
    uVar4 = FUN_006228b0(uVar4,&DAT_001ca603,1);
    lVar7 = (long)*(char *)(param_2 + 0x27);
    if (lVar7 < 0) {
      lVar6 = *(long *)(param_2 + 0x10);
      lVar7 = *(long *)(param_2 + 0x18);
    }
    else {
      lVar6 = param_2 + 0x10;
    }
    uVar4 = FUN_006228b0(uVar4,lVar6,lVar7);
    uVar4 = FUN_006228b0(uVar4,&DAT_001ca603,1);
    uVar4 = FUN_00622910(uVar4,*(undefined4 *)(param_2 + 0x28));
    uVar4 = FUN_006228b0(uVar4,&DAT_001ca603,1);
    uVar4 = FUN_00622910(uVar4,*(undefined4 *)(param_2 + 0x2c));
    uVar4 = FUN_006228b0(uVar4,&DAT_001ca603,1);
    ppcVar5 = (char **)FUN_00622a20(uVar4,*(undefined8 *)(param_2 + 0x30));
  }
  FUN_006228b0(ppcVar5,&DAT_0019fa9e,1);
LAB_00892108:
  __src = local_170;
  if (local_170 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string:1063: libc++ Hardening assertion __s != nullptr failed: basic_string(const char*) detected nullptr\n"
              );
  }
  __n = strlen(local_170);
  if (0x7ffffffffffffff6 < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
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
  if (__dest + __n < __dest) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((__dest <= __src) && (__src < __dest + __n)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memmove(__dest,__src,__n);
  __dest[__n] = '\0';
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0089221c  FUN_0089221c =====

void FUN_0089221c(undefined8 *param_1,undefined4 param_2,undefined8 *param_3,undefined4 param_4,
                 undefined8 param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  cVar1 = *(char *)((long)param_3 + 0x17);
  *param_1 = &PTR_FUN_00d3b190;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((long)param_1 + 0xc) = param_2;
  if (cVar1 < '\0') {
    FUN_005478d8(param_1 + 2,*param_3,param_3[1]);
  }
  else {
    uVar3 = *param_3;
    uVar2 = param_3[2];
    param_1[3] = param_3[1];
    param_1[2] = uVar3;
    param_1[4] = uVar2;
  }
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 5) = param_4;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  param_1[6] = param_5;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x15] = param_1 + 0x16;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  return;
}


// ===== 008922b8  FUN_008922b8 =====

void FUN_008922b8(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  size_t sVar4;
  undefined8 ***pppuVar5;
  long lVar6;
  undefined8 **local_98;
  size_t sStack_90;
  undefined8 local_88;
  undefined8 **local_80;
  size_t sStack_78;
  undefined8 local_70;
  undefined1 uStack_61;
  undefined8 **local_60;
  undefined8 *puStack_58;
  
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[7] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[6] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[9] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[8] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xb] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[10] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xd] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xc] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xf] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xe] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x11] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x10] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x13] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x12] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x15] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x14] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x17] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x16] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x19] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x18] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x1a] = &DAT_aaaaaaaaaaaaaaaa;
  puVar3 = PTR_DAT_00d52130;
  sVar4 = strlen(PTR_DAT_00d52130);
  if (sVar4 < 0x7ffffffffffffff7) {
    if (sVar4 < 0x17) {
      local_70 = CONCAT17((char)sVar4,(undefined7)local_70);
      pppuVar5 = &local_80;
    }
    else {
      uVar1 = (sVar4 & 0x7ffffffffffffff8) + 8;
      uVar2 = 0x19;
      if (uVar1 != 0x18) {
        uVar2 = uVar1;
      }
      pppuVar5 = (undefined8 ***)operator_new(uVar2);
      local_70 = uVar2 | 0x8000000000000000;
      local_80 = pppuVar5;
      sStack_78 = sVar4;
    }
    if ((undefined8 ***)((long)pppuVar5 + sVar4) < pppuVar5) {
LAB_00892504:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                );
    }
    if ((puVar3 < pppuVar5) || ((undefined8 ***)((long)pppuVar5 + sVar4) <= puVar3)) {
      memcpy(pppuVar5,PTR_DAT_00d52130,sVar4);
      *(undefined1 *)((long)pppuVar5 + sVar4) = 0;
      FUN_00892530(param_1,param_2,&local_80);
      if ((long)local_70 < 0) {
        operator_delete(local_80);
      }
      sVar4 = strlen("apt");
      if (0x7ffffffffffffff6 < sVar4) goto LAB_0089252c;
      if (sVar4 < 0x17) {
        local_88 = CONCAT17((char)sVar4,(undefined7)local_88);
        pppuVar5 = &local_98;
      }
      else {
        uVar1 = (sVar4 & 0x7ffffffffffffff8) + 8;
        uVar2 = 0x19;
        if (uVar1 != 0x18) {
          uVar2 = uVar1;
        }
        pppuVar5 = (undefined8 ***)operator_new(uVar2);
        local_88 = uVar2 | 0x8000000000000000;
        local_98 = pppuVar5;
        sStack_90 = sVar4;
      }
      if ((undefined8 ***)((long)pppuVar5 + sVar4) < pppuVar5) goto LAB_00892504;
      if ((&DAT_001ff1ed < pppuVar5) || ((undefined8 ***)((long)pppuVar5 + sVar4) < &UNK_001ff1ee))
      {
        memcpy(pppuVar5,PTR_DAT_00d521b8,sVar4);
        *(undefined1 *)((long)pppuVar5 + sVar4) = 0;
        local_80 = (undefined8 **)0x0;
        sStack_78 = 0;
        local_70 = 0;
        FUN_005f55c4(&local_80,0x16,param_3);
        local_60 = &local_98;
        puStack_58 = param_1 + 0x15;
        lVar6 = FUN_0066d1b4(&puStack_58,&local_98,&DAT_001f94c3,&local_60,&uStack_61);
        if (*(char *)(lVar6 + 0x4f) < '\0') {
          operator_delete(*(void **)(lVar6 + 0x38));
          *(undefined8 *)(lVar6 + 0x38) = 0;
          *(undefined8 *)(lVar6 + 0x40) = 0;
          *(undefined8 *)(lVar6 + 0x48) = 0;
        }
        *(ulong *)(lVar6 + 0x48) = local_70;
        *(size_t *)(lVar6 + 0x40) = sStack_78;
        *(undefined8 ***)(lVar6 + 0x38) = local_80;
        if ((long)local_88 < 0) {
          operator_delete(local_98);
        }
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
LAB_0089252c:
                    /* WARNING: Subroutine does not return */
  FUN_005d45ec();
}


// ===== 00892530  FUN_00892530 =====

void FUN_00892530(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  size_t sVar5;
  ulong uVar6;
  undefined8 ****__dest;
  long lVar7;
  undefined8 uVar8;
  byte bVar9;
  undefined8 uVar10;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined7 local_70;
  char cStack_69;
  undefined8 ***local_68;
  size_t sStack_60;
  undefined8 local_58;
  undefined1 uStack_49;
  undefined8 ***local_48;
  undefined8 *local_28;
  
  param_1[7] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[6] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[9] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[8] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xb] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[10] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xd] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xc] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xf] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xe] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x11] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x10] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x13] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x12] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x15] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x14] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x17] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x16] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x19] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x18] = &DAT_aaaaaaaaaaaaaaaa;
  puVar4 = param_1 + 2;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  *puVar4 = &DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  bVar9 = *(byte *)((long)param_3 + 0x17);
  *param_1 = &PTR_FUN_00d3b190;
  param_1[0x1a] = &DAT_aaaaaaaaaaaaaaaa;
  uVar2 = DAT_001ff1ac;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined4 *)((long)param_1 + 0xc) = param_2;
  if ((char)bVar9 < '\0') {
    FUN_005478d8(puVar4,*param_3,param_3[1]);
    bVar9 = *(byte *)((long)param_3 + 0x17);
  }
  else {
    uVar10 = *param_3;
    uVar8 = param_3[2];
    param_1[3] = param_3[1];
    *puVar4 = uVar10;
    param_1[4] = uVar8;
  }
  param_1[0x16] = 0;
  param_1[0x15] = param_1 + 0x16;
  *(undefined4 *)(param_1 + 5) = uVar2;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  puVar3 = PTR_DAT_00d51c78;
  sVar5 = strlen(PTR_DAT_00d51c78);
  uVar6 = param_3[1];
  puVar4 = (undefined8 *)*param_3;
  if (-1 < (char)bVar9) {
    uVar6 = (ulong)bVar9;
    puVar4 = param_3;
  }
  uVar6 = FUN_0061ff84(puVar3,sVar5,puVar4,uVar6);
  if ((uVar6 & 1) == 0) {
    return;
  }
  sVar5 = strlen("packetization-mode");
  if (0x7ffffffffffffff6 < sVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (sVar5 < 0x17) {
    local_58 = CONCAT17((char)sVar5,(undefined7)local_58);
    __dest = &local_68;
  }
  else {
    uVar6 = (sVar5 & 0x7ffffffffffffff8) + 8;
    uVar1 = 0x19;
    if (uVar6 != 0x18) {
      uVar1 = uVar6;
    }
    __dest = (undefined8 ****)operator_new(uVar1);
    local_58 = uVar1 | 0x8000000000000000;
    local_68 = __dest;
    sStack_60 = sVar5;
  }
  if (__dest <= (undefined8 ****)((long)__dest + sVar5)) {
    if (("packetization-mode" < __dest) ||
       ((undefined8 ****)((long)__dest + sVar5) < (undefined8 ****)0x1ff32f)) {
      memcpy(__dest,PTR_s_packetization_mode_00d51c88,sVar5);
      *(char *)((long)__dest + sVar5) = '\0';
      cStack_69 = '\x01';
      if ((&DAT_001a8867 < &local_80) || ((undefined *)((ulong)&local_80 | 1) < &UNK_001a8868)) {
        local_48 = &local_68;
        local_80._0_2_ = 0x31;
        local_28 = param_1 + 0x15;
        lVar7 = FUN_0066d1b4(&local_28,&local_68,&DAT_001f94c3,&local_48,&uStack_49);
        puVar4 = (undefined8 *)(lVar7 + 0x38);
        if (puVar4 != &local_80) {
          if (*(char *)(lVar7 + 0x4f) < '\0') {
            FUN_00547f08(puVar4,&local_80,1);
            if (cStack_69 < '\0') {
              operator_delete((void *)CONCAT62(local_80._2_6_,(undefined2)local_80));
            }
          }
          else {
            *(ulong *)(lVar7 + 0x48) = CONCAT17(cStack_69,local_70);
            *(undefined8 *)(lVar7 + 0x40) = uStack_78;
            *puVar4 = CONCAT62(local_80._2_6_,(undefined2)local_80);
          }
        }
        if (-1 < (long)local_58) {
          return;
        }
        operator_delete(local_68);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 008927d0  FUN_008927d0 =====

long FUN_008927d0(long *param_1,int param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  while( true ) {
    if (lVar1 == param_1[1]) {
      return 0;
    }
    if (*(int *)(lVar1 + 0xc) == param_2) break;
    lVar1 = lVar1 + 0xd8;
  }
  return lVar1;
}


// ===== 00892808  FUN_00892808 =====

uint FUN_00892808(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  uint uVar4;
  size_t sVar5;
  size_t __n;
  undefined8 ****__dest;
  undefined8 ***local_88;
  size_t sStack_80;
  undefined8 local_78;
  void *local_70 [2];
  char cStack_59;
  void *local_58;
  char cStack_41;
  
  sVar5 = strlen("goog-lntf");
  puVar3 = PTR_DAT_00d52230;
  __n = strlen(PTR_DAT_00d52230);
  if (0x7ffffffffffffff6 < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (__n < 0x17) {
    local_78 = CONCAT17((char)__n,(undefined7)local_78);
    __dest = &local_88;
  }
  else {
    uVar1 = (__n & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (undefined8 ****)operator_new(uVar2);
    local_78 = uVar2 | 0x8000000000000000;
    local_88 = __dest;
    sStack_80 = __n;
  }
  if ((undefined8 ****)((long)__dest + __n) < __dest) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((__dest <= puVar3) && (puVar3 < (undefined8 ****)((long)__dest + __n))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memcpy(__dest,PTR_DAT_00d52230,__n);
  *(undefined1 *)((long)__dest + __n) = 0;
  FUN_008929a0(local_70,PTR_s_goog_lntf_00d52240,sVar5,&local_88);
  uVar4 = FUN_00890190(param_1 + 0xc0,local_70);
  if (cStack_41 < '\0') {
    operator_delete(local_58);
  }
  if (cStack_59 < '\0') {
    operator_delete(local_70[0]);
  }
  if ((long)local_78 < 0) {
    operator_delete(local_88);
  }
  return uVar4 & 1;
}


// ===== 008929a0  FUN_008929a0 =====

void FUN_008929a0(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *__dest;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (0x7ffffffffffffff6 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_3 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)param_3;
    __dest = param_1;
  }
  else {
    uVar1 = (param_3 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (undefined8 *)operator_new(uVar2);
    *param_1 = __dest;
    param_1[1] = param_3;
    param_1[2] = uVar2 | 0x8000000000000000;
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
    if (-1 < *(char *)((long)param_4 + 0x17)) {
      uVar4 = param_4[1];
      uVar3 = *param_4;
      param_1[5] = param_4[2];
      param_1[4] = uVar4;
      param_1[3] = uVar3;
      return;
    }
    FUN_005478d8(param_1 + 3,*param_4,param_4[1]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 00892ac4  FUN_00892ac4 =====

uint FUN_00892ac4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  uint uVar4;
  size_t sVar5;
  size_t __n;
  undefined8 ****__dest;
  undefined8 ***local_88;
  size_t sStack_80;
  undefined8 local_78;
  void *local_70 [2];
  char cStack_59;
  void *local_58;
  char cStack_41;
  
  sVar5 = strlen("nack");
  puVar3 = PTR_DAT_00d52230;
  __n = strlen(PTR_DAT_00d52230);
  if (0x7ffffffffffffff6 < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (__n < 0x17) {
    local_78 = CONCAT17((char)__n,(undefined7)local_78);
    __dest = &local_88;
  }
  else {
    uVar1 = (__n & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (undefined8 ****)operator_new(uVar2);
    local_78 = uVar2 | 0x8000000000000000;
    local_88 = __dest;
    sStack_80 = __n;
  }
  if ((undefined8 ****)((long)__dest + __n) < __dest) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((__dest <= puVar3) && (puVar3 < (undefined8 ****)((long)__dest + __n))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memcpy(__dest,PTR_DAT_00d52230,__n);
  *(undefined1 *)((long)__dest + __n) = 0;
  FUN_008929a0(local_70,PTR_DAT_00d52248,sVar5,&local_88);
  uVar4 = FUN_00890190(param_1 + 0xc0,local_70);
  if (cStack_41 < '\0') {
    operator_delete(local_58);
  }
  if (cStack_59 < '\0') {
    operator_delete(local_70[0]);
  }
  if ((long)local_78 < 0) {
    operator_delete(local_88);
  }
  return uVar4 & 1;
}


// ===== 00892c5c  FUN_00892c5c =====

uint FUN_00892c5c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  uint uVar4;
  size_t sVar5;
  size_t __n;
  undefined8 ****__dest;
  undefined8 ***local_88;
  size_t sStack_80;
  undefined8 local_78;
  void *local_70 [2];
  char cStack_59;
  void *local_58;
  char cStack_41;
  
  sVar5 = strlen("rrtr");
  puVar3 = PTR_DAT_00d52230;
  __n = strlen(PTR_DAT_00d52230);
  if (0x7ffffffffffffff6 < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (__n < 0x17) {
    local_78 = CONCAT17((char)__n,(undefined7)local_78);
    __dest = &local_88;
  }
  else {
    uVar1 = (__n & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (undefined8 ****)operator_new(uVar2);
    local_78 = uVar2 | 0x8000000000000000;
    local_88 = __dest;
    sStack_80 = __n;
  }
  if ((undefined8 ****)((long)__dest + __n) < __dest) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((__dest <= puVar3) && (puVar3 < (undefined8 ****)((long)__dest + __n))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memcpy(__dest,PTR_DAT_00d52230,__n);
  *(undefined1 *)((long)__dest + __n) = 0;
  FUN_008929a0(local_70,PTR_DAT_00d52278,sVar5,&local_88);
  uVar4 = FUN_00890190(param_1 + 0xc0,local_70);
  if (cStack_41 < '\0') {
    operator_delete(local_58);
  }
  if (cStack_59 < '\0') {
    operator_delete(local_70[0]);
  }
  if ((long)local_78 < 0) {
    operator_delete(local_88);
  }
  return uVar4 & 1;
}


// ===== 00892df4  FUN_00892df4 =====

long FUN_00892df4(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_100 [96];
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007b68d8(&local_a0,param_2 + 0x10,param_2 + 0xa8);
  lVar1 = param_1[1];
  for (lVar4 = *param_1; lVar4 != lVar1; lVar4 = lVar4 + 0xd8) {
    FUN_007b68d8(auStack_100,lVar4 + 0x10,lVar4 + 0xa8);
    uVar3 = FUN_007b6ff8(&local_a0,auStack_100);
    FUN_007b6d78(auStack_100);
    if ((uVar3 & 1) != 0) goto LAB_00892e88;
  }
  lVar4 = 0;
LAB_00892e88:
  FUN_007b6d78(&local_a0);
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4;
}


// ===== 00892ec0  FUN_00892ec0 =====

void FUN_00892ec0(undefined8 *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long local_110 [12];
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
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
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
  FUN_007b68d8(&local_b0,param_3 + 0x10,param_3 + 0xa8);
  lVar6 = *param_2;
  lVar2 = param_2[1];
  do {
    if (lVar6 == lVar2) {
      FUN_007b6d78(&local_b0);
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    FUN_007b68d8(local_110,lVar6 + 0x10,lVar6 + 0xa8);
    uVar5 = FUN_007b6ff8(&local_b0,local_110);
    FUN_007b6d78(local_110);
    if ((uVar5 & 1) != 0) {
      plVar1 = (long *)param_1[1];
      local_110[0] = lVar6;
      if (plVar1 < (long *)param_1[2]) {
        if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        plVar4 = plVar1 + 1;
        *plVar1 = lVar6;
      }
      else {
        plVar4 = (long *)FUN_008940b4(param_1,local_110);
      }
      param_1[1] = plVar4;
    }
    lVar6 = lVar6 + 0xd8;
  } while( true );
}


// ===== 00892fd4  FUN_00892fd4 =====

void FUN_00892fd4(long *param_1)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  undefined *__s;
  undefined *__s_00;
  int iVar5;
  size_t sVar6;
  undefined8 *__s1;
  undefined **__dest;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  void *pvVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined *local_140;
  size_t sStack_138;
  undefined8 local_130;
  undefined1 local_128;
  undefined7 uStack_127;
  undefined8 uStack_120;
  undefined7 local_118;
  char cStack_111;
  byte local_110;
  ulong local_108;
  void *local_100;
  void *local_f8;
  void *local_f0;
  undefined1 uStack_e1;
  undefined1 *local_e0;
  undefined1 **ppuStack_d8;
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
  long local_70;
  
  __s_00 = PTR_s_profile_level_id_00d51c80;
  __s = PTR_DAT_00d51c78;
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  puVar10 = (undefined8 *)*param_1;
  local_100 = (void *)0x0;
  local_f8 = (void *)0x0;
  local_f0 = (void *)0x0;
  if (puVar10 != (undefined8 *)param_1[1]) {
    lVar12 = -(long)puVar10;
    do {
      sVar6 = strlen(__s);
      if ((long)*(char *)((long)puVar10 + 0x17) < 0) {
        if (sVar6 == puVar10[1]) {
          if (sVar6 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_005f5590();
          }
          __s1 = (undefined8 *)*puVar10;
          goto LAB_008930ac;
        }
      }
      else {
        __s1 = puVar10;
        if (sVar6 == (long)*(char *)((long)puVar10 + 0x17)) {
LAB_008930ac:
          iVar5 = memcmp(__s1,__s,sVar6);
          if (iVar5 == 0) {
            auVar13 = FUN_007b6644(puVar10 + 3);
            if (((auVar13 & (undefined1  [16])0x1) != (undefined1  [16])0x0) &&
               ((auVar13 & (undefined1  [16])0xffffffff) != (undefined1  [16])0x0)) {
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
              FUN_007b69e0(&local_d0,puVar10);
              local_108 = auVar13._0_8_ & 0xffffffff00000000;
              FUN_007b675c(&local_128,&local_108);
              if ((local_110 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/optional:1074: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                          );
              }
              sVar6 = strlen(__s_00);
              if (0x7ffffffffffffff6 < sVar6) {
                    /* WARNING: Subroutine does not return */
                FUN_005d45ec();
              }
              if (sVar6 < 0x17) {
                local_130 = CONCAT17((char)sVar6,(undefined7)local_130);
                __dest = &local_140;
              }
              else {
                uVar9 = (sVar6 & 0x7ffffffffffffff8) + 8;
                uVar1 = 0x19;
                if (uVar9 != 0x18) {
                  uVar1 = uVar9;
                }
                __dest = (undefined **)operator_new(uVar1);
                local_130 = uVar1 | 0x8000000000000000;
                local_140 = (undefined *)__dest;
                sStack_138 = sVar6;
              }
              if ((undefined *)((long)__dest + sVar6) < __dest) {
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                          );
              }
              if ((__dest <= __s_00) && (__s_00 < (undefined *)((long)__dest + sVar6))) {
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                          );
              }
              memcpy(__dest,__s_00,sVar6);
              *(undefined1 *)((long)__dest + sVar6) = 0;
              local_e0 = (undefined1 *)&local_140;
              ppuStack_d8 = &puStack_b8;
              lVar7 = FUN_0088c894(&ppuStack_d8,&local_140,&DAT_001f94c3,&local_e0,&uStack_e1);
              if (*(char *)(lVar7 + 0x4f) < '\0') {
                operator_delete(*(void **)(lVar7 + 0x38));
                *(undefined8 *)(lVar7 + 0x38) = 0;
                *(undefined8 *)(lVar7 + 0x40) = 0;
                *(undefined8 *)(lVar7 + 0x48) = 0;
              }
              *(ulong *)(lVar7 + 0x48) = CONCAT17(cStack_111,local_118);
              *(undefined8 *)(lVar7 + 0x40) = uStack_120;
              *(ulong *)(lVar7 + 0x38) = CONCAT71(uStack_127,local_128);
              cStack_111 = '\0';
              local_128 = 0;
              if ((((long)local_130 < 0) && (operator_delete(local_140), local_110 == 1)) &&
                 (cStack_111 < '\0')) {
                operator_delete((void *)CONCAT71(uStack_127,local_128));
              }
              pvVar2 = local_f8;
              if (local_f8 < local_f0) {
                if (local_f8 == (void *)0x0) goto LAB_0089339c;
                FUN_007b69e0(local_f8,&local_d0);
                local_f8 = (void *)((long)pvVar2 + 0x60);
              }
              else {
                local_f8 = (void *)FUN_008941c0(&local_100,&local_d0);
              }
              FUN_007b6d78(&local_d0);
            }
          }
        }
      }
      pvVar2 = local_f8;
      puVar10 = puVar10 + 0xc;
      lVar12 = lVar12 + -0x60;
    } while (puVar10 != (undefined8 *)param_1[1]);
    if (local_100 != local_f8) {
      lVar7 = *param_1;
      pvVar11 = local_100;
      do {
        lVar3 = param_1[1] - *param_1;
        lVar8 = 0;
        if (lVar3 != 0) {
          lVar8 = *param_1;
        }
        uVar9 = FUN_007b7244(pvVar11,lVar8,(lVar3 >> 5) * -0x5555555555555555);
        if ((uVar9 & 1) == 0) {
          uVar9 = param_1[1];
          if (uVar9 < (ulong)param_1[2]) {
            if (uVar9 == 0) {
LAB_0089339c:
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                        );
            }
            FUN_007b69e0(uVar9,pvVar11);
            lVar8 = uVar9 + 0x60;
          }
          else {
            lVar8 = FUN_008941c0(param_1,pvVar11);
          }
          param_1[1] = lVar8;
        }
        pvVar11 = (void *)((long)pvVar11 + 0x60);
      } while (pvVar11 != pvVar2);
      if (((ulong)(-lVar7 - lVar12) < (ulong)(param_1[1] - *param_1)) &&
         (uVar9 = FUN_00417e08(), (uVar9 & 1) == 0)) {
        FUN_00623bb0(&DAT_001f4e98,"../../media/base/codec.cc",0xc49,
                     "Explicitly added H264 constrained baseline to list of supported formats.");
      }
    }
  }
  pvVar11 = local_100;
  pvVar2 = local_f8;
  if (local_100 != (void *)0x0) {
    while (pvVar11 != pvVar2) {
      pvVar2 = (void *)((long)pvVar2 + -0x60);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_007b6d78(pvVar2);
    }
    local_f8 = pvVar11;
    operator_delete(local_100);
  }
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 008933f8  FUN_008933f8 =====

void FUN_008933f8(undefined8 param_1,undefined8 param_2)

{
  FUN_00890600(param_1,param_2);
  return;
}


// ===== 00893408  FUN_00893408 =====

void FUN_00893408(undefined8 param_1,undefined8 param_2)

{
  FUN_008906f4(param_1,param_2);
  return;
}


// ===== 00893418  FUN_00893418 =====

long FUN_00893418(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
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
  uVar3 = (lVar6 >> 4) * -0x5555555555555555 + 1;
  if (0x555555555555555 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00893790();
  }
  local_50 = (void *)0x0;
  lVar4 = param_1[2] - *param_1 >> 4;
  uVar5 = lVar4 * 0x5555555555555556;
  if (uVar5 < uVar3 || uVar5 - uVar3 == 0) {
    uVar5 = uVar3;
  }
  if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar4 * -0x5555555555555555)) {
    uVar5 = 0x555555555555555;
  }
  if (uVar5 != 0) {
    if (0x555555555555555 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    local_50 = operator_new(uVar5 * 0x30);
  }
  puVar1 = (undefined8 *)((long)local_50 + lVar6);
  local_38 = (void *)((long)local_50 + uVar5 * 0x30);
  local_48 = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_005478d8(puVar1,*param_2,param_2[1]);
    cVar2 = *(char *)((long)param_2 + 0x2f);
  }
  else {
    uVar8 = param_2[1];
    uVar7 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[1] = uVar8;
    *puVar1 = uVar7;
    cVar2 = *(char *)((long)param_2 + 0x2f);
  }
  if (cVar2 < '\0') {
    FUN_005478d8(puVar1 + 3,param_2[3],param_2[4]);
  }
  else {
    uVar8 = param_2[4];
    uVar7 = param_2[3];
    puVar1[5] = param_2[5];
    puVar1[4] = uVar8;
    puVar1[3] = uVar7;
  }
  local_40 = puVar1 + 6;
  FUN_0089357c(param_1,&local_50);
  lVar6 = param_1[1];
  FUN_008936bc(&local_50);
  return lVar6;
}


// ===== 0089357c  FUN_0089357c =====

void FUN_0089357c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  puVar9 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)((long)puVar9 + (param_2[1] - (long)puVar2));
  puVar4 = puVar9;
  puVar6 = puVar1;
  if (puVar2 != puVar9) {
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
      uVar7 = puVar4[4];
      uVar5 = puVar4[3];
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
      puVar6[5] = puVar4[5];
      puVar6[4] = uVar7;
      puVar6[3] = uVar5;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[3] = 0;
      puVar4 = puVar4 + 6;
      puVar6 = puVar6 + 6;
    } while (puVar4 != puVar2);
    do {
      if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if (*(char *)((long)puVar9 + 0x2f) < '\0') {
        operator_delete((void *)puVar9[3]);
        cVar3 = *(char *)((long)puVar9 + 0x17);
      }
      else {
        cVar3 = *(char *)((long)puVar9 + 0x17);
      }
      if (cVar3 < '\0') {
        operator_delete((void *)*puVar9);
      }
      puVar9 = puVar9 + 6;
    } while (puVar9 != puVar2);
  }
  param_2[1] = puVar1;
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


// ===== 008936bc  FUN_008936bc =====

/* WARNING: Removing unreachable block (ram,0x0089370c) */
/* WARNING: Removing unreachable block (ram,0x00893728) */

void FUN_008936bc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)param_1[2];
  if (puVar1 != puVar3) {
    puVar2 = puVar3 + -3;
    do {
      puVar3 = puVar2;
      if (puVar3 == (undefined8 *)0x18) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if (*(char *)((long)puVar3 + 0x17) < '\0') {
        operator_delete((void *)*puVar3);
      }
      puVar2 = puVar3 + -6;
    } while (puVar3 + -3 != puVar1);
    puVar3 = puVar3 + -3;
  }
  param_1[2] = puVar3;
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}


// ===== 00893790  FUN_00893790 =====

void FUN_00893790(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 008937a8  FUN_008937a8 =====

/* WARNING: Removing unreachable block (ram,0x008938dc) */
/* WARNING: Removing unreachable block (ram,0x008938f8) */

undefined8 * FUN_008937a8(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_3 <= param_2 && param_2 != param_3) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:1170: libc++ Hardening assertion __first <= __last failed: vector::erase(first, last) called with invalid range\n"
              );
  }
  if (param_2 == param_3) {
    return param_2;
  }
  puVar2 = (undefined8 *)param_1[1];
  if (param_3 == puVar2) {
    puVar4 = param_2;
    if (param_2 == puVar2) goto LAB_0089390c;
  }
  else {
    lVar3 = *param_1;
    puVar5 = (undefined1 *)(lVar3 + (long)param_2);
    puVar6 = (undefined1 *)(lVar3 + (long)param_3);
    do {
      puVar4 = (undefined8 *)(puVar5 + -lVar3);
      if (*(char *)((long)puVar4 + 0x17) < '\0') {
        operator_delete((void *)*puVar4);
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
      }
      puVar1 = (undefined8 *)(puVar6 + -lVar3);
      uVar8 = puVar1[1];
      uVar7 = *puVar1;
      puVar4[2] = puVar1[2];
      puVar4[1] = uVar8;
      *puVar4 = uVar7;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
      *(undefined1 *)puVar1 = 0;
      if (*(char *)((long)puVar4 + 0x2f) < '\0') {
        operator_delete((void *)puVar4[3]);
        puVar4[3] = 0;
        puVar4[4] = 0;
        puVar4[5] = 0;
      }
      uVar8 = puVar1[4];
      uVar7 = puVar1[3];
      puVar5 = puVar5 + 0x30;
      puVar6 = puVar6 + 0x30;
      puVar4[5] = puVar1[5];
      puVar4[4] = uVar8;
      puVar4[3] = uVar7;
      *(undefined1 *)((long)puVar1 + 0x2f) = 0;
      *(undefined1 *)(puVar1 + 3) = 0;
    } while (puVar1 + 6 != puVar2);
    puVar2 = (undefined8 *)param_1[1];
    puVar4 = (undefined8 *)(puVar5 + -lVar3);
    if (puVar4 == puVar2) goto LAB_0089390c;
  }
  puVar2 = puVar2 + -3;
  do {
    puVar1 = puVar2 + -3;
    if (puVar2 == (undefined8 *)0x18) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    if (*(char *)((long)puVar2 + 0x17) < '\0') {
      operator_delete((void *)*puVar2);
    }
    puVar2 = puVar2 + -6;
  } while (puVar1 != puVar4);
LAB_0089390c:
  param_1[1] = (long)puVar4;
  return param_2;
}


// ===== 0089395c  FUN_0089395c =====

undefined8 * FUN_0089395c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = param_2;
  if (param_1 == param_2) {
LAB_00893a10:
    if ((param_1 != param_2) && (puVar3 = param_1 + 6, puVar2 = param_1, puVar3 != param_2)) {
      do {
        uVar1 = param_3[1];
        puVar2 = (undefined8 *)*param_3;
        if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
          uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
          puVar2 = param_3;
        }
        if (*(char *)((long)puVar3 + 0x17) < '\0') {
          uVar1 = FUN_0061ff84(puVar2,uVar1,*puVar3,puVar3[1]);
          if ((uVar1 & 1) != 0) goto LAB_00893a90;
LAB_00893acc:
          if (*(char *)((long)param_1 + 0x17) < '\0') {
            operator_delete((void *)*param_1);
            *param_1 = 0;
            param_1[1] = 0;
            param_1[2] = 0;
          }
          uVar5 = puVar3[1];
          uVar4 = *puVar3;
          param_1[2] = puVar3[2];
          param_1[1] = uVar5;
          *param_1 = uVar4;
          *(undefined1 *)((long)puVar3 + 0x17) = 0;
          *(undefined1 *)puVar3 = 0;
          if (*(char *)((long)param_1 + 0x2f) < '\0') {
            operator_delete((void *)param_1[3]);
            param_1[3] = 0;
            param_1[4] = 0;
            param_1[5] = 0;
          }
          uVar5 = puVar3[4];
          uVar4 = puVar3[3];
          param_1[5] = puVar3[5];
          param_1[4] = uVar5;
          param_1[3] = uVar4;
          param_1 = param_1 + 6;
          *(undefined1 *)((long)puVar3 + 0x2f) = 0;
          *(undefined1 *)(puVar3 + 3) = 0;
        }
        else {
          uVar1 = FUN_0061ff84(puVar2,uVar1,puVar3);
          if ((uVar1 & 1) == 0) goto LAB_00893acc;
LAB_00893a90:
          uVar1 = param_3[4];
          puVar2 = (undefined8 *)param_3[3];
          if (-1 < (char)*(byte *)((long)param_3 + 0x2f)) {
            uVar1 = (ulong)*(byte *)((long)param_3 + 0x2f);
            puVar2 = param_3 + 3;
          }
          if (*(char *)((long)puVar3 + 0x2f) < '\0') {
            uVar1 = FUN_0061ff84(puVar2,uVar1,puVar3[3],puVar3[4]);
          }
          else {
            uVar1 = FUN_0061ff84(puVar2,uVar1,puVar3 + 3);
          }
          if ((uVar1 & 1) == 0) goto LAB_00893acc;
        }
        puVar3 = puVar3 + 6;
        puVar2 = param_1;
      } while (puVar3 != param_2);
    }
  }
  else {
    do {
      uVar1 = param_3[1];
      puVar3 = (undefined8 *)*param_3;
      if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
        uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
        puVar3 = param_3;
      }
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        uVar1 = FUN_0061ff84(puVar3,uVar1,*param_1,param_1[1]);
      }
      else {
        uVar1 = FUN_0061ff84(puVar3,uVar1,param_1);
      }
      if ((uVar1 & 1) != 0) {
        uVar1 = param_3[4];
        puVar3 = (undefined8 *)param_3[3];
        if (-1 < (char)*(byte *)((long)param_3 + 0x2f)) {
          uVar1 = (ulong)*(byte *)((long)param_3 + 0x2f);
          puVar3 = param_3 + 3;
        }
        if (*(char *)((long)param_1 + 0x2f) < '\0') {
          uVar1 = FUN_0061ff84(puVar3,uVar1,param_1[3],param_1[4]);
        }
        else {
          uVar1 = FUN_0061ff84(puVar3,uVar1,param_1 + 3);
        }
        if ((uVar1 & 1) != 0) goto LAB_00893a10;
      }
      param_1 = param_1 + 6;
    } while (param_1 != param_2);
  }
  return puVar2;
}


// ===== 00893b48  FUN_00893b48 =====

/* WARNING: Removing unreachable block (ram,0x00893bd4) */
/* WARNING: Removing unreachable block (ram,0x00893bf0) */
/* WARNING: Removing unreachable block (ram,0x00893df0) */
/* WARNING: Removing unreachable block (ram,0x00893e0c) */

void FUN_00893b48(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  lVar8 = param_1[2];
  puVar10 = (undefined8 *)*param_1;
  if ((ulong)((lVar8 - (long)puVar10 >> 4) * -0x5555555555555555) < param_4) {
    if (puVar10 != (undefined8 *)0x0) {
      puVar6 = puVar10;
      if (puVar10 != (undefined8 *)param_1[1]) {
        puVar6 = (undefined8 *)param_1[1] + -3;
        do {
          puVar3 = puVar6 + -3;
          if (puVar6 == (undefined8 *)0x18) {
LAB_00893f5c:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          if (*(char *)((long)puVar6 + 0x17) < '\0') {
            operator_delete((void *)*puVar6);
          }
          puVar6 = puVar6 + -6;
        } while (puVar3 != puVar10);
        puVar6 = (undefined8 *)*param_1;
      }
      param_1[1] = puVar10;
      operator_delete(puVar6);
      lVar8 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (0x555555555555555 < param_4) {
LAB_00893f70:
                    /* WARNING: Subroutine does not return */
      FUN_00893790();
    }
    uVar9 = (lVar8 >> 4) * 0x5555555555555556;
    if (uVar9 < param_4 || uVar9 - param_4 == 0) {
      uVar9 = param_4;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)((lVar8 >> 4) * -0x5555555555555555)) {
      uVar9 = 0x555555555555555;
    }
    if (0x555555555555555 < uVar9) goto LAB_00893f70;
    puVar10 = (undefined8 *)operator_new(uVar9 * 0x30);
    *param_1 = puVar10;
    param_1[1] = puVar10;
    param_1[2] = puVar10 + uVar9 * 6;
    if (param_2 == param_3) goto LAB_00893f28;
    lVar8 = 0;
    do {
      puVar6 = (undefined8 *)((long)puVar10 + lVar8);
      if (puVar6 == (undefined8 *)0x0) {
LAB_00893f48:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar3 = (undefined8 *)((long)param_2 + lVar8);
      if (*(char *)((long)puVar3 + 0x17) < '\0') {
        FUN_005478d8(puVar6,*(undefined8 *)((long)param_2 + lVar8),
                     ((undefined8 *)((long)param_2 + lVar8))[1]);
      }
      else {
        uVar11 = *puVar3;
        uVar7 = puVar3[2];
        puVar6[1] = puVar3[1];
        *puVar6 = uVar11;
        puVar6[2] = uVar7;
      }
      if (*(char *)((long)param_2 + lVar8 + 0x2f) < '\0') {
        FUN_005478d8((long)puVar10 + lVar8 + 0x18,*(undefined8 *)((long)param_2 + lVar8 + 0x18),
                     *(undefined8 *)((long)param_2 + lVar8 + 0x20));
      }
      else {
        uVar11 = *(undefined8 *)((long)param_2 + lVar8 + 0x18);
        uVar7 = *(undefined8 *)((long)param_2 + lVar8 + 0x28);
        *(undefined8 *)((long)puVar10 + lVar8 + 0x20) =
             *(undefined8 *)((long)param_2 + lVar8 + 0x20);
        *(undefined8 *)((long)puVar10 + lVar8 + 0x18) = uVar11;
        *(undefined8 *)((long)puVar10 + lVar8 + 0x28) = uVar7;
      }
      lVar8 = lVar8 + 0x30;
    } while ((undefined8 *)((long)param_2 + lVar8) != param_3);
  }
  else {
    puVar6 = (undefined8 *)param_1[1];
    uVar9 = ((long)puVar6 - (long)puVar10 >> 4) * -0x5555555555555555;
    if (param_4 <= uVar9) {
      if (param_2 != param_3) {
        lVar8 = 0;
        do {
          if (param_2 != puVar10) {
            puVar6 = (undefined8 *)((long)puVar10 + lVar8);
            puVar3 = (undefined8 *)((long)param_2 + lVar8);
            bVar4 = *(byte *)((long)puVar3 + 0x17);
            if (*(char *)((long)puVar6 + 0x17) < '\0') {
              uVar9 = ((long *)((long)param_2 + lVar8))[1];
              puVar6 = *(undefined8 **)((long)param_2 + lVar8);
              if (-1 < (char)bVar4) {
                uVar9 = (ulong)bVar4;
                puVar6 = puVar3;
              }
              FUN_00547f08((long)puVar10 + lVar8,puVar6,uVar9);
            }
            else if ((char)bVar4 < '\0') {
              FUN_00547fc0((long)puVar10 + lVar8,*(undefined8 *)((long)param_2 + lVar8),
                           ((undefined8 *)((long)param_2 + lVar8))[1]);
            }
            else {
              uVar11 = puVar3[1];
              uVar7 = *puVar3;
              puVar6[2] = puVar3[2];
              puVar6[1] = uVar11;
              *puVar6 = uVar7;
            }
            bVar4 = *(byte *)((long)param_2 + lVar8 + 0x2f);
            plVar1 = (long *)((long)param_2 + lVar8 + 0x18);
            if (*(char *)((long)puVar10 + lVar8 + 0x2f) < '\0') {
              uVar9 = *(ulong *)((long)param_2 + lVar8 + 0x20);
              plVar5 = (long *)*plVar1;
              if (-1 < (char)bVar4) {
                uVar9 = (ulong)bVar4;
                plVar5 = plVar1;
              }
              FUN_00547f08((long)puVar10 + lVar8 + 0x18,plVar5,uVar9);
            }
            else if ((char)bVar4 < '\0') {
              FUN_00547fc0((long)puVar10 + lVar8 + 0x18,*plVar1,
                           *(undefined8 *)((long)param_2 + lVar8 + 0x20));
            }
            else {
              uVar11 = *(undefined8 *)((long)param_2 + lVar8 + 0x20);
              uVar7 = *plVar1;
              *(undefined8 *)((long)puVar10 + lVar8 + 0x28) =
                   *(undefined8 *)((long)param_2 + lVar8 + 0x28);
              *(undefined8 *)((long)puVar10 + lVar8 + 0x20) = uVar11;
              *(undefined8 *)((long)puVar10 + lVar8 + 0x18) = uVar7;
            }
          }
          lVar8 = lVar8 + 0x30;
        } while ((undefined8 *)((long)param_2 + lVar8) != param_3);
        puVar6 = (undefined8 *)param_1[1];
        puVar10 = (undefined8 *)((long)puVar10 + lVar8);
      }
      if (puVar10 != puVar6) {
        puVar6 = puVar6 + -3;
        do {
          puVar3 = puVar6 + -3;
          if (puVar6 == (undefined8 *)0x18) goto LAB_00893f5c;
          if (*(char *)((long)puVar6 + 0x17) < '\0') {
            operator_delete((void *)*puVar6);
          }
          puVar6 = puVar6 + -6;
        } while (puVar3 != puVar10);
      }
      goto LAB_00893f28;
    }
    puVar6 = (undefined8 *)FUN_00893f74(param_2,uVar9,puVar10);
    puVar10 = (undefined8 *)param_1[1];
    if (param_3 == puVar6) goto LAB_00893f28;
    lVar8 = 0;
    do {
      puVar3 = (undefined8 *)((long)puVar10 + lVar8);
      if (puVar3 == (undefined8 *)0x0) goto LAB_00893f48;
      puVar2 = (undefined8 *)((long)puVar6 + lVar8);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        FUN_005478d8(puVar3,*(undefined8 *)((long)puVar6 + lVar8),
                     ((undefined8 *)((long)puVar6 + lVar8))[1]);
      }
      else {
        uVar11 = puVar2[1];
        uVar7 = *puVar2;
        puVar3[2] = puVar2[2];
        puVar3[1] = uVar11;
        *puVar3 = uVar7;
      }
      if (*(char *)((long)puVar6 + lVar8 + 0x2f) < '\0') {
        FUN_005478d8((long)puVar10 + lVar8 + 0x18,*(undefined8 *)((long)puVar6 + lVar8 + 0x18),
                     *(undefined8 *)((long)puVar6 + lVar8 + 0x20));
      }
      else {
        uVar11 = *(undefined8 *)((long)puVar6 + lVar8 + 0x20);
        uVar7 = *(undefined8 *)((long)puVar6 + lVar8 + 0x18);
        *(undefined8 *)((long)puVar10 + lVar8 + 0x28) = *(undefined8 *)((long)puVar6 + lVar8 + 0x28)
        ;
        *(undefined8 *)((long)puVar10 + lVar8 + 0x20) = uVar11;
        *(undefined8 *)((long)puVar10 + lVar8 + 0x18) = uVar7;
      }
      lVar8 = lVar8 + 0x30;
    } while ((undefined8 *)((long)puVar6 + lVar8) != param_3);
  }
  puVar10 = (undefined8 *)((long)puVar10 + lVar8);
LAB_00893f28:
  param_1[1] = puVar10;
  return;
}


// ===== 00893f74  FUN_00893f74 =====

undefined1  [16] FUN_00893f74(long param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  byte bVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  
  param_2 = param_2 * 0x30;
  if (param_2 != 0) {
    lVar9 = 0;
    do {
      if (param_1 != param_3) {
        puVar2 = (undefined8 *)(param_3 + lVar9);
        puVar3 = (undefined8 *)(param_1 + lVar9);
        bVar7 = *(byte *)((long)puVar3 + 0x17);
        if (*(char *)((long)puVar2 + 0x17) < '\0') {
          uVar6 = ((long *)(param_1 + lVar9))[1];
          puVar2 = *(undefined8 **)(param_1 + lVar9);
          if (-1 < (char)bVar7) {
            uVar6 = (ulong)bVar7;
            puVar2 = puVar3;
          }
          FUN_00547f08(param_3 + lVar9,puVar2,uVar6);
        }
        else if ((char)bVar7 < '\0') {
          FUN_00547fc0(param_3 + lVar9,*(undefined8 *)(param_1 + lVar9),
                       ((undefined8 *)(param_1 + lVar9))[1]);
        }
        else {
          uVar11 = puVar3[1];
          uVar10 = *puVar3;
          puVar2[2] = puVar3[2];
          puVar2[1] = uVar11;
          *puVar2 = uVar10;
        }
        lVar4 = param_3 + lVar9;
        lVar5 = param_1 + lVar9;
        bVar7 = *(byte *)(lVar5 + 0x2f);
        plVar1 = (long *)(lVar5 + 0x18);
        if (*(char *)(lVar4 + 0x2f) < '\0') {
          uVar6 = *(ulong *)(lVar5 + 0x20);
          plVar8 = (long *)*plVar1;
          if (-1 < (char)bVar7) {
            uVar6 = (ulong)bVar7;
            plVar8 = plVar1;
          }
          FUN_00547f08(lVar4 + 0x18,plVar8,uVar6);
        }
        else if ((char)bVar7 < '\0') {
          FUN_00547fc0(lVar4 + 0x18,*plVar1,*(undefined8 *)(param_1 + lVar9 + 0x20));
        }
        else {
          uVar11 = *(undefined8 *)(lVar5 + 0x20);
          uVar10 = *plVar1;
          *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(lVar5 + 0x28);
          *(undefined8 *)(lVar4 + 0x20) = uVar11;
          *(undefined8 *)(lVar4 + 0x18) = uVar10;
        }
      }
      lVar9 = lVar9 + 0x30;
    } while (param_2 - lVar9 != 0);
    param_3 = param_3 + lVar9;
    param_1 = param_1 + param_2;
  }
  auVar12._8_8_ = param_3;
  auVar12._0_8_ = param_1;
  return auVar12;
}


// ===== 008940b4  FUN_008940b4 =====

undefined8 * FUN_008940b4(long *param_1,undefined8 *param_2)

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
    FUN_008941a8();
LAB_008941a4:
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
    if (uVar5 >> 0x3d != 0) goto LAB_008941a4;
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


// ===== 008941a8  FUN_008941a8 =====

void FUN_008941a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 008941c0  FUN_008941c0 =====

long FUN_008941c0(long *param_1,undefined8 param_2)

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
  uVar3 = (lVar6 >> 5) * -0x5555555555555555 + 1;
  if (0x2aaaaaaaaaaaaaa < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00894354();
  }
  lVar4 = param_1[2] - *param_1 >> 5;
  uVar5 = lVar4 * 0x5555555555555556;
  if (uVar5 < uVar3 || uVar5 - uVar3 == 0) {
    uVar5 = uVar3;
  }
  if (0x155555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
    uVar5 = 0x2aaaaaaaaaaaaaa;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (0x2aaaaaaaaaaaaaa < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    pvVar2 = operator_new(uVar5 * 0x60);
    lVar6 = (long)pvVar2 + lVar6;
  }
  if (lVar6 == 0) {
LAB_00894324:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  FUN_007b69e0(lVar6,param_2);
  pvVar7 = (void *)*param_1;
  pvVar1 = (void *)param_1[1];
  lVar4 = (long)pvVar7 + (lVar6 - (long)pvVar1);
  pvVar8 = pvVar7;
  lVar9 = lVar4;
  if (pvVar1 != pvVar7) {
    do {
      if (lVar9 == 0) goto LAB_00894324;
      FUN_007b6ad4(lVar9,pvVar8);
      pvVar8 = (void *)((long)pvVar8 + 0x60);
      lVar9 = lVar9 + 0x60;
    } while (pvVar8 != pvVar1);
    do {
      if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_007b6d78(pvVar7);
      pvVar7 = (void *)((long)pvVar7 + 0x60);
    } while (pvVar7 != pvVar1);
    pvVar7 = (void *)*param_1;
  }
  *param_1 = lVar4;
  param_1[1] = lVar6 + 0x60;
  param_1[2] = (long)((long)pvVar2 + uVar5 * 0x60);
  if (pvVar7 != (void *)0x0) {
    operator_delete(pvVar7);
  }
  return lVar6 + 0x60;
}


// ===== 00894354  FUN_00894354 =====

void FUN_00894354(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 0089436c  FUN_0089436c =====

void FUN_0089436c(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *local_58;
  long *plStack_50;
  char local_48;
  long local_28;
  
  if (param_2 != param_3) {
    plVar5 = param_1 + 1;
    if (*plVar5 == 0) {
      FUN_006740f4(&local_58,param_1,param_2 + 4);
      plVar4 = local_58;
      local_58 = (long *)0x0;
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar4[2] = (long)plVar5;
      param_1[1] = (long)plVar4;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
      }
      FUN_005d5b94(plVar4,plVar4);
      plVar4 = local_58;
      local_58 = (long *)0x0;
      param_1[2] = param_1[2] + 1;
      if (plVar4 != (long *)0x0) {
        if (local_48 == '\x01') {
          if (plVar4 == (long *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          if (*(char *)((long)plVar4 + 0x4f) < '\0') {
            operator_delete((void *)plVar4[7]);
          }
          if (*(char *)((long)plVar4 + 0x37) < '\0') {
            operator_delete((void *)plVar4[4]);
          }
        }
        operator_delete(plVar4);
      }
      plVar4 = (long *)param_2[1];
      plVar3 = param_2;
      if ((long *)param_2[1] == (long *)0x0) {
        do {
          param_2 = (long *)plVar3[2];
          bVar2 = plVar3 != (long *)*param_2;
          plVar3 = param_2;
        } while (bVar2);
      }
      else {
        do {
          param_2 = plVar4;
          plVar4 = (long *)*param_2;
        } while ((long *)*param_2 != (long *)0x0);
      }
    }
    lVar1 = *plVar5;
    do {
      local_28 = lVar1;
      lVar1 = *(long *)(local_28 + 8);
    } while (*(long *)(local_28 + 8) != 0);
    if (param_2 != param_3) {
      do {
        local_58 = param_1;
        plStack_50 = &local_28;
        FUN_00894518(&local_58,param_2 + 4,param_2 + 4);
        plVar5 = (long *)param_2[1];
        plVar4 = param_2;
        if ((long *)param_2[1] == (long *)0x0) {
          do {
            param_2 = (long *)plVar4[2];
            bVar2 = plVar4 != (long *)*param_2;
            plVar4 = param_2;
          } while (bVar2);
        }
        else {
          do {
            param_2 = plVar5;
            plVar5 = (long *)*param_2;
          } while ((long *)*param_2 != (long *)0x0);
        }
      } while (param_2 != param_3);
    }
  }
  return;
}


// ===== 00894518  FUN_00894518 =====

void FUN_00894518(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *__s2;
  long *plVar2;
  size_t sVar3;
  char cVar4;
  ulong uVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  
  plVar9 = (long *)*param_1;
  lVar8 = *(long *)param_1[1];
  uVar1 = *(ulong *)(lVar8 + 0x28);
  puVar7 = (undefined8 *)*(void **)(lVar8 + 0x20);
  if (-1 < (char)*(byte *)(lVar8 + 0x37)) {
    uVar1 = (ulong)*(byte *)(lVar8 + 0x37);
    puVar7 = (undefined8 *)(lVar8 + 0x20);
  }
  __s2 = (undefined8 *)*param_2;
  uVar5 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    __s2 = param_2;
    uVar5 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  sVar3 = uVar5;
  if (uVar1 <= uVar5) {
    sVar3 = uVar1;
  }
  iVar6 = memcmp(puVar7,__s2,sVar3);
  if (iVar6 == 0) {
    if (uVar5 <= uVar1) goto LAB_0089460c;
  }
  else if (-1 < iVar6) {
LAB_0089460c:
    plVar10 = plVar9 + 1;
    plVar2 = (long *)*plVar10;
    plVar11 = plVar10;
    if ((long *)*plVar10 != (long *)0x0) {
      do {
        while( true ) {
          plVar10 = plVar2;
          plVar2 = (long *)plVar10[4];
          uVar1 = plVar10[5];
          if (-1 < (char)*(byte *)((long)plVar10 + 0x37)) {
            plVar2 = plVar10 + 4;
            uVar1 = (ulong)*(byte *)((long)plVar10 + 0x37);
          }
          sVar3 = uVar1;
          if (uVar5 <= uVar1) {
            sVar3 = uVar5;
          }
          iVar6 = memcmp(__s2,plVar2,sVar3);
          if (iVar6 != 0) break;
          if (uVar5 == uVar1) {
            return;
          }
          if (uVar1 <= uVar5) goto LAB_00894620;
LAB_00894670:
          plVar2 = (long *)*plVar10;
          plVar11 = plVar10;
          if ((long *)*plVar10 == (long *)0x0) goto LAB_00894684;
        }
        if (iVar6 < 0) goto LAB_00894670;
LAB_00894620:
        plVar2 = (long *)plVar10[1];
      } while ((long *)plVar10[1] != (long *)0x0);
      plVar11 = plVar10 + 1;
    }
LAB_00894684:
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_006740f4(&local_60,plVar9,param_3);
    puVar7 = local_60;
    local_60 = (undefined8 *)0x0;
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = plVar10;
    *plVar11 = (long)puVar7;
    if (*(long *)*plVar9 != 0) {
      *plVar9 = *(long *)*plVar9;
      puVar7 = (undefined8 *)*plVar11;
    }
    FUN_005d5b94(plVar9[1],puVar7);
    plVar9[2] = plVar9[2] + 1;
    goto LAB_008946dc;
  }
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_006740f4(&local_60,plVar9,param_3);
  lVar8 = *(long *)param_1[1];
  *local_60 = 0;
  local_60[1] = 0;
  local_60[2] = lVar8;
  *(undefined8 **)(lVar8 + 8) = local_60;
  puVar7 = local_60;
  if (*(long *)*plVar9 != 0) {
    *plVar9 = *(long *)*plVar9;
    puVar7 = *(undefined8 **)(lVar8 + 8);
  }
  FUN_005d5b94(plVar9[1],puVar7);
  puVar7 = local_60;
  plVar9[2] = plVar9[2] + 1;
  local_60 = (undefined8 *)0x0;
  *(undefined8 **)param_1[1] = puVar7;
LAB_008946dc:
  puVar7 = local_60;
  local_60 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    if (((ulong)local_50 & 1) != 0) {
      if (puVar7 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if (*(char *)((long)puVar7 + 0x4f) < '\0') {
        operator_delete((void *)puVar7[7]);
        cVar4 = *(char *)((long)puVar7 + 0x37);
      }
      else {
        cVar4 = *(char *)((long)puVar7 + 0x37);
      }
      if (cVar4 < '\0') {
        operator_delete((void *)puVar7[4]);
      }
    }
    operator_delete(puVar7);
  }
  return;
}


// ===== 00894770  FUN_00894770 =====

ulong FUN_00894770(long param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  
  uVar2 = *(uint *)(param_1 + 0xc);
  uVar3 = *(uint *)(param_2 + 0xc);
  if (((uVar3 == 0xffffffff) || (uVar2 == 0xffffffff)) ||
     ((uVar3 - 0x23 < 0x1f || (uVar3 & 0xffffffe0) == 0x60) &&
      (uVar2 - 0x23 < 0x1f || (uVar2 & 0xffffffe0) == 0x60))) {
    uVar6 = *(ulong *)(param_1 + 0x18);
    plVar4 = (long *)*(long *)(param_1 + 0x10);
    if (-1 < (char)*(byte *)(param_1 + 0x27)) {
      uVar6 = (ulong)*(byte *)(param_1 + 0x27);
      plVar4 = (long *)(param_1 + 0x10);
    }
    uVar1 = *(ulong *)(param_2 + 0x18);
    plVar5 = (long *)*(long *)(param_2 + 0x10);
    if (-1 < (char)*(byte *)(param_2 + 0x27)) {
      uVar1 = (ulong)*(byte *)(param_2 + 0x27);
      plVar5 = (long *)(param_2 + 0x10);
    }
    uVar6 = FUN_0061ff84(plVar4,uVar6,plVar5,uVar1);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
  }
  else if (uVar2 != uVar3) {
    return 0;
  }
  if (*(int *)(param_1 + 8) != 0) {
    uVar6 = FUN_00896500(param_1 + 0x10,param_1 + 0xa8,param_2 + 0x10,param_2 + 0xa8);
    return uVar6;
  }
  if ((*(int *)(param_1 + 0x28) == *(int *)(param_2 + 0x28)) &&
     (((*(int *)(param_2 + 0x2c) == 0 || (*(int *)(param_1 + 0x2c) < 1)) ||
      (*(int *)(param_1 + 0x2c) == *(int *)(param_2 + 0x2c))))) {
    return (ulong)(*(ulong *)(param_2 + 0x30) < 2 && *(ulong *)(param_1 + 0x30) < 2 ||
                  *(ulong *)(param_1 + 0x30) == *(ulong *)(param_2 + 0x30));
  }
  return 0;
}


// ===== 008948a8  FUN_008948a8 =====

uint FUN_008948a8(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_40 [16];
  code *local_30;
  code *pcStack_28;
  
  local_30 = FUN_004473ec;
  pcStack_28 = FUN_00896f04;
  uVar1 = FUN_00894908(param_1,param_2,auStack_40);
  (*local_30)(0,auStack_40,auStack_40);
  return uVar1 & 1;
}


// ===== 00894908  FUN_00894908 =====

/* WARNING: Removing unreachable block (ram,0x00894bfc) */
/* WARNING: Removing unreachable block (ram,0x00894b60) */

byte FUN_00894908(long param_1,long param_2,long param_3)

{
  undefined8 ***pppuVar1;
  size_t sVar2;
  size_t sVar3;
  byte bVar4;
  undefined8 *****pppppuVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 *puVar14;
  undefined8 ****ppppuVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  undefined1 auVar21 [12];
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined8 local_90;
  undefined8 ****local_80;
  undefined8 ***pppuStack_78;
  undefined8 local_70;
  undefined8 local_68;
  
  uVar10 = FUN_00894770();
  if ((uVar10 & 1) == 0) {
LAB_008949c0:
    bVar7 = 0;
  }
  else {
    iVar8 = FUN_00891b68(param_1);
    if (iVar8 == 1) {
      FUN_005d3510(&local_80,PTR_DAT_00d521c0);
      uVar10 = (ulong)local_70;
      plVar19 = (long *)(param_1 + 0xb0);
      plVar16 = (long *)*plVar19;
      plVar17 = plVar19;
      if (plVar16 != (long *)0x0) {
        pppppuVar5 = (undefined8 *****)local_80;
        pppuVar1 = pppuStack_78;
        if (-1 < (long)local_70) {
          pppppuVar5 = &local_80;
          pppuVar1 = (undefined8 ***)((ulong)local_70 >> 0x38);
        }
        do {
          while( true ) {
            plVar17 = (long *)plVar16[4];
            uVar12 = plVar16[5];
            if (-1 < (char)*(byte *)((long)plVar16 + 0x37)) {
              plVar17 = plVar16 + 4;
              uVar12 = (ulong)*(byte *)((long)plVar16 + 0x37);
            }
            sVar2 = uVar12;
            if (pppuVar1 <= uVar12) {
              sVar2 = (size_t)pppuVar1;
            }
            iVar8 = memcmp(pppppuVar5,plVar17,sVar2);
            if (iVar8 != 0) break;
            plVar17 = plVar16;
            if (pppuVar1 == (undefined8 ***)uVar12) goto LAB_00894a64;
            if (uVar12 <= pppuVar1) goto LAB_00894a08;
LAB_00894a58:
            plVar16 = (long *)*plVar16;
            plVar17 = plVar19;
            if (plVar16 == (long *)0x0) goto LAB_00894a64;
          }
          if (iVar8 < 0) goto LAB_00894a58;
LAB_00894a08:
          plVar16 = (long *)plVar16[1];
          plVar17 = plVar19;
        } while (plVar16 != (long *)0x0);
      }
LAB_00894a64:
      if ((long)uVar10 < 0) {
        operator_delete(local_80);
      }
      FUN_005d3510(&local_80,PTR_DAT_00d521c0);
      plVar20 = (long *)(param_2 + 0xb0);
      plVar18 = (long *)*plVar20;
      plVar16 = plVar20;
      if (plVar18 != (long *)0x0) {
        pppppuVar5 = (undefined8 *****)local_80;
        pppuVar1 = pppuStack_78;
        if (-1 < (char)local_70._7_1_) {
          pppppuVar5 = &local_80;
          pppuVar1 = (undefined8 ***)(ulong)local_70._7_1_;
        }
        do {
          while( true ) {
            plVar16 = (long *)plVar18[4];
            uVar10 = plVar18[5];
            if (-1 < (char)*(byte *)((long)plVar18 + 0x37)) {
              plVar16 = plVar18 + 4;
              uVar10 = (ulong)*(byte *)((long)plVar18 + 0x37);
            }
            sVar2 = uVar10;
            if (pppuVar1 <= uVar10) {
              sVar2 = (size_t)pppuVar1;
            }
            iVar8 = memcmp(pppppuVar5,plVar16,sVar2);
            if (iVar8 != 0) break;
            plVar16 = plVar18;
            if (pppuVar1 == (undefined8 ***)uVar10) goto LAB_00894b10;
            if (uVar10 <= pppuVar1) goto LAB_00894ab4;
LAB_00894b04:
            plVar18 = (long *)*plVar18;
            plVar16 = plVar20;
            if (plVar18 == (long *)0x0) goto LAB_00894b10;
          }
          if (iVar8 < 0) goto LAB_00894b04;
LAB_00894ab4:
          plVar18 = (long *)plVar18[1];
          plVar16 = plVar20;
        } while (plVar18 != (long *)0x0);
      }
LAB_00894b10:
      if ((char)local_70._7_1_ < '\0') {
        operator_delete(local_80);
      }
      if (((plVar16 != plVar20) || (*(int *)(param_2 + 0xc) != -1)) &&
         ((plVar17 != plVar19 || (*(int *)(param_1 + 0xc) != -1)))) {
        if ((plVar17 != plVar19) && (plVar16 != plVar20)) {
          pppuStack_78 = (undefined8 ***)&DAT_aaaaaaaaaaaaaaaa;
          local_80 = (undefined8 ****)&DAT_aaaaaaaaaaaaaaaa;
          local_70 = &DAT_aaaaaaaaaaaaaaaa;
          lVar11 = (long)*(char *)((long)plVar17 + 0x4f);
          if (lVar11 < 0) {
            plVar19 = (long *)plVar17[7];
            lVar11 = plVar17[8];
          }
          else {
            plVar19 = plVar17 + 7;
          }
          FUN_006252b4(&local_80,plVar19,lVar11,0x2f);
          local_90 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
          local_a0 = &DAT_aaaaaaaaaaaaaaaa;
          lVar11 = (long)*(char *)((long)plVar16 + 0x4f);
          if (lVar11 < 0) {
            plVar19 = (long *)plVar16[7];
            lVar11 = plVar16[8];
          }
          else {
            plVar19 = plVar16 + 7;
          }
          FUN_006252b4(&local_a0,plVar19,lVar11,0x2f);
          uVar12 = (long)pppuStack_78 - (long)local_80 >> 4;
          uVar10 = (long)puStack_98 - (long)local_a0 >> 4;
          if (uVar12 <= uVar10) {
            uVar10 = uVar12;
          }
          if (uVar10 == 0) {
            bVar7 = 1;
          }
          else {
            lVar11 = 0;
            uVar12 = 0;
            do {
              if ((ulong)((long)pppuStack_78 - (long)local_80 >> 4) <= uVar12) {
LAB_00894ed8:
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                          );
              }
              auVar21 = FUN_00675340(*(undefined8 *)((long)local_80 + lVar11),
                                     ((undefined8 *)((long)local_80 + lVar11))[1],10);
              uVar13 = auVar21._0_8_ & 0xffffffff | 0x100000000;
              if ((auVar21._8_4_ & (uint)(auVar21._0_8_ + 0x80000000 >> 0x20 == 0)) == 0) {
                uVar13 = 0;
              }
              if (uVar13 >> 0x20 == 0) {
LAB_00894d60:
                bVar7 = *(byte *)((long)plVar17 + 0x4f);
                bVar4 = *(byte *)((long)plVar16 + 0x4f);
                sVar2 = plVar17[8];
                if (-1 < (char)bVar7) {
                  sVar2 = (ulong)bVar7;
                }
                sVar3 = plVar16[8];
                if (-1 < (char)bVar4) {
                  sVar3 = (ulong)bVar4;
                }
                if (sVar2 == sVar3) {
                  plVar19 = (long *)plVar17[7];
                  if (-1 < (char)bVar7) {
                    plVar19 = plVar17 + 7;
                  }
                  plVar17 = (long *)plVar16[7];
                  if (-1 < (char)bVar4) {
                    plVar17 = plVar16 + 7;
                  }
                  iVar8 = memcmp(plVar19,plVar17,sVar2);
                  bVar7 = iVar8 == 0;
                }
                else {
                  bVar7 = 0;
                }
                break;
              }
              if ((ulong)((long)puStack_98 - (long)local_a0 >> 4) <= uVar12) goto LAB_00894ed8;
              auVar21 = FUN_00675340(*(undefined8 *)(local_a0 + lVar11),
                                     *(undefined8 *)((long)(local_a0 + lVar11) + 8),10);
              if ((auVar21._8_4_ & (uint)(auVar21._0_8_ + 0x80000000U >> 0x20 == 0)) == 0)
              goto LAB_00894d60;
              bVar7 = (**(code **)(param_3 + 0x18))(param_3,uVar13 & 0xffffffff);
              if ((bVar7 & 1) == 0) break;
              bVar6 = uVar10 - 1 != uVar12;
              uVar12 = uVar12 + 1;
              lVar11 = lVar11 + 0x10;
            } while (bVar6);
          }
          if (local_a0 == (undefined1 *)0x0) {
LAB_00894e44:
            if (local_80 == (undefined8 ****)0x0) goto LAB_00894c0c;
            uVar12 = (ulong)((long)pppuStack_78 + (-0x10 - ((long)pppuStack_78 << 0x3c))) >> 4;
            uVar10 = (ulong)(((long)local_80 - (long)pppuStack_78 << 0x3c) -
                            ((long)local_80 - (long)pppuStack_78)) >> 4;
            if (uVar12 <= uVar10) {
              uVar10 = uVar12;
            }
            ppppuVar15 = (undefined8 ****)pppuStack_78;
            if ((1 < uVar10) &&
               ((((int)local_80 - (int)pppuStack_78 | -(int)pppuStack_78) & 0xfU) == 0)) {
              uVar10 = uVar10 & 0xffffffffffffffe;
              ppppuVar15 = (undefined8 ****)(pppuStack_78 + uVar10 * -2);
              do {
                uVar10 = uVar10 - 2;
              } while (uVar10 != 0);
            }
            do {
              if (ppppuVar15 == local_80) {
                pppuStack_78 = local_80;
                operator_delete(local_80);
                goto LAB_00894c0c;
              }
              ppppuVar15 = ppppuVar15 + -2;
            } while (ppppuVar15 != (undefined8 ****)0x0);
          }
          else {
            uVar10 = (ulong)(((long)local_a0 - (long)puStack_98 << 0x3c) -
                            ((long)local_a0 - (long)puStack_98)) >> 4;
            if ((ulong)(puStack_98 + (-0x10 - ((long)puStack_98 << 0x3c))) >> 4 <= uVar10) {
              uVar10 = (ulong)(puStack_98 + (-0x10 - ((long)puStack_98 << 0x3c))) >> 4;
            }
            puVar14 = puStack_98;
            if ((1 < uVar10) && ((((int)local_a0 - (int)puStack_98 | -(int)puStack_98) & 0xfU) == 0)
               ) {
              uVar10 = uVar10 & 0xffffffffffffffe;
              puVar14 = puStack_98 + uVar10 * -0x10;
              do {
                uVar10 = uVar10 - 2;
              } while (uVar10 != 0);
            }
            do {
              if (puVar14 == local_a0) {
                puStack_98 = local_a0;
                operator_delete(local_a0);
                goto LAB_00894e44;
              }
              puVar14 = puVar14 + -0x10;
            } while (puVar14 != (undefined1 *)0x0);
          }
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        bVar7 = plVar17 == plVar19 && plVar16 == plVar20;
        goto LAB_00894c0c;
      }
    }
    else if (iVar8 == 4) {
      local_68 = 0;
      FUN_005d3510(&local_80,PTR_DAT_00d521b8);
      uVar10 = FUN_00891698(param_1,&local_80,(long)&local_68 + 4);
      if ((uVar10 & 1) == 0) {
        uVar9 = 1;
      }
      else {
        FUN_005d3510(&local_a0,PTR_DAT_00d521b8);
        uVar9 = FUN_00891698(param_2,&local_a0,&local_68);
        uVar9 = uVar9 ^ 1;
        if (local_90._7_1_ < '\0') {
          operator_delete(local_a0);
        }
      }
      if ((uVar9 & 1) == 0) {
        bVar7 = (**(code **)(param_3 + 0x18))(param_3,local_68._4_4_,local_68 & 0xffffffff);
        goto LAB_00894c0c;
      }
      uVar10 = FUN_004022fc();
      if ((uVar10 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../media/base/codec_comparators.cc",0x4ba,
                     "RTX missing associated payload type.");
        bVar7 = 0;
        goto LAB_00894c0c;
      }
      goto LAB_008949c0;
    }
    bVar7 = 1;
  }
LAB_00894c0c:
  return bVar7 & 1;
}


// ===== 00894eec  FUN_00894eec =====

void FUN_00894eec(undefined1 *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 uVar4;
  undefined8 local_80;
  long *plStack_78;
  code *local_70;
  code *pcStack_68;
  
  lVar1 = *param_3;
  lVar2 = param_3[1];
  do {
    if (lVar1 == lVar2) {
      uVar4 = 0;
      *param_1 = 0;
LAB_00894f98:
      param_1[0xd8] = uVar4;
      return;
    }
    local_70 = FUN_004473ec;
    pcStack_68 = FUN_00896f14;
    local_80 = param_2;
    plStack_78 = param_3;
    uVar3 = FUN_00894908(param_4,lVar1,&local_80);
    (*local_70)(0,&local_80,&local_80);
    if ((uVar3 & 1) != 0) {
      FUN_00890830(param_1,lVar1);
      uVar4 = 1;
      goto LAB_00894f98;
    }
    lVar1 = lVar1 + 0xd8;
  } while( true );
}


// ===== 00894fc0  FUN_00894fc0 =====

uint FUN_00894fc0(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *local_d0;
  undefined8 local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  long local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_18;
  
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*param_1 + 0x10))(&local_a0);
  puVar6 = (undefined8 *)(param_2 + 8);
  puVar1 = (undefined8 *)*puVar6;
  uVar5 = *(ulong *)(param_2 + 0x10);
  if (-1 < (char)*(byte *)(param_2 + 0x1f)) {
    puVar1 = puVar6;
    uVar5 = (ulong)*(byte *)(param_2 + 0x1f);
  }
  puVar2 = local_90;
  puVar3 = puStack_98;
  if (-1 < (long)puStack_88) {
    puVar2 = (undefined1 *)((ulong)puStack_88 >> 0x38);
    puVar3 = (undefined1 *)((ulong)&local_a0 | 8);
  }
  uVar5 = FUN_0061ff84(puVar1,uVar5,puVar3,puVar2);
  if (((uVar5 & 1) != 0) && (*(int *)(param_2 + 0x20) == (int)local_80)) {
    if (((byte)local_70 & *(byte *)(param_2 + 0x30)) == 0) {
      if (*(byte *)(param_2 + 0x30) == (byte)local_70) {
LAB_00895088:
        if (((byte)local_78 & *(byte *)(param_2 + 0x28)) == 0) {
          if (*(byte *)(param_2 + 0x28) == (byte)local_78) {
LAB_008950ac:
            FUN_0089516c(&local_b8,puVar6,param_2 + 0x50);
            FUN_0089516c(&local_d0,(undefined1 *)((ulong)&local_a0 | 8),&local_50);
            if (local_a8 == local_c0) {
              uVar4 = FUN_00667cd4(local_b8,&local_b0,local_d0);
            }
            else {
              uVar4 = 0;
            }
            local_18 = (undefined1 *)&local_d0;
            FUN_0060b2cc(&local_18,local_c8);
            local_d0 = &local_b8;
            FUN_0060b2cc(&local_d0,local_b0);
            goto LAB_0089510c;
          }
        }
        else {
          if (((ulong)local_78 & 1) == 0) {
LAB_00895158:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                      );
          }
          if (*(int *)(param_2 + 0x24) == local_80._4_4_) goto LAB_008950ac;
        }
      }
    }
    else {
      if (((ulong)local_70 & 1) == 0) goto LAB_00895158;
      if (*(int *)(param_2 + 0x2c) == local_78._4_4_) goto LAB_00895088;
    }
  }
  uVar4 = 0;
LAB_0089510c:
  FUN_00668620(&local_a0);
  return uVar4 & 1;
}


// ===== 0089516c  FUN_0089516c =====

/* WARNING: Removing unreachable block (ram,0x008962c0) */
/* WARNING: Removing unreachable block (ram,0x0089627c) */
/* WARNING: Removing unreachable block (ram,0x00896238) */
/* WARNING: Removing unreachable block (ram,0x00896174) */
/* WARNING: Removing unreachable block (ram,0x008959a8) */
/* WARNING: Removing unreachable block (ram,0x008956fc) */
/* WARNING: Removing unreachable block (ram,0x00895968) */
/* WARNING: Removing unreachable block (ram,0x0089597c) */
/* WARNING: Removing unreachable block (ram,0x00895720) */
/* WARNING: Removing unreachable block (ram,0x008961f0) */
/* WARNING: Removing unreachable block (ram,0x008961dc) */
/* WARNING: Removing unreachable block (ram,0x008956c0) */
/* WARNING: Removing unreachable block (ram,0x008959cc) */
/* WARNING: Type propagation algorithm not settling */

void FUN_0089516c(long *******param_1,undefined8 *param_2,long param_3)

{
  long *******ppppppplVar1;
  long ******pppppplVar2;
  undefined8 ******ppppppuVar3;
  undefined8 *puVar4;
  undefined8 *******pppppppuVar5;
  undefined8 ******ppppppuVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  long ******pppppplVar10;
  size_t sVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long ******pppppplVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *******ppppppplVar19;
  undefined1 auVar20 [16];
  long *******local_d8;
  long *******local_d0;
  undefined8 uStack_c8;
  long *******local_c0;
  long ******pppppplStack_b8;
  long ******local_b0;
  undefined8 *******local_a8;
  long ******local_a0;
  ulong local_98;
  long *******local_90;
  long ******pppppplStack_88;
  long ******local_80;
  long *******local_78;
  long ******pppppplStack_70;
  long ******local_68;
  
  lVar14 = *(long *)(param_3 + 0x10);
  param_1[2] = (long ******)0x0;
  ppppppplVar19 = param_1 + 1;
  *ppppppplVar19 = (long ******)0x0;
  *param_1 = (long ******)ppppppplVar19;
  if (lVar14 != 0) {
    pppppplVar10 = (long ******)FUN_0060b868(param_1,*(undefined8 *)(param_3 + 8),param_1);
    param_1[1] = pppppplVar10;
    pppppplVar10[2] = (long *****)ppppppplVar19;
    pppppplVar10 = param_1[1];
    do {
      pppppplVar15 = pppppplVar10;
      pppppplVar10 = (long ******)*pppppplVar15;
    } while (pppppplVar10 != (long ******)0x0);
    pppppplVar10 = *(long *******)(param_3 + 0x10);
    *param_1 = pppppplVar15;
    param_1[2] = pppppplVar10;
  }
  puVar7 = PTR_DAT_00d51ca0;
  uVar12 = param_2[1];
  puVar4 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar12 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar4 = param_2;
  }
  sVar11 = strlen(PTR_DAT_00d51ca0);
  uVar12 = FUN_0061ff84(puVar4,uVar12,puVar7,sVar11);
  if ((uVar12 & 1) != 0) {
    FUN_005d3510(&local_a8,PTR_s_profile_id_00d52950);
    uVar12 = local_98;
    plVar17 = (long *)(param_3 + 8);
    plVar18 = (long *)*plVar17;
    if (plVar18 == (long *)0x0) {
      bVar8 = false;
    }
    else {
      pppppppuVar5 = local_a8;
      pppppplVar10 = local_a0;
      if (-1 < (long)local_98) {
        pppppppuVar5 = &local_a8;
        pppppplVar10 = (long ******)(local_98 >> 0x38);
      }
      do {
        while( true ) {
          plVar16 = (long *)plVar18[4];
          pppppplVar15 = (long ******)plVar18[5];
          if (-1 < (char)*(byte *)((long)plVar18 + 0x37)) {
            plVar16 = plVar18 + 4;
            pppppplVar15 = (long ******)(ulong)*(byte *)((long)plVar18 + 0x37);
          }
          pppppplVar2 = pppppplVar15;
          if (pppppplVar10 <= pppppplVar15) {
            pppppplVar2 = pppppplVar10;
          }
          iVar9 = memcmp(pppppppuVar5,plVar16,(size_t)pppppplVar2);
          if (iVar9 == 0) break;
          if (-1 < iVar9) goto LAB_00895264;
LAB_008952b4:
          plVar18 = (long *)*plVar18;
          plVar16 = plVar17;
          if (plVar18 == (long *)0x0) goto LAB_008952c0;
        }
        plVar16 = plVar18;
        if (pppppplVar10 == pppppplVar15) break;
        if (pppppplVar10 < pppppplVar15) goto LAB_008952b4;
LAB_00895264:
        plVar18 = (long *)plVar18[1];
        plVar16 = plVar17;
      } while (plVar18 != (long *)0x0);
LAB_008952c0:
      bVar8 = plVar16 != plVar17;
    }
    if ((long)uVar12 < 0) {
      operator_delete(local_a8);
    }
    if (!bVar8) {
      local_a0 = (long ******)0x0;
      local_98 = 0;
      local_a8 = &local_a0;
      uVar12 = FUN_007bbd34(&local_a8);
      local_78 = (long *******)&local_a8;
      FUN_0060b2cc(&local_78,local_a0);
      if ((uVar12 >> 0x20 & 1) != 0) {
        FUN_007bbd00(&local_78,uVar12 & 0xffffffff);
        FUN_005d3510(&local_a8,PTR_s_profile_id_00d52950);
        local_80 = local_68;
        pppppplStack_88 = pppppplStack_70;
        pppppplStack_70 = (long ******)0x0;
        local_68 = (long ******)0x0;
        local_90 = local_78;
        local_78 = (long *******)0x0;
        local_c0 = param_1;
        FUN_00896cb4(&local_c0,&local_a8,&local_a8);
        if ((long)local_80 < 0) {
          operator_delete(local_90);
        }
        if ((long)local_98 < 0) {
          operator_delete(local_a8);
        }
      }
    }
  }
  puVar7 = PTR_DAT_00d51bd8;
  uVar12 = param_2[1];
  puVar4 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar12 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar4 = param_2;
  }
  sVar11 = strlen(PTR_DAT_00d51bd8);
  uVar12 = FUN_0061ff84(puVar4,uVar12,puVar7,sVar11);
  if ((uVar12 & 1) != 0) {
    FUN_005d3510(&local_a8,PTR_s_profile_00d522d0);
    uVar12 = local_98;
    plVar17 = (long *)(param_3 + 8);
    plVar18 = (long *)*plVar17;
    if (plVar18 == (long *)0x0) {
      bVar8 = false;
    }
    else {
      pppppppuVar5 = local_a8;
      pppppplVar10 = local_a0;
      if (-1 < (long)local_98) {
        pppppppuVar5 = &local_a8;
        pppppplVar10 = (long ******)(local_98 >> 0x38);
      }
      do {
        while( true ) {
          plVar16 = (long *)plVar18[4];
          pppppplVar15 = (long ******)plVar18[5];
          if (-1 < (char)*(byte *)((long)plVar18 + 0x37)) {
            plVar16 = plVar18 + 4;
            pppppplVar15 = (long ******)(ulong)*(byte *)((long)plVar18 + 0x37);
          }
          pppppplVar2 = pppppplVar15;
          if (pppppplVar10 <= pppppplVar15) {
            pppppplVar2 = pppppplVar10;
          }
          iVar9 = memcmp(pppppppuVar5,plVar16,(size_t)pppppplVar2);
          if (iVar9 == 0) break;
          if (-1 < iVar9) goto LAB_008953ec;
LAB_0089543c:
          plVar18 = (long *)*plVar18;
          plVar16 = plVar17;
          if (plVar18 == (long *)0x0) goto LAB_00895448;
        }
        plVar16 = plVar18;
        if (pppppplVar10 == pppppplVar15) break;
        if (pppppplVar10 < pppppplVar15) goto LAB_0089543c;
LAB_008953ec:
        plVar18 = (long *)plVar18[1];
        plVar16 = plVar17;
      } while (plVar18 != (long *)0x0);
LAB_00895448:
      bVar8 = plVar16 != plVar17;
    }
    if ((long)uVar12 < 0) {
      operator_delete(local_a8);
    }
    if (!bVar8) {
      local_a0 = (long ******)0x0;
      local_98 = 0;
      local_a8 = &local_a0;
      uVar12 = FUN_007b8310(&local_a8);
      local_78 = (long *******)&local_a8;
      FUN_0060b2cc(&local_78,local_a0);
      if ((uVar12 >> 0x20 & 1) != 0) {
        uVar13 = FUN_007b82dc(uVar12 & 0xffffffff);
        FUN_005d3510(&local_a8,PTR_s_profile_00d522d0);
        FUN_005d3510(&local_90,uVar13);
        local_78 = param_1;
        FUN_00896cb4(&local_78,&local_a8,&local_a8);
        if ((long)local_80 < 0) {
          operator_delete(local_90);
        }
        if ((long)local_98 < 0) {
          operator_delete(local_a8);
        }
      }
    }
    FUN_005d3510(&local_a8,PTR_DAT_00d522e0);
    uVar12 = local_98;
    plVar18 = (long *)*plVar17;
    if (plVar18 == (long *)0x0) {
      bVar8 = false;
    }
    else {
      pppppppuVar5 = local_a8;
      pppppplVar10 = local_a0;
      if (-1 < (long)local_98) {
        pppppppuVar5 = &local_a8;
        pppppplVar10 = (long ******)(local_98 >> 0x38);
      }
      do {
        while( true ) {
          plVar16 = (long *)plVar18[4];
          pppppplVar15 = (long ******)plVar18[5];
          if (-1 < (char)*(byte *)((long)plVar18 + 0x37)) {
            plVar16 = plVar18 + 4;
            pppppplVar15 = (long ******)(ulong)*(byte *)((long)plVar18 + 0x37);
          }
          pppppplVar2 = pppppplVar15;
          if (pppppplVar10 <= pppppplVar15) {
            pppppplVar2 = pppppplVar10;
          }
          iVar9 = memcmp(pppppppuVar5,plVar16,(size_t)pppppplVar2);
          if (iVar9 == 0) break;
          if (-1 < iVar9) goto LAB_0089553c;
LAB_0089558c:
          plVar18 = (long *)*plVar18;
          plVar16 = plVar17;
          if (plVar18 == (long *)0x0) goto LAB_00895598;
        }
        plVar16 = plVar18;
        if (pppppplVar10 == pppppplVar15) break;
        if (pppppplVar10 < pppppplVar15) goto LAB_0089558c;
LAB_0089553c:
        plVar18 = (long *)plVar18[1];
        plVar16 = plVar17;
      } while (plVar18 != (long *)0x0);
LAB_00895598:
      bVar8 = plVar16 != plVar17;
    }
    if ((long)uVar12 < 0) {
      operator_delete(local_a8);
    }
    if (!bVar8) {
      local_d0 = (long *******)0x0;
      uStack_c8 = 0;
      local_d8 = (long *******)&local_d0;
      FUN_005d3510(&local_a8,PTR_DAT_00d522e0);
      FUN_005d3510(&local_78,&DAT_0019cb7e);
      if (local_d0 != (long *******)0x0) {
        ppppppplVar19 = local_d0;
        pppppppuVar5 = local_a8;
        pppppplVar10 = local_a0;
        if (-1 < (long)local_98) {
          pppppppuVar5 = &local_a8;
          pppppplVar10 = (long ******)(local_98 >> 0x38);
        }
        do {
          while( true ) {
            ppppppplVar1 = (long *******)ppppppplVar19[4];
            pppppplVar15 = ppppppplVar19[5];
            if (-1 < (char)*(byte *)((long)ppppppplVar19 + 0x37)) {
              ppppppplVar1 = ppppppplVar19 + 4;
              pppppplVar15 = (long ******)(ulong)*(byte *)((long)ppppppplVar19 + 0x37);
            }
            pppppplVar2 = pppppplVar15;
            if (pppppplVar10 <= pppppplVar15) {
              pppppplVar2 = pppppplVar10;
            }
            iVar9 = memcmp(pppppppuVar5,ppppppplVar1,(size_t)pppppplVar2);
            if (iVar9 != 0) break;
            if (pppppplVar10 == pppppplVar15) {
              if (&local_d0 != (long ********)ppppppplVar19) {
                if (*(char *)((long)ppppppplVar19 + 0x4f) < '\0') {
                  FUN_005478d8(&local_c0,ppppppplVar19[7],ppppppplVar19[8]);
                }
                else {
                  local_b0 = ppppppplVar19[9];
                  pppppplStack_b8 = ppppppplVar19[8];
                  local_c0 = (long *******)ppppppplVar19[7];
                }
                goto LAB_00895730;
              }
              goto LAB_00895700;
            }
            if (pppppplVar15 <= pppppplVar10) goto LAB_00895610;
LAB_00895660:
            ppppppplVar19 = (long *******)*ppppppplVar19;
            if (ppppppplVar19 == (long *******)0x0) goto LAB_00895700;
          }
          if (iVar9 < 0) goto LAB_00895660;
LAB_00895610:
          ppppppplVar1 = ppppppplVar19 + 1;
          ppppppplVar19 = (long *******)*ppppppplVar1;
        } while ((long *******)*ppppppplVar1 != (long *******)0x0);
      }
LAB_00895700:
      pppppplStack_b8 = pppppplStack_70;
      local_c0 = local_78;
      local_b0 = local_68;
LAB_00895730:
      if ((long)local_98 < 0) {
        operator_delete(local_a8);
      }
      FUN_005d3510(&local_a8,PTR_DAT_00d522e0);
      local_80 = local_b0;
      pppppplStack_88 = pppppplStack_b8;
      pppppplStack_b8 = (long ******)0x0;
      local_b0 = (long ******)0x0;
      local_90 = local_c0;
      local_c0 = (long *******)0x0;
      local_78 = param_1;
      FUN_00896cb4(&local_78,&local_a8,&local_a8);
      if ((long)local_80 < 0) {
        operator_delete(local_90);
      }
      if ((long)local_98 < 0) {
        operator_delete(local_a8);
      }
      if ((long)local_b0 < 0) {
        operator_delete(local_c0);
      }
      local_78 = (long *******)&local_d8;
      FUN_0060b2cc(&local_78,local_d0);
    }
    FUN_005d3510(&local_a8,PTR_s_level_idx_00d522d8);
    uVar12 = local_98;
    plVar18 = (long *)*plVar17;
    if (plVar18 == (long *)0x0) {
      bVar8 = false;
    }
    else {
      pppppppuVar5 = local_a8;
      pppppplVar10 = local_a0;
      if (-1 < (long)local_98) {
        pppppppuVar5 = &local_a8;
        pppppplVar10 = (long ******)(local_98 >> 0x38);
      }
      do {
        while( true ) {
          plVar16 = (long *)plVar18[4];
          pppppplVar15 = (long ******)plVar18[5];
          if (-1 < (char)*(byte *)((long)plVar18 + 0x37)) {
            plVar16 = plVar18 + 4;
            pppppplVar15 = (long ******)(ulong)*(byte *)((long)plVar18 + 0x37);
          }
          pppppplVar2 = pppppplVar15;
          if (pppppplVar10 <= pppppplVar15) {
            pppppplVar2 = pppppplVar10;
          }
          iVar9 = memcmp(pppppppuVar5,plVar16,(size_t)pppppplVar2);
          if (iVar9 == 0) break;
          if (-1 < iVar9) goto LAB_008957e8;
LAB_00895838:
          plVar18 = (long *)*plVar18;
          plVar16 = plVar17;
          if (plVar18 == (long *)0x0) goto LAB_00895844;
        }
        plVar16 = plVar18;
        if (pppppplVar10 == pppppplVar15) break;
        if (pppppplVar10 < pppppplVar15) goto LAB_00895838;
LAB_008957e8:
        plVar18 = (long *)plVar18[1];
        plVar16 = plVar17;
      } while (plVar18 != (long *)0x0);
LAB_00895844:
      bVar8 = plVar16 != plVar17;
    }
    if ((long)uVar12 < 0) {
      operator_delete(local_a8);
    }
    if (!bVar8) {
      local_d0 = (long *******)0x0;
      uStack_c8 = 0;
      local_d8 = (long *******)&local_d0;
      FUN_005d3510(&local_a8,PTR_s_level_idx_00d522d8);
      FUN_005d3510(&local_78,&DAT_001984c2);
      if (local_d0 != (long *******)0x0) {
        ppppppplVar19 = local_d0;
        pppppppuVar5 = local_a8;
        pppppplVar10 = local_a0;
        if (-1 < (long)local_98) {
          pppppppuVar5 = &local_a8;
          pppppplVar10 = (long ******)(local_98 >> 0x38);
        }
        do {
          while( true ) {
            ppppppplVar1 = (long *******)ppppppplVar19[4];
            pppppplVar15 = ppppppplVar19[5];
            if (-1 < (char)*(byte *)((long)ppppppplVar19 + 0x37)) {
              ppppppplVar1 = ppppppplVar19 + 4;
              pppppplVar15 = (long ******)(ulong)*(byte *)((long)ppppppplVar19 + 0x37);
            }
            pppppplVar2 = pppppplVar15;
            if (pppppplVar10 <= pppppplVar15) {
              pppppplVar2 = pppppplVar10;
            }
            iVar9 = memcmp(pppppppuVar5,ppppppplVar1,(size_t)pppppplVar2);
            if (iVar9 != 0) break;
            if (pppppplVar10 == pppppplVar15) {
              if (&local_d0 != (long ********)ppppppplVar19) {
                if (*(char *)((long)ppppppplVar19 + 0x4f) < '\0') {
                  FUN_005478d8(&local_c0,ppppppplVar19[7],ppppppplVar19[8]);
                }
                else {
                  local_b0 = ppppppplVar19[9];
                  pppppplStack_b8 = ppppppplVar19[8];
                  local_c0 = (long *******)ppppppplVar19[7];
                }
                goto LAB_008959dc;
              }
              goto LAB_008959ac;
            }
            if (pppppplVar15 <= pppppplVar10) goto LAB_008958bc;
LAB_0089590c:
            ppppppplVar19 = (long *******)*ppppppplVar19;
            if (ppppppplVar19 == (long *******)0x0) goto LAB_008959ac;
          }
          if (iVar9 < 0) goto LAB_0089590c;
LAB_008958bc:
          ppppppplVar1 = ppppppplVar19 + 1;
          ppppppplVar19 = (long *******)*ppppppplVar1;
        } while ((long *******)*ppppppplVar1 != (long *******)0x0);
      }
LAB_008959ac:
      pppppplStack_b8 = pppppplStack_70;
      local_c0 = local_78;
      local_b0 = local_68;
LAB_008959dc:
      if ((long)local_98 < 0) {
        operator_delete(local_a8);
      }
      FUN_005d3510(&local_a8,PTR_s_level_idx_00d522d8);
      local_80 = local_b0;
      pppppplStack_88 = pppppplStack_b8;
      pppppplStack_b8 = (long ******)0x0;
      local_b0 = (long ******)0x0;
      local_90 = local_c0;
      local_c0 = (long *******)0x0;
      local_78 = param_1;
      FUN_00896cb4(&local_78,&local_a8,&local_a8);
      if ((long)local_80 < 0) {
        operator_delete(local_90);
      }
      if ((long)local_98 < 0) {
        operator_delete(local_a8);
      }
      if ((long)local_b0 < 0) {
        operator_delete(local_c0);
      }
      local_78 = (long *******)&local_d8;
      FUN_0060b2cc(&local_78,local_d0);
    }
  }
  puVar7 = PTR_DAT_00d51c78;
  uVar12 = param_2[1];
  puVar4 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar12 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar4 = param_2;
  }
  sVar11 = strlen(PTR_DAT_00d51c78);
  uVar12 = FUN_0061ff84(puVar4,uVar12,puVar7,sVar11);
  if ((uVar12 & 1) != 0) {
    FUN_005d3510(&local_a8,PTR_s_packetization_mode_00d51c88);
    uVar12 = local_98;
    plVar17 = (long *)(param_3 + 8);
    plVar18 = (long *)*plVar17;
    if (plVar18 == (long *)0x0) {
      bVar8 = false;
    }
    else {
      pppppppuVar5 = local_a8;
      pppppplVar10 = local_a0;
      if (-1 < (long)local_98) {
        pppppppuVar5 = &local_a8;
        pppppplVar10 = (long ******)(local_98 >> 0x38);
      }
      do {
        while( true ) {
          plVar16 = (long *)plVar18[4];
          pppppplVar15 = (long ******)plVar18[5];
          if (-1 < (char)*(byte *)((long)plVar18 + 0x37)) {
            plVar16 = plVar18 + 4;
            pppppplVar15 = (long ******)(ulong)*(byte *)((long)plVar18 + 0x37);
          }
          pppppplVar2 = pppppplVar15;
          if (pppppplVar10 <= pppppplVar15) {
            pppppplVar2 = pppppplVar10;
          }
          iVar9 = memcmp(pppppppuVar5,plVar16,(size_t)pppppplVar2);
          if (iVar9 == 0) break;
          if (-1 < iVar9) goto LAB_00895ad8;
LAB_00895b28:
          plVar18 = (long *)*plVar18;
          plVar16 = plVar17;
          if (plVar18 == (long *)0x0) goto LAB_00895b34;
        }
        plVar16 = plVar18;
        if (pppppplVar10 == pppppplVar15) break;
        if (pppppplVar10 < pppppplVar15) goto LAB_00895b28;
LAB_00895ad8:
        plVar18 = (long *)plVar18[1];
        plVar16 = plVar17;
      } while (plVar18 != (long *)0x0);
LAB_00895b34:
      bVar8 = plVar16 != plVar17;
    }
    if ((long)uVar12 < 0) {
      operator_delete(local_a8);
    }
    if (!bVar8) {
      pppppplStack_b8 = (long ******)0x0;
      local_b0 = (long ******)0x0;
      local_c0 = &pppppplStack_b8;
      FUN_008969c4(&local_78,&local_c0);
      FUN_005d3510(&local_a8,PTR_s_packetization_mode_00d51c88);
      local_80 = local_68;
      pppppplStack_88 = pppppplStack_70;
      pppppplStack_70 = (long ******)0x0;
      local_68 = (long ******)0x0;
      local_90 = local_78;
      local_78 = (long *******)0x0;
      local_d8 = param_1;
      FUN_00896cb4(&local_d8,&local_a8,&local_a8);
      if ((long)local_80 < 0) {
        operator_delete(local_90);
      }
      if ((long)local_98 < 0) {
        operator_delete(local_a8);
      }
      local_d8 = (long *******)&local_c0;
      FUN_0060b2cc(&local_d8,pppppplStack_b8);
    }
  }
  puVar7 = PTR_DAT_00d51c90;
  uVar12 = param_2[1];
  puVar4 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar12 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar4 = param_2;
  }
  sVar11 = strlen(PTR_DAT_00d51c90);
  uVar12 = FUN_0061ff84(puVar4,uVar12,puVar7,sVar11);
  if ((uVar12 & 1) != 0) {
    local_a0 = (undefined8 ******)0x0;
    local_98 = 0;
    local_a8 = &local_a0;
    auVar20 = FUN_007bc174(&local_a8);
    local_78 = (long *******)&local_a8;
    FUN_0060b2cc(&local_78,local_a0);
    if ((auVar20._8_8_ >> 0x20 & 1) != 0) {
      FUN_005d3510(&local_a8,PTR_s_profile_id_00d522b0);
      uVar12 = local_98;
      plVar17 = (long *)(param_3 + 8);
      plVar18 = (long *)*plVar17;
      if (plVar18 == (long *)0x0) {
        bVar8 = false;
      }
      else {
        pppppppuVar5 = local_a8;
        pppppplVar10 = local_a0;
        if (-1 < (long)local_98) {
          pppppppuVar5 = &local_a8;
          pppppplVar10 = (undefined8 ******)(local_98 >> 0x38);
        }
        do {
          while( true ) {
            plVar16 = (long *)plVar18[4];
            ppppppuVar6 = (undefined8 ******)plVar18[5];
            if (-1 < (char)*(byte *)((long)plVar18 + 0x37)) {
              plVar16 = plVar18 + 4;
              ppppppuVar6 = (undefined8 ******)(ulong)*(byte *)((long)plVar18 + 0x37);
            }
            ppppppuVar3 = ppppppuVar6;
            if (pppppplVar10 <= ppppppuVar6) {
              ppppppuVar3 = pppppplVar10;
            }
            iVar9 = memcmp(pppppppuVar5,plVar16,(size_t)ppppppuVar3);
            if (iVar9 == 0) break;
            if (-1 < iVar9) goto LAB_00895c88;
LAB_00895cd8:
            plVar18 = (long *)*plVar18;
            plVar16 = plVar17;
            if (plVar18 == (long *)0x0) goto LAB_00895ce4;
          }
          plVar16 = plVar18;
          if (pppppplVar10 == ppppppuVar6) break;
          if (pppppplVar10 < ppppppuVar6) goto LAB_00895cd8;
LAB_00895c88:
          plVar18 = (long *)plVar18[1];
          plVar16 = plVar17;
        } while (plVar18 != (long *)0x0);
LAB_00895ce4:
        bVar8 = plVar16 != plVar17;
      }
      if ((long)uVar12 < 0) {
        operator_delete(local_a8);
      }
      if (!bVar8) {
        FUN_007bc024(&local_78,auVar20._0_8_ & 0xffffffff);
        FUN_005d3510(&local_a8,PTR_s_profile_id_00d522b0);
        local_80 = local_68;
        pppppplStack_88 = pppppplStack_70;
        pppppplStack_70 = (long ******)0x0;
        local_68 = (long ******)0x0;
        local_90 = local_78;
        local_78 = (long *******)0x0;
        local_c0 = param_1;
        FUN_00896cb4(&local_c0,&local_a8,&local_a8);
        if ((long)local_80 < 0) {
          operator_delete(local_90);
        }
        if ((long)local_98 < 0) {
          operator_delete(local_a8);
        }
      }
      FUN_005d3510(&local_a8,PTR_s_level_id_00d522b8);
      uVar12 = local_98;
      plVar18 = (long *)*plVar17;
      if (plVar18 == (long *)0x0) {
        bVar8 = false;
      }
      else {
        pppppppuVar5 = local_a8;
        pppppplVar10 = local_a0;
        if (-1 < (long)local_98) {
          pppppppuVar5 = &local_a8;
          pppppplVar10 = (undefined8 ******)(local_98 >> 0x38);
        }
        do {
          while( true ) {
            plVar16 = (long *)plVar18[4];
            ppppppuVar6 = (undefined8 ******)plVar18[5];
            if (-1 < (char)*(byte *)((long)plVar18 + 0x37)) {
              plVar16 = plVar18 + 4;
              ppppppuVar6 = (undefined8 ******)(ulong)*(byte *)((long)plVar18 + 0x37);
            }
            ppppppuVar3 = ppppppuVar6;
            if (pppppplVar10 <= ppppppuVar6) {
              ppppppuVar3 = pppppplVar10;
            }
            iVar9 = memcmp(pppppppuVar5,plVar16,(size_t)ppppppuVar3);
            if (iVar9 == 0) break;
            if (-1 < iVar9) goto LAB_00895d9c;
LAB_00895dec:
            plVar18 = (long *)*plVar18;
            plVar16 = plVar17;
            if (plVar18 == (long *)0x0) goto LAB_00895df8;
          }
          plVar16 = plVar18;
          if (pppppplVar10 == ppppppuVar6) break;
          if (pppppplVar10 < ppppppuVar6) goto LAB_00895dec;
LAB_00895d9c:
          plVar18 = (long *)plVar18[1];
          plVar16 = plVar17;
        } while (plVar18 != (long *)0x0);
LAB_00895df8:
        bVar8 = plVar16 != plVar17;
      }
      if ((long)uVar12 < 0) {
        operator_delete(local_a8);
      }
      if (!bVar8) {
        FUN_007bc064(&local_78,auVar20._8_8_ & 0xffffffff);
        FUN_005d3510(&local_a8,PTR_s_level_id_00d522b8);
        local_80 = local_68;
        pppppplStack_88 = pppppplStack_70;
        pppppplStack_70 = (long ******)0x0;
        local_68 = (long ******)0x0;
        local_90 = local_78;
        local_78 = (long *******)0x0;
        local_c0 = param_1;
        FUN_00896cb4(&local_c0,&local_a8,&local_a8);
        if ((long)local_80 < 0) {
          operator_delete(local_90);
        }
        if ((long)local_98 < 0) {
          operator_delete(local_a8);
        }
      }
      FUN_005d3510(&local_a8,PTR_s_tier_flag_00d522a8);
      uVar12 = local_98;
      plVar18 = (long *)*plVar17;
      if (plVar18 == (long *)0x0) {
        bVar8 = false;
      }
      else {
        pppppppuVar5 = local_a8;
        pppppplVar10 = local_a0;
        if (-1 < (long)local_98) {
          pppppppuVar5 = &local_a8;
          pppppplVar10 = (undefined8 ******)(local_98 >> 0x38);
        }
        do {
          while( true ) {
            plVar16 = (long *)plVar18[4];
            ppppppuVar6 = (undefined8 ******)plVar18[5];
            if (-1 < (char)*(byte *)((long)plVar18 + 0x37)) {
              plVar16 = plVar18 + 4;
              ppppppuVar6 = (undefined8 ******)(ulong)*(byte *)((long)plVar18 + 0x37);
            }
            ppppppuVar3 = ppppppuVar6;
            if (pppppplVar10 <= ppppppuVar6) {
              ppppppuVar3 = pppppplVar10;
            }
            iVar9 = memcmp(pppppppuVar5,plVar16,(size_t)ppppppuVar3);
            if (iVar9 == 0) break;
            if (-1 < iVar9) goto LAB_00895eb0;
LAB_00895f00:
            plVar18 = (long *)*plVar18;
            plVar16 = plVar17;
            if (plVar18 == (long *)0x0) goto LAB_00895f0c;
          }
          plVar16 = plVar18;
          if (pppppplVar10 == ppppppuVar6) break;
          if (pppppplVar10 < ppppppuVar6) goto LAB_00895f00;
LAB_00895eb0:
          plVar18 = (long *)plVar18[1];
          plVar16 = plVar17;
        } while (plVar18 != (long *)0x0);
LAB_00895f0c:
        bVar8 = plVar16 != plVar17;
      }
      if ((long)uVar12 < 0) {
        operator_delete(local_a8);
      }
      if (!bVar8) {
        FUN_007bc040(&local_78,auVar20._0_8_ >> 0x20);
        FUN_005d3510(&local_a8,PTR_s_tier_flag_00d522a8);
        local_80 = local_68;
        pppppplStack_88 = pppppplStack_70;
        pppppplStack_70 = (long ******)0x0;
        local_68 = (long ******)0x0;
        local_90 = local_78;
        local_78 = (long *******)0x0;
        local_c0 = param_1;
        FUN_00896cb4(&local_c0,&local_a8,&local_a8);
        if ((long)local_80 < 0) {
          operator_delete(local_90);
        }
        if ((long)local_98 < 0) {
          operator_delete(local_a8);
        }
      }
    }
    FUN_005d3510(&local_a8,PTR_s_tx_mode_00d522c0);
    uVar12 = local_98;
    plVar17 = (long *)(param_3 + 8);
    plVar18 = (long *)*plVar17;
    if (plVar18 == (long *)0x0) {
      bVar8 = false;
    }
    else {
      pppppppuVar5 = local_a8;
      pppppplVar10 = local_a0;
      if (-1 < (long)local_98) {
        pppppppuVar5 = &local_a8;
        pppppplVar10 = (undefined8 ******)(local_98 >> 0x38);
      }
      do {
        while( true ) {
          plVar16 = (long *)plVar18[4];
          ppppppuVar6 = (undefined8 ******)plVar18[5];
          if (-1 < (char)*(byte *)((long)plVar18 + 0x37)) {
            plVar16 = plVar18 + 4;
            ppppppuVar6 = (undefined8 ******)(ulong)*(byte *)((long)plVar18 + 0x37);
          }
          ppppppuVar3 = ppppppuVar6;
          if (pppppplVar10 <= ppppppuVar6) {
            ppppppuVar3 = pppppplVar10;
          }
          iVar9 = memcmp(pppppppuVar5,plVar16,(size_t)ppppppuVar3);
          if (iVar9 == 0) break;
          if (-1 < iVar9) goto LAB_00895fc4;
LAB_00896014:
          plVar18 = (long *)*plVar18;
          plVar16 = plVar17;
          if (plVar18 == (long *)0x0) goto LAB_00896020;
        }
        plVar16 = plVar18;
        if (pppppplVar10 == ppppppuVar6) break;
        if (pppppplVar10 < ppppppuVar6) goto LAB_00896014;
LAB_00895fc4:
        plVar18 = (long *)plVar18[1];
        plVar16 = plVar17;
      } while (plVar18 != (long *)0x0);
LAB_00896020:
      bVar8 = plVar16 != plVar17;
    }
    if ((long)uVar12 < 0) {
      operator_delete(local_a8);
    }
    if (!bVar8) {
      pppppplStack_b8 = (long ******)0x0;
      local_b0 = (long ******)0x0;
      local_c0 = &pppppplStack_b8;
      FUN_00896b3c(&local_78,&local_c0);
      FUN_005d3510(&local_a8,PTR_s_tx_mode_00d522c0);
      local_80 = local_68;
      pppppplStack_88 = pppppplStack_70;
      pppppplStack_70 = (long ******)0x0;
      local_68 = (long ******)0x0;
      local_90 = local_78;
      local_78 = (long *******)0x0;
      local_d8 = param_1;
      FUN_00896cb4(&local_d8,&local_a8,&local_a8);
      if ((long)local_80 < 0) {
        operator_delete(local_90);
      }
      if ((long)local_98 < 0) {
        operator_delete(local_a8);
      }
      local_d8 = (long *******)&local_c0;
      FUN_0060b2cc(&local_d8,pppppplStack_b8);
    }
  }
  return;
}


// ===== 008962e4  FUN_008962e4 =====

uint FUN_008962e4(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 **local_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_38;
  
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*param_1 + 0x10))(&local_b0);
  puVar8 = (undefined1 *)((ulong)&local_b0 | 8);
  puVar7 = (undefined8 *)(param_2 + 8);
  puVar1 = (undefined8 *)*puVar7;
  uVar5 = *(ulong *)(param_2 + 0x10);
  if (-1 < (char)*(byte *)(param_2 + 0x1f)) {
    puVar1 = puVar7;
    uVar5 = (ulong)*(byte *)(param_2 + 0x1f);
  }
  puVar2 = local_a0;
  puVar3 = puStack_a8;
  if (-1 < (long)puStack_98) {
    puVar2 = (undefined1 *)((ulong)puStack_98 >> 0x38);
    puVar3 = puVar8;
  }
  uVar5 = FUN_0061ff84(puVar1,uVar5,puVar3,puVar2);
  if (((uVar5 & 1) != 0) && (*(int *)(param_2 + 0x20) == (int)local_90)) {
    if (((byte)local_80 & *(byte *)(param_2 + 0x30)) == 0) {
      if (*(byte *)(param_2 + 0x30) == (byte)local_80) {
LAB_008963ac:
        if (((byte)local_88 & *(byte *)(param_2 + 0x28)) == 0) {
          if (*(byte *)(param_2 + 0x28) == (byte)local_88) {
LAB_008963d0:
            puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
            local_d0 = &DAT_aaaaaaaaaaaaaaaa;
            local_c0 = &DAT_aaaaaaaaaaaaaaaa;
            FUN_0089516c(&local_d0,puVar7,param_2 + 0x50);
            local_e0 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
            local_f0 = (undefined1 **)&DAT_aaaaaaaaaaaaaaaa;
            FUN_0089516c(&local_f0,puVar8,&local_60);
            iVar6 = *(int *)(param_2 + 0x20);
            if (iVar6 == 1) {
              uVar5 = FUN_006688c8(param_2);
              if ((uVar5 & 1) == 0) {
                iVar6 = *(int *)(param_2 + 0x20);
                goto LAB_00896474;
              }
              uVar4 = FUN_00896500(puVar7,&local_d0,puVar8,&local_f0);
            }
            else {
LAB_00896474:
              if ((iVar6 == 0) && (uVar5 = FUN_0089692c(puVar7,PTR_DAT_00d51fd8), (uVar5 & 1) != 0))
              {
                uVar4 = 1;
              }
              else if (local_c0 == local_e0) {
                uVar4 = FUN_00667cd4(local_d0,(ulong)&local_d0 | 8,local_f0);
              }
              else {
                uVar4 = 0;
              }
            }
            local_38 = (undefined1 *)&local_f0;
            FUN_0060b2cc(&local_38,puStack_e8);
            local_f0 = &local_d0;
            FUN_0060b2cc(&local_f0,puStack_c8);
            goto LAB_0089644c;
          }
        }
        else {
          if (((ulong)local_88 & 1) == 0) {
LAB_008964ec:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                      );
          }
          if (*(int *)(param_2 + 0x24) == local_90._4_4_) goto LAB_008963d0;
        }
      }
    }
    else {
      if (((ulong)local_80 & 1) == 0) goto LAB_008964ec;
      if (*(int *)(param_2 + 0x2c) == local_88._4_4_) goto LAB_008963ac;
    }
  }
  uVar4 = 0;
LAB_0089644c:
  FUN_00668620(&local_b0);
  return uVar4 & 1;
}


// ===== 00896500  FUN_00896500 =====

/* WARNING: Type propagation algorithm not settling */

byte FUN_00896500(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *******pppppppuVar1;
  undefined8 *******__s2;
  ulong uVar2;
  undefined8 *puVar3;
  undefined1 **ppuVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  undefined1 *local_d0;
  ulong uStack_c8;
  byte bStack_b9;
  undefined8 *******local_b8;
  ulong uStack_b0;
  byte bStack_a1;
  undefined8 *******local_a0;
  ulong uStack_98;
  byte bStack_89;
  undefined8 *******local_88;
  ulong uStack_80;
  byte bStack_71;
  undefined8 *******local_70;
  size_t local_68;
  byte bStack_59;
  undefined8 *******local_58;
  size_t local_50;
  byte bStack_41;
  
  FUN_005d3510(&local_88,PTR_DAT_00d51c78);
  uVar7 = uStack_80;
  pppppppuVar1 = local_88;
  if (-1 < (char)bStack_71) {
    uVar7 = (ulong)bStack_71;
    pppppppuVar1 = &local_88;
  }
  uVar2 = param_1[1];
  puVar3 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar3 = param_1;
  }
  uVar7 = FUN_0061ff84(pppppppuVar1,uVar7,puVar3,uVar2);
  if ((uVar7 & 1) == 0) {
    pppppppuVar1 = local_88;
    if (-1 < (char)bStack_71) {
      uStack_80 = (ulong)bStack_71;
      pppppppuVar1 = &local_88;
    }
    uVar7 = param_3[1];
    puVar3 = (undefined8 *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar7 = (ulong)*(byte *)((long)param_3 + 0x17);
      puVar3 = param_3;
    }
    uVar7 = FUN_0061ff84(pppppppuVar1,uStack_80,puVar3,uVar7);
    uVar7 = uVar7 & 0xffffffff;
    if (-1 < (char)bStack_71) goto LAB_00896584;
LAB_00896654:
    operator_delete(local_88);
    if ((uVar7 & 1) != 0) goto LAB_00896588;
LAB_00896668:
    FUN_005d3510(&local_a0,PTR_DAT_00d51ca0);
    uVar7 = uStack_98;
    pppppppuVar1 = local_a0;
    if (-1 < (char)bStack_89) {
      uVar7 = (ulong)bStack_89;
      pppppppuVar1 = &local_a0;
    }
    uVar2 = param_1[1];
    puVar3 = (undefined8 *)*param_1;
    if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
      uVar2 = (ulong)*(byte *)((long)param_1 + 0x17);
      puVar3 = param_1;
    }
    uVar7 = FUN_0061ff84(pppppppuVar1,uVar7,puVar3,uVar2);
    if ((uVar7 & 1) == 0) {
      pppppppuVar1 = local_a0;
      if (-1 < (char)bStack_89) {
        uStack_98 = (ulong)bStack_89;
        pppppppuVar1 = &local_a0;
      }
      uVar7 = param_3[1];
      puVar3 = (undefined8 *)*param_3;
      if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
        uVar7 = (ulong)*(byte *)((long)param_3 + 0x17);
        puVar3 = param_3;
      }
      uVar7 = FUN_0061ff84(pppppppuVar1,uStack_98,puVar3,uVar7);
      uVar7 = uVar7 & 0xffffffff;
    }
    else {
      uVar7 = 1;
    }
    if ((char)bStack_89 < '\0') {
      operator_delete(local_a0);
    }
    if ((uVar7 & 1) != 0) {
      bVar5 = FUN_007bbe84(param_2,param_4);
      goto LAB_00896904;
    }
    FUN_005d3510(&local_b8,PTR_DAT_00d51bd8);
    uVar7 = uStack_b0;
    pppppppuVar1 = local_b8;
    if (-1 < (char)bStack_a1) {
      uVar7 = (ulong)bStack_a1;
      pppppppuVar1 = &local_b8;
    }
    uVar2 = param_1[1];
    puVar3 = (undefined8 *)*param_1;
    if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
      uVar2 = (ulong)*(byte *)((long)param_1 + 0x17);
      puVar3 = param_1;
    }
    uVar7 = FUN_0061ff84(pppppppuVar1,uVar7,puVar3,uVar2);
    if ((uVar7 & 1) == 0) {
      pppppppuVar1 = local_b8;
      if (-1 < (char)bStack_a1) {
        uStack_b0 = (ulong)bStack_a1;
        pppppppuVar1 = &local_b8;
      }
      uVar7 = param_3[1];
      puVar3 = (undefined8 *)*param_3;
      if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
        uVar7 = (ulong)*(byte *)((long)param_3 + 0x17);
        puVar3 = param_3;
      }
      uVar7 = FUN_0061ff84(pppppppuVar1,uStack_b0,puVar3,uVar7);
      uVar7 = uVar7 & 0xffffffff;
    }
    else {
      uVar7 = 1;
    }
    if ((char)bStack_a1 < '\0') {
      operator_delete(local_b8);
    }
    if ((uVar7 & 1) != 0) {
      bVar5 = FUN_007b8464(param_2,param_4);
      goto LAB_00896904;
    }
    FUN_005d3510(&local_d0,PTR_DAT_00d51c90);
    uVar7 = uStack_c8;
    ppuVar4 = (undefined1 **)local_d0;
    if (-1 < (char)bStack_b9) {
      uVar7 = (ulong)bStack_b9;
      ppuVar4 = &local_d0;
    }
    uVar2 = param_1[1];
    puVar3 = (undefined8 *)*param_1;
    if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
      uVar2 = (ulong)*(byte *)((long)param_1 + 0x17);
      puVar3 = param_1;
    }
    uVar7 = FUN_0061ff84(ppuVar4,uVar7,puVar3,uVar2);
    if ((uVar7 & 1) == 0) {
      ppuVar4 = (undefined1 **)local_d0;
      if (-1 < (char)bStack_b9) {
        uStack_c8 = (ulong)bStack_b9;
        ppuVar4 = &local_d0;
      }
      uVar7 = param_3[1];
      puVar3 = (undefined8 *)*param_3;
      if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
        uVar7 = (ulong)*(byte *)((long)param_3 + 0x17);
        puVar3 = param_3;
      }
      uVar7 = FUN_0061ff84(ppuVar4,uStack_c8,puVar3,uVar7);
      uVar7 = uVar7 & 0xffffffff;
    }
    else {
      uVar7 = 1;
    }
    if ((char)bStack_b9 < '\0') {
      operator_delete(local_d0);
    }
    if ((uVar7 & 1) == 0) {
      bVar5 = 1;
      goto LAB_00896904;
    }
    uVar7 = FUN_007bc544(param_2,param_4);
    if (((uVar7 & 1) != 0) && (uVar7 = FUN_007bc5a0(param_2,param_4), (uVar7 & 1) != 0)) {
      bVar5 = FUN_00896e34(param_2,param_4);
      goto LAB_00896904;
    }
  }
  else {
    uVar7 = 1;
    if ((char)bStack_71 < '\0') goto LAB_00896654;
LAB_00896584:
    if ((uVar7 & 1) == 0) goto LAB_00896668;
LAB_00896588:
    uVar7 = FUN_007b6824(param_2,param_4);
    if ((uVar7 & 1) != 0) {
      FUN_008969c4(&local_58,param_2);
      FUN_008969c4(&local_70,param_4);
      uVar8 = (uint)(char)bStack_41;
      if (-1 < (int)uVar8) {
        local_50 = (ulong)bStack_41;
      }
      if (-1 < (char)bStack_59) {
        local_68 = (ulong)bStack_59;
      }
      if (local_50 == local_68) {
        pppppppuVar1 = local_58;
        if (-1 < (int)uVar8) {
          pppppppuVar1 = &local_58;
        }
        __s2 = local_70;
        if (-1 < (char)bStack_59) {
          __s2 = &local_70;
        }
        iVar6 = memcmp(pppppppuVar1,__s2,local_50);
        bVar5 = iVar6 == 0;
      }
      else {
        bVar5 = false;
      }
      if ((char)bStack_59 < '\0') {
        operator_delete(local_70);
        uVar8 = (uint)bStack_41;
      }
      if ((uVar8 >> 7 & 1) != 0) {
        operator_delete(local_58);
      }
      goto LAB_00896904;
    }
  }
  bVar5 = 0;
LAB_00896904:
  return bVar5 & 1;
}


// ===== 0089692c  FUN_0089692c =====

bool FUN_0089692c(undefined8 *param_1,char *param_2)

{
  int iVar1;
  size_t __n;
  
  if (param_2 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string:3571: libc++ Hardening assertion __rhs != nullptr failed: operator==(basic_string, char*): received nullptr\n"
              );
  }
  __n = strlen(param_2);
  if ((long)*(char *)((long)param_1 + 0x17) < 0) {
    if (__n == param_1[1]) {
      if (__n == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_005f5590();
      }
      param_1 = (undefined8 *)*param_1;
      goto LAB_00896980;
    }
  }
  else if (__n == (long)*(char *)((long)param_1 + 0x17)) {
LAB_00896980:
    iVar1 = memcmp(param_1,param_2,__n);
    return iVar1 == 0;
  }
  return false;
}


// ===== 008969c4  FUN_008969c4 =====

void FUN_008969c4(long *param_1,long param_2)

{
  ulong uVar1;
  long *__s2;
  size_t __n;
  undefined8 *****__s1;
  ulong uVar2;
  int iVar3;
  void *pvVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  void *local_70;
  long lStack_68;
  undefined7 local_60;
  char cStack_59;
  undefined8 ****local_58;
  ulong uStack_50;
  byte bStack_41;
  
  FUN_005d3510(&local_58,PTR_s_packetization_mode_00d51c88);
  FUN_005d3510(&local_70,&DAT_0019cb7e);
  plVar5 = *(long **)(param_2 + 8);
  if (plVar5 != (long *)0x0) {
    __s1 = (undefined8 *****)local_58;
    uVar1 = uStack_50;
    if (-1 < (char)bStack_41) {
      __s1 = &local_58;
      uVar1 = (ulong)bStack_41;
    }
    do {
      while( true ) {
        __s2 = (long *)plVar5[4];
        uVar2 = plVar5[5];
        if (-1 < (char)*(byte *)((long)plVar5 + 0x37)) {
          __s2 = plVar5 + 4;
          uVar2 = (ulong)*(byte *)((long)plVar5 + 0x37);
        }
        __n = uVar2;
        if (uVar1 <= uVar2) {
          __n = uVar1;
        }
        iVar3 = memcmp(__s1,__s2,__n);
        if (iVar3 != 0) break;
        if (uVar1 == uVar2) {
          if ((long *)(param_2 + 8) != plVar5) {
            if (*(char *)((long)plVar5 + 0x4f) < '\0') {
              lStack_68 = plVar5[8];
              pvVar4 = (void *)plVar5[7];
              goto LAB_00896b20;
            }
            lVar7 = plVar5[8];
            lVar6 = plVar5[7];
            param_1[2] = plVar5[9];
            param_1[1] = lVar7;
            *param_1 = lVar6;
            if (-1 < cStack_59) goto LAB_00896ae8;
            goto LAB_00896ad8;
          }
          goto LAB_00896ab8;
        }
        if (uVar2 <= uVar1) goto LAB_00896a30;
LAB_00896a80:
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) goto LAB_00896ab8;
      }
      if (iVar3 < 0) goto LAB_00896a80;
LAB_00896a30:
      plVar5 = (long *)plVar5[1];
    } while (plVar5 != (long *)0x0);
  }
LAB_00896ab8:
  pvVar4 = local_70;
  if (cStack_59 < '\0') {
LAB_00896b20:
    FUN_005478d8(param_1,pvVar4,lStack_68);
  }
  else {
    param_1[1] = lStack_68;
    *param_1 = (long)local_70;
    param_1[2] = CONCAT17(cStack_59,local_60);
  }
  if (cStack_59 < '\0') {
LAB_00896ad8:
    operator_delete(local_70);
  }
LAB_00896ae8:
  if ((char)bStack_41 < '\0') {
    operator_delete(local_58);
  }
  return;
}


// ===== 00896b3c  FUN_00896b3c =====

void FUN_00896b3c(long *param_1,long param_2)

{
  ulong uVar1;
  long *__s2;
  size_t __n;
  undefined8 *****__s1;
  ulong uVar2;
  int iVar3;
  void *pvVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  void *local_70;
  long lStack_68;
  undefined7 local_60;
  char cStack_59;
  undefined8 ****local_58;
  ulong uStack_50;
  byte bStack_41;
  
  FUN_005d3510(&local_58,PTR_s_tx_mode_00d522c0);
  FUN_005d3510(&local_70,&DAT_001f02b8);
  plVar5 = *(long **)(param_2 + 8);
  if (plVar5 != (long *)0x0) {
    __s1 = (undefined8 *****)local_58;
    uVar1 = uStack_50;
    if (-1 < (char)bStack_41) {
      __s1 = &local_58;
      uVar1 = (ulong)bStack_41;
    }
    do {
      while( true ) {
        __s2 = (long *)plVar5[4];
        uVar2 = plVar5[5];
        if (-1 < (char)*(byte *)((long)plVar5 + 0x37)) {
          __s2 = plVar5 + 4;
          uVar2 = (ulong)*(byte *)((long)plVar5 + 0x37);
        }
        __n = uVar2;
        if (uVar1 <= uVar2) {
          __n = uVar1;
        }
        iVar3 = memcmp(__s1,__s2,__n);
        if (iVar3 != 0) break;
        if (uVar1 == uVar2) {
          if ((long *)(param_2 + 8) != plVar5) {
            if (*(char *)((long)plVar5 + 0x4f) < '\0') {
              lStack_68 = plVar5[8];
              pvVar4 = (void *)plVar5[7];
              goto LAB_00896c98;
            }
            lVar7 = plVar5[8];
            lVar6 = plVar5[7];
            param_1[2] = plVar5[9];
            param_1[1] = lVar7;
            *param_1 = lVar6;
            if (-1 < cStack_59) goto LAB_00896c60;
            goto LAB_00896c50;
          }
          goto LAB_00896c30;
        }
        if (uVar2 <= uVar1) goto LAB_00896ba8;
LAB_00896bf8:
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) goto LAB_00896c30;
      }
      if (iVar3 < 0) goto LAB_00896bf8;
LAB_00896ba8:
      plVar5 = (long *)plVar5[1];
    } while (plVar5 != (long *)0x0);
  }
LAB_00896c30:
  pvVar4 = local_70;
  if (cStack_59 < '\0') {
LAB_00896c98:
    FUN_005478d8(param_1,pvVar4,lStack_68);
  }
  else {
    param_1[1] = lStack_68;
    *param_1 = (long)local_70;
    param_1[2] = CONCAT17(cStack_59,local_60);
  }
  if (cStack_59 < '\0') {
LAB_00896c50:
    operator_delete(local_70);
  }
LAB_00896c60:
  if ((char)bStack_41 < '\0') {
    operator_delete(local_58);
  }
  return;
}


// ===== 00896cb4  FUN_00896cb4 =====

undefined1  [16] FUN_00896cb4(undefined8 *param_1,undefined8 *param_2,long *param_3)

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
          goto LAB_00896df8;
        }
        if (uVar2 <= uVar1) goto LAB_00896cfc;
LAB_00896d4c:
        plVar6 = (long *)*plVar4;
        plVar10 = plVar4;
        if ((long *)*plVar4 == (long *)0x0) goto LAB_00896d68;
      }
      if (iVar3 < 0) goto LAB_00896d4c;
LAB_00896cfc:
      plVar6 = (long *)plVar4[1];
    } while ((long *)plVar4[1] != (long *)0x0);
    plVar10 = plVar4 + 1;
  }
LAB_00896d68:
  plVar4 = (long *)operator_new(0x50);
  if (plVar4 != (long *)0x0) {
    plVar6 = plVar4 + 4;
    *plVar4 = 0;
    if (plVar6 != (long *)0x0) {
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        FUN_005478d8(plVar6,*param_3,param_3[1]);
      }
      else {
        lVar11 = *param_3;
        lVar7 = param_3[2];
        plVar4[5] = param_3[1];
        *plVar6 = lVar11;
        plVar4[6] = lVar7;
      }
      lVar12 = param_3[4];
      lVar11 = param_3[3];
      lVar7 = param_3[5];
      param_3[4] = 0;
      param_3[5] = 0;
      plVar4[8] = lVar12;
      plVar4[7] = lVar11;
      plVar4[9] = lVar7;
      param_3[3] = 0;
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
LAB_00896df8:
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


// ===== 00896e34  FUN_00896e34 =====

uint FUN_00896e34(undefined8 param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  undefined1 **ppuVar2;
  uint uVar3;
  undefined1 *local_60;
  ulong uStack_58;
  byte bStack_49;
  undefined8 **local_48;
  ulong uStack_40;
  byte bStack_31;
  
  FUN_00896b3c(&local_48);
  pppuVar1 = (undefined8 ***)local_48;
  if (-1 < (char)bStack_31) {
    pppuVar1 = &local_48;
    uStack_40 = (ulong)bStack_31;
  }
  FUN_00896b3c(&local_60,param_2);
  ppuVar2 = (undefined1 **)local_60;
  if (-1 < (char)bStack_49) {
    uStack_58 = (ulong)bStack_49;
    ppuVar2 = &local_60;
  }
  uVar3 = FUN_0061ff84(pppuVar1,uStack_40,ppuVar2,uStack_58);
  if ((char)bStack_49 < '\0') {
    operator_delete(local_60);
  }
  if ((char)bStack_31 < '\0') {
    operator_delete(local_48);
  }
  return uVar3 & 1;
}


// ===== 00896f04  FUN_00896f04 =====

bool FUN_00896f04(undefined8 param_1,int param_2,int param_3)

{
  return param_2 == param_3;
}


// ===== 00896f14  FUN_00896f14 =====

undefined8 FUN_00896f14(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = param_1[1];
  lVar1 = FUN_008927d0(*param_1);
  lVar2 = FUN_008927d0(uVar3,param_3);
  if ((lVar1 != 0) && (lVar2 != 0)) {
    uVar3 = thunk_FUN_00894770(lVar1,lVar2);
    return uVar3;
  }
  return 0;
}


// ===== 00896f84  FUN_00896f84 =====

int FUN_00896f84(pthread_mutex_t *param_1)

{
  int iVar1;
  undefined1 *local_8;
  
  local_8 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_8);
  pthread_mutex_init(param_1,(pthread_mutexattr_t *)&local_8);
  iVar1 = pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_8);
  *(undefined8 *)((long)param_1 + 0x30) = 0;
  *(undefined8 *)((long)param_1 + 0x38) = 0;
  param_1[1].__align = (long)param_1 + 0x30;
  return iVar1;
}


// ===== 00896fd4  FUN_00896fd4 =====

int FUN_00896fd4(pthread_mutex_t *param_1)

{
  int iVar1;
  pthread_mutex_t *local_8;
  
  local_8 = param_1 + 1;
  FUN_0060a5d8(&local_8,*(undefined8 *)((long)param_1 + 0x30));
  iVar1 = pthread_mutex_destroy(param_1);
  return iVar1;
}


// ===== 00897014  FUN_00897014 =====

undefined4 FUN_00897014(pthread_mutex_t *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 auVar4 [16];
  undefined4 local_24;
  ulong uVar3;
  
  uVar2 = pthread_mutex_lock(param_1);
  uVar3 = (ulong)uVar2;
  if (*(ulong *)((long)param_1 + 0x38) < 0xfffffffe) {
    do {
      local_24 = FUN_008368dc(uVar3);
      auVar4 = FUN_00897314(0,param_1 + 1,param_1 + 1,&local_24);
      uVar3 = auVar4._0_8_;
    } while ((auVar4 & (undefined1  [16])0x1) == (undefined1  [16])0x0);
    uVar1 = *(undefined4 *)(uVar3 + 0x1c);
    pthread_mutex_unlock(param_1);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../rtc_base/unique_id_generator.cc",0x25,
               "known_ids_.size() < std::numeric_limits<uint32_t>::max() - 1",&DAT_00214eb8,
               *(ulong *)((long)param_1 + 0x38),0xfffffffe);
}


// ===== 008970a8  FUN_008970a8 =====

void FUN_008970a8(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined4 **)(param_1 + 2) = param_1 + 4;
  return;
}


// ===== 008970c4  FUN_008970c4 =====

uint FUN_008970c4(long param_1,undefined8 *param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint extraout_w1;
  ulong uVar4;
  undefined1 auVar5 [12];
  undefined8 local_58;
  ulong uStack_50;
  undefined8 local_48;
  
  if (0x7ffffffffffffff6 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_3 < 0x17) {
    local_48 = CONCAT17((char)param_3,(undefined7)local_48);
    puVar2 = &local_58;
  }
  else {
    uVar4 = (param_3 & 0x7ffffffffffffff8) + 8;
    uVar1 = 0x19;
    if (uVar4 != 0x18) {
      uVar1 = uVar4;
    }
    puVar2 = (undefined8 *)operator_new(uVar1);
    local_48 = uVar1 | 0x8000000000000000;
    local_58 = puVar2;
    uStack_50 = param_3;
  }
  if ((undefined8 *)((long)puVar2 + param_3) < puVar2) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((puVar2 <= param_2) && (param_2 < (undefined8 *)((long)puVar2 + param_3))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memmove(puVar2,param_2,param_3);
  *(undefined1 *)((long)puVar2 + param_3) = 0;
  uVar4 = uStack_50;
  puVar2 = local_58;
  if (-1 < (long)local_48) {
    uVar4 = local_48 >> 0x38;
    puVar2 = &local_58;
  }
  auVar5 = FUN_00675500(puVar2,uVar4,10);
  uVar4 = auVar5._0_8_ & 0xffffffff | 0x100000000;
  if ((auVar5._8_4_ & (uint)(auVar5._0_8_ >> 0x20 == 0)) == 0) {
    uVar4 = 0;
  }
  if ((long)local_48 < 0) {
    operator_delete(local_58);
  }
  if (uVar4 >> 0x20 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = (ulong)local_58 >> 0x20;
    local_58 = (undefined8 *)CONCAT44((int)uVar1,(int)uVar4);
    FUN_0089740c(0,param_1 + 8,param_1 + 8,&local_58);
    uVar3 = extraout_w1;
  }
  return uVar3 & 1;
}


// ===== 00897240  FUN_00897240 =====

void FUN_00897240(long param_1)

{
  long local_18;
  
  local_18 = param_1 + 8;
  FUN_0060a5d8(&local_18,*(undefined8 *)(param_1 + 0x10));
  return;
}


// ===== 00897274  FUN_00897274 =====

void FUN_00897274(undefined8 *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  int local_24;
  
  do {
    iVar1 = *param_2;
    if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../rtc_base/unique_id_generator.h",0x8b,
                   "counter_ < std::numeric_limits<TIntegral>::max()",&DAT_00223e43,0xffffffff,
                   0xffffffff);
    }
    *param_2 = iVar1 + 1;
    local_24 = iVar1;
    auVar3 = FUN_00897314(0,param_2 + 2,param_2 + 2,&local_24);
  } while ((auVar3 & (undefined1  [16])0x1) == (undefined1  [16])0x0);
  uVar2 = *(undefined4 *)(auVar3._0_8_ + 0x1c);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_005fa03c(param_1,0x16,uVar2);
  return;
}


// ===== 00897314  FUN_00897314 =====

undefined1  [16] FUN_00897314(undefined8 param_1,long *param_2,undefined8 param_3,uint *param_4)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  
  plVar4 = param_2 + 1;
  plVar6 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    plVar2 = (long *)*plVar4;
    do {
      while (plVar3 = plVar2, plVar4 = plVar3, *param_4 < *(uint *)((long)plVar3 + 0x1c)) {
        plVar2 = (long *)*plVar3;
        plVar6 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_0089737c;
      }
      if (*param_4 == *(uint *)((long)plVar3 + 0x1c)) {
        uVar5 = 0;
        goto LAB_008973dc;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar6 = plVar3 + 1;
  }
LAB_0089737c:
  plVar3 = (long *)operator_new(0x20);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar1 = *param_4;
  *plVar3 = 0;
  plVar3[1] = 0;
  plVar3[2] = (long)plVar4;
  *(uint *)((long)plVar3 + 0x1c) = uVar1;
  *plVar6 = (long)plVar3;
  plVar4 = plVar3;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar4 = (long *)*plVar6;
  }
  FUN_005d5b94(param_2[1],plVar4);
  uVar5 = 1;
  param_2[2] = param_2[2] + 1;
LAB_008973dc:
  auVar7._8_8_ = uVar5;
  auVar7._0_8_ = plVar3;
  return auVar7;
}


// ===== 0089740c  FUN_0089740c =====

undefined1  [16] FUN_0089740c(undefined8 param_1,long *param_2,undefined8 param_3,uint *param_4)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  
  plVar4 = param_2 + 1;
  plVar6 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    plVar2 = (long *)*plVar4;
    do {
      while (plVar3 = plVar2, plVar4 = plVar3, *param_4 < *(uint *)((long)plVar3 + 0x1c)) {
        plVar2 = (long *)*plVar3;
        plVar6 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_00897474;
      }
      if (*param_4 == *(uint *)((long)plVar3 + 0x1c)) {
        uVar5 = 0;
        goto LAB_008974d4;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar6 = plVar3 + 1;
  }
LAB_00897474:
  plVar3 = (long *)operator_new(0x20);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar1 = *param_4;
  *plVar3 = 0;
  plVar3[1] = 0;
  plVar3[2] = (long)plVar4;
  *(uint *)((long)plVar3 + 0x1c) = uVar1;
  *plVar6 = (long)plVar3;
  plVar4 = plVar3;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar4 = (long *)*plVar6;
  }
  FUN_005d5b94(param_2[1],plVar4);
  uVar5 = 1;
  param_2[2] = param_2[2] + 1;
LAB_008974d4:
  auVar7._8_8_ = uVar5;
  auVar7._0_8_ = plVar3;
  return auVar7;
}


// ===== 00897504  FUN_00897504 =====

void FUN_00897504(undefined8 *param_1)

{
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined2 *)((long)param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  return;
}


// ===== 00897538  FUN_00897538 =====

void FUN_00897538(long param_1)

{
  if ((*(char *)(param_1 + 0x40) == '\x01') && (*(char *)(param_1 + 0x3f) < '\0')) {
    operator_delete(*(void **)(param_1 + 0x28));
    return;
  }
  return;
}


// ===== 00897568  FUN_00897568 =====

void FUN_00897568(undefined2 *param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  
  if (*(char *)((long)param_2 + 1) == '\x01') {
    *param_1 = *param_2;
  }
  if (*(char *)((long)param_2 + 3) == '\x01') {
    param_1[1] = param_2[1];
  }
  if (*(char *)((long)param_2 + 5) == '\x01') {
    param_1[2] = param_2[2];
  }
  if (*(char *)((long)param_2 + 7) == '\x01') {
    param_1[3] = param_2[3];
  }
  if (*(char *)((long)param_2 + 9) == '\x01') {
    param_1[4] = param_2[4];
  }
  if (*(char *)(param_2 + 8) == '\x01') {
    uVar1 = *(undefined4 *)(param_2 + 6);
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 6) = uVar1;
  }
  if (*(char *)((long)param_2 + 0x15) == '\x01') {
    param_1[10] = param_2[10];
  }
  if (*(char *)(param_2 + 0xe) == '\x01') {
    uVar1 = *(undefined4 *)(param_2 + 0xc);
    *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
  }
  if (*(char *)((long)param_2 + 0x21) == '\x01') {
    param_1[0x10] = param_2[0x10];
  }
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_005e7520(param_1 + 0x14,param_2 + 0x14);
  }
  if (*(char *)((long)param_2 + 0x49) == '\x01') {
    param_1[0x24] = param_2[0x24];
  }
  return;
}


// ===== 00897680  FUN_00897680 =====

void FUN_00897680(char *param_1,undefined1 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  char *__src;
  undefined8 uVar4;
  size_t __n;
  char *__dest;
  char *local_460;
  undefined1 *puStack_458;
  undefined1 *local_450;
  undefined1 auStack_448 [1024];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  memset(auStack_448,0xaa,0x400);
  local_450 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_458 = &DAT_aaaaaaaaaaaaaaaa;
  local_460 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00622830(&local_460,auStack_448,0x400);
  FUN_006228b0(&local_460,"AudioOptions {",0xe);
  if (param_2[1] == '\x01') {
    uVar4 = FUN_006228b0(&local_460,&DAT_001edd41,3);
    uVar4 = FUN_006228b0(uVar4,&DAT_001c4dc3,2);
    if ((param_2[1] & 1) == 0) goto LAB_00897ae0;
    uVar4 = FUN_00622910(uVar4,*param_2);
    FUN_006228b0(uVar4,&DAT_001e1644,2);
  }
  if (param_2[3] == '\x01') {
    uVar4 = FUN_006228b0(&local_460,&DAT_001c36c4,3);
    uVar4 = FUN_006228b0(uVar4,&DAT_001c4dc3,2);
    if ((param_2[3] & 1) == 0) goto LAB_00897ae0;
    uVar4 = FUN_00622910(uVar4,param_2[2]);
    FUN_006228b0(uVar4,&DAT_001e1644,2);
  }
  if (param_2[5] == '\x01') {
    uVar4 = FUN_006228b0(&local_460,&DAT_001c36c8,2);
    uVar4 = FUN_006228b0(uVar4,&DAT_001c4dc3,2);
    if ((param_2[5] & 1) == 0) goto LAB_00897ae0;
    uVar4 = FUN_00622910(uVar4,param_2[4]);
    FUN_006228b0(uVar4,&DAT_001e1644,2);
  }
  if (param_2[7] == '\x01') {
    uVar4 = FUN_006228b0(&local_460,&DAT_001a9b3b,2);
    uVar4 = FUN_006228b0(uVar4,&DAT_001c4dc3,2);
    if ((param_2[7] & 1) == 0) goto LAB_00897ae0;
    uVar4 = FUN_00622910(uVar4,param_2[6]);
    FUN_006228b0(uVar4,&DAT_001e1644,2);
  }
  if (param_2[9] == '\x01') {
    uVar4 = FUN_006228b0(&local_460,&DAT_0019b4cd,4);
    uVar4 = FUN_006228b0(uVar4,&DAT_001c4dc3,2);
    if ((param_2[9] & 1) == 0) goto LAB_00897ae0;
    uVar4 = FUN_00622910(uVar4,param_2[8]);
    FUN_006228b0(uVar4,&DAT_001e1644,2);
  }
  if (param_2[0x10] == '\x01') {
    uVar4 = FUN_006228b0(&local_460,"audio_jitter_buffer_max_packets",0x1f);
    uVar4 = FUN_006228b0(uVar4,&DAT_001c4dc3,2);
    if ((param_2[0x10] & 1) == 0) goto LAB_00897ae0;
    uVar4 = FUN_00622910(uVar4,*(undefined4 *)(param_2 + 0xc));
    FUN_006228b0(uVar4,&DAT_001e1644,2);
  }
  if (param_2[0x15] == '\x01') {
    uVar4 = FUN_006228b0(&local_460,"audio_jitter_buffer_fast_accelerate",0x23);
    uVar4 = FUN_006228b0(uVar4,&DAT_001c4dc3,2);
    if ((param_2[0x15] & 1) == 0) goto LAB_00897ae0;
    uVar4 = FUN_00622910(uVar4,param_2[0x14]);
    FUN_006228b0(uVar4,&DAT_001e1644,2);
  }
  if (param_2[0x1c] == '\x01') {
    uVar4 = FUN_006228b0(&local_460,"audio_jitter_buffer_min_delay_ms",0x20);
    uVar4 = FUN_006228b0(uVar4,&DAT_001c4dc3,2);
    if ((param_2[0x1c] & 1) == 0) goto LAB_00897ae0;
    uVar4 = FUN_00622910(uVar4,*(undefined4 *)(param_2 + 0x18));
    FUN_006228b0(uVar4,&DAT_001e1644,2);
  }
  if (param_2[0x21] == '\x01') {
    uVar4 = FUN_006228b0(&local_460,"audio_network_adaptor",0x15);
    uVar4 = FUN_006228b0(uVar4,&DAT_001c4dc3,2);
    if ((param_2[0x21] & 1) == 0) goto LAB_00897ae0;
    uVar4 = FUN_00622910(uVar4,param_2[0x20]);
    FUN_006228b0(uVar4,&DAT_001e1644,2);
  }
  if (param_2[0x49] == '\x01') {
    uVar4 = FUN_006228b0(&local_460,"init_recording_on_send",0x16);
    uVar4 = FUN_006228b0(uVar4,&DAT_001c4dc3,2);
    if ((param_2[0x49] & 1) == 0) {
LAB_00897ae0:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    uVar4 = FUN_00622910(uVar4,param_2[0x48]);
    FUN_006228b0(uVar4,&DAT_001e1644,2);
  }
  FUN_006228b0(&local_460,&DAT_001b0cbb,1);
  __src = local_460;
  if (local_460 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string:1063: libc++ Hardening assertion __s != nullptr failed: basic_string(const char*) detected nullptr\n"
              );
  }
  __n = strlen(local_460);
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
      if ((__dest <= __src) && (__src < __dest + __n)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                  );
      }
      memmove(__dest,__src,__n);
      __dest[__n] = '\0';
      if (*(long *)(lVar3 + 0x28) == local_48) {
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


// ===== 00897b38  FUN_00897b38 =====

void FUN_00897b38(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 2) = 0xffffffffffffffff;
  param_1[4] = 0xffffffff;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  param_1[0xc] = 0xffffffff;
  *(undefined8 *)(param_1 + 0xe) = 0xffffffffffffffff;
  FUN_007b6400(param_1 + 0x10);
  *(undefined2 *)(param_1 + 0x1a) = 0;
  return;
}


// ===== 00897b90  FUN_00897b90 =====

void FUN_00897b90(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 2) = 0xffffffffffffffff;
  param_1[4] = 0xffffffff;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  param_1[0xc] = 0xffffffff;
  *(undefined8 *)(param_1 + 0xe) = 0xffffffffffffffff;
  FUN_007b6400(param_1 + 0x10);
  *(undefined2 *)(param_1 + 0x1a) = 0;
  return;
}


// ===== 00897be8  FUN_00897be8 =====

void FUN_00897be8(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  ulong __n;
  void *__dest;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  uVar1 = *(undefined4 *)(param_2 + 2);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 2) = uVar1;
  pvVar3 = (void *)param_2[3];
  __n = param_2[4] - (long)pvVar3;
  if (__n != 0) {
    if ((long)__n < 0) {
      lVar2 = FUN_006e2dc8();
      FUN_007b643c(lVar2 + 0x40);
      pvVar3 = *(void **)(lVar2 + 0x18);
      if (pvVar3 == (void *)0x0) {
        return;
      }
      if ((ulong)(*(long *)(lVar2 + 0x20) - (long)pvVar3) <= *(long *)(lVar2 + 0x20) - 1U) {
        *(void **)(lVar2 + 0x20) = pvVar3;
        operator_delete(pvVar3);
        return;
      }
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    __dest = operator_new(__n);
    param_1[3] = __dest;
    param_1[4] = __dest;
    param_1[5] = (long)__dest + __n;
    memcpy(__dest,pvVar3,__n);
    param_1[4] = (long)__dest + __n;
  }
  uVar4 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar4;
  FUN_007b6424(param_1 + 8,param_2 + 8);
  *(undefined2 *)(param_1 + 0xd) = *(undefined2 *)(param_2 + 0xd);
  return;
}


// ===== 00897c8c  FUN_00897c8c =====

void FUN_00897c8c(long param_1)

{
  void *pvVar1;
  
  FUN_007b643c(param_1 + 0x40);
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if ((ulong)(*(long *)(param_1 + 0x20) - (long)pvVar1) <= *(long *)(param_1 + 0x20) - 1U) {
    *(void **)(param_1 + 0x20) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00897d04  FUN_00897d04 =====

void FUN_00897d04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3b1b8;
  FUN_007b5d24(param_1 + 0x16);
  FUN_007b5d24(param_1 + 0x12);
  FUN_007b5d24(param_1 + 0xe);
  FUN_007b5d24(param_1 + 10);
  (*(code *)param_1[8])(0,param_1 + 6,param_1 + 6);
  FUN_007b5d24(param_1 + 1);
  return;
}


// ===== 00897d68  FUN_00897d68 =====

void FUN_00897d68(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x897d70);
  (*pcVar1)();
}


// ===== 00897d70  FUN_00897d70 =====

void FUN_00897d70(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *local_48;
  code *pcStack_40;
  code *local_38;
  
  local_48 = (undefined8 *)operator_new(0x20);
  uVar2 = *param_3;
  uVar4 = param_3[3];
  uVar3 = param_3[2];
  lVar1 = param_3[3];
  local_48[1] = param_3[1];
  *local_48 = uVar2;
  local_48[3] = uVar4;
  local_48[2] = uVar3;
  if (*(long *)(lVar1 + 8) != 0) {
    param_3[2] = 0;
    param_3[3] = &DAT_001fbc50;
  }
  pcStack_40 = FUN_00898018;
  local_38 = FUN_00898028;
  FUN_007b5b08(param_1 + 8,param_2,&local_48);
  return;
}


// ===== 00897dfc  FUN_00897dfc =====

void FUN_00897dfc(long param_1)

{
  FUN_007b5df8(param_1 + 8);
  return;
}


// ===== 00897e08  FUN_00897e08 =====

void FUN_00897e08(long param_1,long param_2)

{
  if (*(long *)(param_1 + 0x48) == 0) {
    (**(code **)(param_1 + 0x40))(0,param_1 + 0x30,param_1 + 0x30);
    *(code **)(param_1 + 0x40) = FUN_00433984;
    *(undefined8 *)(param_1 + 0x48) = 0;
    (**(code **)(param_2 + 0x10))(1,param_2,param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x18);
    *(code **)(param_2 + 0x10) = FUN_00433984;
    *(undefined8 *)(param_2 + 0x18) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../rtc_base/async_packet_socket.cc",0x3a,"!received_packet_callback_",
               &DAT_001f5fa0);
}


// ===== 00897ea8  FUN_00897ea8 =====

void FUN_00897ea8(long param_1)

{
  (**(code **)(param_1 + 0x40))(0,param_1 + 0x30,param_1 + 0x30);
  *(code **)(param_1 + 0x40) = FUN_00433984;
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}


// ===== 00897eec  FUN_00897eec =====

void FUN_00897eec(long param_1,undefined8 param_2)

{
  if (*(code **)(param_1 + 0x48) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00897f08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x48))(param_1 + 0x30,param_1,param_2);
    return;
  }
  return;
}


// ===== 00897f10  FUN_00897f10 =====

void FUN_00897f10(long param_1,undefined8 param_2,long param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *local_48;
  code *pcStack_40;
  code *local_38;
  
  pvVar1 = operator_new(0x20);
  (**(code **)(param_3 + 0x10))(1,param_3,pvVar1);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  *(code **)(param_3 + 0x10) = FUN_00433984;
  *(undefined8 *)(param_3 + 0x18) = 0;
  pcStack_40 = FUN_00898068;
  *(undefined8 *)((long)pvVar1 + 0x18) = uVar3;
  *(undefined8 *)((long)pvVar1 + 0x10) = uVar2;
  local_38 = FUN_00898078;
  local_48 = pvVar1;
  FUN_007b5b08(param_1 + 0x70,param_2,&local_48);
  return;
}


// ===== 00897fa8  FUN_00897fa8 =====

void FUN_00897fa8(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  void *local_68 [2];
  char cStack_51;
  
  *(undefined8 *)(param_3 + 0x10) = param_1;
  (**(code **)(*param_2 + 0x10))(local_68,param_2);
  FUN_007e8ea8(local_68);
  iVar1 = FUN_007e9c6c();
  *(long *)(param_3 + 0x20) = (long)iVar1;
  if (cStack_51 < '\0') {
    operator_delete(local_68[0]);
  }
  return;
}


// ===== 00898018  FUN_00898018 =====

void FUN_00898018(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00898024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}


// ===== 00898028  FUN_00898028 =====

void FUN_00898028(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  if (*(code **)(param_1[3] + 8) != (code *)0x0) {
    (**(code **)(param_1[3] + 8))(*param_1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00898068  FUN_00898068 =====

void FUN_00898068(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00898074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}


// ===== 00898078  FUN_00898078 =====

void FUN_00898078(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  (**(code **)((long)pvVar1 + 0x10))(0,pvVar1,pvVar1);
  operator_delete(pvVar1);
  return;
}


// ===== 008980b8  FUN_008980b8 =====

void FUN_008980b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong extraout_x1;
  ulong extraout_x1_00;
  void *local_70;
  char local_68 [15];
  char cStack_59;
  undefined1 local_58;
  undefined7 uStack_57;
  undefined8 uStack_50;
  undefined7 local_48;
  char cStack_41;
  undefined1 uStack_39;
  undefined1 *local_38;
  undefined8 local_18;
  
  uVar2 = FUN_0089822c();
  if (((uVar2 & 1) == 0) || (uVar2 = FUN_0089822c(param_2), (uVar2 & 1) == 0)) {
    FUN_007bc174(param_1);
    FUN_007bc174(param_2);
    if (((extraout_x1 >> 0x20 & 1) == 0) || ((extraout_x1_00 >> 0x20 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1054: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                );
    }
    iVar1 = (int)extraout_x1;
    if ((int)extraout_x1_00 <= (int)extraout_x1) {
      iVar1 = (int)extraout_x1_00;
    }
    FUN_007bc064(&local_58,iVar1);
    cStack_59 = '\b';
    if ((&local_70 < "evel-id") && ("level-id" < local_68)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    local_68[0] = '\0';
    local_70 = (void *)0x64692d6c6576656c;
    local_38 = (undefined1 *)&local_70;
    local_18 = param_3;
    lVar3 = FUN_0088c894(&local_18,&local_70,&DAT_001f94c3,&local_38,&uStack_39);
    if (*(char *)(lVar3 + 0x4f) < '\0') {
      operator_delete(*(void **)(lVar3 + 0x38));
      *(undefined8 *)(lVar3 + 0x38) = 0;
      *(undefined8 *)(lVar3 + 0x40) = 0;
      *(undefined8 *)(lVar3 + 0x48) = 0;
    }
    *(ulong *)(lVar3 + 0x48) = CONCAT17(cStack_41,local_48);
    *(undefined8 *)(lVar3 + 0x40) = uStack_50;
    *(ulong *)(lVar3 + 0x38) = CONCAT71(uStack_57,local_58);
    cStack_41 = '\0';
    local_58 = 0;
    if ((cStack_59 < '\0') && (operator_delete(local_70), cStack_41 < '\0')) {
      operator_delete((void *)CONCAT71(uStack_57,local_58));
    }
  }
  return;
}


// ===== 0089822c  FUN_0089822c =====

undefined8 FUN_0089822c(long param_1)

{
  undefined8 *__s2;
  size_t sVar1;
  long *__s2_00;
  ulong uVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  char local_78 [23];
  undefined1 local_61;
  char local_60 [8];
  undefined2 local_58;
  undefined1 local_49;
  char local_48 [8];
  undefined2 local_40;
  char local_3e [13];
  undefined1 local_31;
  
  local_31 = 10;
  if (("profile-id" < local_48) || (local_3e < "rofile-id")) {
    plVar4 = *(long **)(param_1 + 8);
    local_40 = 0x6469;
    local_3e[0] = '\0';
    local_48 = (char  [8])s_profile_id_00223e61._0_8_;
    for (plVar5 = plVar4; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      __s2 = (undefined8 *)plVar5[4];
      uVar2 = plVar5[5];
      if (-1 < (char)*(byte *)((long)plVar5 + 0x37)) {
        __s2 = plVar5 + 4;
        uVar2 = (ulong)*(byte *)((long)plVar5 + 0x37);
      }
      sVar1 = uVar2;
      if (9 < uVar2) {
        sVar1 = 10;
      }
      iVar3 = memcmp(local_48,__s2,sVar1);
      if (iVar3 == 0) {
        if (uVar2 == 10) {
          return 0;
        }
        if (uVar2 < 0xb) goto LAB_00898294;
      }
      else if (-1 < iVar3) {
LAB_00898294:
        plVar5 = plVar5 + 1;
      }
    }
    local_49 = 9;
    if (("tier-flag" < local_60) || ((char *)((long)&local_58 + 1U) < "ier-flag")) {
      local_58 = 0x67;
      plVar5 = plVar4;
      local_60 = (char  [8])s_tier_flag_00223e6c._0_8_;
      if (plVar4 == (long *)0x0) {
        if ("level-id" < local_78) {
          s_profile_id_00223e61[0] = (char)s_profile_id_00223e61._0_8_;
          s_profile_id_00223e61[1] = SUB81(s_profile_id_00223e61._0_8_,1);
          s_profile_id_00223e61[2] = SUB81(s_profile_id_00223e61._0_8_,2);
          s_profile_id_00223e61[3] = SUB81(s_profile_id_00223e61._0_8_,3);
          s_profile_id_00223e61[4] = SUB81(s_profile_id_00223e61._0_8_,4);
          s_profile_id_00223e61[5] = SUB81(s_profile_id_00223e61._0_8_,5);
          s_profile_id_00223e61[6] = SUB81(s_profile_id_00223e61._0_8_,6);
          s_profile_id_00223e61[7] = SUB81(s_profile_id_00223e61._0_8_,7);
          s_tier_flag_00223e6c[0] = (char)s_tier_flag_00223e6c._0_8_;
          s_tier_flag_00223e6c[1] = SUB81(s_tier_flag_00223e6c._0_8_,1);
          s_tier_flag_00223e6c[2] = SUB81(s_tier_flag_00223e6c._0_8_,2);
          s_tier_flag_00223e6c[3] = SUB81(s_tier_flag_00223e6c._0_8_,3);
          s_tier_flag_00223e6c[4] = SUB81(s_tier_flag_00223e6c._0_8_,4);
          s_tier_flag_00223e6c[5] = SUB81(s_tier_flag_00223e6c._0_8_,5);
          s_tier_flag_00223e6c[6] = SUB81(s_tier_flag_00223e6c._0_8_,6);
          s_tier_flag_00223e6c[7] = SUB81(s_tier_flag_00223e6c._0_8_,7);
          return 1;
        }
        if (local_78 + 8 < "evel-id") {
          s_profile_id_00223e61[0] = (char)s_profile_id_00223e61._0_8_;
          s_profile_id_00223e61[1] = SUB81(s_profile_id_00223e61._0_8_,1);
          s_profile_id_00223e61[2] = SUB81(s_profile_id_00223e61._0_8_,2);
          s_profile_id_00223e61[3] = SUB81(s_profile_id_00223e61._0_8_,3);
          s_profile_id_00223e61[4] = SUB81(s_profile_id_00223e61._0_8_,4);
          s_profile_id_00223e61[5] = SUB81(s_profile_id_00223e61._0_8_,5);
          s_profile_id_00223e61[6] = SUB81(s_profile_id_00223e61._0_8_,6);
          s_profile_id_00223e61[7] = SUB81(s_profile_id_00223e61._0_8_,7);
          s_tier_flag_00223e6c[0] = (char)s_tier_flag_00223e6c._0_8_;
          s_tier_flag_00223e6c[1] = SUB81(s_tier_flag_00223e6c._0_8_,1);
          s_tier_flag_00223e6c[2] = SUB81(s_tier_flag_00223e6c._0_8_,2);
          s_tier_flag_00223e6c[3] = SUB81(s_tier_flag_00223e6c._0_8_,3);
          s_tier_flag_00223e6c[4] = SUB81(s_tier_flag_00223e6c._0_8_,4);
          s_tier_flag_00223e6c[5] = SUB81(s_tier_flag_00223e6c._0_8_,5);
          s_tier_flag_00223e6c[6] = SUB81(s_tier_flag_00223e6c._0_8_,6);
          s_tier_flag_00223e6c[7] = SUB81(s_tier_flag_00223e6c._0_8_,7);
          return 1;
        }
      }
      else {
        do {
          __s2_00 = (long *)plVar5[4];
          uVar2 = plVar5[5];
          if (-1 < (char)*(byte *)((long)plVar5 + 0x37)) {
            __s2_00 = plVar5 + 4;
            uVar2 = (ulong)*(byte *)((long)plVar5 + 0x37);
          }
          sVar1 = uVar2;
          if (8 < uVar2) {
            sVar1 = 9;
          }
          iVar3 = memcmp(local_60,__s2_00,sVar1);
          if (iVar3 == 0) {
            if (uVar2 == 9) {
              return 0;
            }
            if (uVar2 < 10) goto LAB_00898334;
          }
          else if (-1 < iVar3) {
LAB_00898334:
            plVar5 = plVar5 + 1;
          }
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
        local_61 = 8;
        if (("level-id" < local_78) || (local_78 + 8 < "evel-id")) {
          builtin_strncpy(local_78,"level-id",9);
          do {
            plVar5 = (long *)plVar4[4];
            uVar2 = plVar4[5];
            if (-1 < (char)*(byte *)((long)plVar4 + 0x37)) {
              plVar5 = plVar4 + 4;
              uVar2 = (ulong)*(byte *)((long)plVar4 + 0x37);
            }
            sVar1 = uVar2;
            if (7 < uVar2) {
              sVar1 = 8;
            }
            iVar3 = memcmp(local_78,plVar5,sVar1);
            if (iVar3 == 0) {
              if (uVar2 == 8) {
                return 0;
              }
              if (uVar2 < 9) goto LAB_008983d4;
            }
            else if (-1 < iVar3) {
LAB_008983d4:
              plVar4 = plVar4 + 1;
            }
            plVar4 = (long *)*plVar4;
            if (plVar4 == (long *)0x0) {
              return 1;
            }
          } while( true );
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
            );
}


// ===== 00898488  FUN_00898488 =====

/* WARNING: Removing unreachable block (ram,0x00898714) */
/* WARNING: Removing unreachable block (ram,0x00898730) */
/* WARNING: Removing unreachable block (ram,0x00898738) */

void FUN_00898488(long param_1,long param_2,undefined8 param_3)

{
  size_t sVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 local_a8;
  int iStack_a4;
  char local_a0 [8];
  char acStack_98 [8];
  char local_90;
  undefined6 uStack_8f;
  undefined1 uStack_89;
  byte local_88;
  char local_80 [8];
  char acStack_78 [8];
  char local_70 [7];
  undefined1 uStack_69;
  undefined1 uStack_61;
  char *local_60;
  undefined8 uStack_58;
  
  uVar4 = s_profile_level_id_00223e50._8_8_;
  uVar3 = s_profile_level_id_00223e50._0_8_;
  uStack_89 = 0x10;
  if (("profile-level-id" < local_a0) || (&local_90 < "rofile-level-id")) {
    plVar11 = *(long **)(param_1 + 8);
    local_90 = '\0';
    acStack_98 = (char  [8])s_profile_level_id_00223e50._8_8_;
    local_a0 = (char  [8])s_profile_level_id_00223e50._0_8_;
    for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
      puVar2 = (undefined8 *)plVar11[4];
      uVar8 = plVar11[5];
      if (-1 < (char)*(byte *)((long)plVar11 + 0x37)) {
        puVar2 = plVar11 + 4;
        uVar8 = (ulong)*(byte *)((long)plVar11 + 0x37);
      }
      sVar1 = uVar8;
      if (0xf < uVar8) {
        sVar1 = 0x10;
      }
      iVar6 = memcmp(local_a0,puVar2,sVar1);
      if (iVar6 == 0) {
        if (uVar8 == 0x10) goto LAB_008985e8;
        if (uVar8 < 0x11) goto LAB_008984fc;
      }
      else if (-1 < iVar6) {
LAB_008984fc:
        plVar11 = plVar11 + 1;
      }
    }
    uStack_69 = 0x10;
    if (("profile-level-id" < local_80) || (local_70 < "rofile-level-id")) {
      plVar11 = *(long **)(param_2 + 8);
      local_70[0] = '\0';
      acStack_78 = (char  [8])uVar4;
      local_80 = (char  [8])uVar3;
      do {
        if (plVar11 == (long *)0x0) {
          s_profile_level_id_00223e50[0] = (char)s_profile_level_id_00223e50._0_8_;
          s_profile_level_id_00223e50[1] = SUB81(s_profile_level_id_00223e50._0_8_,1);
          s_profile_level_id_00223e50[2] = SUB81(s_profile_level_id_00223e50._0_8_,2);
          s_profile_level_id_00223e50[3] = SUB81(s_profile_level_id_00223e50._0_8_,3);
          s_profile_level_id_00223e50[4] = SUB81(s_profile_level_id_00223e50._0_8_,4);
          s_profile_level_id_00223e50[5] = SUB81(s_profile_level_id_00223e50._0_8_,5);
          s_profile_level_id_00223e50[6] = SUB81(s_profile_level_id_00223e50._0_8_,6);
          s_profile_level_id_00223e50[7] = SUB81(s_profile_level_id_00223e50._0_8_,7);
          s_profile_level_id_00223e50[8] = (char)s_profile_level_id_00223e50._8_8_;
          s_profile_level_id_00223e50[9] = SUB81(s_profile_level_id_00223e50._8_8_,1);
          s_profile_level_id_00223e50[10] = SUB81(s_profile_level_id_00223e50._8_8_,2);
          s_profile_level_id_00223e50[0xb] = SUB81(s_profile_level_id_00223e50._8_8_,3);
          s_profile_level_id_00223e50[0xc] = SUB81(s_profile_level_id_00223e50._8_8_,4);
          s_profile_level_id_00223e50[0xd] = SUB81(s_profile_level_id_00223e50._8_8_,5);
          s_profile_level_id_00223e50[0xe] = SUB81(s_profile_level_id_00223e50._8_8_,6);
          s_profile_level_id_00223e50[0xf] = SUB81(s_profile_level_id_00223e50._8_8_,7);
          return;
        }
        puVar2 = (undefined8 *)plVar11[4];
        uVar8 = plVar11[5];
        if (-1 < (char)*(byte *)((long)plVar11 + 0x37)) {
          puVar2 = plVar11 + 4;
          uVar8 = (ulong)*(byte *)((long)plVar11 + 0x37);
        }
        sVar1 = uVar8;
        if (0xf < uVar8) {
          sVar1 = 0x10;
        }
        iVar6 = memcmp(local_80,puVar2,sVar1);
        if (iVar6 == 0) {
          if (uVar8 == 0x10) goto LAB_008985e8;
          if (uVar8 < 0x11) goto LAB_00898590;
        }
        else if (-1 < iVar6) {
LAB_00898590:
          plVar11 = plVar11 + 1;
        }
        plVar11 = (long *)*plVar11;
      } while( true );
    }
  }
LAB_00898768:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
            );
LAB_008985e8:
  auVar12 = FUN_007b6644(param_1);
  auVar13 = FUN_007b6644(param_2);
  uVar8 = FUN_008987a4(param_1);
  if ((uVar8 & 1) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_008987a4(param_2);
  }
  if (((auVar12 & (undefined1  [16])0x1) == (undefined1  [16])0x0) ||
     ((auVar13 & (undefined1  [16])0x1) == (undefined1  [16])0x0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/optional:1054: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
              );
  }
  uVar8 = auVar12._0_8_ >> 0x20;
  uVar10 = auVar13._0_8_ >> 0x20;
  if (uVar8 == 0) {
    bVar5 = uVar10 != 10 && uVar10 != 0;
  }
  else if (uVar10 == 0) {
    bVar5 = uVar8 == 10;
  }
  else {
    bVar5 = auVar12._4_4_ < auVar13._4_4_;
  }
  iStack_a4 = auVar12._4_4_;
  if ((uVar7 & 1) == 0 && !bVar5) {
    iStack_a4 = auVar13._4_4_;
  }
  local_a8 = auVar12._0_4_;
  FUN_007b675c(local_a0,&local_a8);
  if ((local_88 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/optional:1074: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
              );
  }
  local_60 = local_80;
  uStack_69 = 0x10;
  if (("profile-level-id" < local_60) || (local_70 < "rofile-level-id")) {
    acStack_78 = (char  [8])uVar4;
    local_80 = (char  [8])uVar3;
    local_70[0] = '\0';
    uStack_58 = param_3;
    lVar9 = FUN_0088c894(&uStack_58,local_80,&DAT_001f94c3,&local_60,&uStack_61);
    if (*(char *)(lVar9 + 0x4f) < '\0') {
      operator_delete(*(void **)(lVar9 + 0x38));
      *(undefined8 *)(lVar9 + 0x38) = 0;
      *(undefined8 *)(lVar9 + 0x40) = 0;
      *(undefined8 *)(lVar9 + 0x48) = 0;
    }
    *(ulong *)(lVar9 + 0x48) = CONCAT17(uStack_89,CONCAT61(uStack_8f,local_90));
    *(char (*) [8])(lVar9 + 0x40) = acStack_98;
    *(char (*) [8])(lVar9 + 0x38) = local_a0;
    return;
  }
  goto LAB_00898768;
}


// ===== 008987a4  FUN_008987a4 =====

/* WARNING: Type propagation algorithm not settling */

bool FUN_008987a4(long param_1)

{
  undefined8 *__s2;
  size_t __n;
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  char *pcVar6;
  long *plVar7;
  
  pcVar6 = (char *)operator_new(0x19);
  uVar4 = s_level_asymmetry_allowed_00223e76._0_8_;
  if (pcVar6 + 0x17 < pcVar6) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((pcVar6 < "evel-asymmetry-allowed") && ("level-asymmetry-allowed" < pcVar6 + 0x17)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  uVar2 = CONCAT17(s_level_asymmetry_allowed_00223e76[0xf],s_level_asymmetry_allowed_00223e76._8_7_)
  ;
  uVar3 = CONCAT71(s_level_asymmetry_allowed_00223e76._16_7_,s_level_asymmetry_allowed_00223e76[0xf]
                  );
  pcVar6[0x17] = '\0';
  plVar7 = *(long **)(param_1 + 8);
  *(undefined8 *)(pcVar6 + 8) = uVar2;
  *(undefined8 *)pcVar6 = uVar4;
  *(undefined8 *)(pcVar6 + 0xf) = uVar3;
  do {
    while( true ) {
      if (plVar7 == (long *)0x0) {
        operator_delete(pcVar6);
        return false;
      }
      __s2 = (undefined8 *)plVar7[4];
      uVar1 = plVar7[5];
      if (-1 < (char)*(byte *)((long)plVar7 + 0x37)) {
        __s2 = plVar7 + 4;
        uVar1 = (ulong)*(byte *)((long)plVar7 + 0x37);
      }
      __n = uVar1;
      if (0x16 < uVar1) {
        __n = 0x17;
      }
      iVar5 = memcmp(pcVar6,__s2,__n);
      if (iVar5 != 0) break;
      if (uVar1 == 0x17) {
        operator_delete(pcVar6);
        if (plVar7 == (undefined8 *)(param_1 + 8)) {
          return false;
        }
        pcVar6 = (char *)(plVar7 + 7);
        if (*(char *)((long)plVar7 + 0x4f) < '\0') {
          pcVar6 = *(char **)pcVar6;
        }
        if (*pcVar6 != '1') {
          return false;
        }
        return pcVar6[1] == '\0';
      }
      if (uVar1 < 0x18) goto LAB_00898814;
LAB_00898864:
      plVar7 = (long *)*plVar7;
    }
    if (iVar5 < 0) goto LAB_00898864;
LAB_00898814:
    plVar7 = (long *)plVar7[1];
  } while( true );
}


// ===== 008988fc  FUN_008988fc =====

/* WARNING: Type propagation algorithm not settling */

bool FUN_008988fc(undefined8 *param_1)

{
  undefined *__s;
  bool bVar1;
  int iVar2;
  size_t __n;
  undefined1 **__s1;
  char *******pppppppcVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined1 *local_70;
  size_t sStack_68;
  undefined8 local_60;
  char *******local_58;
  long lStack_50;
  undefined8 local_48;
  
  __s = PTR_s_x_google_per_layer_pli_00d522a0;
  plVar4 = param_1 + 1;
  plVar5 = (long *)*param_1;
  if (plVar5 == plVar4) {
    bVar1 = false;
  }
  else {
    do {
      if (*(char *)((long)plVar5 + 0x37) < '\0') {
        FUN_005478d8(&local_70,plVar5[4],plVar5[5]);
        if (*(char *)((long)plVar5 + 0x4f) < '\0') goto LAB_0089898c;
LAB_00898964:
        local_48 = plVar5[9];
        lStack_50 = plVar5[8];
        local_58 = (char *******)plVar5[7];
      }
      else {
        local_60 = plVar5[6];
        sStack_68 = plVar5[5];
        local_70 = (undefined1 *)plVar5[4];
        if (-1 < *(char *)((long)plVar5 + 0x4f)) goto LAB_00898964;
LAB_0089898c:
        FUN_005478d8(&local_58,plVar5[7],plVar5[8]);
      }
      __n = strlen(__s);
      uVar8 = (ulong)local_60._7_1_;
      if ((long)uVar8 < 0) {
        if (__n == sStack_68) {
          __s1 = (undefined1 **)local_70;
          if (__n == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_005f5590();
          }
          goto LAB_008989d4;
        }
LAB_008989e0:
        bVar1 = false;
joined_r0x008989e8:
        if (local_48 < 0) {
LAB_008989f0:
          operator_delete(local_58);
          uVar8 = local_60 >> 0x38;
        }
      }
      else {
        __s1 = &local_70;
        if (__n != uVar8) goto LAB_008989e0;
LAB_008989d4:
        iVar2 = memcmp(__s1,__s,__n);
        if (iVar2 != 0) goto LAB_008989e0;
        if (local_48 < 0) {
          pppppppcVar3 = local_58;
          if (lStack_50 == 1) goto LAB_00898a78;
          bVar1 = false;
          goto LAB_008989f0;
        }
        pppppppcVar3 = (char *******)&local_58;
        if (local_48._7_1_ == '\x01') {
LAB_00898a78:
          bVar1 = *(char *)pppppppcVar3 == '1';
          goto joined_r0x008989e8;
        }
        bVar1 = false;
      }
      if (((uint)uVar8 >> 7 & 1) != 0) {
        operator_delete(local_70);
      }
      plVar7 = plVar5;
      if (bVar1) break;
      plVar7 = (long *)plVar5[1];
      plVar6 = plVar5;
      if ((long *)plVar5[1] == (long *)0x0) {
        do {
          plVar5 = (long *)plVar6[2];
          bVar1 = plVar6 != (long *)*plVar5;
          plVar6 = plVar5;
        } while (bVar1);
      }
      else {
        do {
          plVar5 = plVar7;
          plVar7 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
      plVar7 = plVar4;
    } while (plVar5 != plVar4);
    bVar1 = plVar7 != plVar4;
  }
  return bVar1;
}


// ===== 00898acc  FUN_00898acc =====

void FUN_00898acc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3b228;
  FUN_0089a290(param_1[1] + 0x18,param_1[2]);
  return;
}


// ===== 00898aec  FUN_00898aec =====

void FUN_00898aec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3b228;
  FUN_0089a290(param_1[1] + 0x18,param_1[2]);
  operator_delete(param_1);
  return;
}


// ===== 00898b30  FUN_00898b30 =====

void FUN_00898b30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3b248;
  param_1[1] = &PTR_FUN_00d3b278;
  FUN_0089954c(param_1 + 3,0);
  return;
}


// ===== 00898b54  FUN_00898b54 =====

void FUN_00898b54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3b248;
  param_1[1] = &PTR_FUN_00d3b278;
  FUN_00899588(param_1 + 3);
  return;
}


// ===== 00898b74  FUN_00898b74 =====

void FUN_00898b74(undefined8 *param_1)

{
  param_1[-1] = &PTR_FUN_00d3b248;
  *param_1 = &PTR_FUN_00d3b278;
  FUN_00899588(param_1 + 2);
  return;
}


// ===== 00898b94  FUN_00898b94 =====

void FUN_00898b94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3b248;
  param_1[1] = &PTR_FUN_00d3b278;
  FUN_00899588(param_1 + 3);
  operator_delete(param_1);
  return;
}


// ===== 00898bd4  FUN_00898bd4 =====

void FUN_00898bd4(undefined8 *param_1)

{
  param_1[-1] = &PTR_FUN_00d3b248;
  *param_1 = &PTR_FUN_00d3b278;
  FUN_00899588(param_1 + 2);
  operator_delete(param_1 + -1);
  return;
}


// ===== 00898c18  FUN_00898c18 =====

undefined8 * FUN_00898c18(long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  *puVar1 = &PTR_FUN_00d3b228;
  puVar1[1] = param_1;
  puVar1[2] = param_3;
  uVar2 = FUN_0089a200(param_1 + 0x18,param_2,param_3);
  if (((uVar2 & 1) == 0) && (uVar2 = FUN_004249b0(), (uVar2 & 1) == 0)) {
    FUN_00623bb0(&DAT_001fcbd8,"../../call/rtp_stream_receiver_controller.cc",0xf3,
                 "RtpStreamReceiverController::Receiver::Receiver: Sink could not be added for SSRC="
                 ,param_2,&DAT_001ea377);
  }
  return puVar1;
}


// ===== 00898cb4  FUN_00898cb4 =====

void FUN_00898cb4(long param_1)

{
  FUN_0089a87c(param_1 + 0x18);
  return;
}


// ===== 00898cc0  FUN_00898cc0 =====

void FUN_00898cc0(long param_1)

{
  FUN_0089a87c(param_1 + 0x18);
  return;
}


// ===== 00898ccc  FUN_00898ccc =====

void FUN_00898ccc(long param_1)

{
  FUN_0089a87c(param_1 + 0x10);
  return;
}


// ===== 00898cd8  FUN_00898cd8 =====

void FUN_00898cd8(undefined1 *param_1,undefined1 *param_2,ulong param_3,undefined1 *param_4,
                 ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  
  puVar3 = param_1 + 8;
  *param_1 = 0;
  if (param_3 < 0x7ffffffffffffff7) {
    if (param_3 < 0x17) {
      param_1[0x1f] = (char)param_3;
    }
    else {
      uVar1 = (param_3 & 0x7ffffffffffffff8) + 8;
      uVar2 = 0x19;
      if (uVar1 != 0x18) {
        uVar2 = uVar1;
      }
      puVar3 = (undefined1 *)operator_new(uVar2);
      *(undefined1 **)(param_1 + 8) = puVar3;
      *(ulong *)(param_1 + 0x10) = param_3;
      *(ulong *)(param_1 + 0x18) = uVar2 | 0x8000000000000000;
    }
    if (puVar3 + param_3 < puVar3) {
LAB_00898e30:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                );
    }
    if ((param_2 < puVar3) || (puVar3 + param_3 <= param_2)) {
      memmove(puVar3,param_2,param_3);
      puVar3[param_3] = 0;
      if (0x7ffffffffffffff6 < param_5) goto LAB_00898e58;
      if (param_5 < 0x17) {
        puVar3 = param_1 + 0x20;
        param_1[0x37] = (char)param_5;
      }
      else {
        uVar1 = (param_5 & 0x7ffffffffffffff8) + 8;
        uVar2 = 0x19;
        if (uVar1 != 0x18) {
          uVar2 = uVar1;
        }
        puVar3 = (undefined1 *)operator_new(uVar2);
        *(undefined1 **)(param_1 + 0x20) = puVar3;
        *(ulong *)(param_1 + 0x28) = param_5;
        *(ulong *)(param_1 + 0x30) = uVar2 | 0x8000000000000000;
      }
      if (puVar3 + param_5 < puVar3) goto LAB_00898e30;
      if ((param_4 < puVar3) || (puVar3 + param_5 <= param_4)) {
        memmove(puVar3,param_4,param_5);
        puVar3[param_5] = 0;
        *(undefined8 *)(param_1 + 0x40) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(undefined8 *)(param_1 + 0x50) = 0;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined8 *)(param_1 + 0x60) = 0;
        *(undefined8 *)(param_1 + 0x58) = 0;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
LAB_00898e58:
                    /* WARNING: Subroutine does not return */
  FUN_005d45ec();
}


// ===== 00898e5c  FUN_00898e5c =====

void FUN_00898e5c(long param_1)

{
  char cVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  
  pvVar2 = *(void **)(param_1 + 0x50);
  if (pvVar2 != (void *)0x0) {
    if (*(long *)(param_1 + 0x58) - 1U < (ulong)(*(long *)(param_1 + 0x58) - (long)pvVar2))
    goto LAB_00898f08;
    *(void **)(param_1 + 0x58) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(param_1 + 0x38);
  if (pvVar2 == (void *)0x0) {
LAB_00898f2c:
    if (*(char *)(param_1 + 0x37) < '\0') {
      operator_delete(*(void **)(param_1 + 0x20));
      cVar1 = *(char *)(param_1 + 0x1f);
    }
    else {
      cVar1 = *(char *)(param_1 + 0x1f);
    }
    if (-1 < cVar1) {
      return;
    }
    operator_delete(*(void **)(param_1 + 8));
    return;
  }
  pvVar3 = *(void **)(param_1 + 0x40);
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
  do {
    if (pvVar3 == pvVar2) {
      *(void **)(param_1 + 0x40) = pvVar2;
      operator_delete(pvVar2);
      goto LAB_00898f2c;
    }
    pvVar3 = (void *)((long)pvVar3 + -4);
  } while (pvVar3 != (void *)0x0);
LAB_00898f08:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00898f80  FUN_00898f80 =====

/* WARNING: Removing unreachable block (ram,0x0089917c) */
/* WARNING: Removing unreachable block (ram,0x00899288) */
/* WARNING: Removing unreachable block (ram,0x0089921c) */

void FUN_00898f80(undefined8 *param_1,char *param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined8 ***pppuVar4;
  undefined1 **ppuVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined1 *local_90;
  ulong uStack_88;
  ulong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 **local_60;
  ulong uStack_58;
  ulong local_50;
  
  if (*param_2 == '\x01') {
    FUN_005d3510(param_1,"{any}");
    return;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_00547cac(&local_78,"{mid: ",6);
  if (param_2[0x1f] < '\0') {
    if (*(long *)(param_2 + 0x10) == 0) goto LAB_0089902c;
    FUN_005478d8(&local_60,*(undefined8 *)(param_2 + 8));
  }
  else if (param_2[0x1f] == '\0') {
LAB_0089902c:
    FUN_005d3510(&local_60,"<empty>");
  }
  else {
    uStack_58 = *(ulong *)(param_2 + 0x10);
    local_60 = *(undefined8 ***)(param_2 + 8);
    local_50 = *(ulong *)(param_2 + 0x18);
  }
  uVar1 = uStack_58;
  pppuVar4 = (undefined8 ***)local_60;
  if (-1 < (long)local_50) {
    uVar1 = local_50 >> 0x38;
    pppuVar4 = &local_60;
  }
  FUN_00547cac(&local_78,pppuVar4,uVar1);
  FUN_00547cac(&local_78,", rsid: ",8);
  if (param_2[0x37] < '\0') {
    if (*(long *)(param_2 + 0x28) != 0) {
      FUN_005478d8(&local_90,*(undefined8 *)(param_2 + 0x20));
      goto LAB_008990bc;
    }
  }
  else if (param_2[0x37] != '\0') {
    uStack_88 = *(ulong *)(param_2 + 0x28);
    local_90 = *(undefined1 **)(param_2 + 0x20);
    local_80 = *(ulong *)(param_2 + 0x30);
    goto LAB_008990bc;
  }
  FUN_005d3510(&local_90,"<empty>");
LAB_008990bc:
  uVar1 = uStack_88;
  ppuVar5 = (undefined1 **)local_90;
  if (-1 < (long)local_80) {
    uVar1 = local_80 >> 0x38;
    ppuVar5 = &local_90;
  }
  FUN_00547cac(&local_78,ppuVar5,uVar1);
  FUN_00547cac(&local_78,", ssrcs: [",10);
  if ((long)local_80 < 0) {
    operator_delete(local_90);
  }
  puVar7 = *(undefined4 **)(param_2 + 0x38);
  puVar2 = *(undefined4 **)(param_2 + 0x40);
  if (puVar7 != puVar2) {
    do {
      local_60 = (undefined8 ***)0x0;
      uStack_58 = 0;
      local_50 = 0;
      FUN_005fa03c(&local_60,0x16,*puVar7);
      uVar1 = uStack_58;
      pppuVar4 = (undefined8 ***)local_60;
      if (-1 < (long)local_50) {
        uVar1 = local_50 >> 0x38;
        pppuVar4 = &local_60;
      }
      FUN_00547cac(&local_78,pppuVar4,uVar1);
      FUN_00547cac(&local_78,&DAT_001e1644,2);
      puVar7 = puVar7 + 1;
    } while (puVar7 != puVar2);
  }
  FUN_00547cac(&local_78,"], payload_types = [",0x14);
  puVar6 = *(undefined1 **)(param_2 + 0x50);
  puVar3 = *(undefined1 **)(param_2 + 0x58);
  if (puVar6 != puVar3) {
    do {
      local_60 = (undefined8 ***)0x0;
      uStack_58 = 0;
      local_50 = 0;
      FUN_005f55c4(&local_60,0x16,*puVar6);
      uVar1 = uStack_58;
      pppuVar4 = (undefined8 ***)local_60;
      if (-1 < (long)local_50) {
        uVar1 = local_50 >> 0x38;
        pppuVar4 = &local_60;
      }
      FUN_00547cac(&local_78,pppuVar4,uVar1);
      FUN_00547cac(&local_78,&DAT_001e1644,2);
      puVar6 = puVar6 + 1;
    } while (puVar6 != puVar3);
  }
  FUN_00547cac(&local_78,&DAT_001b4a7a,2);
  param_1[1] = uStack_70;
  *param_1 = local_78;
  param_1[2] = local_68;
  return;
}


// ===== 0089929c  FUN_0089929c =====

/* WARNING: Removing unreachable block (ram,0x00899380) */
/* WARNING: Removing unreachable block (ram,0x0089931c) */
/* WARNING: Removing unreachable block (ram,0x00899520) */

void FUN_0089929c(undefined8 *param_1,long param_2)

{
  undefined8 ****ppppuVar1;
  undefined1 **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 *local_90;
  ulong uStack_88;
  ulong local_80;
  undefined8 ***local_78;
  ulong uStack_70;
  ulong local_68;
  void *local_60;
  undefined8 uStack_58;
  long local_50;
  undefined8 ***local_48;
  ulong uStack_40;
  ulong local_38;
  
  local_60 = (void *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  FUN_00547cac(&local_60,&DAT_001a9b91,3);
  local_48 = (undefined8 ****)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005f55c4(&local_48,0x16,*(undefined1 *)(param_2 + 1));
  uVar5 = uStack_40;
  ppppuVar1 = (undefined8 ****)local_48;
  if (-1 < (long)local_38) {
    uVar5 = local_38 >> 0x38;
    ppppuVar1 = &local_48;
  }
  FUN_00547cac(&local_60,ppppuVar1,uVar5);
  FUN_00547cac(&local_60," SSRC=",6);
  local_48 = (undefined8 ****)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005fa03c(&local_48,0x16,*(undefined4 *)(param_2 + 0xc));
  uVar5 = uStack_40;
  ppppuVar1 = (undefined8 ****)local_48;
  if (-1 < (long)local_38) {
    uVar5 = local_38 >> 0x38;
    ppppuVar1 = &local_48;
  }
  FUN_00547cac(&local_60,ppppuVar1,uVar5);
  local_48 = (undefined8 ****)0x0;
  uStack_40 = 0;
  local_38 = 0;
  auVar6 = FUN_007dba34(param_2,0x10);
  if ((auVar6._8_8_ != 0) &&
     (uVar5 = FUN_007d98d0(auVar6._0_8_,auVar6._8_8_,&local_48), (uVar5 & 1) != 0)) {
    FUN_00547cac(&local_60," MID=",5);
    uVar5 = uStack_40;
    ppppuVar1 = (undefined8 ****)local_48;
    if (-1 < (long)local_38) {
      uVar5 = local_38 >> 0x38;
      ppppuVar1 = &local_48;
    }
    FUN_00547cac(&local_60,ppppuVar1,uVar5);
  }
  local_78 = (undefined8 ****)0x0;
  uStack_70 = 0;
  local_68 = 0;
  auVar6 = FUN_007dba34(param_2,0xe);
  if (auVar6._8_8_ != 0) {
    uVar5 = FUN_007d98d0(auVar6._0_8_,auVar6._8_8_,&local_78);
    if ((uVar5 & 1) != 0) {
      FUN_00547cac(&local_60," RSID=",6);
      uVar5 = uStack_70;
      ppppuVar1 = (undefined8 ****)local_78;
      if (-1 < (long)local_68) {
        uVar5 = local_68 >> 0x38;
        ppppuVar1 = &local_78;
      }
      FUN_00547cac(&local_60,ppppuVar1,uVar5);
    }
  }
  local_90 = (undefined1 *)0x0;
  uStack_88 = 0;
  local_80 = 0;
  auVar6 = FUN_007dba34(param_2,0xf);
  if ((auVar6._8_8_ != 0) &&
     (uVar5 = FUN_007d98d0(auVar6._0_8_,auVar6._8_8_,&local_90), (uVar5 & 1) != 0)) {
    FUN_00547cac(&local_60," RRSID=",7);
    uVar5 = uStack_88;
    ppuVar2 = (undefined1 **)local_90;
    if (-1 < (long)local_80) {
      uVar5 = local_80 >> 0x38;
      ppuVar2 = &local_90;
    }
    FUN_00547cac(&local_60,ppuVar2,uVar5);
  }
  lVar4 = local_50;
  uVar3 = uStack_58;
  uStack_58 = 0;
  local_50 = 0;
  param_1[1] = uVar3;
  *param_1 = local_60;
  param_1[2] = lVar4;
  local_60 = (void *)0x0;
  if ((long)local_80 < 0) {
    operator_delete(local_90);
  }
  if ((long)local_68 < 0) {
    operator_delete(local_78);
  }
  if (local_50 < 0) {
    operator_delete(local_60);
  }
  return;
}


// ===== 0089954c  FUN_0089954c =====

void FUN_0089954c(undefined8 *param_1,undefined1 param_2)

{
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = param_1 + 8;
  param_1[0x18] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x19) = param_2;
  return;
}


// ===== 00899588  FUN_00899588 =====

/* WARNING: Removing unreachable block (ram,0x00899638) */
/* WARNING: Removing unreachable block (ram,0x008995d8) */
/* WARNING: Removing unreachable block (ram,0x00899698) */

void FUN_00899588(long param_1)

{
  char cVar1;
  void *pvVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  void *pvVar8;
  undefined8 *puVar9;
  long local_18;
  
  pvVar8 = *(void **)(param_1 + 0xb0);
  if (pvVar8 != (void *)0x0) {
    pvVar4 = *(void **)(param_1 + 0xb8);
    pvVar2 = pvVar8;
    if (pvVar8 != pvVar4) {
      do {
        pvVar4 = (void *)((long)pvVar4 + -0x20);
        if (pvVar4 == (void *)0x0) goto LAB_00899824;
      } while (pvVar4 != pvVar8);
      pvVar2 = *(void **)(param_1 + 0xb0);
    }
    *(void **)(param_1 + 0xb8) = pvVar8;
    operator_delete(pvVar2);
  }
  pvVar8 = *(void **)(param_1 + 0x98);
  if (pvVar8 != (void *)0x0) {
    pvVar4 = *(void **)(param_1 + 0xa0);
    pvVar2 = pvVar8;
    if (pvVar8 != pvVar4) {
      do {
        pvVar4 = (void *)((long)pvVar4 + -0x20);
        if (pvVar4 == (void *)0x0) goto LAB_00899824;
      } while (pvVar4 != pvVar8);
      pvVar2 = *(void **)(param_1 + 0x98);
    }
    *(void **)(param_1 + 0xa0) = pvVar8;
    operator_delete(pvVar2);
  }
  pvVar8 = *(void **)(param_1 + 0x80);
  if (pvVar8 != (void *)0x0) {
    pvVar4 = *(void **)(param_1 + 0x88);
    pvVar2 = pvVar8;
    if (pvVar8 != pvVar4) {
      do {
        pvVar4 = (void *)((long)pvVar4 + -0x18);
        if (pvVar4 == (void *)0x0) goto LAB_00899824;
      } while (pvVar4 != pvVar8);
      pvVar2 = *(void **)(param_1 + 0x80);
    }
    *(void **)(param_1 + 0x88) = pvVar8;
    operator_delete(pvVar2);
  }
  puVar9 = *(undefined8 **)(param_1 + 0x68);
  if (puVar9 != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_1 + 0x70);
    puVar3 = puVar9;
    if (puVar9 != puVar5) {
      do {
        puVar3 = puVar5 + -4;
        if (puVar3 == (undefined8 *)0x0) goto LAB_00899824;
        if (*(char *)((long)puVar5 + -9) < '\0') {
          operator_delete((void *)*puVar3);
        }
        puVar5 = puVar3;
      } while (puVar3 != puVar9);
      puVar3 = *(undefined8 **)(param_1 + 0x68);
    }
    *(undefined8 **)(param_1 + 0x70) = puVar9;
    operator_delete(puVar3);
  }
  puVar9 = *(undefined8 **)(param_1 + 0x50);
  if (puVar9 != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_1 + 0x58);
    puVar3 = puVar9;
    if (puVar9 != puVar5) {
      do {
        puVar3 = puVar5 + -7;
        if (puVar3 == (undefined8 *)0x0) goto LAB_00899824;
        if (*(char *)((long)puVar5 + -9) < '\0') {
          operator_delete((void *)puVar5[-4]);
          cVar1 = *(char *)((long)puVar5 + -0x21);
        }
        else {
          cVar1 = *(char *)((long)puVar5 + -0x21);
        }
        if (cVar1 < '\0') {
          operator_delete((void *)*puVar3);
        }
        puVar5 = puVar3;
      } while (puVar3 != puVar9);
      puVar3 = *(undefined8 **)(param_1 + 0x50);
    }
    *(undefined8 **)(param_1 + 0x58) = puVar9;
    operator_delete(puVar3);
  }
  local_18 = param_1 + 0x38;
  FUN_0089b310(&local_18,*(undefined8 *)(param_1 + 0x40));
  pvVar8 = *(void **)(param_1 + 0x20);
  if (pvVar8 == (void *)0x0) {
LAB_00899848:
    puVar9 = *(undefined8 **)(param_1 + 8);
    if (puVar9 != (undefined8 *)0x0) {
      puVar5 = *(undefined8 **)(param_1 + 0x10);
      puVar3 = puVar9;
      if (puVar9 != puVar5) {
        do {
          puVar3 = puVar5 + -4;
          if (puVar3 == (undefined8 *)0x0) goto LAB_00899824;
          if (*(char *)((long)puVar5 + -9) < '\0') {
            operator_delete((void *)*puVar3);
          }
          puVar5 = puVar3;
        } while (puVar3 != puVar9);
        puVar3 = *(undefined8 **)(param_1 + 8);
      }
      *(undefined8 **)(param_1 + 0x10) = puVar9;
      operator_delete(puVar3);
    }
    return;
  }
  pvVar4 = *(void **)(param_1 + 0x28);
  uVar7 = (ulong)((long)pvVar4 + (-0x10 - ((long)pvVar4 << 0x3c))) >> 4;
  uVar6 = (ulong)(((long)pvVar8 - (long)pvVar4 << 0x3c) - ((long)pvVar8 - (long)pvVar4)) >> 4;
  if (uVar7 <= uVar6) {
    uVar6 = uVar7;
  }
  if ((1 < uVar6) && ((((int)pvVar8 - (int)pvVar4 | -(int)pvVar4) & 0xfU) == 0)) {
    uVar6 = uVar6 & 0xffffffffffffffe;
    pvVar4 = (void *)((long)pvVar4 + uVar6 * -0x10);
    do {
      uVar6 = uVar6 - 2;
    } while (uVar6 != 0);
  }
  do {
    if (pvVar4 == pvVar8) {
      *(void **)(param_1 + 0x28) = pvVar8;
      operator_delete(pvVar8);
      goto LAB_00899848;
    }
    pvVar4 = (void *)((long)pvVar4 + -0x10);
  } while (pvVar4 != (void *)0x0);
LAB_00899824:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 008998bc  FUN_008998bc =====

/* WARNING: Removing unreachable block (ram,0x00899954) */

uint FUN_008998bc(undefined8 *param_1,char *param_2,void *param_3)

{
  uint *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  uint *puVar9;
  uint *puVar10;
  ulong uVar11;
  uint *puVar12;
  undefined1 *puVar13;
  char *local_90;
  void *pvStack_88;
  undefined1 *local_80;
  void *local_78;
  undefined8 uStack_70;
  long local_68;
  undefined1 local_60 [31];
  undefined1 uStack_41;
  void *local_28;
  
  local_28 = param_3;
  uVar6 = FUN_00899b90();
  if ((uVar6 & 1) != 0) {
    uVar7 = FUN_004249b0();
    if ((uVar7 & 1) == 0) {
      local_90 = "../../call/rtp_demuxer.cc";
      pvStack_88 = (void *)0x46b;
      local_80 = &uStack_41;
      FUN_00898f80(local_60,param_2);
      FUN_00623bb0(&DAT_00223e8e,local_90,(ulong)pvStack_88 & 0xffffffff,"Unable to add sink=",
                   param_3," due to conflicting criteria ",local_60);
    }
    goto LAB_00899b6c;
  }
  if (*param_2 == '\x01') {
    *param_1 = param_3;
  }
  bVar3 = param_2[0x1f];
  uVar7 = *(ulong *)(param_2 + 0x10);
  if (-1 < (char)bVar3) {
    uVar7 = (ulong)bVar3;
  }
  uVar5 = (uint)param_2[0x37];
  if (uVar7 == 0) {
    if ((int)uVar5 < 0) {
      if (*(long *)(param_2 + 0x28) != 0) {
        FUN_005478d8(&local_90,*(undefined8 *)(param_2 + 0x20));
        param_3 = local_28;
        goto LAB_00899a74;
      }
    }
    else if (uVar5 != 0) {
      pvStack_88 = *(void **)(param_2 + 0x28);
      local_90 = *(char **)(param_2 + 0x20);
      local_80 = *(undefined1 **)(param_2 + 0x30);
LAB_00899a74:
      puVar8 = param_1 + 0xd;
      local_78 = param_3;
      goto LAB_00899a98;
    }
  }
  else {
    uVar7 = *(ulong *)(param_2 + 0x28);
    if (-1 < (int)uVar5) {
      uVar7 = (ulong)(byte)param_2[0x37];
    }
    if (uVar7 == 0) {
      if ((char)bVar3 < '\0') {
        FUN_005478d8(&local_90,*(undefined8 *)(param_2 + 8));
        param_3 = local_28;
      }
      else {
        pvStack_88 = *(void **)(param_2 + 0x10);
        local_90 = *(char **)(param_2 + 8);
        local_80 = *(undefined1 **)(param_2 + 0x18);
      }
      puVar8 = param_1 + 1;
      local_78 = param_3;
LAB_00899a98:
      FUN_0089b384(puVar8,&local_90,&local_90);
    }
    else {
      if ((char)bVar3 < '\0') {
        FUN_005478d8(&local_90,*(undefined8 *)(param_2 + 8));
        if (-1 < param_2[0x37]) goto LAB_008999c4;
LAB_00899a24:
        FUN_005478d8(&local_78,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28));
      }
      else {
        pvStack_88 = *(void **)(param_2 + 0x10);
        local_90 = *(char **)(param_2 + 8);
        local_80 = *(undefined1 **)(param_2 + 0x18);
        if ((uVar5 >> 7 & 1) != 0) goto LAB_00899a24;
LAB_008999c4:
        uStack_70 = *(undefined8 *)(param_2 + 0x28);
        local_78 = *(void **)(param_2 + 0x20);
        local_68 = *(long *)(param_2 + 0x30);
      }
      FUN_00899fd0(param_1 + 10,&local_90,&local_28);
      if (local_68 < 0) {
        operator_delete(local_78);
      }
    }
    if ((long)local_80 < 0) {
      operator_delete(local_90);
    }
  }
  puVar1 = *(uint **)(param_2 + 0x40);
  for (puVar12 = *(uint **)(param_2 + 0x38); puVar12 != puVar1; puVar12 = puVar12 + 1) {
    puVar10 = (uint *)param_1[4];
    uVar5 = *puVar12;
    pvStack_88 = local_28;
    local_90 = (char *)CONCAT44(local_90._4_4_,uVar5);
    lVar4 = (long)param_1[5] - (long)puVar10;
    if (lVar4 != 0) {
      uVar7 = lVar4 >> 4;
      puVar9 = puVar10;
      do {
        uVar11 = uVar7 >> 1;
        puVar10 = puVar9 + uVar11 * 4 + 4;
        uVar7 = uVar7 + ~uVar11;
        if (uVar5 <= puVar9[uVar11 * 4]) {
          puVar10 = puVar9;
          uVar7 = uVar11;
        }
        puVar9 = puVar10;
      } while (uVar7 != 0);
    }
    if ((puVar10 == (uint *)param_1[5]) || (uVar5 < *puVar10)) {
      FUN_0089c1f0(param_1 + 4,puVar10,&local_90);
    }
  }
  puVar2 = *(undefined1 **)(param_2 + 0x58);
  for (puVar13 = *(undefined1 **)(param_2 + 0x50); puVar13 != puVar2; puVar13 = puVar13 + 1) {
    uVar7 = (ulong)local_90 >> 8;
    local_90 = (char *)CONCAT71((int7)uVar7,*puVar13);
    FUN_0089c5bc(param_1 + 7,&local_90,&local_28);
  }
  FUN_0089a124(param_1);
LAB_00899b6c:
  return (uVar6 ^ 0xffffffff) & 1;
}


// ===== 00899b90  FUN_00899b90 =====

bool FUN_00899b90(long *param_1,char *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  char *local_98 [2];
  char cStack_81;
  char *local_80;
  ulong uStack_78;
  undefined1 *local_70;
  void *local_68;
  undefined8 uStack_60;
  long local_58;
  undefined1 uStack_31;
  
  if (*param_1 != 0) {
    return true;
  }
  if (*param_2 == '\x01') {
    if ((((param_1[1] == param_1[2]) && (param_1[4] == param_1[5])) && (param_1[9] == 0)) &&
       (param_1[10] == param_1[0xb])) {
      return param_1[0xd] != param_1[0xe];
    }
    goto LAB_00899fa4;
  }
  bVar4 = param_2[0x1f];
  uVar13 = *(ulong *)(param_2 + 0x10);
  if (-1 < (char)bVar4) {
    uVar13 = (ulong)bVar4;
  }
  if (uVar13 == 0) {
LAB_00899eb8:
    puVar8 = *(uint **)(param_2 + 0x38);
    if (puVar8 != *(uint **)(param_2 + 0x40)) {
      puVar1 = (uint *)param_1[4];
      puVar2 = (uint *)param_1[5];
      do {
        uVar3 = *puVar8;
        uVar13 = (long)puVar2 - (long)puVar1 >> 4;
        puVar10 = puVar1;
        puVar9 = puVar1;
        if (puVar2 != puVar1) {
          do {
            uVar14 = uVar13 >> 1;
            puVar10 = puVar9 + uVar14 * 4 + 4;
            uVar13 = uVar13 + ~uVar14;
            if (uVar3 <= puVar9[uVar14 * 4]) {
              puVar10 = puVar9;
              uVar13 = uVar14;
            }
            puVar9 = puVar10;
          } while (uVar13 != 0);
        }
        if ((puVar10 != puVar2) && (*puVar10 <= uVar3)) {
          uVar13 = FUN_00417e08();
          if ((uVar13 & 1) != 0) goto LAB_00899fa4;
          local_80 = "../../call/rtp_demuxer.cc";
          uStack_78 = 0x751;
          local_70 = &uStack_31;
          FUN_00898f80(local_98,param_2);
          FUN_00623bb0(&DAT_00223e9e,local_80,uStack_78 & 0xffffffff,local_98,
                       " would conflict with existing sink = ",*(undefined8 *)(puVar10 + 2),
                       " binding by SSRC=",uVar3);
          goto joined_r0x00899f90;
        }
        puVar8 = puVar8 + 1;
      } while (puVar8 != *(uint **)(param_2 + 0x40));
    }
    bVar7 = false;
  }
  else {
    bVar5 = param_2[0x37];
    uVar13 = *(ulong *)(param_2 + 0x28);
    if (-1 < (char)bVar5) {
      uVar13 = (ulong)bVar5;
    }
    if (uVar13 == 0) {
      auVar15 = FUN_0089c6ac(param_1 + 0x10,param_2 + 8);
      if ((auVar15._0_8_ == auVar15._8_8_) || (param_1[0x11] == auVar15._0_8_)) goto LAB_00899eb8;
      uVar13 = FUN_00417e08();
      if ((uVar13 & 1) == 0) {
        FUN_00898f80(&local_80,param_2);
        FUN_00623bb0(&DAT_00223e94,"../../call/rtp_demuxer.cc",0x659,&local_80,
                     " would conflict with known mid");
        local_98[0] = local_80;
        if (-1 < (long)local_70) goto LAB_00899fa4;
LAB_00899f9c:
        operator_delete(local_98[0]);
      }
    }
    else {
      if ((char)bVar4 < '\0') {
        FUN_005478d8(&local_80,*(undefined8 *)(param_2 + 8));
        if (param_2[0x37] < '\0') goto LAB_00899cf0;
LAB_00899c60:
        uStack_60 = *(undefined8 *)(param_2 + 0x28);
        local_68 = *(void **)(param_2 + 0x20);
        local_58 = *(long *)(param_2 + 0x30);
      }
      else {
        uStack_78 = *(ulong *)(param_2 + 0x10);
        local_80 = *(char **)(param_2 + 8);
        local_70 = *(undefined1 **)(param_2 + 0x18);
        if (((uint)(int)(char)bVar5 >> 7 & 1) == 0) goto LAB_00899c60;
LAB_00899cf0:
        FUN_005478d8(&local_68,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28));
      }
      lVar12 = param_1[0xb];
      lVar11 = lVar12 - param_1[10];
      if (lVar11 != 0) {
        uVar13 = (lVar11 >> 3) * 0x6db6db6db6db6db7;
        lVar12 = param_1[10];
        do {
          uVar14 = uVar13 >> 1;
          lVar11 = lVar12 + uVar14 * 0x38;
          cVar6 = FUN_0089b99c(lVar11,&local_80);
          lVar11 = lVar11 + 0x38;
          uVar13 = uVar13 + ~uVar14;
          if (-1 < cVar6) {
            lVar11 = lVar12;
            uVar13 = uVar14;
          }
          lVar12 = lVar11;
        } while (uVar13 != 0);
        lVar12 = param_1[0xb];
        if ((lVar12 != lVar11) &&
           ((cVar6 = FUN_0089b99c(&local_80,lVar11), lVar11 == lVar11 + 0x38 ||
            (lVar12 = lVar11, cVar6 < '\0')))) {
          lVar12 = param_1[0xb];
        }
      }
      if (local_58 < 0) {
        operator_delete(local_68);
      }
      if ((long)local_70 < 0) {
        operator_delete(local_80);
      }
      if (lVar12 == param_1[0xb]) {
        auVar15 = FUN_0089c7ec(param_1 + 1,param_2 + 8);
        lVar12 = auVar15._0_8_;
        if ((lVar12 == auVar15._8_8_) || (param_1[2] == lVar12)) goto LAB_00899eb8;
        uVar13 = FUN_00417e08();
        if ((uVar13 & 1) == 0) {
          FUN_00898f80(&local_80,param_2);
          FUN_00623bb0(&DAT_00223e98,"../../call/rtp_demuxer.cc",0x6f9,&local_80,
                       " would conflict with existing sink = ",*(undefined8 *)(lVar12 + 0x18),
                       " by mid binding");
          local_98[0] = local_80;
          if ((long)local_70 < 0) goto LAB_00899f9c;
        }
      }
      else {
        uVar13 = FUN_00417e08();
        if ((uVar13 & 1) == 0) {
          local_80 = "../../call/rtp_demuxer.cc";
          uStack_78 = 0x6a1;
          local_70 = &uStack_31;
          FUN_00898f80(local_98,param_2);
          FUN_00623bb0(&DAT_00223e98,local_80,uStack_78 & 0xffffffff,local_98,
                       " would conflict with existing sink = ",*(undefined8 *)(lVar12 + 0x30),
                       " by mid+rsid binding");
joined_r0x00899f90:
          if (cStack_81 < '\0') goto LAB_00899f9c;
        }
      }
    }
LAB_00899fa4:
    bVar7 = true;
  }
  return bVar7;
}


// ===== 00899fd0  FUN_00899fd0 =====

undefined1  [16] FUN_00899fd0(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  void *local_80;
  undefined8 uStack_78;
  long local_70;
  void *local_68;
  undefined8 uStack_60;
  long local_58;
  undefined8 uStack_50;
  
  uStack_78 = param_2[1];
  local_80 = (void *)*param_2;
  local_70 = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  local_58 = param_2[5];
  uStack_60 = param_2[4];
  local_68 = (void *)param_2[3];
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  lVar5 = param_1[1];
  uStack_50 = *param_3;
  lVar3 = lVar5 - *param_1;
  if (lVar3 != 0) {
    uVar6 = (lVar3 >> 3) * 0x6db6db6db6db6db7;
    lVar3 = *param_1;
    do {
      uVar7 = uVar6 >> 1;
      lVar5 = lVar3 + uVar7 * 0x38;
      cVar1 = FUN_0089b99c(lVar5,&local_80);
      lVar5 = lVar5 + 0x38;
      uVar6 = uVar6 + ~uVar7;
      if (-1 < cVar1) {
        lVar5 = lVar3;
        uVar6 = uVar7;
      }
      lVar3 = lVar5;
    } while (uVar6 != 0);
    if ((param_1[1] != lVar5) && (uVar2 = FUN_0089b99c(&local_80,lVar5), (uVar2 >> 7 & 1) == 0)) {
      uVar4 = 0;
      goto joined_r0x0089a0d4;
    }
  }
  lVar5 = FUN_0089ba80(param_1,lVar5,&local_80);
  uVar4 = 1;
joined_r0x0089a0d4:
  if (local_58 < 0) {
    operator_delete(local_68);
  }
  if (local_70 < 0) {
    operator_delete(local_80);
  }
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = lVar5;
  return auVar8;
}


// ===== 0089a124  FUN_0089a124 =====

/* WARNING: Removing unreachable block (ram,0x0089a1d8) */

void FUN_0089a124(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = (long *)(param_1 + 0x80);
  lVar1 = *(long *)(param_1 + 0x88);
  do {
    if (*plVar3 == lVar1) {
      lVar1 = *(long *)(param_1 + 8);
      lVar2 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x88) = *plVar3;
      for (; lVar1 != lVar2; lVar1 = lVar1 + 0x20) {
        FUN_0089c91c(plVar3,lVar1,lVar1);
      }
      lVar2 = *(long *)(param_1 + 0x58);
      for (lVar1 = *(long *)(param_1 + 0x50); lVar1 != lVar2; lVar1 = lVar1 + 0x38) {
        FUN_0089c91c(plVar3,lVar1,lVar1);
      }
      return;
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != 0);
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0089a200  FUN_0089a200 =====

uint FUN_0089a200(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_24;
  
  local_90 = 0xaaaaaaaaaaaaaa00;
  uStack_80 = 0;
  local_88 = 0;
  uStack_70 = 0;
  local_78 = 0;
  uStack_60 = 0;
  local_68 = 0;
  uStack_50 = 0;
  local_58 = 0;
  uStack_40 = 0;
  local_48 = 0;
  uStack_30 = 0;
  local_38 = 0;
  local_24 = param_2;
  FUN_0089cf8c(&local_58,0,&local_24);
  uVar1 = FUN_008998bc(param_1,&local_90,param_3);
  FUN_00898e5c(&local_90);
  return uVar1 & 1;
}


// ===== 0089a290  FUN_0089a290 =====

bool FUN_0089a290(long param_1,long param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  long *plVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  puVar8 = *(undefined8 **)(param_1 + 8);
  puVar10 = *(undefined8 **)(param_1 + 0x10);
  if (puVar8 == puVar10) {
LAB_0089a2ec:
    puVar9 = puVar8;
    if ((puVar8 != puVar10) && (puVar14 = puVar8 + 4, puVar14 != puVar10)) {
      do {
        if (puVar14[3] != param_2) {
          if (*(char *)((long)puVar8 + 0x17) < '\0') {
            operator_delete((void *)*puVar8);
            *puVar8 = 0;
            puVar8[1] = 0;
            puVar8[2] = 0;
          }
          uVar22 = puVar14[1];
          uVar21 = *puVar14;
          puVar8[2] = puVar14[2];
          puVar8[1] = uVar22;
          *puVar8 = uVar21;
          *(undefined1 *)((long)puVar14 + 0x17) = 0;
          *(undefined1 *)puVar14 = 0;
          puVar8[3] = puVar14[3];
          puVar8 = puVar8 + 4;
        }
        puVar14 = puVar14 + 4;
      } while (puVar14 != puVar10);
      puVar10 = *(undefined8 **)(param_1 + 0x10);
      puVar9 = puVar8;
    }
  }
  else {
    do {
      if (puVar8[3] == param_2) goto LAB_0089a2ec;
      puVar8 = puVar8 + 4;
      puVar9 = puVar10;
    } while (puVar8 != puVar10);
  }
  FUN_0089d3d8((undefined8 *)(param_1 + 8),puVar9,puVar10);
  puVar2 = *(undefined4 **)(param_1 + 0x20);
  puVar4 = *(undefined4 **)(param_1 + 0x28);
  if (puVar2 == puVar4) {
LAB_0089a3a0:
    if ((puVar2 != puVar4) && (puVar5 = puVar2 + 4, puVar5 != puVar4)) {
      do {
        if (*(long *)(puVar5 + 2) != param_2) {
          *puVar2 = *puVar5;
          *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(puVar5 + 2);
          puVar2 = puVar2 + 4;
        }
        puVar5 = puVar5 + 4;
      } while (puVar5 != puVar4);
      puVar4 = *(undefined4 **)(param_1 + 0x28);
    }
    lVar18 = (long)puVar4 - (long)puVar2;
    if (puVar4 < puVar2) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:1170: libc++ Hardening assertion __first <= __last failed: vector::erase(first, last) called with invalid range\n"
                );
    }
    if (puVar2 != puVar4) {
      puVar5 = (undefined4 *)((long)puVar2 + lVar18);
      if (puVar5 != puVar4) {
        do {
          *puVar2 = *puVar5;
          puVar8 = (undefined8 *)(puVar5 + 2);
          puVar5 = puVar5 + 4;
          *(undefined8 *)(puVar2 + 2) = *puVar8;
          puVar2 = puVar2 + 4;
        } while (puVar5 != puVar4);
        puVar4 = *(undefined4 **)(param_1 + 0x28);
      }
      uVar7 = (ulong)((long)puVar4 + (-0x10 - ((long)puVar4 << 0x3c))) >> 4;
      uVar6 = (ulong)(((long)puVar2 - (long)puVar4 << 0x3c) - ((long)puVar2 - (long)puVar4)) >> 4;
      if (uVar7 <= uVar6) {
        uVar6 = uVar7;
      }
      if ((1 < uVar6) && ((((int)puVar2 - (int)puVar4 | -(int)puVar4) & 0xfU) == 0)) {
        uVar6 = uVar6 & 0xffffffffffffffe;
        puVar4 = puVar4 + uVar6 * -4;
        do {
          uVar6 = uVar6 - 2;
        } while (uVar6 != 0);
      }
      do {
        if (puVar4 == puVar2) {
          lVar18 = lVar18 >> 4;
          *(undefined4 **)(param_1 + 0x28) = puVar2;
          goto LAB_0089a4a4;
        }
        puVar4 = puVar4 + -4;
      } while (puVar4 != (undefined4 *)0x0);
LAB_0089a48c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
  }
  else {
    do {
      if (*(long *)(puVar2 + 2) == param_2) goto LAB_0089a3a0;
      puVar2 = puVar2 + 4;
    } while (puVar2 != puVar4);
  }
  lVar18 = 0;
LAB_0089a4a4:
  plVar11 = *(long **)(param_1 + 0x38);
  if (plVar11 == (long *)(param_1 + 0x40)) {
    lVar20 = 0;
  }
  else {
    lVar20 = 0;
    do {
      plVar3 = (long *)plVar11[1];
      if (plVar11[5] == param_2) {
        plVar12 = plVar11;
        if (plVar3 == (long *)0x0) {
          do {
            plVar15 = (long *)plVar12[2];
            bVar1 = plVar12 != (long *)*plVar15;
            plVar12 = plVar15;
          } while (bVar1);
        }
        else {
          do {
            plVar15 = plVar3;
            plVar3 = (long *)*plVar15;
          } while ((long *)*plVar15 != (long *)0x0);
        }
        if (*(long **)(param_1 + 0x38) == plVar11) {
          *(long **)(param_1 + 0x38) = plVar15;
        }
        *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -1;
        FUN_005d5d48(*(undefined8 *)(param_1 + 0x40),plVar11);
        if (plVar11 == (long *)0xffffffffffffffe0) goto LAB_0089a48c;
        operator_delete(plVar11);
        lVar20 = lVar20 + 1;
        plVar11 = plVar15;
      }
      else {
        plVar12 = plVar11;
        if (plVar3 == (long *)0x0) {
          do {
            plVar11 = (long *)plVar12[2];
            bVar1 = plVar12 != (long *)*plVar11;
            plVar12 = plVar11;
          } while (bVar1);
        }
        else {
          do {
            plVar11 = plVar3;
            plVar3 = (long *)*plVar11;
          } while ((long *)*plVar11 != (long *)0x0);
        }
      }
    } while (plVar11 != (long *)(param_1 + 0x40));
  }
  puVar8 = *(undefined8 **)(param_1 + 0x50);
  puVar14 = *(undefined8 **)(param_1 + 0x58);
  if (puVar8 == puVar14) {
LAB_0089a5ac:
    puVar13 = puVar8;
    if ((puVar8 != puVar14) && (puVar19 = puVar8 + 7, puVar19 != puVar14)) {
      do {
        if (puVar19[6] != param_2) {
          if (*(char *)((long)puVar8 + 0x17) < '\0') {
            operator_delete((void *)*puVar8);
            *puVar8 = 0;
            puVar8[1] = 0;
            puVar8[2] = 0;
          }
          uVar22 = puVar19[1];
          uVar21 = *puVar19;
          puVar8[2] = puVar19[2];
          puVar8[1] = uVar22;
          *puVar8 = uVar21;
          *(undefined1 *)((long)puVar19 + 0x17) = 0;
          *(undefined1 *)puVar19 = 0;
          if (*(char *)((long)puVar8 + 0x2f) < '\0') {
            operator_delete((void *)puVar8[3]);
            puVar8[3] = 0;
            puVar8[4] = 0;
            puVar8[5] = 0;
          }
          uVar22 = puVar19[4];
          uVar21 = puVar19[3];
          puVar8[5] = puVar19[5];
          puVar8[4] = uVar22;
          puVar8[3] = uVar21;
          *(undefined1 *)((long)puVar19 + 0x2f) = 0;
          *(undefined1 *)(puVar19 + 3) = 0;
          puVar8[6] = puVar19[6];
          puVar8 = puVar8 + 7;
        }
        puVar19 = puVar19 + 7;
      } while (puVar19 != puVar14);
      puVar14 = *(undefined8 **)(param_1 + 0x58);
      puVar13 = puVar8;
    }
  }
  else {
    do {
      if (puVar8[6] == param_2) goto LAB_0089a5ac;
      puVar8 = puVar8 + 7;
      puVar13 = puVar14;
    } while (puVar8 != puVar14);
  }
  FUN_0089d528((undefined8 *)(param_1 + 0x50),puVar13,puVar14);
  puVar8 = *(undefined8 **)(param_1 + 0x68);
  puVar19 = *(undefined8 **)(param_1 + 0x70);
  if (puVar8 == puVar19) {
LAB_0089a6a0:
    puVar17 = puVar8;
    if ((puVar8 != puVar19) && (puVar16 = puVar8 + 4, puVar16 != puVar19)) {
      do {
        if (puVar16[3] != param_2) {
          if (*(char *)((long)puVar8 + 0x17) < '\0') {
            operator_delete((void *)*puVar8);
            *puVar8 = 0;
            puVar8[1] = 0;
            puVar8[2] = 0;
          }
          uVar22 = puVar16[1];
          uVar21 = *puVar16;
          puVar8[2] = puVar16[2];
          puVar8[1] = uVar22;
          *puVar8 = uVar21;
          *(undefined1 *)((long)puVar16 + 0x17) = 0;
          *(undefined1 *)puVar16 = 0;
          puVar8[3] = puVar16[3];
          puVar8 = puVar8 + 4;
        }
        puVar16 = puVar16 + 4;
      } while (puVar16 != puVar19);
      puVar19 = *(undefined8 **)(param_1 + 0x70);
      puVar17 = puVar8;
    }
  }
  else {
    do {
      if (puVar8[3] == param_2) goto LAB_0089a6a0;
      puVar8 = puVar8 + 4;
      puVar17 = puVar19;
    } while (puVar8 != puVar19);
  }
  FUN_0089d3d8((undefined8 *)(param_1 + 0x68),puVar17,puVar19);
  FUN_0089a124(param_1);
  return lVar18 + ((long)puVar10 - (long)puVar9 >> 5) + lVar20 +
         ((long)puVar14 - (long)puVar13 >> 3) * 0x6db6db6db6db6db7 +
         ((long)puVar19 - (long)puVar17 >> 5) != 0;
}


// ===== 0089a7b4  FUN_0089a7b4 =====

void FUN_0089a7b4(long *param_1,long param_2,long param_3)

{
  uint *puVar1;
  uint *puVar2;
  long lVar3;
  uint *puVar4;
  uint *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 != 0) {
    puVar2 = *(uint **)(param_2 + 0x28);
    for (puVar1 = *(uint **)(param_2 + 0x20); puVar1 != puVar2; puVar1 = puVar1 + 4) {
      if (*(long *)(puVar1 + 2) == param_3) {
        puVar5 = (uint *)*param_1;
        lVar3 = param_1[1] - (long)puVar5;
        if (lVar3 != 0) {
          uVar6 = lVar3 >> 2;
          puVar4 = puVar5;
          do {
            uVar7 = uVar6 >> 1;
            puVar5 = puVar4 + uVar7 + 1;
            uVar6 = uVar6 + ~uVar7;
            if (*puVar1 <= puVar4[uVar7]) {
              puVar5 = puVar4;
              uVar6 = uVar7;
            }
            puVar4 = puVar5;
          } while (uVar6 != 0);
        }
        if ((puVar5 == (uint *)param_1[1]) || (*puVar1 < *puVar5)) {
          FUN_0089cf8c(param_1,puVar5,puVar1);
        }
      }
    }
  }
  return;
}


// ===== 0089a87c  FUN_0089a87c =====

bool FUN_0089a87c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_0089a8c8();
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
  }
  return plVar1 != (long *)0x0;
}


// ===== 0089a8c8  FUN_0089a8c8 =====

/* WARNING: Removing unreachable block (ram,0x0089aa20) */
/* WARNING: Removing unreachable block (ram,0x0089ab3c) */
/* WARNING: Type propagation algorithm not settling */

long FUN_0089a8c8(long *param_1,long param_2)

{
  undefined8 *******pppppppuVar1;
  char cVar2;
  undefined8 *******pppppppuVar3;
  uint uVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  uint ******ppppppuVar10;
  uint ******ppppppuVar11;
  uint *puVar12;
  ulong uVar13;
  uint *******pppppppuVar14;
  uint *******pppppppuVar15;
  uint *******pppppppuVar16;
  long lVar17;
  undefined1 auVar18 [16];
  undefined8 *******local_88;
  ulong uStack_80;
  ulong local_78;
  uint *******local_70;
  ulong uStack_68;
  ulong local_60;
  uint *******local_58;
  uint ******ppppppuStack_50;
  undefined8 local_48;
  uint local_24;
  
  if (*param_1 != 0) {
    return *param_1;
  }
  local_70 = (uint *******)0x0;
  uStack_68 = 0;
  local_60 = 0;
  local_88 = (undefined8 *******)0x0;
  uStack_80 = 0;
  local_78 = 0;
  if ((char)param_1[0x19] == '\x01') {
    auVar18 = FUN_007dba34(param_2,0x10);
    if (auVar18._8_8_ == 0) goto LAB_0089a930;
    uVar6 = FUN_007d98d0(auVar18._0_8_,auVar18._8_8_,&local_70);
    uVar6 = uVar6 & 0xffffffff;
  }
  else {
LAB_0089a930:
    uVar6 = 0;
  }
  auVar18 = FUN_007dba34(param_2,0xf);
  if ((auVar18._8_8_ == 0) ||
     (uVar7 = FUN_007d98d0(auVar18._0_8_,auVar18._8_8_,&local_88), (uVar7 & 1) == 0)) {
    auVar18 = FUN_007dba34(param_2,0xe);
    if (auVar18._8_8_ == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_007d98d0(auVar18._0_8_,auVar18._8_8_,&local_88);
      uVar7 = uVar7 & 0xffffffff;
    }
  }
  else {
    uVar7 = 1;
  }
  local_24 = *(uint *)(param_2 + 0xc);
  if ((uVar6 & 1) == 0) {
    puVar8 = (uint *)param_1[0x13];
    puVar9 = (uint *)param_1[0x14];
    if ((long)puVar9 - (long)puVar8 != 0) {
      uVar6 = (long)puVar9 - (long)puVar8 >> 5;
      puVar12 = puVar8;
      do {
        uVar13 = uVar6 >> 1;
        puVar8 = puVar12 + uVar13 * 8 + 8;
        uVar6 = uVar6 + ~uVar13;
        if (local_24 <= puVar12[uVar13 * 8]) {
          puVar8 = puVar12;
          uVar6 = uVar13;
        }
        puVar12 = puVar8;
      } while (uVar6 != 0);
    }
    if (puVar8 == puVar9) {
      pppppppuVar14 = (uint *******)0x0;
    }
    else {
      if (*puVar8 <= local_24) {
        puVar9 = puVar8;
      }
      pppppppuVar14 = (uint *******)0x0;
      if (*puVar8 <= local_24) {
        pppppppuVar14 = (uint *******)(puVar9 + 2);
      }
    }
LAB_0089aac0:
    puVar9 = (uint *)param_1[0x16];
    puVar8 = (uint *)param_1[0x17];
    bVar5 = (long)puVar8 - (long)puVar9 != 0;
    uVar6 = (long)puVar8 - (long)puVar9 >> 5;
    if ((uVar7 & 1) == 0) {
      while (bVar5) {
        uVar7 = uVar6 >> 1;
        puVar12 = puVar9 + uVar7 * 8 + 8;
        uVar6 = uVar6 + ~uVar7;
        if (local_24 <= puVar9[uVar7 * 8]) {
          puVar12 = puVar9;
          uVar6 = uVar7;
        }
        bVar5 = uVar6 != 0;
        puVar9 = puVar12;
      }
      uVar4 = local_24;
      if (puVar9 != puVar8) {
        if (*puVar9 <= local_24) {
          puVar8 = puVar9;
        }
        pppppppuVar16 = (uint *******)0x0;
        if (*puVar9 <= local_24) {
          pppppppuVar16 = (uint *******)(puVar8 + 2);
        }
        goto joined_r0x0089abd8;
      }
      if (pppppppuVar14 != (uint *******)0x0) {
        pppppppuVar16 = (uint *******)0x0;
        cVar2 = *(char *)((long)pppppppuVar14 + 0x17);
        goto joined_r0x0089abf8;
      }
    }
    else {
      while (bVar5) {
        uVar7 = uVar6 >> 1;
        puVar12 = puVar9 + uVar7 * 8 + 8;
        uVar6 = uVar6 + ~uVar7;
        if (local_24 <= puVar9[uVar7 * 8]) {
          puVar12 = puVar9;
          uVar6 = uVar7;
        }
        bVar5 = uVar6 != 0;
        puVar9 = puVar12;
      }
      if ((puVar9 == puVar8) || (local_24 < *puVar9)) {
        local_58 = (uint *******)0x0;
        ppppppuStack_50 = (uint ******)0x0;
        local_48 = 0;
        puVar9 = (uint *)FUN_0089d6e4(param_1 + 0x16,puVar9,&local_24,&local_58);
      }
      pppppppuVar1 = (undefined8 *******)(puVar9 + 2);
      if ((undefined8 ********)pppppppuVar1 != &local_88) {
        if (*(char *)((long)puVar9 + 0x1f) < '\0') {
          uVar6 = uStack_80;
          pppppppuVar3 = local_88;
          if (-1 < (long)local_78) {
            uVar6 = local_78 >> 0x38;
            pppppppuVar3 = &local_88;
          }
          FUN_00547f08(pppppppuVar1,pppppppuVar3,uVar6);
        }
        else {
          if (-1 < (long)local_78) {
            *(ulong *)(puVar9 + 6) = local_78;
            *(ulong *)(puVar9 + 4) = uStack_80;
            *pppppppuVar1 = local_88;
            pppppppuVar16 = (uint *******)&local_88;
            uVar4 = local_24;
            goto joined_r0x0089abd8;
          }
          FUN_00547fc0(pppppppuVar1,local_88,uStack_80);
        }
      }
      pppppppuVar16 = (uint *******)&local_88;
      uVar4 = local_24;
joined_r0x0089abd8:
      if (pppppppuVar14 != (uint *******)0x0) {
        cVar2 = *(char *)((long)pppppppuVar14 + 0x17);
joined_r0x0089abf8:
        ppppppuStack_50 = (uint ******)(long)cVar2;
        local_58 = pppppppuVar14;
        if ((long)ppppppuStack_50 < 0) {
          ppppppuStack_50 = pppppppuVar14[1];
          local_58 = (uint *******)*pppppppuVar14;
        }
        local_24 = uVar4;
        auVar18 = FUN_0089dbc8(param_1 + 1,&local_58);
        lVar17 = auVar18._0_8_;
        if ((lVar17 != auVar18._8_8_) && (param_1[2] != lVar17)) {
          lVar17 = *(long *)(lVar17 + 0x18);
          FUN_0089b218(param_1,uVar4,lVar17);
          if (lVar17 != 0) goto LAB_0089ad68;
        }
        if (pppppppuVar16 != (uint *******)0x0) {
          ppppppuVar10 = (uint ******)(long)*(char *)((long)pppppppuVar14 + 0x17);
          pppppppuVar15 = pppppppuVar14;
          if ((long)ppppppuVar10 < 0) {
            pppppppuVar15 = (uint *******)*pppppppuVar14;
            ppppppuVar10 = pppppppuVar14[1];
          }
          ppppppuVar11 = (uint ******)(long)*(char *)((long)pppppppuVar16 + 0x17);
          pppppppuVar14 = pppppppuVar16;
          if ((long)ppppppuVar11 < 0) {
            pppppppuVar14 = (uint *******)*pppppppuVar16;
            ppppppuVar11 = pppppppuVar16[1];
          }
          lVar17 = FUN_0089ae08(param_1,pppppppuVar15,ppppppuVar10,pppppppuVar14,ppppppuVar11,
                                local_24);
          if (lVar17 != 0) goto LAB_0089ad68;
        }
        goto LAB_0089ac80;
      }
      local_24 = uVar4;
      if (pppppppuVar16 != (uint *******)0x0) {
        ppppppuStack_50 = (uint ******)(long)*(char *)((long)pppppppuVar16 + 0x17);
        local_58 = pppppppuVar16;
        if ((long)ppppppuStack_50 < 0) {
          local_58 = (uint *******)*pppppppuVar16;
          ppppppuStack_50 = *(uint *******)((long)pppppppuVar16 + 8);
        }
        auVar18 = FUN_0089dbc8(param_1 + 0xd,&local_58);
        lVar17 = auVar18._0_8_;
        if ((lVar17 != auVar18._8_8_) && (param_1[0xe] != lVar17)) {
          lVar17 = *(long *)(lVar17 + 0x18);
          FUN_0089b218(param_1,uVar4,lVar17);
          if (lVar17 != 0) goto LAB_0089ad68;
        }
      }
    }
    puVar8 = (uint *)param_1[4];
    lVar17 = param_1[5] - (long)puVar8;
    if (lVar17 != 0) {
      uVar6 = lVar17 >> 4;
      puVar9 = puVar8;
      do {
        uVar7 = uVar6 >> 1;
        puVar8 = puVar9 + uVar7 * 4 + 4;
        uVar6 = uVar6 + ~uVar7;
        if (local_24 <= puVar9[uVar7 * 4]) {
          puVar8 = puVar9;
          uVar6 = uVar7;
        }
        puVar9 = puVar8;
      } while (uVar6 != 0);
    }
    if ((puVar8 == (uint *)param_1[5]) || (local_24 < *puVar8)) {
      lVar17 = FUN_0089b10c(param_1,*(undefined1 *)(param_2 + 1),local_24);
    }
    else {
      lVar17 = *(long *)(puVar8 + 2);
    }
  }
  else {
    auVar18 = FUN_0089c6ac(param_1 + 0x10,&local_70);
    if ((auVar18._0_8_ != auVar18._8_8_) && (param_1[0x11] != auVar18._0_8_)) {
      puVar8 = (uint *)param_1[0x13];
      lVar17 = param_1[0x14] - (long)puVar8;
      if (lVar17 != 0) {
        uVar6 = lVar17 >> 5;
        puVar9 = puVar8;
        do {
          uVar13 = uVar6 >> 1;
          puVar8 = puVar9 + uVar13 * 8 + 8;
          uVar6 = uVar6 + ~uVar13;
          if (local_24 <= puVar9[uVar13 * 8]) {
            puVar8 = puVar9;
            uVar6 = uVar13;
          }
          puVar9 = puVar8;
        } while (uVar6 != 0);
      }
      if ((puVar8 == (uint *)param_1[0x14]) || (local_24 < *puVar8)) {
        local_58 = (uint *******)0x0;
        ppppppuStack_50 = (uint ******)0x0;
        local_48 = 0;
        puVar8 = (uint *)FUN_0089d6e4(param_1 + 0x13,puVar8,&local_24,&local_58);
      }
      pppppppuVar16 = (uint *******)(puVar8 + 2);
      pppppppuVar14 = (uint *******)&local_70;
      if ((uint ********)pppppppuVar16 != &local_70) {
        if (*(char *)((long)puVar8 + 0x1f) < '\0') {
          uVar6 = uStack_68;
          pppppppuVar14 = local_70;
          if (-1 < (long)local_60) {
            uVar6 = local_60 >> 0x38;
            pppppppuVar14 = (uint *******)&local_70;
          }
          FUN_00547f08(pppppppuVar16,pppppppuVar14,uVar6);
          pppppppuVar14 = (uint *******)&local_70;
        }
        else if ((long)local_60 < 0) {
          FUN_00547fc0(pppppppuVar16,local_70,uStack_68);
          pppppppuVar14 = (uint *******)&local_70;
        }
        else {
          *(ulong *)(puVar8 + 6) = local_60;
          *(ulong *)(puVar8 + 4) = uStack_68;
          *pppppppuVar16 = (uint ******)local_70;
          pppppppuVar14 = (uint *******)&local_70;
        }
      }
      goto LAB_0089aac0;
    }
LAB_0089ac80:
    lVar17 = 0;
  }
LAB_0089ad68:
  if ((long)local_78 < 0) {
    operator_delete(local_88);
  }
  if ((long)local_60 < 0) {
    operator_delete(local_70);
  }
  return lVar17;
}


// ===== 0089ae08  FUN_0089ae08 =====

undefined8
FUN_0089ae08(long param_1,undefined8 ****param_2,ulong param_3,undefined1 *param_4,ulong param_5,
            undefined4 param_6)

{
  undefined8 ***pppuVar1;
  char cVar2;
  undefined8 ****__dest;
  undefined1 **__dest_00;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  undefined8 ***local_a8;
  ulong uStack_a0;
  undefined8 local_98;
  undefined8 ***local_90;
  ulong uStack_88;
  ulong local_80;
  undefined1 *local_78;
  ulong uStack_70;
  ulong local_68;
  
  __dest_00 = &local_c0;
  if (param_3 < 0x7ffffffffffffff7) {
    if (param_3 < 0x17) {
      local_98 = CONCAT17((char)param_3,(undefined7)local_98);
      __dest = &local_a8;
    }
    else {
      uVar6 = (param_3 & 0x7ffffffffffffff8) + 8;
      uVar7 = 0x19;
      if (uVar6 != 0x18) {
        uVar7 = uVar6;
      }
      __dest = (undefined8 ****)operator_new(uVar7);
      local_98 = uVar7 | 0x8000000000000000;
      local_a8 = __dest;
      uStack_a0 = param_3;
    }
    if ((undefined8 ****)((long)__dest + param_3) < __dest) {
LAB_0089b0e0:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                );
    }
    if ((param_2 < __dest) || ((undefined8 ****)((long)__dest + param_3) <= param_2)) {
      memmove(__dest,param_2,param_3);
      *(undefined1 *)((long)__dest + param_3) = 0;
      if (0x7ffffffffffffff6 < param_5) goto LAB_0089b108;
      if (param_5 < 0x17) {
        local_b0 = CONCAT17((char)param_5,(undefined7)local_b0);
      }
      else {
        uVar6 = (param_5 & 0x7ffffffffffffff8) + 8;
        uVar7 = 0x19;
        if (uVar6 != 0x18) {
          uVar7 = uVar6;
        }
        __dest_00 = (undefined1 **)operator_new(uVar7);
        local_b0 = uVar7 | 0x8000000000000000;
        local_c0 = (undefined1 *)__dest_00;
        uStack_b8 = param_5;
      }
      if ((undefined1 *)((long)__dest_00 + param_5) < __dest_00) goto LAB_0089b0e0;
      if ((param_4 < __dest_00) || ((undefined1 *)((long)__dest_00 + param_5) <= param_4)) {
        memmove(__dest_00,param_4,param_5);
        uVar7 = local_98;
        uVar6 = uStack_a0;
        pppuVar1 = local_a8;
        *(undefined1 *)((long)__dest_00 + param_5) = 0;
        local_68 = local_b0;
        uStack_70 = uStack_b8;
        local_78 = local_c0;
        lVar5 = *(long *)(param_1 + 0x58);
        local_a8 = (undefined8 ***)0x0;
        uStack_a0 = 0;
        local_80 = local_98;
        uStack_88 = uVar6;
        local_90 = pppuVar1;
        lVar4 = lVar5 - *(long *)(param_1 + 0x50);
        local_98 = 0;
        uStack_b8 = 0;
        local_b0 = 0;
        local_c0 = (undefined1 *)0x0;
        if (lVar4 != 0) {
          uVar6 = (lVar4 >> 3) * 0x6db6db6db6db6db7;
          lVar5 = *(long *)(param_1 + 0x50);
          do {
            uVar7 = uVar6 >> 1;
            lVar4 = lVar5 + uVar7 * 0x38;
            cVar2 = FUN_0089b99c(lVar4,&local_90);
            lVar4 = lVar4 + 0x38;
            uVar6 = uVar6 + ~uVar7;
            if (-1 < cVar2) {
              lVar4 = lVar5;
              uVar6 = uVar7;
            }
            lVar5 = lVar4;
          } while (uVar6 != 0);
          lVar5 = *(long *)(param_1 + 0x58);
          if ((lVar5 != lVar4) &&
             ((cVar2 = FUN_0089b99c(&local_90,lVar4), lVar4 == lVar4 + 0x38 ||
              (lVar5 = lVar4, cVar2 < '\0')))) {
            lVar5 = *(long *)(param_1 + 0x58);
          }
        }
        if ((long)local_68 < 0) {
          operator_delete(local_78);
        }
        if ((long)local_80 < 0) {
          operator_delete(local_90);
        }
        if ((long)local_b0 < 0) {
          operator_delete(local_c0);
        }
        if ((long)local_98 < 0) {
          operator_delete(local_a8);
        }
        if (lVar5 == *(long *)(param_1 + 0x58)) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined8 *)(lVar5 + 0x30);
          FUN_0089b218(param_1,param_6,uVar3);
        }
        return uVar3;
      }
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
LAB_0089b108:
                    /* WARNING: Subroutine does not return */
  FUN_005d45ec();
}


// ===== 0089b10c  FUN_0089b10c =====

/* WARNING: Type propagation algorithm not settling */

long FUN_0089b10c(long param_1,byte param_2,undefined4 param_3)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  plVar1 = *(long **)(param_1 + 0x40);
  plVar2 = (long *)(param_1 + 0x40);
  while( true ) {
    while( true ) {
      plVar5 = plVar1;
      if (plVar5 == (long *)0x0) {
        return 0;
      }
      if (*(byte *)(plVar5 + 4) <= param_2) break;
      plVar1 = (long *)*plVar5;
      plVar2 = plVar5;
    }
    if (param_2 == *(byte *)(plVar5 + 4)) break;
    plVar1 = (long *)plVar5[1];
  }
  plVar1 = plVar5;
  for (plVar6 = (long *)*plVar5; plVar6 != (long *)0x0; plVar6 = *(long **)((long)plVar6 + lVar7)) {
    lVar7 = 8;
    if (param_2 <= *(byte *)(plVar6 + 4)) {
      lVar7 = 0;
      plVar1 = plVar6;
    }
  }
  for (plVar5 = (long *)plVar5[1]; plVar5 != (long *)0x0; plVar5 = *(long **)((long)plVar5 + lVar7))
  {
    lVar7 = 0;
    plVar6 = plVar5;
    if (*(byte *)(plVar5 + 4) <= param_2) {
      lVar7 = 8;
      plVar6 = plVar2;
    }
    plVar2 = plVar6;
  }
  if (plVar1 != plVar2) {
    plVar5 = plVar1;
    plVar6 = (long *)plVar1[1];
    if ((long *)plVar1[1] == (long *)0x0) {
      do {
        plVar4 = (long *)plVar5[2];
        bVar3 = plVar5 != (long *)*plVar4;
        plVar5 = plVar4;
      } while (bVar3);
    }
    else {
      do {
        plVar4 = plVar6;
        plVar6 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
    }
    if (plVar4 == plVar2) {
      lVar7 = plVar1[5];
      FUN_0089b218(param_1,param_3,lVar7);
      return lVar7;
    }
  }
  return 0;
}


// ===== 0089b218  FUN_0089b218 =====

void FUN_0089b218(long param_1,uint param_2,long param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  ulong uVar4;
  ulong uVar5;
  uint local_30 [2];
  long local_28;
  
  puVar3 = *(uint **)(param_1 + 0x20);
  puVar1 = *(uint **)(param_1 + 0x28);
  uVar4 = (long)puVar1 - (long)puVar3 >> 4;
  if (uVar4 < 1000) {
    puVar2 = puVar3;
    if (puVar1 != puVar3) {
      do {
        uVar5 = uVar4 >> 1;
        puVar3 = puVar2 + uVar5 * 4 + 4;
        uVar4 = uVar4 + ~uVar5;
        if (param_2 <= puVar2[uVar5 * 4]) {
          puVar3 = puVar2;
          uVar4 = uVar5;
        }
        puVar2 = puVar3;
      } while (uVar4 != 0);
    }
    if ((puVar3 == puVar1) || (param_2 < *puVar3)) {
      local_30[0] = param_2;
      local_28 = param_3;
      FUN_0089c1f0((long *)(param_1 + 0x20),puVar3,local_30);
    }
    else if (*(long *)(puVar3 + 2) != param_3) {
      *(long *)(puVar3 + 2) = param_3;
    }
  }
  else {
    uVar4 = FUN_004022fc();
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_00223ea5,"../../call/rtp_demuxer.cc",0xe6a,"New SSRC=",param_2,
                   " sink binding ignored; limit of",1000," bindings has been reached.");
      return;
    }
  }
  return;
}


// ===== 0089b310  FUN_0089b310 =====

void FUN_0089b310(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_0089b310(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      puVar1 = (undefined8 *)param_2[1];
      operator_delete(param_2);
      param_2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
  }
  return;
}


// ===== 0089b384  FUN_0089b384 =====

undefined1  [16] FUN_0089b384(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *__s1;
  ulong uVar2;
  undefined8 *puVar3;
  size_t sVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  
  puVar9 = (undefined8 *)*param_1;
  puVar5 = (undefined8 *)param_1[1];
  lVar6 = (long)puVar5 - (long)puVar9;
  if (lVar6 != 0) {
    uVar11 = lVar6 >> 5;
    puVar3 = (undefined8 *)*param_2;
    uVar2 = param_2[1];
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      puVar3 = param_2;
      uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    do {
      uVar12 = uVar11 >> 1;
      puVar1 = puVar9 + uVar12 * 4;
      __s1 = (undefined8 *)*puVar1;
      uVar7 = puVar1[1];
      if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
        __s1 = puVar1;
        uVar7 = (ulong)*(byte *)((long)puVar1 + 0x17);
      }
      sVar4 = uVar2;
      if (uVar7 <= uVar2) {
        sVar4 = uVar7;
      }
      iVar8 = memcmp(__s1,puVar3,sVar4);
      if (iVar8 == 0) {
        if (uVar7 < uVar2) goto LAB_0089b3e0;
      }
      else if (iVar8 < 0) {
LAB_0089b3e0:
        puVar9 = puVar1 + 4;
        uVar12 = uVar11 + ~uVar12;
      }
      uVar11 = uVar12;
    } while (uVar11 != 0);
  }
  if (puVar9 != puVar5) {
    uVar2 = param_2[1];
    puVar5 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar5 = param_2;
    }
    puVar3 = (undefined8 *)*puVar9;
    uVar11 = puVar9[1];
    if (-1 < (char)*(byte *)((long)puVar9 + 0x17)) {
      puVar3 = puVar9;
      uVar11 = (ulong)*(byte *)((long)puVar9 + 0x17);
    }
    sVar4 = uVar11;
    if (uVar2 <= uVar11) {
      sVar4 = uVar2;
    }
    iVar8 = memcmp(puVar5,puVar3,sVar4);
    if (iVar8 == 0) {
      if (uVar11 <= uVar2) goto LAB_0089b4ac;
    }
    else if (-1 < iVar8) {
LAB_0089b4ac:
      uVar10 = 0;
      goto LAB_0089b4b0;
    }
  }
  puVar9 = (undefined8 *)FUN_0089b4d8(param_1,puVar9,param_3);
  uVar10 = 1;
LAB_0089b4b0:
  auVar13._8_8_ = uVar10;
  auVar13._0_8_ = puVar9;
  return auVar13;
}


// ===== 0089b4d8  FUN_0089b4d8 =====

/* WARNING: Removing unreachable block (ram,0x0089b5d8) */

undefined8 * FUN_0089b4d8(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  size_t __n;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  void *__dest;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  void *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  void *pvStack_68;
  
  puVar6 = (undefined8 *)param_1[1];
  if (puVar6 < (undefined8 *)param_1[2]) {
    puVar9 = param_2;
    if (param_2 == puVar6) {
      if (param_2 == (undefined8 *)0x0) {
LAB_0089b754:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      uVar15 = param_3[1];
      uVar13 = *param_3;
      puVar6[2] = param_3[2];
      puVar6[1] = uVar15;
      *puVar6 = uVar13;
      param_3[1] = 0;
      param_3[2] = 0;
      *param_3 = 0;
      puVar6[3] = param_3[3];
      param_1[1] = (long)(puVar6 + 4);
    }
    else {
      uVar13 = param_3[2];
      uVar3 = param_3[3];
      uVar15 = *param_3;
      uVar4 = param_3[1];
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
      puVar10 = (undefined8 *)param_1[1];
      puVar1 = puVar10;
      for (puVar6 = puVar10 + -4; puVar6 < puVar10; puVar6 = puVar6 + 4) {
        if (puVar1 == (undefined8 *)0x0) goto LAB_0089b754;
        uVar14 = puVar6[1];
        uVar12 = *puVar6;
        puVar1[2] = puVar6[2];
        puVar1[1] = uVar14;
        *puVar1 = uVar12;
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = 0;
        puVar1[3] = puVar6[3];
        puVar1 = puVar1 + 4;
      }
      param_1[1] = (long)puVar1;
      if (puVar10 != param_2 + 4) {
        lVar11 = 0;
        do {
          puVar6 = (undefined8 *)((long)puVar10 + lVar11 + -0x40);
          *(undefined8 *)((long)puVar10 + lVar11 + -0x10) =
               *(undefined8 *)((long)puVar10 + lVar11 + -0x30);
          *(undefined8 *)((long)puVar10 + lVar11 + -0x18) =
               *(undefined8 *)((long)puVar10 + lVar11 + -0x38);
          *(undefined8 *)((long)puVar10 + lVar11 + -0x20) = *puVar6;
          lVar5 = lVar11 + -0x40;
          *(undefined1 *)((long)puVar10 + lVar11 + -0x29) = 0;
          *(undefined1 *)puVar6 = 0;
          *(undefined8 *)((long)puVar10 + lVar11 + -8) =
               *(undefined8 *)((long)puVar10 + lVar11 + -0x28);
          lVar11 = lVar11 + -0x20;
        } while ((undefined8 *)((long)puVar10 + lVar5) != param_2);
      }
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        operator_delete((void *)*param_2);
      }
      *param_2 = uVar15;
      param_2[1] = uVar4;
      param_2[2] = uVar13;
      param_2[3] = uVar3;
    }
  }
  else {
    lVar11 = *param_1;
    uVar2 = ((long)puVar6 - lVar11 >> 5) + 1;
    if (uVar2 >> 0x3b != 0) {
      FUN_0089b984();
LAB_0089b76c:
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    uVar7 = param_1[2] - lVar11;
    local_80 = (void *)0x0;
    uVar8 = (long)uVar7 >> 4;
    if (uVar8 <= uVar2) {
      uVar8 = uVar2;
    }
    if (0x7fffffffffffffdf < uVar7) {
      uVar8 = 0x7ffffffffffffff;
    }
    if (uVar8 != 0) {
      if (uVar8 >> 0x3b != 0) goto LAB_0089b76c;
      local_80 = operator_new(uVar8 << 5);
    }
    pvStack_68 = (void *)((long)local_80 + uVar8 * 0x20);
    local_78 = (undefined8 *)((long)local_80 + ((long)param_2 - lVar11));
    local_70 = local_78;
    FUN_0089b770(&local_80,param_3);
    puVar9 = local_78;
    memcpy(local_70,param_2,param_1[1] - (long)param_2);
    lVar11 = param_1[1];
    param_1[1] = (long)param_2;
    __n = (long)param_2 - *param_1;
    __dest = (void *)((long)local_78 - __n);
    local_70 = (undefined8 *)((long)local_70 + (lVar11 - (long)param_2));
    memcpy(__dest,(void *)*param_1,__n);
    local_80 = (void *)*param_1;
    lVar11 = param_1[2];
    *param_1 = (long)__dest;
    param_1[2] = (long)pvStack_68;
    param_1[1] = (long)local_70;
    if (local_80 != (void *)0x0) {
      local_78 = (undefined8 *)local_80;
      local_70 = (undefined8 *)local_80;
      pvStack_68 = (void *)lVar11;
      operator_delete(local_80);
    }
  }
  return puVar9;
}


// ===== 0089b770  FUN_0089b770 =====

void FUN_0089b770(long *param_1,undefined8 *param_2)

{
  char *pcVar1;
  void *pvVar2;
  undefined8 *puVar3;
  void *pvVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  void *pvVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar10 = (undefined8 *)param_1[2];
  if ((undefined8 *)param_1[3] == puVar10) {
    pvVar9 = (void *)*param_1;
    puVar6 = (undefined8 *)param_1[1];
    if ((long)puVar6 - (long)pvVar9 == 0) {
      uVar7 = param_1[3] - (long)pvVar9 >> 4;
      if (puVar10 == puVar6) {
        uVar7 = 1;
      }
      if (uVar7 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      pvVar4 = operator_new(uVar7 * 0x20);
      pvVar2 = (void *)((long)pvVar4 + uVar7 * 0x20);
      puVar11 = (undefined8 *)((long)pvVar4 + (uVar7 >> 2) * 0x20);
      if ((long)puVar10 - (long)puVar6 == 0) {
        *param_1 = (long)pvVar4;
        param_1[1] = (long)puVar11;
        param_1[2] = (long)puVar11;
        param_1[3] = (long)pvVar2;
      }
      else {
        puVar3 = (undefined8 *)((long)puVar11 + ((long)puVar10 - (long)puVar6));
        puVar8 = puVar11;
        do {
          if (puVar8 == (undefined8 *)0x0) goto LAB_0089b958;
          uVar14 = puVar6[1];
          uVar13 = *puVar6;
          puVar8[2] = puVar6[2];
          puVar8[1] = uVar14;
          *puVar8 = uVar13;
          puVar6[1] = 0;
          puVar6[2] = 0;
          *puVar6 = 0;
          puVar8[3] = puVar6[3];
          puVar8 = puVar8 + 4;
          puVar6 = puVar6 + 4;
        } while (puVar8 != puVar3);
        pvVar9 = (void *)*param_1;
        puVar8 = (undefined8 *)param_1[1];
        *param_1 = (long)pvVar4;
        param_1[1] = (long)puVar11;
        puVar6 = (undefined8 *)param_1[2];
        param_1[2] = (long)puVar3;
        param_1[3] = (long)pvVar2;
        while (puVar8 != puVar6) {
          puVar11 = puVar6 + -4;
          if (puVar11 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          pcVar1 = (char *)((long)puVar6 + -9);
          puVar6 = puVar11;
          if (*pcVar1 < '\0') {
            operator_delete((void *)*puVar11);
          }
        }
      }
      if (pvVar9 != (void *)0x0) {
        operator_delete(pvVar9);
      }
    }
    else {
      lVar5 = (((long)puVar6 - (long)pvVar9 >> 5) + 1) / 2;
      if (puVar6 == puVar10) {
        puVar10 = puVar6 + lVar5 * -4;
      }
      else {
        do {
          puVar11 = puVar6 + lVar5 * -4;
          if (*(char *)((long)puVar11 + 0x17) < '\0') {
            operator_delete((void *)*puVar11);
            *puVar11 = 0;
            puVar11[1] = 0;
            puVar11[2] = 0;
          }
          uVar13 = puVar6[2];
          uVar14 = puVar6[3];
          uVar12 = *puVar6;
          puVar11[1] = puVar6[1];
          *puVar11 = uVar12;
          puVar11[2] = uVar13;
          puVar11[3] = uVar14;
          *(undefined1 *)((long)puVar6 + 0x17) = 0;
          puVar11 = puVar6 + 4;
          *(undefined1 *)puVar6 = 0;
          puVar6 = puVar11;
        } while (puVar11 != puVar10);
        puVar6 = (undefined8 *)param_1[1];
        puVar10 = puVar11 + lVar5 * -4;
      }
      param_1[1] = (long)(puVar6 + lVar5 * -4);
      param_1[2] = (long)puVar10;
    }
  }
  if (puVar10 != (undefined8 *)0x0) {
    uVar14 = param_2[1];
    uVar13 = *param_2;
    puVar10[2] = param_2[2];
    puVar10[1] = uVar14;
    *puVar10 = uVar13;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    puVar10[3] = param_2[3];
    param_1[2] = (long)(puVar10 + 4);
    return;
  }
LAB_0089b958:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0089b984  FUN_0089b984 =====

void FUN_0089b984(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 0089b99c  FUN_0089b99c =====

uint FUN_0089b99c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  size_t sVar4;
  ulong uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    puVar1 = param_1;
    uVar2 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  puVar3 = (undefined8 *)*param_2;
  uVar5 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    puVar3 = param_2;
    uVar5 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  sVar4 = uVar5;
  if (uVar2 <= uVar5) {
    sVar4 = uVar2;
  }
  iVar7 = memcmp(puVar1,puVar3,sVar4);
  if (iVar7 != 0) goto LAB_0089ba60;
  bVar6 = uVar5 <= uVar2;
  if (uVar2 == uVar5) {
    uVar2 = param_1[4];
    puVar1 = (undefined8 *)param_1[3];
    if (-1 < (char)*(byte *)((long)param_1 + 0x2f)) {
      uVar2 = (ulong)*(byte *)((long)param_1 + 0x2f);
      puVar1 = param_1 + 3;
    }
    puVar3 = (undefined8 *)param_2[3];
    uVar5 = param_2[4];
    if (-1 < (char)*(byte *)((long)param_2 + 0x2f)) {
      puVar3 = param_2 + 3;
      uVar5 = (ulong)*(byte *)((long)param_2 + 0x2f);
    }
    sVar4 = uVar5;
    if (uVar2 <= uVar5) {
      sVar4 = uVar2;
    }
    iVar7 = memcmp(puVar1,puVar3,sVar4);
    if (iVar7 != 0) goto LAB_0089ba60;
    bVar6 = uVar5 <= uVar2;
    if (uVar2 == uVar5) {
      iVar7 = 0;
      goto LAB_0089ba60;
    }
  }
  iVar7 = 1;
  if (!bVar6) {
    iVar7 = -1;
  }
LAB_0089ba60:
  uVar8 = (uint)(0 < iVar7);
  if (iVar7 < 0) {
    uVar8 = 0xffffffff;
  }
  return uVar8;
}


// ===== 0089ba80  FUN_0089ba80 =====

undefined8 * FUN_0089ba80(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  size_t __n;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  void *__dest;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  void *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  void *pvStack_68;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    puVar9 = param_2;
    if (param_2 == puVar1) {
      if (param_2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      uVar13 = param_3[1];
      uVar12 = *param_3;
      puVar1[2] = param_3[2];
      puVar1[1] = uVar13;
      *puVar1 = uVar12;
      uVar13 = param_3[4];
      uVar12 = param_3[3];
      param_3[1] = 0;
      param_3[2] = 0;
      *param_3 = 0;
      puVar1[5] = param_3[5];
      puVar1[4] = uVar13;
      puVar1[3] = uVar12;
      param_3[4] = 0;
      param_3[5] = 0;
      param_3[3] = 0;
      puVar1[6] = param_3[6];
      param_1[1] = (long)(puVar1 + 7);
    }
    else {
      uVar12 = *param_3;
      uVar3 = param_3[1];
      *param_3 = 0;
      param_3[1] = 0;
      uVar13 = param_3[2];
      uVar4 = param_3[3];
      param_3[2] = 0;
      param_3[3] = 0;
      uVar2 = param_3[4];
      uVar5 = param_3[5];
      param_3[4] = 0;
      param_3[5] = 0;
      uVar10 = param_3[6];
      FUN_0089bce0(param_1,param_2,param_1[1],param_2 + 7);
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        operator_delete((void *)*param_2);
      }
      *param_2 = uVar12;
      param_2[1] = uVar3;
      param_2[2] = uVar13;
      if (*(char *)((long)param_2 + 0x2f) < '\0') {
        operator_delete((void *)param_2[3]);
      }
      param_2[3] = uVar4;
      param_2[4] = uVar2;
      param_2[5] = uVar5;
      param_2[6] = uVar10;
    }
  }
  else {
    lVar11 = *param_1;
    uVar7 = ((long)puVar1 - lVar11 >> 3) * 0x6db6db6db6db6db7 + 1;
    if (0x492492492492492 < uVar7) {
      FUN_0089c1d8();
LAB_0089bcdc:
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    local_80 = (void *)0x0;
    lVar6 = param_1[2] - lVar11 >> 3;
    uVar8 = lVar6 * -0x2492492492492492;
    if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
      uVar8 = uVar7;
    }
    if (0x249249249249248 < (ulong)(lVar6 * 0x6db6db6db6db6db7)) {
      uVar8 = 0x492492492492492;
    }
    if (uVar8 != 0) {
      if (0x492492492492492 < uVar8) goto LAB_0089bcdc;
      local_80 = operator_new(uVar8 * 0x38);
    }
    pvStack_68 = (void *)((long)local_80 + uVar8 * 0x38);
    local_78 = (undefined8 *)((long)local_80 + ((long)param_2 - lVar11));
    local_70 = local_78;
    FUN_0089be54(&local_80,param_3);
    puVar9 = local_78;
    memcpy(local_70,param_2,param_1[1] - (long)param_2);
    lVar11 = param_1[1];
    param_1[1] = (long)param_2;
    __n = (long)param_2 - *param_1;
    __dest = (void *)((long)local_78 - __n);
    local_70 = (undefined8 *)((long)local_70 + (lVar11 - (long)param_2));
    memcpy(__dest,(void *)*param_1,__n);
    local_80 = (void *)*param_1;
    lVar11 = param_1[2];
    *param_1 = (long)__dest;
    param_1[2] = (long)pvStack_68;
    param_1[1] = (long)local_70;
    local_78 = (undefined8 *)local_80;
    local_70 = (undefined8 *)local_80;
    pvStack_68 = (void *)lVar11;
    FUN_0089c104(&local_80);
  }
  return puVar9;
}


// ===== 0089bce0  FUN_0089bce0 =====

/* WARNING: Removing unreachable block (ram,0x0089bdc4) */
/* WARNING: Removing unreachable block (ram,0x0089be08) */

void FUN_0089bce0(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar5 = *(undefined8 **)(param_1 + 8);
  puVar3 = (undefined8 *)((long)puVar5 + (param_2 - (long)param_4));
  puVar2 = puVar5;
  puVar4 = puVar3;
  while( true ) {
    if (param_3 <= puVar4) {
      *(undefined8 **)(param_1 + 8) = puVar2;
      if (puVar5 != param_4) {
        lVar7 = 0;
        do {
          puVar4 = (undefined8 *)((long)puVar3 + lVar7 + -0x38);
          uVar9 = *(undefined8 *)((long)puVar3 + lVar7 + -0x30);
          uVar8 = *puVar4;
          *(undefined8 *)((long)puVar5 + lVar7 + -0x28) =
               *(undefined8 *)((long)puVar3 + lVar7 + -0x28);
          *(undefined8 *)((long)puVar5 + lVar7 + -0x30) = uVar9;
          *(undefined8 *)((long)puVar5 + lVar7 + -0x38) = uVar8;
          *(undefined1 *)((long)puVar3 + lVar7 + -0x21) = 0;
          *(undefined1 *)puVar4 = 0;
          lVar6 = lVar7 + -0x38;
          uVar9 = *(undefined8 *)((long)puVar3 + lVar7 + -0x18);
          uVar8 = *(undefined8 *)((long)puVar3 + lVar7 + -0x20);
          *(undefined8 *)((long)puVar5 + lVar7 + -0x10) =
               *(undefined8 *)((long)puVar3 + lVar7 + -0x10);
          *(undefined8 *)((long)puVar5 + lVar7 + -0x18) = uVar9;
          *(undefined8 *)((long)puVar5 + lVar7 + -0x20) = uVar8;
          *(undefined1 *)((long)puVar3 + lVar7 + -9) = 0;
          *(undefined1 *)((long)puVar3 + lVar7 + -0x20) = 0;
          *(undefined8 *)((long)puVar5 + lVar7 + -8) = *(undefined8 *)((long)puVar3 + lVar7 + -8);
          lVar7 = lVar6;
        } while ((long)param_4 - (long)puVar5 != lVar6);
      }
      return;
    }
    if (puVar2 == (undefined8 *)0x0) break;
    uVar9 = puVar4[1];
    uVar8 = *puVar4;
    puVar2[2] = puVar4[2];
    puVar2[1] = uVar9;
    *puVar2 = uVar8;
    uVar9 = puVar4[4];
    uVar8 = puVar4[3];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    puVar2[5] = puVar4[5];
    puVar2[4] = uVar9;
    puVar2[3] = uVar8;
    puVar1 = puVar4 + 6;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[3] = 0;
    puVar4 = puVar4 + 7;
    puVar2[6] = *puVar1;
    puVar2 = puVar2 + 7;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0089be54  FUN_0089be54 =====

void FUN_0089be54(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  undefined1 *local_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  puVar11 = (undefined8 *)param_1[3];
  puVar8 = (undefined8 *)param_1[2];
  if (puVar11 == puVar8) {
    puVar7 = (undefined8 *)param_1[1];
    puVar13 = (undefined1 *)*param_1;
    if ((long)puVar7 - (long)puVar13 == 0) {
      uVar4 = ((long)puVar11 - (long)puVar13 >> 3) * -0x2492492492492492;
      puStack_68 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      if (puVar8 == puVar7) {
        uVar4 = 1;
      }
      if (0x492492492492492 < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      pvVar2 = operator_new(uVar4 * 0x38);
      puVar5 = (undefined8 *)((long)pvVar2 + (uVar4 >> 2) * 0x38);
      puVar6 = puVar5;
      puVar10 = puVar8;
      if ((long)puVar8 - (long)puVar7 != 0) {
        puVar6 = (undefined8 *)((long)puVar5 + ((long)puVar8 - (long)puVar7));
        puVar11 = puVar5;
        do {
          if (puVar11 == (undefined8 *)0x0) goto LAB_0089c0ec;
          uVar12 = puVar7[1];
          uVar9 = *puVar7;
          puVar11[2] = puVar7[2];
          puVar11[1] = uVar12;
          *puVar11 = uVar9;
          uVar12 = puVar7[4];
          uVar9 = puVar7[3];
          puVar7[1] = 0;
          puVar7[2] = 0;
          *puVar7 = 0;
          puVar11[5] = puVar7[5];
          puVar11[4] = uVar12;
          puVar11[3] = uVar9;
          puVar10 = puVar7 + 6;
          puVar7[4] = 0;
          puVar7[5] = 0;
          puVar7[3] = 0;
          puVar7 = puVar7 + 7;
          puVar11[6] = *puVar10;
          puVar11 = puVar11 + 7;
        } while (puVar11 != puVar6);
        puVar7 = (undefined8 *)param_1[1];
        puVar13 = (undefined1 *)*param_1;
        puVar11 = (undefined8 *)param_1[3];
        puVar10 = (undefined8 *)param_1[2];
      }
      *param_1 = pvVar2;
      param_1[1] = puVar5;
      param_1[2] = puVar6;
      param_1[3] = (void *)((long)pvVar2 + uVar4 * 0x38);
      local_70 = puVar13;
      puStack_68 = puVar7;
      puStack_60 = puVar10;
      puStack_58 = puVar11;
      FUN_0089c104(&local_70);
    }
    else {
      lVar3 = (((long)puVar7 - (long)puVar13 >> 3) * 0x6db6db6db6db6db7 + 1) / 2;
      if (puVar7 == puVar8) {
        puVar8 = puVar7 + lVar3 * -7;
      }
      else {
        do {
          puVar11 = puVar7 + lVar3 * -7;
          if (*(char *)((long)puVar11 + 0x17) < '\0') {
            operator_delete((void *)*puVar11);
            *puVar11 = 0;
            puVar11[1] = 0;
            puVar11[2] = 0;
          }
          uVar12 = puVar7[1];
          uVar9 = *puVar7;
          puVar11[2] = puVar7[2];
          puVar11[1] = uVar12;
          *puVar11 = uVar9;
          *(undefined1 *)((long)puVar7 + 0x17) = 0;
          cVar1 = *(char *)((long)puVar11 + 0x2f);
          *(undefined1 *)puVar7 = 0;
          if (cVar1 < '\0') {
            operator_delete((void *)puVar11[3]);
            puVar11[3] = 0;
            puVar11[4] = 0;
            puVar11[5] = 0;
          }
          uVar12 = puVar7[4];
          uVar9 = puVar7[3];
          puVar11[5] = puVar7[5];
          puVar11[4] = uVar12;
          puVar11[3] = uVar9;
          *(undefined1 *)((long)puVar7 + 0x2f) = 0;
          *(undefined1 *)(puVar7 + 3) = 0;
          puVar11 = puVar7 + 7;
          puVar7[lVar3 * -7 + 6] = puVar7[6];
          puVar7 = puVar11;
        } while (puVar11 != puVar8);
        puVar8 = puVar11 + lVar3 * -7;
        puVar7 = (undefined8 *)param_1[1];
      }
      param_1[1] = puVar7 + lVar3 * -7;
      param_1[2] = puVar8;
    }
  }
  if (puVar8 != (undefined8 *)0x0) {
    uVar12 = param_2[1];
    uVar9 = *param_2;
    puVar8[2] = param_2[2];
    puVar8[1] = uVar12;
    *puVar8 = uVar9;
    uVar12 = param_2[4];
    uVar9 = param_2[3];
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    puVar8[5] = param_2[5];
    puVar8[4] = uVar12;
    puVar8[3] = uVar9;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[3] = 0;
    puVar8[6] = param_2[6];
    param_1[2] = puVar8 + 7;
    return;
  }
LAB_0089c0ec:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0089c104  FUN_0089c104 =====

void FUN_0089c104(undefined8 *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)param_1[2];
  while (puVar1 != puVar3) {
    puVar4 = puVar3 + -7;
    if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    if (*(char *)((long)puVar3 + -9) < '\0') {
      operator_delete((void *)puVar3[-4]);
      cVar2 = *(char *)((long)puVar3 + -0x21);
    }
    else {
      cVar2 = *(char *)((long)puVar3 + -0x21);
    }
    puVar3 = puVar4;
    if (cVar2 < '\0') {
      operator_delete((void *)*puVar4);
    }
  }
  param_1[2] = puVar3;
  if ((void *)*param_1 == (void *)0x0) {
    return;
  }
  operator_delete((void *)*param_1);
  return;
}


// ===== 0089c1d8  FUN_0089c1d8 =====

void FUN_0089c1d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 0089c1f0  FUN_0089c1f0 =====

undefined8 * FUN_0089c1f0(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  size_t __n;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  void *__dest;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  void *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  void *pvStack_48;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    puVar10 = param_2;
    if (param_2 == puVar2) {
      if (param_2 == (undefined8 *)0x0) {
LAB_0089c3c0:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      uVar7 = *param_3;
      puVar2[1] = param_3[1];
      *puVar2 = uVar7;
      param_1[1] = (long)(puVar2 + 2);
    }
    else {
      uVar3 = *(undefined4 *)param_3;
      uVar7 = param_3[1];
      puVar5 = puVar2;
      for (puVar9 = puVar2 + -2; puVar9 < puVar2; puVar9 = puVar9 + 2) {
        if (puVar5 == (undefined8 *)0x0) goto LAB_0089c3c0;
        uVar12 = *puVar9;
        puVar5[1] = puVar9[1];
        *puVar5 = uVar12;
        puVar5 = puVar5 + 2;
      }
      param_1[1] = (long)puVar5;
      if (puVar2 != param_2 + 2) {
        lVar11 = 0;
        do {
          lVar4 = lVar11 + -0x20;
          *(undefined4 *)((long)puVar2 + lVar11 + -0x10) =
               *(undefined4 *)((long)puVar2 + lVar11 + -0x20);
          *(undefined8 *)((long)puVar2 + lVar11 + -8) =
               *(undefined8 *)((long)puVar2 + lVar11 + -0x18);
          lVar11 = lVar11 + -0x10;
        } while ((undefined8 *)((long)puVar2 + lVar4) != param_2);
      }
      *(undefined4 *)param_2 = uVar3;
      param_2[1] = uVar7;
    }
  }
  else {
    lVar11 = *param_1;
    uVar1 = ((long)puVar2 - lVar11 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_0089c5a4();
LAB_0089c3d8:
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    uVar6 = param_1[2] - lVar11;
    local_60 = (void *)0x0;
    uVar8 = (long)uVar6 >> 3;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7fffffffffffffef < uVar6) {
      uVar8 = 0xfffffffffffffff;
    }
    if (uVar8 != 0) {
      if (uVar8 >> 0x3c != 0) goto LAB_0089c3d8;
      local_60 = operator_new(uVar8 << 4);
    }
    pvStack_48 = (void *)((long)local_60 + uVar8 * 0x10);
    local_58 = (undefined8 *)((long)local_60 + ((long)param_2 - lVar11));
    local_50 = local_58;
    FUN_0089c3dc(&local_60,param_3);
    puVar10 = local_58;
    memcpy(local_50,param_2,param_1[1] - (long)param_2);
    lVar11 = param_1[1];
    param_1[1] = (long)param_2;
    __n = (long)param_2 - *param_1;
    __dest = (void *)((long)local_58 - __n);
    local_50 = (undefined8 *)((long)local_50 + (lVar11 - (long)param_2));
    memcpy(__dest,(void *)*param_1,__n);
    local_60 = (void *)*param_1;
    lVar11 = param_1[2];
    *param_1 = (long)__dest;
    param_1[2] = (long)pvStack_48;
    param_1[1] = (long)local_50;
    if (local_60 != (void *)0x0) {
      local_58 = (undefined8 *)local_60;
      local_50 = (undefined8 *)local_60;
      pvStack_48 = (void *)lVar11;
      operator_delete(local_60);
    }
  }
  return puVar10;
}


// ===== 0089c3dc  FUN_0089c3dc =====

void FUN_0089c3dc(undefined8 *param_1,undefined8 *param_2)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  
  puVar11 = (undefined8 *)param_1[2];
  if ((undefined8 *)param_1[3] == puVar11) {
    pvVar1 = (void *)*param_1;
    puVar12 = (undefined8 *)param_1[1];
    if ((long)puVar12 - (long)pvVar1 == 0) {
      uVar3 = (long)param_1[3] - (long)pvVar1 >> 3;
      if (puVar11 == puVar12) {
        uVar3 = 1;
      }
      if (uVar3 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      pvVar2 = operator_new(uVar3 * 0x10);
      lVar5 = (long)puVar11 - (long)puVar12;
      puVar4 = (undefined8 *)((long)pvVar2 + (uVar3 >> 2) * 0x10);
      puVar6 = puVar4;
      if (lVar5 != 0) {
        puVar6 = (undefined8 *)((long)puVar4 + lVar5);
        puVar8 = puVar4;
        puVar10 = puVar12;
        do {
          if (puVar8 == (undefined8 *)0x0) goto LAB_0089c58c;
          uVar13 = *puVar10;
          lVar5 = lVar5 + -0x10;
          puVar8[1] = puVar10[1];
          *puVar8 = uVar13;
          puVar8 = puVar8 + 2;
          puVar10 = puVar10 + 2;
        } while (lVar5 != 0);
      }
      *param_1 = pvVar2;
      param_1[1] = puVar4;
      uVar9 = (ulong)((long)puVar11 + (-0x10 - ((long)puVar11 << 0x3c))) >> 4;
      uVar7 = (ulong)(((long)puVar12 - (long)puVar11 << 0x3c) - ((long)puVar12 - (long)puVar11)) >>
              4;
      param_1[2] = puVar6;
      param_1[3] = (void *)((long)pvVar2 + uVar3 * 0x10);
      if (uVar9 <= uVar7) {
        uVar7 = uVar9;
      }
      puVar4 = puVar11;
      if ((1 < uVar7) && ((((int)puVar12 - (int)puVar11 | -(int)puVar11) & 0xfU) == 0)) {
        uVar7 = uVar7 & 0xffffffffffffffe;
        puVar4 = puVar11 + uVar7 * -2;
        do {
          uVar7 = uVar7 - 2;
        } while (uVar7 != 0);
      }
      while (puVar4 != puVar12) {
        puVar4 = puVar4 + -2;
        if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      if (puVar12 != (undefined8 *)0x0) {
        operator_delete(pvVar1);
      }
    }
    else {
      lVar5 = (((long)puVar12 - (long)pvVar1 >> 4) + 1) / 2;
      puVar4 = puVar12 + lVar5 * -2;
      if (puVar12 != puVar11) {
        do {
          *(undefined4 *)puVar4 = *(undefined4 *)puVar12;
          puVar6 = puVar12 + 1;
          puVar12 = puVar12 + 2;
          puVar4[1] = *puVar6;
          puVar4 = puVar4 + 2;
        } while (puVar12 != puVar11);
        puVar12 = (undefined8 *)param_1[1];
      }
      param_1[1] = puVar12 + lVar5 * -2;
      param_1[2] = puVar4;
      puVar11 = puVar4;
    }
  }
  if (puVar11 != (undefined8 *)0x0) {
    uVar13 = *param_2;
    puVar11[1] = param_2[1];
    *puVar11 = uVar13;
    param_1[2] = puVar11 + 2;
    return;
  }
LAB_0089c58c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0089c5a4  FUN_0089c5a4 =====

void FUN_0089c5a4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 0089c5bc  FUN_0089c5bc =====

undefined8 * FUN_0089c5bc(long *param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if ((puVar2 == (undefined8 *)0x0) || (*puVar2 = 0, puVar2 == (undefined8 *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  bVar1 = *param_2;
  uVar5 = *param_3;
  plVar4 = param_1 + 1;
  plVar7 = (long *)*plVar4;
  *(byte *)(puVar2 + 4) = bVar1;
  puVar2[5] = uVar5;
  do {
    plVar6 = plVar4;
    if (plVar7 == (long *)0x0) {
LAB_0089c648:
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = plVar4;
      *plVar6 = (long)puVar2;
      puVar3 = puVar2;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
        puVar3 = (undefined8 *)*plVar6;
      }
      FUN_005d5b94(param_1[1],puVar3);
      param_1[2] = param_1[2] + 1;
      return puVar2;
    }
    while (plVar4 = plVar7, *(byte *)(plVar4 + 4) <= bVar1) {
      plVar7 = (long *)plVar4[1];
      if ((long *)plVar4[1] == (long *)0x0) {
        plVar6 = plVar4 + 1;
        goto LAB_0089c648;
      }
    }
    plVar7 = (long *)*plVar4;
  } while( true );
}


// ===== 0089c6ac  FUN_0089c6ac =====

undefined1  [16] FUN_0089c6ac(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  size_t sVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined1 auVar13 [16];
  
  puVar9 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)param_1[1];
  lVar5 = (long)puVar4 - (long)puVar9;
  if (lVar5 != 0) {
    uVar10 = (lVar5 >> 3) * -0x5555555555555555;
    puVar8 = (undefined8 *)*param_2;
    uVar1 = param_2[1];
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      puVar8 = param_2;
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    do {
      uVar11 = uVar10 >> 1;
      puVar12 = puVar9 + uVar11 * 3;
      puVar2 = (undefined8 *)*puVar12;
      uVar6 = puVar12[1];
      if (-1 < (char)*(byte *)((long)puVar12 + 0x17)) {
        puVar2 = puVar12;
        uVar6 = (ulong)*(byte *)((long)puVar12 + 0x17);
      }
      sVar3 = uVar1;
      if (uVar6 <= uVar1) {
        sVar3 = uVar6;
      }
      iVar7 = memcmp(puVar2,puVar8,sVar3);
      if (iVar7 == 0) {
        if (uVar6 < uVar1) goto LAB_0089c70c;
      }
      else if (iVar7 < 0) {
LAB_0089c70c:
        puVar9 = puVar12 + 3;
        uVar11 = uVar10 + ~uVar11;
      }
      uVar10 = uVar11;
    } while (uVar10 != 0);
  }
  puVar8 = puVar9;
  if (puVar9 != puVar4) {
    uVar1 = param_2[1];
    puVar4 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar4 = param_2;
    }
    puVar2 = (undefined8 *)*puVar9;
    uVar10 = puVar9[1];
    if (-1 < (char)*(byte *)((long)puVar9 + 0x17)) {
      puVar2 = puVar9;
      uVar10 = (ulong)*(byte *)((long)puVar9 + 0x17);
    }
    sVar3 = uVar10;
    if (uVar1 <= uVar10) {
      sVar3 = uVar1;
    }
    iVar7 = memcmp(puVar4,puVar2,sVar3);
    if (iVar7 == 0) {
      if (uVar1 < uVar10) goto LAB_0089c7c8;
    }
    else if (iVar7 < 0) goto LAB_0089c7c8;
    puVar8 = puVar9 + 3;
  }
LAB_0089c7c8:
  auVar13._8_8_ = puVar8;
  auVar13._0_8_ = puVar9;
  return auVar13;
}


// ===== 0089c7ec  FUN_0089c7ec =====

undefined1  [16] FUN_0089c7ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *__s1;
  ulong uVar1;
  undefined8 *puVar2;
  size_t sVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  
  puVar9 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)param_1[1];
  lVar5 = (long)puVar4 - (long)puVar9;
  if (lVar5 != 0) {
    uVar10 = lVar5 >> 5;
    puVar8 = (undefined8 *)*param_2;
    uVar1 = param_2[1];
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      puVar8 = param_2;
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    do {
      uVar11 = uVar10 >> 1;
      puVar2 = puVar9 + uVar11 * 4;
      __s1 = (undefined8 *)*puVar2;
      uVar6 = puVar2[1];
      if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
        __s1 = puVar2;
        uVar6 = (ulong)*(byte *)((long)puVar2 + 0x17);
      }
      sVar3 = uVar1;
      if (uVar6 <= uVar1) {
        sVar3 = uVar6;
      }
      iVar7 = memcmp(__s1,puVar8,sVar3);
      if (iVar7 == 0) {
        if (uVar6 < uVar1) goto LAB_0089c83c;
      }
      else if (iVar7 < 0) {
LAB_0089c83c:
        puVar9 = puVar2 + 4;
        uVar11 = uVar10 + ~uVar11;
      }
      uVar10 = uVar11;
    } while (uVar10 != 0);
  }
  puVar8 = puVar9;
  if (puVar9 != puVar4) {
    uVar1 = param_2[1];
    puVar4 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar4 = param_2;
    }
    puVar2 = (undefined8 *)*puVar9;
    uVar10 = puVar9[1];
    if (-1 < (char)*(byte *)((long)puVar9 + 0x17)) {
      puVar2 = puVar9;
      uVar10 = (ulong)*(byte *)((long)puVar9 + 0x17);
    }
    sVar3 = uVar10;
    if (uVar1 <= uVar10) {
      sVar3 = uVar1;
    }
    iVar7 = memcmp(puVar4,puVar2,sVar3);
    if (iVar7 == 0) {
      if (uVar1 < uVar10) goto LAB_0089c8f8;
    }
    else if (iVar7 < 0) goto LAB_0089c8f8;
    puVar8 = puVar9 + 4;
  }
LAB_0089c8f8:
  auVar12._8_8_ = puVar8;
  auVar12._0_8_ = puVar9;
  return auVar12;
}


// ===== 0089c91c  FUN_0089c91c =====

undefined1  [16] FUN_0089c91c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *__s1;
  ulong uVar1;
  undefined8 *puVar2;
  size_t sVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  
  puVar8 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)param_1[1];
  lVar5 = (long)puVar4 - (long)puVar8;
  if (lVar5 != 0) {
    uVar11 = (lVar5 >> 3) * -0x5555555555555555;
    puVar2 = (undefined8 *)*param_2;
    uVar1 = param_2[1];
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      puVar2 = param_2;
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    do {
      uVar12 = uVar11 >> 1;
      puVar10 = puVar8 + uVar12 * 3;
      __s1 = (undefined8 *)*puVar10;
      uVar6 = puVar10[1];
      if (-1 < (char)*(byte *)((long)puVar10 + 0x17)) {
        __s1 = puVar10;
        uVar6 = (ulong)*(byte *)((long)puVar10 + 0x17);
      }
      sVar3 = uVar1;
      if (uVar6 <= uVar1) {
        sVar3 = uVar6;
      }
      iVar7 = memcmp(__s1,puVar2,sVar3);
      if (iVar7 == 0) {
        if (uVar6 < uVar1) goto LAB_0089c984;
      }
      else if (iVar7 < 0) {
LAB_0089c984:
        puVar8 = puVar10 + 3;
        uVar12 = uVar11 + ~uVar12;
      }
      uVar11 = uVar12;
    } while (uVar11 != 0);
  }
  if (puVar8 != puVar4) {
    uVar1 = param_2[1];
    puVar4 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar4 = param_2;
    }
    puVar2 = (undefined8 *)*puVar8;
    uVar11 = puVar8[1];
    if (-1 < (char)*(byte *)((long)puVar8 + 0x17)) {
      puVar2 = puVar8;
      uVar11 = (ulong)*(byte *)((long)puVar8 + 0x17);
    }
    sVar3 = uVar11;
    if (uVar1 <= uVar11) {
      sVar3 = uVar1;
    }
    iVar7 = memcmp(puVar4,puVar2,sVar3);
    if (iVar7 == 0) {
      if (uVar11 <= uVar1) goto LAB_0089ca4c;
    }
    else if (-1 < iVar7) {
LAB_0089ca4c:
      uVar9 = 0;
      goto LAB_0089ca50;
    }
  }
  puVar8 = (undefined8 *)FUN_0089ca78(param_1,puVar8,param_3);
  uVar9 = 1;
LAB_0089ca50:
  auVar13._8_8_ = uVar9;
  auVar13._0_8_ = puVar8;
  return auVar13;
}


// ===== 0089ca78  FUN_0089ca78 =====

/* WARNING: Removing unreachable block (ram,0x0089ccac) */

undefined8 * FUN_0089ca78(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  size_t __n;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  void *__dest;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 *local_60;
  undefined8 *puStack_58;
  undefined8 *local_50;
  long *plStack_48;
  
  puVar7 = (undefined8 *)param_1[1];
  if (puVar7 < (undefined8 *)param_1[2]) {
    puVar6 = param_2;
    if (param_2 == puVar7) {
      if (param_2 == (undefined8 *)0x0) {
LAB_0089cd28:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        FUN_005478d8(puVar7,*param_3,param_3[1]);
      }
      else {
        uVar10 = param_3[1];
        uVar9 = *param_3;
        puVar7[2] = param_3[2];
        puVar7[1] = uVar10;
        *puVar7 = uVar9;
      }
      param_1[1] = (long)(puVar7 + 3);
    }
    else {
      puStack_58 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
      local_60 = &DAT_aaaaaaaaaaaaaaaa;
      local_50 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
      plStack_48 = param_1;
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        FUN_005478d8(&local_60,*param_3,param_3[1]);
        puVar7 = (undefined8 *)param_1[1];
      }
      else {
        puStack_58 = (undefined8 *)param_3[1];
        local_60 = (undefined1 *)*param_3;
        local_50 = (undefined8 *)param_3[2];
      }
      puVar1 = puVar7;
      for (puVar2 = puVar7 + -3; puVar2 < puVar7; puVar2 = puVar2 + 3) {
        if (puVar1 == (undefined8 *)0x0) goto LAB_0089cd28;
        uVar10 = puVar2[1];
        uVar9 = *puVar2;
        puVar1[2] = puVar2[2];
        puVar1[1] = uVar10;
        *puVar1 = uVar9;
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = 0;
        puVar1 = puVar1 + 3;
      }
      param_1[1] = (long)puVar1;
      if (puVar7 != param_2 + 3) {
        lVar8 = 0;
        do {
          puVar2 = (undefined8 *)((long)puVar7 + lVar8 + -0x30);
          *(undefined8 *)((long)puVar7 + lVar8 + -8) = *(undefined8 *)((long)puVar7 + lVar8 + -0x20)
          ;
          lVar3 = lVar8 + -0x30;
          *(undefined8 *)((long)puVar7 + lVar8 + -0x10) =
               *(undefined8 *)((long)puVar7 + lVar8 + -0x28);
          *(undefined8 *)((long)puVar7 + lVar8 + -0x18) = *puVar2;
          *(undefined1 *)((long)puVar7 + lVar8 + -0x19) = 0;
          *(undefined1 *)puVar2 = 0;
          lVar8 = lVar8 + -0x18;
        } while ((undefined8 *)((long)puVar7 + lVar3) != param_2);
      }
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        operator_delete((void *)*param_2);
      }
      param_2[2] = local_50;
      param_2[1] = puStack_58;
      *param_2 = local_60;
    }
  }
  else {
    lVar8 = *param_1;
    uVar4 = ((long)puVar7 - lVar8 >> 3) * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00625650();
    }
    local_60 = (undefined1 *)0x0;
    lVar3 = param_1[2] - lVar8 >> 3;
    uVar5 = lVar3 * 0x5555555555555556;
    if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
      uVar5 = uVar4;
    }
    if (0x555555555555554 < (ulong)(lVar3 * -0x5555555555555555)) {
      uVar5 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar5 != 0) {
      if (0xaaaaaaaaaaaaaaa < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      local_60 = (undefined1 *)operator_new(uVar5 * 0x18);
    }
    plStack_48 = (long *)(local_60 + uVar5 * 0x18);
    puStack_58 = (undefined8 *)(local_60 + ((long)param_2 - lVar8));
    local_50 = puStack_58;
    FUN_0089cd44(&local_60,param_3);
    puVar6 = puStack_58;
    memcpy(local_50,param_2,param_1[1] - (long)param_2);
    lVar8 = param_1[1];
    param_1[1] = (long)param_2;
    __n = (long)param_2 - *param_1;
    __dest = (void *)((long)puStack_58 - __n);
    local_50 = (undefined8 *)((long)local_50 + (lVar8 - (long)param_2));
    memcpy(__dest,(void *)*param_1,__n);
    local_60 = (undefined1 *)*param_1;
    lVar8 = param_1[2];
    *param_1 = (long)__dest;
    param_1[2] = (long)plStack_48;
    param_1[1] = (long)local_50;
    if (local_60 != (undefined1 *)0x0) {
      puStack_58 = (undefined8 *)local_60;
      local_50 = (undefined8 *)local_60;
      plStack_48 = (long *)lVar8;
      operator_delete(local_60);
    }
  }
  return puVar6;
}


// ===== 0089cd44  FUN_0089cd44 =====

/* WARNING: Removing unreachable block (ram,0x0089cec4) */

void FUN_0089cd44(long *param_1,undefined8 *param_2)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  void *pvVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar9 = (undefined8 *)param_1[2];
  if ((undefined8 *)param_1[3] == puVar9) {
    pvVar10 = (void *)*param_1;
    puVar11 = (undefined8 *)param_1[1];
    if ((long)puVar11 - (long)pvVar10 == 0) {
      uVar6 = (param_1[3] - (long)pvVar10 >> 3) * 0x5555555555555556;
      if (puVar9 == puVar11) {
        uVar6 = 1;
      }
      if (0xaaaaaaaaaaaaaaa < uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      pvVar4 = operator_new(uVar6 * 0x18);
      lVar5 = (long)puVar9 - (long)puVar11;
      pvVar1 = (void *)((long)pvVar4 + uVar6 * 0x18);
      puVar7 = (undefined8 *)((long)pvVar4 + (uVar6 >> 2) * 0x18);
      if (lVar5 == 0) {
        *param_1 = (long)pvVar4;
        param_1[1] = (long)puVar7;
        param_1[2] = (long)puVar7;
        param_1[3] = (long)pvVar1;
      }
      else {
        lVar2 = (long)puVar7 + lVar5;
        puVar8 = puVar7;
        do {
          if (puVar8 == (undefined8 *)0x0) goto LAB_0089cf60;
          uVar13 = puVar11[1];
          uVar12 = *puVar11;
          lVar5 = lVar5 + -0x18;
          puVar8[2] = puVar11[2];
          puVar8[1] = uVar13;
          *puVar8 = uVar12;
          puVar11[1] = 0;
          puVar11[2] = 0;
          *puVar11 = 0;
          puVar8 = puVar8 + 3;
          puVar11 = puVar11 + 3;
        } while (lVar5 != 0);
        pvVar10 = (void *)*param_1;
        lVar3 = param_1[1];
        *param_1 = (long)pvVar4;
        param_1[1] = (long)puVar7;
        lVar5 = param_1[2];
        param_1[2] = lVar2;
        param_1[3] = (long)pvVar1;
        while (lVar3 != lVar5) {
          lVar5 = lVar5 + -0x18;
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
        }
      }
      if (pvVar10 != (void *)0x0) {
        operator_delete(pvVar10);
      }
    }
    else {
      lVar5 = (((long)puVar11 - (long)pvVar10 >> 3) * -0x5555555555555555 + 1) / 2;
      if (puVar11 == puVar9) {
        puVar9 = puVar11 + lVar5 * -3;
      }
      else {
        do {
          puVar7 = puVar11 + lVar5 * -3;
          if (*(char *)((long)puVar7 + 0x17) < '\0') {
            operator_delete((void *)*puVar7);
            *puVar7 = 0;
            puVar7[1] = 0;
            puVar7[2] = 0;
          }
          uVar13 = puVar11[1];
          uVar12 = *puVar11;
          puVar7[2] = puVar11[2];
          puVar7[1] = uVar13;
          *puVar7 = uVar12;
          *(undefined1 *)((long)puVar11 + 0x17) = 0;
          puVar7 = puVar11 + 3;
          *(undefined1 *)puVar11 = 0;
          puVar11 = puVar7;
        } while (puVar7 != puVar9);
        puVar9 = puVar7 + lVar5 * -3;
        puVar11 = (undefined8 *)param_1[1];
      }
      param_1[1] = (long)(puVar11 + lVar5 * -3);
      param_1[2] = (long)puVar9;
    }
  }
  if (puVar9 != (undefined8 *)0x0) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      FUN_005478d8(puVar9,*param_2,param_2[1]);
    }
    else {
      uVar13 = param_2[1];
      uVar12 = *param_2;
      puVar9[2] = param_2[2];
      puVar9[1] = uVar13;
      *puVar9 = uVar12;
    }
    param_1[2] = (long)(puVar9 + 3);
    return;
  }
LAB_0089cf60:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0089cf8c  FUN_0089cf8c =====

undefined4 * FUN_0089cf8c(long *param_1,undefined4 *param_2,undefined4 *param_3)

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
LAB_0089d128:
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
        if (puVar4 == (undefined4 *)0x0) goto LAB_0089d128;
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
      FUN_005da79c();
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
    FUN_0089d144(&local_60,param_3);
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


// ===== 0089d144  FUN_0089d144 =====

void FUN_0089d144(undefined8 *param_1,undefined4 *param_2)

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
          if (puVar8 == (undefined4 *)0x0) goto LAB_0089d3c0;
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
LAB_0089d3c0:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0089d3d8  FUN_0089d3d8 =====

undefined8 * FUN_0089d3d8(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  if (param_3 <= param_2 && param_2 != param_3) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:1170: libc++ Hardening assertion __first <= __last failed: vector::erase(first, last) called with invalid range\n"
              );
  }
  if (param_2 == param_3) {
    return param_2;
  }
  puVar2 = (undefined8 *)param_1[1];
  if (param_3 == puVar2) {
    puVar5 = param_2;
    if (param_2 == puVar2) goto LAB_0089d4dc;
  }
  else {
    lVar4 = *param_1;
    lVar6 = -lVar4;
    lVar8 = lVar4 + (long)param_3;
    lVar7 = lVar4 + (long)param_2;
    do {
      puVar5 = (undefined8 *)(lVar7 + lVar6);
      if (*(char *)((long)puVar5 + 0x17) < '\0') {
        operator_delete((void *)*puVar5);
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
      }
      puVar3 = (undefined8 *)(lVar8 + lVar6);
      lVar7 = lVar7 + 0x20;
      uVar9 = puVar3[1];
      uVar1 = *puVar3;
      puVar5[2] = puVar3[2];
      puVar5[1] = uVar9;
      *puVar5 = uVar1;
      *(undefined1 *)((long)puVar3 + 0x17) = 0;
      uVar1 = puVar3[3];
      *(undefined1 *)(lVar8 + lVar6) = 0;
      lVar8 = lVar8 + 0x20;
      puVar5[3] = uVar1;
    } while (puVar3 + 4 != puVar2);
    puVar2 = (undefined8 *)param_1[1];
    puVar5 = (undefined8 *)(lVar7 - lVar4);
    if (puVar5 == puVar2) goto LAB_0089d4dc;
  }
  do {
    puVar3 = puVar2 + -4;
    if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    if (*(char *)((long)puVar2 + -9) < '\0') {
      operator_delete((void *)*puVar3);
    }
    puVar2 = puVar3;
  } while (puVar3 != puVar5);
LAB_0089d4dc:
  param_1[1] = (long)puVar5;
  return param_2;
}


// ===== 0089d528  FUN_0089d528 =====

undefined8 * FUN_0089d528(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (param_3 <= param_2 && param_2 != param_3) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:1170: libc++ Hardening assertion __first <= __last failed: vector::erase(first, last) called with invalid range\n"
              );
  }
  if (param_2 == param_3) {
    return param_2;
  }
  puVar3 = (undefined8 *)param_1[1];
  if (param_3 == puVar3) {
    puVar6 = param_2;
    if (param_2 == puVar3) goto LAB_0089d694;
  }
  else {
    lVar5 = *param_1;
    lVar8 = -lVar5;
    puVar9 = (undefined1 *)(lVar5 + (long)param_3);
    puVar7 = (undefined1 *)(lVar5 + (long)param_2);
    do {
      puVar6 = (undefined8 *)(puVar7 + lVar8);
      if (*(char *)((long)puVar6 + 0x17) < '\0') {
        operator_delete((void *)*puVar6);
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
      }
      puVar4 = (undefined8 *)(puVar9 + lVar8);
      uVar11 = puVar4[1];
      uVar10 = *puVar4;
      puVar6[2] = puVar4[2];
      puVar6[1] = uVar11;
      *puVar6 = uVar10;
      *(undefined1 *)((long)puVar4 + 0x17) = 0;
      *(undefined1 *)puVar4 = 0;
      if (*(char *)((long)puVar6 + 0x2f) < '\0') {
        operator_delete((void *)puVar6[3]);
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar6[5] = 0;
      }
      uVar11 = puVar4[4];
      uVar10 = puVar4[3];
      puVar9 = puVar9 + 0x38;
      puVar6[5] = puVar4[5];
      puVar1 = puVar7 + 0x38;
      puVar6[4] = uVar11;
      puVar6[3] = uVar10;
      *(undefined1 *)((long)puVar4 + 0x2f) = 0;
      *(undefined1 *)(puVar4 + 3) = 0;
      *(undefined8 *)(puVar7 + lVar8 + 0x30) = puVar4[6];
      puVar7 = puVar1;
    } while (puVar4 + 7 != puVar3);
    puVar3 = (undefined8 *)param_1[1];
    puVar6 = (undefined8 *)(puVar1 + -lVar5);
    if (puVar6 == puVar3) goto LAB_0089d694;
  }
  do {
    puVar4 = puVar3 + -7;
    if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    if (*(char *)((long)puVar3 + -9) < '\0') {
      operator_delete((void *)puVar3[-4]);
      cVar2 = *(char *)((long)puVar3 + -0x21);
    }
    else {
      cVar2 = *(char *)((long)puVar3 + -0x21);
    }
    if (cVar2 < '\0') {
      operator_delete((void *)*puVar4);
    }
    puVar3 = puVar4;
  } while (puVar4 != puVar6);
LAB_0089d694:
  param_1[1] = (long)puVar6;
  return param_2;
}


// ===== 0089d6e4  FUN_0089d6e4 =====

/* WARNING: Removing unreachable block (ram,0x0089d7e8) */

undefined4 * FUN_0089d6e4(long *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  long lVar4;
  size_t __n;
  undefined4 *puVar5;
  ulong uVar6;
  ulong uVar7;
  void *__dest;
  undefined4 *puVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  void *local_80;
  undefined4 *local_78;
  undefined4 *local_70;
  void *pvStack_68;
  
  puVar2 = (undefined4 *)param_1[1];
  if (puVar2 < (undefined4 *)param_1[2]) {
    puVar8 = param_2;
    if (param_2 == puVar2) {
      if (param_2 == (undefined4 *)0x0) {
LAB_0089d96c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *puVar2 = *param_3;
      uVar15 = param_4[1];
      uVar13 = *param_4;
      *(undefined8 *)(puVar2 + 6) = param_4[2];
      *(undefined8 *)(puVar2 + 4) = uVar15;
      *(undefined8 *)(puVar2 + 2) = uVar13;
      param_4[1] = 0;
      param_4[2] = 0;
      *param_4 = 0;
      param_1[1] = (long)(puVar2 + 8);
    }
    else {
      uVar3 = *param_3;
      uVar13 = *param_4;
      uVar15 = param_4[1];
      *param_4 = 0;
      param_4[1] = 0;
      uVar11 = param_4[2];
      param_4[2] = 0;
      puVar9 = (undefined4 *)param_1[1];
      puVar2 = puVar9;
      for (puVar5 = puVar9 + -8; puVar5 < puVar9; puVar5 = puVar5 + 8) {
        if (puVar2 == (undefined4 *)0x0) goto LAB_0089d96c;
        *puVar2 = *puVar5;
        uVar14 = *(undefined8 *)(puVar5 + 4);
        uVar12 = *(undefined8 *)(puVar5 + 2);
        *(undefined8 *)(puVar2 + 6) = *(undefined8 *)(puVar5 + 6);
        *(undefined8 *)(puVar2 + 4) = uVar14;
        *(undefined8 *)(puVar2 + 2) = uVar12;
        puVar2 = puVar2 + 8;
        *(undefined8 *)(puVar5 + 4) = 0;
        *(undefined8 *)(puVar5 + 6) = 0;
        *(undefined8 *)(puVar5 + 2) = 0;
      }
      param_1[1] = (long)puVar2;
      if (puVar9 != param_2 + 8) {
        lVar10 = 0;
        do {
          *(undefined4 *)((long)puVar9 + lVar10 + -0x20) =
               *(undefined4 *)((long)puVar9 + lVar10 + -0x40);
          *(undefined8 *)((long)puVar9 + lVar10 + -8) =
               *(undefined8 *)((long)puVar9 + lVar10 + -0x28);
          lVar4 = lVar10 + -0x40;
          *(undefined8 *)((long)puVar9 + lVar10 + -0x10) =
               *(undefined8 *)((long)puVar9 + lVar10 + -0x30);
          *(undefined8 *)((long)puVar9 + lVar10 + -0x18) =
               *(undefined8 *)((long)puVar9 + lVar10 + -0x38);
          *(undefined1 *)((long)puVar9 + lVar10 + -0x21) = 0;
          *(undefined1 *)((long)puVar9 + lVar10 + -0x38) = 0;
          lVar10 = lVar10 + -0x20;
        } while ((undefined4 *)((long)puVar9 + lVar4) != param_2);
      }
      *param_2 = uVar3;
      if (*(char *)((long)param_2 + 0x1f) < '\0') {
        operator_delete(*(void **)(param_2 + 2));
      }
      *(undefined8 *)(param_2 + 2) = uVar13;
      *(undefined8 *)(param_2 + 4) = uVar15;
      *(undefined8 *)(param_2 + 6) = uVar11;
    }
  }
  else {
    lVar10 = *param_1;
    uVar1 = ((long)puVar2 - lVar10 >> 5) + 1;
    if (uVar1 >> 0x3b != 0) {
      FUN_0089dbb0();
LAB_0089d984:
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    uVar6 = param_1[2] - lVar10;
    local_80 = (void *)0x0;
    uVar7 = (long)uVar6 >> 4;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar6) {
      uVar7 = 0x7ffffffffffffff;
    }
    if (uVar7 != 0) {
      if (uVar7 >> 0x3b != 0) goto LAB_0089d984;
      local_80 = operator_new(uVar7 << 5);
    }
    pvStack_68 = (void *)((long)local_80 + uVar7 * 0x20);
    local_78 = (undefined4 *)((long)local_80 + ((long)param_2 - lVar10));
    local_70 = local_78;
    FUN_0089d988(&local_80,param_3,param_4);
    puVar8 = local_78;
    memcpy(local_70,param_2,param_1[1] - (long)param_2);
    lVar10 = param_1[1];
    param_1[1] = (long)param_2;
    __n = (long)param_2 - *param_1;
    __dest = (void *)((long)local_78 - __n);
    local_70 = (undefined4 *)((long)local_70 + (lVar10 - (long)param_2));
    memcpy(__dest,(void *)*param_1,__n);
    local_80 = (void *)*param_1;
    lVar10 = param_1[2];
    *param_1 = (long)__dest;
    param_1[2] = (long)pvStack_68;
    param_1[1] = (long)local_70;
    if (local_80 != (void *)0x0) {
      local_78 = (undefined4 *)local_80;
      local_70 = (undefined4 *)local_80;
      pvStack_68 = (void *)lVar10;
      operator_delete(local_80);
    }
  }
  return puVar8;
}


// ===== 0089d988  FUN_0089d988 =====

/* WARNING: Removing unreachable block (ram,0x0089dafc) */

void FUN_0089d988(long *param_1,undefined4 *param_2,undefined8 *param_3)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  undefined4 *puVar7;
  ulong uVar8;
  undefined4 *puVar9;
  void *pvVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar11 = (undefined4 *)param_1[2];
  if ((undefined4 *)param_1[3] == puVar11) {
    pvVar10 = (void *)*param_1;
    puVar7 = (undefined4 *)param_1[1];
    if ((long)puVar7 - (long)pvVar10 == 0) {
      uVar8 = param_1[3] - (long)pvVar10 >> 4;
      if (puVar11 == puVar7) {
        uVar8 = 1;
      }
      if (uVar8 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      pvVar5 = operator_new(uVar8 * 0x20);
      pvVar1 = (void *)((long)pvVar5 + uVar8 * 0x20);
      puVar2 = (undefined4 *)((long)pvVar5 + (uVar8 >> 2) * 0x20);
      if ((long)puVar11 - (long)puVar7 == 0) {
        *param_1 = (long)pvVar5;
        param_1[1] = (long)puVar2;
        param_1[2] = (long)puVar2;
        param_1[3] = (long)pvVar1;
      }
      else {
        puVar3 = (undefined4 *)((long)puVar2 + ((long)puVar11 - (long)puVar7));
        puVar9 = puVar2;
        do {
          if (puVar9 == (undefined4 *)0x0) goto LAB_0089db84;
          *puVar9 = *puVar7;
          uVar13 = *(undefined8 *)(puVar7 + 4);
          uVar12 = *(undefined8 *)(puVar7 + 2);
          *(undefined8 *)(puVar9 + 6) = *(undefined8 *)(puVar7 + 6);
          *(undefined8 *)(puVar9 + 4) = uVar13;
          *(undefined8 *)(puVar9 + 2) = uVar12;
          puVar9 = puVar9 + 8;
          *(undefined8 *)(puVar7 + 4) = 0;
          *(undefined8 *)(puVar7 + 6) = 0;
          *(undefined8 *)(puVar7 + 2) = 0;
          puVar7 = puVar7 + 8;
        } while (puVar9 != puVar3);
        pvVar10 = (void *)*param_1;
        lVar4 = param_1[1];
        *param_1 = (long)pvVar5;
        param_1[1] = (long)puVar2;
        lVar6 = param_1[2];
        param_1[2] = (long)puVar3;
        param_1[3] = (long)pvVar1;
        while (lVar4 != lVar6) {
          lVar6 = lVar6 + -0x20;
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
        }
      }
      if (pvVar10 != (void *)0x0) {
        operator_delete(pvVar10);
      }
    }
    else {
      lVar6 = (((long)puVar7 - (long)pvVar10 >> 5) + 1) / 2;
      if (puVar7 == puVar11) {
        puVar11 = puVar7 + lVar6 * -8;
      }
      else {
        do {
          puVar2 = puVar7 + lVar6 * -8;
          *puVar2 = *puVar7;
          if (*(char *)((long)puVar2 + 0x1f) < '\0') {
            operator_delete(*(void **)(puVar2 + 2));
            *(undefined8 *)(puVar2 + 2) = 0;
            *(undefined8 *)(puVar2 + 4) = 0;
            *(undefined8 *)(puVar2 + 6) = 0;
          }
          uVar13 = *(undefined8 *)(puVar7 + 4);
          uVar12 = *(undefined8 *)(puVar7 + 2);
          *(undefined8 *)(puVar2 + 6) = *(undefined8 *)(puVar7 + 6);
          *(undefined8 *)(puVar2 + 4) = uVar13;
          *(undefined8 *)(puVar2 + 2) = uVar12;
          *(undefined1 *)((long)puVar7 + 0x1f) = 0;
          *(undefined1 *)(puVar7 + 2) = 0;
          puVar2 = puVar7 + 8;
          puVar7 = puVar2;
        } while (puVar2 != puVar11);
        puVar7 = (undefined4 *)param_1[1];
        puVar11 = puVar2 + lVar6 * -8;
      }
      param_1[1] = (long)(puVar7 + lVar6 * -8);
      param_1[2] = (long)puVar11;
    }
  }
  if (puVar11 != (undefined4 *)0x0) {
    *puVar11 = *param_2;
    uVar13 = param_3[1];
    uVar12 = *param_3;
    *(undefined8 *)(puVar11 + 6) = param_3[2];
    *(undefined8 *)(puVar11 + 4) = uVar13;
    *(undefined8 *)(puVar11 + 2) = uVar12;
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
    param_1[2] = (long)(puVar11 + 8);
    return;
  }
LAB_0089db84:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0089dbb0  FUN_0089dbb0 =====

void FUN_0089dbb0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 0089dbc8  FUN_0089dbc8 =====

undefined1  [16] FUN_0089dbc8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *__s2;
  size_t sVar1;
  void *__s1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  
  puVar8 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  lVar4 = (long)puVar2 - (long)puVar8;
  if (lVar4 != 0) {
    __s1 = (void *)*param_2;
    uVar3 = param_2[1];
    uVar9 = lVar4 >> 5;
    do {
      uVar10 = uVar9 >> 1;
      puVar7 = puVar8 + uVar10 * 4;
      __s2 = (undefined8 *)*puVar7;
      uVar5 = puVar7[1];
      if (-1 < (char)*(byte *)((long)puVar7 + 0x17)) {
        __s2 = puVar7;
        uVar5 = (ulong)*(byte *)((long)puVar7 + 0x17);
      }
      sVar1 = uVar5;
      if (uVar3 <= uVar5) {
        sVar1 = uVar3;
      }
      iVar6 = memcmp(__s1,__s2,sVar1);
      if (iVar6 == 0) {
        if (uVar5 < uVar3) goto LAB_0089dc04;
      }
      else if (0 < iVar6) {
LAB_0089dc04:
        puVar8 = puVar7 + 4;
        uVar10 = uVar9 + ~uVar10;
      }
      uVar9 = uVar10;
    } while (uVar9 != 0);
  }
  puVar7 = puVar8;
  if (puVar8 != puVar2) {
    uVar3 = param_2[1];
    puVar2 = (undefined8 *)*puVar8;
    uVar9 = puVar8[1];
    if (-1 < (char)*(byte *)((long)puVar8 + 0x17)) {
      puVar2 = puVar8;
      uVar9 = (ulong)*(byte *)((long)puVar8 + 0x17);
    }
    sVar1 = uVar9;
    if (uVar3 <= uVar9) {
      sVar1 = uVar3;
    }
    iVar6 = memcmp((void *)*param_2,puVar2,sVar1);
    if (iVar6 == 0) {
      if (uVar3 < uVar9) goto LAB_0089dcb0;
    }
    else if (iVar6 < 0) goto LAB_0089dcb0;
    puVar7 = puVar8 + 4;
  }
LAB_0089dcb0:
  auVar11._8_8_ = puVar7;
  auVar11._0_8_ = puVar8;
  return auVar11;
}


// ===== 0089dcd4  FUN_0089dcd4 =====

void FUN_0089dcd4(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 *param_4,
                 undefined4 param_5,undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_00d3b2a0;
  lVar2 = *param_2;
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    FUN_00d0f740(1,lVar2 + 8);
  }
  lVar5 = param_2[4];
  lVar2 = param_2[3];
  lVar7 = param_2[2];
  lVar6 = param_2[1];
  *(undefined1 *)(param_1 + 6) = 1;
  param_1[3] = lVar7;
  param_1[2] = lVar6;
  param_1[5] = lVar5;
  param_1[4] = lVar2;
  param_1[7] = param_3;
  param_1[8] = *param_4;
  plVar3 = param_4 + 1;
  lVar2 = *plVar3;
  plVar4 = param_1 + 9;
  *plVar4 = lVar2;
  lVar5 = param_4[2];
  param_1[10] = lVar5;
  if (lVar5 == 0) {
    param_1[8] = plVar4;
    *(undefined4 *)(param_1 + 0xb) = param_5;
    param_1[0xc] = param_6;
    uVar1 = FUN_004022fc();
  }
  else {
    *(long **)(lVar2 + 0x10) = plVar4;
    *param_4 = plVar3;
    *plVar3 = 0;
    param_4[2] = 0;
    *(undefined4 *)(param_1 + 0xb) = param_5;
    param_1[0xc] = param_6;
    if (param_1[10] != 0) {
      return;
    }
    uVar1 = FUN_004022fc();
  }
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00623bb0(&DAT_001f4e98,"../../call/rtx_receive_stream.cc",0x1fa,
               "RtxReceiveStream created with empty payload type mapping.");
  return;
}


// ===== 0089dde8  FUN_0089dde8 =====

void FUN_0089dde8(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *local_8;
  
  *param_1 = &PTR_FUN_00d3b2a0;
  local_8 = param_1 + 8;
  FUN_005fa2f8(&local_8,param_1[9]);
  if (((*(char *)(param_1 + 6) == '\x01') && (plVar2 = (long *)param_1[1], plVar2 != (long *)0x0))
     && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  return;
}


// ===== 0089de64  FUN_0089de64 =====

void FUN_0089de64(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *local_28;
  
  *param_1 = &PTR_FUN_00d3b2a0;
  local_28 = param_1 + 8;
  FUN_005fa2f8(&local_28,param_1[9]);
  if (((*(char *)(param_1 + 6) == '\x01') && (plVar2 = (long *)param_1[1], plVar2 != (long *)0x0))
     && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  operator_delete(param_1);
  return;
}


// ===== 0089def4  FUN_0089def4 =====

void FUN_0089def4(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *local_18;
  
  plVar4 = (long *)(param_1 + 0x48);
  local_18 = (undefined8 *)(param_1 + 0x40);
  FUN_005fa2f8(&local_18,*plVar4);
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  plVar1 = param_2 + 1;
  lVar2 = *plVar1;
  *plVar4 = lVar2;
  lVar3 = param_2[2];
  *(long *)(param_1 + 0x50) = lVar3;
  if (lVar3 == 0) {
    *(undefined8 *)(param_1 + 0x40) = plVar4;
  }
  else {
    *(long **)(lVar2 + 0x10) = plVar4;
    *param_2 = plVar1;
    *plVar1 = 0;
    param_2[2] = 0;
  }
  return;
}


// ===== 0089df6c  FUN_0089df6c =====

void FUN_0089df6c(long param_1,long param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  long lVar8;
  long *plVar9;
  undefined1 *local_100;
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
  undefined1 *local_80;
  undefined1 *puStack_78;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  if (*(long *)(param_1 + 0x60) != 0) {
    plVar6 = (long *)(*(long *)(param_1 + 0x60) + 8);
    (**(code **)(*plVar6 + 0x10))(plVar6,param_2);
  }
  lVar8 = *(long *)(param_2 + 0x58);
  if (lVar8 != 0) {
    lVar8 = *(long *)(lVar8 + 0x10) + *(long *)(param_2 + 0x60);
  }
  uVar3 = *(ulong *)(param_2 + 0x18);
  puVar1 = (ushort *)0x0;
  if (uVar3 != 0) {
    puVar1 = (ushort *)(lVar8 + *(long *)(param_2 + 0x10));
  }
  if (1 < uVar3) {
    plVar6 = *(long **)(param_1 + 0x48);
    if (plVar6 != (long *)0x0) {
      do {
        while ((int)(uint)*(byte *)(param_2 + 1) < (int)*(uint *)((long)plVar6 + 0x1c)) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_0089e100;
        }
        if (*(uint *)((long)plVar6 + 0x1c) == (uint)*(byte *)(param_2 + 1)) {
          if (plVar6 != (long *)(param_1 + 0x48)) {
            uVar4 = (uint)(*puVar1 >> 8) | (*puVar1 & 0xff00ff) << 8;
            if (*(char *)(param_1 + 0x30) == '\x01') {
              plVar9 = *(long **)(param_1 + 0x28);
              pvVar7 = operator_new(0x88);
              FUN_00889b64(pvVar7,param_2,uVar4 | 0x10000);
              (**(code **)(*plVar9 + 0x28))(plVar9,pvVar7);
            }
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
            local_80 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
            local_100 = &DAT_aaaaaaaaaaaaaaaa;
            FUN_007dc020(&local_100);
            FUN_007da814(&local_100,param_2);
            FUN_007dabd4(&local_100,*(undefined4 *)(param_1 + 0x58));
            FUN_007daabc(&local_100,uVar4);
            FUN_007daa40(&local_100,(int)plVar6[4]);
            local_90 = *(undefined1 **)(param_2 + 0x70);
            local_80 = (undefined1 *)CONCAT71(local_80._1_7_,1);
            puVar2 = (ushort *)0x0;
            if (uVar3 - 2 != 0) {
              puVar2 = puVar1 + 1;
            }
            FUN_007db7a0(&local_100,puVar2,uVar3 - 2);
            (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),&local_100)
            ;
            FUN_007dc1b4(&local_100);
            goto LAB_0089e16c;
          }
          break;
        }
        plVar6 = (long *)plVar6[1];
      } while (plVar6 != (long *)0x0);
    }
  }
LAB_0089e100:
  if (*(char *)(param_1 + 0x30) == '\x01') {
    plVar6 = *(long **)(param_1 + 0x28);
    pvVar7 = operator_new(0x88);
    FUN_00889b64(pvVar7,param_2,0);
    if (*(long *)(lVar5 + 0x28) == local_68) {
                    /* WARNING: Could not recover jumptable at 0x0089e168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x28))(plVar6,pvVar7);
      return;
    }
  }
  else {
LAB_0089e16c:
    if (*(long *)(lVar5 + 0x28) == local_68) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0089e1a4  FUN_0089e1a4 =====

int FUN_0089e1a4(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *local_8;
  
  *param_1 = &PTR_FUN_00d3b2c8;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)((long)param_1 + 0x24) = param_2;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)((long)param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)((long)param_1 + 0x3c) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)((long)param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)((long)param_1 + 0x54) = 0;
  param_1[0xb] = 0x7fffffff7fffffff;
  *(undefined4 *)(param_1 + 0xc) = 0x7fffffff;
  *(undefined1 *)((long)param_1 + 100) = 0;
  *(undefined1 *)((long)param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  FUN_0089fb74(param_1 + 0x15);
  local_8 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_8);
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 0x18),(pthread_mutexattr_t *)&local_8);
  iVar1 = pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_8);
  return iVar1;
}


// ===== 0089e258  FUN_0089e258 =====

int FUN_0089e258(undefined8 *param_1)

{
  int iVar1;
  undefined1 *local_8;
  
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_00d3b2c8;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[4] = 0x100000001;
  *(undefined1 *)((long)param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)((long)param_1 + 0x3c) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)((long)param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)((long)param_1 + 0x54) = 0;
  param_1[0xb] = 0x7fffffff7fffffff;
  *(undefined4 *)(param_1 + 0xc) = 0x7fffffff;
  *(undefined1 *)((long)param_1 + 100) = 0;
  *(undefined1 *)((long)param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  FUN_0089fb74(param_1 + 0x15);
  local_8 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_8);
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 0x18),(pthread_mutexattr_t *)&local_8);
  iVar1 = pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_8);
  return iVar1;
}


// ===== 0089e310  FUN_0089e310 =====

void FUN_0089e310(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3b2c8;
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x18));
  FUN_0089fba0(param_1 + 0x15);
  return;
}


// ===== 0089e34c  FUN_0089e34c =====

void FUN_0089e34c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3b2c8;
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x18));
  FUN_0089fba0(param_1 + 0x15);
  operator_delete(param_1);
  return;
}


// ===== 0089e398  FUN_0089e398 =====

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff68 : 0x0089ebf0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4
FUN_0089e398(long param_1,uint param_2,uint param_3,ulong param_4,uint *param_5,uint *param_6,
            uint *param_7,uint *param_8)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char **ppcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  undefined4 uVar19;
  uint uVar20;
  ulong uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  int iVar26;
  uint uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  uint uVar30;
  long lVar31;
  uint uVar32;
  int iVar33;
  undefined8 *puVar34;
  uint uVar35;
  undefined8 *puVar36;
  undefined8 *puVar37;
  uint uVar38;
  undefined8 *puVar39;
  undefined8 *puVar40;
  ulong uVar41;
  char cVar42;
  int iVar43;
  float fVar44;
  double dVar45;
  double dVar46;
  undefined8 in_stack_fffffffffffffda0;
  undefined1 uStack_1e1;
  char *local_1e0;
  char **ppcStack_1d8;
  ulong local_1d0;
  char **local_1c8;
  char *local_1c0;
  ulong *puStack_1b8;
  ulong local_1b0;
  char **local_1a8;
  char *local_1a0;
  ulong *puStack_198;
  char *local_190;
  char **local_188;
  char *local_180;
  undefined8 local_178;
  char **local_170;
  char *local_168;
  char **local_160;
  ulong local_158;
  char **local_150;
  char *local_148;
  ulong *local_140;
  ulong local_138;
  char **local_130;
  char *local_128;
  ulong *local_120;
  ulong local_118;
  char **local_110;
  char *local_108;
  ulong *local_100;
  ulong local_f8;
  char **local_f0;
  char *local_e8;
  ulong *local_e0;
  ulong local_d8;
  char **local_d0;
  char *local_c8;
  ulong *local_c0;
  ulong local_b8;
  char **local_b0;
  char *local_a8;
  ulong *local_a0;
  ulong local_98;
  char **local_90;
  char *local_88;
  ulong *local_80;
  ulong local_78;
  char **local_70;
  
  uVar28 = (undefined4)((ulong)in_stack_fffffffffffffda0 >> 0x20);
  uVar41 = 0xaaaaaaaaaaaaaa00;
  uVar20 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xc0));
  uVar21 = (ulong)uVar20;
  iVar15 = *(int *)(param_1 + 0x5c);
  iVar26 = *(int *)(param_1 + 8) + 1;
  *(int *)(param_1 + 8) = iVar26;
  iVar43 = iVar15;
  if ((int)param_3 < (int)param_2) {
    cVar42 = *(char *)(param_1 + 0x30);
    if (cVar42 != '\0') {
      uVar41 = *(ulong *)(param_1 + 0x28);
    }
    if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
      lVar31 = 0x34;
LAB_0089e440:
      iVar43 = *(int *)(param_1 + lVar31);
      if (iVar15 <= *(int *)(param_1 + lVar31)) {
        iVar43 = iVar15;
      }
    }
  }
  else {
    cVar42 = *(char *)(param_1 + 0x44);
    if (cVar42 != '\0') {
      uVar41 = *(ulong *)(param_1 + 0x3c);
    }
    if (*(char *)(param_1 + 0x4c) == '\x01') {
      lVar31 = 0x48;
      goto LAB_0089e440;
    }
  }
  iVar15 = iVar43;
  if (*(int *)(param_1 + 0x58) <= iVar43) {
    iVar15 = *(int *)(param_1 + 0x58);
  }
  if (0 < iVar43) {
    iVar26 = *(int *)(param_1 + 0x60);
    iVar33 = iVar26;
    if ((*(char *)(param_1 + 0x54) == '\x01') &&
       (iVar33 = *(int *)(param_1 + 0x50), iVar26 <= *(int *)(param_1 + 0x50))) {
      iVar33 = iVar26;
    }
    FUN_0089fba8((double)iVar33,param_1 + 0xa8);
    uVar21 = FUN_0089fbc0(param_1 + 0xa8,param_4);
    if ((uVar21 & 1) == 0) {
      uVar20 = param_3;
      if (((cVar42 == '\0') || ((int)uVar41 < 1)) ||
         (uVar30 = (uint)(uVar41 >> 0x20), (int)uVar30 < 1)) {
        *param_5 = param_2;
      }
      else {
        fVar44 = (float)(uVar41 & 0xffffffff) / (float)uVar30;
        uVar27 = (uint)(fVar44 * (float)(int)param_3);
        uVar30 = param_2;
        if ((int)uVar27 <= (int)param_2) {
          uVar30 = uVar27;
        }
        *param_5 = uVar30;
        uVar30 = (uint)((float)(int)param_2 / fVar44);
        if ((int)uVar30 <= (int)param_3) {
          uVar20 = uVar30;
        }
      }
      *param_6 = uVar20;
      uVar30 = *param_5;
      iVar26 = uVar30 * uVar20;
      iVar33 = iVar26 - iVar15;
      if (iVar33 == 0 || iVar26 < iVar15) {
        uVar20 = 1;
        uVar27 = 1;
      }
      else {
        iVar1 = -iVar33;
        if (-1 < iVar33) {
          iVar1 = iVar33;
        }
        iVar33 = 0x7fffffff;
        if (iVar26 <= iVar43) {
          iVar33 = iVar1;
        }
        uVar27 = 6;
        if ((int)uVar30 % 3 != 0 || (int)uVar20 % 3 != 0) {
          uVar27 = 1;
        }
        uVar38 = 0x24;
        if ((int)uVar30 % 9 != 0 || (int)uVar20 % 9 != 0) {
          uVar38 = uVar27;
        }
        uVar27 = 1;
        uVar32 = 1;
        uVar20 = uVar38;
        do {
          if ((uVar20 & 1) == 0 && (int)uVar38 % 3 == 0) {
            uVar20 = (int)uVar20 / 2;
            uVar38 = (int)uVar38 / 3;
          }
          else {
            uVar38 = uVar38 * 3;
            uVar20 = uVar20 << 2;
          }
          iVar1 = 0;
          if ((long)(int)(uVar20 * uVar20) != 0) {
            iVar1 = (int)(((long)iVar26 * (long)(int)(uVar38 * uVar38)) /
                         (long)(int)(uVar20 * uVar20));
          }
          iVar17 = iVar15 - iVar1;
          iVar2 = -iVar17;
          if (-1 < iVar17) {
            iVar2 = iVar17;
          }
          iVar17 = iVar33;
          uVar3 = uVar32;
          uVar35 = uVar27;
          if (iVar2 < iVar33) {
            iVar17 = iVar2;
            uVar3 = uVar20;
            uVar35 = uVar38;
          }
          if (iVar1 <= iVar43) {
            iVar33 = iVar17;
            uVar32 = uVar3;
            uVar27 = uVar35;
          }
        } while (iVar15 < iVar1);
        uVar38 = -uVar27;
        if (-1 < (int)uVar27) {
          uVar38 = uVar27;
        }
        uVar20 = -uVar32;
        if (-1 < (int)uVar32) {
          uVar20 = uVar32;
        }
        uVar3 = uVar38;
        if (uVar20 <= uVar38) {
          uVar3 = uVar20;
        }
        if (uVar38 <= uVar20) {
          uVar38 = uVar20;
        }
        if (uVar3 != 0) {
          uVar20 = 0;
          if (uVar3 != 0) {
            uVar20 = uVar38 / uVar3;
          }
          uVar20 = uVar38 - uVar20 * uVar3;
          uVar38 = uVar3;
          if (uVar20 != 0) {
            uVar38 = (uVar20 & 0xaaaaaaaa) >> 1 | (uVar20 & 0x55555555) << 1;
            uVar38 = (uVar38 & 0xcccccccc) >> 2 | (uVar38 & 0x33333333) << 2;
            uVar38 = (uVar38 & 0xf0f0f0f0) >> 4 | (uVar38 & 0xf0f0f0f) << 4;
            uVar38 = (uVar38 & 0xff00ff00) >> 8 | (uVar38 & 0xff00ff) << 8;
            uVar38 = uVar20 >> (ulong)((uint)LZCOUNT(uVar38 >> 0x10 | uVar38 << 0x10) & 0x1f);
            uVar35 = uVar3;
            do {
              uVar16 = (uVar35 & 0xaaaaaaaa) >> 1 | (uVar35 & 0x55555555) << 1;
              uVar16 = (uVar16 & 0xcccccccc) >> 2 | (uVar16 & 0x33333333) << 2;
              uVar16 = (uVar16 & 0xf0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f) << 4;
              uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
              uVar16 = uVar35 >> (ulong)((uint)LZCOUNT(uVar16 >> 0x10 | uVar16 << 0x10) & 0x1f);
              uVar18 = uVar38 - uVar16;
              uVar35 = -uVar18;
              if (uVar16 <= uVar38 && uVar18 != 0) {
                uVar35 = uVar18;
              }
              if (uVar16 <= uVar38) {
                uVar38 = uVar16;
              }
            } while (uVar35 != 0);
            uVar20 = ((uVar20 | uVar3) & 0xaaaaaaaa) >> 1 | ((uVar20 | uVar3) & 0x55555555) << 1;
            uVar20 = (uVar20 & 0xcccccccc) >> 2 | (uVar20 & 0x33333333) << 2;
            uVar20 = (uVar20 & 0xf0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f) << 4;
            uVar20 = (uVar20 & 0xff00ff00) >> 8 | (uVar20 & 0xff00ff) << 8;
            uVar38 = uVar38 << (ulong)((uint)LZCOUNT(uVar20 >> 0x10 | uVar20 << 0x10) & 0x1f);
          }
        }
        uVar20 = 0;
        if (uVar38 != 0) {
          uVar20 = (int)uVar27 / (int)uVar38;
        }
        uVar27 = 0;
        if (uVar38 != 0) {
          uVar27 = (int)uVar32 / (int)uVar38;
        }
      }
      iVar26 = *(int *)(param_1 + 0x24) * uVar27;
      iVar15 = 0;
      if (iVar26 != 0) {
        iVar15 = (int)(uVar30 + iVar26 + -1) / iVar26;
      }
      uVar30 = iVar15 * iVar26;
      if ((int)param_2 < (int)uVar30) {
        iVar15 = 0;
        if (iVar26 != 0) {
          iVar15 = (int)param_2 / iVar26;
        }
        uVar30 = iVar15 * iVar26;
      }
      *param_5 = uVar30;
      iVar26 = *(int *)(param_1 + 0x24) * uVar27;
      iVar15 = 0;
      if (iVar26 != 0) {
        iVar15 = (int)(*param_6 + iVar26 + -1) / iVar26;
      }
      uVar30 = iVar15 * iVar26;
      if ((int)param_3 < (int)uVar30) {
        iVar15 = 0;
        if (iVar26 != 0) {
          iVar15 = (int)param_3 / iVar26;
        }
        uVar30 = iVar15 * iVar26;
      }
      *param_6 = uVar30;
      iVar26 = 0;
      if (uVar27 != 0) {
        iVar26 = (int)*param_5 / (int)uVar27;
      }
      *param_7 = iVar26 * uVar20;
      iVar26 = 0;
      if (uVar27 != 0) {
        iVar26 = (int)*param_6 / (int)uVar27;
      }
      uVar30 = iVar26 * uVar20;
      *param_8 = uVar30;
      if (*(char *)(param_1 + 0x6c) == '\x01') {
        uVar38 = *param_7;
        iVar15 = *(int *)(param_1 + 100);
        iVar43 = *(int *)(param_1 + 0x68);
        iVar26 = iVar43;
        if (iVar43 <= iVar15 == (int)uVar38 < (int)uVar30) {
          iVar26 = iVar15;
          iVar15 = iVar43;
        }
        if (((0 < (int)uVar38) && (0 < (int)uVar30)) &&
           ((iVar15 < (int)uVar38 || (iVar26 < (int)uVar30)))) {
          iVar43 = *(int *)(param_1 + 0x24);
          dVar45 = (double)iVar15 / (double)uVar38;
          dVar46 = (double)iVar26 / (double)uVar30;
          if (dVar45 <= (double)iVar26 / (double)uVar30) {
            dVar46 = dVar45;
          }
          iVar33 = 0;
          if (iVar43 != 0) {
            iVar33 = ((int)(dVar46 * (double)uVar38) + iVar43 + -1) / iVar43;
          }
          uVar30 = iVar33 * iVar43;
          if (iVar15 < (int)uVar30) {
            iVar33 = 0;
            if (iVar43 != 0) {
              iVar33 = iVar15 / iVar43;
            }
            uVar30 = iVar33 * iVar43;
          }
          *param_7 = uVar30;
          iVar15 = *(int *)(param_1 + 0x24);
          iVar43 = 0;
          if (iVar15 != 0) {
            iVar43 = (iVar15 + (int)(dVar46 * (double)(int)*param_8) + -1) / iVar15;
          }
          uVar30 = iVar43 * iVar15;
          if (iVar26 < (int)uVar30) {
            iVar43 = 0;
            if (iVar15 != 0) {
              iVar43 = iVar26 / iVar15;
            }
            uVar30 = iVar43 * iVar15;
          }
          *param_8 = uVar30;
        }
      }
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      if (uVar20 != uVar27) {
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      }
      uVar30 = *(uint *)(param_1 + 0x18);
      if ((uVar30 != *param_7) || (*(uint *)(param_1 + 0x1c) != *param_8)) {
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        uVar21 = FUN_00417e08();
        if ((uVar21 & 1) == 0) {
          local_180 = "../../media/base/video_adapter.cc";
          local_178 = 0x8e9;
          local_170 = (char **)&uStack_1e1;
          ppcStack_1d8 = &local_180;
          local_1e0 = "Frame size changed: scaled ";
          local_1c8 = &local_1e0;
          local_1d0 = (ulong)*(uint *)(param_1 + 0x10);
          local_158 = (ulong)*(uint *)(param_1 + 0x14);
          puStack_1b8 = &local_1d0;
          local_1c0 = " / out ";
          local_1a8 = &local_1c0;
          local_190 = (char *)(ulong)*(uint *)(param_1 + 8);
          local_1b0 = (ulong)*(uint *)(param_1 + 0xc);
          puStack_198 = &local_1b0;
          local_1a0 = " / in ";
          local_188 = &local_1a0;
          local_168 = " Changes: ";
          local_160 = &local_190;
          local_148 = " Input: ";
          local_140 = &local_158;
          local_138 = (ulong)param_2;
          local_130 = &local_148;
          local_128 = "x";
          local_120 = &local_138;
          local_110 = &local_128;
          local_108 = " Scale: ";
          local_100 = &local_118;
          local_f8 = (ulong)uVar20;
          local_f0 = &local_108;
          local_e8 = "/";
          local_e0 = &local_f8;
          local_d0 = &local_e8;
          local_c8 = " Output: ";
          local_b8 = (ulong)*param_7;
          local_c0 = &local_d8;
          local_b0 = &local_c8;
          local_a8 = "x";
          local_a0 = &local_b8;
          local_88 = " fps: ";
          local_78 = (ulong)*(uint *)(param_1 + 0x60);
          local_80 = &local_98;
          local_70 = &local_88;
          if (*(char *)(param_1 + 0x54) == '\x01') {
            uVar29 = *(undefined4 *)(param_1 + 0x50);
          }
          else {
            uVar29 = 0xffffffff;
          }
          uVar19 = (undefined4)local_98;
          pcVar4 = *local_90;
          ppcVar5 = local_90 + 1;
          puVar36 = *(undefined8 **)(*ppcVar5 + 8);
          puVar6 = (undefined4 *)puVar36[1];
          puVar39 = *(undefined8 **)(puVar6 + 2);
          puVar7 = (undefined4 *)puVar39[1];
          puVar22 = *(undefined8 **)(puVar7 + 2);
          puVar8 = (undefined4 *)puVar22[1];
          puVar23 = *(undefined8 **)(puVar8 + 2);
          puVar9 = (undefined4 *)puVar23[1];
          puVar24 = *(undefined8 **)(puVar9 + 2);
          puVar10 = (undefined4 *)puVar24[1];
          puVar34 = *(undefined8 **)(puVar10 + 2);
          puVar12 = (undefined4 *)puVar34[1];
          puVar37 = *(undefined8 **)(puVar12 + 2);
          puVar13 = (undefined4 *)puVar37[1];
          puVar40 = *(undefined8 **)(puVar13 + 2);
          puVar14 = (undefined4 *)puVar40[1];
          puVar25 = *(undefined8 **)(puVar14 + 2);
          puVar11 = (undefined8 *)puVar25[1];
          local_150 = &local_168;
          local_118 = (ulong)param_3;
          local_d8 = (ulong)uVar27;
          local_98 = (ulong)*param_8;
          local_90 = &local_a8;
          FUN_00623bb0(&DAT_00223ec2,*puVar11,*(undefined4 *)(puVar11 + 1),*puVar25,*puVar14,
                       *puVar40,*puVar13,*puVar37,*puVar12,*puVar34,*puVar10,*puVar24,*puVar9,
                       *puVar23,*puVar8,*puVar22,CONCAT44(uVar28,*puVar7),*puVar39,*puVar6,*puVar36,
                       *(undefined4 *)*ppcVar5,pcVar4,uVar19," fps: ",*(uint *)(param_1 + 0x60),
                       &DAT_001c7bbb,uVar29," alignment: ",*(undefined4 *)(param_1 + 0x24));
        }
        uVar30 = *param_7;
      }
      *(uint *)(param_1 + 0x18) = uVar30;
      uVar28 = 1;
      *(uint *)(param_1 + 0x1c) = *param_8;
      goto LAB_0089ecfc;
    }
    iVar26 = *(int *)(param_1 + 8);
  }
  iVar26 = iVar26 - *(int *)(param_1 + 0xc);
  if (((iVar26 * -0x5b05b05b + 0x2d82d82U >> 1 | iVar26 * -0x80000000) < 0x2d82d83) &&
     (uVar41 = FUN_00417e08(uVar21), uVar21 = local_98, (uVar41 & 1) == 0)) {
    local_180 = "../../media/base/video_adapter.cc";
    local_178 = 0x669;
    local_170 = &local_190;
    local_158 = (ulong)*(uint *)(param_1 + 0x10);
    local_f8 = (ulong)*(uint *)(param_1 + 0x14);
    local_168 = "VAdapt Drop Frame: scaled ";
    local_160 = &local_180;
    local_118 = (ulong)*(uint *)(param_1 + 8);
    local_138 = (ulong)*(uint *)(param_1 + 0xc);
    local_148 = " / out ";
    local_140 = &local_158;
    local_130 = &local_148;
    local_128 = " / in ";
    local_120 = &local_138;
    local_110 = &local_128;
    local_108 = " Changes: ";
    local_100 = &local_118;
    local_f0 = &local_108;
    local_e8 = " Input: ";
    local_e0 = &local_f8;
    local_d8 = (ulong)param_2;
    local_d0 = &local_e8;
    local_c8 = "x";
    local_c0 = &local_d8;
    local_b0 = &local_c8;
    local_a8 = " timestamp: ";
    local_a0 = &local_b8;
    local_88 = " Output fps: ";
    local_78 = (ulong)*(uint *)(param_1 + 0x60);
    local_80 = &local_98;
    local_70 = &local_88;
    if (*(char *)(param_1 + 0x54) == '\x01') {
      uVar28 = *(undefined4 *)(param_1 + 0x50);
    }
    else {
      uVar28 = 0xffffffff;
    }
    pcVar4 = *local_90;
    ppcVar5 = local_90 + 1;
    puVar34 = *(undefined8 **)(*ppcVar5 + 8);
    puVar6 = (undefined4 *)puVar34[1];
    puVar37 = *(undefined8 **)(puVar6 + 2);
    puVar7 = (undefined4 *)puVar37[1];
    puVar40 = *(undefined8 **)(puVar7 + 2);
    puVar8 = (undefined4 *)puVar40[1];
    puVar22 = *(undefined8 **)(puVar8 + 2);
    puVar9 = (undefined4 *)puVar22[1];
    puVar23 = *(undefined8 **)(puVar9 + 2);
    puVar10 = (undefined4 *)puVar23[1];
    puVar24 = *(undefined8 **)(puVar10 + 2);
    puVar11 = (undefined8 *)puVar24[1];
    local_150 = &local_168;
    local_b8 = (ulong)param_3;
    local_98 = param_4;
    local_90 = &local_a8;
    FUN_00623bb0(&DAT_00223eac,*puVar11,*(undefined4 *)(puVar11 + 1),*puVar24,*puVar10,*puVar23,
                 *puVar9,*puVar22,*puVar8,*puVar40,*puVar7,*puVar37,*puVar6,*puVar34,
                 *(undefined4 *)*ppcVar5,pcVar4,uVar21," Output fps: ",*(uint *)(param_1 + 0x60),
                 &DAT_001c7bbb,uVar28," alignment: ",*(undefined4 *)(param_1 + 0x24));
  }
  uVar28 = 0;
LAB_0089ecfc:
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xc0));
  return uVar28;
}


// ===== 0089ed2c  FUN_0089ed2c =====

void FUN_0089ed2c(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 local_40;
  undefined8 local_38;
  ulong local_30;
  undefined4 local_28;
  long local_20;
  undefined4 local_18;
  
  local_38 = 0xaaaaaa00aaaaaa00;
  local_40 = 0xaaaaaa00aaaaaa00;
  if ((char)param_2[6] == '\x01') {
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar5 = *(ulong *)(param_2 + 2);
    local_38 = CONCAT44(0xaaaaaa01,uVar3 * uVar2);
    if (0 < (long)uVar5) {
      uVar4 = 0;
      if (uVar5 != 0) {
        uVar4 = (undefined4)(1000000000 / uVar5);
      }
      local_40 = CONCAT44(0xaaaaaa01,uVar4);
    }
    local_20 = -0x5555555555555600;
    local_18 = 0xaaaaaa00;
    local_30 = 0xaaaaaaaaaaaaaa00;
    local_28 = 0xaaaaaa00;
    if ((0 < (int)uVar2) && (0 < (int)uVar3)) {
      uVar1 = uVar3;
      if (uVar2 <= uVar3) {
        uVar1 = uVar2;
        uVar2 = uVar3;
      }
      local_20 = CONCAT44(uVar1,uVar2);
      local_18 = 0xaaaaaa01;
      local_28 = 0xaaaaaa01;
      local_30 = (ulong)uVar1 | local_20 << 0x20;
    }
  }
  else {
    local_20 = -0x5555555555555600;
    local_18 = 0xaaaaaa00;
    local_30 = 0xaaaaaaaaaaaaaa00;
    local_28 = 0xaaaaaa00;
  }
  FUN_0089eeec(param_1,&local_20,&local_38,&local_30,&local_38,&local_40);
  return;
}


// ===== 0089ee44  FUN_0089ee44 =====

void FUN_0089ee44(undefined8 param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong local_30;
  undefined4 local_28;
  long local_20;
  undefined4 local_18;
  
  local_20 = -0x5555555555555600;
  local_18 = 0xaaaaaa00;
  local_30 = 0xaaaaaaaaaaaaaa00;
  local_28 = 0xaaaaaa00;
  if ((((char)param_2[2] == '\x01') && (uVar2 = *param_2, 0 < (int)uVar2)) &&
     (uVar3 = param_2[1], 0 < (int)uVar3)) {
    uVar1 = uVar3;
    if (uVar2 <= uVar3) {
      uVar1 = uVar2;
      uVar2 = uVar3;
    }
    local_20 = CONCAT44(uVar1,uVar2);
    local_18 = 0xaaaaaa01;
    local_28 = 0xaaaaaa01;
    local_30 = (ulong)uVar1 | local_20 << 0x20;
  }
  FUN_0089eeec(param_1,&local_20,param_3,&local_30,param_3,param_4);
  return;
}


// ===== 0089eeec  FUN_0089eeec =====

int FUN_0089eeec(long param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,
                undefined4 *param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined1 uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  char *pcVar7;
  undefined8 uVar8;
  void *local_88 [2];
  char cStack_71;
  undefined8 local_70;
  char local_68;
  undefined3 local_67;
  undefined4 uStack_64;
  undefined1 uStack_60;
  undefined3 uStack_5f;
  undefined5 uStack_5c;
  undefined3 uStack_57;
  char cStack_54;
  undefined3 uStack_53;
  undefined1 uStack_50;
  undefined4 uStack_4f;
  undefined4 uStack_4b;
  undefined4 uStack_47;
  undefined3 uStack_43;
  
  iVar5 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xc0));
  local_70 = *param_2;
  local_68 = *(char *)(param_2 + 1);
  uVar1 = *param_3;
  uVar2 = *(undefined1 *)(param_3 + 1);
  uStack_5f = 0xaaaaaa;
  uVar8 = *param_4;
  _local_67 = CONCAT17(uVar2,CONCAT43(uVar1,0xaaaaaa));
  cVar3 = *(char *)(param_4 + 1);
  uStack_5c = (undefined5)uVar8;
  _uStack_57 = CONCAT13(cVar3,(int3)((ulong)uVar8 >> 0x28));
  uStack_50 = (undefined1)*param_5;
  _uStack_53 = CONCAT13(uStack_50,0xaaaaaa);
  uStack_4f = CONCAT13(*(undefined1 *)(param_5 + 1),(int3)((uint)*param_5 >> 8));
  uStack_43 = 0xaaaaaa;
  uStack_4b = CONCAT13((char)*param_6,0xaaaaaa);
  uStack_47 = CONCAT13(*(undefined1 *)(param_6 + 1),(int3)((uint)*param_6 >> 8));
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    FUN_0089f128(param_1 + 0x70,&local_70);
    uVar6 = FUN_00417e08();
    if ((uVar6 & 1) != 0) goto LAB_0089f0d4;
    if ((*(byte *)(param_1 + 0xa0) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                );
    }
    FUN_0089f234(local_88,param_1 + 0x70);
    pcVar7 = "Stashing OnOutputFormatRequest: ";
    uVar8 = 0xb21;
  }
  else {
    cVar4 = *(char *)(param_1 + 0x30);
    if (cVar4 == local_68) {
      if (cVar4 != '\0') {
        *(undefined8 *)(param_1 + 0x28) = local_70;
      }
    }
    else if (cVar4 == '\0') {
      if ((undefined8 *)(param_1 + 0x28) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *(undefined1 *)(param_1 + 0x30) = 1;
      *(undefined8 *)(param_1 + 0x28) = local_70;
    }
    else {
      *(undefined1 *)(param_1 + 0x30) = 0;
    }
    cVar4 = *(char *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0x34) = uVar1;
    *(undefined1 *)(param_1 + 0x38) = uVar2;
    if (cVar4 == cVar3) {
      if (cVar4 != '\0') {
        *(undefined8 *)(param_1 + 0x3c) = uVar8;
      }
    }
    else if (cVar4 == '\0') {
      *(undefined1 *)(param_1 + 0x44) = 1;
      *(undefined8 *)(param_1 + 0x3c) = uVar8;
    }
    else {
      *(undefined1 *)(param_1 + 0x44) = 0;
    }
    *(ulong *)(param_1 + 0x48) = CONCAT35(0xaaaaaa,CONCAT41(uStack_4f,uStack_50));
    *(ulong *)(param_1 + 0x4d) = CONCAT44(uStack_47,uStack_4b);
    uVar6 = FUN_00417e08(iVar5);
    if ((uVar6 & 1) != 0) goto LAB_0089f0d4;
    FUN_0089f234(local_88,param_1 + 0x28);
    pcVar7 = "Setting output_format_request_: ";
    uVar8 = 0xb41;
  }
  FUN_00623bb0(&DAT_001f4e90,"../../media/base/video_adapter.cc",uVar8,pcVar7,local_88);
  if (cStack_71 < '\0') {
    operator_delete(local_88[0]);
  }
LAB_0089f0d4:
  FUN_0089fc48(param_1 + 0xa8);
  iVar5 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xc0));
  return iVar5;
}


// ===== 0089f128  FUN_0089f128 =====

void FUN_0089f128(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (*(char *)(param_1 + 6) == '\x01') {
    cVar2 = *(char *)(param_1 + 1);
    if (cVar2 == *(char *)(param_2 + 1)) {
      if (cVar2 != '\0') {
        *(undefined4 *)param_1 = *(undefined4 *)param_2;
        *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)((long)param_2 + 4);
      }
    }
    else if (cVar2 == '\0') {
      if (param_1 == (undefined8 *)0x0) goto LAB_0089f220;
      uVar3 = *param_2;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar3;
    }
    else {
      *(undefined1 *)(param_1 + 1) = 0;
    }
    uVar1 = *(undefined4 *)((long)param_2 + 0xc);
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
    cVar2 = *(char *)((long)param_1 + 0x1c);
    *(undefined4 *)((long)param_1 + 0xc) = uVar1;
    if (cVar2 == *(char *)((long)param_2 + 0x1c)) {
      if (cVar2 != '\0') {
        *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)((long)param_2 + 0x14);
        *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
      }
    }
    else if (cVar2 == '\0') {
      if (param_1 == (undefined8 *)0xffffffffffffffec) goto LAB_0089f220;
      uVar3 = *(undefined8 *)((long)param_2 + 0x14);
      *(undefined1 *)((long)param_1 + 0x1c) = 1;
      *(undefined8 *)((long)param_1 + 0x14) = uVar3;
    }
    else {
      *(undefined1 *)((long)param_1 + 0x1c) = 0;
    }
    uVar3 = param_2[4];
    *(undefined8 *)((long)param_1 + 0x25) = *(undefined8 *)((long)param_2 + 0x25);
    param_1[4] = uVar3;
  }
  else {
    if (param_1 == (undefined8 *)0x0) {
LAB_0089f220:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar6 = param_2[3];
    uVar5 = param_2[2];
    uVar4 = param_2[5];
    uVar3 = param_2[4];
    uVar8 = param_2[1];
    uVar7 = *param_2;
    *(undefined1 *)(param_1 + 6) = 1;
    param_1[3] = uVar6;
    param_1[2] = uVar5;
    param_1[5] = uVar4;
    param_1[4] = uVar3;
    param_1[1] = uVar8;
    *param_1 = uVar7;
  }
  return;
}


// ===== 0089f234  FUN_0089f234 =====

void FUN_0089f234(undefined8 *param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 ***pppuVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 **local_48;
  ulong uStack_40;
  ulong local_38;
  
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  FUN_00547cac(&local_60,&DAT_001b0cbd,2);
  bVar4 = (char)param_2[7] != '\x01';
  if (bVar4) {
    uVar5 = 0;
  }
  else {
    uVar5 = (ulong)(uint)param_2[6] & 0xffffff00 | (ulong)(uint)param_2[5] << 0x20 |
            (ulong)(uint)param_2[6] & 0xff;
  }
  bVar4 = !bVar4;
  bVar1 = *(byte *)(param_2 + 2);
  if ((bVar1 & bVar4) == 0) {
    if ((bool)bVar1 == bVar4) {
LAB_0089f2d4:
      bVar2 = *(byte *)(param_2 + 9);
      if ((bVar2 & *(byte *)(param_2 + 4)) == 0) {
        if (*(byte *)(param_2 + 4) == bVar2) {
LAB_0089f2f8:
          if (bVar1 == 0) {
            FUN_00547cac(&local_60,"unset-resolution",0x10);
          }
          else {
            local_48 = (undefined8 ***)0x0;
            uStack_40 = 0;
            local_38 = 0;
            FUN_005f55c4(&local_48,0x16,*param_2);
            uVar5 = uStack_40;
            pppuVar3 = (undefined8 ***)local_48;
            if (-1 < (long)local_38) {
              uVar5 = local_38 >> 0x38;
              pppuVar3 = &local_48;
            }
            FUN_00547cac(&local_60,pppuVar3,uVar5);
            if ((long)local_38 < 0) {
              operator_delete(local_48);
            }
            FUN_00547cac(&local_60,&DAT_001c4fee,1);
            if ((*(byte *)(param_2 + 2) & 1) == 0) goto LAB_0089f828;
            local_48 = (undefined8 ***)0x0;
            uStack_40 = 0;
            local_38 = 0;
            FUN_005f55c4(&local_48,0x16,param_2[1]);
            uVar5 = uStack_40;
            pppuVar3 = (undefined8 ***)local_48;
            if (-1 < (long)local_38) {
              uVar5 = local_38 >> 0x38;
              pppuVar3 = &local_48;
            }
            FUN_00547cac(&local_60,pppuVar3,uVar5);
            if ((long)local_38 < 0) {
              operator_delete(local_48);
            }
          }
          if ((char)param_2[4] == '\x01') {
            FUN_00547cac(&local_60," max_pixel_count: ",0x12);
            if ((*(byte *)(param_2 + 4) & 1) != 0) {
              local_48 = (undefined8 ***)0x0;
              uStack_40 = 0;
              local_38 = 0;
              FUN_005f55c4(&local_48,0x16,param_2[3]);
              uVar5 = uStack_40;
              pppuVar3 = (undefined8 ***)local_48;
              if (-1 < (long)local_38) {
                uVar5 = local_38 >> 0x38;
                pppuVar3 = &local_48;
              }
              FUN_00547cac(&local_60,pppuVar3,uVar5);
              if ((long)local_38 < 0) {
                operator_delete(local_48);
              }
              goto LAB_0089f6b8;
            }
            goto LAB_0089f814;
          }
          goto LAB_0089f6b8;
        }
      }
      else {
        if ((bVar2 & 1) == 0) goto LAB_0089f814;
        if (param_2[3] == param_2[8]) goto LAB_0089f2f8;
      }
    }
  }
  else {
    if (!bVar4) goto LAB_0089f814;
    if ((*param_2 == (int)uVar5) && (param_2[1] == (int)(uVar5 >> 0x20))) goto LAB_0089f2d4;
  }
  FUN_00547cac(&local_60,"[ landscape: ",0xd);
  if ((char)param_2[2] == '\x01') {
    local_48 = (undefined8 ***)0x0;
    uStack_40 = 0;
    local_38 = 0;
    FUN_005f55c4(&local_48,0x16,*param_2);
    uVar5 = uStack_40;
    pppuVar3 = (undefined8 ***)local_48;
    if (-1 < (long)local_38) {
      uVar5 = local_38 >> 0x38;
      pppuVar3 = &local_48;
    }
    FUN_00547cac(&local_60,pppuVar3,uVar5);
    if ((long)local_38 < 0) {
      operator_delete(local_48);
    }
    FUN_00547cac(&local_60,&DAT_001c4fee,1);
    if ((*(byte *)(param_2 + 2) & 1) == 0) goto LAB_0089f828;
    local_48 = (undefined8 ***)0x0;
    uStack_40 = 0;
    local_38 = 0;
    FUN_005f55c4(&local_48,0x16,param_2[1]);
    uVar5 = uStack_40;
    pppuVar3 = (undefined8 ***)local_48;
    if (-1 < (long)local_38) {
      uVar5 = local_38 >> 0x38;
      pppuVar3 = &local_48;
    }
    FUN_00547cac(&local_60,pppuVar3,uVar5);
    if ((long)local_38 < 0) {
      operator_delete(local_48);
    }
  }
  else {
    FUN_00547cac(&local_60,"unset",5);
  }
  if ((char)param_2[4] == '\x01') {
    FUN_00547cac(&local_60," max_pixel_count: ",0x12);
    if ((*(byte *)(param_2 + 4) & 1) == 0) goto LAB_0089f814;
    local_48 = (undefined8 ***)0x0;
    uStack_40 = 0;
    local_38 = 0;
    FUN_005f55c4(&local_48,0x16,param_2[3]);
    uVar5 = uStack_40;
    pppuVar3 = (undefined8 ***)local_48;
    if (-1 < (long)local_38) {
      uVar5 = local_38 >> 0x38;
      pppuVar3 = &local_48;
    }
    FUN_00547cac(&local_60,pppuVar3,uVar5);
    if ((long)local_38 < 0) {
      operator_delete(local_48);
    }
  }
  FUN_00547cac(&local_60," ] [ portrait: ",0xf);
  if ((char)param_2[7] == '\x01') {
    local_48 = (undefined8 ***)0x0;
    uStack_40 = 0;
    local_38 = 0;
    FUN_005f55c4(&local_48,0x16,param_2[5]);
    uVar5 = uStack_40;
    pppuVar3 = (undefined8 ***)local_48;
    if (-1 < (long)local_38) {
      uVar5 = local_38 >> 0x38;
      pppuVar3 = &local_48;
    }
    FUN_00547cac(&local_60,pppuVar3,uVar5);
    if ((long)local_38 < 0) {
      operator_delete(local_48);
    }
    FUN_00547cac(&local_60,&DAT_001c4fee,1);
    if ((*(byte *)(param_2 + 7) & 1) == 0) {
LAB_0089f828:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1054: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                );
    }
    local_48 = (undefined8 ***)0x0;
    uStack_40 = 0;
    local_38 = 0;
    FUN_005f55c4(&local_48,0x16,param_2[6]);
    uVar5 = uStack_40;
    pppuVar3 = (undefined8 ***)local_48;
    if (-1 < (long)local_38) {
      uVar5 = local_38 >> 0x38;
      pppuVar3 = &local_48;
    }
    FUN_00547cac(&local_60,pppuVar3,uVar5);
    if ((long)local_38 < 0) {
      operator_delete(local_48);
    }
  }
  if ((char)param_2[9] == '\x01') {
    FUN_00547cac(&local_60," max_pixel_count: ",0x12);
    if ((*(byte *)(param_2 + 9) & 1) == 0) {
LAB_0089f814:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    local_48 = (undefined8 ***)0x0;
    uStack_40 = 0;
    local_38 = 0;
    FUN_005f55c4(&local_48,0x16,param_2[8]);
    uVar5 = uStack_40;
    pppuVar3 = (undefined8 ***)local_48;
    if (-1 < (long)local_38) {
      uVar5 = local_38 >> 0x38;
      pppuVar3 = &local_48;
    }
    FUN_00547cac(&local_60,pppuVar3,uVar5);
    if ((long)local_38 < 0) {
      operator_delete(local_48);
    }
  }
  FUN_00547cac(&local_60,&DAT_001bc69f,2);
LAB_0089f6b8:
  FUN_00547cac(&local_60," max_fps: ",10);
  if ((char)param_2[0xb] == '\x01') {
    local_48 = (undefined8 ***)0x0;
    uStack_40 = 0;
    local_38 = 0;
    FUN_005f55c4(&local_48,0x16,param_2[10]);
    uVar5 = uStack_40;
    pppuVar3 = (undefined8 ***)local_48;
    if (-1 < (long)local_38) {
      uVar5 = local_38 >> 0x38;
      pppuVar3 = &local_48;
    }
    FUN_00547cac(&local_60,pppuVar3,uVar5);
    if ((long)local_38 < 0) {
      operator_delete(local_48);
    }
  }
  else {
    FUN_00547cac(&local_60,"unset",5);
  }
  FUN_00547cac(&local_60,&DAT_001bc69f,2);
  param_1[1] = uStack_58;
  *param_1 = local_60;
  param_1[2] = local_50;
  return;
}


// ===== 0089f83c  FUN_0089f83c =====

int FUN_0089f83c(long param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  void *local_38 [2];
  char cStack_21;
  
  iVar10 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xc0));
  uVar3 = *(undefined4 *)(param_2 + 4);
  lVar12 = 0;
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  uVar2 = *(undefined4 *)(param_2 + 8);
  if (*(char *)(param_2 + 0xc) == '\0') {
    uVar2 = uVar3;
  }
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  uVar4 = *(uint *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x10);
  if ((uVar4 != 0) && (uVar14 = *(uint *)(param_2 + 0x14), uVar14 != 0)) {
    uVar1 = -uVar4;
    if (-1 < (int)uVar4) {
      uVar1 = uVar4;
    }
    uVar4 = -uVar14;
    if (-1 < (int)uVar14) {
      uVar4 = uVar14;
    }
    uVar14 = uVar1;
    if (uVar4 <= uVar1) {
      uVar14 = uVar4;
    }
    uVar6 = uVar1;
    if (uVar1 <= uVar4) {
      uVar6 = uVar4;
    }
    uVar16 = 0;
    if (uVar14 != 0) {
      uVar16 = uVar6 / uVar14;
    }
    uVar6 = uVar6 - uVar16 * uVar14;
    if (uVar6 != 0) {
      uVar16 = (uVar6 & 0xaaaaaaaa) >> 1 | (uVar6 & 0x55555555) << 1;
      uVar16 = (uVar16 & 0xcccccccc) >> 2 | (uVar16 & 0x33333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
      uVar15 = uVar6 >> (ulong)((uint)LZCOUNT(uVar16 >> 0x10 | uVar16 << 0x10) & 0x1f);
      uVar16 = uVar14;
      do {
        uVar7 = (uVar16 & 0xaaaaaaaa) >> 1 | (uVar16 & 0x55555555) << 1;
        uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
        uVar7 = uVar16 >> (ulong)((uint)LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10) & 0x1f);
        uVar9 = uVar15 - uVar7;
        uVar16 = -uVar9;
        if (uVar7 <= uVar15 && uVar9 != 0) {
          uVar16 = uVar9;
        }
        if (uVar7 <= uVar15) {
          uVar15 = uVar7;
        }
      } while (uVar16 != 0);
      uVar14 = ((uVar6 | uVar14) & 0xaaaaaaaa) >> 1 | ((uVar6 | uVar14) & 0x55555555) << 1;
      uVar14 = (uVar14 & 0xcccccccc) >> 2 | (uVar14 & 0x33333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
      uVar14 = uVar15 << (ulong)((uint)LZCOUNT(uVar14 >> 0x10 | uVar14 << 0x10) & 0x1f);
    }
    iVar8 = 0;
    if (uVar14 != 0) {
      iVar8 = (int)uVar1 / (int)uVar14;
    }
    lVar12 = (long)iVar8 * (long)(int)uVar4;
    if (lVar12 - (int)lVar12 != 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__numeric/gcd_lcm.h:110: libc++ Hardening assertion !__overflow failed: Overflow in lcm\n"
                );
    }
  }
  *(int *)(param_1 + 0x24) = (int)lVar12;
  if (*(char *)(param_1 + 0x6c) == '\x01') {
    *(undefined1 *)(param_1 + 0x6c) = 0;
  }
  if (*(char *)(param_2 + 0x38) == '\x01') {
    uVar13 = *(undefined8 *)(param_2 + 0x30);
    *(undefined1 *)(param_1 + 0x6c) = 1;
    *(undefined8 *)(param_1 + 100) = uVar13;
    if ((*(byte *)(param_2 + 0x38) & 1) != 0) {
      if ((*(char *)(param_2 + 0x3e) != '\x01') || ((*(byte *)(param_2 + 0x3d) & 1) == 0)) {
        if ((*(byte *)(param_1 + 0xa0) & 1) == 0) {
          FUN_0089f128(param_1 + 0x70,param_1 + 0x28);
          uVar11 = FUN_00417e08();
          if ((uVar11 & 1) == 0) {
            if ((*(byte *)(param_1 + 0xa0) & 1) == 0) goto LAB_0089fb4c;
            FUN_0089f234(local_38,param_1 + 0x70);
            FUN_00623bb0(&DAT_001f4e90,"../../media/base/video_adapter.cc",0xd19,
                         "Stashing OnOutputFormatRequest: ",local_38);
            if (cStack_21 < '\0') {
              operator_delete(local_38[0]);
            }
          }
        }
        if (*(char *)(param_1 + 0x30) != '\0') {
          *(undefined1 *)(param_1 + 0x30) = 0;
        }
        *(undefined1 *)(param_1 + 0x34) = 0;
        *(undefined1 *)(param_1 + 0x38) = 0;
        if (*(char *)(param_1 + 0x44) != '\0') {
          *(undefined1 *)(param_1 + 0x44) = 0;
        }
        *(undefined1 *)(param_1 + 0x48) = 0;
        *(undefined1 *)(param_1 + 0x4c) = 0;
        *(undefined1 *)(param_1 + 0x50) = 0;
        *(undefined1 *)(param_1 + 0x54) = 0;
      }
      goto LAB_0089fb08;
    }
  }
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    uVar11 = FUN_00417e08(iVar10);
    if ((uVar11 & 1) == 0) {
      if ((*(byte *)(param_1 + 0xa0) & 1) == 0) {
LAB_0089fb4c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                  );
      }
      FUN_0089f234(local_38,param_1 + 0x70);
      FUN_00623bb0(&DAT_001f4e90,"../../media/base/video_adapter.cc",0xc51,
                   "Unstashing OnOutputFormatRequest: ",local_38);
      if (cStack_21 < '\0') {
        operator_delete(local_38[0]);
      }
    }
    if ((*(byte *)(param_1 + 0xa0) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    cVar5 = *(char *)(param_1 + 0x30);
    if (cVar5 == *(char *)(param_1 + 0x78)) {
      if (cVar5 != '\0') {
        *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x70);
      }
    }
    else if (cVar5 == '\0') {
      if ((undefined8 *)(param_1 + 0x28) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *(undefined1 *)(param_1 + 0x30) = 1;
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x70);
    }
    else {
      *(undefined1 *)(param_1 + 0x30) = 0;
    }
    cVar5 = *(char *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x7c);
    *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_1 + 0x80);
    if (cVar5 == *(char *)(param_1 + 0x8c)) {
      if (cVar5 != '\0') {
        *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_1 + 0x84);
      }
    }
    else if (cVar5 == '\0') {
      *(undefined1 *)(param_1 + 0x44) = 1;
      *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_1 + 0x84);
    }
    else {
      *(undefined1 *)(param_1 + 0x44) = 0;
    }
    *(undefined1 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x4d) = *(undefined8 *)(param_1 + 0x95);
  }
LAB_0089fb08:
  iVar10 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xc0));
  return iVar10;
}


// ===== 0089fb74  FUN_0089fb74 =====

void FUN_0089fb74(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0x7fefffffffffffff;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}


// ===== 0089fb8c  FUN_0089fb8c =====

void FUN_0089fb8c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  *(undefined1 *)(param_2 + 1) = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  return;
}


// ===== 0089fba0  FUN_0089fba0 =====

void FUN_0089fba0(void)

{
  return;
}


// ===== 0089fba8  FUN_0089fba8 =====

void FUN_0089fba8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  return;
}


// ===== 0089fbb4  FUN_0089fbb4 =====

undefined1  [16] FUN_0089fbb4(ulong *param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *param_1;
  auVar1._8_8_ = 0;
  return auVar1;
}


// ===== 0089fbc0  FUN_0089fbc0 =====

undefined8 FUN_0089fbc0(double *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  double dVar4;
  
  if (*param_1 < 0.5) {
    return 1;
  }
  uVar3 = (ulong)(1000000000.0 / *param_1);
  if ((long)uVar3 < 1) {
    return 0;
  }
  if (*(char *)(param_1 + 2) == '\x01') {
    lVar2 = (long)param_1[1] - param_2;
    lVar1 = -lVar2;
    if (-1 < lVar2) {
      lVar1 = lVar2;
    }
    if ((long)(lVar1 + uVar3 * -2) < 0 != SBORROW8(lVar1,uVar3 * 2)) {
      if (0 < lVar2) {
        return 1;
      }
      dVar4 = (double)((long)param_1[1] + uVar3);
      goto LAB_0089fc34;
    }
  }
  dVar4 = (double)(param_2 + (uVar3 >> 1));
  *(undefined1 *)(param_1 + 2) = 1;
LAB_0089fc34:
  param_1[1] = dVar4;
  return 0;
}


// ===== 0089fc48  FUN_0089fc48 =====

void FUN_0089fc48(undefined8 *param_1)

{
  *param_1 = 0x7fefffffffffffff;
  if (*(char *)(param_1 + 2) == '\x01') {
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}


// ===== 0089fc68  FUN_0089fc68 =====

void FUN_0089fc68(double *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if ((0.5 <= *param_1) && (uVar3 = (ulong)(1000000000.0 / *param_1), 0 < (long)uVar3)) {
    if (*(char *)(param_1 + 2) == '\x01') {
      lVar2 = (long)param_1[1] - param_2;
      lVar1 = -lVar2;
      if (-1 < lVar2) {
        lVar1 = lVar2;
      }
      if ((long)(lVar1 + uVar3 * -2) < 0 != SBORROW8(lVar1,uVar3 * 2)) {
        param_1[1] = (double)((long)param_1[1] + uVar3);
        return;
      }
    }
    *(undefined1 *)(param_1 + 2) = 1;
    param_1[1] = (double)(param_2 + (uVar3 >> 1));
  }
  return;
}


// ===== 0089fcd8  FUN_0089fcd8 =====

void FUN_0089fcd8(undefined8 param_1)

{
  ulong uVar1;
  void *pvVar2;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/utility/source/jvm_android.cc",0x6c9,"JVM::Initialize"
                );
  }
  if (DAT_00d803e0 == (void *)0x0) {
    pvVar2 = operator_new(0x10);
    FUN_0089fd70(pvVar2,param_1);
    DAT_00d803e0 = pvVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../modules/utility/source/jvm_android.cc",0xda,"!g_jvm",&DAT_001f5fa0);
}


// ===== 0089fd70  FUN_0089fd70 =====

void FUN_0089fd70(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/utility/source/jvm_android.cc",0x7c1,"JVM::JVM");
  }
  lVar2 = FUN_0089fe30(*(undefined8 *)(param_1 + 8));
  if (lVar2 != 0) {
    FUN_0089fe30(*(undefined8 *)(param_1 + 8));
    uVar1 = FUN_00417e08();
    if ((uVar1 & 1) != 0) {
      return;
    }
    FUN_00623bb0(&DAT_001f4e98,"../../modules/utility/source/jvm_android.cc",0x139,"LoadClasses:");
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../modules/utility/source/jvm_android.cc",0xf9,"jni()",&DAT_001fbee0,
               "AttachCurrentThread() must be called on this thread.");
}


// ===== 0089fe30  FUN_0089fe30 =====

long FUN_0089fe30(long *param_1)

{
  int iVar1;
  long local_18;
  
  local_18 = 0;
  iVar1 = (**(code **)(*param_1 + 0x30))(param_1,&local_18,0x10006);
  if ((iVar1 != 0 || local_18 == 0) && ((iVar1 != -2 || (local_18 != 0)))) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/utility/source/helpers_android.cc",0x1f,
                 "((env != NULL) && (status == JNI_OK)) || ((env == NULL) && (status == JNI_EDETACHED))"
                 ,&DAT_00223ee1,"Unexpected GetEnv return: ",iVar1,&DAT_001ca603);
  }
  return local_18;
}


// ===== 0089fec0  FUN_0089fec0 =====

void FUN_0089fec0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  *puVar1 = &PTR_FUN_00d3b2e8;
  return;
}


// ===== 0089feec  FUN_0089feec =====

void FUN_0089feec(void)

{
  return;
}


// ===== 0089fef4  FUN_0089fef4 =====

void FUN_0089fef4(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0089ff00  FUN_0089ff00 =====

void * FUN_0089ff00(undefined8 param_1,long param_2,uint *param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  
  if ((*param_3 & 0xfffffffe) == 2 && (byte)param_3[8] < 2) {
    uVar2 = *(undefined8 *)(param_2 + 8);
    pvVar1 = operator_new(0x5b0);
    FUN_008a5870(pvVar1,param_3,uVar2);
  }
  else {
    pvVar1 = operator_new(0x5e0);
    FUN_008a0080(pvVar1,param_2,param_3);
  }
  return pvVar1;
}


// ===== 0089ff84  FUN_0089ff84 =====

undefined4 FUN_0089ff84(uint param_1,uint param_2,byte param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  uVar2 = (ulong)param_1;
  if ((int)param_1 < 1) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/video_coding/utility/simulcast_rate_allocator.cc",0x3b,
                 "num_layers > 0",&DAT_001fbedc,uVar2,0);
  }
  if (4 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/video_coding/utility/simulcast_rate_allocator.cc",0x3c,
                 "num_layers <= kMaxTemporalStreams",&DAT_001fbedc,uVar2,4);
  }
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/video_coding/utility/simulcast_rate_allocator.cc",0x3d,
                 "temporal_id >= 0",&DAT_001fbedc,param_2,0);
  }
  if (param_2 < param_1) {
    puVar1 = &UNK_001f2a50;
    if ((param_1 == 3 & param_3) == 0) {
      puVar1 = &UNK_00223edc + uVar2 * 0x10;
    }
    return *(undefined4 *)(puVar1 + (ulong)param_2 * 4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../modules/video_coding/utility/simulcast_rate_allocator.cc",0x3e,
               "temporal_id < num_layers",&DAT_001fbedc);
}


// ===== 008a0080  FUN_008a0080 =====

void FUN_008a0080(undefined8 *param_1,long param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_00d3b310;
  FUN_008a00d8(param_1 + 1,param_3);
  FUN_008a5364(param_1 + 0xad,*(undefined8 *)(param_2 + 8));
  *(undefined1 *)(param_1 + 0xbb) = 0;
  param_1[0xba] = 0;
  param_1[0xb9] = 0;
  param_1[0xb8] = 0;
  return;
}


// ===== 008a00d8  FUN_008a00d8 =====

void FUN_008a00d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar5 = param_2[1];
  uVar4 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[1] = uVar5;
  *param_1 = uVar4;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar3 = param_2[6];
  uVar2 = param_2[5];
  uVar1 = *(undefined1 *)(param_2 + 9);
  uVar5 = param_2[8];
  uVar4 = param_2[7];
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 9) = uVar1;
  param_1[8] = uVar5;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  param_1[5] = uVar2;
  *(undefined1 *)(param_1 + 0x16) = 0;
  if (*(char *)(param_2 + 0x16) == '\x01') {
    FUN_007b69e0(param_1 + 10,param_2 + 10);
    *(undefined1 *)(param_1 + 0x16) = 1;
  }
  uVar2 = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x17] = uVar2;
  uVar3 = param_2[0x1a];
  uVar2 = param_2[0x19];
  uVar1 = *(undefined1 *)(param_2 + 0x1d);
  uVar5 = param_2[0x1c];
  uVar4 = param_2[0x1b];
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x1d) = uVar1;
  param_1[0x1c] = uVar5;
  param_1[0x1b] = uVar4;
  param_1[0x1a] = uVar3;
  param_1[0x19] = uVar2;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  if (*(char *)(param_2 + 0x2a) == '\x01') {
    FUN_007b69e0(param_1 + 0x1e,param_2 + 0x1e);
    *(undefined1 *)(param_1 + 0x2a) = 1;
  }
  uVar2 = param_2[0x2b];
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2b] = uVar2;
  uVar3 = param_2[0x2e];
  uVar2 = param_2[0x2d];
  uVar5 = param_2[0x30];
  uVar4 = param_2[0x2f];
  uVar1 = *(undefined1 *)(param_2 + 0x31);
  *(undefined1 *)(param_1 + 0x32) = 0;
  *(undefined1 *)(param_1 + 0x31) = uVar1;
  param_1[0x2e] = uVar3;
  param_1[0x2d] = uVar2;
  param_1[0x30] = uVar5;
  param_1[0x2f] = uVar4;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  if (*(char *)(param_2 + 0x3e) == '\x01') {
    FUN_007b69e0(param_1 + 0x32,param_2 + 0x32);
    *(undefined1 *)(param_1 + 0x3e) = 1;
  }
  uVar2 = param_2[0x3f];
  param_1[0x40] = param_2[0x40];
  param_1[0x3f] = uVar2;
  uVar3 = param_2[0x42];
  uVar2 = param_2[0x41];
  uVar5 = param_2[0x44];
  uVar4 = param_2[0x43];
  uVar1 = *(undefined1 *)(param_2 + 0x45);
  *(undefined1 *)(param_1 + 0x46) = 0;
  *(undefined1 *)(param_1 + 0x45) = uVar1;
  param_1[0x42] = uVar3;
  param_1[0x41] = uVar2;
  param_1[0x44] = uVar5;
  param_1[0x43] = uVar4;
  *(undefined1 *)(param_1 + 0x52) = 0;
  if (*(char *)(param_2 + 0x52) == '\x01') {
    FUN_007b69e0(param_1 + 0x46,param_2 + 0x46);
    *(undefined1 *)(param_1 + 0x52) = 1;
  }
  uVar2 = param_2[0x53];
  param_1[0x54] = param_2[0x54];
  param_1[0x53] = uVar2;
  uVar3 = param_2[0x56];
  uVar2 = param_2[0x55];
  uVar5 = param_2[0x58];
  uVar4 = param_2[0x57];
  uVar1 = *(undefined1 *)(param_2 + 0x59);
  *(undefined1 *)(param_1 + 0x5a) = 0;
  *(undefined1 *)(param_1 + 0x59) = uVar1;
  param_1[0x56] = uVar3;
  param_1[0x55] = uVar2;
  param_1[0x58] = uVar5;
  param_1[0x57] = uVar4;
  *(undefined1 *)(param_1 + 0x66) = 0;
  if (*(char *)(param_2 + 0x66) == '\x01') {
    FUN_007b69e0(param_1 + 0x5a,param_2 + 0x5a);
    *(undefined1 *)(param_1 + 0x66) = 1;
  }
  uVar2 = param_2[0x67];
  param_1[0x68] = param_2[0x68];
  param_1[0x67] = uVar2;
  uVar3 = param_2[0x6a];
  uVar2 = param_2[0x69];
  uVar5 = param_2[0x6c];
  uVar4 = param_2[0x6b];
  uVar1 = *(undefined1 *)(param_2 + 0x6d);
  *(undefined1 *)(param_1 + 0x6e) = 0;
  *(undefined1 *)(param_1 + 0x6d) = uVar1;
  param_1[0x6a] = uVar3;
  param_1[0x69] = uVar2;
  param_1[0x6c] = uVar5;
  param_1[0x6b] = uVar4;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  if (*(char *)(param_2 + 0x7a) == '\x01') {
    FUN_007b69e0(param_1 + 0x6e,param_2 + 0x6e);
    *(undefined1 *)(param_1 + 0x7a) = 1;
  }
  uVar2 = param_2[0x7b];
  param_1[0x7c] = param_2[0x7c];
  param_1[0x7b] = uVar2;
  uVar3 = param_2[0x7e];
  uVar2 = param_2[0x7d];
  uVar5 = param_2[0x80];
  uVar4 = param_2[0x7f];
  uVar1 = *(undefined1 *)(param_2 + 0x81);
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined1 *)(param_1 + 0x81) = uVar1;
  param_1[0x7e] = uVar3;
  param_1[0x7d] = uVar2;
  param_1[0x80] = uVar5;
  param_1[0x7f] = uVar4;
  *(undefined1 *)(param_1 + 0x8e) = 0;
  if (*(char *)(param_2 + 0x8e) == '\x01') {
    FUN_007b69e0(param_1 + 0x82,param_2 + 0x82);
    *(undefined1 *)(param_1 + 0x8e) = 1;
  }
  uVar2 = param_2[0x8f];
  param_1[0x90] = param_2[0x90];
  param_1[0x8f] = uVar2;
  uVar3 = param_2[0x92];
  uVar2 = param_2[0x91];
  uVar5 = param_2[0x94];
  uVar4 = param_2[0x93];
  uVar1 = *(undefined1 *)(param_2 + 0x95);
  *(undefined1 *)(param_1 + 0x96) = 0;
  *(undefined1 *)(param_1 + 0x95) = uVar1;
  param_1[0x92] = uVar3;
  param_1[0x91] = uVar2;
  param_1[0x94] = uVar5;
  param_1[0x93] = uVar4;
  *(undefined1 *)(param_1 + 0xa2) = 0;
  if (*(char *)(param_2 + 0xa2) == '\x01') {
    FUN_007b69e0(param_1 + 0x96,param_2 + 0x96);
    *(undefined1 *)(param_1 + 0xa2) = 1;
  }
  uVar2 = param_2[0xa3];
  param_1[0xa4] = param_2[0xa4];
  param_1[0xa3] = uVar2;
  uVar7 = param_2[0xa8];
  uVar6 = param_2[0xa7];
  uVar3 = param_2[0xaa];
  uVar2 = param_2[0xa9];
  uVar5 = param_2[0xa6];
  uVar4 = param_2[0xa5];
  *(undefined8 *)((long)param_1 + 0x555) = *(undefined8 *)((long)param_2 + 0x555);
  param_1[0xa8] = uVar7;
  param_1[0xa7] = uVar6;
  param_1[0xaa] = uVar3;
  param_1[0xa9] = uVar2;
  param_1[0xa6] = uVar5;
  param_1[0xa5] = uVar4;
  return;
}


// ===== 008a03a4  FUN_008a03a4 =====

void FUN_008a03a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3b310;
  if ((void *)param_1[0xb8] != (void *)0x0) {
    operator_delete((void *)param_1[0xb8]);
  }
  FUN_008a56ec(param_1 + 0xad);
  FUN_008a03f4(param_1 + 1);
  return;
}


// ===== 008a03f4  FUN_008a03f4 =====

void FUN_008a03f4(long param_1)

{
  if (*(char *)(param_1 + 0x510) == '\x01') {
    FUN_007b6d78(param_1 + 0x4b0);
  }
  if (*(char *)(param_1 + 0x470) == '\x01') {
    FUN_007b6d78(param_1 + 0x410);
  }
  if (*(char *)(param_1 + 0x3d0) == '\x01') {
    FUN_007b6d78(param_1 + 0x370);
  }
  if (*(char *)(param_1 + 0x330) == '\x01') {
    FUN_007b6d78(param_1 + 0x2d0);
  }
  if (*(char *)(param_1 + 0x290) == '\x01') {
    FUN_007b6d78(param_1 + 0x230);
  }
  if (*(char *)(param_1 + 0x1f0) == '\x01') {
    FUN_007b6d78(param_1 + 400);
  }
  if (*(char *)(param_1 + 0x150) == '\x01') {
    FUN_007b6d78(param_1 + 0xf0);
  }
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    FUN_007b6d78(param_1 + 0x50);
    return;
  }
  return;
}


// ===== 008a04c4  FUN_008a04c4 =====

void FUN_008a04c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3b310;
  if ((void *)param_1[0xb8] != (void *)0x0) {
    operator_delete((void *)param_1[0xb8]);
  }
  FUN_008a56ec(param_1 + 0xad);
  FUN_008a03f4(param_1 + 1);
  operator_delete(param_1);
  return;
}


// ===== 008a0520  FUN_008a0520 =====

void FUN_008a0520(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[7] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[6] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[9] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[8] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xb] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[10] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xd] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xc] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xf] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xe] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x11] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x10] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x13] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x12] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x14] = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007cbe28(param_1);
  FUN_008a0594(param_2,*param_3,*param_3,param_1);
  FUN_008a0e3c(param_2,param_1);
  return;
}


// ===== 008a0594  FUN_008a0594 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008a0594(ulong **param_1,long param_2,long param_3,long param_4)

{
  byte bVar1;
  double dVar2;
  undefined *puVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulong *puVar9;
  void *pvVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong *puVar18;
  ulong **ppuVar19;
  ulong *puVar20;
  ulong *puVar21;
  ulong *puVar22;
  ulong *puVar23;
  double dVar24;
  ulong uVar25;
  ulong uVar26;
  double dVar27;
  ulong *local_d0;
  ulong uStack_c8;
  ulong *local_c0;
  ulong *local_b8;
  ulong *local_b0;
  ulong *local_a8;
  ulong **local_a0;
  ulong **local_98;
  ulong **ppuStack_90;
  ulong *local_78;
  
  bVar1 = *(byte *)(param_1 + 5);
  puVar20 = (ulong *)(ulong)bVar1;
  lVar11 = (ulong)*(uint *)((long)param_1 + 0x14) * 1000;
  lVar14 = lVar11;
  if (param_2 <= lVar11) {
    lVar14 = param_2;
  }
  if (param_3 <= lVar11) {
    lVar11 = param_3;
  }
  if (*(uint *)((long)param_1 + 0x14) != 0) {
    param_2 = lVar14;
    param_3 = lVar11;
  }
  if (bVar1 == 0) {
    if (*(char *)(param_1 + 4) != '\x01') {
      return;
    }
    lVar14 = (ulong)*(uint *)(param_1 + 3) * 1000;
    if (lVar14 - param_2 == 0 || lVar14 < param_2) {
      lVar14 = param_2;
    }
    FUN_007cbed8(param_4,0,0,lVar14);
    return;
  }
  puVar9 = (ulong *)operator_new((long)puVar20 * 8);
  uVar12 = (long)puVar20 * 8 - 8;
  uVar15 = uVar12 >> 3;
  puVar17 = puVar9 + (long)puVar20;
  uVar13 = (ulong)-(long)puVar9 >> 3;
  if (uVar15 <= (ulong)-(long)puVar9 >> 3) {
    uVar13 = uVar15;
  }
  puVar21 = puVar9;
  if ((5 < uVar13) && ((-(int)puVar9 & 7U) == 0)) {
    uVar25 = uVar13 + 1 & 3;
    uVar26 = 4;
    if (uVar25 != 0) {
      uVar26 = uVar25;
    }
    puVar22 = puVar9 + 2;
    lVar14 = ~uVar13 + uVar26;
    do {
      lVar14 = lVar14 + 4;
      puVar22[-1] = 0;
      puVar22[-2] = 0;
      puVar22[1] = 0;
      *puVar22 = 0;
      puVar22 = puVar22 + 4;
      puVar21 = puVar9 + ((uVar13 + 1) - uVar26);
    } while (lVar14 != 0);
  }
  do {
    if (puVar21 == (ulong *)0x0) goto LAB_008a0d38;
    puVar22 = puVar21 + 1;
    *puVar21 = 0;
    puVar21 = puVar22;
  } while (puVar22 != puVar17);
  if (uVar12 < 0x18) {
    uVar13 = 0;
    puVar22 = puVar9;
LAB_008a0744:
    do {
      puVar21 = puVar22 + 1;
      *puVar22 = uVar13;
      uVar13 = uVar13 + 1;
      puVar22 = puVar21;
    } while (puVar21 != puVar17);
  }
  else {
    uVar15 = uVar15 + 1;
    uVar13 = uVar15 & 0x3ffffffffffffffc;
    puVar22 = puVar9 + uVar13;
    puVar21 = puVar9 + 2;
    uVar12 = uVar15 & 0x3ffffffffffffffc;
    uVar25 = _DAT_001f1d00;
    uVar26 = _UNK_001f1d08;
    do {
      uVar12 = uVar12 - 4;
      puVar21[-1] = uVar26;
      puVar21[-2] = uVar25;
      puVar21[1] = uVar26 + 2;
      *puVar21 = uVar25 + 2;
      uVar25 = uVar25 + 4;
      uVar26 = uVar26 + 4;
      puVar21 = puVar21 + 4;
    } while (uVar12 != 0);
    if (uVar15 != uVar13) goto LAB_008a0744;
  }
  puVar3 = PTR_DAT_00d51ca8;
  puVar21 = puVar20;
  local_a0 = param_1;
  if (0x80 < bVar1) {
    do {
      pvVar10 = (void *)FUN_00546b60((long)puVar21 << 3,puVar3);
      if (pvVar10 != (void *)0x0) {
        FUN_008a2b60(puVar9,puVar9 + (long)puVar20,&local_a0,puVar20,pvVar10,puVar21);
        operator_delete(pvVar10);
        bVar1 = *(byte *)(param_1 + 5);
        goto joined_r0x008a0818;
      }
      puVar21 = (ulong *)((ulong)puVar21 >> 1);
    } while (puVar21 != (ulong *)0x0);
  }
  FUN_008a2b60(puVar9,puVar9 + (long)puVar20,&local_a0,puVar20,0,0);
  bVar1 = *(byte *)(param_1 + 5);
joined_r0x008a0818:
  puVar21 = (ulong *)(ulong)bVar1;
  if (puVar21 == (ulong *)0x0) {
    puVar22 = (ulong *)0x0;
LAB_008a0820:
    if (puVar22 != puVar21) {
      if (puVar20 <= puVar22) {
LAB_008a0d4c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      if (2 < puVar9[(long)puVar22]) goto LAB_008a0e38;
      uVar15 = (ulong)*(uint *)(param_1 + puVar9[(long)puVar22] * 0x14 + 9);
      lVar14 = uVar15 * 1000;
      puVar16 = param_1[0xb9];
      if (param_2 == lVar14 || (long)(param_2 + uVar15 * -1000) < 0 != SBORROW8(param_2,lVar14)) {
        param_2 = lVar14;
      }
      if (param_3 == lVar14 || (long)(param_3 + uVar15 * -1000) < 0 != SBORROW8(param_3,lVar14)) {
        param_3 = lVar14;
      }
      if (puVar16 == (ulong *)0x0) {
        FUN_008822e8(param_1 + 0xb8,puVar21,0);
        puVar21 = (ulong *)(ulong)*(byte *)(param_1 + 5);
      }
      dVar2 = DAT_001f5340;
      ppuVar19 = param_1 + 0xb8;
      dVar27 = 0.0;
      local_b8 = (ulong *)0x0;
      local_b0 = (ulong *)0x0;
      local_a8 = (ulong *)0x0;
      if (puVar22 < puVar21) {
        puVar21 = puVar22;
        puVar18 = puVar22;
        if (puVar22 <= puVar20) {
          puVar18 = puVar20;
        }
        do {
          if (puVar18 == puVar21) goto LAB_008a0d4c;
          puVar23 = (ulong *)puVar9[(long)puVar21];
          if ((ulong *)0x3 < puVar23) goto LAB_008a0e38;
          if (((ulong)param_1[(long)puVar23 * 0x14 + 10] & 1) == 0) {
            if (param_1[0xb9] <= puVar23) goto LAB_008a0e10;
            **ppuVar19 = **ppuVar19 & (1L << ((ulong)puVar23 & 0x3f) ^ 0xffffffffffffffffU);
          }
          else {
            dVar24 = 1.2;
            if (*(int *)(param_1 + 0xa6) != 0) {
              dVar24 = dVar2;
            }
            uVar12 = (ulong)*(uint *)(param_1 + (long)puVar23 * 0x14 + 9) * 1000;
            uVar13 = (ulong)*(uint *)((long)param_1 + (long)puVar23 * 0xa0 + 0x44) * 1000;
            uVar15 = uVar12;
            if (puVar16 != (ulong *)0x0) {
              if (param_1[0xb9] <= puVar23) goto LAB_008a0e10;
              if (((**ppuVar19 >> ((ulong)puVar23 & 0x3f) & 1) == 0) &&
                 (uVar15 = uVar13, (long)(dVar24 * (double)uVar12) <= (long)uVar13)) {
                uVar15 = (long)(dVar24 * (double)uVar12);
              }
            }
            if (param_3 < (long)uVar15) {
              *(undefined1 *)(param_4 + 0xa4) = 1;
              if (puVar21 < (ulong *)(ulong)*(byte *)(param_1 + 5)) {
                puVar16 = puVar21;
                if (puVar21 <= puVar20) {
                  puVar16 = puVar20;
                }
                goto LAB_008a0cf0;
              }
              break;
            }
            if (param_1[0xb9] <= puVar23) goto LAB_008a0e10;
            uVar12 = 0x7fffffffffffffff;
            if (uVar15 != 0x8000000000000000) {
              uVar12 = uVar13 - uVar15;
            }
            bVar5 = param_3 != 0x7fffffffffffffff;
            **ppuVar19 = **ppuVar19 | 1L << ((ulong)puVar23 & 0x3f);
            bVar6 = param_2 != 0x7fffffffffffffff;
            FUN_007cbed8(param_4,puVar9[(long)puVar21],0,uVar15 & 0xffffffff);
            lVar14 = param_2;
            if (param_2 != -0x8000000000000000) {
              lVar14 = param_2 - uVar15;
            }
            local_c0 = (ulong *)0x3ff0000000000000;
            param_2 = 0x7fffffffffffffff;
            if (uVar15 != 0x8000000000000000 && bVar6) {
              param_2 = lVar14;
            }
            lVar14 = param_3;
            if (param_3 != -0x8000000000000000) {
              lVar14 = param_3 - uVar15;
            }
            param_3 = 0x7fffffffffffffff;
            if (uVar15 != 0x8000000000000000 && bVar5) {
              param_3 = lVar14;
            }
            if (*(char *)(param_1 + (long)puVar23 * 0x14 + 0x19) == '\x01') {
              local_c0 = param_1[(long)puVar23 * 0x14 + 0x18];
            }
            local_a0 = &local_78;
            local_98 = &local_d0;
            ppuStack_90 = &local_b8;
            local_78 = local_b0;
            local_d0 = puVar21;
            uStack_c8 = uVar12;
            if (local_b0 < local_a8) {
              if (local_b0 == (ulong *)0x0) {
LAB_008a0d38:
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                          );
              }
              local_b0[2] = (ulong)local_c0;
              local_78 = local_b0 + 3;
              local_b0[1] = uVar12;
              *local_b0 = (ulong)puVar21;
            }
            else {
              FUN_008a1368(&local_a0);
            }
            local_b0 = local_78;
            if (local_b8 == local_78) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__vector/vector.h:439: libc++ Hardening assertion !empty() failed: back() called on an empty vector\n"
                        );
            }
            dVar27 = dVar27 + (double)local_78[-1];
            puVar22 = puVar23;
          }
          puVar21 = (ulong *)((long)puVar21 + 1);
        } while (puVar21 < (ulong *)(ulong)*(byte *)(param_1 + 5));
      }
      goto LAB_008a0af8;
    }
  }
  else {
    puVar22 = (ulong *)0x0;
    do {
      if (puVar20 == puVar22) goto LAB_008a0d4c;
      if (2 < puVar9[(long)puVar22]) goto LAB_008a0e38;
      if (((ulong)param_1[puVar9[(long)puVar22] * 0x14 + 10] & 1) != 0) goto LAB_008a0820;
      puVar22 = (ulong *)((long)puVar22 + 1);
    } while (puVar21 != puVar22);
  }
  goto LAB_008a0d70;
LAB_008a0cf0:
  do {
    if (puVar16 == puVar21) goto LAB_008a0d4c;
    puVar18 = (ulong *)puVar9[(long)puVar21];
    if (param_1[0xb9] <= puVar18) {
LAB_008a0e10:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector_bool.h:297: libc++ Hardening assertion __n < size() failed: vector<bool>::operator[] index out of bounds\n"
                );
    }
    puVar21 = (ulong *)((long)puVar21 + 1);
    uVar15 = (ulong)puVar18 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)((long)param_1[0xb8] + uVar15) =
         *(ulong *)((long)param_1[0xb8] + uVar15) &
         (1L << ((ulong)puVar18 & 0x3f) ^ 0xffffffffffffffffU);
  } while (puVar21 < (ulong *)(ulong)*(byte *)(param_1 + 5));
LAB_008a0af8:
  puVar21 = local_b8;
  puVar16 = local_b0;
  if (local_b8 != local_b0) {
    FUN_008a14b0(local_b8,local_b0,
                 LZCOUNT(((long)local_b0 - (long)local_b8 >> 3) * -0x5555555555555555) << 1 ^ 0x7e,1
                );
    puVar21 = local_b8;
    puVar16 = local_b0;
  }
  for (; puVar18 = local_b0, puVar21 != local_b0; puVar21 = puVar21 + 3) {
    puVar23 = (ulong *)*puVar21;
    uVar13 = (ulong)(((double)puVar21[2] / dVar27) * (double)param_2);
    uVar15 = puVar21[1];
    if ((long)uVar13 <= (long)puVar21[1]) {
      uVar15 = uVar13;
    }
    local_b0 = puVar16;
    if (puVar20 <= puVar23) goto LAB_008a0d4c;
    iVar7 = FUN_007cc028(param_4,puVar9[(long)puVar23],0);
    FUN_007cbed8(param_4,puVar9[(long)puVar23],0,iVar7 + (int)uVar15);
    lVar14 = 0x7fffffffffffffff;
    if ((param_2 != 0x7fffffffffffffff) && (uVar15 != 0x8000000000000000)) {
      lVar14 = -0x8000000000000000;
      if (uVar15 != 0x7fffffffffffffff && param_2 != -0x8000000000000000) {
        lVar14 = param_2 - uVar15;
      }
    }
    dVar27 = dVar27 - (double)puVar21[2];
    param_2 = lVar14;
    puVar16 = local_b0;
    local_b0 = puVar18;
  }
  local_b0 = puVar16;
  if (0 < param_2) {
    if ((ulong *)0x3 < puVar22) {
LAB_008a0e38:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0x5512,0x8a0e3c);
      (*pcVar4)();
    }
    uVar8 = FUN_007cc138(param_4,puVar22);
    lVar14 = (ulong)*(uint *)(param_1 + (long)puVar22 * 0x14 + 8) * 1000 - (ulong)uVar8;
    if (param_2 <= lVar14) {
      lVar14 = param_2;
    }
    FUN_007cbed8(param_4,puVar22,0,uVar8 + (int)lVar14);
  }
  if (local_b8 != (ulong *)0x0) {
    uVar15 = (ulong)(((long)local_b8 - (long)local_b0) * 0x1555555555555555) >> 3;
    uVar13 = (long)local_b0 * -0x1555555555555555 - 8U >> 3;
    if (uVar13 <= uVar15) {
      uVar15 = uVar13;
    }
    puVar21 = local_b0;
    if ((1 < uVar15) && ((((int)local_b8 - (int)local_b0 | -(int)local_b0) & 7U) == 0)) {
      uVar15 = uVar15 & 0x1ffffffffffffffe;
      puVar21 = local_b0 + uVar15 * -3;
      do {
        uVar15 = uVar15 - 2;
      } while (uVar15 != 0);
    }
    do {
      if (puVar21 == local_b8) {
        local_b0 = local_b8;
        operator_delete(local_b8);
        goto LAB_008a0d70;
      }
      puVar21 = puVar21 + -3;
    } while (puVar21 != (ulong *)0x0);
    goto LAB_008a0dc4;
  }
LAB_008a0d70:
  if (puVar9 == (ulong *)0x0) {
    return;
  }
  puVar21 = (ulong *)((ulong)((-(long)(puVar9 + (long)puVar20) << 0x3d) -
                             (-(long)(puVar9 + (long)puVar20) + 8)) >> 3);
  if (puVar20 <= puVar21) {
    puVar21 = puVar20;
  }
  if ((ulong *)0x1 < puVar21) {
    uVar15 = (ulong)puVar21 & 0xfe;
    puVar17 = puVar17 + -uVar15;
    do {
      uVar15 = uVar15 - 2;
    } while (uVar15 != 0);
  }
  do {
    if (puVar17 == puVar9) {
      operator_delete(puVar9);
      return;
    }
    puVar17 = puVar17 + -1;
  } while (puVar17 != (ulong *)0x0);
LAB_008a0dc4:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 008a0e3c  FUN_008a0e3c =====

/* WARNING: Removing unreachable block (ram,0x008a0f74) */

void FUN_008a0e3c(long param_1,undefined8 param_2)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  code *pcVar4;
  uint uVar5;
  ulong uVar6;
  uint *puVar7;
  uint *puVar8;
  byte *pbVar9;
  byte bVar10;
  uint *puVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  uint *local_d0;
  uint *puStack_c8;
  long local_68;
  
  lVar3 = tpidr_el0;
  uVar14 = 0;
  local_68 = *(long *)(lVar3 + 0x28);
  bVar2 = *(byte *)(param_1 + 0x28);
  uVar1 = (uint)bVar2;
  if (bVar2 < 2) {
    uVar1 = 1;
  }
  do {
    uVar5 = FUN_007cc028(param_2,uVar14,0);
    if (999 < uVar5) {
      if (2 < uVar14) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(0x5512,0x8a118c);
        (*pcVar4)();
      }
      lVar16 = param_1 + 0x30 + uVar14 * 0xa0;
      if ((*(byte *)(lVar16 + 0x88) & 1) == 0) {
        if (*(int *)(param_1 + 8) == 1) goto LAB_008a0f18;
LAB_008a0f20:
        pbVar9 = (byte *)(lVar16 + 0xc);
      }
      else {
        FUN_007b73c0(&local_d0);
        uVar6 = FUN_007b6ff8(lVar16 + 0x28,&local_d0);
        FUN_007b6d78(&local_d0);
        if ((uVar6 & 1) == 0) goto LAB_008a0f20;
LAB_008a0f18:
        if (*(char *)(param_1 + 0x28) != '\0') goto LAB_008a0f20;
        pbVar9 = (byte *)FUN_007b8c8c(param_1 + 8);
      }
      uVar6 = (ulong)uVar5 / 1000;
      uVar12 = uVar5 / 1000;
      if (((*(int *)(param_1 + 0x530) == 1) && (uVar14 == 0)) &&
         ((*(byte *)(param_1 + 0x5d8) & 1) != 0)) {
        uVar15 = uVar5 / 1000;
        if (999 < uVar5 / 1000) {
          uVar15 = 1000;
        }
        uVar12 = uVar5 / 1000;
        if (199 < uVar12) {
          uVar12 = 200;
        }
        uVar6 = (ulong)uVar12;
        if (*pbVar9 < 2) {
LAB_008a0f94:
          puVar8 = (uint *)operator_new(4);
          if (puVar8 == (uint *)0x0) {
LAB_008a1174:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          puVar11 = puVar8 + 1;
          *puVar8 = uVar12;
          goto LAB_008a1064;
        }
        bVar10 = 1;
LAB_008a0fd0:
        if ((bVar10 & 1) == 0) goto LAB_008a103c;
        puVar7 = (uint *)operator_new(4);
        if (puVar7 == (uint *)0x0) goto LAB_008a1174;
        uVar5 = (uint)uVar6;
        puVar11 = puVar7 + 1;
        *puVar7 = uVar5;
        puVar8 = puVar7;
        if (uVar15 - uVar5 != 0 && (int)uVar5 <= (int)uVar15) {
          puVar8 = (uint *)operator_new(8);
          if (puVar8 == (uint *)0xfffffffffffffffc) goto LAB_008a1174;
          *puVar8 = uVar5;
          puVar8[1] = uVar15 - uVar5;
          puVar11 = puVar8 + 2;
          operator_delete(puVar7);
        }
        if (puVar11 != puVar8) goto LAB_008a1064;
      }
      else {
        puVar8 = (uint *)(param_1 + 0x14);
        if (1 < bVar2) {
          puVar8 = (uint *)(param_1 + uVar14 * 0xa0 + 0x40);
        }
        if (*pbVar9 < 2) goto LAB_008a0f94;
        if (*(int *)(param_1 + 0x530) == 1) {
          uVar15 = *puVar8;
          bVar10 = *(byte *)(param_1 + 0x5d8);
          if (uVar14 == 0) goto LAB_008a0fd0;
        }
LAB_008a103c:
        FUN_008a1190(&local_d0,param_1,uVar6);
        puVar11 = puStack_c8;
        puVar8 = local_d0;
        if (puStack_c8 == local_d0) goto LAB_008a10b0;
LAB_008a1064:
        uVar6 = 0;
        do {
          if (puVar8[uVar6] != 0) {
            FUN_007cbed8(param_2,uVar14,uVar6,puVar8[uVar6] * 1000);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < (ulong)((long)puVar11 - (long)puVar8 >> 2));
      }
LAB_008a10b0:
      if (puVar8 != (uint *)0x0) {
        uVar13 = (ulong)((long)puVar11 + (-4 - ((long)puVar11 << 0x3e))) >> 2;
        uVar6 = (ulong)(((long)puVar8 - (long)puVar11 << 0x3e) - ((long)puVar8 - (long)puVar11)) >>
                2;
        if (uVar13 <= uVar6) {
          uVar6 = uVar13;
        }
        if ((1 < uVar6) && ((((int)puVar8 - (int)puVar11 | -(int)puVar11) & 3U) == 0)) {
          uVar6 = uVar6 & 0x3ffffffffffffffe;
          puVar11 = puVar11 + -uVar6;
          do {
            uVar6 = uVar6 - 2;
          } while (uVar6 != 0);
        }
        while (puVar11 != puVar8) {
          puVar11 = puVar11 + -1;
          if (puVar11 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
        }
        operator_delete(puVar8);
      }
    }
    uVar14 = uVar14 + 1;
    if (uVar14 == uVar1) {
      if (*(long *)(lVar3 + 0x28) == local_68) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


// ===== 008a1190  FUN_008a1190 =====

void FUN_008a1190(long *param_1,long param_2,uint param_3,undefined8 param_4,uint param_5)

{
  int *piVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  code *pcVar5;
  uint uVar6;
  ulong uVar7;
  int *piVar8;
  byte *pbVar9;
  long lVar10;
  ulong uVar11;
  float fVar12;
  int local_b8 [24];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if (2 < param_5) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(0x5512,0x8a1358);
    (*pcVar5)();
  }
  lVar10 = param_2 + (ulong)param_5 * 0xa0;
  if ((*(byte *)(lVar10 + 0xb8) & 1) == 0) {
    if (*(int *)(param_2 + 8) == 1) goto LAB_008a1218;
  }
  else {
    FUN_007b73c0(local_b8);
    uVar7 = FUN_007b6ff8(lVar10 + 0x58,local_b8);
    FUN_007b6d78(local_b8);
    if ((uVar7 & 1) != 0) {
LAB_008a1218:
      if (*(char *)(param_2 + 0x28) == '\0') {
        pbVar9 = (byte *)FUN_007b8c8c(param_2 + 8);
        goto LAB_008a1224;
      }
    }
  }
  pbVar9 = (byte *)(lVar10 + 0x3c);
LAB_008a1224:
  bVar3 = *pbVar9;
  uVar7 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar6 = (uint)bVar3;
  if (bVar3 < 2) {
    uVar6 = 1;
  }
  uVar11 = (ulong)uVar6;
  do {
    uVar6 = FUN_008a584c(param_2 + 0x568);
    fVar12 = (float)FUN_0089ff84(uVar11,uVar7 & 0xffffffff,uVar6 & 1);
    piVar1 = (int *)param_1[1];
    local_b8[0] = (int)(fVar12 * (float)(int)param_3 + 0.5);
    if (piVar1 < (int *)param_1[2]) {
      if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      piVar8 = piVar1 + 1;
      *piVar1 = local_b8[0];
    }
    else {
      piVar8 = (int *)FUN_007cff60(param_1,local_b8);
    }
    uVar7 = uVar7 + 1;
    param_1[1] = (long)piVar8;
  } while (uVar11 != uVar7);
  uVar7 = 0;
  uVar6 = 0;
  while( true ) {
    lVar10 = *param_1;
    if ((ulong)(param_1[1] - lVar10 >> 2) <= uVar7) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                );
    }
    uVar2 = *(uint *)(lVar10 + uVar7 * 4);
    *(uint *)(lVar10 + uVar7 * 4) = uVar2 - uVar6;
    uVar7 = uVar7 + 1;
    if (param_3 <= uVar2) break;
    uVar6 = uVar2;
    if (uVar11 == uVar7) {
LAB_008a12f0:
      if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  }
  FUN_007121a4(param_1);
  goto LAB_008a12f0;
}


// ===== 008a135c  FUN_008a135c =====

void FUN_008a135c(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x5d8) = param_2;
  return;
}


// ===== 008a1368  FUN_008a1368 =====

void FUN_008a1368(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  size_t __n;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  void *__dest;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  plVar7 = (long *)param_1[2];
  puVar6 = (undefined8 *)(plVar7[1] - *plVar7);
  uVar3 = ((long)puVar6 >> 3) * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar3) {
    FUN_008a1498();
LAB_008a1494:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  puVar8 = (undefined8 *)param_1[1];
  lVar4 = plVar7[2] - *plVar7 >> 3;
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
    if (0xaaaaaaaaaaaaaaa < uVar5) goto LAB_008a1494;
    pvVar1 = operator_new(uVar5 * 0x18);
    puVar6 = (undefined8 *)((long)pvVar1 + (long)puVar6);
  }
  if (puVar6 != (undefined8 *)0x0) {
    uVar10 = puVar8[1];
    uVar9 = *puVar8;
    puVar6[2] = puVar8[2];
    puVar6[1] = uVar10;
    *puVar6 = uVar9;
    __n = plVar7[1] - *plVar7;
    __dest = (void *)((long)puVar6 - __n);
    memcpy(__dest,(void *)*plVar7,__n);
    pvVar2 = (void *)*plVar7;
    *plVar7 = (long)__dest;
    plVar7[1] = (long)(puVar6 + 3);
    plVar7[2] = (long)((long)pvVar1 + uVar5 * 0x18);
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    *(undefined8 **)*param_1 = puVar6 + 3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008a1498  FUN_008a1498 =====

void FUN_008a1498(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 008a14b0  FUN_008a14b0 =====

void FUN_008a14b0(undefined8 *param_1,undefined8 *param_2,long param_3,uint param_4)

{
  long *plVar1;
  ulong uVar2;
  bool bVar3;
  double *pdVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 *puVar22;
  double dVar23;
  undefined8 uVar24;
  double dVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  double dVar28;
  undefined8 uVar29;
  double dVar30;
  double dVar31;
  
LAB_008a14ec:
  puVar16 = param_2 + -3;
  puVar10 = param_1;
LAB_008a14f4:
  do {
    param_1 = puVar10;
    uVar9 = (long)param_2 - (long)param_1;
    uVar7 = ((long)uVar9 >> 3) * -0x5555555555555555;
    if (uVar7 - 2 == 0 || (long)uVar7 < 2) {
      if (uVar7 < 2) {
        return;
      }
      if (uVar7 == 2) {
        lVar8 = param_1[1];
        dVar25 = (double)param_1[2];
        if ((double)lVar8 / dVar25 <= (double)(long)param_2[-2] / (double)param_2[-1]) {
          return;
        }
        uVar27 = param_2[-2];
        uVar24 = param_2[-3];
        uVar13 = *param_1;
        param_1[2] = param_2[-1];
        param_1[1] = uVar27;
        *param_1 = uVar24;
        param_2[-3] = uVar13;
LAB_008a245c:
        param_2[-2] = lVar8;
        param_2[-1] = dVar25;
        return;
      }
    }
    else {
      if (uVar7 == 3) {
        lVar11 = param_1[4];
        lVar8 = param_1[1];
        dVar23 = (double)param_1[5];
        dVar28 = (double)lVar11 / dVar23;
        dVar25 = (double)param_1[2];
        if ((double)lVar8 / dVar25 <= dVar28) {
          if (dVar28 <= (double)(long)param_2[-2] / (double)param_2[-1]) {
            return;
          }
          uVar27 = param_2[-2];
          uVar24 = *puVar16;
          uVar13 = param_1[3];
          param_1[5] = param_2[-1];
          param_1[4] = uVar27;
          param_1[3] = uVar24;
          param_2[-3] = uVar13;
          param_2[-2] = lVar11;
          param_2[-1] = dVar23;
          dVar25 = (double)param_1[2];
          if ((double)(long)param_1[1] / dVar25 <= (double)(long)param_1[4] / (double)param_1[5]) {
            return;
          }
          uVar24 = param_1[4];
          uVar13 = *param_1;
          param_1[4] = param_1[1];
          param_1[1] = uVar24;
          *param_1 = param_1[3];
          param_1[2] = param_1[5];
          param_1[3] = uVar13;
          param_1[5] = dVar25;
          return;
        }
        uVar13 = *param_1;
        if (dVar28 <= (double)(long)param_2[-2] / (double)param_2[-1]) {
          uVar27 = param_1[4];
          uVar24 = param_1[5];
          param_1[4] = lVar8;
          param_1[5] = dVar25;
          param_1[1] = uVar27;
          *param_1 = param_1[3];
          param_1[2] = uVar24;
          param_1[3] = uVar13;
          if ((double)lVar8 / dVar25 <= (double)(long)param_2[-2] / (double)param_2[-1]) {
            return;
          }
          uVar27 = param_2[-2];
          uVar24 = *puVar16;
          param_1[5] = param_2[-1];
          param_1[4] = uVar27;
          param_1[3] = uVar24;
        }
        else {
          uVar27 = param_2[-2];
          uVar24 = *puVar16;
          param_1[2] = param_2[-1];
          param_1[1] = uVar27;
          *param_1 = uVar24;
        }
        param_2[-3] = uVar13;
        goto LAB_008a245c;
      }
      if (uVar7 == 4) {
        FUN_008a24e8(param_1,param_1 + 3,param_1 + 6,puVar16);
        return;
      }
      if (uVar7 == 5) {
        FUN_008a24e8(param_1,param_1 + 3,param_1 + 6,param_1 + 9);
        lVar8 = param_1[10];
        dVar25 = (double)param_1[0xb];
        if ((double)lVar8 / dVar25 <= (double)(long)param_2[-2] / (double)param_2[-1]) {
          return;
        }
        uVar27 = param_2[-2];
        uVar24 = param_2[-3];
        uVar13 = param_1[9];
        param_1[0xb] = param_2[-1];
        param_1[10] = uVar27;
        param_1[9] = uVar24;
        param_2[-3] = uVar13;
        param_2[-2] = lVar8;
        param_2[-1] = dVar25;
        dVar25 = (double)param_1[8];
        if ((double)(long)param_1[7] / dVar25 <= (double)(long)param_1[10] / (double)param_1[0xb]) {
          return;
        }
        uVar24 = param_1[10];
        uVar13 = param_1[6];
        param_1[10] = param_1[7];
        param_1[7] = uVar24;
        param_1[6] = param_1[9];
        param_1[8] = param_1[0xb];
        param_1[9] = uVar13;
        param_1[0xb] = dVar25;
        dVar25 = (double)param_1[5];
        if ((double)(long)param_1[4] / dVar25 <= (double)(long)param_1[7] / (double)param_1[8]) {
          return;
        }
        uVar24 = param_1[7];
        uVar13 = param_1[3];
        param_1[7] = param_1[4];
        param_1[4] = uVar24;
        param_1[3] = param_1[6];
        param_1[5] = param_1[8];
        param_1[6] = uVar13;
        param_1[8] = dVar25;
        dVar25 = (double)param_1[2];
        if ((double)(long)param_1[1] / dVar25 <= (double)(long)param_1[4] / (double)param_1[5]) {
          return;
        }
        uVar24 = param_1[4];
        uVar13 = *param_1;
        param_1[4] = param_1[1];
        param_1[1] = uVar24;
        *param_1 = param_1[3];
        param_1[2] = param_1[5];
        param_1[3] = uVar13;
        param_1[5] = dVar25;
        return;
      }
    }
    if ((long)uVar9 < 0x240) {
      if ((param_4 & 1) == 0) {
        if (param_1 == param_2) {
          return;
        }
        if (param_1 + 3 == param_2) {
          return;
        }
        lVar8 = 0;
        puVar10 = param_1;
        puVar16 = param_1 + 3;
        do {
          lVar11 = puVar10[4];
          dVar25 = (double)puVar10[5];
          dVar23 = (double)lVar11 / dVar25;
          if (dVar23 < (double)(long)puVar10[1] / (double)puVar10[2]) {
            uVar13 = *puVar16;
            lVar5 = lVar8;
            do {
              lVar18 = lVar5;
              puVar10 = (undefined8 *)((long)param_1 + lVar18);
              puVar10[4] = puVar10[1];
              puVar10[3] = *puVar10;
              puVar10[5] = puVar10[2];
              if (lVar18 == -0x18) {
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__algorithm/sort.h:293: libc++ Hardening assertion __k != __leftmost failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                          );
              }
              lVar5 = lVar18 + -0x18;
            } while (dVar23 < (double)(long)puVar10[-2] / (double)puVar10[-1]);
            *(undefined8 *)((long)param_1 + lVar18) = uVar13;
            *(long *)((long)param_1 + lVar18 + 8) = lVar11;
            *(double *)((long)param_1 + lVar18 + 0x10) = dVar25;
          }
          puVar12 = puVar16 + 3;
          lVar8 = lVar8 + 0x18;
          puVar10 = puVar16;
          puVar16 = puVar12;
        } while (puVar12 != param_2);
        return;
      }
      if (param_1 == param_2) {
        return;
      }
      if (param_1 + 3 == param_2) {
        return;
      }
      lVar8 = 0;
      puVar10 = param_1;
      puVar16 = param_1 + 3;
      break;
    }
    if (param_3 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar14 = uVar7 - 2 >> 1;
      uVar19 = uVar14;
      goto LAB_008a2064;
    }
    puVar10 = param_1 + (uVar7 >> 1) * 3;
    dVar25 = (double)(long)param_2[-2] / (double)param_2[-1];
    if (0xc00 < uVar9) {
      lVar11 = puVar10[1];
      lVar8 = param_1[1];
      dVar28 = (double)puVar10[2];
      dVar30 = (double)lVar11 / dVar28;
      dVar23 = (double)param_1[2];
      if ((double)lVar8 / dVar23 <= dVar30) {
        if (dVar25 < dVar30) {
          uVar27 = param_2[-2];
          uVar24 = *puVar16;
          uVar13 = *puVar10;
          puVar10[2] = param_2[-1];
          puVar10[1] = uVar27;
          *puVar10 = uVar24;
          param_2[-3] = uVar13;
          param_2[-2] = lVar11;
          param_2[-1] = dVar28;
          lVar8 = param_1[1];
          dVar25 = (double)param_1[2];
          if ((double)(long)puVar10[1] / (double)puVar10[2] < (double)lVar8 / dVar25) {
            uVar27 = puVar10[1];
            uVar24 = *puVar10;
            uVar13 = *param_1;
            param_1[2] = puVar10[2];
            param_1[1] = uVar27;
            *param_1 = uVar24;
            *puVar10 = uVar13;
            puVar10[1] = lVar8;
            puVar10[2] = dVar25;
          }
        }
      }
      else {
        uVar13 = *param_1;
        if (dVar30 <= dVar25) {
          uVar27 = puVar10[1];
          uVar24 = *puVar10;
          param_1[2] = puVar10[2];
          param_1[1] = uVar27;
          *param_1 = uVar24;
          *puVar10 = uVar13;
          puVar10[1] = lVar8;
          puVar10[2] = dVar23;
          if ((double)lVar8 / dVar23 <= (double)(long)param_2[-2] / (double)param_2[-1])
          goto LAB_008a1708;
          uVar27 = param_2[-2];
          uVar24 = *puVar16;
          puVar10[2] = param_2[-1];
          puVar10[1] = uVar27;
          *puVar10 = uVar24;
        }
        else {
          uVar27 = param_2[-2];
          uVar24 = *puVar16;
          param_1[2] = param_2[-1];
          param_1[1] = uVar27;
          *param_1 = uVar24;
        }
        param_2[-3] = uVar13;
        param_2[-2] = lVar8;
        param_2[-1] = dVar23;
      }
LAB_008a1708:
      lVar11 = puVar10[-2];
      lVar8 = param_1[4];
      puVar12 = puVar10 + -3;
      dVar23 = (double)puVar10[-1];
      dVar28 = (double)lVar11 / dVar23;
      dVar25 = (double)param_1[5];
      if ((double)lVar8 / dVar25 <= dVar28) {
        if ((double)(long)param_2[-5] / (double)param_2[-4] < dVar28) {
          uVar27 = param_2[-5];
          uVar24 = param_2[-6];
          uVar13 = puVar10[-3];
          puVar10[-1] = param_2[-4];
          puVar10[-2] = uVar27;
          *puVar12 = uVar24;
          param_2[-6] = uVar13;
          param_2[-5] = lVar11;
          param_2[-4] = dVar23;
          lVar8 = param_1[4];
          dVar25 = (double)param_1[5];
          if ((double)(long)puVar10[-2] / (double)puVar10[-1] < (double)lVar8 / dVar25) {
            uVar27 = puVar10[-2];
            uVar24 = *puVar12;
            uVar13 = param_1[3];
            param_1[5] = puVar10[-1];
            param_1[4] = uVar27;
            param_1[3] = uVar24;
            puVar10[-3] = uVar13;
            puVar10[-2] = lVar8;
            puVar10[-1] = dVar25;
          }
        }
      }
      else {
        uVar13 = param_1[3];
        if (dVar28 <= (double)(long)param_2[-5] / (double)param_2[-4]) {
          uVar27 = puVar10[-2];
          uVar24 = *puVar12;
          param_1[5] = puVar10[-1];
          param_1[4] = uVar27;
          param_1[3] = uVar24;
          puVar10[-3] = uVar13;
          puVar10[-2] = lVar8;
          puVar10[-1] = dVar25;
          if ((double)lVar8 / dVar25 <= (double)(long)param_2[-5] / (double)param_2[-4])
          goto LAB_008a1878;
          uVar27 = param_2[-5];
          uVar24 = param_2[-6];
          puVar10[-1] = param_2[-4];
          puVar10[-2] = uVar27;
          *puVar12 = uVar24;
        }
        else {
          uVar27 = param_2[-5];
          uVar24 = param_2[-6];
          param_1[5] = param_2[-4];
          param_1[4] = uVar27;
          param_1[3] = uVar24;
        }
        param_2[-6] = uVar13;
        param_2[-5] = lVar8;
        param_2[-4] = dVar25;
      }
LAB_008a1878:
      lVar11 = puVar10[4];
      lVar8 = param_1[7];
      dVar23 = (double)puVar10[5];
      dVar28 = (double)lVar11 / dVar23;
      dVar25 = (double)param_1[8];
      if ((double)lVar8 / dVar25 <= dVar28) {
        if ((double)(long)param_2[-8] / (double)param_2[-7] < dVar28) {
          uVar27 = param_2[-8];
          uVar24 = param_2[-9];
          uVar13 = puVar10[3];
          puVar10[5] = param_2[-7];
          puVar10[4] = uVar27;
          puVar10[3] = uVar24;
          param_2[-9] = uVar13;
          param_2[-8] = lVar11;
          param_2[-7] = dVar23;
          lVar8 = param_1[7];
          dVar25 = (double)param_1[8];
          if ((double)(long)puVar10[4] / (double)puVar10[5] < (double)lVar8 / dVar25) {
            uVar27 = puVar10[4];
            uVar24 = puVar10[3];
            uVar13 = param_1[6];
            param_1[8] = puVar10[5];
            param_1[7] = uVar27;
            param_1[6] = uVar24;
            puVar10[3] = uVar13;
            puVar10[4] = lVar8;
            puVar10[5] = dVar25;
          }
        }
      }
      else {
        uVar13 = param_1[6];
        if (dVar28 <= (double)(long)param_2[-8] / (double)param_2[-7]) {
          uVar27 = puVar10[4];
          uVar24 = puVar10[3];
          param_1[8] = puVar10[5];
          param_1[7] = uVar27;
          param_1[6] = uVar24;
          puVar10[3] = uVar13;
          puVar10[4] = lVar8;
          puVar10[5] = dVar25;
          if ((double)lVar8 / dVar25 <= (double)(long)param_2[-8] / (double)param_2[-7])
          goto LAB_008a1984;
          uVar27 = param_2[-8];
          uVar24 = param_2[-9];
          puVar10[5] = param_2[-7];
          puVar10[4] = uVar27;
          puVar10[3] = uVar24;
        }
        else {
          uVar27 = param_2[-8];
          uVar24 = param_2[-9];
          param_1[8] = param_2[-7];
          param_1[7] = uVar27;
          param_1[6] = uVar24;
        }
        param_2[-9] = uVar13;
        param_2[-8] = lVar8;
        param_2[-7] = dVar25;
      }
LAB_008a1984:
      lVar8 = puVar10[-2];
      dVar28 = (double)puVar10[2];
      dVar31 = (double)(long)puVar10[1] / dVar28;
      dVar25 = (double)puVar10[-1];
      dVar23 = (double)lVar8 / dVar25;
      dVar30 = (double)(long)puVar10[4] / (double)puVar10[5];
      if (dVar23 <= dVar31) {
        if (dVar30 < dVar31) {
          uVar24 = puVar10[4];
          uVar13 = *puVar10;
          puVar10[4] = puVar10[1];
          puVar10[1] = uVar24;
          *puVar10 = puVar10[3];
          puVar10[2] = puVar10[5];
          puVar10[3] = uVar13;
          puVar10[5] = dVar28;
          if ((double)(long)puVar10[1] / (double)puVar10[2] < dVar23) {
            uVar13 = puVar10[2];
            uVar24 = puVar10[-3];
            puVar10[2] = dVar25;
            puVar10[-2] = puVar10[1];
            *puVar12 = *puVar10;
            puVar10[-1] = uVar13;
            *puVar10 = uVar24;
            puVar10[1] = lVar8;
          }
        }
      }
      else {
        uVar13 = *puVar12;
        if (dVar31 <= dVar30) {
          uVar27 = puVar10[1];
          uVar24 = *puVar10;
          *puVar10 = uVar13;
          puVar10[1] = lVar8;
          puVar10[-2] = uVar27;
          *puVar12 = uVar24;
          puVar10[-1] = puVar10[2];
          puVar10[2] = dVar25;
          if (dVar23 <= dVar30) goto LAB_008a1a68;
          puVar10[1] = puVar10[4];
          *puVar10 = puVar10[3];
          puVar10[2] = puVar10[5];
        }
        else {
          puVar10[-2] = puVar10[4];
          *puVar12 = puVar10[3];
          puVar10[-1] = puVar10[5];
        }
        puVar10[3] = uVar13;
        puVar10[4] = lVar8;
        puVar10[5] = dVar25;
      }
LAB_008a1a68:
      uVar24 = *puVar10;
      uVar13 = puVar10[2];
      uVar26 = param_1[1];
      uVar27 = *param_1;
      param_1[1] = puVar10[1];
      *param_1 = uVar24;
      uVar24 = param_1[2];
      param_1[2] = uVar13;
      puVar10[1] = uVar26;
      *puVar10 = uVar27;
      puVar10[2] = uVar24;
joined_r0x008a1a8c:
      if ((param_4 & 1) == 0) goto LAB_008a1a90;
LAB_008a181c:
      uVar13 = *param_1;
      lVar8 = param_1[1];
      dVar25 = (double)param_1[2];
      dVar23 = (double)lVar8 / dVar25;
LAB_008a1ab4:
      param_3 = param_3 + -1;
      lVar11 = 0;
      do {
        if ((undefined8 *)((long)param_1 + lVar11 + 0x18) == param_2) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__algorithm/sort.h:603: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                    );
        }
        lVar5 = lVar11 + 0x20;
        lVar18 = lVar11 + 0x28;
        lVar11 = lVar11 + 0x18;
      } while ((double)*(long *)((long)param_1 + lVar5) / *(double *)((long)param_1 + lVar18) <
               dVar23);
      puVar12 = (undefined8 *)((long)param_1 + lVar11);
      puVar15 = param_2;
      if (lVar11 == 0x18) {
        do {
          if (puVar15 <= puVar12) break;
          plVar1 = puVar15 + -2;
          pdVar4 = (double *)(puVar15 + -1);
          puVar15 = puVar15 + -3;
        } while (dVar23 <= (double)*plVar1 / *pdVar4);
      }
      else {
        do {
          if (puVar15 == param_1) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__algorithm/sort.h:615: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                      );
          }
          plVar1 = puVar15 + -2;
          pdVar4 = (double *)(puVar15 + -1);
          puVar15 = puVar15 + -3;
        } while (dVar23 <= (double)*plVar1 / *pdVar4);
      }
      puVar17 = puVar15;
      puVar10 = puVar12;
      puVar22 = puVar12;
      if (puVar12 < puVar15) {
        do {
          uVar27 = *puVar17;
          uVar24 = puVar17[2];
          uVar29 = puVar22[1];
          uVar26 = *puVar22;
          puVar22[1] = puVar17[1];
          *puVar22 = uVar27;
          uVar27 = puVar22[2];
          puVar22[2] = uVar24;
          puVar17[1] = uVar29;
          *puVar17 = uVar26;
          puVar17[2] = uVar27;
          do {
            puVar10 = puVar22 + 3;
            if (puVar10 == param_2) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__algorithm/sort.h:633: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                        );
            }
            plVar1 = puVar22 + 4;
            pdVar4 = (double *)(puVar22 + 5);
            puVar22 = puVar10;
          } while ((double)*plVar1 / *pdVar4 < dVar23);
          do {
            if (puVar17 == param_1) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__algorithm/sort.h:638: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                        );
            }
            plVar1 = puVar17 + -2;
            pdVar4 = (double *)(puVar17 + -1);
            puVar17 = puVar17 + -3;
          } while (dVar23 <= (double)*plVar1 / *pdVar4);
        } while (puVar10 < puVar17);
      }
      puVar22 = puVar10 + -3;
      if (param_1 != puVar22) {
        uVar27 = puVar10[-2];
        uVar24 = *puVar22;
        param_1[2] = puVar10[-1];
        param_1[1] = uVar27;
        *param_1 = uVar24;
      }
      puVar10[-3] = uVar13;
      puVar10[-2] = lVar8;
      puVar10[-1] = dVar25;
      if (puVar15 <= puVar12) {
        uVar7 = FUN_008a26cc(param_1,puVar10 + -3);
        uVar9 = FUN_008a26cc(puVar10,param_2);
        if ((uVar9 & 1) != 0) goto LAB_008a1d80;
        if ((uVar7 & 1) != 0) goto LAB_008a14f4;
      }
      FUN_008a14b0(param_1,puVar10 + -3,param_3,param_4 & 1);
      param_4 = 0;
      goto LAB_008a14f4;
    }
    lVar11 = param_1[1];
    lVar8 = puVar10[1];
    dVar28 = (double)param_1[2];
    dVar30 = (double)lVar11 / dVar28;
    dVar23 = (double)puVar10[2];
    if ((double)lVar8 / dVar23 <= dVar30) {
      if (dVar25 < dVar30) {
        uVar27 = param_2[-2];
        uVar24 = *puVar16;
        uVar13 = *param_1;
        param_1[2] = param_2[-1];
        param_1[1] = uVar27;
        *param_1 = uVar24;
        param_2[-3] = uVar13;
        param_2[-2] = lVar11;
        param_2[-1] = dVar28;
        lVar8 = puVar10[1];
        dVar25 = (double)puVar10[2];
        if ((double)(long)param_1[1] / (double)param_1[2] < (double)lVar8 / dVar25) {
          uVar27 = param_1[1];
          uVar24 = *param_1;
          uVar13 = *puVar10;
          puVar10[2] = param_1[2];
          puVar10[1] = uVar27;
          *puVar10 = uVar24;
          *param_1 = uVar13;
          param_1[1] = lVar8;
          param_1[2] = dVar25;
          goto joined_r0x008a1a8c;
        }
      }
    }
    else {
      uVar13 = *puVar10;
      if (dVar30 <= dVar25) {
        uVar27 = param_1[1];
        uVar24 = *param_1;
        puVar10[2] = param_1[2];
        puVar10[1] = uVar27;
        *puVar10 = uVar24;
        *param_1 = uVar13;
        param_1[1] = lVar8;
        param_1[2] = dVar23;
        if ((double)lVar8 / dVar23 <= (double)(long)param_2[-2] / (double)param_2[-1])
        goto LAB_008a1814;
        uVar27 = param_2[-2];
        uVar24 = *puVar16;
        param_1[2] = param_2[-1];
        param_1[1] = uVar27;
        *param_1 = uVar24;
      }
      else {
        uVar27 = param_2[-2];
        uVar24 = *puVar16;
        puVar10[2] = param_2[-1];
        puVar10[1] = uVar27;
        *puVar10 = uVar24;
      }
      param_2[-3] = uVar13;
      param_2[-2] = lVar8;
      param_2[-1] = dVar23;
    }
LAB_008a1814:
    if ((param_4 & 1) != 0) goto LAB_008a181c;
LAB_008a1a90:
    uVar13 = *param_1;
    lVar8 = param_1[1];
    dVar25 = (double)param_1[2];
    dVar23 = (double)lVar8 / dVar25;
    if ((double)(long)param_1[-2] / (double)param_1[-1] < dVar23) goto LAB_008a1ab4;
    puVar12 = param_1 + 3;
    if ((double)(long)param_2[-2] / (double)param_2[-1] <= dVar23) {
      do {
        puVar10 = puVar12;
        if (param_2 <= puVar10) break;
        puVar12 = puVar10 + 3;
      } while ((double)(long)puVar10[1] / (double)puVar10[2] <= dVar23);
    }
    else {
      do {
        puVar10 = puVar12;
        if (puVar10 == param_2) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__algorithm/sort.h:669: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                    );
        }
        puVar12 = puVar10 + 3;
      } while ((double)(long)puVar10[1] / (double)puVar10[2] <= dVar23);
    }
    puVar12 = param_2;
    if (puVar10 < param_2) {
      do {
        if (puVar12 == param_1) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__algorithm/sort.h:682: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                    );
        }
        plVar1 = puVar12 + -2;
        pdVar4 = (double *)(puVar12 + -1);
        puVar12 = puVar12 + -3;
      } while (dVar23 < (double)*plVar1 / *pdVar4);
    }
    if (puVar10 < puVar12) {
      do {
        uVar27 = *puVar12;
        uVar24 = puVar12[2];
        uVar29 = puVar10[1];
        uVar26 = *puVar10;
        puVar10[1] = puVar12[1];
        *puVar10 = uVar27;
        uVar27 = puVar10[2];
        puVar10[2] = uVar24;
        puVar12[1] = uVar29;
        *puVar12 = uVar26;
        puVar12[2] = uVar27;
        puVar15 = puVar10;
        do {
          puVar10 = puVar15 + 3;
          if (puVar10 == param_2) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__algorithm/sort.h:692: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                      );
          }
          plVar1 = puVar15 + 4;
          pdVar4 = (double *)(puVar15 + 5);
          puVar15 = puVar10;
        } while ((double)*plVar1 / *pdVar4 <= dVar23);
        do {
          if (puVar12 == param_1) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__algorithm/sort.h:697: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                      );
          }
          plVar1 = puVar12 + -2;
          pdVar4 = (double *)(puVar12 + -1);
          puVar12 = puVar12 + -3;
        } while (dVar23 < (double)*plVar1 / *pdVar4);
      } while (puVar10 < puVar12);
    }
    if (param_1 != puVar10 + -3) {
      uVar27 = puVar10[-2];
      uVar24 = puVar10[-3];
      param_1[2] = puVar10[-1];
      param_1[1] = uVar27;
      *param_1 = uVar24;
    }
    param_4 = 0;
    puVar10[-3] = uVar13;
    puVar10[-2] = lVar8;
    puVar10[-1] = dVar25;
    param_3 = param_3 + -1;
  } while( true );
LAB_008a1fd0:
  lVar11 = puVar10[4];
  dVar25 = (double)puVar10[5];
  dVar23 = (double)lVar11 / dVar25;
  if (dVar23 < (double)(long)puVar10[1] / (double)puVar10[2]) {
    uVar13 = *puVar16;
    lVar5 = lVar8;
    do {
      lVar18 = lVar5;
      puVar10 = (undefined8 *)((long)param_1 + lVar18);
      puVar10[4] = puVar10[1];
      puVar10[3] = *puVar10;
      puVar10[5] = puVar10[2];
      puVar12 = param_1;
      if (lVar18 == 0) goto LAB_008a1fb8;
      lVar5 = lVar18 + -0x18;
    } while (dVar23 < (double)(long)puVar10[-2] / (double)puVar10[-1]);
    puVar12 = (undefined8 *)((long)param_1 + lVar18);
LAB_008a1fb8:
    *puVar12 = uVar13;
    puVar12[1] = lVar11;
    puVar12[2] = dVar25;
  }
  puVar12 = puVar16 + 3;
  lVar8 = lVar8 + 0x18;
  puVar10 = puVar16;
  puVar16 = puVar12;
  if (puVar12 == param_2) {
    return;
  }
  goto LAB_008a1fd0;
LAB_008a2064:
  do {
    if (uVar19 <= uVar14) {
      uVar2 = (uVar19 & 0x3fffffffffffffff) << 1 | 1;
      uVar6 = uVar19 * 2 + 2;
      uVar20 = uVar2;
      if ((uVar6 < uVar7) &&
         (uVar20 = uVar6,
         (double)(long)param_1[uVar6 * 3 + 1] / (double)param_1[uVar6 * 3 + 2] <=
         (double)(long)param_1[uVar2 * 3 + 1] / (double)param_1[uVar2 * 3 + 2])) {
        uVar20 = uVar2;
      }
      puVar10 = param_1 + uVar19 * 3;
      lVar8 = puVar10[1];
      dVar25 = (double)puVar10[2];
      dVar23 = (double)lVar8 / dVar25;
      if (dVar23 <= (double)(long)param_1[uVar20 * 3 + 1] / (double)param_1[uVar20 * 3 + 2]) {
        uVar13 = *puVar10;
        uVar6 = uVar19;
        do {
          puVar10 = param_1 + uVar20 * 3;
          puVar16 = param_1 + uVar6 * 3;
          uVar27 = puVar10[1];
          uVar24 = *puVar10;
          puVar16[2] = puVar10[2];
          puVar16[1] = uVar27;
          *puVar16 = uVar24;
          if ((long)uVar14 < (long)uVar20) break;
          uVar2 = (uVar20 & 0x3fffffffffffffff) << 1 | 1;
          uVar6 = uVar20 * 2 + 2;
          uVar21 = uVar2;
          if (((long)uVar6 < (long)uVar7) &&
             (uVar21 = uVar6,
             (double)(long)param_1[uVar6 * 3 + 1] / (double)param_1[uVar6 * 3 + 2] <=
             (double)(long)param_1[uVar2 * 3 + 1] / (double)param_1[uVar2 * 3 + 2])) {
            uVar21 = uVar2;
          }
          uVar6 = uVar20;
          uVar20 = uVar21;
        } while (dVar23 <= (double)(long)param_1[uVar21 * 3 + 1] / (double)param_1[uVar21 * 3 + 2]);
        *puVar10 = uVar13;
        puVar10[1] = lVar8;
        puVar10[2] = dVar25;
      }
    }
    bVar3 = uVar19 != 0;
    uVar19 = uVar19 - 1;
  } while (bVar3);
  lVar8 = (uVar9 >> 3) * -0x5555555555555555;
  do {
    uVar13 = *param_1;
    lVar11 = param_1[1];
    dVar25 = (double)param_1[2];
    puVar10 = param_1;
    uVar7 = 0;
    do {
      uVar19 = uVar7 << 1 | 1;
      uVar9 = uVar7 * 2 + 2;
      puVar16 = puVar10 + uVar7 * 3 + 3;
      if (((long)uVar9 < lVar8) &&
         ((double)(long)puVar10[uVar7 * 3 + 4] / (double)puVar10[uVar7 * 3 + 5] <
          (double)(long)puVar10[uVar7 * 3 + 7] / (double)puVar10[uVar7 * 3 + 8])) {
        puVar16 = puVar10 + uVar7 * 3 + 6;
        uVar19 = uVar9;
      }
      uVar27 = puVar16[1];
      uVar24 = *puVar16;
      puVar10[2] = puVar16[2];
      puVar10[1] = uVar27;
      *puVar10 = uVar24;
      puVar10 = puVar16;
      uVar7 = uVar19;
    } while ((long)uVar19 <= (long)(lVar8 - 2U >> 1));
    puVar10 = param_2 + -3;
    if (puVar16 == puVar10) {
      *puVar16 = uVar13;
LAB_008a2194:
      puVar16[1] = lVar11;
      puVar16[2] = dVar25;
    }
    else {
      uVar27 = param_2[-2];
      uVar24 = *puVar10;
      puVar16[2] = param_2[-1];
      uVar7 = (long)puVar16 + (0x18 - (long)param_1);
      puVar16[1] = uVar27;
      *puVar16 = uVar24;
      param_2[-3] = uVar13;
      param_2[-2] = lVar11;
      param_2[-1] = dVar25;
      if (0x18 < (long)uVar7) {
        uVar7 = (uVar7 >> 3) * -0x5555555555555555 - 2 >> 1;
        lVar11 = puVar16[1];
        puVar12 = param_1 + uVar7 * 3;
        dVar25 = (double)puVar16[2];
        if ((double)(long)puVar12[1] / (double)puVar12[2] < (double)lVar11 / dVar25) {
          uVar13 = *puVar16;
          puVar15 = puVar16;
          do {
            puVar16 = puVar12;
            uVar27 = puVar16[1];
            uVar24 = *puVar16;
            puVar15[2] = puVar16[2];
            puVar15[1] = uVar27;
            *puVar15 = uVar24;
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1 >> 1;
            puVar12 = param_1 + uVar7 * 3;
            puVar15 = puVar16;
          } while ((double)(long)puVar12[1] / (double)puVar12[2] < (double)lVar11 / dVar25);
          *puVar16 = uVar13;
          goto LAB_008a2194;
        }
      }
    }
    bVar3 = lVar8 < 3;
    lVar8 = lVar8 + -1;
    param_2 = puVar10;
    if (bVar3) {
      return;
    }
  } while( true );
LAB_008a1d80:
  param_2 = puVar22;
  if ((uVar7 & 1) != 0) {
    return;
  }
  goto LAB_008a14ec;
}


// ===== 008a24e8  FUN_008a24e8 =====

void FUN_008a24e8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  lVar3 = param_2[1];
  lVar2 = param_1[1];
  dVar12 = (double)param_2[2];
  dVar11 = (double)lVar3 / dVar12;
  dVar5 = (double)param_1[2];
  dVar9 = (double)lVar2 / dVar5;
  dVar10 = (double)(long)param_3[1] / (double)param_3[2];
  if (dVar9 <= dVar11) {
    lVar1 = param_3[1];
    dVar8 = (double)param_3[2];
    if (dVar10 < dVar11) {
      uVar7 = param_3[1];
      uVar6 = *param_3;
      uVar4 = *param_2;
      param_2[2] = param_3[2];
      param_2[1] = uVar7;
      *param_2 = uVar6;
      *param_3 = uVar4;
      param_3[1] = lVar3;
      param_3[2] = dVar12;
      lVar2 = param_1[1];
      dVar5 = (double)param_1[2];
      lVar1 = lVar3;
      dVar8 = dVar12;
      dVar10 = dVar11;
      if ((double)(long)param_2[1] / (double)param_2[2] < (double)lVar2 / dVar5) {
        uVar7 = param_2[1];
        uVar6 = *param_2;
        uVar4 = *param_1;
        param_1[2] = param_2[2];
        param_1[1] = uVar7;
        *param_1 = uVar6;
        *param_2 = uVar4;
        param_2[1] = lVar2;
        param_2[2] = dVar5;
        lVar1 = param_3[1];
        dVar8 = (double)param_3[2];
        dVar10 = (double)lVar1 / dVar8;
      }
    }
  }
  else {
    uVar4 = *param_1;
    if (dVar11 <= dVar10) {
      uVar7 = param_2[1];
      uVar6 = *param_2;
      param_1[2] = param_2[2];
      param_1[1] = uVar7;
      *param_1 = uVar6;
      *param_2 = uVar4;
      param_2[1] = lVar2;
      param_2[2] = dVar5;
      dVar10 = (double)(long)param_3[1] / (double)param_3[2];
      lVar1 = param_3[1];
      dVar8 = (double)param_3[2];
      if (dVar9 <= dVar10) goto LAB_008a2618;
      uVar7 = param_3[1];
      uVar6 = *param_3;
      param_2[2] = param_3[2];
      param_2[1] = uVar7;
      *param_2 = uVar6;
    }
    else {
      uVar7 = param_3[1];
      uVar6 = *param_3;
      param_1[2] = param_3[2];
      param_1[1] = uVar7;
      *param_1 = uVar6;
    }
    *param_3 = uVar4;
    param_3[1] = lVar2;
    param_3[2] = dVar5;
    lVar1 = lVar2;
    dVar8 = dVar5;
    dVar10 = dVar9;
  }
LAB_008a2618:
  if ((double)(long)param_4[1] / (double)param_4[2] < dVar10) {
    uVar7 = param_4[1];
    uVar6 = *param_4;
    uVar4 = *param_3;
    param_3[2] = param_4[2];
    param_3[1] = uVar7;
    *param_3 = uVar6;
    *param_4 = uVar4;
    param_4[1] = lVar1;
    param_4[2] = dVar8;
    lVar2 = param_2[1];
    dVar10 = (double)param_2[2];
    if ((double)(long)param_3[1] / (double)param_3[2] < (double)lVar2 / dVar10) {
      uVar7 = param_3[1];
      uVar6 = *param_3;
      uVar4 = *param_2;
      param_2[2] = param_3[2];
      param_2[1] = uVar7;
      *param_2 = uVar6;
      *param_3 = uVar4;
      param_3[1] = lVar2;
      param_3[2] = dVar10;
      lVar2 = param_1[1];
      dVar10 = (double)param_1[2];
      if ((double)(long)param_2[1] / (double)param_2[2] < (double)lVar2 / dVar10) {
        uVar7 = param_2[1];
        uVar6 = *param_2;
        uVar4 = *param_1;
        param_1[2] = param_2[2];
        param_1[1] = uVar7;
        *param_1 = uVar6;
        *param_2 = uVar4;
        param_2[1] = lVar2;
        param_2[2] = dVar10;
      }
    }
  }
  return;
}


// ===== 008a26cc  FUN_008a26cc =====

bool FUN_008a26cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  uVar3 = ((long)param_2 - (long)param_1 >> 3) * -0x5555555555555555;
  if ((long)uVar3 < 3) {
    if (uVar3 < 2) {
      return true;
    }
    if (uVar3 != 2) {
LAB_008a28dc:
      lVar4 = param_1[1];
      puVar5 = param_1 + 6;
      dVar15 = (double)param_1[5];
      dVar17 = (double)(long)param_1[4] / dVar15;
      dVar12 = (double)param_1[2];
      dVar14 = (double)lVar4 / dVar12;
      dVar16 = (double)(long)param_1[7] / (double)param_1[8];
      if (dVar14 <= dVar17) {
        if (dVar16 < dVar17) {
          uVar9 = param_1[7];
          uVar7 = param_1[3];
          param_1[7] = param_1[4];
          param_1[4] = uVar9;
          param_1[3] = *puVar5;
          param_1[5] = param_1[8];
          param_1[6] = uVar7;
          param_1[8] = dVar15;
          if ((double)(long)param_1[4] / (double)param_1[5] < dVar14) {
            uVar9 = param_1[4];
            uVar7 = *param_1;
            param_1[4] = lVar4;
            param_1[1] = uVar9;
            *param_1 = param_1[3];
            param_1[2] = param_1[5];
            param_1[3] = uVar7;
            param_1[5] = dVar12;
          }
        }
      }
      else {
        uVar7 = *param_1;
        if (dVar17 <= dVar16) {
          uVar9 = param_1[4];
          param_1[4] = lVar4;
          param_1[1] = uVar9;
          *param_1 = param_1[3];
          param_1[2] = param_1[5];
          param_1[3] = uVar7;
          param_1[5] = dVar12;
          if (dVar14 <= dVar16) goto LAB_008a2a88;
          param_1[4] = param_1[7];
          param_1[3] = *puVar5;
          param_1[5] = param_1[8];
        }
        else {
          param_1[1] = param_1[7];
          *param_1 = *puVar5;
          param_1[2] = param_1[8];
        }
        param_1[6] = uVar7;
        param_1[7] = lVar4;
        param_1[8] = dVar12;
      }
LAB_008a2a88:
      if (param_1 + 9 != param_2) {
        lVar4 = 0;
        iVar8 = 0;
        puVar6 = param_1 + 9;
        do {
          lVar10 = puVar6[1];
          dVar12 = (double)puVar6[2];
          dVar14 = (double)lVar10 / dVar12;
          if (dVar14 < (double)(long)puVar5[1] / (double)puVar5[2]) {
            uVar7 = *puVar6;
            lVar2 = lVar4;
            do {
              lVar11 = lVar2;
              *(undefined8 *)((long)param_1 + lVar11 + 0x50) =
                   *(undefined8 *)((long)param_1 + lVar11 + 0x38);
              *(undefined8 *)((long)param_1 + lVar11 + 0x48) =
                   *(undefined8 *)((long)param_1 + lVar11 + 0x30);
              *(undefined8 *)((long)param_1 + lVar11 + 0x58) =
                   *(undefined8 *)((long)param_1 + lVar11 + 0x40);
              puVar5 = param_1;
              if (lVar11 == -0x30) goto LAB_008a2aa4;
              lVar2 = lVar11 + -0x18;
            } while (dVar14 < (double)*(long *)((long)param_1 + lVar11 + 0x20) /
                              *(double *)((long)param_1 + lVar11 + 0x28));
            puVar5 = (undefined8 *)((long)param_1 + lVar11 + 0x30);
LAB_008a2aa4:
            iVar8 = iVar8 + 1;
            *puVar5 = uVar7;
            puVar5[1] = lVar10;
            puVar5[2] = dVar12;
            if (iVar8 == 8) {
              return puVar6 + 3 == param_2;
            }
          }
          puVar1 = puVar6 + 3;
          lVar4 = lVar4 + 0x18;
          puVar5 = puVar6;
          puVar6 = puVar1;
        } while (puVar1 != param_2);
      }
      return true;
    }
    lVar4 = param_1[1];
    dVar12 = (double)param_1[2];
    if ((double)lVar4 / dVar12 <= (double)(long)param_2[-2] / (double)param_2[-1]) {
      return true;
    }
    uVar13 = param_2[-2];
    uVar9 = param_2[-3];
    uVar7 = *param_1;
    param_1[2] = param_2[-1];
  }
  else {
    if (uVar3 != 3) {
      if (uVar3 == 4) {
        FUN_008a24e8(param_1,param_1 + 3,param_1 + 6,param_2 + -3);
        return true;
      }
      if (uVar3 == 5) {
        FUN_008a24e8(param_1,param_1 + 3,param_1 + 6,param_1 + 9);
        lVar4 = param_1[10];
        dVar12 = (double)param_1[0xb];
        if ((double)lVar4 / dVar12 <= (double)(long)param_2[-2] / (double)param_2[-1]) {
          return true;
        }
        uVar13 = param_2[-2];
        uVar9 = param_2[-3];
        uVar7 = param_1[9];
        param_1[0xb] = param_2[-1];
        param_1[10] = uVar13;
        param_1[9] = uVar9;
        param_2[-3] = uVar7;
        param_2[-2] = lVar4;
        param_2[-1] = dVar12;
        dVar12 = (double)param_1[8];
        if ((double)(long)param_1[7] / dVar12 <= (double)(long)param_1[10] / (double)param_1[0xb]) {
          return true;
        }
        uVar9 = param_1[10];
        uVar7 = param_1[6];
        param_1[10] = param_1[7];
        param_1[7] = uVar9;
        param_1[6] = param_1[9];
        param_1[8] = param_1[0xb];
        param_1[9] = uVar7;
        param_1[0xb] = dVar12;
        dVar12 = (double)param_1[5];
        if ((double)(long)param_1[4] / dVar12 <= (double)(long)param_1[7] / (double)param_1[8]) {
          return true;
        }
        uVar9 = param_1[7];
        uVar7 = param_1[3];
        param_1[7] = param_1[4];
        param_1[4] = uVar9;
        param_1[3] = param_1[6];
        param_1[5] = param_1[8];
        param_1[6] = uVar7;
        param_1[8] = dVar12;
        dVar12 = (double)param_1[2];
        if ((double)(long)param_1[1] / dVar12 <= (double)(long)param_1[4] / (double)param_1[5]) {
          return true;
        }
        uVar9 = param_1[4];
        uVar7 = *param_1;
        param_1[4] = param_1[1];
        param_1[1] = uVar9;
        *param_1 = param_1[3];
        param_1[2] = param_1[5];
        param_1[3] = uVar7;
        param_1[5] = dVar12;
        return true;
      }
      goto LAB_008a28dc;
    }
    lVar10 = param_1[4];
    lVar4 = param_1[1];
    puVar5 = param_2 + -3;
    dVar14 = (double)param_1[5];
    dVar15 = (double)lVar10 / dVar14;
    dVar12 = (double)param_1[2];
    if ((double)lVar4 / dVar12 <= dVar15) {
      if (dVar15 <= (double)(long)param_2[-2] / (double)param_2[-1]) {
        return true;
      }
      uVar13 = param_2[-2];
      uVar9 = *puVar5;
      uVar7 = param_1[3];
      param_1[5] = param_2[-1];
      param_1[4] = uVar13;
      param_1[3] = uVar9;
      param_2[-3] = uVar7;
      param_2[-2] = lVar10;
      param_2[-1] = dVar14;
      dVar12 = (double)param_1[2];
      if ((double)(long)param_1[1] / dVar12 <= (double)(long)param_1[4] / (double)param_1[5]) {
        return true;
      }
      uVar9 = param_1[4];
      uVar7 = *param_1;
      param_1[4] = param_1[1];
      param_1[1] = uVar9;
      *param_1 = param_1[3];
      param_1[2] = param_1[5];
      param_1[3] = uVar7;
      param_1[5] = dVar12;
      return true;
    }
    uVar7 = *param_1;
    if (dVar15 <= (double)(long)param_2[-2] / (double)param_2[-1]) {
      uVar13 = param_1[4];
      uVar9 = param_1[5];
      param_1[4] = lVar4;
      param_1[5] = dVar12;
      param_1[1] = uVar13;
      *param_1 = param_1[3];
      param_1[2] = uVar9;
      param_1[3] = uVar7;
      if ((double)lVar4 / dVar12 <= (double)(long)param_2[-2] / (double)param_2[-1]) {
        return true;
      }
      uVar13 = param_2[-2];
      uVar9 = *puVar5;
      param_1[5] = param_2[-1];
      param_1[4] = uVar13;
      param_1[3] = uVar9;
      goto LAB_008a28cc;
    }
    uVar13 = param_2[-2];
    uVar9 = *puVar5;
    param_1[2] = param_2[-1];
  }
  param_1[1] = uVar13;
  *param_1 = uVar9;
LAB_008a28cc:
  param_2[-3] = uVar7;
  param_2[-2] = lVar4;
  param_2[-1] = dVar12;
  return true;
}


// ===== 008a2b60  FUN_008a2b60 =====

void FUN_008a2b60(ulong *param_1,ulong *param_2,long *param_3,ulong param_4,ulong *param_5,
                 long param_6)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  
  if (1 < param_4) {
    if (param_4 == 2) {
      uVar4 = param_2[-1];
      if ((2 < uVar4) || (uVar7 = *param_1, 2 < uVar7)) {
LAB_008a2f70:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(0x5512,0x8a2f74);
        (*pcVar2)();
      }
      if (*(uint *)(*param_3 + 0x30 + uVar4 * 0xa0 + 0x10) <
          *(uint *)(*param_3 + 0x30 + uVar7 * 0xa0 + 0x10)) {
        *param_1 = uVar4;
        param_2[-1] = uVar7;
      }
    }
    else if ((long)param_4 < 0x81) {
      if ((param_1 != param_2) && (param_1 + 1 != param_2)) {
        lVar5 = 0;
        puVar10 = param_1 + 1;
        puVar11 = param_1;
        do {
          puVar8 = puVar10;
          uVar4 = puVar11[1];
          if ((2 < uVar4) || (uVar7 = *puVar11, 2 < uVar7)) goto LAB_008a2f70;
          lVar1 = lVar5;
          if (*(uint *)(*param_3 + 0x30 + uVar4 * 0xa0 + 0x10) <
              *(uint *)(*param_3 + 0x30 + uVar7 * 0xa0 + 0x10)) {
            do {
              lVar12 = lVar1;
              *(ulong *)((long)param_1 + lVar12 + 8) = uVar7;
              puVar10 = param_1;
              if (lVar12 == 0) goto LAB_008a2c34;
              uVar7 = *(ulong *)((long)param_1 + lVar12 + -8);
              if (2 < uVar7) goto LAB_008a2f70;
              lVar1 = lVar12 + -8;
            } while (*(uint *)(*param_3 + 0x30 + uVar4 * 0xa0 + 0x10) <
                     *(uint *)(*param_3 + 0x30 + uVar7 * 0xa0 + 0x10));
            puVar10 = (ulong *)((long)param_1 + lVar12);
LAB_008a2c34:
            *puVar10 = uVar4;
          }
          puVar10 = puVar8 + 1;
          lVar5 = lVar5 + 8;
          puVar11 = puVar8;
        } while (puVar10 != param_2);
      }
    }
    else {
      uVar4 = param_4 >> 1;
      lVar5 = param_4 - uVar4;
      if (param_6 < (long)param_4) {
        FUN_008a2b60();
        FUN_008a2b60(param_1 + uVar4,param_2,param_3,lVar5,param_5,param_6);
        FUN_008a33e8(param_1,param_1 + uVar4,param_2,param_3,uVar4,lVar5,param_5,param_6);
        return;
      }
      FUN_008a2f74(param_1,param_1 + uVar4,param_3,uVar4,param_5);
      puVar10 = param_5 + uVar4;
      FUN_008a2f74(param_1 + uVar4,param_2,param_3,lVar5,param_5 + uVar4);
      puVar11 = param_5 + param_4;
      puVar8 = puVar10;
      puVar9 = param_1;
      if (uVar4 * 8 != 0) {
        puVar8 = param_5 + uVar4;
        puVar6 = param_5;
        puVar14 = param_1;
        do {
          if (puVar8 == puVar11) {
            if (puVar6 == puVar10) {
              return;
            }
            uVar4 = (long)param_5 + (uVar4 * 8 - (long)puVar6) + -8;
            if ((((0x127 < uVar4) &&
                 (puVar14 <= (ulong *)((long)puVar14 + (uVar4 & 0xfffffffffffffff8)))) &&
                (puVar6 <= (ulong *)((long)puVar6 + (uVar4 & 0xfffffffffffffff8)))) &&
               (0x1f < (ulong)((long)param_1 - (long)puVar6))) {
              puVar11 = puVar14 + 2;
              uVar4 = (uVar4 >> 3) + 1;
              uVar13 = uVar4 & 0x3ffffffffffffffc;
              puVar14 = puVar14 + uVar13;
              puVar8 = puVar6 + 2;
              uVar7 = uVar4 & 0x3ffffffffffffffc;
              do {
                puVar9 = puVar8 + -1;
                uVar15 = puVar8[-2];
                uVar17 = puVar8[1];
                uVar16 = *puVar8;
                uVar7 = uVar7 - 4;
                puVar8 = puVar8 + 4;
                puVar11[-1] = *puVar9;
                puVar11[-2] = uVar15;
                puVar11[1] = uVar17;
                *puVar11 = uVar16;
                puVar11 = puVar11 + 4;
              } while (uVar7 != 0);
              puVar6 = puVar6 + uVar13;
              if (uVar4 == uVar13) {
                return;
              }
            }
            do {
              puVar11 = puVar6 + 1;
              *puVar14 = *puVar6;
              puVar6 = puVar11;
              puVar14 = puVar14 + 1;
            } while (puVar11 != puVar10);
            return;
          }
          uVar7 = *puVar8;
          if ((2 < uVar7) || (uVar13 = *puVar6, 2 < uVar13)) goto LAB_008a2f70;
          param_1 = param_1 + 1;
          bVar3 = *(uint *)(*param_3 + 0x30 + uVar13 * 0xa0 + 0x10) <=
                  *(uint *)(*param_3 + 0x30 + uVar7 * 0xa0 + 0x10);
          lVar5 = 0;
          if (bVar3) {
            lVar5 = 8;
            uVar7 = uVar13;
          }
          puVar6 = (ulong *)((long)puVar6 + lVar5);
          lVar5 = 8;
          if (bVar3) {
            lVar5 = 0;
          }
          puVar8 = (ulong *)((long)puVar8 + lVar5);
          puVar9 = puVar14 + 1;
          *puVar14 = uVar7;
          puVar14 = puVar9;
        } while (puVar6 != puVar10);
      }
      if (puVar8 != puVar11) {
        uVar4 = (long)puVar11 + (-8 - (long)puVar8);
        if (((0x117 < uVar4) &&
            (puVar9 <= (ulong *)((long)puVar9 + (uVar4 & 0xfffffffffffffff8)) &&
             puVar8 <= (ulong *)((long)puVar8 + (uVar4 & 0xfffffffffffffff8)))) &&
           (0x1f < (ulong)((long)puVar9 - (long)puVar8))) {
          puVar10 = puVar9 + 2;
          uVar4 = (uVar4 >> 3) + 1;
          uVar13 = uVar4 & 0x3ffffffffffffffc;
          uVar7 = uVar4 & 0x3ffffffffffffffc;
          puVar9 = puVar9 + uVar13;
          puVar6 = puVar8 + 2;
          do {
            puVar14 = puVar6 + -1;
            uVar15 = puVar6[-2];
            uVar17 = puVar6[1];
            uVar16 = *puVar6;
            uVar7 = uVar7 - 4;
            puVar6 = puVar6 + 4;
            puVar10[-1] = *puVar14;
            puVar10[-2] = uVar15;
            puVar10[1] = uVar17;
            *puVar10 = uVar16;
            puVar10 = puVar10 + 4;
          } while (uVar7 != 0);
          puVar8 = puVar8 + uVar13;
          if (uVar4 == uVar13) {
            return;
          }
        }
        do {
          puVar10 = puVar8 + 1;
          *puVar9 = *puVar8;
          puVar8 = puVar10;
          puVar9 = puVar9 + 1;
        } while (puVar10 != puVar11);
      }
    }
  }
  return;
}


// ===== 008a2f74  FUN_008a2f74 =====

void FUN_008a2f74(ulong *param_1,ulong *param_2,long *param_3,ulong param_4,ulong *param_5)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  
  if (param_4 == 0) {
    return;
  }
  if (param_4 == 2) {
    uVar5 = param_2[-1];
    if ((2 < uVar5) || (uVar14 = *param_1, 2 < uVar14)) {
LAB_008a33e4:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0x5512,0x8a33e8);
      (*pcVar4)();
    }
    if (*(uint *)(*param_3 + 0x30 + uVar14 * 0xa0 + 0x10) <=
        *(uint *)(*param_3 + 0x30 + uVar5 * 0xa0 + 0x10)) {
      if (param_5 == (ulong *)0x0) goto LAB_008a33d0;
      puVar9 = param_5 + 1;
      *param_5 = uVar14;
      if (puVar9 == (ulong *)0x0) goto LAB_008a33d0;
      uVar5 = param_2[-1];
      goto LAB_008a31f0;
    }
    if (param_5 == (ulong *)0x0) goto LAB_008a33d0;
    puVar9 = param_5 + 1;
    *param_5 = uVar5;
    if (puVar9 == (ulong *)0x0) goto LAB_008a33d0;
  }
  else {
    if (param_4 != 1) {
      if ((long)param_4 < 9) {
        if (param_1 == param_2) {
          return;
        }
        if (param_5 != (ulong *)0x0) {
          puVar9 = param_1 + 1;
          *param_5 = *param_1;
          if (puVar9 == param_2) {
            return;
          }
          lVar6 = 0;
          puVar8 = param_5;
          while (uVar5 = *puVar9, uVar5 < 3) {
            puVar7 = puVar8 + 1;
            uVar14 = *puVar8;
            if (2 < uVar14) break;
            if (*(uint *)(*param_3 + 0x30 + uVar5 * 0xa0 + 0x10) <
                *(uint *)(*param_3 + 0x30 + uVar14 * 0xa0 + 0x10)) {
              if (puVar7 == (ulong *)0x0) goto LAB_008a33d0;
              puVar8[1] = uVar14;
              puVar10 = param_5;
              lVar13 = lVar6;
              if (puVar8 != param_5) {
                do {
                  if (2 < *puVar9) goto LAB_008a33e4;
                  uVar5 = ((ulong *)((long)param_5 + lVar13))[-1];
                  if (2 < uVar5) goto LAB_008a33e4;
                  if (*(uint *)(*param_3 + 0x30 + uVar5 * 0xa0 + 0x10) <=
                      *(uint *)(*param_3 + 0x30 + *puVar9 * 0xa0 + 0x10)) {
                    puVar10 = (ulong *)((long)param_5 + lVar13);
                    break;
                  }
                  lVar2 = lVar13 + -8;
                  *(ulong *)((long)param_5 + lVar13) = uVar5;
                  lVar13 = lVar2;
                } while (lVar2 != 0);
              }
              *puVar10 = *puVar9;
            }
            else {
              if (puVar7 == (ulong *)0x0) goto LAB_008a33d0;
              *puVar7 = uVar5;
            }
            puVar9 = puVar9 + 1;
            lVar6 = lVar6 + 8;
            puVar8 = puVar7;
            if (puVar9 == param_2) {
              return;
            }
          }
          goto LAB_008a33e4;
        }
      }
      else {
        uVar5 = param_4 >> 1;
        puVar7 = param_1 + uVar5;
        FUN_008a2b60(param_1,param_1 + uVar5,param_3,uVar5,param_5,uVar5);
        FUN_008a2b60(param_1 + uVar5,param_2,param_3,param_4 - uVar5,param_5 + uVar5,param_4 - uVar5
                    );
        puVar8 = param_5;
        puVar9 = puVar7;
        if ((uVar5 & 0x1fffffffffffffff) != 0) {
          uVar5 = -(long)param_5;
          puVar10 = param_1;
          do {
            if (puVar9 == param_2) {
              if (puVar10 == puVar7) {
                return;
              }
              uVar15 = uVar5 >> 3;
              uVar11 = (ulong)((long)puVar7 + (-8 - (long)puVar10)) >> 3;
              uVar14 = uVar11;
              if (uVar15 <= uVar11) {
                uVar14 = uVar15;
              }
              puVar9 = puVar10;
              if (0x31 < uVar14) {
                uVar1 = uVar11;
                if (uVar15 <= uVar11) {
                  uVar1 = uVar15;
                }
                if (((((((int)param_1 - (int)puVar10 | -(int)param_5) & 7U) == 0) &&
                     (puVar8 <= puVar8 + uVar1)) && (puVar10 <= puVar10 + uVar1)) &&
                   (0x1f < -((long)puVar10 + uVar5))) {
                  uVar5 = uVar14 + 1 & 3;
                  uVar1 = 4;
                  if (uVar5 != 0) {
                    uVar1 = uVar5;
                  }
                  if (uVar11 <= uVar15) {
                    uVar15 = uVar11;
                  }
                  puVar9 = puVar10 + ((uVar14 + 1) - uVar1);
                  puVar12 = puVar8 + 2;
                  puVar10 = puVar10 + 2;
                  lVar6 = ~uVar15 + uVar1;
                  puVar8 = puVar8 + ((uVar15 + 1) - uVar1);
                  do {
                    puVar3 = puVar10 + -1;
                    uVar5 = puVar10[-2];
                    uVar15 = puVar10[1];
                    uVar14 = *puVar10;
                    lVar6 = lVar6 + 4;
                    puVar10 = puVar10 + 4;
                    puVar12[-1] = *puVar3;
                    puVar12[-2] = uVar5;
                    puVar12[1] = uVar15;
                    *puVar12 = uVar14;
                    puVar12 = puVar12 + 4;
                  } while (lVar6 != 0);
                }
              }
              while (puVar8 != (ulong *)0x0) {
                puVar10 = puVar9 + 1;
                *puVar8 = *puVar9;
                puVar8 = puVar8 + 1;
                puVar9 = puVar10;
                if (puVar10 == puVar7) {
                  return;
                }
              }
              goto LAB_008a33d0;
            }
            uVar14 = *puVar9;
            if ((2 < uVar14) || (uVar15 = *puVar10, 2 < uVar15)) goto LAB_008a33e4;
            if (*(uint *)(*param_3 + 0x30 + uVar14 * 0xa0 + 0x10) <
                *(uint *)(*param_3 + 0x30 + uVar15 * 0xa0 + 0x10)) {
              if (puVar8 == (ulong *)0x0) goto LAB_008a33d0;
              *puVar8 = uVar14;
              puVar9 = puVar9 + 1;
            }
            else {
              if (puVar8 == (ulong *)0x0) goto LAB_008a33d0;
              puVar10 = puVar10 + 1;
              *puVar8 = uVar15;
            }
            puVar8 = puVar8 + 1;
            uVar5 = uVar5 - 8;
          } while (puVar10 != puVar7);
        }
        if (puVar9 == param_2) {
          return;
        }
        uVar14 = (ulong)((long)param_2 + (-8 - (long)puVar9)) >> 3;
        uVar5 = uVar14;
        if ((ulong)-(long)puVar8 >> 3 <= uVar14) {
          uVar5 = (ulong)-(long)puVar8 >> 3;
        }
        puVar7 = puVar8;
        puVar10 = puVar9;
        if (0x2b < uVar5) {
          uVar15 = (ulong)-(long)puVar8 >> 3;
          if (uVar15 <= uVar14) {
            uVar14 = uVar15;
          }
          if ((((((int)param_2 - (int)puVar9 | (uint)-(long)puVar8) & 7) == 0) &&
              (puVar8 <= puVar8 + uVar14)) &&
             ((puVar9 <= puVar9 + uVar14 && (0x1f < (ulong)((long)puVar8 - (long)puVar9))))) {
            uVar14 = uVar5 + 1 & 3;
            uVar15 = 4;
            if (uVar14 != 0) {
              uVar15 = uVar14;
            }
            lVar6 = (uVar5 + 1) - uVar15;
            puVar7 = puVar8 + lVar6;
            puVar10 = puVar9 + lVar6;
            puVar9 = puVar9 + 2;
            puVar8 = puVar8 + 2;
            do {
              puVar12 = puVar9 + -1;
              uVar5 = puVar9[-2];
              uVar15 = puVar9[1];
              uVar14 = *puVar9;
              lVar6 = lVar6 + -4;
              puVar9 = puVar9 + 4;
              puVar8[-1] = *puVar12;
              puVar8[-2] = uVar5;
              puVar8[1] = uVar15;
              *puVar8 = uVar14;
              puVar8 = puVar8 + 4;
            } while (lVar6 != 0);
          }
        }
        while (puVar7 != (ulong *)0x0) {
          puVar9 = puVar10 + 1;
          *puVar7 = *puVar10;
          puVar7 = puVar7 + 1;
          puVar10 = puVar9;
          if (puVar9 == param_2) {
            return;
          }
        }
      }
LAB_008a33d0:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar9 = param_5;
    if (param_5 == (ulong *)0x0) goto LAB_008a33d0;
  }
  uVar5 = *param_1;
LAB_008a31f0:
  *puVar9 = uVar5;
  return;
}


// ===== 008a33e8  FUN_008a33e8 =====

void FUN_008a33e8(ulong *param_1,ulong *param_2,ulong *param_3,long *param_4,long param_5,
                 long param_6,ulong *param_7,long param_8)

{
  ulong *puVar1;
  code *pcVar2;
  bool bVar3;
  ulong *puVar4;
  ulong *puVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong *puVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  
  if (param_6 != 0) {
    while ((param_8 < param_6 && (param_8 < param_5))) {
      if (param_5 == 0) {
        return;
      }
      uVar8 = *param_2;
      if (2 < uVar8) goto LAB_008a3a74;
      lVar6 = 0;
      lVar12 = 0;
      lVar15 = *param_4 + 0x30;
      while( true ) {
        uVar9 = param_1[lVar12];
        if (2 < uVar9) goto LAB_008a3a74;
        if (*(uint *)(lVar15 + uVar8 * 0xa0 + 0x10) < *(uint *)(lVar15 + uVar9 * 0xa0 + 0x10))
        break;
        lVar12 = lVar12 + 1;
        lVar6 = lVar6 + -8;
        if (param_5 == lVar12) {
          return;
        }
      }
      puVar5 = (ulong *)((long)param_1 - lVar6);
      if (param_5 - lVar12 < param_6) {
        lVar14 = param_6 / 2;
        puVar7 = param_2 + lVar14;
        puVar13 = param_2;
        if (puVar5 != param_2) {
          if (2 < *puVar7) goto LAB_008a3a74;
          uVar8 = (long)param_2 + (lVar6 - (long)param_1) >> 3;
          puVar13 = puVar5;
          do {
            uVar9 = uVar8 >> 1;
            uVar10 = puVar13[uVar9];
            if (2 < uVar10) goto LAB_008a3a74;
            uVar16 = uVar8 + ~uVar9;
            uVar8 = uVar9;
            if (*(uint *)(lVar15 + uVar10 * 0xa0 + 0x10) <=
                *(uint *)(lVar15 + *puVar7 * 0xa0 + 0x10)) {
              puVar13 = puVar13 + uVar9 + 1;
              uVar8 = uVar16;
            }
          } while (uVar8 != 0);
        }
        lVar11 = (long)puVar13 - (long)puVar5 >> 3;
      }
      else {
        if (param_5 + -1 == lVar12) {
          param_1[lVar12] = uVar8;
          *param_2 = uVar9;
          return;
        }
        lVar11 = (param_5 - lVar12) / 2;
        puVar7 = param_3;
        if ((long)param_3 - (long)param_2 != 0) {
          if (2 < param_1[lVar11 + lVar12]) goto LAB_008a3a74;
          uVar8 = (long)param_3 - (long)param_2 >> 3;
          puVar13 = param_2;
          do {
            uVar9 = uVar8 >> 1;
            uVar10 = puVar13[uVar9];
            if (2 < uVar10) goto LAB_008a3a74;
            puVar7 = puVar13 + uVar9 + 1;
            uVar8 = uVar8 + ~uVar9;
            if (*(uint *)(lVar15 + param_1[lVar11 + lVar12] * 0xa0 + 0x10) <=
                *(uint *)(lVar15 + uVar10 * 0xa0 + 0x10)) {
              puVar7 = puVar13;
              uVar8 = uVar9;
            }
            puVar13 = puVar7;
          } while (uVar8 != 0);
        }
        puVar13 = (ulong *)((long)param_1 + (lVar11 * 8 - lVar6));
        lVar14 = (long)puVar7 - (long)param_2 >> 3;
      }
      lVar15 = (param_5 - lVar11) - lVar12;
      puVar4 = (ulong *)FUN_008a3a78(puVar13,param_2,puVar7);
      if (lVar11 + lVar14 < ((param_6 + param_5) - (lVar11 + lVar14)) - lVar12) {
        FUN_008a33e8(puVar5,puVar13,puVar4,param_4,lVar11,lVar14,param_7,param_8);
        puVar5 = puVar4;
        puVar4 = param_3;
        param_2 = puVar7;
        param_6 = param_6 - lVar14;
        param_5 = lVar15;
      }
      else {
        FUN_008a33e8(puVar4,puVar7,param_3,param_4,lVar15,param_6 - lVar14,param_7,param_8);
        param_2 = puVar13;
        param_6 = lVar14;
        param_5 = lVar11;
      }
      param_1 = puVar5;
      param_3 = puVar4;
      if (param_6 == 0) {
        return;
      }
    }
    if (param_5 <= param_6) {
      if (param_1 == param_2) {
        return;
      }
      uVar9 = (ulong)((long)param_2 + (-8 - (long)param_1)) >> 3;
      uVar8 = uVar9;
      if ((ulong)-(long)param_7 >> 3 <= uVar9) {
        uVar8 = (ulong)-(long)param_7 >> 3;
      }
      puVar5 = param_7;
      puVar7 = param_1;
      if (0x2b < uVar8) {
        uVar10 = (ulong)-(long)param_7 >> 3;
        if (uVar10 <= uVar9) {
          uVar9 = uVar10;
        }
        if (((((((int)param_2 - (int)param_1 | (uint)-(long)param_7) & 7) == 0) &&
             (param_7 <= param_7 + uVar9)) && (param_1 <= param_1 + uVar9)) &&
           (0x1f < (ulong)((long)param_7 - (long)param_1))) {
          puVar13 = param_1 + 2;
          uVar9 = uVar8 + 1 & 3;
          puVar4 = param_7 + 2;
          uVar10 = 4;
          if (uVar9 != 0) {
            uVar10 = uVar9;
          }
          lVar15 = (uVar8 + 1) - uVar10;
          puVar5 = param_7 + lVar15;
          puVar7 = param_1 + lVar15;
          do {
            puVar1 = puVar13 + -1;
            uVar8 = puVar13[-2];
            uVar10 = puVar13[1];
            uVar9 = *puVar13;
            lVar15 = lVar15 + -4;
            puVar13 = puVar13 + 4;
            puVar4[-1] = *puVar1;
            puVar4[-2] = uVar8;
            puVar4[1] = uVar10;
            *puVar4 = uVar9;
            puVar4 = puVar4 + 4;
          } while (lVar15 != 0);
        }
      }
      lVar15 = -(long)puVar5;
      do {
        if (puVar5 == (ulong *)0x0) goto LAB_008a3a14;
        puVar4 = puVar7 + 1;
        lVar15 = lVar15 + -8;
        puVar13 = puVar5 + 1;
        *puVar5 = *puVar7;
        puVar5 = puVar13;
        puVar7 = puVar4;
      } while (puVar4 != param_2);
      if (puVar13 == param_7) {
        return;
      }
      while( true ) {
        if (param_2 == param_3) {
          memmove(param_1,param_7,-((long)param_7 + lVar15));
          return;
        }
        uVar8 = *param_2;
        if ((2 < uVar8) || (uVar9 = *param_7, 2 < uVar9)) break;
        bVar3 = *(uint *)(*param_4 + 0x30 + uVar9 * 0xa0 + 0x10) <=
                *(uint *)(*param_4 + 0x30 + uVar8 * 0xa0 + 0x10);
        lVar12 = 0;
        if (bVar3) {
          lVar12 = 8;
          uVar8 = uVar9;
        }
        lVar6 = 8;
        if (bVar3) {
          lVar6 = 0;
        }
        param_7 = (ulong *)((long)param_7 + lVar12);
        param_2 = (ulong *)((long)param_2 + lVar6);
        *param_1 = uVar8;
        param_1 = param_1 + 1;
        if (puVar13 == param_7) {
          return;
        }
      }
      goto LAB_008a3a74;
    }
    if (param_2 == param_3) {
      return;
    }
    uVar9 = (ulong)((long)param_3 + (-8 - (long)param_2)) >> 3;
    uVar8 = uVar9;
    if ((ulong)-(long)param_7 >> 3 <= uVar9) {
      uVar8 = (ulong)-(long)param_7 >> 3;
    }
    puVar5 = param_7;
    puVar7 = param_2;
    if (0x2b < uVar8) {
      uVar10 = (ulong)-(long)param_7 >> 3;
      if (uVar10 <= uVar9) {
        uVar9 = uVar10;
      }
      if ((((((int)param_3 - (int)param_2 | (uint)-(long)param_7) & 7) == 0) &&
          (param_7 <= param_7 + uVar9)) &&
         ((param_2 <= param_2 + uVar9 && (0x1f < (ulong)((long)param_7 - (long)param_2))))) {
        puVar13 = param_2 + 2;
        uVar9 = uVar8 + 1 & 3;
        puVar4 = param_7 + 2;
        uVar10 = 4;
        if (uVar9 != 0) {
          uVar10 = uVar9;
        }
        lVar15 = (uVar8 + 1) - uVar10;
        puVar5 = param_7 + lVar15;
        puVar7 = param_2 + lVar15;
        do {
          puVar1 = puVar13 + -1;
          uVar8 = puVar13[-2];
          uVar10 = puVar13[1];
          uVar9 = *puVar13;
          lVar15 = lVar15 + -4;
          puVar13 = puVar13 + 4;
          puVar4[-1] = *puVar1;
          puVar4[-2] = uVar8;
          puVar4[1] = uVar10;
          *puVar4 = uVar9;
          puVar4 = puVar4 + 4;
        } while (lVar15 != 0);
      }
    }
    do {
      if (puVar5 == (ulong *)0x0) {
LAB_008a3a14:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar4 = puVar7 + 1;
      puVar13 = puVar5 + 1;
      *puVar5 = *puVar7;
      puVar5 = puVar13;
      puVar7 = puVar4;
    } while (puVar4 != param_3);
    if (puVar13 == param_7) {
      return;
    }
    lVar15 = 0;
    do {
      if (param_2 == param_1) {
        if (param_7 == puVar13) {
          return;
        }
        puVar5 = (ulong *)((long)param_3 + lVar15);
        uVar8 = ((long)puVar13 - (long)param_7) - 8;
        puVar7 = puVar13;
        if (((0xf7 < uVar8) &&
            ((long)param_3 + (lVar15 - ((long)puVar13 - (long)param_7 & 0xfffffffffffffff8U)) <=
             (ulong)((long)param_3 + lVar15 + -8))) &&
           (0x1f < (ulong)((long)puVar13 + (-lVar15 - (long)param_3)))) {
          puVar4 = puVar5 + -2;
          uVar8 = (uVar8 >> 3) + 1;
          uVar9 = uVar8 & 0x3ffffffffffffffc;
          puVar5 = (ulong *)((long)param_3 + lVar15 + uVar9 * -8);
          puVar7 = puVar13 + -uVar9;
          puVar13 = puVar13 + -2;
          uVar10 = uVar8 & 0x3ffffffffffffffc;
          do {
            puVar1 = puVar13 + -1;
            uVar18 = puVar13[-2];
            uVar17 = puVar13[1];
            uVar16 = *puVar13;
            uVar10 = uVar10 - 4;
            puVar13 = puVar13 + -4;
            puVar4[-1] = *puVar1;
            puVar4[-2] = uVar18;
            puVar4[1] = uVar17;
            *puVar4 = uVar16;
            puVar4 = puVar4 + -4;
          } while (uVar10 != 0);
          if (uVar8 == uVar9) {
            return;
          }
        }
        do {
          puVar5 = puVar5 + -1;
          puVar7 = puVar7 + -1;
          *puVar5 = *puVar7;
        } while (puVar7 != param_7);
        return;
      }
      uVar8 = puVar13[-1];
      if (2 < uVar8) {
LAB_008a3a74:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(0x5512,0x8a3a78);
        (*pcVar2)();
      }
      uVar9 = param_2[-1];
      if (2 < uVar9) goto LAB_008a3a74;
      puVar5 = param_2 + -1;
      if (*(uint *)(*param_4 + 0x30 + uVar9 * 0xa0 + 0x10) <=
          *(uint *)(*param_4 + 0x30 + uVar8 * 0xa0 + 0x10)) {
        puVar5 = param_2;
        puVar13 = puVar13 + -1;
        uVar9 = uVar8;
      }
      *(ulong *)((long)param_3 + lVar15 + -8) = uVar9;
      param_2 = puVar5;
      lVar15 = lVar15 + -8;
    } while (puVar13 != param_7);
  }
  return;
}


// ===== 008a3a78  FUN_008a3a78 =====

undefined1  [16] FUN_008a3a78(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  size_t __n;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  
  puVar5 = param_3;
  if ((param_1 != param_2) && (puVar5 = param_1, param_2 != param_3)) {
    if (param_1 + 1 == param_2) {
      uVar2 = *param_1;
      memmove(param_1,param_1 + 1,(long)param_3 - (long)param_2);
      puVar5 = (undefined8 *)((long)param_1 + ((long)param_3 - (long)param_2));
      *puVar5 = uVar2;
    }
    else if (param_2 + 1 == param_3) {
      uVar2 = param_3[-1];
      __n = (long)(param_3 + -1) - (long)param_1;
      memmove((void *)((long)param_3 - __n),param_1,__n);
      *param_1 = uVar2;
      puVar5 = (undefined8 *)((long)param_3 - __n);
    }
    else {
      lVar12 = (long)param_2 - (long)param_1 >> 3;
      lVar11 = (long)param_3 - (long)param_2 >> 3;
      lVar7 = lVar11;
      if (lVar12 <= lVar11) {
        lVar7 = lVar12;
      }
      while (puVar1 = puVar5, 0 < lVar7) {
        while (lVar11 < lVar12) {
          lVar7 = lVar12;
          do {
            lVar12 = lVar7 - lVar11;
            if (lVar12 * 8 + lVar7 * -8 != 0) {
              puVar5 = puVar1 + lVar7;
              puVar16 = puVar1 + lVar12;
              uVar15 = (long)puVar5 + (-8 - (long)puVar16);
              puVar6 = puVar5;
              if (0x97 < uVar15) {
                puVar4 = (undefined8 *)((long)puVar16 + (uVar15 & 0xfffffffffffffff8));
                puVar9 = (undefined8 *)((long)puVar5 + (uVar15 & 0xfffffffffffffff8));
                if ((puVar16 <= puVar4 && puVar5 <= puVar9) &&
                   ((puVar9 + 1 <= puVar16 || (puVar4 + 1 <= puVar5)))) {
                  puVar6 = puVar5 + 2;
                  uVar15 = (uVar15 >> 3) + 1;
                  uVar3 = uVar15 & 0x3ffffffffffffffc;
                  puVar4 = puVar16 + 2;
                  uVar8 = (lVar11 * 8 - 8U >> 3) + 1 & 0x3ffffffffffffffc;
                  do {
                    uVar2 = puVar6[-2];
                    uVar19 = puVar6[1];
                    uVar18 = *puVar6;
                    uVar8 = uVar8 - 4;
                    uVar21 = puVar4[-1];
                    uVar20 = puVar4[-2];
                    uVar23 = puVar4[1];
                    uVar22 = *puVar4;
                    puVar4[-1] = puVar6[-1];
                    puVar4[-2] = uVar2;
                    puVar4[1] = uVar19;
                    *puVar4 = uVar18;
                    puVar4 = puVar4 + 4;
                    puVar6[-1] = uVar21;
                    puVar6[-2] = uVar20;
                    puVar6[1] = uVar23;
                    *puVar6 = uVar22;
                    puVar6 = puVar6 + 4;
                  } while (uVar8 != 0);
                  puVar6 = puVar5 + uVar3;
                  puVar16 = puVar16 + uVar3;
                  if (uVar15 == uVar3) goto LAB_008a3b14;
                }
              }
              do {
                uVar2 = *puVar16;
                puVar4 = puVar16 + 1;
                *puVar16 = *puVar6;
                *puVar6 = uVar2;
                puVar6 = puVar6 + 1;
                puVar16 = puVar4;
              } while (puVar4 != puVar5);
            }
LAB_008a3b14:
            lVar7 = lVar12;
          } while (lVar11 < lVar12);
          if (lVar12 < 1) goto LAB_008a3d14;
        }
        lVar14 = lVar12 * 8;
        lVar13 = 0;
        puVar16 = puVar1 + 2;
        puVar5 = puVar1;
        do {
          if (lVar14 != 0) {
            lVar7 = (-8 - (long)puVar1) + lVar12 * -8 * lVar13;
            puVar6 = puVar5 + lVar12;
            uVar15 = (long)puVar6 + lVar7;
            if (((uVar15 < 0x88) ||
                ((undefined8 *)((long)puVar5 + (uVar15 & 0xfffffffffffffff8)) < puVar5 ||
                 (undefined8 *)((long)puVar6 + (uVar15 & 0xfffffffffffffff8)) < puVar6)) ||
               ((uVar8 = (long)puVar6 + lVar7 & 0xfffffffffffffff8,
                puVar5 < (undefined8 *)((long)puVar6 + uVar8 + 8) &&
                (puVar6 < (undefined8 *)((long)puVar1 + uVar8 + lVar14 * lVar13 + 8))))) {
              puVar4 = puVar5 + lVar12;
              puVar9 = puVar5;
            }
            else {
              puVar10 = puVar6 + 2;
              uVar15 = (uVar15 >> 3) + 1;
              uVar3 = uVar15 & 0x3ffffffffffffffc;
              puVar4 = puVar6 + uVar3;
              puVar9 = puVar5 + uVar3;
              uVar8 = (lVar14 - 8U >> 3) + 1 & 0x3ffffffffffffffc;
              puVar17 = puVar16;
              do {
                uVar2 = puVar10[-2];
                uVar19 = puVar10[1];
                uVar18 = *puVar10;
                uVar8 = uVar8 - 4;
                uVar21 = puVar17[-1];
                uVar20 = puVar17[-2];
                uVar23 = puVar17[1];
                uVar22 = *puVar17;
                puVar17[-1] = puVar10[-1];
                puVar17[-2] = uVar2;
                puVar17[1] = uVar19;
                *puVar17 = uVar18;
                puVar17 = puVar17 + 4;
                puVar10[-1] = uVar21;
                puVar10[-2] = uVar20;
                puVar10[1] = uVar23;
                *puVar10 = uVar22;
                puVar10 = puVar10 + 4;
              } while (uVar8 != 0);
              if (uVar15 == uVar3) goto LAB_008a3c1c;
            }
            do {
              uVar2 = *puVar9;
              puVar10 = puVar9 + 1;
              *puVar9 = *puVar4;
              *puVar4 = uVar2;
              puVar4 = puVar4 + 1;
              puVar9 = puVar10;
            } while (puVar10 != puVar6);
          }
LAB_008a3c1c:
          lVar11 = lVar11 - lVar12;
          puVar5 = puVar5 + lVar12;
          lVar13 = lVar13 + 1;
          puVar16 = puVar16 + lVar12;
          lVar7 = lVar11;
        } while (lVar12 <= lVar11);
      }
LAB_008a3d14:
      puVar5 = (undefined8 *)(((long)param_3 - (long)param_2) + (long)param_1);
    }
  }
  auVar24._8_8_ = param_3;
  auVar24._0_8_ = puVar5;
  return auVar24;
}


// ===== 008a3d88  FUN_008a3d88 =====

void FUN_008a3d88(ulong *param_1,uint param_2,uint param_3)

{
  *param_1 = (ulong)param_2;
  param_1[1] = (ulong)(double)param_3;
  return;
}


// ===== 008a3da0  FUN_008a3da0 =====

void FUN_008a3da0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  *param_2 = param_3;
  param_2[1] = param_1;
  return;
}


// ===== 008a3db0  FUN_008a3db0 =====

void FUN_008a3db0(void)

{
  return;
}


// ===== 008a3db8  FUN_008a3db8 =====

void FUN_008a3db8(long *param_1,ulong param_2,uint param_3)

{
  ulong local_20;
  double local_18;
  
  local_18 = (double)param_3;
  local_20 = param_2 & 0xffffffff;
  (**(code **)(*param_1 + 0x18))(param_1,&local_20);
  return;
}


// ===== 008a3df8  FUN_008a3df8 =====

void FUN_008a3df8(void)

{
  return;
}


// ===== 008a3e00  FUN_008a3e00 =====

undefined8 FUN_008a3e00(byte *param_1,ulong param_2,uint *param_3)

{
  int iVar1;
  byte *pbVar2;
  long lVar3;
  byte bVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  undefined8 uVar9;
  char *pcVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  
  if (param_2 < 3) {
    uVar8 = FUN_004022fc();
    if ((uVar8 & 1) != 0) {
      return 0;
    }
    pcVar10 = "Failed to get QP, invalid length.";
    uVar9 = 0x50a;
    goto LAB_008a3e3c;
  }
  bVar4 = *param_1;
  uVar17 = ((uint)param_1[2] << 0x10 | (uint)param_1[1] << 8 | (uint)bVar4) >> 5;
  lVar3 = 10;
  if ((bVar4 & 1) != 0) {
    lVar3 = 3;
  }
  if (param_2 < lVar3 + (ulong)uVar17) {
    uVar8 = FUN_004022fc();
    if ((uVar8 & 1) != 0) {
      return 0;
    }
    FUN_00623bb0(&DAT_001f6643,"../../modules/video_coding/utility/vp8_header_parser.cc",0x572,
                 "Failed to get QP, invalid length: ",param_2);
    return 0;
  }
  param_1 = param_1 + lVar3;
  pbVar2 = param_1 + uVar17;
  if (uVar17 == 0) {
    uVar17 = 0;
    if (param_1 != pbVar2) goto LAB_008a3ecc;
LAB_008a3f28:
    pbVar11 = pbVar2;
    if ((bVar4 & 1) == 0) goto LAB_008a3ed8;
LAB_008a3f30:
    uVar13 = 0;
    uVar15 = 0xff;
  }
  else {
    pbVar11 = param_1 + 1;
    uVar17 = (uint)*param_1 << 8;
    param_1 = pbVar11;
    if (pbVar11 == pbVar2) goto LAB_008a3f28;
LAB_008a3ecc:
    uVar17 = uVar17 | *param_1;
    pbVar11 = param_1 + 1;
    if ((bVar4 & 1) != 0) goto LAB_008a3f30;
LAB_008a3ed8:
    uVar13 = uVar17 >> 0xf;
    iVar14 = 0xfe;
    if (uVar13 == 0) {
      iVar14 = 0x80;
    }
    uVar18 = uVar17 * 2 - 0x10000;
    if (uVar13 == 0) {
      uVar18 = uVar17;
    }
    uVar16 = (iVar14 * 0x80 - 0x80U >> 8) + 1;
    uVar17 = uVar18 + uVar16 * -0x100;
    pbVar12 = pbVar11;
    if ((uVar18 < uVar16 * 0x100) ||
       (uVar15 = iVar14 - uVar16, uVar18 = uVar17, uVar16 = uVar15, uVar15 < 0x80)) {
      do {
        uVar13 = uVar13 + 1;
        uVar17 = uVar18 << 1;
        pbVar11 = pbVar12;
        if (uVar13 == 8) {
          if (pbVar12 == pbVar2) {
            uVar13 = 0;
          }
          else {
            pbVar11 = pbVar12 + 1;
            uVar13 = 0;
            uVar17 = uVar17 | *pbVar12;
          }
        }
        uVar15 = uVar16 << 1;
        bVar7 = uVar16 < 0x40;
        pbVar12 = pbVar11;
        uVar18 = uVar17;
        uVar16 = uVar15;
      } while (bVar7);
    }
  }
  uVar16 = uVar15 * 0x80 - 0x80 >> 8;
  iVar14 = uVar16 + 1;
  uVar18 = iVar14 * 0x100;
  uVar15 = uVar15 - iVar14;
  if (uVar17 < uVar18) {
    uVar15 = uVar16 + 1;
  }
  uVar16 = 0;
  if (uVar17 >= uVar18) {
    uVar16 = uVar18;
  }
  uVar16 = uVar17 - uVar16;
  pbVar12 = pbVar11;
  uVar19 = uVar15;
  if (uVar15 < 0x80) {
    do {
      uVar13 = uVar13 + 1;
      uVar16 = uVar16 << 1;
      pbVar11 = pbVar12;
      if (uVar13 == 8) {
        if (pbVar12 == pbVar2) {
          uVar13 = 0;
        }
        else {
          pbVar11 = pbVar12 + 1;
          uVar13 = 0;
          uVar16 = uVar16 | *pbVar12;
        }
      }
      uVar15 = uVar19 << 1;
      bVar7 = uVar19 < 0x40;
      pbVar12 = pbVar11;
      uVar19 = uVar15;
    } while (bVar7);
  }
  if (uVar18 <= uVar17) {
    uVar18 = uVar15 * 0x80 - 0x80 >> 8;
    iVar14 = uVar18 + 1;
    uVar17 = iVar14 * 0x100;
    uVar15 = uVar15 - iVar14;
    if (uVar16 < uVar17) {
      uVar15 = uVar18 + 1;
    }
    uVar18 = 0;
    if (uVar16 >= uVar17) {
      uVar18 = uVar17;
    }
    uVar18 = uVar16 - uVar18;
    pbVar12 = pbVar11;
    uVar19 = uVar15;
    if (uVar15 < 0x80) {
      do {
        uVar13 = uVar13 + 1;
        uVar18 = uVar18 << 1;
        pbVar11 = pbVar12;
        if (uVar13 == 8) {
          if (pbVar12 == pbVar2) {
            uVar13 = 0;
          }
          else {
            pbVar11 = pbVar12 + 1;
            uVar13 = 0;
            uVar18 = uVar18 | *pbVar12;
          }
        }
        uVar15 = uVar19 << 1;
        bVar7 = uVar19 < 0x40;
        pbVar12 = pbVar11;
        uVar19 = uVar15;
      } while (bVar7);
    }
    uVar21 = uVar15 * 0x80 - 0x80 >> 8;
    iVar14 = uVar21 + 1;
    uVar19 = iVar14 * 0x100;
    uVar15 = uVar15 - iVar14;
    if (uVar18 < uVar19) {
      uVar15 = uVar21 + 1;
    }
    uVar21 = 0;
    if (uVar18 >= uVar19) {
      uVar21 = uVar19;
    }
    uVar21 = uVar18 - uVar21;
    pbVar12 = pbVar11;
    uVar22 = uVar15;
    if (uVar15 < 0x80) {
      do {
        uVar13 = uVar13 + 1;
        uVar21 = uVar21 << 1;
        pbVar11 = pbVar12;
        if (uVar13 == 8) {
          if (pbVar12 == pbVar2) {
            uVar13 = 0;
          }
          else {
            pbVar11 = pbVar12 + 1;
            uVar13 = 0;
            uVar21 = uVar21 | *pbVar12;
          }
        }
        uVar15 = uVar22 << 1;
        bVar7 = uVar22 < 0x40;
        pbVar12 = pbVar11;
        uVar22 = uVar15;
      } while (bVar7);
    }
    if (uVar19 <= uVar18) {
      uVar19 = uVar15 * 0x80 - 0x80 >> 8;
      iVar14 = uVar19 + 1;
      uVar18 = iVar14 * 0x100;
      uVar15 = uVar15 - iVar14;
      if (uVar21 < uVar18) {
        uVar15 = uVar19 + 1;
      }
      uVar19 = 0;
      if (uVar21 >= uVar18) {
        uVar19 = uVar18;
      }
      uVar21 = uVar21 - uVar19;
      pbVar12 = pbVar11;
      uVar18 = uVar15;
      if (uVar15 < 0x80) {
        do {
          uVar13 = uVar13 + 1;
          uVar21 = uVar21 << 1;
          pbVar11 = pbVar12;
          if (uVar13 == 8) {
            if (pbVar12 == pbVar2) {
              uVar13 = 0;
            }
            else {
              pbVar11 = pbVar12 + 1;
              uVar13 = 0;
              uVar21 = uVar21 | *pbVar12;
            }
          }
          uVar15 = uVar18 << 1;
          bVar7 = uVar18 < 0x40;
          pbVar12 = pbVar11;
          uVar18 = uVar15;
        } while (bVar7);
      }
      iVar14 = 0;
      do {
        uVar19 = uVar15 * 0x80 - 0x80 >> 8;
        iVar20 = uVar19 + 1;
        uVar18 = iVar20 * 0x100;
        uVar15 = uVar15 - iVar20;
        if (uVar21 < uVar18) {
          uVar15 = uVar19 + 1;
        }
        uVar19 = 0;
        if (uVar21 >= uVar18) {
          uVar19 = uVar18;
        }
        uVar19 = uVar21 - uVar19;
        pbVar12 = pbVar11;
        uVar22 = uVar15;
        if (uVar15 < 0x80) {
          do {
            uVar13 = uVar13 + 1;
            uVar19 = uVar19 << 1;
            pbVar11 = pbVar12;
            if (uVar13 == 8) {
              if (pbVar12 == pbVar2) {
                uVar13 = 0;
              }
              else {
                pbVar11 = pbVar12 + 1;
                uVar13 = 0;
                uVar19 = uVar19 | *pbVar12;
              }
            }
            uVar15 = uVar22 << 1;
            bVar7 = uVar22 < 0x40;
            pbVar12 = pbVar11;
            uVar22 = uVar15;
          } while (bVar7);
        }
        bVar7 = uVar18 <= uVar21;
        uVar21 = uVar19;
        if (bVar7) {
          iVar20 = 7;
          uVar18 = uVar19;
          do {
            uVar22 = uVar15 * 0x80 - 0x80 >> 8;
            iVar1 = uVar22 + 1;
            uVar15 = uVar15 - iVar1;
            uVar21 = uVar18 + iVar1 * -0x100;
            uVar5 = uVar21;
            if (uVar18 < (uint)(iVar1 * 0x100)) {
              uVar15 = uVar22 + 1;
              uVar21 = uVar18;
              uVar5 = uVar19;
            }
            uVar19 = uVar5;
            uVar18 = uVar21;
            uVar22 = uVar15;
            if (uVar15 < 0x80) {
              do {
                uVar13 = uVar13 + 1;
                uVar19 = uVar21 << 1;
                if (uVar13 == 8) {
                  if (pbVar11 == pbVar2) {
                    uVar13 = 0;
                  }
                  else {
                    uVar13 = 0;
                    uVar19 = uVar19 | *pbVar11;
                    pbVar11 = pbVar11 + 1;
                  }
                }
                uVar15 = uVar22 << 1;
                bVar7 = uVar22 < 0x40;
                uVar21 = uVar19;
                uVar18 = uVar19;
                uVar22 = uVar15;
              } while (bVar7);
            }
            iVar20 = iVar20 + -1;
          } while (iVar20 != 0);
          uVar22 = uVar15 * 0x80 - 0x80 >> 8;
          iVar20 = uVar22 + 1;
          uVar15 = uVar15 - iVar20;
          uVar5 = uVar18 + iVar20 * -0x100;
          uVar21 = uVar5;
          if (uVar18 < (uint)(iVar20 * 0x100)) {
            uVar15 = uVar22 + 1;
            uVar21 = uVar19;
          }
          if (uVar15 < 0x80) {
            pbVar12 = pbVar11;
            uVar19 = uVar15;
            if ((uint)(iVar20 * 0x100) <= uVar18) {
              uVar18 = uVar5;
            }
            do {
              uVar13 = uVar13 + 1;
              uVar21 = uVar18 << 1;
              pbVar11 = pbVar12;
              if (uVar13 == 8) {
                if (pbVar12 == pbVar2) {
                  uVar13 = 0;
                }
                else {
                  pbVar11 = pbVar12 + 1;
                  uVar13 = 0;
                  uVar21 = uVar21 | *pbVar12;
                }
              }
              uVar15 = uVar19 << 1;
              bVar7 = uVar19 < 0x40;
              pbVar12 = pbVar11;
              uVar18 = uVar21;
              uVar19 = uVar15;
            } while (bVar7);
          }
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 != 4);
      iVar14 = 0;
      do {
        uVar19 = uVar15 * 0x80 - 0x80 >> 8;
        iVar20 = uVar19 + 1;
        uVar18 = iVar20 * 0x100;
        uVar15 = uVar15 - iVar20;
        if (uVar21 < uVar18) {
          uVar15 = uVar19 + 1;
        }
        uVar19 = 0;
        if (uVar21 >= uVar18) {
          uVar19 = uVar18;
        }
        uVar19 = uVar21 - uVar19;
        pbVar12 = pbVar11;
        uVar22 = uVar15;
        if (uVar15 < 0x80) {
          do {
            uVar13 = uVar13 + 1;
            uVar19 = uVar19 << 1;
            pbVar11 = pbVar12;
            if (uVar13 == 8) {
              if (pbVar12 == pbVar2) {
                uVar13 = 0;
              }
              else {
                pbVar11 = pbVar12 + 1;
                uVar13 = 0;
                uVar19 = uVar19 | *pbVar12;
              }
            }
            uVar15 = uVar22 << 1;
            bVar7 = uVar22 < 0x40;
            pbVar12 = pbVar11;
            uVar22 = uVar15;
          } while (bVar7);
        }
        bVar7 = uVar18 <= uVar21;
        uVar21 = uVar19;
        if (bVar7) {
          iVar20 = 6;
          uVar18 = uVar19;
          do {
            uVar22 = uVar15 * 0x80 - 0x80 >> 8;
            iVar1 = uVar22 + 1;
            uVar15 = uVar15 - iVar1;
            uVar21 = uVar18 + iVar1 * -0x100;
            uVar5 = uVar21;
            if (uVar18 < (uint)(iVar1 * 0x100)) {
              uVar15 = uVar22 + 1;
              uVar21 = uVar18;
              uVar5 = uVar19;
            }
            uVar18 = uVar21;
            uVar19 = uVar5;
            uVar22 = uVar15;
            if (uVar15 < 0x80) {
              do {
                uVar13 = uVar13 + 1;
                uVar18 = uVar21 << 1;
                if (uVar13 == 8) {
                  if (pbVar11 == pbVar2) {
                    uVar13 = 0;
                  }
                  else {
                    uVar13 = 0;
                    uVar18 = uVar18 | *pbVar11;
                    pbVar11 = pbVar11 + 1;
                  }
                }
                uVar15 = uVar22 << 1;
                bVar7 = uVar22 < 0x40;
                uVar21 = uVar18;
                uVar19 = uVar18;
                uVar22 = uVar15;
              } while (bVar7);
            }
            iVar20 = iVar20 + -1;
          } while (iVar20 != 0);
          uVar22 = uVar15 * 0x80 - 0x80 >> 8;
          iVar20 = uVar22 + 1;
          uVar15 = uVar15 - iVar20;
          uVar5 = uVar18 + iVar20 * -0x100;
          uVar21 = uVar5;
          if (uVar18 < (uint)(iVar20 * 0x100)) {
            uVar15 = uVar22 + 1;
            uVar21 = uVar19;
          }
          if (uVar15 < 0x80) {
            pbVar12 = pbVar11;
            uVar19 = uVar15;
            if ((uint)(iVar20 * 0x100) <= uVar18) {
              uVar18 = uVar5;
            }
            do {
              uVar13 = uVar13 + 1;
              uVar21 = uVar18 << 1;
              pbVar11 = pbVar12;
              if (uVar13 == 8) {
                if (pbVar12 == pbVar2) {
                  uVar13 = 0;
                }
                else {
                  pbVar11 = pbVar12 + 1;
                  uVar13 = 0;
                  uVar21 = uVar21 | *pbVar12;
                }
              }
              uVar15 = uVar19 << 1;
              bVar7 = uVar19 < 0x40;
              pbVar12 = pbVar11;
              uVar18 = uVar21;
              uVar19 = uVar15;
            } while (bVar7);
          }
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 != 4);
    }
    bVar7 = uVar17 <= uVar16;
    uVar16 = uVar21;
    if (bVar7) {
      iVar14 = 0;
      do {
        uVar19 = uVar15 * 0x80 - 0x80 >> 8;
        iVar20 = uVar19 + 1;
        uVar18 = uVar15 - iVar20;
        uVar17 = uVar21 + iVar20 * -0x100;
        uVar15 = uVar17;
        if (uVar21 < (uint)(iVar20 * 0x100)) {
          uVar18 = uVar19 + 1;
          uVar17 = uVar21;
          uVar15 = uVar16;
        }
        pbVar12 = pbVar11;
        uVar16 = uVar15;
        uVar15 = uVar18;
        if (uVar18 < 0x80) {
          do {
            uVar13 = uVar13 + 1;
            uVar17 = uVar17 << 1;
            pbVar11 = pbVar12;
            if (uVar13 == 8) {
              if (pbVar12 == pbVar2) {
                uVar13 = 0;
              }
              else {
                pbVar11 = pbVar12 + 1;
                uVar13 = 0;
                uVar17 = uVar17 | *pbVar12;
              }
            }
            uVar15 = uVar18 << 1;
            bVar7 = uVar18 < 0x40;
            pbVar12 = pbVar11;
            uVar16 = uVar17;
            uVar18 = uVar15;
          } while (bVar7);
        }
        bVar7 = (uint)(iVar20 * 0x100) <= uVar21;
        uVar21 = uVar17;
        if (bVar7) {
          iVar20 = 8;
          uVar18 = uVar17;
          do {
            uVar22 = uVar15 * 0x80 - 0x80 >> 8;
            iVar1 = uVar22 + 1;
            uVar15 = uVar15 - iVar1;
            uVar19 = uVar17 + iVar1 * -0x100;
            uVar21 = uVar19;
            uVar5 = uVar19;
            if (uVar17 < (uint)(iVar1 * 0x100)) {
              uVar15 = uVar22 + 1;
              uVar19 = uVar17;
              uVar21 = uVar18;
              uVar5 = uVar16;
            }
            uVar16 = uVar5;
            pbVar12 = pbVar11;
            uVar17 = uVar19;
            uVar18 = uVar15;
            if (uVar15 < 0x80) {
              do {
                uVar13 = uVar13 + 1;
                uVar21 = uVar19 << 1;
                pbVar11 = pbVar12;
                if (uVar13 == 8) {
                  if (pbVar12 == pbVar2) {
                    uVar13 = 0;
                  }
                  else {
                    pbVar11 = pbVar12 + 1;
                    uVar13 = 0;
                    uVar21 = uVar21 | *pbVar12;
                  }
                }
                uVar15 = uVar18 << 1;
                bVar7 = uVar18 < 0x40;
                pbVar12 = pbVar11;
                uVar17 = uVar21;
                uVar19 = uVar21;
                uVar16 = uVar21;
                uVar18 = uVar15;
              } while (bVar7);
            }
            iVar20 = iVar20 + -1;
            uVar18 = uVar21;
          } while (iVar20 != 0);
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 != 3);
    }
  }
  uVar18 = uVar15 * 0x80 - 0x80 >> 8;
  iVar14 = uVar18 + 1;
  uVar17 = iVar14 * 0x100;
  uVar15 = uVar15 - iVar14;
  if (uVar16 < uVar17) {
    uVar15 = uVar18 + 1;
  }
  uVar18 = 0;
  if (uVar16 >= uVar17) {
    uVar18 = uVar17;
  }
  uVar16 = uVar16 - uVar18;
  pbVar12 = pbVar11;
  uVar17 = uVar15;
  if (uVar15 < 0x80) {
    do {
      uVar13 = uVar13 + 1;
      uVar16 = uVar16 << 1;
      pbVar11 = pbVar12;
      if (uVar13 == 8) {
        if (pbVar12 == pbVar2) {
          uVar13 = 0;
        }
        else {
          pbVar11 = pbVar12 + 1;
          uVar13 = 0;
          uVar16 = uVar16 | *pbVar12;
        }
      }
      uVar15 = uVar17 << 1;
      bVar7 = uVar17 < 0x40;
      pbVar12 = pbVar11;
      uVar17 = uVar15;
    } while (bVar7);
  }
  iVar14 = 6;
  uVar17 = uVar16;
  do {
    uVar19 = uVar15 * 0x80 - 0x80 >> 8;
    iVar20 = uVar19 + 1;
    uVar15 = uVar15 - iVar20;
    uVar18 = uVar17 + iVar20 * -0x100;
    uVar21 = uVar18;
    if (uVar17 < (uint)(iVar20 * 0x100)) {
      uVar15 = uVar19 + 1;
      uVar18 = uVar17;
      uVar21 = uVar16;
    }
    uVar16 = uVar21;
    pbVar12 = pbVar11;
    uVar19 = uVar15;
    uVar17 = uVar18;
    if (uVar15 < 0x80) {
      do {
        uVar13 = uVar13 + 1;
        uVar16 = uVar18 << 1;
        pbVar11 = pbVar12;
        if (uVar13 == 8) {
          if (pbVar12 == pbVar2) {
            uVar13 = 0;
          }
          else {
            pbVar11 = pbVar12 + 1;
            uVar13 = 0;
            uVar16 = uVar16 | *pbVar12;
          }
        }
        uVar15 = uVar19 << 1;
        bVar7 = uVar19 < 0x40;
        pbVar12 = pbVar11;
        uVar18 = uVar16;
        uVar19 = uVar15;
        uVar17 = uVar16;
      } while (bVar7);
    }
    iVar14 = iVar14 + -1;
  } while (iVar14 != 0);
  uVar21 = uVar15 * 0x80 - 0x80 >> 8;
  iVar14 = uVar21 + 1;
  uVar15 = uVar15 - iVar14;
  uVar18 = uVar17 + iVar14 * -0x100;
  uVar19 = uVar18;
  if (uVar17 < (uint)(iVar14 * 0x100)) {
    uVar15 = uVar21 + 1;
    uVar18 = uVar17;
    uVar19 = uVar16;
  }
  pbVar12 = pbVar11;
  uVar17 = uVar15;
  if (uVar15 < 0x80) {
    do {
      uVar13 = uVar13 + 1;
      uVar19 = uVar18 << 1;
      pbVar11 = pbVar12;
      if (uVar13 == 8) {
        if (pbVar12 == pbVar2) {
          uVar13 = 0;
        }
        else {
          pbVar11 = pbVar12 + 1;
          uVar13 = 0;
          uVar19 = uVar19 | *pbVar12;
        }
      }
      uVar15 = uVar17 << 1;
      bVar7 = uVar17 < 0x40;
      pbVar12 = pbVar11;
      uVar18 = uVar19;
      uVar17 = uVar15;
    } while (bVar7);
  }
  uVar21 = uVar15 * 0x80 - 0x80 >> 8;
  iVar14 = uVar21 + 1;
  uVar15 = uVar15 - iVar14;
  uVar17 = uVar18 + iVar14 * -0x100;
  uVar16 = uVar17;
  if (uVar18 < (uint)(iVar14 * 0x100)) {
    uVar15 = uVar21 + 1;
    uVar17 = uVar18;
    uVar16 = uVar19;
  }
  pbVar12 = pbVar11;
  uVar18 = uVar15;
  if (uVar15 < 0x80) {
    do {
      uVar13 = uVar13 + 1;
      uVar16 = uVar17 << 1;
      pbVar11 = pbVar12;
      if (uVar13 == 8) {
        if (pbVar12 == pbVar2) {
          uVar13 = 0;
        }
        else {
          pbVar11 = pbVar12 + 1;
          uVar13 = 0;
          uVar16 = uVar16 | *pbVar12;
        }
      }
      uVar15 = uVar18 << 1;
      bVar7 = uVar18 < 0x40;
      pbVar12 = pbVar11;
      uVar17 = uVar16;
      uVar18 = uVar15;
    } while (bVar7);
  }
  uVar21 = uVar15 * 0x80 - 0x80 >> 8;
  iVar14 = uVar21 + 1;
  uVar15 = uVar15 - iVar14;
  uVar18 = uVar17 + iVar14 * -0x100;
  uVar19 = uVar18;
  if (uVar17 < (uint)(iVar14 * 0x100)) {
    uVar15 = uVar21 + 1;
    uVar18 = uVar17;
    uVar19 = uVar16;
  }
  pbVar12 = pbVar11;
  uVar17 = uVar15;
  if (uVar15 < 0x80) {
    do {
      uVar13 = uVar13 + 1;
      uVar19 = uVar18 << 1;
      pbVar11 = pbVar12;
      if (uVar13 == 8) {
        if (pbVar12 == pbVar2) {
          uVar13 = 0;
        }
        else {
          pbVar11 = pbVar12 + 1;
          uVar13 = 0;
          uVar19 = uVar19 | *pbVar12;
        }
      }
      uVar15 = uVar17 << 1;
      bVar7 = uVar17 < 0x40;
      pbVar12 = pbVar11;
      uVar18 = uVar19;
      uVar17 = uVar15;
    } while (bVar7);
  }
  uVar21 = uVar15 * 0x80 - 0x80 >> 8;
  iVar14 = uVar21 + 1;
  uVar15 = uVar15 - iVar14;
  uVar17 = uVar18 + iVar14 * -0x100;
  uVar16 = uVar17;
  if (uVar18 < (uint)(iVar14 * 0x100)) {
    uVar15 = uVar21 + 1;
    uVar17 = uVar18;
    uVar16 = uVar19;
  }
  pbVar12 = pbVar11;
  uVar19 = uVar15;
  if (uVar15 < 0x80) {
    do {
      uVar13 = uVar13 + 1;
      uVar16 = uVar17 << 1;
      pbVar11 = pbVar12;
      if (uVar13 == 8) {
        if (pbVar12 == pbVar2) {
          uVar13 = 0;
        }
        else {
          pbVar11 = pbVar12 + 1;
          uVar13 = 0;
          uVar16 = uVar16 | *pbVar12;
        }
      }
      uVar19 = uVar15 << 1;
      bVar7 = uVar15 < 0x40;
      pbVar12 = pbVar11;
      uVar17 = uVar16;
      uVar15 = uVar19;
    } while (bVar7);
  }
  if ((uint)(iVar14 * 0x100) <= uVar18) {
    uVar22 = uVar19 * 0x80 - 0x80 >> 8;
    iVar14 = uVar22 + 1;
    uVar21 = iVar14 * 0x100;
    uVar18 = uVar19 - iVar14;
    uVar5 = uVar17 + iVar14 * -0x100;
    uVar15 = uVar5;
    if (uVar17 < uVar21) {
      uVar18 = uVar22 + 1;
      uVar15 = uVar16;
    }
    uVar16 = uVar15;
    uVar19 = uVar18;
    if (uVar18 < 0x80) {
      pbVar12 = pbVar11;
      uVar16 = uVar17;
      if (uVar21 <= uVar17) {
        uVar16 = uVar5;
      }
      do {
        uVar13 = uVar13 + 1;
        uVar16 = uVar16 << 1;
        pbVar11 = pbVar12;
        if (uVar13 == 8) {
          if (pbVar12 == pbVar2) {
            uVar13 = 0;
          }
          else {
            pbVar11 = pbVar12 + 1;
            uVar13 = 0;
            uVar16 = uVar16 | *pbVar12;
          }
        }
        uVar19 = uVar18 << 1;
        bVar7 = uVar18 < 0x40;
        pbVar12 = pbVar11;
        uVar18 = uVar19;
      } while (bVar7);
    }
    if (uVar21 <= uVar17) {
      iVar14 = 0;
      do {
        uVar15 = uVar19 * 0x80 - 0x80 >> 8;
        iVar20 = uVar15 + 1;
        uVar17 = iVar20 * 0x100;
        uVar19 = uVar19 - iVar20;
        if (uVar16 < uVar17) {
          uVar19 = uVar15 + 1;
        }
        uVar15 = 0;
        if (uVar16 >= uVar17) {
          uVar15 = uVar17;
        }
        uVar15 = uVar16 - uVar15;
        pbVar12 = pbVar11;
        uVar18 = uVar19;
        if (uVar19 < 0x80) {
          do {
            uVar13 = uVar13 + 1;
            uVar15 = uVar15 << 1;
            pbVar11 = pbVar12;
            if (uVar13 == 8) {
              if (pbVar12 == pbVar2) {
                uVar13 = 0;
              }
              else {
                pbVar11 = pbVar12 + 1;
                uVar13 = 0;
                uVar15 = uVar15 | *pbVar12;
              }
            }
            uVar19 = uVar18 << 1;
            bVar7 = uVar18 < 0x40;
            pbVar12 = pbVar11;
            uVar18 = uVar19;
          } while (bVar7);
        }
        bVar7 = uVar17 <= uVar16;
        uVar16 = uVar15;
        if (bVar7) {
          iVar20 = 6;
          uVar17 = uVar15;
          do {
            uVar16 = uVar19 * 0x80 - 0x80 >> 8;
            iVar1 = uVar16 + 1;
            uVar19 = uVar19 - iVar1;
            uVar18 = uVar17 + iVar1 * -0x100;
            uVar21 = uVar18;
            if (uVar17 < (uint)(iVar1 * 0x100)) {
              uVar19 = uVar16 + 1;
              uVar18 = uVar17;
              uVar21 = uVar15;
            }
            uVar15 = uVar21;
            uVar16 = uVar19;
            uVar17 = uVar18;
            if (uVar19 < 0x80) {
              do {
                uVar13 = uVar13 + 1;
                uVar15 = uVar18 << 1;
                if (uVar13 == 8) {
                  if (pbVar11 == pbVar2) {
                    uVar13 = 0;
                  }
                  else {
                    uVar13 = 0;
                    uVar15 = uVar15 | *pbVar11;
                    pbVar11 = pbVar11 + 1;
                  }
                }
                uVar19 = uVar16 << 1;
                bVar7 = uVar16 < 0x40;
                uVar18 = uVar15;
                uVar16 = uVar19;
                uVar17 = uVar15;
              } while (bVar7);
            }
            iVar20 = iVar20 + -1;
          } while (iVar20 != 0);
          uVar18 = uVar19 * 0x80 - 0x80 >> 8;
          iVar20 = uVar18 + 1;
          uVar19 = uVar19 - iVar20;
          uVar21 = uVar17 + iVar20 * -0x100;
          uVar16 = uVar21;
          if (uVar17 < (uint)(iVar20 * 0x100)) {
            uVar19 = uVar18 + 1;
            uVar16 = uVar15;
          }
          if (uVar19 < 0x80) {
            pbVar12 = pbVar11;
            uVar15 = uVar19;
            if ((uint)(iVar20 * 0x100) <= uVar17) {
              uVar17 = uVar21;
            }
            do {
              uVar13 = uVar13 + 1;
              uVar16 = uVar17 << 1;
              pbVar11 = pbVar12;
              if (uVar13 == 8) {
                if (pbVar12 == pbVar2) {
                  uVar13 = 0;
                }
                else {
                  pbVar11 = pbVar12 + 1;
                  uVar13 = 0;
                  uVar16 = uVar16 | *pbVar12;
                }
              }
              uVar19 = uVar15 << 1;
              bVar7 = uVar15 < 0x40;
              pbVar12 = pbVar11;
              uVar17 = uVar16;
              uVar15 = uVar19;
            } while (bVar7);
          }
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 != 4);
      iVar14 = 0;
      uVar17 = uVar16;
      do {
        uVar18 = uVar19 * 0x80 - 0x80 >> 8;
        iVar20 = uVar18 + 1;
        uVar15 = iVar20 * 0x100;
        uVar19 = uVar19 - iVar20;
        if (uVar17 < uVar15) {
          uVar19 = uVar18 + 1;
        }
        uVar16 = 0;
        if (uVar17 >= uVar15) {
          uVar16 = uVar15;
        }
        uVar16 = uVar17 - uVar16;
        pbVar12 = pbVar11;
        uVar18 = uVar19;
        if (uVar19 < 0x80) {
          do {
            uVar13 = uVar13 + 1;
            uVar16 = uVar16 << 1;
            pbVar11 = pbVar12;
            if (uVar13 == 8) {
              if (pbVar12 == pbVar2) {
                uVar13 = 0;
              }
              else {
                pbVar11 = pbVar12 + 1;
                uVar13 = 0;
                uVar16 = uVar16 | *pbVar12;
              }
            }
            uVar19 = uVar18 << 1;
            bVar7 = uVar18 < 0x40;
            pbVar12 = pbVar11;
            uVar18 = uVar19;
          } while (bVar7);
        }
        if (uVar15 <= uVar17) {
          iVar20 = 6;
          uVar17 = uVar16;
          uVar15 = uVar16;
          do {
            uVar16 = uVar19 * 0x80 - 0x80 >> 8;
            iVar1 = uVar16 + 1;
            uVar19 = uVar19 - iVar1;
            uVar18 = uVar15 + iVar1 * -0x100;
            uVar21 = uVar18;
            if (uVar15 < (uint)(iVar1 * 0x100)) {
              uVar19 = uVar16 + 1;
              uVar18 = uVar15;
              uVar21 = uVar17;
            }
            uVar17 = uVar21;
            uVar16 = uVar19;
            uVar15 = uVar18;
            if (uVar19 < 0x80) {
              do {
                uVar13 = uVar13 + 1;
                uVar17 = uVar18 << 1;
                if (uVar13 == 8) {
                  if (pbVar11 == pbVar2) {
                    uVar13 = 0;
                  }
                  else {
                    uVar13 = 0;
                    uVar17 = uVar17 | *pbVar11;
                    pbVar11 = pbVar11 + 1;
                  }
                }
                uVar19 = uVar16 << 1;
                bVar7 = uVar16 < 0x40;
                uVar18 = uVar17;
                uVar16 = uVar19;
                uVar15 = uVar17;
              } while (bVar7);
            }
            iVar20 = iVar20 + -1;
          } while (iVar20 != 0);
          uVar18 = uVar19 * 0x80 - 0x80 >> 8;
          iVar20 = uVar18 + 1;
          uVar19 = uVar19 - iVar20;
          uVar21 = uVar15 + iVar20 * -0x100;
          uVar16 = uVar21;
          if (uVar15 < (uint)(iVar20 * 0x100)) {
            uVar19 = uVar18 + 1;
            uVar16 = uVar17;
          }
          if (uVar19 < 0x80) {
            pbVar12 = pbVar11;
            uVar17 = uVar19;
            if ((uint)(iVar20 * 0x100) <= uVar15) {
              uVar15 = uVar21;
            }
            do {
              uVar13 = uVar13 + 1;
              uVar16 = uVar15 << 1;
              pbVar11 = pbVar12;
              if (uVar13 == 8) {
                if (pbVar12 == pbVar2) {
                  uVar13 = 0;
                }
                else {
                  pbVar11 = pbVar12 + 1;
                  uVar13 = 0;
                  uVar16 = uVar16 | *pbVar12;
                }
              }
              uVar19 = uVar17 << 1;
              bVar7 = uVar17 < 0x40;
              pbVar12 = pbVar11;
              uVar15 = uVar16;
              uVar17 = uVar19;
            } while (bVar7);
          }
        }
        iVar14 = iVar14 + 1;
        uVar17 = uVar16;
      } while (iVar14 != 4);
    }
  }
  uVar15 = uVar19 * 0x80 - 0x80 >> 8;
  iVar14 = uVar15 + 1;
  uVar17 = iVar14 * 0x100;
  uVar19 = uVar19 - iVar14;
  if (uVar16 < uVar17) {
    uVar19 = uVar15 + 1;
  }
  uVar15 = 0;
  if (uVar16 >= uVar17) {
    uVar15 = uVar17;
  }
  uVar16 = uVar16 - uVar15;
  pbVar12 = pbVar11;
  uVar17 = uVar19;
  if (uVar19 < 0x80) {
    do {
      uVar13 = uVar13 + 1;
      uVar16 = uVar16 << 1;
      pbVar11 = pbVar12;
      if (uVar13 == 8) {
        if (pbVar12 == pbVar2) {
          uVar13 = 0;
        }
        else {
          pbVar11 = pbVar12 + 1;
          uVar13 = 0;
          uVar16 = uVar16 | *pbVar12;
        }
      }
      uVar19 = uVar17 << 1;
      bVar7 = uVar17 < 0x40;
      pbVar12 = pbVar11;
      uVar17 = uVar19;
    } while (bVar7);
  }
  uVar15 = uVar19 * 0x80 - 0x80 >> 8;
  iVar14 = uVar15 + 1;
  uVar17 = iVar14 * 0x100;
  uVar19 = uVar19 - iVar14;
  if (uVar16 < uVar17) {
    uVar19 = uVar15 + 1;
  }
  uVar15 = 0;
  if (uVar16 >= uVar17) {
    uVar15 = uVar17;
  }
  uVar16 = uVar16 - uVar15;
  pbVar12 = pbVar11;
  uVar17 = uVar19;
  if (uVar19 < 0x80) {
    do {
      uVar13 = uVar13 + 1;
      uVar16 = uVar16 << 1;
      pbVar11 = pbVar12;
      if (uVar13 == 8) {
        if (pbVar12 == pbVar2) {
          uVar13 = 0;
        }
        else {
          pbVar11 = pbVar12 + 1;
          uVar13 = 0;
          uVar16 = uVar16 | *pbVar12;
        }
      }
      uVar19 = uVar17 << 1;
      bVar7 = uVar17 < 0x40;
      pbVar12 = pbVar11;
      uVar17 = uVar19;
    } while (bVar7);
  }
  uVar17 = 0;
  iVar14 = 7;
  do {
    uVar18 = uVar19 * 0x80 - 0x80 >> 8;
    iVar20 = uVar18 + 1;
    uVar15 = iVar20 * 0x100;
    uVar19 = uVar19 - iVar20;
    bVar7 = uVar15 <= uVar16;
    if (!bVar7) {
      uVar19 = uVar18 + 1;
      uVar15 = 0;
    }
    uVar16 = uVar16 - uVar15;
    pbVar12 = pbVar11;
    uVar15 = uVar19;
    if (uVar19 < 0x80) {
      do {
        uVar13 = uVar13 + 1;
        uVar16 = uVar16 << 1;
        pbVar11 = pbVar12;
        if (uVar13 == 8) {
          if (pbVar12 == pbVar2) {
            uVar13 = 0;
          }
          else {
            pbVar11 = pbVar12 + 1;
            uVar13 = 0;
            uVar16 = uVar16 | *pbVar12;
          }
        }
        uVar19 = uVar15 << 1;
        bVar6 = uVar15 < 0x40;
        pbVar12 = pbVar11;
        uVar15 = uVar19;
      } while (bVar6);
    }
    uVar17 = (uint)bVar7 | uVar17 << 1;
    iVar14 = iVar14 + -1;
  } while (iVar14 != 0);
  if (pbVar11 != pbVar2) {
    *param_3 = uVar17;
    return 1;
  }
  uVar8 = FUN_004022fc();
  if ((uVar8 & 1) != 0) {
    return 0;
  }
  pcVar10 = "Failed to get QP, bitstream is truncated or corrupted.";
  uVar9 = 0x602;
LAB_008a3e3c:
  FUN_00623bb0(&DAT_001f4e98,"../../modules/video_coding/utility/vp8_header_parser.cc",uVar9,pcVar10
              );
  return 0;
}


// ===== 008a4e1c  FUN_008a4e1c =====

void * FUN_008a4e1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  
  puVar3 = (undefined8 *)operator_new(0x80);
  puVar1 = PTR_FUN_00d520d8;
  if ((((puVar3 != (undefined8 *)0x0) && (puVar3 != (undefined8 *)0xffffffffffffffe0)) &&
      (puVar3 != (undefined8 *)0xffffffffffffffc0)) && (puVar3 != (undefined8 *)0xffffffffffffffa0))
  {
    *puVar3 = param_1;
    puVar3[1] = param_2;
    puVar2 = PTR_FUN_00d520e0;
    puVar3[4] = param_3;
    puVar3[5] = param_4;
    puVar3[2] = puVar1;
    puVar3[3] = puVar2;
    puVar3[6] = puVar1;
    puVar3[7] = puVar2;
    puVar1 = PTR_FUN_00d520f8;
    puVar3[8] = param_5;
    puVar3[9] = param_6;
    puVar2 = PTR_FUN_00d52100;
    puVar3[10] = puVar1;
    puVar3[0xb] = puVar2;
    puVar1 = PTR_FUN_00d51f60;
    puVar3[0xc] = param_7;
    puVar3[0xd] = param_8;
    puVar2 = PTR_FUN_00d51f68;
    puVar3[0xe] = puVar1;
    puVar3[0xf] = puVar2;
    pvVar4 = operator_new(0x18);
    local_78 = puVar3;
    local_70 = puVar3 + 0x10;
    local_68 = puVar3 + 0x10;
    FUN_0066597c(pvVar4,&local_78);
    if (local_78 != (undefined8 *)0x0) {
      uVar6 = (ulong)((long)local_70 + (-0x20 - ((long)local_70 << 0x3b))) >> 5;
      uVar5 = (ulong)(((long)local_78 - (long)local_70 << 0x3b) - ((long)local_78 - (long)local_70))
              >> 5;
      if (uVar6 <= uVar5) {
        uVar5 = uVar6;
      }
      puVar3 = local_70;
      if ((1 < uVar5) && ((((int)local_78 - (int)local_70 | -(int)local_70) & 0x1fU) == 0)) {
        uVar5 = uVar5 & 0x7fffffffffffffe;
        puVar3 = local_70 + uVar5 * -4;
        do {
          uVar5 = uVar5 - 2;
        } while (uVar5 != 0);
      }
      while (puVar3 != local_78) {
        puVar3 = puVar3 + -4;
        if (puVar3 == (undefined8 *)0x0) {
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
    return pvVar4;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008a4fc4  FUN_008a4fc4 =====

void FUN_008a4fc4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 *)param_1 = 0;
  puVar1 = param_1 + 2;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  *puVar1 = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 *)((long)param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  *(undefined1 *)puVar1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  puVar1 = (undefined8 *)
           FUN_008a4e1c("QueueSize",param_1,"MinBitrate",param_1 + 1,"InitWin",puVar1,"DropFrame");
  FUN_006659ac(puVar1,param_2,param_3);
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  pvVar2 = (void *)*puVar1;
  if (pvVar2 != (void *)0x0) {
    pvVar3 = (void *)puVar1[1];
    uVar5 = (ulong)((long)pvVar3 + (-0x20 - ((long)pvVar3 << 0x3b))) >> 5;
    uVar4 = (ulong)(((long)pvVar2 - (long)pvVar3 << 0x3b) - ((long)pvVar2 - (long)pvVar3)) >> 5;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    if ((1 < uVar4) && ((((int)pvVar2 - (int)pvVar3 | -(int)pvVar3) & 0x1fU) == 0)) {
      uVar4 = uVar4 & 0x7fffffffffffffe;
      pvVar3 = (void *)((long)pvVar3 + uVar4 * -0x20);
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    while (pvVar3 != pvVar2) {
      pvVar3 = (void *)((long)pvVar3 + -0x20);
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    puVar1[1] = pvVar2;
    operator_delete(pvVar2);
  }
  operator_delete(puVar1);
  return;
}


// ===== 008a5118  FUN_008a5118 =====

void * FUN_008a5118(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                   undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                   undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  
  puVar5 = (undefined8 *)operator_new(0x140);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = 0;
    *puVar5 = 0;
    puVar5[3] = 0;
    puVar5[2] = 0;
    if (puVar5 + 4 != (undefined8 *)0x0) {
      puVar5[5] = 0;
      puVar5[4] = 0;
      puVar5[7] = 0;
      puVar5[6] = 0;
      if (puVar5 + 8 != (undefined8 *)0x0) {
        puVar5[9] = 0;
        puVar5[8] = 0;
        puVar5[0xb] = 0;
        puVar5[10] = 0;
        if (puVar5 + 0xc != (undefined8 *)0x0) {
          puVar5[0xd] = 0;
          puVar5[0xc] = 0;
          puVar5[0xf] = 0;
          puVar5[0xe] = 0;
          if (puVar5 + 0x10 != (undefined8 *)0x0) {
            puVar5[0x11] = 0;
            puVar5[0x10] = 0;
            puVar5[0x13] = 0;
            puVar5[0x12] = 0;
            if (puVar5 + 0x14 != (undefined8 *)0x0) {
              puVar5[0x15] = 0;
              puVar5[0x14] = 0;
              puVar5[0x17] = 0;
              puVar5[0x16] = 0;
              if (puVar5 + 0x18 != (undefined8 *)0x0) {
                puVar5[0x19] = 0;
                puVar5[0x18] = 0;
                puVar5[0x1b] = 0;
                puVar5[0x1a] = 0;
                if (puVar5 + 0x1c != (undefined8 *)0x0) {
                  puVar5[0x1d] = 0;
                  puVar5[0x1c] = 0;
                  puVar5[0x1f] = 0;
                  puVar5[0x1e] = 0;
                  if (puVar5 + 0x20 != (undefined8 *)0x0) {
                    puVar5[0x21] = 0;
                    puVar5[0x20] = 0;
                    puVar5[0x23] = 0;
                    puVar5[0x22] = 0;
                    puVar1 = PTR_FUN_00d51fc8;
                    if (puVar5 != (undefined8 *)0xfffffffffffffee0) {
                      *puVar5 = param_1;
                      puVar5[1] = param_2;
                      puVar2 = PTR_FUN_00d51fd0;
                      puVar5[2] = puVar1;
                      puVar5[3] = puVar2;
                      puVar1 = PTR_FUN_00d51f60;
                      puVar5[4] = param_3;
                      puVar5[5] = param_4;
                      puVar2 = PTR_FUN_00d51f68;
                      puVar5[6] = puVar1;
                      puVar5[7] = puVar2;
                      puVar3 = PTR_FUN_00d520d8;
                      puVar5[8] = param_5;
                      puVar5[9] = param_6;
                      puVar4 = PTR_FUN_00d520e0;
                      puVar5[0xc] = param_7;
                      puVar5[0xd] = param_8;
                      puVar5[0xe] = puVar3;
                      puVar5[10] = puVar3;
                      puVar5[0xb] = puVar4;
                      puVar5[0x27] = puVar2;
                      puVar5[0xf] = puVar4;
                      puVar5[0x10] = param_9;
                      puVar5[0x11] = param_10;
                      puVar5[0x12] = puVar1;
                      puVar5[0x13] = puVar2;
                      puVar5[0x14] = param_11;
                      puVar5[0x15] = param_12;
                      puVar5[0x16] = puVar1;
                      puVar5[0x17] = puVar2;
                      puVar5[0x18] = param_13;
                      puVar5[0x19] = param_14;
                      puVar5[0x1a] = puVar1;
                      puVar5[0x1b] = puVar2;
                      puVar5[0x1c] = param_15;
                      puVar5[0x1d] = param_16;
                      puVar5[0x1e] = puVar1;
                      puVar5[0x1f] = puVar2;
                      puVar5[0x20] = param_17;
                      puVar5[0x21] = param_18;
                      puVar5[0x22] = puVar1;
                      puVar5[0x23] = puVar2;
                      puVar5[0x24] = param_19;
                      puVar5[0x25] = param_20;
                      puVar5[0x26] = puVar1;
                      pvVar6 = operator_new(0x18);
                      local_78 = puVar5;
                      local_70 = puVar5 + 0x28;
                      local_68 = puVar5 + 0x28;
                      FUN_0066597c(pvVar6,&local_78);
                      if (local_78 != (undefined8 *)0x0) {
                        uVar8 = (ulong)((long)local_70 + (-0x20 - ((long)local_70 << 0x3b))) >> 5;
                        uVar7 = (ulong)(((long)local_78 - (long)local_70 << 0x3b) -
                                       ((long)local_78 - (long)local_70)) >> 5;
                        if (uVar8 <= uVar7) {
                          uVar7 = uVar8;
                        }
                        puVar5 = local_70;
                        if ((1 < uVar7) &&
                           ((((int)local_78 - (int)local_70 | -(int)local_70) & 0x1fU) == 0)) {
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
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008a5364  FUN_008a5364 =====

/* WARNING: Removing unreachable block (ram,0x008a5620) */
/* WARNING: Removing unreachable block (ram,0x008a56d8) */

void FUN_008a5364(undefined8 *param_1,long *param_2)

{
  undefined1 *puVar1;
  int *****pppppiVar2;
  undefined8 *****pppppuVar3;
  bool bVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined1 *puVar7;
  void *pvVar8;
  ulong uVar9;
  ulong uVar10;
  int ****local_a8;
  ulong uStack_a0;
  undefined7 local_98;
  byte bStack_91;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined8 ****local_80;
  undefined1 *puStack_78;
  undefined8 local_70;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)((long)param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)((long)param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0x1010101;
  *(undefined2 *)(param_1 + 10) = 0;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = (undefined8 ****)&DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*param_2 + 0x10))(&local_80,param_2,"WebRTC-CongestionWindow",0x17);
  puVar7 = (undefined1 *)(ulong)local_70._7_1_;
  puVar1 = puStack_78;
  if (-1 < (long)local_70) {
    puVar1 = puVar7;
  }
  if (puVar1 == (undefined1 *)0x0) {
    FUN_00547bf8(&local_80,"QueueSize:350,MinBitrate:30000,DropFrame:true");
    puVar7 = (undefined1 *)(ulong)local_70._7_1_;
  }
  puVar1 = puStack_78;
  pppppuVar3 = (undefined8 *****)local_80;
  if (-1 < (char)local_70._7_1_) {
    puVar1 = puVar7;
    pppppuVar3 = &local_80;
  }
  FUN_008a4fc4(&local_a8,pppppuVar3,puVar1);
  param_1[1] = uStack_a0;
  *param_1 = local_a8;
  param_1[3] = uStack_90;
  param_1[2] = CONCAT17(bStack_91,local_98);
  *(undefined1 *)(param_1 + 4) = local_88;
  (**(code **)(*param_2 + 0x10))(&local_a8,param_2,"WebRTC-UseBaseHeavyVP8TL3RateAllocation",0x27);
  uVar9 = uStack_a0;
  if (-1 < (char)bStack_91) {
    uVar9 = (ulong)bStack_91;
  }
  if (uVar9 < 7) {
    bVar4 = false;
  }
  else {
    pppppiVar2 = (int *****)local_a8;
    if (-1 < (char)bStack_91) {
      pppppiVar2 = &local_a8;
    }
    bVar4 = *(int *)pppppiVar2 == 0x62616e45 && *(int *)((long)pppppiVar2 + 3) == 0x64656c62;
  }
  if ((char)bStack_91 < '\0') {
    operator_delete(local_a8);
  }
  *(bool *)((long)param_1 + 0x51) = bVar4;
  puVar5 = (undefined8 *)
           FUN_008a5118("pacing_factor",param_1 + 5,"alr_probing",param_1 + 7,"vp8_qp_max",
                        (undefined1 *)((long)param_1 + 0x3c),"vp8_min_pixels",
                        (undefined1 *)((long)param_1 + 0x44),"trust_vp8",
                        (undefined4 *)((long)param_1 + 0x4c),"trust_vp9",
                        (undefined1 *)((long)param_1 + 0x4d),"bitrate_adjuster",
                        (undefined1 *)((long)param_1 + 0x4e),"adjuster_use_headroom",
                        (undefined1 *)((long)param_1 + 0x4f),"vp8_s0_boost",param_1 + 10,
                        "vp8_base_heavy_tl3_alloc",(undefined1 *)((long)param_1 + 0x51));
  (**(code **)(*param_2 + 0x10))(&local_a8,param_2,"WebRTC-VideoRateControl",0x17);
  if (-1 < (char)bStack_91) {
    uStack_a0 = (ulong)bStack_91;
    local_a8 = (int ****)&local_a8;
  }
  FUN_006659ac(puVar5,local_a8,uStack_a0);
  if (puVar5 != (undefined8 *)0x0) {
    pvVar6 = (void *)*puVar5;
    if (pvVar6 != (void *)0x0) {
      pvVar8 = (void *)puVar5[1];
      uVar10 = (ulong)((long)pvVar8 + (-0x20 - ((long)pvVar8 << 0x3b))) >> 5;
      uVar9 = (ulong)(((long)pvVar6 - (long)pvVar8 << 0x3b) - ((long)pvVar6 - (long)pvVar8)) >> 5;
      if (uVar10 <= uVar9) {
        uVar9 = uVar10;
      }
      if ((1 < uVar9) && ((((int)pvVar6 - (int)pvVar8 | -(int)pvVar8) & 0x1fU) == 0)) {
        uVar9 = uVar9 & 0x7fffffffffffffe;
        pvVar8 = (void *)((long)pvVar8 + uVar9 * -0x20);
        do {
          uVar9 = uVar9 - 2;
        } while (uVar9 != 0);
      }
      while (pvVar8 != pvVar6) {
        pvVar8 = (void *)((long)pvVar8 + -0x20);
        if (pvVar8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      puVar5[1] = pvVar6;
      operator_delete(pvVar6);
    }
    operator_delete(puVar5);
  }
  return;
}


// ===== 008a56ec  FUN_008a56ec =====

void FUN_008a56ec(void)

{
  return;
}


// ===== 008a56f4  FUN_008a56f4 =====

undefined1 FUN_008a56f4(long param_1)

{
  return *(undefined1 *)(param_1 + 4);
}


// ===== 008a5700  FUN_008a5700 =====

long FUN_008a5700(int *param_1)

{
  if ((char)param_1[1] == '\0') {
    param_1 = (int *)&UNK_001fdc58;
  }
  return (long)*param_1;
}


// ===== 008a5720  FUN_008a5720 =====

byte FUN_008a5720(long param_1)

{
  if (*(char *)(param_1 + 4) == '\x01') {
    return *(byte *)(param_1 + 0xc) & 1;
  }
  return 0;
}


// ===== 008a5744  FUN_008a5744 =====

undefined1 FUN_008a5744(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}


// ===== 008a5750  FUN_008a5750 =====

undefined4 FUN_008a5750(long param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 8);
  if (*(char *)(param_1 + 0xc) == '\0') {
    puVar1 = (undefined4 *)&UNK_001fdc64;
  }
  return *puVar1;
}


// ===== 008a5774  FUN_008a5774 =====

undefined1  [16] FUN_008a5774(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x10);
}


// ===== 008a5784  FUN_008a5784 =====

undefined1  [16] FUN_008a5784(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x28);
}


// ===== 008a5794  FUN_008a5794 =====

undefined1 FUN_008a5794(long param_1)

{
  return *(undefined1 *)(param_1 + 0x38);
}


// ===== 008a57a0  FUN_008a57a0 =====

undefined8 FUN_008a57a0(long param_1)

{
  ulong uVar1;
  
  if ((*(char *)(param_1 + 0x40) == '\x01') && (0x3f < *(uint *)(param_1 + 0x3c))) {
    uVar1 = FUN_004022fc();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/experiments/rate_control_settings.cc",0x3fa,
                   "Unsupported vp8_qp_max_ value, ignored.");
    }
    return 0;
  }
  return *(undefined8 *)(param_1 + 0x3c);
}


// ===== 008a5808  FUN_008a5808 =====

undefined8 FUN_008a5808(long param_1)

{
  if ((*(char *)(param_1 + 0x48) == '\x01') && (*(int *)(param_1 + 0x44) < 1)) {
    return 0;
  }
  return *(undefined8 *)(param_1 + 0x44);
}


// ===== 008a5834  FUN_008a5834 =====

undefined1 FUN_008a5834(long param_1)

{
  return *(undefined1 *)(param_1 + 0x4c);
}


// ===== 008a5840  FUN_008a5840 =====

undefined1 FUN_008a5840(long param_1)

{
  return *(undefined1 *)(param_1 + 0x50);
}


// ===== 008a584c  FUN_008a584c =====

undefined1 FUN_008a584c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x51);
}


// ===== 008a5858  FUN_008a5858 =====

undefined1 FUN_008a5858(long param_1)

{
  return *(undefined1 *)(param_1 + 0x4e);
}


// ===== 008a5864  FUN_008a5864 =====

undefined1 FUN_008a5864(long param_1)

{
  return *(undefined1 *)(param_1 + 0x4f);
}


// ===== 008a5870  FUN_008a5870 =====

void FUN_008a5870(undefined8 *param_1,int *param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  
  *param_1 = &PTR_FUN_00d3b348;
  FUN_008a00d8(param_1 + 1);
  if (((*(ushort *)(param_2 + 0x155) >> 8 & 1) == 0) ||
     (plVar2 = (long *)FUN_008a76b8(), plVar2 == (long *)0x0)) {
    if (*param_2 == 2) {
      lVar3 = FUN_007b8ca4(param_2);
      uVar5 = (ulong)*(byte *)(lVar3 + 10);
      pbVar4 = (byte *)FUN_007b8ca4(param_2);
      uVar6 = (ulong)*pbVar4;
    }
    else {
      uVar6 = 1;
      uVar5 = 1;
    }
  }
  else {
    puStack_4c = &DAT_aaaaaaaaaaaaaaaa;
    uStack_50 = 0xaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_58 = 0xaaaaaaaa;
    local_54 = 0xaaaaaaaa;
    puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
    (**(code **)(*plVar2 + 0x10))(&local_70);
    uVar5 = (ulong)(int)local_70;
    uVar6 = (ulong)(int)puStack_68;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  param_1[0xad] = uVar5;
  param_1[0xae] = uVar6;
  FUN_008a5960(param_1 + 0xaf,param_2);
  param_1[0xb5] = 0;
  if ((ulong)param_1[0xad] < 6) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0x8a5960);
  (*pcVar1)();
}


// ===== 008a5960  FUN_008a5960 =====

void FUN_008a5960(ulong *param_1,int *param_2)

{
  uint *puVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  ushort uVar6;
  bool bVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  code *pcVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  void *pvVar15;
  ulong uVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  uint *puVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  undefined1 *puVar23;
  long lVar24;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined1 *puStack_8c;
  void *local_78;
  void *local_70;
  
  uVar6 = *(ushort *)(param_2 + 0x155);
  *param_1 = 0;
  param_1[4] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
  if (((uVar6 >> 8 & 1) == 0) || (plVar11 = (long *)FUN_008a76b8(), plVar11 == (long *)0x0)) {
    if (*param_2 == 2) {
      lVar24 = FUN_007b8ca4(param_2);
      uVar22 = (ulong)*(byte *)(lVar24 + 10);
      FUN_007b8ca4(param_2);
    }
    else {
      uVar22 = 1;
    }
  }
  else {
    puStack_8c = &DAT_aaaaaaaaaaaaaaaa;
    uStack_90 = 0xaaaaaaaa;
    puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
    local_b0 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_98 = 0xaaaaaaaa;
    local_94 = 0xaaaaaaaa;
    local_a0 = &DAT_aaaaaaaaaaaaaaaa;
    (**(code **)(*plVar11 + 0x10))(&local_b0);
    uVar22 = (ulong)(int)local_b0;
    (**(code **)(*plVar11 + 8))(plVar11);
  }
  if (uVar22 == 0 || (*(byte *)(param_2 + 0x8a) & 1) != 0) {
    uVar21 = 0;
    bVar7 = false;
  }
  else {
    uVar21 = 1;
    bVar7 = false;
    if ((uVar22 != 1) && (bVar7 = false, (*(byte *)(param_2 + 0xb2) & 1) == 0)) {
      bVar7 = false;
      uVar21 = 2;
      if ((uVar22 != 2) && ((*(byte *)(param_2 + 0xda) & 1) == 0)) {
        bVar7 = false;
        uVar21 = 3;
        if ((uVar22 != 3) && ((*(byte *)(param_2 + 0x102) & 1) == 0)) {
          bVar7 = false;
          uVar21 = 4;
          if ((uVar22 != 4) && ((*(byte *)(param_2 + 0x12a) & 1) == 0)) {
            if (uVar22 != 5) goto LAB_008a5fb0;
            bVar7 = true;
            uVar21 = 5;
          }
        }
      }
    }
  }
  if (uVar21 < uVar22) {
    if (bVar7) {
LAB_008a5fb0:
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(0x5512,0x8a5fb4);
      (*pcVar10)();
    }
    uVar16 = uVar21;
    if (((char)param_2[uVar21 * 0x28 + 0x8a] == '\x01') &&
       (uVar2 = uVar21 + 1, uVar16 = uVar22, uVar2 != uVar22)) {
      if (uVar2 == 5) goto LAB_008a5fb0;
      uVar16 = uVar2;
      if (((char)param_2[uVar2 * 0x28 + 0x8a] == '\x01') &&
         (uVar2 = uVar21 + 2, uVar16 = uVar22, uVar2 != uVar22)) {
        if (uVar2 == 5) goto LAB_008a5fb0;
        uVar16 = uVar2;
        if (((char)param_2[uVar2 * 0x28 + 0x8a] == '\x01') &&
           (uVar2 = uVar21 + 3, uVar16 = uVar22, uVar2 != uVar22)) {
          if (uVar2 == 5) goto LAB_008a5fb0;
          uVar16 = uVar2;
          if (((char)param_2[uVar2 * 0x28 + 0x8a] == '\x01') &&
             (uVar2 = uVar21 + 4, uVar16 = uVar22, uVar2 != uVar22)) {
            if (uVar2 == 5) goto LAB_008a5fb0;
            uVar16 = uVar2;
            if (((char)param_2[uVar2 * 0x28 + 0x8a] == '\x01') &&
               (uVar2 = uVar21 + 5, uVar16 = uVar22, uVar2 != uVar22)) {
              if (uVar22 == 0 || (*(byte *)(param_2 + 0x8a) & 1) != 0) goto LAB_008a5fb0;
              if ((char)param_2[uVar2 * 0x28 + 0x8a] == '\0') {
                uVar16 = uVar2;
              }
            }
          }
        }
      }
    }
    if (uVar16 != uVar21) {
      lVar24 = 0;
      uVar22 = 1;
      uVar2 = 0;
      if (uVar21 < 6) {
        uVar2 = 5 - uVar21;
      }
      do {
        lVar13 = uVar22 - 1;
        local_b8 = &DAT_aaaaaaaaaaaaaaaa;
        if (lVar13 == 0) {
          puVar23 = (undefined1 *)((ulong)(uint)param_2[0x88] * 1000);
        }
        else if (param_2[0x14a] == 0) {
          if (uVar22 == 0) {
            puVar17 = (undefined1 *)0x0;
            puVar18 = (undefined1 *)0x0;
            lVar13 = -1;
          }
          else {
            if (uVar2 <= uVar22 - 2) goto LAB_008a5fb0;
            puVar18 = (undefined1 *)0x0;
            puVar17 = (undefined1 *)0x0;
            puVar19 = (uint *)(param_2 + uVar21 * 0x28 + 0x88);
            lVar20 = lVar24;
            do {
              uVar5 = *puVar19;
              puVar1 = puVar19 + -2;
              puVar19 = puVar19 + 0x28;
              puVar23 = puVar17;
              if (puVar17 != (undefined1 *)0x8000000000000000) {
                puVar23 = puVar17 + (ulong)uVar5 * 1000;
              }
              if (puVar17 != (undefined1 *)0x7fffffffffffffff) {
                puVar17 = puVar23;
              }
              puVar23 = puVar18;
              if (puVar18 != (undefined1 *)0x8000000000000000) {
                puVar23 = puVar18 + (ulong)*puVar1 * 1000;
              }
              if (puVar18 != (undefined1 *)0x7fffffffffffffff) {
                puVar18 = puVar23;
              }
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
          }
          if (4 < lVar13 + uVar21) goto LAB_008a5fb0;
          puVar23 = puVar18;
          if (puVar18 != (undefined1 *)0x8000000000000000) {
            puVar23 = puVar18 + (ulong)(uint)param_2[(lVar13 + uVar21) * 0x28 + 0x88] * 1000;
          }
          if (puVar18 != (undefined1 *)0x7fffffffffffffff) {
            puVar18 = puVar23;
          }
          while (((puVar23 = puVar18, puVar23 == (undefined1 *)0x7fffffffffffffff ||
                  (puVar17 == (undefined1 *)0x8000000000000000)) ||
                 ((puVar23 != (undefined1 *)0x8000000000000000 &&
                  ((puVar17 != (undefined1 *)0x7fffffffffffffff &&
                   (1 < (long)puVar23 - (long)puVar17))))))) {
            puVar18 = (undefined1 *)0xc000000000000000;
            if (puVar23 != (undefined1 *)0x8000000000000000 &&
                puVar17 != (undefined1 *)0x8000000000000000) {
              puVar18 = (undefined1 *)((long)(puVar23 + (long)puVar17) / 2);
            }
            puVar4 = (undefined1 *)0x3fffffffffffffff;
            if (puVar23 != (undefined1 *)0x7fffffffffffffff &&
                puVar17 != (undefined1 *)0x7fffffffffffffff) {
              puVar4 = puVar18;
            }
            FUN_008a6cbc(&local_78,uVar22);
            FUN_008a6a18(&local_b0,param_2,uVar21,&local_78);
            puVar9 = puStack_a8;
            puVar8 = local_b0;
            if (local_b0 != (undefined1 *)0x0) {
              uVar14 = (ulong)(((long)local_b0 - (long)puStack_a8 << 0x3d) -
                              ((long)local_b0 - (long)puStack_a8)) >> 3;
              if ((ulong)(puStack_a8 + (-8 - ((long)puStack_a8 << 0x3d))) >> 3 <= uVar14) {
                uVar14 = (ulong)(puStack_a8 + (-8 - ((long)puStack_a8 << 0x3d))) >> 3;
              }
              puVar18 = puStack_a8;
              if ((1 < uVar14) && ((((int)local_b0 - (int)puStack_a8 | -(int)puStack_a8) & 7U) == 0)
                 ) {
                uVar14 = uVar14 & 0x1ffffffffffffffe;
                lVar13 = uVar14 * -8;
                do {
                  uVar14 = uVar14 - 2;
                  puVar18 = puStack_a8 + lVar13;
                } while (uVar14 != 0);
              }
              while (puVar18 != local_b0) {
                puVar18 = puVar18 + -8;
                if (puVar18 == (undefined1 *)0x0) goto LAB_008a5f88;
              }
              puStack_a8 = local_b0;
              operator_delete(local_b0);
            }
            if (local_78 != (void *)0x0) {
              uVar12 = (ulong)((long)local_70 + (-8 - ((long)local_70 << 0x3d))) >> 3;
              uVar14 = (ulong)(((long)local_78 - (long)local_70 << 0x3d) -
                              ((long)local_78 - (long)local_70)) >> 3;
              if (uVar12 <= uVar14) {
                uVar14 = uVar12;
              }
              pvVar15 = local_70;
              if ((1 < uVar14) && ((((int)local_78 - (int)local_70 | -(int)local_70) & 7U) == 0)) {
                uVar14 = uVar14 & 0x1ffffffffffffffe;
                pvVar15 = (void *)((long)local_70 + uVar14 * -8);
                do {
                  uVar14 = uVar14 - 2;
                } while (uVar14 != 0);
              }
              while (pvVar15 != local_78) {
                pvVar15 = (void *)((long)pvVar15 + -8);
                if (pvVar15 == (void *)0x0) {
LAB_008a5f88:
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
            puVar18 = puVar4;
            if ((long)puVar9 - (long)puVar8 >> 3 != uVar22) {
              puVar18 = puVar23;
              puVar17 = puVar4;
            }
          }
        }
        else {
          if (uVar2 <= uVar22 - 2) goto LAB_008a5fb0;
          puVar17 = (undefined1 *)0x0;
          puVar19 = (uint *)(param_2 + uVar21 * 0x28 + 0x87);
          lVar20 = lVar24;
          do {
            puVar18 = puVar17;
            if (puVar17 != (undefined1 *)0x8000000000000000) {
              puVar18 = puVar17 + (ulong)*puVar19 * 1000;
            }
            if (puVar17 != (undefined1 *)0x7fffffffffffffff) {
              puVar17 = puVar18;
            }
            lVar20 = lVar20 + -1;
            puVar19 = puVar19 + 0x28;
          } while (lVar20 != 0);
          if (4 < lVar13 + uVar21) goto LAB_008a5fb0;
          puVar23 = (undefined1 *)0x7fffffffffffffff;
          if ((puVar17 != (undefined1 *)0x7fffffffffffffff) &&
             (puVar23 = puVar17, puVar17 != (undefined1 *)0x8000000000000000)) {
            puVar23 = puVar17 + (ulong)(uint)param_2[(lVar13 + uVar21) * 0x28 + 0x88] * 1000;
          }
        }
        uVar12 = *param_1;
        uVar14 = 5;
        if ((uVar12 & 1) != 0) {
          uVar14 = param_1[2];
        }
        local_b8 = puVar23;
        if (uVar12 >> 1 == uVar14) {
          FUN_008a7528(param_1,&local_b8);
        }
        else {
          puVar3 = param_1 + 1;
          if ((uVar12 & 1) != 0) {
            puVar3 = (ulong *)param_1[1];
          }
          if (puVar3 + (uVar12 >> 1) == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          puVar3[uVar12 >> 1] = (ulong)puVar23;
          *param_1 = *param_1 + 2;
        }
        uVar22 = uVar22 + 1;
        lVar24 = lVar24 + 1;
      } while (uVar22 <= uVar16 - uVar21);
    }
  }
  return;
}


// ===== 008a5fb4  FUN_008a5fb4 =====

void FUN_008a5fb4(undefined8 *param_1,long param_2,ulong *param_3)

{
  bool bVar1;
  undefined4 *__src;
  code *pcVar2;
  void *__dest;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined4 *puVar14;
  void *pvVar15;
  undefined4 *local_80;
  undefined4 *puStack_78;
  undefined1 *local_70;
  
  uVar8 = *param_3;
  uVar7 = (ulong)*(uint *)(param_2 + 0x14) * 1000;
  if ((long)uVar8 <= (long)uVar7) {
    uVar7 = uVar8;
  }
  if (*(uint *)(param_2 + 0x14) != 0) {
    uVar8 = uVar7;
  }
  if (*(int *)(param_2 + 0x224) == 0) {
    param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
    *param_1 = &DAT_aaaaaaaaaaaaaaaa;
    param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[7] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[6] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[9] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[8] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[0xb] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[10] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[0xd] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[0xc] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[0xf] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[0xe] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[0x11] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[0x10] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[0x13] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[0x12] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[0x14] = &DAT_aaaaaaaaaaaaaaaa;
    FUN_007cbe28(param_1);
    FUN_007cbed8(param_1,0,0,uVar8 & 0xffffffff);
    return;
  }
  uVar7 = *(ulong *)(param_2 + 0x568);
  if (uVar7 == 0 || (*(byte *)(param_2 + 0x230) & 1) != 0) {
    uVar11 = 0;
    bVar1 = false;
  }
  else {
    uVar11 = 1;
    bVar1 = false;
    if ((uVar7 != 1) && (bVar1 = false, (*(byte *)(param_2 + 0x2d0) & 1) == 0)) {
      bVar1 = false;
      uVar11 = 2;
      if ((uVar7 != 2) && ((*(byte *)(param_2 + 0x370) & 1) == 0)) {
        bVar1 = false;
        uVar11 = 3;
        if ((uVar7 != 3) && ((*(byte *)(param_2 + 0x410) & 1) == 0)) {
          bVar1 = false;
          uVar11 = 4;
          if ((uVar7 != 4) && ((*(byte *)(param_2 + 0x4b0) & 1) == 0)) {
            if (uVar7 != 5) goto LAB_008a6634;
            bVar1 = true;
            uVar11 = 5;
          }
        }
      }
    }
  }
  if (uVar7 <= uVar11) {
LAB_008a61f0:
    FUN_007cbe28(param_1);
    return;
  }
  if (bVar1) {
LAB_008a6634:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(0x5512,0x8a6638);
    (*pcVar2)();
  }
  uVar9 = uVar11;
  if ((*(char *)(param_2 + uVar11 * 0xa0 + 0x230) == '\x01') &&
     (uVar12 = uVar11 + 1, uVar9 = uVar7, uVar12 != uVar7)) {
    if (uVar12 == 5) goto LAB_008a6634;
    uVar9 = uVar12;
    if ((*(char *)(param_2 + uVar12 * 0xa0 + 0x230) == '\x01') &&
       (uVar12 = uVar11 + 2, uVar9 = uVar7, uVar12 != uVar7)) {
      if (uVar12 == 5) goto LAB_008a6634;
      uVar9 = uVar12;
      if ((*(char *)(param_2 + uVar12 * 0xa0 + 0x230) == '\x01') &&
         (uVar12 = uVar11 + 3, uVar9 = uVar7, uVar12 != uVar7)) {
        if (uVar12 == 5) goto LAB_008a6634;
        uVar9 = uVar12;
        if ((*(char *)(param_2 + uVar12 * 0xa0 + 0x230) == '\x01') &&
           (uVar12 = uVar11 + 4, uVar9 = uVar7, uVar12 != uVar7)) {
          if (uVar12 == 5) goto LAB_008a6634;
          uVar9 = uVar12;
          if ((*(char *)(param_2 + uVar12 * 0xa0 + 0x230) == '\x01') &&
             (uVar12 = uVar11 + 5, uVar9 = uVar7, uVar12 != uVar7)) {
            if (uVar7 == 0 || (*(byte *)(param_2 + 0x230) & 1) != 0) goto LAB_008a6634;
            if (*(char *)(param_2 + uVar12 * 0xa0 + 0x230) == '\0') {
              uVar9 = uVar12;
            }
          }
        }
      }
    }
  }
  if (uVar9 == uVar11) goto LAB_008a61f0;
  uVar7 = *(ulong *)(param_2 + 0x578);
  if (1 < uVar7) {
    puVar5 = (undefined8 *)(param_2 + 0x580);
    if ((uVar7 & 1) != 0) {
      puVar5 = (undefined8 *)*puVar5;
    }
    uVar12 = uVar7 * 4 & 0xfffffffffffffff8;
    if (uVar12 != 0) {
      lVar13 = uVar12 - 8;
      uVar7 = (uVar7 * 4 - 8 >> 3) + 1;
      uVar12 = uVar7;
      if (lVar13 != 0) {
        uVar10 = 1;
        do {
          uVar12 = uVar10;
          if ((long)uVar8 < (long)puVar5[uVar10]) break;
          lVar13 = lVar13 + -8;
          uVar10 = uVar10 + 1;
          uVar12 = uVar7;
        } while (lVar13 != 0);
      }
      goto LAB_008a6278;
    }
  }
  uVar12 = 0;
LAB_008a6278:
  *(ulong *)(param_2 + 0x5a8) = uVar12;
  if (*(int *)(param_2 + 0x530) == 0) {
    FUN_008a6664(&local_80,param_2,uVar8,uVar11,uVar12);
  }
  else {
    FUN_008a67a8(&local_80,param_2,uVar8,uVar11,uVar12);
  }
  puVar14 = puStack_78;
  __src = local_80;
  uVar7 = (long)puStack_78 - (long)local_80;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[7] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[6] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[9] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[8] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xb] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[10] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xd] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xc] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xf] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xe] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x11] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x10] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x13] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x12] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x14] = &DAT_aaaaaaaaaaaaaaaa;
  if (uVar7 == 0) {
    __dest = (void *)0x0;
    pvVar15 = (void *)0x0;
  }
  else {
    if ((long)uVar7 < 0) {
      FUN_008a7328();
LAB_008a663c:
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../modules/video_coding/svc/svc_rate_allocator.cc",0x98,
                   "num_temporal_layers == 3",&DAT_001fbca2,uVar7,3);
    }
    __dest = operator_new(uVar7);
    pvVar15 = (void *)((long)__dest + uVar7);
    memcpy(__dest,__src,uVar7);
  }
  uVar7 = *(ulong *)(param_2 + 0x570);
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[7] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[6] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[9] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[8] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xb] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[10] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xd] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xc] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xf] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xe] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x11] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x10] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x13] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x12] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x14] = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007cbe28(param_1);
  if ((long)pvVar15 - (long)__dest != 0) {
    lVar13 = 0;
    do {
      puStack_78 = (undefined4 *)&DAT_aaaaaaaaaaaaaaaa;
      local_80 = (undefined4 *)&DAT_aaaaaaaaaaaaaaaa;
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_008a6cbc(&local_80,uVar7,*(undefined8 *)((long)__dest + lVar13 * 8));
      if (uVar7 == 3) {
        if ((((ulong)((long)puStack_78 - (long)local_80) < 0x11) ||
            (FUN_007cbed8(param_1,lVar13 + uVar11,0,local_80[4]), puStack_78 == local_80)) ||
           (FUN_007cbed8(param_1,lVar13 + uVar11,1,*local_80),
           (ulong)((long)puStack_78 - (long)local_80) < 9)) goto LAB_008a6620;
        uVar4 = local_80[2];
        uVar3 = 2;
      }
      else if (uVar7 == 2) {
        if (((ulong)((long)puStack_78 - (long)local_80) < 9) ||
           (FUN_007cbed8(param_1,lVar13 + uVar11,0,local_80[2]), puStack_78 == local_80))
        goto LAB_008a6620;
        uVar4 = *local_80;
        uVar3 = 1;
      }
      else {
        if (uVar7 != 1) goto LAB_008a663c;
        if (puStack_78 == local_80) {
LAB_008a6620:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                    );
        }
        uVar4 = *local_80;
        uVar3 = 0;
      }
      FUN_007cbed8(param_1,lVar13 + uVar11,uVar3,uVar4);
      if (local_80 != (undefined4 *)0x0) {
        uVar10 = (ulong)((long)puStack_78 + (-8 - ((long)puStack_78 << 0x3d))) >> 3;
        uVar8 = (ulong)(((long)local_80 - (long)puStack_78 << 0x3d) -
                       ((long)local_80 - (long)puStack_78)) >> 3;
        if (uVar10 <= uVar8) {
          uVar8 = uVar10;
        }
        puVar6 = puStack_78;
        if ((1 < uVar8) && ((((int)local_80 - (int)puStack_78 | -(int)puStack_78) & 7U) == 0)) {
          uVar8 = uVar8 & 0x1ffffffffffffffe;
          puVar6 = puStack_78 + uVar8 * -2;
          do {
            uVar8 = uVar8 - 2;
          } while (uVar8 != 0);
        }
        while (puVar6 != local_80) {
          puVar6 = puVar6 + -2;
          if (puVar6 == (undefined4 *)0x0) goto LAB_008a65d8;
        }
        puStack_78 = local_80;
        operator_delete(local_80);
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 != (long)pvVar15 - (long)__dest >> 3);
  }
  if (__dest == (void *)0x0) {
LAB_008a6564:
    *(bool *)((long)param_1 + 0xa4) = uVar12 < uVar9 - uVar11;
    if (__src == (undefined4 *)0x0) {
      return;
    }
    uVar8 = (ulong)((long)puVar14 + (-8 - ((long)puVar14 << 0x3d))) >> 3;
    uVar7 = (ulong)(((long)__src - (long)puVar14 << 0x3d) - ((long)__src - (long)puVar14)) >> 3;
    if (uVar8 <= uVar7) {
      uVar7 = uVar8;
    }
    if ((1 < uVar7) && ((((int)__src - (int)puVar14 | -(int)puVar14) & 7U) == 0)) {
      uVar7 = uVar7 & 0x1ffffffffffffffe;
      puVar14 = puVar14 + uVar7 * -2;
      do {
        uVar7 = uVar7 - 2;
      } while (uVar7 != 0);
    }
    do {
      if (puVar14 == __src) {
        operator_delete(__src);
        return;
      }
      puVar14 = puVar14 + -2;
    } while (puVar14 != (undefined4 *)0x0);
  }
  else {
    uVar8 = (ulong)((long)pvVar15 + (-8 - ((long)pvVar15 << 0x3d))) >> 3;
    uVar7 = (ulong)(((long)__dest - (long)pvVar15 << 0x3d) - ((long)__dest - (long)pvVar15)) >> 3;
    if (uVar8 <= uVar7) {
      uVar7 = uVar8;
    }
    if ((1 < uVar7) && ((((int)__dest - (int)pvVar15 | -(int)pvVar15) & 7U) == 0)) {
      uVar7 = uVar7 & 0x1ffffffffffffffe;
      pvVar15 = (void *)((long)pvVar15 + uVar7 * -8);
      do {
        uVar7 = uVar7 - 2;
      } while (uVar7 != 0);
    }
    do {
      if (pvVar15 == __dest) {
        operator_delete(__dest);
        goto LAB_008a6564;
      }
      pvVar15 = (void *)((long)pvVar15 + -8);
    } while (pvVar15 != (void *)0x0);
  }
LAB_008a65d8:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 008a6664  FUN_008a6664 =====

void FUN_008a6664(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  void *local_68;
  void *local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_5 == 0) {
    puVar1 = (undefined8 *)operator_new(8);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *param_1 = puVar1;
    *puVar1 = param_3;
    param_1[1] = puVar1 + 1;
    param_1[2] = puVar1 + 1;
  }
  else {
    FUN_008a6cbc(&local_68,param_5,param_3);
    FUN_008a6a18(&local_50,param_2 + 8,param_4,&local_68);
    param_1[1] = uStack_48;
    *param_1 = local_50;
    param_1[2] = local_40;
    if (local_68 != (void *)0x0) {
      uVar3 = (ulong)((long)local_60 + (-8 - ((long)local_60 << 0x3d))) >> 3;
      uVar2 = (ulong)(((long)local_68 - (long)local_60 << 0x3d) - ((long)local_68 - (long)local_60))
              >> 3;
      if (uVar3 <= uVar2) {
        uVar2 = uVar3;
      }
      if ((1 < uVar2) && ((((int)local_68 - (int)local_60 | -(int)local_60) & 7U) == 0)) {
        uVar2 = uVar2 & 0x1ffffffffffffffe;
        local_60 = (void *)((long)local_60 + uVar2 * -8);
        do {
          uVar2 = uVar2 - 2;
        } while (uVar2 != 0);
      }
      while (local_60 != local_68) {
        local_60 = (void *)((long)local_60 + -8);
        if (local_60 == (void *)0x0) {
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
  }
  return;
}


// ===== 008a67a8  FUN_008a67a8 =====

void FUN_008a67a8(undefined8 *param_1,long param_2,long param_3,ulong param_4,long param_5)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long local_68;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_5 != 0) {
    if (4 < param_4) {
LAB_008a6a14:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(0x5512,0x8a6a18);
      (*pcVar3)();
    }
    uVar9 = (ulong)*(uint *)(param_2 + 0x210 + param_4 * 0xa0 + 0x18);
    if ((long)(param_3 + uVar9 * -1000) < 0 == SBORROW8(param_3,uVar9 * 1000)) {
      if (param_4 < param_5 + param_4) {
        uVar9 = param_5 + param_4;
        lVar10 = 0;
        plVar6 = (long *)0x0;
        lVar8 = 0;
        puVar7 = (uint *)(param_2 + param_4 * 0xa0 + 0x228);
        do {
          if (param_4 == 5) goto LAB_008a6a14;
          lVar2 = lVar10;
          if (lVar10 != -0x8000000000000000) {
            lVar2 = lVar10 + (ulong)*puVar7 * 1000;
          }
          lVar1 = lVar10;
          if (lVar10 != 0x7fffffffffffffff) {
            lVar1 = lVar2;
          }
          plVar5 = plVar6;
          local_68 = lVar8;
          if (param_3 < lVar1) goto LAB_008a6954;
          lVar8 = param_3 - lVar10;
          local_68 = (ulong)puVar7[-1] * 1000;
          if ((long)(lVar8 + (ulong)puVar7[-1] * -1000) < 0 == SBORROW8(lVar8,local_68)) {
            lVar8 = local_68;
          }
          lVar2 = -0x8000000000000000;
          if (param_3 != -0x8000000000000000 && lVar10 != 0x7fffffffffffffff) {
            lVar2 = lVar8;
          }
          if (lVar10 != -0x8000000000000000 && param_3 != 0x7fffffffffffffff) {
            local_68 = lVar2;
          }
          if (plVar6 < (long *)param_1[2]) {
            if (plVar6 == (long *)0x0) goto LAB_008a69ec;
            plVar5 = plVar6 + 1;
            *plVar6 = local_68;
          }
          else {
            plVar5 = (long *)FUN_008a7340(param_1,&local_68);
          }
          param_4 = param_4 + 1;
          param_1[1] = plVar5;
          lVar8 = -0x8000000000000000;
          if (local_68 != -0x8000000000000000 && lVar10 != -0x8000000000000000) {
            lVar8 = local_68 + lVar10;
          }
          bVar4 = lVar10 != 0x7fffffffffffffff;
          lVar10 = 0x7fffffffffffffff;
          if (local_68 != 0x7fffffffffffffff && bVar4) {
            lVar10 = lVar8;
          }
          param_5 = param_5 + -1;
          plVar6 = plVar5;
          lVar8 = local_68;
          puVar7 = puVar7 + 0x28;
        } while (param_5 != 0);
      }
      else {
        plVar5 = (long *)0x0;
        local_68 = 0;
        lVar10 = 0;
LAB_008a6954:
        uVar9 = param_4;
        if (uVar9 == 0) {
          return;
        }
      }
      lVar8 = 0x7fffffffffffffff;
      if ((param_3 != 0x7fffffffffffffff) && (lVar10 != -0x8000000000000000)) {
        if (param_3 == -0x8000000000000000) {
          return;
        }
        if (lVar10 == 0x7fffffffffffffff) {
          return;
        }
        param_3 = param_3 - lVar10;
        if (param_3 < 1) {
          return;
        }
        if (((local_68 != 0x7fffffffffffffff) && (param_3 != 0x7fffffffffffffff)) &&
           (lVar8 = local_68, local_68 != -0x8000000000000000)) {
          lVar8 = local_68 + param_3;
        }
      }
      local_68 = (ulong)*(uint *)(param_2 + 0x210 + uVar9 * 0xa0 + -0x90) * 1000;
      if (lVar8 <= local_68) {
        local_68 = lVar8;
      }
      if ((long *)*param_1 != plVar5) {
        plVar5[-1] = local_68;
        return;
      }
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:439: libc++ Hardening assertion !empty() failed: back() called on an empty vector\n"
                );
    }
  }
  plVar5 = (long *)operator_new(8);
  if (plVar5 != (long *)0x0) {
    *param_1 = plVar5;
    *plVar5 = param_3;
    param_1[1] = plVar5 + 1;
    param_1[2] = plVar5 + 1;
    return;
  }
LAB_008a69ec:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008a6a18  FUN_008a6a18 =====

void FUN_008a6a18(undefined8 *param_1,long param_2,ulong param_3,long *param_4)

{
  ulong uVar1;
  code *pcVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  uint *puVar11;
  undefined8 *puVar12;
  ulong local_88;
  ulong uStack_80;
  ulong *local_78;
  ulong *local_70;
  ulong *local_68;
  
  puVar12 = (undefined8 *)*param_4;
  local_78 = (ulong *)0x0;
  local_70 = (ulong *)0x0;
  local_68 = (ulong *)0x0;
  lVar8 = param_4[1] - (long)puVar12;
  if (lVar8 == 0) {
    local_68 = (ulong *)0x0;
    puVar3 = (ulong *)0x0;
    local_78 = (ulong *)0x0;
  }
  else {
    uVar9 = 0;
    uVar10 = 0;
    uVar6 = 0;
    if (param_3 < 6) {
      uVar6 = 5 - param_3;
    }
    puVar11 = (uint *)(param_2 + param_3 * 0xa0 + 0x220);
    do {
      puVar3 = local_70;
      if (uVar6 == uVar10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(0x5512,0x8a6cbc);
        (*pcVar2)();
      }
      uStack_80 = (ulong)puVar11[-2] * 1000;
      lVar7 = puVar12[uVar10];
      if ((lVar7 == 0x7fffffffffffffff) || (uVar9 == 0x7fffffffffffffff)) {
        local_88 = 0x7fffffffffffffff;
        uVar9 = 0x7fffffffffffffff;
LAB_008a6b48:
        if (local_70 < local_68) {
          if (local_70 == (ulong *)0x0) {
LAB_008a6c90:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          puVar3 = local_70 + 1;
          *local_70 = uStack_80;
        }
        else {
          puVar3 = (ulong *)FUN_008a7340(&local_78,&uStack_80);
        }
      }
      else {
        uVar1 = lVar7 + uVar9;
        local_88 = 0x8000000000000000;
        if (uVar9 != 0x8000000000000000 && lVar7 != -0x8000000000000000) {
          local_88 = uVar1;
        }
        if ((long)(local_88 + (ulong)*puVar11 * -1000) < 0 !=
            SBORROW8(local_88,(ulong)*puVar11 * 1000)) {
          if (lVar8 != 8) {
            *param_1 = local_78;
            param_1[1] = local_70;
            param_1[2] = local_68;
            return;
          }
          puVar4 = (undefined8 *)operator_new(8);
          uVar5 = *puVar12;
          *param_1 = puVar4;
          *puVar4 = uVar5;
          param_1[1] = puVar4 + 1;
          param_1[2] = puVar4 + 1;
          if (local_78 == (ulong *)0x0) {
            return;
          }
          uVar6 = (ulong)((long)puVar3 + (-8 - ((long)puVar3 << 0x3d))) >> 3;
          uVar10 = (ulong)(((long)local_78 - (long)puVar3 << 0x3d) - ((long)local_78 - (long)puVar3)
                          ) >> 3;
          if (uVar6 <= uVar10) {
            uVar10 = uVar6;
          }
          if ((1 < uVar10) && ((((int)local_78 - (int)puVar3 | -(int)puVar3) & 7U) == 0)) {
            uVar10 = uVar10 & 0x1ffffffffffffffe;
            puVar3 = puVar3 + -uVar10;
            do {
              uVar10 = uVar10 - 2;
            } while (uVar10 != 0);
          }
          do {
            if (puVar3 == local_78) {
              local_70 = local_78;
              operator_delete(local_78);
              return;
            }
            puVar3 = puVar3 + -1;
          } while (puVar3 != (ulong *)0x0);
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        if (uStack_80 < local_88) {
          uVar9 = 0x7fffffffffffffff;
          if ((uVar1 != 0x7fffffffffffffff) && (uVar9 = uVar1, uVar1 != 0x8000000000000000)) {
            uVar9 = uVar1 + (ulong)puVar11[-2] * -1000;
          }
          goto LAB_008a6b48;
        }
        if (local_70 < local_68) {
          if (local_70 == (ulong *)0x0) goto LAB_008a6c90;
          uVar9 = 0;
          puVar3 = local_70 + 1;
          *local_70 = uVar1;
        }
        else {
          puVar3 = (ulong *)FUN_008a7340(&local_78,&local_88);
          uVar9 = 0;
        }
      }
      puVar12 = (undefined8 *)*param_4;
      uVar10 = uVar10 + 1;
      puVar11 = puVar11 + 0x28;
      lVar8 = param_4[1] - (long)puVar12;
      local_70 = puVar3;
    } while (uVar10 < (ulong)(lVar8 >> 3));
  }
  *param_1 = local_78;
  param_1[1] = puVar3;
  param_1[2] = local_68;
  return;
}


// ===== 008a6cbc  FUN_008a6cbc =====

void FUN_008a6cbc(ulong *param_1,ulong param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  long local_38;
  long *plVar9;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  dVar15 = DAT_001f53e8;
  if (param_2 == 0) {
    if ((param_3 < 1) && (-1 < param_3)) {
      return;
    }
    goto LAB_008a6d1c;
  }
  if (param_2 - 1 != 0) {
    dVar16 = 0.0;
    uVar12 = 0;
    uVar11 = param_2 & 0xfffffffffffffffe;
    do {
      dVar13 = pow(dVar15,(double)uVar12);
      dVar14 = pow(dVar15,(double)(uVar12 + 1));
      uVar12 = uVar12 + 2;
      dVar16 = dVar16 + dVar13 + dVar14;
      dVar14 = DAT_001f53e8;
      dVar13 = DAT_001f53e8;
      if (uVar12 == uVar11) goto joined_r0x008a6d7c;
    } while( true );
  }
  dVar16 = 0.0;
  uVar11 = 0;
  dVar13 = DAT_001f53e8;
  do {
    dVar15 = pow(dVar13,(double)uVar11);
    dVar16 = dVar16 + dVar15;
    uVar11 = uVar11 + 1;
    dVar14 = DAT_001f53e8;
joined_r0x008a6d7c:
    DAT_001f53e8 = dVar14;
  } while (param_2 != uVar11);
  dVar15 = pow(dVar14,(double)(param_2 - 1));
  plVar5 = (long *)0x0;
  do {
    local_38 = (long)((double)(long)(dVar15 * (double)param_3) / dVar16);
    if (plVar5 < (long *)param_1[2]) {
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      plVar4 = plVar5 + 1;
      *plVar5 = local_38;
    }
    else {
      plVar4 = (long *)FUN_008a7434(param_1,&local_38);
    }
    dVar15 = dVar15 / dVar14;
    param_2 = param_2 - 1;
    param_1[1] = (ulong)plVar4;
    plVar5 = plVar4;
  } while (param_2 != 0);
  plVar5 = (long *)*param_1;
  if (plVar5 == plVar4) {
    lVar7 = 0;
    bVar2 = false;
    bVar3 = param_3 < 0;
    lVar6 = param_3;
    if (param_3 < 1) goto LAB_008a6eb8;
  }
  else {
    lVar7 = 0;
    plVar8 = plVar5;
    do {
      plVar9 = plVar8 + 1;
      lVar10 = *plVar8;
      lVar6 = -0x8000000000000000;
      if (lVar10 != -0x8000000000000000 && lVar7 != -0x8000000000000000) {
        lVar6 = lVar10 + lVar7;
      }
      lVar1 = 0x7fffffffffffffff;
      if (lVar10 != 0x7fffffffffffffff) {
        lVar1 = lVar6;
      }
      bVar3 = lVar7 != 0x7fffffffffffffff;
      lVar7 = 0x7fffffffffffffff;
      if (bVar3) {
        lVar7 = lVar1;
      }
      plVar8 = plVar9;
    } while (plVar9 != plVar4);
    bVar2 = SBORROW8(param_3,lVar7);
    lVar6 = param_3 - lVar7;
    bVar3 = lVar6 < 0;
    if (lVar6 == 0 || param_3 < lVar7) {
LAB_008a6eb8:
      if (bVar3 == bVar2) {
        return;
      }
      lVar6 = 0x7fffffffffffffff;
      if (param_3 != -0x8000000000000000 && lVar7 != 0x7fffffffffffffff) {
        lVar6 = lVar7 - param_3;
      }
      if (plVar5 != plVar4) {
        lVar10 = plVar4[-1];
        lVar7 = 0x7fffffffffffffff;
        if ((lVar10 != 0x7fffffffffffffff) && (lVar6 != -0x8000000000000000)) {
          lVar7 = -0x8000000000000000;
          if (lVar6 != 0x7fffffffffffffff && lVar10 != -0x8000000000000000) {
            lVar7 = lVar10 - lVar6;
          }
        }
        plVar4[-1] = lVar7;
        return;
      }
      goto LAB_008a6d1c;
    }
  }
  lVar10 = 0x7fffffffffffffff;
  if (lVar7 != -0x8000000000000000 && param_3 != 0x7fffffffffffffff) {
    lVar10 = lVar6;
  }
  if (plVar5 != plVar4) {
    lVar6 = plVar4[-1];
    lVar7 = 0x7fffffffffffffff;
    if ((lVar6 != 0x7fffffffffffffff) && (lVar10 != 0x7fffffffffffffff)) {
      lVar7 = -0x8000000000000000;
      if (lVar10 != -0x8000000000000000 && lVar6 != -0x8000000000000000) {
        lVar7 = lVar6 + lVar10;
      }
    }
    plVar4[-1] = lVar7;
    return;
  }
LAB_008a6d1c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:439: libc++ Hardening assertion !empty() failed: back() called on an empty vector\n"
            );
}


