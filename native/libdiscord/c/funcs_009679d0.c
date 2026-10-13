// ===== 009679d0  FUN_009679d0 =====

void FUN_009679d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3e7d8;
  if (*(char *)(param_1 + 7) == '\x01') {
    FUN_0087d8c4(param_1 + 1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00967a1c  FUN_00967a1c =====

undefined8 FUN_00967a1c(long param_1,byte *param_2,undefined8 param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined1 *local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  
  if ((*(char *)(param_1 + 0x38) != '\x01') || (*(char *)(param_1 + 0x5c) != '\x01')) {
    return 1;
  }
  if (*(char *)(param_1 + 100) == '\x01') {
    *(undefined1 *)(param_1 + 100) = 0;
  }
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0087b608(&local_70,param_2,param_3);
  uVar9 = (long)puStack_68 - (long)local_70;
  if (uVar9 == 0) {
    uVar10 = 1;
    goto joined_r0x00967c38;
  }
  local_80 = local_70;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  if ((uVar9 >> 0x1c & 0x1ffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../rtc_base/numerics/safe_conversions.h",0x24,
                 "IsValueInRangeForNumericType<Dst>(value)",&DAT_001f5fa0);
  }
  local_78 = (undefined1 *)CONCAT44(0xaaaaaa01,(int)uVar9 * 8);
  FUN_007d6120(&local_80,8);
  if ((*(byte *)(param_1 + 0x5c) & 1) == 0) goto LAB_00968060;
  bVar3 = *param_2;
  uVar6 = *(uint *)(param_1 + 0x40);
  uVar7 = *(uint *)(param_1 + 0x44);
  FUN_007d6508(&local_80);
  uVar4 = FUN_007d6508(&local_80);
  FUN_007d6508(&local_80);
  if (((*(byte *)(param_1 + 0x38) & 1) == 0) ||
     (((*(int *)(param_1 + 0x18) == 1 &&
       (FUN_007d6120(&local_80,2), (*(byte *)(param_1 + 0x38) & 1) == 0)) ||
      (FUN_007d6120(&local_80,*(undefined4 *)(param_1 + 0x20)), (*(byte *)(param_1 + 0x38) & 1) == 0
      )))) goto LAB_00968060;
  bVar1 = bVar3 & 0xf;
  if ((*(int *)(param_1 + 0x1c) == 0) && (iVar5 = FUN_007d60c4(&local_80), iVar5 != 0)) {
    bVar11 = true;
    FUN_007d6120(&local_80,1);
  }
  else {
    bVar11 = false;
  }
  if (bVar1 == 5) {
    FUN_007d6508(&local_80);
  }
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) goto LAB_00968060;
  if (*(int *)(param_1 + 0x28) == 0) {
    FUN_007d6120(&local_80,*(undefined4 *)(param_1 + 0x24));
    if ((*(byte *)(param_1 + 0x5c) & 1) == 0) goto LAB_00968060;
    if (!bVar11 && ((*(byte *)(param_1 + 0x3c) ^ 0xff) & 1) == 0) {
      FUN_007d6508(&local_80);
    }
  }
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) goto LAB_00968060;
  if ((*(int *)(param_1 + 0x28) == 1) && (*(int *)(param_1 + 0x10) == 0)) {
    FUN_007d6508(&local_80);
    if ((*(byte *)(param_1 + 0x5c) & 1) == 0) goto LAB_00968060;
    if (!bVar11 && ((*(byte *)(param_1 + 0x3c) ^ 0xff) & 1) == 0) {
      FUN_007d6508(&local_80);
    }
  }
  if ((*(byte *)(param_1 + 0x5c) & 1) == 0) goto LAB_00968060;
  uVar4 = uVar4 % 5;
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_007d6508(&local_80);
  }
  if (uVar4 == 1) {
    FUN_007d6120(&local_80,1);
LAB_00967c50:
    iVar5 = FUN_007d60c4(&local_80);
    if (iVar5 == 0) goto LAB_00967cb0;
    uVar6 = FUN_007d6508(&local_80);
    uVar10 = 1;
    local_78._0_5_ = CONCAT14(1,(int)local_78);
    if (((0x1f < uVar6) || ((int)local_78 < 0)) ||
       ((uVar4 == 1 && ((uVar7 = FUN_007d6508(&local_80), 0x1f < uVar7 || ((int)local_78 < 0))))))
    goto joined_r0x00967c38;
    local_78._0_5_ = CONCAT14(1,(int)local_78);
  }
  else {
    if ((uVar4 < 4) && (uVar4 != 2)) goto LAB_00967c50;
LAB_00967cb0:
    uVar10 = 1;
    local_78._0_5_ = CONCAT14(1,(int)local_78);
    if ((int)local_78 < 0) goto joined_r0x00967c38;
  }
  if ((param_4 & 0xfe) == 0x14) {
    uVar9 = FUN_004249b0();
    if ((uVar9 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../common_video/h264/h264_bitstream_parser.cc",0x493,
                   "Unsupported nal unit type.");
      uVar10 = 2;
    }
    else {
      uVar10 = 2;
    }
  }
  else {
    if ((uVar4 != 2) && (uVar4 != 4)) {
      iVar5 = FUN_007d60c4(&local_80);
      if (iVar5 != 0) {
        do {
          uVar8 = FUN_007d6508(&local_80);
          if ((uVar8 < 2) || (uVar8 == 2)) {
            FUN_007d6508(&local_80);
          }
          else if (uVar8 == 3) break;
          local_78._0_5_ = CONCAT14(1,(int)local_78);
        } while (-1 < (int)local_78);
      }
      if ((uVar4 == 1) && (iVar5 = FUN_007d60c4(&local_80), iVar5 != 0)) {
        do {
          uVar8 = FUN_007d6508(&local_80);
          if ((uVar8 < 2) || (uVar8 == 2)) {
            FUN_007d6508(&local_80);
          }
          else if (uVar8 == 3) goto LAB_00967da4;
          uVar10 = 1;
          local_78._0_5_ = CONCAT14(1,(int)local_78);
        } while (-1 < (int)local_78);
        goto joined_r0x00967c38;
      }
    }
LAB_00967da4:
    uVar10 = 1;
    local_78._0_5_ = CONCAT14(1,(int)local_78);
    if (-1 < (int)local_78) {
      if ((*(byte *)(param_1 + 0x5c) & 1) != 0) {
        if (((*(char *)(param_1 + 0x3d) == '\x01') && ((uVar4 == 0 || (uVar4 == 3)))) ||
           ((uVar4 == 1 && (*(int *)(param_1 + 0x48) == 1)))) {
          FUN_007d6508(&local_80);
          if ((*(byte *)(param_1 + 0x38) & 1) == 0) goto LAB_00968060;
          if ((*(int *)(param_1 + 0x18) == 0) && (*(char *)(param_1 + 0x14) != '\0')) {
            FUN_007d6508(&local_80);
            bVar11 = false;
          }
          else {
            bVar11 = true;
          }
          uVar8 = 0;
          do {
            iVar5 = FUN_007d60c4(&local_80);
            if (iVar5 != 0) {
              FUN_007d6508(&local_80);
              FUN_007d6508(&local_80);
            }
            if ((!bVar11) && (iVar5 = FUN_007d60c4(&local_80), iVar5 != 0)) {
              FUN_007d6508(&local_80);
              FUN_007d6508(&local_80);
              FUN_007d6508(&local_80);
              FUN_007d6508(&local_80);
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 <= uVar6);
          if (uVar4 == 1) {
            uVar6 = 0;
            do {
              iVar5 = FUN_007d60c4(&local_80);
              if (iVar5 != 0) {
                FUN_007d6508(&local_80);
                FUN_007d6508(&local_80);
              }
              if ((!bVar11) && (iVar5 = FUN_007d60c4(&local_80), iVar5 != 0)) {
                FUN_007d6508(&local_80);
                FUN_007d6508(&local_80);
                FUN_007d6508(&local_80);
                FUN_007d6508(&local_80);
              }
              uVar6 = uVar6 + 1;
            } while (uVar6 <= uVar7);
          }
        }
        if ((bVar3 & 0x60) != 0) {
          if (bVar1 == 5) {
            FUN_007d6120(&local_80,2);
          }
          else {
            iVar5 = FUN_007d60c4(&local_80);
            if (iVar5 != 0) {
              do {
                uVar6 = FUN_007d6508(&local_80);
                if (uVar6 < 7) {
                  if ((0x54U >> (ulong)(uVar6 & 0x1f) & 1) == 0) {
                    if ((10U >> (ulong)(uVar6 & 0x1f) & 1) == 0) {
                      if (uVar6 == 0) break;
                    }
                    else {
                      FUN_007d6508(&local_80);
                      if ((uVar6 & 0xfffffffe) == 2) goto LAB_00967f4c;
                    }
                  }
                  else {
LAB_00967f4c:
                    FUN_007d6508(&local_80);
                  }
                }
                local_78._0_5_ = CONCAT14(1,(int)local_78);
              } while (-1 < (int)local_78);
            }
          }
        }
        if ((*(byte *)(param_1 + 0x5c) & 1) != 0) {
          if (((*(char *)(param_1 + 0x3e) == '\x01') && (uVar4 != 2)) && (uVar4 != 4)) {
            FUN_007d6508(&local_80);
          }
          iVar5 = FUN_007d6670(&local_80);
          uVar10 = 1;
          local_78._0_5_ = CONCAT14(1,(int)local_78);
          if (-1 < (int)local_78) {
            iVar2 = -iVar5;
            if (-1 < iVar5) {
              iVar2 = iVar5;
            }
            if (iVar2 < 0x34) {
              uVar10 = 0;
              *(int *)(param_1 + 0x60) = iVar5;
              *(undefined1 *)(param_1 + 100) = 1;
            }
            else {
              uVar9 = FUN_004022fc();
              if ((uVar9 & 1) == 0) {
                FUN_00623bb0(&DAT_001f4e98,"../../common_video/h264/h264_bitstream_parser.cc",0x992,
                             "Parsed QP value out of range.");
              }
            }
          }
          goto joined_r0x00967c38;
        }
      }
LAB_00968060:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                );
    }
  }
joined_r0x00967c38:
  if (local_70 != (undefined1 *)0x0) {
    if (puStack_68 + -1 < puStack_68 + -(long)local_70) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    puStack_68 = local_70;
    operator_delete(local_70);
  }
  return uVar10;
}


// ===== 009680a8  FUN_009680a8 =====

void FUN_009680a8(long param_1,undefined1 *param_2,long param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  char cVar3;
  uint uVar4;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined1 local_44;
  undefined7 uStack_43;
  undefined8 uStack_3c;
  char local_34;
  
  if (param_3 != 0) {
    uVar4 = FUN_0087b5fc(*param_2);
    uVar1 = uVar4 & 0xff;
    if (0xe < uVar1) {
LAB_00968148:
      FUN_00967a1c(param_1,param_2,param_3);
      return;
    }
    if ((0x5240U >> (ulong)(uVar4 & 0x1f) & 1) == 0) {
      if (uVar1 == 7) {
        puVar2 = (undefined1 *)0x0;
        if (param_3 + -1 != 0) {
          puVar2 = param_2 + 1;
        }
        FUN_0087d8cc(&local_64,puVar2,param_3 + -1);
        cVar3 = *(char *)(param_1 + 0x38);
        if (cVar3 == local_34) {
          if (cVar3 != '\0') {
            *(undefined8 *)(param_1 + 0x10) = uStack_5c;
            *(undefined8 *)(param_1 + 8) = local_64;
            *(undefined8 *)(param_1 + 0x20) = uStack_4c;
            *(undefined8 *)(param_1 + 0x18) = local_54;
            *(undefined8 *)(param_1 + 0x30) = uStack_3c;
            *(ulong *)(param_1 + 0x28) = CONCAT71(uStack_43,local_44);
          }
        }
        else if (cVar3 == '\0') {
          if ((undefined8 *)(param_1 + 8) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          FUN_0087d8ac(param_1 + 8,&local_64);
          *(undefined1 *)(param_1 + 0x38) = 1;
        }
        else {
          FUN_0087d8c4(param_1 + 8);
          *(undefined1 *)(param_1 + 0x38) = 0;
        }
        if (local_34 == '\x01') {
          FUN_0087d8c4(&local_64);
        }
      }
      else {
        if (uVar1 != 8) goto LAB_00968148;
        puVar2 = (undefined1 *)0x0;
        if (param_3 + -1 != 0) {
          puVar2 = param_2 + 1;
        }
        FUN_0087af7c(&local_64,puVar2,param_3 + -1);
        *(undefined8 *)(param_1 + 0x44) = uStack_5c;
        *(undefined8 *)(param_1 + 0x3c) = local_64;
        *(undefined8 *)(param_1 + 0x54) = uStack_4c;
        *(undefined8 *)(param_1 + 0x4c) = local_54;
        *(undefined1 *)(param_1 + 0x5c) = local_44;
      }
    }
  }
  return;
}


// ===== 00968204  FUN_00968204 =====

void FUN_00968204(undefined8 param_1,long param_2,ulong param_3)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0087b4ac(&local_60,param_2,param_3);
  puVar1 = puStack_58;
  for (puVar3 = local_60; puVar3 != puVar1; puVar3 = puVar3 + 0x18) {
    uVar5 = *(ulong *)(puVar3 + 8);
    uVar4 = param_3 - uVar5;
    if (param_3 < uVar5 || uVar4 == 0) {
      uVar4 = 0;
      lVar2 = 0;
    }
    else {
      if (*(ulong *)(puVar3 + 0x10) <= uVar4) {
        uVar4 = *(ulong *)(puVar3 + 0x10);
      }
      lVar2 = 0;
      if (uVar4 != 0) {
        lVar2 = uVar5 + param_2;
      }
    }
    FUN_009680a8(param_1,lVar2,uVar4);
  }
  if (local_60 != (undefined1 *)0x0) {
    uVar4 = (ulong)(((long)local_60 - (long)puStack_58) * 0x1555555555555555) >> 3;
    uVar5 = (long)puStack_58 * -0x1555555555555555 - 8U >> 3;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    puVar3 = puStack_58;
    if ((1 < uVar4) && ((((int)local_60 - (int)puStack_58 | -(int)puStack_58) & 7U) == 0)) {
      uVar4 = uVar4 & 0x1ffffffffffffffe;
      puVar3 = puStack_58 + uVar4 * -0x18;
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    while (puVar3 != local_60) {
      puVar3 = puVar3 + -0x18;
      if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    puStack_58 = local_60;
    operator_delete(local_60);
  }
  return;
}


// ===== 00968360  FUN_00968360 =====

ulong FUN_00968360(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if ((*(char *)(param_1 + 100) == '\x01') && (*(char *)(param_1 + 0x5c) == '\x01')) {
    uVar1 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x60) + 0x1a;
    if (0x33 < uVar1) {
      uVar2 = FUN_004249b0();
      if ((uVar2 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../common_video/h264/h264_bitstream_parser.cc",0xb33,
                     "Parsed invalid QP from bitstream.");
      }
      return 0;
    }
    return (ulong)uVar1 | 0x100000000;
  }
  return 0;
}


// ===== 009683e8  FUN_009683e8 =====

void FUN_009683e8(byte *param_1,int *param_2,long *param_3,undefined8 param_4)

{
  uint uVar1;
  long *******ppppppplVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  char *pcVar11;
  long ******local_98;
  ulong local_90;
  byte bStack_81;
  
  FUN_008a5364(&local_98,param_3);
  bVar6 = FUN_008a5864(&local_98);
  FUN_008a56ec(&local_98);
  *param_1 = bVar6 & 1;
  (**(code **)(*param_3 + 0x10))
            (&local_98,param_3,"WebRTC-BitrateAdjusterUseNewfangledHeadroomAdjustment",0x35);
  if (-1 < (char)bStack_81) {
    local_90 = (ulong)bStack_81;
  }
  if (local_90 < 8) {
    bVar5 = true;
  }
  else {
    ppppppplVar2 = (long *******)local_98;
    if (-1 < (char)bStack_81) {
      ppppppplVar2 = &local_98;
    }
    bVar5 = *ppppppplVar2 != (long ******)0x64656c6261736944;
  }
  if ((char)bStack_81 < '\0') {
    operator_delete(local_98);
  }
  param_1[1] = bVar5;
  FUN_007ba8e0(param_1 + 8);
  param_1[0x170] = 0;
  param_1[0x171] = 0;
  param_1[0x172] = 0;
  param_1[0x173] = 0;
  param_1[0x174] = 0;
  param_1[0x175] = 0;
  param_1[0x176] = 0;
  param_1[0x177] = 0;
  param_1[0x188] = 0;
  param_1[0x189] = 0;
  param_1[0x18a] = 0;
  param_1[0x18b] = 0;
  param_1[0x18c] = 0;
  param_1[0x18d] = 0;
  param_1[0x18e] = 0;
  param_1[399] = 0;
  param_1[0x1a0] = 0;
  param_1[0x1a1] = 0;
  param_1[0x1a2] = 0;
  param_1[0x1a3] = 0;
  param_1[0x1a4] = 0;
  param_1[0x1a5] = 0;
  param_1[0x1a6] = 0;
  param_1[0x1a7] = 0;
  param_1[0x1b8] = 0;
  param_1[0x1b9] = 0;
  param_1[0x1ba] = 0;
  param_1[0x1bb] = 0;
  param_1[0x1bc] = 0;
  param_1[0x1bd] = 0;
  param_1[0x1be] = 0;
  param_1[0x1bf] = 0;
  param_1[0x1d0] = 0;
  param_1[0x1d1] = 0;
  param_1[0x1d2] = 0;
  param_1[0x1d3] = 0;
  param_1[0x1d4] = 0;
  param_1[0x1d5] = 0;
  param_1[0x1d6] = 0;
  param_1[0x1d7] = 0;
  param_1[0x1f0] = 0;
  param_1[0x1f1] = 0;
  param_1[0x1f2] = 0;
  param_1[499] = 0;
  param_1[500] = 0;
  param_1[0x1f5] = 0;
  param_1[0x1f6] = 0;
  param_1[0x1f7] = 0;
  param_1[0x1e8] = 0;
  param_1[0x1e9] = 0;
  param_1[0x1ea] = 0;
  param_1[0x1eb] = 0;
  param_1[0x1ec] = 0;
  param_1[0x1ed] = 0;
  param_1[0x1ee] = 0;
  param_1[0x1ef] = 0;
  param_1[0x200] = 0;
  param_1[0x201] = 0;
  param_1[0x202] = 0;
  param_1[0x203] = 0;
  param_1[0x204] = 0;
  param_1[0x205] = 0;
  param_1[0x206] = 0;
  param_1[0x207] = 0;
  param_1[0x1f8] = 0;
  param_1[0x1f9] = 0;
  param_1[0x1fa] = 0;
  param_1[0x1fb] = 0;
  param_1[0x1fc] = 0;
  param_1[0x1fd] = 0;
  param_1[0x1fe] = 0;
  param_1[0x1ff] = 0;
  param_1[0x210] = 0;
  param_1[0x211] = 0;
  param_1[0x212] = 0;
  param_1[0x213] = 0;
  param_1[0x214] = 0;
  param_1[0x215] = 0;
  param_1[0x216] = 0;
  param_1[0x217] = 0;
  param_1[0x208] = 0;
  param_1[0x209] = 0;
  param_1[0x20a] = 0;
  param_1[0x20b] = 0;
  param_1[0x20c] = 0;
  param_1[0x20d] = 0;
  param_1[0x20e] = 0;
  param_1[0x20f] = 0;
  param_1[0x220] = 0;
  param_1[0x221] = 0;
  param_1[0x222] = 0;
  param_1[0x223] = 0;
  param_1[0x224] = 0;
  param_1[0x225] = 0;
  param_1[0x226] = 0;
  param_1[0x227] = 0;
  param_1[0x218] = 0;
  param_1[0x219] = 0;
  param_1[0x21a] = 0;
  param_1[0x21b] = 0;
  param_1[0x21c] = 0;
  param_1[0x21d] = 0;
  param_1[0x21e] = 0;
  param_1[0x21f] = 0;
  param_1[0x230] = 0;
  param_1[0x231] = 0;
  param_1[0x232] = 0;
  param_1[0x233] = 0;
  param_1[0x234] = 0;
  param_1[0x235] = 0;
  param_1[0x236] = 0;
  param_1[0x237] = 0;
  param_1[0x228] = 0;
  param_1[0x229] = 0;
  param_1[0x22a] = 0;
  param_1[0x22b] = 0;
  param_1[0x22c] = 0;
  param_1[0x22d] = 0;
  param_1[0x22e] = 0;
  param_1[0x22f] = 0;
  param_1[0x240] = 0;
  param_1[0x241] = 0;
  param_1[0x242] = 0;
  param_1[0x243] = 0;
  param_1[0x244] = 0;
  param_1[0x245] = 0;
  param_1[0x246] = 0;
  param_1[0x247] = 0;
  param_1[0x238] = 0;
  param_1[0x239] = 0;
  param_1[0x23a] = 0;
  param_1[0x23b] = 0;
  param_1[0x23c] = 0;
  param_1[0x23d] = 0;
  param_1[0x23e] = 0;
  param_1[0x23f] = 0;
  param_1[0x250] = 0;
  param_1[0x251] = 0;
  param_1[0x252] = 0;
  param_1[0x253] = 0;
  param_1[0x254] = 0;
  param_1[0x255] = 0;
  param_1[0x256] = 0;
  param_1[599] = 0;
  param_1[0x248] = 0;
  param_1[0x249] = 0;
  param_1[0x24a] = 0;
  param_1[0x24b] = 0;
  param_1[0x24c] = 0;
  param_1[0x24d] = 0;
  param_1[0x24e] = 0;
  param_1[0x24f] = 0;
  param_1[0x260] = 0;
  param_1[0x261] = 0;
  param_1[0x262] = 0;
  param_1[0x263] = 0;
  param_1[0x264] = 0;
  param_1[0x265] = 0;
  param_1[0x266] = 0;
  param_1[0x267] = 0;
  param_1[600] = 0;
  param_1[0x259] = 0;
  param_1[0x25a] = 0;
  param_1[0x25b] = 0;
  param_1[0x25c] = 0;
  param_1[0x25d] = 0;
  param_1[0x25e] = 0;
  param_1[0x25f] = 0;
  param_1[0x270] = 0;
  param_1[0x271] = 0;
  param_1[0x272] = 0;
  param_1[0x273] = 0;
  param_1[0x274] = 0;
  param_1[0x275] = 0;
  param_1[0x276] = 0;
  param_1[0x277] = 0;
  param_1[0x268] = 0;
  param_1[0x269] = 0;
  param_1[0x26a] = 0;
  param_1[0x26b] = 0;
  param_1[0x26c] = 0;
  param_1[0x26d] = 0;
  param_1[0x26e] = 0;
  param_1[0x26f] = 0;
  param_1[0x280] = 0;
  param_1[0x281] = 0;
  param_1[0x282] = 0;
  param_1[0x283] = 0;
  param_1[0x284] = 0;
  param_1[0x285] = 0;
  param_1[0x286] = 0;
  param_1[0x287] = 0;
  param_1[0x278] = 0;
  param_1[0x279] = 0;
  param_1[0x27a] = 0;
  param_1[0x27b] = 0;
  param_1[0x27c] = 0;
  param_1[0x27d] = 0;
  param_1[0x27e] = 0;
  param_1[0x27f] = 0;
  param_1[0x290] = 0;
  param_1[0x291] = 0;
  param_1[0x292] = 0;
  param_1[0x293] = 0;
  param_1[0x294] = 0;
  param_1[0x295] = 0;
  param_1[0x296] = 0;
  param_1[0x297] = 0;
  param_1[0x288] = 0;
  param_1[0x289] = 0;
  param_1[0x28a] = 0;
  param_1[0x28b] = 0;
  param_1[0x28c] = 0;
  param_1[0x28d] = 0;
  param_1[0x28e] = 0;
  param_1[0x28f] = 0;
  param_1[0x2a0] = 0;
  param_1[0x2a1] = 0;
  param_1[0x2a2] = 0;
  param_1[0x2a3] = 0;
  param_1[0x2a4] = 0;
  param_1[0x2a5] = 0;
  param_1[0x2a6] = 0;
  param_1[0x2a7] = 0;
  param_1[0x298] = 0;
  param_1[0x299] = 0;
  param_1[0x29a] = 0;
  param_1[0x29b] = 0;
  param_1[0x29c] = 0;
  param_1[0x29d] = 0;
  param_1[0x29e] = 0;
  param_1[0x29f] = 0;
  param_1[0x2b0] = 0;
  param_1[0x2b1] = 0;
  param_1[0x2b2] = 0;
  param_1[0x2b3] = 0;
  param_1[0x2b4] = 0;
  param_1[0x2b5] = 0;
  param_1[0x2b6] = 0;
  param_1[0x2b7] = 0;
  param_1[0x2a8] = 0;
  param_1[0x2a9] = 0;
  param_1[0x2aa] = 0;
  param_1[0x2ab] = 0;
  param_1[0x2ac] = 0;
  param_1[0x2ad] = 0;
  param_1[0x2ae] = 0;
  param_1[0x2af] = 0;
  param_1[0x2c0] = 0;
  param_1[0x2c1] = 0;
  param_1[0x2c2] = 0;
  param_1[0x2c3] = 0;
  param_1[0x2c4] = 0;
  param_1[0x2c5] = 0;
  param_1[0x2c6] = 0;
  param_1[0x2c7] = 0;
  param_1[0x2b8] = 0;
  param_1[0x2b9] = 0;
  param_1[0x2ba] = 0;
  param_1[699] = 0;
  param_1[700] = 0;
  param_1[0x2bd] = 0;
  param_1[0x2be] = 0;
  param_1[0x2bf] = 0;
  param_1[0x2c8] = 0;
  param_1[0x2c9] = 0;
  param_1[0x2ca] = 0;
  param_1[0x2cb] = 0;
  *(int *)(param_1 + 0x2cc) = *param_2;
  iVar3 = param_2[0x14a];
  *(undefined8 *)(param_1 + 0x2d8) = param_4;
  *(int *)(param_1 + 0x2d0) = iVar3;
  bVar6 = *(byte *)(param_2 + 8);
  if ((*param_2 == 3) && (bVar6 < 2)) {
    if ((*(ushort *)(param_2 + 0x155) >> 8 & 1) == 0) {
LAB_00968834:
      if (bVar6 == 0) {
        return;
      }
      if ((*(byte *)(param_2 + 0x12) & 1) != 0) {
        uVar7 = param_2[4] * 1000;
        if ((uint)(param_2[4] * 1000) <= (uint)(param_2[0x10] * 1000)) {
          uVar7 = param_2[0x10] * 1000;
        }
        *(uint *)(param_1 + 0x2b8) = uVar7;
        bVar6 = *(byte *)(param_2 + 8);
      }
      if (bVar6 < 2) {
        return;
      }
      if ((char)param_2[0x3a] == '\x01') {
        uVar7 = param_2[4] * 1000;
        if ((uint)(param_2[4] * 1000) <= (uint)(param_2[0x38] * 1000)) {
          uVar7 = param_2[0x38] * 1000;
        }
        *(uint *)(param_1 + 700) = uVar7;
        bVar6 = *(byte *)(param_2 + 8);
      }
      if (bVar6 < 3) {
        return;
      }
      if ((char)param_2[0x62] == '\x01') {
        uVar7 = param_2[4] * 1000;
        if ((uint)(param_2[4] * 1000) <= (uint)(param_2[0x60] * 1000)) {
          uVar7 = param_2[0x60] * 1000;
        }
        *(uint *)(param_1 + 0x2c0) = uVar7;
        bVar6 = *(byte *)(param_2 + 8);
      }
      if (bVar6 < 4) {
        return;
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0x5512,0x9688fc);
      (*pcVar4)();
    }
    uVar7 = FUN_0096a3b0();
    if ((int)uVar7 < 1) {
      return;
    }
    if ((*(byte *)(param_2 + 0x8a) & 1) != 0) {
      uVar1 = param_2[4] * 1000;
      if ((uint)(param_2[4] * 1000) <= (uint)(param_2[0x88] * 1000)) {
        uVar1 = param_2[0x88] * 1000;
      }
      *(uint *)(param_1 + 0x2b8) = uVar1;
    }
    if (uVar7 == 1) {
      return;
    }
    if ((char)param_2[0xb2] == '\x01') {
      uVar1 = param_2[4] * 1000;
      if ((uint)(param_2[4] * 1000) <= (uint)(param_2[0xb0] * 1000)) {
        uVar1 = param_2[0xb0] * 1000;
      }
      *(uint *)(param_1 + 700) = uVar1;
    }
    if (uVar7 == 2) {
      return;
    }
    if ((char)param_2[0xda] == '\x01') {
      uVar1 = param_2[4] * 1000;
      if ((uint)(param_2[4] * 1000) <= (uint)(param_2[0xd8] * 1000)) {
        uVar1 = param_2[0xd8] * 1000;
      }
      *(uint *)(param_1 + 0x2c0) = uVar1;
    }
    if (uVar7 == 3) {
      return;
    }
    if ((char)param_2[0x102] == '\x01') {
      uVar1 = param_2[4] * 1000;
      if ((uint)(param_2[4] * 1000) <= (uint)(param_2[0x100] * 1000)) {
        uVar1 = param_2[0x100] * 1000;
      }
      *(uint *)(param_1 + 0x2c4) = uVar1;
    }
    if (uVar7 == 4) {
      return;
    }
    if ((char)param_2[0x12a] == '\x01') {
      uVar1 = param_2[4] * 1000;
      if ((uint)(param_2[4] * 1000) <= (uint)(param_2[0x128] * 1000)) {
        uVar1 = param_2[0x128] * 1000;
      }
      *(uint *)(param_1 + 0x2c8) = uVar1;
    }
    if (uVar7 == 5) {
      return;
    }
    uVar8 = FUN_004022fc();
    if ((uVar8 & 1) != 0) {
      return;
    }
    pcVar11 = "AV1 scalability mode specifies ";
    uVar10 = 0x29a;
  }
  else {
    if ((*param_2 != 2) || (1 < bVar6)) goto LAB_00968834;
    lVar9 = FUN_007b8ca4(param_2);
    if (*(char *)(lVar9 + 10) == '\0') {
      return;
    }
    if ((*(byte *)(param_2 + 0x8a) & 1) != 0) {
      uVar7 = param_2[4] * 1000;
      if ((uint)(param_2[4] * 1000) <= (uint)(param_2[0x88] * 1000)) {
        uVar7 = param_2[0x88] * 1000;
      }
      *(uint *)(param_1 + 0x2b8) = uVar7;
    }
    lVar9 = FUN_007b8ca4(param_2);
    if (*(byte *)(lVar9 + 10) < 2) {
      return;
    }
    if ((char)param_2[0xb2] == '\x01') {
      uVar7 = param_2[4] * 1000;
      if ((uint)(param_2[4] * 1000) <= (uint)(param_2[0xb0] * 1000)) {
        uVar7 = param_2[0xb0] * 1000;
      }
      *(uint *)(param_1 + 700) = uVar7;
    }
    lVar9 = FUN_007b8ca4(param_2);
    if (*(byte *)(lVar9 + 10) < 3) {
      return;
    }
    if ((char)param_2[0xda] == '\x01') {
      uVar7 = param_2[4] * 1000;
      if ((uint)(param_2[4] * 1000) <= (uint)(param_2[0xd8] * 1000)) {
        uVar7 = param_2[0xd8] * 1000;
      }
      *(uint *)(param_1 + 0x2c0) = uVar7;
    }
    lVar9 = FUN_007b8ca4(param_2);
    if (*(byte *)(lVar9 + 10) < 4) {
      return;
    }
    if ((char)param_2[0x102] == '\x01') {
      uVar7 = param_2[4] * 1000;
      if ((uint)(param_2[4] * 1000) <= (uint)(param_2[0x100] * 1000)) {
        uVar7 = param_2[0x100] * 1000;
      }
      *(uint *)(param_1 + 0x2c4) = uVar7;
    }
    lVar9 = FUN_007b8ca4(param_2);
    if (*(byte *)(lVar9 + 10) < 5) {
      return;
    }
    if ((char)param_2[0x12a] == '\x01') {
      uVar7 = param_2[4] * 1000;
      if ((uint)(param_2[4] * 1000) <= (uint)(param_2[0x128] * 1000)) {
        uVar7 = param_2[0x128] * 1000;
      }
      *(uint *)(param_1 + 0x2c8) = uVar7;
    }
    lVar9 = FUN_007b8ca4(param_2);
    if (*(byte *)(lVar9 + 10) < 6) {
      return;
    }
    uVar8 = FUN_004022fc();
    if ((uVar8 & 1) != 0) {
      return;
    }
    lVar9 = FUN_007b8ca4(param_2);
    uVar7 = (uint)*(byte *)(lVar9 + 10);
    pcVar11 = "VP9 specifies ";
    uVar10 = 0x31a;
  }
  FUN_00623bb0(&DAT_001f4ea6,"../../video/encoder_bitrate_adjuster.cc",uVar10,pcVar11,uVar7,
               " spatial layers, which exceeds kMaxSpatialLayers (",5,&DAT_001ca519);
  return;
}


// ===== 009688fc  FUN_009688fc =====

/* WARNING: Type propagation algorithm not settling */

void FUN_009688fc(long param_1)

{
  byte bVar1;
  void *pvVar2;
  long lVar3;
  
  pvVar2 = *(void **)(param_1 + 0x2b0);
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  if (pvVar2 != (void *)0x0) {
    FUN_00969e90((long)pvVar2 + 0x18);
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(param_1 + 0x2a8);
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  if (pvVar2 != (void *)0x0) {
    FUN_00969e90((long)pvVar2 + 0x18);
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(param_1 + 0x2a0);
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  if (pvVar2 != (void *)0x0) {
    FUN_00969e90((long)pvVar2 + 0x18);
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(param_1 + 0x298);
  *(undefined8 *)(param_1 + 0x298) = 0;
  if (pvVar2 != (void *)0x0) {
    FUN_00969e90((long)pvVar2 + 0x18);
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(param_1 + 0x290);
  *(undefined8 *)(param_1 + 0x290) = 0;
  if (pvVar2 != (void *)0x0) {
    FUN_00969e90((long)pvVar2 + 0x18);
    operator_delete(pvVar2);
  }
  lVar3 = 0;
  do {
    pvVar2 = *(void **)(param_1 + 0x288 + lVar3);
    *(undefined8 *)(param_1 + 0x288 + lVar3) = 0;
    if (pvVar2 != (void *)0x0) {
      FUN_0096aa6c(pvVar2);
      operator_delete(pvVar2);
    }
    lVar3 = lVar3 + -8;
  } while (lVar3 != -0xa0);
  if ((*(byte *)(param_1 + 0x1d0) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x1b8);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x1d8));
    bVar1 = *(byte *)(param_1 + 0x1b8);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x1a0);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x1c0));
    bVar1 = *(byte *)(param_1 + 0x1a0);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x188);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x1a8));
    bVar1 = *(byte *)(param_1 + 0x188);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x170);
  }
  else {
    operator_delete(*(void **)(param_1 + 400));
    bVar1 = *(byte *)(param_1 + 0x170);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x178));
  }
  FUN_007baa68(param_1 + 8);
  return;
}


// ===== 00968a7c  FUN_00968a7c =====

/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffed8 : 0x009692b4 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00968a7c(undefined8 *param_1,byte *param_2,long param_3)

{
  ulong uVar1;
  char *pcVar2;
  char **ppcVar3;
  undefined8 *puVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  void *pvVar9;
  undefined8 uVar10;
  ulong *puVar11;
  long lVar12;
  double dVar13;
  uint uVar14;
  long lVar15;
  byte *pbVar16;
  ulong uVar17;
  long lVar18;
  ulong *puVar19;
  double *pdVar20;
  byte *pbVar21;
  long lVar22;
  long *plVar23;
  ulong uVar24;
  void *pvVar25;
  long lVar26;
  double dVar27;
  undefined8 *puVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  long local_188;
  undefined1 uStack_171;
  undefined8 **local_170;
  undefined8 **local_168;
  undefined1 *local_160;
  char *local_158;
  undefined8 ***pppuStack_150;
  ulong local_148;
  char **ppcStack_140;
  char *local_138;
  ulong *puStack_130;
  double local_128;
  char **local_120;
  char *local_118;
  double *pdStack_110;
  undefined8 *local_108;
  char **local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  long local_e0 [8];
  byte *local_98;
  
  memcpy(param_2 + 0x10,(void *)(param_3 + 8),0x160);
  uVar8 = (**(code **)(**(long **)(param_2 + 0x2d8) + 0x10))();
  lVar22 = 0;
  local_98 = param_2 + 0x1f0;
  pbVar21 = param_2 + 0x1f0;
  local_e0[4] = 0;
  local_e0[3] = 0;
  local_e0[2] = 0;
  local_e0[1] = 0;
  local_e0[0] = 0;
  do {
    lVar26 = 0;
    puVar19 = (ulong *)(param_2 + lVar22 * 0x18 + 0x170);
    uVar24 = 0;
    local_e0[lVar22] = 0;
    do {
      iVar6 = FUN_007cc028(param_3 + 0xb0,lVar22,uVar24);
      if ((iVar6 == 0) || (*puVar19 >> 1 <= uVar24)) {
LAB_00968bf8:
        pvVar25 = *(void **)(pbVar21 + uVar24 * 8);
        if (pvVar25 != (void *)0x0) {
          pbVar16 = pbVar21 + uVar24 * 8;
          pbVar16[0] = 0;
          pbVar16[1] = 0;
          pbVar16[2] = 0;
          pbVar16[3] = 0;
          pbVar16[4] = 0;
          pbVar16[5] = 0;
          pbVar16[6] = 0;
          pbVar16[7] = 0;
LAB_00968b54:
          FUN_0096aa6c(pvVar25);
          operator_delete(pvVar25);
LAB_00968b68:
          param_2[0x1e8] = 0;
          param_2[0x1e9] = 0;
          param_2[0x1ea] = 0;
          param_2[0x1eb] = 0;
          param_2[0x1ec] = 0;
          param_2[0x1ed] = 0;
          param_2[0x1ee] = 0;
          param_2[0x1ef] = 0;
        }
      }
      else {
        puVar11 = puVar19 + 1;
        if ((*puVar19 & 1) != 0) {
          puVar11 = (ulong *)puVar19[1];
        }
        if (*(byte *)((long)puVar11 + uVar24) == 0) goto LAB_00968bf8;
        lVar12 = *(long *)(pbVar21 + uVar24 * 8);
        lVar26 = lVar26 + 1;
        local_e0[lVar22] = lVar26;
        if (lVar12 == 0) {
          iVar6 = *(int *)(param_2 + 0x2d0);
          pvVar9 = operator_new(0x90);
          FUN_0096aa3c(pvVar9,3000,*(undefined4 *)(param_2 + 0x2cc),iVar6 == 1);
          pvVar25 = *(void **)(pbVar21 + uVar24 * 8);
          *(void **)(pbVar21 + uVar24 * 8) = pvVar9;
          if (pvVar25 != (void *)0x0) goto LAB_00968b54;
          goto LAB_00968b68;
        }
      }
      uVar24 = uVar24 + 1;
    } while (uVar24 != 4);
    if ((param_2[1] & 1) != 0) {
      iVar6 = FUN_007cc138(param_3 + 0xb0,lVar22);
      pvVar25 = *(void **)(param_2 + lVar22 * 8 + 0x290);
      if (iVar6 == 0) {
        pbVar16 = param_2 + lVar22 * 8 + 0x290;
        pbVar16[0] = 0;
        pbVar16[1] = 0;
        pbVar16[2] = 0;
        pbVar16[3] = 0;
        pbVar16[4] = 0;
        pbVar16[5] = 0;
        pbVar16[6] = 0;
        pbVar16[7] = 0;
        if (pvVar25 != (void *)0x0) {
          FUN_00969e90((long)pvVar25 + 0x18);
          operator_delete(pvVar25);
        }
      }
      else {
        if (pvVar25 == (void *)0x0) {
          pvVar25 = operator_new(0x48);
          FUN_0096ccc0(pvVar25,100,3000000);
          pvVar9 = *(void **)(param_2 + lVar22 * 8 + 0x290);
          *(void **)(param_2 + lVar22 * 8 + 0x290) = pvVar25;
          if (pvVar9 != (void *)0x0) {
            FUN_00969e90((long)pvVar9 + 0x18);
            operator_delete(pvVar9);
            pvVar25 = *(void **)(param_2 + lVar22 * 8 + 0x290);
          }
        }
        FUN_0096cd84(pvVar25,iVar6,uVar8);
      }
    }
    lVar22 = lVar22 + 1;
    pbVar21 = pbVar21 + 0x20;
  } while (lVar22 != 5);
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
  lVar22 = 0;
  lVar26 = 0;
  local_f8 = (undefined8 *)0x0;
  uVar24 = uVar8 / 1000;
  local_f0 = (undefined8 *)0x0;
  local_e8 = (undefined8 *)0x0;
  if (499 < uVar8 % 1000) {
    uVar24 = uVar24 + 1;
  }
  uVar17 = -(-uVar8 / 1000) - (ulong)(500 < -uVar8 % 1000);
  uVar1 = uVar17;
  if (-1 < (long)uVar8) {
    uVar1 = uVar24;
  }
  do {
    local_168 = &local_f8;
    local_170 = &local_108;
    local_108 = local_f0;
    if (local_f0 < local_e8) {
      if (local_f0 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      local_108 = local_f0 + 3;
      *local_f0 = 0;
      local_f0[1] = 0;
      local_f0[2] = 0;
    }
    else {
      FUN_00969d50(&local_170);
    }
    puVar28 = local_108;
    local_f0 = local_108;
    if (local_f8 == local_108) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:439: libc++ Hardening assertion !empty() failed: back() called on an empty vector\n"
                );
    }
    pdVar20 = (double *)(local_108 + -3);
    uVar7 = FUN_007cc138(param_3 + 0xb0,lVar22);
    puVar28[-1] = (ulong)uVar7;
    if (*(ulong *)(param_2 + 0x1e8) < 0x1e) {
      dVar13 = 1.2;
LAB_00968df0:
      puVar28[-2] = dVar13;
      dVar31 = dVar13;
LAB_00968df8:
      if (dVar13 <= 1.0) {
        dVar13 = 1.0;
      }
      dVar27 = 2.0;
      if (dVar31 == 2.0 || dVar31 < 2.0 != NAN(dVar31)) {
        dVar27 = dVar31;
      }
      *pdVar20 = dVar27;
      if (dVar27 == dVar13 || dVar27 < dVar13 != (NAN(dVar27) || NAN(dVar13))) {
        lVar15 = 0;
      }
      else {
        lVar15 = (long)((dVar27 - dVar13) * (double)(long)puVar28[-1]);
      }
      lVar12 = 0x7fffffffffffffff;
      if ((lVar26 != 0x7fffffffffffffff) && (lVar15 != 0x7fffffffffffffff)) {
        lVar12 = -0x8000000000000000;
        if (lVar15 != -0x8000000000000000 && lVar26 != -0x8000000000000000) {
          lVar12 = lVar15 + lVar26;
        }
      }
    }
    else {
      dVar13 = 1.0;
      if ((uVar7 == 0) || (lVar12 = local_e0[lVar22], lVar12 == 0)) goto LAB_00968df0;
      if (lVar12 == 1) {
        auVar32 = FUN_0096be40(*(undefined8 *)(param_2 + lVar22 * 0x20 + 0x1f0),uVar1);
        dVar13 = auVar32._0_8_;
        if ((auVar32 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
          dVar13 = 1.2;
        }
        *pdVar20 = dVar13;
        if (param_2[1] == 1) {
          auVar32 = FUN_0096d35c(*(undefined8 *)(param_2 + lVar22 * 8 + 0x290),uVar8);
        }
        else {
          auVar32 = FUN_0096bfb4(*(undefined8 *)(param_2 + lVar22 * 0x20 + 0x1f0),uVar1);
        }
LAB_00968f98:
        dVar13 = auVar32._0_8_;
        if ((auVar32 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
          dVar13 = 1.2;
        }
        puVar28[-2] = dVar13;
      }
      else {
        lVar15 = 0;
        *pdVar20 = 0.0;
        puVar28[-2] = 0;
        do {
          if (lVar15 == 5) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(0x5512,0x96986c);
            (*pcVar5)();
          }
          auVar32 = FUN_0096be40(*(undefined8 *)(local_98 + lVar15 * 8),uVar1);
          auVar33 = FUN_0096bfb4(*(undefined8 *)(local_98 + lVar15 * 8),uVar1);
          if (((auVar32 & (undefined1  [16])0x1) == (undefined1  [16])0x0) ||
             ((auVar33 & (undefined1  [16])0x1) == (undefined1  [16])0x0)) {
            dVar13 = 1.2;
            puVar28[-2] = 0x3ff3333333333333;
            *pdVar20 = 1.2;
            break;
          }
          uVar7 = FUN_007cc028(param_3 + 0xb0,lVar22,lVar15);
          lVar15 = lVar15 + 1;
          dVar13 = (double)puVar28[-2] + ((double)uVar7 / (double)(long)puVar28[-1]) * auVar33._0_8_
          ;
          puVar28[-3] = (double)puVar28[-3] +
                        ((double)uVar7 / (double)(long)puVar28[-1]) * auVar32._0_8_;
          puVar28[-2] = dVar13;
        } while (lVar12 != lVar15);
        if (param_2[1] == 1) {
          auVar32 = FUN_0096d35c(*(undefined8 *)(param_2 + lVar22 * 8 + 0x290),uVar8);
          goto LAB_00968f98;
        }
      }
      dVar31 = *pdVar20;
      if (1.0 <= dVar31) goto LAB_00968df8;
      *pdVar20 = 1.0;
      lVar12 = lVar26;
    }
    lVar22 = lVar22 + 1;
    local_98 = local_98 + 0x20;
    lVar26 = lVar12;
  } while (lVar22 != 5);
  if ((*param_2 & 1) == 0) {
    local_188 = 0;
  }
  else {
    lVar22 = *(long *)(param_3 + 0x160);
    local_188 = 0x7fffffffffffffff;
    if ((lVar22 != 0x7fffffffffffffff) && (local_188 = lVar22, lVar22 != -0x8000000000000000)) {
      local_188 = lVar22 - (ulong)*(uint *)(param_3 + 0xb0);
    }
  }
  if (lVar12 == 0) {
    dVar13 = 0.0;
  }
  else {
    if (local_188 == -0x8000000000000000) {
      dVar13 = -INFINITY;
    }
    else if (local_188 == 0x7fffffffffffffff) {
      dVar13 = INFINITY;
    }
    else {
      dVar13 = (double)local_188;
    }
    dVar13 = (double)NEON_fminnm(dVar13 / (double)lVar12,0x3ff0000000000000);
  }
  lVar22 = 0;
  lVar26 = 0;
  plVar23 = local_e0;
  lVar12 = 0xae;
  lVar15 = 0x1f0;
  if (-1 < (long)uVar8) {
    uVar17 = uVar24;
  }
  do {
    if ((ulong)(((long)local_f0 - (long)local_f8 >> 3) * -0x5555555555555555) <= lVar12 - 0xaeU) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                );
    }
    pdVar20 = (double *)((long)local_f8 + lVar22);
    dVar29 = 0.0;
    dVar31 = *pdVar20;
    dVar27 = pdVar20[1];
    if (dVar27 <= 1.0) {
      dVar27 = 1.0;
    }
    if (dVar31 != dVar27 && dVar31 < dVar27 == (NAN(dVar31) || NAN(dVar27))) {
      dVar29 = (double)(long)((dVar31 - dVar27) * (double)(long)pdVar20[2]);
    }
    uVar8 = (ulong)(dVar13 * dVar29);
    if (0 < (long)uVar8) {
      lVar18 = *(long *)((long)local_f8 + lVar22 + 0x10);
      dVar29 = (double)lVar18;
      dVar27 = INFINITY;
      if (uVar8 != 0x7fffffffffffffff) {
        dVar27 = (double)uVar8;
      }
      if (lVar18 == 0x7fffffffffffffff) {
        dVar29 = INFINITY;
      }
      dVar30 = -INFINITY;
      if (lVar18 != -0x8000000000000000) {
        dVar30 = dVar29;
      }
      dVar31 = dVar31 * (dVar30 / (dVar27 + dVar30));
    }
    uVar7 = *(uint *)(param_2 + lVar12 * 4);
    uVar8 = *(ulong *)((long)local_f8 + lVar22 + 0x10);
    if (((uVar7 == 0) || ((long)uVar8 < 1)) || (uVar8 <= uVar7)) {
      if (0 < (long)uVar8) {
        dVar27 = dVar31;
        lVar18 = lVar26 * 0x18;
        goto LAB_009691e0;
      }
      puVar19 = (ulong *)((long)local_f8 + lVar22 + 0x10);
    }
    else {
      dVar29 = INFINITY;
      if (uVar8 != 0x7fffffffffffffff) {
        dVar29 = (double)uVar8;
      }
      dVar27 = dVar29 / (double)uVar7;
      lVar18 = lVar22;
      if (dVar31 <= dVar29 / (double)uVar7) {
        dVar27 = dVar31;
      }
LAB_009691e0:
      puVar19 = (ulong *)((long)local_f8 + lVar18 + 0x10);
      uVar8 = FUN_0044075c();
      dVar29 = local_128;
      dVar31 = dVar27;
      if ((uVar8 & 1) == 0) {
        local_170 = (undefined8 **)0x1e0024;
        local_168 = (undefined8 **)0x9c0;
        local_160 = &uStack_171;
        pppuStack_150 = &local_170;
        local_158 = "Utilization factors for simulcast/spatial index ";
        ppcStack_140 = &local_158;
        puStack_130 = &local_148;
        local_138 = ": link = ";
        local_128 = *pdVar20;
        pdStack_110 = &local_128;
        local_118 = ", media = ";
        local_108 = (undefined8 *)pdVar20[1];
        local_100 = &local_118;
        dVar30 = *pdVar20;
        puVar28 = local_108;
        if ((double)local_108 <= 1.0) {
          puVar28 = (undefined8 *)0x3ff0000000000000;
        }
        if (dVar30 == (double)puVar28 ||
            dVar30 < (double)puVar28 != (NAN(dVar30) || NAN((double)puVar28))) {
          lVar18 = 0;
        }
        else {
          lVar18 = (long)((dVar30 - (double)puVar28) * (double)(long)*puVar19);
        }
        pcVar2 = *local_120;
        ppcVar3 = local_120 + 1;
        puVar28 = *(undefined8 **)(*ppcVar3 + 8);
        puVar4 = (undefined8 *)puVar28[1];
        local_148 = lVar12 - 0xaeU;
        local_120 = &local_138;
        FUN_00623bb0(dVar29,local_108,dVar27,&DAT_00229950,*puVar4,*(undefined4 *)(puVar4 + 1),
                     *puVar28,*(undefined8 *)*ppcVar3,pcVar2,", media = ",", wanted overshoot = ",
                     lVar18," bps, available headroom = ",local_188,
                     " bps, total utilization factor = ");
      }
    }
    if (*plVar23 == 1) {
      uVar8 = FUN_007cc028(param_3 + 0xb0,lVar12 + -0xae,0);
      uVar24 = *puVar19;
      if ((long)uVar24 <= (long)(uVar8 & 0xffffffff)) goto LAB_00969340;
      uVar10 = 0;
      uVar14 = (uint)((double)uVar24 / dVar31 + 0.5);
      uVar7 = (uint)uVar24;
      if (uVar14 <= (uint)uVar24) {
        uVar7 = uVar14;
      }
LAB_009694ac:
      FUN_007cbed8(param_1,lVar12 + -0xae,uVar10,uVar7);
    }
    else {
LAB_00969340:
      uVar8 = FUN_007cbfa0(param_3 + 0xb0,lVar12 + -0xae,0);
      if ((uVar8 & 1) != 0) {
        uVar7 = FUN_007cc028(param_3 + 0xb0,lVar12 + -0xae,0);
        uVar14 = (uint)((double)uVar7 / dVar31 + 0.5);
        uVar7 = FUN_007cc028(param_3 + 0xb0,lVar12 + -0xae,0);
        if (uVar14 <= uVar7) {
          uVar7 = uVar14;
        }
        FUN_007cbed8(param_1,lVar12 + -0xae,0,uVar7);
      }
      uVar8 = FUN_007cbfa0(param_3 + 0xb0,lVar12 + -0xae,1);
      if ((uVar8 & 1) != 0) {
        uVar7 = FUN_007cc028(param_3 + 0xb0,lVar12 + -0xae,1);
        uVar14 = (uint)((double)uVar7 / dVar31 + 0.5);
        uVar7 = FUN_007cc028(param_3 + 0xb0,lVar12 + -0xae,1);
        if (uVar14 <= uVar7) {
          uVar7 = uVar14;
        }
        FUN_007cbed8(param_1,lVar12 + -0xae,1,uVar7);
      }
      uVar8 = FUN_007cbfa0(param_3 + 0xb0,lVar12 + -0xae,2);
      if ((uVar8 & 1) != 0) {
        uVar7 = FUN_007cc028(param_3 + 0xb0,lVar12 + -0xae,2);
        uVar14 = (uint)((double)uVar7 / dVar31 + 0.5);
        uVar7 = FUN_007cc028(param_3 + 0xb0,lVar12 + -0xae,2);
        if (uVar14 <= uVar7) {
          uVar7 = uVar14;
        }
        FUN_007cbed8(param_1,lVar12 + -0xae,2,uVar7);
      }
      uVar8 = FUN_007cbfa0(param_3 + 0xb0,lVar12 + -0xae,3);
      if ((uVar8 & 1) != 0) {
        uVar7 = FUN_007cc028(param_3 + 0xb0,lVar12 + -0xae,3);
        uVar14 = (uint)((double)uVar7 / dVar31 + 0.5);
        uVar7 = FUN_007cc028(param_3 + 0xb0,lVar12 + -0xae,3);
        uVar10 = 3;
        if (uVar14 <= uVar7) {
          uVar7 = uVar14;
        }
        goto LAB_009694ac;
      }
    }
    uVar7 = FUN_007cc138(param_1,lVar12 + -0xae);
    if ((0 < (long)*puVar19) && (uVar7 < *(uint *)(param_2 + lVar12 * 4))) {
      iVar6 = FUN_007cc028(param_1,lVar12 + -0xae,0);
      FUN_007cbed8(param_1,lVar12 + -0xae,0,(iVar6 - uVar7) + *(int *)(param_2 + lVar12 * 4));
    }
    pbVar21 = param_2 + lVar22 + 0x178;
    iVar6 = FUN_007cc028(param_1,lVar12 + -0xae,0);
    if ((iVar6 != 0) && (*(long *)(param_2 + lVar15) != 0)) {
      if (*(ulong *)(param_2 + lVar22 + 0x170) < 2) goto LAB_009697e0;
      pbVar16 = param_2 + lVar22 + 0x178;
      if ((*(ulong *)(param_2 + lVar22 + 0x170) & 1) != 0) {
        pbVar16 = *(byte **)pbVar21;
      }
      dVar31 = (double)NEON_ucvtf((ulong)*pbVar16);
      if (dVar31 / 255.0 <= 0.0) {
        uVar8 = FUN_004022fc();
        if ((uVar8 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../video/encoder_bitrate_adjuster.cc",0xb9a,
                       "Encoder config has temporal layer with non-zero bitrate allocation but zero framerate allocation."
                      );
        }
      }
      else {
        FUN_0096b94c((dVar31 / 255.0) * *(double *)(param_3 + 0x158),*(long *)(param_2 + lVar15),
                     iVar6,uVar17);
      }
    }
    iVar6 = FUN_007cc028(param_1,lVar12 + -0xae,1);
    if ((iVar6 != 0) && (*(long *)(param_2 + lVar15 + 8) != 0)) {
      if (*(ulong *)(param_2 + lVar22 + 0x170) < 4) goto LAB_009697e0;
      pbVar16 = param_2 + lVar22 + 0x178;
      if ((*(ulong *)(param_2 + lVar22 + 0x170) & 1) != 0) {
        pbVar16 = *(byte **)pbVar21;
      }
      dVar31 = (double)(int)((uint)pbVar16[1] - (uint)*pbVar16) / 255.0;
      if (dVar31 <= 0.0) {
        uVar8 = FUN_004022fc();
        if ((uVar8 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../video/encoder_bitrate_adjuster.cc",0xb9a,
                       "Encoder config has temporal layer with non-zero bitrate allocation but zero framerate allocation."
                      );
        }
      }
      else {
        FUN_0096b94c(dVar31 * *(double *)(param_3 + 0x158),*(long *)(param_2 + lVar15 + 8),iVar6,
                     uVar17);
      }
    }
    iVar6 = FUN_007cc028(param_1,lVar12 + -0xae,2);
    if ((iVar6 != 0) && (*(long *)(param_2 + lVar15 + 0x10) != 0)) {
      if (*(ulong *)(param_2 + lVar22 + 0x170) < 6) goto LAB_009697e0;
      pbVar16 = param_2 + lVar22 + 0x178;
      if ((*(ulong *)(param_2 + lVar22 + 0x170) & 1) != 0) {
        pbVar16 = *(byte **)pbVar21;
      }
      dVar31 = (double)(int)((uint)pbVar16[2] - (uint)pbVar16[1]) / 255.0;
      if (dVar31 <= 0.0) {
        uVar8 = FUN_004022fc();
        if ((uVar8 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../video/encoder_bitrate_adjuster.cc",0xb9a,
                       "Encoder config has temporal layer with non-zero bitrate allocation but zero framerate allocation."
                      );
        }
      }
      else {
        FUN_0096b94c(dVar31 * *(double *)(param_3 + 0x158),*(long *)(param_2 + lVar15 + 0x10),iVar6,
                     uVar17);
      }
    }
    iVar6 = FUN_007cc028(param_1,lVar12 + -0xae,3);
    if ((iVar6 != 0) && (*(long *)(param_2 + lVar15 + 0x18) != 0)) {
      if (*(ulong *)(param_2 + lVar22 + 0x170) < 8) {
LAB_009697e0:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x9697e4);
        (*pcVar5)();
      }
      if ((*(ulong *)(param_2 + lVar22 + 0x170) & 1) != 0) {
        pbVar21 = *(byte **)pbVar21;
      }
      dVar31 = (double)(int)((uint)pbVar21[3] - (uint)pbVar21[2]) / 255.0;
      if (0.0 < dVar31) {
        FUN_0096b94c(dVar31 * *(double *)(param_3 + 0x158),*(long *)(param_2 + lVar15 + 0x18),iVar6,
                     uVar17);
      }
      else {
        uVar8 = FUN_004022fc();
        if ((uVar8 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../video/encoder_bitrate_adjuster.cc",0xb9a,
                       "Encoder config has temporal layer with non-zero bitrate allocation but zero framerate allocation."
                      );
        }
      }
    }
    lVar22 = lVar22 + 0x18;
    lVar26 = lVar26 + 1;
    lVar12 = lVar12 + 1;
    lVar15 = lVar15 + 0x20;
    plVar23 = plVar23 + 1;
    if (lVar22 == 0x78) {
      *(undefined1 *)((long)param_1 + 0xa4) = *(undefined1 *)(param_3 + 0x154);
      if (local_f8 != (undefined8 *)0x0) {
        uVar8 = (ulong)(((long)local_f8 - (long)local_f0) * 0x1555555555555555) >> 3;
        uVar24 = (long)local_f0 * -0x1555555555555555 - 8U >> 3;
        if (uVar24 <= uVar8) {
          uVar8 = uVar24;
        }
        puVar28 = local_f0;
        if ((1 < uVar8) && ((((int)local_f8 - (int)local_f0 | -(int)local_f0) & 7U) == 0)) {
          uVar8 = uVar8 & 0x1ffffffffffffffe;
          puVar28 = local_f0 + uVar8 * -3;
          do {
            uVar8 = uVar8 - 2;
          } while (uVar8 != 0);
        }
        while (puVar28 != local_f8) {
          puVar28 = puVar28 + -3;
          if (puVar28 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
        }
        local_f0 = local_f8;
        operator_delete(local_f8);
      }
      return;
    }
  } while( true );
}


// ===== 0096986c  FUN_0096986c =====

void FUN_0096986c(long param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined1 auStack_d8 [168];
  
  puVar1 = (ulong *)(param_1 + 0x170);
  puVar2 = (ulong *)(param_2 + 0x38);
  if (puVar1 != puVar2) {
    plVar3 = (long *)(param_2 + 0x40);
    if ((*(ulong *)(param_2 + 0x38) & 1) != 0) {
      plVar3 = (long *)*(long *)(param_2 + 0x40);
    }
    FUN_00962874(param_1 + 0x170,plVar3,*(ulong *)(param_2 + 0x38) >> 1);
  }
  if (9 < *puVar1) {
    uVar5 = FUN_004022fc();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f1906,"../../video/encoder_bitrate_adjuster.cc",0xc6a,
                   "fps_allocation has more than ",4," temporal streams. Truncating.");
    }
    FUN_0096a064(param_1 + 0x170,0,4);
  }
  if (puVar1 != puVar2) {
    plVar3 = (long *)(param_2 + 0x58);
    if ((*(ulong *)(param_2 + 0x50) & 1) != 0) {
      plVar3 = (long *)*(long *)(param_2 + 0x58);
    }
    FUN_00962874(param_1 + 0x188,plVar3,*(ulong *)(param_2 + 0x50) >> 1);
  }
  if (9 < *(ulong *)(param_1 + 0x188)) {
    uVar5 = FUN_004022fc();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f1906,"../../video/encoder_bitrate_adjuster.cc",0xc6a,
                   "fps_allocation has more than ",4," temporal streams. Truncating.");
    }
    FUN_0096a064(param_1 + 0x188,0,4);
  }
  if (puVar1 != puVar2) {
    plVar3 = (long *)(param_2 + 0x70);
    if ((*(ulong *)(param_2 + 0x68) & 1) != 0) {
      plVar3 = (long *)*(long *)(param_2 + 0x70);
    }
    FUN_00962874(param_1 + 0x1a0,plVar3,*(ulong *)(param_2 + 0x68) >> 1);
  }
  if (9 < *(ulong *)(param_1 + 0x1a0)) {
    uVar5 = FUN_004022fc();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f1906,"../../video/encoder_bitrate_adjuster.cc",0xc6a,
                   "fps_allocation has more than ",4," temporal streams. Truncating.");
    }
    FUN_0096a064(param_1 + 0x1a0,0,4);
  }
  if (puVar1 != puVar2) {
    plVar3 = (long *)(param_2 + 0x88);
    if ((*(ulong *)(param_2 + 0x80) & 1) != 0) {
      plVar3 = (long *)*(long *)(param_2 + 0x88);
    }
    FUN_00962874(param_1 + 0x1b8,plVar3,*(ulong *)(param_2 + 0x80) >> 1);
  }
  if (9 < *(ulong *)(param_1 + 0x1b8)) {
    uVar5 = FUN_004022fc();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f1906,"../../video/encoder_bitrate_adjuster.cc",0xc6a,
                   "fps_allocation has more than ",4," temporal streams. Truncating.");
    }
    FUN_0096a064(param_1 + 0x1b8,0,4);
  }
  if (puVar1 != puVar2) {
    puVar4 = (undefined8 *)(param_2 + 0xa0);
    if ((*(ulong *)(param_2 + 0x98) & 1) != 0) {
      puVar4 = *(undefined8 **)(param_2 + 0xa0);
    }
    FUN_00962874(param_1 + 0x1d0,puVar4,*(ulong *)(param_2 + 0x98) >> 1);
  }
  if (9 < *(ulong *)(param_1 + 0x1d0)) {
    uVar5 = FUN_004022fc();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f1906,"../../video/encoder_bitrate_adjuster.cc",0xc6a,
                   "fps_allocation has more than ",4," temporal streams. Truncating.");
    }
    FUN_0096a064(param_1 + 0x1d0,0,4);
  }
  FUN_00968a7c(auStack_d8,param_1,param_1 + 8);
  return;
}


// ===== 00969b10  FUN_00969b10 =====

void FUN_00969b10(long param_1,undefined8 param_2,uint param_3,uint param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = (ulong)param_3;
  if ((param_3 < 5) && (param_4 < 4)) {
    lVar4 = *(long *)(param_1 + uVar5 * 0x20 + (ulong)param_4 * 8 + 0x1f0);
    *(long *)(param_1 + 0x1e8) = *(long *)(param_1 + 0x1e8) + 1;
    if (lVar4 != 0) {
      lVar1 = (**(code **)(**(long **)(param_1 + 0x2d8) + 0x10))();
      FUN_0096bb20(lVar4,param_2,lVar1 / 1000);
    }
    lVar4 = *(long *)(param_1 + uVar5 * 8 + 0x290);
    if (lVar4 != 0) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x2d8) + 0x10))();
      FUN_0096d12c(lVar4,param_2,uVar2);
      return;
    }
  }
  else {
    uVar3 = FUN_004022fc();
    if ((uVar3 & 1) == 0) {
      FUN_00623bb0(&DAT_001f666f,"../../video/encoder_bitrate_adjuster.cc",0xcf2,
                   "OnEncodedFrame called with invalid layer: ","stream_index = ",uVar5,
                   ", temporal_index = ",param_4);
      return;
    }
  }
  return;
}


// ===== 00969c3c  FUN_00969c3c =====

void FUN_00969c3c(long param_1)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_e8 [168];
  
  lVar3 = 0x1f0;
  lVar4 = 0x290;
  do {
    pvVar2 = *(void **)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
    if (pvVar2 != (void *)0x0) {
      FUN_0096aa6c(pvVar2);
      operator_delete(pvVar2);
    }
    lVar1 = param_1 + lVar3;
    pvVar2 = *(void **)(lVar1 + 8);
    *(undefined8 *)(lVar1 + 8) = 0;
    if (pvVar2 != (void *)0x0) {
      FUN_0096aa6c(pvVar2);
      operator_delete(pvVar2);
    }
    pvVar2 = *(void **)(lVar1 + 0x10);
    *(undefined8 *)(lVar1 + 0x10) = 0;
    if (pvVar2 != (void *)0x0) {
      FUN_0096aa6c(pvVar2);
      operator_delete(pvVar2);
    }
    pvVar2 = *(void **)(param_1 + lVar3 + 0x18);
    *(undefined8 *)(param_1 + lVar3 + 0x18) = 0;
    if (pvVar2 != (void *)0x0) {
      FUN_0096aa6c(pvVar2);
      operator_delete(pvVar2);
    }
    pvVar2 = *(void **)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = 0;
    if (pvVar2 != (void *)0x0) {
      FUN_00969e90((long)pvVar2 + 0x18);
      operator_delete(pvVar2);
    }
    lVar3 = lVar3 + 0x20;
    lVar4 = lVar4 + 8;
  } while (lVar3 != 0x290);
  FUN_00968a7c(auStack_e8,param_1,param_1 + 8);
  return;
}


// ===== 00969d50  FUN_00969d50 =====

void FUN_00969d50(undefined8 *param_1)

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
  
  plVar7 = (long *)param_1[1];
  puVar6 = (undefined8 *)(plVar7[1] - *plVar7);
  uVar3 = ((long)puVar6 >> 3) * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar3) {
    FUN_00969e78();
LAB_00969e74:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
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
    if (0xaaaaaaaaaaaaaaa < uVar5) goto LAB_00969e74;
    pvVar1 = operator_new(uVar5 * 0x18);
    puVar6 = (undefined8 *)((long)pvVar1 + (long)puVar6);
  }
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
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


// ===== 00969e78  FUN_00969e78 =====

void FUN_00969e78(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00969e90  FUN_00969e90 =====

void FUN_00969e90(undefined8 *param_1)

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
    plVar3 = puVar9 + uVar5 / 0xaa;
    lVar6 = *plVar3;
    lVar4 = lVar6 + (uVar5 % 0xaa) * 0x18;
    while (lVar4 != puVar9[(param_1[5] + uVar5) / 0xaa] + ((param_1[5] + uVar5) % 0xaa) * 0x18) {
      if (lVar4 == 0) goto LAB_0096a014;
      lVar4 = lVar4 + 0x18;
      if (lVar4 - lVar6 == 0xff0) {
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
    uVar1 = 0x55;
  }
  else {
    if (uVar5 != 2) goto LAB_00969f8c;
    uVar1 = 0xaa;
  }
  param_1[4] = uVar1;
LAB_00969f8c:
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
LAB_0096a014:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0096a064  FUN_0096a064 =====

void FUN_0096a064(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong *puVar1;
  bool bVar2;
  void *pvVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  
  puVar14 = param_1 + 1;
  uVar15 = *param_1;
  if ((uVar15 & 1) == 0) {
    uVar4 = 0x10;
  }
  else {
    puVar14 = (ulong *)param_1[1];
    uVar4 = param_1[2];
  }
  uVar16 = uVar15 >> 1;
  if (uVar16 < param_3) {
    if (uVar4 < param_3) {
      uVar4 = uVar4 * 2;
      if (uVar4 < param_3 || uVar4 - param_3 == 0) {
        uVar4 = param_3;
      }
      pvVar3 = operator_new(uVar4);
      lVar7 = (long)pvVar3 + uVar16;
      uVar17 = param_3 + ~uVar16;
      if ((ulong)-lVar7 < uVar17) {
        uVar17 = -lVar7;
      }
      uVar17 = uVar17 + 1;
      lVar6 = 0;
      if (0x20 < uVar17) {
        uVar9 = 0x20;
        if ((uVar17 & 0x1f) != 0) {
          uVar9 = uVar17 & 0x1f;
        }
        lVar6 = uVar17 - uVar9;
        puVar8 = (undefined8 *)((long)pvVar3 + uVar16 + 0x10);
        lVar11 = lVar6;
        do {
          lVar11 = lVar11 + -0x20;
          puVar8[-1] = 0;
          puVar8[-2] = 0;
          puVar8[1] = 0;
          *puVar8 = 0;
          puVar8 = puVar8 + 4;
        } while (lVar11 != 0);
      }
      uVar17 = lVar6 + uVar16;
      lVar7 = -(lVar6 + lVar7);
      do {
        if (lVar7 == 0) goto LAB_0096a2b8;
        *(undefined1 *)((long)pvVar3 + uVar17) = 0;
        uVar17 = uVar17 + 1;
        lVar7 = lVar7 + -1;
      } while (param_3 != uVar17);
      if (uVar16 != 0) {
        uVar9 = -(long)pvVar3;
        uVar12 = uVar16 - 1;
        uVar17 = uVar12;
        if (uVar9 < uVar12) {
          uVar17 = -(long)pvVar3;
        }
        uVar17 = uVar17 + 1;
        if (uVar17 < 0x21) {
          lVar7 = 0;
        }
        else {
          if (uVar12 <= uVar9) {
            uVar9 = uVar12;
          }
          lVar7 = 0;
          if ((puVar14 <= (ulong *)((long)puVar14 + uVar9)) &&
             (0x1f < (ulong)((long)pvVar3 - (long)puVar14))) {
            puVar13 = puVar14 + 2;
            uVar9 = 0x20;
            if ((uVar17 & 0x1f) != 0) {
              uVar9 = uVar17 & 0x1f;
            }
            puVar10 = (ulong *)((long)pvVar3 + 0x10);
            lVar7 = uVar17 - uVar9;
            puVar14 = (ulong *)((long)puVar14 + lVar7);
            lVar6 = lVar7;
            do {
              puVar1 = puVar13 + -1;
              uVar17 = puVar13[-2];
              uVar12 = puVar13[1];
              uVar9 = *puVar13;
              lVar6 = lVar6 + -0x20;
              puVar13 = puVar13 + 4;
              puVar10[-1] = *puVar1;
              puVar10[-2] = uVar17;
              puVar10[1] = uVar12;
              *puVar10 = uVar9;
              puVar10 = puVar10 + 4;
            } while (lVar6 != 0);
          }
        }
        lVar6 = uVar16 - lVar7;
        lVar11 = -((long)pvVar3 + lVar7);
        puVar5 = (undefined1 *)((long)pvVar3 + lVar7);
        do {
          if (lVar11 == 0) {
LAB_0096a2b8:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          lVar6 = lVar6 + -1;
          lVar11 = lVar11 + -1;
          *puVar5 = (char)*puVar14;
          puVar5 = puVar5 + 1;
          puVar14 = (ulong *)((long)puVar14 + 1);
        } while (lVar6 != 0);
      }
      if ((uVar15 & 1) != 0) {
        operator_delete((void *)param_1[1]);
        uVar15 = *param_1;
      }
      uVar15 = uVar15 | 1;
      param_1[1] = (ulong)pvVar3;
      param_1[2] = uVar4;
    }
    else {
      lVar7 = (long)puVar14 + uVar16;
      uVar15 = param_3 + ~uVar16;
      if ((ulong)-lVar7 < uVar15) {
        uVar15 = -lVar7;
      }
      uVar15 = uVar15 + 1;
      lVar6 = 0;
      if (0x20 < uVar15) {
        uVar4 = 0x20;
        if ((uVar15 & 0x1f) != 0) {
          uVar4 = uVar15 & 0x1f;
        }
        lVar6 = uVar15 - uVar4;
        puVar8 = (undefined8 *)((long)puVar14 + uVar16 + 0x10);
        lVar11 = lVar6;
        do {
          lVar11 = lVar11 + -0x20;
          puVar8[-1] = 0;
          puVar8[-2] = 0;
          puVar8[1] = 0;
          *puVar8 = 0;
          puVar8 = puVar8 + 4;
        } while (lVar11 != 0);
      }
      lVar11 = (lVar6 + uVar16) - param_3;
      lVar7 = -(lVar6 + lVar7);
      puVar5 = (undefined1 *)((long)puVar14 + lVar6 + uVar16);
      do {
        if (lVar7 == 0) goto LAB_0096a2b8;
        bVar2 = lVar11 != -1;
        lVar11 = lVar11 + 1;
        lVar7 = lVar7 + -1;
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      } while (bVar2);
      uVar15 = *param_1;
    }
  }
  *param_1 = uVar15 & 1 | param_3 << 1;
  return;
}


// ===== 0096a2cc  FUN_0096a2cc =====

uint FUN_0096a2cc(void *param_1,size_t param_2)

{
  int iVar1;
  uint uVar2;
  size_t *psVar3;
  long lVar4;
  
  lVar4 = 0x660;
  psVar3 = &DAT_00d3e808;
  while ((*psVar3 != param_2 || (iVar1 = memcmp((void *)psVar3[-1],param_1,param_2), iVar1 != 0))) {
    lVar4 = lVar4 + -0x30;
    psVar3 = psVar3 + 6;
    if (lVar4 == 0) {
LAB_0096a334:
      uVar2 = 0;
      iVar1 = 0;
LAB_0096a33c:
      return uVar2 | iVar1 << 8;
    }
  }
  if (lVar4 != 0) {
    uVar2 = (uint)(byte)psVar3[-2];
    iVar1 = 1;
    goto LAB_0096a33c;
  }
  goto LAB_0096a334;
}


// ===== 0096a354  FUN_0096a354 =====

undefined4 FUN_0096a354(byte param_1)

{
  if (param_1 < 0x22) {
    return (&DAT_00d3e818)[(ulong)param_1 * 0xc];
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../modules/video_coding/svc/scalability_mode_util.cc",0x136,
               "index < kNumScalabilityModes",&DAT_00224cd9,param_1,0x22);
}


// ===== 0096a3b0  FUN_0096a3b0 =====

undefined4 FUN_0096a3b0(byte param_1)

{
  if (param_1 < 0x22) {
    return (&DAT_00d3e810)[(ulong)param_1 * 0xc];
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../modules/video_coding/svc/scalability_mode_util.cc",0x136,
               "index < kNumScalabilityModes",&DAT_00224cd9,param_1,0x22);
}


// ===== 0096a40c  FUN_0096a40c =====

undefined4 FUN_0096a40c(byte param_1)

{
  if (param_1 < 0x22) {
    return (&DAT_00d3e814)[(ulong)param_1 * 0xc];
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../modules/video_coding/svc/scalability_mode_util.cc",0x136,
               "index < kNumScalabilityModes",&DAT_00224cd9,param_1,0x22);
}


// ===== 0096a468  FUN_0096a468 =====

int * FUN_0096a468(int *param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  code *pcVar5;
  long lVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  ulong uVar13;
  uint uVar14;
  
  uVar8 = (uint)param_1 & 0xff;
  if (0x21 < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/video_coding/svc/scalability_mode_util.cc",0x136,
                 "index < kNumScalabilityModes",&DAT_00224cd9,uVar8,0x22);
  }
  if ((int)(&DAT_00d3e810)[((ulong)param_1 & 0xff) * 0xc] <= param_2) {
    return param_1;
  }
  switch((ulong)param_1 & 0xff) {
  case 0:
  case 3:
  case 4:
  case 5:
  case 0x16:
  case 0x17:
    return (int *)0x0;
  case 1:
  case 6:
  case 7:
  case 8:
  case 9:
  case 0x18:
  case 0x19:
    return (int *)0x1;
  case 2:
  case 10:
  case 0xb:
  case 0xc:
  case 0x1a:
  case 0x1b:
    return (int *)0x2;
  case 0xd:
    uVar8 = 3;
    if (param_2 != 2) {
      uVar8 = 0;
    }
    return (int *)(ulong)uVar8;
  case 0xe:
    uVar8 = 4;
    if (param_2 != 2) {
      uVar8 = 0;
    }
    return (int *)(ulong)uVar8;
  case 0xf:
    uVar8 = 5;
    if (param_2 != 2) {
      uVar8 = 0;
    }
    return (int *)(ulong)uVar8;
  case 0x10:
    uVar8 = 6;
    if (param_2 != 2) {
      uVar8 = 1;
    }
    return (int *)(ulong)uVar8;
  case 0x11:
    uVar8 = 7;
    if (param_2 != 2) {
      uVar8 = 1;
    }
    return (int *)(ulong)uVar8;
  case 0x12:
    uVar8 = 8;
    if (param_2 != 2) {
      uVar8 = 1;
    }
    return (int *)(ulong)uVar8;
  case 0x13:
    uVar8 = 10;
    if (param_2 != 2) {
      uVar8 = 2;
    }
    return (int *)(ulong)uVar8;
  case 0x14:
    uVar8 = 0xb;
    if (param_2 != 2) {
      uVar8 = 2;
    }
    return (int *)(ulong)uVar8;
  case 0x15:
    uVar8 = 0xc;
    if (param_2 != 2) {
      uVar8 = 2;
    }
    return (int *)(ulong)uVar8;
  case 0x1c:
    uVar8 = 0x16;
    if (param_2 != 2) {
      uVar8 = 0;
    }
    return (int *)(ulong)uVar8;
  case 0x1d:
    uVar8 = 0x17;
    if (param_2 != 2) {
      uVar8 = 0;
    }
    return (int *)(ulong)uVar8;
  case 0x1e:
    uVar8 = 0x18;
    if (param_2 != 2) {
      uVar8 = 1;
    }
    return (int *)(ulong)uVar8;
  case 0x1f:
    uVar8 = 0x19;
    if (param_2 != 2) {
      uVar8 = 1;
    }
    return (int *)(ulong)uVar8;
  case 0x20:
    uVar8 = 0x1a;
    if (param_2 != 2) {
      uVar8 = 2;
    }
    return (int *)(ulong)uVar8;
  case 0x21:
    uVar8 = 0x1b;
    if (param_2 != 2) {
      uVar8 = 2;
    }
    return (int *)(ulong)uVar8;
  }
  if ((*(ushort *)(param_1 + 0x155) >> 8 & 1) != 0) {
    return (int *)(ulong)(*(ushort *)(param_1 + 0x155) & 0xff);
  }
  iVar1 = *param_1;
  iVar9 = 0;
  uVar13 = 0xaaaaaa00;
  uVar8 = 1;
  if (iVar1 < 3) {
    if (iVar1 != 0) {
      if (iVar1 != 1) {
        uVar14 = 1;
        if (iVar1 != 2) goto LAB_0096a920;
        lVar6 = FUN_007b8ca4(param_1);
        if (*(char *)(lVar6 + 10) == '\0') {
          bVar2 = *(byte *)(param_1 + 8);
          uVar14 = (uint)bVar2;
          uVar13 = 0;
          if (1 < bVar2) {
            iVar1 = param_1[0x32];
            iVar9 = param_1[10];
            iVar4 = 0;
            if (iVar9 != 0) {
              iVar4 = iVar1 / iVar9;
            }
            if (iVar4 == 2) {
              uVar8 = 0;
            }
            else {
              iVar4 = 0;
              if (iVar9 != 0) {
                iVar4 = (iVar1 << 1) / iVar9;
              }
              if (iVar4 != 3) goto LAB_0096a910;
              uVar8 = 1;
            }
            if (bVar2 != 2) {
              iVar9 = 0;
              if (iVar1 != 0) {
                iVar9 = param_1[0x5a] / iVar1;
              }
              if (iVar9 == 2) {
                uVar11 = 0;
              }
              else {
                iVar9 = 0;
                if (iVar1 != 0) {
                  iVar9 = (param_1[0x5a] << 1) / iVar1;
                }
                if (iVar9 != 3) goto LAB_0096a910;
                uVar11 = 1;
              }
              if (uVar8 != uVar11) goto LAB_0096a910;
              if (bVar2 != 3) goto LAB_0096aa38;
            }
            goto LAB_0096a900;
          }
        }
        else {
          uVar13 = 0;
          lVar6 = FUN_007b8ca4(param_1);
          bVar2 = *(byte *)(lVar6 + 10);
          uVar14 = (uint)bVar2;
          if (1 < bVar2) {
            iVar1 = param_1[0xaa];
            iVar9 = param_1[0x82];
            iVar4 = 0;
            if (iVar9 != 0) {
              iVar4 = iVar1 / iVar9;
            }
            if (iVar4 == 2) {
              uVar8 = 0;
            }
            else {
              iVar4 = 0;
              if (iVar9 != 0) {
                iVar4 = (iVar1 << 1) / iVar9;
              }
              if (iVar4 != 3) goto LAB_0096a910;
              uVar8 = 1;
            }
            if (bVar2 != 2) {
              iVar9 = param_1[0xd2];
              iVar4 = 0;
              if (iVar1 != 0) {
                iVar4 = iVar9 / iVar1;
              }
              if (iVar4 == 2) {
                uVar11 = 0;
              }
              else {
                iVar4 = 0;
                if (iVar1 != 0) {
                  iVar4 = (iVar9 << 1) / iVar1;
                }
                if (iVar4 != 3) goto LAB_0096a910;
                uVar11 = 1;
              }
              if (uVar8 != uVar11) goto LAB_0096a910;
              if (bVar2 != 3) {
                iVar1 = param_1[0xfa];
                iVar4 = 0;
                if (iVar9 != 0) {
                  iVar4 = iVar1 / iVar9;
                }
                if (iVar4 == 2) {
                  uVar11 = 0;
                }
                else {
                  iVar4 = 0;
                  if (iVar9 != 0) {
                    iVar4 = (iVar1 << 1) / iVar9;
                  }
                  if (iVar4 != 3) goto LAB_0096a910;
                  uVar11 = 1;
                }
                if (uVar8 != uVar11) goto LAB_0096a910;
                if (bVar2 != 4) {
                  iVar9 = 0;
                  if (iVar1 != 0) {
                    iVar9 = param_1[0x122] / iVar1;
                  }
                  if (iVar9 == 2) {
                    uVar11 = 0;
                  }
                  else {
                    iVar9 = 0;
                    if (iVar1 != 0) {
                      iVar9 = (param_1[0x122] << 1) / iVar1;
                    }
                    if (iVar9 != 3) goto LAB_0096a910;
                    uVar11 = 1;
                  }
                  if (uVar8 != uVar11) goto LAB_0096a910;
                  if (bVar2 != 5) goto LAB_0096aa38;
                }
              }
            }
LAB_0096a900:
            uVar13 = (ulong)uVar8 | 0xaaaaaa0100000000;
          }
        }
LAB_0096a910:
        lVar6 = FUN_007b8ca4(param_1);
        iVar9 = *(int *)(lVar6 + 0xc);
        uVar8 = 1;
        goto LAB_0096a920;
      }
      pbVar7 = (byte *)FUN_007b8c8c(param_1);
      bVar2 = *(byte *)(param_1 + 8);
      bVar3 = *pbVar7;
joined_r0x0096a75c:
      uVar8 = (uint)bVar3;
      uVar14 = (uint)bVar2;
      if (bVar2 < 2) {
LAB_0096a82c:
        uVar13 = 0;
        iVar9 = 0;
      }
      else {
        iVar1 = param_1[0x32];
        iVar9 = param_1[10];
        iVar4 = 0;
        if (iVar9 != 0) {
          iVar4 = iVar1 / iVar9;
        }
        if (iVar4 == 2) {
          uVar11 = 0;
        }
        else {
          iVar4 = 0;
          if (iVar9 != 0) {
            iVar4 = (iVar1 << 1) / iVar9;
          }
          if (iVar4 != 3) goto LAB_0096a82c;
          uVar11 = 1;
        }
        if (uVar14 != 2) {
          iVar9 = 0;
          if (iVar1 != 0) {
            iVar9 = param_1[0x5a] / iVar1;
          }
          if (iVar9 == 2) {
            uVar10 = 0;
          }
          else {
            iVar9 = 0;
            if (iVar1 != 0) {
              iVar9 = (param_1[0x5a] << 1) / iVar1;
            }
            if (iVar9 != 3) goto LAB_0096a82c;
            uVar10 = 1;
          }
          if (uVar11 != uVar10) goto LAB_0096a82c;
          if (uVar14 != 3) {
LAB_0096aa38:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(0x5512,0x96aa3c);
            (*pcVar5)();
          }
        }
        iVar9 = 0;
        uVar13 = (ulong)uVar11 | 0xaaaaaa0100000000;
      }
      goto LAB_0096a920;
    }
  }
  else if (iVar1 != 3) {
    if (iVar1 == 4) {
      lVar6 = FUN_007b8cbc(param_1);
      bVar2 = *(byte *)(param_1 + 8);
      bVar3 = *(byte *)(lVar6 + 8);
      goto joined_r0x0096a75c;
    }
    if (iVar1 != 5) {
      uVar14 = 1;
      goto LAB_0096a920;
    }
  }
  uVar14 = (uint)*(byte *)(param_1 + 8);
  iVar9 = 0;
LAB_0096a920:
  uVar11 = (uint)(uVar13 >> 0x20) & 0xff;
  pcVar12 = "";
  lVar6 = 0x660;
  do {
    if ((*(uint *)(pcVar12 + -0x14) == uVar14) && (*(uint *)(pcVar12 + -0x10) == uVar8)) {
      if (uVar14 == 1) goto LAB_0096a9ac;
      if (*(int *)(pcVar12 + -0xc) == iVar9) {
        if ((uVar11 & (byte)pcVar12[-4]) == 0) {
          if ((byte)pcVar12[-4] == uVar11) goto LAB_0096a938;
        }
        else {
          if ((uVar13 >> 0x20 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                      );
          }
          if (*(int *)(pcVar12 + -8) == (int)uVar13) {
LAB_0096a938:
            if (*pcVar12 == '\0') {
LAB_0096a9ac:
              return (int *)(ulong)(byte)pcVar12[-0x2c];
            }
          }
        }
      }
    }
    lVar6 = lVar6 + -0x30;
    pcVar12 = pcVar12 + 0x30;
    if (lVar6 == 0) {
      return (int *)0x0;
    }
  } while( true );
}


// ===== 0096a654  FUN_0096a654 =====

ushort FUN_0096a654(int *param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  code *pcVar5;
  long lVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  ulong uVar13;
  uint uVar14;
  
  if ((*(ushort *)(param_1 + 0x155) >> 8 & 1) != 0) {
    return *(ushort *)(param_1 + 0x155) & 0xff;
  }
  iVar1 = *param_1;
  iVar9 = 0;
  uVar13 = 0xaaaaaa00;
  uVar8 = 1;
  if (iVar1 < 3) {
    if (iVar1 != 0) {
      if (iVar1 != 1) {
        uVar14 = 1;
        if (iVar1 != 2) goto LAB_0096a920;
        lVar6 = FUN_007b8ca4(param_1);
        if (*(char *)(lVar6 + 10) == '\0') {
          bVar2 = *(byte *)(param_1 + 8);
          uVar14 = (uint)bVar2;
          uVar13 = 0;
          if (1 < bVar2) {
            iVar1 = param_1[0x32];
            iVar9 = param_1[10];
            iVar4 = 0;
            if (iVar9 != 0) {
              iVar4 = iVar1 / iVar9;
            }
            if (iVar4 == 2) {
              uVar8 = 0;
            }
            else {
              iVar4 = 0;
              if (iVar9 != 0) {
                iVar4 = (iVar1 << 1) / iVar9;
              }
              if (iVar4 != 3) goto LAB_0096a910;
              uVar8 = 1;
            }
            if (bVar2 != 2) {
              iVar9 = 0;
              if (iVar1 != 0) {
                iVar9 = param_1[0x5a] / iVar1;
              }
              if (iVar9 == 2) {
                uVar11 = 0;
              }
              else {
                iVar9 = 0;
                if (iVar1 != 0) {
                  iVar9 = (param_1[0x5a] << 1) / iVar1;
                }
                if (iVar9 != 3) goto LAB_0096a910;
                uVar11 = 1;
              }
              if (uVar8 != uVar11) goto LAB_0096a910;
              if (bVar2 != 3) goto LAB_0096aa38;
            }
            goto LAB_0096a900;
          }
        }
        else {
          uVar13 = 0;
          lVar6 = FUN_007b8ca4(param_1);
          bVar2 = *(byte *)(lVar6 + 10);
          uVar14 = (uint)bVar2;
          if (1 < bVar2) {
            iVar1 = param_1[0xaa];
            iVar9 = param_1[0x82];
            iVar4 = 0;
            if (iVar9 != 0) {
              iVar4 = iVar1 / iVar9;
            }
            if (iVar4 == 2) {
              uVar8 = 0;
            }
            else {
              iVar4 = 0;
              if (iVar9 != 0) {
                iVar4 = (iVar1 << 1) / iVar9;
              }
              if (iVar4 != 3) goto LAB_0096a910;
              uVar8 = 1;
            }
            if (bVar2 != 2) {
              iVar9 = param_1[0xd2];
              iVar4 = 0;
              if (iVar1 != 0) {
                iVar4 = iVar9 / iVar1;
              }
              if (iVar4 == 2) {
                uVar11 = 0;
              }
              else {
                iVar4 = 0;
                if (iVar1 != 0) {
                  iVar4 = (iVar9 << 1) / iVar1;
                }
                if (iVar4 != 3) goto LAB_0096a910;
                uVar11 = 1;
              }
              if (uVar8 != uVar11) goto LAB_0096a910;
              if (bVar2 != 3) {
                iVar1 = param_1[0xfa];
                iVar4 = 0;
                if (iVar9 != 0) {
                  iVar4 = iVar1 / iVar9;
                }
                if (iVar4 == 2) {
                  uVar11 = 0;
                }
                else {
                  iVar4 = 0;
                  if (iVar9 != 0) {
                    iVar4 = (iVar1 << 1) / iVar9;
                  }
                  if (iVar4 != 3) goto LAB_0096a910;
                  uVar11 = 1;
                }
                if (uVar8 != uVar11) goto LAB_0096a910;
                if (bVar2 != 4) {
                  iVar9 = 0;
                  if (iVar1 != 0) {
                    iVar9 = param_1[0x122] / iVar1;
                  }
                  if (iVar9 == 2) {
                    uVar11 = 0;
                  }
                  else {
                    iVar9 = 0;
                    if (iVar1 != 0) {
                      iVar9 = (param_1[0x122] << 1) / iVar1;
                    }
                    if (iVar9 != 3) goto LAB_0096a910;
                    uVar11 = 1;
                  }
                  if (uVar8 != uVar11) goto LAB_0096a910;
                  if (bVar2 != 5) goto LAB_0096aa38;
                }
              }
            }
LAB_0096a900:
            uVar13 = (ulong)uVar8 | 0xaaaaaa0100000000;
          }
        }
LAB_0096a910:
        lVar6 = FUN_007b8ca4(param_1);
        iVar9 = *(int *)(lVar6 + 0xc);
        uVar8 = 1;
        goto LAB_0096a920;
      }
      pbVar7 = (byte *)FUN_007b8c8c(param_1);
      bVar2 = *(byte *)(param_1 + 8);
      bVar3 = *pbVar7;
joined_r0x0096a75c:
      uVar8 = (uint)bVar3;
      uVar14 = (uint)bVar2;
      if (bVar2 < 2) {
LAB_0096a82c:
        uVar13 = 0;
        iVar9 = 0;
      }
      else {
        iVar1 = param_1[0x32];
        iVar9 = param_1[10];
        iVar4 = 0;
        if (iVar9 != 0) {
          iVar4 = iVar1 / iVar9;
        }
        if (iVar4 == 2) {
          uVar11 = 0;
        }
        else {
          iVar4 = 0;
          if (iVar9 != 0) {
            iVar4 = (iVar1 << 1) / iVar9;
          }
          if (iVar4 != 3) goto LAB_0096a82c;
          uVar11 = 1;
        }
        if (uVar14 != 2) {
          iVar9 = 0;
          if (iVar1 != 0) {
            iVar9 = param_1[0x5a] / iVar1;
          }
          if (iVar9 == 2) {
            uVar10 = 0;
          }
          else {
            iVar9 = 0;
            if (iVar1 != 0) {
              iVar9 = (param_1[0x5a] << 1) / iVar1;
            }
            if (iVar9 != 3) goto LAB_0096a82c;
            uVar10 = 1;
          }
          if (uVar11 != uVar10) goto LAB_0096a82c;
          if (uVar14 != 3) {
LAB_0096aa38:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(0x5512,0x96aa3c);
            (*pcVar5)();
          }
        }
        iVar9 = 0;
        uVar13 = (ulong)uVar11 | 0xaaaaaa0100000000;
      }
      goto LAB_0096a920;
    }
  }
  else if (iVar1 != 3) {
    if (iVar1 == 4) {
      lVar6 = FUN_007b8cbc(param_1);
      bVar2 = *(byte *)(param_1 + 8);
      bVar3 = *(byte *)(lVar6 + 8);
      goto joined_r0x0096a75c;
    }
    if (iVar1 != 5) {
      uVar14 = 1;
      goto LAB_0096a920;
    }
  }
  uVar14 = (uint)*(byte *)(param_1 + 8);
  iVar9 = 0;
LAB_0096a920:
  uVar11 = (uint)(uVar13 >> 0x20) & 0xff;
  pcVar12 = "";
  lVar6 = 0x660;
  do {
    if ((*(uint *)(pcVar12 + -0x14) == uVar14) && (*(uint *)(pcVar12 + -0x10) == uVar8)) {
      if (uVar14 == 1) goto LAB_0096a9ac;
      if (*(int *)(pcVar12 + -0xc) == iVar9) {
        if ((uVar11 & (byte)pcVar12[-4]) == 0) {
          if ((byte)pcVar12[-4] == uVar11) goto LAB_0096a938;
        }
        else {
          if ((uVar13 >> 0x20 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                      );
          }
          if (*(int *)(pcVar12 + -8) == (int)uVar13) {
LAB_0096a938:
            if (*pcVar12 == '\0') {
LAB_0096a9ac:
              return (ushort)(byte)pcVar12[-0x2c];
            }
          }
        }
      }
    }
    lVar6 = lVar6 + -0x30;
    pcVar12 = pcVar12 + 0x30;
    if (lVar6 == 0) {
      return 0;
    }
  } while( true );
}


// ===== 0096aa3c  FUN_0096aa3c =====

void FUN_0096aa3c(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  *(undefined4 *)(param_1 + 0xe) = param_3;
  *param_1 = param_2;
  param_1[1] = 0xffffffffffffffff;
  *(undefined1 *)((long)param_1 + 0x74) = param_4;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
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
  return;
}


// ===== 0096aa6c  FUN_0096aa6c =====

void FUN_0096aa6c(long param_1)

{
  FUN_0096aa98();
  FUN_0096b778(param_1 + 0x10);
  return;
}


// ===== 0096aa98  FUN_0096aa98 =====

/* WARNING: Removing unreachable block (ram,0x0096b764) */

void FUN_0096aa98(long param_1)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 ******ppppppuVar3;
  undefined1 *puVar4;
  long lVar5;
  int iVar6;
  byte bVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *****local_88;
  ulong uStack_80;
  byte bStack_71;
  undefined8 *****local_70;
  undefined1 *puStack_68;
  undefined8 local_60;
  undefined8 *****local_50;
  undefined1 *puStack_48;
  undefined8 local_40;
  undefined1 uStack_31;
  
  lVar12 = *(long *)(param_1 + 0x78);
  if (lVar12 == 0) {
    return;
  }
  lVar5 = *(long *)(param_1 + 0x88);
  lVar9 = 0;
  if (lVar12 != 0) {
    lVar9 = *(long *)(param_1 + 0x80) / lVar12;
  }
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = (undefined8 *****)&DAT_aaaaaaaaaaaaaaaa;
  pcVar1 = "WebRTC.Video.Screenshare.RMSEOfEncodingBitrateInKbps.";
  if (*(char *)(param_1 + 0x74) == '\0') {
    pcVar1 = "WebRTC.Video.RMSEOfEncodingBitrateInKbps.";
  }
  uVar11 = (ulong)SQRT((double)lVar9);
  FUN_005d3510(&local_50,pcVar1);
  pcVar1 = "WebRTC.Video.Screenshare.EncodingBitrateOvershoot.";
  if (*(char *)(param_1 + 0x74) == '\0') {
    pcVar1 = "WebRTC.Video.EncodingBitrateOvershoot.";
  }
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = (undefined8 *****)&DAT_aaaaaaaaaaaaaaaa;
  FUN_005d3510(&local_70,pcVar1);
  iVar6 = *(int *)(param_1 + 0x70);
  bVar7 = *(byte *)(param_1 + 0x74);
  if (iVar6 < 3) {
    if (iVar6 == 1) {
      if ((bVar7 & 1) == 0) {
        lVar9 = DAT_00d80730;
        if (DAT_00d80730 == 0) {
          FUN_0096c004(&local_88,&local_50,&DAT_0019b94f);
          uVar2 = uStack_80;
          ppppppuVar3 = (undefined8 ******)local_88;
          if (-1 < (char)bStack_71) {
            uVar2 = (ulong)bStack_71;
            ppppppuVar3 = &local_88;
          }
          lVar9 = FUN_006660d0(ppppppuVar3,uVar2,1,10000,0x32);
          if ((char)bStack_71 < '\0') {
            operator_delete(local_88);
          }
          FUN_00d0f5e0(0,lVar9,&DAT_00d80730);
          if (lVar9 != 0) goto LAB_0096b478;
        }
        else {
LAB_0096b478:
          FUN_00666568(lVar9,uVar11 & 0xffffffff);
        }
        lVar9 = DAT_00d80740;
        if (DAT_00d80740 != 0) goto LAB_0096b718;
        FUN_0096c004(&local_88,&local_70,&DAT_0019b94f);
        ppppppuVar3 = (undefined8 ******)local_88;
        if (-1 < (char)bStack_71) {
          uStack_80 = (ulong)bStack_71;
          ppppppuVar3 = &local_88;
        }
        lVar9 = FUN_006660d0(ppppppuVar3,uStack_80,1,10000,0x32);
        if ((char)bStack_71 < '\0') {
          operator_delete(local_88);
        }
        puVar10 = &DAT_00d80740;
      }
      else {
        lVar9 = DAT_00d80738;
        if (DAT_00d80738 == 0) {
          ppppppuVar3 = (undefined8 ******)local_50;
          if (-1 < (long)local_40._7_1_) {
            ppppppuVar3 = &local_50;
          }
          puVar4 = puStack_48;
          if (-1 < (long)local_40) {
            puVar4 = (undefined1 *)(long)local_40._7_1_;
          }
          FUN_005ff514(&local_88,&uStack_31,ppppppuVar3,puVar4,&DAT_0019b94f,3);
          uVar2 = uStack_80;
          ppppppuVar3 = (undefined8 ******)local_88;
          if (-1 < (char)bStack_71) {
            uVar2 = (ulong)bStack_71;
            ppppppuVar3 = &local_88;
          }
          lVar9 = FUN_006660d0(ppppppuVar3,uVar2,1,10000,0x32);
          if ((char)bStack_71 < '\0') {
            operator_delete(local_88);
          }
          FUN_00d0f5e0(0,lVar9,&DAT_00d80738);
          if (lVar9 != 0) goto LAB_0096b140;
        }
        else {
LAB_0096b140:
          FUN_00666568(lVar9,uVar11 & 0xffffffff);
        }
        lVar9 = DAT_00d80748;
        if (DAT_00d80748 != 0) goto LAB_0096b718;
        ppppppuVar3 = (undefined8 ******)local_70;
        if (-1 < (long)local_60._7_1_) {
          ppppppuVar3 = &local_70;
        }
        puVar4 = puStack_68;
        if (-1 < (long)local_60) {
          puVar4 = (undefined1 *)(long)local_60._7_1_;
        }
        FUN_005ff514(&local_88,&uStack_31,ppppppuVar3,puVar4,&DAT_0019b94f,3);
        ppppppuVar3 = (undefined8 ******)local_88;
        if (-1 < (char)bStack_71) {
          uStack_80 = (ulong)bStack_71;
          ppppppuVar3 = &local_88;
        }
        lVar9 = FUN_006660d0(ppppppuVar3,uStack_80,1,10000,0x32);
        if ((char)bStack_71 < '\0') {
          operator_delete(local_88);
        }
        puVar10 = &DAT_00d80748;
      }
    }
    else {
      if (iVar6 != 2) goto LAB_0096b724;
      if ((bVar7 & 1) == 0) {
        lVar9 = DAT_00d80710;
        if (DAT_00d80710 == 0) {
          FUN_0096c004(&local_88,&local_50,&DAT_001a9ffc);
          uVar2 = uStack_80;
          ppppppuVar3 = (undefined8 ******)local_88;
          if (-1 < (char)bStack_71) {
            uVar2 = (ulong)bStack_71;
            ppppppuVar3 = &local_88;
          }
          lVar9 = FUN_006660d0(ppppppuVar3,uVar2,1,10000,0x32);
          if ((char)bStack_71 < '\0') {
            operator_delete(local_88);
          }
          FUN_00d0f5e0(0,lVar9,&DAT_00d80710);
          if (lVar9 != 0) goto LAB_0096b688;
        }
        else {
LAB_0096b688:
          FUN_00666568(lVar9,uVar11 & 0xffffffff);
        }
        lVar9 = DAT_00d80720;
        if (DAT_00d80720 != 0) goto LAB_0096b718;
        FUN_0096c004(&local_88,&local_70,&DAT_001a9ffc);
        ppppppuVar3 = (undefined8 ******)local_88;
        if (-1 < (char)bStack_71) {
          uStack_80 = (ulong)bStack_71;
          ppppppuVar3 = &local_88;
        }
        lVar9 = FUN_006660d0(ppppppuVar3,uStack_80,1,10000,0x32);
        if ((char)bStack_71 < '\0') {
          operator_delete(local_88);
        }
        puVar10 = &DAT_00d80720;
      }
      else {
        lVar9 = DAT_00d80718;
        if (DAT_00d80718 == 0) {
          ppppppuVar3 = (undefined8 ******)local_50;
          if (-1 < (long)local_40._7_1_) {
            ppppppuVar3 = &local_50;
          }
          puVar4 = puStack_48;
          if (-1 < (long)local_40) {
            puVar4 = (undefined1 *)(long)local_40._7_1_;
          }
          FUN_005ff514(&local_88,&uStack_31,ppppppuVar3,puVar4,&DAT_001a9ffc,3);
          uVar2 = uStack_80;
          ppppppuVar3 = (undefined8 ******)local_88;
          if (-1 < (char)bStack_71) {
            uVar2 = (ulong)bStack_71;
            ppppppuVar3 = &local_88;
          }
          lVar9 = FUN_006660d0(ppppppuVar3,uVar2,1,10000,0x32);
          if ((char)bStack_71 < '\0') {
            operator_delete(local_88);
          }
          FUN_00d0f5e0(0,lVar9,&DAT_00d80718);
          if (lVar9 != 0) goto LAB_0096ad5c;
        }
        else {
LAB_0096ad5c:
          FUN_00666568(lVar9,uVar11 & 0xffffffff);
        }
        lVar9 = DAT_00d80728;
        if (DAT_00d80728 != 0) goto LAB_0096b718;
        ppppppuVar3 = (undefined8 ******)local_70;
        if (-1 < (long)local_60._7_1_) {
          ppppppuVar3 = &local_70;
        }
        puVar4 = puStack_68;
        if (-1 < (long)local_60) {
          puVar4 = (undefined1 *)(long)local_60._7_1_;
        }
        FUN_005ff514(&local_88,&uStack_31,ppppppuVar3,puVar4,&DAT_001a9ffc,3);
        ppppppuVar3 = (undefined8 ******)local_88;
        if (-1 < (char)bStack_71) {
          uStack_80 = (ulong)bStack_71;
          ppppppuVar3 = &local_88;
        }
        lVar9 = FUN_006660d0(ppppppuVar3,uStack_80,1,10000,0x32);
        if ((char)bStack_71 < '\0') {
          operator_delete(local_88);
        }
        puVar10 = &DAT_00d80728;
      }
    }
LAB_0096b708:
    FUN_00d0f5e0(0,lVar9,puVar10);
    if (lVar9 == 0) goto LAB_0096b724;
  }
  else if (iVar6 == 5) {
    if ((bVar7 & 1) == 0) {
      lVar9 = DAT_00d80770;
      if (DAT_00d80770 == 0) {
        FUN_0096c004(&local_88,&local_50,&DAT_001db567);
        uVar2 = uStack_80;
        ppppppuVar3 = (undefined8 ******)local_88;
        if (-1 < (char)bStack_71) {
          uVar2 = (ulong)bStack_71;
          ppppppuVar3 = &local_88;
        }
        lVar9 = FUN_006660d0(ppppppuVar3,uVar2,1,10000,0x32);
        if ((char)bStack_71 < '\0') {
          operator_delete(local_88);
        }
        FUN_00d0f5e0(0,lVar9,&DAT_00d80770);
        if (lVar9 != 0) goto LAB_0096b268;
      }
      else {
LAB_0096b268:
        FUN_00666568(lVar9,uVar11 & 0xffffffff);
      }
      lVar9 = DAT_00d80780;
      if (DAT_00d80780 == 0) {
        FUN_0096c004(&local_88,&local_70,&DAT_001db567);
        ppppppuVar3 = (undefined8 ******)local_88;
        if (-1 < (char)bStack_71) {
          uStack_80 = (ulong)bStack_71;
          ppppppuVar3 = &local_88;
        }
        lVar9 = FUN_006660d0(ppppppuVar3,uStack_80,1,10000,0x32);
        if ((char)bStack_71 < '\0') {
          operator_delete(local_88);
        }
        puVar10 = &DAT_00d80780;
        goto LAB_0096b708;
      }
    }
    else {
      lVar9 = DAT_00d80778;
      if (DAT_00d80778 == 0) {
        ppppppuVar3 = (undefined8 ******)local_50;
        if (-1 < (long)local_40._7_1_) {
          ppppppuVar3 = &local_50;
        }
        puVar4 = puStack_48;
        if (-1 < (long)local_40) {
          puVar4 = (undefined1 *)(long)local_40._7_1_;
        }
        FUN_005ff514(&local_88,&uStack_31,ppppppuVar3,puVar4,&DAT_001db567,4);
        uVar2 = uStack_80;
        ppppppuVar3 = (undefined8 ******)local_88;
        if (-1 < (char)bStack_71) {
          uVar2 = (ulong)bStack_71;
          ppppppuVar3 = &local_88;
        }
        lVar9 = FUN_006660d0(ppppppuVar3,uVar2,1,10000,0x32);
        if ((char)bStack_71 < '\0') {
          operator_delete(local_88);
        }
        FUN_00d0f5e0(0,lVar9,&DAT_00d80778);
        if (lVar9 != 0) goto LAB_0096aea8;
      }
      else {
LAB_0096aea8:
        FUN_00666568(lVar9,uVar11 & 0xffffffff);
      }
      lVar9 = DAT_00d80788;
      if (DAT_00d80788 == 0) {
        ppppppuVar3 = (undefined8 ******)local_70;
        if (-1 < (long)local_60._7_1_) {
          ppppppuVar3 = &local_70;
        }
        puVar4 = puStack_68;
        if (-1 < (long)local_60) {
          puVar4 = (undefined1 *)(long)local_60._7_1_;
        }
        FUN_005ff514(&local_88,&uStack_31,ppppppuVar3,puVar4,&DAT_001db567,4);
        ppppppuVar3 = (undefined8 ******)local_88;
        if (-1 < (char)bStack_71) {
          uStack_80 = (ulong)bStack_71;
          ppppppuVar3 = &local_88;
        }
        lVar9 = FUN_006660d0(ppppppuVar3,uStack_80,1,10000,0x32);
        if ((char)bStack_71 < '\0') {
          operator_delete(local_88);
        }
        puVar10 = &DAT_00d80788;
        goto LAB_0096b708;
      }
    }
  }
  else if (iVar6 == 4) {
    if ((bVar7 & 1) == 0) {
      lVar9 = DAT_00d80750;
      if (DAT_00d80750 == 0) {
        FUN_0096c004(&local_88,&local_50,&DAT_001c4e95);
        uVar2 = uStack_80;
        ppppppuVar3 = (undefined8 ******)local_88;
        if (-1 < (char)bStack_71) {
          uVar2 = (ulong)bStack_71;
          ppppppuVar3 = &local_88;
        }
        lVar9 = FUN_006660d0(ppppppuVar3,uVar2,1,10000,0x32);
        if ((char)bStack_71 < '\0') {
          operator_delete(local_88);
        }
        FUN_00d0f5e0(0,lVar9,&DAT_00d80750);
        if (lVar9 != 0) goto LAB_0096b370;
      }
      else {
LAB_0096b370:
        FUN_00666568(lVar9,uVar11 & 0xffffffff);
      }
      lVar9 = DAT_00d80760;
      if (DAT_00d80760 == 0) {
        FUN_0096c004(&local_88,&local_70,&DAT_001c4e95);
        ppppppuVar3 = (undefined8 ******)local_88;
        if (-1 < (char)bStack_71) {
          uStack_80 = (ulong)bStack_71;
          ppppppuVar3 = &local_88;
        }
        lVar9 = FUN_006660d0(ppppppuVar3,uStack_80,1,10000,0x32);
        if ((char)bStack_71 < '\0') {
          operator_delete(local_88);
        }
        puVar10 = &DAT_00d80760;
        goto LAB_0096b708;
      }
    }
    else {
      lVar9 = DAT_00d80758;
      if (DAT_00d80758 == 0) {
        ppppppuVar3 = (undefined8 ******)local_50;
        if (-1 < (long)local_40._7_1_) {
          ppppppuVar3 = &local_50;
        }
        puVar4 = puStack_48;
        if (-1 < (long)local_40) {
          puVar4 = (undefined1 *)(long)local_40._7_1_;
        }
        FUN_005ff514(&local_88,&uStack_31,ppppppuVar3,puVar4,&DAT_001c4e95,4);
        uVar2 = uStack_80;
        ppppppuVar3 = (undefined8 ******)local_88;
        if (-1 < (char)bStack_71) {
          uVar2 = (ulong)bStack_71;
          ppppppuVar3 = &local_88;
        }
        lVar9 = FUN_006660d0(ppppppuVar3,uVar2,1,10000,0x32);
        if ((char)bStack_71 < '\0') {
          operator_delete(local_88);
        }
        FUN_00d0f5e0(0,lVar9,&DAT_00d80758);
        if (lVar9 != 0) goto LAB_0096aff4;
      }
      else {
LAB_0096aff4:
        FUN_00666568(lVar9,uVar11 & 0xffffffff);
      }
      lVar9 = DAT_00d80768;
      if (DAT_00d80768 == 0) {
        ppppppuVar3 = (undefined8 ******)local_70;
        if (-1 < (long)local_60._7_1_) {
          ppppppuVar3 = &local_70;
        }
        puVar4 = puStack_68;
        if (-1 < (long)local_60) {
          puVar4 = (undefined1 *)(long)local_60._7_1_;
        }
        FUN_005ff514(&local_88,&uStack_31,ppppppuVar3,puVar4,&DAT_001c4e95,4);
        ppppppuVar3 = (undefined8 ******)local_88;
        if (-1 < (char)bStack_71) {
          uStack_80 = (ulong)bStack_71;
          ppppppuVar3 = &local_88;
        }
        lVar9 = FUN_006660d0(ppppppuVar3,uStack_80,1,10000,0x32);
        if ((char)bStack_71 < '\0') {
          operator_delete(local_88);
        }
        puVar10 = &DAT_00d80768;
        goto LAB_0096b708;
      }
    }
  }
  else {
    if (iVar6 != 3) goto LAB_0096b724;
    if ((bVar7 & 1) == 0) {
      lVar9 = DAT_00d806f0;
      if (DAT_00d806f0 == 0) {
        FUN_0096c004(&local_88,&local_50,&DAT_001bb2ae);
        uVar2 = uStack_80;
        ppppppuVar3 = (undefined8 ******)local_88;
        if (-1 < (char)bStack_71) {
          uVar2 = (ulong)bStack_71;
          ppppppuVar3 = &local_88;
        }
        lVar9 = FUN_006660d0(ppppppuVar3,uVar2,1,10000,0x32);
        if ((char)bStack_71 < '\0') {
          operator_delete(local_88);
        }
        FUN_00d0f5e0(0,lVar9,&DAT_00d806f0);
        if (lVar9 != 0) goto LAB_0096b580;
      }
      else {
LAB_0096b580:
        FUN_00666568(lVar9,uVar11 & 0xffffffff);
      }
      lVar9 = DAT_00d80700;
      if (DAT_00d80700 == 0) {
        FUN_0096c004(&local_88,&local_70,&DAT_001bb2ae);
        ppppppuVar3 = (undefined8 ******)local_88;
        if (-1 < (char)bStack_71) {
          uStack_80 = (ulong)bStack_71;
          ppppppuVar3 = &local_88;
        }
        lVar9 = FUN_006660d0(ppppppuVar3,uStack_80,1,10000,0x32);
        if ((char)bStack_71 < '\0') {
          operator_delete(local_88);
        }
        puVar10 = &DAT_00d80700;
        goto LAB_0096b708;
      }
    }
    else {
      lVar9 = DAT_00d806f8;
      if (DAT_00d806f8 == 0) {
        ppppppuVar3 = (undefined8 ******)local_50;
        if (-1 < (long)local_40._7_1_) {
          ppppppuVar3 = &local_50;
        }
        puVar4 = puStack_48;
        if (-1 < (long)local_40) {
          puVar4 = (undefined1 *)(long)local_40._7_1_;
        }
        FUN_005ff514(&local_88,&uStack_31,ppppppuVar3,puVar4,&DAT_001bb2ae,3);
        uVar2 = uStack_80;
        ppppppuVar3 = (undefined8 ******)local_88;
        if (-1 < (char)bStack_71) {
          uVar2 = (ulong)bStack_71;
          ppppppuVar3 = &local_88;
        }
        lVar9 = FUN_006660d0(ppppppuVar3,uVar2,1,10000,0x32);
        if ((char)bStack_71 < '\0') {
          operator_delete(local_88);
        }
        FUN_00d0f5e0(0,lVar9,&DAT_00d806f8);
        if (lVar9 != 0) goto LAB_0096ac00;
      }
      else {
LAB_0096ac00:
        FUN_00666568(lVar9,uVar11 & 0xffffffff);
      }
      lVar9 = DAT_00d80708;
      if (DAT_00d80708 == 0) {
        ppppppuVar3 = (undefined8 ******)local_70;
        if (-1 < (long)local_60._7_1_) {
          ppppppuVar3 = &local_70;
        }
        puVar4 = puStack_68;
        if (-1 < (long)local_60) {
          puVar4 = (undefined1 *)(long)local_60._7_1_;
        }
        FUN_005ff514(&local_88,&uStack_31,ppppppuVar3,puVar4,&DAT_001bb2ae,3);
        ppppppuVar3 = (undefined8 ******)local_88;
        if (-1 < (char)bStack_71) {
          uStack_80 = (ulong)bStack_71;
          ppppppuVar3 = &local_88;
        }
        lVar9 = FUN_006660d0(ppppppuVar3,uStack_80,1,10000,0x32);
        if ((char)bStack_71 < '\0') {
          operator_delete(local_88);
        }
        puVar10 = &DAT_00d80708;
        goto LAB_0096b708;
      }
    }
  }
LAB_0096b718:
  lVar8 = 0;
  if (lVar12 != 0) {
    lVar8 = lVar5 / lVar12;
  }
  FUN_00666568(lVar9,lVar8);
LAB_0096b724:
  if ((long)local_60 < 0) {
    operator_delete(local_70);
  }
  return;
}


// ===== 0096b778  FUN_0096b778 =====

void FUN_0096b778(undefined8 *param_1)

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
    plVar3 = puVar9 + uVar5 / 0xaa;
    lVar6 = *plVar3;
    lVar4 = lVar6 + (uVar5 % 0xaa) * 0x18;
    while (lVar4 != puVar9[(param_1[5] + uVar5) / 0xaa] + ((param_1[5] + uVar5) % 0xaa) * 0x18) {
      if (lVar4 == 0) goto LAB_0096b8fc;
      lVar4 = lVar4 + 0x18;
      if (lVar4 - lVar6 == 0xff0) {
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
    uVar1 = 0x55;
  }
  else {
    if (uVar5 != 2) goto LAB_0096b874;
    uVar1 = 0xaa;
  }
  param_1[4] = uVar1;
LAB_0096b874:
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
LAB_0096b8fc:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0096b94c  FUN_0096b94c =====

void FUN_0096b94c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  double dVar9;
  long lVar10;
  double dVar11;
  undefined1 auVar12 [16];
  
  uVar4 = *(ulong *)(param_2 + 0x50);
  if (uVar4 != 0) {
    if ((0 < (long)uVar4) && (*(long *)(param_2 + 8) != -1)) {
      dVar9 = *(double *)(param_2 + 0x58);
      dVar11 = -dVar9;
      if (5.0 <= dVar9) {
        dVar11 = -5.0;
      }
      lVar5 = SUB168(SEXT816((long)((param_4 - *(long *)(param_2 + 8)) * uVar4)) *
                     SEXT816(-0x20c49ba5e353f7cf),8);
      lVar5 = (lVar5 >> 7) - (lVar5 >> 0x3f);
      lVar10 = lVar5 + *(long *)(param_2 + 0x60);
      lVar5 = lVar5 + *(long *)(param_2 + 0x68);
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (long)((dVar11 / dVar9) * (double)uVar4);
      auVar12._8_8_ = lVar5;
      auVar12._0_8_ = lVar10;
      auVar12 = NEON_cmgt(auVar12,auVar3 << 0x40,8);
      auVar2._8_8_ = lVar5;
      auVar2._0_8_ = lVar10;
      auVar12 = NEON_bit(auVar3 << 0x40,auVar2,auVar12,1);
      *(long *)(param_2 + 0x68) = auVar12._8_8_;
      *(long *)(param_2 + 0x60) = auVar12._0_8_;
    }
    *(long *)(param_2 + 8) = param_4;
    goto LAB_0096baf0;
  }
  if (param_3 == 0) goto LAB_0096baf0;
  puVar1 = *(undefined8 **)(param_2 + 0x18);
  *(long *)(param_2 + 8) = param_4;
  if (puVar1 != *(undefined8 **)(param_2 + 0x20)) {
    uVar8 = *(ulong *)(param_2 + 0x30);
    uVar4 = *(long *)(param_2 + 0x38) + uVar8;
    plVar7 = puVar1 + uVar8 / 0xaa;
    lVar10 = *plVar7;
    lVar5 = lVar10 + (uVar8 % 0xaa) * 0x18;
    while (lVar5 != puVar1[uVar4 / 0xaa] + (uVar4 % 0xaa) * 0x18) {
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      lVar5 = lVar5 + 0x18;
      if (lVar5 - lVar10 == 0xff0) {
        plVar7 = plVar7 + 1;
        lVar10 = *plVar7;
        lVar5 = lVar10;
      }
    }
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  lVar5 = (long)*(undefined8 **)(param_2 + 0x20) - (long)puVar1;
  while (uVar4 = lVar5 >> 3, 2 < uVar4) {
    operator_delete((void *)*puVar1);
    puVar1 = (undefined8 *)(*(long *)(param_2 + 0x18) + 8);
    *(undefined8 **)(param_2 + 0x18) = puVar1;
    lVar5 = *(long *)(param_2 + 0x20) - (long)puVar1;
  }
  if (uVar4 == 1) {
    uVar6 = 0x55;
LAB_0096bae4:
    *(undefined8 *)(param_2 + 0x30) = uVar6;
  }
  else if (uVar4 == 2) {
    uVar6 = 0xaa;
    goto LAB_0096bae4;
  }
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
LAB_0096baf0:
  *(long *)(param_2 + 0x50) = param_3;
  *(undefined8 *)(param_2 + 0x58) = param_1;
  return;
}


// ===== 0096bb20  FUN_0096bb20 =====

void FUN_0096bb20(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  long lVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double local_28;
  double dStack_20;
  long local_18;
  
  if ((*(long *)(param_1 + 8) != -1) && (uVar7 = *(ulong *)(param_1 + 0x50), 0 < (long)uVar7)) {
    dVar10 = *(double *)(param_1 + 0x58);
    dVar12 = -dVar10;
    if (5.0 <= dVar10) {
      dVar12 = -5.0;
    }
    lVar6 = SUB168(SEXT816((long)(uVar7 * (param_3 - *(long *)(param_1 + 8)))) *
                   SEXT816(-0x20c49ba5e353f7cf),8);
    lVar6 = (lVar6 >> 7) - (lVar6 >> 0x3f);
    lVar11 = lVar6 + *(long *)(param_1 + 0x60);
    lVar6 = lVar6 + *(long *)(param_1 + 0x68);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (long)((dVar12 / dVar10) * (double)uVar7);
    auVar13._8_8_ = lVar6;
    auVar13._0_8_ = lVar11;
    auVar13 = NEON_cmgt(auVar13,auVar4 << 0x40,8);
    auVar3._8_8_ = lVar6;
    auVar3._0_8_ = lVar11;
    auVar13 = NEON_bit(auVar4 << 0x40,auVar3,auVar13,1);
    *(long *)(param_1 + 0x68) = auVar13._8_8_;
    *(long *)(param_1 + 0x60) = auVar13._0_8_;
  }
  dVar10 = *(double *)(param_1 + 0x58);
  *(long *)(param_1 + 8) = param_3;
  if (((0.0 < dVar10) && (*(long *)(param_1 + 0x50) != 0)) &&
     (lVar6 = (long)((dVar10 * 0.5 + (double)*(long *)(param_1 + 0x50)) / dVar10), lVar6 != 0)) {
    uVar7 = param_2 * 8;
    lVar8 = *(long *)(param_1 + 0x60);
    dVar10 = (double)lVar6;
    lVar11 = lVar8 + uVar7;
    lVar1 = lVar11 - lVar6;
    if (lVar8 <= lVar11 - lVar6) {
      lVar1 = lVar8;
    }
    if (lVar11 <= lVar6) {
      lVar1 = 0;
    }
    if (*(long *)(param_1 + 0x38) == 0) {
      dStack_20 = (double)uVar7 / dVar10;
      if (dStack_20 <= 1.0) {
        dStack_20 = 1.0;
      }
    }
    else {
      dStack_20 = (double)lVar1 / dVar10 + 1.0;
    }
    lVar9 = *(long *)(param_1 + 0x68);
    lVar8 = lVar9 + uVar7;
    lVar2 = lVar8 - lVar6;
    if (lVar9 <= lVar8 - lVar6) {
      lVar2 = lVar9;
    }
    if (lVar8 <= lVar6) {
      lVar2 = 0;
    }
    lVar5 = (long)(uVar7 - lVar6) / 1000;
    lVar9 = 0;
    if (lVar6 != 0) {
      lVar9 = (lVar5 * 100000) / lVar6;
    }
    dVar12 = (double)uVar7 / dVar10;
    if (dVar12 <= 1.0) {
      dVar12 = 1.0;
    }
    local_28 = (double)lVar2 / dVar10 + 1.0;
    if (*(long *)(param_1 + 0x38) == 0) {
      local_28 = dVar12;
    }
    *(long *)(param_1 + 0x60) = lVar11 - lVar1;
    *(long *)(param_1 + 0x68) = lVar8 - lVar2;
    *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + lVar9;
    *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + lVar5 * lVar5;
    *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 1;
    *(double *)(param_1 + 0x48) = local_28 + *(double *)(param_1 + 0x48);
    *(double *)(param_1 + 0x40) = dStack_20 + *(double *)(param_1 + 0x40);
    local_18 = param_3;
    FUN_0096bd14(param_1 + 0x10,&dStack_20,&local_28,&local_18);
  }
  return;
}


// ===== 0096bd14  FUN_0096bd14 =====

long FUN_0096bd14(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar7 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10);
  lVar5 = 0;
  if (lVar4 != lVar7) {
    lVar5 = (lVar4 - lVar7 >> 3) * 0xaa + -1;
  }
  if (lVar5 == *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) {
    FUN_0096c090(param_1);
    lVar7 = *(long *)(param_1 + 8);
    lVar4 = *(long *)(param_1 + 0x10);
  }
  if ((lVar7 != lVar4) &&
     (uVar1 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20),
     puVar3 = (undefined8 *)(*(long *)(lVar7 + (uVar1 / 0xaa) * 8) + (uVar1 % 0xaa) * 0x18),
     puVar3 != (undefined8 *)0x0)) {
    uVar8 = *param_3;
    uVar6 = *param_4;
    *puVar3 = *param_2;
    puVar3[1] = uVar8;
    puVar3[2] = uVar6;
    lVar5 = *(long *)(param_1 + 0x28) + 1;
    uVar1 = *(long *)(param_1 + 0x20) + lVar5;
    *(long *)(param_1 + 0x28) = lVar5;
    plVar2 = (long *)(*(long *)(param_1 + 8) + (uVar1 / 0xaa) * 8);
    lVar7 = *plVar2;
    lVar5 = 0;
    if (*(long *)(param_1 + 8) != *(long *)(param_1 + 0x10)) {
      lVar5 = lVar7 + (uVar1 % 0xaa) * 0x18;
    }
    if (lVar5 == lVar7) {
      lVar5 = plVar2[-1] + 0xff0;
    }
    return lVar5 + -0x18;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0096be40  FUN_0096be40 =====

undefined1  [16] FUN_0096be40(long param_1)

{
  ulong uVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  FUN_0096be90();
  uVar1 = *(ulong *)(param_1 + 0x38);
  if (uVar1 == 0) {
    dVar2 = 0.0;
  }
  else {
    dVar2 = *(double *)(param_1 + 0x40) / (double)uVar1;
  }
  auVar3[8] = uVar1 != 0;
  auVar3._0_8_ = dVar2;
  auVar3._9_7_ = 0;
  return auVar3;
}


// ===== 0096be90  FUN_0096be90 =====

void FUN_0096be90(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  double *pdVar7;
  double dVar8;
  
  lVar1 = param_1[7];
  if (lVar1 != 0) {
    lVar2 = *param_1;
    uVar4 = param_1[6];
    puVar3 = (undefined8 *)param_1[3];
    do {
      uVar5 = uVar4 / 0xaa;
      pdVar7 = (double *)(puVar3[uVar5] + (uVar4 % 0xaa) * 0x18);
      if (param_2 - lVar2 <= (long)pdVar7[2]) {
        return;
      }
      lVar6 = (uVar4 % 0xaa) * 0x18;
      dVar8 = (double)param_1[8] - *pdVar7;
      if (dVar8 <= 0.0) {
        dVar8 = 0.0;
      }
      param_1[8] = (long)dVar8;
      dVar8 = (double)param_1[9] - *(double *)(puVar3[uVar5] + lVar6 + 8);
      if (dVar8 <= 0.0) {
        dVar8 = 0.0;
      }
      param_1[9] = (long)dVar8;
      if (puVar3[uVar5] + lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      uVar4 = uVar4 + 1;
      lVar1 = lVar1 + -1;
      param_1[6] = uVar4;
      param_1[7] = lVar1;
      if (0x153 < uVar4) {
        operator_delete((void *)*puVar3);
        puVar3 = (undefined8 *)(param_1[3] + 8);
        lVar1 = param_1[7];
        param_1[3] = (long)puVar3;
        uVar4 = param_1[6] - 0xaa;
        param_1[6] = uVar4;
      }
    } while (lVar1 != 0);
  }
  return;
}


// ===== 0096bfb4  FUN_0096bfb4 =====

undefined1  [16] FUN_0096bfb4(long param_1)

{
  ulong uVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  FUN_0096be90();
  uVar1 = *(ulong *)(param_1 + 0x38);
  if (uVar1 == 0) {
    dVar2 = 0.0;
  }
  else {
    dVar2 = *(double *)(param_1 + 0x48) / (double)uVar1;
  }
  auVar3[8] = uVar1 != 0;
  auVar3._0_8_ = dVar2;
  auVar3._9_7_ = 0;
  return auVar3;
}


// ===== 0096c004  FUN_0096c004 =====

void FUN_0096c004(undefined8 param_1,undefined8 *param_2,char *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  char cVar3;
  size_t sVar4;
  undefined1 uStack_31;
  
  if (param_3 != (char *)0x0) {
    cVar3 = *(char *)((long)param_2 + 0x17);
    puVar1 = (undefined8 *)*param_2;
    if (-1 < (long)cVar3) {
      puVar1 = param_2;
    }
    lVar2 = param_2[1];
    if (-1 < cVar3) {
      lVar2 = (long)cVar3;
    }
    sVar4 = strlen(param_3);
    FUN_005ff514(param_1,&uStack_31,puVar1,lVar2,param_3,sVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/string_view:278: libc++ Hardening assertion __s != nullptr failed: null pointer passed to non-null argument of char_traits<...>::length\n"
            );
}


// ===== 0096c090  FUN_0096c090 =====

void FUN_0096c090(long *param_1)

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
      FUN_0096c500(&local_50,&local_18);
      lVar2 = param_1[1];
      lVar5 = param_1[2];
      if (lVar5 != lVar2) {
        do {
          lVar5 = lVar5 + -8;
          FUN_0096ca24(&local_50,lVar5);
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
      FUN_0096c500(param_1,&local_50);
      return;
    }
    local_50 = (undefined1 *)operator_new(0xff0);
    FUN_0096c788(param_1,&local_50);
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  else {
    param_1[4] = param_1[4] - 0xaa;
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  FUN_0096c278(param_1,&local_50);
  return;
}


// ===== 0096c278  FUN_0096c278 =====

void FUN_0096c278(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_0096c4e8;
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
LAB_0096c4e8:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0096c500  FUN_0096c500 =====

void FUN_0096c500(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_0096c770;
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
LAB_0096c770:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0096c788  FUN_0096c788 =====

void FUN_0096c788(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_0096ca0c;
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
LAB_0096ca0c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0096ca24  FUN_0096ca24 =====

void FUN_0096ca24(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_0096cca8;
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
LAB_0096cca8:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0096ccc0  FUN_0096ccc0 =====

void FUN_0096ccc0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 local_88;
  undefined1 uStack_79;
  undefined1 auStack_78 [24];
  undefined1 *local_60;
  undefined1 auStack_58 [24];
  undefined1 *local_40;
  undefined1 auStack_38 [24];
  long local_8;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < param_3) {
    return;
  }
  local_8 = param_3;
  FUN_0085765c(auStack_58,&local_8);
  FUN_008577dc(auStack_78,auStack_58);
  local_60 = &uStack_79;
  FUN_00857104(auStack_58);
  local_88 = 0;
  FUN_0085765c(auStack_38,&local_88);
  FUN_008577dc(auStack_58,auStack_38);
  local_40 = auStack_78;
  FUN_00857104(auStack_38);
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../video/rate_utilization_tracker.cc",0x20,"max_duration > TimeDelta::Zero()",
               &DAT_0021f924,local_40,auStack_58);
}


// ===== 0096cd84  FUN_0096cd84 =====

void FUN_0096cd84(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined1 uStack_89;
  undefined1 auStack_88 [24];
  undefined1 *local_70;
  undefined1 auStack_68 [24];
  undefined1 *local_50;
  undefined1 auStack_48 [24];
  long local_18;
  
  lVar4 = *(long *)(param_1 + 0x40);
  *(long *)(param_1 + 0x10) = param_2;
  if (lVar4 == 0) {
    return;
  }
  uVar2 = (lVar4 + *(long *)(param_1 + 0x38)) - 1;
  lVar3 = *(long *)(param_1 + 0x20);
  plVar5 = (long *)(*(long *)(lVar3 + (uVar2 / 0xaa) * 8) + (uVar2 % 0xaa) * 0x18);
  local_18 = param_3;
  if (*plVar5 <= param_3) {
    if (*plVar5 == param_3) {
      plVar5[1] = param_2;
    }
    else {
      lVar6 = *(long *)(param_1 + 0x28);
      lVar1 = 0;
      if (lVar6 != lVar3) {
        lVar1 = (lVar6 - lVar3 >> 3) * 0xaa + -1;
      }
      if (lVar1 == *(long *)(param_1 + 0x38) + lVar4) {
        FUN_0096d718(param_1 + 0x18);
        lVar3 = *(long *)(param_1 + 0x20);
        lVar6 = *(long *)(param_1 + 0x28);
      }
      if ((lVar3 == lVar6) ||
         (uVar2 = *(long *)(param_1 + 0x40) + *(long *)(param_1 + 0x38),
         plVar5 = (long *)(*(long *)(lVar3 + (uVar2 / 0xaa) * 8) + (uVar2 % 0xaa) * 0x18),
         plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *plVar5 = param_3;
      plVar5[1] = param_2;
      plVar5[2] = 0;
      *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 1;
    }
    FUN_0096cf5c(param_1,param_3);
    return;
  }
  FUN_008f1fac(auStack_68,&local_18);
  FUN_008577dc(auStack_88,auStack_68);
  local_70 = &uStack_89;
  FUN_00857104(auStack_68);
  FUN_008f1fac(auStack_48,plVar5);
  FUN_008577dc(auStack_68,auStack_48);
  local_50 = auStack_88;
  FUN_00857104(auStack_48);
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../video/rate_utilization_tracker.cc",0x2b,"time >= last_data_point.time",
               &DAT_0021f924,local_50,auStack_68);
}


// ===== 0096cf5c  FUN_0096cf5c =====

void FUN_0096cf5c(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  uVar1 = param_1[1];
  uVar3 = param_2 / 1000;
  uVar5 = uVar1 / 1000;
  if (499 < param_2 % 1000) {
    uVar3 = uVar3 + 1;
  }
  if ((param_2 & 0x8000000000000000) != 0) {
    uVar3 = -(-param_2 / 1000) - (ulong)(500 < -param_2 % 1000);
  }
  if (499 < uVar1 % 1000) {
    uVar5 = uVar5 + 1;
  }
  if ((uVar1 & 0x8000000000000000) != 0) {
    uVar5 = -(-uVar1 / 1000) - (ulong)(500 < -uVar1 % 1000);
  }
  if ((long)uVar5 < (long)uVar3) {
    lVar6 = 0x7fffffffffffffff;
    if ((param_2 != 0x7fffffffffffffff) && (uVar1 != 0x8000000000000000)) {
      lVar6 = -0x8000000000000000;
      if (uVar1 != 0x7fffffffffffffff && param_2 != 0x8000000000000000) {
        lVar6 = param_2 - uVar1;
      }
    }
    uVar3 = param_1[8];
  }
  else {
    lVar6 = 0;
    uVar3 = param_1[8];
  }
  if (uVar3 != 0) {
    puVar2 = (undefined8 *)param_1[4];
    uVar5 = param_1[7];
    do {
      plVar4 = (long *)(puVar2[uVar5 / 0xaa] + (uVar5 % 0xaa) * 0x18);
      if (((lVar6 <= *plVar4) && (uVar3 <= *param_1)) && (plVar4[2] != 0)) {
        return;
      }
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      uVar5 = uVar5 + 1;
      uVar3 = uVar3 - 1;
      param_1[7] = uVar5;
      param_1[8] = uVar3;
      if (0x153 < uVar5) {
        operator_delete((void *)*puVar2);
        uVar3 = param_1[8];
        puVar2 = (undefined8 *)(param_1[4] + 8);
        uVar5 = param_1[7] - 0xaa;
        param_1[4] = (ulong)puVar2;
        param_1[7] = uVar5;
      }
    } while (uVar3 != 0);
  }
  return;
}


// ===== 0096d12c  FUN_0096d12c =====

void FUN_0096d12c(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined1 uStack_91;
  undefined1 auStack_90 [24];
  undefined1 *local_78;
  undefined1 auStack_70 [24];
  undefined1 *local_58;
  long local_50;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(param_1 + 0x40);
  lVar1 = *(long *)(param_1 + 0x20);
  local_50 = param_3;
  if (lVar2 == 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    lVar7 = *(long *)(param_1 + 0x10);
    lVar2 = 0;
    if (lVar3 != lVar1) {
      lVar2 = (lVar3 - lVar1 >> 3) * 0xaa + -1;
    }
    if (lVar2 == *(long *)(param_1 + 0x38)) {
      FUN_0096d718(param_1 + 0x18);
      lVar1 = *(long *)(param_1 + 0x20);
      lVar3 = *(long *)(param_1 + 0x28);
    }
    if (lVar1 == lVar3) goto LAB_0096d2cc;
  }
  else {
    uVar4 = (lVar2 + *(long *)(param_1 + 0x38)) - 1;
    plVar5 = (long *)(*(long *)(lVar1 + (uVar4 / 0xaa) * 8) + (uVar4 % 0xaa) * 0x18);
    if (param_3 < *plVar5) {
      FUN_008f1fac(auStack_70,&local_50);
      FUN_008577dc(auStack_90,auStack_70);
      local_78 = &uStack_91;
      FUN_00857104(auStack_70);
      FUN_008f1fac(auStack_48,plVar5);
      FUN_008577dc(auStack_70,auStack_48);
      local_58 = auStack_90;
      FUN_00857104(auStack_48);
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../video/rate_utilization_tracker.cc",0x3e,"time >= last_data_point.time",
                   &DAT_0021f924,local_58,auStack_70);
    }
    if (*plVar5 == param_3) {
      lVar2 = plVar5[2];
      lVar1 = -0x8000000000000000;
      if (param_2 != -0x8000000000000000 && lVar2 != -0x8000000000000000) {
        lVar1 = lVar2 + param_2;
      }
      lVar3 = 0x7fffffffffffffff;
      if (lVar2 != 0x7fffffffffffffff && param_2 != 0x7fffffffffffffff) {
        lVar3 = lVar1;
      }
      plVar5[2] = lVar3;
      goto LAB_0096d2ac;
    }
    lVar6 = *(long *)(param_1 + 0x28);
    lVar7 = *(long *)(param_1 + 0x10);
    lVar3 = 0;
    if (lVar6 != lVar1) {
      lVar3 = (lVar6 - lVar1 >> 3) * 0xaa + -1;
    }
    if (lVar3 == *(long *)(param_1 + 0x38) + lVar2) {
      FUN_0096d718(param_1 + 0x18);
      lVar1 = *(long *)(param_1 + 0x20);
      lVar6 = *(long *)(param_1 + 0x28);
    }
    if (lVar1 == lVar6) goto LAB_0096d2cc;
  }
  uVar4 = *(long *)(param_1 + 0x40) + *(long *)(param_1 + 0x38);
  plVar5 = (long *)(*(long *)(lVar1 + (uVar4 / 0xaa) * 8) + (uVar4 % 0xaa) * 0x18);
  if (plVar5 == (long *)0x0) {
LAB_0096d2cc:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  *plVar5 = param_3;
  plVar5[1] = lVar7;
  plVar5[2] = param_2;
  *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 1;
LAB_0096d2ac:
  FUN_0096cf5c(param_1,param_3);
  return;
}


// ===== 0096d35c  FUN_0096d35c =====

undefined1  [16] FUN_0096d35c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  double dVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 uStack_a1;
  undefined1 auStack_a0 [24];
  undefined1 *local_88;
  undefined1 auStack_80 [24];
  undefined1 *local_68;
  long local_60;
  undefined1 auStack_58 [24];
  
  lVar8 = *(long *)(param_1 + 0x40);
  if (lVar8 == 0) {
    dVar7 = 0.0;
    uVar9 = 0;
    goto LAB_0096d60c;
  }
  uVar16 = *(ulong *)(param_1 + 0x38);
  uVar5 = (lVar8 + uVar16) - 1;
  lVar6 = *(long *)(param_1 + 0x20);
  plVar11 = (long *)(*(long *)(lVar6 + (uVar5 / 0xaa) * 8) + (uVar5 % 0xaa) * 0x18);
  lVar13 = *plVar11;
  if (param_2 < lVar13) {
    local_60 = param_2;
    FUN_008f1fac(auStack_80,&local_60);
    FUN_008577dc(auStack_a0,auStack_80);
    local_88 = &uStack_a1;
    FUN_00857104(auStack_80);
    FUN_0096d6b0(param_1 + 0x18);
    FUN_008f1fac(auStack_58);
    FUN_008577dc(auStack_80,auStack_58);
    local_68 = auStack_a0;
    FUN_00857104(auStack_58);
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../video/rate_utilization_tracker.cc",0x50,"time >= data_points_.back().time",
                 &DAT_0021f924,local_68,auStack_80);
  }
  lVar8 = lVar8 + -1;
  lVar10 = *(long *)(*(long *)(lVar6 + (uVar16 / 0xaa) * 8) + (uVar16 % 0xaa) * 0x18 + 0x10);
  if (lVar8 == 0) {
    lVar14 = 0;
    lVar20 = lVar10;
LAB_0096d51c:
    lVar12 = 0;
    dVar7 = 0.0;
    uVar9 = 0;
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_0096d60c;
  }
  else {
    lVar12 = 0;
    lVar14 = 0;
    lVar15 = lVar10;
    do {
      uVar5 = uVar16 + 1;
      plVar17 = (long *)(*(long *)(lVar6 + (uVar16 / 0xaa) * 8) + (uVar16 % 0xaa) * 0x18);
      plVar18 = (long *)(*(long *)(lVar6 + (uVar5 / 0xaa) * 8) + (uVar5 % 0xaa) * 0x18);
      lVar3 = *plVar17;
      lVar20 = plVar18[2];
      lVar19 = *plVar18;
      lVar1 = -0x8000000000000000;
      if (lVar20 != -0x8000000000000000 && lVar10 != -0x8000000000000000) {
        lVar1 = lVar20 + lVar10;
      }
      lVar2 = 0x7fffffffffffffff;
      if (lVar20 != 0x7fffffffffffffff) {
        lVar2 = lVar1;
      }
      bVar4 = lVar10 != 0x7fffffffffffffff;
      lVar10 = 0x7fffffffffffffff;
      if (bVar4) {
        lVar10 = lVar2;
      }
      lVar1 = -0x8000000000000000;
      if (lVar3 != 0x7fffffffffffffff && lVar19 != -0x8000000000000000) {
        lVar1 = lVar19 - lVar3;
      }
      lVar2 = 0x7fffffffffffffff;
      if (lVar19 != 0x7fffffffffffffff && lVar3 != -0x8000000000000000) {
        lVar2 = lVar1;
      }
      lVar1 = (long)(&uleb128_003d0900 + plVar17[1] * lVar2) / 8000000 + lVar14;
      lVar3 = lVar12;
      if (lVar12 != -0x8000000000000000) {
        lVar3 = (long)(&uleb128_003d0900 + plVar17[1] * lVar2) / 8000000 + lVar12;
      }
      if (lVar12 != 0x7fffffffffffffff) {
        lVar12 = lVar3;
      }
      if (lVar15 <= lVar1) {
        lVar1 = lVar15;
      }
      lVar3 = lVar14;
      if (lVar14 != -0x8000000000000000) {
        lVar3 = lVar1;
      }
      lVar1 = lVar15;
      if (lVar14 != 0x7fffffffffffffff) {
        lVar1 = lVar3;
      }
      lVar14 = 0;
      if (lVar20 == 0) {
        lVar20 = lVar15;
        lVar14 = lVar1;
      }
      lVar8 = lVar8 + -1;
      lVar15 = lVar20;
      uVar16 = uVar5;
    } while (lVar8 != 0);
    if (lVar12 == 0) goto LAB_0096d51c;
  }
  lVar8 = -0x8000000000000000;
  if (lVar13 != 0x7fffffffffffffff && param_2 != -0x8000000000000000) {
    lVar8 = param_2 - lVar13;
  }
  lVar6 = 0x7fffffffffffffff;
  if (lVar13 != -0x8000000000000000) {
    lVar6 = lVar8;
  }
  lVar8 = 0x7fffffffffffffff;
  if (param_2 != 0x7fffffffffffffff) {
    lVar8 = lVar6;
  }
  lVar6 = 0x7fffffffffffffff;
  if (lVar20 != 0x7fffffffffffffff && lVar14 != -0x8000000000000000) {
    lVar6 = (long)(&uleb128_003d0900 + plVar11[1] * lVar8) / 8000000;
    lVar8 = lVar6;
    if (lVar6 <= lVar20 - lVar14) {
      lVar8 = lVar20 - lVar14;
    }
    if (lVar14 != 0x7fffffffffffffff && lVar20 != -0x8000000000000000) {
      lVar6 = lVar8;
    }
  }
  lVar8 = lVar12;
  if (lVar12 != -0x8000000000000000) {
    lVar8 = lVar6 + lVar12;
  }
  if (lVar10 == -0x8000000000000000) {
    dVar7 = -INFINITY;
  }
  else if (lVar10 == 0x7fffffffffffffff) {
    dVar7 = INFINITY;
  }
  else {
    dVar7 = (double)lVar10;
  }
  uVar9 = 1;
  dVar21 = 9.223372036854776e+18;
  if (lVar12 != 0x7fffffffffffffff && lVar6 != 0x7fffffffffffffff) {
    dVar21 = (double)lVar8;
  }
  dVar7 = dVar7 / dVar21;
LAB_0096d60c:
  auVar22._8_8_ = uVar9;
  auVar22._0_8_ = dVar7;
  return auVar22;
}


// ===== 0096d6b0  FUN_0096d6b0 =====

long FUN_0096d6b0(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar1 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
    return *(long *)(*(long *)(param_1 + 8) + (uVar1 / 0xaa) * 8) + (uVar1 % 0xaa) * 0x18;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/deque:1582: libc++ Hardening assertion !empty() failed: deque::back called on an empty deque\n"
            );
}


// ===== 0096d718  FUN_0096d718 =====

void FUN_0096d718(long *param_1)

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
      FUN_0096db88(&local_50,&local_18);
      lVar2 = param_1[1];
      lVar5 = param_1[2];
      if (lVar5 != lVar2) {
        do {
          lVar5 = lVar5 + -8;
          FUN_0096e0ac(&local_50,lVar5);
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
      FUN_0096db88(param_1,&local_50);
      return;
    }
    local_50 = (undefined1 *)operator_new(0xff0);
    FUN_0096de10(param_1,&local_50);
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  else {
    param_1[4] = param_1[4] - 0xaa;
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  FUN_0096d900(param_1,&local_50);
  return;
}


// ===== 0096d900  FUN_0096d900 =====

void FUN_0096d900(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_0096db70;
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
LAB_0096db70:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0096db88  FUN_0096db88 =====

void FUN_0096db88(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_0096ddf8;
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
LAB_0096ddf8:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0096de10  FUN_0096de10 =====

void FUN_0096de10(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_0096e094;
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
LAB_0096e094:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0096e0ac  FUN_0096e0ac =====

void FUN_0096e0ac(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_0096e330;
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
LAB_0096e330:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0096e348  FUN_0096e348 =====

uint FUN_0096e348(long param_1,long param_2,ulong param_3,byte param_4)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  double *pdVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if (((*(char *)(param_1 + 0x14) == '\x01') && (0 < (int)uVar2)) &&
     (1 < *(ulong *)(param_2 + 0xc0))) {
    lVar10 = *(long *)(param_2 + 0xa8);
    lVar1 = *(long *)(param_2 + 0xb0);
    uVar8 = (lVar1 - lVar10 >> 3) * -0x70a3d70a3d70a3d7;
    lVar6 = lVar10;
    if (1 < uVar8) {
      for (; lVar6 != lVar1; lVar6 = lVar6 + 200) {
        if (*(double *)(lVar6 + 0x20) < 1.0 == NAN(*(double *)(lVar6 + 0x20))) {
          lVar3 = (lVar1 + -200) - lVar10;
          lVar6 = lVar10;
          if (lVar3 == 0) goto LAB_0096e4b0;
          uVar8 = ((ulong)(lVar3 * 0xf5c28f5c28f5c29) >> 3) + 1;
          uVar9 = uVar8 & 0x3ffffffffffffffe;
          lVar6 = lVar10 + (uVar8 & 0x3ffffffffffffffe) * 200;
          pdVar7 = (double *)(lVar10 + 0xe8);
          do {
            dVar13 = 1.0;
            if (1.0 <= pdVar7[-0x19]) {
              dVar13 = pdVar7[-0x19];
            }
            dVar14 = 1.0;
            if (1.0 <= *pdVar7) {
              dVar14 = *pdVar7;
            }
            dVar15 = 10000.0;
            if (dVar13 == 10000.0 || dVar13 < 10000.0 != NAN(dVar13)) {
              dVar15 = dVar13;
            }
            dVar13 = 10000.0;
            if (dVar14 == 10000.0 || dVar14 < 10000.0 != NAN(dVar14)) {
              dVar13 = dVar14;
            }
            pdVar7[-0x19] = dVar15;
            uVar9 = uVar9 - 2;
            *pdVar7 = dVar13;
            pdVar7 = pdVar7 + 0x32;
          } while (uVar9 != 0);
          if (uVar8 != (uVar8 & 0x3ffffffffffffffe)) {
LAB_0096e4b0:
            do {
              dVar13 = 1.0;
              if (1.0 <= *(double *)(lVar6 + 0x20)) {
                dVar13 = *(double *)(lVar6 + 0x20);
              }
              dVar14 = 10000.0;
              if (dVar13 == 10000.0 || dVar13 < 10000.0 != NAN(dVar13)) {
                dVar14 = dVar13;
              }
              *(double *)(lVar6 + 0x20) = dVar14;
              lVar6 = lVar6 + 200;
            } while (lVar6 != lVar1);
          }
          lVar10 = *(long *)(param_2 + 0xa8);
          lVar1 = *(long *)(param_2 + 0xb0);
          if ((int)uVar2 < 0x11) {
            dVar13 = 1.79769313486232e+308;
            uVar11 = 1;
            uVar5 = uVar2;
            do {
              if (lVar10 == lVar1) {
                dVar14 = 0.0;
              }
              else {
                dVar14 = 0.0;
                lVar6 = lVar10;
                do {
                  dVar15 = 1.0;
                  pdVar7 = (double *)(lVar6 + 0x20);
                  if ((int)uVar2 <= (int)uVar5) {
                    dVar16 = 1.79769313486232e+308;
                    uVar12 = uVar2;
                    do {
                      dVar17 = (double)(int)uVar12;
                      uVar12 = uVar12 + uVar2;
                      dVar18 = ABS(*pdVar7 - (double)uVar5 / dVar17);
                      if (dVar18 <= dVar16) {
                        dVar16 = dVar18;
                        dVar15 = (double)uVar5 / dVar17;
                      }
                    } while ((int)uVar12 <= (int)uVar5);
                  }
                  lVar6 = lVar6 + 200;
                  dVar14 = dVar14 + ABS(*pdVar7 - dVar15);
                } while (lVar6 != lVar1);
              }
              uVar12 = uVar5;
              if (dVar13 <= dVar14) {
                uVar12 = uVar11;
                dVar14 = dVar13;
              }
              dVar13 = dVar14;
              uVar5 = uVar5 + 1;
              uVar11 = uVar12;
            } while (uVar5 != 0x11);
          }
          else {
            uVar12 = 1;
          }
          if (lVar10 != lVar1) {
            do {
              dVar13 = 1.0;
              if ((int)uVar2 <= (int)uVar12) {
                dVar14 = 1.79769313486232e+308;
                uVar5 = uVar2;
                do {
                  dVar15 = (double)(int)uVar5;
                  uVar5 = uVar5 + uVar2;
                  dVar16 = ABS(*(double *)(lVar10 + 0x20) - (double)uVar12 / dVar15);
                  if (dVar16 <= dVar14) {
                    dVar14 = dVar16;
                    dVar13 = (double)uVar12 / dVar15;
                  }
                } while ((int)uVar5 <= (int)uVar12);
              }
              uVar8 = FUN_00417e08();
              if ((uVar8 & 1) == 0) {
                FUN_00623bb0(*(undefined8 *)(lVar10 + 0x20),dVar13,&DAT_002256b7,
                             "../../video/alignment_adjuster.cc",0x189,"scale_resolution_down_by ",
                             &DAT_00199e3f);
              }
              *(double *)(lVar10 + 0x20) = dVar13;
              lVar10 = lVar10 + 200;
            } while (lVar10 != lVar1);
          }
          if ((int)uVar2 < (int)uVar12) {
            return uVar12;
          }
          return uVar2;
        }
      }
      iVar4 = (int)param_3;
      if ((param_4 & (param_3 != 0 && param_3 < uVar8)) == 0) {
        iVar4 = (int)uVar8;
      }
      uVar2 = uVar2 << (ulong)(iVar4 - 1U & 0x1f);
    }
  }
  return uVar2;
}


// ===== 0096e64c  FUN_0096e64c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0096e64c(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  puVar3 = (undefined8 *)operator_new(0x60);
  *param_1 = puVar3;
  param_1[1] = puVar3;
  param_1[2] = puVar3 + 0xc;
  uVar2 = _DAT_001f4250;
  uVar1 = _DAT_001f1dd0;
  uVar5 = _DAT_001f1c30;
  if ((param_2 == 2) || (param_2 == 5)) {
    if (puVar3 == (undefined8 *)0x0) goto LAB_0096e830;
    puVar3[1] = _UNK_001f1c38;
    *puVar3 = uVar5;
    uVar5 = _DAT_001f22e0;
    if (puVar3 == (undefined8 *)0xfffffffffffffff0) goto LAB_0096e830;
    puVar3[3] = _UNK_001f22e8;
    puVar3[2] = uVar5;
    uVar5 = _DAT_001f3950;
    if (puVar3 == (undefined8 *)0xffffffffffffffe0) goto LAB_0096e830;
    puVar3[5] = _UNK_001f3958;
    puVar3[4] = uVar5;
    uVar5 = _DAT_001f4dd0;
    if (puVar3 == (undefined8 *)0xffffffffffffffd0) goto LAB_0096e830;
    puVar3[7] = _UNK_001f4dd8;
    puVar3[6] = uVar5;
    uVar5 = _DAT_001f20d0;
    if (puVar3 == (undefined8 *)0xffffffffffffffc0) goto LAB_0096e830;
    puVar3[9] = _UNK_001f20d8;
    puVar3[8] = uVar5;
    uVar5 = DAT_001f5610;
  }
  else {
    if (param_2 != 3) {
      if (puVar3 == (undefined8 *)0x0) goto LAB_0096e830;
      puVar3[1] = _UNK_001f4258;
      *puVar3 = uVar2;
      uVar5 = _DAT_001f20e0;
      if (puVar3 == (undefined8 *)0xfffffffffffffff0) goto LAB_0096e830;
      puVar3[3] = _UNK_001f20e8;
      puVar3[2] = uVar5;
      uVar5 = _DAT_001f4bc0;
      if (puVar3 == (undefined8 *)0xffffffffffffffe0) goto LAB_0096e830;
      puVar3[5] = _UNK_001f4bc8;
      puVar3[4] = uVar5;
      uVar5 = _DAT_001f2c60;
      if (puVar3 == (undefined8 *)0xffffffffffffffd0) goto LAB_0096e830;
      puVar3[7] = _UNK_001f2c68;
      puVar3[6] = uVar5;
      uVar5 = _DAT_001f3d50;
      if (puVar3 == (undefined8 *)0xffffffffffffffc0) goto LAB_0096e830;
      puVar3[9] = _UNK_001f3d58;
      puVar3[8] = uVar5;
      uVar5 = DAT_001f4f38;
      if (puVar3 + 10 == (undefined8 *)0x0) goto LAB_0096e830;
      *(undefined4 *)(puVar3 + 10) = 0x1fa400;
      uVar4 = 5000000;
      goto LAB_0096e814;
    }
    if (puVar3 == (undefined8 *)0x0) goto LAB_0096e830;
    puVar3[1] = _UNK_001f1dd8;
    *puVar3 = uVar1;
    uVar5 = _DAT_001f3460;
    if (puVar3 == (undefined8 *)0xfffffffffffffff0) goto LAB_0096e830;
    puVar3[3] = _UNK_001f3468;
    puVar3[2] = uVar5;
    uVar5 = _DAT_001f4060;
    if (puVar3 == (undefined8 *)0xffffffffffffffe0) goto LAB_0096e830;
    puVar3[5] = _UNK_001f4068;
    puVar3[4] = uVar5;
    uVar5 = _DAT_001f4810;
    if (puVar3 == (undefined8 *)0xffffffffffffffd0) goto LAB_0096e830;
    puVar3[7] = _UNK_001f4818;
    puVar3[6] = uVar5;
    uVar5 = _DAT_001f4240;
    if (puVar3 == (undefined8 *)0xffffffffffffffc0) goto LAB_0096e830;
    puVar3[9] = _UNK_001f4248;
    puVar3[8] = uVar5;
    uVar5 = DAT_001f5380;
  }
  if (puVar3 == (undefined8 *)0xffffffffffffffb0) {
LAB_0096e830:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  *(undefined4 *)(puVar3 + 10) = 0x1fa400;
  uVar4 = 3700000;
LAB_0096e814:
  *(undefined8 *)((long)puVar3 + 0x54) = uVar5;
  *(undefined4 *)((long)puVar3 + 0x5c) = uVar4;
  param_1[1] = puVar3 + 0xc;
  return;
}


// ===== 0096e844  FUN_0096e844 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0096e844(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x70);
  *param_1 = puVar2;
  param_1[1] = puVar2;
  param_1[2] = puVar2 + 0xe;
  if (param_2 == 5) {
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      uVar1 = _DAT_001f1c30;
      if (puVar2 != (undefined8 *)0xfffffffffffffff0) {
        puVar2[3] = _UNK_001f1c38;
        puVar2[2] = uVar1;
        uVar1 = _DAT_001f3120;
        if (puVar2 != (undefined8 *)0xffffffffffffffe0) {
          puVar2[5] = _UNK_001f3128;
          puVar2[4] = uVar1;
          uVar1 = _DAT_001f24d0;
          if (puVar2 != (undefined8 *)0xffffffffffffffd0) {
            puVar2[7] = _UNK_001f24d8;
            puVar2[6] = uVar1;
            uVar1 = _DAT_001f3300;
            if (puVar2 != (undefined8 *)0xffffffffffffffc0) {
              puVar2[9] = _UNK_001f3308;
              puVar2[8] = uVar1;
              uVar1 = _DAT_001f3ed0;
              if (puVar2 != (undefined8 *)0xffffffffffffffb0) {
                puVar2[0xb] = _UNK_001f3ed8;
                puVar2[10] = uVar1;
                if (puVar2 + 0xc != (undefined8 *)0x0) {
                  *(undefined4 *)(puVar2 + 0xc) = 0x1fa400;
                  uVar3 = 3300000;
                  uVar4 = 1500000;
LAB_0096e99c:
                  *(undefined4 *)((long)puVar2 + 0x6c) = uVar3;
                  *(undefined4 *)((long)puVar2 + 100) = uVar4;
                  *(undefined4 *)(puVar2 + 0xd) = 30000;
                  param_1[1] = puVar2 + 0xe;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  else if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    uVar1 = _DAT_001f4250;
    if (puVar2 != (undefined8 *)0xfffffffffffffff0) {
      puVar2[3] = _UNK_001f4258;
      puVar2[2] = uVar1;
      uVar1 = _DAT_001f1de0;
      if (puVar2 != (undefined8 *)0xffffffffffffffe0) {
        puVar2[5] = _UNK_001f1de8;
        puVar2[4] = uVar1;
        uVar1 = _DAT_001f4a00;
        if (puVar2 != (undefined8 *)0xffffffffffffffd0) {
          puVar2[7] = _UNK_001f4a08;
          puVar2[6] = uVar1;
          uVar1 = _DAT_001f4560;
          if (puVar2 != (undefined8 *)0xffffffffffffffc0) {
            puVar2[9] = _UNK_001f4568;
            puVar2[8] = uVar1;
            uVar1 = _DAT_001f4a10;
            if (puVar2 != (undefined8 *)0xffffffffffffffb0) {
              puVar2[0xb] = _UNK_001f4a18;
              puVar2[10] = uVar1;
              if (puVar2 + 0xc != (undefined8 *)0x0) {
                *(undefined4 *)(puVar2 + 0xc) = 0x1fa400;
                uVar3 = 4000000;
                uVar4 = 2500000;
                goto LAB_0096e99c;
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


// ===== 0096e9d0  FUN_0096e9d0 =====

void FUN_0096e9d0(uint *param_1,ulong param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  void *__src;
  long lVar4;
  uint uVar5;
  float fVar6;
  int *__dest;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  int *piVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 uStack_f1;
  char *local_f0;
  undefined8 uStack_e8;
  undefined1 *local_e0;
  char *pcStack_d8;
  char **local_d0;
  char *local_c8;
  char **ppcStack_c0;
  ulong local_b8;
  char **ppcStack_b0;
  char *local_a8;
  ulong *puStack_a0;
  ulong local_98;
  char **ppcStack_90;
  char *local_88;
  ulong *puStack_80;
  ulong local_78;
  char **ppcStack_70;
  
  if (((param_2 >> 0x20 & 1) != 0) && (uVar11 = (uint)param_2, 0 < (int)uVar11)) {
    __src = (void *)*param_3;
    lVar4 = param_3[1];
    uVar8 = lVar4 - (long)__src;
    if (uVar8 != 0) {
      if ((long)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_007baaec();
      }
      __dest = (int *)operator_new(uVar8);
      piVar14 = (int *)((long)__dest + uVar8);
      memcpy(__dest,__src,uVar8);
      uVar13 = uVar8 >> 4;
      FUN_0096f790(__dest,(long)__dest + uVar8,LZCOUNT(uVar13) << 1 ^ 0x7e,1);
      lVar9 = 0;
      lVar7 = 0;
      piVar10 = __dest;
      uVar8 = uVar13;
      if (uVar13 < 2) {
        uVar8 = 1;
      }
      do {
        if ((int)uVar11 <= *piVar10) {
          if ((int)lVar9 != 1) {
            if ((ulong)(-lVar7 >> 0x20) < uVar13) {
              puVar1 = (uint *)(__dest + (-lVar7 >> 0x20) * 4);
              uVar5 = *puVar1;
              if (uVar5 == uVar11) {
                uVar17 = *(undefined8 *)(puVar1 + 2);
                uVar16 = *(undefined8 *)puVar1;
                goto LAB_0096eac8;
              }
              if ((int)lVar9 == 0) {
                uVar17 = *(undefined8 *)(__dest + 2);
                uVar16 = *(undefined8 *)__dest;
                goto LAB_0096eac8;
              }
              uVar8 = -0x100000000 - lVar7 >> 0x20;
              if (uVar8 < uVar13) {
                puVar2 = (uint *)(__dest + uVar8 * 4);
                uVar3 = *puVar2;
                fVar6 = (float)(int)(uVar11 - uVar3) / (float)(int)(uVar5 - uVar3);
                uVar15 = (uint)((1.0 - fVar6) * (float)(int)puVar2[1] +
                               (float)(int)puVar1[1] * fVar6);
                uVar12 = (uint)((1.0 - fVar6) * (float)(int)puVar2[3] +
                               (float)(int)puVar1[3] * fVar6);
                if ((int)uVar15 <= (int)uVar12) {
                  *param_1 = uVar11;
                  param_1[1] = uVar15;
                  param_1[2] = 30000;
                  param_1[3] = uVar12;
                  goto LAB_0096eacc;
                }
                uVar8 = FUN_004022fc();
                if ((uVar8 & 1) == 0) {
                  local_f0 = "../../rtc_base/experiments/encoder_info_settings.cc";
                  uStack_e8 = 0x60a;
                  local_d0 = &local_f0;
                  ppcStack_c0 = &pcStack_d8;
                  local_c8 = " lower_pixel_count = ";
                  ppcStack_b0 = &local_c8;
                  local_e0 = &uStack_f1;
                  puStack_a0 = &local_b8;
                  local_a8 = " upper_pixel_count = ";
                  ppcStack_90 = &local_a8;
                  pcStack_d8 = "BitRate interpolation calculating result is abnormal. ";
                  puStack_80 = &local_98;
                  ppcStack_70 = &local_88;
                  local_88 = " frame_size_pixels = ";
                  local_78 = param_2 & 0x7fffffff;
                  local_b8 = (ulong)uVar3;
                  local_98 = (ulong)uVar5;
                  FUN_00623bb0(0x40dd4c0000000000,&DAT_00229980,
                               "../../rtc_base/experiments/encoder_info_settings.cc",0x60a);
                }
                *(undefined1 *)param_1 = 0;
                *(undefined1 *)(param_1 + 4) = 0;
                if (__dest == (int *)0x0) {
                  return;
                }
                goto LAB_0096ead8;
              }
            }
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                      );
          }
          break;
        }
        lVar9 = lVar9 + -1;
        lVar7 = lVar7 + -0x100000000;
        piVar10 = piVar10 + 4;
      } while (-lVar9 != uVar8);
      uVar17 = *(undefined8 *)(piVar14 + -2);
      uVar16 = *(undefined8 *)(piVar14 + -4);
LAB_0096eac8:
      *(undefined8 *)(param_1 + 2) = uVar17;
      *(undefined8 *)param_1 = uVar16;
LAB_0096eacc:
      *(undefined1 *)(param_1 + 4) = 1;
      if (__dest == (int *)0x0) {
        return;
      }
LAB_0096ead8:
      lVar7 = (long)__src - ((long)__dest + lVar4);
      uVar13 = (ulong)(((lVar4 - (lVar4 << 0x3c)) - (long)__src) + ((long)__src << 0x3c)) >> 4;
      uVar8 = ((lVar7 << 0x3c) - lVar7) - 0x10U >> 4;
      if (uVar13 <= uVar8) {
        uVar8 = uVar13;
      }
      if ((1 < uVar8) &&
         ((((int)__src - (int)lVar4 | (int)__src - ((int)__dest + (int)lVar4)) & 0xfU) == 0)) {
        uVar8 = uVar8 & 0xffffffffffffffe;
        piVar14 = piVar14 + uVar8 * -4;
        do {
          uVar8 = uVar8 - 2;
        } while (uVar8 != 0);
      }
      do {
        if (piVar14 == __dest) {
          operator_delete(__dest);
          return;
        }
        piVar14 = piVar14 + -4;
      } while (piVar14 != (int *)0x0);
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}


// ===== 0096ed3c  FUN_0096ed3c =====

void FUN_0096ed3c(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 ****ppppuVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 ***pppuVar4;
  undefined8 *puVar5;
  void *pvVar6;
  long *plVar7;
  undefined1 *puVar8;
  void *pvVar9;
  void *pvVar10;
  long *plVar11;
  void *pvVar12;
  byte bVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  undefined8 ***local_128;
  undefined8 *puStack_120;
  undefined8 *local_118;
  undefined8 ***local_110;
  undefined8 *puStack_108;
  undefined8 local_100;
  undefined8 *local_f8;
  undefined **local_f0;
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
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  *param_1 = &PTR_FUN_00d3ee68;
  FUN_00661054(param_1 + 1,"requested_resolution_alignment",0x1e);
  puVar2 = PTR_DAT_00d520b8;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[1] = puVar2 + 0x10;
  FUN_00662484(param_1 + 10,"apply_alignment_to_all_simulcast_layers",0x27);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_f0 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
  pppuVar4 = (undefined8 ***)operator_new(0x80);
  *pppuVar4 = (undefined8 **)&PTR_FUN_00d3eef8;
  FUN_008ff588(pppuVar4 + 1,"frame_size_pixels",0x11);
  pppuVar4[1] = (undefined8 **)&PTR_FUN_00d3ef28;
  pppuVar4[0xe] = (undefined8 **)FUN_00970c0c;
  pppuVar4[0xf] = (undefined8 **)&DAT_00229990;
  pppuVar4[10] = (undefined8 **)0x0;
  pppuVar4[9] = (undefined8 **)0x0;
  pppuVar4[0xc] = (undefined8 **)0x0;
  pppuVar4[0xb] = (undefined8 **)0x0;
  local_110 = pppuVar4;
  puVar5 = (undefined8 *)operator_new(0x80);
  *puVar5 = &PTR_FUN_00d3eef8;
  FUN_008ff588(puVar5 + 1,"min_start_bitrate_bps",0x15);
  puVar5[1] = &PTR_FUN_00d3ef28;
  puVar5[0xe] = FUN_00971324;
  puVar5[0xf] = &DAT_002299b0;
  puVar5[10] = 0;
  puVar5[9] = 0;
  puVar5[0xc] = 0;
  puVar5[0xb] = 0;
  puStack_108 = puVar5;
  puVar5 = (undefined8 *)operator_new(0x80);
  *puVar5 = &PTR_FUN_00d3eef8;
  FUN_008ff588(puVar5 + 1,"min_bitrate_bps",0xf);
  puVar5[1] = &PTR_FUN_00d3ef28;
  puVar5[0xe] = FUN_00971330;
  puVar5[0xf] = &DAT_002299d0;
  puVar5[10] = 0;
  puVar5[9] = 0;
  puVar5[0xc] = 0;
  puVar5[0xb] = 0;
  local_100 = puVar5;
  puVar5 = (undefined8 *)operator_new(0x80);
  *puVar5 = &PTR_FUN_00d3eef8;
  FUN_008ff588(puVar5 + 1,"max_bitrate_bps",0xf);
  puVar5[1] = &PTR_FUN_00d3ef28;
  puVar5[0xe] = FUN_0097133c;
  puVar5[0xf] = &DAT_002299f0;
  puVar5[10] = 0;
  puVar5[9] = 0;
  puVar5[0xc] = 0;
  puVar5[0xb] = 0;
  local_f8 = puVar5;
  FUN_00971348(&local_f0,&local_110,4);
  local_90 = (undefined1 *)0x0;
  puStack_88 = (undefined1 *)0x0;
  puStack_98 = (undefined1 *)0x0;
  local_f0 = &PTR_FUN_00d3eec8;
  local_100 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_108 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
  local_110 = (undefined8 ***)&DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*param_2 + 0x10))(&local_110,param_2,param_3,param_4);
  puVar8 = (undefined1 *)(ulong)local_100._7_1_;
  puVar5 = puStack_108;
  if (-1 < (long)local_100) {
    puVar5 = (undefined8 *)puVar8;
  }
  bVar13 = local_100._7_1_;
  if (puVar5 == (undefined8 *)0x0) {
    (**(code **)(*param_2 + 0x10))(&local_128,param_2,"WebRTC-GetEncoderInfoOverride",0x1d);
    if ((long)local_100 < 0) {
      operator_delete(local_110);
    }
    local_100 = local_118;
    puVar8 = (undefined1 *)((ulong)local_118 >> 0x38);
    puStack_108 = puStack_120;
    local_110 = local_128;
    bVar13 = (byte)((ulong)local_118 >> 0x38);
  }
  puStack_120 = param_1 + 1;
  puVar5 = puStack_108;
  ppppuVar1 = (undefined8 ****)local_110;
  if (-1 < (char)bVar13) {
    puVar5 = (undefined8 *)puVar8;
    ppppuVar1 = &local_110;
  }
  local_128 = (undefined8 ***)&local_f0;
  local_118 = param_1 + 10;
  FUN_00661cc0(&local_128,3,ppppuVar1,puVar5);
  puVar8 = puStack_98;
  uVar14 = (long)local_90 - (long)puStack_98;
  if (uVar14 == 0) {
    pvVar10 = (void *)0x0;
    pvVar6 = (void *)0x0;
    local_128 = (undefined8 ***)0x0;
    puStack_120 = (undefined8 *)0x0;
    local_118 = (undefined8 *)0x0;
  }
  else {
    if ((long)uVar14 < 0) {
      puVar5 = (undefined8 *)FUN_00970bf4();
      pvVar10 = (void *)puVar5[0xb];
      *puVar5 = &PTR_FUN_00d3eec8;
      if (pvVar10 != (void *)0x0) {
        pvVar6 = (void *)puVar5[0xc];
        uVar16 = (ulong)((long)pvVar6 + (-0x10 - ((long)pvVar6 << 0x3c))) >> 4;
        uVar14 = (ulong)(((long)pvVar10 - (long)pvVar6 << 0x3c) - ((long)pvVar10 - (long)pvVar6)) >>
                 4;
        if (uVar16 <= uVar14) {
          uVar14 = uVar16;
        }
        if ((1 < uVar14) && ((((int)pvVar10 - (int)pvVar6 | -(int)pvVar6) & 0xfU) == 0)) {
          uVar14 = uVar14 & 0xffffffffffffffe;
          pvVar6 = (void *)((long)pvVar6 + uVar14 * -0x10);
          do {
            uVar14 = uVar14 - 2;
          } while (uVar14 != 0);
        }
        do {
          if (pvVar6 == pvVar10) {
            puVar5[0xc] = pvVar10;
            operator_delete(pvVar10);
            goto LAB_0096f2cc;
          }
          pvVar6 = (void *)((long)pvVar6 + -0x10);
        } while (pvVar6 != (void *)0x0);
LAB_0096f2a8:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
LAB_0096f2cc:
      plVar15 = (long *)puVar5[8];
      *puVar5 = &PTR_FUN_00d3d1e0;
      if (plVar15 != (long *)0x0) {
        plVar11 = (long *)puVar5[9];
        plVar7 = plVar15;
        if (plVar15 != plVar11) {
          do {
            plVar11 = plVar11 + -1;
            if (plVar11 == (long *)0x0) goto LAB_0096f2a8;
            plVar7 = (long *)*plVar11;
            *plVar11 = 0;
            if (plVar7 != (long *)0x0) {
              (**(code **)(*plVar7 + 8))();
            }
          } while (plVar11 != plVar15);
          plVar7 = (long *)puVar5[8];
        }
        puVar5[9] = plVar15;
        operator_delete(plVar7);
      }
      FUN_006634ac(puVar5);
      return;
    }
    pvVar6 = operator_new(uVar14);
    pvVar10 = (void *)((long)pvVar6 + uVar14);
    memcpy(pvVar6,puVar8,uVar14);
    uVar16 = 0;
    puStack_120 = (undefined8 *)0x0;
    local_118 = (undefined8 *)0x0;
    local_128 = (undefined8 ***)0x0;
    do {
      uStack_78 = ((undefined8 *)((long)pvVar6 + uVar16))[1];
      local_80 = *(undefined8 *)((long)pvVar6 + uVar16);
      if (puStack_120 < local_118) {
        if (puStack_120 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar5 = puStack_120 + 2;
        puStack_120[1] = uStack_78;
        *puStack_120 = local_80;
      }
      else {
        puVar5 = (undefined8 *)FUN_0097088c(&local_128,&local_80);
      }
      uVar16 = uVar16 + 0x10;
      puStack_120 = puVar5;
    } while (uVar14 != uVar16);
  }
  pvVar9 = (void *)param_1[0x12];
  puVar5 = puStack_120;
  if (pvVar9 == (void *)0x0) {
LAB_0096f118:
    puVar3 = local_118;
    pppuVar4 = local_128;
    puStack_120 = (undefined8 *)0x0;
    local_118 = (undefined8 *)0x0;
    local_128 = (undefined8 ***)0x0;
    param_1[0x12] = pppuVar4;
    param_1[0x13] = puVar5;
    param_1[0x14] = puVar3;
    if (pvVar6 == (void *)0x0) {
LAB_0096f1d0:
      if ((long)local_100 < 0) {
        operator_delete(local_110);
      }
      FUN_0096f218(&local_f0);
      return;
    }
    uVar16 = (ulong)((long)pvVar10 + (-0x10 - ((long)pvVar10 << 0x3c))) >> 4;
    uVar14 = (ulong)(((long)pvVar6 - (long)pvVar10 << 0x3c) - ((long)pvVar6 - (long)pvVar10)) >> 4;
    if (uVar16 <= uVar14) {
      uVar14 = uVar16;
    }
    if ((1 < uVar14) && ((((int)pvVar6 - (int)pvVar10 | -(int)pvVar10) & 0xcU) == 0)) {
      uVar14 = uVar14 & 0xffffffffffffffe;
      pvVar10 = (void *)((long)pvVar10 + uVar14 * -0x10);
      do {
        uVar14 = uVar14 - 2;
      } while (uVar14 != 0);
    }
    do {
      if (pvVar10 == pvVar6) {
        operator_delete(pvVar6);
        goto LAB_0096f1d0;
      }
      pvVar10 = (void *)((long)pvVar10 + -0x10);
    } while (pvVar10 != (void *)0x0);
  }
  else {
    pvVar12 = (void *)param_1[0x13];
    uVar16 = (ulong)((long)pvVar12 + (-0x10 - ((long)pvVar12 << 0x3c))) >> 4;
    uVar14 = (ulong)(((long)pvVar9 - (long)pvVar12 << 0x3c) - ((long)pvVar9 - (long)pvVar12)) >> 4;
    if (uVar16 <= uVar14) {
      uVar14 = uVar16;
    }
    if ((1 < uVar14) && ((((int)pvVar9 - (int)pvVar12 | -(int)pvVar12) & 0xfU) == 0)) {
      uVar14 = uVar14 & 0xffffffffffffffe;
      pvVar12 = (void *)((long)pvVar12 + uVar14 * -0x10);
      do {
        uVar14 = uVar14 - 2;
      } while (uVar14 != 0);
    }
    do {
      if (pvVar12 == pvVar9) {
        param_1[0x13] = pvVar9;
        operator_delete(pvVar9);
        puVar5 = puStack_120;
        goto LAB_0096f118;
      }
      pvVar12 = (void *)((long)pvVar12 + -0x10);
    } while (pvVar12 != (void *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0096f218  FUN_0096f218 =====

void FUN_0096f218(undefined8 *param_1)

{
  void *pvVar1;
  long *plVar2;
  void *pvVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  
  pvVar1 = (void *)param_1[0xb];
  *param_1 = &PTR_FUN_00d3eec8;
  if (pvVar1 == (void *)0x0) {
LAB_0096f2cc:
    plVar7 = (long *)param_1[8];
    *param_1 = &PTR_FUN_00d3d1e0;
    if (plVar7 != (long *)0x0) {
      plVar4 = (long *)param_1[9];
      plVar2 = plVar7;
      if (plVar7 != plVar4) {
        do {
          plVar4 = plVar4 + -1;
          if (plVar4 == (long *)0x0) goto LAB_0096f2a8;
          plVar2 = (long *)*plVar4;
          *plVar4 = 0;
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 8))();
          }
        } while (plVar4 != plVar7);
        plVar2 = (long *)param_1[8];
      }
      param_1[9] = plVar7;
      operator_delete(plVar2);
    }
    FUN_006634ac(param_1);
    return;
  }
  pvVar3 = (void *)param_1[0xc];
  uVar6 = (ulong)((long)pvVar3 + (-0x10 - ((long)pvVar3 << 0x3c))) >> 4;
  uVar5 = (ulong)(((long)pvVar1 - (long)pvVar3 << 0x3c) - ((long)pvVar1 - (long)pvVar3)) >> 4;
  if (uVar6 <= uVar5) {
    uVar5 = uVar6;
  }
  if ((1 < uVar5) && ((((int)pvVar1 - (int)pvVar3 | -(int)pvVar3) & 0xfU) == 0)) {
    uVar5 = uVar5 & 0xffffffffffffffe;
    pvVar3 = (void *)((long)pvVar3 + uVar5 * -0x10);
    do {
      uVar5 = uVar5 - 2;
    } while (uVar5 != 0);
  }
  do {
    if (pvVar3 == pvVar1) {
      param_1[0xc] = pvVar1;
      operator_delete(pvVar1);
      goto LAB_0096f2cc;
    }
    pvVar3 = (void *)((long)pvVar3 + -0x10);
  } while (pvVar3 != (void *)0x0);
LAB_0096f2a8:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0096f354  FUN_0096f354 =====

ulong FUN_0096f354(long param_1)

{
  ulong uVar1;
  
  if ((*(char *)(param_1 + 0x48) == '\x01') && (*(int *)(param_1 + 0x44) == 0)) {
    uVar1 = FUN_004022fc();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/experiments/encoder_info_settings.cc",0x792,
                   "Unsupported alignment value, ignored.");
    }
    return 0;
  }
  return *(ulong *)(param_1 + 0x44) & 0xffffffffff;
}


// ===== 0096f3bc  FUN_0096f3bc =====

void FUN_0096f3bc(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[0x12];
  *param_1 = &PTR_FUN_00d3ee68;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[0x13];
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
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -0x10);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[0x13] = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_006634ac(param_1 + 10);
  FUN_006634ac(param_1 + 1);
  operator_delete(param_1);
  return;
}


// ===== 0096f494  FUN_0096f494 =====

void FUN_0096f494(undefined8 *param_1,undefined8 param_2)

{
  FUN_0096ed3c(param_1,param_2,"WebRTC-SimulcastEncoderAdapter-GetEncoderInfoOverride",0x35);
  *param_1 = &PTR_FUN_00d3ee88;
  return;
}


// ===== 0096f4d4  FUN_0096f4d4 =====

void FUN_0096f4d4(undefined8 *param_1,undefined8 param_2)

{
  FUN_0096ed3c(param_1,param_2,"WebRTC-VP8-GetEncoderInfoOverride",0x21);
  *param_1 = &PTR_FUN_00d3eea8;
  return;
}


// ===== 0096f514  FUN_0096f514 =====

void FUN_0096f514(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[0x12];
  *param_1 = &PTR_FUN_00d3ee68;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[0x13];
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
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -0x10);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[0x13] = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_006634ac(param_1 + 10);
  FUN_006634ac(param_1 + 1);
  operator_delete(param_1);
  return;
}


// ===== 0096f5ec  FUN_0096f5ec =====

void FUN_0096f5ec(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[0x12];
  *param_1 = &PTR_FUN_00d3ee68;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[0x13];
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
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -0x10);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[0x13] = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_006634ac(param_1 + 10);
  FUN_006634ac(param_1 + 1);
  operator_delete(param_1);
  return;
}


// ===== 0096f6c4  FUN_0096f6c4 =====

void FUN_0096f6c4(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[0x12];
  *param_1 = &PTR_FUN_00d3ee68;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[0x13];
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
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -0x10);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[0x13] = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_006634ac(param_1 + 10);
  FUN_006634ac(param_1 + 1);
  return;
}


// ===== 0096f790  FUN_0096f790 =====

void FUN_0096f790(int *param_1,int *param_2,long param_3,uint param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  int *piVar14;
  int *piVar15;
  ulong uVar16;
  int *piVar17;
  int iVar18;
  int *piVar19;
  long lVar20;
  int *piVar21;
  ulong uVar22;
  ulong uVar23;
  int *piVar24;
  int *piVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  
  do {
    piVar17 = param_2 + -4;
    piVar25 = param_2 + -8;
    piVar24 = param_2 + -0xc;
    piVar19 = param_1;
LAB_0096f7d0:
    param_1 = piVar19;
    uVar11 = (long)param_2 - (long)param_1 >> 4;
    if (uVar11 - 2 == 0 || (long)uVar11 < 2) {
      if (uVar11 < 2) {
        return;
      }
      if (uVar11 == 2) {
        iVar10 = *param_1;
        if (iVar10 <= param_2[-4]) {
          return;
        }
        uVar26 = *(undefined8 *)(param_2 + -4);
        iVar6 = param_1[3];
        uVar27 = *(undefined8 *)(param_1 + 1);
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + -2);
        *(undefined8 *)param_1 = uVar26;
        param_2[-4] = iVar10;
        *(undefined8 *)(param_2 + -3) = uVar27;
        param_2[-1] = iVar6;
        return;
      }
    }
    else {
      if (uVar11 == 3) {
        iVar10 = *param_1;
        piVar19 = param_1 + 4;
        iVar6 = *piVar19;
        piVar17 = param_2 + -4;
        if (iVar6 < iVar10) {
          iVar18 = param_1[1];
          iVar12 = param_1[2];
          iVar4 = param_1[3];
          if (*piVar17 < iVar6) {
            uVar26 = *(undefined8 *)piVar17;
            *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + -2);
            *(undefined8 *)param_1 = uVar26;
          }
          else {
            uVar27 = *(undefined8 *)(param_1 + 6);
            uVar26 = *(undefined8 *)piVar19;
            param_1[4] = iVar10;
            param_1[5] = iVar18;
            param_1[6] = iVar12;
            param_1[7] = iVar4;
            *(undefined8 *)(param_1 + 2) = uVar27;
            *(undefined8 *)param_1 = uVar26;
            if (iVar10 <= *piVar17) {
              return;
            }
            uVar26 = *(undefined8 *)piVar17;
            *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + -2);
            *(undefined8 *)piVar19 = uVar26;
          }
          param_2[-4] = iVar10;
          param_2[-3] = iVar18;
          param_2[-2] = iVar12;
          param_2[-1] = iVar4;
          return;
        }
        if (iVar6 <= *piVar17) {
          return;
        }
        uVar26 = *(undefined8 *)piVar17;
        iVar10 = param_1[7];
        uVar27 = *(undefined8 *)(param_1 + 5);
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + -2);
        *(undefined8 *)piVar19 = uVar26;
        param_2[-4] = iVar6;
        *(undefined8 *)(param_2 + -3) = uVar27;
        param_2[-1] = iVar10;
        iVar10 = *param_1;
        if (iVar10 <= param_1[4]) {
          return;
        }
        uVar27 = *(undefined8 *)(param_1 + 6);
        uVar26 = *(undefined8 *)piVar19;
LAB_0097024c:
        param_1[4] = iVar10;
        *(undefined8 *)(param_1 + 2) = uVar27;
        *(undefined8 *)param_1 = uVar26;
        *(undefined8 *)(param_1 + 5) = *(undefined8 *)(param_1 + 1);
        param_1[7] = param_1[3];
        return;
      }
      if (uVar11 == 4) {
        FUN_009703c8(param_1,param_1 + 4,param_1 + 8,piVar17);
        return;
      }
      if (uVar11 == 5) {
        FUN_009703c8(param_1,param_1 + 4,param_1 + 8,param_1 + 0xc);
        iVar10 = param_1[0xc];
        if (iVar10 <= param_2[-4]) {
          return;
        }
        uVar26 = *(undefined8 *)(param_2 + -4);
        iVar6 = param_1[0xf];
        uVar27 = *(undefined8 *)(param_1 + 0xd);
        *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + -2);
        *(undefined8 *)(param_1 + 0xc) = uVar26;
        param_2[-4] = iVar10;
        *(undefined8 *)(param_2 + -3) = uVar27;
        param_2[-1] = iVar6;
        if (param_1[8] <= param_1[0xc]) {
          return;
        }
        uVar26 = *(undefined8 *)(param_1 + 0xc);
        param_1[0xc] = param_1[8];
        *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 0xe);
        *(undefined8 *)(param_1 + 8) = uVar26;
        *(undefined8 *)(param_1 + 0xd) = *(undefined8 *)(param_1 + 9);
        param_1[0xf] = param_1[0xb];
        if (param_1[4] <= param_1[8]) {
          return;
        }
        uVar26 = *(undefined8 *)(param_1 + 8);
        iVar10 = *param_1;
        param_1[8] = param_1[4];
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
        *(undefined8 *)(param_1 + 4) = uVar26;
        *(undefined8 *)(param_1 + 9) = *(undefined8 *)(param_1 + 5);
        param_1[0xb] = param_1[7];
        if (iVar10 <= param_1[4]) {
          return;
        }
        uVar27 = *(undefined8 *)(param_1 + 6);
        uVar26 = *(undefined8 *)(param_1 + 4);
        goto LAB_0097024c;
      }
    }
    if ((long)uVar11 < 0x18) {
      if ((param_4 & 1) == 0) {
        if (param_1 == param_2) {
          return;
        }
        if (param_1 + 4 == param_2) {
          return;
        }
        lVar13 = 0;
        piVar19 = param_1 + 4;
        piVar17 = param_1;
        do {
          piVar25 = piVar19;
          iVar10 = piVar17[4];
          if (iVar10 < *piVar17) {
            uVar26 = *(undefined8 *)(piVar17 + 5);
            iVar6 = piVar17[7];
            lVar7 = lVar13;
            do {
              lVar20 = lVar7;
              puVar2 = (undefined8 *)((long)param_1 + lVar20);
              puVar2[3] = puVar2[1];
              puVar2[2] = *puVar2;
              if (lVar20 == -0x10) {
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__algorithm/sort.h:293: libc++ Hardening assertion __k != __leftmost failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                          );
              }
              lVar7 = lVar20 + -0x10;
            } while (iVar10 < *(int *)(puVar2 + -2));
            *(int *)((long)param_1 + lVar20) = iVar10;
            *(undefined8 *)((long)param_1 + lVar20 + 4) = uVar26;
            *(int *)((long)param_1 + lVar20 + 0xc) = iVar6;
          }
          piVar19 = piVar25 + 4;
          lVar13 = lVar13 + 0x10;
          piVar17 = piVar25;
        } while (piVar19 != param_2);
        return;
      }
      if (param_1 == param_2) {
        return;
      }
      if (param_1 + 4 == param_2) {
        return;
      }
      lVar13 = 0;
      piVar19 = param_1 + 4;
      piVar17 = param_1;
      break;
    }
    if (param_3 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar9 = uVar11 - 2 >> 1;
      uVar8 = uVar9;
      goto LAB_00970048;
    }
    iVar10 = *piVar17;
    piVar19 = param_1 + (uVar11 >> 1) * 4;
    if (uVar11 < 0x81) {
      iVar6 = *param_1;
      iVar18 = *piVar19;
      if (iVar6 < iVar18) {
        iVar12 = piVar19[1];
        iVar4 = piVar19[2];
        iVar5 = piVar19[3];
        if (iVar10 < iVar6) {
          uVar26 = *(undefined8 *)piVar17;
          *(undefined8 *)(piVar19 + 2) = *(undefined8 *)(param_2 + -2);
          *(undefined8 *)piVar19 = uVar26;
        }
        else {
          uVar26 = *(undefined8 *)param_1;
          *(undefined8 *)(piVar19 + 2) = *(undefined8 *)(param_1 + 2);
          *(undefined8 *)piVar19 = uVar26;
          *param_1 = iVar18;
          param_1[1] = iVar12;
          param_1[2] = iVar4;
          param_1[3] = iVar5;
          if (iVar18 <= *piVar17) goto LAB_0096fbb4;
          uVar26 = *(undefined8 *)piVar17;
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + -2);
          *(undefined8 *)param_1 = uVar26;
        }
        param_2[-4] = iVar18;
        param_2[-3] = iVar12;
        param_2[-2] = iVar4;
        param_2[-1] = iVar5;
      }
      else if (iVar10 < iVar6) {
        uVar26 = *(undefined8 *)piVar17;
        iVar10 = param_1[3];
        uVar27 = *(undefined8 *)(param_1 + 1);
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + -2);
        *(undefined8 *)param_1 = uVar26;
        param_2[-4] = iVar6;
        *(undefined8 *)(param_2 + -3) = uVar27;
        param_2[-1] = iVar10;
        iVar10 = *piVar19;
        if (*param_1 < iVar10) {
          uVar26 = *(undefined8 *)param_1;
          iVar6 = piVar19[3];
          uVar27 = *(undefined8 *)(piVar19 + 1);
          *(undefined8 *)(piVar19 + 2) = *(undefined8 *)(param_1 + 2);
          *(undefined8 *)piVar19 = uVar26;
          *param_1 = iVar10;
          *(undefined8 *)(param_1 + 1) = uVar27;
          param_1[3] = iVar6;
        }
      }
    }
    else {
      iVar6 = *piVar19;
      iVar18 = *param_1;
      if (iVar6 < iVar18) {
        iVar12 = param_1[1];
        iVar4 = param_1[2];
        iVar5 = param_1[3];
        if (iVar10 < iVar6) {
          uVar26 = *(undefined8 *)piVar17;
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + -2);
          *(undefined8 *)param_1 = uVar26;
        }
        else {
          uVar26 = *(undefined8 *)piVar19;
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(piVar19 + 2);
          *(undefined8 *)param_1 = uVar26;
          *piVar19 = iVar18;
          piVar19[1] = iVar12;
          piVar19[2] = iVar4;
          piVar19[3] = iVar5;
          if (iVar18 <= *piVar17) goto LAB_0096f958;
          uVar26 = *(undefined8 *)piVar17;
          *(undefined8 *)(piVar19 + 2) = *(undefined8 *)(param_2 + -2);
          *(undefined8 *)piVar19 = uVar26;
        }
        param_2[-4] = iVar18;
        param_2[-3] = iVar12;
        param_2[-2] = iVar4;
        param_2[-1] = iVar5;
      }
      else if (iVar10 < iVar6) {
        uVar26 = *(undefined8 *)piVar17;
        iVar10 = piVar19[3];
        uVar27 = *(undefined8 *)(piVar19 + 1);
        *(undefined8 *)(piVar19 + 2) = *(undefined8 *)(param_2 + -2);
        *(undefined8 *)piVar19 = uVar26;
        param_2[-4] = iVar6;
        *(undefined8 *)(param_2 + -3) = uVar27;
        param_2[-1] = iVar10;
        iVar10 = *param_1;
        if (*piVar19 < iVar10) {
          uVar26 = *(undefined8 *)piVar19;
          iVar6 = param_1[3];
          uVar27 = *(undefined8 *)(param_1 + 1);
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(piVar19 + 2);
          *(undefined8 *)param_1 = uVar26;
          *piVar19 = iVar10;
          *(undefined8 *)(piVar19 + 1) = uVar27;
          piVar19[3] = iVar6;
        }
      }
LAB_0096f958:
      piVar15 = param_1 + 4;
      iVar10 = *piVar15;
      piVar14 = piVar19 + -4;
      iVar6 = *piVar14;
      if (iVar6 < iVar10) {
        iVar18 = param_1[5];
        iVar12 = param_1[6];
        iVar4 = param_1[7];
        if (*piVar25 < iVar6) {
          uVar26 = *(undefined8 *)piVar25;
          *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + -6);
          *(undefined8 *)piVar15 = uVar26;
        }
        else {
          uVar26 = *(undefined8 *)piVar14;
          *(undefined8 *)(param_1 + 6) = *(undefined8 *)(piVar19 + -2);
          *(undefined8 *)piVar15 = uVar26;
          piVar19[-4] = iVar10;
          piVar19[-3] = iVar18;
          piVar19[-2] = iVar12;
          piVar19[-1] = iVar4;
          if (iVar10 <= *piVar25) goto LAB_0096fa40;
          uVar26 = *(undefined8 *)piVar25;
          *(undefined8 *)(piVar19 + -2) = *(undefined8 *)(param_2 + -6);
          *(undefined8 *)piVar14 = uVar26;
        }
        param_2[-8] = iVar10;
        param_2[-7] = iVar18;
        param_2[-6] = iVar12;
        param_2[-5] = iVar4;
      }
      else if (*piVar25 < iVar6) {
        uVar26 = *(undefined8 *)piVar25;
        iVar10 = piVar19[-1];
        uVar27 = *(undefined8 *)(piVar19 + -3);
        *(undefined8 *)(piVar19 + -2) = *(undefined8 *)(param_2 + -6);
        *(undefined8 *)piVar14 = uVar26;
        param_2[-8] = iVar6;
        *(undefined8 *)(param_2 + -7) = uVar27;
        param_2[-5] = iVar10;
        iVar10 = *piVar15;
        if (piVar19[-4] < iVar10) {
          uVar26 = *(undefined8 *)piVar14;
          iVar6 = param_1[7];
          uVar27 = *(undefined8 *)(param_1 + 5);
          *(undefined8 *)(param_1 + 6) = *(undefined8 *)(piVar19 + -2);
          *(undefined8 *)piVar15 = uVar26;
          piVar19[-4] = iVar10;
          *(undefined8 *)(piVar19 + -3) = uVar27;
          piVar19[-1] = iVar6;
        }
      }
LAB_0096fa40:
      piVar21 = param_1 + 8;
      iVar10 = *piVar21;
      piVar15 = piVar19 + 4;
      iVar6 = *piVar15;
      if (iVar6 < iVar10) {
        iVar18 = param_1[9];
        iVar12 = param_1[10];
        iVar4 = param_1[0xb];
        if (*piVar24 < iVar6) {
          uVar26 = *(undefined8 *)piVar24;
          *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + -10);
          *(undefined8 *)piVar21 = uVar26;
        }
        else {
          uVar26 = *(undefined8 *)piVar15;
          *(undefined8 *)(param_1 + 10) = *(undefined8 *)(piVar19 + 6);
          *(undefined8 *)piVar21 = uVar26;
          piVar19[4] = iVar10;
          piVar19[5] = iVar18;
          piVar19[6] = iVar12;
          piVar19[7] = iVar4;
          if (iVar10 <= *piVar24) goto LAB_0096faf8;
          uVar26 = *(undefined8 *)piVar24;
          *(undefined8 *)(piVar19 + 6) = *(undefined8 *)(param_2 + -10);
          *(undefined8 *)piVar15 = uVar26;
        }
        param_2[-0xc] = iVar10;
        param_2[-0xb] = iVar18;
        param_2[-10] = iVar12;
        param_2[-9] = iVar4;
      }
      else if (*piVar24 < iVar6) {
        uVar26 = *(undefined8 *)piVar24;
        iVar10 = piVar19[7];
        uVar27 = *(undefined8 *)(piVar19 + 5);
        *(undefined8 *)(piVar19 + 6) = *(undefined8 *)(param_2 + -10);
        *(undefined8 *)piVar15 = uVar26;
        param_2[-0xc] = iVar6;
        *(undefined8 *)(param_2 + -0xb) = uVar27;
        param_2[-9] = iVar10;
        iVar10 = *piVar21;
        if (piVar19[4] < iVar10) {
          uVar26 = *(undefined8 *)piVar15;
          iVar6 = param_1[0xb];
          uVar27 = *(undefined8 *)(param_1 + 9);
          *(undefined8 *)(param_1 + 10) = *(undefined8 *)(piVar19 + 6);
          *(undefined8 *)piVar21 = uVar26;
          piVar19[4] = iVar10;
          *(undefined8 *)(piVar19 + 5) = uVar27;
          piVar19[7] = iVar6;
        }
      }
LAB_0096faf8:
      iVar10 = *piVar19;
      iVar18 = piVar19[-4];
      iVar6 = piVar19[4];
      if (iVar10 < iVar18) {
        iVar12 = piVar19[-3];
        iVar4 = piVar19[-2];
        if (iVar6 < iVar10) {
          uVar26 = *(undefined8 *)piVar15;
          piVar19[4] = iVar18;
          piVar19[5] = iVar12;
          *(undefined8 *)(piVar19 + -2) = *(undefined8 *)(piVar19 + 6);
          *(undefined8 *)piVar14 = uVar26;
        }
        else {
          uVar27 = *(undefined8 *)(piVar19 + 2);
          uVar26 = *(undefined8 *)piVar19;
          *piVar19 = iVar18;
          piVar19[1] = iVar12;
          piVar19[2] = iVar4;
          piVar19[3] = piVar19[-1];
          *(undefined8 *)(piVar19 + -2) = uVar27;
          *(undefined8 *)piVar14 = uVar26;
          if (iVar18 <= iVar6) goto LAB_0096fba4;
          uVar26 = *(undefined8 *)piVar15;
          piVar19[4] = iVar18;
          piVar19[5] = iVar12;
          *(undefined8 *)(piVar19 + 2) = *(undefined8 *)(piVar19 + 6);
          *(undefined8 *)piVar19 = uVar26;
        }
        piVar19[6] = iVar4;
        piVar19[7] = piVar19[-1];
      }
      else if (iVar6 < iVar10) {
        uVar26 = *(undefined8 *)piVar15;
        piVar19[4] = iVar10;
        *(undefined8 *)(piVar19 + 2) = *(undefined8 *)(piVar19 + 6);
        *(undefined8 *)piVar19 = uVar26;
        *(undefined8 *)(piVar19 + 5) = *(undefined8 *)(piVar19 + 1);
        piVar19[7] = piVar19[3];
        if (*piVar19 < iVar18) {
          uVar26 = *(undefined8 *)piVar19;
          *piVar19 = iVar18;
          *(undefined8 *)(piVar19 + -2) = *(undefined8 *)(piVar19 + 2);
          *(undefined8 *)piVar14 = uVar26;
          *(undefined8 *)(piVar19 + 1) = *(undefined8 *)(piVar19 + -3);
          piVar19[3] = piVar19[-1];
        }
      }
LAB_0096fba4:
      uVar26 = *(undefined8 *)piVar19;
      uVar28 = *(undefined8 *)(param_1 + 2);
      uVar27 = *(undefined8 *)param_1;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(piVar19 + 2);
      *(undefined8 *)param_1 = uVar26;
      *(undefined8 *)(piVar19 + 2) = uVar28;
      *(undefined8 *)piVar19 = uVar27;
    }
LAB_0096fbb4:
    iVar10 = *param_1;
    param_3 = param_3 + -1;
    if (((param_4 & 1) == 0) && (iVar10 <= param_1[-4])) {
      uVar26 = *(undefined8 *)(param_1 + 1);
      iVar6 = param_1[3];
      piVar19 = param_1;
      if (iVar10 < param_2[-4]) {
        do {
          piVar19 = piVar19 + 4;
          if (piVar19 == param_2) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__algorithm/sort.h:669: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                      );
          }
        } while (*piVar19 <= iVar10);
      }
      else {
        do {
          piVar19 = piVar19 + 4;
          if (param_2 <= piVar19) break;
        } while (*piVar19 <= iVar10);
      }
      piVar14 = param_2;
      if (piVar19 < param_2) {
        do {
          if (piVar14 == param_1) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__algorithm/sort.h:682: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                      );
          }
          piVar14 = piVar14 + -4;
        } while (iVar10 < *piVar14);
      }
      if (piVar19 < piVar14) {
        iVar18 = *piVar19;
        do {
          uVar27 = *(undefined8 *)piVar14;
          iVar12 = piVar19[3];
          uVar28 = *(undefined8 *)(piVar19 + 1);
          *(undefined8 *)(piVar19 + 2) = *(undefined8 *)(piVar14 + 2);
          *(undefined8 *)piVar19 = uVar27;
          *piVar14 = iVar18;
          *(undefined8 *)(piVar14 + 1) = uVar28;
          piVar14[3] = iVar12;
          do {
            piVar19 = piVar19 + 4;
            if (piVar19 == param_2) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__algorithm/sort.h:692: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                        );
            }
            iVar18 = *piVar19;
          } while (iVar18 <= iVar10);
          do {
            if (piVar14 == param_1) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__algorithm/sort.h:697: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                        );
            }
            piVar14 = piVar14 + -4;
          } while (iVar10 < *piVar14);
        } while (piVar19 < piVar14);
      }
      if (param_1 != piVar19 + -4) {
        uVar27 = *(undefined8 *)(piVar19 + -4);
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(piVar19 + -2);
        *(undefined8 *)param_1 = uVar27;
      }
      param_4 = 0;
      piVar19[-4] = iVar10;
      *(undefined8 *)(piVar19 + -3) = uVar26;
      piVar19[-1] = iVar6;
      goto LAB_0096f7d0;
    }
    uVar26 = *(undefined8 *)(param_1 + 1);
    iVar6 = param_1[3];
    lVar13 = 0;
    do {
      piVar19 = (int *)((long)param_1 + lVar13 + 0x10);
      if (piVar19 == param_2) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__algorithm/sort.h:603: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                  );
      }
      iVar18 = *piVar19;
      lVar13 = lVar13 + 0x10;
    } while (iVar18 < iVar10);
    piVar14 = (int *)((long)param_1 + lVar13);
    piVar15 = param_2;
    if (lVar13 == 0x10) {
      do {
        if (piVar15 <= piVar14) break;
        piVar15 = piVar15 + -4;
      } while (iVar10 <= *piVar15);
    }
    else {
      do {
        if (piVar15 == param_1) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__algorithm/sort.h:615: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                    );
        }
        piVar15 = piVar15 + -4;
      } while (iVar10 <= *piVar15);
    }
    piVar21 = piVar15;
    piVar19 = piVar14;
    if (piVar14 < piVar15) {
      do {
        uVar27 = *(undefined8 *)piVar21;
        iVar12 = piVar19[3];
        uVar28 = *(undefined8 *)(piVar19 + 1);
        *(undefined8 *)(piVar19 + 2) = *(undefined8 *)(piVar21 + 2);
        *(undefined8 *)piVar19 = uVar27;
        *piVar21 = iVar18;
        *(undefined8 *)(piVar21 + 1) = uVar28;
        piVar21[3] = iVar12;
        do {
          piVar19 = piVar19 + 4;
          if (piVar19 == param_2) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__algorithm/sort.h:633: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                      );
          }
          iVar18 = *piVar19;
        } while (iVar18 < iVar10);
        do {
          if (piVar21 == param_1) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__algorithm/sort.h:638: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                      );
          }
          piVar21 = piVar21 + -4;
        } while (iVar10 <= *piVar21);
      } while (piVar19 < piVar21);
    }
    piVar21 = piVar19 + -4;
    if (param_1 != piVar21) {
      uVar27 = *(undefined8 *)piVar21;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(piVar19 + -2);
      *(undefined8 *)param_1 = uVar27;
    }
    piVar19[-4] = iVar10;
    *(undefined8 *)(piVar19 + -3) = uVar26;
    piVar19[-1] = iVar6;
    if (piVar14 < piVar15) goto LAB_0096fce8;
    uVar11 = FUN_00970508(param_1,piVar19 + -4);
    uVar8 = FUN_00970508(piVar19,param_2);
    if ((uVar8 & 1) == 0) goto code_r0x0096fce4;
    param_2 = piVar21;
    if ((uVar11 & 1) != 0) {
      return;
    }
  } while( true );
LAB_0096ffd0:
  piVar25 = piVar19;
  iVar10 = piVar17[4];
  if (iVar10 < *piVar17) {
    uVar26 = *(undefined8 *)(piVar17 + 5);
    iVar6 = piVar17[7];
    lVar7 = lVar13;
    do {
      lVar20 = lVar7;
      puVar2 = (undefined8 *)((long)param_1 + lVar20);
      puVar2[3] = puVar2[1];
      puVar2[2] = *puVar2;
      piVar19 = param_1;
      if (lVar20 == 0) goto LAB_0096ffb0;
      lVar7 = lVar20 + -0x10;
    } while (iVar10 < *(int *)(puVar2 + -2));
    piVar19 = (int *)((long)param_1 + lVar20);
LAB_0096ffb0:
    *piVar19 = iVar10;
    *(undefined8 *)(piVar19 + 1) = uVar26;
    piVar19[3] = iVar6;
  }
  piVar19 = piVar25 + 4;
  lVar13 = lVar13 + 0x10;
  piVar17 = piVar25;
  if (piVar19 == param_2) {
    return;
  }
  goto LAB_0096ffd0;
LAB_00970048:
  do {
    if (uVar8 <= uVar9) {
      uVar22 = (uVar8 & 0x3fffffffffffffff) << 1 | 1;
      uVar23 = uVar8 * 2 + 2;
      uVar16 = uVar22;
      if ((uVar23 < uVar11) && (uVar16 = uVar23, param_1[uVar23 * 4] <= param_1[uVar22 * 4])) {
        uVar16 = uVar22;
      }
      piVar19 = param_1 + uVar8 * 4;
      iVar10 = *piVar19;
      if (iVar10 <= param_1[uVar16 * 4]) {
        uVar26 = *(undefined8 *)(piVar19 + 1);
        iVar6 = piVar19[3];
        uVar23 = uVar8;
        do {
          uVar22 = uVar16;
          piVar19 = param_1 + uVar22 * 4;
          uVar27 = *(undefined8 *)piVar19;
          *(undefined8 *)(param_1 + uVar23 * 4 + 2) = *(undefined8 *)(piVar19 + 2);
          *(undefined8 *)(param_1 + uVar23 * 4) = uVar27;
          if ((long)uVar9 < (long)uVar22) break;
          uVar3 = (uVar22 & 0x3fffffffffffffff) << 1 | 1;
          uVar23 = uVar22 * 2 + 2;
          uVar16 = uVar3;
          if (((long)uVar23 < (long)uVar11) &&
             (uVar16 = uVar23, param_1[uVar23 * 4] <= param_1[uVar3 * 4])) {
            uVar16 = uVar3;
          }
          uVar23 = uVar22;
        } while (iVar10 <= param_1[uVar16 * 4]);
        *piVar19 = iVar10;
        *(undefined8 *)(piVar19 + 1) = uVar26;
        piVar19[3] = iVar6;
      }
    }
    bVar1 = 0 < (long)uVar8;
    uVar8 = uVar8 - 1;
  } while (bVar1);
  do {
    iVar10 = param_1[2];
    iVar12 = param_1[3];
    uVar27 = *(undefined8 *)(param_1 + 2);
    uVar26 = *(undefined8 *)param_1;
    iVar6 = *param_1;
    iVar18 = param_1[1];
    uVar8 = 0;
    piVar19 = param_1;
    do {
      uVar23 = uVar8 << 1 | 1;
      uVar9 = uVar8 * 2 + 2;
      piVar17 = piVar19 + uVar8 * 4 + 4;
      uVar22 = uVar23;
      if (((long)uVar9 < (long)uVar11) &&
         (piVar17 = piVar19 + uVar8 * 4 + 8, uVar22 = uVar9,
         piVar19[uVar8 * 4 + 8] <= piVar19[uVar8 * 4 + 4])) {
        piVar17 = piVar19 + uVar8 * 4 + 4;
        uVar22 = uVar23;
      }
      uVar28 = *(undefined8 *)piVar17;
      *(undefined8 *)(piVar19 + 2) = *(undefined8 *)(piVar17 + 2);
      *(undefined8 *)piVar19 = uVar28;
      uVar8 = uVar22;
      piVar19 = piVar17;
    } while ((long)uVar22 <= (long)(uVar11 - 2 >> 1));
    piVar19 = param_2 + -4;
    if (piVar17 == piVar19) {
      *piVar17 = iVar6;
LAB_0097010c:
      piVar17[1] = iVar18;
      piVar17[2] = iVar10;
      piVar17[3] = iVar12;
    }
    else {
      uVar28 = *(undefined8 *)piVar19;
      lVar13 = (long)piVar17 + (0x10 - (long)param_1) >> 4;
      *(undefined8 *)(piVar17 + 2) = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)piVar17 = uVar28;
      *(undefined8 *)(param_2 + -2) = uVar27;
      *(undefined8 *)piVar19 = uVar26;
      if (1 < lVar13) {
        uVar8 = lVar13 - 2U >> 1;
        iVar6 = *piVar17;
        if (param_1[uVar8 * 4] < iVar6) {
          iVar18 = piVar17[1];
          iVar10 = piVar17[2];
          iVar12 = piVar17[3];
          piVar25 = param_1 + uVar8 * 4;
          piVar24 = piVar17;
          do {
            piVar17 = piVar25;
            uVar26 = *(undefined8 *)piVar17;
            *(undefined8 *)(piVar24 + 2) = *(undefined8 *)(piVar17 + 2);
            *(undefined8 *)piVar24 = uVar26;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1 >> 1;
            piVar25 = param_1 + uVar8 * 4;
            piVar24 = piVar17;
          } while (param_1[uVar8 * 4] < iVar6);
          *piVar17 = iVar6;
          goto LAB_0097010c;
        }
      }
    }
    bVar1 = (long)uVar11 < 3;
    uVar11 = uVar11 - 1;
    param_2 = piVar19;
    if (bVar1) {
      return;
    }
  } while( true );
code_r0x0096fce4:
  if ((uVar11 & 1) == 0) {
LAB_0096fce8:
    FUN_0096f790(param_1,piVar19 + -4,param_3,param_4 & 1);
    param_4 = 0;
  }
  goto LAB_0096f7d0;
}


// ===== 009703c8  FUN_009703c8 =====

void FUN_009703c8(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  iVar3 = *param_2;
  iVar4 = *param_1;
  iVar6 = *param_3;
  if (iVar3 < iVar4) {
    iVar1 = param_1[1];
    iVar2 = param_1[2];
    iVar5 = param_1[3];
    if (iVar6 < iVar3) {
      uVar7 = *(undefined8 *)param_3;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)param_1 = uVar7;
    }
    else {
      uVar7 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar7;
      *param_2 = iVar4;
      param_2[1] = iVar1;
      param_2[2] = iVar2;
      param_2[3] = iVar5;
      iVar6 = *param_3;
      if (iVar4 <= *param_3) goto LAB_00970484;
      uVar7 = *(undefined8 *)param_3;
      *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)param_2 = uVar7;
    }
    *param_3 = iVar4;
    param_3[1] = iVar1;
    param_3[2] = iVar2;
    param_3[3] = iVar5;
    iVar6 = iVar4;
  }
  else if (iVar6 < iVar3) {
    uVar7 = *(undefined8 *)param_3;
    iVar4 = param_2[3];
    uVar8 = *(undefined8 *)(param_2 + 1);
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)param_2 = uVar7;
    *param_3 = iVar3;
    *(undefined8 *)(param_3 + 1) = uVar8;
    param_3[3] = iVar4;
    iVar4 = *param_1;
    iVar6 = iVar3;
    if (*param_2 < iVar4) {
      uVar7 = *(undefined8 *)param_2;
      iVar3 = param_1[3];
      uVar8 = *(undefined8 *)(param_1 + 1);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar7;
      *param_2 = iVar4;
      *(undefined8 *)(param_2 + 1) = uVar8;
      param_2[3] = iVar3;
      iVar6 = *param_3;
    }
  }
LAB_00970484:
  if (*param_4 < iVar6) {
    uVar7 = *(undefined8 *)param_4;
    iVar3 = param_3[3];
    uVar8 = *(undefined8 *)(param_3 + 1);
    *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_4 + 2);
    *(undefined8 *)param_3 = uVar7;
    *param_4 = iVar6;
    *(undefined8 *)(param_4 + 1) = uVar8;
    param_4[3] = iVar3;
    iVar3 = *param_2;
    if (*param_3 < iVar3) {
      uVar7 = *(undefined8 *)param_3;
      iVar4 = param_2[3];
      uVar8 = *(undefined8 *)(param_2 + 1);
      *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)param_2 = uVar7;
      *param_3 = iVar3;
      *(undefined8 *)(param_3 + 1) = uVar8;
      param_3[3] = iVar4;
      iVar3 = *param_1;
      if (*param_2 < iVar3) {
        uVar7 = *(undefined8 *)param_2;
        iVar4 = param_1[3];
        uVar8 = *(undefined8 *)(param_1 + 1);
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
        *(undefined8 *)param_1 = uVar7;
        *param_2 = iVar3;
        *(undefined8 *)(param_2 + 1) = uVar8;
        param_2[3] = iVar4;
      }
    }
  }
  return;
}


// ===== 00970508  FUN_00970508 =====

bool FUN_00970508(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar7 = (long)param_2 - (long)param_1 >> 4;
  if ((long)uVar7 < 3) {
    if (uVar7 < 2) {
      return true;
    }
    if (uVar7 == 2) {
      iVar9 = *param_1;
      if (iVar9 <= param_2[-4]) {
        return true;
      }
      uVar13 = *(undefined8 *)(param_2 + -4);
      iVar4 = param_1[3];
      uVar14 = *(undefined8 *)(param_1 + 1);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)param_1 = uVar13;
      param_2[-4] = iVar9;
      *(undefined8 *)(param_2 + -3) = uVar14;
      param_2[-1] = iVar4;
      return true;
    }
  }
  else {
    if (uVar7 == 3) {
      iVar9 = *param_1;
      piVar8 = param_1 + 4;
      iVar4 = *piVar8;
      piVar10 = param_2 + -4;
      if (iVar4 < iVar9) {
        iVar5 = param_1[1];
        iVar2 = param_1[2];
        iVar3 = param_1[3];
        if (*piVar10 < iVar4) {
          uVar13 = *(undefined8 *)piVar10;
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + -2);
          *(undefined8 *)param_1 = uVar13;
        }
        else {
          uVar14 = *(undefined8 *)(param_1 + 6);
          uVar13 = *(undefined8 *)piVar8;
          param_1[4] = iVar9;
          param_1[5] = iVar5;
          param_1[6] = iVar2;
          param_1[7] = iVar3;
          *(undefined8 *)(param_1 + 2) = uVar14;
          *(undefined8 *)param_1 = uVar13;
          if (iVar9 <= *piVar10) {
            return true;
          }
          uVar13 = *(undefined8 *)piVar10;
          *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + -2);
          *(undefined8 *)piVar8 = uVar13;
        }
        param_2[-4] = iVar9;
        param_2[-3] = iVar5;
        param_2[-2] = iVar2;
        param_2[-1] = iVar3;
        return true;
      }
      if (iVar4 <= *piVar10) {
        return true;
      }
      uVar13 = *(undefined8 *)piVar10;
      iVar9 = param_1[7];
      uVar14 = *(undefined8 *)(param_1 + 5);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)piVar8 = uVar13;
      param_2[-4] = iVar4;
      *(undefined8 *)(param_2 + -3) = uVar14;
      param_2[-1] = iVar9;
      iVar9 = *param_1;
      if (iVar9 <= param_1[4]) {
        return true;
      }
      uVar14 = *(undefined8 *)(param_1 + 6);
      uVar13 = *(undefined8 *)piVar8;
LAB_00970704:
      param_1[4] = iVar9;
      *(undefined8 *)(param_1 + 2) = uVar14;
      *(undefined8 *)param_1 = uVar13;
      *(undefined8 *)(param_1 + 5) = *(undefined8 *)(param_1 + 1);
      param_1[7] = param_1[3];
      return true;
    }
    if (uVar7 == 4) {
      FUN_009703c8(param_1,param_1 + 4,param_1 + 8,param_2 + -4);
      return true;
    }
    if (uVar7 == 5) {
      FUN_009703c8(param_1,param_1 + 4,param_1 + 8,param_1 + 0xc);
      iVar9 = param_1[0xc];
      if (iVar9 <= param_2[-4]) {
        return true;
      }
      uVar13 = *(undefined8 *)(param_2 + -4);
      iVar4 = param_1[0xf];
      uVar14 = *(undefined8 *)(param_1 + 0xd);
      *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)(param_1 + 0xc) = uVar13;
      param_2[-4] = iVar9;
      *(undefined8 *)(param_2 + -3) = uVar14;
      param_2[-1] = iVar4;
      if (param_1[8] <= param_1[0xc]) {
        return true;
      }
      uVar13 = *(undefined8 *)(param_1 + 0xc);
      param_1[0xc] = param_1[8];
      *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 0xe);
      *(undefined8 *)(param_1 + 8) = uVar13;
      *(undefined8 *)(param_1 + 0xd) = *(undefined8 *)(param_1 + 9);
      param_1[0xf] = param_1[0xb];
      if (param_1[4] <= param_1[8]) {
        return true;
      }
      uVar13 = *(undefined8 *)(param_1 + 8);
      iVar9 = *param_1;
      param_1[8] = param_1[4];
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
      *(undefined8 *)(param_1 + 4) = uVar13;
      *(undefined8 *)(param_1 + 9) = *(undefined8 *)(param_1 + 5);
      param_1[0xb] = param_1[7];
      if (iVar9 <= param_1[4]) {
        return true;
      }
      uVar14 = *(undefined8 *)(param_1 + 6);
      uVar13 = *(undefined8 *)(param_1 + 4);
      goto LAB_00970704;
    }
  }
  iVar9 = *param_1;
  piVar10 = param_1 + 4;
  iVar4 = *piVar10;
  piVar8 = param_1 + 8;
  iVar5 = *piVar8;
  if (iVar4 < iVar9) {
    iVar2 = param_1[1];
    iVar3 = param_1[2];
    if (iVar5 < iVar4) {
      uVar13 = *(undefined8 *)piVar8;
      param_1[8] = iVar9;
      param_1[9] = iVar2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 10);
      *(undefined8 *)param_1 = uVar13;
    }
    else {
      uVar14 = *(undefined8 *)(param_1 + 6);
      uVar13 = *(undefined8 *)piVar10;
      param_1[4] = iVar9;
      param_1[5] = iVar2;
      param_1[6] = iVar3;
      param_1[7] = param_1[3];
      *(undefined8 *)(param_1 + 2) = uVar14;
      *(undefined8 *)param_1 = uVar13;
      if (iVar9 <= iVar5) goto LAB_009707d0;
      uVar13 = *(undefined8 *)piVar8;
      param_1[8] = iVar9;
      param_1[9] = iVar2;
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
      *(undefined8 *)piVar10 = uVar13;
    }
    param_1[10] = iVar3;
    param_1[0xb] = param_1[3];
  }
  else if (iVar5 < iVar4) {
    uVar13 = *(undefined8 *)piVar8;
    param_1[8] = iVar4;
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
    *(undefined8 *)piVar10 = uVar13;
    *(undefined8 *)(param_1 + 9) = *(undefined8 *)(param_1 + 5);
    param_1[0xb] = param_1[7];
    if (param_1[4] < iVar9) {
      uVar13 = *(undefined8 *)piVar10;
      param_1[4] = iVar9;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
      *(undefined8 *)param_1 = uVar13;
      *(undefined8 *)(param_1 + 5) = *(undefined8 *)(param_1 + 1);
      param_1[7] = param_1[3];
    }
  }
LAB_009707d0:
  if (param_1 + 0xc != param_2) {
    lVar11 = 0;
    iVar9 = 0;
    piVar10 = param_1 + 0xc;
    do {
      iVar4 = *piVar10;
      if (iVar4 < *piVar8) {
        uVar13 = *(undefined8 *)(piVar10 + 1);
        iVar5 = piVar10[3];
        lVar6 = lVar11;
        do {
          lVar12 = lVar6;
          *(undefined8 *)((long)param_1 + lVar12 + 0x38) =
               *(undefined8 *)((long)param_1 + lVar12 + 0x28);
          *(undefined8 *)((long)param_1 + lVar12 + 0x30) =
               *(undefined8 *)((long)param_1 + lVar12 + 0x20);
          piVar8 = param_1;
          if (lVar12 == -0x20) goto LAB_009707ec;
          lVar6 = lVar12 + -0x10;
        } while (iVar4 < *(int *)((long)param_1 + lVar12 + 0x10));
        piVar8 = (int *)((long)param_1 + lVar12 + 0x20);
LAB_009707ec:
        iVar9 = iVar9 + 1;
        *piVar8 = iVar4;
        *(undefined8 *)(piVar8 + 1) = uVar13;
        piVar8[3] = iVar5;
        if (iVar9 == 8) {
          return piVar10 + 4 == param_2;
        }
      }
      piVar1 = piVar10 + 4;
      lVar11 = lVar11 + 0x10;
      piVar8 = piVar10;
      piVar10 = piVar1;
    } while (piVar1 != param_2);
  }
  return true;
}


// ===== 0097088c  FUN_0097088c =====

undefined8 * FUN_0097088c(long *param_1,undefined8 *param_2)

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
                    /* WARNING: Subroutine does not return */
    FUN_007baaec();
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
    if (uVar5 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
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


// ===== 00970980  FUN_00970980 =====

void FUN_00970980(void *param_1)

{
  FUN_0096f218();
  operator_delete(param_1);
  return;
}


// ===== 009709b0  FUN_009709b0 =====

void FUN_009709b0(long param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  uVar3 = FUN_008ff5f4();
  if (uVar3 != 0xffffffff) {
    if (uVar3 == 0) {
      puVar4 = (undefined8 *)0x0;
      puVar11 = (undefined8 *)0x0;
    }
    else {
      if ((int)uVar3 < 0) {
        FUN_00970bf4();
                    /* WARNING: Subroutine does not return */
        FUN_005d34a4("vector");
      }
      uVar9 = (long)(int)uVar3 * 0x10;
      puVar4 = (undefined8 *)operator_new(uVar9);
      uVar9 = uVar9 - 0x10;
      uVar7 = (uint)uVar9;
      puVar5 = puVar4;
      if ((~uVar7 & 0x30) != 0) {
        uVar8 = (ulong)((uVar7 >> 4) + 1) & 3;
        puVar11 = puVar4;
        do {
          if (puVar11 == (undefined8 *)0x0) goto LAB_00970bb8;
          uVar8 = uVar8 - 1;
          puVar5 = puVar11 + 2;
          *puVar11 = 0;
          puVar11[1] = 0;
          puVar11 = puVar5;
        } while (uVar8 != 0);
      }
      puVar11 = puVar4 + (long)(int)uVar3 * 2;
      if (0x2f < uVar9) {
        do {
          if (puVar5 == (undefined8 *)0x0) {
LAB_00970bb8:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          *puVar5 = 0;
          puVar5[1] = 0;
          if (puVar5 + 2 == (undefined8 *)0x0) goto LAB_00970bb8;
          puVar5[2] = 0;
          puVar5[3] = 0;
          if (puVar5 + 4 == (undefined8 *)0x0) goto LAB_00970bb8;
          puVar5[4] = 0;
          puVar5[5] = 0;
          if (puVar5 + 6 == (undefined8 *)0x0) goto LAB_00970bb8;
          puVar2 = puVar5 + 8;
          puVar5[6] = 0;
          puVar5[7] = 0;
          puVar5 = puVar2;
        } while (puVar2 != puVar11);
      }
    }
    puVar5 = *(undefined8 **)(param_1 + 0x40);
    puVar2 = *(undefined8 **)(param_1 + 0x48);
    if (puVar5 != puVar2) {
      do {
        uVar9 = FUN_008ff5c0(*puVar5);
        if ((0 < (int)uVar3) && ((uVar9 & 1) != 0)) {
          uVar9 = 0;
          puVar10 = puVar4;
          do {
            if ((long)puVar11 - (long)puVar4 >> 4 == uVar9) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                        );
            }
            (**(code **)(*(long *)*puVar5 + 0x10))((long *)*puVar5,puVar10,uVar9 & 0xffffffff);
            uVar9 = uVar9 + 1;
            puVar10 = puVar10 + 2;
          } while (uVar3 != uVar9);
        }
        puVar5 = puVar5 + 1;
      } while (puVar5 != puVar2);
    }
    pvVar1 = *(void **)(param_1 + 0x58);
    pvVar6 = *(void **)(param_1 + 0x60);
    *(undefined8 **)(param_1 + 0x58) = puVar4;
    *(undefined8 **)(param_1 + 0x60) = puVar11;
    *(undefined8 **)(param_1 + 0x68) = puVar11;
    if (pvVar1 != (void *)0x0) {
      uVar8 = (ulong)((long)pvVar6 + (-0x10 - ((long)pvVar6 << 0x3c))) >> 4;
      uVar9 = (ulong)(((long)pvVar1 - (long)pvVar6 << 0x3c) - ((long)pvVar1 - (long)pvVar6)) >> 4;
      if (uVar8 <= uVar9) {
        uVar9 = uVar8;
      }
      if ((1 < uVar9) && ((((int)pvVar1 - (int)pvVar6 | -(int)pvVar6) & 0xfU) == 0)) {
        uVar9 = uVar9 & 0xffffffffffffffe;
        pvVar6 = (void *)((long)pvVar6 + uVar9 * -0x10);
        do {
          uVar9 = uVar9 - 2;
        } while (uVar9 != 0);
      }
      do {
        if (pvVar6 == pvVar1) {
          operator_delete(pvVar1);
          return;
        }
        pvVar6 = (void *)((long)pvVar6 + -0x10);
      } while (pvVar6 != (void *)0x0);
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
  }
  return;
}


// ===== 00970bf4  FUN_00970bf4 =====

void FUN_00970bf4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00970c0c  FUN_00970c0c =====

void FUN_00970c0c(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  return;
}


// ===== 00970c18  FUN_00970c18 =====

void FUN_00970c18(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  *param_1 = &PTR_FUN_00d3eef8;
  if (*(code **)(param_1[0xf] + 8) != (code *)0x0) {
    (**(code **)(param_1[0xf] + 8))(param_1[0xc]);
  }
  param_1[1] = &PTR_FUN_00d3ef28;
  pvVar1 = (void *)param_1[9];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[10];
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
    param_1[10] = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_006634ac(param_1 + 1);
  return;
}


// ===== 00970d00  FUN_00970d00 =====

void FUN_00970d00(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  *param_1 = &PTR_FUN_00d3eef8;
  if (*(code **)(param_1[0xf] + 8) != (code *)0x0) {
    (**(code **)(param_1[0xf] + 8))(param_1[0xc]);
  }
  param_1[1] = &PTR_FUN_00d3ef28;
  pvVar1 = (void *)param_1[9];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[10];
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
    param_1[10] = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_006634ac(param_1 + 1);
  operator_delete(param_1);
  return;
}


// ===== 00970df4  FUN_00970df4 =====

void FUN_00970df4(long param_1,undefined8 param_2,int param_3)

{
  if ((ulong)(long)param_3 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2)) {
                    /* WARNING: Could not recover jumptable at 0x00970e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x70))
              (param_1 + 0x60,param_2,*(undefined4 *)(*(long *)(param_1 + 0x48) + (long)param_3 * 4)
              );
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 00970e3c  FUN_00970e3c =====

long FUN_00970e3c(long param_1)

{
  return param_1 + 8;
}


// ===== 00970e48  FUN_00970e48 =====

void FUN_00970e48(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[8];
  *param_1 = &PTR_FUN_00d3ef28;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[9];
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
    param_1[9] = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_006634ac(param_1);
  return;
}


// ===== 00970f0c  FUN_00970f0c =====

void FUN_00970f0c(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[8];
  *param_1 = &PTR_FUN_00d3ef28;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[9];
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
    param_1[9] = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_006634ac(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00970fdc  FUN_00970fdc =====

undefined4 FUN_00970fdc(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined1 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined4 *local_50;
  undefined4 *puStack_48;
  undefined4 *local_40;
  
  *(undefined1 *)(param_1 + 0x3a) = 1;
  if ((*(byte *)(param_2 + 3) & 1) == 0) {
    lVar5 = *(long *)(param_1 + 0x40);
    lVar4 = *(long *)(param_1 + 0x48);
    uVar7 = (lVar4 - (lVar4 << 0x3e)) - 4U >> 2;
    uVar2 = (ulong)((lVar5 - lVar4 << 0x3e) - (lVar5 - lVar4)) >> 2;
    if (uVar7 <= uVar2) {
      uVar2 = uVar7;
    }
    if ((1 < uVar2) && ((((int)lVar5 - (int)lVar4 | -(int)lVar4) & 3U) == 0)) {
      uVar2 = uVar2 & 0x3ffffffffffffffe;
      lVar4 = lVar4 + uVar2 * -4;
      do {
        uVar2 = uVar2 - 2;
      } while (uVar2 != 0);
    }
    do {
      if (lVar4 == lVar5) {
        *(long *)(param_1 + 0x48) = lVar5;
        return 1;
      }
      lVar4 = lVar4 + -4;
    } while (lVar4 != 0);
  }
  else {
    lVar5 = (long)*(char *)((long)param_2 + 0x17);
    local_50 = (undefined4 *)0x0;
    puStack_48 = (undefined4 *)0x0;
    local_40 = (undefined4 *)0x0;
    puVar3 = param_2;
    if (lVar5 < 0) {
      puVar3 = (undefined8 *)*param_2;
      lVar5 = param_2[1];
    }
    FUN_006252b4(&local_68,puVar3,lVar5,0x7c);
    puVar1 = local_60;
    for (puVar3 = local_68; puVar3 != puVar1; puVar3 = puVar3 + 2) {
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      uVar2 = FUN_006614d4(*puVar3,puVar3[1]);
      local_70._0_5_ = (undefined5)uVar2;
      if ((uVar2 >> 0x20 & 1) == 0) {
        *(undefined1 *)(param_1 + 0x39) = 1;
        if (local_68 == (undefined8 *)0x0) goto LAB_0097124c;
        uVar7 = (ulong)((long)local_60 + (-0x10 - ((long)local_60 << 0x3c))) >> 4;
        uVar2 = (ulong)(((long)local_68 - (long)local_60 << 0x3c) -
                       ((long)local_68 - (long)local_60)) >> 4;
        if (uVar7 <= uVar2) {
          uVar2 = uVar7;
        }
        puVar3 = local_60;
        if ((1 < uVar2) && ((((int)local_68 - (int)local_60 | -(int)local_60) & 0xfU) == 0)) {
          uVar2 = uVar2 & 0xffffffffffffffe;
          puVar3 = local_60 + uVar2 * -2;
          do {
            uVar2 = uVar2 - 2;
          } while (uVar2 != 0);
        }
        goto LAB_00971168;
      }
      if (puStack_48 < local_40) {
        if (puStack_48 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar6 = puStack_48 + 1;
        *puStack_48 = (int)uVar2;
      }
      else {
        puVar6 = (undefined4 *)FUN_006d13b4(&local_50,&local_70);
      }
      puStack_48 = puVar6;
    }
    if (local_68 == (undefined8 *)0x0) {
LAB_0097120c:
      puVar10 = *(undefined4 **)(param_1 + 0x48);
      puVar9 = *(undefined4 **)(param_1 + 0x40);
      puVar6 = *(undefined4 **)(param_1 + 0x50);
      *(undefined4 **)(param_1 + 0x48) = puStack_48;
      *(undefined4 **)(param_1 + 0x40) = local_50;
      *(undefined4 **)(param_1 + 0x50) = local_40;
      uVar8 = 1;
      local_50 = puVar9;
      puStack_48 = puVar10;
      local_40 = puVar6;
joined_r0x00971254:
      if (local_50 == (undefined4 *)0x0) {
        return uVar8;
      }
      uVar7 = (ulong)((long)puStack_48 + (-4 - ((long)puStack_48 << 0x3e))) >> 2;
      uVar2 = (ulong)(((long)local_50 - (long)puStack_48 << 0x3e) -
                     ((long)local_50 - (long)puStack_48)) >> 2;
      if (uVar7 <= uVar2) {
        uVar2 = uVar7;
      }
      puVar6 = puStack_48;
      if ((1 < uVar2) && ((((int)local_50 - (int)puStack_48 | -(int)puStack_48) & 3U) == 0)) {
        uVar2 = uVar2 & 0x3ffffffffffffffe;
        puVar6 = puStack_48 + -uVar2;
        do {
          uVar2 = uVar2 - 2;
        } while (uVar2 != 0);
      }
      do {
        if (puVar6 == local_50) {
          puStack_48 = local_50;
          operator_delete(local_50);
          return uVar8;
        }
        puVar6 = puVar6 + -1;
      } while (puVar6 != (undefined4 *)0x0);
    }
    else {
      uVar7 = (ulong)((long)local_60 + (-0x10 - ((long)local_60 << 0x3c))) >> 4;
      uVar2 = (ulong)(((long)local_68 - (long)local_60 << 0x3c) - ((long)local_68 - (long)local_60))
              >> 4;
      if (uVar7 <= uVar2) {
        uVar2 = uVar7;
      }
      puVar3 = local_60;
      if ((1 < uVar2) && ((((int)local_68 - (int)local_60 | -(int)local_60) & 0xfU) == 0)) {
        uVar2 = uVar2 & 0xffffffffffffffe;
        puVar3 = local_60 + uVar2 * -2;
        do {
          uVar2 = uVar2 - 2;
        } while (uVar2 != 0);
      }
      do {
        if (puVar3 == local_68) {
          local_60 = local_68;
          operator_delete(local_68);
          goto LAB_0097120c;
        }
        puVar3 = puVar3 + -2;
      } while (puVar3 != (undefined8 *)0x0);
    }
  }
LAB_009712bc:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
LAB_00971168:
  if (puVar3 != local_68) goto code_r0x00971170;
  local_60 = local_68;
  operator_delete(local_68);
LAB_0097124c:
  uVar8 = 0;
  goto joined_r0x00971254;
code_r0x00971170:
  puVar3 = puVar3 + -2;
  if (puVar3 == (undefined8 *)0x0) goto LAB_009712bc;
  goto LAB_00971168;
}


// ===== 00971310  FUN_00971310 =====

ulong FUN_00971310(long param_1)

{
  return (ulong)(*(long *)(param_1 + 0x48) - *(long *)(param_1 + 0x40)) >> 2;
}


// ===== 00971324  FUN_00971324 =====

void FUN_00971324(undefined8 param_1,long param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + 4) = param_3;
  return;
}


// ===== 00971330  FUN_00971330 =====

void FUN_00971330(undefined8 param_1,long param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + 8) = param_3;
  return;
}


// ===== 0097133c  FUN_0097133c =====

void FUN_0097133c(undefined8 param_1,long param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + 0xc) = param_3;
  return;
}


// ===== 00971348  FUN_00971348 =====

void FUN_00971348(long *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *local_38;
  
  FUN_00661054(param_1,&DAT_001b3348,0);
  puVar2 = PTR_DAT_00d52088;
  param_3 = param_3 << 3;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  do {
    if (param_3 == 0) {
      return;
    }
    local_38 = (long *)(**(code **)(*(long *)*param_2 + 0x18))();
    puVar1 = (undefined8 *)param_1[2];
    if (puVar1 < (undefined8 *)param_1[3]) {
      if (puVar1 == (undefined8 *)0x0) goto LAB_00971458;
      puVar3 = puVar1 + 1;
      *puVar1 = local_38;
    }
    else {
      puVar3 = (undefined8 *)FUN_0097146c(param_1 + 1,&local_38);
    }
    param_1[2] = (long)puVar3;
    puVar1 = (undefined8 *)param_1[9];
    plVar4 = (long *)*param_2;
    local_38 = plVar4;
    if (puVar1 < (undefined8 *)param_1[10]) {
      if (puVar1 == (undefined8 *)0x0) {
LAB_00971458:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      local_38 = (long *)0x0;
      puVar3 = puVar1 + 1;
      *puVar1 = plVar4;
    }
    else {
      puVar3 = (undefined8 *)FUN_00971560(param_1 + 8,&local_38);
    }
    plVar4 = local_38;
    param_1[9] = (long)puVar3;
    local_38 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))(plVar4);
    }
    param_3 = param_3 + -8;
    param_2 = param_2 + 1;
  } while( true );
}


// ===== 0097146c  FUN_0097146c =====

undefined8 * FUN_0097146c(long *param_1,undefined8 *param_2)

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
    FUN_005edb98();
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


// ===== 00971560  FUN_00971560 =====

undefined8 * FUN_00971560(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  size_t __n;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  void *__dest;
  
  puVar7 = (undefined8 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar7 >> 3) + 1;
  if (uVar1 >> 0x3d != 0) {
    FUN_00971658();
LAB_00971654:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  uVar4 = param_1[2] - *param_1;
  uVar6 = (long)uVar4 >> 2;
  if (uVar6 <= uVar1) {
    uVar6 = uVar1;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar6 = 0x1fffffffffffffff;
  }
  if (uVar6 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar6 >> 0x3d != 0) goto LAB_00971654;
    pvVar2 = operator_new(uVar6 << 3);
    puVar7 = (undefined8 *)((long)pvVar2 + (long)puVar7);
  }
  if (puVar7 != (undefined8 *)0x0) {
    uVar5 = *param_2;
    *param_2 = 0;
    *puVar7 = uVar5;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar7 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar7 + 1);
    param_1[2] = (long)((long)pvVar2 + uVar6 * 8);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    return puVar7 + 1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00971658  FUN_00971658 =====

void FUN_00971658(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00971670  FUN_00971670 =====

void FUN_00971670(uint *param_1,undefined8 param_2,uint *param_3,long *param_4)

{
  long lVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  undefined2 uVar6;
  int iVar7;
  void *pvVar8;
  ushort uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  void *pvVar16;
  undefined1 auVar17 [8];
  code *pcVar18;
  undefined1 uVar19;
  long lVar20;
  undefined1 (*pauVar21) [12];
  undefined1 *puVar22;
  undefined1 (*pauVar23) [16];
  undefined8 *puVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  byte *pbVar28;
  byte bVar29;
  undefined8 uVar30;
  ulong uVar31;
  ulong uVar32;
  long lVar33;
  long lVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined4 uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [12];
  undefined1 local_170 [44];
  undefined1 local_144;
  void *local_140;
  void *pvStack_138;
  undefined8 local_130;
  undefined1 local_120 [8];
  void *pvStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 local_100;
  undefined1 local_f8 [96];
  char local_98;
  undefined1 local_90;
  undefined7 uStack_8f;
  undefined1 local_88;
  long local_80;
  
  lVar10 = tpidr_el0;
  local_80 = *(long *)(lVar10 + 0x28);
  memcpy(param_1,&DAT_00229a10,0x560);
  FUN_007b861c(param_1);
  uVar26 = param_3[0x22];
  *param_1 = *param_3;
  if (uVar26 < 2) {
    param_1[0x14a] = uVar26;
  }
  uVar25 = param_3[0x23];
  *(byte *)(param_1 + 0x150) = uVar26 == 1 & (byte)param_3[0x32];
  FUN_007b8e68(param_1,(char)uVar25);
  lVar20 = *param_4;
  lVar33 = param_4[1];
  *(char *)(param_1 + 8) = (char)((uint)((int)lVar33 - (int)lVar20) >> 3) * ')';
  if (lVar33 == lVar20) {
LAB_009720b8:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
              );
  }
  lVar33 = *(long *)(param_3 + 0x2a);
  lVar34 = *(long *)(param_3 + 0x2c);
  uVar26 = *(int *)(lVar20 + 0x14) / 1000;
  param_1[4] = uVar26;
  if (lVar33 == lVar34) {
    bVar29 = 0;
  }
  else {
    do {
      bVar29 = *(byte *)(lVar33 + 0x52);
      if (lVar33 + 200 == lVar34) break;
      lVar33 = lVar33 + 200;
    } while ((bVar29 & 1) == 0);
  }
  bVar29 = bVar29 & 1;
  *(byte *)(param_1 + 6) = bVar29;
  if (uVar26 < 0x1e) {
    param_1[4] = 0x1e;
  }
  param_1[0x14c] = 200;
  param_1[0x14d] = 0;
  *(undefined2 *)(param_1 + 0x14e) = 500;
  uVar32 = 0;
  uVar4 = *(ushort *)(lVar20 + 0x50);
  uVar26 = 0;
  lVar33 = -800;
  lVar34 = -0x280;
  uVar9 = uVar4 >> 8 & 1;
  do {
    if (lVar33 == 0) goto LAB_00971e64;
    lVar20 = lVar20 + lVar33;
    *(uint *)((long)param_1 + lVar34 + 0x2a8) = (uint)*(ushort *)(lVar20 + 800);
    *(uint *)((long)param_1 + lVar34 + 0x2ac) = (uint)*(ushort *)(lVar20 + 0x328);
    *(float *)((long)param_1 + lVar34 + 0x2b0) = (float)*(int *)(lVar20 + 0x330);
    *(int *)((long)param_1 + lVar34 + 0x2c0) = *(int *)(lVar20 + 0x334) / 1000;
    *(int *)((long)param_1 + lVar34 + 700) = *(int *)(lVar20 + 0x338) / 1000;
    *(int *)((long)param_1 + lVar34 + 0x2b8) = *(int *)(lVar20 + 0x33c) / 1000;
    *(undefined4 *)((long)param_1 + lVar34 + 0x2c4) = *(undefined4 *)(lVar20 + 0x348);
    FUN_00849dfc(local_120,param_3,uVar32);
    if (*(char *)((long)param_1 + lVar34 + 0x330) == '\x01') {
      FUN_007b6c74((long)param_1 + lVar34 + 0x2d0,local_120);
    }
    else {
      FUN_007b6ad4((long)param_1 + lVar34 + 0x2d0,local_120);
      *(undefined1 *)((long)param_1 + lVar34 + 0x330) = 1;
    }
    FUN_007b6d78(local_120);
    lVar20 = *param_4;
    uVar27 = (param_4[1] - lVar20 >> 3) * -0x70a3d70a3d70a3d7;
    if (uVar27 <= uVar32) goto LAB_009720b8;
    lVar1 = lVar20 + lVar33;
    uVar30 = *(undefined8 *)(lVar1 + 0x360);
    *(undefined1 *)((long)param_1 + lVar34 + 0x340) = *(undefined1 *)(lVar1 + 0x368);
    *(undefined8 *)((long)param_1 + lVar34 + 0x338) = uVar30;
    if (*(char *)(lVar1 + 0x371) == '\x01') {
      uVar19 = FUN_0096a40c(*(undefined1 *)(lVar1 + 0x370));
      lVar20 = *param_4;
      uVar27 = (param_4[1] - lVar20 >> 3) * -0x70a3d70a3d70a3d7;
    }
    else if (*(char *)(lVar1 + 0x358) == '\x01') {
      uVar19 = (undefined1)*(undefined4 *)(lVar20 + lVar33 + 0x350);
    }
    else {
      uVar19 = 1;
    }
    *(undefined1 *)((long)param_1 + lVar34 + 0x2b4) = uVar19;
    if (uVar27 <= uVar32) goto LAB_009720b8;
    lVar1 = lVar20 + lVar33;
    *(undefined1 *)((long)param_1 + lVar34 + 0x2c8) = *(undefined1 *)(lVar1 + 0x372);
    uVar5 = (ushort)param_1[1];
    if ((ushort)param_1[1] <= *(ushort *)(lVar1 + 800)) {
      uVar5 = *(ushort *)(lVar1 + 800);
    }
    *(ushort *)(param_1 + 1) = uVar5;
    uVar5 = *(ushort *)((long)param_1 + 6);
    if (*(ushort *)((long)param_1 + 6) <= *(ushort *)(lVar1 + 0x328)) {
      uVar5 = *(ushort *)(lVar1 + 0x328);
    }
    *(ushort *)((long)param_1 + 6) = uVar5;
    uVar25 = (uint)((ulong)((long)*(int *)(lVar1 + 0x334) * 0x10624dd3) >> 0x26) -
             (*(int *)(lVar1 + 0x334) >> 0x1f) & 0xffff;
    if ((ushort)param_1[4] <= uVar25) {
      uVar25 = (uint)(ushort)param_1[4];
    }
    param_1[4] = uVar25;
    param_1[3] = param_1[3] + *(int *)(lVar1 + 0x33c) / 1000;
    uVar25 = param_1[7];
    if (param_1[7] <= *(uint *)(lVar1 + 0x348)) {
      uVar25 = *(uint *)(lVar1 + 0x348);
    }
    param_1[7] = uVar25;
    if ((int)uVar26 <= (int)*(uint *)(lVar1 + 0x330)) {
      uVar26 = *(uint *)(lVar1 + 0x330);
    }
    if (*(char *)(lVar1 + 0x372) == '\x01') {
      bVar2 = *(byte *)(lVar1 + 0x371);
      if ((bVar2 & *(byte *)(lVar20 + 0x51)) == 0) {
        if (*(byte *)(lVar20 + 0x51) != bVar2) goto LAB_00971a10;
      }
      else {
        if ((bVar2 & 1) == 0) goto LAB_009724c8;
        if (*(char *)(lVar20 + 0x50) != *(char *)(lVar1 + 0x370)) {
LAB_00971a10:
          if ((*param_1 != 1) && (uVar27 = FUN_004022fc(), (uVar27 & 1) == 0)) {
            FUN_00623bb0(&DAT_001f4e98,"../../modules/video_coding/video_codec_initializer.cc",0x4ea
                         ,"Inconsistent scalability modes configured.");
          }
          uVar9 = 0;
        }
      }
    }
    lVar20 = *param_4;
    uVar32 = uVar32 + 1;
    lVar33 = lVar33 + 200;
    lVar34 = lVar34 + 0xa0;
  } while (uVar32 < (ulong)((param_4[1] - lVar20 >> 3) * -0x70a3d70a3d70a3d7));
  if (uVar9 == 0) {
    uVar25 = param_1[3];
  }
  else {
    *(ushort *)(param_1 + 0x155) = uVar4 & 0xff | 0x100;
    uVar25 = param_1[3];
  }
  if (uVar25 == 0) {
    uVar25 = ((uint)*(ushort *)((long)param_1 + 6) * (uint)(ushort)param_1[1] * param_1[5]) / 1000;
    param_1[3] = uVar25;
  }
  if (uVar25 < 0x1e) {
    param_1[3] = 0x1e;
  }
  local_120 = (undefined1  [8])0x0;
  pvStack_118 = (void *)CONCAT35(pvStack_118._5_3_,0x100000000);
  local_110 = 0;
  uStack_108 = 0;
  param_1[5] = uVar26;
  local_f8[0] = 0;
  local_98 = '\0';
  local_90 = 0;
  local_88 = 0;
  local_100 = 0;
  *(void **)(param_1 + 0x84) = pvStack_118;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  *(undefined1 *)(param_1 + 0x8a) = 0;
  if ((char)param_1[0xa4] != '\0') {
    FUN_007b6d78(param_1 + 0x8c);
    *(undefined1 *)(param_1 + 0xa4) = 0;
  }
  *(ulong *)(param_1 + 0xa6) = CONCAT71(uStack_8f,local_90);
  *(undefined1 *)(param_1 + 0xa8) = local_88;
  if (local_98 == '\x01') {
    FUN_007b6d78(local_f8);
  }
  lVar20 = *param_4;
  lVar33 = param_4[1];
  param_1[0x82] = (uint)(ushort)param_1[1];
  param_1[0x83] = (uint)*(ushort *)((long)param_1 + 6);
  param_1[0x84] = (uint)(float)uVar26;
  if (lVar33 == lVar20) goto LAB_009720b8;
  if (*(char *)(lVar20 + 0x51) == '\x01') {
    uVar19 = FUN_0096a40c(*(undefined1 *)(lVar20 + 0x50));
  }
  else if (*(char *)(lVar20 + 0x38) == '\x01') {
    uVar19 = (undefined1)*(undefined8 *)(lVar20 + 0x30);
  }
  else {
    uVar19 = 1;
  }
  lVar20 = *(long *)(param_3 + 0x24);
  *(undefined1 *)(param_1 + 0x85) = uVar19;
  if (lVar20 != 0) {
    FUN_00849e58(lVar20,param_1);
  }
  auVar39._8_8_ = pvStack_118;
  auVar39._0_8_ = local_120;
  uVar26 = *param_1;
  if (2 < (int)uVar26) {
    if (uVar26 == 3) {
      lVar20 = param_4[1];
      if (*param_4 == lVar20) {
LAB_00972504:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:443: libc++ Hardening assertion !empty() failed: back() called on an empty vector\n"
                  );
      }
      if (*(char *)(lVar20 + -0x90) == '\x01') {
        uVar38 = *(undefined4 *)(lVar20 + -0x98);
      }
      else {
        uVar38 = 1;
      }
      iVar7 = (int)((ulong)(*(long *)(param_3 + 0x1e) - *(long *)(param_3 + 0x1c)) >> 5) *
              -0x33333333;
      if (iVar7 < 2) {
        iVar7 = 1;
      }
      uVar32 = FUN_00972970(param_1,uVar38,iVar7);
      auVar15._8_8_ = pvStack_118;
      auVar15._0_8_ = local_120;
      auVar14._8_8_ = pvStack_118;
      auVar14._0_8_ = local_120;
      auVar13._8_8_ = pvStack_118;
      auVar13._0_8_ = local_120;
      auVar12._8_8_ = pvStack_118;
      auVar12._0_8_ = local_120;
      auVar11._8_8_ = pvStack_118;
      auVar11._0_8_ = local_120;
      if ((uVar32 & 1) == 0) {
        uVar32 = FUN_004022fc();
        if ((uVar32 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../modules/video_coding/video_codec_initializer.cc",0xa9a,
                       "Failed to configure svc bitrates for av1.");
        }
      }
      else {
        if ((*(long *)(param_3 + 0x2a) != *(long *)(param_3 + 0x2c)) &&
           (uVar26 = *(uint *)(*(long *)(param_3 + 0x2a) + 0x14), 0 < (int)uVar26)) {
          uVar25 = param_1[0x87];
          if ((int)(uVar26 / 1000) <= (int)uVar25) {
            uVar25 = uVar26 / 1000;
          }
          param_1[0x88] = uVar25;
        }
        lVar20 = *(long *)(param_3 + 0x1c);
        lVar33 = *(long *)(param_3 + 0x1e) - lVar20;
        if (((((*(long *)(param_3 + 0x1e) != lVar20) &&
              (*(undefined1 *)(param_1 + 0x8a) = *(undefined1 *)(lVar20 + 0x20),
              _local_120 = auVar11, lVar33 != 0xa0)) &&
             (*(undefined1 *)(param_1 + 0xb2) = *(undefined1 *)(lVar20 + 0xc0), _local_120 = auVar12
             , lVar33 != 0x140)) &&
            ((*(undefined1 *)(param_1 + 0xda) = *(undefined1 *)(lVar20 + 0x160),
             _local_120 = auVar13, lVar33 != 0x1e0 &&
             (*(undefined1 *)(param_1 + 0x102) = *(undefined1 *)(lVar20 + 0x200),
             _local_120 = auVar14, lVar33 != 0x280)))) &&
           (*(undefined1 *)(param_1 + 0x12a) = *(undefined1 *)(lVar20 + 0x2a0), _local_120 = auVar15
           , lVar33 != 800)) {
LAB_00971e64:
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(0x5512,0x971e68);
          (*pcVar18)();
        }
      }
    }
    else if (uVar26 == 4) {
      if (*(long *)(param_3 + 0x24) == 0) {
        auVar39 = FUN_007b942c();
        pauVar23 = (undefined1 (*) [16])FUN_007b8cb0(param_1);
        *pauVar23 = auVar39;
      }
      lVar20 = param_4[1];
      if (*param_4 == lVar20) goto LAB_00972504;
      lVar33 = FUN_007b8cb0(param_1);
      if (*(char *)(lVar20 + -0x90) == '\x01') {
        uVar19 = *(undefined1 *)(lVar20 + -0x98);
      }
      else {
        uVar19 = *(undefined1 *)(lVar33 + 8);
      }
      lVar20 = FUN_007b8cb0(param_1);
      *(undefined1 *)(lVar20 + 8) = uVar19;
    }
    else {
      _local_120 = auVar39;
      if (uVar26 == 5) {
        if (*(long *)(param_3 + 0x24) == 0) {
          auVar40 = FUN_007b9444();
          pauVar21 = (undefined1 (*) [12])FUN_007b8cd4(param_1);
          *pauVar21 = auVar40;
        }
        lVar20 = param_4[1];
        if (*param_4 == lVar20) goto LAB_00972504;
        lVar33 = FUN_007b8cd4(param_1);
        if (*(char *)(lVar20 + -0x90) == '\x01') {
          uVar19 = *(undefined1 *)(lVar20 + -0x98);
        }
        else {
          uVar19 = *(undefined1 *)(lVar33 + 8);
        }
        lVar20 = FUN_007b8cd4(param_1);
        *(undefined1 *)(lVar20 + 8) = uVar19;
        for (lVar20 = *param_4; lVar20 != param_4[1]; lVar20 = lVar20 + 200) {
          if ((*(char *)(lVar20 + 0x51) == '\x01') && (2 < *(byte *)(lVar20 + 0x50))) {
            uVar32 = FUN_004022fc();
            if ((uVar32 & 1) == 0) {
              if ((*(byte *)(lVar20 + 0x51) & 1) == 0) goto LAB_009724c8;
              _local_120 = FUN_007b8248(*(undefined1 *)(lVar20 + 0x50));
              FUN_00623bb0(&DAT_0021f2ce,"../../modules/video_coding/video_codec_initializer.cc",
                           0xb92,"Invalid scalability mode for H.265: ",local_120);
            }
            if ((*(byte *)(lVar20 + 0x51) & 1) == 0) {
LAB_009724c8:
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                        );
            }
            *(ushort *)(param_1 + 0x155) = *(byte *)(lVar20 + 0x50) | 0x100;
            break;
          }
        }
        param_1[0x88] = param_1[4];
        param_1[0x87] = param_1[3];
        param_1[0x86] = param_1[3];
        *(byte *)(param_1 + 0x8a) = bVar29;
      }
    }
LAB_009723c4:
    auVar39 = FUN_009469c8(param_2,*param_1);
    uVar32 = auVar39._0_8_;
    if ((auVar39 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      uVar27 = uVar32 / 1000;
      if (499 < uVar32 % 1000) {
        uVar27 = uVar27 + 1;
      }
      if ((auVar39 & (undefined1  [16])0x8000000000000000) != (undefined1  [16])0x0) {
        uVar27 = -(-uVar32 / 1000) - (ulong)(500 < -uVar32 % 1000);
      }
      uVar26 = 2;
      if ((long)uVar27 < 0x80000000) {
        uVar26 = 0;
      }
      if ((long)uVar27 < -0x80000000) {
        uVar26 = uVar26 + 1;
      }
      if (uVar26 < 2) {
        if (uVar26 != 0) {
          uVar27 = 0x80000000;
        }
      }
      else {
        if (uVar26 != 2) {
                    /* WARNING: Subroutine does not return */
          FUN_0061ff28();
        }
        uVar27 = 0x7fffffff;
      }
      uVar26 = (uint)uVar27;
      param_1[4] = uVar26;
      param_1[0x10] = uVar26;
      if ((*param_1 < 6) && ((0x2cU >> (ulong)(*param_1 & 0x1f) & 1) != 0)) {
        param_1[0x88] = uVar26;
      }
    }
    if (*(long *)(lVar10 + 0x28) == local_80) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  if (uVar26 == 1) {
    if (*(long *)(param_3 + 0x24) == 0) {
      uVar30 = FUN_007b9400();
      puVar24 = (undefined8 *)FUN_007b8c80(param_1);
      *puVar24 = uVar30;
    }
    lVar33 = param_4[1];
    for (lVar20 = *param_4; lVar20 != lVar33; lVar20 = lVar20 + 200) {
      if ((*(char *)(lVar20 + 0x51) == '\x01') &&
         (uVar32 = FUN_0097295c(*(undefined1 *)(lVar20 + 0x50)), (uVar32 & 1) == 0)) {
        uVar32 = FUN_004022fc();
        if ((uVar32 & 1) == 0) {
          if ((*(byte *)(lVar20 + 0x51) & 1) == 0) goto LAB_009724c8;
          _local_120 = FUN_007b8248(*(undefined1 *)(lVar20 + 0x50));
          FUN_00623bb0(&DAT_0021f2ce,"../../modules/video_coding/video_codec_initializer.cc",0x64a,
                       "Invalid scalability mode for VP8: ",local_120);
        }
        if ((*(byte *)(lVar20 + 0x51) & 1) == 0) goto LAB_009724c8;
        *(ushort *)(param_1 + 0x155) = *(byte *)(lVar20 + 0x50) | 0x100;
        break;
      }
    }
    lVar20 = param_4[1];
    if (*param_4 == lVar20) goto LAB_00972504;
    if (*(char *)(lVar20 + -0x77) == '\x01') {
      uVar19 = FUN_0096a40c(*(undefined1 *)(lVar20 + -0x78));
    }
    else {
      puVar22 = (undefined1 *)FUN_007b8c80(param_1);
      if (*(char *)(lVar20 + -0x90) == '\x01') {
        uVar19 = (undefined1)*(undefined8 *)(lVar20 + -0x98);
      }
      else {
        uVar19 = *puVar22;
      }
    }
    puVar22 = (undefined1 *)FUN_007b8c80(param_1);
    *puVar22 = uVar19;
    goto LAB_009723c4;
  }
  if (uVar26 != 2) goto LAB_009723c4;
  if ((byte)param_1[8] < 2) {
    *(byte *)(param_1 + 0x12) = bVar29;
  }
  if (*(long *)(param_3 + 0x24) == 0) {
    auVar39 = FUN_007b9410();
    pauVar23 = (undefined1 (*) [16])FUN_007b8c98(param_1);
    *pauVar23 = auVar39;
  }
  lVar20 = param_4[1];
  if (*param_4 == lVar20) goto LAB_00972504;
  puVar22 = (undefined1 *)FUN_007b8c98(param_1);
  if (*(char *)(lVar20 + -0x90) == '\x01') {
    uVar19 = *(undefined1 *)(lVar20 + -0x98);
  }
  else {
    uVar19 = *puVar22;
  }
  puVar22 = (undefined1 *)FUN_007b8c98(param_1);
  *puVar22 = uVar19;
  lVar20 = *(long *)(param_3 + 0x1c);
  lVar33 = *(long *)(param_3 + 0x1e);
  local_120 = (undefined1  [8])0x0;
  pvStack_118 = (void *)0x0;
  local_110 = 0;
  if (lVar20 == lVar33) {
    if (((ushort)param_1[0x155] >> 8 & 1) == 0) {
      lVar20 = *(long *)(param_3 + 0x2c) - *(long *)(param_3 + 0x2a);
      if (lVar20 != 0) {
        uVar32 = 0;
        pbVar28 = (byte *)(*(long *)(param_3 + 0x2a) + 0x52);
        do {
          if ((*pbVar28 & 1) != 0) goto LAB_00972000;
          uVar32 = uVar32 + 1;
          pbVar28 = pbVar28 + 200;
        } while ((lVar20 >> 3) * -0x70a3d70a3d70a3d7 - uVar32 != 0);
      }
      uVar32 = 0;
LAB_00972000:
      uVar26 = param_1[1];
      uVar6 = *(undefined2 *)((long)param_1 + 6);
      uVar38 = NEON_ucvtf(param_1[5]);
      lVar20 = FUN_007b8c98(param_1);
      uVar19 = *(undefined1 *)(lVar20 + 10);
      puVar22 = (undefined1 *)FUN_007b8c98(param_1);
      local_170[0] = 0;
      local_144 = 0;
      FUN_009737bc(&local_140,uVar38,(short)uVar26,uVar6,uVar32,uVar19,*puVar22,param_1[0x14a] == 1,
                   local_170);
      auVar17 = local_120;
      pvVar8 = pvStack_118;
      if (local_120 != (undefined1  [8])0x0) {
        while (pvVar16 = pvVar8, auVar17 != (undefined1  [8])pvVar16) {
          pvVar8 = (void *)((long)pvVar16 + -0xa0);
          if (pvVar8 == (void *)0x0) goto LAB_009724dc;
          if (*(char *)((long)pvVar16 + -0x18) == '\x01') {
            FUN_007b6d78((long)pvVar16 + -0x78);
          }
        }
        pvStack_118 = (void *)auVar17;
        operator_delete((void *)local_120);
      }
      pvStack_118 = pvStack_138;
      local_120 = (undefined1  [8])local_140;
      local_110 = local_130;
      lVar20 = FUN_007b8c98(param_1);
      if (*(byte *)(lVar20 + 10) < 2) {
        if ((local_120 == (undefined1  [8])pvStack_118) ||
           (*(uint *)((long)pvStack_118 + -0x88) = param_1[4],
           local_120 == (undefined1  [8])pvStack_118)) goto LAB_00972518;
        uVar26 = param_1[3];
        *(uint *)((long)pvStack_118 + -0x8c) = uVar26;
        if (local_120 == (undefined1  [8])pvStack_118) goto LAB_00972518;
        *(uint *)((long)pvStack_118 + -0x90) = uVar26;
      }
      lVar20 = *(long *)(param_3 + 0x2a);
      if (uVar32 < (ulong)((*(long *)(param_3 + 0x2c) - lVar20 >> 3) * -0x70a3d70a3d70a3d7)) {
        lVar33 = uVar32 * 200 + 0x52;
        uVar27 = 0;
        lVar34 = 0x20;
        do {
          uVar31 = ((long)pvStack_118 - (long)local_120 >> 5) * -0x3333333333333333;
          if (uVar31 + uVar32 <= uVar32 + uVar27) break;
          if (uVar31 <= uVar27) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                      );
          }
          puVar22 = (undefined1 *)(lVar20 + lVar33);
          uVar27 = uVar27 + 1;
          lVar33 = lVar33 + 200;
          *(undefined1 *)((long)local_120 + lVar34) = *puVar22;
          lVar34 = lVar34 + 0xa0;
          lVar20 = *(long *)(param_3 + 0x2a);
        } while (uVar32 + uVar27 <
                 (ulong)((*(long *)(param_3 + 0x2c) - lVar20 >> 3) * -0x70a3d70a3d70a3d7));
      }
    }
    else {
      FUN_009734b4(&local_140,param_1);
      auVar17 = local_120;
      pvVar8 = pvStack_118;
      if (local_120 != (undefined1  [8])0x0) {
        while (pvVar16 = pvVar8, auVar17 != (undefined1  [8])pvVar16) {
          pvVar8 = (void *)((long)pvVar16 + -0xa0);
          if (pvVar8 == (void *)0x0) goto LAB_009724dc;
          if (*(char *)((long)pvVar16 + -0x18) == '\x01') {
            FUN_007b6d78((long)pvVar16 + -0x78);
          }
        }
        pvStack_118 = (void *)auVar17;
        operator_delete((void *)local_120);
      }
      pvStack_118 = pvStack_138;
      local_120 = (undefined1  [8])local_140;
      local_110 = local_130;
    }
  }
  else if ((uint *)local_120 != param_3 + 0x1c) {
    FUN_00972548(local_120,lVar20,lVar33,(lVar33 - lVar20 >> 5) * -0x3333333333333333);
  }
  if ((undefined1  [8])pvStack_118 != local_120) {
    uVar32 = 0;
    lVar20 = -0x3c0;
    do {
      auVar17 = local_120;
      if (lVar20 == 0) goto LAB_00971e64;
      uVar37 = *(undefined8 *)((long)local_120 + lVar20 + 0x3c8);
      uVar36 = *(undefined8 *)((long)local_120 + lVar20 + 0x3c0);
      uVar35 = *(undefined8 *)((long)local_120 + lVar20 + 0x3d8);
      uVar30 = *(undefined8 *)((long)local_120 + lVar20 + 0x3d0);
      lVar33 = (long)param_1 + lVar20 + 0x5f0;
      *(undefined1 *)((long)param_1 + lVar20 + 0x5e8) =
           *(undefined1 *)((long)local_120 + lVar20 + 0x3e0);
      cVar3 = *(char *)((long)param_1 + lVar20 + 0x650);
      *(undefined8 *)((long)param_1 + lVar20 + 0x5d0) = uVar37;
      *(undefined8 *)((long)param_1 + lVar20 + 0x5c8) = uVar36;
      *(undefined8 *)((long)param_1 + lVar20 + 0x5e0) = uVar35;
      *(undefined8 *)((long)param_1 + lVar20 + 0x5d8) = uVar30;
      if (cVar3 == *(char *)((long)local_120 + lVar20 + 0x448)) {
        if (cVar3 != '\0') {
          FUN_007b6b54(lVar33,(long)local_120 + lVar20 + 1000);
        }
      }
      else if (cVar3 == '\0') {
        if (lVar33 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        FUN_007b69e0((long)param_1 + lVar20 + 0x5f0,(long)local_120 + lVar20 + 1000);
        *(undefined1 *)((long)param_1 + lVar20 + 0x650) = 1;
      }
      else {
        FUN_007b6d78((long)param_1 + lVar20 + 0x5f0);
        *(undefined1 *)((long)param_1 + lVar20 + 0x650) = 0;
      }
      uVar32 = uVar32 + 1;
      uVar27 = ((long)pvStack_118 - (long)local_120 >> 5) * -0x3333333333333333;
      uVar30 = *(undefined8 *)((long)auVar17 + lVar20 + 0x450);
      *(undefined1 *)((long)param_1 + lVar20 + 0x660) =
           *(undefined1 *)((long)auVar17 + lVar20 + 0x458);
      *(undefined8 *)((long)param_1 + lVar20 + 0x658) = uVar30;
      lVar20 = lVar20 + 0xa0;
    } while (uVar32 < uVar27);
    if (local_120 != (undefined1  [8])pvStack_118) {
      *(short *)(param_1 + 1) = (short)*(undefined4 *)((long)pvStack_118 + -0xa0);
      *(short *)((long)param_1 + 6) = (short)*(undefined4 *)((long)pvStack_118 + -0x9c);
      if ((char)param_1[8] == '\x01') {
        param_1[10] = *(uint *)((long)pvStack_118 + -0xa0);
        param_1[0xb] = *(uint *)((long)pvStack_118 + -0x9c);
      }
      lVar20 = FUN_007b8c98(param_1);
      *(char *)(lVar20 + 10) = (char)uVar27;
      if (local_120 != (undefined1  [8])pvStack_118) {
        uVar19 = *(undefined1 *)((long)pvStack_118 + -0x94);
        puVar22 = (undefined1 *)FUN_007b8c98(param_1);
        auVar17 = local_120;
        *puVar22 = uVar19;
        pvVar8 = pvStack_118;
        if (local_120 != (undefined1  [8])0x0) {
          while (pvVar16 = pvVar8, auVar17 != (undefined1  [8])pvVar16) {
            pvVar8 = (void *)((long)pvVar16 + -0xa0);
            if (pvVar8 == (void *)0x0) {
LAB_009724dc:
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                        );
            }
            if (*(char *)((long)pvVar16 + -0x18) == '\x01') {
              FUN_007b6d78((long)pvVar16 + -0x78);
            }
          }
          pvStack_118 = (void *)auVar17;
          operator_delete((void *)local_120);
        }
        goto LAB_009723c4;
      }
    }
  }
LAB_00972518:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:439: libc++ Hardening assertion !empty() failed: back() called on an empty vector\n"
            );
}


// ===== 00972548  FUN_00972548 =====

undefined8 * FUN_00972548(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  long lVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  char *pcVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar8 = param_1[2];
  puVar12 = (undefined8 *)*param_1;
  if (param_4 <= (ulong)((lVar8 - (long)puVar12 >> 5) * -0x3333333333333333)) {
    puVar7 = (undefined8 *)param_1[1];
    puVar6 = param_1;
    if ((ulong)(((long)puVar7 - (long)puVar12 >> 5) * -0x3333333333333333) < param_4) {
      puVar11 = param_2;
      if (puVar7 != puVar12) {
        puVar11 = (undefined8 *)((long)param_2 + ((long)puVar7 - (long)puVar12));
        pcVar13 = (char *)(puVar12 + 0x11);
        puVar12 = param_2 + 5;
        do {
          uVar14 = puVar12[-2];
          uVar9 = puVar12[-3];
          uVar16 = puVar12[-4];
          uVar15 = puVar12[-5];
          pcVar13[-0x68] = *(char *)(puVar12 + -1);
          cVar3 = *pcVar13;
          *(undefined8 *)(pcVar13 + -0x70) = uVar14;
          *(undefined8 *)(pcVar13 + -0x78) = uVar9;
          *(undefined8 *)(pcVar13 + -0x80) = uVar16;
          *(undefined8 *)(pcVar13 + -0x88) = uVar15;
          if (cVar3 == *(char *)(puVar12 + 0xc)) {
            if (cVar3 != '\0') {
              puVar6 = (undefined8 *)FUN_007b6b54(pcVar13 + -0x60,puVar12);
            }
          }
          else if (cVar3 == '\0') {
            if (pcVar13 == (char *)0x60) goto LAB_00972930;
            puVar6 = (undefined8 *)FUN_007b69e0(pcVar13 + -0x60,puVar12);
            *pcVar13 = '\x01';
          }
          else {
            puVar6 = (undefined8 *)FUN_007b6d78(pcVar13 + -0x60);
            *pcVar13 = '\0';
          }
          uVar9 = puVar12[0xd];
          puVar7 = puVar12 + 0xf;
          pcVar13[0x10] = *(char *)(puVar12 + 0xe);
          *(undefined8 *)(pcVar13 + 8) = uVar9;
          pcVar13 = pcVar13 + 0xa0;
          puVar12 = puVar12 + 0x14;
        } while (puVar7 != puVar11);
        puVar7 = (undefined8 *)param_1[1];
      }
      if (puVar11 != param_3) {
        lVar8 = 0;
        do {
          puVar12 = (undefined8 *)((long)puVar7 + lVar8);
          if (puVar12 == (undefined8 *)0x0) goto LAB_00972930;
          puVar2 = (undefined8 *)((long)puVar11 + lVar8);
          uVar14 = puVar2[1];
          uVar9 = *puVar2;
          uVar16 = puVar2[3];
          uVar15 = puVar2[2];
          uVar4 = *(undefined1 *)(puVar2 + 4);
          puVar6 = (undefined8 *)((long)puVar7 + lVar8 + 0x28);
          *(undefined1 *)puVar6 = 0;
          *(undefined1 *)(puVar12 + 4) = uVar4;
          puVar12[1] = uVar14;
          *puVar12 = uVar9;
          puVar12[3] = uVar16;
          puVar12[2] = uVar15;
          *(undefined1 *)((long)puVar7 + lVar8 + 0x88) = 0;
          if (*(char *)(puVar2 + 0x11) == '\x01') {
            puVar6 = (undefined8 *)FUN_007b69e0(puVar6,(long)puVar11 + lVar8 + 0x28);
            *(undefined1 *)((long)puVar7 + lVar8 + 0x88) = 1;
          }
          uVar9 = puVar2[0x12];
          lVar1 = lVar8 + 0xa0;
          *(undefined8 *)((long)puVar7 + lVar8 + 0x98) = puVar2[0x13];
          *(undefined8 *)((long)puVar7 + lVar8 + 0x90) = uVar9;
          lVar8 = lVar1;
        } while (puVar2 + 0x14 != param_3);
        puVar7 = (undefined8 *)((long)puVar7 + lVar1);
      }
      param_1[1] = puVar7;
    }
    else {
      if (param_2 != param_3) {
        puVar7 = param_2 + 5;
        do {
          uVar14 = puVar7[-2];
          uVar9 = puVar7[-3];
          uVar16 = puVar7[-4];
          uVar15 = puVar7[-5];
          *(undefined1 *)(puVar12 + 4) = *(undefined1 *)(puVar7 + -1);
          cVar3 = *(char *)(puVar12 + 0x11);
          puVar12[1] = uVar16;
          *puVar12 = uVar15;
          puVar12[3] = uVar14;
          puVar12[2] = uVar9;
          if (cVar3 == *(char *)(puVar7 + 0xc)) {
            if (cVar3 != '\0') {
              puVar6 = (undefined8 *)FUN_007b6b54(puVar12 + 5,puVar7);
            }
          }
          else if (cVar3 == '\0') {
            if (puVar12 == (undefined8 *)0xffffffffffffffd8) goto LAB_00972930;
            puVar6 = (undefined8 *)FUN_007b69e0(puVar12 + 5,puVar7);
            *(undefined1 *)(puVar12 + 0x11) = 1;
          }
          else {
            puVar6 = (undefined8 *)FUN_007b6d78(puVar12 + 5);
            *(undefined1 *)(puVar12 + 0x11) = 0;
          }
          uVar9 = puVar7[0xd];
          puVar11 = puVar7 + 0xf;
          *(undefined1 *)(puVar12 + 0x13) = *(undefined1 *)(puVar7 + 0xe);
          puVar12[0x12] = uVar9;
          puVar12 = puVar12 + 0x14;
          puVar7 = puVar7 + 0x14;
        } while (puVar11 != param_3);
        puVar7 = (undefined8 *)param_1[1];
      }
      while (puVar11 = puVar7, puVar12 != puVar11) {
        puVar7 = puVar11 + -0x14;
        if (puVar7 == (undefined8 *)0x0) goto LAB_00972944;
        if (*(char *)(puVar11 + -3) == '\x01') {
          puVar6 = (undefined8 *)FUN_007b6d78(puVar11 + -0xf);
        }
      }
      param_1[1] = puVar12;
    }
    return puVar6;
  }
  if (puVar12 != (undefined8 *)0x0) {
    puVar7 = puVar12;
    puVar6 = (undefined8 *)param_1[1];
    if (puVar12 != (undefined8 *)param_1[1]) {
      do {
        puVar7 = puVar6 + -0x14;
        if (puVar7 == (undefined8 *)0x0) {
LAB_00972944:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        if (*(char *)(puVar6 + -3) == '\x01') {
          FUN_007b6d78(puVar6 + -0xf);
        }
        puVar6 = puVar7;
      } while (puVar7 != puVar12);
      puVar7 = (undefined8 *)*param_1;
    }
    param_1[1] = puVar12;
    operator_delete(puVar7);
    lVar8 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (param_4 < 0x19999999999999a) {
    uVar10 = (lVar8 >> 5) * -0x6666666666666666;
    if (uVar10 < param_4 || uVar10 - param_4 == 0) {
      uVar10 = param_4;
    }
    if (0xcccccccccccccb < (ulong)((lVar8 >> 5) * -0x3333333333333333)) {
      uVar10 = 0x199999999999999;
    }
    if (uVar10 < 0x19999999999999a) {
      puVar7 = (undefined8 *)operator_new(uVar10 * 0xa0);
      *param_1 = puVar7;
      param_1[1] = puVar7;
      param_1[2] = puVar7 + uVar10 * 0x14;
      puVar12 = puVar7;
      if (param_2 != param_3) {
        param_2 = param_2 + 5;
        do {
          if (puVar12 == (undefined8 *)0x0) {
LAB_00972930:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          *(undefined1 *)(puVar12 + 0x11) = 0;
          uVar14 = param_2[-4];
          uVar9 = param_2[-5];
          uVar16 = param_2[-2];
          uVar15 = param_2[-3];
          cVar3 = *(char *)(param_2 + 0xc);
          uVar4 = *(undefined1 *)(param_2 + -1);
          puVar7 = puVar12 + 5;
          *(undefined1 *)puVar7 = 0;
          puVar12[1] = uVar14;
          *puVar12 = uVar9;
          puVar12[3] = uVar16;
          puVar12[2] = uVar15;
          *(undefined1 *)(puVar12 + 4) = uVar4;
          if (cVar3 == '\x01') {
            puVar7 = (undefined8 *)FUN_007b69e0(puVar7,param_2);
            *(undefined1 *)(puVar12 + 0x11) = 1;
          }
          puVar11 = param_2 + 0xe;
          uVar9 = param_2[0xd];
          puVar6 = param_2 + 0xf;
          param_2 = param_2 + 0x14;
          puVar12[0x13] = *puVar11;
          puVar12[0x12] = uVar9;
          puVar12 = puVar12 + 0x14;
        } while (puVar6 != param_3);
      }
      param_1[1] = puVar12;
      return puVar7;
    }
  }
  bVar5 = FUN_0084a068();
  return (undefined8 *)(ulong)(bVar5 < 3);
}


// ===== 0097295c  FUN_0097295c =====

bool FUN_0097295c(byte param_1)

{
  return param_1 < 3;
}


// ===== 00972970  FUN_00972970 =====

void FUN_00972970(long param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined1 uVar4;
  long lVar5;
  double dVar6;
  code *pcVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  size_t sVar11;
  ulong uVar12;
  long *plVar13;
  int *piVar14;
  long lVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  char *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  int local_b8;
  int local_b4;
  int iStack_b0;
  undefined8 uStack_ac;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 uStack_71;
  char *local_70;
  undefined8 *puStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  uVar17 = (uint)*(ushort *)(param_1 + 0x554);
  if ((*(ushort *)(param_1 + 0x554) >> 8 & 1) == 0) {
    puStack_68 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = 0xaaaaaaaa;
    local_c0 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
    local_d0 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00622830(&local_d0,&local_70,0x14);
    uVar10 = FUN_006228b0(&local_d0,&DAT_001a3136,1);
    uVar10 = FUN_00622910(uVar10,param_3);
    uVar10 = FUN_006228b0(uVar10,&DAT_001af347,1);
    FUN_00622910(uVar10,param_2);
    if (1 < param_3) {
      FUN_006228b0(&local_d0,&DAT_001c6953,4);
    }
    sVar11 = strlen((char *)&local_70);
    uVar17 = FUN_0096a2cc(&local_70,sVar11);
    if ((uVar17 >> 8 & 1) == 0) {
      uVar12 = FUN_004022fc();
      if ((uVar12 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../modules/video_coding/codecs/av1/av1_svc_config.cc",0x2ca,
                     "Scalability mode is not set, using \'L1T1\'.");
      }
      uVar17 = 0;
    }
  }
  iVar8 = FUN_0096a3b0(uVar17);
  uVar1 = *(ushort *)(param_1 + 6);
  fVar20 = 240.0;
  fVar19 = 135.0;
  if (uVar1 <= *(ushort *)(param_1 + 4)) {
    fVar20 = 135.0;
    fVar19 = 240.0;
  }
  fVar19 = (float)FUN_004ad600((float)*(ushort *)(param_1 + 4) / fVar19);
  if (fVar19 <= 0.0) {
    fVar19 = 0.0;
  }
  fVar20 = (float)FUN_004ad600((float)uVar1 / fVar20);
  if (fVar20 <= 0.0) {
    fVar20 = 0.0;
  }
  iVar16 = (int)(fVar20 + 1.0);
  if ((int)(fVar19 + 1.0) <= (int)(fVar20 + 1.0)) {
    iVar16 = (int)(fVar19 + 1.0);
  }
  uVar9 = FUN_0096a468(uVar17,iVar16);
  uVar18 = uVar17;
  if ((uVar17 & 0xff) != (uVar9 & 0xff)) {
    uVar12 = FUN_004022fc();
    uVar18 = uVar9;
    if ((uVar12 & 1) == 0) {
      local_d0 = "../../modules/video_coding/codecs/av1/av1_svc_config.cc";
      uStack_c8 = (undefined1 *)0x32a;
      local_c0 = &uStack_71;
      local_70 = "Reduced number of spatial layers from ";
      puStack_68 = &local_d0;
      local_88 = FUN_007b8248(uVar17);
      local_98 = FUN_007b8248(uVar9);
      FUN_00623bb0(&DAT_00229f70,*puStack_68,*(undefined4 *)(puStack_68 + 1),local_70,local_88,
                   &DAT_0019fec4,local_98);
    }
  }
  plVar13 = (long *)FUN_008a76b8(uVar18);
  if (plVar13 == (long *)0x0) {
    uVar12 = FUN_004022fc();
    if ((uVar12 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e94,"../../modules/video_coding/codecs/av1/av1_svc_config.cc",0x372,
                   "Failed to create structure ",uVar18 & 0xff);
    }
    goto LAB_00972da4;
  }
  *(ushort *)(param_1 + 0x554) = (ushort)uVar18 & 0xff | 0x100;
  uStack_ac = &DAT_aaaaaaaaaaaaaaaa;
  iStack_b0 = -0x55555556;
  uStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  local_b8 = -0x55555556;
  local_b4 = -0x55555556;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*plVar13 + 0x10))(&local_d0,plVar13);
  if ((int)local_d0 < 1) {
    if (iVar8 == 1) goto LAB_00972d7c;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 4);
    uVar21 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x14));
    iVar16 = 0;
    if (local_b4 != 0) {
      iVar16 = (int)(uStack_c8._4_4_ * (uint)uVar1) / local_b4;
    }
    uVar2 = *(ushort *)(param_1 + 6);
    *(undefined4 *)(param_1 + 0x210) = uVar21;
    iVar3 = 0;
    if (local_b4 != 0) {
      iVar3 = (int)(uStack_c8._4_4_ * (uint)uVar2) / local_b4;
    }
    *(int *)(param_1 + 0x208) = iVar16;
    uVar4 = (undefined1)((ulong)local_d0 >> 0x20);
    *(undefined1 *)(param_1 + 0x214) = uVar4;
    *(int *)(param_1 + 0x20c) = iVar3;
    *(undefined1 *)(param_1 + 0x228) = 1;
    if ((int)local_d0 != 1) {
      *(undefined4 *)(param_1 + 0x2b0) = uVar21;
      *(undefined1 *)(param_1 + 0x2b4) = uVar4;
      *(undefined1 *)(param_1 + 0x2c8) = 1;
      iVar16 = 0;
      if (iStack_b0 != 0) {
        iVar16 = (int)((int)local_c0 * (uint)uVar1) / iStack_b0;
      }
      iVar3 = 0;
      if (iStack_b0 != 0) {
        iVar3 = (int)((int)local_c0 * (uint)uVar2) / iStack_b0;
      }
      *(int *)(param_1 + 0x2a8) = iVar16;
      *(int *)(param_1 + 0x2ac) = iVar3;
      if ((int)local_d0 != 2) {
        *(undefined4 *)(param_1 + 0x350) = uVar21;
        *(undefined1 *)(param_1 + 0x354) = uVar4;
        iVar16 = 0;
        if ((int)uStack_ac != 0) {
          iVar16 = (int)(local_c0._4_4_ * (uint)uVar1) / (int)uStack_ac;
        }
        iVar3 = 0;
        if ((int)uStack_ac != 0) {
          iVar3 = (int)(local_c0._4_4_ * (uint)uVar2) / (int)uStack_ac;
        }
        *(int *)(param_1 + 0x348) = iVar16;
        *(int *)(param_1 + 0x34c) = iVar3;
        *(undefined1 *)(param_1 + 0x368) = 1;
        if ((int)local_d0 != 3) {
          *(undefined4 *)(param_1 + 0x3f0) = uVar21;
          *(undefined1 *)(param_1 + 0x3f4) = uVar4;
          *(undefined1 *)(param_1 + 0x408) = 1;
          iVar16 = 0;
          if (uStack_ac._4_4_ != 0) {
            iVar16 = (int)(local_b8 * (uint)uVar1) / uStack_ac._4_4_;
          }
          iVar3 = 0;
          if (uStack_ac._4_4_ != 0) {
            iVar3 = (int)(local_b8 * (uint)uVar2) / uStack_ac._4_4_;
          }
          *(int *)(param_1 + 1000) = iVar16;
          *(int *)(param_1 + 0x3ec) = iVar3;
          if ((int)local_d0 != 4) {
LAB_00972ddc:
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(0x5512,0x972de0);
            (*pcVar7)();
          }
        }
      }
    }
    dVar6 = DAT_001f5070;
    if (iVar8 == 1) {
LAB_00972d7c:
      *(int *)(param_1 + 0x220) = *(int *)(param_1 + 0x10);
      *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0xc);
      *(uint *)(param_1 + 0x21c) = (uint)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10)) >> 1;
    }
    else {
      piVar14 = (int *)(param_1 + 0x220);
      lVar15 = 6;
      do {
        if (lVar15 == 0) goto LAB_00972ddc;
        lVar15 = lVar15 + -1;
        iVar8 = (int)(((double)(piVar14[-5] * piVar14[-6]) * dVar6) / 1000.0) + 0x32;
        piVar14[-2] = iVar8;
        iVar16 = (int)((SQRT((double)(piVar14[-5] * piVar14[-6])) * 480.0 + -95000.0) / 1000.0);
        if (iVar16 < 0x15) {
          iVar16 = 0x14;
        }
        piVar14[-1] = (uint)(iVar16 + iVar8) >> 1;
        *piVar14 = iVar16;
        piVar14 = piVar14 + 0x28;
      } while (((ulong)local_d0 & 0xffffffff) + lVar15 != 6);
    }
  }
  (**(code **)(*plVar13 + 8))(plVar13);
LAB_00972da4:
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar13 != (long *)0x0);
}


// ===== 00972de4  FUN_00972de4 =====

/* WARNING: Removing unreachable block (ram,0x00972f50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00972de4(undefined8 *param_1,float param_2,undefined4 param_3,undefined4 param_4,
                 ulong param_5)

{
  undefined8 *puVar1;
  long lVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  ulong uVar22;
  float *pfVar23;
  ulong *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  ulong local_108;
  undefined1 local_100;
  undefined7 uStack_ff;
  ulong uStack_f8;
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
  ulong uStack_98;
  ulong local_90;
  ulong uStack_88;
  long local_80;
  
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  uVar22 = param_5;
  if (2 < param_5) {
    uVar22 = 3;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar20 = _UNK_0022a068;
  uVar19 = _DAT_0022a060;
  uVar18 = _UNK_0022a058;
  uVar17 = _DAT_0022a050;
  uVar16 = _UNK_0022a048;
  uVar15 = _DAT_0022a040;
  uVar14 = _UNK_0022a038;
  uVar13 = _DAT_0022a030;
  uVar12 = _UNK_0022a028;
  uVar11 = _DAT_0022a020;
  uVar10 = _UNK_0022a018;
  uVar9 = _DAT_0022a010;
  uVar8 = _UNK_0022a008;
  uVar7 = _DAT_0022a000;
  uVar6 = _UNK_00229ff8;
  uVar5 = _DAT_00229ff0;
  uVar4 = _UNK_00229fd8;
  if (param_5 != 0) {
    pfVar23 = (float *)&DAT_00229f78;
    puVar24 = &DAT_00229f88;
    puVar25 = &DAT_00229fa0;
    puVar26 = &DAT_00229fb8;
    do {
      local_a0 = uVar17;
      uStack_98 = uVar18 & 0xffffffffffffff00;
      local_90 = uVar19 & 0xffffffffffffff00;
      uStack_d8 = uVar10;
      local_e0 = uVar9;
      uStack_c8 = uVar12;
      uStack_d0 = uVar11;
      uStack_88 = uVar20 & 0xffffffffffffff00;
      uStack_b8 = uVar14;
      local_c0 = uVar13;
      uStack_a8 = uVar16;
      uStack_b0 = uVar15;
      local_120 = CONCAT44(param_4,param_3);
      uStack_e8 = uVar8;
      uStack_f0 = uVar7;
      local_108 = *puVar24 & 0xffffffff;
      puVar1 = (undefined8 *)param_1[1];
      uStack_f8 = uVar6 & 0xffffffffffffff00;
      local_110 = CONCAT44((int)*puVar26,(int)*puVar25);
      uStack_118 = CONCAT35((int3)((ulong)uVar4 >> 0x28),0x100000000);
      fVar3 = param_2;
      if (*pfVar23 <= param_2) {
        fVar3 = *pfVar23;
      }
      _local_100 = CONCAT71((int7)((ulong)uVar5 >> 8),1);
      uStack_118 = CONCAT44(uStack_118._4_4_,fVar3);
      if (puVar1 < (undefined8 *)param_1[2]) {
        if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        *(undefined1 *)(puVar1 + 5) = 0;
        *(undefined1 *)(puVar1 + 0x11) = 0;
        *(undefined1 *)(puVar1 + 4) = 1;
        puVar1[1] = uStack_118;
        *puVar1 = local_120;
        puVar1[3] = local_108;
        puVar1[2] = local_110;
        puVar21 = puVar1 + 0x14;
        puVar1[0x13] = uStack_88;
        puVar1[0x12] = local_90;
      }
      else {
        puVar21 = (undefined8 *)FUN_00973804(param_1,&local_120);
      }
      param_1[1] = puVar21;
      if ((char)uStack_98 == '\x01') {
        FUN_007b6d78(&uStack_f8);
      }
      uVar22 = uVar22 - 1;
      pfVar23 = pfVar23 + 1;
      puVar24 = puVar24 + 1;
      puVar25 = puVar25 + 1;
      puVar26 = puVar26 + 1;
    } while (uVar22 != 0);
  }
  if (*(long *)(lVar2 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00972fe8  FUN_00972fe8 =====

/* WARNING: Removing unreachable block (ram,0x009733a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00972fe8(long *param_1,undefined4 param_2,ulong param_3,ulong param_4,ulong param_5,
                 ulong param_6,undefined1 param_7,long param_8)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  ulong uVar24;
  code *pcVar25;
  ulong uVar26;
  undefined8 *puVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  ulong uVar40;
  int *piVar41;
  float fVar42;
  float fVar43;
  double dVar44;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  ulong local_128;
  undefined1 local_120;
  undefined7 uStack_11f;
  ulong uStack_118;
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
  ulong uStack_b8;
  ulong local_b0;
  ulong uStack_a8;
  long local_a0;
  
  uVar32 = 0x87;
  if (param_4 <= param_3) {
    uVar32 = 0xf0;
  }
  lVar9 = tpidr_el0;
  local_a0 = *(long *)(lVar9 + 0x28);
  uVar40 = 0xf0;
  if (param_4 <= param_3) {
    uVar40 = 0x87;
  }
  fVar42 = (float)FUN_004ad600((float)param_3 / (float)uVar32);
  if (fVar42 <= 0.0) {
    fVar42 = 0.0;
  }
  fVar43 = (float)FUN_004ad600((float)param_4 / (float)uVar40);
  if (fVar43 <= 0.0) {
    fVar43 = 0.0;
  }
  uVar32 = (long)(fVar43 + 1.0);
  if ((ulong)(long)(fVar42 + 1.0) <= (ulong)(long)(fVar43 + 1.0)) {
    uVar32 = (long)(fVar42 + 1.0);
  }
  uVar40 = param_6;
  if ((uVar32 < param_6) && (uVar26 = FUN_004022fc(), uVar40 = uVar32, (uVar26 & 1) == 0)) {
    FUN_00623bb0(&DAT_001f4ef8,"../../modules/video_coding/codecs/vp9/svc_config.cc",0x31a,
                 "Reducing number of spatial layers from ",param_6,&DAT_0019fec4,uVar32,
                 " due to low input resolution.");
  }
  if (uVar40 <= param_5 + 1) {
    uVar40 = param_5 + 1;
  }
  if (*(char *)(param_8 + 0x2c) == '\x01') {
    if (uVar40 == 0) {
      iVar28 = 1;
    }
    else {
      uVar32 = 0;
      uVar26 = 1;
      do {
        uVar35 = 0;
        uVar29 = (uint)uVar26;
        if ((uVar29 != 0) && (uVar36 = *(uint *)(param_8 + 0x1c + uVar32 * 4), uVar36 != 0)) {
          uVar1 = -uVar29;
          if (-1 < (int)uVar29) {
            uVar1 = uVar29;
          }
          uVar29 = -uVar36;
          if (-1 < (int)uVar36) {
            uVar29 = uVar36;
          }
          uVar36 = uVar1;
          if (uVar29 <= uVar1) {
            uVar36 = uVar29;
          }
          uVar4 = uVar1;
          if (uVar1 <= uVar29) {
            uVar4 = uVar29;
          }
          uVar38 = 0;
          if (uVar36 != 0) {
            uVar38 = uVar4 / uVar36;
          }
          uVar4 = uVar4 - uVar38 * uVar36;
          if (uVar4 != 0) {
            uVar38 = (uVar4 & 0xaaaaaaaa) >> 1 | (uVar4 & 0x55555555) << 1;
            uVar38 = (uVar38 & 0xcccccccc) >> 2 | (uVar38 & 0x33333333) << 2;
            uVar38 = (uVar38 & 0xf0f0f0f0) >> 4 | (uVar38 & 0xf0f0f0f) << 4;
            uVar38 = (uVar38 & 0xff00ff00) >> 8 | (uVar38 & 0xff00ff) << 8;
            uVar37 = uVar4 >> (ulong)((uint)LZCOUNT(uVar38 >> 0x10 | uVar38 << 0x10) & 0x1f);
            uVar38 = uVar36;
            do {
              uVar5 = (uVar38 & 0xaaaaaaaa) >> 1 | (uVar38 & 0x55555555) << 1;
              uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
              uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
              uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
              uVar5 = uVar38 >> (ulong)((uint)LZCOUNT(uVar5 >> 0x10 | uVar5 << 0x10) & 0x1f);
              uVar6 = uVar37 - uVar5;
              uVar38 = -uVar6;
              if (uVar5 <= uVar37 && uVar6 != 0) {
                uVar38 = uVar6;
              }
              if (uVar5 <= uVar37) {
                uVar37 = uVar5;
              }
            } while (uVar38 != 0);
            uVar36 = ((uVar4 | uVar36) & 0xaaaaaaaa) >> 1 | ((uVar4 | uVar36) & 0x55555555) << 1;
            uVar36 = (uVar36 & 0xcccccccc) >> 2 | (uVar36 & 0x33333333) << 2;
            uVar36 = (uVar36 & 0xf0f0f0f0) >> 4 | (uVar36 & 0xf0f0f0f) << 4;
            uVar36 = (uVar36 & 0xff00ff00) >> 8 | (uVar36 & 0xff00ff) << 8;
            uVar36 = uVar37 << (ulong)((uint)LZCOUNT(uVar36 >> 0x10 | uVar36 << 0x10) & 0x1f);
          }
          iVar28 = 0;
          if (uVar36 != 0) {
            iVar28 = (int)uVar1 / (int)uVar36;
          }
          uVar35 = (long)iVar28 * (long)(int)uVar29;
          if (uVar35 - (long)(int)uVar35 != 0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__numeric/gcd_lcm.h:110: libc++ Hardening assertion !__overflow failed: Overflow in lcm\n"
                      );
          }
        }
        iVar28 = (int)uVar35;
        uVar32 = uVar32 + 1;
        uVar26 = uVar35 & 0xffffffff;
      } while (uVar32 != uVar40);
    }
  }
  else {
    iVar28 = 1 << (ulong)(~((int)param_5 - (int)uVar40) & 0x1f);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar24 = _UNK_0022a068;
  uVar35 = _DAT_0022a060;
  uVar26 = _UNK_0022a058;
  uVar23 = _DAT_0022a050;
  uVar22 = _UNK_0022a048;
  uVar21 = _DAT_0022a040;
  uVar20 = _UNK_0022a038;
  uVar19 = _DAT_0022a030;
  uVar18 = _UNK_0022a028;
  uVar17 = _DAT_0022a020;
  uVar16 = _UNK_0022a018;
  uVar15 = _DAT_0022a010;
  uVar14 = _UNK_0022a008;
  uVar13 = _DAT_0022a000;
  uVar32 = _UNK_00229ff8;
  uVar12 = _DAT_00229ff0;
  uVar11 = _DAT_00229fe0;
  uVar10 = _UNK_00229fd8;
  dVar44 = DAT_001f5070;
  if (param_5 < uVar40) {
    uVar33 = (ulong)iVar28;
    uVar7 = 0;
    if (uVar33 != 0) {
      uVar7 = param_3 / uVar33;
    }
    uVar8 = 0;
    if (uVar33 != 0) {
      uVar8 = param_4 / uVar33;
    }
    piVar41 = (int *)(param_8 + param_5 * 4 + 0x1c);
    uVar40 = ~param_5 + uVar40;
    uVar39 = param_5;
    do {
      local_c0 = uVar23;
      uStack_b8 = uVar26 & 0xffffffffffffff00;
      local_b0 = uVar35 & 0xffffffffffffff00;
      uStack_f8 = uVar16;
      local_100 = uVar15;
      uStack_e8 = uVar18;
      uStack_f0 = uVar17;
      uStack_a8 = uVar24 & 0xffffffffffffff00;
      uStack_d8 = uVar20;
      local_e0 = uVar19;
      uStack_c8 = uVar22;
      uStack_d0 = uVar21;
      local_130 = uVar11;
      local_128 = 0;
      iVar28 = (int)(uVar7 * uVar33 >> (uVar40 & 0x3f));
      iVar30 = (int)(uVar8 * uVar33 >> (uVar40 & 0x3f));
      local_140 = CONCAT44(iVar30,iVar28);
      uStack_108 = uVar14;
      uStack_110 = uVar13;
      uStack_118 = uVar32 & 0xffffffffffffff00;
      uStack_138._5_3_ = (undefined3)((ulong)uVar10 >> 0x28);
      uStack_138._0_5_ = CONCAT14(param_7,param_2);
      _local_120 = CONCAT71((int7)((ulong)uVar12 >> 8),1);
      if (*(char *)(param_8 + 0x2c) == '\x01') {
        if (3 < uVar39) {
                    /* WARNING: Does not return */
          pcVar25 = (code *)SoftwareBreakpoint(0x5512,0x9734b0);
          (*pcVar25)();
        }
        uVar34 = (ulong)*piVar41;
        iVar28 = 0;
        if (uVar34 != 0) {
          iVar28 = (int)((uVar7 * uVar33 * (long)piVar41[-4]) / uVar34);
        }
        iVar30 = 0;
        if (uVar34 != 0) {
          iVar30 = (int)((uVar8 * uVar33 * (long)piVar41[-4]) / uVar34);
        }
        local_140 = CONCAT44(iVar30,iVar28);
      }
      puVar2 = (undefined8 *)param_1[1];
      iVar31 = (int)(((double)(ulong)(long)(iVar30 * iVar28) * dVar44 + 50000.0) / 1000.0);
      uVar29 = (uint)((SQRT((double)(ulong)(long)(iVar30 * iVar28)) * 600.0 + -95000.0) / 1000.0);
      if ((int)uVar29 < 0x1f) {
        uVar29 = 0x1e;
      }
      local_128 = (ulong)uVar29;
      local_130 = CONCAT44(uVar29 + iVar31 >> 1,iVar31);
      if (puVar2 < (undefined8 *)param_1[2]) {
        if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        *(undefined1 *)(puVar2 + 5) = 0;
        *(undefined1 *)(puVar2 + 0x11) = 0;
        *(undefined1 *)(puVar2 + 4) = 1;
        puVar2[1] = uStack_138;
        *puVar2 = local_140;
        puVar2[3] = local_128;
        puVar2[2] = local_130;
        puVar27 = puVar2 + 0x14;
        puVar2[0x13] = uStack_a8;
        puVar2[0x12] = local_b0;
      }
      else {
        puVar27 = (undefined8 *)FUN_00973804(param_1,&local_140);
      }
      param_1[1] = (long)puVar27;
      if ((char)uStack_b8 == '\x01') {
        FUN_007b6d78(&uStack_118);
      }
      uVar40 = uVar40 - 1;
      uVar39 = uVar39 + 1;
      piVar41 = piVar41 + 1;
    } while (uVar40 != 0xffffffffffffffff);
  }
  if (param_5 != 0) {
    if (param_1[1] != *param_1) {
      *(undefined4 *)(*param_1 + 0x18) = 0x1e;
      lVar3 = *param_1;
      if (param_1[1] != lVar3) {
        dVar44 = (double)NEON_ucvtf((ulong)*(uint *)(lVar3 + 0x10));
        *(int *)(lVar3 + 0x10) = (int)(dVar44 * DAT_001f5c48);
        goto LAB_0097342c;
      }
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
              );
  }
LAB_0097342c:
  if (*(long *)(lVar9 + 0x28) == local_a0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 009734b4  FUN_009734b4 =====

void FUN_009734b4(long *param_1,long param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  long lVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  undefined1 extraout_b0;
  undefined1 uVar16;
  undefined1 extraout_b0_00;
  undefined1 extraout_var;
  undefined1 uVar17;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 uVar18;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 uVar19;
  undefined1 extraout_var_04;
  float fVar20;
  undefined1 auVar21 [16];
  undefined2 local_134;
  undefined1 local_132;
  int local_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined1 local_120;
  undefined7 uStack_11f;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  byte local_104;
  undefined2 local_103;
  undefined1 local_101;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 uStack_d1;
  undefined8 local_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined3 uStack_b7;
  undefined5 uStack_b4;
  undefined3 uStack_af;
  undefined8 uStack_ac;
  undefined1 local_a4;
  undefined2 local_a3;
  undefined1 local_a1;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined3 uStack_88;
  undefined5 local_85;
  undefined3 uStack_80;
  undefined8 uStack_7d;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  uVar2 = *(ushort *)(param_2 + 0x554);
  if ((uVar2 >> 8 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
              );
  }
  iVar8 = FUN_0096a3b0(uVar2);
  uVar3 = *(ushort *)(param_2 + 6);
  fVar20 = 240.0;
  fVar7 = 135.0;
  if (uVar3 <= *(ushort *)(param_2 + 4)) {
    fVar20 = 135.0;
    fVar7 = 240.0;
  }
  FUN_004ad600(SUB41((float)*(ushort *)(param_2 + 4) / fVar7,0));
  uVar16 = extraout_b0;
  uVar17 = extraout_var;
  uVar18 = extraout_var_01;
  uVar19 = extraout_var_03;
  if ((float)CONCAT13(extraout_var_03,CONCAT12(extraout_var_01,CONCAT11(extraout_var,extraout_b0)))
      <= 0.0) {
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uVar19 = 0;
  }
  uVar14 = (ulong)((float)CONCAT13(uVar19,CONCAT12(uVar18,CONCAT11(uVar17,uVar16))) + 1.0);
  FUN_004ad600(SUB41((float)uVar3 / fVar20,0));
  uVar16 = extraout_b0_00;
  uVar17 = extraout_var_00;
  uVar18 = extraout_var_02;
  uVar19 = extraout_var_04;
  if ((float)CONCAT13(extraout_var_04,
                      CONCAT12(extraout_var_02,CONCAT11(extraout_var_00,extraout_b0_00))) <= 0.0) {
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uVar19 = 0;
  }
  uVar15 = (uint)uVar2;
  uVar13 = (ulong)((float)CONCAT13(uVar19,CONCAT12(uVar18,CONCAT11(uVar17,uVar16))) + 1.0);
  if (uVar14 <= uVar13) {
    uVar13 = uVar14;
  }
  iVar9 = FUN_0096a3b0(uVar2);
  uVar10 = uVar15;
  if ((int)uVar13 < iVar9) {
    uVar10 = FUN_0096a468(uVar15,uVar13 & 0xffffffff);
    uVar14 = FUN_004022fc();
    if ((uVar14 & 1) == 0) {
      local_d0._0_1_ = 3;
      local_d0._1_7_ = 0x1b23;
      uStack_c8 = 0xfa;
      uStack_c7 = 5;
      uStack_128 = &local_d0;
      uStack_c0 = SUB81(&uStack_d1,0);
      uStack_bf = (undefined7)((ulong)&uStack_d1 >> 8);
      local_130 = 0x1af849;
      uStack_12c = 0;
      local_e8 = FUN_007b8248(uVar15);
      local_f8 = FUN_007b8248(uVar10);
      FUN_00623bb0(&DAT_00229f70,*uStack_128,*(undefined4 *)(uStack_128 + 1),
                   CONCAT44(uStack_12c,local_130),local_e8,&DAT_0019fec4,local_f8);
    }
    *(ushort *)(param_2 + 0x554) = (ushort)uVar10 & 0xff | 0x100;
  }
  uVar11 = FUN_0096a354(uVar10);
  lVar12 = FUN_007b8c98(param_2);
  *(undefined4 *)(lVar12 + 0xc) = uVar11;
  uStack_118 = 0xaaaaaaaa;
  uStack_114 = 0xaaaaaaaa;
  local_120 = 0xaa;
  uStack_11f = 0xaaaaaaaaaaaaaa;
  uStack_108 = 0xaaaaaaaa;
  local_104 = 0xaa;
  local_103 = 0xaaaa;
  local_101 = 0xaa;
  uStack_110 = 0xaaaaaaaa;
  uStack_10c = 0xaaaaaaaa;
  uStack_128._0_4_ = -0x55555556;
  uStack_128._4_4_ = 0xaaaaaaaa;
  local_130 = -0x55555556;
  uStack_12c = 0xaaaaaaaa;
  FUN_008a76e8(&local_130,uVar10);
  if ((local_104 & 1) == 0) {
    uVar14 = FUN_004022fc();
    if ((uVar14 & 1) == 0) {
      auVar21 = FUN_007b8248(uVar10);
      local_d0._0_1_ = auVar21[0];
      local_d0._1_7_ = auVar21._1_7_;
      uStack_c8 = auVar21[8];
      uStack_c7 = auVar21._9_7_;
      FUN_00623bb0(&DAT_0021f2ce,"../../modules/video_coding/codecs/vp9/svc_config.cc",0x66a,
                   "Failed to create structure ",&local_d0);
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    uVar4 = *(undefined2 *)(param_2 + 4);
    uVar11 = NEON_ucvtf(*(undefined4 *)(param_2 + 0x14));
    bVar1 = *(byte *)(param_2 + 0x555);
    uVar5 = *(undefined2 *)(param_2 + 6);
    param_1[1] = (long)&DAT_aaaaaaaaaaaaaaaa;
    *param_1 = (long)&DAT_aaaaaaaaaaaaaaaa;
    param_1[2] = (long)&DAT_aaaaaaaaaaaaaaaa;
    local_a4 = (bVar1 & 1) != 0;
    if ((bool)local_a4) {
      uStack_98 = CONCAT17(local_120,CONCAT43(uStack_128._4_4_,uStack_128._1_3_));
      local_a0 = CONCAT17((undefined1)uStack_128,CONCAT43(uStack_12c,local_130._1_3_));
      uStack_90 = CONCAT17((undefined1)uStack_118,uStack_11f);
      uStack_7d = CONCAT44(uStack_108,uStack_10c);
      local_134 = local_103;
      uStack_88 = uStack_118._1_3_;
      local_85 = (undefined5)CONCAT44(uStack_110,uStack_114);
      uStack_80 = (undefined3)((uint)uStack_110 >> 8);
      local_132 = local_101;
      iVar9 = local_130;
    }
    else {
      iVar9 = 0;
    }
    local_d0._0_1_ = (undefined1)iVar9;
    uStack_b7 = uStack_88;
    uStack_bf = (undefined7)uStack_90;
    uStack_b8 = (undefined1)((ulong)uStack_90 >> 0x38);
    uStack_ac = uStack_7d;
    uStack_b4 = local_85;
    uStack_af = uStack_80;
    local_a3 = local_134;
    uStack_c7 = (undefined7)uStack_98;
    uStack_c0 = (undefined1)((ulong)uStack_98 >> 0x38);
    local_d0._1_7_ = (undefined7)local_a0;
    uStack_c8 = (undefined1)((ulong)local_a0 >> 0x38);
    local_a1 = local_132;
    FUN_00972fe8(param_1,(char)uVar11,uVar4,uVar5,0,(long)local_130,(long)(int)uStack_128,&local_d0)
    ;
    if (param_1[1] == *param_1) {
LAB_009737a4:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                );
    }
    *(undefined4 *)(*param_1 + 0x18) = 0x1e;
    if (iVar8 == 1) {
      lVar12 = *param_1;
      if (param_1[1] == lVar12) goto LAB_009737a4;
      *(undefined4 *)(lVar12 + 0x18) = *(undefined4 *)(param_2 + 0x10);
      uVar11 = *(undefined4 *)(param_2 + 0xc);
      *(undefined4 *)(lVar12 + 0x10) = uVar11;
      *(undefined4 *)(lVar12 + 0x14) = uVar11;
    }
  }
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 009737bc  FUN_009737bc =====

void FUN_009737bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,ulong param_6)

{
  if ((param_6 & 1) != 0) {
    FUN_00972de4(param_1,param_2,param_4);
    return;
  }
  FUN_00972fe8();
  return;
}


// ===== 00973804  FUN_00973804 =====

long FUN_00973804(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  void *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  void *local_38;
  
  lVar8 = param_1[1] - *param_1;
  uVar5 = (lVar8 >> 5) * -0x3333333333333333 + 1;
  if (0x199999999999999 < uVar5) {
    FUN_0084a068();
LAB_009739b0:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  local_50 = (void *)0x0;
  lVar6 = param_1[2] - *param_1 >> 5;
  uVar7 = lVar6 * -0x6666666666666666;
  if (uVar7 < uVar5 || uVar7 - uVar5 == 0) {
    uVar7 = uVar5;
  }
  if (0xcccccccccccccb < (ulong)(lVar6 * -0x3333333333333333)) {
    uVar7 = 0x199999999999999;
  }
  if (uVar7 != 0) {
    if (0x199999999999999 < uVar7) goto LAB_009739b0;
    local_50 = operator_new(uVar7 * 0xa0);
  }
  puVar1 = (undefined8 *)((long)local_50 + lVar8);
  local_38 = (void *)((long)local_50 + uVar7 * 0xa0);
  local_48 = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar12 = param_2[1];
  uVar11 = *param_2;
  uVar10 = param_2[3];
  uVar9 = param_2[2];
  uVar2 = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)(puVar1 + 5) = 0;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  *(undefined1 *)(puVar1 + 4) = uVar2;
  puVar1[1] = uVar12;
  *puVar1 = uVar11;
  puVar1[3] = uVar10;
  puVar1[2] = uVar9;
  if (*(char *)(param_2 + 0x11) == '\x01') {
    FUN_007b69e0(puVar1 + 5,param_2 + 5);
    *(undefined1 *)(puVar1 + 0x11) = 1;
  }
  uVar9 = param_2[0x12];
  local_40 = puVar1 + 0x14;
  puVar1[0x13] = param_2[0x13];
  puVar1[0x12] = uVar9;
  FUN_009739b4(param_1,&local_50);
  puVar4 = local_48;
  lVar8 = param_1[1];
  puVar1 = local_40;
  while( true ) {
    puVar3 = puVar1;
    if (puVar4 == puVar3) {
      if (local_50 != (void *)0x0) {
        local_40 = puVar3;
        operator_delete(local_50);
      }
      return lVar8;
    }
    puVar1 = puVar3 + -0x14;
    if (puVar1 == (undefined8 *)0x0) break;
    if (*(char *)(puVar3 + -3) == '\x01') {
      FUN_007b6d78(puVar3 + -0xf);
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 009739b4  FUN_009739b4 =====

void FUN_009739b4(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar8 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  lVar6 = (long)puVar8 + (param_2[1] - (long)puVar3);
  if (puVar3 != puVar8) {
    lVar9 = 0;
    do {
      puVar1 = (undefined8 *)(lVar6 + lVar9);
      if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar2 = (undefined8 *)((long)puVar8 + lVar9);
      lVar7 = lVar6 + lVar9;
      uVar12 = puVar2[1];
      uVar10 = *puVar2;
      uVar14 = puVar2[3];
      uVar13 = puVar2[2];
      uVar4 = *(undefined1 *)(puVar2 + 4);
      puVar5 = (undefined1 *)(lVar6 + lVar9 + 0x28);
      *puVar5 = 0;
      *(undefined1 *)(puVar1 + 4) = uVar4;
      puVar1[1] = uVar12;
      *puVar1 = uVar10;
      puVar1[3] = uVar14;
      puVar1[2] = uVar13;
      *(undefined1 *)(lVar7 + 0x88) = 0;
      if (*(char *)(puVar2 + 0x11) == '\x01') {
        FUN_007b6ad4(puVar5,(long)puVar8 + lVar9 + 0x28);
        *(undefined1 *)(lVar7 + 0x88) = 1;
      }
      uVar10 = puVar2[0x12];
      lVar9 = lVar9 + 0xa0;
      *(undefined8 *)(lVar7 + 0x98) = puVar2[0x13];
      *(undefined8 *)(lVar7 + 0x90) = uVar10;
    } while (puVar2 + 0x14 != puVar3);
    do {
      if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if (*(char *)(puVar8 + 0x11) == '\x01') {
        FUN_007b6d78(puVar8 + 5);
      }
      puVar8 = puVar8 + 0x14;
    } while (puVar8 != puVar3);
  }
  param_2[1] = lVar6;
  lVar6 = *param_1;
  lVar7 = param_1[2];
  param_1[1] = lVar6;
  lVar11 = param_2[1];
  lVar9 = param_2[3];
  param_1[1] = param_2[2];
  *param_1 = lVar11;
  param_1[2] = lVar9;
  param_2[2] = lVar6;
  param_2[3] = lVar7;
  *param_2 = lVar6;
  param_2[1] = lVar6;
  return;
}


// ===== 00973afc  FUN_00973afc =====

void FUN_00973afc(undefined1 *param_1,int param_2,ulong param_3,int param_4,long *param_5)

{
  undefined8 *puVar1;
  undefined1 **ppuVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  void *pvVar7;
  ulong uVar8;
  ulong uVar9;
  void *pvVar10;
  int iVar11;
  undefined1 *local_70;
  ulong uStack_68;
  byte bStack_59;
  undefined8 local_58;
  
  if (param_2 < 1) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../video/quality_convergence_controller.cc",0x56,"number_of_layers > 0",
                 &DAT_001f5fa0);
  }
  puVar1 = *(undefined8 **)(param_1 + 8);
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  *(int *)(param_1 + 4) = param_2;
  while (puVar1 != puVar5) {
    puVar5 = puVar5 + -1;
    if (puVar5 == (undefined8 *)0x0) goto LAB_00973e44;
    pvVar10 = (void *)*puVar5;
    *puVar5 = 0;
    if (pvVar10 != (void *)0x0) {
      FUN_009215a0((long)pvVar10 + 0x28);
      operator_delete(pvVar10);
    }
  }
  iVar11 = 0;
  *(undefined8 **)(param_1 + 0x10) = puVar1;
  local_58 = 0xaaaaaa00aaaaaa00;
  iVar6 = -1;
  if (param_4 < 3) {
    if (param_4 == 0) goto LAB_00973f1c;
    if (param_4 == 1) {
      plVar3 = (long *)FUN_00974124("static_qp_threshold",&local_58);
      (**(code **)(*param_5 + 0x10))(&local_70,param_5,"WebRTC-QCM-Static-VP8",0x15);
      ppuVar2 = (undefined1 **)local_70;
      if (-1 < (char)bStack_59) {
        uStack_68 = (ulong)bStack_59;
        ppuVar2 = &local_70;
      }
      FUN_006659ac(plVar3,ppuVar2,uStack_68);
      if ((char)bStack_59 < '\0') {
        operator_delete(local_70);
      }
      if (plVar3 == (long *)0x0) {
        iVar11 = 0xf;
      }
      else {
        pvVar10 = (void *)*plVar3;
        if (pvVar10 != (void *)0x0) {
          pvVar7 = (void *)plVar3[1];
          uVar9 = (ulong)((long)pvVar7 + (-0x20 - ((long)pvVar7 << 0x3b))) >> 5;
          uVar8 = (ulong)(((long)pvVar10 - (long)pvVar7 << 0x3b) - ((long)pvVar10 - (long)pvVar7))
                  >> 5;
          if (uVar9 <= uVar8) {
            uVar8 = uVar9;
          }
          if ((1 < uVar8) && ((((int)pvVar10 - (int)pvVar7 | -(int)pvVar7) & 0x1fU) == 0)) {
            uVar8 = uVar8 & 0x7fffffffffffffe;
            pvVar7 = (void *)((long)pvVar7 + uVar8 * -0x20);
            do {
              uVar8 = uVar8 - 2;
            } while (uVar8 != 0);
          }
          do {
            if (pvVar7 == pvVar10) {
              plVar3[1] = (long)pvVar10;
              iVar11 = 0xf;
              goto LAB_00974014;
            }
            pvVar7 = (void *)((long)pvVar7 + -0x20);
          } while (pvVar7 != (void *)0x0);
LAB_00973e44:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        iVar11 = 0xf;
LAB_00973ec0:
        operator_delete(plVar3);
      }
    }
    else if (param_4 == 2) {
      plVar3 = (long *)FUN_00974124("static_qp_threshold",&local_58);
      (**(code **)(*param_5 + 0x10))(&local_70,param_5,"WebRTC-QCM-Static-VP9",0x15);
      ppuVar2 = (undefined1 **)local_70;
      if (-1 < (char)bStack_59) {
        uStack_68 = (ulong)bStack_59;
        ppuVar2 = &local_70;
      }
      FUN_006659ac(plVar3,ppuVar2,uStack_68);
      if ((char)bStack_59 < '\0') {
        operator_delete(local_70);
      }
      if (plVar3 != (long *)0x0) {
        pvVar10 = (void *)*plVar3;
        if (pvVar10 != (void *)0x0) {
          pvVar7 = (void *)plVar3[1];
          uVar9 = (ulong)((long)pvVar7 + (-0x20 - ((long)pvVar7 << 0x3b))) >> 5;
          uVar8 = (ulong)(((long)pvVar10 - (long)pvVar7 << 0x3b) - ((long)pvVar10 - (long)pvVar7))
                  >> 5;
          if (uVar9 <= uVar8) {
            uVar8 = uVar9;
          }
          if ((1 < uVar8) && ((((int)pvVar10 - (int)pvVar7 | -(int)pvVar7) & 0x1fU) == 0)) {
            uVar8 = uVar8 & 0x7fffffffffffffe;
            pvVar7 = (void *)((long)pvVar7 + uVar8 * -0x20);
            do {
              uVar8 = uVar8 - 2;
            } while (uVar8 != 0);
          }
LAB_00973c78:
          if (pvVar7 != pvVar10) goto code_r0x00973c80;
          plVar3[1] = (long)pvVar10;
          iVar11 = 0x20;
LAB_00974014:
          operator_delete(pvVar10);
          goto LAB_00973ec0;
        }
        iVar11 = 0x20;
        goto LAB_00973ec0;
      }
      iVar11 = 0x20;
    }
  }
  else {
    if (param_4 - 4U < 2) goto LAB_00973f1c;
    if (param_4 == 3) {
      plVar3 = (long *)FUN_00974124("static_qp_threshold",&local_58);
      (**(code **)(*param_5 + 0x10))(&local_70,param_5,"WebRTC-QCM-Static-AV1",0x15);
      ppuVar2 = (undefined1 **)local_70;
      if (-1 < (char)bStack_59) {
        uStack_68 = (ulong)bStack_59;
        ppuVar2 = &local_70;
      }
      FUN_006659ac(plVar3,ppuVar2,uStack_68);
      if ((char)bStack_59 < '\0') {
        operator_delete(local_70);
      }
      if (plVar3 != (long *)0x0) {
        pvVar10 = (void *)*plVar3;
        if (pvVar10 != (void *)0x0) {
          pvVar7 = (void *)plVar3[1];
          uVar9 = (ulong)((long)pvVar7 + (-0x20 - ((long)pvVar7 << 0x3b))) >> 5;
          uVar8 = (ulong)(((long)pvVar10 - (long)pvVar7 << 0x3b) - ((long)pvVar10 - (long)pvVar7))
                  >> 5;
          if (uVar9 <= uVar8) {
            uVar8 = uVar9;
          }
          if ((1 < uVar8) && ((((int)pvVar10 - (int)pvVar7 | -(int)pvVar7) & 0x1fU) == 0)) {
            uVar8 = uVar8 & 0x7fffffffffffffe;
            pvVar7 = (void *)((long)pvVar7 + uVar8 * -0x20);
            do {
              uVar8 = uVar8 - 2;
            } while (uVar8 != 0);
          }
          do {
            if (pvVar7 == pvVar10) {
              iVar11 = 0x3c;
              plVar3[1] = (long)pvVar10;
              goto LAB_00974014;
            }
            pvVar7 = (void *)((long)pvVar7 + -0x20);
          } while (pvVar7 != (void *)0x0);
          goto LAB_00973e44;
        }
        iVar11 = 0x3c;
        goto LAB_00973ec0;
      }
      iVar11 = 0x3c;
    }
  }
  iVar6 = iVar11;
  if (local_58._4_1_ == '\x01') {
    uVar8 = FUN_00417e08();
    if ((uVar8 & 1) == 0) {
      if ((local_58 & 0x100000000) == 0) goto LAB_00974024;
      FUN_00623bb0(&DAT_001f4e94,"../../video/quality_convergence_controller.cc",0x241,
                   "static_qp_threshold_override: ",local_58 & 0xffffffff);
    }
    if ((local_58 & 0x100000000) == 0) {
LAB_00974024:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    iVar6 = (int)local_58;
  }
LAB_00973f1c:
  iVar11 = iVar6;
  if (iVar6 <= (int)param_3) {
    iVar11 = (int)param_3;
  }
  if ((param_3 & 0x100000000) != 0) {
    iVar6 = iVar11;
  }
  if (0 < *(int *)(param_1 + 4)) {
    iVar11 = 0;
    do {
      puVar4 = (undefined1 *)FUN_009748e0(iVar6,param_4,param_5);
      puVar1 = *(undefined8 **)(param_1 + 0x10);
      local_70 = puVar4;
      if (puVar1 < *(undefined8 **)(param_1 + 0x18)) {
        if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        local_70 = (undefined1 *)0x0;
        puVar5 = puVar1 + 1;
        *puVar1 = puVar4;
      }
      else {
        puVar5 = (undefined8 *)FUN_0097424c(param_1 + 8,&local_70);
      }
      puVar4 = local_70;
      *(undefined8 **)(param_1 + 0x10) = puVar5;
      local_70 = (undefined1 *)0x0;
      if (puVar4 != (undefined1 *)0x0) {
        FUN_009215a0(puVar4 + 0x28);
        operator_delete(puVar4);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)(param_1 + 4));
  }
  *param_1 = 1;
  return;
code_r0x00973c80:
  pvVar7 = (void *)((long)pvVar7 + -0x20);
  if (pvVar7 == (void *)0x0) goto LAB_00973e44;
  goto LAB_00973c78;
}


// ===== 00974058  FUN_00974058 =====

undefined8 FUN_00974058(byte *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((*param_1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../video/quality_convergence_controller.cc",0x6b,"initialized_",&DAT_001f5fa0);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 4))) {
    uVar2 = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3;
    if (*(int *)(param_1 + 4) == (int)uVar2) {
      uVar3 = (ulong)param_2;
      if (uVar3 < uVar2) {
        FUN_0097435c(*(undefined8 *)(*(long *)(param_1 + 8) + uVar3 * 8),param_3,param_4 & 1);
        if (uVar3 < (ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3)) {
          uVar1 = FUN_009748d4(*(undefined8 *)(*(long *)(param_1 + 8) + uVar3 * 8));
          return uVar1;
        }
      }
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                );
    }
  }
  return 0;
}


// ===== 00974124  FUN_00974124 =====

void * FUN_00974124(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  
  puVar3 = (undefined8 *)operator_new(0x20);
  puVar1 = PTR_FUN_00d520d8;
  if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  *puVar3 = param_1;
  puVar3[1] = param_2;
  puVar2 = PTR_FUN_00d520e0;
  puVar3[2] = puVar1;
  puVar3[3] = puVar2;
  pvVar4 = operator_new(0x18);
  local_48 = puVar3;
  local_40 = puVar3 + 4;
  local_38 = puVar3 + 4;
  FUN_0066597c(pvVar4,&local_48);
  if (local_48 != (undefined8 *)0x0) {
    uVar6 = (ulong)((long)local_40 + (-0x20 - ((long)local_40 << 0x3b))) >> 5;
    uVar5 = (ulong)(((long)local_48 - (long)local_40 << 0x3b) - ((long)local_48 - (long)local_40))
            >> 5;
    if (uVar6 <= uVar5) {
      uVar5 = uVar6;
    }
    puVar3 = local_40;
    if ((1 < uVar5) && ((((int)local_48 - (int)local_40 | -(int)local_40) & 0x1fU) == 0)) {
      uVar5 = uVar5 & 0x7fffffffffffffe;
      puVar3 = local_40 + uVar5 * -4;
      do {
        uVar5 = uVar5 - 2;
      } while (uVar5 != 0);
    }
    while (puVar3 != local_48) {
      puVar3 = puVar3 + -4;
      if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    local_40 = local_48;
    operator_delete(local_48);
  }
  return pvVar4;
}


// ===== 0097424c  FUN_0097424c =====

undefined8 * FUN_0097424c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  size_t __n;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  void *__dest;
  
  puVar7 = (undefined8 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar7 >> 3) + 1;
  if (uVar1 >> 0x3d != 0) {
    FUN_00974344();
LAB_00974340:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  uVar4 = param_1[2] - *param_1;
  uVar6 = (long)uVar4 >> 2;
  if (uVar6 <= uVar1) {
    uVar6 = uVar1;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar6 = 0x1fffffffffffffff;
  }
  if (uVar6 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar6 >> 0x3d != 0) goto LAB_00974340;
    pvVar2 = operator_new(uVar6 << 3);
    puVar7 = (undefined8 *)((long)pvVar2 + (long)puVar7);
  }
  if (puVar7 != (undefined8 *)0x0) {
    uVar5 = *param_2;
    *param_2 = 0;
    *puVar7 = uVar5;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar7 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar7 + 1);
    param_1[2] = (long)((long)pvVar2 + uVar6 * 8);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    return puVar7 + 1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00974344  FUN_00974344 =====

void FUN_00974344(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 0097435c  FUN_0097435c =====

void FUN_0097435c(int *param_1,int param_2,ulong param_3)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int *extraout_x1;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  undefined8 uVar7;
  int *piVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long *plVar13;
  float fVar14;
  double dVar15;
  undefined1 auVar16 [16];
  long *local_40;
  long lStack_38;
  
  if (param_2 < 0) {
    puVar2 = *(undefined8 **)(param_1 + 0xc);
    if (puVar2 != *(undefined8 **)(param_1 + 0xe)) {
      uVar6 = *(ulong *)(param_1 + 0x12);
      plVar13 = puVar2 + (uVar6 >> 10);
      lVar4 = *plVar13;
      lVar11 = lVar4 + (uVar6 & 0x3ff) * 4;
      while (lVar11 != puVar2[*(long *)(param_1 + 0x14) + uVar6 >> 10] +
                       (*(long *)(param_1 + 0x14) + uVar6 & 0x3ff) * 4) {
        if (lVar11 == 0) {
LAB_00974780:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        lVar11 = lVar11 + 4;
        if (lVar11 - lVar4 == 0x1000) {
          plVar13 = plVar13 + 1;
          lVar4 = *plVar13;
          lVar11 = lVar4;
        }
      }
    }
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    lVar11 = (long)*(undefined8 **)(param_1 + 0xe) - (long)puVar2;
    while (uVar6 = lVar11 >> 3, 2 < uVar6) {
      operator_delete((void *)*puVar2);
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0xc) + 8);
      *(undefined8 **)(param_1 + 0xc) = puVar2;
      lVar11 = *(long *)(param_1 + 0xe) - (long)puVar2;
    }
  }
  else {
    if (param_2 <= *param_1) {
LAB_0097475c:
      *(undefined1 *)(param_1 + 8) = 1;
      return;
    }
    if (((param_3 & 1) != 0) && ((*(byte *)(param_1 + 1) & 1) != 0)) {
      if ((*(byte *)(param_1 + 8) & 1) != 0) {
        return;
      }
      lVar4 = *(long *)(param_1 + 0xc);
      lVar10 = *(long *)(param_1 + 0xe);
      lVar11 = 0;
      if (lVar10 != lVar4) {
        lVar11 = (lVar10 - lVar4) * 0x80 + -1;
      }
      if (lVar11 == *(long *)(param_1 + 0x14) + *(long *)(param_1 + 0x12)) {
        FUN_00924cd8(param_1 + 10);
        lVar4 = *(long *)(param_1 + 0xc);
        lVar10 = *(long *)(param_1 + 0xe);
      }
      if ((lVar4 == lVar10) ||
         (piVar9 = (int *)(*(long *)(lVar4 + ((ulong)(*(long *)(param_1 + 0x14) +
                                                     *(long *)(param_1 + 0x12)) >> 10) * 8) +
                          (*(long *)(param_1 + 0x14) + *(long *)(param_1 + 0x12) & 0x3ffU) * 4),
         piVar9 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *piVar9 = param_2;
      uVar3 = *(ulong *)(param_1 + 2);
      uVar6 = *(long *)(param_1 + 0x14) + 1;
      *(ulong *)(param_1 + 0x14) = uVar6;
      if (*(long *)(param_1 + 4) + uVar3 < uVar6) {
        FUN_009747a8(param_1 + 10);
        uVar6 = *(ulong *)(param_1 + 0x14);
        uVar3 = *(ulong *)(param_1 + 2);
      }
      if (uVar6 <= uVar3) {
        if ((char)param_1[8] == '\0') {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_0061fd88("../../video/quality_convergence_monitor.cc",0xb0,"at_target_quality_ == false"
                     ,&DAT_001f5fa0);
      }
      uVar3 = *(ulong *)(param_1 + 0x12);
      lVar11 = *(long *)(param_1 + 0xc);
      plVar13 = (long *)(lVar11 + (uVar3 >> 10) * 8);
      if (lVar11 == *(long *)(param_1 + 0xe)) {
        piVar9 = (int *)0x0;
        lStack_38 = 0;
        local_40 = (long *)(lVar11 + (uVar3 + uVar6 >> 10) * 8);
      }
      else {
        local_40 = (long *)(lVar11 + (uVar3 + uVar6 >> 10) * 8);
        piVar9 = (int *)(*plVar13 + (uVar3 & 0x3ff) * 4);
        lStack_38 = *local_40 + (uVar3 + uVar6 & 0x3ff) * 4;
      }
      FUN_00974850(&local_40);
      dVar15 = 0.0;
      if (piVar9 != extraout_x1) {
        piVar8 = (int *)*plVar13;
        do {
          piVar12 = piVar9 + 1;
          iVar1 = *piVar9;
          piVar9 = piVar12;
          if ((long)piVar12 - (long)piVar8 == 0x1000) {
            plVar13 = plVar13 + 1;
            piVar8 = (int *)*plVar13;
            piVar9 = piVar8;
          }
          dVar15 = dVar15 + (double)iVar1;
        } while (piVar9 != extraout_x1);
      }
      lVar11 = *(long *)(param_1 + 0x14);
      lVar4 = *(long *)(param_1 + 2);
      uVar6 = *(long *)(param_1 + 0x12) + lVar11;
      local_40 = (long *)(*(long *)(param_1 + 0xc) + (uVar6 >> 10) * 8);
      if (*(long *)(param_1 + 0xc) == *(long *)(param_1 + 0xe)) {
        lStack_38 = 0;
      }
      else {
        lStack_38 = *local_40 + (uVar6 & 0x3ff) * 4;
      }
      auVar16 = FUN_00974850(&local_40);
      if (*(long *)(param_1 + 0xc) == *(long *)(param_1 + 0xe)) {
        piVar9 = (int *)0x0;
      }
      else {
        piVar9 = (int *)(*(long *)(*(long *)(param_1 + 0xc) +
                                  ((ulong)(*(long *)(param_1 + 0x14) + *(long *)(param_1 + 0x12)) >>
                                  10) * 8) +
                        (*(long *)(param_1 + 0x14) + *(long *)(param_1 + 0x12) & 0x3ffU) * 4);
      }
      fVar14 = (float)(dVar15 / (double)(ulong)(lVar11 - lVar4));
      dVar15 = 0.0;
      if (piVar9 != auVar16._8_8_) {
        piVar8 = (int *)*auVar16._0_8_;
        do {
          piVar5 = auVar16._8_8_;
          puVar2 = auVar16._0_8_;
          piVar12 = piVar5 + 1;
          if ((long)piVar12 - (long)piVar8 == 0x1000) {
            puVar2 = puVar2 + 1;
            piVar12 = (int *)*puVar2;
            piVar8 = piVar12;
          }
          auVar16._8_8_ = piVar12;
          auVar16._0_8_ = puVar2;
          dVar15 = dVar15 + (double)*piVar5;
        } while (piVar12 != piVar9);
      }
      if ((float)param_1[6] < fVar14) {
        return;
      }
      if ((float)(dVar15 / (double)*(ulong *)(param_1 + 2)) < fVar14) {
        return;
      }
      goto LAB_0097475c;
    }
    puVar2 = *(undefined8 **)(param_1 + 0xc);
    if (puVar2 != *(undefined8 **)(param_1 + 0xe)) {
      uVar6 = *(ulong *)(param_1 + 0x12);
      plVar13 = puVar2 + (uVar6 >> 10);
      lVar4 = *plVar13;
      lVar11 = lVar4 + (uVar6 & 0x3ff) * 4;
      while (lVar11 != puVar2[*(long *)(param_1 + 0x14) + uVar6 >> 10] +
                       (*(long *)(param_1 + 0x14) + uVar6 & 0x3ff) * 4) {
        if (lVar11 == 0) goto LAB_00974780;
        lVar11 = lVar11 + 4;
        if (lVar11 - lVar4 == 0x1000) {
          plVar13 = plVar13 + 1;
          lVar4 = *plVar13;
          lVar11 = lVar4;
        }
      }
    }
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    lVar11 = (long)*(undefined8 **)(param_1 + 0xe) - (long)puVar2;
    while (uVar6 = lVar11 >> 3, 2 < uVar6) {
      operator_delete((void *)*puVar2);
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0xc) + 8);
      *(undefined8 **)(param_1 + 0xc) = puVar2;
      lVar11 = *(long *)(param_1 + 0xe) - (long)puVar2;
    }
  }
  if (uVar6 == 1) {
    uVar7 = 0x200;
  }
  else {
    if (uVar6 != 2) goto LAB_009745e8;
    uVar7 = 0x400;
  }
  *(undefined8 *)(param_1 + 0x12) = uVar7;
LAB_009745e8:
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}


// ===== 009747a8  FUN_009747a8 =====

void FUN_009747a8(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/deque:2185: libc++ Hardening assertion !empty() failed: deque::pop_front called on an empty deque\n"
              );
  }
  uVar1 = *(ulong *)(param_1 + 0x20);
  if ((*(undefined8 **)(param_1 + 8))[uVar1 >> 10] + (uVar1 & 0x3ff) * 4 != 0) {
    *(ulong *)(param_1 + 0x20) = uVar1 + 1;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
    if (0x7ff < uVar1 + 1) {
      operator_delete((void *)**(undefined8 **)(param_1 + 8));
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x400;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00974850  FUN_00974850 =====

void FUN_00974850(undefined8 *param_1,long param_2)

{
  if ((param_2 != 0) && (0 < (param_1[1] - *(long *)*param_1 >> 2) - param_2)) {
    return;
  }
  return;
}


// ===== 009748d4  FUN_009748d4 =====

undefined1 FUN_009748d4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}


// ===== 009748e0  FUN_009748e0 =====

void FUN_009748e0(int param_1,int param_2,long *param_3)

{
  bool bVar1;
  undefined1 **ppuVar2;
  long *plVar3;
  void *pvVar4;
  int *piVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  int unaff_s8;
  double dVar12;
  undefined1 *local_70;
  ulong uStack_68;
  byte bStack_59;
  undefined8 local_58;
  double local_50;
  undefined8 local_48;
  
  local_58 = 0xaaaaaaaaaaaaaa00;
  local_50 = 0.05999999865889549;
  local_48 = 0x600000006;
  if (param_2 == 3) {
    local_58 = 0xaaaaaaaaaaaaaa01;
    plVar3 = (long *)FUN_00974dd0("enabled",&local_58,"alpha",&local_50,"recent_length",&local_48,
                                  "past_length",(long)&local_48 + 4);
    (**(code **)(*param_3 + 0x10))(&local_70,param_3,"WebRTC-QCM-Dynamic-AV1",0x16);
    ppuVar2 = (undefined1 **)local_70;
    if (-1 < (char)bStack_59) {
      uStack_68 = (ulong)bStack_59;
      ppuVar2 = &local_70;
    }
    FUN_006659ac(plVar3,ppuVar2,uStack_68);
    if ((char)bStack_59 < '\0') {
      operator_delete(local_70);
    }
    if (plVar3 != (long *)0x0) {
      pvVar4 = (void *)*plVar3;
      if (pvVar4 != (void *)0x0) {
        pvVar6 = (void *)plVar3[1];
        uVar8 = (ulong)((long)pvVar6 + (-0x20 - ((long)pvVar6 << 0x3b))) >> 5;
        uVar7 = (ulong)(((long)pvVar4 - (long)pvVar6 << 0x3b) - ((long)pvVar4 - (long)pvVar6)) >> 5;
        if (uVar8 <= uVar7) {
          uVar7 = uVar8;
        }
        if ((1 < uVar7) && ((((int)pvVar4 - (int)pvVar6 | -(int)pvVar6) & 0x1fU) == 0)) {
          uVar7 = uVar7 & 0x7fffffffffffffe;
          pvVar6 = (void *)((long)pvVar6 + uVar7 * -0x20);
          do {
            uVar7 = uVar7 - 2;
          } while (uVar7 != 0);
        }
        do {
          if (pvVar6 == pvVar4) goto LAB_00974d84;
          pvVar6 = (void *)((long)pvVar6 + -0x20);
        } while (pvVar6 != (void *)0x0);
LAB_00974c70:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
LAB_00974c94:
      dVar12 = 255.0;
      goto LAB_00974cd0;
    }
  }
  else {
    if (param_2 != 2) {
      dVar12 = 0.0;
      if (param_2 != 1) goto LAB_00974cdc;
      local_58 = 0xaaaaaaaaaaaaaa01;
      plVar3 = (long *)FUN_00974dd0("enabled",&local_58,"alpha",&local_50,"recent_length",&local_48,
                                    "past_length",(long)&local_48 + 4);
      (**(code **)(*param_3 + 0x10))(&local_70,param_3,"WebRTC-QCM-Dynamic-VP8",0x16);
      ppuVar2 = (undefined1 **)local_70;
      if (-1 < (char)bStack_59) {
        uStack_68 = (ulong)bStack_59;
        ppuVar2 = &local_70;
      }
      FUN_006659ac(plVar3,ppuVar2,uStack_68);
      if ((char)bStack_59 < '\0') {
        operator_delete(local_70);
      }
      if (plVar3 == (long *)0x0) {
        dVar12 = 127.0;
        goto LAB_00974cdc;
      }
      pvVar4 = (void *)*plVar3;
      if (pvVar4 != (void *)0x0) {
        pvVar6 = (void *)plVar3[1];
        uVar8 = (ulong)((long)pvVar6 + (-0x20 - ((long)pvVar6 << 0x3b))) >> 5;
        uVar7 = (ulong)(((long)pvVar4 - (long)pvVar6 << 0x3b) - ((long)pvVar4 - (long)pvVar6)) >> 5;
        if (uVar8 <= uVar7) {
          uVar7 = uVar8;
        }
        if ((1 < uVar7) && ((((int)pvVar4 - (int)pvVar6 | -(int)pvVar6) & 0x1fU) == 0)) {
          uVar7 = uVar7 & 0x7fffffffffffffe;
          pvVar6 = (void *)((long)pvVar6 + uVar7 * -0x20);
          do {
            uVar7 = uVar7 - 2;
          } while (uVar7 != 0);
        }
        do {
          if (pvVar6 == pvVar4) {
            dVar12 = 127.0;
            goto LAB_00974d98;
          }
          pvVar6 = (void *)((long)pvVar6 + -0x20);
        } while (pvVar6 != (void *)0x0);
        goto LAB_00974c70;
      }
      dVar12 = 127.0;
      goto LAB_00974cd0;
    }
    local_58 = 0xaaaaaaaaaaaaaa01;
    plVar3 = (long *)FUN_00974dd0("enabled",&local_58,"alpha",&local_50,"recent_length",&local_48,
                                  "past_length",(long)&local_48 + 4);
    (**(code **)(*param_3 + 0x10))(&local_70,param_3,"WebRTC-QCM-Dynamic-VP9",0x16);
    ppuVar2 = (undefined1 **)local_70;
    if (-1 < (char)bStack_59) {
      uStack_68 = (ulong)bStack_59;
      ppuVar2 = &local_70;
    }
    FUN_006659ac(plVar3,ppuVar2,uStack_68);
    if ((char)bStack_59 < '\0') {
      operator_delete(local_70);
    }
    if (plVar3 != (long *)0x0) {
      pvVar4 = (void *)*plVar3;
      if (pvVar4 != (void *)0x0) {
        pvVar6 = (void *)plVar3[1];
        uVar8 = (ulong)((long)pvVar6 + (-0x20 - ((long)pvVar6 << 0x3b))) >> 5;
        uVar7 = (ulong)(((long)pvVar4 - (long)pvVar6 << 0x3b) - ((long)pvVar4 - (long)pvVar6)) >> 5;
        if (uVar8 <= uVar7) {
          uVar7 = uVar8;
        }
        if ((1 < uVar7) && ((((int)pvVar4 - (int)pvVar6 | -(int)pvVar6) & 0x1fU) == 0)) {
          uVar7 = uVar7 & 0x7fffffffffffffe;
          pvVar6 = (void *)((long)pvVar6 + uVar7 * -0x20);
          do {
            uVar7 = uVar7 - 2;
          } while (uVar7 != 0);
        }
        do {
          if (pvVar6 == pvVar4) goto LAB_00974d84;
          pvVar6 = (void *)((long)pvVar6 + -0x20);
        } while (pvVar6 != (void *)0x0);
        goto LAB_00974c70;
      }
      goto LAB_00974c94;
    }
  }
  dVar12 = 255.0;
  goto LAB_00974cdc;
LAB_00974d84:
  dVar12 = 255.0;
LAB_00974d98:
  plVar3[1] = (long)pvVar4;
  operator_delete(pvVar4);
LAB_00974cd0:
  operator_delete(plVar3);
LAB_00974cdc:
  if ((char)local_58 != '\x01') {
    lVar9 = 0;
    lVar10 = 0;
    iVar11 = 0;
  }
  else {
    lVar9 = (long)(int)local_48;
    lVar10 = (long)unaff_s8;
    iVar11 = (int)(dVar12 * local_50 + (double)param_1);
  }
  bVar1 = (char)local_58 == '\x01';
  piVar5 = (int *)operator_new(0x58);
  *piVar5 = param_1;
  *(undefined2 *)((long)piVar5 + 5) = 0xaaaa;
  *(undefined1 *)((long)piVar5 + 7) = 0xaa;
  *(bool *)(piVar5 + 1) = bVar1;
  *(long *)(piVar5 + 2) = lVar9;
  *(long *)(piVar5 + 4) = lVar10;
  piVar5[6] = iVar11;
  piVar5[7] = -0x55555556;
  *(undefined1 *)(piVar5 + 8) = 0;
  piVar5[0xc] = 0;
  piVar5[0xd] = 0;
  piVar5[10] = 0;
  piVar5[0xb] = 0;
  piVar5[0x10] = 0;
  piVar5[0x11] = 0;
  piVar5[0xe] = 0;
  piVar5[0xf] = 0;
  piVar5[0x14] = 0;
  piVar5[0x15] = 0;
  piVar5[0x12] = 0;
  piVar5[0x13] = 0;
  if ((bVar1) && ((lVar10 == 0 || (lVar9 == 0)))) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../video/quality_convergence_monitor.cc",99,
                 "!params_.dynamic_detection_enabled || (params_.past_window_length > 0 && params_.recent_window_length > 0)"
                 ,&DAT_001f5fa0);
  }
  return;
}


// ===== 00974dd0  FUN_00974dd0 =====

void * FUN_00974dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar1 = PTR_FUN_00d51f60;
  if ((((puVar3 != (undefined8 *)0x0) && (puVar3 != (undefined8 *)0xffffffffffffffe0)) &&
      (puVar3 != (undefined8 *)0xffffffffffffffc0)) && (puVar3 != (undefined8 *)0xffffffffffffffa0))
  {
    *puVar3 = param_1;
    puVar3[1] = param_2;
    puVar2 = PTR_FUN_00d51f68;
    puVar3[2] = puVar1;
    puVar3[3] = puVar2;
    puVar1 = PTR_FUN_00d51f40;
    puVar3[4] = param_3;
    puVar3[5] = param_4;
    puVar2 = PTR_FUN_00d51f48;
    puVar3[6] = puVar1;
    puVar3[7] = puVar2;
    puVar1 = PTR_FUN_00d51f50;
    puVar3[8] = param_5;
    puVar3[9] = param_6;
    puVar2 = PTR_FUN_00d51f58;
    puVar3[0xc] = param_7;
    puVar3[0xd] = param_8;
    puVar3[10] = puVar1;
    puVar3[0xb] = puVar2;
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


// ===== 00974f78  FUN_00974f78 =====

ulong FUN_00974f78(long param_1,int param_2,ulong param_3,long param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  pthread_mutex_t *__mutex;
  uint local_18;
  uint local_14;
  
  uVar2 = 0;
  local_14 = 0;
  if (param_3 < 3) {
    if (param_4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      if (param_5 != 0) {
        uVar2 = 0;
        local_14 = 0;
        if (param_2 < 4) {
          if (param_2 == 1) {
            local_14 = 0xffffffff;
            uVar2 = FUN_008a3e00(param_4,param_5,&local_14);
          }
          else {
            uVar3 = 0;
            if (param_2 != 2) goto LAB_009750e0;
            local_18 = 0xffffffff;
            uVar2 = FUN_00975fac(param_4,param_5,&local_18);
            local_14 = local_18;
          }
          if ((uVar2 & 1) == 0) {
            local_14 = 0;
            uVar2 = 0;
            uVar3 = 0;
          }
          else {
            uVar3 = local_14 & 0xffffff00;
            uVar2 = 0x100000000;
          }
        }
        else {
          if (param_2 == 4) {
            __mutex = (pthread_mutex_t *)(param_1 + param_3 * 0x90);
            pthread_mutex_lock(__mutex);
            FUN_00968204(__mutex + 1,param_4,param_5);
            uVar1 = FUN_00968360(__mutex + 1);
          }
          else {
            uVar3 = 0;
            if (param_2 != 5) goto LAB_009750e0;
            param_1 = param_1 + param_3 * 0x88;
            pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x1b0));
            FUN_008830e4(param_1 + 0x1d8,param_4,param_5);
            uVar1 = FUN_00883240(param_1 + 0x1d8);
            __mutex = (pthread_mutex_t *)(param_1 + 0x1b0);
          }
          pthread_mutex_unlock(__mutex);
          uVar2 = uVar1 & 0x100000000;
          local_14 = 0;
          if (uVar2 != 0) {
            local_14 = (uint)uVar1;
          }
          uVar3 = local_14 & 0xffffff00;
        }
      }
    }
  }
  else {
    uVar3 = 0;
  }
LAB_009750e0:
  return uVar2 | (uVar3 | local_14 & 0xff);
}


// ===== 009750f0  FUN_009750f0 =====

void FUN_009750f0(long param_1,uint *param_2,ulong param_3)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  uint *puVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  undefined1 uVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  char *pcVar15;
  ulong uVar16;
  uint *puVar17;
  ulong uVar18;
  long lVar19;
  
  iVar6 = *(int *)(param_1 + 8);
  lVar19 = (long)iVar6;
  *(undefined1 *)(param_1 + 0xc) = 1;
  lVar12 = FUN_007d5db0(param_1,2);
  if (lVar12 == 2) {
    uVar10 = FUN_007d60c4(param_1);
    *param_2 = uVar10;
    iVar11 = FUN_007d60c4(param_1);
    uVar10 = *param_2 | iVar11 << 1;
    *param_2 = uVar10;
    if (((int)uVar10 < 3) || (iVar11 = FUN_007d60c4(param_1), iVar11 == 0)) {
      iVar11 = FUN_007d60c4(param_1);
      if (iVar11 != 0) {
        uVar8 = FUN_007d5db0(param_1,3);
        if (*(char *)((long)param_2 + 5) == '\x01') {
          *(undefined1 *)(param_2 + 1) = uVar8;
          return;
        }
        if (param_2 + 1 != (uint *)0x0) {
          *(undefined1 *)(param_2 + 1) = uVar8;
          *(undefined1 *)((long)param_2 + 5) = 1;
          return;
        }
        goto LAB_00975dc4;
      }
      iVar11 = FUN_007d60c4(param_1);
      *(bool *)((long)param_2 + 6) = iVar11 == 0;
      iVar11 = FUN_007d60c4(param_1);
      *(bool *)((long)param_2 + 7) = iVar11 != 0;
      iVar11 = FUN_007d60c4(param_1);
      *(bool *)(param_2 + 2) = iVar11 != 0;
      if (*(char *)((long)param_2 + 6) == '\x01') {
        lVar12 = FUN_007d5db0(param_1,0x18);
        if (lVar12 != 0x498342) {
          uVar13 = FUN_004022fc();
          if ((uVar13 & 1) != 0) goto LAB_009751b8;
          pcVar15 = "Failed to parse header. Invalid sync code.";
          uVar14 = 0xd42;
          goto LAB_009751b4;
        }
        FUN_00975e04(param_1,param_2);
        uVar10 = FUN_007d5db0(param_1,0x10);
        param_2[7] = (uVar10 & 0xffff) + 1;
        uVar10 = FUN_007d5db0(param_1,0x10);
        param_2[8] = (uVar10 & 0xffff) + 1;
        iVar11 = FUN_007d60c4(param_1);
        if (iVar11 == 0) {
          uVar10 = param_2[8];
          param_2[9] = param_2[7];
        }
        else {
          iVar11 = *(int *)(param_1 + 8);
          *(undefined1 *)(param_1 + 0xc) = 1;
          *(undefined1 *)(param_2 + 0x12) = 1;
          *(long *)(param_2 + 0x10) = lVar19 - iVar11;
          uVar10 = FUN_007d5db0(param_1,0x10);
          param_2[9] = (uVar10 & 0xffff) + 1;
          uVar10 = FUN_007d5db0(param_1,0x10);
          uVar10 = (uVar10 & 0xffff) + 1;
        }
        param_2[10] = uVar10;
        *(ulong *)(param_2 + 0x66) = *(ulong *)(param_2 + 0x66) | 0xff;
      }
      else {
        if ((*(byte *)((long)param_2 + 7) & 1) == 0) {
          iVar11 = FUN_007d60c4(param_1);
          if ((param_2[2] & 1) == 0) {
            FUN_007d6120(param_1,2);
          }
          if (iVar11 != 0) {
            lVar12 = FUN_007d5db0(param_1,0x18);
            if (lVar12 == 0x498342) {
              if ((int)*param_2 < 1) {
                *(undefined2 *)((long)param_2 + 10) = 0x101;
                *(undefined1 *)(param_2 + 6) = 1;
                param_2[5] = 3;
                *(undefined1 *)((long)param_2 + 9) = 8;
              }
              else {
                FUN_00975e04(param_1,param_2);
              }
              param_2[0x60] = 0xffffffff;
              param_2[0x5e] = 0xffffffff;
              param_2[0x5f] = 0xffffffff;
              uVar13 = FUN_007d5db0(param_1,8);
              *(ulong *)(param_2 + 0x66) =
                   *(ulong *)(param_2 + 0x66) & 0xffffffffffffff00 |
                   uVar13 >> 7 & 1 | uVar13 >> 5 & 2 | uVar13 >> 3 & 4 | uVar13 >> 1 & 8 |
                   (uVar13 >> 3 & 1) << 4 | (uVar13 >> 2 & 1) << 5 |
                   (uVar13 & 2) << 5 | (uVar13 & 1) << 7;
              uVar10 = FUN_007d5db0(param_1,0x10);
              param_2[7] = (uVar10 & 0xffff) + 1;
              uVar10 = FUN_007d5db0(param_1,0x10);
              param_2[8] = (uVar10 & 0xffff) + 1;
              iVar11 = FUN_007d60c4(param_1);
              if (iVar11 == 0) {
                param_2[9] = param_2[7];
                param_2[10] = param_2[8];
              }
              else {
                iVar11 = *(int *)(param_1 + 8);
                *(undefined1 *)(param_1 + 0xc) = 1;
                *(undefined1 *)(param_2 + 0x12) = 1;
                *(long *)(param_2 + 0x10) = lVar19 - iVar11;
                uVar10 = FUN_007d5db0(param_1,0x10);
                param_2[9] = (uVar10 & 0xffff) + 1;
                uVar10 = FUN_007d5db0(param_1,0x10);
                param_2[10] = (uVar10 & 0xffff) + 1;
              }
              goto LAB_009755ec;
            }
            uVar13 = FUN_004022fc();
            if ((uVar13 & 1) != 0) goto LAB_009751b8;
            pcVar15 = "Failed to parse header. Invalid sync code.";
            uVar14 = 0xdfa;
            goto LAB_009751b4;
          }
        }
        else if (iVar11 == 0) {
          FUN_007d6120(param_1,2);
        }
        uVar13 = FUN_007d5db0(param_1,8);
        *(ulong *)(param_2 + 0x66) =
             *(ulong *)(param_2 + 0x66) & 0xffffffffffffff00 |
             uVar13 >> 7 & 1 | uVar13 >> 5 & 2 | uVar13 >> 3 & 4 | uVar13 >> 1 & 8 |
             (uVar13 >> 3 & 1) << 4 | (uVar13 >> 2 & 1) << 5 | (uVar13 & 2) << 5 | (uVar13 & 1) << 7
        ;
        *(ulong *)(param_2 + 0x62) = *(ulong *)(param_2 + 0x62) & 0xfffffffffffffffe;
        uVar10 = FUN_007d5db0(param_1,3);
        param_2[0x5e] = uVar10;
        iVar11 = FUN_007d60c4(param_1);
        uVar13 = 0;
        if (iVar11 != 0) {
          uVar13 = 2;
        }
        *(ulong *)(param_2 + 0x62) = *(ulong *)(param_2 + 0x62) & 0xfffffffffffffffd | uVar13;
        uVar10 = FUN_007d5db0(param_1,3);
        param_2[0x5f] = uVar10;
        iVar11 = FUN_007d60c4(param_1);
        uVar13 = 0;
        if (iVar11 != 0) {
          uVar13 = 4;
        }
        *(ulong *)(param_2 + 0x62) = *(ulong *)(param_2 + 0x62) & 0xfffffffffffffffb | uVar13;
        uVar10 = FUN_007d5db0(param_1,3);
        param_2[0x60] = uVar10;
        iVar11 = FUN_007d60c4(param_1);
        uVar13 = 0;
        if (iVar11 != 0) {
          uVar13 = 8;
        }
        *(ulong *)(param_2 + 0x62) = *(ulong *)(param_2 + 0x62) & 0xfffffffffffffff7 | uVar13;
        iVar11 = FUN_007d60c4(param_1);
        lVar12 = 0;
        if (iVar11 == 0) {
          iVar11 = FUN_007d60c4(param_1);
          if (iVar11 != 0) {
            lVar12 = 1;
            goto LAB_0097552c;
          }
          iVar11 = FUN_007d60c4(param_1);
          if (iVar11 != 0) {
            lVar12 = 2;
            goto LAB_0097552c;
          }
          uVar10 = FUN_007d5db0(param_1,0x10);
          param_2[7] = (uVar10 & 0xffff) + 1;
          uVar10 = FUN_007d5db0(param_1,0x10);
          param_2[8] = (uVar10 & 0xffff) + 1;
        }
        else {
LAB_0097552c:
          uVar10 = param_2[lVar12 + 0x5e];
          *(undefined1 *)(param_2 + 0x65) = 1;
          param_2[100] = uVar10;
        }
        iVar11 = FUN_007d60c4(param_1);
        if (iVar11 == 0) {
          uVar10 = param_2[8];
          param_2[9] = param_2[7];
        }
        else {
          iVar11 = *(int *)(param_1 + 8);
          *(undefined1 *)(param_1 + 0xc) = 1;
          *(undefined1 *)(param_2 + 0x12) = 1;
          *(long *)(param_2 + 0x10) = lVar19 - iVar11;
          uVar10 = FUN_007d5db0(param_1,0x10);
          param_2[9] = (uVar10 & 0xffff) + 1;
          uVar10 = FUN_007d5db0(param_1,0x10);
          uVar10 = (uVar10 & 0xffff) + 1;
        }
        param_2[10] = uVar10;
        iVar11 = FUN_007d60c4(param_1);
        *(bool *)((long)param_2 + 0x61) = iVar11 != 0;
        iVar11 = FUN_007d60c4(param_1);
        if (iVar11 == 0) {
          uVar13 = FUN_007d5db0(param_1,2);
          if (3 < uVar13) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(0x5512,0x975e04);
            (*pcVar7)();
          }
          uVar8 = (&DAT_001fdc50)[uVar13];
        }
        else {
          uVar8 = 4;
        }
        *(undefined1 *)(param_2 + 0x18) = uVar8;
      }
LAB_009755ec:
      if ((param_2[2] & 1) == 0) {
        FUN_007d6120(param_1,2);
      }
      uVar8 = FUN_007d5db0(param_1,2);
      *(undefined1 *)((long)param_2 + 0x69) = uVar8;
      iVar11 = *(int *)(param_1 + 8);
      *(undefined1 *)(param_1 + 0xc) = 1;
      *(undefined1 *)(param_2 + 0x16) = 1;
      *(long *)(param_2 + 0x14) = lVar19 - iVar11;
      FUN_007d6120(param_1,9);
      iVar11 = FUN_007d60c4(param_1);
      if ((iVar11 != 0) && (iVar11 = FUN_007d60c4(param_1), iVar11 != 0)) {
        iVar11 = FUN_007d60c4(param_1);
        if (iVar11 != 0) {
          FUN_007d6120(param_1,7);
        }
        iVar11 = FUN_007d60c4(param_1);
        if (iVar11 != 0) {
          FUN_007d6120(param_1,7);
        }
        iVar11 = FUN_007d60c4(param_1);
        if (iVar11 != 0) {
          FUN_007d6120(param_1,7);
        }
        iVar11 = FUN_007d60c4(param_1);
        if (iVar11 != 0) {
          FUN_007d6120(param_1,7);
        }
        iVar11 = FUN_007d60c4(param_1);
        if (iVar11 != 0) {
          FUN_007d6120(param_1,7);
        }
        iVar11 = FUN_007d60c4(param_1);
        if (iVar11 != 0) {
          FUN_007d6120(param_1,7);
        }
      }
      bVar9 = FUN_007d5db0(param_1,8);
      param_2[0x19] = (uint)bVar9;
      *(bool *)(param_2 + 0x1a) = bVar9 == 0;
      iVar11 = FUN_007d60c4(param_1);
      if ((iVar11 != 0) && (uVar13 = FUN_007d5db0(param_1,5), (uVar13 & 0x1e) != 0)) {
        *(undefined1 *)(param_2 + 0x1a) = 0;
      }
      iVar11 = FUN_007d60c4(param_1);
      if ((iVar11 != 0) && (uVar13 = FUN_007d5db0(param_1,5), (uVar13 & 0x1e) != 0)) {
        *(undefined1 *)(param_2 + 0x1a) = 0;
      }
      iVar11 = FUN_007d60c4(param_1);
      if ((iVar11 != 0) && (uVar13 = FUN_007d5db0(param_1,5), (uVar13 & 0x1e) != 0)) {
        *(undefined1 *)(param_2 + 0x1a) = 0;
      }
      if ((param_3 & 1) != 0) {
        return;
      }
      iVar11 = FUN_007d60c4(param_1);
      *(bool *)((long)param_2 + 0x6a) = iVar11 != 0;
      if (iVar11 != 0) {
        iVar11 = FUN_007d60c4(param_1);
        if (iVar11 != 0) {
          puVar1 = (undefined4 *)((long)param_2 + 0x6b);
          if (*(char *)((long)param_2 + 0x72) == '\x01') {
            *(undefined1 *)((long)param_2 + 0x72) = 0;
          }
          if (puVar1 == (undefined4 *)0x0) {
LAB_00975dc4:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          *(undefined4 *)((long)param_2 + 0x6e) = 0;
          *puVar1 = 0;
          *(undefined1 *)((long)param_2 + 0x72) = 1;
          iVar11 = FUN_007d60c4(param_1);
          if (iVar11 == 0) {
            if ((*(byte *)((long)param_2 + 0x72) & 1) == 0) goto LAB_00975dd8;
            uVar8 = 0xff;
          }
          else {
            uVar8 = FUN_007d5db0(param_1,8);
            if ((*(byte *)((long)param_2 + 0x72) & 1) == 0) goto LAB_00975dd8;
          }
          *(undefined1 *)puVar1 = uVar8;
          iVar11 = FUN_007d60c4(param_1);
          if (iVar11 == 0) {
            if (*(char *)((long)param_2 + 0x72) != '\x01') goto LAB_00975dd8;
            uVar8 = 0xff;
          }
          else {
            uVar8 = FUN_007d5db0(param_1,8);
            if (*(char *)((long)param_2 + 0x72) != '\x01') goto LAB_00975dd8;
          }
          *(undefined1 *)(param_2 + 0x1b) = uVar8;
          iVar11 = FUN_007d60c4(param_1);
          if (iVar11 == 0) {
            if (*(char *)((long)param_2 + 0x72) != '\x01') goto LAB_00975dd8;
            uVar8 = 0xff;
          }
          else {
            uVar8 = FUN_007d5db0(param_1,8);
            if (*(char *)((long)param_2 + 0x72) != '\x01') goto LAB_00975dd8;
          }
          *(undefined1 *)((long)param_2 + 0x6d) = uVar8;
          iVar11 = FUN_007d60c4(param_1);
          if (iVar11 == 0) {
            if (*(char *)((long)param_2 + 0x72) != '\x01') goto LAB_00975dd8;
            uVar8 = 0xff;
          }
          else {
            uVar8 = FUN_007d5db0(param_1,8);
            if (*(char *)((long)param_2 + 0x72) != '\x01') goto LAB_00975dd8;
          }
          *(undefined1 *)((long)param_2 + 0x6e) = uVar8;
          iVar11 = FUN_007d60c4(param_1);
          if (iVar11 == 0) {
            if (*(char *)((long)param_2 + 0x72) != '\x01') goto LAB_00975dd8;
            uVar8 = 0xff;
          }
          else {
            uVar8 = FUN_007d5db0(param_1,8);
            if (*(char *)((long)param_2 + 0x72) != '\x01') goto LAB_00975dd8;
          }
          *(undefined1 *)((long)param_2 + 0x6f) = uVar8;
          iVar11 = FUN_007d60c4(param_1);
          if (iVar11 == 0) {
            if (*(char *)((long)param_2 + 0x72) != '\x01') goto LAB_00975dd8;
            uVar8 = 0xff;
          }
          else {
            uVar8 = FUN_007d5db0(param_1,8);
            if (*(char *)((long)param_2 + 0x72) != '\x01') goto LAB_00975dd8;
          }
          *(undefined1 *)(param_2 + 0x1c) = uVar8;
          iVar11 = FUN_007d60c4(param_1);
          if (iVar11 == 0) {
            if (*(char *)((long)param_2 + 0x72) != '\x01') goto LAB_00975dd8;
            uVar8 = 0xff;
          }
          else {
            uVar8 = FUN_007d5db0(param_1,8);
            if (*(char *)((long)param_2 + 0x72) != '\x01') goto LAB_00975dd8;
          }
          puVar2 = (undefined2 *)((long)param_2 + 0x73);
          *(undefined1 *)((long)param_2 + 0x71) = uVar8;
          if ((*(byte *)((long)param_2 + 0x76) & 1) != 0) {
            *(undefined1 *)((long)param_2 + 0x76) = 0;
          }
          if (puVar2 == (undefined2 *)0x0) goto LAB_00975dc4;
          *(undefined1 *)((long)param_2 + 0x75) = 0;
          *puVar2 = 0;
          *(undefined1 *)((long)param_2 + 0x76) = 1;
          iVar11 = FUN_007d60c4(param_1);
          if (iVar11 == 0) {
            if ((*(byte *)((long)param_2 + 0x76) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                        );
            }
            *(undefined1 *)((long)param_2 + 0x75) = 0xff;
            *puVar2 = 0xffff;
          }
          else {
            iVar11 = FUN_007d60c4(param_1);
            if (iVar11 == 0) {
              if ((*(byte *)((long)param_2 + 0x76) & 1) == 0) goto LAB_00975dd8;
              uVar8 = 0xff;
            }
            else {
              uVar8 = FUN_007d5db0(param_1,8);
              if ((*(byte *)((long)param_2 + 0x76) & 1) == 0) goto LAB_00975dd8;
            }
            *(undefined1 *)puVar2 = uVar8;
            iVar11 = FUN_007d60c4(param_1);
            if (iVar11 == 0) {
              if (*(char *)((long)param_2 + 0x76) != '\x01') goto LAB_00975dd8;
              uVar8 = 0xff;
            }
            else {
              uVar8 = FUN_007d5db0(param_1,8);
              if (*(char *)((long)param_2 + 0x76) != '\x01') goto LAB_00975dd8;
            }
            *(undefined1 *)(param_2 + 0x1d) = uVar8;
            iVar11 = FUN_007d60c4(param_1);
            if (iVar11 == 0) {
              if (*(char *)((long)param_2 + 0x76) != '\x01') goto LAB_00975dd8;
              *(undefined1 *)((long)param_2 + 0x75) = 0xff;
            }
            else {
              uVar8 = FUN_007d5db0(param_1,8);
              if (*(char *)((long)param_2 + 0x76) != '\x01') {
LAB_00975dd8:
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                          );
              }
              *(undefined1 *)((long)param_2 + 0x75) = uVar8;
            }
          }
        }
        iVar11 = FUN_007d60c4(param_1);
        if (iVar11 != 0) {
          iVar11 = FUN_007d60c4(param_1);
          puVar17 = param_2 + 0x1e;
          lVar12 = 8;
          *(bool *)((long)param_2 + 0x77) = iVar11 != 0;
          do {
            iVar11 = FUN_007d60c4(param_1);
            if (iVar11 != 0) {
              uVar10 = FUN_007d5db0(param_1,8);
              if ((char)puVar17[1] == '\x01') {
                *puVar17 = uVar10;
              }
              else {
                if (puVar17 == (uint *)0x0) goto LAB_00975dc4;
                *puVar17 = uVar10;
                *(undefined1 *)(puVar17 + 1) = 1;
              }
              iVar11 = FUN_007d60c4(param_1);
              if (iVar11 != 0) {
                if ((puVar17[1] & 1) == 0) goto LAB_00975dd8;
                *puVar17 = -*puVar17;
              }
            }
            iVar11 = FUN_007d60c4(param_1);
            if (iVar11 != 0) {
              uVar10 = FUN_007d5db0(param_1,6);
              puVar3 = puVar17 + 2;
              if ((puVar17[3] & 1) == 0) {
                if (puVar3 == (uint *)0x0) goto LAB_00975dc4;
                puVar17[2] = uVar10;
                *(undefined1 *)(puVar17 + 3) = 1;
              }
              else {
                *puVar3 = uVar10;
              }
              iVar11 = FUN_007d60c4(param_1);
              if (iVar11 != 0) {
                if ((char)puVar17[3] != '\x01') goto LAB_00975dd8;
                *puVar3 = -*puVar3;
              }
            }
            iVar11 = FUN_007d60c4(param_1);
            if (iVar11 != 0) {
              uVar10 = FUN_007d5db0(param_1,2);
              if ((puVar17[5] & 1) == 0) {
                if (puVar17 + 4 == (uint *)0x0) goto LAB_00975dc4;
                puVar17[4] = uVar10;
                *(undefined1 *)(puVar17 + 5) = 1;
              }
              else {
                puVar17[4] = uVar10;
              }
            }
            iVar11 = FUN_007d60c4(param_1);
            if (iVar11 != 0) {
              puVar17[6] = 1;
              *(undefined1 *)(puVar17 + 7) = 1;
            }
            lVar12 = lVar12 + -1;
            puVar17 = puVar17 + 8;
          } while (lVar12 != 0);
        }
      }
      uVar16 = (ulong)(long)(((int)(param_2[7] + 7) >> 3) + 7) >> 3;
      uVar13 = 0xffffffffffffffff;
      do {
        uVar13 = uVar13 + 1;
      } while ((ulong)(0x40L << (uVar13 & 0x3f)) < uVar16);
      uVar18 = 0xffffffffffffffff;
      do {
        uVar4 = uVar18 + 2;
        uVar18 = uVar18 + 1;
      } while (3 < uVar16 >> (uVar4 & 0x3f));
      while ((*(ulong *)(param_2 + 0xc) = uVar13, uVar13 < uVar18 &&
             (iVar11 = FUN_007d60c4(param_1), iVar11 != 0))) {
        uVar13 = *(long *)(param_2 + 0xc) + 1;
      }
      param_2[0xe] = 0;
      param_2[0xf] = 0;
      iVar11 = FUN_007d60c4(param_1);
      if (iVar11 != 0) {
        *(long *)(param_2 + 0xe) = *(long *)(param_2 + 0xe) + 1;
        iVar11 = FUN_007d60c4(param_1);
        if (iVar11 != 0) {
          *(long *)(param_2 + 0xe) = *(long *)(param_2 + 0xe) + 1;
        }
      }
      uVar10 = FUN_007d5db0(param_1,0x10);
      param_2[0x69] = uVar10 & 0xffff;
      iVar5 = *(int *)(param_1 + 8);
      iVar11 = iVar5 + 7;
      if (-1 < iVar5) {
        iVar11 = iVar5;
      }
      *(undefined1 *)(param_1 + 0xc) = 1;
      param_2[0x68] = (iVar6 >> 3) - (iVar11 >> 3);
      return;
    }
    uVar13 = FUN_004022fc();
    if ((uVar13 & 1) != 0) goto LAB_009751b8;
    pcVar15 = "Failed to parse header. Unsupported bitstream profile.";
    uVar14 = 0xcaa;
  }
  else {
    uVar13 = FUN_004022fc();
    if ((uVar13 & 1) != 0) goto LAB_009751b8;
    pcVar15 = "Failed to parse header. Frame marker should be 2.";
    uVar14 = 0xc62;
  }
LAB_009751b4:
  FUN_00623bb0(&DAT_001f4e98,"../../modules/video_coding/utility/vp9_uncompressed_header_parser.cc",
               uVar14,pcVar15);
LAB_009751b8:
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}


// ===== 00975e04  FUN_00975e04 =====

void FUN_00975e04(long param_1,uint *param_2)

{
  uint uVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined1 uVar8;
  
  if ((*param_2 & 0xfffffffe) == 2) {
    iVar4 = FUN_007d60c4(param_1);
    uVar8 = 10;
    if (iVar4 != 0) {
      uVar8 = 0xc;
    }
  }
  else {
    uVar8 = 8;
  }
  *(undefined1 *)((long)param_2 + 9) = uVar8;
  bVar3 = FUN_007d5db0(param_1,3);
  *(ushort *)((long)param_2 + 10) = bVar3 | 0x100;
  if (bVar3 == 7) {
    param_2[3] = 1;
    *(undefined1 *)(param_2 + 4) = 1;
    if ((*param_2 | 2) == 3) {
      param_2[5] = 0;
      *(undefined1 *)(param_2 + 6) = 1;
      iVar4 = FUN_007d60c4(param_1);
      if (iVar4 == 0) {
        return;
      }
      uVar5 = FUN_004022fc();
      if ((uVar5 & 1) != 0) goto LAB_00975f80;
      pcVar7 = "Failed to parse header. Reserved bit set.";
      uVar6 = 0x222;
    }
    else {
      uVar5 = FUN_004022fc();
      if ((uVar5 & 1) != 0) goto LAB_00975f80;
      pcVar7 = "Failed to parse header. 4:4:4 color not supported in profile 0 or 2.";
      uVar6 = 0x242;
    }
  }
  else {
    iVar4 = FUN_007d60c4(param_1);
    param_2[3] = (uint)(iVar4 != 0);
    *(undefined1 *)(param_2 + 4) = 1;
    if ((*param_2 | 2) != 3) {
      *(undefined1 *)(param_2 + 6) = 1;
      param_2[5] = 3;
      return;
    }
    uVar5 = FUN_007d5db0(param_1,2);
    if (4 < uVar5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(0x5512,0x975fac);
      (*pcVar2)();
    }
    uVar1 = *(uint *)(&DAT_001f3f60 + uVar5 * 4);
    *(undefined1 *)(param_2 + 6) = 1;
    param_2[5] = uVar1;
    iVar4 = FUN_007d60c4(param_1);
    if (iVar4 == 0) {
      return;
    }
    uVar5 = FUN_004022fc();
    if ((uVar5 & 1) != 0) goto LAB_00975f80;
    pcVar7 = "Failed to parse header. Reserved bit set.";
    uVar6 = 0x1b2;
  }
  FUN_00623bb0(&DAT_001f4e98,"../../modules/video_coding/utility/vp9_uncompressed_header_parser.cc",
               uVar6,pcVar7);
LAB_00975f80:
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}


// ===== 00975fac  FUN_00975fac =====

uint FUN_00975fac(undefined8 param_1,ulong param_2,undefined4 *param_3)

{
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 uStack_1b8;
  undefined4 local_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined2 local_178;
  undefined2 uStack_176;
  undefined4 local_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
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
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_30 = 0;
  if (param_2 != 0) {
    local_30 = param_1;
  }
  local_28 = &DAT_aaaaaaaaaaaaaaaa;
  if ((param_2 >> 0x1c & 0x1ffffffff) == 0) {
    local_1d8 = 0;
    uStack_1ac = 0xaaaaaaaa;
    uStack_176 = 0xaaaa;
    uStack_16c = 0xaaaaaaaa;
    local_28 = (undefined1 *)CONCAT35(0xaaaaaa,CONCAT14(1,(int)(param_2 << 3)));
    local_1d0 = 0xaaaaaa0000000800;
    uStack_1c8 = 0xaaaaaa00aaaaaa00;
    local_1c0 = 0xaaaaaa00;
    local_190 = 0xaaaaaaaaaaaaaa00;
    uStack_188 = 0xaaaaaaaaaaaaaa00;
    local_180 = 0xaaaaaaaaaaaaaa00;
    local_178 = 0;
    uStack_168 = 0xaaaa0000aaaa;
    local_160 = 0xaaaaaa00aaaaaa00;
    local_158 = 0xaaaaaa00aaaaaa00;
    local_150 = 0xaaaaaa00aaaaaa00;
    uStack_148 = 0xaaaaaa00aaaaaa00;
    local_140 = 0xaaaaaa00aaaaaa00;
    uStack_138 = 0xaaaaaa00aaaaaa00;
    local_130 = 0xaaaaaa00aaaaaa00;
    uStack_128 = 0xaaaaaa00aaaaaa00;
    local_120 = 0xaaaaaa00aaaaaa00;
    uStack_118 = 0xaaaaaa00aaaaaa00;
    local_110 = 0xaaaaaa00aaaaaa00;
    uStack_108 = 0xaaaaaa00aaaaaa00;
    local_100 = 0xaaaaaa00aaaaaa00;
    uStack_f8 = 0xaaaaaa00aaaaaa00;
    local_f0 = 0xaaaaaa00aaaaaa00;
    uStack_e8 = 0xaaaaaa00aaaaaa00;
    local_e0 = 0xaaaaaa00aaaaaa00;
    uStack_d8 = 0xaaaaaa00aaaaaa00;
    local_d0 = 0xaaaaaa00aaaaaa00;
    uStack_c8 = 0xaaaaaa00aaaaaa00;
    local_c0 = 0xaaaaaa00aaaaaa00;
    local_b8 = 0xaaaaaa00aaaaaa00;
    local_b0 = 0xaaaaaa00aaaaaa00;
    uStack_a8 = 0xaaaaaa00aaaaaa00;
    local_a0 = 0xaaaaaa00aaaaaa00;
    local_98 = 0xaaaaaa00aaaaaa00;
    local_90 = 0xaaaaaa00aaaaaa00;
    uStack_88 = 0xaaaaaa00aaaaaa00;
    local_80 = 0xaaaaaa00aaaaaa00;
    local_78 = 0xaaaaaa00aaaaaa00;
    local_70 = 0xaaaaaa00aaaaaa00;
    uStack_68 = 0xaaaaaa00aaaaaa00;
    local_1b4 = 0;
    uStack_1b0 = 0;
    local_1bc = 0;
    uStack_1b8 = 0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    local_198 = 0xaaaaaaaaaaaaaa00;
    local_174 = 0;
    uStack_170 = 0;
    local_60 = 0xffffffffffffffff;
    local_58 = 0xaaaaaaaaffffffff;
    local_50 = 0;
    uStack_48 = 0xaaaaaa00aaaaaa00;
    local_40 = 0;
    uStack_38 = 0;
    FUN_009750f0(&local_30,&local_1d8,1);
    if (-1 < (int)(uint)local_28) {
      *param_3 = local_174;
    }
    return ~(uint)local_28 >> 0x1f;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../rtc_base/numerics/safe_conversions.h",0x24,
               "IsValueInRangeForNumericType<Dst>(value)",&DAT_001f5fa0);
}


// ===== 00976200  FUN_00976200 =====

undefined8 * FUN_00976200(long param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  char **ppcVar2;
  undefined8 *puVar3;
  uint uVar4;
  char *pcVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  char *pcVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char *local_70;
  undefined1 *puStack_68;
  undefined8 local_60;
  char *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *local_18;
  
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (&local_70,*(long **)(param_1 + 8),"WebRTC-EncoderDataDumpDirectory",0x1f);
  uVar4 = (uint)(char)local_60._7_1_;
  puVar1 = puStack_68;
  if (-1 < (int)uVar4) {
    puVar1 = (undefined1 *)(ulong)local_60._7_1_;
  }
  puVar3 = param_2;
  if ((puVar1 == (undefined1 *)0x0) || (param_2 == (undefined8 *)0x0)) goto LAB_00976570;
  ppcVar2 = (char **)local_70;
  if (-1 < (int)uVar4) {
    ppcVar2 = &local_70;
  }
  pcVar5 = (char *)ppcVar2;
  if ((puVar1 < (undefined1 *)0x8) || ((char *)((long)ppcVar2 + (long)puVar1) + -1 < ppcVar2)) {
LAB_009765bc:
    do {
      if (*pcVar5 == ';') {
        *pcVar5 = '/';
      }
      pcVar5 = pcVar5 + 1;
    } while (pcVar5 != (char *)((long)ppcVar2 + (long)puVar1));
  }
  else if (puVar1 < (undefined1 *)0x10) {
    puVar6 = (undefined1 *)0x0;
LAB_0097629c:
    puVar8 = (undefined1 *)((ulong)puVar1 & 0xfffffffffffffff8);
    pcVar5 = (char *)((long)ppcVar2 + (long)puVar8);
    lVar7 = (long)puVar6 - (long)puVar8;
    pcVar9 = (char *)((long)ppcVar2 + (long)(puVar6 + 3));
    do {
      uVar11 = *(undefined8 *)(pcVar9 + -3);
      if ((char)uVar11 == ';') {
        pcVar9[-3] = '/';
      }
      if ((char)((ulong)uVar11 >> 8) == ';') {
        pcVar9[-2] = '/';
      }
      if ((char)((ulong)uVar11 >> 0x10) == ';') {
        pcVar9[-1] = '/';
      }
      if ((char)((ulong)uVar11 >> 0x18) == ';') {
        *pcVar9 = '/';
      }
      if ((char)((ulong)uVar11 >> 0x20) == ';') {
        pcVar9[1] = '/';
      }
      if ((char)((ulong)uVar11 >> 0x28) == ';') {
        pcVar9[2] = '/';
      }
      if ((char)((ulong)uVar11 >> 0x30) == ';') {
        pcVar9[3] = '/';
      }
      if ((char)((ulong)uVar11 >> 0x38) == ';') {
        pcVar9[4] = '/';
      }
      lVar7 = lVar7 + 8;
      pcVar9 = pcVar9 + 8;
    } while (lVar7 != 0);
    if (puVar1 != puVar8) goto LAB_009765bc;
  }
  else {
    puVar6 = (undefined1 *)((ulong)puVar1 & 0xfffffffffffffff0);
    pcVar5 = (char *)((long)ppcVar2 + 7);
    uVar10 = (ulong)puVar1 & 0xfffffffffffffff0;
    do {
      uVar12 = *(undefined8 *)(pcVar5 + 1);
      uVar11 = *(undefined8 *)(pcVar5 + -7);
      if ((char)uVar11 == ';') {
        pcVar5[-7] = '/';
      }
      if ((char)((ulong)uVar11 >> 8) == ';') {
        pcVar5[-6] = '/';
      }
      if ((char)((ulong)uVar11 >> 0x10) == ';') {
        pcVar5[-5] = '/';
      }
      if ((char)((ulong)uVar11 >> 0x18) == ';') {
        pcVar5[-4] = '/';
      }
      if ((char)((ulong)uVar11 >> 0x20) == ';') {
        pcVar5[-3] = '/';
      }
      if ((char)((ulong)uVar11 >> 0x28) == ';') {
        pcVar5[-2] = '/';
      }
      if ((char)((ulong)uVar11 >> 0x30) == ';') {
        pcVar5[-1] = '/';
      }
      if ((char)((ulong)uVar11 >> 0x38) == ';') {
        *pcVar5 = '/';
      }
      if ((char)uVar12 == ';') {
        pcVar5[1] = '/';
      }
      if ((char)((ulong)uVar12 >> 8) == ';') {
        pcVar5[2] = '/';
      }
      if ((char)((ulong)uVar12 >> 0x10) == ';') {
        pcVar5[3] = '/';
      }
      if ((char)((ulong)uVar12 >> 0x18) == ';') {
        pcVar5[4] = '/';
      }
      if ((char)((ulong)uVar12 >> 0x20) == ';') {
        pcVar5[5] = '/';
      }
      if ((char)((ulong)uVar12 >> 0x28) == ';') {
        pcVar5[6] = '/';
      }
      if ((char)((ulong)uVar12 >> 0x30) == ';') {
        pcVar5[7] = '/';
      }
      if ((char)((ulong)uVar12 >> 0x38) == ';') {
        pcVar5[8] = '/';
      }
      uVar10 = uVar10 - 0x10;
      pcVar5 = pcVar5 + 0x10;
    } while (uVar10 != 0);
    if (puVar1 != puVar6) {
      if (((uint)puVar1 >> 3 & 1) == 0) {
        pcVar5 = (char *)((long)ppcVar2 + (long)puVar6);
        goto LAB_009765bc;
      }
      goto LAB_0097629c;
    }
  }
  uVar11 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  puVar3 = (undefined8 *)operator_new(0x5e0);
  if ((long)local_60 < 0) {
    FUN_005478d8(&local_50,local_70,puStack_68);
  }
  else {
    puStack_48 = puStack_68;
    local_50 = local_70;
    local_40 = local_60;
  }
  puVar3[2] = param_2;
  *puVar3 = &PTR_FUN_00d3ef60;
  puVar3[1] = &PTR_FUN_00d3efe8;
  local_18 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_18);
  pthread_mutex_init((pthread_mutex_t *)(puVar3 + 3),(pthread_mutexattr_t *)&local_18);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_18);
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[8] = puVar3 + 9;
  FUN_007b861c(puVar3 + 0xb);
  puVar3[0xb7] = 0;
  if ((long)local_40 < 0) {
    FUN_005478d8(puVar3 + 0xb8,local_50,puStack_48);
    puVar3[0xbb] = uVar11;
    if ((long)local_40 < 0) {
      operator_delete(local_50);
    }
  }
  else {
    puVar3[0xbb] = uVar11;
    puVar3[0xb9] = puStack_48;
    puVar3[0xb8] = local_50;
    puVar3[0xba] = local_40;
  }
  uVar4 = (uint)local_60._7_1_;
LAB_00976570:
  if ((uVar4 >> 7 & 1) != 0) {
    operator_delete(local_70);
  }
  return puVar3;
}


// ===== 009765d0  FUN_009765d0 =====

void FUN_009765d0(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *local_18;
  
  *param_1 = &PTR_FUN_00d3ef60;
  param_1[1] = &PTR_FUN_00d3efe8;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 3));
  puVar2 = param_1 + 9;
  local_18 = param_1 + 8;
  FUN_00976b48(&local_18,*puVar2);
  *puVar2 = 0;
  param_1[10] = 0;
  param_1[8] = puVar2;
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 3));
  if (*(char *)((long)param_1 + 0x5d7) < '\0') {
    operator_delete((void *)param_1[0xb8]);
  }
  FUN_008a03f4(param_1 + 0xb);
  local_18 = param_1 + 8;
  FUN_00976b48(&local_18,param_1[9]);
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 3));
  plVar1 = (long *)param_1[2];
  param_1[2] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return;
}


// ===== 00976688  FUN_00976688 =====

void FUN_00976688(void *param_1)

{
  FUN_009765d0();
  operator_delete(param_1);
  return;
}


// ===== 009766b8  FUN_009766b8 =====

void FUN_009766b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009766c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  return;
}


// ===== 009766cc  FUN_009766cc =====

void FUN_009766cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0095d0a0(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00976718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))(*(long **)(param_1 + 0x10),param_2,param_3);
  return;
}


// ===== 0097671c  FUN_0097671c =====

void FUN_0097671c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x5b8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00976738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x28))(*(long **)(param_1 + 0x10),param_1 + 8);
  return;
}


// ===== 0097673c  FUN_0097673c =====

void FUN_0097673c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0097674c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
  return;
}


// ===== 00976750  FUN_00976750 =====

void FUN_00976750(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00976760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x38))();
  return;
}


// ===== 00976764  FUN_00976764 =====

void FUN_00976764(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00976774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x40))();
  return;
}


// ===== 00976778  FUN_00976778 =====

void FUN_00976778(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00976788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x48))();
  return;
}


// ===== 0097678c  FUN_0097678c =====

void FUN_0097678c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0097679c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x50))();
  return;
}


// ===== 009767a0  FUN_009767a0 =====

void FUN_009767a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009767b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x58))();
  return;
}


// ===== 009767b4  FUN_009767b4 =====

void FUN_009767b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009767c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x60))();
  return;
}


// ===== 009767c8  FUN_009767c8 =====

void FUN_009767c8(long param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  char *****__src;
  void *pvVar4;
  undefined8 uVar5;
  size_t __n;
  char ******ppppppcVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  char *****local_4a8;
  ulong uStack_4a0;
  undefined8 local_498;
  char *****local_490;
  undefined1 *puStack_488;
  undefined1 *local_480;
  ulong local_470;
  void *local_468;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x18));
  plVar10 = *(long **)(param_1 + 0x48);
  uVar11 = 0;
  if ((*(ulong *)(param_2 + 0x9c) & 0x100000000) != 0) {
    uVar11 = (uint)*(ulong *)(param_2 + 0x9c);
  }
  for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
    while ((int)*(uint *)(plVar10 + 4) <= (int)uVar11) {
      if (uVar11 == *(uint *)(plVar10 + 4)) {
        if (plVar10 == (long *)(param_1 + 0x48)) goto LAB_0097685c;
        pvVar7 = (void *)plVar10[5];
        goto LAB_00976a10;
      }
      plVar10 = (long *)plVar10[1];
      if (plVar10 == (long *)0x0) goto LAB_0097685c;
    }
  }
LAB_0097685c:
  memset(&local_470,0xaa,0x400);
  local_480 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_488 = &DAT_aaaaaaaaaaaaaaaa;
  local_490 = (char *****)&DAT_aaaaaaaaaaaaaaaa;
  FUN_00622830(&local_490,&local_470,0x400);
  lVar9 = (long)*(char *)(param_1 + 0x5d7);
  if (lVar9 < 0) {
    lVar8 = *(long *)(param_1 + 0x5c0);
    lVar9 = *(long *)(param_1 + 0x5c8);
  }
  else {
    lVar8 = param_1 + 0x5c0;
  }
  uVar5 = FUN_006228b0(&local_490,lVar8,lVar9);
  uVar5 = FUN_006228b0(uVar5,"/webrtc_encoded_frames",0x16);
  uVar5 = FUN_006228b0(uVar5,&DAT_001ea377,1);
  uVar5 = FUN_00622a0c(uVar5,*(undefined8 *)(param_1 + 0x5d8));
  uVar5 = FUN_006228b0(uVar5,&DAT_001ea377,1);
  uVar5 = FUN_00622910(uVar5,(ulong)uVar11);
  FUN_006228b0(uVar5,&DAT_001c55f7,4);
  __src = local_490;
  if ((char ******)local_490 == (char ******)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string:1063: libc++ Hardening assertion __s != nullptr failed: basic_string(const char*) detected nullptr\n"
              );
  }
  __n = strlen((char *)local_490);
  if (0x7ffffffffffffff6 < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (__n < 0x17) {
    local_498 = CONCAT17((char)__n,(undefined7)local_498);
    ppppppcVar6 = &local_4a8;
  }
  else {
    uVar1 = (__n & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    ppppppcVar6 = (char ******)operator_new(uVar2);
    local_498 = uVar2 | 0x8000000000000000;
    local_4a8 = (char *****)ppppppcVar6;
    uStack_4a0 = __n;
  }
  if ((char ******)((long)ppppppcVar6 + __n) < ppppppcVar6) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((ppppppcVar6 <= __src) && (__src < (char ******)((long)ppppppcVar6 + __n))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memmove(ppppppcVar6,__src,__n);
  *(undefined1 *)((long)ppppppcVar6 + __n) = 0;
  uVar1 = uStack_4a0;
  ppppppcVar6 = (char ******)local_4a8;
  if (-1 < (long)local_498) {
    uVar1 = local_498 >> 0x38;
    ppppppcVar6 = &local_4a8;
  }
  pvVar7 = (void *)FUN_00951314(ppppppcVar6,uVar1,100000000,0);
  if ((long)local_498 < 0) {
    operator_delete(local_4a8);
  }
  local_470 = (ulong)uVar11;
  local_468 = pvVar7;
  FUN_00976be4(0,param_1 + 0x40,param_1 + 0x40,&local_470);
  pvVar4 = local_468;
  local_468 = (void *)0x0;
  if (pvVar4 != (void *)0x0) {
    FUN_009512d0(pvVar4);
    operator_delete(pvVar4);
  }
LAB_00976a10:
  FUN_009516bc(pvVar7,param_2,*(undefined4 *)(param_1 + 0x58));
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x18));
  (**(code **)(**(long **)(param_1 + 0x5b8) + 0x10))(*(long **)(param_1 + 0x5b8),param_2,param_3);
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00976abc  FUN_00976abc =====

void FUN_00976abc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00976acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x5b8) + 0x18))();
  return;
}


// ===== 00976ad0  FUN_00976ad0 =====

void FUN_00976ad0(long param_1)

{
  FUN_009765d0(param_1 + -8);
  return;
}


// ===== 00976adc  FUN_00976adc =====

void FUN_00976adc(long param_1)

{
  FUN_009765d0((void *)(param_1 + -8));
  operator_delete((void *)(param_1 + -8));
  return;
}


// ===== 00976b10  FUN_00976b10 =====

void FUN_00976b10(long param_1)

{
  FUN_009767c8(param_1 + -8);
  return;
}


// ===== 00976b34  FUN_00976b34 =====

void FUN_00976b34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00976b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x5b0) + 0x18))();
  return;
}


// ===== 00976b48  FUN_00976b48 =====

void FUN_00976b48(undefined8 param_1,undefined8 *param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00976b48(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pvVar1 = (void *)param_2[5];
      puVar2 = (undefined8 *)param_2[1];
      param_2[5] = 0;
      if (pvVar1 != (void *)0x0) {
        FUN_009512d0(pvVar1);
        operator_delete(pvVar1);
      }
      operator_delete(param_2);
      param_2 = puVar2;
    } while (puVar2 != (undefined8 *)0x0);
  }
  return;
}


// ===== 00976be4  FUN_00976be4 =====

undefined1  [16] FUN_00976be4(undefined8 param_1,long *param_2,undefined8 param_3,int *param_4)

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
      while (plVar2 = plVar1, plVar3 = plVar2, *param_4 < (int)plVar2[4]) {
        plVar1 = (long *)*plVar2;
        plVar6 = plVar2;
        if ((long *)*plVar2 == (long *)0x0) goto LAB_00976c4c;
      }
      if (*param_4 == (int)plVar2[4]) {
        uVar4 = 0;
        goto LAB_00976cc4;
      }
      plVar1 = (long *)plVar2[1];
    } while ((long *)plVar2[1] != (long *)0x0);
    plVar6 = plVar2 + 1;
  }
LAB_00976c4c:
  plVar2 = (long *)operator_new(0x30);
  if ((plVar2 == (long *)0x0) || (*plVar2 = 0, plVar2 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  lVar5 = *(long *)(param_4 + 2);
  param_4[2] = 0;
  param_4[3] = 0;
  *(int *)(plVar2 + 4) = *param_4;
  plVar2[5] = lVar5;
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[2] = (long)plVar3;
  *plVar6 = (long)plVar2;
  plVar3 = plVar2;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar3 = (long *)*plVar6;
  }
  FUN_005d5b94(param_2[1],plVar3);
  uVar4 = 1;
  param_2[2] = param_2[2] + 1;
LAB_00976cc4:
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = plVar2;
  return auVar7;
}


// ===== 00976cf4  FUN_00976cf4 =====

void * FUN_00976cf4(undefined8 param_1,undefined4 param_2,undefined2 param_3)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x88);
  FUN_00976d48(pvVar1,param_1,param_2,param_3);
  return pvVar1;
}


// ===== 00976d48  FUN_00976d48 =====

int FUN_00976d48(undefined8 *param_1,long param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  void *pvVar7;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  
  *param_1 = &PTR_FUN_00d3f028;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = param_1 + 8;
  *(undefined4 *)(param_1 + 10) = param_3;
  if (param_2 != 0) {
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00978ae4(&local_80,*(undefined8 *)(param_2 + 8));
    if (((ulong)local_80 & 1) != 0) {
      uVar1 = 0;
      if ((param_4 & 0x100) != 0) {
        uVar1 = param_4;
      }
      uVar3 = FUN_00978d78(&local_80);
      uVar4 = FUN_00978d84(&local_80);
      uVar5 = FUN_00978d90(&local_80);
      uVar6 = FUN_00978d9c(&local_80);
      pvVar7 = operator_new(0x48);
      FUN_0097848c(pvVar7,uVar1,uVar3,uVar4,uVar5,uVar6);
      goto LAB_00976e28;
    }
  }
  pvVar7 = (void *)0x0;
LAB_00976e28:
  param_1[0xb] = pvVar7;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_80);
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 0xc),(pthread_mutexattr_t *)&local_80);
  iVar2 = pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_80);
  return iVar2;
}


// ===== 00976e70  FUN_00976e70 =====

int FUN_00976e70(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x60));
  uVar5 = *(ulong *)(param_1 + 0x30);
  while (1 < uVar5) {
    FUN_0094e05c(param_1 + 8);
    uVar5 = *(ulong *)(param_1 + 0x30);
  }
  lVar3 = *(long *)(param_1 + 0x10);
  lVar4 = *(long *)(param_1 + 0x18);
  lVar2 = 0;
  if (lVar4 != lVar3) {
    lVar2 = (lVar4 - lVar3 >> 3) * 0x12 + -1;
  }
  if (lVar2 == *(long *)(param_1 + 0x28) + uVar5) {
    FUN_0094e138(param_1 + 8);
    lVar3 = *(long *)(param_1 + 0x10);
    lVar4 = *(long *)(param_1 + 0x18);
  }
  if ((lVar3 != lVar4) &&
     (uVar5 = *(long *)(param_1 + 0x30) + *(long *)(param_1 + 0x28),
     lVar2 = *(long *)(lVar3 + (uVar5 / 0x12) * 8) + (uVar5 % 0x12) * 0xe0, lVar2 != 0)) {
    FUN_007bf070(lVar2,param_2);
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
    iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x60));
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00976f6c  FUN_00976f6c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00976f6c(undefined8 *param_1,long param_2,undefined4 *param_3)

{
  long *plVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined8 __src;
  long *plVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  int *__dest;
  int *piVar11;
  long lVar12;
  undefined1 *puVar13;
  void *pvVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  int iVar20;
  size_t __n;
  undefined8 uVar21;
  undefined8 __src_00;
  undefined8 *puVar22;
  undefined1 auVar23 [16];
  void *local_528;
  void *local_520;
  void *local_518;
  undefined8 *local_510;
  undefined8 *puStack_508;
  undefined1 *local_500;
  undefined1 *local_4f8;
  undefined8 uStack_4f0;
  undefined1 *local_4e8;
  undefined1 *puStack_4e0;
  undefined1 *local_4d8;
  undefined1 *puStack_4d0;
  int local_4c4;
  ulong local_4c0;
  undefined8 uStack_4b8;
  ulong local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  ulong local_3e0;
  pthread_mutex_t local_3d0;
  undefined1 auStack_3a8 [104];
  pthread_mutex_t pStack_340;
  undefined1 auStack_318 [104];
  pthread_mutex_t pStack_2b0;
  undefined1 auStack_288 [104];
  pthread_mutex_t pStack_220;
  undefined1 auStack_1f8 [96];
  pthread_mutex_t pStack_198;
  undefined1 auStack_170 [96];
  pthread_mutex_t pStack_110;
  undefined1 auStack_e8 [96];
  undefined8 local_88 [3];
  
  uVar7 = param_3[0x26];
  uStack_3f8 = _UNK_0022a138;
  local_400 = _DAT_0022a130;
  uStack_3e8 = _UNK_0022a148;
  uStack_3f0 = _DAT_0022a140;
  uStack_438 = _UNK_0022a0f8;
  local_440 = _DAT_0022a0f0;
  uStack_428 = _UNK_0022a108;
  uStack_430 = _DAT_0022a100;
  uStack_418 = _UNK_0022a118;
  local_420 = _DAT_0022a110;
  uStack_408 = _UNK_0022a128;
  uStack_410 = _DAT_0022a120;
  uStack_478 = _UNK_0022a0b8;
  local_480 = _DAT_0022a0b0;
  uStack_468 = _UNK_0022a0c8;
  uStack_470 = _DAT_0022a0c0;
  uStack_458 = _UNK_0022a0d8;
  local_460 = _DAT_0022a0d0;
  uStack_448 = _UNK_0022a0e8;
  uStack_450 = _DAT_0022a0e0;
  uStack_4b8 = _UNK_0022a078;
  uStack_4a8 = _UNK_0022a088;
  local_4b0 = _DAT_0022a080;
  local_4c0 = _DAT_0022a070 & 0xffffffffffffff00;
  uStack_498 = _UNK_0022a098;
  local_4a0 = _DAT_0022a090;
  uStack_488 = _UNK_0022a0a8;
  uStack_490 = _DAT_0022a0a0;
  local_4c4 = -0x55555556;
  local_3e0 = 0xaaaaaaaaaaaaaa00;
  local_4f8 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_4f0 = 0xffffffffffffffff;
  puStack_4e0 = &DAT_aaaaaaaaaaaaaaaa;
  local_4e8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_4d0 = &DAT_aaaaaaaaaaaaaaaa;
  local_4d8 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00977eb0(&local_4f8);
  uVar6 = pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x60));
  uVar9 = (ulong)uVar6;
  lVar12 = *(long *)(param_2 + 0x30);
  while (lVar12 != 0) {
    uVar6 = *(uint *)(*(long *)(*(long *)(param_2 + 0x10) + (*(ulong *)(param_2 + 0x28) / 0x12) * 8)
                      + (*(ulong *)(param_2 + 0x28) % 0x12) * 0xe0 + 0x10);
    if (uVar7 - uVar6 == -0x80000000) {
      if (uVar7 <= uVar6) goto LAB_009770a4;
    }
    else if ((uVar7 == uVar6) || ((int)(uVar7 - uVar6) < 0)) {
LAB_009770a4:
      if (uVar7 == uVar6) {
        if ((local_3e0 & 1) == 0) {
          FUN_007bf070(&local_4c0);
          local_3e0 = CONCAT71(local_3e0._1_7_,1);
        }
        else {
          FUN_007bf1d8(&local_4c0);
        }
        local_4c4 = FUN_00978abc(param_3);
        if (param_3[6] == 3) goto LAB_009771ac;
        plVar17 = *(long **)(param_2 + 0x38);
        plVar1 = (long *)(param_2 + 0x40);
        goto LAB_00977310;
      }
      break;
    }
    uVar9 = FUN_0094e05c(param_2 + 8);
    lVar12 = *(long *)(param_2 + 0x30);
  }
  uVar9 = FUN_0044075c(uVar9);
  if ((uVar9 & 1) == 0) {
    FUN_00623bb0(&DAT_001fcbd8,
                 "../../video/corruption_detection/frame_instrumentation_generator_impl.cc",0x460,
                 "No captured frames for RTC timestamp ",uVar7,&DAT_001ea377);
  }
  goto LAB_009770f4;
LAB_009771ac:
  uVar2 = param_3[0x26];
  local_3d0.__align = (long)&local_4c4;
  lVar12 = FUN_00977da0(0,param_2 + 0x38,param_2 + 0x38,&DAT_001f94c3,&local_3d0,&local_510);
  iVar20 = 1;
  *(undefined4 *)(lVar12 + 0x38) = uVar2;
LAB_009771e0:
  local_3d0.__align = (long)&local_4c4;
  lVar12 = FUN_00977da0(0,param_2 + 0x38,param_2 + 0x38,&DAT_001f94c3,&local_3d0,&local_510);
  uVar7 = FUN_009455ec(lVar12 + 0x20);
  if ((iVar20 != 0) && ((uVar7 & 0x7f) != 0)) {
    local_3d0.__align = (long)&local_4c4;
    uVar7 = (uVar7 & 0xffffff80) + 0x80;
    lVar12 = FUN_00977da0(0,param_2 + 0x38,param_2 + 0x38,&DAT_001f94c3,&local_3d0,&local_510);
    thunk_FUN_00946410(lVar12 + 0x20,uVar7);
  }
  if (0x3fff < (int)uVar7) {
    local_3d0.__align = (long)&local_4c4;
    lVar12 = FUN_00977da0(0,param_2 + 0x38,param_2 + 0x38,&DAT_001f94c3,&local_3d0,&local_510);
    thunk_FUN_00946410(lVar12 + 0x20,0);
    uVar7 = 0;
  }
  uVar9 = FUN_00977ed0(&local_4f8,uVar7);
  if ((uVar9 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../video/corruption_detection/frame_instrumentation_generator_impl.cc",0xc0,
                 "data.SetSequenceIndex(sequence_index)",&DAT_001f5fa0);
  }
  if (*(long *)(param_2 + 0x58) == 0) {
    local_3d0.__align = (long)&local_4c4;
    lVar12 = FUN_00977da0(0,param_2 + 0x38,param_2 + 0x38,&DAT_001f94c3,&local_3d0,&local_510);
    if ((local_3e0 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                );
    }
    FUN_009452fc(&local_3d0,lVar12 + 0x20,iVar20,local_4b0 & 0xffffffff,0xd);
LAB_009773c8:
    uVar21 = local_3d0._8_8_;
    __src_00 = local_3d0.__align;
    if (local_3d0.__align == local_3d0._8_8_) goto LAB_00977400;
    pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x60));
    iVar20 = local_4c4;
    if ((*(byte *)(param_3 + 0x54) & 1) == 0) {
      uVar9 = (ulong)(uint)param_3[9];
      uVar2 = *(undefined4 *)(param_2 + 0x50);
      if (param_3[9] != 0xffffffff) {
LAB_00977660:
        auVar23 = FUN_00978898(uVar9 & 0xffffffff,uVar2);
        goto LAB_00977674;
      }
      lVar12 = (long)local_4c4;
      memset(&local_3d0,0,0x348);
      FUN_00958c98(&local_3d0);
      if (*(long **)(param_3 + 0x22) == (long *)0x0) {
        uVar10 = 0;
      }
      else {
        uVar10 = (**(code **)(**(long **)(param_3 + 0x22) + 0x20))();
      }
      uVar9 = FUN_00974f78(&local_3d0,uVar2,lVar12,uVar10,*(undefined8 *)(param_3 + 0x24));
      FUN_0087f7dc(auStack_e8);
      pthread_mutex_destroy(&pStack_110);
      FUN_0087f7dc(auStack_170);
      pthread_mutex_destroy(&pStack_198);
      FUN_0087f7dc(auStack_1f8);
      pthread_mutex_destroy(&pStack_220);
      FUN_009679ac(auStack_288);
      pthread_mutex_destroy(&pStack_2b0);
      FUN_009679ac(auStack_318);
      pthread_mutex_destroy(&pStack_340);
      FUN_009679ac(auStack_3a8);
      iVar8 = pthread_mutex_destroy(&local_3d0);
      if ((uVar9 >> 0x20 & 1) != 0) goto LAB_00977660;
      uVar9 = FUN_0044075c(iVar8);
      if ((uVar9 & 1) == 0) {
        uVar10 = FUN_007b8c54(uVar2);
        FUN_00623bb0(&DAT_00221d58,
                     "../../video/corruption_detection/frame_instrumentation_generator_impl.cc",
                     0x220,"Missing QP for ",uVar10," layer ",iVar20,&DAT_001ea377);
      }
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 6) = 0;
    }
    else {
      auVar23 = *(undefined1 (*) [16])(param_3 + 0x50);
LAB_00977674:
      uVar9 = FUN_00977eec(auVar23._0_8_,&local_4f8);
      if ((uVar9 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0061fd88("../../video/corruption_detection/frame_instrumentation_generator_impl.cc",0xe3
                     ,"data.SetStdDev(filter_settings->std_dev)",&DAT_001f5fa0);
      }
      uVar9 = FUN_00977f1c(&local_4f8,auVar23._8_8_ & 0xffffffff);
      if ((uVar9 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0061fd88("../../video/corruption_detection/frame_instrumentation_generator_impl.cc",0xe4
                     ,"data.SetLumaErrorThreshold(filter_settings->luma_error_threshold)",
                     &DAT_001f5fa0);
      }
      uVar9 = FUN_00977f38(&local_4f8,auVar23._8_8_ >> 0x20);
      if ((uVar9 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0061fd88("../../video/corruption_detection/frame_instrumentation_generator_impl.cc",0xe6
                     ,"data.SetChromaErrorThreshold(filter_settings->chroma_error_threshold)",
                     &DAT_001f5fa0);
      }
      local_3d0.__align = 0;
      local_3d0._8_8_ = (int *)0x0;
      local_3d0._16_8_ = (int *)0x0;
      local_500 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_508 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
      local_510 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
      if ((local_3e0 & 1) == 0) {
LAB_009779c4:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                  );
      }
      uVar9 = uVar21 - __src_00;
      local_528 = (void *)0x0;
      local_520 = (void *)0x0;
      local_518 = (void *)0x0;
      if ((long)uVar9 < 0) {
        FUN_00944f5c();
LAB_00977a70:
                    /* WARNING: Subroutine does not return */
        FUN_0061fd88("../../video/corruption_detection/frame_instrumentation_generator_impl.cc",0xf0
                     ,"data.SetSampleValues(std::move(plain_values))",&DAT_001f5fa0);
      }
      local_528 = operator_new(uVar9);
      pvVar14 = (void *)((long)local_528 + uVar9);
      local_520 = local_528;
      local_518 = pvVar14;
      memcpy(local_528,(void *)__src_00,uVar9);
      local_520 = pvVar14;
      FUN_0094595c(&local_510,auVar23._0_8_,&local_4c0,&local_528,*param_3,param_3[1]);
      if (local_528 != (void *)0x0) {
        uVar19 = (ulong)((long)local_520 + (-0x10 - ((long)local_520 << 0x3c))) >> 4;
        uVar9 = (ulong)(((long)local_528 - (long)local_520 << 0x3c) -
                       ((long)local_528 - (long)local_520)) >> 4;
        if (uVar19 <= uVar9) {
          uVar9 = uVar19;
        }
        pvVar14 = local_520;
        if ((1 < uVar9) && ((((int)local_528 - (int)local_520 | -(int)local_520) & 0xfU) == 0)) {
          uVar9 = uVar9 & 0xffffffffffffffe;
          pvVar14 = (void *)((long)local_520 + uVar9 * -0x10);
          do {
            uVar9 = uVar9 - 2;
          } while (uVar9 != 0);
        }
        do {
          if (pvVar14 == local_528) {
            local_520 = local_528;
            operator_delete(local_528);
            goto LAB_0097779c;
          }
          pvVar14 = (void *)((long)pvVar14 + -0x10);
        } while (pvVar14 != (void *)0x0);
        goto LAB_00977170;
      }
LAB_0097779c:
      __src = local_3d0.__align;
      puVar22 = puStack_508;
      puVar15 = local_510;
      uVar9 = (long)puStack_508 - (long)local_510 >> 4;
      if ((ulong)((long)(local_3d0._16_8_ - local_3d0._0_8_) >> 3) < uVar9) {
        if (uVar9 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_007dd938();
        }
        __n = local_3d0._8_8_ - local_3d0._0_8_;
        __dest = (int *)operator_new((long)puStack_508 - (long)local_510 >> 1);
        piVar11 = (int *)((long)__dest + __n);
        memcpy(__dest,(void *)__src,__n);
        local_3d0.__align = (long)__dest;
        local_3d0._8_8_ = piVar11;
        local_3d0._16_8_ = __dest + uVar9 * 2;
        if ((int *)__src != (int *)0x0) {
          operator_delete((void *)__src);
          puVar15 = local_510;
          puVar22 = puStack_508;
        }
      }
      for (; puVar15 != puVar22; puVar15 = puVar15 + 2) {
        local_88[0] = *puVar15;
        if ((ulong)local_3d0._8_8_ < (ulong)local_3d0._16_8_) {
          if ((int *)local_3d0._8_8_ == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          piVar11 = (int *)(local_3d0._8_8_ + 8);
          *(undefined8 *)local_3d0._8_8_ = local_88[0];
        }
        else {
          piVar11 = (int *)FUN_00946420(&local_3d0,local_88);
        }
        local_3d0._8_8_ = piVar11;
      }
      uVar9 = FUN_00977fc0(&local_4f8,&local_3d0);
      if ((uVar9 & 1) == 0) goto LAB_00977a70;
      param_1[2] = local_4e8;
      param_1[1] = uStack_4f0;
      *param_1 = local_4f8;
      param_1[4] = local_4d8;
      param_1[3] = puStack_4e0;
      param_1[5] = puStack_4d0;
      local_4d8 = (undefined1 *)0x0;
      puStack_4d0 = (undefined1 *)0x0;
      puStack_4e0 = (undefined1 *)0x0;
      *(undefined1 *)(param_1 + 6) = 1;
      if (local_510 != (undefined8 *)0x0) {
        uVar19 = (ulong)((long)puStack_508 + (-0x10 - ((long)puStack_508 << 0x3c))) >> 4;
        uVar9 = (ulong)(((long)local_510 - (long)puStack_508 << 0x3c) -
                       ((long)local_510 - (long)puStack_508)) >> 4;
        if (uVar19 <= uVar9) {
          uVar9 = uVar19;
        }
        puVar15 = puStack_508;
        if ((1 < uVar9) && ((((int)local_510 - (int)puStack_508 | -(int)puStack_508) & 0xfU) == 0))
        {
          uVar9 = uVar9 & 0xffffffffffffffe;
          puVar15 = puStack_508 + uVar9 * -2;
          do {
            uVar9 = uVar9 - 2;
          } while (uVar9 != 0);
        }
        do {
          if (puVar15 == local_510) {
            puStack_508 = local_510;
            operator_delete(local_510);
            goto LAB_0097792c;
          }
          puVar15 = puVar15 + -2;
        } while (puVar15 != (undefined8 *)0x0);
        goto LAB_00977170;
      }
LAB_0097792c:
      if ((int *)local_3d0.__align != (int *)0x0) {
        uVar19 = (local_3d0._8_8_ - (local_3d0._8_8_ << 0x3d)) - 8 >> 3;
        uVar9 = (ulong)((local_3d0.__align - local_3d0._8_8_ << 0x3d) -
                       (local_3d0.__align - local_3d0._8_8_)) >> 3;
        if (uVar19 <= uVar9) {
          uVar9 = uVar19;
        }
        uVar16 = local_3d0._8_8_;
        if ((1 < uVar9) &&
           ((((int)local_3d0.__align - (int)local_3d0._8_8_ | -(int)local_3d0._8_8_) & 7U) == 0)) {
          uVar9 = uVar9 & 0x1ffffffffffffffe;
          uVar16 = local_3d0._8_8_ + uVar9 * -8;
          do {
            uVar9 = uVar9 - 2;
          } while (uVar9 != 0);
        }
        do {
          if (uVar16 == local_3d0.__align) {
            local_3d0._8_8_ = local_3d0.__align;
            operator_delete((void *)local_3d0.__align);
            goto LAB_00977448;
          }
          uVar16 = uVar16 + -8;
        } while ((int *)uVar16 != (int *)0x0);
        goto LAB_00977170;
      }
    }
  }
  else {
    if ((local_3e0 & 1) == 0) goto LAB_009779c4;
    uVar9 = FUN_00978500(*(long *)(param_2 + 0x58),&local_4c0,param_3);
    if ((uVar9 & 1) != 0) {
      local_3d0.__align = (long)&local_4c4;
      lVar12 = FUN_00977da0(0,param_2 + 0x38,param_2 + 0x38,&DAT_001f94c3,&local_3d0,&local_510);
      FUN_00945414(&local_3d0,lVar12 + 0x20,0xd);
      goto LAB_009773c8;
    }
    __src_00 = (long)(int *)0x0;
    uVar21 = (int *)0x0;
LAB_00977400:
    puVar3 = local_4d8;
    puVar13 = puStack_4e0;
    if (iVar20 == 0) {
      *(undefined1 *)param_1 = 0;
    }
    else {
      puStack_4e0 = (undefined1 *)0x0;
      local_4d8 = (undefined1 *)0x0;
      param_1[2] = local_4e8;
      param_1[1] = uStack_4f0;
      *param_1 = local_4f8;
      param_1[4] = puVar3;
      param_1[3] = puVar13;
      param_1[5] = puStack_4d0;
      puStack_4d0 = (undefined1 *)0x0;
    }
    *(bool *)(param_1 + 6) = iVar20 != 0;
    pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x60));
  }
LAB_00977448:
  if ((int *)__src_00 != (int *)0x0) {
    uVar19 = (ulong)(uVar21 + (-0x10 - (uVar21 << 0x3c))) >> 4;
    uVar9 = (ulong)((__src_00 - uVar21 << 0x3c) - (__src_00 - uVar21)) >> 4;
    if (uVar19 <= uVar9) {
      uVar9 = uVar19;
    }
    if ((1 < uVar9) && ((((int)__src_00 - (int)uVar21 | -(int)uVar21) & 0xfU) == 0)) {
      uVar9 = uVar9 & 0xffffffffffffffe;
      uVar21 = uVar21 + uVar9 * -4 * 4;
      do {
        uVar9 = uVar9 - 2;
      } while (uVar9 != 0);
    }
    do {
      if (uVar21 == __src_00) {
        operator_delete((void *)__src_00);
        goto LAB_00977104;
      }
      uVar21 = uVar21 + -0x10;
    } while ((int *)uVar21 != (int *)0x0);
    goto LAB_00977170;
  }
  goto LAB_00977104;
LAB_00977310:
  if (plVar17 != plVar1) {
    if (*(uint *)(plVar17 + 7) == uVar7) goto LAB_009771ac;
    plVar18 = plVar17;
    plVar4 = (long *)plVar17[1];
    if ((long *)plVar17[1] == (long *)0x0) {
      do {
        plVar17 = (long *)plVar18[2];
        bVar5 = plVar18 != (long *)*plVar17;
        plVar18 = plVar17;
      } while (bVar5);
    }
    else {
      do {
        plVar17 = plVar4;
        plVar4 = (long *)*plVar17;
      } while ((long *)*plVar17 != (long *)0x0);
    }
    goto LAB_00977310;
  }
  for (plVar17 = (long *)*plVar1; plVar17 != (long *)0x0; plVar17 = (long *)*plVar17) {
    while (*(int *)((long)plVar17 + 0x1c) <= local_4c4) {
      if (local_4c4 == *(int *)((long)plVar17 + 0x1c)) {
        if (plVar17 == plVar1) goto LAB_00977558;
        iVar20 = 0;
        goto LAB_009771e0;
      }
      plVar17 = (long *)plVar17[1];
      if (plVar17 == (long *)0x0) goto LAB_00977558;
    }
  }
LAB_00977558:
  uVar9 = FUN_00417e08();
  if ((uVar9 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,
                 "../../video/corruption_detection/frame_instrumentation_generator_impl.cc",0x561,
                 "The first frame of a spatial or simulcast layer is not a key frame.");
  }
LAB_009770f4:
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x60));
LAB_00977104:
  if (puStack_4e0 == (undefined1 *)0x0) {
LAB_00977510:
    if ((local_3e0 & 1) != 0) {
      FUN_007bf020(&local_4c0);
    }
    return;
  }
  uVar9 = (ulong)(((long)puStack_4e0 - (long)local_4d8 << 0x3d) -
                 ((long)puStack_4e0 - (long)local_4d8)) >> 3;
  if ((ulong)(local_4d8 + (-8 - ((long)local_4d8 << 0x3d))) >> 3 <= uVar9) {
    uVar9 = (ulong)(local_4d8 + (-8 - ((long)local_4d8 << 0x3d))) >> 3;
  }
  puVar13 = local_4d8;
  if ((1 < uVar9) && ((((int)puStack_4e0 - (int)local_4d8 | -(int)local_4d8) & 7U) == 0)) {
    uVar9 = uVar9 & 0x1ffffffffffffffe;
    puVar13 = local_4d8 + uVar9 * -8;
    do {
      uVar9 = uVar9 - 2;
    } while (uVar9 != 0);
  }
  do {
    if (puVar13 == puStack_4e0) {
      local_4d8 = puStack_4e0;
      operator_delete(puStack_4e0);
      goto LAB_00977510;
    }
    puVar13 = puVar13 + -8;
  } while (puVar13 != (undefined1 *)0x0);
LAB_00977170:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00977a94  FUN_00977a94 =====

/* WARNING: Type propagation algorithm not settling */

ulong FUN_00977a94(long param_1,int param_2)

{
  long *plVar1;
  ulong uVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x60));
  plVar1 = *(long **)(param_1 + 0x40);
joined_r0x00977abc:
  do {
    if (plVar1 == (long *)0x0) {
LAB_00977b04:
      uVar2 = 0;
LAB_00977b08:
      pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x60));
      return uVar2;
    }
    if (param_2 < *(int *)((long)plVar1 + 0x1c)) {
      plVar1 = (long *)*plVar1;
      goto joined_r0x00977abc;
    }
    if (param_2 == *(int *)((long)plVar1 + 0x1c)) {
      if (plVar1 != (undefined8 *)(param_1 + 0x40)) {
        uVar2 = FUN_009455ec(plVar1 + 4);
        uVar2 = uVar2 & 0xffffffff | 0x100000000;
        goto LAB_00977b08;
      }
      goto LAB_00977b04;
    }
    plVar1 = (long *)plVar1[1];
  } while( true );
}


// ===== 00977b24  FUN_00977b24 =====

int FUN_00977b24(long param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  undefined4 local_30;
  undefined1 uStack_29;
  undefined1 *local_28;
  
  local_30 = param_3;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x60));
  if (param_2 < 0x4000) {
    local_28 = (undefined1 *)&local_30;
    lVar2 = FUN_00977da0(0,param_1 + 0x38,param_1 + 0x38,&DAT_001f94c3,&local_28,&uStack_29);
    thunk_FUN_00946410(lVar2 + 0x20,param_2);
  }
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x60));
  return iVar1;
}


// ===== 00977ba4  FUN_00977ba4 =====

void FUN_00977ba4(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *local_28;
  
  *param_1 = &PTR_FUN_00d3f028;
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0xc));
  pvVar1 = (void *)param_1[0xb];
  param_1[0xb] = 0;
  if (pvVar1 != (void *)0x0) {
    local_28 = (undefined8 *)((long)pvVar1 + 0x28);
    FUN_00977cb8(&local_28,*(undefined8 *)((long)pvVar1 + 0x30));
    operator_delete(pvVar1);
  }
  local_28 = param_1 + 7;
  FUN_00977d2c(&local_28,param_1[8]);
  FUN_0094dacc(param_1 + 1);
  return;
}


// ===== 00977c28  FUN_00977c28 =====

void FUN_00977c28(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *local_28;
  
  *param_1 = &PTR_FUN_00d3f028;
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0xc));
  pvVar1 = (void *)param_1[0xb];
  param_1[0xb] = 0;
  if (pvVar1 != (void *)0x0) {
    local_28 = (undefined8 *)((long)pvVar1 + 0x28);
    FUN_00977cb8(&local_28,*(undefined8 *)((long)pvVar1 + 0x30));
    operator_delete(pvVar1);
  }
  local_28 = param_1 + 7;
  FUN_00977d2c(&local_28,param_1[8]);
  FUN_0094dacc(param_1 + 1);
  operator_delete(param_1);
  return;
}


// ===== 00977cb8  FUN_00977cb8 =====

void FUN_00977cb8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00977cb8(param_1,*param_2);
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


// ===== 00977d2c  FUN_00977d2c =====

void FUN_00977d2c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00977d2c(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe4) {
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


// ===== 00977da0  FUN_00977da0 =====

undefined1  [16]
FUN_00977da0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  int *piVar7;
  undefined1 auVar8 [16];
  
  piVar7 = (int *)*param_5;
  plVar4 = param_2 + 1;
  plVar6 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    iVar1 = *piVar7;
    plVar2 = (long *)*plVar4;
    do {
      while (plVar3 = plVar2, plVar4 = plVar3, iVar1 < *(int *)((long)plVar3 + 0x1c)) {
        plVar2 = (long *)*plVar3;
        plVar6 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_00977e08;
      }
      if (iVar1 == *(int *)((long)plVar3 + 0x1c)) {
        uVar5 = 0;
        goto LAB_00977e80;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar6 = plVar3 + 1;
  }
LAB_00977e08:
  plVar3 = (long *)operator_new(0x40);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  *plVar3 = 0;
  iVar1 = *piVar7;
  plVar3[5] = 0;
  plVar3[6] = 0;
  *(undefined4 *)(plVar3 + 7) = 0;
  *(int *)((long)plVar3 + 0x1c) = iVar1;
  plVar3[4] = 0;
  FUN_009452c4();
  *(undefined4 *)(plVar3 + 7) = 0;
  *plVar3 = 0;
  plVar3[1] = 0;
  plVar3[2] = (long)plVar4;
  *plVar6 = (long)plVar3;
  plVar4 = plVar3;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar4 = (long *)*plVar6;
  }
  FUN_005d5b94(param_2[1],plVar4);
  uVar5 = 1;
  param_2[2] = param_2[2] + 1;
LAB_00977e80:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = plVar3;
  return auVar8;
}


// ===== 00977eb0  FUN_00977eb0 =====

void FUN_00977eb0(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  return;
}


// ===== 00977ed0  FUN_00977ed0 =====

bool FUN_00977ed0(uint *param_1,uint param_2)

{
  if (param_2 >> 0xe == 0) {
    *param_1 = param_2;
  }
  return param_2 < 0x4000;
}


// ===== 00977eec  FUN_00977eec =====

bool FUN_00977eec(double param_1,long param_2)

{
  bool bVar1;
  
  bVar1 = param_1 < 40.0 != NAN(param_1);
  if ((param_1 == 40.0 || bVar1) && 0.0 <= param_1) {
    *(double *)(param_2 + 8) = param_1;
  }
  return (param_1 == 40.0 || bVar1) && 0.0 <= param_1;
}


// ===== 00977f1c  FUN_00977f1c =====

bool FUN_00977f1c(long param_1,uint param_2)

{
  if (param_2 < 0x10) {
    *(uint *)(param_1 + 0x10) = param_2;
  }
  return param_2 < 0x10;
}


// ===== 00977f38  FUN_00977f38 =====

bool FUN_00977f38(long param_1,uint param_2)

{
  if (param_2 < 0x10) {
    *(uint *)(param_1 + 0x14) = param_2;
  }
  return param_2 < 0x10;
}


// ===== 00977f54  FUN_00977f54 =====

undefined8 FUN_00977f54(long param_1,double *param_2,long param_3)

{
  double *pdVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  double dVar6;
  
  lVar5 = param_3 * 8;
  pdVar1 = param_2;
  while( true ) {
    if (lVar5 == 0) {
      FUN_009780ec(param_1 + 0x18,param_2,param_2 + param_3,
                   (long)(param_2 + param_3) - (long)param_2 >> 3);
      return 1;
    }
    dVar6 = *pdVar1;
    bVar2 = false;
    bVar3 = false;
    bVar4 = false;
    if (0.0 <= dVar6) {
      bVar2 = false;
      bVar3 = false;
      bVar4 = true;
      if (!NAN(dVar6)) {
        bVar2 = dVar6 < 255.0;
        bVar3 = dVar6 == 255.0;
        bVar4 = false;
      }
    }
    if (!bVar3 && bVar2 == bVar4) break;
    lVar5 = lVar5 + -8;
    pdVar1 = pdVar1 + 1;
  }
  return 0;
}


// ===== 00977fc0  FUN_00977fc0 =====

undefined8 FUN_00977fc0(long param_1,long *param_2)

{
  double *pdVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  void *pvVar5;
  void *pvVar6;
  double *pdVar7;
  ulong uVar8;
  ulong uVar9;
  double dVar10;
  
  pdVar7 = (double *)*param_2;
  pdVar1 = pdVar7;
  do {
    if (pdVar1 == (double *)param_2[1]) {
      pvVar5 = *(void **)(param_1 + 0x18);
      if (pvVar5 != (void *)0x0) {
        pvVar6 = *(void **)(param_1 + 0x20);
        uVar9 = (ulong)((long)pvVar6 + (-8 - ((long)pvVar6 << 0x3d))) >> 3;
        uVar8 = (ulong)(((long)pvVar5 - (long)pvVar6 << 0x3d) - ((long)pvVar5 - (long)pvVar6)) >> 3;
        if (uVar9 <= uVar8) {
          uVar8 = uVar9;
        }
        if ((1 < uVar8) && ((((int)pvVar5 - (int)pvVar6 | -(int)pvVar6) & 7U) == 0)) {
          uVar8 = uVar8 & 0x1ffffffffffffffe;
          pvVar6 = (void *)((long)pvVar6 + uVar8 * -8);
          do {
            uVar8 = uVar8 - 2;
          } while (uVar8 != 0);
        }
        while (pvVar6 != pvVar5) {
          pvVar6 = (void *)((long)pvVar6 + -8);
          if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
        }
        *(void **)(param_1 + 0x20) = pvVar5;
        operator_delete(pvVar5);
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(undefined8 *)(param_1 + 0x20) = 0;
        *(undefined8 *)(param_1 + 0x28) = 0;
        pdVar7 = (double *)*param_2;
      }
      *(double **)(param_1 + 0x18) = pdVar7;
      *(long *)(param_1 + 0x20) = param_2[1];
      *(long *)(param_1 + 0x28) = param_2[2];
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      return 1;
    }
    dVar10 = *pdVar1;
    bVar2 = false;
    bVar3 = false;
    bVar4 = false;
    if (0.0 <= dVar10) {
      bVar2 = false;
      bVar3 = false;
      bVar4 = true;
      if (!NAN(dVar10)) {
        bVar2 = dVar10 < 255.0;
        bVar3 = dVar10 == 255.0;
        bVar4 = false;
      }
    }
    pdVar1 = pdVar1 + 1;
  } while (bVar3 || bVar2 != bVar4);
  return 0;
}


// ===== 009780ec  FUN_009780ec =====

void FUN_009780ec(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  void *__dest;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar5 = param_1[2];
  __dest = (void *)*param_1;
  if ((ulong)((long)(uVar5 - (long)__dest) >> 3) < param_4) {
    if (__dest == (void *)0x0) {
LAB_0097836c:
      if (param_4 >> 0x3d == 0) {
        uVar8 = (long)uVar5 >> 2;
        if ((ulong)((long)uVar5 >> 2) <= param_4) {
          uVar8 = param_4;
        }
        if (0x7ffffffffffffff7 < uVar5) {
          uVar8 = 0x1fffffffffffffff;
        }
        if (uVar8 >> 0x3d == 0) {
          puVar1 = (undefined8 *)operator_new(uVar8 * 8);
          *param_1 = puVar1;
          param_1[1] = puVar1;
          param_1[2] = puVar1 + uVar8;
          if (param_2 != param_3) {
            uVar8 = (ulong)((long)param_3 + (-8 - (long)param_2)) >> 3;
            uVar5 = (ulong)-(long)puVar1 >> 3;
            if (uVar8 <= (ulong)-(long)puVar1 >> 3) {
              uVar5 = uVar8;
            }
            puVar2 = puVar1;
            if ((9 < uVar5) && ((((int)param_3 - (int)param_2 | -(int)puVar1) & 7U) == 0)) {
              puVar3 = puVar1 + 2;
              uVar8 = uVar5 + 1 & 3;
              puVar7 = param_2 + 2;
              uVar9 = 4;
              if (uVar8 != 0) {
                uVar9 = uVar8;
              }
              lVar4 = (uVar5 + 1) - uVar9;
              param_2 = param_2 + lVar4;
              puVar2 = puVar1 + lVar4;
              do {
                puVar1 = puVar7 + -1;
                uVar13 = puVar7[-2];
                uVar15 = puVar7[1];
                uVar14 = *puVar7;
                lVar4 = lVar4 + -4;
                puVar7 = puVar7 + 4;
                puVar3[-1] = *puVar1;
                puVar3[-2] = uVar13;
                puVar3[1] = uVar15;
                *puVar3 = uVar14;
                puVar3 = puVar3 + 4;
              } while (lVar4 != 0);
            }
            do {
              if (puVar2 == (undefined8 *)0x0) {
LAB_00978474:
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                          );
              }
              puVar3 = param_2 + 1;
              puVar1 = puVar2 + 1;
              *puVar2 = *param_2;
              puVar2 = puVar1;
              param_2 = puVar3;
            } while (puVar3 != param_3);
          }
          param_1[1] = puVar1;
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_007dd938();
    }
    pvVar6 = (void *)param_1[1];
    uVar8 = (ulong)((long)pvVar6 + (-8 - ((long)pvVar6 << 0x3d))) >> 3;
    uVar5 = (ulong)(((long)__dest - (long)pvVar6 << 0x3d) - ((long)__dest - (long)pvVar6)) >> 3;
    if (uVar8 <= uVar5) {
      uVar5 = uVar8;
    }
    if ((1 < uVar5) && ((((int)__dest - (int)pvVar6 | -(int)pvVar6) & 7U) == 0)) {
      uVar5 = uVar5 & 0x1ffffffffffffffe;
      pvVar6 = (void *)((long)pvVar6 + uVar5 * -8);
      do {
        uVar5 = uVar5 - 2;
      } while (uVar5 != 0);
    }
    do {
      if (pvVar6 == __dest) {
        param_1[1] = __dest;
        operator_delete(__dest);
        uVar5 = 0;
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        goto LAB_0097836c;
      }
      pvVar6 = (void *)((long)pvVar6 + -8);
    } while (pvVar6 != (void *)0x0);
  }
  else {
    lVar12 = param_1[1];
    lVar4 = lVar12 - (long)__dest;
    if ((ulong)(lVar4 >> 3) < param_4) {
      puVar2 = (undefined8 *)((long)param_2 + lVar4);
      memmove(__dest,param_2,lVar12 - (long)__dest);
      puVar1 = (undefined8 *)param_1[1];
      if (puVar2 != param_3) {
        uVar8 = (((long)__dest + (long)param_3) - (lVar12 + (long)param_2)) - 8;
        uVar9 = uVar8 >> 3;
        uVar5 = (ulong)-(long)puVar1 >> 3;
        if (uVar9 <= (ulong)-(long)puVar1 >> 3) {
          uVar5 = uVar9;
        }
        puVar3 = puVar1;
        puVar7 = puVar1;
        if (0x31 < uVar5) {
          uVar10 = (ulong)-(long)puVar1 >> 3;
          if (uVar9 <= uVar10) {
            uVar10 = uVar9;
          }
          if (((((((uint)uVar8 | (uint)-(long)puVar1) & 7) == 0) && (puVar1 <= puVar1 + uVar10)) &&
              (puVar2 <= puVar2 + uVar10)) &&
             (0x1f < (ulong)(((long)__dest + (long)puVar1) - (lVar12 + (long)param_2)))) {
            uVar8 = uVar5 + 1 & 3;
            uVar9 = 4;
            if (uVar8 != 0) {
              uVar9 = uVar8;
            }
            lVar12 = (uVar5 + 1) - uVar9;
            param_2 = (undefined8 *)((long)param_2 + lVar4 + 0x10);
            puVar2 = puVar2 + lVar12;
            puVar3 = puVar1 + lVar12;
            puVar1 = puVar1 + 2;
            do {
              puVar7 = param_2 + -1;
              uVar13 = param_2[-2];
              uVar15 = param_2[1];
              uVar14 = *param_2;
              lVar12 = lVar12 + -4;
              param_2 = param_2 + 4;
              puVar1[-1] = *puVar7;
              puVar1[-2] = uVar13;
              puVar1[1] = uVar15;
              *puVar1 = uVar14;
              puVar1 = puVar1 + 4;
              puVar7 = puVar3;
            } while (lVar12 != 0);
          }
        }
        do {
          if (puVar7 == (undefined8 *)0x0) goto LAB_00978474;
          puVar11 = puVar2 + 1;
          puVar1 = puVar3 + 1;
          *puVar7 = *puVar2;
          puVar3 = puVar1;
          puVar7 = puVar7 + 1;
          puVar2 = puVar11;
        } while (puVar11 != param_3);
      }
      param_1[1] = puVar1;
      return;
    }
    memmove(__dest,param_2,(long)param_3 - (long)param_2);
    lVar4 = param_1[1];
    lVar12 = ((long)__dest + (long)param_3) - (lVar4 + (long)param_2);
    uVar5 = (ulong)((lVar12 << 0x3d) - lVar12) >> 3;
    uVar8 = (lVar4 - (lVar4 << 0x3d)) - 8U >> 3;
    if (uVar8 <= uVar5) {
      uVar5 = uVar8;
    }
    lVar12 = (long)__dest + ((long)param_3 - (long)param_2);
    if ((1 < uVar5) &&
       (((((int)__dest + (int)param_3) - ((int)lVar4 + (int)param_2) | -(int)lVar4) & 7U) == 0)) {
      uVar5 = uVar5 & 0x1ffffffffffffffe;
      lVar4 = lVar4 + uVar5 * -8;
      do {
        uVar5 = uVar5 - 2;
      } while (uVar5 != 0);
    }
    do {
      if (lVar4 == lVar12) {
        param_1[1] = lVar12;
        return;
      }
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0097848c  FUN_0097848c =====

void FUN_0097848c(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0096a354(param_2);
  *(undefined8 *)(param_1 + 2) = param_3;
  *(undefined8 *)(param_1 + 4) = param_4;
  *param_1 = uVar1;
  *(undefined8 *)(param_1 + 6) = param_5;
  *(undefined8 *)(param_1 + 8) = param_6;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined4 **)(param_1 + 10) = param_1 + 0xc;
  uVar2 = FUN_006258f0();
  FUN_00889c98(param_1 + 0x10,uVar2);
  return;
}


// ===== 00978500  FUN_00978500 =====

undefined8 FUN_00978500(int *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int local_4c;
  long *local_48;
  
  iVar6 = 0;
  if ((*(ulong *)(param_3 + 0xb8) & 0x100000000) != 0) {
    iVar6 = (int)*(ulong *)(param_3 + 0xb8);
  }
  iVar5 = 0;
  if ((*(ulong *)(param_3 + 0x9c) & 0x100000000) != 0) {
    iVar5 = (int)*(ulong *)(param_3 + 0x9c);
  }
  if (iVar6 <= iVar5) {
    iVar6 = iVar5;
  }
  local_4c = iVar6;
  if (*(int *)(param_3 + 0x18) == 3) {
    plVar7 = (long *)(param_1 + 10);
    piVar11 = param_1 + 0xc;
    piVar10 = *(int **)piVar11;
    if (*param_1 == 0) {
      for (; piVar10 != (int *)0x0; piVar10 = *(int **)piVar10) {
        while (piVar10[8] <= iVar6) {
          if (iVar6 == piVar10[8]) {
            if (piVar10 != piVar11) {
              piVar8 = piVar10;
              piVar3 = *(int **)(piVar10 + 2);
              if (*(int **)(piVar10 + 2) == (int *)0x0) {
                do {
                  piVar9 = *(int **)(piVar8 + 4);
                  bVar4 = piVar8 != *(int **)piVar9;
                  piVar8 = piVar9;
                } while (bVar4);
              }
              else {
                do {
                  piVar9 = piVar3;
                  piVar3 = *(int **)piVar9;
                } while (*(int **)piVar9 != (int *)0x0);
              }
              if ((int *)*plVar7 == piVar10) {
                *plVar7 = (long)piVar9;
              }
              *(long *)(param_1 + 0xe) = *(long *)(param_1 + 0xe) + -1;
              FUN_005d5d48(*(int **)piVar11,piVar10);
              if (piVar10 == (int *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                          );
              }
              operator_delete(piVar10);
            }
            goto LAB_00978580;
          }
          piVar10 = *(int **)(piVar10 + 2);
          if (piVar10 == (int *)0x0) goto LAB_00978580;
        }
      }
    }
    else {
      local_48 = plVar7;
      FUN_00977cb8(&local_48);
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      *(int **)(param_1 + 10) = piVar11;
    }
  }
LAB_00978580:
  plVar7 = (long *)FUN_007bcaf8(param_3);
  if (plVar7 == (long *)0x0) {
    plVar7 = (long *)(((ulong)(*(uint *)(param_3 + 0x98) >> 1) / 0x2d) * 1000);
  }
  FUN_007bf464(&local_48,param_2);
  iVar5 = (**(code **)(*local_48 + 0x28))();
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 8))();
  }
  piVar11 = param_1 + 0xc;
  piVar10 = *(int **)piVar11;
  lVar1 = 8;
  if (iVar5 != 8 && iVar5 != 1) {
    lVar1 = 0x18;
  }
  for (; piVar8 = piVar11, piVar10 != (int *)0x0; piVar10 = *(int **)piVar10) {
    while (piVar10[8] <= iVar6) {
      if (iVar6 == piVar10[8]) {
        piVar8 = piVar10;
        if ((piVar10 != piVar11) && ((long)plVar7 < *(long *)(piVar10 + 10))) {
          return 0;
        }
        goto LAB_00978634;
      }
      piVar10 = *(int **)(piVar10 + 2);
      if (piVar10 == (int *)0x0) goto LAB_00978634;
    }
  }
LAB_00978634:
  iVar6 = FUN_00889ce0(param_1 + 0x10,*(undefined4 *)((long)param_1 + lVar1),
                       ((undefined4 *)((long)param_1 + lVar1))[2]);
  plVar2 = plVar7;
  if (plVar7 != (long *)0x8000000000000000) {
    plVar2 = (long *)((long)plVar7 + (long)iVar6);
  }
  local_48 = plVar7;
  if (plVar7 != (long *)0x7fffffffffffffff) {
    local_48 = plVar2;
  }
  if (piVar8 == piVar11) {
    FUN_00978788(0,param_1 + 10,param_1 + 10,&local_4c,&local_48);
  }
  else {
    *(long **)(piVar8 + 10) = local_48;
  }
  return 1;
}


// ===== 00978788  FUN_00978788 =====

undefined1  [16]
FUN_00978788(undefined8 param_1,long *param_2,undefined8 param_3,int *param_4,long *param_5)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  plVar4 = param_2 + 1;
  plVar7 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    plVar2 = (long *)*plVar4;
    do {
      while (plVar3 = plVar2, plVar4 = plVar3, *param_4 < (int)plVar3[4]) {
        plVar2 = (long *)*plVar3;
        plVar7 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_009787f4;
      }
      if (*param_4 == (int)plVar3[4]) {
        uVar5 = 0;
        goto LAB_00978868;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar7 = plVar3 + 1;
  }
LAB_009787f4:
  plVar3 = (long *)operator_new(0x30);
  if ((plVar3 == (long *)0x0) || (*plVar3 = 0, plVar3 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  iVar1 = *param_4;
  lVar6 = *param_5;
  *plVar3 = 0;
  plVar3[1] = 0;
  *(int *)(plVar3 + 4) = iVar1;
  plVar3[5] = lVar6;
  plVar3[2] = (long)plVar4;
  *plVar7 = (long)plVar3;
  plVar4 = plVar3;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar4 = (long *)*plVar7;
  }
  FUN_005d5b94(param_2[1],plVar4);
  uVar5 = 1;
  param_2[2] = param_2[2] + 1;
LAB_00978868:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = plVar3;
  return auVar8;
}


// ===== 00978898  FUN_00978898 =====

undefined1  [16] FUN_00978898(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  
  if (param_2 < 3) {
    if (param_2 != 1) {
      if (param_2 != 2) {
LAB_00978a80:
        uVar5 = FUN_007b8c54(param_2);
                    /* WARNING: Subroutine does not return */
        FUN_0061fd88("../../video/corruption_detection/generic_mapping_functions.cc",0x55,"FATAL()",
                     &DAT_00223ee6,"Codec type ",uVar5," is not supported.");
      }
      dVar7 = 0.3 - (double)param_1 / ((double)param_1 + -257.0);
      goto LAB_009789cc;
    }
    dVar7 = exp((double)param_1 * DAT_001f5670 + DAT_001f5388);
    dVar6 = DAT_001f5570;
  }
  else {
    if (param_2 == 3) {
      dVar7 = ((double)param_1 * DAT_001f52b8) / ((double)param_1 + -256.0) + DAT_001f5520;
      goto LAB_009789cc;
    }
    if (param_2 != 4) {
      if (param_2 != 5) goto LAB_00978a80;
      dVar7 = ((double)param_1 * DAT_001f57b0) / ((double)param_1 + -52.0) + DAT_001f5930;
      goto LAB_009789cc;
    }
    dVar7 = exp((double)param_1 * DAT_001f5568 + DAT_001f5ca0);
    dVar6 = DAT_001f56d0;
  }
  dVar7 = dVar7 * dVar6;
LAB_009789cc:
  bVar1 = false;
  bVar2 = false;
  bVar3 = false;
  if (0.0 <= dVar7) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(dVar7)) {
      bVar1 = dVar7 < 40.0;
      bVar2 = dVar7 == 40.0;
      bVar3 = false;
    }
  }
  if (!bVar2 && bVar1 == bVar3) {
    uVar4 = FUN_0044075c();
    if ((uVar4 & 1) == 0) {
      uVar5 = FUN_007b8c54(param_2);
      FUN_00623bb0(dVar7,&DAT_0022a158,
                   "../../video/corruption_detection/generic_mapping_functions.cc",0x2c8,
                   "Generic frame instrumentation settings generated incorrect std_dev value for codec "
                   ,uVar5," and QP ",param_1,&DAT_001c4dc3,". Capping to legal bound [0, 40]");
    }
    dVar6 = 0.0;
    if (0.0 <= dVar7) {
      dVar6 = dVar7;
    }
    dVar7 = 40.0;
    if (dVar6 == 40.0 || dVar6 < 40.0 != NAN(dVar6)) {
      dVar7 = dVar6;
    }
  }
  auVar8._8_8_ = *(undefined8 *)(&DAT_0022a160 + (long)param_2 * 8);
  auVar8._0_8_ = dVar7;
  return auVar8;
}


// ===== 00978abc  FUN_00978abc =====

int FUN_00978abc(long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if ((*(ulong *)(param_1 + 0xb8) & 0x100000000) != 0) {
    iVar1 = (int)*(ulong *)(param_1 + 0xb8);
  }
  iVar2 = 0;
  if ((*(ulong *)(param_1 + 0x9c) & 0x100000000) != 0) {
    iVar2 = (int)*(ulong *)(param_1 + 0x9c);
  }
  if (iVar1 <= iVar2) {
    iVar1 = iVar2;
  }
  return iVar1;
}


// ===== 00978ae4  FUN_00978ae4 =====

void FUN_00978ae4(undefined1 *param_1,long *param_2)

{
  undefined1 **ppuVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *local_220;
  ulong uStack_218;
  byte bStack_209;
  undefined1 **local_208;
  undefined ***pppuStack_200;
  undefined ***local_1f8;
  undefined ***pppuStack_1f0;
  undefined ***local_1e8;
  undefined **local_1e0;
  undefined1 *puStack_1d8;
  undefined1 *puStack_1d0;
  undefined1 *puStack_1c8;
  undefined1 *local_1c0;
  undefined1 *puStack_1b8;
  undefined1 *puStack_1b0;
  undefined1 *puStack_1a8;
  undefined1 *local_1a0;
  undefined **local_190;
  undefined1 *puStack_188;
  undefined1 *puStack_180;
  undefined1 *puStack_178;
  undefined1 *local_170;
  undefined1 *puStack_168;
  undefined1 *puStack_160;
  undefined1 *puStack_158;
  undefined1 *local_150;
  undefined **local_140;
  undefined1 *puStack_138;
  undefined1 *puStack_130;
  undefined1 *puStack_128;
  undefined1 *local_120;
  undefined1 *puStack_118;
  undefined1 *puStack_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined **local_f0;
  undefined1 *puStack_e8;
  undefined1 *puStack_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00661054(&local_a0,"enabled",7);
  uStack_68._0_2_ = (ushort)(byte)uStack_68;
  local_a0 = PTR_DAT_00d52090 + 0x10;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_f0 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00661054(&local_f0,"low_overhead_lower_bound",0x18);
  local_f0 = &PTR_FUN_00d267f8;
  local_b0 = (undefined1 *)0x3e8;
  local_100 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
  local_140 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
  puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
  local_120 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_110 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00661054(&local_140,"low_overhead_upper_bound",0x18);
  local_140 = &PTR_FUN_00d267f8;
  local_100 = (undefined1 *)0x7a120;
  local_150 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
  local_190 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
  puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_180 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
  local_170 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_160 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00661054(&local_190,"high_overhead_lower_bound",0x19);
  local_190 = &PTR_FUN_00d267f8;
  local_150 = (undefined1 *)0x80e8;
  local_1a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1e0 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
  puStack_1c8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1b0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00661054(&local_1e0,"high_overhead_upper_bound",0x19);
  local_1e0 = &PTR_FUN_00d267f8;
  local_1a0 = (undefined1 *)0x4c4b40;
  local_208 = &local_a0;
  pppuStack_200 = &local_f0;
  local_1f8 = &local_140;
  pppuStack_1f0 = &local_190;
  local_1e8 = &local_1e0;
  (**(code **)(*param_2 + 0x10))(&local_220,param_2,"WebRTC-CorruptionDetectionFrameSelector",0x27);
  ppuVar1 = (undefined1 **)local_220;
  if (-1 < (char)bStack_209) {
    uStack_218 = (ulong)bStack_209;
    ppuVar1 = &local_220;
  }
  FUN_00661cc0(&local_208,5,ppuVar1,uStack_218);
  if ((char)bStack_209 < '\0') {
    operator_delete(local_220);
  }
  *param_1 = uStack_68._1_1_;
  *(undefined1 **)(param_1 + 8) = local_b0;
  *(undefined1 **)(param_1 + 0x10) = local_100;
  *(undefined1 **)(param_1 + 0x18) = local_150;
  *(undefined1 **)(param_1 + 0x20) = local_1a0;
  puVar3 = local_150;
  puVar4 = local_1a0;
  if ((long)local_100 < (long)local_b0) {
    uVar2 = FUN_004022fc();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,
                   "../../rtc_base/experiments/corruption_detection_frame_selector_settings.cc",
                   0x192,
                   "WebRTC-CorruptionDetectionFrameSelector low_overhead_lower_bound must be <= low_overhead_upper_bound. Disabling experiment."
                  );
    }
    puVar3 = *(undefined1 **)(param_1 + 0x18);
    puVar4 = *(undefined1 **)(param_1 + 0x20);
    *param_1 = 0;
  }
  if ((long)puVar4 < (long)puVar3) {
    uVar2 = FUN_004022fc();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,
                   "../../rtc_base/experiments/corruption_detection_frame_selector_settings.cc",
                   0x1c2,
                   "WebRTC-CorruptionDetectionFrameSelector high_overhead_lower_bound must be <= high_overhead_upper_bound. Disabling experiment."
                  );
    }
    *param_1 = 0;
  }
  FUN_006634ac(&local_1e0);
  FUN_006634ac(&local_190);
  FUN_006634ac(&local_140);
  FUN_006634ac(&local_f0);
  FUN_006634ac(&local_a0);
  return;
}


// ===== 00978d78  FUN_00978d78 =====

undefined8 FUN_00978d78(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


// ===== 00978d84  FUN_00978d84 =====

undefined8 FUN_00978d84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


// ===== 00978d90  FUN_00978d90 =====

undefined8 FUN_00978d90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


// ===== 00978d9c  FUN_00978d9c =====

undefined8 FUN_00978d9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


// ===== 00978da8  FUN_00978da8 =====

int FUN_00978da8(undefined8 *param_1,long *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *local_8;
  
  *param_1 = &PTR_FUN_00d3f068;
  puVar2 = (undefined8 *)*param_2;
  param_1[1] = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)();
  }
  local_8 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_8);
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 2),(pthread_mutexattr_t *)&local_8);
  iVar1 = pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_8);
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  return iVar1;
}


// ===== 00978e20  FUN_00978e20 =====

void FUN_00978e20(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[8];
  *param_1 = &PTR_FUN_00d3f068;
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
        if ((long *)*plVar2 != (long *)0x0) {
          (**(code **)(*(long *)*plVar2 + 8))();
        }
      } while (plVar2 != plVar3);
      plVar1 = (long *)param_1[8];
    }
    param_1[9] = plVar3;
    operator_delete(plVar1);
  }
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 2));
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  FUN_0097993c(param_1);
  return;
}


// ===== 00978ee8  FUN_00978ee8 =====

void FUN_00978ee8(void *param_1)

{
  FUN_00978e20();
  operator_delete(param_1);
  return;
}


// ===== 00978f18  FUN_00978f18 =====

int FUN_00978f18(long param_1)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x10));
  (**(code **)(**(long **)(param_1 + 8) + 0x28))(*(long **)(param_1 + 8),param_1);
  *(undefined1 *)(param_1 + 0x38) = 1;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x10));
  return iVar1;
}


// ===== 00978f64  FUN_00978f64 =====

int FUN_00978f64(long param_1)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x10));
  (**(code **)(**(long **)(param_1 + 8) + 0x28))(*(long **)(param_1 + 8),0);
  *(undefined1 *)(param_1 + 0x38) = 0;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x10));
  return iVar1;
}


// ===== 00978fac  FUN_00978fac =====

int FUN_00978fac(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  void *local_68 [2];
  char cStack_51;
  undefined8 **local_50;
  ulong uStack_48;
  ulong local_40;
  undefined8 *local_38;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x10));
  (**(code **)(**(long **)(param_2 + 8) + 0x20))(local_68);
  plVar4 = (long *)FUN_00547cac(local_68,"Adapter",7);
  uStack_48 = plVar4[1];
  local_50 = (undefined8 **)*plVar4;
  local_40 = plVar4[2];
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = 0;
  puVar5 = (undefined8 *)operator_new(0x58);
  uVar1 = uStack_48;
  pppuVar2 = (undefined8 ***)local_50;
  if (-1 < (long)local_40) {
    uVar1 = local_40 >> 0x38;
    pppuVar2 = &local_50;
  }
  FUN_00979638(puVar5,pppuVar2,uVar1);
  *(undefined4 *)(puVar5 + 10) = 0;
  *puVar5 = &PTR_FUN_00d3f090;
  local_38 = puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    FUN_00d0f740(1,puVar5 + 10);
  }
  if ((long)local_40 < 0) {
    operator_delete(local_50);
  }
  if (cStack_51 < '\0') {
    operator_delete(local_68[0]);
  }
  puVar6 = *(undefined8 **)(param_2 + 0x48);
  if (puVar6 < *(undefined8 **)(param_2 + 0x50)) {
    if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *puVar6 = puVar5;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5);
    }
    puVar6 = puVar6 + 1;
  }
  else {
    puVar6 = (undefined8 *)FUN_0097937c(param_2 + 0x40,&local_38);
  }
  *(undefined8 **)(param_2 + 0x48) = puVar6;
  *param_1 = local_38;
  iVar3 = pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x10));
  return iVar3;
}


// ===== 0097911c  FUN_0097911c =====

int FUN_0097911c(long param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x10));
  plVar7 = *(long **)(param_1 + 0x40);
  plVar8 = *(long **)(param_1 + 0x48);
  if (plVar7 != plVar8) {
    uVar5 = (long)plVar8 + (-8 - (long)plVar7);
    lVar3 = *param_2;
    uVar4 = (uint)uVar5;
    if ((~uVar4 & 0x18) != 0) {
      uVar6 = (ulong)((uVar4 >> 3) + 1) & 3;
      do {
        if (*plVar7 == lVar3) goto LAB_009791fc;
        uVar6 = uVar6 - 1;
        plVar7 = plVar7 + 1;
      } while (uVar6 != 0);
    }
    if (0x17 < uVar5) {
      plVar7 = plVar7 + 2;
      do {
        if (plVar7[-2] == lVar3) {
          plVar7 = plVar7 + -2;
          goto LAB_009791fc;
        }
        if (plVar7[-1] == lVar3) {
          plVar7 = plVar7 + -1;
          goto LAB_009791fc;
        }
        if (*plVar7 == lVar3) goto LAB_009791fc;
        if (plVar7[1] == lVar3) {
          plVar7 = plVar7 + 1;
          goto LAB_009791fc;
        }
        plVar1 = plVar7 + 2;
        plVar7 = plVar7 + 4;
      } while (plVar1 != plVar8);
    }
LAB_009791d4:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:1160: libc++ Hardening assertion __position != end() failed: vector::erase(iterator) called with a non-dereferenceable iterator\n"
              );
  }
LAB_009791fc:
  if (plVar7 == plVar8) goto LAB_009791d4;
  plVar1 = plVar7 + 1;
  if (plVar7 + 1 == plVar8) {
    if (plVar7 == plVar8) goto LAB_00979284;
  }
  else {
    do {
      plVar7 = plVar1;
      plVar1 = (long *)plVar7[-1];
      plVar7[-1] = *plVar7;
      *plVar7 = 0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plVar7 + 1;
    } while (plVar7 + 1 != plVar8);
    plVar8 = *(long **)(param_1 + 0x48);
    if (plVar7 == plVar8) goto LAB_00979284;
  }
  do {
    plVar8 = plVar8 + -1;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    if ((long *)*plVar8 != (long *)0x0) {
      (**(code **)(*(long *)*plVar8 + 8))();
    }
  } while (plVar8 != plVar7);
LAB_00979284:
  *(long **)(param_1 + 0x48) = plVar7;
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x10));
  return iVar2;
}


// ===== 009792b4  FUN_009792b4 =====

int FUN_009792b4(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *local_48;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x10));
  puVar1 = *(undefined8 **)(param_1 + 0x48);
  for (puVar5 = *(undefined8 **)(param_1 + 0x40); puVar5 != puVar1; puVar5 = puVar5 + 1) {
    plVar3 = (long *)*puVar5;
    pthread_mutex_lock((pthread_mutex_t *)(plVar3 + 4));
    plVar4 = (long *)plVar3[9];
    if (plVar4 != (long *)0x0) {
      local_48 = plVar3;
      if (plVar3 != (long *)0x0) {
        (**(code **)*plVar3)(plVar3);
      }
      (**(code **)(*plVar4 + 0x10))(plVar4,&local_48,param_3);
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 8))();
      }
    }
    pthread_mutex_unlock((pthread_mutex_t *)(plVar3 + 4));
  }
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x10));
  return iVar2;
}


// ===== 0097937c  FUN_0097937c =====

long * FUN_0097937c(long *param_1,long *param_2)

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
      if (uVar8 >> 0x3d != 0) goto LAB_0097961c;
      pvVar4 = operator_new(uVar8 << 3);
      plVar2 = (long *)((long)pvVar4 + (long)plVar15);
    }
    if (plVar2 == (long *)0x0) {
LAB_009795f0:
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
        if (plVar9 == (long *)0x0) goto LAB_009795f0;
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
  FUN_00979620();
LAB_0097961c:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 00979620  FUN_00979620 =====

void FUN_00979620(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00979638  FUN_00979638 =====

int FUN_00979638(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 *__dest;
  undefined1 *local_28;
  
  FUN_00979944();
  __dest = param_1 + 1;
  *param_1 = &PTR_FUN_00d3f0d8;
  if (0x7ffffffffffffff6 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_3 < 0x17) {
    *(char *)((long)param_1 + 0x1f) = (char)param_3;
  }
  else {
    uVar1 = (param_3 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (undefined8 *)operator_new(uVar2);
    param_1[1] = __dest;
    param_1[2] = param_3;
    param_1[3] = uVar2 | 0x8000000000000000;
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
    local_28 = &DAT_aaaaaaaaaaaaaaaa;
    pthread_mutexattr_init((pthread_mutexattr_t *)&local_28);
    pthread_mutex_init((pthread_mutex_t *)(param_1 + 4),(pthread_mutexattr_t *)&local_28);
    iVar3 = pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_28);
    param_1[9] = 0;
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 00979758  FUN_00979758 =====

void FUN_00979758(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x50);
  return;
}


// ===== 0097977c  FUN_0097977c =====

bool FUN_0097977c(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 10);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 009797d4  FUN_009797d4 =====

void FUN_009797d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3f0d8;
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 4));
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete((void *)param_1[1]);
  }
  FUN_00979958(param_1);
  return;
}


// ===== 00979824  FUN_00979824 =====

void FUN_00979824(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3f0d8;
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 4));
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete((void *)param_1[1]);
  }
  FUN_00979958(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00979880  FUN_00979880 =====

void FUN_00979880(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (-1 < *(char *)(param_2 + 0x1f)) {
    uVar2 = *(undefined8 *)(param_2 + 8);
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    param_1[1] = *(undefined8 *)(param_2 + 0x10);
    *param_1 = uVar2;
    param_1[2] = uVar1;
    return;
  }
  FUN_005478d8(param_1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  return;
}


// ===== 009798ac  FUN_009798ac =====

int FUN_009798ac(long param_1,undefined8 param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x48) = param_2;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x20));
  return iVar1;
}


// ===== 009798e4  FUN_009798e4 =====

bool FUN_009798e4(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x50) == 1;
}


// ===== 009798fc  FUN_009798fc =====

void FUN_009798fc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x979904);
  (*pcVar1)();
}


// ===== 00979904  FUN_00979904 =====

char * FUN_00979904(int param_1)

{
  if (param_1 == 0) {
    return "kOveruse";
  }
  if (param_1 == 1) {
    return "kUnderuse";
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061ff28();
}


// ===== 0097993c  FUN_0097993c =====

void FUN_0097993c(void)

{
  return;
}


// ===== 00979944  FUN_00979944 =====

void FUN_00979944(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3f118;
  return;
}


// ===== 00979958  FUN_00979958 =====

void FUN_00979958(void)

{
  return;
}


// ===== 00979960  FUN_00979960 =====

void FUN_00979960(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x979968);
  (*pcVar1)();
}


// ===== 00979968  FUN_00979968 =====

void FUN_00979968(void)

{
  return;
}


// ===== 00979970  FUN_00979970 =====

void FUN_00979970(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_007b9554();
  FUN_008495b4(param_1 + 0x110,param_3);
  FUN_009799bc(param_1 + 0x1e0,param_4);
  return;
}


// ===== 009799bc  FUN_009799bc =====

void FUN_009799bc(undefined8 *param_1,undefined8 *param_2)

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
    FUN_007b6ad4(param_1 + 10,param_2 + 10);
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
    FUN_007b6ad4(param_1 + 0x1e,param_2 + 0x1e);
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
    FUN_007b6ad4(param_1 + 0x32,param_2 + 0x32);
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
    FUN_007b6ad4(param_1 + 0x46,param_2 + 0x46);
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
    FUN_007b6ad4(param_1 + 0x5a,param_2 + 0x5a);
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
    FUN_007b6ad4(param_1 + 0x6e,param_2 + 0x6e);
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
    FUN_007b6ad4(param_1 + 0x82,param_2 + 0x82);
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
    FUN_007b6ad4(param_1 + 0x96,param_2 + 0x96);
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


// ===== 00979c88  FUN_00979c88 =====

void FUN_00979c88(long param_1,long param_2)

{
  FUN_007b9554();
  FUN_00849b38(param_1 + 0x110,param_2 + 0x110);
  FUN_008a00d8(param_1 + 0x1e0,param_2 + 0x1e0);
  return;
}


// ===== 00979cc8  FUN_00979cc8 =====

long FUN_00979cc8(long param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_108 [208];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_009609cc();
  FUN_00849b38(auStack_108,param_2 + 0x110);
  FUN_00469824(param_1 + 0x110,auStack_108);
  FUN_0084966c(auStack_108);
  FUN_0095d0a0(param_1 + 0x1e0,param_2 + 0x1e0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00979d54  FUN_00979d54 =====

void FUN_00979d54(void)

{
  return;
}


// ===== 00979d5c  FUN_00979d5c =====

long FUN_00979d5c(long param_1)

{
  return param_1 + 0x110;
}


// ===== 00979d68  FUN_00979d68 =====

long FUN_00979d68(long param_1)

{
  return param_1 + 0x1e0;
}


// ===== 00979d74  FUN_00979d74 =====

undefined4 FUN_00979d74(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x110);
  if (*(char *)(param_1 + 0x740) == '\0') {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 00979d8c  FUN_00979d8c =====

void FUN_00979d8c(undefined8 *param_1,long *param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *local_60;
  undefined1 uStack_52;
  undefined1 uStack_51;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  
  lVar2 = param_1[2];
  lVar1 = FUN_005d6490();
  if (lVar1 == lVar2) {
    plVar3 = (long *)param_1[3];
    if (plVar3 != (long *)0x0) {
      local_60 = (long *)*param_2;
      if (local_60 != (long *)0x0) {
        (**(code **)*local_60)();
      }
      (**(code **)(*plVar3 + 0x38))(plVar3,&local_60,param_3);
      if (local_60 != (long *)0x0) {
        (**(code **)(*local_60 + 8))();
      }
    }
  }
  else {
    plVar3 = (long *)param_1[2];
    if (param_1 != (undefined8 *)0x0) {
      (**(code **)*param_1)(param_1);
    }
    puVar4 = (undefined8 *)*param_2;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4);
    }
    local_50[0] = (long *)operator_new(0x18);
    *local_50[0] = (long)param_1;
    local_50[0][1] = (long)puVar4;
    *(undefined4 *)(local_50[0] + 2) = param_3;
    local_40 = FUN_0097c0d4;
    pcStack_38 = FUN_0097c064;
    (**(code **)(*plVar3 + 8))(plVar3,local_50,&uStack_51,&uStack_52);
    (*local_40)(0,local_50,local_50);
  }
  return;
}


// ===== 00979eb0  FUN_00979eb0 =====

void FUN_00979eb0(long param_1)

{
  FUN_00979d8c(param_1 + -8);
  return;
}


// ===== 00979ebc  FUN_00979ebc =====

void FUN_00979ebc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *local_38;
  
  *param_1 = &PTR_FUN_00d3f158;
  param_1[2] = &PTR_FUN_00d3f1d8;
  param_1[1] = &PTR_FUN_00d3f1b0;
  uVar1 = FUN_005d6490();
  param_1[3] = uVar1;
  puVar2 = (undefined8 *)operator_new(0x28);
  uVar1 = FUN_005d6490();
  puVar2[2] = uVar1;
  puVar2[3] = param_1;
  *(undefined4 *)(puVar2 + 4) = 0;
  *puVar2 = &PTR_FUN_00d3f200;
  puVar2[1] = &PTR_thunk_FUN_0097993c_00d3f240;
  param_1[4] = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d0f740(1,puVar2 + 4);
  }
  local_38 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_38);
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 5),(pthread_mutexattr_t *)&local_38);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_38);
  param_1[0x11] = 0;
  param_1[0x10] = param_1 + 0x11;
  param_1[0x12] = 0;
  param_1[0x13] = param_2;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  FUN_0097c98c(param_1 + 0x14);
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1a] = param_1 + 0x1b;
  FUN_0097d1c8(param_1[0x13],param_1 + 1);
  return;
}


// ===== 00979fb8  FUN_00979fb8 =====

void FUN_00979fb8(undefined8 *param_1)

{
  void *pvVar1;
  long *plVar2;
  void *pvVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *local_28;
  
  *param_1 = &PTR_FUN_00d3f158;
  puVar7 = param_1 + 1;
  *puVar7 = &PTR_FUN_00d3f1b0;
  param_1[2] = &PTR_FUN_00d3f1d8;
  FUN_0097d230(param_1[0x13],puVar7);
  *(undefined8 *)(param_1[4] + 0x18) = 0;
  local_28 = param_1 + 0x1a;
  FUN_0097c2f8(&local_28,param_1[0x1b]);
  local_28 = param_1 + 0x10;
  FUN_0097c268(&local_28,param_1[0x11]);
  pvVar1 = (void *)param_1[0xd];
  if (pvVar1 == (void *)0x0) {
LAB_0097a0c4:
    plVar8 = (long *)param_1[10];
    if (plVar8 != (long *)0x0) {
      plVar4 = (long *)param_1[0xb];
      plVar2 = plVar8;
      if (plVar8 != plVar4) {
        do {
          plVar4 = plVar4 + -1;
          if (plVar4 == (long *)0x0) goto LAB_0097a0a0;
          if ((long *)*plVar4 != (long *)0x0) {
            (**(code **)(*(long *)*plVar4 + 8))();
          }
        } while (plVar4 != plVar8);
        plVar2 = (long *)param_1[10];
      }
      param_1[0xb] = plVar8;
      operator_delete(plVar2);
    }
    pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 5));
    if ((long *)param_1[4] != (long *)0x0) {
      (**(code **)(*(long *)param_1[4] + 8))();
    }
    FUN_0097993c(param_1 + 2);
    FUN_0097cc6c(puVar7);
    FUN_0097c97c(param_1);
    return;
  }
  pvVar3 = (void *)param_1[0xe];
  uVar6 = (ulong)((long)pvVar3 + (-8 - ((long)pvVar3 << 0x3d))) >> 3;
  uVar5 = (ulong)(((long)pvVar1 - (long)pvVar3 << 0x3d) - ((long)pvVar1 - (long)pvVar3)) >> 3;
  if (uVar6 <= uVar5) {
    uVar5 = uVar6;
  }
  if ((1 < uVar5) && ((((int)pvVar1 - (int)pvVar3 | -(int)pvVar3) & 7U) == 0)) {
    uVar5 = uVar5 & 0x1ffffffffffffffe;
    pvVar3 = (void *)((long)pvVar3 + uVar5 * -8);
    do {
      uVar5 = uVar5 - 2;
    } while (uVar5 != 0);
  }
  do {
    if (pvVar3 == pvVar1) {
      param_1[0xe] = pvVar1;
      operator_delete(pvVar1);
      goto LAB_0097a0c4;
    }
    pvVar3 = (void *)((long)pvVar3 + -8);
  } while (pvVar3 != (void *)0x0);
LAB_0097a0a0:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0097a16c  FUN_0097a16c =====

void FUN_0097a16c(long param_1)

{
  FUN_00979fb8(param_1 + -8);
  return;
}


// ===== 0097a178  FUN_0097a178 =====

void FUN_0097a178(long param_1)

{
  FUN_00979fb8(param_1 + -0x10);
  return;
}


// ===== 0097a184  FUN_0097a184 =====

void FUN_0097a184(void *param_1)

{
  FUN_00979fb8();
  operator_delete(param_1);
  return;
}


// ===== 0097a1b4  FUN_0097a1b4 =====

void FUN_0097a1b4(long param_1)

{
  FUN_00979fb8((void *)(param_1 + -8));
  operator_delete((void *)(param_1 + -8));
  return;
}


// ===== 0097a1e8  FUN_0097a1e8 =====

void FUN_0097a1e8(long param_1)

{
  FUN_00979fb8((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}


// ===== 0097a21c  FUN_0097a21c =====

void FUN_0097a21c(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_8;
  
  puVar1 = *(undefined8 **)(param_1 + 0x70);
  local_8 = param_2;
  if (puVar1 < *(undefined8 **)(param_1 + 0x78)) {
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar2 = puVar1 + 1;
    *puVar1 = param_2;
  }
  else {
    puVar2 = (undefined8 *)FUN_0097bf58(param_1 + 0x68,&local_8);
  }
  *(undefined8 **)(param_1 + 0x70) = puVar2;
  return;
}


// ===== 0097a284  FUN_0097a284 =====

void FUN_0097a284(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  
  plVar2 = *(long **)(param_1 + 0x68);
  plVar6 = *(long **)(param_1 + 0x70);
  if (plVar2 == plVar6) {
LAB_0097a354:
    if (plVar2 != plVar6) {
      memmove(plVar2,plVar2 + 1,(long)plVar6 - (long)(plVar2 + 1));
      plVar2 = *(long **)(param_1 + 0x70);
      uVar5 = (ulong)((long)plVar2 + (-8 - ((long)plVar2 << 0x3d))) >> 3;
      uVar4 = (((long)plVar6 - (long)plVar2 << 0x3d) - ((long)plVar6 - (long)plVar2)) + 8U >> 3;
      if (uVar5 <= uVar4) {
        uVar4 = uVar5;
      }
      if ((1 < uVar4) && ((-(int)plVar2 & 7U) == 0)) {
        uVar4 = uVar4 & 0x1ffffffffffffffe;
        plVar2 = plVar2 + -uVar4;
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      do {
        if (plVar2 == plVar6 + -1) {
          *(long **)(param_1 + 0x70) = plVar6 + -1;
          return;
        }
        plVar2 = plVar2 + -1;
      } while (plVar2 != (long *)0x0);
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
  }
  else {
    uVar4 = (long)plVar6 + (-8 - (long)plVar2);
    uVar3 = (uint)uVar4;
    if ((~uVar3 & 0x18) != 0) {
      uVar5 = (ulong)((uVar3 >> 3) + 1) & 3;
      do {
        if (*plVar2 == param_2) goto LAB_0097a354;
        uVar5 = uVar5 - 1;
        plVar2 = plVar2 + 1;
      } while (uVar5 != 0);
    }
    if (0x17 < uVar4) {
      plVar2 = plVar2 + 2;
      do {
        if (plVar2[-2] == param_2) {
          plVar2 = plVar2 + -2;
          goto LAB_0097a354;
        }
        if (plVar2[-1] == param_2) {
          plVar2 = plVar2 + -1;
          goto LAB_0097a354;
        }
        if (*plVar2 == param_2) goto LAB_0097a354;
        if (plVar2[1] == param_2) {
          plVar2 = plVar2 + 1;
          goto LAB_0097a354;
        }
        plVar1 = plVar2 + 2;
        plVar2 = plVar2 + 4;
      } while (plVar1 != plVar6);
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:1160: libc++ Hardening assertion __position != end() failed: vector::erase(iterator) called with a non-dereferenceable iterator\n"
            );
}


// ===== 0097a3f4  FUN_0097a3f4 =====

void FUN_0097a3f4(long param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  void *local_48 [2];
  char cStack_31;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x28));
  plVar4 = *(long **)(param_1 + 0x58);
  if (plVar4 < *(long **)(param_1 + 0x60)) {
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar2 = (undefined8 *)*param_2;
    *plVar4 = (long)puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)();
    }
    plVar4 = plVar4 + 1;
  }
  else {
    plVar4 = (long *)FUN_00963814(param_1 + 0x50,param_2);
  }
  *(long **)(param_1 + 0x58) = plVar4;
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x28));
  lVar1 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar1 = *(long *)(param_1 + 0x20) + 8;
  }
  (**(code **)(*(long *)*param_2 + 0x28))((long *)*param_2,lVar1);
  uVar3 = FUN_00417e08();
  if ((uVar3 & 1) == 0) {
    (**(code **)(*(long *)*param_2 + 0x20))(local_48);
    FUN_00623bb0(&DAT_001f4eff,"../../call/adaptation/resource_adaptation_processor.cc",0x401,
                 "Registered resource \"",local_48,&DAT_001e2244);
    if (cStack_31 < '\0') {
      operator_delete(local_48[0]);
    }
  }
  return;
}


// ===== 0097a510  FUN_0097a510 =====

ulong FUN_0097a510(undefined8 *param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  void *apvStack_98 [2];
  char cStack_81;
  undefined1 *puStack_80;
  code *pcStack_78;
  long *plStack_70;
  long *plStack_68;
  ulong uStack_60;
  
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x28));
  plVar11 = *(long **)(param_2 + 0x50);
  plVar8 = *(long **)(param_2 + 0x58);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar7 = (long)plVar8 - (long)plVar11;
  if (uVar7 == 0) {
LAB_0097a5a0:
    uVar3 = pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x28));
    return (ulong)uVar3;
  }
  if (-1 < (long)uVar7) {
    plVar4 = (long *)operator_new(uVar7);
    *param_1 = plVar4;
    param_1[2] = (long)plVar4 + uVar7;
    do {
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar5 = (undefined8 *)*plVar11;
      *plVar4 = (long)puVar5;
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)();
      }
      plVar11 = plVar11 + 1;
      plVar4 = plVar4 + 1;
    } while (plVar11 != plVar8);
    param_1[1] = plVar4;
    goto LAB_0097a5a0;
  }
  auVar12 = FUN_00963ab8(iVar2);
  plVar8 = auVar12._8_8_;
  lVar6 = auVar12._0_8_;
  pcStack_78 = FUN_0097a5d4;
  puStack_80 = &stack0xffffffffffffffc0;
  plStack_70 = plVar11;
  uStack_60 = uVar7;
  uVar7 = FUN_00417e08();
  if ((uVar7 & 1) == 0) {
    (**(code **)(*(long *)*plVar8 + 0x20))(apvStack_98);
    FUN_00623bb0(&DAT_001f4eff,"../../call/adaptation/resource_adaptation_processor.cc",0x461,
                 "Removing resource \"",apvStack_98,&DAT_001e2244);
    if (cStack_81 < '\0') {
      operator_delete(apvStack_98[0]);
    }
  }
  (**(code **)(*(long *)*plVar8 + 0x28))((long *)*plVar8,0);
  pthread_mutex_lock((pthread_mutex_t *)(lVar6 + 0x28));
  plVar11 = *(long **)(lVar6 + 0x50);
  plVar4 = *(long **)(lVar6 + 0x58);
  if (plVar11 != plVar4) {
    uVar7 = (long)plVar4 + (-8 - (long)plVar11);
    lVar9 = *plVar8;
    uVar3 = (uint)uVar7;
    if ((~uVar3 & 0x18) != 0) {
      uVar10 = (ulong)((uVar3 >> 3) + 1) & 3;
      do {
        if (*plVar11 == lVar9) goto LAB_0097a730;
        uVar10 = uVar10 - 1;
        plVar11 = plVar11 + 1;
      } while (uVar10 != 0);
    }
    if (0x17 < uVar7) {
      plVar11 = plVar11 + 2;
      do {
        if (plVar11[-2] == lVar9) {
          plVar11 = plVar11 + -2;
          goto LAB_0097a730;
        }
        if (plVar11[-1] == lVar9) {
          plVar11 = plVar11 + -1;
          goto LAB_0097a730;
        }
        if (*plVar11 == lVar9) goto LAB_0097a730;
        if (plVar11[1] == lVar9) {
          plVar11 = plVar11 + 1;
          goto LAB_0097a730;
        }
        plVar1 = plVar11 + 2;
        plVar11 = plVar11 + 4;
      } while (plVar1 != plVar4);
    }
LAB_0097a708:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:1160: libc++ Hardening assertion __position != end() failed: vector::erase(iterator) called with a non-dereferenceable iterator\n"
              );
  }
LAB_0097a730:
  if (plVar11 == plVar4) goto LAB_0097a708;
  plVar1 = plVar11 + 1;
  if (plVar11 + 1 == plVar4) {
    if (plVar11 == plVar4) goto LAB_0097a7b8;
  }
  else {
    do {
      plVar11 = plVar1;
      plVar1 = (long *)plVar11[-1];
      plVar11[-1] = *plVar11;
      *plVar11 = 0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plVar11 + 1;
    } while (plVar11 + 1 != plVar4);
    plVar4 = *(long **)(lVar6 + 0x58);
    if (plVar11 == plVar4) goto LAB_0097a7b8;
  }
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
  } while (plVar4 != plVar11);
LAB_0097a7b8:
  *(long **)(lVar6 + 0x58) = plVar11;
  pthread_mutex_unlock((pthread_mutex_t *)(lVar6 + 0x28));
  plVar11 = (long *)*plVar8;
  *plVar8 = 0;
  plStack_68 = plVar11;
  uVar7 = FUN_0097a820(lVar6,&plStack_68);
  if (plVar11 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar11 + 8))(plVar11);
  }
  return uVar7;
}


// ===== 0097a5d4  FUN_0097a5d4 =====

void FUN_0097a5d4(long param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  void *local_58 [2];
  char cStack_41;
  long *local_28;
  
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    (**(code **)(*(long *)*param_2 + 0x20))(local_58);
    FUN_00623bb0(&DAT_001f4eff,"../../call/adaptation/resource_adaptation_processor.cc",0x461,
                 "Removing resource \"",local_58,&DAT_001e2244);
    if (cStack_41 < '\0') {
      operator_delete(local_58[0]);
    }
  }
  (**(code **)(*(long *)*param_2 + 0x28))((long *)*param_2,0);
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x28));
  plVar7 = *(long **)(param_1 + 0x50);
  plVar6 = *(long **)(param_1 + 0x58);
  if (plVar7 != plVar6) {
    uVar2 = (long)plVar6 + (-8 - (long)plVar7);
    lVar3 = *param_2;
    uVar4 = (uint)uVar2;
    if ((~uVar4 & 0x18) != 0) {
      uVar5 = (ulong)((uVar4 >> 3) + 1) & 3;
      do {
        if (*plVar7 == lVar3) goto LAB_0097a730;
        uVar5 = uVar5 - 1;
        plVar7 = plVar7 + 1;
      } while (uVar5 != 0);
    }
    if (0x17 < uVar2) {
      plVar7 = plVar7 + 2;
      do {
        if (plVar7[-2] == lVar3) {
          plVar7 = plVar7 + -2;
          goto LAB_0097a730;
        }
        if (plVar7[-1] == lVar3) {
          plVar7 = plVar7 + -1;
          goto LAB_0097a730;
        }
        if (*plVar7 == lVar3) goto LAB_0097a730;
        if (plVar7[1] == lVar3) {
          plVar7 = plVar7 + 1;
          goto LAB_0097a730;
        }
        plVar1 = plVar7 + 2;
        plVar7 = plVar7 + 4;
      } while (plVar1 != plVar6);
    }
LAB_0097a708:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:1160: libc++ Hardening assertion __position != end() failed: vector::erase(iterator) called with a non-dereferenceable iterator\n"
              );
  }
LAB_0097a730:
  if (plVar7 == plVar6) goto LAB_0097a708;
  plVar1 = plVar7 + 1;
  if (plVar7 + 1 == plVar6) {
    if (plVar7 == plVar6) goto LAB_0097a7b8;
  }
  else {
    do {
      plVar7 = plVar1;
      plVar1 = (long *)plVar7[-1];
      plVar7[-1] = *plVar7;
      *plVar7 = 0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plVar7 + 1;
    } while (plVar7 + 1 != plVar6);
    plVar6 = *(long **)(param_1 + 0x58);
    if (plVar7 == plVar6) goto LAB_0097a7b8;
  }
  do {
    plVar6 = plVar6 + -1;
    if (plVar6 == (long *)0x0) {
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
LAB_0097a7b8:
  *(long **)(param_1 + 0x58) = plVar7;
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x28));
  plVar7 = (long *)*param_2;
  *param_2 = 0;
  local_28 = plVar7;
  FUN_0097a820(param_1,&local_28);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))(plVar7);
  }
  return;
}


// ===== 0097a820  FUN_0097a820 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0097a820(long *param_1,ulong *param_2)

{
  int iVar1;
  long *plVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  void *local_128 [2];
  char cStack_111;
  void *local_110 [2];
  char cStack_f9;
  long *local_f8;
  long *local_f0;
  long *plStack_e8;
  code *local_e0;
  code *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  lVar10 = param_1[3];
  lVar4 = FUN_005d6490();
  if (lVar4 == lVar10) {
    plVar8 = (long *)param_1[0x11];
    if (plVar8 != (long *)0x0) {
      plVar9 = plVar8;
      do {
        while ((ulong)plVar9[4] <= *param_2) {
          if (*param_2 <= (ulong)plVar9[4]) {
            if (plVar9 == param_1 + 0x11) {
              return;
            }
            plVar6 = plVar9;
            plVar2 = (long *)plVar9[1];
            if ((long *)plVar9[1] == (long *)0x0) {
              do {
                plVar7 = (long *)plVar6[2];
                bVar3 = plVar6 != (long *)*plVar7;
                plVar6 = plVar7;
              } while (bVar3);
            }
            else {
              do {
                plVar7 = plVar2;
                plVar2 = (long *)*plVar7;
              } while ((long *)*plVar7 != (long *)0x0);
            }
            lVar4 = plVar9[0xb];
            iVar1 = *(int *)((long)plVar9 + 0x5c);
            if ((long *)param_1[0x10] == plVar9) {
              param_1[0x10] = (long)plVar7;
            }
            param_1[0x12] = param_1[0x12] + -1;
            FUN_005d5d48(plVar8,plVar9);
            if (plVar9 + 4 != (long *)0x0) {
              plVar8 = (long *)plVar9[4];
              if (plVar8 != (long *)0x0) {
                (**(code **)(*plVar8 + 8))();
              }
              operator_delete(plVar9);
              if (param_1[0x12] == 0) {
                FUN_0097cf64(param_1[0x13]);
                return;
              }
              FUN_0097ab60(&local_f0,param_1);
              uStack_88 = uStack_d0;
              local_90 = local_d8;
              uStack_78 = uStack_c0;
              uStack_80 = local_c8;
              uStack_68 = uStack_b0;
              local_70 = local_b8;
              local_60 = local_a8;
              plVar8 = plStack_e8;
              if (local_f0 != (long *)0x0) {
                while (local_f0 != plVar8) {
                  plVar8 = plVar8 + -1;
                  if (plVar8 == (long *)0x0) goto LAB_0097ab4c;
                  if ((long *)*plVar8 != (long *)0x0) {
                    (**(code **)(*(long *)*plVar8 + 8))();
                  }
                }
                operator_delete(local_f0);
              }
              if (iVar1 + (int)lVar4 <= (int)local_60 + local_60._4_4_) {
                return;
              }
              uStack_98 = _UNK_0022a210;
              local_a0 = _DAT_0022a208;
              plStack_e8 = (long *)_UNK_0022a1c0;
              local_f0 = _DAT_0022a1b8;
              local_d8 = (code *)_UNK_0022a1d0;
              local_e0 = (code *)_DAT_0022a1c8;
              local_c8 = _UNK_0022a1e0;
              uStack_d0 = _DAT_0022a1d8;
              local_b8 = _UNK_0022a1f0;
              uStack_c0 = _DAT_0022a1e8;
              local_a8 = _UNK_0022a200;
              uStack_b0 = _DAT_0022a1f8;
              FUN_0097e9ac(&local_f0,param_1[0x13],&local_60,&local_90);
              local_f8 = (long *)0x0;
              FUN_0097e840(param_1[0x13],&local_f0,&local_f8);
              if (local_f8 != (long *)0x0) {
                (**(code **)(*local_f8 + 8))();
              }
              uVar5 = FUN_00417e08();
              if ((uVar5 & 1) != 0) {
                return;
              }
              FUN_0097c9ac(local_110,&local_90);
              FUN_0097c84c(local_128,&local_60);
              FUN_00623bb0("\r\t\n\t\n","../../call/adaptation/resource_adaptation_processor.cc",
                           0x5d9,
                           "Most limited resource removed. Restoring restrictions to next most limited restrictions: "
                           ,local_110," with counters ",local_128);
              if (cStack_111 < '\0') {
                operator_delete(local_128[0]);
              }
              if (-1 < cStack_f9) {
                return;
              }
              operator_delete(local_110[0]);
              return;
            }
LAB_0097ab4c:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          plVar9 = (long *)plVar9[1];
          if (plVar9 == (long *)0x0) {
            return;
          }
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  else {
    puVar11 = (undefined8 *)*param_2;
    plVar8 = (long *)param_1[3];
    if (puVar11 != (undefined8 *)0x0) {
      (**(code **)*puVar11)(puVar11);
    }
    local_e0 = FUN_0097c3e8;
    local_d8 = FUN_0097c36c;
    local_f0 = param_1;
    plStack_e8 = puVar11;
    (**(code **)(*plVar8 + 8))(plVar8,&local_f0,&local_90,local_110);
    (*local_e0)(0,&local_f0,&local_f0);
  }
  return;
}


// ===== 0097ab60  FUN_0097ab60 =====

void FUN_0097ab60(undefined8 *param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  long local_90;
  undefined1 *puStack_88;
  undefined8 uStack_80;
  long *local_70;
  long *plStack_68;
  long *local_60;
  
  local_60 = (long *)0x0;
  local_90 = -1;
  plStack_68 = (long *)0x0;
  local_70 = (long *)0x0;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0097c98c(&local_b0);
  plVar5 = *(long **)(param_2 + 0x80);
  uStack_80 = (undefined1 *)0x0;
  if (plVar5 == (long *)(param_2 + 0x88)) {
    local_60 = (long *)0x0;
    local_70 = (long *)0x0;
    plStack_68 = (long *)0x0;
  }
  else {
    do {
      plVar1 = local_70;
      if ((int)uStack_80 + uStack_80._4_4_ < (int)plVar5[0xb] + *(int *)((long)plVar5 + 0x5c)) {
        uStack_80 = (undefined1 *)plVar5[0xb];
        puStack_a8 = (undefined1 *)plVar5[6];
        local_b0 = (undefined1 *)plVar5[5];
        puStack_98 = (undefined1 *)plVar5[8];
        local_a0 = (undefined1 *)plVar5[7];
        puStack_88 = (undefined1 *)plVar5[10];
        local_90 = plVar5[9];
        plVar6 = plStack_68;
        while (plVar1 != plVar6) {
          plVar6 = plVar6 + -1;
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          if ((long *)*plVar6 != (long *)0x0) {
            (**(code **)(*(long *)*plVar6 + 8))();
          }
        }
        plStack_68 = plVar1;
        if (plVar1 < local_60) {
joined_r0x0097ac6c:
          plStack_68 = plVar1;
          if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          puVar4 = (undefined8 *)plVar5[4];
          *plVar1 = (long)puVar4;
          if (puVar4 != (undefined8 *)0x0) {
            (**(code **)*puVar4)();
          }
          plStack_68 = plVar1 + 1;
        }
        else {
LAB_0097acd8:
          plStack_68 = (long *)FUN_00963814(&local_70,plVar5 + 4);
        }
      }
      else {
        uVar3 = FUN_0097c81c(&uStack_80);
        if ((uVar3 & 1) != 0) {
          plVar1 = plStack_68;
          if (local_60 <= plStack_68) goto LAB_0097acd8;
          goto joined_r0x0097ac6c;
        }
      }
      plVar1 = (long *)plVar5[1];
      plVar6 = plVar5;
      if ((long *)plVar5[1] == (long *)0x0) {
        do {
          plVar5 = (long *)plVar6[2];
          bVar2 = plVar6 != (long *)*plVar5;
          plVar6 = plVar5;
        } while (bVar2);
      }
      else {
        do {
          plVar5 = plVar1;
          plVar1 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
    } while (plVar5 != (long *)(param_2 + 0x88));
  }
  param_1[1] = plStack_68;
  *param_1 = local_70;
  param_1[2] = local_60;
  param_1[4] = puStack_a8;
  param_1[3] = local_b0;
  param_1[6] = puStack_98;
  param_1[5] = local_a0;
  param_1[8] = puStack_88;
  param_1[7] = local_90;
  param_1[9] = uStack_80;
  return;
}


// ===== 0097ad5c  FUN_0097ad5c =====

/* WARNING: Removing unreachable block (ram,0x0097b0a0) */
/* WARNING: Removing unreachable block (ram,0x0097b008) */
/* WARNING: Removing unreachable block (ram,0x0097b030) */

void FUN_0097ad5c(long param_1,ulong *param_2,int param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  char *pcVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  void *local_b0 [2];
  char cStack_99;
  undefined1 uStack_91;
  long *local_90;
  long *local_88;
  char *local_80;
  ulong local_78;
  undefined1 *puStack_70;
  undefined8 local_68;
  undefined8 local_60;
  ulong local_58;
  undefined1 *puStack_50;
  undefined8 local_48;
  
  iVar3 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x28));
  puVar7 = *(ulong **)(param_1 + 0x50);
  puVar2 = *(ulong **)(param_1 + 0x58);
  if (puVar7 == puVar2) {
LAB_0097b050:
    uVar8 = FUN_00417e08(iVar3);
    if ((uVar8 & 1) == 0) {
      (**(code **)(*(long *)*param_2 + 0x20))(&local_60);
      FUN_00623bb0(&DAT_001f4eff,"../../call/adaptation/resource_adaptation_processor.cc",0x661,
                   "Ignoring signal from removed resource \"",&local_60,&DAT_001e2244);
    }
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x28));
    return;
  }
  uVar9 = (long)puVar2 + (-8 - (long)puVar7);
  uVar8 = *param_2;
  uVar4 = (uint)uVar9;
  if ((~uVar4 & 0x18) != 0) {
    uVar10 = (ulong)((uVar4 >> 3) + 1) & 3;
    do {
      if (*puVar7 == uVar8) goto joined_r0x0097ae2c;
      uVar10 = uVar10 - 1;
      puVar7 = puVar7 + 1;
    } while (uVar10 != 0);
  }
  if (uVar9 < 0x18) goto LAB_0097b050;
  puVar7 = puVar7 + 2;
  while( true ) {
    if (puVar7[-2] == uVar8) {
      puVar7 = puVar7 + -2;
      goto joined_r0x0097ae2c;
    }
    if (puVar7[-1] == uVar8) break;
    if (*puVar7 == uVar8) goto joined_r0x0097ae2c;
    if (puVar7[1] == uVar8) {
      puVar7 = puVar7 + 1;
      goto joined_r0x0097ae2c;
    }
    puVar1 = puVar7 + 2;
    puVar7 = puVar7 + 4;
    if (puVar1 == puVar2) goto LAB_0097b050;
  }
  puVar7 = puVar7 + -1;
joined_r0x0097ae2c:
  if (puVar7 == puVar2) goto LAB_0097b050;
  uVar4 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x28));
  uVar8 = (ulong)uVar4;
  local_58 = 0;
  local_60 = 0xaaaaaaaa00000003;
  puStack_50 = (undefined1 *)0x0;
  local_48 = 0;
  if (param_3 == 1) {
    plVar11 = (long *)*param_2;
    local_90 = plVar11;
    if (plVar11 != (long *)0x0) {
      (**(code **)*plVar11)(plVar11);
    }
    uVar8 = FUN_0097b504(&local_80,param_1,&local_90);
  }
  else {
    iVar3 = 3;
    if (param_3 != 0) goto LAB_0097aef8;
    plVar11 = (long *)*param_2;
    local_88 = plVar11;
    if (plVar11 != (long *)0x0) {
      (**(code **)*plVar11)(plVar11);
    }
    uVar8 = FUN_0097b0d4(&local_80,param_1,&local_88);
  }
  local_60 = CONCAT44(local_60._4_4_,(int)local_80);
  puStack_50 = puStack_70;
  local_58 = local_78;
  local_48 = local_68;
  iVar3 = (int)local_80;
  if (plVar11 != (long *)0x0) {
    uVar8 = (**(code **)(*plVar11 + 8))(plVar11);
  }
LAB_0097aef8:
  plVar12 = (long *)(param_1 + 0xd8);
  plVar11 = (long *)*plVar12;
  if (plVar11 != (long *)0x0) {
    do {
      while ((ulong)plVar11[4] <= *param_2) {
        if (*param_2 <= (ulong)plVar11[4]) {
          if ((plVar11 != plVar12) && ((int)plVar11[5] == iVar3)) {
            return;
          }
          goto LAB_0097af48;
        }
        plVar11 = (long *)plVar11[1];
        if (plVar11 == (long *)0x0) goto LAB_0097af48;
      }
      plVar11 = (long *)*plVar11;
    } while (plVar11 != (long *)0x0);
  }
LAB_0097af48:
  uVar8 = FUN_00417e08(uVar8);
  if ((uVar8 & 1) == 0) {
    local_80 = "../../call/adaptation/resource_adaptation_processor.cc";
    local_78 = 0x711;
    puStack_70 = &uStack_91;
    (**(code **)(*(long *)*param_2 + 0x20))(local_b0);
    uVar5 = FUN_00979904(param_3);
    FUN_00623bb0("\r\t\n\t\t\t\n",local_80,local_78 & 0xffffffff,"Resource \"",local_b0,
                 "\" signalled ",uVar5,&DAT_001c9721,&local_58);
    if (cStack_99 < '\0') {
      operator_delete(local_b0[0]);
    }
    iVar3 = (int)local_60;
  }
  pcVar6 = (char *)(param_1 + 0xd0);
  if (iVar3 == 3) {
    local_80 = pcVar6;
    FUN_0097c2f8(&local_80,*(undefined8 *)(param_1 + 0xd8));
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(long **)(param_1 + 0xd0) = plVar12;
    return;
  }
  local_80 = (char *)*param_2;
  local_78 = CONCAT44(local_78._4_4_,iVar3);
  FUN_0097c434(0,pcVar6,pcVar6,&local_80);
  return;
}


// ===== 0097b0d4  FUN_0097b0d4 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0097b0d4(undefined4 *param_1,long param_2,long *param_3)

{
  ulong uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  int iVar4;
  char *__s;
  size_t sVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *******__dest;
  undefined4 uVar8;
  undefined8 ******ppppppuVar9;
  undefined8 *******pppppppuVar10;
  ulong uVar11;
  long *local_158;
  long *local_150;
  long *local_148;
  undefined8 *******local_140;
  undefined8 ******ppppppuStack_138;
  long local_130;
  undefined8 *******local_128;
  ulong uStack_120;
  ulong local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 *local_f8;
  undefined8 *******local_f0;
  undefined1 *puStack_e8;
  undefined8 local_e0;
  undefined1 *puStack_d8;
  undefined8 local_d0;
  undefined1 *puStack_c8;
  undefined1 *apuStack_c0 [2];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_68 = _UNK_0022a200;
  local_70 = _DAT_0022a1f8;
  uStack_58 = _UNK_0022a210;
  uStack_60 = _DAT_0022a208;
  uStack_a8 = _UNK_0022a1c0;
  local_b0 = _DAT_0022a1b8;
  uStack_98 = _UNK_0022a1d0;
  uStack_a0 = _DAT_0022a1c8;
  uStack_88 = _UNK_0022a1e0;
  local_90 = _DAT_0022a1d8;
  uStack_78 = _UNK_0022a1f0;
  uStack_80 = _DAT_0022a1e8;
  FUN_0097de8c(&local_b0,*(undefined8 *)(param_2 + 0x98));
  iVar4 = FUN_0097cd98(&local_b0);
  if (iVar4 == 1) {
    local_d0 = 0xffffffffffffffff;
    puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
    local_f0 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
    puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
    local_e0 = &DAT_aaaaaaaaaaaaaaaa;
    apuStack_c0[0] = &DAT_aaaaaaaaaaaaaaaa;
    puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_0097c98c(&local_f0);
    apuStack_c0[0] = (undefined1 *)0x0;
    FUN_0097ab60(&local_140,param_2);
    puStack_e8 = (undefined1 *)uStack_120;
    local_f0 = local_128;
    puStack_d8 = (undefined1 *)uStack_110;
    local_e0 = (undefined1 *)local_118;
    puStack_c8 = (undefined1 *)uStack_100;
    local_d0 = local_108;
    apuStack_c0[0] = local_f8;
    ppppppuVar9 = ppppppuStack_138;
    if (local_140 != (undefined8 *******)0x0) {
      while (local_140 != (undefined8 *******)ppppppuVar9) {
        ppppppuVar9 = ppppppuVar9 + -1;
        if (ppppppuVar9 == (undefined8 ******)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        if (*ppppppuVar9 != (undefined8 *****)0x0) {
          (*(code *)(**ppppppuVar9)[1])();
        }
      }
      operator_delete(local_140);
    }
    local_148 = (long *)*param_3;
    if (local_148 != (long *)0x0) {
      (**(code **)*local_148)();
    }
    FUN_0097bb8c(param_2,&local_148,&local_f0,apuStack_c0);
    if (local_148 != (long *)0x0) {
      (**(code **)(*local_148 + 8))();
    }
  }
  iVar4 = FUN_0097cd98(&local_b0);
  if (iVar4 == 0) {
    local_150 = (long *)*param_3;
    if (local_150 != (long *)0x0) {
      (**(code **)*local_150)();
    }
    uVar6 = FUN_0097cda4(&local_b0);
    uVar7 = FUN_0097cdb0(&local_b0);
    FUN_0097bb8c(param_2,&local_150,uVar6,uVar7);
    if (local_150 != (long *)0x0) {
      (**(code **)(*local_150 + 8))();
    }
    local_158 = (long *)*param_3;
    uVar6 = *(undefined8 *)(param_2 + 0x98);
    if (local_158 != (long *)0x0) {
      (**(code **)*local_158)();
    }
    FUN_0097e840(uVar6,&local_b0,&local_158);
    if (local_158 != (long *)0x0) {
      (**(code **)(*local_158 + 8))();
    }
    local_140 = (undefined8 *******)0x0;
    ppppppuStack_138 = (undefined8 ******)0x0;
    local_130 = 0;
    FUN_00547cac(&local_140,"Adapted down successfully. Unfiltered adaptations: ",0x33);
    FUN_0097cf58(*(undefined8 *)(param_2 + 0x98));
    FUN_0097c84c(&local_f0);
    puVar2 = puStack_e8;
    pppppppuVar10 = local_f0;
    if (-1 < (long)local_e0) {
      puVar2 = (undefined1 *)((ulong)local_e0 >> 0x38);
      pppppppuVar10 = &local_f0;
    }
    FUN_00547cac(&local_140,pppppppuVar10,puVar2);
    if ((long)local_e0 < 0) {
      operator_delete(local_f0);
    }
    local_e0 = (undefined1 *)local_130;
    uVar6 = local_e0;
    local_e0._7_1_ = (char)((ulong)local_130 >> 0x38);
    uVar11 = (ulong)local_e0._7_1_;
    puStack_e8 = (undefined1 *)ppppppuStack_138;
    local_f0 = local_140;
    local_e0 = (undefined1 *)uVar6;
    if ((long)uVar11 < 0) {
      uVar8 = 3;
      ppppppuVar9 = ppppppuStack_138;
      pppppppuVar10 = local_140;
      goto LAB_0097b3e8;
    }
    uVar8 = 3;
    ppppppuVar9 = (undefined8 ******)uVar11;
  }
  else {
    local_140 = (undefined8 *******)0x0;
    ppppppuStack_138 = (undefined8 ******)0x0;
    local_130 = 0;
    FUN_00547cac(&local_140,"Not adapting down because VideoStreamAdapter returned ",0x36);
    FUN_0097cd98(&local_b0);
    __s = (char *)FUN_0097cd68();
    if (__s == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string_view:278: libc++ Hardening assertion __s != nullptr failed: null pointer passed to non-null argument of char_traits<...>::length\n"
                );
    }
    sVar5 = strlen(__s);
    FUN_00547cac(&local_140,__s,sVar5);
    local_e0 = (undefined1 *)local_130;
    uVar6 = local_e0;
    local_e0._7_1_ = (char)((ulong)local_130 >> 0x38);
    uVar11 = (ulong)local_e0._7_1_;
    puStack_e8 = (undefined1 *)ppppppuStack_138;
    local_f0 = local_140;
    local_e0 = (undefined1 *)uVar6;
    if ((long)uVar11 < 0) {
      uVar8 = 2;
      ppppppuVar9 = ppppppuStack_138;
      pppppppuVar10 = local_140;
LAB_0097b3e8:
      local_130 = 0;
      ppppppuStack_138 = (undefined8 ******)0x0;
      local_140 = (undefined8 *******)0x0;
      *param_1 = uVar8;
      local_f0 = pppppppuVar10;
      puStack_e8 = (undefined1 *)ppppppuVar9;
      if (0x7ffffffffffffff6 < ppppppuVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_005d45ec();
      }
      goto LAB_0097b3f4;
    }
    uVar8 = 2;
    ppppppuVar9 = (undefined8 ******)uVar11;
  }
  *param_1 = uVar8;
  pppppppuVar10 = &local_f0;
  uVar11 = (ulong)ppppppuVar9;
LAB_0097b3f4:
  local_130 = 0;
  ppppppuStack_138 = (undefined8 ******)0x0;
  local_140 = (undefined8 *******)0x0;
  if (ppppppuVar9 < 0x17) {
    __dest = (undefined8 *******)(param_1 + 2);
    *(char *)((long)param_1 + 0x1f) = (char)ppppppuVar9;
  }
  else {
    uVar1 = ((ulong)ppppppuVar9 & 0x7ffffffffffffff8) + 8;
    uVar3 = 0x19;
    if (uVar1 != 0x18) {
      uVar3 = uVar1;
    }
    __dest = (undefined8 *******)operator_new(uVar3);
    *(undefined8 ********)(param_1 + 2) = __dest;
    *(undefined8 *******)(param_1 + 4) = ppppppuVar9;
    *(ulong *)(param_1 + 6) = uVar3 | 0x8000000000000000;
  }
  if (__dest <= (undefined8 *******)((long)__dest + (long)ppppppuVar9)) {
    if ((__dest <= pppppppuVar10) &&
       (pppppppuVar10 < (undefined8 *******)((long)__dest + (long)ppppppuVar9))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memmove(__dest,pppppppuVar10,(size_t)ppppppuVar9);
    *(undefined1 *)((long)__dest + (long)ppppppuVar9) = 0;
    if (((int)uVar11 < 0) && (operator_delete(local_f0), local_130 < 0)) {
      operator_delete(local_140);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 0097b504  FUN_0097b504 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0097b504(undefined4 *param_1,long param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  char *__s;
  size_t sVar5;
  int *piVar6;
  undefined8 *******pppppppuVar7;
  undefined8 uVar8;
  undefined8 *******__dest;
  undefined8 *******pppppppuVar9;
  undefined4 uVar10;
  undefined8 ******ppppppuVar11;
  undefined8 uVar12;
  undefined8 ******__n;
  ulong uVar13;
  long *local_180;
  long *local_178;
  undefined8 *******local_170;
  ulong uStack_168;
  undefined8 local_160;
  undefined8 *******local_150;
  undefined8 ******ppppppuStack_148;
  ulong local_140;
  undefined8 *******local_138;
  ulong uStack_130;
  long local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 *******local_100;
  undefined1 *puStack_f8;
  undefined8 local_f0;
  undefined1 *puStack_e8;
  undefined8 local_e0;
  undefined1 *puStack_d8;
  undefined8 uStack_d0;
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
  
  uStack_78 = _UNK_0022a200;
  local_80 = _DAT_0022a1f8;
  uStack_68 = _UNK_0022a210;
  uStack_70 = _DAT_0022a208;
  uStack_b8 = _UNK_0022a1c0;
  local_c0 = _DAT_0022a1b8;
  uStack_a8 = _UNK_0022a1d0;
  uStack_b0 = _DAT_0022a1c8;
  uStack_98 = _UNK_0022a1e0;
  local_a0 = _DAT_0022a1d8;
  uStack_88 = _UNK_0022a1f0;
  uStack_90 = _DAT_0022a1e8;
  FUN_0097d9e8(&local_c0,*(undefined8 *)(param_2 + 0x98));
  iVar4 = FUN_0097cd98(&local_c0);
  if (iVar4 != 0) {
    local_150 = (undefined8 *******)0x0;
    ppppppuStack_148 = (undefined8 ******)0x0;
    local_140 = 0;
    FUN_00547cac(&local_150,"Not adapting up because VideoStreamAdapter returned ",0x34);
    FUN_0097cd98(&local_c0);
    __s = (char *)FUN_0097cd68();
    if (__s == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string_view:278: libc++ Hardening assertion __s != nullptr failed: null pointer passed to non-null argument of char_traits<...>::length\n"
                );
    }
    sVar5 = strlen(__s);
    FUN_00547cac(&local_150,__s,sVar5);
    uVar13 = local_140;
    ppppppuVar11 = ppppppuStack_148;
    pppppppuVar9 = local_150;
    local_150 = (undefined8 *******)0x0;
    ppppppuStack_148 = (undefined8 ******)0x0;
    local_140 = 0;
    local_f0 = (undefined1 *)uVar13;
    lVar3 = (long)local_f0;
    local_f0._7_1_ = (char)(uVar13 >> 0x38);
    puStack_f8 = (undefined1 *)ppppppuVar11;
    local_100 = pppppppuVar9;
    local_f0 = (undefined1 *)lVar3;
    if ((long)local_f0._7_1_ < 0) {
      *param_1 = 2;
      if (0x7ffffffffffffff6 < ppppppuVar11) goto LAB_0097bb18;
    }
    else {
      pppppppuVar9 = &local_100;
      *param_1 = 2;
      ppppppuVar11 = (undefined8 ******)(long)local_f0._7_1_;
    }
    if (ppppppuVar11 < 0x17) {
      pppppppuVar7 = (undefined8 *******)(param_1 + 2);
      *(char *)((long)param_1 + 0x1f) = (char)ppppppuVar11;
    }
    else {
      uVar1 = ((ulong)ppppppuVar11 & 0x7ffffffffffffff8) + 8;
      uVar2 = 0x19;
      if (uVar1 != 0x18) {
        uVar2 = uVar1;
      }
      pppppppuVar7 = (undefined8 *******)operator_new(uVar2);
      *(undefined8 ********)(param_1 + 2) = pppppppuVar7;
      *(undefined8 *******)(param_1 + 4) = ppppppuVar11;
      *(ulong *)(param_1 + 6) = uVar2 | 0x8000000000000000;
    }
    if ((undefined8 *******)((long)pppppppuVar7 + (long)ppppppuVar11) < pppppppuVar7)
    goto LAB_0097bb44;
    if ((pppppppuVar7 <= pppppppuVar9) &&
       (pppppppuVar9 < (undefined8 *******)((long)pppppppuVar7 + (long)ppppppuVar11)))
    goto LAB_0097bb58;
    memmove(pppppppuVar7,pppppppuVar9,(size_t)ppppppuVar11);
    *(undefined1 *)((long)pppppppuVar7 + (long)ppppppuVar11) = 0;
    if (-1 < (long)uVar13) {
      return;
    }
    operator_delete(local_100);
    pppppppuVar9 = local_150;
    if (-1 < (long)local_140) {
      return;
    }
    goto LAB_0097bac0;
  }
  local_e0 = 0xffffffffffffffff;
  puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
  local_100 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_f0 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0097c98c(&local_100);
  uStack_d0 = (undefined1 *)0x0;
  FUN_0097ab60(&local_150,param_2);
  ppppppuVar11 = ppppppuStack_148;
  pppppppuVar9 = local_150;
  puStack_f8 = (undefined1 *)uStack_130;
  local_100 = local_138;
  puStack_e8 = (undefined1 *)uStack_120;
  local_f0 = (undefined1 *)local_128;
  puStack_d8 = (undefined1 *)uStack_110;
  local_e0 = local_118;
  uStack_d0 = (undefined1 *)local_108;
  uVar12 = uStack_d0;
  if (local_150 == (undefined8 *******)ppppppuStack_148) {
LAB_0097b65c:
    local_180 = (long *)*param_3;
    uVar12 = *(undefined8 *)(param_2 + 0x98);
    if (local_180 != (long *)0x0) {
      (**(code **)*local_180)();
    }
    FUN_0097e840(uVar12,&local_c0,&local_180);
    if (local_180 != (long *)0x0) {
      (**(code **)(*local_180 + 8))();
    }
    local_150 = (undefined8 *******)0x0;
    ppppppuStack_148 = (undefined8 ******)0x0;
    local_140 = 0;
    FUN_00547cac(&local_150,"Adapted up successfully. Unfiltered adaptations: ",0x31);
    FUN_0097cf58(*(undefined8 *)(param_2 + 0x98));
    FUN_0097c84c(&local_170);
    pppppppuVar7 = local_170;
    if (-1 < (long)local_160) {
      uStack_168 = (ulong)local_160._7_1_;
      pppppppuVar7 = &local_170;
    }
    FUN_00547cac(&local_150,pppppppuVar7,uStack_168);
    if ((char)local_160._7_1_ < '\0') {
      operator_delete(local_170);
    }
    local_160 = local_140;
    uVar13 = local_160;
    local_160._7_1_ = (byte)(local_140 >> 0x38);
    __n = (undefined8 ******)(long)(char)local_160._7_1_;
    uStack_168 = (ulong)ppppppuStack_148;
    local_170 = local_150;
    local_160 = uVar13;
    if (-1 < (long)__n) {
      *param_1 = 3;
      goto LAB_0097b9f4;
    }
    uVar10 = 3;
LAB_0097b81c:
    *param_1 = uVar10;
    pppppppuVar7 = local_150;
    uVar13 = (ulong)__n;
    __n = ppppppuStack_148;
joined_r0x0097b824:
    local_170 = pppppppuVar7;
    uStack_168 = (ulong)__n;
    if (0x7ffffffffffffff6 < __n) {
LAB_0097bb18:
      local_140 = 0;
      ppppppuStack_148 = (undefined8 ******)0x0;
      local_150 = (undefined8 *******)0x0;
                    /* WARNING: Subroutine does not return */
      FUN_005d45ec();
    }
    if (__n < 0x17) goto LAB_0097b830;
LAB_0097ba04:
    local_140 = 0;
    ppppppuStack_148 = (undefined8 ******)0x0;
    local_150 = (undefined8 *******)0x0;
    iVar4 = (int)uVar13;
    uVar13 = ((ulong)__n & 0x7ffffffffffffff8) + 8;
    uVar1 = 0x19;
    if (uVar13 != 0x18) {
      uVar1 = uVar13;
    }
    __dest = (undefined8 *******)operator_new(uVar1);
    *(undefined8 ********)(param_1 + 2) = __dest;
    *(undefined8 *******)(param_1 + 4) = __n;
    *(ulong *)(param_1 + 6) = uVar1 | 0x8000000000000000;
  }
  else {
    uStack_d0._0_4_ = (int)local_108;
    uStack_d0._4_4_ = (int)((ulong)local_108 >> 0x20);
    iVar4 = (int)uStack_d0 + uStack_d0._4_4_;
    uStack_d0 = (undefined1 *)uVar12;
    piVar6 = (int *)FUN_0097cf58(*(undefined8 *)(param_2 + 0x98));
    if (iVar4 < *piVar6 + piVar6[1]) goto LAB_0097b65c;
    pppppppuVar7 = local_150;
    do {
      if (*pppppppuVar7 == (undefined8 ******)*param_3) {
        if (pppppppuVar7 != (undefined8 *******)ppppppuStack_148) {
          if ((ulong)((long)ppppppuStack_148 - (long)local_150) < 9) goto LAB_0097b65c;
          local_178 = (long *)*param_3;
          if (local_178 != (long *)0x0) {
            (**(code **)*local_178)();
          }
          uVar12 = FUN_0097cda4(&local_c0);
          uVar8 = FUN_0097cdb0(&local_c0);
          FUN_0097bb8c(param_2,&local_178,uVar12,uVar8);
          if (local_178 != (long *)0x0) {
            (**(code **)(*local_178 + 8))();
          }
          local_150 = (undefined8 *******)0x0;
          ppppppuStack_148 = (undefined8 ******)0x0;
          local_140 = 0;
          FUN_00547cac(&local_150,"Resource \"",10);
          (**(code **)(*(long *)*param_3 + 0x20))(&local_170);
          pppppppuVar7 = local_170;
          if (-1 < (long)local_160) {
            uStack_168 = local_160 >> 0x38;
            pppppppuVar7 = &local_170;
          }
          FUN_00547cac(&local_150,pppppppuVar7,uStack_168);
          FUN_00547cac(&local_150,"\" was not the only most limited resource.",0x29);
          if ((char)local_160._7_1_ < '\0') {
            operator_delete(local_170);
          }
          local_160 = local_140;
          uVar13 = local_160;
          local_160._7_1_ = (byte)(local_140 >> 0x38);
          __n = (undefined8 ******)(long)(char)local_160._7_1_;
          uStack_168 = (ulong)ppppppuStack_148;
          local_170 = local_150;
          if (-1 < (long)__n) {
            *param_1 = 1;
            local_160 = uVar13;
            goto LAB_0097b9f4;
          }
          uVar10 = 1;
          local_160 = local_140;
          goto LAB_0097b81c;
        }
        break;
      }
      pppppppuVar7 = pppppppuVar7 + 1;
    } while (pppppppuVar7 != (undefined8 *******)ppppppuStack_148);
    local_150 = (undefined8 *******)0x0;
    ppppppuStack_148 = (undefined8 ******)0x0;
    local_140 = 0;
    FUN_00547cac(&local_150,"Resource \"",10);
    (**(code **)(*(long *)*param_3 + 0x20))(&local_170);
    pppppppuVar7 = local_170;
    if (-1 < (long)local_160) {
      uStack_168 = local_160 >> 0x38;
      pppppppuVar7 = &local_170;
    }
    FUN_00547cac(&local_150,pppppppuVar7,uStack_168);
    FUN_00547cac(&local_150,"\" was not the most limited resource.",0x24);
    if ((char)local_160._7_1_ < '\0') {
      operator_delete(local_170);
    }
    local_160 = local_140;
    uVar13 = local_160;
    local_160._7_1_ = (byte)(local_140 >> 0x38);
    __n = (undefined8 ******)(long)(char)local_160._7_1_;
    uStack_168 = (ulong)ppppppuStack_148;
    local_170 = local_150;
    if ((long)__n < 0) {
      *param_1 = 0;
      pppppppuVar7 = local_150;
      uVar13 = (ulong)__n;
      __n = ppppppuStack_148;
      goto joined_r0x0097b824;
    }
    *param_1 = 0;
    local_160 = uVar13;
LAB_0097b9f4:
    pppppppuVar7 = &local_170;
    uVar13 = (ulong)__n;
    if (0x16 < __n) goto LAB_0097ba04;
LAB_0097b830:
    local_140 = 0;
    ppppppuStack_148 = (undefined8 ******)0x0;
    local_150 = (undefined8 *******)0x0;
    iVar4 = (int)uVar13;
    __dest = (undefined8 *******)(param_1 + 2);
    *(char *)((long)param_1 + 0x1f) = (char)__n;
  }
  if ((undefined8 *******)((long)__dest + (long)__n) < __dest) {
LAB_0097bb44:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((__dest <= pppppppuVar7) && (pppppppuVar7 < (undefined8 *******)((long)__dest + (long)__n))) {
LAB_0097bb58:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memmove(__dest,pppppppuVar7,(size_t)__n);
  *(undefined1 *)((long)__dest + (long)__n) = 0;
  if ((iVar4 < 0) && (operator_delete(local_170), (long)local_140 < 0)) {
    operator_delete(local_150);
  }
  if (pppppppuVar9 == (undefined8 *******)0x0) {
    return;
  }
  while (pppppppuVar9 != (undefined8 *******)ppppppuVar11) {
    ppppppuVar11 = ppppppuVar11 + -1;
    if (ppppppuVar11 == (undefined8 ******)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    if (*ppppppuVar11 != (undefined8 *****)0x0) {
      (*(code *)(**ppppppuVar11)[1])();
    }
  }
LAB_0097bac0:
  operator_delete(pppppppuVar9);
  return;
}


// ===== 0097bb80  FUN_0097bb80 =====

void FUN_0097bb80(long param_1)

{
  FUN_0097ad5c(param_1 + -0x10);
  return;
}


// ===== 0097bb8c  FUN_0097bb8c =====

void FUN_0097bb8c(long param_1,undefined8 **param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *local_78;
  undefined8 **local_70;
  long local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 uStack_41;
  
  local_60 = (undefined8 *)(param_1 + 0x80);
  local_70 = param_2;
  lVar4 = FUN_0097c544(&local_60,param_2,&DAT_001f94c3,&local_70,&uStack_41);
  uVar5 = FUN_0097bd4c(lVar4 + 0x28,param_3);
  if (((uVar5 & 1) == 0) || (uVar5 = FUN_0097c81c(lVar4 + 0x58,param_4), (uVar5 & 1) == 0)) {
    uVar13 = param_3[3];
    uVar12 = param_3[2];
    uVar11 = param_3[5];
    uVar10 = param_3[4];
    uVar14 = *param_3;
    uVar6 = *param_4;
    *(undefined8 *)(lVar4 + 0x30) = param_3[1];
    *(undefined8 *)(lVar4 + 0x28) = uVar14;
    *(undefined8 *)(lVar4 + 0x50) = uVar11;
    *(undefined8 *)(lVar4 + 0x48) = uVar10;
    *(undefined8 *)(lVar4 + 0x40) = uVar13;
    *(undefined8 *)(lVar4 + 0x38) = uVar12;
    *(undefined8 *)(lVar4 + 0x58) = uVar6;
    local_60 = &local_58;
    plVar8 = *(long **)(param_1 + 0x80);
    local_58 = 0;
    uStack_50 = 0;
    while (plVar8 != (long *)(param_1 + 0x88)) {
      local_70 = (undefined8 **)plVar8[4];
      if (local_70 != (undefined8 **)0x0) {
        (*(code *)**local_70)();
      }
      local_68 = plVar8[0xb];
      FUN_0097c710(0,&local_60,&local_60,&local_70);
      if (local_70 != (undefined8 **)0x0) {
        (*(code *)(*local_70)[1])();
      }
      plVar2 = (long *)plVar8[1];
      plVar9 = plVar8;
      if ((long *)plVar8[1] == (long *)0x0) {
        do {
          plVar8 = (long *)plVar9[2];
          bVar3 = plVar9 != (long *)*plVar8;
          plVar9 = plVar8;
        } while (bVar3);
      }
      else {
        do {
          plVar8 = plVar2;
          plVar2 = (long *)*plVar8;
        } while ((long *)*plVar8 != (long *)0x0);
      }
    }
    puVar1 = *(undefined8 **)(param_1 + 0x70);
    for (puVar7 = *(undefined8 **)(param_1 + 0x68); puVar7 != puVar1; puVar7 = puVar7 + 1) {
      local_78 = *param_2;
      plVar8 = (long *)*puVar7;
      if (local_78 != (long *)0x0) {
        (**(code **)*local_78)();
      }
      (**(code **)(*plVar8 + 0x10))(plVar8,&local_78,&local_60);
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 8))();
      }
    }
    local_70 = &local_60;
    FUN_0097c680(&local_70,local_58);
  }
  return;
}


// ===== 0097bd4c  FUN_0097bd4c =====

bool FUN_0097bd4c(long *param_1,long *param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 1);
  if ((bVar1 & *(byte *)(param_1 + 1)) == 0) {
    if (*(byte *)(param_1 + 1) != bVar1) {
      return false;
    }
  }
  else {
    if ((bVar1 & 1) == 0) goto LAB_0097bdf8;
    if (*param_1 != *param_2) {
      return false;
    }
  }
  bVar1 = *(byte *)(param_2 + 3);
  if ((bVar1 & *(byte *)(param_1 + 3)) == 0) {
    if (*(byte *)(param_1 + 3) != bVar1) {
      return false;
    }
  }
  else {
    if ((bVar1 & 1) == 0) goto LAB_0097bdf8;
    if (param_1[2] != param_2[2]) {
      return false;
    }
  }
  bVar1 = *(byte *)(param_2 + 5);
  if ((bVar1 & *(byte *)(param_1 + 5)) == 0) {
    return *(byte *)(param_1 + 5) == bVar1;
  }
  if ((bVar1 & 1) != 0) {
    return (double)param_1[4] == (double)param_2[4];
  }
LAB_0097bdf8:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
            );
}


// ===== 0097be0c  FUN_0097be0c =====

void FUN_0097be0c(long param_1,undefined8 param_2,int *param_3,long *param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long *local_48;
  long *local_40;
  undefined1 *local_38;
  
  local_40 = (long *)*param_4;
  if (local_40 == (long *)0x0) {
    if (*param_3 + param_3[1] == 0) {
      local_60 = (undefined8 *)(param_1 + 0x80);
      puVar3 = (undefined8 *)(param_1 + 0x88);
      FUN_0097c268(&local_60,*puVar3);
      *(undefined8 **)(param_1 + 0x80) = puVar3;
      puVar2 = (undefined8 *)(param_1 + 0xd8);
      local_60 = (undefined8 *)(param_1 + 0xd0);
      *puVar3 = 0;
      *(undefined8 *)(param_1 + 0x90) = 0;
      FUN_0097c2f8(&local_60,*puVar2);
      puVar3 = *(undefined8 **)(param_1 + 0x68);
      puVar1 = *(undefined8 **)(param_1 + 0x70);
      *puVar2 = 0;
      *(undefined8 *)(param_1 + 0xe0) = 0;
      *(undefined8 **)(param_1 + 0xd0) = puVar2;
      if (puVar3 != puVar1) {
        do {
          local_48 = (long *)0x0;
          local_58 = 0;
          uStack_50 = 0;
          local_60 = &local_58;
          (**(code **)(*(long *)*puVar3 + 0x10))((long *)*puVar3,&local_48,&local_60);
          local_38 = (undefined1 *)&local_60;
          FUN_0097c680(&local_38,local_58);
          if (local_48 != (long *)0x0) {
            (**(code **)(*local_48 + 8))();
          }
          puVar3 = puVar3 + 1;
        } while (puVar3 != puVar1);
      }
    }
  }
  else {
    (**(code **)*local_40)(local_40);
    FUN_0097bb8c(param_1,&local_40,param_5,param_3);
    if (local_40 != (long *)0x0) {
      (**(code **)(*local_40 + 8))();
    }
  }
  return;
}


// ===== 0097bf4c  FUN_0097bf4c =====

void FUN_0097bf4c(long param_1)

{
  FUN_0097be0c(param_1 + -8);
  return;
}


// ===== 0097bf58  FUN_0097bf58 =====

undefined8 * FUN_0097bf58(long *param_1,undefined8 *param_2)

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
    FUN_0097c04c();
LAB_0097c048:
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
    if (uVar5 >> 0x3d != 0) goto LAB_0097c048;
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


// ===== 0097c04c  FUN_0097c04c =====

void FUN_0097c04c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 0097c064  FUN_0097c064 =====

void FUN_0097c064(undefined8 *param_1)

{
  long *plVar1;
  long *local_28;
  
  param_1 = (undefined8 *)*param_1;
  plVar1 = (long *)*param_1;
  local_28 = (long *)param_1[1];
  if (local_28 != (long *)0x0) {
    (**(code **)*local_28)();
  }
  (**(code **)(*plVar1 + 0x20))(plVar1,&local_28,*(undefined4 *)(param_1 + 2));
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  return;
}


// ===== 0097c0d4  FUN_0097c0d4 =====

void FUN_0097c0d4(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  long *plVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x97c15c);
      (*pcVar1)();
    }
    plVar2 = (long *)*param_2;
    if (plVar2 != (long *)0x0) {
      if ((long *)plVar2[1] != (long *)0x0) {
        (**(code **)(*(long *)plVar2[1] + 8))();
      }
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 8))();
      }
      operator_delete(plVar2);
      return;
    }
  }
  return;
}


// ===== 0097c15c  FUN_0097c15c =====

void FUN_0097c15c(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x20);
  return;
}


// ===== 0097c180  FUN_0097c180 =====

bool FUN_0097c180(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 4);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 0097c1d8  FUN_0097c1d8 =====

void FUN_0097c1d8(long param_1)

{
  FUN_0097993c(param_1 + 8);
  return;
}


// ===== 0097c1e4  FUN_0097c1e4 =====

void FUN_0097c1e4(void *param_1)

{
  FUN_0097993c((long)param_1 + 8);
  operator_delete(param_1);
  return;
}


// ===== 0097c218  FUN_0097c218 =====

bool FUN_0097c218(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x20) == 1;
}


// ===== 0097c230  thunk_FUN_0097993c =====

void thunk_FUN_0097993c(void)

{
  FUN_0097993c();
  return;
}


// ===== 0097c238  FUN_0097c238 =====

void FUN_0097c238(long param_1)

{
  FUN_0097993c();
  operator_delete((void *)(param_1 + -8));
  return;
}


// ===== 0097c268  FUN_0097c268 =====

void FUN_0097c268(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_0097c268(param_1,*param_2);
      if (param_2 + 4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar1 = (long *)param_2[4];
      puVar2 = (undefined8 *)param_2[1];
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      operator_delete(param_2);
      param_2 = puVar2;
    } while (puVar2 != (undefined8 *)0x0);
  }
  return;
}


// ===== 0097c2f8  FUN_0097c2f8 =====

void FUN_0097c2f8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_0097c2f8(param_1,*param_2);
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


// ===== 0097c36c  FUN_0097c36c =====

void FUN_0097c36c(undefined8 *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long *local_28;
  
  uVar1 = *param_1;
  plVar2 = (long *)param_1[1];
  local_28 = plVar2;
  if (plVar2 != (long *)0x0) {
    (**(code **)*plVar2)(plVar2);
    FUN_0097a820(uVar1,&local_28);
                    /* WARNING: Could not recover jumptable at 0x0097c3c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  FUN_0097a820(uVar1,&local_28);
  return;
}


// ===== 0097c3e8  FUN_0097c3e8 =====

void FUN_0097c3e8(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
    uVar2 = param_2[1];
    param_2[1] = 0;
    param_3[1] = uVar2;
  }
  else if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x97c434);
    (*pcVar1)();
  }
  if ((long *)param_2[1] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0097c428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_2[1] + 8))();
    return;
  }
  return;
}


// ===== 0097c434  FUN_0097c434 =====

undefined1  [16] FUN_0097c434(undefined8 param_1,long *param_2,undefined8 param_3,ulong *param_4)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  plVar4 = param_2 + 1;
  plVar7 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    plVar2 = (long *)*plVar4;
    do {
      while (plVar3 = plVar2, plVar4 = plVar3, *param_4 < (ulong)plVar3[4]) {
        plVar2 = (long *)*plVar3;
        plVar7 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_0097c4a0;
      }
      if (*param_4 <= (ulong)plVar3[4]) {
        uVar5 = 0;
        goto LAB_0097c514;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar7 = plVar3 + 1;
  }
LAB_0097c4a0:
  plVar3 = (long *)operator_new(0x30);
  if ((plVar3 == (long *)0x0) || (*plVar3 = 0, plVar3 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar6 = *param_4;
  uVar1 = param_4[1];
  *plVar3 = 0;
  plVar3[1] = 0;
  plVar3[4] = uVar6;
  *(int *)(plVar3 + 5) = (int)uVar1;
  plVar3[2] = (long)plVar4;
  *plVar7 = (long)plVar3;
  plVar4 = plVar3;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar4 = (long *)*plVar7;
  }
  FUN_005d5b94(param_2[1],plVar4);
  uVar5 = 1;
  param_2[2] = param_2[2] + 1;
LAB_0097c514:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = plVar3;
  return auVar8;
}


// ===== 0097c544  FUN_0097c544 =====

undefined1  [16]
FUN_0097c544(undefined8 *param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  plVar6 = (long *)*param_1;
  plVar4 = plVar6 + 1;
  plVar7 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    plVar1 = (long *)*plVar4;
    do {
      while (plVar2 = plVar1, plVar4 = plVar2, *param_2 < (ulong)plVar2[4]) {
        plVar1 = (long *)*plVar2;
        plVar7 = plVar2;
        if ((long *)*plVar2 == (long *)0x0) goto LAB_0097c5b0;
      }
      if (*param_2 <= (ulong)plVar2[4]) {
        uVar5 = 0;
        goto LAB_0097c650;
      }
      plVar1 = (long *)plVar2[1];
    } while ((long *)plVar2[1] != (long *)0x0);
    plVar7 = plVar2 + 1;
  }
LAB_0097c5b0:
  plVar2 = (long *)operator_new(0x60);
  if (plVar2 != (long *)0x0) {
    *plVar2 = 0;
    if (plVar2 + 4 != (long *)0x0) {
      puVar3 = *(undefined8 **)*param_4;
      plVar2[4] = (long)puVar3;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)();
      }
      plVar2[0xb] = 0;
      plVar2[10] = 0;
      plVar2[9] = 0;
      plVar2[8] = 0;
      plVar2[7] = 0;
      plVar2[6] = 0;
      plVar2[5] = 0;
      FUN_0097c98c();
      plVar2[0xb] = 0;
      *plVar2 = 0;
      plVar2[1] = 0;
      plVar2[2] = (long)plVar4;
      *plVar7 = (long)plVar2;
      plVar4 = plVar2;
      if (*(long *)*plVar6 != 0) {
        *plVar6 = *(long *)*plVar6;
        plVar4 = (long *)*plVar7;
      }
      FUN_005d5b94(plVar6[1],plVar4);
      uVar5 = 1;
      plVar6[2] = plVar6[2] + 1;
LAB_0097c650:
      auVar8._8_8_ = uVar5;
      auVar8._0_8_ = plVar2;
      return auVar8;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0097c680  FUN_0097c680 =====

void FUN_0097c680(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_0097c680(param_1,*param_2);
      if (param_2 + 4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar1 = (long *)param_2[4];
      puVar2 = (undefined8 *)param_2[1];
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      operator_delete(param_2);
      param_2 = puVar2;
    } while (puVar2 != (undefined8 *)0x0);
  }
  return;
}


// ===== 0097c710  FUN_0097c710 =====

undefined1  [16] FUN_0097c710(undefined8 param_1,long *param_2,undefined8 param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  plVar5 = param_2 + 1;
  plVar7 = plVar5;
  if ((long *)*plVar5 != (long *)0x0) {
    plVar3 = (long *)*plVar5;
    do {
      while (plVar4 = plVar3, plVar5 = plVar4, *param_4 < (ulong)plVar4[4]) {
        plVar3 = (long *)*plVar4;
        plVar7 = plVar4;
        if ((long *)*plVar4 == (long *)0x0) goto LAB_0097c77c;
      }
      if (*param_4 <= (ulong)plVar4[4]) {
        uVar6 = 0;
        goto LAB_0097c7ec;
      }
      plVar3 = (long *)plVar4[1];
    } while ((long *)plVar4[1] != (long *)0x0);
    plVar7 = plVar4 + 1;
  }
LAB_0097c77c:
  plVar4 = (long *)operator_new(0x30);
  if ((plVar4 == (long *)0x0) || (*plVar4 = 0, plVar4 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar1 = *param_4;
  uVar2 = param_4[1];
  *param_4 = 0;
  *plVar4 = 0;
  plVar4[1] = 0;
  plVar4[4] = uVar1;
  plVar4[5] = uVar2;
  plVar4[2] = (long)plVar5;
  *plVar7 = (long)plVar4;
  plVar5 = plVar4;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar5 = (long *)*plVar7;
  }
  FUN_005d5b94(param_2[1],plVar5);
  uVar6 = 1;
  param_2[2] = param_2[2] + 1;
LAB_0097c7ec:
  auVar8._8_8_ = uVar6;
  auVar8._0_8_ = plVar4;
  return auVar8;
}


// ===== 0097c81c  FUN_0097c81c =====

bool FUN_0097c81c(int *param_1,int *param_2)

{
  if (param_1[1] == param_2[1]) {
    return *param_1 == *param_2;
  }
  return false;
}


// ===== 0097c84c  FUN_0097c84c =====

void FUN_0097c84c(undefined8 *param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 **local_48;
  ulong uStack_40;
  ulong local_38;
  
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  FUN_00547cac(&local_60,"{ res=",6);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005f55c4(&local_48,0x16,*param_2);
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  FUN_00547cac(&local_60," fps=",5);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005f55c4(&local_48,0x16,param_2[1]);
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  FUN_00547cac(&local_60,&DAT_001c8610,2);
  param_1[1] = uStack_58;
  *param_1 = local_60;
  param_1[2] = local_50;
  return;
}


// ===== 0097c97c  FUN_0097c97c =====

void FUN_0097c97c(void)

{
  return;
}


// ===== 0097c984  FUN_0097c984 =====

void FUN_0097c984(void)

{
  return;
}


// ===== 0097c98c  FUN_0097c98c =====

void FUN_0097c98c(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[8] = 0;
  param_1[0x10] = 0;
  param_1[0x18] = 0;
  param_1[0x20] = 0;
  param_1[0x28] = 0;
  return;
}


// ===== 0097c9ac  FUN_0097c9ac =====

void FUN_0097c9ac(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 **local_48;
  ulong uStack_40;
  ulong local_38;
  
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  FUN_00547cac(&local_60,&DAT_001d05bd,1);
  if (*(char *)(param_2 + 5) == '\x01') {
    FUN_00547cac(&local_60," max_fps=",9);
    if ((*(byte *)(param_2 + 5) & 1) == 0) goto LAB_0097cb98;
    local_48 = (undefined8 ***)0x0;
    uStack_40 = 0;
    local_38 = 0;
    FUN_00624ab4(param_2[4],&local_48,0x10);
    uVar1 = uStack_40;
    pppuVar2 = (undefined8 ***)local_48;
    if (-1 < (long)local_38) {
      uVar1 = local_38 >> 0x38;
      pppuVar2 = &local_48;
    }
    FUN_00547cac(&local_60,pppuVar2,uVar1);
    if ((long)local_38 < 0) {
      operator_delete(local_48);
    }
  }
  if (*(char *)(param_2 + 1) == '\x01') {
    FUN_00547cac(&local_60," max_pixels_per_frame=",0x16);
    if ((*(byte *)(param_2 + 1) & 1) == 0) goto LAB_0097cb98;
    local_48 = (undefined8 ***)0x0;
    uStack_40 = 0;
    local_38 = 0;
    FUN_006247b4(&local_48,0x16,*param_2);
    uVar1 = uStack_40;
    pppuVar2 = (undefined8 ***)local_48;
    if (-1 < (long)local_38) {
      uVar1 = local_38 >> 0x38;
      pppuVar2 = &local_48;
    }
    FUN_00547cac(&local_60,pppuVar2,uVar1);
    if ((long)local_38 < 0) {
      operator_delete(local_48);
    }
  }
  if (*(char *)(param_2 + 3) == '\x01') {
    FUN_00547cac(&local_60," target_pixels_per_frame=",0x19);
    if ((*(byte *)(param_2 + 3) & 1) == 0) {
LAB_0097cb98:
                    /* WARNING: Subroutine does not return */
      FUN_005dc08c();
    }
    local_48 = (undefined8 ***)0x0;
    uStack_40 = 0;
    local_38 = 0;
    FUN_006247b4(&local_48,0x16,param_2[2]);
    uVar1 = uStack_40;
    pppuVar2 = (undefined8 ***)local_48;
    if (-1 < (long)local_38) {
      uVar1 = local_38 >> 0x38;
      pppuVar2 = &local_48;
    }
    FUN_00547cac(&local_60,pppuVar2,uVar1);
    if ((long)local_38 < 0) {
      operator_delete(local_48);
    }
  }
  FUN_00547cac(&local_60,&DAT_001c8610,2);
  param_1[1] = uStack_58;
  *param_1 = local_60;
  param_1[2] = local_50;
  return;
}


// ===== 0097cb9c  FUN_0097cb9c =====

void FUN_0097cb9c(void)

{
  return;
}


// ===== 0097cba4  FUN_0097cba4 =====

long FUN_0097cba4(long param_1)

{
  return param_1 + 0x10;
}


// ===== 0097cbb0  FUN_0097cbb0 =====

long FUN_0097cbb0(long param_1)

{
  return param_1 + 0x20;
}


// ===== 0097cbbc  FUN_0097cbbc =====

void FUN_0097cbbc(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}


// ===== 0097cbcc  FUN_0097cbcc =====

void FUN_0097cbcc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined1 *)(param_1 + 0x18) = param_3;
  return;
}


// ===== 0097cbdc  FUN_0097cbdc =====

void FUN_0097cbdc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined1 *)(param_1 + 0x28) = param_3;
  return;
}


// ===== 0097cbec  FUN_0097cbec =====

bool FUN_0097cbec(ulong *param_1,ulong *param_2)

{
  if ((char)param_2[1] != '\x01') {
    return false;
  }
  if ((char)param_1[1] == '\x01') {
    return *param_2 < *param_1;
  }
  return true;
}


// ===== 0097cc2c  FUN_0097cc2c =====

bool FUN_0097cc2c(ulong *param_1,ulong *param_2)

{
  if ((char)param_1[1] != '\x01') {
    return false;
  }
  if ((char)param_2[1] == '\x01') {
    return *param_1 < *param_2;
  }
  return true;
}


// ===== 0097cc6c  FUN_0097cc6c =====

void FUN_0097cc6c(void)

{
  return;
}


// ===== 0097cc74  FUN_0097cc74 =====

void FUN_0097cc74(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_3 == 0) {
    FUN_0097cbbc(param_2,0,0);
    FUN_0097cbcc(param_2,0,0);
  }
  else {
    if (param_3 == 2) {
      FUN_0097cbbc(param_2,0,0);
      FUN_0097cbcc(param_2,0,0);
      goto LAB_0097ccf8;
    }
    if (param_3 != 1) goto LAB_0097ccf8;
  }
  FUN_0097cbdc(param_2,0,0);
LAB_0097ccf8:
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  return;
}


// ===== 0097cd18  FUN_0097cd18 =====

long FUN_0097cd18(int param_1)

{
  return (long)(param_1 * 3) / 5;
}


// ===== 0097cd38  FUN_0097cd38 =====

long FUN_0097cd38(int param_1)

{
  long lVar1;
  
  lVar1 = 0x7fffffff;
  if (param_1 != 0x7fffffff) {
    lVar1 = (long)(param_1 * 5);
    lVar1 = (lVar1 / 3 + (lVar1 >> 0x3f)) - (lVar1 * 0x55555556 >> 0x3f);
  }
  return lVar1;
}


// ===== 0097cd68  FUN_0097cd68 =====

undefined * FUN_0097cd68(uint param_1)

{
  if (param_1 < 6) {
    return &DAT_0022a338 + *(int *)(&DAT_0022a338 + (ulong)param_1 * 4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061ff28();
}


// ===== 0097cd98  FUN_0097cd98 =====

undefined4 FUN_0097cd98(long param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


// ===== 0097cda4  FUN_0097cda4 =====

long FUN_0097cda4(long param_1)

{
  return param_1 + 0x28;
}


// ===== 0097cdb0  FUN_0097cdb0 =====

long FUN_0097cdb0(long param_1)

{
  return param_1 + 0x58;
}


// ===== 0097cdbc  FUN_0097cdbc =====

void FUN_0097cdbc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  FUN_0097f284(param_1 + 2,param_4);
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  FUN_0097c98c(param_1 + 8);
  FUN_0097c98c(param_1 + 0xe);
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  FUN_0097c98c(param_1 + 0x1a);
  param_1[0x20] = 0;
  return;
}


// ===== 0097ce20  FUN_0097ce20 =====

void FUN_0097ce20(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = *(void **)(param_1 + 0xb8);
  if (pvVar1 == (void *)0x0) {
LAB_0097ceb4:
    pvVar1 = *(void **)(param_1 + 0xa0);
    if (pvVar1 == (void *)0x0) {
LAB_0097cf44:
      FUN_009801a0(param_1 + 0x10);
      return;
    }
    pvVar2 = *(void **)(param_1 + 0xa8);
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
        *(void **)(param_1 + 0xa8) = pvVar1;
        operator_delete(pvVar1);
        goto LAB_0097cf44;
      }
      pvVar2 = (void *)((long)pvVar2 + -8);
    } while (pvVar2 != (void *)0x0);
  }
  else {
    pvVar2 = *(void **)(param_1 + 0xc0);
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
        *(void **)(param_1 + 0xc0) = pvVar1;
        operator_delete(pvVar1);
        goto LAB_0097ceb4;
      }
      pvVar2 = (void *)((long)pvVar2 + -8);
    } while (pvVar2 != (void *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0097cf58  FUN_0097cf58 =====

long FUN_0097cf58(long param_1)

{
  return param_1 + 0x100;
}


// ===== 0097cf64  FUN_0097cf64 =====

void FUN_0097cf64(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 extraout_x1;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_8;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../call/adaptation/video_stream_adapter.cc",0x7c1,
                 "Resetting restrictions");
  }
  *(int *)(param_1 + 5) = *(int *)(param_1 + 5) + 1;
  FUN_0097c98c(&local_58);
  local_28 = 0;
  param_1[0x1b] = uStack_50;
  param_1[0x1a] = local_58;
  param_1[0x1d] = uStack_40;
  param_1[0x1c] = local_48;
  param_1[0x1f] = uStack_30;
  param_1[0x1e] = local_38;
  param_1[0x20] = 0;
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  (**(code **)(*(long *)*param_1 + 0x10))(&local_58);
  local_8 = 0;
  FUN_0097d020(param_1,extraout_x1,&local_8);
  return;
}


// ===== 0097d020  FUN_0097d020 =====

void FUN_0097d020(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long *local_d8;
  long local_d0 [2];
  long lStack_c0;
  double local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  byte bStack_68;
  undefined7 uStack_67;
  long local_60;
  byte local_58;
  undefined7 uStack_57;
  double local_50;
  byte bStack_48;
  undefined7 uStack_47;
  
  uStack_98 = *(undefined8 *)(param_1 + 0xd8);
  local_a0 = *(undefined8 *)(param_1 + 0xd0);
  uStack_88 = *(undefined8 *)(param_1 + 0xe8);
  uStack_90 = *(undefined8 *)(param_1 + 0xe0);
  uStack_78 = *(undefined8 *)(param_1 + 0xf8);
  local_80 = *(undefined8 *)(param_1 + 0xf0);
  FUN_0097cc74(&local_70,&local_a0,*(undefined4 *)(param_1 + 0x2c));
  if ((bStack_68 & *(byte *)(param_1 + 0x78)) == 0) {
    if (*(byte *)(param_1 + 0x78) != bStack_68) goto LAB_0097d0f4;
  }
  else {
    if ((bStack_68 & 1) == 0) goto LAB_0097d1b4;
    if (*(long *)(param_1 + 0x70) != local_70) goto LAB_0097d0f4;
  }
  if ((local_58 & *(byte *)(param_1 + 0x88)) == 0) {
    if (*(byte *)(param_1 + 0x88) != local_58) goto LAB_0097d0f4;
  }
  else {
    if ((local_58 & 1) == 0) goto LAB_0097d1b4;
    if (*(long *)(param_1 + 0x80) != local_60) goto LAB_0097d0f4;
  }
  if ((bStack_48 & *(byte *)(param_1 + 0x98)) == 0) {
    if (*(byte *)(param_1 + 0x98) == bStack_48) {
      return;
    }
  }
  else {
    if ((bStack_48 & 1) == 0) {
LAB_0097d1b4:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    if (*(double *)(param_1 + 0x90) == local_50) {
      return;
    }
  }
LAB_0097d0f4:
  puVar1 = *(undefined8 **)(param_1 + 0xa8);
  for (puVar3 = *(undefined8 **)(param_1 + 0xa0); puVar3 != puVar1; puVar3 = puVar3 + 1) {
    plVar2 = (long *)*puVar3;
    local_d8 = (long *)*param_3;
    local_d0[0] = local_70;
    lStack_c0 = local_60;
    local_b0 = local_50;
    if (local_d8 != (long *)0x0) {
      (**(code **)*local_d8)();
    }
    uStack_f8 = *(undefined8 *)(param_1 + 0xe8);
    local_100 = *(undefined8 *)(param_1 + 0xe0);
    uStack_e8 = *(undefined8 *)(param_1 + 0xf8);
    uStack_f0 = *(undefined8 *)(param_1 + 0xf0);
    uStack_108 = *(undefined8 *)(param_1 + 0xd8);
    local_110 = *(undefined8 *)(param_1 + 0xd0);
    (**(code **)(*plVar2 + 0x10))(plVar2,local_d0,param_1 + 0x100,&local_d8,&local_110);
    if (local_d8 != (long *)0x0) {
      (**(code **)(*local_d8 + 8))();
    }
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0xf0);
  *(ulong *)(param_1 + 0x78) = CONCAT71(uStack_67,bStack_68);
  *(long *)(param_1 + 0x70) = local_70;
  *(ulong *)(param_1 + 0x88) = CONCAT71(uStack_57,local_58);
  *(long *)(param_1 + 0x80) = local_60;
  *(ulong *)(param_1 + 0x98) = CONCAT71(uStack_47,bStack_48);
  *(double *)(param_1 + 0x90) = local_50;
  return;
}


// ===== 0097d1c8  FUN_0097d1c8 =====

void FUN_0097d1c8(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_8;
  
  puVar1 = *(undefined8 **)(param_1 + 0xa8);
  local_8 = param_2;
  if (puVar1 < *(undefined8 **)(param_1 + 0xb0)) {
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar2 = puVar1 + 1;
    *puVar1 = param_2;
  }
  else {
    puVar2 = (undefined8 *)FUN_0097ede8(param_1 + 0xa0,&local_8);
  }
  *(undefined8 **)(param_1 + 0xa8) = puVar2;
  return;
}


// ===== 0097d230  FUN_0097d230 =====

void FUN_0097d230(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  
  plVar2 = *(long **)(param_1 + 0xa0);
  plVar6 = *(long **)(param_1 + 0xa8);
  if (plVar2 == plVar6) {
LAB_0097d300:
    if (plVar2 != plVar6) {
      memmove(plVar2,plVar2 + 1,(long)plVar6 - (long)(plVar2 + 1));
      plVar2 = *(long **)(param_1 + 0xa8);
      uVar5 = (ulong)((long)plVar2 + (-8 - ((long)plVar2 << 0x3d))) >> 3;
      uVar4 = (((long)plVar6 - (long)plVar2 << 0x3d) - ((long)plVar6 - (long)plVar2)) + 8U >> 3;
      if (uVar5 <= uVar4) {
        uVar4 = uVar5;
      }
      if ((1 < uVar4) && ((-(int)plVar2 & 7U) == 0)) {
        uVar4 = uVar4 & 0x1ffffffffffffffe;
        plVar2 = plVar2 + -uVar4;
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      do {
        if (plVar2 == plVar6 + -1) {
          *(long **)(param_1 + 0xa8) = plVar6 + -1;
          return;
        }
        plVar2 = plVar2 + -1;
      } while (plVar2 != (long *)0x0);
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
  }
  else {
    uVar4 = (long)plVar6 + (-8 - (long)plVar2);
    uVar3 = (uint)uVar4;
    if ((~uVar3 & 0x18) != 0) {
      uVar5 = (ulong)((uVar3 >> 3) + 1) & 3;
      do {
        if (*plVar2 == param_2) goto LAB_0097d300;
        uVar5 = uVar5 - 1;
        plVar2 = plVar2 + 1;
      } while (uVar5 != 0);
    }
    if (0x17 < uVar4) {
      plVar2 = plVar2 + 2;
      do {
        if (plVar2[-2] == param_2) {
          plVar2 = plVar2 + -2;
          goto LAB_0097d300;
        }
        if (plVar2[-1] == param_2) {
          plVar2 = plVar2 + -1;
          goto LAB_0097d300;
        }
        if (*plVar2 == param_2) goto LAB_0097d300;
        if (plVar2[1] == param_2) {
          plVar2 = plVar2 + 1;
          goto LAB_0097d300;
        }
        plVar1 = plVar2 + 2;
        plVar2 = plVar2 + 4;
      } while (plVar1 != plVar6);
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:1160: libc++ Hardening assertion __position != end() failed: vector::erase(iterator) called with a non-dereferenceable iterator\n"
            );
}


// ===== 0097d3a0  FUN_0097d3a0 =====

void FUN_0097d3a0(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_8;
  
  puVar1 = *(undefined8 **)(param_1 + 0xc0);
  local_8 = param_2;
  if (puVar1 < *(undefined8 **)(param_1 + 200)) {
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar2 = puVar1 + 1;
    *puVar1 = param_2;
  }
  else {
    puVar2 = (undefined8 *)FUN_009657b8(param_1 + 0xb8,&local_8);
  }
  *(undefined8 **)(param_1 + 0xc0) = puVar2;
  return;
}


// ===== 0097d408  FUN_0097d408 =====

void FUN_0097d408(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  
  plVar2 = *(long **)(param_1 + 0xb8);
  plVar6 = *(long **)(param_1 + 0xc0);
  if (plVar2 == plVar6) {
LAB_0097d4d8:
    if (plVar2 != plVar6) {
      memmove(plVar2,plVar2 + 1,(long)plVar6 - (long)(plVar2 + 1));
      plVar2 = *(long **)(param_1 + 0xc0);
      uVar5 = (ulong)((long)plVar2 + (-8 - ((long)plVar2 << 0x3d))) >> 3;
      uVar4 = (((long)plVar6 - (long)plVar2 << 0x3d) - ((long)plVar6 - (long)plVar2)) + 8U >> 3;
      if (uVar5 <= uVar4) {
        uVar4 = uVar5;
      }
      if ((1 < uVar4) && ((-(int)plVar2 & 7U) == 0)) {
        uVar4 = uVar4 & 0x1ffffffffffffffe;
        plVar2 = plVar2 + -uVar4;
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      do {
        if (plVar2 == plVar6 + -1) {
          *(long **)(param_1 + 0xc0) = plVar6 + -1;
          return;
        }
        plVar2 = plVar2 + -1;
      } while (plVar2 != (long *)0x0);
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
  }
  else {
    uVar4 = (long)plVar6 + (-8 - (long)plVar2);
    uVar3 = (uint)uVar4;
    if ((~uVar3 & 0x18) != 0) {
      uVar5 = (ulong)((uVar3 >> 3) + 1) & 3;
      do {
        if (*plVar2 == param_2) goto LAB_0097d4d8;
        uVar5 = uVar5 - 1;
        plVar2 = plVar2 + 1;
      } while (uVar5 != 0);
    }
    if (0x17 < uVar4) {
      plVar2 = plVar2 + 2;
      do {
        if (plVar2[-2] == param_2) {
          plVar2 = plVar2 + -2;
          goto LAB_0097d4d8;
        }
        if (plVar2[-1] == param_2) {
          plVar2 = plVar2 + -1;
          goto LAB_0097d4d8;
        }
        if (*plVar2 == param_2) goto LAB_0097d4d8;
        if (plVar2[1] == param_2) {
          plVar2 = plVar2 + 1;
          goto LAB_0097d4d8;
        }
        plVar1 = plVar2 + 2;
        plVar2 = plVar2 + 4;
      } while (plVar1 != plVar6);
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:1160: libc++ Hardening assertion __position != end() failed: vector::erase(iterator) called with a non-dereferenceable iterator\n"
            );
}


// ===== 0097d578  FUN_0097d578 =====

void FUN_0097d578(undefined8 *param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 extraout_x1;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_8;
  
  iVar1 = *(int *)((long)param_1 + 0x2c);
  if (iVar1 == param_2) {
    return;
  }
  *(int *)(param_1 + 5) = *(int *)(param_1 + 5) + 1;
  if (param_2 == 3) {
    *(undefined4 *)((long)param_1 + 0x2c) = 3;
  }
  else {
    *(int *)((long)param_1 + 0x2c) = param_2;
    if (iVar1 != 3) goto LAB_0097d638;
  }
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../call/adaptation/video_stream_adapter.cc",0x7c1,
                 "Resetting restrictions");
  }
  *(int *)(param_1 + 5) = *(int *)(param_1 + 5) + 1;
  FUN_0097c98c(&local_58);
  local_28 = 0;
  param_1[0x1b] = uStack_50;
  param_1[0x1a] = local_58;
  param_1[0x1d] = uStack_40;
  param_1[0x1c] = local_48;
  param_1[0x1f] = uStack_30;
  param_1[0x1e] = local_38;
  param_1[0x20] = 0;
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
LAB_0097d638:
  (**(code **)(*(long *)*param_1 + 0x10))(&local_58);
  local_8 = 0;
  FUN_0097d020(param_1,extraout_x1,&local_8);
  return;
}


// ===== 0097d670  FUN_0097d670 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0097d670(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  long *plVar7;
  undefined8 *local_168 [2];
  char cStack_151;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 *local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 *local_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  uStack_b8 = _UNK_0022a2f8;
  local_c0 = _DAT_0022a2f0;
  uStack_a8 = _UNK_0022a308;
  uStack_b0 = _DAT_0022a300;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_98 = _UNK_0022a318;
  local_a0 = _DAT_0022a310;
  local_88 = _UNK_0022a328;
  uStack_90 = _DAT_0022a320;
  FUN_0097d860(&local_c0);
  if ((char)local_80 == '\0') {
    puVar1 = *(undefined8 **)(param_2 + 0xb8);
    puVar2 = *(undefined8 **)(param_2 + 0xc0);
    uVar6 = 0;
    uVar5 = (undefined4)uStack_b8;
    uStack_148 = uStack_b0;
    local_150 = uStack_b8;
    uStack_138 = local_a0;
    uStack_140 = uStack_a8;
    uStack_128 = uStack_90;
    local_130 = uStack_98;
    local_120 = local_88;
    for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
      plVar7 = (long *)*puVar1;
      uVar4 = (**(code **)(*plVar7 + 0x18))(plVar7,param_3,param_2 + 0xd0,&local_150);
      if ((uVar4 & 1) == 0) {
        uVar4 = FUN_00417e08();
        if ((uVar4 & 1) == 0) {
          (**(code **)(*plVar7 + 0x10))(local_168,plVar7);
          FUN_00623bb0(&DAT_001f4eff,"../../call/adaptation/video_stream_adapter.cc",0xae1,
                       "Not adapting up because constraint \"",local_168,"\" disallowed it");
          if (cStack_151 < '\0') {
            operator_delete(local_168[0]);
          }
        }
        uVar6 = 1;
        uVar5 = 5;
      }
    }
    local_150._4_4_ = (undefined4)((ulong)local_150 >> 0x20);
    uVar4 = (ulong)local_80 >> 8;
    local_80 = (undefined1 *)CONCAT71((int7)uVar4,uVar6);
    uVar4 = (ulong)uStack_b8 >> 0x20;
    uStack_b8 = CONCAT44((int)uVar4,uVar5);
  }
  local_d0 = local_80;
  uStack_108 = uStack_b8;
  local_110 = local_c0;
  uStack_f8 = uStack_a8;
  uStack_100 = uStack_b0;
  local_150 = CONCAT44(local_150._4_4_,*(undefined4 *)(param_2 + 0x28));
  uStack_e8 = uStack_98;
  local_f0 = local_a0;
  uStack_d8 = local_88;
  local_e0 = uStack_90;
  uStack_148 = param_3;
  if (((ulong)local_80 & 0xff) != 0xff) {
    local_168[0] = &local_150;
    (*(code *)(&PTR_FUN_00d3f258)[(ulong)local_80 & 0xff])(param_1,local_168,(ulong)&local_110 | 8);
    if (*(long *)(lVar3 + 0x28) == local_78) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  FUN_005ee558();
}


// ===== 0097d860  FUN_0097d860 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0097d860(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  ulong uVar6;
  undefined4 uVar7;
  
  uVar6 = FUN_0097f038(param_3);
  if (((uVar6 & 1) == 0) ||
     ((*(int *)(param_2 + 0x2c) == 2 && (iVar5 = FUN_0097f008(param_3), iVar5 < 2)))) {
    uVar7 = 3;
    goto LAB_0097d90c;
  }
  if ((*(char *)(param_2 + 0x38) == '\x01') && (*(char *)(param_2 + 0x30) == '\x01')) {
    iVar5 = *(int *)(param_2 + 0x2c);
    if (iVar5 == 1) {
      uVar6 = FUN_0097effc(param_3);
      if ((uVar6 >> 0x20 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005dc08c();
      }
      if ((*(byte *)(param_2 + 0x38) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1054: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                  );
      }
      if ((int)uVar6 <= *(int *)(param_2 + 0x34)) {
        uVar7 = 2;
        goto LAB_0097d90c;
      }
      goto LAB_0097d8ec;
    }
  }
  else {
LAB_0097d8ec:
    iVar5 = *(int *)(param_2 + 0x2c);
  }
  uVar4 = _UNK_0022a308;
  uVar3 = _DAT_0022a300;
  uVar2 = _UNK_0022a2f8;
  uVar1 = _DAT_0022a2f0;
  if (iVar5 < 2) {
    if (iVar5 == 0) {
      uVar7 = 4;
LAB_0097d90c:
      *(undefined4 *)(param_1 + 1) = uVar7;
      *(undefined1 *)(param_1 + 8) = 1;
      return;
    }
    if (iVar5 == 1) {
LAB_0097d978:
      FUN_0097dca0(param_1,param_3,param_2 + 0xd0);
      return;
    }
  }
  else {
    if (iVar5 == 2) {
      FUN_0097da74(param_1,param_2,param_3,param_2 + 0xd0);
      return;
    }
    if (iVar5 == 3) {
      param_1[8] = &DAT_aaaaaaaaaaaaaaaa;
      param_1[1] = uVar2;
      *param_1 = uVar1;
      param_1[3] = uVar4;
      param_1[2] = uVar3;
      uVar3 = _UNK_0022a328;
      uVar2 = _DAT_0022a320;
      uVar1 = _DAT_0022a310;
      param_1[5] = _UNK_0022a318;
      param_1[4] = uVar1;
      param_1[7] = uVar3;
      param_1[6] = uVar2;
      FUN_0097da74(param_1,param_2,param_3,param_2 + 0xd0);
      if (*(char *)(param_1 + 8) == '\0') {
        return;
      }
      goto LAB_0097d978;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061ff28();
}


// ===== 0097d9e8  FUN_0097d9e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0097d9e8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*(long *)*param_2 + 0x10))(&local_40);
  uVar4 = _UNK_0022a2e8;
  uVar3 = _DAT_0022a2e0;
  uVar2 = _DAT_0022a2d0;
  iVar1 = *(int *)(param_2 + 5);
  param_1[9] = _UNK_0022a2d8;
  param_1[8] = uVar2;
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  uVar5 = _UNK_0022a2a8;
  uVar4 = _DAT_0022a2a0;
  uVar3 = _UNK_0022a298;
  uVar2 = _DAT_0022a290;
  *(int *)(param_2 + 5) = iVar1 + 1;
  param_1[1] = uVar3;
  *param_1 = uVar2;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  uVar4 = _UNK_0022a2c8;
  uVar3 = _DAT_0022a2c0;
  uVar2 = _DAT_0022a2b0;
  param_1[5] = _UNK_0022a2b8;
  param_1[4] = uVar2;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  FUN_0097d670(param_1,param_2,&local_40);
  return;
}


// ===== 0097da74  FUN_0097da74 =====

void FUN_0097da74(long param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  double *pdVar7;
  double dVar8;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if (*(int *)(param_2 + 0x2c) == 3) {
    uVar6 = FUN_0097f02c(param_3);
    uVar5 = FUN_0097effc(param_3);
    if ((uVar5 >> 0x20 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005dc08c();
    }
    uVar2 = (undefined4)uVar5;
    if ((uVar6 & 0x100000000) != 0) {
      uVar2 = (undefined4)uVar6;
    }
    uVar3 = FUN_0097f014(param_3);
    uVar4 = FUN_00980308(param_2 + 0x10,uVar3,uVar2);
    if (uVar4 == 0x7fffffff) {
      if (*(int *)((long)param_4 + 0x34) < 2) {
        uVar4 = 0x7fffffff;
      }
      else {
        uVar6 = FUN_00417e08();
        if ((uVar6 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../call/adaptation/video_stream_adapter.cc",0x1251,
                       "Modifying framerate due to remaining fps count.");
        }
        uVar4 = *(uint *)((long)param_4 + 0x34) ^ 0x7fffffff;
      }
    }
    pdVar7 = (double *)FUN_0097cbb0(param_4);
    if ((*(char *)(pdVar7 + 1) != '\x01') || ((int)uVar4 <= (int)*pdVar7)) goto LAB_0097dc74;
  }
  else {
    iVar1 = FUN_0097f008(param_3);
    uVar4 = 0x7fffffff;
    if (iVar1 != 0x7fffffff) {
      uVar4 = (iVar1 * 3) / 2;
    }
  }
  if (*(int *)((long)param_4 + 0x34) == 1) {
    uVar6 = FUN_00417e08();
    if ((uVar6 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../call/adaptation/video_stream_adapter.cc",0x12c9,
                   "Removing framerate down-scaling setting.");
    }
    uVar4 = 0x7fffffff;
  }
  pdVar7 = (double *)FUN_0097cbb0(param_4);
  if ((*(char *)(pdVar7 + 1) == '\x01') && ((int)*pdVar7 < (int)uVar4)) {
    uVar6 = FUN_00417e08();
    if ((uVar6 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e94,"../../call/adaptation/video_stream_adapter.cc",0x1301,
                   "Scaling up framerate: ",uVar4);
    }
    dVar8 = (double)(int)uVar4;
    uStack_58 = param_4[5];
    local_60 = param_4[4];
    uStack_78 = param_4[1];
    local_80 = *param_4;
    uStack_68 = param_4[3];
    uStack_70 = param_4[2];
    local_50 = param_4[6];
    if (uVar4 == 0x7fffffff) {
      dVar8 = 0.0;
    }
    FUN_0097cbdc(&local_80,dVar8,uVar4 != 0x7fffffff);
    *(undefined1 *)(param_1 + 0x40) = 0;
    local_50 = CONCAT44(local_50._4_4_ + -1,(undefined4)local_50);
    *(undefined8 *)(param_1 + 0x10) = uStack_78;
    *(undefined8 *)(param_1 + 8) = local_80;
    *(undefined8 *)(param_1 + 0x20) = uStack_68;
    *(undefined8 *)(param_1 + 0x18) = uStack_70;
    *(undefined8 *)(param_1 + 0x30) = uStack_58;
    *(undefined8 *)(param_1 + 0x28) = local_60;
    *(undefined8 *)(param_1 + 0x38) = local_50;
    return;
  }
LAB_0097dc74:
  *(undefined4 *)(param_1 + 8) = 1;
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}


// ===== 0097dca0  FUN_0097dca0 =====

void FUN_0097dca0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  uVar4 = FUN_0097effc();
  if ((uVar4 >> 0x20 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_005dc08c();
  }
  if (*(int *)(param_3 + 6) == 1) {
    uVar4 = FUN_00417e08();
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../call/adaptation/video_stream_adapter.cc",0x1109,
                   "Removing resolution down-scaling setting.");
    }
  }
  else if ((int)uVar4 != 0x7fffffff) {
    bVar3 = false;
    uVar8 = ((int)uVar4 * 5) / 3;
    iVar9 = (int)(uVar8 * 0xc) / 5;
    goto LAB_0097dd58;
  }
  uVar8 = 0x7fffffff;
  bVar3 = true;
  iVar9 = 0x7fffffff;
LAB_0097dd58:
  piVar5 = (int *)FUN_0097cb9c(param_3);
  if (((char)piVar5[2] == '\x01') && (*piVar5 < iVar9)) {
    if (bVar3) {
      uVar4 = 0x7fffffff;
    }
    else {
      uVar4 = (long)(int)(uVar8 * 0xc) / 5;
    }
    uStack_78 = param_3[1];
    local_80 = *param_3;
    uStack_68 = param_3[3];
    uStack_70 = param_3[2];
    uStack_58 = param_3[5];
    local_60 = param_3[4];
    local_50 = param_3[6];
    uVar6 = FUN_00417e08();
    if ((uVar6 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e94,"../../call/adaptation/video_stream_adapter.cc",0x1159,
                   "Scaling up resolution, max pixels: ",uVar4 & 0xffffffff);
    }
    uVar7 = (uint)uVar4;
    bVar3 = uVar7 != 0x7fffffff;
    uVar1 = uVar7 & 0xff;
    if (!bVar3) {
      uVar1 = 0;
    }
    uVar2 = uVar8 & 0xff;
    if (!bVar3) {
      uVar2 = 0;
    }
    FUN_0097cbbc(&local_80,(ulong)uVar1 | (long)(int)(uVar7 & 0xffffff00),bVar3);
    FUN_0097cbcc(&local_80,(ulong)uVar2 | (long)(int)(uVar8 & 0xffffff00),bVar3);
    *(undefined1 *)(param_1 + 0x40) = 0;
    local_50 = CONCAT44(local_50._4_4_,(int)local_50 + -1);
    *(undefined8 *)(param_1 + 0x10) = uStack_78;
    *(undefined8 *)(param_1 + 8) = local_80;
    *(undefined8 *)(param_1 + 0x20) = uStack_68;
    *(undefined8 *)(param_1 + 0x18) = uStack_70;
    *(undefined8 *)(param_1 + 0x30) = uStack_58;
    *(undefined8 *)(param_1 + 0x28) = local_60;
    *(undefined8 *)(param_1 + 0x38) = local_50;
  }
  else {
    *(undefined4 *)(param_1 + 8) = 1;
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  return;
}


// ===== 0097de8c  FUN_0097de8c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0097de8c(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined1 *local_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  undefined1 *puStack_138;
  undefined4 *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 *local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined1 *puStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
  local_150 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_140 = &DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*(long *)*param_2 + 0x10))(&local_150);
  uStack_78 = _UNK_0022a308;
  uStack_80 = _DAT_0022a300;
  uStack_88 = _UNK_0022a2f8;
  local_90 = _DAT_0022a2f0;
  *(int *)(param_2 + 5) = *(int *)(param_2 + 5) + 1;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_68 = _UNK_0022a318;
  local_70 = _DAT_0022a310;
  uStack_58 = _UNK_0022a328;
  uStack_60 = _DAT_0022a320;
  FUN_0097e060(&local_90,param_2,&local_150,param_2 + 0x1a);
  uVar3 = FUN_0097f02c(&local_150);
  if ((uVar3 >> 0x20 & 1) == 0) {
    uVar3 = FUN_0097effc(&local_150);
    if ((uVar3 >> 0x20 & 1) == 0) goto LAB_0097df84;
    uVar3 = FUN_0097effc(&local_150);
  }
  else {
    uVar3 = FUN_0097f02c(&local_150);
  }
  if ((uVar3 >> 0x20 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_005dc08c();
  }
  iVar2 = FUN_0097f020(&local_150);
  if (((int)uVar3 * 3) / 5 < iVar2) {
    (**(code **)(*(long *)param_2[1] + 0x58))();
  }
LAB_0097df84:
  if ((*(int *)((long)param_2 + 0x2c) == 3) && ((char)local_50 == '\0')) {
    FUN_0097e1e8(&local_d8,param_2,&local_150,(ulong)&local_90 | 8);
    local_90 = CONCAT44(uStack_d4,local_d8);
    uStack_88 = puStack_d0;
    uStack_78 = uStack_c0;
    uStack_80 = local_c8;
    local_50 = local_98;
    uStack_68 = uStack_b0;
    local_70 = uStack_b8;
    uStack_58 = uStack_a0;
    uStack_60 = local_a8;
  }
  local_d8 = *(undefined4 *)(param_2 + 5);
  local_e0 = local_50;
  uStack_118 = uStack_88;
  local_120 = local_90;
  uStack_108 = uStack_78;
  uStack_110 = uStack_80;
  uStack_f8 = uStack_68;
  local_100 = local_70;
  uStack_e8 = uStack_58;
  uStack_f0 = uStack_60;
  if (((ulong)local_50 & 0xff) == 0xff) {
    puStack_d0 = (undefined1 *)&local_150;
                    /* WARNING: Subroutine does not return */
    FUN_005ee558();
  }
  local_128 = &local_d8;
  puStack_d0 = (undefined1 *)&local_150;
  (*(code *)(&PTR_FUN_00d3f258)[(ulong)local_50 & 0xff])(param_1,&local_128,(ulong)&local_120 | 8);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0097e060  FUN_0097e060 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0097e060(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  ulong uVar6;
  undefined4 uVar7;
  
  uVar6 = FUN_0097f038(param_3);
  if (((uVar6 & 1) == 0) ||
     ((*(int *)(param_2 + 0x2c) == 2 && (iVar5 = FUN_0097f008(param_3), iVar5 < 2)))) {
    uVar7 = 3;
    goto LAB_0097e0e0;
  }
  if ((*(char *)(param_2 + 0x38) == '\x01') && ((*(byte *)(param_2 + 0x30) & 1) == 0)) {
    iVar5 = *(int *)(param_2 + 0x2c);
    if (iVar5 == 1) {
      uVar6 = FUN_0097effc(param_3);
      if ((uVar6 >> 0x20 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005dc08c();
      }
      if ((*(byte *)(param_2 + 0x38) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1054: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                  );
      }
      if (*(int *)(param_2 + 0x34) <= (int)uVar6) {
        uVar7 = 2;
        goto LAB_0097e0e0;
      }
      goto LAB_0097e0c0;
    }
  }
  else {
LAB_0097e0c0:
    iVar5 = *(int *)(param_2 + 0x2c);
  }
  uVar4 = _UNK_0022a308;
  uVar3 = _DAT_0022a300;
  uVar2 = _UNK_0022a2f8;
  uVar1 = _DAT_0022a2f0;
  if (iVar5 < 2) {
    if (iVar5 == 0) {
      uVar7 = 4;
LAB_0097e0e0:
      *(undefined4 *)(param_1 + 1) = uVar7;
      *(undefined1 *)(param_1 + 8) = 1;
      return;
    }
    if (iVar5 == 1) {
LAB_0097e14c:
      FUN_0097e4ac(param_1,param_3,param_4);
      return;
    }
  }
  else {
    if (iVar5 == 2) {
      FUN_0097e2f8(param_1,param_2,param_3,param_4);
      return;
    }
    if (iVar5 == 3) {
      param_1[8] = &DAT_aaaaaaaaaaaaaaaa;
      param_1[1] = uVar2;
      *param_1 = uVar1;
      param_1[3] = uVar4;
      param_1[2] = uVar3;
      uVar3 = _UNK_0022a328;
      uVar2 = _DAT_0022a320;
      uVar1 = _DAT_0022a310;
      param_1[5] = _UNK_0022a318;
      param_1[4] = uVar1;
      param_1[7] = uVar3;
      param_1[6] = uVar2;
      FUN_0097e2f8(param_1,param_2,param_3,param_4);
      if (*(char *)(param_1 + 8) == '\0') {
        return;
      }
      goto LAB_0097e14c;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061ff28();
}


// ===== 0097e1e8  FUN_0097e1e8 =====

void FUN_0097e1e8(long param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  double *pdVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar3 = FUN_0097f02c(param_3);
  uVar4 = FUN_0097effc(param_3);
  if ((uVar4 >> 0x20 & 1) != 0) {
    uVar1 = (undefined4)uVar4;
    if ((uVar3 & 0x100000000) != 0) {
      uVar1 = (undefined4)uVar3;
    }
    uVar3 = FUN_00980644(param_2 + 0x10,uVar1);
    if (((*(int *)(param_2 + 0x104) < *(int *)((long)param_4 + 0x34)) && ((uVar3 >> 0x20 & 1) != 0))
       && (iVar2 = FUN_0097f008(param_3), 0 < iVar2)) {
      iVar2 = FUN_0097f008(param_3);
      pdVar5 = (double *)FUN_0097cbb0(param_4);
      if (((ulong)pdVar5[1] & 1) == 0) goto LAB_0097e2f4;
      if ((int)((double)iVar2 - *pdVar5) < (int)uVar3) {
        FUN_0097e060(param_1,param_2,param_3,param_4);
        return;
      }
    }
    uVar8 = param_4[1];
    uVar7 = *param_4;
    uVar10 = param_4[3];
    uVar9 = param_4[2];
    uVar11 = param_4[4];
    uVar6 = param_4[6];
    *(undefined8 *)(param_1 + 0x30) = param_4[5];
    *(undefined8 *)(param_1 + 0x28) = uVar11;
    *(undefined8 *)(param_1 + 0x10) = uVar8;
    *(undefined8 *)(param_1 + 8) = uVar7;
    *(undefined8 *)(param_1 + 0x20) = uVar10;
    *(undefined8 *)(param_1 + 0x18) = uVar9;
    *(undefined8 *)(param_1 + 0x38) = uVar6;
    *(undefined1 *)(param_1 + 0x40) = 0;
    return;
  }
LAB_0097e2f4:
                    /* WARNING: Subroutine does not return */
  FUN_005dc08c();
}


// ===== 0097e2f8  FUN_0097e2f8 =====

void FUN_0097e2f8(long param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  double *pdVar6;
  ulong uVar7;
  uint uVar8;
  double dVar9;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if (*(int *)(param_2 + 0x2c) == 3) {
    uVar7 = FUN_0097f02c(param_3);
    uVar5 = FUN_0097effc(param_3);
    if ((uVar5 >> 0x20 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005dc08c();
    }
    uVar2 = (undefined4)uVar5;
    if ((uVar7 & 0x100000000) != 0) {
      uVar2 = (undefined4)uVar7;
    }
    uVar3 = FUN_0097f014(param_3);
    uVar4 = FUN_00980254(param_2 + 0x10,uVar3,uVar2);
  }
  else if (*(int *)(param_2 + 0x2c) == 2) {
    iVar1 = FUN_0097f008(param_3);
    uVar4 = (iVar1 << 1) / 3;
  }
  else {
    iVar1 = FUN_0097f008(param_3);
    uVar4 = (iVar1 << 1) / 3;
  }
  uVar8 = uVar4;
  if ((int)uVar4 < 3) {
    uVar8 = 2;
  }
  pdVar6 = (double *)FUN_0097cbb0(param_4);
  iVar1 = (int)*pdVar6;
  if (*(char *)(pdVar6 + 1) == '\0') {
    iVar1 = 0x7fffffff;
  }
  if ((int)uVar8 < iVar1) {
    uStack_78 = param_4[1];
    local_80 = *param_4;
    uStack_68 = param_4[3];
    uStack_70 = param_4[2];
    uStack_58 = param_4[5];
    local_60 = param_4[4];
    local_50 = param_4[6];
    uVar7 = FUN_00417e08();
    if ((uVar7 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e94,"../../call/adaptation/video_stream_adapter.cc",0x1099,
                   "Scaling down framerate: ",uVar8);
    }
    dVar9 = (double)uVar8;
    if (uVar4 == 0x7fffffff) {
      dVar9 = 0.0;
    }
    FUN_0097cbdc(&local_80,dVar9,uVar4 != 0x7fffffff);
    *(undefined1 *)(param_1 + 0x40) = 0;
    local_50 = CONCAT44(local_50._4_4_ + 1,(undefined4)local_50);
    *(undefined8 *)(param_1 + 0x10) = uStack_78;
    *(undefined8 *)(param_1 + 8) = local_80;
    *(undefined8 *)(param_1 + 0x20) = uStack_68;
    *(undefined8 *)(param_1 + 0x18) = uStack_70;
    *(undefined8 *)(param_1 + 0x30) = uStack_58;
    *(undefined8 *)(param_1 + 0x28) = local_60;
    *(undefined8 *)(param_1 + 0x38) = local_50;
  }
  else {
    *(undefined4 *)(param_1 + 8) = 1;
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  return;
}


// ===== 0097e4ac  FUN_0097e4ac =====

void FUN_0097e4ac(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  uVar2 = FUN_0097effc();
  if ((uVar2 >> 0x20 & 1) != 0) {
    uVar3 = FUN_0097f02c(param_2);
    uVar4 = FUN_0097effc(param_2);
    if ((uVar4 >> 0x20 & 1) != 0) {
      uVar2 = (long)((int)uVar2 * 3) / 5;
      piVar5 = (int *)FUN_0097cb9c(param_3);
      uVar6 = (uint)uVar2;
      if (((char)piVar5[2] != '\x01') || ((int)uVar6 < *piVar5)) {
        iVar7 = (int)uVar4;
        if ((uVar3 & 0x100000000) != 0) {
          iVar7 = (int)uVar3;
        }
        iVar1 = FUN_0097f020(param_2);
        if (iVar1 <= (iVar7 * 3) / 5) {
          uStack_78 = param_3[1];
          local_80 = *param_3;
          uStack_68 = param_3[3];
          uStack_70 = param_3[2];
          uStack_58 = param_3[5];
          local_60 = param_3[4];
          local_50 = param_3[6];
          uVar3 = FUN_00417e08();
          if ((uVar3 & 1) == 0) {
            FUN_00623bb0(&DAT_001f4e94,"../../call/adaptation/video_stream_adapter.cc",0xfa1,
                         "Scaling down resolution, max pixels: ",uVar2 & 0xffffffff);
          }
          FUN_0097cbbc(&local_80,(long)(int)(uVar6 & 0xffffff00) | (ulong)(uVar6 & 0xff),1);
          FUN_0097cbcc(&local_80,0,0);
          *(undefined1 *)(param_1 + 0x40) = 0;
          local_50 = CONCAT44(local_50._4_4_,(int)local_50 + 1);
          *(undefined8 *)(param_1 + 0x10) = uStack_78;
          *(undefined8 *)(param_1 + 8) = local_80;
          *(undefined8 *)(param_1 + 0x20) = uStack_68;
          *(undefined8 *)(param_1 + 0x18) = uStack_70;
          *(undefined8 *)(param_1 + 0x30) = uStack_58;
          *(undefined8 *)(param_1 + 0x28) = local_60;
          *(undefined8 *)(param_1 + 0x38) = local_50;
          return;
        }
      }
      *(undefined4 *)(param_1 + 8) = 1;
      *(undefined1 *)(param_1 + 0x40) = 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_005dc08c();
}


// ===== 0097e630  FUN_0097e630 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0097e630(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 ***pppuVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  undefined8 **ppuVar9;
  undefined8 **ppuVar10;
  undefined8 **ppuVar11;
  undefined4 uVar12;
  undefined1 *local_190;
  undefined1 *puStack_188;
  undefined1 *puStack_180;
  undefined1 *puStack_178;
  undefined8 *local_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *local_150;
  undefined8 *puStack_148;
  undefined8 *local_140;
  undefined8 **local_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined8 *local_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *local_f0;
  undefined8 **local_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *local_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined1 *local_a0;
  undefined8 **local_90;
  undefined1 **ppuStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *local_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *local_58;
  undefined8 *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
  local_190 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_180 = &DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*(long *)*param_2 + 0x10))(&local_190);
  ppuVar11 = _UNK_0022a328;
  ppuVar10 = _DAT_0022a320;
  ppuVar9 = _UNK_0022a318;
  ppuVar8 = _DAT_0022a310;
  ppuVar7 = _UNK_0022a308;
  ppuVar6 = _DAT_0022a300;
  ppuVar5 = _UNK_0022a2f8;
  pppuVar1 = _DAT_0022a2f0;
  iVar2 = *(int *)((long)param_2 + 0x2c);
  if (iVar2 < 2) {
    if (iVar2 != 0) {
      if (iVar2 != 1) {
LAB_0097e838:
                    /* WARNING: Subroutine does not return */
        FUN_0061ff28();
      }
      FUN_0097de8c(param_1,param_2);
      goto LAB_0097e7b8;
    }
    uVar3 = *(undefined4 *)(param_2 + 5);
    uVar12 = 4;
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 != 3) goto LAB_0097e838;
      local_50 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
      ppuStack_88 = (undefined1 **)_UNK_0022a2f8;
      local_90 = _DAT_0022a2f0;
      puStack_78 = _UNK_0022a308;
      puStack_80 = _DAT_0022a300;
      puStack_68 = _UNK_0022a318;
      local_70 = _DAT_0022a310;
      local_58 = _UNK_0022a328;
      puStack_60 = _DAT_0022a320;
      FUN_0097e060(&local_90,param_2,&local_190,param_2 + 0x1a);
      if ((char)local_50 == '\0') {
        local_140 = local_58;
        puStack_168 = puStack_80;
        local_170 = ppuStack_88;
        puStack_158 = local_70;
        puStack_160 = puStack_78;
        puStack_148 = puStack_60;
        local_150 = puStack_68;
        if (*(int *)(param_2 + 0x20) < (int)local_58) goto LAB_0097e72c;
        local_a0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_d8 = ppuVar5;
        local_e0 = pppuVar1;
        puStack_c8 = ppuVar7;
        puStack_d0 = ppuVar6;
        puStack_b8 = ppuVar9;
        local_c0 = ppuVar8;
        puStack_a8 = ppuVar11;
        puStack_b0 = ppuVar10;
        FUN_0097e4ac(&local_e0,&local_190,&local_170);
        pppuVar1 = &local_e0;
        if ((char)local_a0 != '\0') {
          pppuVar1 = &local_90;
        }
        puStack_128 = pppuVar1[1];
        local_130 = *pppuVar1;
        puStack_118 = pppuVar1[3];
        puStack_120 = pppuVar1[2];
        local_f0 = pppuVar1[8];
        puStack_108 = pppuVar1[5];
        local_110 = pppuVar1[4];
        puStack_f8 = pppuVar1[7];
        puStack_100 = pppuVar1[6];
      }
      else {
LAB_0097e72c:
        local_f0 = local_50;
        puStack_128 = ppuStack_88;
        local_130 = local_90;
        puStack_118 = puStack_78;
        puStack_120 = puStack_80;
        puStack_108 = puStack_68;
        local_110 = local_70;
        puStack_f8 = local_58;
        puStack_100 = puStack_60;
      }
      local_90 = (undefined8 **)CONCAT44(local_90._4_4_,*(undefined4 *)(param_2 + 5));
      ppuStack_88 = &local_190;
      if (((ulong)local_f0 & 0xff) == 0xff) {
                    /* WARNING: Subroutine does not return */
        FUN_005ee558();
      }
      local_e0 = &local_90;
      (*(code *)(&PTR_FUN_00d3f258)[(ulong)local_f0 & 0xff])
                (param_1,&local_e0,(ulong)&local_130 | 8);
      goto LAB_0097e7b8;
    }
    uVar3 = *(undefined4 *)(param_2 + 5);
    uVar12 = 1;
  }
  *param_1 = uVar3;
  param_1[1] = uVar12;
  FUN_0097ef7c(param_1 + 2);
  FUN_0097c98c(param_1 + 10);
  *(undefined8 *)(param_1 + 0x16) = 0;
LAB_0097e7b8:
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0097e840  FUN_0097e840 =====

void FUN_0097e840(long param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (*(int *)(param_2 + 4) == 0) {
    uStack_58 = *(undefined8 *)(param_1 + 0xd8);
    local_60 = *(undefined8 *)(param_1 + 0xd0);
    uStack_48 = *(undefined8 *)(param_1 + 0xe8);
    uStack_50 = *(undefined8 *)(param_1 + 0xe0);
    uStack_38 = *(undefined8 *)(param_1 + 0xf8);
    local_40 = *(undefined8 *)(param_1 + 0xf0);
    uStack_88 = *(undefined8 *)(param_2 + 0x30);
    local_90 = *(undefined8 *)(param_2 + 0x28);
    uStack_78 = *(undefined8 *)(param_2 + 0x40);
    uStack_80 = *(undefined8 *)(param_2 + 0x38);
    uStack_68 = *(undefined8 *)(param_2 + 0x50);
    local_70 = *(undefined8 *)(param_2 + 0x48);
    uVar1 = FUN_0097cc2c(&local_60,&local_90);
    if ((uVar1 & 1) == 0) {
      uStack_b8 = *(undefined8 *)(param_1 + 0xd8);
      local_c0 = *(undefined8 *)(param_1 + 0xd0);
      uStack_a8 = *(undefined8 *)(param_1 + 0xe8);
      uStack_b0 = *(undefined8 *)(param_1 + 0xe0);
      uStack_98 = *(undefined8 *)(param_1 + 0xf8);
      local_a0 = *(undefined8 *)(param_1 + 0xf0);
      uStack_e8 = *(undefined8 *)(param_2 + 0x30);
      local_f0 = *(undefined8 *)(param_2 + 0x28);
      uStack_d8 = *(undefined8 *)(param_2 + 0x40);
      uStack_e0 = *(undefined8 *)(param_2 + 0x38);
      uStack_c8 = *(undefined8 *)(param_2 + 0x50);
      local_d0 = *(undefined8 *)(param_2 + 0x48);
      auVar9 = FUN_0097cbec(&local_c0,&local_f0);
      uVar2 = auVar9._8_8_;
      if ((auVar9 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
        if (*(char *)(param_1 + 0x38) == '\x01') {
          *(undefined1 *)(param_1 + 0x38) = 0;
        }
      }
      else {
        auVar9 = FUN_0097effc(param_2 + 8);
        uVar2 = auVar9._8_8_;
        if ((auVar9._0_8_ >> 0x20 & 1) == 0) goto LAB_0097e9a8;
        if (*(char *)(param_1 + 0x38) == '\x01') {
          *(undefined1 *)(param_1 + 0x38) = 0;
        }
        if (param_1 == -0x30) goto LAB_0097e994;
        *(undefined1 *)(param_1 + 0x30) = 0;
        *(int *)(param_1 + 0x34) = auVar9._0_4_;
        *(undefined1 *)(param_1 + 0x38) = 1;
      }
    }
    else {
      auVar9 = FUN_0097effc(param_2 + 8);
      uVar2 = auVar9._8_8_;
      if ((auVar9._0_8_ >> 0x20 & 1) == 0) {
LAB_0097e9a8:
                    /* WARNING: Subroutine does not return */
        FUN_005dc08c();
      }
      if (*(char *)(param_1 + 0x38) == '\x01') {
        *(undefined1 *)(param_1 + 0x38) = 0;
      }
      if (param_1 == -0x30) {
LAB_0097e994:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *(int *)(param_1 + 0x34) = auVar9._0_4_;
      *(undefined1 *)(param_1 + 0x30) = 1;
      *(undefined1 *)(param_1 + 0x38) = 1;
    }
    uVar5 = *(undefined8 *)(param_2 + 0x50);
    uVar4 = *(undefined8 *)(param_2 + 0x48);
    uVar6 = *(undefined8 *)(param_2 + 0x38);
    uVar3 = *(undefined8 *)(param_2 + 0x58);
    uVar8 = *(undefined8 *)(param_2 + 0x30);
    uVar7 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0xe0) = uVar6;
    *(undefined8 *)(param_1 + 0xf8) = uVar5;
    *(undefined8 *)(param_1 + 0xf0) = uVar4;
    *(undefined8 *)(param_1 + 0xd8) = uVar8;
    *(undefined8 *)(param_1 + 0xd0) = uVar7;
    *(undefined8 *)(param_1 + 0x100) = uVar3;
    FUN_0097d020(param_1,uVar2,param_3);
  }
  return;
}


// ===== 0097e9ac  FUN_0097e9ac =====

void FUN_0097e9ac(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*(long *)*param_2 + 0x10))(&local_50);
  uVar3 = param_4[1];
  uVar2 = *param_4;
  uVar5 = param_4[3];
  uVar4 = param_4[2];
  uVar1 = *param_3;
  *param_1 = *(undefined4 *)(param_2 + 5);
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 0xc) = uVar3;
  *(undefined8 *)(param_1 + 10) = uVar2;
  uVar3 = param_4[5];
  uVar2 = param_4[4];
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  *(undefined8 *)(param_1 + 0xe) = uVar4;
  *(undefined8 *)(param_1 + 0x14) = uVar3;
  *(undefined8 *)(param_1 + 0x12) = uVar2;
  *(undefined1 **)(param_1 + 4) = puStack_48;
  *(undefined1 **)(param_1 + 2) = local_50;
  *(undefined1 **)(param_1 + 8) = puStack_38;
  *(undefined1 **)(param_1 + 6) = puStack_40;
  *(undefined8 *)(param_1 + 0x16) = uVar1;
  return;
}


// ===== 0097ea38  FUN_0097ea38 =====

ulong FUN_0097ea38(int *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  byte bVar8;
  ulong uVar9;
  
  uVar6 = 0xaaaaaa;
  if (*param_1 == 2) {
    lVar5 = FUN_007b8ca4(param_1);
    if (*(char *)(lVar5 + 10) != '\0') {
      bVar3 = (char)param_1[0x8a] != '\x01';
      if (bVar3) {
        uVar7 = 0;
      }
      else {
        uVar7 = (ulong)(uint)(param_1[0x83] * param_1[0x82]);
        uVar6 = (uint)(param_1[0x83] * param_1[0x82]) >> 8;
      }
      uVar9 = (ulong)!bVar3;
      bVar8 = !bVar3;
      lVar5 = FUN_007b8ca4(param_1);
      if (*(byte *)(lVar5 + 10) < 2) goto LAB_0097eda0;
      if ((char)param_1[0xb2] == '\x01') {
        bVar8 = bVar8 + 1;
        uVar9 = 1;
        uVar7 = (ulong)(uint)(param_1[0xab] * param_1[0xaa]);
        uVar6 = (uint)(param_1[0xab] * param_1[0xaa]) >> 8;
      }
      lVar5 = FUN_007b8ca4(param_1);
      if (2 < *(byte *)(lVar5 + 10)) {
        if ((char)param_1[0xda] == '\x01') {
          bVar8 = bVar8 + 1;
          uVar9 = 1;
          uVar7 = (ulong)(uint)(param_1[0xd3] * param_1[0xd2]);
          uVar6 = (uint)(param_1[0xd3] * param_1[0xd2]) >> 8;
        }
        lVar5 = FUN_007b8ca4(param_1);
        if (3 < *(byte *)(lVar5 + 10)) {
          if ((char)param_1[0x102] == '\x01') {
            bVar8 = bVar8 + 1;
            uVar9 = 1;
            uVar7 = (ulong)(uint)(param_1[0xfb] * param_1[0xfa]);
            uVar6 = (uint)(param_1[0xfb] * param_1[0xfa]) >> 8;
          }
          lVar5 = FUN_007b8ca4(param_1);
          if (4 < *(byte *)(lVar5 + 10)) {
            if ((char)param_1[0x12a] == '\x01') {
              bVar8 = bVar8 + 1;
              uVar9 = 1;
              uVar7 = (ulong)(uint)(param_1[0x123] * param_1[0x122]);
              uVar6 = (uint)(param_1[0x123] * param_1[0x122]) >> 8;
            }
            lVar5 = FUN_007b8ca4(param_1);
            if (5 < *(byte *)(lVar5 + 10)) goto LAB_0097ede4;
          }
        }
      }
      goto LAB_0097ed98;
    }
  }
  else if ((*param_1 == 3) && ((*(ushort *)(param_1 + 0x155) >> 8 & 1) != 0)) {
    iVar4 = FUN_0096a3b0();
    if (0 < iVar4) {
      bVar3 = (*(byte *)(param_1 + 0x8a) & 1) == 0;
      if (bVar3) {
        uVar7 = 0;
      }
      else {
        uVar7 = (ulong)(uint)(param_1[0x83] * param_1[0x82]);
        uVar6 = (uint)(param_1[0x83] * param_1[0x82]) >> 8;
      }
      uVar9 = (ulong)!bVar3;
      bVar8 = !bVar3;
      if ((*(ushort *)(param_1 + 0x155) >> 8 & 1) == 0) {
LAB_0097edd0:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1074: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                  );
      }
      iVar4 = FUN_0096a3b0();
      if (iVar4 < 2) goto LAB_0097eda0;
      if ((char)param_1[0xb2] == '\x01') {
        bVar8 = bVar8 + 1;
        uVar9 = 1;
        uVar7 = (ulong)(uint)(param_1[0xab] * param_1[0xaa]);
        uVar6 = (uint)(param_1[0xab] * param_1[0xaa]) >> 8;
      }
      if ((*(ushort *)(param_1 + 0x155) >> 8 & 1) == 0) goto LAB_0097edd0;
      iVar4 = FUN_0096a3b0();
      if (2 < iVar4) {
        if ((char)param_1[0xda] == '\x01') {
          bVar8 = bVar8 + 1;
          uVar9 = 1;
          uVar7 = (ulong)(uint)(param_1[0xd3] * param_1[0xd2]);
          uVar6 = (uint)(param_1[0xd3] * param_1[0xd2]) >> 8;
        }
        if ((*(ushort *)(param_1 + 0x155) >> 8 & 1) == 0) goto LAB_0097edd0;
        iVar4 = FUN_0096a3b0();
        if (3 < iVar4) {
          if ((char)param_1[0x102] == '\x01') {
            bVar8 = bVar8 + 1;
            uVar9 = 1;
            uVar7 = (ulong)(uint)(param_1[0xfb] * param_1[0xfa]);
            uVar6 = (uint)(param_1[0xfb] * param_1[0xfa]) >> 8;
          }
          if ((*(ushort *)(param_1 + 0x155) >> 8 & 1) == 0) goto LAB_0097edd0;
          iVar4 = FUN_0096a3b0();
          if (4 < iVar4) {
            if ((char)param_1[0x12a] == '\x01') {
              bVar8 = bVar8 + 1;
              uVar9 = 1;
              uVar7 = (ulong)(uint)(param_1[0x123] * param_1[0x122]);
              uVar6 = (uint)(param_1[0x123] * param_1[0x122]) >> 8;
            }
            if ((*(ushort *)(param_1 + 0x155) >> 8 & 1) == 0) goto LAB_0097edd0;
            iVar4 = FUN_0096a3b0();
            if (5 < iVar4) goto LAB_0097ede4;
          }
        }
      }
LAB_0097ed98:
      if (1 < bVar8) {
        return 0xaaaaaa0000000000;
      }
      goto LAB_0097eda0;
    }
  }
  else {
    bVar1 = *(byte *)(param_1 + 8);
    if (bVar1 != 0) {
      if (bVar1 - 4 < 0xfffffffd) {
LAB_0097ede4:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(0x5512,0x97ede8);
        (*pcVar2)();
      }
      bVar3 = (char)param_1[0x12] != '\x01';
      if (bVar3) {
        uVar7 = 0;
      }
      else {
        uVar7 = (ulong)(uint)(param_1[0xb] * param_1[10]);
        uVar6 = (uint)(param_1[0xb] * param_1[10]) >> 8;
      }
      bVar8 = !bVar3;
      uVar9 = (ulong)!bVar3;
      if (bVar1 != 1) {
        if ((char)param_1[0x3a] == '\x01') {
          bVar8 = bVar8 + 1;
          uVar9 = 1;
          uVar7 = (ulong)(uint)(param_1[0x33] * param_1[0x32]);
          uVar6 = (uint)(param_1[0x33] * param_1[0x32]) >> 8;
        }
        if ((bVar1 != 2) && ((*(byte *)(param_1 + 0x62) & 1) != 0)) {
          bVar8 = bVar8 + 1;
          uVar9 = 1;
          uVar7 = (ulong)(uint)(param_1[0x5b] * param_1[0x5a]);
          uVar6 = (uint)(param_1[0x5b] * param_1[0x5a]) >> 8;
        }
      }
      goto LAB_0097ed98;
    }
  }
  uVar7 = 0;
  uVar9 = 0;
LAB_0097eda0:
  return uVar9 << 0x20 | (ulong)uVar6 << 8 | uVar7 & 0xff | 0xaaaaaa0000000000;
}


// ===== 0097ede8  FUN_0097ede8 =====

undefined8 * FUN_0097ede8(long *param_1,undefined8 *param_2)

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
    FUN_0097eedc();
LAB_0097eed8:
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
    if (uVar5 >> 0x3d != 0) goto LAB_0097eed8;
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


// ===== 0097eedc  FUN_0097eedc =====

void FUN_0097eedc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 0097eef4  FUN_0097eef4 =====

void FUN_0097eef4(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = *param_3;
  uVar6 = param_3[3];
  uVar5 = param_3[2];
  puVar3 = *(undefined8 **)((undefined4 *)*param_2 + 2);
  uVar1 = *(undefined4 *)*param_2;
  *(undefined8 *)(param_1 + 0xc) = param_3[1];
  *(undefined8 *)(param_1 + 10) = uVar2;
  uVar4 = param_3[5];
  uVar2 = param_3[4];
  *(undefined8 *)(param_1 + 0x10) = uVar6;
  *(undefined8 *)(param_1 + 0xe) = uVar5;
  *(undefined8 *)(param_1 + 0x14) = uVar4;
  *(undefined8 *)(param_1 + 0x12) = uVar2;
  uVar7 = puVar3[1];
  uVar6 = *puVar3;
  uVar5 = puVar3[3];
  uVar4 = puVar3[2];
  *param_1 = uVar1;
  param_1[1] = 0;
  uVar2 = param_3[6];
  *(undefined8 *)(param_1 + 4) = uVar7;
  *(undefined8 *)(param_1 + 2) = uVar6;
  *(undefined8 *)(param_1 + 8) = uVar5;
  *(undefined8 *)(param_1 + 6) = uVar4;
  *(undefined8 *)(param_1 + 0x16) = uVar2;
  return;
}


// ===== 0097ef34  FUN_0097ef34 =====

void FUN_0097ef34(undefined4 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = *param_3;
  *param_1 = *(undefined4 *)*param_2;
  param_1[1] = uVar1;
  FUN_0097ef7c(param_1 + 2);
  FUN_0097c98c(param_1 + 10);
  *(undefined8 *)(param_1 + 0x16) = 0;
  return;
}


// ===== 0097ef7c  FUN_0097ef7c =====

void FUN_0097ef7c(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xe100;
  param_1[0x18] = 0;
  param_1[0x1c] = 0;
  return;
}


// ===== 0097efa4  FUN_0097efa4 =====

void FUN_0097efa4(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}


// ===== 0097efb0  FUN_0097efb0 =====

void FUN_0097efb0(long param_1,undefined8 param_2)

{
  *(int *)(param_1 + 4) = (int)param_2;
  *(char *)(param_1 + 8) = (char)((ulong)param_2 >> 0x20);
  return;
}


// ===== 0097efc4  FUN_0097efc4 =====

void FUN_0097efc4(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}


// ===== 0097efd0  FUN_0097efd0 =====

void FUN_0097efd0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}


// ===== 0097efdc  FUN_0097efdc =====

void FUN_0097efdc(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}


// ===== 0097efe8  FUN_0097efe8 =====

void FUN_0097efe8(long param_1,undefined8 param_2)

{
  *(int *)(param_1 + 0x18) = (int)param_2;
  *(char *)(param_1 + 0x1c) = (char)((ulong)param_2 >> 0x20);
  return;
}


// ===== 0097effc  FUN_0097effc =====

undefined8 FUN_0097effc(long param_1)

{
  return *(undefined8 *)(param_1 + 4);
}


// ===== 0097f008  FUN_0097f008 =====

undefined4 FUN_0097f008(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


// ===== 0097f014  FUN_0097f014 =====

undefined4 FUN_0097f014(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}


// ===== 0097f020  FUN_0097f020 =====

undefined4 FUN_0097f020(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


// ===== 0097f02c  FUN_0097f02c =====

undefined8 FUN_0097f02c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


// ===== 0097f038  FUN_0097f038 =====

byte FUN_0097f038(char *param_1)

{
  if (*param_1 == '\x01') {
    return param_1[8] & 1;
  }
  return 0;
}


// ===== 0097f05c  FUN_0097f05c =====

void FUN_0097f05c(undefined8 *param_1,undefined8 param_2)

{
  undefined1 *local_28;
  
  *param_1 = &PTR_FUN_00d3f278;
  local_28 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_28);
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 1),(pthread_mutexattr_t *)&local_28);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_28);
  param_1[6] = param_2;
  FUN_0097ef7c(param_1 + 7);
  return;
}


// ===== 0097f0c8  FUN_0097f0c8 =====

int FUN_0097f0c8(undefined8 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_00d3f278;
  iVar1 = pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 1));
  return iVar1;
}


// ===== 0097f0dc  FUN_0097f0dc =====

void FUN_0097f0dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3f278;
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 1));
  operator_delete(param_1);
  return;
}


// ===== 0097f118  FUN_0097f118 =====

int FUN_0097f118(long param_1,undefined4 param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  FUN_0097efa4(param_1 + 0x38,param_2);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  return iVar1;
}


// ===== 0097f158  FUN_0097f158 =====

int FUN_0097f158(long param_1,uint param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  FUN_0097efb0(param_1 + 0x38,(ulong)param_2 | 0x100000000);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  return iVar1;
}


// ===== 0097f19c  FUN_0097f19c =====

int FUN_0097f19c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  ulong uVar4;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  puVar2 = (undefined4 *)FUN_00979d5c(param_2);
  FUN_0097efd0(param_1 + 0x38,*puVar2);
  lVar3 = FUN_00979d54(param_2);
  FUN_0097efdc(param_1 + 0x38,*(undefined4 *)(lVar3 + 0xc));
  FUN_00979d68(param_2);
  uVar4 = FUN_0097ea38();
  FUN_0097efe8(param_1 + 0x38,
               (ulong)((uint)uVar4 & -((uint)(uVar4 >> 0x20) & 1)) | uVar4 & 0x100000000);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  return iVar1;
}


// ===== 0097f21c  FUN_0097f21c =====

int FUN_0097f21c(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = (**(code **)(**(long **)(param_2 + 0x30) + 0x88))();
  pthread_mutex_lock((pthread_mutex_t *)(param_2 + 8));
  FUN_0097efc4(param_2 + 0x38,uVar1);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  uVar5 = *(undefined8 *)(param_2 + 0x50);
  uVar4 = *(undefined8 *)(param_2 + 0x48);
  param_1[1] = *(undefined8 *)(param_2 + 0x40);
  *param_1 = uVar3;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 8));
  return iVar2;
}


// ===== 0097f284  FUN_0097f284 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0097f284(undefined8 *param_1,long *param_2)

{
  bool bVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 *__src;
  undefined8 ******ppppppuVar6;
  undefined8 *puVar7;
  void *pvVar8;
  ulong uVar9;
  void *pvVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  char *pcVar14;
  int iVar15;
  long lVar16;
  void *pvVar17;
  void *pvVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  ulong uVar23;
  undefined ***local_1b8;
  undefined8 *****local_1b0;
  undefined8 *local_1a8;
  undefined8 *local_1a0;
  undefined8 *local_198;
  undefined8 *local_190;
  undefined8 *local_188;
  undefined8 *local_180;
  undefined8 *local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  undefined8 *local_160;
  undefined8 *local_158;
  undefined8 *local_150;
  undefined8 *local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  undefined8 *local_130;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined **local_c0;
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
  undefined1 *local_60;
  undefined1 *puStack_58;
  
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
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
  ppppppuVar6 = (undefined8 ******)operator_new(0x80);
  *ppppppuVar6 = (undefined8 *****)&PTR_FUN_00d3eef8;
  FUN_008ff588(ppppppuVar6 + 1,"pixels",6);
  ppppppuVar6[1] = (undefined8 *****)&PTR_FUN_00d3ef28;
  ppppppuVar6[0xe] = (undefined8 *****)FUN_00980c00;
  ppppppuVar6[0xf] = (undefined8 *****)&DAT_0022a380;
  ppppppuVar6[10] = (undefined8 *****)0x0;
  ppppppuVar6[9] = (undefined8 *****)0x0;
  ppppppuVar6[0xc] = (undefined8 *****)0x0;
  ppppppuVar6[0xb] = (undefined8 *****)0x0;
  local_1b0 = ppppppuVar6;
  puVar7 = (undefined8 *)operator_new(0x80);
  *puVar7 = &PTR_FUN_00d3eef8;
  FUN_008ff588(puVar7 + 1,&DAT_001d1d5b,3);
  puVar7[1] = &PTR_FUN_00d3ef28;
  puVar7[0xe] = FUN_00980c0c;
  puVar7[0xf] = &DAT_0022a3a0;
  puVar7[10] = 0;
  puVar7[9] = 0;
  puVar7[0xc] = 0;
  puVar7[0xb] = 0;
  local_1a8 = puVar7;
  puVar7 = (undefined8 *)operator_new(0x80);
  *puVar7 = &PTR_FUN_00d3eef8;
  FUN_008ff588(puVar7 + 1,&DAT_001c0717,4);
  puVar7[1] = &PTR_FUN_00d3ef28;
  puVar7[0xe] = FUN_00980c18;
  puVar7[0xf] = &DAT_0022a3c0;
  puVar7[10] = 0;
  puVar7[9] = 0;
  puVar7[0xc] = 0;
  puVar7[0xb] = 0;
  local_1a0 = puVar7;
  puVar7 = (undefined8 *)operator_new(0x80);
  *puVar7 = &PTR_FUN_00d3eef8;
  FUN_008ff588(puVar7 + 1,"kbps_res",8);
  puVar7[1] = &PTR_FUN_00d3ef28;
  puVar7[0xe] = FUN_00980c24;
  puVar7[0xf] = &DAT_0022a3e0;
  puVar7[10] = 0;
  puVar7[9] = 0;
  puVar7[0xc] = 0;
  puVar7[0xb] = 0;
  local_198 = puVar7;
  puVar7 = (undefined8 *)operator_new(0x80);
  *puVar7 = &PTR_FUN_00d3eef8;
  FUN_008ff588(puVar7 + 1,"fps_diff",8);
  puVar7[1] = &PTR_FUN_00d3ef28;
  puVar7[0xe] = FUN_00980c30;
  puVar7[0xf] = &DAT_0022a400;
  puVar7[10] = 0;
  puVar7[9] = 0;
  puVar7[0xc] = 0;
  puVar7[0xb] = 0;
  local_190 = puVar7;
  puVar7 = (undefined8 *)operator_new(0x80);
  *puVar7 = &PTR_FUN_00d3eef8;
  FUN_008ff588(puVar7 + 1,"vp8_qp_low",10);
  puVar7[1] = &PTR_FUN_00d3ef28;
  puVar7[0xe] = FUN_00980c3c;
  puVar7[0xf] = &DAT_0022a420;
  puVar7[10] = 0;
  puVar7[9] = 0;
  puVar7[0xc] = 0;
  puVar7[0xb] = 0;
  local_188 = puVar7;
  puVar7 = (undefined8 *)operator_new(0x80);
  *puVar7 = &PTR_FUN_00d3eef8;
  FUN_008ff588(puVar7 + 1,"vp8_qp_high",0xb);
  puVar7[1] = &PTR_FUN_00d3ef28;
  puVar7[0xe] = FUN_00980c48;
  puVar7[0xf] = &DAT_0022a440;
  puVar7[10] = 0;
  puVar7[9] = 0;
  puVar7[0xc] = 0;
  puVar7[0xb] = 0;
  local_180 = puVar7;
  puVar7 = (undefined8 *)operator_new(0x80);
  *puVar7 = &PTR_FUN_00d3eef8;
  FUN_008ff588(puVar7 + 1,"vp8_fps",7);
  puVar7[1] = &PTR_FUN_00d3ef28;
  puVar7[0xe] = FUN_00980c54;
  puVar7[0xf] = &DAT_0022a460;
  puVar7[10] = 0;
  puVar7[9] = 0;
  puVar7[0xc] = 0;
  puVar7[0xb] = 0;
  local_178 = puVar7;
  puVar7 = (undefined8 *)operator_new(0x80);
  *puVar7 = &PTR_FUN_00d3eef8;
  FUN_008ff588(puVar7 + 1,"vp8_kbps",8);
  puVar7[1] = &PTR_FUN_00d3ef28;
  puVar7[0xe] = FUN_00980c60;
  puVar7[0xf] = &DAT_0022a480;
  puVar7[10] = 0;
  puVar7[9] = 0;
  puVar7[0xc] = 0;
  puVar7[0xb] = 0;
  local_170 = puVar7;
  puVar7 = (undefined8 *)operator_new(0x80);
  *puVar7 = &PTR_FUN_00d3eef8;
  FUN_008ff588(puVar7 + 1,"vp8_kbps_res",0xc);
  puVar7[1] = &PTR_FUN_00d3ef28;
  puVar7[0xe] = FUN_00980c6c;
  puVar7[0xf] = &DAT_0022a4a0;
  puVar7[10] = 0;
  puVar7[9] = 0;
  puVar7[0xc] = 0;
  puVar7[0xb] = 0;
  local_168 = puVar7;
  puVar7 = (undefined8 *)operator_new(0x80);
  *puVar7 = &PTR_FUN_00d3eef8;
  FUN_008ff588(puVar7 + 1,"vp9_qp_low",10);
  puVar7[1] = &PTR_FUN_00d3ef28;
  puVar7[0xe] = FUN_00980c78;
  puVar7[0xf] = &DAT_0022a4c0;
  puVar7[10] = 0;
  puVar7[9] = 0;
  puVar7[0xc] = 0;
  puVar7[0xb] = 0;
  local_160 = puVar7;
  puVar7 = (undefined8 *)operator_new(0x80);
  *puVar7 = &PTR_FUN_00d3eef8;
  FUN_008ff588(puVar7 + 1,"vp9_qp_high",0xb);
  puVar7[1] = &PTR_FUN_00d3ef28;
  puVar7[0xe] = FUN_00980c84;
  puVar7[0xf] = &DAT_0022a4e0;
  puVar7[10] = 0;
  puVar7[9] = 0;
  puVar7[0xc] = 0;
  puVar7[0xb] = 0;
  local_158 = puVar7;
  puVar7 = (undefined8 *)operator_new(0x80);
  *puVar7 = &PTR_FUN_00d3eef8;
  FUN_008ff588(puVar7 + 1,"vp9_fps",7);
  puVar7[1] = &PTR_FUN_00d3ef28;
  puVar7[0xe] = FUN_00980c90;
  puVar7[0xf] = &DAT_0022a500;
  puVar7[10] = 0;
  puVar7[9] = 0;
  puVar7[0xc] = 0;
  puVar7[0xb] = 0;
  local_150 = puVar7;
  puVar7 = (undefined8 *)operator_new(0x80);
  *puVar7 = &PTR_FUN_00d3eef8;
  FUN_008ff588(puVar7 + 1,"vp9_kbps",8);
  puVar7[1] = &PTR_FUN_00d3ef28;
  puVar7[0xe] = FUN_00980c9c;
  puVar7[0xf] = &DAT_0022a520;
  puVar7[10] = 0;
  puVar7[9] = 0;
  puVar7[0xc] = 0;
  puVar7[0xb] = 0;
  local_148 = puVar7;
  puVar7 = (undefined8 *)operator_new(0x80);
  *puVar7 = &PTR_FUN_00d3eef8;
  FUN_008ff588(puVar7 + 1,"vp9_kbps_res",0xc);
  puVar7[1] = &PTR_FUN_00d3ef28;
  puVar7[0xe] = FUN_00980ca8;
  puVar7[0xf] = &DAT_0022a540;
  puVar7[10] = 0;
  puVar7[9] = 0;
  puVar7[0xc] = 0;
  puVar7[0xb] = 0;
  local_140 = puVar7;
  puVar7 = (undefined8 *)operator_new(0x80);
  *puVar7 = &PTR_FUN_00d3eef8;
  FUN_008ff588(puVar7 + 1,"h264_qp_low",0xb);
  puVar7[1] = &PTR_FUN_00d3ef28;
  puVar7[0xe] = FUN_00980cb4;
  puVar7[0xf] = &DAT_0022a560;
  puVar7[10] = 0;
  puVar7[9] = 0;
  puVar7[0xc] = 0;
  puVar7[0xb] = 0;
  local_138 = puVar7;
  puVar7 = (undefined8 *)operator_new(0x80);
  *puVar7 = &PTR_FUN_00d3eef8;
  FUN_008ff588(puVar7 + 1,"h264_qp_high",0xc);
  puVar7[1] = &PTR_FUN_00d3ef28;
  puVar7[0xe] = FUN_00980cc0;
  puVar7[0xf] = &DAT_0022a580;
  puVar7[10] = 0;
  puVar7[9] = 0;
  puVar7[0xc] = 0;
  puVar7[0xb] = 0;
  local_130 = puVar7;
  puVar7 = (undefined8 *)operator_new(0x80);
  *puVar7 = &PTR_FUN_00d3eef8;
  FUN_008ff588(puVar7 + 1,"h264_fps",8);
  puVar7[1] = &PTR_FUN_00d3ef28;
  puVar7[0xe] = FUN_00980ccc;
  puVar7[0xf] = &DAT_0022a5a0;
  puVar7[10] = 0;
  puVar7[9] = 0;
  puVar7[0xc] = 0;
  puVar7[0xb] = 0;
  local_128 = puVar7;
  puVar7 = (undefined8 *)operator_new(0x80);
  *puVar7 = &PTR_FUN_00d3eef8;
  FUN_008ff588(puVar7 + 1,"h264_kbps",9);
  puVar7[1] = &PTR_FUN_00d3ef28;
  puVar7[0xe] = FUN_00980cd8;
  puVar7[0xf] = &DAT_0022a5c0;
  puVar7[10] = 0;
  puVar7[9] = 0;
  puVar7[0xc] = 0;
  puVar7[0xb] = 0;
  local_120 = puVar7;
  puVar7 = (undefined8 *)operator_new(0x80);
  *puVar7 = &PTR_FUN_00d3eef8;
  FUN_008ff588(puVar7 + 1,"h264_kbps_res",0xd);
  puVar7[1] = &PTR_FUN_00d3ef28;
  puVar7[0xe] = FUN_00980ce4;
  puVar7[0xf] = &DAT_0022a5e0;
  puVar7[10] = 0;
  puVar7[9] = 0;
  puVar7[0xc] = 0;
  puVar7[0xb] = 0;
  local_118 = puVar7;
  puVar7 = (undefined8 *)operator_new(0x80);
  *puVar7 = &PTR_FUN_00d3eef8;
  FUN_008ff588(puVar7 + 1,"av1_qp_low",10);
  puVar7[1] = &PTR_FUN_00d3ef28;
  puVar7[0xe] = FUN_00980cf0;
  puVar7[0xf] = &DAT_0022a600;
  puVar7[10] = 0;
  puVar7[9] = 0;
  puVar7[0xc] = 0;
  puVar7[0xb] = 0;
  local_110 = puVar7;
  puVar7 = (undefined8 *)operator_new(0x80);
  *puVar7 = &PTR_FUN_00d3eef8;
  FUN_008ff588(puVar7 + 1,"av1_qp_high",0xb);
  puVar7[1] = &PTR_FUN_00d3ef28;
  puVar7[0xe] = FUN_00980cfc;
  puVar7[0xf] = &DAT_0022a620;
  puVar7[10] = 0;
  puVar7[9] = 0;
  puVar7[0xc] = 0;
  puVar7[0xb] = 0;
  local_108 = puVar7;
  puVar7 = (undefined8 *)operator_new(0x80);
  *puVar7 = &PTR_FUN_00d3eef8;
  FUN_008ff588(puVar7 + 1,"av1_fps",7);
  puVar7[1] = &PTR_FUN_00d3ef28;
  puVar7[0xe] = FUN_00980d08;
  puVar7[0xf] = &DAT_0022a640;
  puVar7[10] = 0;
  puVar7[9] = 0;
  puVar7[0xc] = 0;
  puVar7[0xb] = 0;
  local_100 = puVar7;
  puVar7 = (undefined8 *)operator_new(0x80);
  *puVar7 = &PTR_FUN_00d3eef8;
  FUN_008ff588(puVar7 + 1,"av1_kbps",8);
  puVar7[1] = &PTR_FUN_00d3ef28;
  puVar7[0xe] = FUN_00980d14;
  puVar7[0xf] = &DAT_0022a660;
  puVar7[10] = 0;
  puVar7[9] = 0;
  puVar7[0xc] = 0;
  puVar7[0xb] = 0;
  local_f8 = puVar7;
  puVar7 = (undefined8 *)operator_new(0x80);
  *puVar7 = &PTR_FUN_00d3eef8;
  FUN_008ff588(puVar7 + 1,"av1_kbps_res",0xc);
  puVar7[1] = &PTR_FUN_00d3ef28;
  puVar7[0xe] = FUN_00980d20;
  puVar7[0xf] = &DAT_0022a680;
  puVar7[10] = 0;
  puVar7[9] = 0;
  puVar7[0xc] = 0;
  puVar7[0xb] = 0;
  local_f0 = puVar7;
  puVar7 = (undefined8 *)operator_new(0x80);
  *puVar7 = &PTR_FUN_00d3eef8;
  FUN_008ff588(puVar7 + 1,"generic_qp_low",0xe);
  puVar7[1] = &PTR_FUN_00d3ef28;
  puVar7[0xe] = FUN_00980d2c;
  puVar7[0xf] = &DAT_0022a6a0;
  puVar7[10] = 0;
  puVar7[9] = 0;
  puVar7[0xc] = 0;
  puVar7[0xb] = 0;
  local_e8 = puVar7;
  puVar7 = (undefined8 *)operator_new(0x80);
  *puVar7 = &PTR_FUN_00d3eef8;
  FUN_008ff588(puVar7 + 1,"generic_qp_high",0xf);
  puVar7[1] = &PTR_FUN_00d3ef28;
  puVar7[0xe] = FUN_00980d38;
  puVar7[0xf] = &DAT_0022a6c0;
  puVar7[10] = 0;
  puVar7[9] = 0;
  puVar7[0xc] = 0;
  puVar7[0xb] = 0;
  local_e0 = puVar7;
  puVar7 = (undefined8 *)operator_new(0x80);
  *puVar7 = &PTR_FUN_00d3eef8;
  FUN_008ff588(puVar7 + 1,"generic_fps",0xb);
  puVar7[1] = &PTR_FUN_00d3ef28;
  puVar7[0xe] = FUN_00980d44;
  puVar7[0xf] = &DAT_0022a6e0;
  puVar7[10] = 0;
  puVar7[9] = 0;
  puVar7[0xc] = 0;
  puVar7[0xb] = 0;
  local_d8 = puVar7;
  puVar7 = (undefined8 *)operator_new(0x80);
  *puVar7 = &PTR_FUN_00d3eef8;
  FUN_008ff588(puVar7 + 1,"generic_kbps",0xc);
  puVar7[1] = &PTR_FUN_00d3ef28;
  puVar7[0xe] = FUN_00980d50;
  puVar7[0xf] = &DAT_0022a700;
  puVar7[10] = 0;
  puVar7[9] = 0;
  puVar7[0xc] = 0;
  puVar7[0xb] = 0;
  local_d0 = puVar7;
  puVar7 = (undefined8 *)operator_new(0x80);
  *puVar7 = &PTR_FUN_00d3eef8;
  FUN_008ff588(puVar7 + 1,"generic_kbps_res",0x10);
  puVar7[1] = &PTR_FUN_00d3ef28;
  puVar7[0xe] = FUN_00980d5c;
  puVar7[0xf] = &DAT_0022a720;
  puVar7[10] = 0;
  puVar7[9] = 0;
  puVar7[0xc] = 0;
  puVar7[0xb] = 0;
  local_c8 = puVar7;
  FUN_00971348(&local_c0,&local_1b0,0x1e);
  local_60 = (undefined1 *)0x0;
  puStack_58 = (undefined1 *)0x0;
  puStack_68 = (undefined1 *)0x0;
  local_c0 = &PTR_FUN_00d3f2a0;
  local_1b8 = &local_c0;
  (**(code **)(*param_2 + 0x10))(&local_1b0,param_2,"WebRTC-Video-BalancedDegradationSettings",0x28)
  ;
  puVar7 = local_1a8;
  ppppppuVar6 = (undefined8 ******)local_1b0;
  if (-1 < (long)local_1a0) {
    puVar7 = (undefined8 *)((ulong)local_1a0 >> 0x38);
    ppppppuVar6 = &local_1b0;
  }
  FUN_00661cc0(&local_1b8,1,ppppppuVar6,puVar7);
  if ((long)local_1a0 < 0) {
    operator_delete(local_1b0);
  }
  __src = puStack_68;
  uVar9 = (long)local_60 - (long)puStack_68;
  if (uVar9 == 0) {
    pvVar18 = (void *)0x0;
    pvVar8 = (void *)0x0;
  }
  else {
    uVar23 = ((long)uVar9 >> 3) * -0x1111111111111111;
    if (0x222222222222222 < uVar23) {
      puVar7 = (undefined8 *)FUN_0098098c();
      pvVar18 = (void *)puVar7[0xb];
      *puVar7 = &PTR_FUN_00d3f2a0;
      if (pvVar18 == (void *)0x0) {
LAB_00980118:
        plVar21 = (long *)puVar7[8];
        *puVar7 = &PTR_FUN_00d3d1e0;
        if (plVar21 != (long *)0x0) {
          plVar19 = (long *)puVar7[9];
          plVar12 = plVar21;
          if (plVar21 != plVar19) {
            do {
              plVar19 = plVar19 + -1;
              if (plVar19 == (long *)0x0) goto LAB_009800f4;
              plVar12 = (long *)*plVar19;
              *plVar19 = 0;
              if (plVar12 != (long *)0x0) {
                (**(code **)(*plVar12 + 8))();
              }
            } while (plVar19 != plVar21);
            plVar12 = (long *)puVar7[8];
          }
          puVar7[9] = plVar21;
          operator_delete(plVar12);
        }
        FUN_006634ac(puVar7);
        return;
      }
      pvVar8 = (void *)puVar7[0xc];
      uVar9 = (ulong)(((long)pvVar18 - (long)pvVar8) * 0x1111111111111111) >> 3;
      uVar23 = (long)pvVar8 * -0x1111111111111111 - 8U >> 3;
      if (uVar23 <= uVar9) {
        uVar9 = uVar23;
      }
      if ((1 < uVar9) && ((((int)pvVar18 - (int)pvVar8 | -(int)pvVar8) & 7U) == 0)) {
        uVar9 = uVar9 & 0x1ffffffffffffffe;
        pvVar8 = (void *)((long)pvVar8 + uVar9 * -0x78);
        do {
          uVar9 = uVar9 - 2;
        } while (uVar9 != 0);
      }
      do {
        if (pvVar8 == pvVar18) {
          puVar7[0xc] = pvVar18;
          operator_delete(pvVar18);
          goto LAB_00980118;
        }
        pvVar8 = (void *)((long)pvVar8 + -0x78);
      } while (pvVar8 != (void *)0x0);
LAB_009800f4:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    pvVar8 = operator_new(uVar9);
    pvVar18 = (void *)((long)pvVar8 + uVar9);
    memcpy(pvVar8,__src,uVar9);
    lVar22 = uVar23 - 1;
    if (uVar23 != 0 && lVar22 != 0) {
      lVar16 = 4;
      uVar23 = uVar9;
      do {
        if (*(int *)((long)pvVar8 + lVar16) - 0x65U < 0xffffff9c) {
          uVar9 = FUN_004022fc();
          if ((uVar9 & 1) != 0) goto LAB_0097fd0c;
          pcVar14 = "Unsupported fps setting, value ignored.";
          uVar13 = 0x36a;
          goto LAB_0097fd04;
        }
        uVar23 = uVar23 - 0x78;
        lVar16 = lVar16 + 0x78;
      } while (uVar23 != 0);
      iVar15 = *(int *)((long)pvVar8 + 8);
      lVar16 = 0x80;
      lVar20 = lVar22;
      do {
        iVar4 = *(int *)((long)pvVar8 + lVar16);
        if ((0 < iVar4) && (bVar1 = iVar4 < iVar15, iVar15 = iVar4, bVar1)) {
          uVar9 = FUN_004022fc();
          if ((uVar9 & 1) != 0) goto LAB_0097fd0c;
          pcVar14 = "Invalid bitrate value provided.";
          uVar13 = 0x3aa;
          goto LAB_0097fd04;
        }
        lVar20 = lVar20 + -1;
        lVar16 = lVar16 + 0x78;
      } while (lVar20 != 0);
      lVar16 = 0;
      do {
        piVar2 = (int *)((long)pvVar8 + lVar16);
        if ((piVar2[0x1e] < *piVar2) || (piVar2[0x1f] < piVar2[1])) {
          uVar9 = FUN_004022fc();
          if ((uVar9 & 1) != 0) goto LAB_0097fd0c;
          pcVar14 = "Invalid fps/pixel value provided.";
          uVar13 = 0x3f2;
          goto LAB_0097fd04;
        }
        uVar23 = FUN_009807cc((long)pvVar8 + lVar16 + 0x8c,(long)pvVar8 + lVar16 + 0x14);
        if (((((uVar23 & 1) == 0) ||
             (uVar23 = FUN_009807cc((long)pvVar8 + lVar16 + 0xa0,(long)pvVar8 + lVar16 + 0x28),
             (uVar23 & 1) == 0)) ||
            (uVar23 = FUN_009807cc((long)pvVar8 + lVar16 + 0xb4,(long)pvVar8 + lVar16 + 0x3c),
            (uVar23 & 1) == 0)) ||
           ((uVar23 = FUN_009807cc((long)pvVar8 + lVar16 + 200,(long)pvVar8 + lVar16 + 0x50),
            (uVar23 & 1) == 0 ||
            (uVar23 = FUN_009807cc((long)pvVar8 + lVar16 + 0xdc,(long)pvVar8 + lVar16 + 100),
            (uVar23 & 1) == 0)))) goto LAB_0097fd0c;
        lVar22 = lVar22 + -1;
        lVar16 = lVar16 + 0x78;
      } while (lVar22 != 0);
      lVar22 = (long)pvVar8 + 100;
      uVar23 = uVar9;
      do {
        uVar11 = FUN_009808ac(lVar22 + -0x50);
        if ((((uVar11 & 1) == 0) || (uVar11 = FUN_009808ac(lVar22 + -0x3c), (uVar11 & 1) == 0)) ||
           ((uVar11 = FUN_009808ac(lVar22 + -0x28), (uVar11 & 1) == 0 ||
            ((uVar11 = FUN_009808ac(lVar22 + -0x14), (uVar11 & 1) == 0 ||
             (uVar11 = FUN_009808ac(lVar22), (uVar11 & 1) == 0)))))) goto LAB_0097fd0c;
        uVar23 = uVar23 - 0x78;
        lVar22 = lVar22 + 0x78;
      } while (uVar23 != 0);
      puVar7 = (undefined8 *)operator_new(uVar9);
      puVar3 = (undefined8 *)((long)puVar7 + uVar9);
      memcpy(puVar7,pvVar8,uVar9);
      pvVar10 = (void *)*param_1;
      goto joined_r0x0097fdbc;
    }
    if ((uVar9 == 0x78) && (uVar9 = FUN_004022fc(), (uVar9 & 1) == 0)) {
      pcVar14 = "Unsupported size, value ignored.";
      uVar13 = 0x342;
LAB_0097fd04:
      FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/experiments/balanced_degradation_settings.cc",
                   uVar13,pcVar14);
    }
  }
LAB_0097fd0c:
  puVar7 = (undefined8 *)operator_new(0x168);
  uVar5 = _UNK_001f3138;
  uVar13 = _DAT_001f3130;
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar7 + 2) = 0xffffff9c;
    puVar7[1] = uVar5;
    *puVar7 = uVar13;
    *(undefined8 *)((long)puVar7 + 0x1c) = 0;
    *(undefined8 *)((long)puVar7 + 0x14) = 0;
    *(undefined8 *)((long)puVar7 + 0x2c) = 0;
    *(undefined8 *)((long)puVar7 + 0x24) = 0;
    *(undefined8 *)((long)puVar7 + 0x3c) = 0;
    *(undefined8 *)((long)puVar7 + 0x34) = 0;
    *(undefined8 *)((long)puVar7 + 0x4c) = 0;
    *(undefined8 *)((long)puVar7 + 0x44) = 0;
    *(undefined8 *)((long)puVar7 + 0x5c) = 0;
    *(undefined8 *)((long)puVar7 + 0x54) = 0;
    *(undefined8 *)((long)puVar7 + 0x6c) = 0;
    *(undefined8 *)((long)puVar7 + 100) = 0;
    *(undefined4 *)((long)puVar7 + 0x74) = 0;
    uVar5 = _UNK_001f1c48;
    uVar13 = _DAT_001f1c40;
    if (puVar7 != (undefined8 *)0xffffffffffffff88) {
      *(undefined8 *)((long)puVar7 + 0x94) = 0;
      *(undefined8 *)((long)puVar7 + 0x8c) = 0;
      *(undefined8 *)((long)puVar7 + 0xa4) = 0;
      *(undefined8 *)((long)puVar7 + 0x9c) = 0;
      *(undefined4 *)(puVar7 + 0x11) = 1;
      puVar7[0x10] = uVar5;
      puVar7[0xf] = uVar13;
      *(undefined8 *)((long)puVar7 + 0xb4) = 0;
      *(undefined8 *)((long)puVar7 + 0xac) = 0;
      *(undefined8 *)((long)puVar7 + 0xc4) = 0;
      *(undefined8 *)((long)puVar7 + 0xbc) = 0;
      *(undefined8 *)((long)puVar7 + 0xd4) = 0;
      *(undefined8 *)((long)puVar7 + 0xcc) = 0;
      *(undefined8 *)((long)puVar7 + 0xe4) = 0;
      *(undefined8 *)((long)puVar7 + 0xdc) = 0;
      *(undefined4 *)((long)puVar7 + 0xec) = 0;
      if (puVar7 != (undefined8 *)0xffffffffffffff10) {
        *(undefined4 *)(puVar7 + 0x20) = 1;
        uVar5 = _UNK_001f3c48;
        uVar13 = _DAT_001f3c40;
        puVar3 = puVar7 + 0x2d;
        *(undefined4 *)((long)puVar7 + 0x164) = 0;
        *(undefined8 *)((long)puVar7 + 0x10c) = 0;
        *(undefined8 *)((long)puVar7 + 0x104) = 0;
        *(undefined8 *)((long)puVar7 + 0x11c) = 0;
        *(undefined8 *)((long)puVar7 + 0x114) = 0;
        puVar7[0x1f] = uVar5;
        puVar7[0x1e] = uVar13;
        *(undefined8 *)((long)puVar7 + 300) = 0;
        *(undefined8 *)((long)puVar7 + 0x124) = 0;
        *(undefined8 *)((long)puVar7 + 0x13c) = 0;
        *(undefined8 *)((long)puVar7 + 0x134) = 0;
        *(undefined8 *)((long)puVar7 + 0x14c) = 0;
        *(undefined8 *)((long)puVar7 + 0x144) = 0;
        *(undefined8 *)((long)puVar7 + 0x15c) = 0;
        *(undefined8 *)((long)puVar7 + 0x154) = 0;
        pvVar10 = (void *)*param_1;
joined_r0x0097fdbc:
        if (pvVar10 == (void *)0x0) {
LAB_0097ff78:
          *param_1 = puVar7;
          param_1[1] = puVar3;
          param_1[2] = puVar3;
          if (pvVar8 == (void *)0x0) {
LAB_00980018:
            FUN_00980058(&local_c0);
            return;
          }
          uVar9 = (ulong)(((long)pvVar8 - (long)pvVar18) * 0x1111111111111111) >> 3;
          uVar23 = (long)pvVar18 * -0x1111111111111111 - 8U >> 3;
          if (uVar23 <= uVar9) {
            uVar9 = uVar23;
          }
          if ((1 < uVar9) && ((((int)pvVar8 - (int)pvVar18 | -(int)pvVar18) & 7U) == 0)) {
            uVar9 = uVar9 & 0x1ffffffffffffffe;
            pvVar18 = (void *)((long)pvVar18 + uVar9 * -0x78);
            do {
              uVar9 = uVar9 - 2;
            } while (uVar9 != 0);
          }
          do {
            if (pvVar18 == pvVar8) {
              operator_delete(pvVar8);
              goto LAB_00980018;
            }
            pvVar18 = (void *)((long)pvVar18 + -0x78);
          } while (pvVar18 != (void *)0x0);
        }
        else {
          pvVar17 = (void *)param_1[1];
          uVar9 = (ulong)(((long)pvVar10 - (long)pvVar17) * 0x1111111111111111) >> 3;
          uVar23 = (long)pvVar17 * -0x1111111111111111 - 8U >> 3;
          if (uVar23 <= uVar9) {
            uVar9 = uVar23;
          }
          if ((1 < uVar9) && ((((int)pvVar10 - (int)pvVar17 | -(int)pvVar17) & 7U) == 0)) {
            uVar9 = uVar9 & 0x1ffffffffffffffe;
            pvVar17 = (void *)((long)pvVar17 + uVar9 * -0x78);
            do {
              uVar9 = uVar9 - 2;
            } while (uVar9 != 0);
          }
          do {
            if (pvVar17 == pvVar10) {
              param_1[1] = pvVar10;
              operator_delete(pvVar10);
              goto LAB_0097ff78;
            }
            pvVar17 = (void *)((long)pvVar17 + -0x78);
          } while (pvVar17 != (void *)0x0);
        }
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00980058  FUN_00980058 =====

void FUN_00980058(undefined8 *param_1)

{
  void *pvVar1;
  long *plVar2;
  void *pvVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  
  pvVar1 = (void *)param_1[0xb];
  *param_1 = &PTR_FUN_00d3f2a0;
  if (pvVar1 == (void *)0x0) {
LAB_00980118:
    plVar7 = (long *)param_1[8];
    *param_1 = &PTR_FUN_00d3d1e0;
    if (plVar7 != (long *)0x0) {
      plVar4 = (long *)param_1[9];
      plVar2 = plVar7;
      if (plVar7 != plVar4) {
        do {
          plVar4 = plVar4 + -1;
          if (plVar4 == (long *)0x0) goto LAB_009800f4;
          plVar2 = (long *)*plVar4;
          *plVar4 = 0;
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 8))();
          }
        } while (plVar4 != plVar7);
        plVar2 = (long *)param_1[8];
      }
      param_1[9] = plVar7;
      operator_delete(plVar2);
    }
    FUN_006634ac(param_1);
    return;
  }
  pvVar3 = (void *)param_1[0xc];
  uVar5 = (ulong)(((long)pvVar1 - (long)pvVar3) * 0x1111111111111111) >> 3;
  uVar6 = (long)pvVar3 * -0x1111111111111111 - 8U >> 3;
  if (uVar6 <= uVar5) {
    uVar5 = uVar6;
  }
  if ((1 < uVar5) && ((((int)pvVar1 - (int)pvVar3 | -(int)pvVar3) & 7U) == 0)) {
    uVar5 = uVar5 & 0x1ffffffffffffffe;
    pvVar3 = (void *)((long)pvVar3 + uVar5 * -0x78);
    do {
      uVar5 = uVar5 - 2;
    } while (uVar5 != 0);
  }
  do {
    if (pvVar3 == pvVar1) {
      param_1[0xc] = pvVar1;
      operator_delete(pvVar1);
      goto LAB_00980118;
    }
    pvVar3 = (void *)((long)pvVar3 + -0x78);
  } while (pvVar3 != (void *)0x0);
LAB_009800f4:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 009801a0  FUN_009801a0 =====

void FUN_009801a0(undefined8 *param_1)

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
  uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2) * 0x1111111111111111) >> 3;
  uVar4 = (long)pvVar2 * -0x1111111111111111 - 8U >> 3;
  if (uVar4 <= uVar3) {
    uVar3 = uVar4;
  }
  if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 7U) == 0)) {
    uVar3 = uVar3 & 0x1ffffffffffffffe;
    pvVar2 = (void *)((long)pvVar2 + uVar3 * -0x78);
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
    pvVar2 = (void *)((long)pvVar2 + -0x78);
  } while (pvVar2 != (void *)0x0);
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00980254  FUN_00980254 =====

int FUN_00980254(undefined8 *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)*param_1;
  while( true ) {
    if (piVar1 == (int *)param_1[1]) {
      return 0x7fffffff;
    }
    if (param_3 <= *piVar1) break;
    piVar1 = piVar1 + 0x1e;
  }
  iVar3 = piVar1[1];
  if (param_2 < 3) {
    if (param_2 == 0) {
      iVar2 = piVar1[0x1b];
    }
    else if (param_2 == 1) {
      iVar2 = piVar1[7];
    }
    else {
      if (param_2 != 2) goto LAB_009802f8;
LAB_009802c0:
      iVar2 = piVar1[0xc];
    }
  }
  else if (param_2 == 3) {
    iVar2 = piVar1[0x16];
  }
  else {
    if (param_2 != 4) {
      if (param_2 != 5) goto LAB_009802f8;
      goto LAB_009802c0;
    }
    iVar2 = piVar1[0x11];
  }
  if (0 < iVar2) {
    iVar3 = iVar2;
  }
LAB_009802f8:
  iVar2 = 0x7fffffff;
  if (iVar3 != 100) {
    iVar2 = iVar3;
  }
  return iVar2;
}


// ===== 00980308  FUN_00980308 =====

int FUN_00980308(long *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar3 = (param_1[1] - *param_1 >> 3) * -0x1111111111111111;
  if (uVar3 != 1) {
    piVar4 = (int *)(*param_1 + 0x7c);
    uVar5 = 1;
    uVar6 = uVar3;
    do {
      if (uVar6 == 0) {
LAB_00980400:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      if (param_3 <= piVar4[-0x1f]) {
        if (uVar3 <= uVar5) goto LAB_00980400;
        iVar2 = *piVar4;
        if (param_2 < 3) {
          if (param_2 == 0) {
            iVar1 = piVar4[0x1a];
          }
          else if (param_2 == 1) {
            iVar1 = piVar4[6];
          }
          else {
            if (param_2 != 2) goto LAB_009803e8;
LAB_009803b0:
            iVar1 = piVar4[0xb];
          }
        }
        else if (param_2 == 3) {
          iVar1 = piVar4[0x15];
        }
        else {
          if (param_2 != 4) {
            if (param_2 != 5) goto LAB_009803e8;
            goto LAB_009803b0;
          }
          iVar1 = piVar4[0x10];
        }
        if (0 < iVar1) {
          iVar2 = iVar1;
        }
LAB_009803e8:
        if (iVar2 == 100) {
          return 0x7fffffff;
        }
        return iVar2;
      }
      uVar6 = uVar6 - 1;
      uVar5 = uVar5 + 1;
      piVar4 = piVar4 + 0x1e;
    } while (uVar6 != 1);
  }
  return 0x7fffffff;
}


// ===== 00980414  FUN_00980414 =====

bool FUN_00980414(long *param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  piVar2 = (int *)*param_1;
  uVar4 = (param_1[1] - (long)piVar2 >> 3) * -0x1111111111111111;
  if (uVar4 != 1) {
    uVar5 = 1;
    uVar6 = uVar4;
    do {
      if (uVar6 == 0) {
LAB_00980518:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      if (param_3 <= *piVar2) {
        if (uVar4 <= uVar5) goto LAB_00980518;
        if (param_2 < 3) {
          if (param_2 == 0) {
            piVar3 = piVar2 + 0x3a;
          }
          else if (param_2 == 1) {
            piVar3 = piVar2 + 0x26;
          }
          else {
            if (param_2 != 2) goto LAB_009804e4;
LAB_009804b4:
            piVar3 = piVar2 + 0x2b;
          }
LAB_009804d8:
          iVar1 = *piVar3;
          if (0 < iVar1) goto LAB_009804f0;
        }
        else {
          if (param_2 == 3) {
            piVar3 = piVar2 + 0x35;
            goto LAB_009804d8;
          }
          if (param_2 == 4) {
            piVar3 = piVar2 + 0x30;
            goto LAB_009804d8;
          }
          if (param_2 == 5) goto LAB_009804b4;
        }
LAB_009804e4:
        iVar1 = piVar2[0x20];
        if (piVar2[0x20] < 1) {
          return true;
        }
LAB_009804f0:
        if (param_4 == 0) {
          return true;
        }
        return (uint)(iVar1 * 1000) <= param_4;
      }
      uVar6 = uVar6 - 1;
      uVar5 = uVar5 + 1;
      piVar2 = piVar2 + 0x1e;
    } while (uVar6 != 1);
  }
  return true;
}


// ===== 0098052c  FUN_0098052c =====

bool FUN_0098052c(long *param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  piVar2 = (int *)*param_1;
  uVar4 = (param_1[1] - (long)piVar2 >> 3) * -0x1111111111111111;
  if (uVar4 != 1) {
    uVar5 = 1;
    uVar6 = uVar4;
    do {
      if (uVar6 == 0) {
LAB_00980630:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      if (param_3 <= *piVar2) {
        if (uVar4 <= uVar5) goto LAB_00980630;
        if (param_2 < 3) {
          if (param_2 == 0) {
            piVar3 = piVar2 + 0x3b;
          }
          else if (param_2 == 1) {
            piVar3 = piVar2 + 0x27;
          }
          else {
            if (param_2 != 2) goto LAB_009805fc;
LAB_009805cc:
            piVar3 = piVar2 + 0x2c;
          }
LAB_009805f0:
          iVar1 = *piVar3;
          if (0 < iVar1) goto LAB_00980608;
        }
        else {
          if (param_2 == 3) {
            piVar3 = piVar2 + 0x36;
            goto LAB_009805f0;
          }
          if (param_2 == 4) {
            piVar3 = piVar2 + 0x31;
            goto LAB_009805f0;
          }
          if (param_2 == 5) goto LAB_009805cc;
        }
LAB_009805fc:
        iVar1 = piVar2[0x21];
        if (piVar2[0x21] < 1) {
          return true;
        }
LAB_00980608:
        if (param_4 == 0) {
          return true;
        }
        return (uint)(iVar1 * 1000) <= param_4;
      }
      uVar6 = uVar6 - 1;
      uVar5 = uVar5 + 1;
      piVar2 = piVar2 + 0x1e;
    } while (uVar6 != 1);
  }
  return true;
}


// ===== 00980644  FUN_00980644 =====

ulong FUN_00980644(undefined8 *param_1,int param_2)

{
  ulong uVar1;
  int *piVar2;
  uint uVar3;
  
  piVar2 = (int *)*param_1;
  while( true ) {
    if (piVar2 == (int *)param_1[1]) {
      return 0;
    }
    if (param_2 <= *piVar2) break;
    piVar2 = piVar2 + 0x1e;
  }
  uVar3 = piVar2[4];
  uVar1 = 0;
  if ((int)(uVar3 + 99) < 0 == SCARRY4(uVar3,99)) {
    uVar1 = (ulong)uVar3 | 0x100000000;
  }
  return uVar1;
}


// ===== 00980688  FUN_00980688 =====

undefined1  [16] FUN_00980688(long *param_1,int param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint *puVar7;
  int *piVar8;
  uint *puVar9;
  undefined1 auVar10 [16];
  
  piVar8 = (int *)*param_1;
  piVar1 = (int *)param_1[1];
  if (piVar8 == piVar1) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:443: libc++ Hardening assertion !empty() failed: back() called on an empty vector\n"
              );
  }
  do {
    if (param_3 <= *piVar8) goto LAB_009806c4;
    piVar8 = piVar8 + 0x1e;
  } while (piVar8 != piVar1);
  piVar8 = piVar1 + -0x1e;
LAB_009806c4:
  uVar6 = 0;
  if (param_2 < 3) {
    if (param_2 == 0) {
      puVar7 = (uint *)(piVar8 + 0x1a);
      puVar9 = (uint *)(piVar8 + 0x19);
    }
    else if (param_2 == 1) {
      puVar9 = (uint *)(piVar8 + 5);
      puVar7 = (uint *)(piVar8 + 6);
    }
    else {
      uVar4 = 0;
      if (param_2 != 2) goto LAB_009807a8;
      puVar7 = (uint *)(piVar8 + 0xb);
      puVar9 = (uint *)(piVar8 + 10);
    }
  }
  else if (param_2 - 4U < 2) {
    puVar7 = (uint *)(piVar8 + 0x10);
    puVar9 = (uint *)(piVar8 + 0xf);
  }
  else {
    uVar4 = 0;
    if (param_2 != 3) goto LAB_009807a8;
    puVar7 = (uint *)(piVar8 + 0x15);
    puVar9 = (uint *)(piVar8 + 0x14);
  }
  uVar2 = *puVar9;
  uVar6 = 0;
  if ((int)uVar2 < 1) {
    uVar4 = 0;
  }
  else {
    uVar3 = *puVar7;
    uVar4 = 0;
    if (0 < (int)uVar3) {
      uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
      uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
      uVar5 = FUN_00417e08(0);
      if ((uVar5 & 1) == 0) {
        FUN_00623bb0(&DAT_001f6148,"../../rtc_base/experiments/balanced_degradation_settings.cc",
                     0x5e9,"QP thresholds: low: ",uVar2,", high: ",uVar3);
      }
      uVar4 = CONCAT44(uVar3,uVar2);
      uVar6 = 1;
    }
  }
LAB_009807a8:
  auVar10._8_8_ = uVar6;
  auVar10._0_8_ = uVar4;
  return auVar10;
}


// ===== 009807cc  FUN_009807cc =====

undefined8 FUN_009807cc(int *param_1,int *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  if ((0 < *param_1 != *param_2 < 1) && (0 < param_1[1] != param_2[1] < 1)) {
    iVar1 = param_1[2];
    if (0 < iVar1 != param_2[2] < 1) {
      if (iVar1 < 1) {
        return 1;
      }
      if (param_2[2] <= iVar1) {
        return 1;
      }
      uVar2 = FUN_004022fc(1);
      if ((uVar2 & 1) != 0) {
        return 0;
      }
      pcVar4 = "Invalid fps/pixel value provided.";
      uVar3 = 0x2fa;
      goto LAB_00980898;
    }
  }
  uVar2 = FUN_004022fc();
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  pcVar4 = "Invalid value, all/none should be set.";
  uVar3 = 0x2da;
LAB_00980898:
  FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/experiments/balanced_degradation_settings.cc",uVar3,
               pcVar4);
  return 0;
}


// ===== 009808ac  FUN_009808ac =====

undefined8 FUN_009808ac(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if (0 < (int)uVar1 == 0 < (int)uVar2) {
    if ((((int)uVar1 < 1) || ((int)uVar2 < 1)) ||
       ((int)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) < (int)uVar2)) {
      if ((int)param_1[2] < 0x65) {
        return 1;
      }
      uVar3 = FUN_004022fc();
      if ((uVar3 & 1) != 0) {
        return 0;
      }
      pcVar5 = "Unsupported fps setting, value ignored.";
      uVar4 = 0x27a;
    }
    else {
      uVar3 = FUN_004022fc();
      if ((uVar3 & 1) != 0) {
        return 0;
      }
      pcVar5 = "Invalid threshold value, low >= high threshold.";
      uVar4 = 0x252;
    }
  }
  else {
    uVar3 = FUN_004022fc();
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    pcVar5 = "Neither or both thresholds should be set.";
    uVar4 = 0x22a;
  }
  FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/experiments/balanced_degradation_settings.cc",uVar4,
               pcVar5);
  return 0;
}


// ===== 0098098c  FUN_0098098c =====

void FUN_0098098c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 009809a4  FUN_009809a4 =====

void FUN_009809a4(void *param_1)

{
  FUN_00980058();
  operator_delete(param_1);
  return;
}


// ===== 009809d4  FUN_009809d4 =====

void FUN_009809d4(long param_1,undefined8 param_2,undefined4 param_3)

{
  void *pvVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined4 *extraout_x1;
  void *pvVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  uVar3 = FUN_008ff5f4();
  if (uVar3 != 0xffffffff) {
    if (uVar3 == 0) {
      puVar10 = (undefined8 *)0x0;
      puVar4 = (undefined8 *)0x0;
    }
    else {
      if ((int)uVar3 < 0) {
        FUN_0098098c();
        *extraout_x1 = param_3;
        return;
      }
      puVar4 = (undefined8 *)operator_new((long)(int)uVar3 * 0x78);
      puVar10 = puVar4 + (long)(int)uVar3 * 0xf;
      puVar7 = puVar4;
      do {
        if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        *puVar7 = 0;
        puVar7[1] = 0;
        *(undefined4 *)(puVar7 + 2) = 0xffffff9c;
        *(undefined8 *)((long)puVar7 + 0x1c) = 0;
        *(undefined8 *)((long)puVar7 + 0x14) = 0;
        *(undefined8 *)((long)puVar7 + 0x2c) = 0;
        *(undefined8 *)((long)puVar7 + 0x24) = 0;
        *(undefined8 *)((long)puVar7 + 0x3c) = 0;
        *(undefined8 *)((long)puVar7 + 0x34) = 0;
        *(undefined8 *)((long)puVar7 + 0x4c) = 0;
        *(undefined8 *)((long)puVar7 + 0x44) = 0;
        *(undefined8 *)((long)puVar7 + 0x5c) = 0;
        *(undefined8 *)((long)puVar7 + 0x54) = 0;
        *(undefined8 *)((long)puVar7 + 0x6c) = 0;
        *(undefined8 *)((long)puVar7 + 100) = 0;
        *(undefined4 *)((long)puVar7 + 0x74) = 0;
        puVar7 = puVar7 + 0xf;
      } while (puVar7 != puVar10);
    }
    puVar7 = *(undefined8 **)(param_1 + 0x40);
    puVar2 = *(undefined8 **)(param_1 + 0x48);
    if (puVar7 != puVar2) {
      do {
        uVar5 = FUN_008ff5c0(*puVar7);
        if ((0 < (int)uVar3) && ((uVar5 & 1) != 0)) {
          uVar5 = 0;
          puVar9 = puVar4;
          do {
            if (((long)puVar10 - (long)puVar4 >> 3) * -0x1111111111111111 - uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                        );
            }
            (**(code **)(*(long *)*puVar7 + 0x10))((long *)*puVar7,puVar9,uVar5 & 0xffffffff);
            uVar5 = uVar5 + 1;
            puVar9 = puVar9 + 0xf;
          } while (uVar3 != uVar5);
        }
        puVar7 = puVar7 + 1;
      } while (puVar7 != puVar2);
    }
    pvVar1 = *(void **)(param_1 + 0x58);
    pvVar6 = *(void **)(param_1 + 0x60);
    *(undefined8 **)(param_1 + 0x58) = puVar4;
    *(undefined8 **)(param_1 + 0x60) = puVar10;
    *(undefined8 **)(param_1 + 0x68) = puVar10;
    if (pvVar1 != (void *)0x0) {
      uVar5 = (ulong)(((long)pvVar1 - (long)pvVar6) * 0x1111111111111111) >> 3;
      uVar8 = (long)pvVar6 * -0x1111111111111111 - 8U >> 3;
      if (uVar8 <= uVar5) {
        uVar5 = uVar8;
      }
      if ((1 < uVar5) && ((((int)pvVar1 - (int)pvVar6 | -(int)pvVar6) & 7U) == 0)) {
        uVar5 = uVar5 & 0x1ffffffffffffffe;
        pvVar6 = (void *)((long)pvVar6 + uVar5 * -0x78);
        do {
          uVar5 = uVar5 - 2;
        } while (uVar5 != 0);
      }
      do {
        if (pvVar6 == pvVar1) {
          operator_delete(pvVar1);
          return;
        }
        pvVar6 = (void *)((long)pvVar6 + -0x78);
      } while (pvVar6 != (void *)0x0);
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
  }
  return;
}


// ===== 00980c00  FUN_00980c00 =====

void FUN_00980c00(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  return;
}


// ===== 00980c0c  FUN_00980c0c =====

void FUN_00980c0c(undefined8 param_1,long param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + 4) = param_3;
  return;
}


// ===== 00980c18  FUN_00980c18 =====

void FUN_00980c18(undefined8 param_1,long param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + 8) = param_3;
  return;
}


// ===== 00980c24  FUN_00980c24 =====

void FUN_00980c24(undefined8 param_1,long param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + 0xc) = param_3;
  return;
}


// ===== 00980c30  FUN_00980c30 =====

void FUN_00980c30(undefined8 param_1,long param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + 0x10) = param_3;
  return;
}


// ===== 00980c3c  FUN_00980c3c =====

void FUN_00980c3c(undefined8 param_1,long param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + 0x14) = param_3;
  return;
}


// ===== 00980c48  FUN_00980c48 =====

void FUN_00980c48(undefined8 param_1,long param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + 0x18) = param_3;
  return;
}


// ===== 00980c54  FUN_00980c54 =====

void FUN_00980c54(undefined8 param_1,long param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + 0x1c) = param_3;
  return;
}


// ===== 00980c60  FUN_00980c60 =====

void FUN_00980c60(undefined8 param_1,long param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + 0x20) = param_3;
  return;
}


// ===== 00980c6c  FUN_00980c6c =====

void FUN_00980c6c(undefined8 param_1,long param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + 0x24) = param_3;
  return;
}


// ===== 00980c78  FUN_00980c78 =====

void FUN_00980c78(undefined8 param_1,long param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + 0x28) = param_3;
  return;
}


// ===== 00980c84  FUN_00980c84 =====

void FUN_00980c84(undefined8 param_1,long param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + 0x2c) = param_3;
  return;
}


// ===== 00980c90  FUN_00980c90 =====

void FUN_00980c90(undefined8 param_1,long param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + 0x30) = param_3;
  return;
}


// ===== 00980c9c  FUN_00980c9c =====

void FUN_00980c9c(undefined8 param_1,long param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + 0x34) = param_3;
  return;
}


// ===== 00980ca8  FUN_00980ca8 =====

void FUN_00980ca8(undefined8 param_1,long param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + 0x38) = param_3;
  return;
}


// ===== 00980cb4  FUN_00980cb4 =====

void FUN_00980cb4(undefined8 param_1,long param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + 0x3c) = param_3;
  return;
}


// ===== 00980cc0  FUN_00980cc0 =====

void FUN_00980cc0(undefined8 param_1,long param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + 0x40) = param_3;
  return;
}


// ===== 00980ccc  FUN_00980ccc =====

void FUN_00980ccc(undefined8 param_1,long param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + 0x44) = param_3;
  return;
}


// ===== 00980cd8  FUN_00980cd8 =====

void FUN_00980cd8(undefined8 param_1,long param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + 0x48) = param_3;
  return;
}


// ===== 00980ce4  FUN_00980ce4 =====

void FUN_00980ce4(undefined8 param_1,long param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + 0x4c) = param_3;
  return;
}


// ===== 00980cf0  FUN_00980cf0 =====

void FUN_00980cf0(undefined8 param_1,long param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + 0x50) = param_3;
  return;
}


// ===== 00980cfc  FUN_00980cfc =====

void FUN_00980cfc(undefined8 param_1,long param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + 0x54) = param_3;
  return;
}


// ===== 00980d08  FUN_00980d08 =====

void FUN_00980d08(undefined8 param_1,long param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + 0x58) = param_3;
  return;
}


// ===== 00980d14  FUN_00980d14 =====

void FUN_00980d14(undefined8 param_1,long param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + 0x5c) = param_3;
  return;
}


// ===== 00980d20  FUN_00980d20 =====

void FUN_00980d20(undefined8 param_1,long param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + 0x60) = param_3;
  return;
}


// ===== 00980d2c  FUN_00980d2c =====

void FUN_00980d2c(undefined8 param_1,long param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + 100) = param_3;
  return;
}


// ===== 00980d38  FUN_00980d38 =====

void FUN_00980d38(undefined8 param_1,long param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + 0x68) = param_3;
  return;
}


// ===== 00980d44  FUN_00980d44 =====

void FUN_00980d44(undefined8 param_1,long param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + 0x6c) = param_3;
  return;
}


// ===== 00980d50  FUN_00980d50 =====

void FUN_00980d50(undefined8 param_1,long param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + 0x70) = param_3;
  return;
}


// ===== 00980d5c  FUN_00980d5c =====

void FUN_00980d5c(undefined8 param_1,long param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + 0x74) = param_3;
  return;
}


// ===== 00980d68  FUN_00980d68 =====

/* WARNING: Removing unreachable block (ram,0x00981138) */
/* WARNING: Removing unreachable block (ram,0x009811e8) */
/* WARNING: Removing unreachable block (ram,0x00981010) */
/* WARNING: Removing unreachable block (ram,0x00981214) */
/* WARNING: Removing unreachable block (ram,0x009810fc) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00980d68(undefined8 param_1,undefined ********param_2,ulong param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 *param_6)

{
  ulong uVar1;
  undefined *******pppppppuVar2;
  undefined ********ppppppppuVar3;
  undefined1 *puVar4;
  long *plVar5;
  undefined ********ppppppppuVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined *******local_180;
  undefined1 *puStack_178;
  undefined7 local_170;
  char cStack_169;
  undefined ********local_168;
  ulong uStack_160;
  undefined8 local_158;
  undefined ********local_150;
  undefined1 *puStack_148;
  undefined1 *local_140;
  undefined1 *puStack_138;
  undefined1 *puStack_130;
  undefined1 *puStack_128;
  undefined1 *local_120;
  undefined1 *puStack_118;
  undefined *******local_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined *******local_f8;
  undefined1 *puStack_f0;
  undefined7 local_e8;
  char cStack_e1;
  undefined ********local_e0;
  undefined ********ppppppppuStack_d8;
  undefined8 local_d0;
  undefined ******local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined *******local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  
  if (0x7ffffffffffffff6 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_3 < 0x17) {
    local_d0 = (undefined1 *)CONCAT17((char)param_3,(undefined7)local_d0);
    ppppppppuVar6 = (undefined ********)&local_e0;
  }
  else {
    uVar8 = (param_3 & 0x7ffffffffffffff8) + 8;
    uVar1 = 0x19;
    if (uVar8 != 0x18) {
      uVar1 = uVar8;
    }
    ppppppppuVar6 = (undefined ********)operator_new(uVar1);
    local_d0 = (undefined1 *)(uVar1 | 0x8000000000000000);
    local_e0 = ppppppppuVar6;
    ppppppppuStack_d8 = (undefined ********)param_3;
  }
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = (undefined *******)&DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = (undefined ******)&DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  if ((undefined ********)((long)ppppppppuVar6 + param_3) < ppppppppuVar6) {
LAB_00981240:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((param_2 < ppppppppuVar6) || ((undefined ********)((long)ppppppppuVar6 + param_3) <= param_2))
  {
    memmove(ppppppppuVar6,param_2,param_3);
    *(undefined1 *)((long)ppppppppuVar6 + param_3) = 0;
    plVar5 = (long *)FUN_00547cac(&local_e0,"_camera",7);
    puStack_148 = (undefined1 *)plVar5[1];
    local_150 = (undefined ********)*plVar5;
    local_140 = (undefined1 *)plVar5[2];
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = 0;
    uVar8 = (ulong)puStack_148;
    ppppppppuVar6 = local_150;
    if (-1 < (long)local_140) {
      uVar8 = (ulong)local_140 >> 0x38;
      ppppppppuVar6 = (undefined ********)&local_150;
    }
    FUN_005d3510(&local_f8,&DAT_001b3348);
    FUN_00661054(&local_c0,ppppppppuVar6,uVar8);
    local_c0 = (undefined ******)&PTR_FUN_00d27f10;
    if (cStack_e1 < '\0') {
      FUN_005478d8(&local_80,local_f8,puStack_f0);
      if (cStack_e1 < '\0') {
        operator_delete(local_f8);
      }
    }
    else {
      local_70 = (undefined1 *)CONCAT17(cStack_e1,local_e8);
      local_80 = local_f8;
      puStack_78 = puStack_f0;
    }
    if ((long)local_140 < 0) {
      operator_delete(local_150);
    }
    local_100 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
    local_140 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
    local_120 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
    local_110 = (undefined *******)&DAT_aaaaaaaaaaaaaaaa;
    puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
    local_150 = (undefined ********)&DAT_aaaaaaaaaaaaaaaa;
    if (param_3 < 0x17) {
      local_158 = CONCAT17((char)param_3,(undefined7)local_158);
      ppppppppuVar6 = (undefined ********)&local_168;
    }
    else {
      uVar8 = (param_3 & 0x7ffffffffffffff8) + 8;
      uVar1 = 0x19;
      if (uVar8 != 0x18) {
        uVar1 = uVar8;
      }
      ppppppppuVar6 = (undefined ********)operator_new(uVar1);
      local_158 = uVar1 | 0x8000000000000000;
      local_168 = ppppppppuVar6;
      uStack_160 = param_3;
    }
    if ((undefined ********)((long)ppppppppuVar6 + param_3) < ppppppppuVar6) goto LAB_00981240;
    if ((param_2 < ppppppppuVar6) ||
       ((undefined ********)((long)ppppppppuVar6 + param_3) <= param_2)) {
      memmove(ppppppppuVar6,param_2,param_3);
      *(undefined1 *)((long)ppppppppuVar6 + param_3) = 0;
      puVar7 = (undefined8 *)FUN_00547cac(&local_168,"_screenshare",0xc);
      ppppppppuStack_d8 = (undefined ********)puVar7[1];
      local_e0 = (undefined ********)*puVar7;
      local_d0 = (undefined1 *)puVar7[2];
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      uVar8 = (ulong)ppppppppuStack_d8;
      ppppppppuVar6 = local_e0;
      if (-1 < (long)local_d0) {
        uVar8 = (ulong)local_d0 >> 0x38;
        ppppppppuVar6 = (undefined ********)&local_e0;
      }
      FUN_005d3510(&local_180,&DAT_001b3348);
      FUN_00661054(&local_150,ppppppppuVar6,uVar8);
      local_150 = (undefined ********)&PTR_FUN_00d27f10;
      if (cStack_169 < '\0') {
        FUN_005478d8(&local_110,local_180,puStack_178);
        if (cStack_169 < '\0') {
          operator_delete(local_180);
        }
      }
      else {
        local_100 = (undefined1 *)CONCAT17(cStack_169,local_170);
        puStack_108 = puStack_178;
        local_110 = local_180;
      }
      if ((long)local_158 < 0) {
        operator_delete(local_168);
      }
      local_e0 = (undefined ********)&local_c0;
      ppppppppuStack_d8 = (undefined ********)&local_150;
      FUN_00661cc0(&local_e0,2,param_4,param_5);
      pppppppuVar2 = local_80;
      ppppppppuStack_d8 = (undefined ********)puStack_78;
      local_e0 = (undefined ********)local_80;
      local_d0 = local_70;
      if ((long)local_70 < 0) {
        uVar8 = FUN_0098126c(local_80,puStack_78);
        operator_delete(pppppppuVar2);
      }
      else {
        uVar8 = FUN_0098126c(&local_e0);
      }
      if (uVar8 >> 0x20 != 0) {
        *param_6 = (int)uVar8;
      }
      ppppppppuVar6 = (undefined ********)local_110;
      ppppppppuVar3 = (undefined ********)puStack_108;
      puVar4 = local_100;
      if ((long)local_100 < 0) {
        FUN_005478d8(&local_e0,local_110,puStack_108);
        ppppppppuVar6 = local_e0;
        ppppppppuVar3 = ppppppppuStack_d8;
        puVar4 = local_d0;
      }
      local_d0 = puVar4;
      ppppppppuStack_d8 = ppppppppuVar3;
      local_e0 = ppppppppuVar6;
      if ((long)local_d0 < 0) {
        uVar8 = FUN_0098126c(ppppppppuVar6,ppppppppuStack_d8);
        operator_delete(ppppppppuVar6);
      }
      else {
        uVar8 = FUN_0098126c(&local_e0);
      }
      if (uVar8 >> 0x20 != 0) {
        param_6[1] = (int)uVar8;
      }
      local_150 = (undefined ********)&PTR_FUN_00d27f10;
      if ((long)local_100 < 0) {
        operator_delete(local_110);
      }
      FUN_006634ac(&local_150);
      local_c0 = (undefined ******)&PTR_FUN_00d27f10;
      FUN_006634ac(&local_c0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
            );
}


// ===== 0098126c  FUN_0098126c =====

undefined8 FUN_0098126c(short *param_1,long param_2)

{
  int iVar1;
  
  if (param_2 < 4) {
    if (param_2 == 0) {
      return 0;
    }
    if (param_2 == 3) {
      if (*param_1 == 0x6f6c && (char)param_1[1] == 'w') {
        return 0x1ffffffff;
      }
      iVar1 = memcmp(param_1,&DAT_001e4381,3);
      if (iVar1 == 0) {
        return 0x100000003;
      }
    }
  }
  else if (param_2 == 4) {
    iVar1 = memcmp(param_1,&DAT_001e33b0,4);
    if (iVar1 == 0) {
      return 0x100000001;
    }
  }
  else if (param_2 == 6) {
    iVar1 = memcmp(param_1,"normal",6);
    if (iVar1 == 0) {
      return 0x100000000;
    }
    iVar1 = memcmp(param_1,"higher",6);
    if (iVar1 == 0) {
      return 0x100000002;
    }
  }
  return 0;
}


// ===== 00981370  FUN_00981370 =====

void FUN_00981370(undefined1 *param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined8 ***pppuVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 **local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined8 **local_50;
  undefined1 *puStack_48;
  undefined8 local_40;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = (undefined8 **)&DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*param_2 + 0x10))(&local_50,param_2,"WebRTC-EncoderSpeed",0x13);
  uVar4 = (uint)(char)local_40._7_1_;
  puVar1 = puStack_48;
  if (-1 < (int)uVar4) {
    puVar1 = (undefined1 *)(ulong)local_40._7_1_;
  }
  if (puVar1 != (undefined1 *)0x0) {
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00661054(&local_90,"dynamic_speed",0xd);
    uStack_58._0_2_ = (ushort)(byte)uStack_58;
    local_90 = PTR_DAT_00d52090 + 0x10;
    puVar1 = puStack_48;
    pppuVar2 = (undefined8 ***)local_50;
    if (-1 < (long)local_40) {
      puVar1 = (undefined1 *)((ulong)local_40 >> 0x38);
      pppuVar2 = &local_50;
    }
    local_98 = &local_90;
    uVar3 = FUN_00661cc0(&local_98,1,pppuVar2,puVar1);
    *param_1 = uStack_58._1_1_;
    puVar1 = puStack_48;
    pppuVar2 = (undefined8 ***)local_50;
    if (-1 < (long)local_40) {
      puVar1 = (undefined1 *)((ulong)local_40 >> 0x38);
      pppuVar2 = &local_50;
    }
    uVar3 = FUN_00980d68(uVar3,&DAT_001f0af0,3,pppuVar2,puVar1,param_1 + 4);
    puVar1 = puStack_48;
    pppuVar2 = (undefined8 ***)local_50;
    if (-1 < (long)local_40) {
      puVar1 = (undefined1 *)((ulong)local_40 >> 0x38);
      pppuVar2 = &local_50;
    }
    uVar3 = FUN_00980d68(uVar3,&DAT_001c6a2f,3,pppuVar2,puVar1,param_1 + 0xc);
    puVar1 = puStack_48;
    pppuVar2 = (undefined8 ***)local_50;
    if (-1 < (long)local_40) {
      puVar1 = (undefined1 *)((ulong)local_40 >> 0x38);
      pppuVar2 = &local_50;
    }
    uVar3 = FUN_00980d68(uVar3,&DAT_001ee335,3,pppuVar2,puVar1,param_1 + 0x14);
    puVar1 = puStack_48;
    pppuVar2 = (undefined8 ***)local_50;
    if (-1 < (long)local_40) {
      puVar1 = (undefined1 *)((ulong)local_40 >> 0x38);
      pppuVar2 = &local_50;
    }
    uVar3 = FUN_00980d68(uVar3,&DAT_001acbbe,4,pppuVar2,puVar1,param_1 + 0x1c);
    puVar1 = puStack_48;
    pppuVar2 = (undefined8 ***)local_50;
    if (-1 < (long)local_40) {
      puVar1 = (undefined1 *)((ulong)local_40 >> 0x38);
      pppuVar2 = &local_50;
    }
    FUN_00980d68(uVar3,&DAT_001acbc3,4,pppuVar2,puVar1,param_1 + 0x24);
    FUN_006634ac(&local_90);
    uVar4 = (uint)local_40._7_1_;
  }
  if ((uVar4 >> 7 & 1) != 0) {
    operator_delete(local_50);
  }
  return;
}


// ===== 0098156c  FUN_0098156c =====

undefined1 FUN_0098156c(undefined1 *param_1)

{
  return *param_1;
}


// ===== 00981578  FUN_00981578 =====

undefined4 FUN_00981578(long param_1,int param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  if (param_2 < 3) {
    if (param_2 == 0) {
      return 0;
    }
    if (param_2 == 1) {
      lVar2 = param_1 + 0xc;
    }
    else if (param_2 == 2) {
      lVar2 = param_1 + 0x14;
    }
  }
  else if (param_2 == 5) {
    lVar2 = param_1 + 0x24;
  }
  else if (param_2 == 4) {
    lVar2 = param_1 + 0x1c;
  }
  else if (param_2 == 3) {
    lVar2 = param_1 + 4;
  }
  lVar1 = 4;
  if ((param_3 & 1) == 0) {
    lVar1 = 0;
  }
  return *(undefined4 *)(lVar2 + lVar1);
}


// ===== 009815f0  FUN_009815f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009815f0(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 **local_48;
  ulong uStack_40;
  byte bStack_31;
  undefined8 *local_18;
  
  uVar3 = _UNK_001f24e8;
  uVar2 = _DAT_001f24e0;
  *param_1 = &PTR_FUN_00d3f2d0;
  uVar4 = DAT_001f5578;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[2] = uVar3;
  param_1[1] = uVar2;
  param_1[3] = uVar4;
  lVar5 = *param_2;
  param_1[5] = lVar5;
  if (lVar5 != 0) {
    FUN_00d0f740(1,lVar5 + 8);
  }
  lVar6 = param_2[4];
  lVar5 = param_2[3];
  lVar7 = param_2[1];
  param_1[7] = param_2[2];
  param_1[6] = lVar7;
  param_1[9] = lVar6;
  param_1[8] = lVar5;
  uVar4 = DAT_001f5400;
  uVar3 = _UNK_001f3068;
  uVar2 = _DAT_001f3060;
  param_1[0x10] = 0xffffffffffffffff;
  param_1[0x11] = 0;
  param_1[0x12] = 0xffffffffffffffff;
  param_1[10] = 0;
  param_1[0xb] = param_3;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((long)param_1 + 100) = 0;
  param_1[0xe] = uVar3;
  param_1[0xd] = uVar2;
  param_1[0xf] = uVar4;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((long)param_1 + 0x9c) = 40000;
  param_1[0x14] = 0;
  FUN_00661054(param_1 + 0x15,&DAT_001d1d8a,3);
  param_1[0x15] = &PTR_FUN_00d28120;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  local_18 = param_1 + 0x15;
  (**(code **)(*(long *)param_1[6] + 0x10))
            (&local_48,(long *)param_1[6],"WebRTC-CpuLoadEstimator",0x17);
  pppuVar1 = (undefined8 ***)local_48;
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    pppuVar1 = &local_48;
  }
  FUN_00661cc0(&local_18,1,pppuVar1,uStack_40);
  if ((char)bStack_31 < '\0') {
    operator_delete(local_48);
  }
  return;
}


// ===== 00981748  FUN_00981748 =====

void FUN_00981748(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  void *pvVar3;
  
  *param_1 = &PTR_FUN_00d3f2d0;
  FUN_006634ac(param_1 + 0x15);
  plVar2 = (long *)param_1[0x14];
  param_1[0x14] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x30))();
  }
  pvVar3 = (void *)param_1[10];
  if ((pvVar3 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar3), iVar1 == 1)) {
    operator_delete(pvVar3);
  }
  plVar2 = (long *)param_1[5];
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x009817e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  return;
}


// ===== 009817f4  FUN_009817f4 =====

void FUN_009817f4(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  void *pvVar3;
  
  *param_1 = &PTR_FUN_00d3f2d0;
  FUN_006634ac(param_1 + 0x15);
  plVar2 = (long *)param_1[0x14];
  param_1[0x14] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x30))();
  }
  pvVar3 = (void *)param_1[10];
  if ((pvVar3 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar3), iVar1 == 1)) {
    operator_delete(pvVar3);
  }
  plVar2 = (long *)param_1[5];
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  operator_delete(param_1);
  return;
}


// ===== 0098189c  FUN_0098189c =====

void FUN_0098189c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined1 uStack_51;
  long local_50;
  undefined8 uStack_48;
  code *local_40;
  code *pcStack_38;
  void *local_18;
  
  FUN_00981990(param_1,param_3);
  local_40 = FUN_004473ec;
  pcStack_38 = FUN_00983038;
  local_50 = param_1;
  uStack_48 = param_4;
  uVar3 = FUN_00622394();
  FUN_00841954(&local_18,param_2,100000,&local_50,0,uVar3,&uStack_51);
  pvVar1 = local_18;
  pvVar4 = *(void **)(param_1 + 0x50);
  local_18 = (void *)0x0;
  *(void **)(param_1 + 0x50) = pvVar1;
  if (pvVar4 != (void *)0x0) {
    iVar2 = FUN_00d0f7a0(0xffffffff,pvVar4);
    if (iVar2 == 1) {
      operator_delete(pvVar4);
    }
    pvVar1 = local_18;
    if ((local_18 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,local_18), iVar2 == 1)) {
      operator_delete(pvVar1);
    }
  }
  (*local_40)(0,&local_50,&local_50);
  return;
}


// ===== 00981990  FUN_00981990 =====

void FUN_00981990(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long *plVar4;
  char ****__s;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  uint local_7c;
  undefined8 local_78;
  char ***local_70;
  undefined1 *puStack_68;
  undefined8 local_60;
  
  uVar11 = *(undefined8 *)((long)param_2 + 0xc);
  uVar13 = param_2[1];
  uVar12 = *param_2;
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)((long)param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x14) = uVar11;
  *(undefined8 *)(param_1 + 0x10) = uVar13;
  *(undefined8 *)(param_1 + 8) = uVar12;
  if (*(char *)(param_1 + 0xf0) == '\x01') {
    uVar6 = *(ulong *)(param_1 + 0xe8);
    if ((long)uVar6 < 0) {
      iVar1 = -(int)(-uVar6 / 1000) - (uint)(500 < -uVar6 % 1000);
    }
    else {
      iVar1 = (int)(uVar6 / 1000);
      if (499 < uVar6 % 1000) {
        iVar1 = iVar1 + 1;
      }
    }
    *(int *)(param_1 + 0x20) = iVar1;
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_2 + 3) < 1) {
    puVar2 = (undefined8 *)operator_new(0x70);
    uVar11 = DAT_001f5d80;
    uVar13 = param_2[1];
    uVar12 = *param_2;
    *puVar2 = &PTR_FUN_00d3f340;
    *(undefined8 *)((long)puVar2 + 0x1c) = uVar13;
    *(undefined8 *)((long)puVar2 + 0x14) = uVar12;
    uVar13 = *(undefined8 *)((long)param_2 + 0x14);
    uVar12 = *(undefined8 *)((long)param_2 + 0xc);
    puVar2[6] = puVar2 + 6;
    puVar2[7] = puVar2 + 6;
    puVar2[10] = 0xffffffffffffffff;
    puVar2[1] = uVar11;
    *(undefined4 *)(puVar2 + 2) = 0x42200000;
    puVar2[5] = uVar13;
    puVar2[4] = uVar12;
    puVar2[8] = 0;
    puVar2[9] = 0;
    *(undefined4 *)(puVar2 + 0xb) = 0x42340000;
    pvVar3 = operator_new(0xc);
    uVar15 = *(undefined4 *)PTR_DAT_00d52038;
    *(undefined4 *)((long)pvVar3 + 8) = uVar15;
    FUN_00625c38(0x3f7eb852);
    puVar2[0xc] = pvVar3;
    pvVar3 = operator_new(0xc);
    uVar10 = *(undefined4 *)(puVar2 + 1);
    *(undefined4 *)((long)pvVar3 + 8) = uVar15;
    FUN_00625c38(uVar10);
    puVar2[0xd] = pvVar3;
    (**(code **)*puVar2)(puVar2);
  }
  else {
    puVar2 = (undefined8 *)operator_new(0x50);
    uVar11 = *param_2;
    puVar2[2] = param_2[1];
    puVar2[1] = uVar11;
    *puVar2 = &PTR_FUN_00d3f2f8;
    puVar2[6] = 0;
    uVar12 = *(undefined8 *)((long)param_2 + 0x14);
    uVar11 = *(undefined8 *)((long)param_2 + 0xc);
    puVar2[5] = puVar2 + 6;
    *(undefined8 *)((long)puVar2 + 0x1c) = uVar12;
    *(undefined8 *)((long)puVar2 + 0x14) = uVar11;
    puVar2[7] = 0;
    puVar2[8] = 0xffffffffffffffff;
    puVar2[9] = (double)(*(int *)(puVar2 + 1) + *(int *)((long)puVar2 + 0xc)) / 200.0;
  }
  plVar4 = *(long **)(param_1 + 0x30);
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = (char ***)&DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*plVar4 + 0x10))(&local_70,plVar4,"WebRTC-ForceSimulatedOveruseIntervalMs",0x26);
  if ((long)local_60 < 0) {
    __s = (char ****)local_70;
    if (puStack_68 != (undefined1 *)0x0) goto LAB_00981bb8;
  }
  else {
    if (local_60._7_1_ == '\0') goto LAB_00981d20;
    __s = &local_70;
LAB_00981bb8:
    local_78 = 0;
    local_7c = 0;
    iVar1 = sscanf((char *)__s,"%d-%d-%d",(long)&local_78 + 4,&local_78,&local_7c);
    if (iVar1 == 3) {
      uVar6 = (ulong)local_78._4_4_;
      if (0 < (int)local_78._4_4_) {
        uVar8 = local_78 & 0xffffffff;
        if ((0 < (int)local_78) && (uVar9 = (ulong)local_7c, 0 < (int)local_7c)) {
          puVar5 = (undefined8 *)operator_new(0x60);
          lVar7 = *(long *)(param_1 + 0x28);
          *puVar5 = &PTR_FUN_00d3f388;
          puVar5[1] = lVar7;
          if (lVar7 != 0) {
            FUN_00d0f740(1,lVar7 + 8);
          }
          uVar12 = *(undefined8 *)(param_1 + 0x38);
          uVar11 = *(undefined8 *)(param_1 + 0x30);
          uVar14 = *(undefined8 *)(param_1 + 0x48);
          uVar13 = *(undefined8 *)(param_1 + 0x40);
          puVar5[6] = puVar2;
          puVar5[7] = uVar6;
          puVar5[8] = uVar8;
          puVar5[9] = uVar9;
          puVar5[3] = uVar12;
          puVar5[2] = uVar11;
          puVar5[5] = uVar14;
          puVar5[4] = uVar13;
          *(undefined4 *)(puVar5 + 10) = 0;
          puVar5[0xb] = 0xffffffffffffffff;
          uVar9 = FUN_00417e08();
          puVar2 = puVar5;
          if ((uVar9 & 1) == 0) {
            FUN_00623bb0(&DAT_00215708,"../../video/adaptation/overuse_frame_detector.cc",0xb29,
                         "Simulating overuse with intervals ",uVar6,"ms normal mode, ",uVar8,
                         "ms overuse mode.");
          }
          goto LAB_00981d04;
        }
      }
      uVar6 = FUN_004022fc();
      if ((uVar6 & 1) == 0) {
        FUN_00623bb0(&DAT_001f707a,"../../video/adaptation/overuse_frame_detector.cc",0xe8a,
                     "Invalid (non-positive) normal/overuse/underuse periods: ",local_78._4_4_,
                     &DAT_001ceb48,local_78 & 0xffffffff,&DAT_001ceb48,local_7c);
      }
    }
    else {
      uVar6 = FUN_004022fc();
      if ((uVar6 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e90,"../../video/adaptation/overuse_frame_detector.cc",0xeba,
                     "Malformed toggling interval: ",&local_70);
      }
    }
LAB_00981d04:
    if (-1 < (long)local_60) goto LAB_00981d20;
  }
  operator_delete(local_70);
LAB_00981d20:
  plVar4 = *(long **)(param_1 + 0xa0);
  *(undefined8 **)(param_1 + 0xa0) = puVar2;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x30))();
  }
  return;
}


// ===== 00981d5c  FUN_00981d5c =====

void FUN_00981d5c(long param_1)

{
  FUN_00841cf8(param_1 + 0x50);
  return;
}


// ===== 00981d68  FUN_00981d68 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00981d68(long *param_1)

{
  long lVar1;
  
  (*(code *)**(undefined8 **)param_1[0x14])();
  lVar1 = _DAT_001f3060;
  param_1[0xe] = _UNK_001f3068;
  param_1[0xd] = lVar1;
  if (*(char *)((long)param_1 + 100) == '\x01') {
    *(undefined1 *)((long)param_1 + 100) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00981dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,*(undefined4 *)((long)param_1 + 0x7c));
  return;
}


// ===== 00981dc8  FUN_00981dc8 =====

void FUN_00981dc8(long param_1,uint param_2)

{
  uint uVar1;
  
  if (0x1d < (int)param_2) {
    param_2 = 0x1e;
  }
  *(uint *)(param_1 + 0x7c) = param_2;
  if ((int)param_2 < 8) {
    param_2 = 7;
  }
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = 1000 / param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00981e14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xa0) + 8))((float)uVar1 * 1.35,*(long **)(param_1 + 0xa0));
  return;
}


// ===== 00981e18  FUN_00981e18 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00981e18(long *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = FUN_007bf3cc(param_2);
  iVar2 = FUN_007bf3e8(param_2);
  if ((iVar2 * iVar1 != (int)param_1[0xf]) ||
     ((lVar3 = param_1[0xe], lVar3 != -1 && ((long)(int)param_1[2] * 1000 < param_3 - lVar3)))) {
    iVar1 = FUN_007bf3cc(param_2);
    iVar2 = FUN_007bf3e8(param_2);
    *(int *)(param_1 + 0xf) = iVar2 * iVar1;
    (*(code *)**(undefined8 **)param_1[0x14])();
    lVar3 = _DAT_001f3060;
    param_1[0xe] = _UNK_001f3068;
    param_1[0xd] = lVar3;
    if (*(char *)((long)param_1 + 100) == '\x01') {
      *(undefined1 *)((long)param_1 + 100) = 0;
    }
    (**(code **)(*param_1 + 0x10))(param_1,*(undefined4 *)((long)param_1 + 0x7c));
    lVar3 = param_1[0xe];
  }
  (**(code **)(*(long *)param_1[0x14] + 0x10))((long *)param_1[0x14],param_2,param_3,lVar3);
  param_1[0xe] = param_3;
  return;
}


// ===== 00981f10  FUN_00981f10 =====

void FUN_00981f10(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  
  uVar3 = (**(code **)(**(long **)(param_1 + 0xa0) + 0x18))();
  if ((uVar3 >> 0x20 & 1) == 0) {
    return;
  }
  iVar1 = (int)uVar3;
  uVar2 = (**(code **)(**(long **)(param_1 + 0xa0) + 0x20))();
  *(undefined4 *)(param_1 + 0x60) = uVar2;
  *(undefined1 *)(param_1 + 100) = 1;
                    /* WARNING: Could not recover jumptable at 0x00981f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x58) + 0x10))
            (*(long **)(param_1 + 0x58),
             (ulong)(uint)(iVar1 / 1000 + (iVar1 >> 0x1f)) - ((long)iVar1 * 0x10624dd3 >> 0x3f) &
             0xffffffff);
  return;
}


// ===== 00981fa0  FUN_00981fa0 =====

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00981fa0(long param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  char *pcVar7;
  uint in_stack_ffffffffffffff40;
  char *local_a0;
  char *local_98;
  undefined1 *local_90;
  char *local_88;
  char **ppcStack_80;
  ulong local_78;
  char **ppcStack_70;
  char **local_68;
  char *local_60;
  char *pcStack_58;
  char *local_50;
  ulong *puStack_48;
  undefined1 uStack_21;
  
  lVar5 = *(long *)(param_1 + 0x68) + 1;
  *(long *)(param_1 + 0x68) = lVar5;
  if (lVar5 <= *(int *)(param_1 + 0x18)) {
    return;
  }
  if (*(char *)(param_1 + 100) != '\x01') {
    return;
  }
  uVar2 = (**(code **)(**(long **)(param_1 + 0x38) + 0x10))();
  uVar4 = uVar2 / 1000;
  if (499 < uVar2 % 1000) {
    uVar4 = uVar4 + 1;
  }
  if ((uVar2 & 0x8000000000000000) != 0) {
    uVar4 = -(-uVar2 / 1000) - (ulong)(500 < -uVar2 % 1000);
  }
  if ((*(byte *)(param_1 + 100) & 1) == 0) goto LAB_009822f0;
  if (*(int *)(param_1 + 0x60) < *(int *)(param_1 + 8)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x88) + 1;
  }
  *(int *)(param_1 + 0x88) = iVar1;
  if (iVar1 < *(int *)(param_1 + 0x1c)) {
    if ((*(byte *)(param_1 + 0x98) & 1) == 0) {
      lVar5 = (long)*(int *)(param_1 + 0x9c);
    }
    else {
      lVar5 = 10000;
    }
    if ((*(long *)(param_1 + 0x90) + lVar5 <= (long)uVar4) &&
       (*(int *)(param_1 + 0x60) < *(int *)(param_1 + 0xc))) {
      *(ulong *)(param_1 + 0x90) = uVar4;
      pcVar7 = "AdaptUp";
      *(undefined1 *)(param_1 + 0x98) = 1;
      puVar3 = (undefined8 *)*param_2;
      goto LAB_00982154;
    }
    pcVar7 = "NoAction";
  }
  else {
    if (*(long *)(param_1 + 0x80) < *(long *)(param_1 + 0x90)) {
      if (((long)(uVar4 - *(long *)(param_1 + 0x90)) < 40000) || (4 < *(int *)(param_1 + 0x8c))) {
        iVar1 = *(int *)(param_1 + 0x9c) * 2;
        if (239999 < iVar1) {
          iVar1 = 240000;
        }
      }
      else {
        iVar1 = 40000;
      }
      *(int *)(param_1 + 0x9c) = iVar1;
    }
    *(ulong *)(param_1 + 0x80) = uVar4;
    pcVar7 = "AdaptDown";
    *(undefined1 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
    puVar3 = (undefined8 *)(*param_2 + 8);
LAB_00982154:
    (*(code *)*puVar3)(param_2);
  }
  if (((DAT_00d80798 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d80798), iVar1 != 0)) {
    DAT_00d80790 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d80798);
  }
  local_68 = (char **)0x0;
  pcStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d80790 != '\0') {
    if ((*(byte *)(param_1 + 100) & 1) == 0) goto LAB_009822f0;
    local_a0 = "encode_usage_percent";
    local_98 = "action";
    local_50 = (char *)(long)*(int *)(param_1 + 0x60);
    local_78 = CONCAT62(local_78._2_6_,0x703);
    in_stack_ffffffffffffff40 = in_stack_ffffffffffffff40 & 0xffffff00;
    puStack_48 = (ulong *)pcVar7;
    FUN_0066d348(0x42,DAT_00d80790,"OveruseFrameDetector::CheckForOveruse",0,2,&local_a0,&local_78,
                 &local_50,in_stack_ffffffffffffff40);
    local_60 = DAT_00d80790;
    pcStack_58 = "OveruseFrameDetector::CheckForOveruse";
    local_68 = &local_60;
  }
  if ((*(byte *)(param_1 + 0x98) & 1) == 0) {
    uVar6 = *(uint *)(param_1 + 0x9c);
    uVar4 = FUN_00417e08();
  }
  else {
    uVar6 = 10000;
    uVar4 = FUN_00417e08();
  }
  if ((uVar4 & 1) == 0) {
    local_a0 = "../../video/adaptation/overuse_frame_detector.cc";
    local_98 = (char *)0x1451;
    local_90 = &uStack_21;
    ppcStack_80 = &local_a0;
    local_88 = "CheckForOveruse: encode usage ";
    if ((*(byte *)(param_1 + 100) & 1) == 0) {
LAB_009822f0:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    local_78 = (ulong)*(uint *)(param_1 + 0x60);
    ppcStack_70 = &local_88;
    puStack_48 = &local_78;
    local_50 = " overuse detections ";
    FUN_00623bb0(&DAT_0022a740,"../../video/adaptation/overuse_frame_detector.cc",0x1451,
                 "CheckForOveruse: encode usage ",local_78," overuse detections ",
                 *(undefined4 *)(param_1 + 0x8c)," rampup delay ",uVar6," action ",pcVar7);
    in_stack_ffffffffffffff40 = uVar6;
  }
  if ((local_68 != (char **)0x0) && (**local_68 != '\0')) {
    FUN_0066d348(0x45,*local_68,local_68[1],0,0,0,0,0,in_stack_ffffffffffffff40 & 0xffffff00);
  }
  return;
}


// ===== 00982334  FUN_00982334 =====

void FUN_00982334(long param_1)

{
  *(undefined8 *)(param_1 + 0x40) = 0xffffffffffffffff;
  *(double *)(param_1 + 0x48) = (double)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc)) / 200.0;
  return;
}


// ===== 00982360  FUN_00982360 =====

void FUN_00982360(void)

{
  return;
}


// ===== 00982368  FUN_00982368 =====

void FUN_00982368(void)

{
  return;
}


// ===== 00982370  FUN_00982370 =====

ulong FUN_00982370(long param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5)

{
  int iVar1;
  long *plVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  long local_80;
  long lStack_78;
  
  if ((param_5 >> 0x20 & 1) != 0) {
    local_80 = (long)(int)param_5;
    puVar6 = (undefined8 *)(param_1 + 0x28);
    lStack_78 = param_4;
    if ((long *)*puVar6 != (long *)(param_1 + 0x30)) {
      plVar7 = (long *)*puVar6;
      do {
        if (param_4 + -2000000 <= plVar7[4]) break;
        plVar2 = (long *)plVar7[1];
        plVar8 = plVar7;
        if ((long *)plVar7[1] == (long *)0x0) {
          do {
            plVar9 = (long *)plVar8[2];
            bVar3 = plVar8 != (long *)*plVar9;
            plVar8 = plVar9;
          } while (bVar3);
        }
        else {
          do {
            plVar9 = plVar2;
            plVar2 = (long *)*plVar9;
          } while ((long *)*plVar9 != (long *)0x0);
        }
        if ((long *)*puVar6 == plVar7) {
          *puVar6 = plVar9;
        }
        *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + -1;
        FUN_005d5d48(*(undefined8 *)(param_1 + 0x30),plVar7);
        if (plVar7 + 4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        operator_delete(plVar7);
        plVar7 = plVar9;
      } while (plVar9 != (long *)(param_1 + 0x30));
    }
    auVar14 = FUN_00982664(0,puVar6,puVar6,&lStack_78,&local_80);
    iVar4 = (int)local_80;
    if ((auVar14 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
      iVar1 = *(int *)(auVar14._0_8_ + 0x28);
      if (iVar1 < local_80) {
        *(int *)(auVar14._0_8_ + 0x28) = iVar4;
        iVar4 = iVar4 - iVar1;
      }
      else {
        iVar4 = 0;
      }
    }
    lVar5 = *(long *)(param_1 + 0x40);
    if (lVar5 != -1) {
      if (param_4 <= lVar5) {
        param_4 = lVar5;
      }
      dVar12 = (double)(param_4 - lVar5) * DAT_001f5658;
      if (dVar12 < 0.0 != NAN(dVar12)) {
                    /* WARNING: Subroutine does not return */
        FUN_0061fd88(dVar12,0,"../../video/adaptation/overuse_frame_detector.cc",0x118,
                     "diff_time >= 0.0",&DAT_001fdd70);
      }
      dVar13 = (double)iVar4 * DAT_001f5658;
      dVar11 = (double)*(int *)(param_1 + 0x20) * DAT_001f5860;
      dVar10 = dVar12 / dVar11;
      if (DAT_001f4f18 <= dVar10) {
        dVar11 = expm1(-dVar10);
        dVar11 = -dVar11 / dVar12;
      }
      else {
        dVar11 = (dVar10 * -0.5 + 1.0) / dVar11;
      }
      dVar12 = exp(-dVar10);
      *(double *)(param_1 + 0x48) = dVar13 * dVar11 + dVar12 * *(double *)(param_1 + 0x48);
    }
  }
  *(long *)(param_1 + 0x40) = param_4;
  return param_5;
}


// ===== 009825b0  FUN_009825b0 =====

int FUN_009825b0(long param_1)

{
  return (int)(*(double *)(param_1 + 0x48) * 100.0 + 0.5);
}


// ===== 009825d4  FUN_009825d4 =====

void FUN_009825d4(undefined8 *param_1)

{
  undefined8 *local_18;
  
  *param_1 = &PTR_FUN_00d3f2f8;
  local_18 = param_1 + 5;
  FUN_00982774(&local_18,param_1[6]);
  return;
}


// ===== 00982614  FUN_00982614 =====

void FUN_00982614(undefined8 *param_1)

{
  undefined8 *local_8;
  
  *param_1 = &PTR_FUN_00d3f2f8;
  local_8 = param_1 + 5;
  FUN_00982774(&local_8,param_1[6]);
  operator_delete(param_1);
  return;
}


// ===== 00982664  FUN_00982664 =====

undefined1  [16]
FUN_00982664(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 *param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
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
        if ((long *)*plVar2 == (long *)0x0) goto LAB_009826d0;
      }
      if (*param_4 == plVar2[4]) {
        uVar5 = 0;
        goto LAB_00982744;
      }
      plVar1 = (long *)plVar2[1];
    } while ((long *)plVar2[1] != (long *)0x0);
    plVar6 = plVar2 + 1;
  }
LAB_009826d0:
  plVar2 = (long *)operator_new(0x30);
  if ((plVar2 == (long *)0x0) || (*plVar2 = 0, plVar2 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  lVar4 = *param_4;
  uVar5 = *param_5;
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[4] = lVar4;
  *(int *)(plVar2 + 5) = (int)uVar5;
  plVar2[2] = (long)plVar3;
  *plVar6 = (long)plVar2;
  plVar3 = plVar2;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar3 = (long *)*plVar6;
  }
  FUN_005d5b94(param_2[1],plVar3);
  uVar5 = 1;
  param_2[2] = param_2[2] + 1;
LAB_00982744:
  auVar7._8_8_ = uVar5;
  auVar7._0_8_ = plVar2;
  return auVar7;
}


// ===== 00982774  FUN_00982774 =====

void FUN_00982774(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00982774(param_1,*param_2);
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


// ===== 009827e8  FUN_009827e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009827e8(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    plVar1 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(*(long *)(param_1 + 0x30) + 8);
    *(long **)(*plVar1 + 8) = plVar4;
    *plVar4 = *plVar1;
    *(undefined8 *)(param_1 + 0x40) = 0;
    while (plVar1 != (long *)(param_1 + 0x30)) {
      if ((plVar1 == (long *)0xfffffffffffffff0) || (plVar1 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar4 = (long *)plVar1[1];
      operator_delete(plVar1);
      plVar1 = plVar4;
    }
  }
  uVar3 = _UNK_001f3068;
  uVar2 = _DAT_001f3060;
  *(undefined4 *)(param_1 + 0x58) = 0x42340000;
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  FUN_00625c38(*(undefined4 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x68));
  FUN_00625c4c(0x3f800000,*(undefined4 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x68));
  FUN_00625c38(*(undefined4 *)(param_1 + 0xc),*(undefined8 *)(param_1 + 0x60));
  FUN_00625c4c(0x3f800000,
               (*(float *)(param_1 + 0x10) *
               ((float)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x18)) / 2.0)) / 100.0,
               *(undefined8 *)(param_1 + 0x60));
  return;
}


// ===== 009828e0  FUN_009828e0 =====

void FUN_009828e0(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x58) = param_1;
  return;
}


// ===== 009828ec  FUN_009828ec =====

void FUN_009828ec(long param_1,long param_2,long param_3,long param_4)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  
  if (param_4 != -1) {
    fVar6 = (float)((double)(param_3 - param_4) * DAT_001f5860) / 33.333332;
    fVar7 = 7.0;
    if (fVar6 == 7.0 || fVar6 < 7.0 != NAN(fVar6)) {
      fVar7 = fVar6;
    }
    FUN_00625c4c(fVar7,*(undefined8 *)(param_1 + 0x68));
  }
  lVar5 = *(long *)(param_2 + 0x20);
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  plVar2 = (long *)operator_new(0x30);
  if ((plVar2 != (long *)0x0) && (plVar2 != (long *)0xfffffffffffffff0)) {
    *(undefined4 *)(plVar2 + 3) = uVar1;
    plVar2[4] = param_3;
    plVar2[5] = -1;
    plVar4 = (long *)(param_1 + 0x30);
    lVar3 = *plVar4;
    plVar2[1] = (long)plVar4;
    plVar2[2] = lVar5;
    *plVar2 = lVar3;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar4 = (long)plVar2;
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 009829c0  FUN_009829c0 =====

ulong FUN_009829c0(long param_1,int param_2,long param_3)

{
  long *plVar1;
  float fVar2;
  double dVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  
  for (lVar5 = *(long *)(param_1 + 0x38); lVar5 != param_1 + 0x30; lVar5 = *(long *)(lVar5 + 8)) {
    if (*(int *)(lVar5 + 0x18) == param_2) {
      *(long *)(lVar5 + 0x28) = param_3;
      lVar5 = *(long *)(param_1 + 0x40);
      dVar3 = DAT_001f5860;
      goto joined_r0x00982b3c;
    }
  }
  lVar5 = *(long *)(param_1 + 0x40);
  dVar3 = DAT_001f5860;
joined_r0x00982b3c:
  DAT_001f5860 = dVar3;
  if (lVar5 == 0) {
    uVar7 = 0xaaaaaa00aaaaaa00;
  }
  else {
    uVar9 = 0;
    uVar7 = 0;
    uVar8 = 0xaaaaaa;
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 0x20);
      if (param_3 - lVar5 < 1000000) break;
      lVar6 = *(long *)(*(long *)(param_1 + 0x38) + 0x28);
      if (lVar6 != -1) {
        uVar9 = (int)lVar6 - (int)lVar5;
        uVar7 = (ulong)uVar9;
        uVar8 = uVar9 >> 8;
        if (*(long *)(param_1 + 0x50) == -1) {
          *(long *)(param_1 + 0x50) = lVar5;
        }
        else {
          *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 1;
          fVar10 = (float)(long)((double)(lVar5 - *(long *)(param_1 + 0x50)) * dVar3) / 33.333332;
          fVar2 = 7.0;
          if (fVar10 == 7.0 || fVar10 < 7.0 != NAN(fVar10)) {
            fVar2 = fVar10;
          }
          FUN_00625c4c(fVar2,(float)((double)(int)uVar9 * dVar3),*(undefined8 *)(param_1 + 0x60));
          *(long *)(param_1 + 0x50) = lVar5;
          if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/list:1394: libc++ Hardening assertion !empty() failed: list::pop_front() called with empty list\n"
                      );
          }
        }
        uVar9 = 1;
      }
      plVar4 = *(long **)(param_1 + 0x38);
      plVar1 = (long *)plVar4[1];
      *(long **)(*plVar4 + 8) = plVar1;
      *plVar1 = *plVar4;
      *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -1;
      if ((plVar4 == (long *)0xfffffffffffffff0) || (plVar4 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      operator_delete(plVar4);
    } while (*(long *)(param_1 + 0x40) != 0);
    uVar7 = (ulong)(uVar8 << 8) | uVar7 & 0xff | (ulong)uVar9 << 0x20 | 0xaaaaaa0000000000;
  }
  return uVar7;
}


// ===== 00982b94  FUN_00982b94 =====

int FUN_00982b94(long param_1)

{
  float fVar1;
  float fVar2;
  
  if (*(ulong *)(param_1 + 0x48) < (ulong)*(uint *)(param_1 + 0x20)) {
    return (int)((float)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x18)) / 2.0 + 0.5);
  }
  fVar2 = *(float *)(*(long *)(param_1 + 0x68) + 4);
  fVar1 = 1.0;
  if (1.0 <= fVar2) {
    fVar1 = fVar2;
  }
  fVar2 = *(float *)(param_1 + 0x58);
  if (fVar1 <= *(float *)(param_1 + 0x58)) {
    fVar2 = fVar1;
  }
  return (int)((*(float *)(*(long *)(param_1 + 0x60) + 4) * 100.0) / fVar2 + 0.5);
}


// ===== 00982c0c  FUN_00982c0c =====

void FUN_00982c0c(undefined8 *param_1)

{
  long *plVar1;
  void *pvVar2;
  long *plVar3;
  
  pvVar2 = (void *)param_1[0xd];
  param_1[0xd] = 0;
  *param_1 = &PTR_FUN_00d3f340;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[0xc];
  param_1[0xc] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  if (param_1[8] != 0) {
    plVar1 = (long *)param_1[7];
    plVar3 = *(long **)(param_1[6] + 8);
    *(long **)(*plVar1 + 8) = plVar3;
    *plVar3 = *plVar1;
    param_1[8] = 0;
    while (plVar1 != param_1 + 6) {
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
  return;
}


// ===== 00982ccc  FUN_00982ccc =====

void FUN_00982ccc(void *param_1)

{
  FUN_00982c0c();
  operator_delete(param_1);
  return;
}


// ===== 00982cfc  FUN_00982cfc =====

void FUN_00982cfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00982d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0x30))();
  return;
}


// ===== 00982d10  FUN_00982d10 =====

void FUN_00982d10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00982d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x30) + 8))();
  return;
}


// ===== 00982d24  FUN_00982d24 =====

void FUN_00982d24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00982d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x30) + 0x10))();
  return;
}


// ===== 00982d38  FUN_00982d38 =====

ulong FUN_00982d38(long param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
  return uVar1 & 0xffffffffff;
}


// ===== 00982d64  FUN_00982d64 =====

undefined4 FUN_00982d64(long param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  ulong uVar7;
  long lVar8;
  undefined4 uVar9;
  
  uVar4 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  uVar7 = uVar4 / 1000;
  if (499 < uVar4 % 1000) {
    uVar7 = uVar7 + 1;
  }
  lVar8 = *(long *)(param_1 + 0x58);
  if ((uVar4 & 0x8000000000000000) != 0) {
    uVar7 = -(-uVar4 / 1000) - (ulong)(500 < -uVar4 % 1000);
  }
  if (lVar8 == -1) {
    *(ulong *)(param_1 + 0x58) = uVar7;
    goto LAB_00982ed8;
  }
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 == 2) {
    if ((long)uVar7 <= *(long *)(param_1 + 0x48) + lVar8) goto LAB_00982ed8;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(ulong *)(param_1 + 0x58) = uVar7;
    uVar7 = FUN_00417e08();
    if ((uVar7 & 1) != 0) goto LAB_00982ed8;
    pcVar6 = "Actual CPU overuse measurements in effect.";
    uVar5 = 0xcd9;
  }
  else if (iVar1 == 1) {
    if ((long)uVar7 <= *(long *)(param_1 + 0x40) + lVar8) goto LAB_00982ed8;
    *(ulong *)(param_1 + 0x58) = uVar7;
    *(undefined4 *)(param_1 + 0x50) = 2;
    uVar7 = FUN_00417e08();
    if ((uVar7 & 1) != 0) goto LAB_00982ed8;
    pcVar6 = "Simulating CPU underuse.";
    uVar5 = 0xca1;
  }
  else {
    if ((iVar1 != 0) || ((long)uVar7 <= *(long *)(param_1 + 0x38) + lVar8)) goto LAB_00982ed8;
    *(ulong *)(param_1 + 0x58) = uVar7;
    *(undefined4 *)(param_1 + 0x50) = 1;
    uVar7 = FUN_00417e08();
    if ((uVar7 & 1) != 0) goto LAB_00982ed8;
    pcVar6 = "Simulating CPU overuse.";
    uVar5 = 0xc69;
  }
  FUN_00623bb0(&DAT_001f4e98,"../../video/adaptation/overuse_frame_detector.cc",uVar5,pcVar6);
LAB_00982ed8:
  if (*(int *)(param_1 + 0x50) == 2) {
    bVar2 = true;
    uVar9 = 5;
  }
  else if (*(int *)(param_1 + 0x50) == 1) {
    bVar2 = true;
    uVar9 = 0xfa;
  }
  else {
    bVar2 = false;
    uVar9 = 0xaaaaaa00;
  }
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x20))();
  if (!bVar2) {
    uVar9 = uVar3;
  }
  return uVar9;
}


// ===== 00982f3c  FUN_00982f3c =====

void FUN_00982f3c(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[6];
  param_1[6] = 0;
  *param_1 = &PTR_FUN_00d3f388;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x30))();
  }
  plVar2 = (long *)param_1[1];
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x00982fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  return;
}


// ===== 00982fbc  FUN_00982fbc =====

void FUN_00982fbc(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[6];
  param_1[6] = 0;
  *param_1 = &PTR_FUN_00d3f388;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x30))();
  }
  plVar2 = (long *)param_1[1];
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  operator_delete(param_1);
  return;
}


// ===== 00983038  FUN_00983038 =====

undefined8 FUN_00983038(undefined8 *param_1)

{
  FUN_00981fa0(*param_1,param_1[1]);
  return 5000000;
}


// ===== 00983064  FUN_00983064 =====

void FUN_00983064(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  int iVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  char **ppcVar7;
  char *local_60;
  char *pcStack_58;
  
  param_1[2] = param_8;
  param_1[3] = param_7;
  *param_1 = &PTR_FUN_00d3f3d0;
  param_1[1] = &PTR_FUN_00d3f400;
  pvVar3 = operator_new(0x758);
  FUN_00985b94();
  param_1[4] = pvVar3;
  pvVar3 = operator_new(0x30);
  FUN_00985e7c(pvVar3,param_1[3],param_8);
  param_1[5] = pvVar3;
  FUN_00986094(param_1 + 6,param_6);
  FUN_00986718(param_1 + 7);
  param_1[8] = 0;
  FUN_009883cc(param_1 + 9);
  param_1[10] = 0;
  param_1[0xb] = param_2;
  param_1[0xc] = 0;
  param_1[0xe] = param_3;
  *(undefined4 *)(param_1 + 0xf) = 0;
  FUN_0097c98c(param_1 + 0x10);
  param_1[0x16] = 0;
  FUN_0097f284(param_1 + 0x17,param_8);
  param_1[0x1a] = param_4;
  *(undefined1 *)(param_1 + 0x1b) = param_5;
  puVar4 = (undefined8 *)operator_new(0x278);
  plVar6 = (long *)param_1[7];
  if (plVar6 == (long *)0x0) {
    *puVar4 = 0;
  }
  else {
    (**(code **)*plVar6)(plVar6);
    *puVar4 = plVar6;
    (**(code **)*plVar6)(plVar6);
  }
  FUN_009875e0(puVar4 + 1,param_8);
  *(undefined1 *)(puVar4 + 0x43) = 0;
  *(undefined1 *)(puVar4 + 0x47) = 0;
  *(undefined1 *)((long)puVar4 + 0x23c) = 0;
  *(undefined1 *)(puVar4 + 0x4e) = 0;
  puVar4[0x45] = 0;
  puVar4[0x44] = 0;
  *(undefined8 *)((long)puVar4 + 0x22d) = 0;
  puVar4[0x49] = 0;
  puVar4[0x48] = 0;
  puVar4[0x4b] = 0;
  puVar4[0x4a] = 0;
  puVar4[0x4d] = 0;
  puVar4[0x4c] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))(plVar6);
  }
  param_1[0x1c] = puVar4;
  bVar1 = FUN_00987adc(param_1[2]);
  *(undefined1 *)((long)param_1 + 0xec) = 0;
  *(byte *)(param_1 + 0x1d) = bVar1 & 1;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  *(undefined1 *)(param_1 + 0x135) = 0;
  param_1[0x138] = 0;
  param_1[0x137] = 0;
  param_1[0x136] = param_1 + 0x137;
  if (((DAT_00d807a8 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00d807a8), iVar2 != 0)) {
    DAT_00d807a0 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d807a8);
  }
  pcStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d807a0 == '\0') {
    ppcVar7 = (char **)0x0;
    lVar5 = param_1[3];
  }
  else {
    ppcVar7 = &local_60;
    FUN_0066d348(0x42,DAT_00d807a0,
                 "VideoStreamEncoderResourceManager::VideoStreamEncoderResourceManager",0,0,0,0,0,0)
    ;
    local_60 = DAT_00d807a0;
    pcStack_58 = "VideoStreamEncoderResourceManager::VideoStreamEncoderResourceManager";
    lVar5 = param_1[3];
  }
  if (lVar5 != 0) {
    if (param_1[0xe] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../video/adaptation/video_stream_encoder_resource_manager.cc",0x130,
                   "encoder_stats_observer_",&DAT_001f5fa0);
    }
    if ((ppcVar7 != (char **)0x0) && (**ppcVar7 != '\0')) {
      FUN_0066d348(0x45,*ppcVar7,ppcVar7[1],0,0,0,0,0,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../video/adaptation/video_stream_encoder_resource_manager.cc",0x12f,
               "degradation_preference_provider_",&DAT_001f5fa0);
}


// ===== 00983344  FUN_00983344 =====

void FUN_00983344(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *local_18;
  
  *param_1 = &PTR_FUN_00d3f3d0;
  local_18 = param_1 + 0x136;
  param_1[1] = &PTR_FUN_00d3f400;
  FUN_0098596c(&local_18,param_1[0x137]);
  if (*(char *)(param_1 + 0x135) == '\x01') {
    FUN_008a03f4(param_1 + 0x89);
    FUN_0084966c(param_1 + 0x6f);
    FUN_007b9754(param_1 + 0x4d);
  }
  if (*(char *)(param_1 + 0x4c) == '\x01') {
    FUN_007baa68(param_1 + 0x1f);
  }
  plVar1 = (long *)param_1[0x1c];
  param_1[0x1c] = 0;
  if (plVar1 != (long *)0x0) {
    if ((void *)plVar1[0x49] != (void *)0x0) {
      operator_delete((void *)plVar1[0x49]);
    }
    FUN_006634ac(plVar1 + 0x39);
    FUN_006634ac(plVar1 + 0x30);
    FUN_006634ac(plVar1 + 0x26);
    FUN_006634ac(plVar1 + 0x1c);
    FUN_006634ac(plVar1 + 0x13);
    FUN_006634ac(plVar1 + 10);
    FUN_006634ac(plVar1 + 1);
    if ((long *)*plVar1 != (long *)0x0) {
      (**(code **)(*(long *)*plVar1 + 8))();
    }
    operator_delete(plVar1);
  }
  FUN_009801a0(param_1 + 0x17);
  if ((long *)param_1[9] != (long *)0x0) {
    (**(code **)(*(long *)param_1[9] + 8))();
  }
  if ((long *)param_1[8] != (long *)0x0) {
    (**(code **)(*(long *)param_1[8] + 8))();
  }
  if ((long *)param_1[7] != (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 8))();
  }
  if ((long *)param_1[6] != (long *)0x0) {
    (**(code **)(*(long *)param_1[6] + 8))();
  }
  plVar1 = (long *)param_1[5];
  param_1[5] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[4];
  param_1[4] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_0097c984(param_1 + 1);
  FUN_0097cc6c(param_1);
  return;
}


// ===== 009834e4  FUN_009834e4 =====

void FUN_009834e4(long param_1)

{
  FUN_00983344(param_1 + -8);
  return;
}


// ===== 009834f0  FUN_009834f0 =====

void FUN_009834f0(void *param_1)

{
  FUN_00983344();
  operator_delete(param_1);
  return;
}


// ===== 00983520  FUN_00983520 =====

void FUN_00983520(long param_1)

{
  FUN_00983344((void *)(param_1 + -8));
  operator_delete((void *)(param_1 + -8));
  return;
}


// ===== 00983554  FUN_00983554 =====

void FUN_00983554(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x50) = param_2;
  FUN_0098661c(*(undefined8 *)(param_1 + 0x30));
  FUN_0098661c(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x50));
  FUN_0098661c(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
  return;
}


// ===== 00983594  FUN_00983594 =====

void FUN_00983594(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x60) = param_2;
  *(undefined8 *)(param_1 + 0x68) = param_3;
  return;
}


// ===== 009835a0  FUN_009835a0 =====

void FUN_009835a0(long param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  *(uint *)(param_1 + 0x78) = param_2;
  uVar1 = FUN_0098681c(*(undefined8 *)(param_1 + 0x38));
  if (((uVar1 & 1) == 0) &&
     (uVar1 = FUN_009884d0(*(undefined8 *)(param_1 + 0x48)), (uVar1 & 1) == 0)) {
    lVar2 = 0x100;
    if ((param_2 & 0xfffffffe) != 2) {
      lVar2 = 0;
    }
    lVar3 = 0;
    if ((param_2 & 0xfffffffd) == 1) {
      lVar2 = lVar2 + 1;
    }
  }
  else {
    lVar2 = 0x100;
    if ((param_2 & 0xfffffffe) != 2) {
      lVar2 = 0;
    }
    lVar3 = lVar2;
    if ((param_2 & 0xfffffffd) == 1) {
      lVar2 = lVar2 + 1;
      lVar3 = lVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0098362c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x70) + 0x50))(*(long **)(param_1 + 0x70),lVar2,lVar3);
  return;
}


// ===== 00983630  FUN_00983630 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00983630(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  long *local_28;
  
  uVar1 = FUN_009861a4(*(undefined8 *)(param_1 + 0x30));
  plVar4 = *(long **)(param_1 + 0x30);
  if ((uVar1 & 1) == 0) {
    if (plVar4 != (long *)0x0) {
      (**(code **)*plVar4)(plVar4);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x9b8);
    if (*(undefined8 **)(param_1 + 0x9b8) == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)(param_1 + 0x9b8);
      puVar8 = (undefined8 *)(param_1 + 0x9b8);
    }
    else {
      do {
        while (puVar7 = puVar2, (long *)puVar7[4] <= plVar4) {
          if (plVar4 <= (long *)puVar7[4]) goto LAB_00983734;
          puVar2 = (undefined8 *)puVar7[1];
          if ((undefined8 *)puVar7[1] == (undefined8 *)0x0) {
            puVar8 = puVar7 + 1;
            goto LAB_009836c4;
          }
        }
        puVar2 = (undefined8 *)*puVar7;
        puVar8 = puVar7;
      } while ((undefined8 *)*puVar7 != (undefined8 *)0x0);
    }
LAB_009836c4:
    puVar2 = (undefined8 *)operator_new(0x30);
    if ((puVar2 == (undefined8 *)0x0) || (puVar2 + 4 == (undefined8 *)0x0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar2[4] = plVar4;
    if (plVar4 != (long *)0x0) {
      (**(code **)*plVar4)(plVar4);
    }
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 5) = 1;
    puVar2[2] = puVar7;
    *puVar8 = puVar2;
    if (**(long **)(param_1 + 0x9b0) != 0) {
      *(long *)(param_1 + 0x9b0) = **(long **)(param_1 + 0x9b0);
      puVar2 = (undefined8 *)*puVar8;
    }
    FUN_005d5b94(*(undefined8 *)(param_1 + 0x9b8),puVar2);
    *(long *)(param_1 + 0x9c0) = *(long *)(param_1 + 0x9c0) + 1;
LAB_00983734:
    plVar6 = *(long **)(param_1 + 0x60);
    local_28 = plVar4;
    if (plVar4 != (long *)0x0) {
      (**(code **)*plVar4)(plVar4);
    }
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_28);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 8))();
    }
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))(plVar4);
    }
  }
  else {
    FUN_0098622c(plVar4);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  local_48 = 0;
  uStack_58 = _UNK_001f24e8;
  local_60 = _DAT_001f24e0;
  local_50 = DAT_001f5578;
  if ((*(byte *)(param_1 + 0x9a8) & 1) != 0) {
    lVar3 = FUN_00979d54(param_1 + 0x268);
    if (*(char *)(lVar3 + 0x31) == '\x01') {
      local_60 = DAT_001f58f8;
    }
    if (*(char *)(param_1 + 0xd8) == '\x01') {
      local_48 = 5000;
    }
    FUN_009861b0(uVar5,&local_60);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/optional:1054: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
            );
}


// ===== 00983838  FUN_00983838 =====

void FUN_00983838(long param_1,long *param_2,undefined4 param_3)

{
  long *plVar1;
  long *local_38;
  undefined4 local_2c;
  long local_28;
  
  local_28 = param_1 + 0x9b0;
  local_2c = param_3;
  FUN_009859fc(&local_28,param_2,param_2,&local_2c);
  local_38 = (long *)*param_2;
  plVar1 = *(long **)(param_1 + 0x60);
  if (local_38 != (long *)0x0) {
    (**(code **)*local_38)();
  }
  (**(code **)(*plVar1 + 0x20))(plVar1,&local_38);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 8))();
  }
  return;
}


// ===== 009838c8  FUN_009838c8 =====

void FUN_009838c8(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *local_48;
  
  FUN_00988e0c(&local_48,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x50),
               *(undefined8 *)(param_1 + 0x58));
  plVar4 = local_48;
  plVar2 = *(long **)(param_1 + 0x40);
  local_48 = (long *)0x0;
  *(long **)(param_1 + 0x40) = plVar4;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 8))();
    }
    plVar4 = *(long **)(param_1 + 0x40);
  }
  if (plVar4 != (long *)0x0) {
    (**(code **)*plVar4)(plVar4);
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x28);
    puVar3 = *(undefined8 **)(param_1 + 0x9b8);
    if (*(undefined8 **)(param_1 + 0x9b8) == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)(param_1 + 0x9b8);
      puVar6 = (undefined8 *)(param_1 + 0x9b8);
    }
    else {
      do {
        while (puVar5 = puVar3, (long *)puVar5[4] <= plVar4) {
          if (plVar4 <= (long *)puVar5[4]) goto LAB_009839f8;
          puVar3 = (undefined8 *)puVar5[1];
          if ((undefined8 *)puVar5[1] == (undefined8 *)0x0) {
            puVar6 = puVar5 + 1;
            goto LAB_00983990;
          }
        }
        puVar3 = (undefined8 *)*puVar5;
        puVar6 = puVar5;
      } while ((undefined8 *)*puVar5 != (undefined8 *)0x0);
    }
LAB_00983990:
    puVar3 = (undefined8 *)operator_new(0x30);
    if ((puVar3 == (undefined8 *)0x0) || (puVar3 == (undefined8 *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar3[4] = plVar4;
    (**(code **)*plVar4)(plVar4);
    *(undefined4 *)(puVar3 + 5) = uVar1;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = puVar5;
    *puVar6 = puVar3;
    if (**(long **)(param_1 + 0x9b0) != 0) {
      *(long *)(param_1 + 0x9b0) = **(long **)(param_1 + 0x9b0);
      puVar3 = (undefined8 *)*puVar6;
    }
    FUN_005d5b94(*(undefined8 *)(param_1 + 0x9b8),puVar3);
    *(long *)(param_1 + 0x9c0) = *(long *)(param_1 + 0x9c0) + 1;
LAB_009839f8:
    plVar2 = *(long **)(param_1 + 0x60);
    local_48 = plVar4;
    (**(code **)*plVar4)(plVar4);
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_48);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 8))();
    }
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  return;
}


