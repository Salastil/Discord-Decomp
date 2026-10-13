// ===== 005efb38  FUN_005efb38 =====

void FUN_005efb38(long param_1)

{
  FUN_0065a730(param_1 + 0x30);
  FUN_0065a730(param_1 + 0x30);
  return;
}


// ===== 005efb68  FUN_005efb68 =====

void FUN_005efb68(void *param_1)

{
  FUN_0065a730((long)param_1 + 0x30);
  FUN_0065a730((long)param_1 + 0x30);
  operator_delete(param_1);
  return;
}


// ===== 005efba4  FUN_005efba4 =====

undefined4 FUN_005efba4(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


// ===== 005efbb0  FUN_005efbb0 =====

undefined8 FUN_005efbb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


// ===== 005efbbc  FUN_005efbbc =====

undefined8 FUN_005efbbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


// ===== 005efbc8  FUN_005efbc8 =====

void FUN_005efbc8(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined2 uStack_58;
  undefined6 local_56;
  undefined2 uStack_50;
  undefined1 *puStack_4e;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)(param_1 + 0x28);
  if (*plVar4 != 0) {
    uVar2 = FUN_0065a7a0(plVar4,0);
    if ((uVar2 & 1) == 0) {
      FUN_0065a730(plVar4);
    }
    else {
      local_88 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_4e = &DAT_aaaaaaaaaaaaaaaa;
      uStack_50 = 0xaaaa;
      puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      uStack_58 = 0xaaaa;
      local_56 = 0xaaaaaaaaaaaa;
      puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
      local_80 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_005eff44(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 8),
                   *(undefined4 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x18),&local_80,
                   &local_88);
      uVar2 = FUN_0065a830(plVar4,&local_80,local_88);
      uVar3 = FUN_0065a730(plVar4);
      if (((uVar2 & 1) != 0) && ((uVar3 & 1) != 0)) goto LAB_005efc60;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../common_audio/wav_file.h",0x3b,"Close()",&DAT_001f5fa0);
  }
LAB_005efc60:
  FUN_0065a730(plVar4);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005efcbc  FUN_005efcbc =====

void FUN_005efcbc(void *param_1)

{
  FUN_005efbc8();
  operator_delete(param_1);
  return;
}


// ===== 005efcec  FUN_005efcec =====

undefined4 FUN_005efcec(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


// ===== 005efcf8  FUN_005efcf8 =====

undefined8 FUN_005efcf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


// ===== 005efd04  FUN_005efd04 =====

undefined8 FUN_005efd04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


// ===== 005efd10  FUN_005efd10 =====

void FUN_005efd10(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_0065a7f4(*(undefined8 *)(param_1 + 8));
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + lVar1;
  return;
}


// ===== 005efd48  FUN_005efd48 =====

uint FUN_005efd48(long param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = FUN_0065a774(*(undefined8 *)(param_1 + 8),param_2 & 0xffffffff);
  if ((uVar1 & 1) != 0) {
    *(ulong *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + (param_2 & 0xffffffff);
  }
  return uVar1 & 1;
}


// ===== 005efd90  FUN_005efd90 =====

void FUN_005efd90(void)

{
  return;
}


// ===== 005efd98  FUN_005efd98 =====

void FUN_005efd98(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 005efda4  FUN_005efda4 =====

undefined8 FUN_005efda4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


// ===== 005efdb0  FUN_005efdb0 =====

bool FUN_005efdb0(long param_1,uint param_2,int param_3,ulong param_4)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  
  if (param_3 - 6U < 2) {
    bVar2 = false;
    bVar3 = true;
    lVar5 = 1;
  }
  else if (param_3 == 1) {
    bVar2 = false;
    bVar3 = false;
    lVar5 = 2;
  }
  else {
    if (param_3 != 3) {
                    /* WARNING: Subroutine does not return */
      FUN_0061ff28();
    }
    bVar3 = false;
    bVar2 = true;
    lVar5 = 4;
  }
  if ((param_1 - 0x10000U < 0xffffffffffff0001) || ((int)param_2 < 1)) {
    return false;
  }
  if (param_1 * (ulong)param_2 * lVar5 >> 0x20 == 0) {
    if ((param_3 - 6U < 2) || (bVar3 = bVar2, param_3 == 3)) {
      if (!bVar3) {
        return false;
      }
    }
    else {
      if (param_3 != 1) {
        return false;
      }
      if (bVar2) {
        return false;
      }
    }
    uVar1 = ((uint)lVar5 & 0x55555555) << 1;
    if (param_4 <=
        0xffffffdb >>
        (ulong)((uint)LZCOUNT((uVar1 >> 2 |
                              (((uint)lVar5 & 0xaaaaaaaa) >> 1 | uVar1 & 0x33333333) << 2) << 0x1c)
               & 0x1f)) {
      uVar1 = 0;
      uVar4 = (uint)param_1;
      if (uVar4 != 0) {
        uVar1 = (uint)param_4 / uVar4;
      }
      return (uint)param_4 == uVar1 * uVar4;
    }
  }
  return false;
}


// ===== 005efe9c  FUN_005efe9c =====

bool FUN_005efe9c(ulong param_1,uint param_2,int param_3,ulong param_4,ulong param_5)

{
  uint uVar1;
  uint uVar2;
  
  if ((((param_1 == 0) || ((int)param_2 < 1)) || (param_4 == 0)) ||
     ((param_1 >> 0x10 != 0 || ((param_4 & 0x1fffffffffffe000) != 0)))) {
    return false;
  }
  if (param_1 * param_2 * param_4 >> 0x20 == 0) {
    if (param_3 - 6U < 2) {
      if (param_4 != 1) {
        return false;
      }
    }
    else if (param_3 == 3) {
      if (param_4 != 4) {
        return false;
      }
    }
    else {
      if (param_3 != 1) {
        return false;
      }
      if (2 < param_4) {
        return false;
      }
    }
    uVar1 = 0;
    if ((uint)param_4 != 0) {
      uVar1 = 0xffffffdb / (uint)param_4;
    }
    if (param_5 <= uVar1) {
      uVar1 = 0;
      uVar2 = (uint)param_1;
      if (uVar2 != 0) {
        uVar1 = (uint)param_5 / uVar2;
      }
      return (uint)param_5 == uVar1 * uVar2;
    }
  }
  return false;
}


// ===== 005eff44  FUN_005eff44 =====

void FUN_005eff44(long param_1,uint param_2,int param_3,ulong param_4,undefined4 *param_5,
                 undefined8 *param_6)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  
  if (param_5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../common_audio/wav_header.cc",0x162,&DAT_001a0611,&DAT_001f5fa0);
  }
  if (param_6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../common_audio/wav_header.cc",0x163,"header_size",&DAT_001f5fa0);
  }
  if (param_3 - 6U < 2) {
    bVar2 = false;
    bVar3 = true;
    lVar8 = 1;
  }
  else if (param_3 == 1) {
    bVar2 = false;
    bVar3 = false;
    lVar8 = 2;
  }
  else {
    if (param_3 != 3) {
                    /* WARNING: Subroutine does not return */
      FUN_0061ff28();
    }
    bVar3 = false;
    bVar2 = true;
    lVar8 = 4;
  }
  if (((0xffffffffffff0000 < param_1 - 0x10000U) && (0 < (int)param_2)) &&
     (param_1 * (ulong)param_2 * lVar8 >> 0x20 == 0)) {
    if ((param_3 - 6U < 2) || (bVar3 = bVar2, param_3 == 3)) {
      if (!bVar3) goto LAB_005f011c;
    }
    else if ((param_3 != 1) || (bVar2)) goto LAB_005f011c;
    uVar7 = (uint)lVar8;
    uVar1 = (uVar7 & 0x55555555) << 1;
    if (param_4 <=
        0xffffffdb >>
        (ulong)((uint)LZCOUNT((uVar1 >> 2 | ((uVar7 & 0xaaaaaaaa) >> 1 | uVar1 & 0x33333333) << 2)
                              << 0x1c) & 0x1f)) {
      uVar1 = 0;
      uVar5 = (uint)param_1;
      uVar6 = (uint)param_4;
      if (uVar5 != 0) {
        uVar1 = uVar6 / uVar5;
      }
      if (uVar6 == uVar1 * uVar5) {
        if (param_3 == 3) {
          *param_6 = 0x3a;
          param_5[4] = 0x12;
          *(undefined2 *)(param_5 + 5) = 3;
          uVar4 = DAT_001f5278;
          *(short *)((long)param_5 + 0x16) = (short)param_1;
          *(short *)(param_5 + 8) = (short)(uVar7 * uVar5);
          *param_5 = 0x46464952;
          param_5[1] = uVar7 * uVar6 + 0x32;
          *(undefined8 *)(param_5 + 2) = uVar4;
          uVar4 = DAT_001f56a0;
          lVar9 = 0x32;
          *(short *)((long)param_5 + 0x22) = (short)(uVar7 << 3);
          lVar8 = 0x36;
          param_5[6] = param_2;
          param_5[7] = param_2 * uVar7 * uVar5;
          *(undefined2 *)(param_5 + 9) = 0;
          *(undefined8 *)((long)param_5 + 0x26) = uVar4;
          *(uint *)((long)param_5 + 0x2e) = uVar6 * uVar5;
        }
        else {
          if (param_3 != 1) {
                    /* WARNING: Subroutine does not return */
            FUN_0061fd88("../../common_audio/wav_header.cc",0x16c,
                         "format == WavFormat::kWavFormatIeeeFloat",&DAT_001fbedc,param_3,3);
          }
          *param_6 = 0x2c;
          param_5[4] = 0x10;
          *(undefined2 *)(param_5 + 5) = 1;
          uVar4 = DAT_001f5278;
          *(short *)((long)param_5 + 0x16) = (short)param_1;
          *(undefined8 *)(param_5 + 2) = uVar4;
          *param_5 = 0x46464952;
          param_5[1] = uVar7 * uVar6 + 0x24;
          lVar8 = 0x28;
          *(short *)(param_5 + 8) = (short)(uVar7 * uVar5);
          lVar9 = 0x24;
          param_5[6] = param_2;
          param_5[7] = param_2 * uVar7 * uVar5;
          *(short *)((long)param_5 + 0x22) = (short)(uVar7 << 3);
        }
        *(undefined4 *)((long)param_5 + lVar9) = 0x61746164;
        *(uint *)((long)param_5 + lVar8) = uVar7 * uVar6;
        return;
      }
    }
  }
LAB_005f011c:
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../common_audio/wav_header.cc",0x167,
               "CheckWavParameters(num_channels, sample_rate, format, bytes_per_sample, num_samples)"
               ,&DAT_001f5fa0);
}


// ===== 005f01a8  FUN_005f01a8 =====

undefined8
FUN_005f01a8(long *param_1,ulong *param_2,int *param_3,int *param_4,ulong *param_5,ulong *param_6,
            undefined8 *param_7)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  void *local_c8 [2];
  char cStack_b1;
  void *local_b0 [2];
  char cStack_99;
  short local_98 [12];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  int local_68;
  int local_64;
  ushort uStack_60;
  ushort uStack_5e;
  undefined8 uStack_5c;
  short asStack_54 [2];
  
  uStack_5c = 0;
  uStack_60 = 0;
  uStack_5e = 0;
  uStack_78 = 0;
  local_80 = 0;
  local_68 = 0;
  local_64 = 0;
  local_70 = 0;
  lVar4 = (**(code **)*param_1)(param_1,&local_80,0xc);
  if (lVar4 != 0xc) {
    return 0;
  }
  if ((asStack_54 < local_98) || ((short *)((ulong)local_98 | 4) <= asStack_54)) {
    if ((int)local_80 != 0x46464952) {
      return 0;
    }
    if ((asStack_54 < local_98) || ((short *)((ulong)local_98 | 4) <= asStack_54)) {
      if ((int)uStack_78 != 0x45564157) {
        return 0;
      }
      FUN_005d3510(local_b0,&DAT_001ae432);
      uVar5 = FUN_005f04d0((ulong)&local_80 | 0xc,param_1,local_b0);
      if (cStack_99 < '\0') {
        operator_delete(local_b0[0]);
      }
      if ((uVar5 & 1) == 0) {
        uVar5 = FUN_004249b0();
        if ((uVar5 & 1) != 0) {
          return 0;
        }
        pcVar7 = "Cannot find \'fmt \' chunk.";
        uVar6 = 0xc4b;
      }
      else {
        lVar4 = (**(code **)*param_1)(param_1,(long)&local_70 + 4,0x10);
        if ((lVar4 == 0x10) &&
           (((int)local_70 == 0x10 ||
            (((local_98[0] = -0x5556, (int)local_70 == 0x12 &&
              (lVar4 = (**(code **)*param_1)(param_1,local_98,2), lVar4 == 2)) && (local_98[0] == 0)
             ))))) {
          FUN_005d3510(local_c8,&DAT_001b3cbd);
          uVar5 = FUN_005f04d0(&uStack_5c,param_1,local_c8);
          if (cStack_b1 < '\0') {
            operator_delete(local_c8[0]);
          }
          if ((uVar5 & 1) != 0) {
            iVar3 = FUN_005f05c8(local_70._4_2_);
            *param_4 = iVar3;
            *param_2 = local_70 >> 0x30;
            uVar2 = uStack_5e >> 3;
            *param_3 = local_68;
            *param_5 = (ulong)uVar2;
            if (uVar2 == 0) {
              return 0;
            }
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uStack_5c._4_4_ / uVar2;
            }
            *param_6 = (ulong)uVar1;
            iVar3 = 0x2c;
            if (*param_4 != 1) {
              iVar3 = 0x3a;
            }
            if (local_80._4_4_ < (uStack_5c._4_4_ + iVar3) - 8) {
              return 0;
            }
            uVar1 = (int)*param_5 * (int)*param_2;
            if (local_64 != *param_3 * uVar1) {
              return 0;
            }
            if ((uint)uStack_60 == (uVar1 & 0xffff)) {
              uVar5 = FUN_005efe9c(*param_2);
              if ((uVar5 & 1) == 0) {
                return 0;
              }
              uVar6 = (**(code **)(*param_1 + 0x20))(param_1);
              *param_7 = uVar6;
              return 1;
            }
            return 0;
          }
          uVar5 = FUN_004249b0();
          if ((uVar5 & 1) != 0) {
            return 0;
          }
          pcVar7 = "Cannot find \'data\' chunk.";
          uVar6 = 0xc8b;
        }
        else {
          uVar5 = FUN_004249b0();
          if ((uVar5 & 1) != 0) {
            return 0;
          }
          pcVar7 = "Cannot read \'fmt \' chunk.";
          uVar6 = 0xc6b;
        }
      }
      FUN_00623bb0(&DAT_001f4e98,"../../common_audio/wav_header.cc",uVar6,pcVar7);
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
            );
}


// ===== 005f04d0  FUN_005f04d0 =====

undefined8 FUN_005f04d0(undefined4 *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined4 local_60;
  uint uStack_5c;
  char cStack_49;
  undefined1 auStack_44 [4];
  
  while( true ) {
    lVar1 = (**(code **)*param_2)(param_2,param_1,8);
    if (lVar1 != 8) {
      return 0;
    }
    cStack_49 = '\x04';
    if (&local_60 <= auStack_44 && auStack_44 < (undefined1 *)((ulong)&local_60 | 4)) break;
    uStack_5c = uStack_5c & 0xffffff00;
    local_60 = *param_1;
    uVar2 = FUN_005f0614(&local_60,param_3);
    if (cStack_49 < '\0') {
      operator_delete((void *)CONCAT44(uStack_5c,local_60));
    }
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    uVar2 = (**(code **)(*param_2 + 8))(param_2,param_1[1]);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
            );
}


// ===== 005f05c8  FUN_005f05c8 =====

void FUN_005f05c8(short param_1)

{
  if ((param_1 != 1) && (param_1 != 3)) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../common_audio/wav_header.cc",0x8f,"false",&DAT_001fbee0,
                 "Unsupported WAV format");
  }
  return;
}


// ===== 005f0614  FUN_005f0614 =====

bool FUN_005f0614(undefined8 *param_1,undefined8 *param_2)

{
  size_t __n;
  size_t sVar1;
  undefined8 *__s1;
  undefined8 *__s2;
  byte bVar2;
  byte bVar3;
  int iVar4;
  
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
    iVar4 = memcmp(__s1,__s2,__n);
    return iVar4 == 0;
  }
  return false;
}


// ===== 005f068c  FUN_005f068c =====

void FUN_005f068c(long param_1)

{
  FUN_00660fac();
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(long *)(param_1 + 0x10) = param_1 + 0x10;
  *(long *)(param_1 + 0x18) = param_1 + 0x10;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
  return;
}


// ===== 005f06cc  FUN_005f06cc =====

void FUN_005f06cc(long param_1,undefined1 param_2,undefined8 param_3)

{
  FUN_00660fac();
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(long *)(param_1 + 0x10) = param_1 + 0x10;
  *(long *)(param_1 + 0x18) = param_1 + 0x10;
  *(undefined1 *)(param_1 + 0x28) = param_2;
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}


// ===== 005f0718  FUN_005f0718 =====

void FUN_005f0718(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    plVar1 = *(long **)(param_1 + 0x18);
    plVar2 = *(long **)(*(long *)(param_1 + 0x10) + 8);
    *(long **)(*plVar1 + 8) = plVar2;
    *plVar2 = *plVar1;
    *(undefined8 *)(param_1 + 0x20) = 0;
    while (plVar1 != (long *)(param_1 + 0x10)) {
      if (plVar1 + 2 == (long *)0x0) {
LAB_005f07ac:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar2 = (long *)plVar1[2];
      plVar3 = (long *)plVar1[1];
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (plVar1 == (long *)0x0) goto LAB_005f07ac;
      operator_delete(plVar1);
      plVar1 = plVar3;
    }
  }
  return;
}


// ===== 005f07c0  FUN_005f07c0 =====

void FUN_005f07c0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    plVar1 = *(long **)(param_1 + 0x18);
    plVar2 = *(long **)(*(long *)(param_1 + 0x10) + 8);
    *(long **)(*plVar1 + 8) = plVar2;
    *plVar2 = *plVar1;
    *(undefined8 *)(param_1 + 0x20) = 0;
    while (plVar1 != (long *)(param_1 + 0x10)) {
      if (plVar1 + 2 == (long *)0x0) {
LAB_005f0854:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar2 = (long *)plVar1[2];
      plVar3 = (long *)plVar1[1];
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (plVar1 == (long *)0x0) goto LAB_005f0854;
      operator_delete(plVar1);
      plVar1 = plVar3;
    }
  }
  return;
}


// ===== 005f0868  FUN_005f0868 =====

undefined8 FUN_005f0868(long param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  lVar6 = *(long *)(param_1 + 0x18);
  lVar1 = param_1 + 0x10;
  if (lVar6 != lVar1) {
    uVar7 = 0;
    do {
      iVar2 = (**(code **)(**(long **)(lVar6 + 0x10) + 0x28))();
      uVar3 = iVar2 - 1;
      if (uVar3 < 8) {
        uVar4 = 1;
        if ((0xfdU >> (ulong)(uVar3 & 0x1f) & 1) != 0) {
          uVar3 = (**(code **)(**(long **)(lVar6 + 0x10) +
                              *(long *)(&DAT_001fbee8 + (ulong)uVar3 * 8)))();
          uVar4 = (ulong)~uVar3 & 1;
        }
      }
      else {
        uVar4 = 1;
      }
      lVar6 = *(long *)(lVar6 + 8);
      uVar7 = uVar7 + uVar4;
    } while (lVar6 != lVar1);
    if (param_2 < uVar7) {
      return 0;
    }
  }
  lVar6 = *(long *)(param_1 + 0x18);
  *(ulong *)(param_1 + 0x30) = param_2;
  if (lVar6 != lVar1) {
    lVar5 = *(long *)(param_1 + 0x20) - param_2;
    do {
      if (lVar5 == 0) {
        return 1;
      }
      iVar2 = (**(code **)(**(long **)(lVar6 + 0x10) + 0x28))();
      uVar3 = iVar2 - 1;
      if (((uVar3 < 8) && ((0xfdU >> (ulong)(uVar3 & 0x1f) & 1) != 0)) &&
         (uVar7 = (**(code **)(**(long **)(lVar6 + 0x10) +
                              *(long *)(&DAT_001fbee8 + (ulong)uVar3 * 8)))(), (uVar7 & 1) != 0)) {
        lVar6 = FUN_005f09cc(lVar1,lVar6);
        lVar5 = lVar5 + -1;
      }
      else {
        lVar6 = *(long *)(lVar6 + 8);
      }
    } while (lVar6 != lVar1);
  }
  return 1;
}


// ===== 005f09cc  FUN_005f09cc =====

long * FUN_005f09cc(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/list:1412: libc++ Hardening assertion __p != end() failed: list::erase(iterator) called with a non-dereferenceable iterator\n"
              );
  }
  plVar1 = (long *)param_2[1];
  *(long **)(*param_2 + 8) = plVar1;
  *plVar1 = *param_2;
  param_1[2] = param_1[2] + -1;
  if (param_2 + 2 != (long *)0x0) {
    plVar2 = (long *)param_2[2];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (param_2 != (long *)0x0) {
      operator_delete(param_2);
      return plVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 005f0a6c  FUN_005f0a6c =====

void FUN_005f0a6c(undefined8 *param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long *local_28;
  
  local_28 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  FUN_005f0bc8(&local_28);
  plVar1 = local_28;
  if (local_28 != (long *)0x0) {
    puVar2 = (undefined8 *)*local_28;
    *param_1 = local_28;
    (*(code *)*puVar2)(local_28);
                    /* WARNING: Could not recover jumptable at 0x005f0ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1);
    return;
  }
  if (*(ulong *)(param_2 + 0x20) < *(ulong *)(param_2 + 0x30)) {
    puVar2 = (undefined8 *)operator_new(0x30);
    FUN_007bcf10(puVar2,param_3,param_4);
    *(undefined4 *)(puVar2 + 5) = 0;
    *puVar2 = &PTR_FUN_00d26918;
    *param_1 = puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d0f740(1,puVar2 + 5);
    }
    if (*(char *)(param_2 + 0x28) == '\x01') {
      FUN_007bd5bc(puVar2);
    }
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2);
    }
    plVar1 = (long *)operator_new(0x18);
    if ((plVar1 == (long *)0x0) || (plVar1 == (long *)0xfffffffffffffff0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    lVar3 = *(long *)(param_2 + 0x10);
    plVar1[1] = param_2 + 0x10;
    plVar1[2] = (long)puVar2;
    *plVar1 = lVar3;
    *(long **)(lVar3 + 8) = plVar1;
    *(long **)(param_2 + 0x10) = plVar1;
    *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 1;
  }
  else {
    *param_1 = 0;
  }
  return;
}


// ===== 005f0bc8  FUN_005f0bc8 =====

void FUN_005f0bc8(long *param_1,long param_2,int param_3,int param_4,int param_5)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_2 + 0x18);
  lVar1 = param_2 + 0x10;
  if (lVar6 != lVar1) {
    do {
      iVar3 = (**(code **)(**(long **)(lVar6 + 0x10) + 0x30))();
      if (((iVar3 == param_3) &&
          (iVar3 = (**(code **)(**(long **)(lVar6 + 0x10) + 0x38))(), iVar3 == param_4)) &&
         (iVar3 = (**(code **)(**(long **)(lVar6 + 0x10) + 0x28))(), iVar3 == param_5)) {
        lVar6 = *(long *)(lVar6 + 8);
      }
      else {
        lVar6 = FUN_005f09cc(param_2 + 0x10,lVar6);
      }
    } while (lVar6 != lVar1);
    lVar6 = *(long *)(param_2 + 0x18);
  }
  while( true ) {
    if (lVar6 == lVar1) {
      *param_1 = 0;
      return;
    }
    iVar3 = (**(code **)(**(long **)(lVar6 + 0x10) + 0x28))();
    uVar2 = iVar3 - 1;
    if (((uVar2 < 8) && ((0xfdU >> (ulong)(uVar2 & 0x1f) & 1) != 0)) &&
       (uVar4 = (**(code **)(**(long **)(lVar6 + 0x10) + *(long *)(&DAT_001fbee8 + (ulong)uVar2 * 8)
                            ))(), (uVar4 & 1) != 0)) break;
    lVar6 = *(long *)(lVar6 + 8);
  }
  iVar3 = (**(code **)(**(long **)(lVar6 + 0x10) + 0x28))();
  if (iVar3 == param_5) {
    puVar5 = *(undefined8 **)(lVar6 + 0x10);
    *param_1 = (long)puVar5;
    if (puVar5 == (undefined8 *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x005f0d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar5)();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../common_video/video_frame_buffer_pool.cc",0x155,"buffer->type() == type",
               &DAT_001f5fa0);
}


// ===== 005f0d60  FUN_005f0d60 =====

void FUN_005f0d60(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x28);
  return;
}


// ===== 005f0d84  FUN_005f0d84 =====

bool FUN_005f0d84(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 5);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 005f0ddc  FUN_005f0ddc =====

void FUN_005f0ddc(void *param_1)

{
  FUN_007bdc6c();
  operator_delete(param_1);
  return;
}


// ===== 005f0e0c  FUN_005f0e0c =====

bool FUN_005f0e0c(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x28) == 1;
}


// ===== 005f0e24  FUN_005f0e24 =====

void FUN_005f0e24(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x28);
  return;
}


// ===== 005f0e48  FUN_005f0e48 =====

bool FUN_005f0e48(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 5);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 005f0ea0  FUN_005f0ea0 =====

void FUN_005f0ea0(void *param_1)

{
  FUN_007be380();
  operator_delete(param_1);
  return;
}


// ===== 005f0ed0  FUN_005f0ed0 =====

undefined8 FUN_005f0ed0(void)

{
  return 0;
}


// ===== 005f0edc  FUN_005f0edc =====

bool FUN_005f0edc(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x28) == 1;
}


// ===== 005f0ef4  FUN_005f0ef4 =====

void FUN_005f0ef4(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x20);
  return;
}


// ===== 005f0f18  FUN_005f0f18 =====

bool FUN_005f0f18(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 4);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 005f0f70  FUN_005f0f70 =====

void FUN_005f0f70(void *param_1)

{
  FUN_007bea00();
  operator_delete(param_1);
  return;
}


// ===== 005f0fa0  FUN_005f0fa0 =====

bool FUN_005f0fa0(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x20) == 1;
}


// ===== 005f0fb8  FUN_005f0fb8 =====

void FUN_005f0fb8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x80);
  FUN_00ad1910(pvVar1,param_2,param_3,param_4,param_5,param_6,param_7);
  *param_1 = &PTR_FUN_00d26b60;
  param_1[1] = 0;
  param_1[3] = pvVar1;
  return;
}


// ===== 005f1044  FUN_005f1044 =====

void FUN_005f1044(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[3];
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00d26b60;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005f106c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}


// ===== 005f1074  FUN_005f1074 =====

void FUN_005f1074(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[3];
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00d26b60;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  operator_delete(param_1);
  return;
}


// ===== 005f10c4  FUN_005f10c4 =====

void FUN_005f10c4(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x005f10e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))(param_1,puVar2,uVar1);
  return;
}


// ===== 005f10ec  FUN_005f10ec =====

void FUN_005f10ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_00ad1df8(*(undefined8 *)(param_1 + 0x18));
  if ((uVar1 & 1) != 0) {
    FUN_00ad1e0c(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
    return;
  }
  fwrite("Init() must be called before adding this sink.\n",0x2f,1,*(FILE **)PTR_stderr_00d51cb8);
  return;
}


// ===== 005f1168  FUN_005f1168 =====

void FUN_005f1168(long *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x005f1194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))(param_1,puVar2,uVar1,param_3,param_4);
  return;
}


// ===== 005f1198  FUN_005f1198 =====

void FUN_005f1198(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 char *param_5)

{
  ulong uVar1;
  size_t sVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00ad1df8(*(undefined8 *)(param_1 + 0x18));
  if ((uVar1 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    sVar2 = strlen(param_5);
    FUN_00ad1e0c(uVar3,param_5,sVar2);
    FUN_00ad1e0c(*(undefined8 *)(param_1 + 0x18),&DAT_001c4dc3,2);
    FUN_00ad1e0c(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
    return;
  }
  fwrite("Init() must be called before adding this sink.\n",0x2f,1,*(FILE **)PTR_stderr_00d51cb8);
  return;
}


// ===== 005f1254  FUN_005f1254 =====

void FUN_005f1254(long param_1)

{
  FUN_00ad2594(*(undefined8 *)(param_1 + 0x18));
  return;
}


// ===== 005f1260  FUN_005f1260 =====

void FUN_005f1260(long param_1)

{
  FUN_00ad2cf0(*(undefined8 *)(param_1 + 0x18));
  return;
}


// ===== 005f126c  FUN_005f126c =====

void FUN_005f126c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x90);
  FUN_00ad2d08(pvVar1,param_2,param_3,param_4);
  param_1[3] = pvVar1;
  *param_1 = &PTR_FUN_00d26bc0;
  param_1[1] = 0;
  return;
}


// ===== 005f12d8  FUN_005f12d8 =====

void FUN_005f12d8(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[3];
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00d26b60;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  operator_delete(param_1);
  return;
}


// ===== 005f1328  FUN_005f1328 =====

void FUN_005f1328(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_00d26c20;
  param_1[1] = param_1;
  param_1[8] = 0xffffffffffffffff;
  param_1[9] = param_1 + 9;
  param_1[0xc] = param_1 + 0xc;
  param_1[0xd] = param_1 + 0xc;
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[5] = 0xffffffffffffffff;
  param_1[4] = 0xffffffffffffffff;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = param_1 + 9;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = param_3;
  FUN_007ebca0(param_1 + 0x10);
  return;
}


// ===== 005f1380  FUN_005f1380 =====

void FUN_005f1380(long param_1)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  void *pvVar4;
  
  FUN_00841cf8(param_1 + 0x18);
  FUN_005f14e0(param_1);
  FUN_007ebdcc(*(undefined8 *)(param_1 + 0x80));
  pvVar4 = *(void **)(param_1 + 0x80);
  if ((pvVar4 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,pvVar4), iVar2 == 1)) {
    operator_delete(pvVar4);
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    plVar1 = *(long **)(param_1 + 0x68);
    plVar3 = *(long **)(*(long *)(param_1 + 0x60) + 8);
    *(long **)(*plVar1 + 8) = plVar3;
    *plVar3 = *plVar1;
    *(undefined8 *)(param_1 + 0x70) = 0;
    while (plVar1 != (long *)(param_1 + 0x60)) {
      if ((plVar1 == (long *)0xfffffffffffffff0) || (plVar1 == (long *)0x0)) goto LAB_005f14cc;
      plVar3 = (long *)plVar1[1];
      operator_delete(plVar1);
      plVar1 = plVar3;
    }
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    plVar1 = *(long **)(param_1 + 0x50);
    plVar3 = *(long **)(*(long *)(param_1 + 0x48) + 8);
    *(long **)(*plVar1 + 8) = plVar3;
    *plVar3 = *plVar1;
    *(undefined8 *)(param_1 + 0x58) = 0;
    while (plVar1 != (long *)(param_1 + 0x48)) {
      if ((plVar1 == (long *)0xfffffffffffffff0) || (plVar1 == (long *)0x0)) {
LAB_005f14cc:
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
  pvVar4 = *(void **)(param_1 + 0x18);
  if ((pvVar4 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,pvVar4), iVar2 == 1)) {
    operator_delete(pvVar4);
    return;
  }
  return;
}


// ===== 005f14e0  FUN_005f14e0 =====

void FUN_005f14e0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  if ((*(long *)(param_1 + 0x40) != -1) && (0 < *(long *)(param_1 + 0x38))) {
    uVar4 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
    uVar6 = uVar4 / 1000;
    if (499 < uVar4 % 1000) {
      uVar6 = uVar6 + 1;
    }
    if ((uVar4 & 0x8000000000000000) != 0) {
      uVar6 = -(-uVar4 / 1000) - (ulong)(500 < -uVar4 % 1000);
    }
    if (9999 < (long)(uVar6 - *(long *)(param_1 + 0x40))) {
      lVar1 = *(long *)(param_1 + 0x30);
      lVar2 = *(long *)(param_1 + 0x38);
      lVar5 = DAT_00d64188;
      if (DAT_00d64188 == 0) {
        lVar5 = FUN_006660d0("WebRTC.Video.AverageRoundTripTimeInMilliseconds",0x2f,1,10000,0x32);
        FUN_00d0f5e0(0,lVar5,&DAT_00d64188);
        if (lVar5 == 0) {
          return;
        }
      }
      lVar3 = 0;
      if (lVar2 != 0) {
        lVar3 = (lVar1 + lVar2 / 2) / lVar2;
      }
      FUN_00666568(lVar5,lVar3);
      return;
    }
  }
  return;
}


// ===== 005f1610  FUN_005f1610 =====

void FUN_005f1610(void)

{
  return;
}


// ===== 005f1618  FUN_005f1618 =====

void FUN_005f1618(long param_1)

{
  void *pvVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined1 uStack_51;
  long local_50 [2];
  code *local_40;
  code *pcStack_38;
  void *local_28;
  
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  local_40 = FUN_004473ec;
  pcStack_38 = FUN_005f1e94;
  local_50[0] = param_1;
  uVar3 = FUN_00622394();
  FUN_00841954(&local_28,uVar4,1000000,local_50,0,uVar3,&uStack_51);
  pvVar1 = local_28;
  pvVar5 = *(void **)(param_1 + 0x18);
  local_28 = (void *)0x0;
  *(void **)(param_1 + 0x18) = pvVar1;
  if (pvVar5 != (void *)0x0) {
    iVar2 = FUN_00d0f7a0(0xffffffff,pvVar5);
    if (iVar2 == 1) {
      operator_delete(pvVar5);
    }
    pvVar1 = local_28;
    if ((local_28 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,local_28), iVar2 == 1)) {
      operator_delete(pvVar1);
    }
  }
  (*local_40)(0,local_50,local_50);
  return;
}


// ===== 005f16f8  FUN_005f16f8 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_005f16f8(long param_1)

{
  bool bVar1;
  long *******ppppppplVar2;
  ulong uVar3;
  long ******pppppplVar4;
  long ******pppppplVar5;
  ulong uVar6;
  long lVar7;
  long *******ppppppplVar8;
  long *******ppppppplVar9;
  ulong uVar10;
  long *******ppppppplVar11;
  long *******ppppppplVar12;
  long *******local_58;
  long *******local_50;
  long local_48;
  
  uVar3 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  ppppppplVar2 = (long *******)(param_1 + 0x48);
  local_48 = 0;
  uVar6 = uVar3 / 1000;
  if (499 < uVar3 % 1000) {
    uVar6 = uVar6 + 1;
  }
  ppppppplVar8 = *(long ********)(param_1 + 0x50);
  if ((uVar3 & 0x8000000000000000) != 0) {
    uVar6 = -(-uVar3 / 1000) - (ulong)(500 < -uVar3 % 1000);
  }
  local_58 = (long *******)&local_58;
  local_50 = (long *******)&local_58;
  if (ppppppplVar8 != ppppppplVar2) {
    do {
      ppppppplVar9 = (long *******)ppppppplVar8[1];
      if (0x5dc < (long)(uVar6 - (long)ppppppplVar8[3])) {
        if (ppppppplVar9 == ppppppplVar2) {
          bVar1 = true;
          if (ppppppplVar8 != ppppppplVar9) goto LAB_005f1808;
LAB_005f17f4:
          if (bVar1) goto LAB_005f17a0;
        }
        else {
          do {
            bVar1 = 0x5dc < (long)(uVar6 - (long)ppppppplVar9[3]);
            if ((long)(uVar6 - (long)ppppppplVar9[3]) < 0x5dd) break;
            ppppppplVar9 = (long *******)ppppppplVar9[1];
          } while (ppppppplVar9 != ppppppplVar2);
          if (ppppppplVar8 == ppppppplVar9) goto LAB_005f17f4;
LAB_005f1808:
          ppppppplVar11 = (long *******)*ppppppplVar9;
          if (&local_58 != (long ********)ppppppplVar2) {
            lVar7 = 1;
            for (ppppppplVar12 = ppppppplVar8; ppppppplVar12 != ppppppplVar11;
                ppppppplVar12 = (long *******)ppppppplVar12[1]) {
              lVar7 = lVar7 + 1;
            }
            local_48 = local_48 + lVar7;
            *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) - lVar7;
          }
          pppppplVar4 = ppppppplVar11[1];
          (*ppppppplVar8)[1] = (long *****)pppppplVar4;
          *pppppplVar4 = (long *****)*ppppppplVar8;
          local_58[1] = (long ******)ppppppplVar8;
          *ppppppplVar8 = (long ******)local_58;
          ppppppplVar11[1] = (long ******)&local_58;
          local_58 = ppppppplVar11;
          if (bVar1) goto LAB_005f17a0;
        }
        ppppppplVar9 = (long *******)ppppppplVar9[1];
      }
LAB_005f17a0:
      ppppppplVar8 = ppppppplVar9;
    } while (ppppppplVar8 != ppppppplVar2);
    if (local_48 != 0) {
      pppppplVar4 = local_58[1];
      (*local_50)[1] = (long *****)pppppplVar4;
      *pppppplVar4 = (long *****)*local_50;
      local_48 = 0;
      ppppppplVar8 = local_50;
      while ((long ********)ppppppplVar8 != &local_58) {
        if ((ppppppplVar8 == (long *******)0xfffffffffffffff0) ||
           (ppppppplVar8 == (long *******)0x0)) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        ppppppplVar9 = (long *******)ppppppplVar8[1];
        operator_delete(ppppppplVar8);
        ppppppplVar8 = ppppppplVar9;
      }
    }
  }
  ppppppplVar9 = *(long ********)(param_1 + 0x50);
  pppppplVar4 = (long ******)0xffffffffffffffff;
  ppppppplVar8 = ppppppplVar9;
  if (ppppppplVar9 == ppppppplVar2) {
    *(undefined8 *)(param_1 + 0x20) = 0xffffffffffffffff;
    uVar6 = *(ulong *)(param_1 + 0x58);
    lVar7 = *(long *)(param_1 + 0x28);
    if (uVar6 == 0) {
      *(long *)(param_1 + 0x28) = -1;
      return;
    }
    uVar3 = 0;
    pppppplVar5 = pppppplVar4;
  }
  else {
    do {
      ppppppplVar11 = ppppppplVar8 + 1;
      pppppplVar5 = ppppppplVar8[2];
      if ((long)ppppppplVar8[2] <= (long)pppppplVar4) {
        pppppplVar5 = pppppplVar4;
      }
      pppppplVar4 = pppppplVar5;
      ppppppplVar8 = (long *******)*ppppppplVar11;
    } while ((long *******)*ppppppplVar11 != ppppppplVar2);
    *(long *******)(param_1 + 0x20) = pppppplVar5;
    uVar6 = *(ulong *)(param_1 + 0x58);
    lVar7 = *(long *)(param_1 + 0x28);
    if (uVar6 == 0) {
      uVar10 = 0xffffffffffffffff;
      *(long *)(param_1 + 0x28) = -1;
      goto joined_r0x005f198c;
    }
    uVar3 = 0;
    do {
      ppppppplVar8 = ppppppplVar9 + 1;
      uVar3 = (long)ppppppplVar9[2] + uVar3;
      ppppppplVar9 = (long *******)*ppppppplVar8;
    } while ((long *******)*ppppppplVar8 != ppppppplVar2);
  }
  uVar10 = 0;
  if (uVar6 != 0) {
    uVar10 = uVar3 / uVar6;
  }
  if (lVar7 != -1) {
    uVar10 = (ulong)((float)lVar7 * 0.7 + (float)(long)uVar10 * 0.3);
  }
  *(ulong *)(param_1 + 0x28) = uVar10;
joined_r0x005f198c:
  if (-1 < (long)pppppplVar5) {
    lVar7 = *(long *)(param_1 + 0x68);
    if (lVar7 != param_1 + 0x60) {
      do {
        (**(code **)**(undefined8 **)(lVar7 + 0x10))
                  (*(undefined8 **)(lVar7 + 0x10),*(ulong *)(param_1 + 0x28),
                   *(undefined8 *)(param_1 + 0x20));
        lVar7 = *(long *)(lVar7 + 8);
      } while (lVar7 != param_1 + 0x60);
      uVar10 = *(ulong *)(param_1 + 0x28);
    }
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 1;
    *(ulong *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + uVar10;
  }
  return;
}


// ===== 005f1a28  FUN_005f1a28 =====

void FUN_005f1a28(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x68);
  lVar1 = param_1 + 0x60;
  do {
    if (lVar3 == lVar1) {
LAB_005f1a78:
      plVar2 = (long *)operator_new(0x18);
      if ((plVar2 != (long *)0x0) && (plVar2 != (long *)0xfffffffffffffff0)) {
        lVar3 = *(long *)(param_1 + 0x60);
        plVar2[1] = lVar1;
        plVar2[2] = param_2;
        *plVar2 = lVar3;
        *(long **)(lVar3 + 8) = plVar2;
        *(long **)(param_1 + 0x60) = plVar2;
        *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + 1;
        return;
      }
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    if (*(long *)(lVar3 + 0x10) == param_2) {
      if (lVar3 != lVar1) {
        return;
      }
      goto LAB_005f1a78;
    }
    lVar3 = *(long *)(lVar3 + 8);
  } while( true );
}


// ===== 005f1ad4  FUN_005f1ad4 =====

void FUN_005f1ad4(long param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_2;
  FUN_005f1b04(param_1 + 0x60,&local_18);
  return;
}


// ===== 005f1b04  FUN_005f1b04 =====

long FUN_005f1b04(long *****param_1,undefined8 *param_2)

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
          if (ppppplVar3 == ppppplVar4) goto LAB_005f1b84;
LAB_005f1b98:
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
          if (bVar1) goto LAB_005f1b3c;
        }
        else {
          do {
            bVar1 = ppppplVar4[2] == ppppplVar3[2];
            if (!bVar1) break;
            ppppplVar4 = (long *****)ppppplVar4[1];
          } while (ppppplVar4 != param_1);
          if (ppppplVar3 != ppppplVar4) goto LAB_005f1b98;
LAB_005f1b84:
          if (bVar1) goto LAB_005f1b3c;
        }
        ppppplVar4 = (long *****)ppppplVar4[1];
      }
LAB_005f1b3c:
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


// ===== 005f1c98  FUN_005f1c98 =====

undefined8 FUN_005f1c98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}


// ===== 005f1ca4  FUN_005f1ca4 =====

void FUN_005f1ca4(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *local_70 [2];
  code *local_60;
  code *pcStack_58;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  lVar6 = *(long *)(param_1 + 0x78);
  uVar5 = uVar1 / 1000;
  if (499 < uVar1 % 1000) {
    uVar5 = uVar5 + 1;
  }
  if ((uVar1 & 0x8000000000000000) != 0) {
    uVar5 = -(-uVar1 / 1000) - (ulong)(500 < -uVar1 % 1000);
  }
  lVar2 = FUN_005d6490();
  if (lVar2 != lVar6) {
    plVar4 = *(long **)(param_1 + 0x78);
    lVar6 = *(long *)(param_1 + 0x80);
    if (lVar6 != 0) {
      FUN_00d0f740(1,lVar6);
    }
    plVar3 = (long *)operator_new(0x18);
    *plVar3 = param_1;
    plVar3[1] = param_2;
    plVar3[2] = uVar5;
    local_70[0] = (long *)operator_new(0x30);
    *local_70[0] = lVar6;
    local_70[0][4] = (long)FUN_005ea56c;
    local_70[0][5] = (long)FUN_005f1ebc;
    local_70[0][2] = (long)plVar3;
    local_70[0][3] = 0x18;
    local_60 = FUN_005db390;
    pcStack_58 = FUN_005db348;
    (**(code **)(*plVar4 + 8))(plVar4,local_70,&uStack_31,&uStack_32);
    (*local_60)(0,local_70,local_70);
    return;
  }
  plVar4 = (long *)operator_new(0x20);
  if ((plVar4 != (long *)0x0) && (plVar4 != (long *)0xfffffffffffffff0)) {
    lVar6 = *(long *)(param_1 + 0x48);
    plVar4[2] = param_2;
    plVar4[3] = uVar5;
    *plVar4 = lVar6;
    plVar4[1] = param_1 + 0x48;
    *(long **)(lVar6 + 8) = plVar4;
    *(long **)(param_1 + 0x48) = plVar4;
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 1;
    if (*(long *)(param_1 + 0x40) == -1) {
      *(ulong *)(param_1 + 0x40) = uVar5;
    }
    FUN_005f16f8(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 005f1e7c  FUN_005f1e7c =====

void FUN_005f1e7c(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 005f1e88  FUN_005f1e88 =====

void FUN_005f1e88(long param_1)

{
  FUN_005f1ca4(*(undefined8 *)(param_1 + 8));
  return;
}


// ===== 005f1e94  FUN_005f1e94 =====

undefined8 FUN_005f1e94(undefined8 *param_1)

{
  FUN_005f16f8(*param_1);
  return 1000000;
}


// ===== 005f1ebc  FUN_005f1ebc =====

void FUN_005f1ebc(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)*param_1;
  lVar1 = *plVar4;
  lVar3 = plVar4[1];
  lVar5 = plVar4[2];
  plVar2 = (long *)operator_new(0x20);
  if ((plVar2 != (long *)0x0) && (plVar2 != (long *)0xfffffffffffffff0)) {
    plVar2[2] = lVar3;
    plVar2[3] = lVar5;
    plVar2[1] = lVar1 + 0x48;
    lVar3 = *(long *)(lVar1 + 0x48);
    *plVar2 = lVar3;
    *(long **)(lVar3 + 8) = plVar2;
    *(long **)(lVar1 + 0x48) = plVar2;
    *(long *)(lVar1 + 0x58) = *(long *)(lVar1 + 0x58) + 1;
    if (*(long *)(lVar1 + 0x40) == -1) {
      *(long *)(lVar1 + 0x40) = plVar4[2];
    }
    FUN_005f16f8(lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 005f1f58  FUN_005f1f58 =====

void FUN_005f1f58(long *param_1,long *param_2,long param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  if (lVar2 != 0) {
    FUN_00d0f740(1,lVar2 + 8);
  }
  lVar6 = param_2[2];
  lVar5 = param_2[1];
  lVar4 = param_2[4];
  lVar2 = param_2[3];
  param_1[10] = (long)(param_1 + 10);
  param_1[0xb] = (long)(param_1 + 10);
  param_1[2] = lVar6;
  param_1[1] = lVar5;
  param_1[4] = lVar4;
  param_1[3] = lVar2;
  param_1[5] = param_3;
  param_1[6] = param_4;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)((long)param_1 + 0x8c) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = (long)(param_1 + 0x15);
  param_1[0x16] = (long)(param_1 + 0x15);
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)((long)param_1 + 0xe4) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  uVar1 = (**(code **)(*(long *)param_1[2] + 0x10))();
  if ((long)uVar1 < 0) {
    uVar3 = -(-uVar1 / 1000) - (ulong)(500 < -uVar1 % 1000);
  }
  else {
    uVar3 = uVar1 / 1000;
    if (499 < uVar1 % 1000) {
      uVar3 = uVar3 + 1;
    }
  }
  param_1[0x20] = uVar3;
  return;
}


// ===== 005f2098  FUN_005f2098 =====

void FUN_005f2098(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  void *pvVar4;
  
  FUN_00841cf8(param_1 + 0x1f);
  pvVar4 = (void *)param_1[0x1f];
  if ((pvVar4 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar4), iVar1 == 1)) {
    operator_delete(pvVar4);
  }
  if (param_1[0x17] != 0) {
    plVar3 = (long *)param_1[0x16];
    plVar2 = *(long **)(param_1[0x15] + 8);
    *(long **)(*plVar3 + 8) = plVar2;
    *plVar2 = *plVar3;
    param_1[0x17] = 0;
    while (plVar3 != param_1 + 0x15) {
      if ((plVar3 == (long *)0xfffffffffffffff0) || (plVar3 == (long *)0x0)) goto LAB_005f21ec;
      plVar2 = (long *)plVar3[1];
      operator_delete(plVar3);
      plVar3 = plVar2;
    }
  }
  if (param_1[0xc] != 0) {
    plVar3 = (long *)param_1[0xb];
    plVar2 = *(long **)(param_1[10] + 8);
    *(long **)(*plVar3 + 8) = plVar2;
    *plVar2 = *plVar3;
    param_1[0xc] = 0;
    while (plVar3 != param_1 + 10) {
      if ((plVar3 == (long *)0xfffffffffffffff0) || (plVar3 == (long *)0x0)) {
LAB_005f21ec:
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
  pvVar4 = (void *)param_1[8];
  param_1[8] = 0;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  plVar3 = (long *)*param_1;
  if ((plVar3 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar3 + 1), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x005f21d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 8))(plVar3);
    return;
  }
  return;
}


// ===== 005f2200  FUN_005f2200 =====

void FUN_005f2200(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uStack_51;
  long local_50 [2];
  code *local_40;
  code *pcStack_38;
  void *local_18;
  
  if (param_2 != *(long *)(param_1 + 0x38)) {
    pvVar4 = *(void **)(param_1 + 0x40);
    *(long *)(param_1 + 0x38) = param_2;
    *(undefined8 *)(param_1 + 0x40) = 0;
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
      param_2 = *(long *)(param_1 + 0x38);
    }
    if (param_2 == 0) {
      FUN_00841cf8(param_1 + 0xf8);
      return;
    }
    pvVar4 = operator_new(0x24);
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x10))(*(long **)(param_1 + 0x30));
    uVar2 = (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38));
    FUN_005f58c8(pvVar4,uVar1,uVar2);
    pvVar5 = *(void **)(param_1 + 0x40);
    *(void **)(param_1 + 0x40) = pvVar4;
    if (pvVar5 != (void *)0x0) {
      operator_delete(pvVar5);
    }
    uVar6 = FUN_00841d54(param_1 + 0xf8);
    if ((uVar6 & 1) == 0) {
      uVar8 = *(undefined8 *)(param_1 + 0x28);
      local_40 = FUN_004473ec;
      pcStack_38 = FUN_005f3358;
      local_50[0] = param_1;
      uVar7 = FUN_00622394();
      FUN_00841954(&local_18,uVar8,1000000,local_50,0,uVar7,&uStack_51);
      pvVar4 = local_18;
      pvVar5 = *(void **)(param_1 + 0xf8);
      local_18 = (void *)0x0;
      *(void **)(param_1 + 0xf8) = pvVar4;
      if (pvVar5 != (void *)0x0) {
        iVar3 = FUN_00d0f7a0(0xffffffff,pvVar5);
        if (iVar3 == 1) {
          operator_delete(pvVar5);
        }
        pvVar4 = local_18;
        if ((local_18 != (void *)0x0) && (iVar3 = FUN_00d0f7a0(0xffffffff,local_18), iVar3 == 1)) {
          operator_delete(pvVar4);
        }
      }
      (*local_40)(0,local_50,local_50);
    }
  }
  return;
}


// ===== 005f2394  FUN_005f2394 =====

/* WARNING: Removing unreachable block (ram,0x005f2958) */
/* WARNING: Removing unreachable block (ram,0x005f2850) */
/* WARNING: Removing unreachable block (ram,0x005f27b0) */
/* WARNING: Removing unreachable block (ram,0x005f26a0) */
/* WARNING: Removing unreachable block (ram,0x005f2680) */
/* WARNING: Removing unreachable block (ram,0x005f2790) */
/* WARNING: Removing unreachable block (ram,0x005f2830) */
/* WARNING: Removing unreachable block (ram,0x005f293c) */
/* WARNING: Removing unreachable block (ram,0x005f2b44) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_005f2394(long param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  undefined4 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined4 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  int iVar26;
  ulong uVar27;
  ulong *puVar28;
  undefined *puVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  undefined8 *puVar35;
  undefined8 *puVar36;
  undefined8 *puVar37;
  undefined8 *puVar38;
  undefined8 *puVar39;
  undefined8 *puVar40;
  undefined8 *puVar41;
  long lVar42;
  long lVar43;
  ulong in_stack_fffffffffffffa20;
  undefined8 in_stack_fffffffffffffa40;
  undefined4 uVar44;
  undefined8 in_stack_fffffffffffffa58;
  undefined4 uVar45;
  undefined1 uStack_3e9;
  char *local_3e8;
  char **local_3e0;
  undefined1 *local_3d8;
  char *local_3d0;
  char **local_3c8;
  undefined *local_3c0;
  char **local_3b8;
  char *local_3b0;
  undefined **local_3a8;
  ulong local_3a0;
  char **local_398;
  undefined *local_390;
  ulong *local_388;
  char *local_380;
  undefined **local_378;
  char *local_370;
  char **ppcStack_368;
  ulong *local_360;
  char **local_358;
  undefined *local_350;
  char **ppcStack_348;
  char *local_340;
  undefined **ppuStack_338;
  ulong local_330;
  char **local_328;
  undefined *local_320;
  ulong *puStack_318;
  char *local_310;
  undefined **ppuStack_308;
  ulong local_300;
  char **local_2f8;
  undefined *local_2f0;
  ulong *puStack_2e8;
  char *local_2e0;
  undefined **ppuStack_2d8;
  ulong local_2d0;
  char **local_2c8;
  undefined *local_2c0;
  ulong *puStack_2b8;
  char *local_2b0;
  undefined **ppuStack_2a8;
  ulong local_2a0;
  char **local_298;
  undefined *local_290;
  ulong *puStack_288;
  char *local_280;
  undefined **ppuStack_278;
  char *local_270;
  char **ppcStack_268;
  ulong *local_260;
  char **local_258;
  char *local_250;
  char **ppcStack_248;
  ulong local_240;
  char **local_238;
  undefined *local_230;
  ulong *puStack_228;
  char *local_220;
  undefined **ppuStack_218;
  char *local_210;
  char **ppcStack_208;
  ulong *local_200;
  char **local_1f8;
  undefined *local_1f0;
  char **ppcStack_1e8;
  char *local_1e0;
  undefined **ppuStack_1d8;
  ulong local_1d0;
  char **local_1c8;
  undefined *local_1c0;
  ulong *puStack_1b8;
  char *local_1b0;
  undefined **ppuStack_1a8;
  ulong local_1a0;
  char **local_198;
  undefined *local_190;
  ulong *puStack_188;
  char *local_180;
  undefined **ppuStack_178;
  ulong local_170;
  char **local_168;
  undefined *local_160;
  ulong *local_158;
  char *local_150;
  undefined **local_148;
  char *local_140;
  char **local_138;
  undefined *local_130;
  char **local_128;
  char *local_120;
  undefined **local_118;
  char *local_110;
  char **ppcStack_108;
  ulong *local_100;
  char **local_f8;
  int local_e4;
  undefined1 *local_e0;
  undefined8 uStack_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b0;
  undefined8 uStack_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  char *local_88;
  char **ppcStack_80;
  undefined7 local_78;
  undefined1 uStack_71;
  
  uVar45 = (undefined4)((ulong)in_stack_fffffffffffffa58 >> 0x20);
  uVar44 = (undefined4)((ulong)in_stack_fffffffffffffa40 >> 0x20);
  if (*(long *)(param_1 + 0x38) == 0) {
    return;
  }
  uVar27 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  lVar42 = *(long *)(param_1 + 0x100);
  lVar43 = *(long *)(param_1 + 0x90);
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puVar29 = (undefined *)(uVar27 / 1000);
  if (499 < uVar27 % 1000) {
    puVar29 = puVar29 + 1;
  }
  if ((uVar27 & 0x8000000000000000) != 0) {
    puVar29 = (undefined *)(-(-uVar27 / 1000) - (ulong)(500 < -uVar27 % 1000));
  }
  (**(code **)(**(long **)(param_1 + 0x38) + 0x18))(&local_b0,*(long **)(param_1 + 0x38));
  if (((ulong)local_90 & 1) == 0) {
    return;
  }
  uVar27 = (ulong)local_b0 / 1000;
  if (499 < (ulong)local_b0 % 1000) {
    uVar27 = uVar27 + 1;
  }
  *(undefined4 *)(param_1 + 0x98) = (undefined4)uStack_a8;
  if (((ulong)local_b0 & 0x8000000000000000) != 0) {
    uVar27 = -((ulong)-(long)local_b0 / 1000) - (ulong)(500 < (ulong)-(long)local_b0 % 1000);
  }
  *(ulong *)(param_1 + 0x90) = uVar27;
  iVar26 = FUN_00889fac(param_1 + 0x48,local_a0,uStack_a8._4_4_);
  if (iVar26 == 0) {
    return;
  }
  if (lVar43 == *(long *)(param_1 + 0x90)) {
    return;
  }
  lVar43 = *(long *)(param_1 + 0xe8);
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  local_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(**(long **)(param_1 + 0x30) + 0x18))(&local_e0);
  if (((ulong)local_c0 & 1) == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0xf0) = (undefined4)uStack_d8;
  if ((long)local_e0 < 0) {
    uVar27 = -((ulong)-(long)local_e0 / 1000) - (ulong)(500 < (ulong)-(long)local_e0 % 1000);
  }
  else {
    uVar27 = (ulong)local_e0 / 1000;
    if (499 < (ulong)local_e0 % 1000) {
      uVar27 = uVar27 + 1;
    }
  }
  *(ulong *)(param_1 + 0xe8) = uVar27;
  iVar26 = FUN_00889fac(param_1 + 0xa0,local_d0,uStack_d8._4_4_);
  if (iVar26 == 0) {
    return;
  }
  if (lVar43 == *(long *)(param_1 + 0xe8)) {
    return;
  }
  local_e4 = -0x55555556;
  uVar27 = FUN_005f58e4(*(undefined8 *)(param_1 + 0x40),param_1 + 0x48,param_1 + 0xa0,&local_e4);
  if ((uVar27 & 1) == 0) {
    return;
  }
  lVar42 = (long)puVar29 - lVar42;
  if (30000 < lVar42) {
    *(undefined **)(param_1 + 0x100) = puVar29;
    uVar27 = FUN_00417e08();
    if ((uVar27 & 1) == 0) {
      local_3e8 = "../../video/rtp_streams_synchronizer2.cc";
      local_3e0 = (char **)0x431;
      local_3d8 = &uStack_3e9;
      local_3c8 = &local_3e8;
      local_3d0 = "Sync info stats: ";
      local_3b8 = &local_3d0;
      local_3a8 = &local_3c0;
      local_3b0 = ", {ssrc: ";
      local_398 = &local_3b0;
      local_3a0 = (ulong)*(uint *)(*(long *)(param_1 + 0x40) + 4);
      local_378 = &local_390;
      local_390 = &DAT_001e1644;
      local_388 = &local_3a0;
      local_380 = "cur_delay: ";
      local_3c0 = puVar29;
      if (((ulong)local_90 & 1) == 0) goto LAB_005f2f98;
      FUN_005f3380(&local_110,&local_98);
      local_358 = &local_380;
      ppcStack_368 = ppcStack_108;
      local_370 = local_110;
      local_360 = local_100;
      ppuStack_338 = &local_350;
      local_350 = &DAT_001e1644;
      local_340 = "capture_time_ntp_secs: ";
      ppcStack_348 = &local_370;
      if (((ulong)local_90 & 1) == 0) goto LAB_005f2f98;
      puStack_318 = &local_330;
      local_320 = &DAT_001e1644;
      local_328 = &local_340;
      local_330 = (ulong)local_a0 >> 0x20;
      local_300 = (ulong)local_a0 & 0xffffffff;
      ppuStack_308 = &local_320;
      local_310 = "capture_time_ntp_frac: ";
      local_2f8 = &local_310;
      puStack_2e8 = &local_300;
      local_2d0 = (ulong)uStack_a8 >> 0x20;
      local_2f0 = &DAT_001e1644;
      ppuStack_2d8 = &local_2f0;
      local_2e0 = "capture_time_rtp: ";
      local_2c8 = &local_2e0;
      puStack_2b8 = &local_2d0;
      local_2a0 = (ulong)uStack_a8 & 0xffffffff;
      local_2c0 = &DAT_001e1644;
      ppuStack_2a8 = &local_2c0;
      local_2b0 = "latest_received_capture_rtp_timestamp: ";
      local_298 = &local_2b0;
      puStack_288 = &local_2a0;
      local_290 = &DAT_001e1644;
      ppuStack_278 = &local_290;
      local_280 = "latest_receive_time: ";
      FUN_005f3500(&local_110,&local_b0);
      local_258 = &local_280;
      ppcStack_268 = ppcStack_108;
      local_270 = local_110;
      local_260 = local_100;
      ppcStack_248 = &local_270;
      local_250 = "} {ssrc: ";
      local_238 = &local_250;
      local_240 = (ulong)**(uint **)(param_1 + 0x40);
      puStack_228 = &local_240;
      ppuStack_218 = &local_230;
      local_230 = &DAT_001e1644;
      local_220 = "cur_delay: ";
      if (((ulong)local_c0 & 1) == 0) goto LAB_005f2f98;
      FUN_005f3380(&local_110,&local_c8);
      local_1f8 = &local_220;
      ppcStack_208 = ppcStack_108;
      local_210 = local_110;
      local_200 = local_100;
      ppcStack_1e8 = &local_210;
      local_1f0 = &DAT_001e1644;
      ppuStack_1d8 = &local_1f0;
      local_1e0 = "capture_time_ntp_secs: ";
      if (((ulong)local_c0 & 1) == 0) goto LAB_005f2f98;
      puStack_1b8 = &local_1d0;
      local_1c0 = &DAT_001e1644;
      local_1c8 = &local_1e0;
      local_1d0 = (ulong)local_d0 >> 0x20;
      local_1a0 = (ulong)local_d0 & 0xffffffff;
      local_160 = &DAT_001e1644;
      local_150 = "latest_received_capture_rtp_timestamp: ";
      ppuStack_1a8 = &local_1c0;
      local_1b0 = "capture_time_ntp_frac: ";
      local_198 = &local_1b0;
      puStack_188 = &local_1a0;
      local_170 = (ulong)uStack_d8 >> 0x20;
      local_190 = &DAT_001e1644;
      ppuStack_178 = &local_190;
      local_180 = "capture_time_rtp: ";
      local_168 = &local_180;
      local_158 = &local_170;
      local_148 = &local_160;
      local_138 = &local_150;
      local_128 = &local_140;
      local_140 = (char *)((ulong)uStack_d8 & 0xffffffff);
      local_118 = &local_130;
      local_130 = &DAT_001e1644;
      local_120 = "latest_receive_time: ";
      FUN_005f3500(&local_88,&local_e0);
      local_100 = (ulong *)CONCAT17(uStack_71,local_78);
      local_f8 = &local_120;
      ppcStack_108 = ppcStack_80;
      local_110 = local_88;
      puVar30 = *(undefined8 **)((long)local_118[1] + 8);
      puVar1 = (undefined8 *)puVar30[1];
      puVar2 = (undefined4 *)puVar1[1];
      puVar32 = *(undefined8 **)(puVar2 + 2);
      puVar3 = (undefined8 *)puVar32[1];
      puVar4 = (undefined4 *)puVar3[1];
      puVar33 = *(undefined8 **)(puVar4 + 2);
      puVar5 = (undefined8 *)puVar33[1];
      puVar6 = (undefined4 *)puVar5[1];
      puVar34 = *(undefined8 **)(puVar6 + 2);
      puVar7 = (undefined8 *)puVar34[1];
      lVar43 = puVar7[1];
      puVar35 = *(undefined8 **)(lVar43 + 0x18);
      puVar8 = (undefined8 *)puVar35[1];
      puVar9 = (undefined4 *)puVar8[1];
      puVar36 = *(undefined8 **)(puVar9 + 2);
      lVar10 = puVar36[1];
      puVar37 = *(undefined8 **)(lVar10 + 0x18);
      puVar11 = (undefined8 *)puVar37[1];
      puVar12 = (undefined4 *)puVar11[1];
      puVar38 = *(undefined8 **)(puVar12 + 2);
      puVar13 = (undefined8 *)puVar38[1];
      puVar14 = (undefined4 *)puVar13[1];
      puVar39 = *(undefined8 **)(puVar14 + 2);
      puVar15 = (undefined8 *)puVar39[1];
      puVar16 = (undefined4 *)puVar15[1];
      puVar40 = *(undefined8 **)(puVar16 + 2);
      puVar17 = (undefined8 *)puVar40[1];
      puVar18 = (undefined4 *)puVar17[1];
      puVar41 = *(undefined8 **)(puVar18 + 2);
      puVar19 = (undefined8 *)puVar41[1];
      lVar20 = puVar19[1];
      puVar28 = *(ulong **)(lVar20 + 0x18);
      in_stack_fffffffffffffa20 = *puVar28;
      puVar21 = (undefined8 *)puVar28[1];
      puVar22 = (undefined4 *)puVar21[1];
      puVar31 = *(undefined8 **)(puVar22 + 2);
      puVar23 = (undefined8 *)puVar31[1];
      puVar24 = (undefined8 *)puVar23[1];
      puVar25 = (undefined8 *)puVar24[1];
      FUN_00623bb0(&DAT_001fbf28,*puVar25,*(undefined4 *)(puVar25 + 1),*puVar24,*puVar23,*puVar31,
                   *puVar22,*puVar21,in_stack_fffffffffffffa20,lVar20,*puVar19,*puVar41,
                   CONCAT44(uVar44,*puVar18),*puVar17,*puVar40,CONCAT44(uVar45,*puVar16),*puVar15,
                   *puVar39,*puVar14,*puVar13,*puVar38,*puVar12,*puVar11,*puVar37,lVar10,*puVar36,
                   *puVar9,*puVar8,*puVar35,lVar43,*puVar7,*puVar34,*puVar6,*puVar5,*puVar33,*puVar4
                   ,*puVar3,*puVar32,*puVar2,*puVar1,*puVar30,*(undefined4 *)local_118[1],*local_118
                   ,local_120,&local_110,"} {relative_delay_ms: ",local_e4,&DAT_001e2065);
      if ((long)local_200 < 0) {
        operator_delete(local_210);
      }
      if ((long)local_260 < 0) {
        operator_delete(local_270);
      }
      if ((long)local_360 < 0) {
        operator_delete(local_370);
      }
    }
  }
  if (((DAT_00d64198 & 1) == 0) && (iVar26 = FUN_0054fdd4(&DAT_00d64198), iVar26 != 0)) {
    DAT_00d64190 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d64198);
  }
  if (*DAT_00d64190 != '\0') {
    if (((ulong)local_c0 & 1) == 0) goto LAB_005f2f98;
    if ((long)local_c8 < 0) {
      iVar26 = -(int)((ulong)-(long)local_c8 / 1000) - (uint)(500 < (ulong)-(long)local_c8 % 1000);
    }
    else {
      iVar26 = (int)((ulong)local_c8 / 1000);
      if (499 < (ulong)local_c8 % 1000) {
        iVar26 = iVar26 + 1;
      }
    }
    local_210 = (char *)(long)iVar26;
    local_110 = "value";
    local_270 = (char *)CONCAT71(local_270._1_7_,3);
    in_stack_fffffffffffffa20 = in_stack_fffffffffffffa20 & 0xffffffffffffff00;
    FUN_0066d348(0x43,DAT_00d64190,"SyncCurrentVideoDelay",0,1,&local_110,&local_270,&local_210,
                 in_stack_fffffffffffffa20);
  }
  if (((DAT_00d641a8 & 1) == 0) && (iVar26 = FUN_0054fdd4(&DAT_00d641a8), iVar26 != 0)) {
    DAT_00d641a0 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d641a8);
  }
  if (*DAT_00d641a0 != '\0') {
    if (((ulong)local_90 & 1) == 0) goto LAB_005f2f98;
    if ((long)local_98 < 0) {
      iVar26 = -(int)((ulong)-(long)local_98 / 1000) - (uint)(500 < (ulong)-(long)local_98 % 1000);
    }
    else {
      iVar26 = (int)((ulong)local_98 / 1000);
      if (499 < (ulong)local_98 % 1000) {
        iVar26 = iVar26 + 1;
      }
    }
    local_210 = (char *)(long)iVar26;
    local_110 = "value";
    local_270 = (char *)CONCAT71(local_270._1_7_,3);
    in_stack_fffffffffffffa20 = in_stack_fffffffffffffa20 & 0xffffffffffffff00;
    FUN_0066d348(0x43,DAT_00d641a0,"SyncCurrentAudioDelay",0,1,&local_110,&local_270,&local_210,
                 in_stack_fffffffffffffa20);
  }
  if (((DAT_00d641b8 & 1) == 0) && (iVar26 = FUN_0054fdd4(&DAT_00d641b8), iVar26 != 0)) {
    DAT_00d641b0 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d641b8);
  }
  if (*DAT_00d641b0 != '\0') {
    local_210 = (char *)(long)local_e4;
    local_110 = "value";
    local_270 = (char *)CONCAT71(local_270._1_7_,3);
    FUN_0066d348(0x43,DAT_00d641b0,"SyncRelativeDelay",0,1,&local_110,&local_270,&local_210,
                 in_stack_fffffffffffffa20 & 0xffffffffffffff00);
  }
  local_150 = (char *)((ulong)local_150 & 0xffffffff00000000);
  if (((ulong)local_c0 & 1) != 0) {
    if ((long)local_c8 < 0) {
      iVar26 = -(int)((ulong)-(long)local_c8 / 1000) - (uint)(500 < (ulong)-(long)local_c8 % 1000);
    }
    else {
      iVar26 = (int)((ulong)local_c8 / 1000);
      if (499 < (ulong)local_c8 % 1000) {
        iVar26 = iVar26 + 1;
      }
    }
    local_160 = (undefined *)CONCAT44(local_160._4_4_,iVar26);
    if (((ulong)local_90 & 1) != 0) {
      if ((long)local_98 < 0) {
        uVar27 = -((ulong)-(long)local_98 / 1000) - (ulong)(500 < (ulong)-(long)local_98 % 1000);
      }
      else {
        uVar27 = (ulong)local_98 / 1000;
        if (499 < (ulong)local_98 % 1000) {
          uVar27 = uVar27 + 1;
        }
      }
      uVar27 = FUN_005f59b0(*(undefined8 *)(param_1 + 0x40),local_e4,uVar27,&local_150,&local_160);
      if ((uVar27 & 1) == 0) {
        return;
      }
      if ((30000 < lVar42) && (uVar27 = FUN_00417e08(), (uVar27 & 1) == 0)) {
        local_100 = &local_170;
        local_110 = "../../video/rtp_streams_synchronizer2.cc";
        ppcStack_108 = (char **)0x541;
        local_138 = &local_110;
        local_128 = &local_140;
        local_118 = &local_130;
        local_140 = "Sync delay stats: ";
        ppcStack_368 = &local_88;
        local_270 = (char *)((ulong)local_150 & 0xffffffff);
        ppcStack_208 = &local_270;
        local_120 = ", {ssrc: ";
        local_3e0 = &local_120;
        local_3e8 = (char *)(ulong)*(uint *)(*(long *)(param_1 + 0x40) + 4);
        ppcStack_80 = &local_3e8;
        local_88 = ", ";
        local_370 = "target_delay_ms: ";
        local_210 = "} {ssrc: ";
        ppcStack_268 = &local_370;
        local_130 = puVar29;
        FUN_00623bb0(&DAT_001fbf57,"../../video/rtp_streams_synchronizer2.cc",0x541,
                     "Sync delay stats: ",puVar29);
      }
      uVar27 = (**(code **)(**(long **)(param_1 + 0x38) + 0x28))
                         (*(long **)(param_1 + 0x38),(long)(int)local_150 * 1000);
      if ((uVar27 & 1) == 0) {
        FUN_005f5be8(*(undefined8 *)(param_1 + 0x40));
      }
      uVar27 = (**(code **)(**(long **)(param_1 + 0x30) + 0x28))
                         (*(long **)(param_1 + 0x30),(long)(int)local_160 * 1000);
      if ((uVar27 & 1) != 0) {
        return;
      }
      FUN_005f5c10(*(undefined8 *)(param_1 + 0x40));
      return;
    }
  }
LAB_005f2f98:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
            );
}


// ===== 005f303c  FUN_005f303c =====

long * FUN_005f303c(long param_1,undefined4 param_2,long param_3,long *param_4,long *param_5,
                   undefined8 *param_6)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  double dVar7;
  undefined8 uVar8;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  
  plVar1 = *(long **)(param_1 + 0x38);
  if (plVar1 != (long *)0x0) {
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    (**(code **)(*plVar1 + 0x20))(&local_70);
    if (((ulong)local_60 & 1) == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar2 = (long *)FUN_0088a2f4(param_1 + 0x48,(ulong)puStack_68 & 0xffffffff);
      plVar1 = plVar2;
      if (plVar2 != (long *)0x0) {
        if (((ulong)local_60 & 1) == 0) {
LAB_005f32a0:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                    );
        }
        (**(code **)(**(long **)(param_1 + 0x38) + 0x30))
                  (*(long **)(param_1 + 0x38),plVar2,local_70);
        plVar1 = (long *)FUN_0088a2f4(param_1 + 0xa0,param_2);
        if (plVar1 != (long *)0x0) {
          uVar3 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
          if (((ulong)local_60 & 1) == 0) goto LAB_005f32a0;
          dVar7 = (double)((ulong)plVar2 & 0xffffffff) / DAT_001f4ff8;
          uVar5 = 0x7fffffffffffffff;
          if (((uVar3 == 0x7fffffffffffffff) ||
              (uVar6 = 0x8000000000000000, local_70 == (undefined1 *)0x8000000000000000)) ||
             ((uVar3 != 0x8000000000000000 &&
              ((local_70 != (undefined1 *)0x7fffffffffffffff &&
               (uVar6 = uVar3 - (long)local_70, uVar5 = uVar6, -1 < (long)uVar6)))))) {
            uVar6 = uVar5 / 1000;
            if (499 < uVar5 % 1000) {
              uVar6 = uVar6 + 1;
            }
          }
          else {
            uVar6 = -(-uVar6 / 1000) - (ulong)(500 < -uVar6 % 1000);
          }
          if ((long)uVar3 < 0) {
            uVar5 = -(-uVar3 / 1000) - (ulong)(500 < -uVar3 % 1000);
          }
          else {
            uVar5 = uVar3 / 1000;
            if (499 < uVar3 % 1000) {
              uVar5 = uVar5 + 1;
            }
          }
          lVar4 = ((long)((double)((ulong)plVar1 & 0xffffffff) / DAT_001f4ff8 + 0.5) +
                  ((ulong)plVar1 >> 0x20) * 1000) -
                  (param_3 - uVar5 & ((long)(param_3 - uVar5) >> 0x3f ^ 0xffffffffffffffffU));
          *param_4 = lVar4;
          *param_5 = ((long)(dVar7 + 0.5) + ((ulong)plVar2 >> 0x20) * 1000 + uVar6) - lVar4;
          uVar8 = FUN_0088a3c8(param_1 + 0xa0);
          plVar1 = (long *)0x1;
          *param_6 = uVar8;
        }
      }
    }
  }
  return plVar1;
}


// ===== 005f32b4  FUN_005f32b4 =====

void FUN_005f32b4(long param_1)

{
  FUN_0088a2f4(param_1 + 0x48);
  return;
}


// ===== 005f32c0  FUN_005f32c0 =====

void FUN_005f32c0(long param_1)

{
  FUN_0088a2f4(param_1 + 0xa0);
  return;
}


// ===== 005f32cc  FUN_005f32cc =====

void FUN_005f32cc(long param_1,undefined8 param_2)

{
  FUN_005f58e4(*(undefined8 *)(param_1 + 0x40),param_1 + 0x48,param_1 + 0xa0,param_2);
  return;
}


// ===== 005f32e8  FUN_005f32e8 =====

void FUN_005f32e8(long param_1,undefined4 param_2)

{
  undefined1 uStack_32;
  undefined1 uStack_31;
  long local_30;
  undefined4 local_28;
  code *local_20;
  code *pcStack_18;
  
  local_20 = FUN_004473ec;
  pcStack_18 = FUN_005f3680;
  local_30 = param_1;
  local_28 = param_2;
  (**(code **)(**(long **)(param_1 + 0x28) + 8))
            (*(long **)(param_1 + 0x28),&local_30,&uStack_31,&uStack_32);
  (*local_20)(0,&local_30,&local_30);
  return;
}


// ===== 005f3358  FUN_005f3358 =====

undefined8 FUN_005f3358(undefined8 *param_1)

{
  FUN_005f2394(*param_1);
  return 1000000;
}


// ===== 005f3380  FUN_005f3380 =====

void FUN_005f3380(undefined8 *param_1,undefined8 *param_2)

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
  FUN_006224f8(&local_58,*param_2);
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


// ===== 005f3500  FUN_005f3500 =====

void FUN_005f3500(undefined8 *param_1,undefined8 *param_2)

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


// ===== 005f3680  FUN_005f3680 =====

void FUN_005f3680(long *param_1)

{
  if (*(long *)(*param_1 + 0x40) != 0) {
    *(int *)(*(long *)(*param_1 + 0x40) + 0x20) = (int)param_1[1];
  }
  return;
}


// ===== 005f369c  FUN_005f369c =====

int FUN_005f369c(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 *local_28;
  
  *param_1 = param_2;
  local_28 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_28);
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 1),(pthread_mutexattr_t *)&local_28);
  iVar1 = pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_28);
  param_1[7] = 0;
  param_1[6] = param_1 + 7;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = param_1 + 0xc;
  return iVar1;
}


// ===== 005f3710  FUN_005f3710 =====

int FUN_005f3710(long param_1)

{
  int iVar1;
  ulong uVar2;
  char *local_48;
  undefined8 uStack_40;
  undefined1 *local_38;
  char *local_30;
  char **ppcStack_28;
  undefined1 uStack_1;
  
  if (((*(long *)(param_1 + 0x48) != 0) || (*(long *)(param_1 + 0x50) != 0)) &&
     (uVar2 = FUN_004022fc(), (uVar2 & 1) == 0)) {
    local_38 = &uStack_1;
    local_48 = "../../video/send_delay_stats.cc";
    uStack_40 = 0x15a;
    ppcStack_28 = &local_48;
    local_30 = "Delay stats: number of old packets ";
    FUN_00623bb0(&DAT_001fbf66,"../../video/send_delay_stats.cc",0x15a,
                 "Delay stats: number of old packets ",*(undefined8 *)(param_1 + 0x48),
                 ", skipped packets ",*(undefined8 *)(param_1 + 0x50),". Number of streams ",
                 *(undefined8 *)(param_1 + 0x68));
  }
  FUN_005f37e0(param_1);
  local_48 = (char *)(param_1 + 0x58);
  FUN_005f3eb0(&local_48,*(undefined8 *)(param_1 + 0x60));
  local_48 = (char *)(param_1 + 0x30);
  FUN_005f3e3c(&local_48,*(undefined8 *)(param_1 + 0x38));
  iVar1 = pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 8));
  return iVar1;
}


// ===== 005f37e0  FUN_005f37e0 =====

int FUN_005f37e0(long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  void *local_98 [2];
  char cStack_81;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  plVar5 = *(long **)(param_1 + 0x58);
  do {
    while( true ) {
      if (plVar5 == (long *)(param_1 + 0x60)) {
        iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
        return iVar2;
      }
      puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
      local_80 = &DAT_aaaaaaaaaaaaaaaa;
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_005f4404(&local_80,plVar5 + 5);
      if ((long)local_80 < 5) break;
      lVar3 = DAT_00d641c0;
      if (DAT_00d641c0 == 0) {
        lVar3 = FUN_006660d0("WebRTC.Video.SendDelayInMs",0x1a,1,10000,0x32);
        FUN_00d0f5e0(0,lVar3,&DAT_00d641c0);
        if (lVar3 != 0) goto LAB_005f38b0;
      }
      else {
LAB_005f38b0:
        FUN_00666568(lVar3,(ulong)local_70 & 0xffffffff);
      }
      uVar4 = FUN_00417e08();
      if ((uVar4 & 1) != 0) break;
      FUN_005f41a8(local_98,&local_80);
      FUN_00623bb0(&DAT_001f4e90,"../../video/send_delay_stats.cc",0x1c9,
                   "WebRTC.Video.SendDelayInMs, ",local_98);
      if (-1 < cStack_81) break;
      operator_delete(local_98[0]);
      plVar6 = (long *)plVar5[1];
      if ((long *)plVar5[1] == (long *)0x0) goto LAB_005f3920;
LAB_005f38f8:
      do {
        plVar5 = plVar6;
        plVar6 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
    plVar6 = (long *)plVar5[1];
    if ((long *)plVar5[1] != (long *)0x0) goto LAB_005f38f8;
LAB_005f3920:
    do {
      plVar6 = (long *)plVar5[2];
      bVar1 = plVar5 != (long *)*plVar6;
      plVar5 = plVar6;
    } while (bVar1);
  } while( true );
}


// ===== 005f3964  FUN_005f3964 =====

int FUN_005f3964(long param_1,long *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_8c [4];
  undefined8 local_88;
  undefined4 local_7c;
  long local_78;
  undefined8 *puStack_70;
  undefined1 *local_68;
  undefined4 *local_60;
  long lStack_58;
  undefined4 *puVar4;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  puVar3 = (undefined4 *)*param_2;
  puVar1 = (undefined4 *)param_2[1];
  if ((ulong)(*(long *)(param_1 + 0x68) + ((long)puVar1 - (long)puVar3 >> 2)) < 0x33 &&
      puVar3 != puVar1) {
    do {
      puVar4 = puVar3 + 1;
      local_7c = *puVar3;
      local_88 = 0;
      local_8c[0] = 0;
      local_78 = param_1;
      puStack_70 = &local_88;
      local_68 = local_8c;
      local_60 = &local_7c;
      lStack_58 = param_1 + 0x58;
      FUN_005f3f2c(&lStack_58,&local_7c,&DAT_001f94c3,&local_60,&local_78);
      puVar3 = puVar4;
    } while (puVar4 != puVar1);
  }
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  return iVar2;
}


// ===== 005f3a2c  FUN_005f3a2c =====

int FUN_005f3a2c(undefined8 *param_1,undefined2 param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined2 local_3c [2];
  undefined8 *local_38;
  
  local_3c[0] = param_2;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 1));
  for (plVar3 = (long *)param_1[0xc]; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
    while (*(uint *)(plVar3 + 4) <= param_4) {
      if (param_4 == *(uint *)(plVar3 + 4)) {
        if (plVar3 != param_1 + 0xc) {
          uVar2 = (**(code **)(*(long *)*param_1 + 0x10))();
          FUN_005f3b1c(param_1,uVar2);
          if ((ulong)param_1[8] < 0x7d1) {
            local_58 = plVar3 + 5;
            local_38 = param_1 + 6;
            uStack_50 = param_3;
            local_48 = uVar2;
            FUN_005f4054(&local_38,local_3c,local_3c,&local_58);
          }
          else {
            param_1[10] = param_1[10] + 1;
          }
        }
        goto LAB_005f3afc;
      }
      plVar3 = (long *)plVar3[1];
      if (plVar3 == (long *)0x0) goto LAB_005f3afc;
    }
  }
LAB_005f3afc:
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 1));
  return iVar1;
}


// ===== 005f3b1c  FUN_005f3b1c =====

void FUN_005f3b1c(long param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  lVar3 = *(long *)(param_1 + 0x40);
  while( true ) {
    if ((lVar3 == 0) ||
       (((plVar7 = *(long **)(param_1 + 0x30), param_2 != 0x7fffffffffffffff &&
         (lVar4 = plVar7[6], lVar4 != -0x8000000000000000)) &&
        ((param_2 == -0x8000000000000000 ||
         ((lVar4 == 0x7fffffffffffffff || (param_2 - lVar4 < 11000000)))))))) {
      return;
    }
    plVar5 = plVar7;
    plVar1 = (long *)plVar7[1];
    if ((long *)plVar7[1] == (long *)0x0) {
      do {
        plVar6 = (long *)plVar5[2];
        bVar2 = plVar5 != (long *)*plVar6;
        plVar5 = plVar6;
      } while (bVar2);
    }
    else {
      do {
        plVar6 = plVar1;
        plVar1 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
    *(long **)(param_1 + 0x30) = plVar6;
    *(long *)(param_1 + 0x40) = lVar3 + -1;
    FUN_005d5d48(*(undefined8 *)(param_1 + 0x38),plVar7);
    if (plVar7 == (long *)0xffffffffffffffe0) break;
    operator_delete(plVar7);
    lVar3 = *(long *)(param_1 + 0x40);
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 005f3c28  FUN_005f3c28 =====

ulong FUN_005f3c28(long param_1,uint param_2,long param_3)

{
  ushort uVar1;
  uint uVar2;
  long *plVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  uint uVar11;
  long *plVar12;
  
  if (param_2 == 0xffffffff) {
    plVar12 = (long *)0x0;
  }
  else {
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
    plVar12 = *(long **)(param_1 + 0x38);
    if (plVar12 != (long *)0x0) {
      param_2 = param_2 & 0xffff;
      do {
        while( true ) {
          uVar1 = *(ushort *)(plVar12 + 4);
          uVar2 = uVar1 - param_2;
          uVar11 = (uint)uVar1;
          if (uVar2 == 0x8000) break;
          if ((uVar1 == param_2) || ((uVar2 >> 0xf & 1) != 0)) goto LAB_005f3c9c;
LAB_005f3c6c:
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_005f3e08;
        }
        if (param_2 < uVar11) goto LAB_005f3c6c;
LAB_005f3c9c:
        if (param_2 - uVar11 != 0x8000) {
          if ((uVar11 != param_2) && ((param_2 - uVar11 >> 0xf & 1) == 0)) goto LAB_005f3cc0;
LAB_005f3cd4:
          if (plVar12 == (long *)(param_1 + 0x38)) {
            plVar12 = (long *)0x0;
          }
          else {
            if ((param_3 == 0x7fffffffffffffff) ||
               (lVar7 = plVar12[7], lVar7 == -0x8000000000000000)) {
              lVar5 = plVar12[5];
              uVar8 = 0x7fffffffffffffff;
LAB_005f3d2c:
              uVar6 = uVar8 / 1000;
              if (499 < uVar8 % 1000) {
                uVar6 = uVar6 + 1;
              }
            }
            else {
              if ((param_3 == -0x8000000000000000) || (lVar7 == 0x7fffffffffffffff)) {
                lVar5 = plVar12[5];
                uVar8 = 0x8000000000000000;
              }
              else {
                lVar5 = plVar12[5];
                uVar8 = param_3 - lVar7;
                if (-1 < (long)uVar8) goto LAB_005f3d2c;
              }
              uVar6 = -(-uVar8 / 1000) - (ulong)(500 < -uVar8 % 1000);
            }
            thunk_FUN_005f48d0(lVar5,uVar6);
            plVar9 = plVar12;
            plVar3 = (long *)plVar12[1];
            if ((long *)plVar12[1] == (long *)0x0) {
              do {
                plVar10 = (long *)plVar9[2];
                bVar4 = plVar9 != (long *)*plVar10;
                plVar9 = plVar10;
              } while (bVar4);
            }
            else {
              do {
                plVar10 = plVar3;
                plVar3 = (long *)*plVar10;
              } while ((long *)*plVar10 != (long *)0x0);
            }
            if (*(long **)(param_1 + 0x30) == plVar12) {
              *(long **)(param_1 + 0x30) = plVar10;
            }
            *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -1;
            FUN_005d5d48(*(undefined8 *)(param_1 + 0x38),plVar12);
            if (plVar12 == (long *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                        );
            }
            operator_delete(plVar12);
            plVar12 = (long *)0x1;
          }
          goto LAB_005f3e08;
        }
        if (param_2 <= uVar11) goto LAB_005f3cd4;
LAB_005f3cc0:
        plVar12 = (long *)plVar12[1];
      } while (plVar12 != (long *)0x0);
      plVar12 = (long *)0x0;
    }
LAB_005f3e08:
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  }
  return (ulong)plVar12 & 0xffffffff;
}


// ===== 005f3e3c  FUN_005f3e3c =====

void FUN_005f3e3c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_005f3e3c(param_1,*param_2);
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


// ===== 005f3eb0  FUN_005f3eb0 =====

void FUN_005f3eb0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_005f3eb0(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      puVar1 = (undefined8 *)param_2[1];
      FUN_005f52e4(param_2 + 5);
      operator_delete(param_2);
      param_2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
  }
  return;
}


// ===== 005f3f2c  FUN_005f3f2c =====

undefined1  [16]
FUN_005f3f2c(undefined8 *param_1,uint *param_2,undefined8 param_3,undefined8 *param_4,
            undefined8 *param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  
  plVar7 = (long *)*param_1;
  plVar3 = plVar7 + 1;
  plVar8 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar2 = plVar1, plVar3 = plVar2, *param_2 < *(uint *)(plVar2 + 4)) {
        plVar1 = (long *)*plVar2;
        plVar8 = plVar2;
        if ((long *)*plVar2 == (long *)0x0) goto LAB_005f3f98;
      }
      if (*param_2 == *(uint *)(plVar2 + 4)) {
        uVar4 = 0;
        goto LAB_005f4024;
      }
      plVar1 = (long *)plVar2[1];
    } while ((long *)plVar2[1] != (long *)0x0);
    plVar8 = plVar2 + 1;
  }
LAB_005f3f98:
  plVar2 = (long *)operator_new(0x80);
  if ((plVar2 == (long *)0x0) || (*plVar2 = 0, plVar2 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  puVar5 = (undefined8 *)*param_5;
  puVar6 = (undefined1 *)param_5[2];
  *(undefined4 *)(plVar2 + 4) = *(undefined4 *)*param_4;
  FUN_005f4b60(plVar2 + 5,*puVar5,0,*puVar6);
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[2] = (long)plVar3;
  *plVar8 = (long)plVar2;
  plVar3 = plVar2;
  if (*(long *)*plVar7 != 0) {
    *plVar7 = *(long *)*plVar7;
    plVar3 = (long *)*plVar8;
  }
  FUN_005d5b94(plVar7[1],plVar3);
  uVar4 = 1;
  plVar7[2] = plVar7[2] + 1;
LAB_005f4024:
  auVar9._8_8_ = uVar4;
  auVar9._0_8_ = plVar2;
  return auVar9;
}


// ===== 005f4054  FUN_005f4054 =====

undefined1  [16] FUN_005f4054(undefined8 *param_1,ushort *param_2,undefined2 *param_3,long *param_4)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 uVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined1 auVar16 [16];
  
  plVar12 = (long *)*param_1;
  plVar7 = plVar12 + 1;
  plVar13 = plVar7;
  if ((long *)*plVar7 != (long *)0x0) {
    uVar1 = *param_2;
    plVar5 = (long *)*plVar7;
    do {
      while( true ) {
        plVar6 = plVar5;
        uVar2 = *(ushort *)(plVar6 + 4);
        uVar4 = (uint)uVar2 - (uint)uVar1;
        uVar9 = (uint)uVar1;
        uVar10 = (uint)uVar2;
        plVar7 = plVar6;
        if (uVar4 == 0x8000) break;
        if (((uint)uVar2 == (uint)uVar1) || ((uVar4 >> 0xf & 1) != 0)) goto LAB_005f40c4;
LAB_005f408c:
        plVar5 = (long *)*plVar6;
        plVar13 = plVar6;
        if ((long *)*plVar6 == (long *)0x0) goto LAB_005f40fc;
      }
      if (uVar9 < uVar10) goto LAB_005f408c;
LAB_005f40c4:
      if (uVar9 - uVar10 != 0x8000) {
        if ((uVar9 != uVar10) && ((uVar9 - uVar10 >> 0xf & 1) == 0)) goto LAB_005f40e8;
LAB_005f4170:
        uVar8 = 0;
        goto LAB_005f4178;
      }
      if (uVar9 <= uVar10) goto LAB_005f4170;
LAB_005f40e8:
      plVar5 = (long *)plVar6[1];
    } while ((long *)plVar6[1] != (long *)0x0);
    plVar13 = plVar6 + 1;
  }
LAB_005f40fc:
  plVar6 = (long *)operator_new(0x40);
  if ((plVar6 == (long *)0x0) || (*plVar6 = 0, plVar6 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar3 = *param_3;
  lVar15 = param_4[1];
  lVar14 = *param_4;
  lVar11 = param_4[2];
  *plVar6 = 0;
  plVar6[1] = 0;
  *(undefined2 *)(plVar6 + 4) = uVar3;
  plVar6[6] = lVar15;
  plVar6[5] = lVar14;
  plVar6[7] = lVar11;
  plVar6[2] = (long)plVar7;
  *plVar13 = (long)plVar6;
  plVar7 = plVar6;
  if (*(long *)*plVar12 != 0) {
    *plVar12 = *(long *)*plVar12;
    plVar7 = (long *)*plVar13;
  }
  FUN_005d5b94(plVar12[1],plVar7);
  uVar8 = 1;
  plVar12[2] = plVar12[2] + 1;
LAB_005f4178:
  auVar16._8_8_ = uVar8;
  auVar16._0_8_ = plVar6;
  return auVar16;
}


// ===== 005f41a8  FUN_005f41a8 =====

void FUN_005f41a8(undefined8 param_1)

{
  FUN_005f41b4(param_1,1);
  return;
}


// ===== 005f41b4  FUN_005f41b4 =====

void FUN_005f41b4(undefined8 *param_1,undefined8 *param_2,int param_3)

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
  FUN_00547cac(&local_60,"periodic_samples:",0x11);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005f5410(&local_48,0x16,*param_2);
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
  FUN_00547cac(&local_60,&DAT_001e49b3,3);
  FUN_00547cac(&local_60,&DAT_001d65f0,4);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005f55c4(&local_48,0x16,*(int *)(param_2 + 1) * param_3);
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
  FUN_00547cac(&local_60,&DAT_001e1644,2);
  FUN_00547cac(&local_60,&DAT_001dbc06,4);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005f55c4(&local_48,0x16,*(int *)(param_2 + 2) * param_3);
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
  FUN_00547cac(&local_60,&DAT_001e1644,2);
  FUN_00547cac(&local_60,&DAT_001cace9,4);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005f55c4(&local_48,0x16,*(int *)((long)param_2 + 0xc) * param_3);
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
  FUN_00547cac(&local_60,&DAT_001b0cbb,1);
  param_1[1] = uStack_58;
  *param_1 = local_60;
  param_1[2] = local_50;
  return;
}


// ===== 005f43fc  FUN_005f43fc =====

void FUN_005f43fc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x5f4404);
  (*pcVar1)();
}


// ===== 005f4404  FUN_005f4404 =====

void FUN_005f4404(long *param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_2 + 0x18);
  lVar3 = *(long *)(lVar2 + 0x10);
  if (lVar3 != 0) {
    uVar1 = 0;
    if (lVar3 != 0) {
      uVar1 = (undefined4)((*(long *)(lVar2 + 8) + lVar3 / 2) / lVar3);
    }
    *(undefined4 *)(lVar2 + 0x20) = uVar1;
  }
  lVar4 = *(long *)(lVar2 + 0x10);
  lVar3 = *(long *)(lVar2 + 0x20);
  param_1[1] = *(long *)(lVar2 + 0x18);
  *param_1 = lVar4;
  param_1[2] = lVar3;
  return;
}


// ===== 005f4440  FUN_005f4440 =====

void FUN_005f4440(long *param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_2 + 0x38) != -1) {
    FUN_005f44c4(param_2);
  }
  lVar2 = *(long *)(param_2 + 0x18);
  lVar3 = *(long *)(lVar2 + 0x10);
  if (lVar3 != 0) {
    uVar1 = 0;
    if (lVar3 != 0) {
      uVar1 = (undefined4)((*(long *)(lVar2 + 8) + lVar3 / 2) / lVar3);
    }
    *(undefined4 *)(lVar2 + 0x20) = uVar1;
  }
  lVar4 = *(long *)(lVar2 + 0x10);
  lVar3 = *(long *)(lVar2 + 0x20);
  param_1[1] = *(long *)(lVar2 + 0x18);
  *param_1 = lVar4;
  param_1[2] = lVar3;
  return;
}


// ===== 005f44b0  FUN_005f44b0 =====

bool FUN_005f44b0(long param_1)

{
  return *(long *)(param_1 + 0x38) != -1;
}


// ===== 005f44c4  FUN_005f44c4 =====

void FUN_005f44c4(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  undefined8 *puVar14;
  int local_34;
  
  uVar5 = (**(code **)(*(long *)param_1[5] + 0x10))();
  uVar11 = uVar5 / 1000;
  if (499 < uVar5 % 1000) {
    uVar11 = uVar11 + 1;
  }
  if ((uVar5 & 0x8000000000000000) != 0) {
    uVar11 = -(-uVar5 / 1000) - (ulong)(500 < -uVar5 % 1000);
  }
  uVar5 = param_1[7];
  if (param_1[7] == 0xffffffffffffffff) {
    param_1[7] = uVar11;
    uVar5 = uVar11;
  }
  lVar13 = param_1[2];
  if (lVar13 <= (long)(uVar11 - uVar5)) {
    lVar1 = 0;
    if (lVar13 != 0) {
      lVar1 = (long)(uVar11 - uVar5) / lVar13;
    }
    param_1[7] = uVar5 + lVar1 * lVar13;
    local_34 = -0x55555556;
    uVar11 = (**(code **)(*param_1 + 0x10))(param_1,&local_34);
    if ((uVar11 & 1) != 0) {
      piVar7 = (int *)param_1[3];
      lVar13 = *(long *)(piVar7 + 4);
      *piVar7 = local_34;
      *(long *)(piVar7 + 2) = *(long *)(piVar7 + 2) + (long)local_34;
      *(long *)(piVar7 + 4) = lVar13 + 1;
      iVar4 = local_34;
      iVar9 = local_34;
      if (lVar13 != 0) {
        iVar9 = piVar7[6];
        if (local_34 <= piVar7[6]) {
          iVar9 = local_34;
        }
        if (local_34 <= piVar7[7]) {
          iVar4 = piVar7[7];
        }
      }
      piVar7[6] = iVar9;
      piVar7[7] = iVar4;
      if ((undefined8 *)param_1[6] != (undefined8 *)0x0) {
        (*(code *)**(undefined8 **)param_1[6])();
      }
    }
    if ((((char)param_1[1] == '\x01') && ((*(byte *)(param_1 + 8) & 1) == 0)) &&
       (*(long *)(param_1[3] + 0x10) != 0)) {
      iVar9 = (int)lVar1 - (uint)(*(long *)param_1[4] != 0);
      iVar4 = (**(code **)(*param_1 + 0x18))(param_1);
      if (0 < iVar9) {
        do {
          piVar7 = (int *)param_1[3];
          lVar13 = *(long *)(piVar7 + 4);
          *piVar7 = iVar4;
          *(long *)(piVar7 + 2) = *(long *)(piVar7 + 2) + (long)iVar4;
          *(long *)(piVar7 + 4) = lVar13 + 1;
          iVar10 = iVar4;
          iVar12 = iVar4;
          if (lVar13 != 0) {
            iVar10 = piVar7[6];
            if (iVar4 <= piVar7[6]) {
              iVar10 = iVar4;
            }
            if (iVar4 <= piVar7[7]) {
              iVar12 = piVar7[7];
            }
          }
          piVar7[6] = iVar10;
          piVar7[7] = iVar12;
          puVar6 = (undefined8 *)param_1[6];
          if (puVar6 != (undefined8 *)0x0) {
            (**(code **)*puVar6)(puVar6,iVar4);
          }
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
    puVar8 = (undefined8 *)param_1[4];
    puVar6 = (undefined8 *)puVar8[1];
    while (puVar6 != puVar8 + 2) {
      if (0 < (long)puVar6[6]) {
        puVar6[8] = puVar6[7];
      }
      puVar6[6] = 0;
      puVar6[7] = 0;
      *(undefined4 *)(puVar6 + 5) = 0x80000000;
      puVar14 = puVar6;
      puVar2 = (undefined8 *)puVar6[1];
      if ((undefined8 *)puVar6[1] == (undefined8 *)0x0) {
        do {
          puVar6 = (undefined8 *)puVar14[2];
          bVar3 = puVar14 != (undefined8 *)*puVar6;
          puVar14 = puVar6;
        } while (bVar3);
      }
      else {
        do {
          puVar6 = puVar2;
          puVar2 = (undefined8 *)*puVar6;
        } while ((undefined8 *)*puVar6 != (undefined8 *)0x0);
      }
    }
    *puVar8 = 0;
  }
  return;
}


// ===== 005f4734  FUN_005f4734 =====

void FUN_005f4734(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0x38) != -1) {
    FUN_005f44c4(param_1);
  }
  *(undefined1 *)(param_1 + 0x40) = 1;
  uVar1 = (**(code **)(**(long **)(param_1 + 0x28) + 0x10))();
  uVar2 = uVar1 / 1000;
  if (499 < uVar1 % 1000) {
    uVar2 = uVar2 + 1;
  }
  if ((uVar1 & 0x8000000000000000) != 0) {
    uVar2 = -(-uVar1 / 1000) - (ulong)(500 < -uVar1 % 1000);
  }
  *(ulong *)(param_1 + 0x48) = uVar2;
  *(undefined8 *)(param_1 + 0x50) = param_2;
  return;
}


// ===== 005f47e4  FUN_005f47e4 =====

void FUN_005f47e4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0x38) != -1) {
    FUN_005f44c4(param_1);
  }
  *(undefined1 *)(param_1 + 0x40) = 1;
  uVar1 = (**(code **)(**(long **)(param_1 + 0x28) + 0x10))();
  uVar2 = uVar1 / 1000;
  if (499 < uVar1 % 1000) {
    uVar2 = uVar2 + 1;
  }
  if ((uVar1 & 0x8000000000000000) != 0) {
    uVar2 = -(-uVar1 / 1000) - (ulong)(500 < -uVar1 % 1000);
  }
  *(ulong *)(param_1 + 0x48) = uVar2;
  return;
}


// ===== 005f4890  FUN_005f4890 =====

void FUN_005f4890(long param_1)

{
  if (*(long *)(param_1 + 0x38) != -1) {
    FUN_005f44c4(param_1);
  }
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}


// ===== 005f48d0  FUN_005f48d0 =====

void FUN_005f48d0(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  undefined4 local_38;
  undefined1 uStack_31;
  undefined4 *local_18;
  
  FUN_005f44c4();
  plVar5 = *(long **)(param_1 + 0x20);
  local_18 = &local_38;
  local_38 = 0;
  lVar2 = FUN_005f5744(0,plVar5 + 1,plVar5 + 1,&DAT_001f94c3,&local_18,&uStack_31);
  iVar1 = param_2;
  if (param_2 <= *(int *)(lVar2 + 0x28)) {
    iVar1 = *(int *)(lVar2 + 0x28);
  }
  *(int *)(lVar2 + 0x28) = iVar1;
  *(long *)(lVar2 + 0x38) = *(long *)(lVar2 + 0x38) + (long)param_2;
  *(long *)(lVar2 + 0x30) = *(long *)(lVar2 + 0x30) + 1;
  *plVar5 = *plVar5 + 1;
  if (*(char *)(param_1 + 0x40) == '\x01') {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x28) + 0x10))();
    uVar4 = uVar3 / 1000;
    if (499 < uVar3 % 1000) {
      uVar4 = uVar4 + 1;
    }
    if ((uVar3 & 0x8000000000000000) != 0) {
      uVar4 = -(-uVar3 / 1000) - (ulong)(500 < -uVar3 % 1000);
    }
    if (*(long *)(param_1 + 0x50) <= (long)(uVar4 - *(long *)(param_1 + 0x48))) {
      *(undefined1 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
  }
  return;
}


// ===== 005f4a00  FUN_005f4a00 =====

void FUN_005f4a00(long param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  undefined4 local_40;
  undefined1 uStack_39;
  undefined1 *local_38;
  
  if ((*(char *)(param_1 + 0x40) == '\x01') &&
     (local_40 = param_3, local_38 = (undefined1 *)&local_40,
     lVar1 = FUN_005f5744(0,*(long *)(param_1 + 0x20) + 8,*(long *)(param_1 + 0x20) + 8,
                          &DAT_001f94c3,&local_38,&uStack_39), param_2 == *(long *)(lVar1 + 0x40)))
  {
    return;
  }
  FUN_005f44c4(param_1);
  plVar4 = *(long **)(param_1 + 0x20);
  local_40 = param_3;
  local_38 = (undefined1 *)&local_40;
  lVar1 = FUN_005f5744(0,plVar4 + 1,plVar4 + 1,&DAT_001f94c3,&local_38,&uStack_39);
  *(long *)(lVar1 + 0x30) = *(long *)(lVar1 + 0x30) + 1;
  *(long *)(lVar1 + 0x38) = param_2;
  *plVar4 = *plVar4 + 1;
  if (*(char *)(param_1 + 0x40) == '\x01') {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x28) + 0x10))();
    uVar3 = uVar2 / 1000;
    if (499 < uVar2 % 1000) {
      uVar3 = uVar3 + 1;
    }
    if ((uVar2 & 0x8000000000000000) != 0) {
      uVar3 = -(-uVar2 / 1000) - (ulong)(500 < -uVar2 % 1000);
    }
    if (*(long *)(param_1 + 0x50) <= (long)(uVar3 - *(long *)(param_1 + 0x48))) {
      *(undefined1 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
  }
  return;
}


// ===== 005f4b60  FUN_005f4b60 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005f4b60(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  
  *(undefined1 *)(param_1 + 1) = param_4;
  param_1[2] = 2000;
  puVar3 = (undefined4 *)operator_new(0x28);
  *puVar3 = 0;
  *(undefined8 *)(puVar3 + 2) = 0;
  *(undefined8 *)(puVar3 + 4) = 0;
  puVar3[8] = 0xffffffff;
  param_1[3] = puVar3;
  *(undefined8 *)(puVar3 + 6) = 0xffffffffffffffff;
  puVar4 = (undefined8 *)operator_new(0x20);
  param_1[4] = puVar4;
  param_1[5] = param_2;
  puVar4[2] = 0;
  uVar2 = _UNK_001f3058;
  uVar1 = _DAT_001f3050;
  *puVar4 = 0;
  puVar4[1] = puVar4 + 2;
  param_1[6] = param_3;
  param_1[7] = 0xffffffffffffffff;
  puVar4[3] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[10] = uVar2;
  param_1[9] = uVar1;
  *param_1 = &PTR_FUN_00d26c78;
  return;
}


// ===== 005f4c04  thunk_FUN_005f48d0 =====

void thunk_FUN_005f48d0(void)

{
  FUN_005f48d0();
  return;
}


// ===== 005f4c0c  FUN_005f4c0c =====

bool FUN_005f4c0c(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long *plVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar5 = *(long **)(param_1 + 0x20);
  lVar4 = *plVar5;
  if (lVar4 != 0) {
    if ((long *)plVar5[1] == plVar5 + 2) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      plVar7 = (long *)plVar5[1];
      do {
        plVar8 = plVar7;
        plVar2 = (long *)plVar7[1];
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
        lVar6 = plVar7[7] + lVar6;
        plVar7 = plVar9;
      } while (plVar9 != plVar5 + 2);
    }
    uVar1 = 0;
    if (lVar4 != 0) {
      uVar1 = (undefined4)((lVar6 + lVar4 / 2) / lVar4);
    }
    *param_2 = uVar1;
  }
  return lVar4 != 0;
}


// ===== 005f4c9c  FUN_005f4c9c =====

undefined4 FUN_005f4c9c(long param_1)

{
  return **(undefined4 **)(param_1 + 0x18);
}


// ===== 005f4cac  FUN_005f4cac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005f4cac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = param_4;
  puVar3 = (undefined4 *)operator_new(0x28);
  *puVar3 = 0;
  *(undefined8 *)(puVar3 + 2) = 0;
  *(undefined8 *)(puVar3 + 4) = 0;
  puVar3[8] = 0xffffffff;
  param_1[3] = puVar3;
  *(undefined8 *)(puVar3 + 6) = 0xffffffffffffffff;
  puVar4 = (undefined8 *)operator_new(0x20);
  param_1[4] = puVar4;
  param_1[5] = param_2;
  puVar4[2] = 0;
  uVar2 = _UNK_001f3058;
  uVar1 = _DAT_001f3050;
  *puVar4 = 0;
  puVar4[1] = puVar4 + 2;
  param_1[6] = param_3;
  param_1[7] = 0xffffffffffffffff;
  puVar4[3] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[10] = uVar2;
  param_1[9] = uVar1;
  *param_1 = &PTR_FUN_00d26ca8;
  return;
}


// ===== 005f4d4c  thunk_FUN_005f48d0 =====

void thunk_FUN_005f48d0(void)

{
  FUN_005f48d0();
  return;
}


// ===== 005f4d54  FUN_005f4d54 =====

bool FUN_005f4d54(long param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar6 = *(long **)(param_1 + 0x20);
  lVar4 = *plVar6;
  if (lVar4 != 0) {
    plVar7 = (long *)plVar6[1];
    iVar5 = -0x80000000;
    while (plVar7 != plVar6 + 2) {
      iVar1 = (int)plVar7[5];
      if ((int)plVar7[5] <= iVar5) {
        iVar1 = iVar5;
      }
      plVar8 = plVar7;
      plVar2 = (long *)plVar7[1];
      iVar5 = iVar1;
      if ((long *)plVar7[1] == (long *)0x0) {
        do {
          plVar7 = (long *)plVar8[2];
          bVar3 = plVar8 != (long *)*plVar7;
          plVar8 = plVar7;
        } while (bVar3);
      }
      else {
        do {
          plVar7 = plVar2;
          plVar2 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
    }
    *param_2 = iVar5;
  }
  return lVar4 != 0;
}


// ===== 005f4dc4  FUN_005f4dc4 =====

undefined8 FUN_005f4dc4(void)

{
  return 0;
}


// ===== 005f4dd0  FUN_005f4dd0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005f4dd0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  
  *(undefined1 *)(param_1 + 1) = param_4;
  param_1[2] = 2000;
  puVar3 = (undefined4 *)operator_new(0x28);
  *puVar3 = 0;
  *(undefined8 *)(puVar3 + 2) = 0;
  *(undefined8 *)(puVar3 + 4) = 0;
  puVar3[8] = 0xffffffff;
  param_1[3] = puVar3;
  *(undefined8 *)(puVar3 + 6) = 0xffffffffffffffff;
  puVar4 = (undefined8 *)operator_new(0x20);
  param_1[4] = puVar4;
  param_1[5] = param_2;
  puVar4[2] = 0;
  uVar2 = _UNK_001f3058;
  uVar1 = _DAT_001f3050;
  *puVar4 = 0;
  puVar4[1] = puVar4 + 2;
  param_1[6] = param_3;
  param_1[7] = 0xffffffffffffffff;
  puVar4[3] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[10] = uVar2;
  param_1[9] = uVar1;
  *param_1 = &PTR_FUN_00d26cd8;
  return;
}


// ===== 005f4e74  thunk_FUN_005f48d0 =====

void thunk_FUN_005f48d0(void)

{
  FUN_005f48d0();
  return;
}


// ===== 005f4e7c  FUN_005f4e7c =====

bool FUN_005f4e7c(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long *plVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  plVar5 = *(long **)(param_1 + 0x20);
  lVar4 = *plVar5;
  if (lVar4 != 0) {
    if ((long *)plVar5[1] == plVar5 + 2) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      plVar8 = (long *)plVar5[1];
      do {
        plVar9 = plVar8;
        plVar2 = (long *)plVar8[1];
        if ((long *)plVar8[1] == (long *)0x0) {
          do {
            plVar10 = (long *)plVar9[2];
            bVar3 = plVar9 != (long *)*plVar10;
            plVar9 = plVar10;
          } while (bVar3);
        }
        else {
          do {
            plVar10 = plVar2;
            plVar2 = (long *)*plVar10;
          } while ((long *)*plVar10 != (long *)0x0);
        }
        lVar6 = plVar8[7] + lVar6;
        plVar8 = plVar10;
      } while (plVar10 != plVar5 + 2);
      lVar6 = lVar6 * 1000;
    }
    lVar7 = *(long *)(param_1 + 0x10);
    uVar1 = 0;
    if (lVar7 != 0) {
      uVar1 = (undefined4)((lVar6 + lVar7 / 2) / lVar7);
    }
    *param_2 = uVar1;
  }
  return lVar4 != 0;
}


// ===== 005f4f1c  FUN_005f4f1c =====

undefined8 FUN_005f4f1c(void)

{
  return 0;
}


// ===== 005f4f28  FUN_005f4f28 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005f4f28(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  
  *(undefined1 *)(param_1 + 1) = param_4;
  param_1[2] = 2000;
  puVar3 = (undefined4 *)operator_new(0x28);
  *puVar3 = 0;
  *(undefined8 *)(puVar3 + 2) = 0;
  *(undefined8 *)(puVar3 + 4) = 0;
  puVar3[8] = 0xffffffff;
  param_1[3] = puVar3;
  *(undefined8 *)(puVar3 + 6) = 0xffffffffffffffff;
  puVar4 = (undefined8 *)operator_new(0x20);
  param_1[4] = puVar4;
  param_1[5] = param_2;
  puVar4[2] = 0;
  uVar2 = _UNK_001f3058;
  uVar1 = _DAT_001f3050;
  *puVar4 = 0;
  puVar4[1] = puVar4 + 2;
  param_1[6] = param_3;
  param_1[7] = 0xffffffffffffffff;
  puVar4[3] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[10] = uVar2;
  param_1[9] = uVar1;
  *param_1 = &PTR_FUN_00d26d08;
  return;
}


// ===== 005f4fcc  thunk_FUN_005f4a00 =====

void thunk_FUN_005f4a00(void)

{
  FUN_005f4a00();
  return;
}


// ===== 005f4fd4  FUN_005f4fd4 =====

void FUN_005f4fd4(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined4 local_28;
  undefined1 uStack_21;
  undefined4 *local_8;
  
  local_8 = &local_28;
  local_28 = param_3;
  lVar1 = FUN_005f5744(0,*(long *)(param_1 + 0x20) + 8,*(long *)(param_1 + 0x20) + 8,&DAT_001f94c3,
                       &local_8,&uStack_21);
  *(undefined8 *)(lVar1 + 0x40) = param_2;
  return;
}


// ===== 005f5034  FUN_005f5034 =====

undefined4 FUN_005f5034(long param_1,undefined4 *param_2)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  ulong uVar10;
  
  plVar7 = *(long **)(*(long *)(param_1 + 0x20) + 8);
  plVar1 = (long *)(*(long *)(param_1 + 0x20) + 0x10);
  if (plVar7 == plVar1) {
    return 0;
  }
  lVar5 = 0;
  iVar9 = 0;
  do {
    if (0 < plVar7[6]) {
      uVar10 = plVar7[7] - plVar7[8];
      lVar5 = (uVar10 & ((long)uVar10 >> 0x3f ^ 0xffffffffffffffffU)) + lVar5;
      iVar9 = iVar9 + ((uint)(uVar10 >> 0x3f) ^ 1);
    }
    plVar8 = plVar7;
    plVar2 = (long *)plVar7[1];
    if ((long *)plVar7[1] == (long *)0x0) {
      do {
        plVar7 = (long *)plVar8[2];
        bVar3 = plVar8 != (long *)*plVar7;
        plVar8 = plVar7;
      } while (bVar3);
    }
    else {
      do {
        plVar7 = plVar2;
        plVar2 = (long *)*plVar7;
      } while ((long *)*plVar7 != (long *)0x0);
    }
  } while (plVar7 != plVar1);
  uVar4 = 0;
  if ((0 < iVar9) && (-1 < lVar5)) {
    if ((lVar5 == 0) && ((*(byte *)(param_1 + 8) & 1) == 0)) {
      return 0;
    }
    lVar6 = *(long *)(param_1 + 0x10);
    uVar4 = 0;
    if (lVar6 != 0) {
      uVar4 = (undefined4)((lVar5 * 1000 + lVar6 / 2) / lVar6);
    }
    *param_2 = uVar4;
    uVar4 = 1;
  }
  return uVar4;
}


// ===== 005f5104  FUN_005f5104 =====

undefined8 FUN_005f5104(void)

{
  return 0;
}


// ===== 005f5110  FUN_005f5110 =====

void FUN_005f5110(undefined8 *param_1)

{
  long *plVar1;
  void *pvVar2;
  long local_28;
  
  plVar1 = (long *)param_1[6];
  param_1[6] = 0;
  *param_1 = &PTR_FUN_00d26c48;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  pvVar2 = (void *)param_1[4];
  param_1[4] = 0;
  if (pvVar2 != (void *)0x0) {
    local_28 = (long)pvVar2 + 8;
    FUN_005f5854(&local_28,*(undefined8 *)((long)pvVar2 + 0x10));
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[3];
  param_1[3] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  operator_delete(param_1);
  return;
}


// ===== 005f51ac  FUN_005f51ac =====

void FUN_005f51ac(undefined8 *param_1)

{
  long *plVar1;
  void *pvVar2;
  long local_28;
  
  plVar1 = (long *)param_1[6];
  param_1[6] = 0;
  *param_1 = &PTR_FUN_00d26c48;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  pvVar2 = (void *)param_1[4];
  param_1[4] = 0;
  if (pvVar2 != (void *)0x0) {
    local_28 = (long)pvVar2 + 8;
    FUN_005f5854(&local_28,*(undefined8 *)((long)pvVar2 + 0x10));
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[3];
  param_1[3] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  operator_delete(param_1);
  return;
}


// ===== 005f5248  FUN_005f5248 =====

void FUN_005f5248(undefined8 *param_1)

{
  long *plVar1;
  void *pvVar2;
  long local_28;
  
  plVar1 = (long *)param_1[6];
  param_1[6] = 0;
  *param_1 = &PTR_FUN_00d26c48;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  pvVar2 = (void *)param_1[4];
  param_1[4] = 0;
  if (pvVar2 != (void *)0x0) {
    local_28 = (long)pvVar2 + 8;
    FUN_005f5854(&local_28,*(undefined8 *)((long)pvVar2 + 0x10));
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[3];
  param_1[3] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  operator_delete(param_1);
  return;
}


// ===== 005f52e4  FUN_005f52e4 =====

void FUN_005f52e4(undefined8 *param_1)

{
  long *plVar1;
  void *pvVar2;
  long local_28;
  
  plVar1 = (long *)param_1[6];
  param_1[6] = 0;
  *param_1 = &PTR_FUN_00d26c48;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  pvVar2 = (void *)param_1[4];
  param_1[4] = 0;
  if (pvVar2 != (void *)0x0) {
    local_28 = (long)pvVar2 + 8;
    FUN_005f5854(&local_28,*(undefined8 *)((long)pvVar2 + 0x10));
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[3];
  param_1[3] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  return;
}


// ===== 005f5374  FUN_005f5374 =====

void FUN_005f5374(undefined8 *param_1)

{
  long *plVar1;
  void *pvVar2;
  long local_28;
  
  plVar1 = (long *)param_1[6];
  param_1[6] = 0;
  *param_1 = &PTR_FUN_00d26c48;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  pvVar2 = (void *)param_1[4];
  param_1[4] = 0;
  if (pvVar2 != (void *)0x0) {
    local_28 = (long)pvVar2 + 8;
    FUN_005f5854(&local_28,*(undefined8 *)((long)pvVar2 + 0x10));
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[3];
  param_1[3] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  operator_delete(param_1);
  return;
}


// ===== 005f5410  FUN_005f5410 =====

void FUN_005f5410(long *param_1,ulong param_2,undefined8 param_3)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  if (0x7ffffffffffffff6 < param_2) {
    FUN_00621ff8("absl::StringResizeAndOverwrite");
    goto LAB_005f558c;
  }
  uVar6 = (ulong)*(char *)((long)param_1 + 0x17);
  if ((long)uVar6 < 0) {
    uVar6 = param_1[1];
    if (uVar6 < param_2) {
      uVar4 = (ulong)param_1[2] >> 0x38;
      lVar3 = (param_1[2] & 0x7fffffffffffffffU) - 1;
      goto LAB_005f547c;
    }
    plVar7 = (long *)*param_1;
LAB_005f54f0:
    param_1[1] = param_2;
  }
  else if (uVar6 < param_2) {
    lVar3 = 0x16;
    uVar4 = uVar6 & 0xffffffff;
LAB_005f547c:
    if (lVar3 - uVar6 < param_2 - uVar6) {
      FUN_0054774c(param_1,lVar3,param_2 - lVar3,uVar6,uVar6,0,0);
      uVar4 = (ulong)*(byte *)((long)param_1 + 0x17);
      param_1[1] = uVar6;
    }
    plVar7 = (long *)*param_1;
    if ((uVar4 & 0x80) == 0) {
      plVar7 = param_1;
    }
    memset((void *)((long)plVar7 + uVar6),0,param_2 - uVar6);
    if (*(char *)((long)param_1 + 0x17) < '\0') goto LAB_005f54f0;
    *(byte *)((long)param_1 + 0x17) = (byte)param_2 & 0x7f;
  }
  else {
    *(byte *)((long)param_1 + 0x17) = (byte)param_2;
    plVar7 = param_1;
  }
  *(undefined1 *)((long)plVar7 + param_2) = 0;
  plVar7 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar7 = param_1;
  }
  lVar3 = FUN_00620744(param_3,plVar7);
  uVar6 = lVar3 - (long)plVar7;
  if (uVar6 <= param_2) {
    bVar1 = *(byte *)((long)param_1 + 0x17);
    plVar5 = (long *)*param_1;
    plVar7 = plVar5;
    if ((bVar1 & 0x80) == 0) {
      plVar7 = param_1;
    }
    if (*(char *)((long)plVar7 + param_2) == '\0') {
      if ((char)bVar1 < '\0') {
        if ((ulong)param_1[1] < uVar6) goto LAB_005f558c;
        param_1[1] = uVar6;
      }
      else {
        if (bVar1 < uVar6) {
LAB_005f558c:
                    /* WARNING: Subroutine does not return */
          FUN_005f5590();
        }
        *(char *)((long)param_1 + 0x17) = (char)uVar6;
        plVar5 = param_1;
      }
      *(undefined1 *)((long)plVar5 + uVar6) = 0;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x5f5580);
  (*pcVar2)();
}


// ===== 005f5590  FUN_005f5590 =====

void FUN_005f5590(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005f55a8("basic_string");
}


// ===== 005f55a8  FUN_005f55a8 =====

void FUN_005f55a8(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("out_of_range was thrown in -fno-exceptions mode with message \"%s\"",param_1);
}


// ===== 005f55c4  FUN_005f55c4 =====

void FUN_005f55c4(long *param_1,ulong param_2,undefined4 param_3)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  if (0x7ffffffffffffff6 < param_2) {
    FUN_00621ff8("absl::StringResizeAndOverwrite");
    goto LAB_005f5740;
  }
  uVar6 = (ulong)*(char *)((long)param_1 + 0x17);
  if ((long)uVar6 < 0) {
    uVar6 = param_1[1];
    if (uVar6 < param_2) {
      uVar4 = (ulong)param_1[2] >> 0x38;
      lVar3 = (param_1[2] & 0x7fffffffffffffffU) - 1;
      goto LAB_005f5630;
    }
    plVar7 = (long *)*param_1;
LAB_005f56a4:
    param_1[1] = param_2;
  }
  else if (uVar6 < param_2) {
    lVar3 = 0x16;
    uVar4 = uVar6 & 0xffffffff;
LAB_005f5630:
    if (lVar3 - uVar6 < param_2 - uVar6) {
      FUN_0054774c(param_1,lVar3,param_2 - lVar3,uVar6,uVar6,0,0);
      uVar4 = (ulong)*(byte *)((long)param_1 + 0x17);
      param_1[1] = uVar6;
    }
    plVar7 = (long *)*param_1;
    if ((uVar4 & 0x80) == 0) {
      plVar7 = param_1;
    }
    memset((void *)((long)plVar7 + uVar6),0,param_2 - uVar6);
    if (*(char *)((long)param_1 + 0x17) < '\0') goto LAB_005f56a4;
    *(byte *)((long)param_1 + 0x17) = (byte)param_2 & 0x7f;
  }
  else {
    *(byte *)((long)param_1 + 0x17) = (byte)param_2;
    plVar7 = param_1;
  }
  *(undefined1 *)((long)plVar7 + param_2) = 0;
  plVar7 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar7 = param_1;
  }
  lVar3 = FUN_0062024c(param_3,plVar7);
  uVar6 = lVar3 - (long)plVar7;
  if (uVar6 <= param_2) {
    bVar1 = *(byte *)((long)param_1 + 0x17);
    plVar5 = (long *)*param_1;
    plVar7 = plVar5;
    if ((bVar1 & 0x80) == 0) {
      plVar7 = param_1;
    }
    if (*(char *)((long)plVar7 + param_2) == '\0') {
      if ((char)bVar1 < '\0') {
        if ((ulong)param_1[1] < uVar6) goto LAB_005f5740;
        param_1[1] = uVar6;
      }
      else {
        if (bVar1 < uVar6) {
LAB_005f5740:
                    /* WARNING: Subroutine does not return */
          FUN_005f5590();
        }
        *(char *)((long)param_1 + 0x17) = (char)uVar6;
        plVar5 = param_1;
      }
      *(undefined1 *)((long)plVar5 + uVar6) = 0;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x5f5734);
  (*pcVar2)();
}


// ===== 005f5744  FUN_005f5744 =====

undefined1  [16]
FUN_005f5744(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  uint *puVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  puVar6 = (uint *)*param_5;
  plVar4 = param_2 + 1;
  plVar7 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    uVar1 = *puVar6;
    plVar2 = (long *)*plVar4;
    do {
      while (plVar3 = plVar2, plVar4 = plVar3, uVar1 < *(uint *)(plVar3 + 4)) {
        plVar2 = (long *)*plVar3;
        plVar7 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_005f57ac;
      }
      if (uVar1 == *(uint *)(plVar3 + 4)) {
        uVar5 = 0;
        goto LAB_005f5824;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar7 = plVar3 + 1;
  }
LAB_005f57ac:
  plVar3 = (long *)operator_new(0x48);
  if ((plVar3 == (long *)0x0) || (*plVar3 = 0, plVar3 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar1 = *puVar6;
  plVar3[7] = 0;
  plVar3[8] = 0;
  plVar3[5] = 0x80000000;
  plVar3[6] = 0;
  *(uint *)(plVar3 + 4) = uVar1;
  *plVar3 = 0;
  plVar3[1] = 0;
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
LAB_005f5824:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = plVar3;
  return auVar8;
}


// ===== 005f5854  FUN_005f5854 =====

void FUN_005f5854(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_005f5854(param_1,*param_2);
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


// ===== 005f58c8  FUN_005f58c8 =====

void FUN_005f58c8(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[8] = 0x2ee;
  return;
}


// ===== 005f58e4  FUN_005f58e4 =====

ulong FUN_005f58e4(long param_1,long param_2,long param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = FUN_0088a2f4(param_2,*(undefined4 *)(param_2 + 0x50));
  uVar4 = uVar3;
  if ((uVar3 != 0) && (uVar4 = FUN_0088a2f4(param_3,*(undefined4 *)(param_3 + 0x50)), uVar4 != 0)) {
    iVar2 = ((*(int *)(param_3 + 0x48) +
             (int)(long)((double)(uVar3 & 0xffffffff) / DAT_001f4ff8 + 0.5)) -
            (*(int *)(param_2 + 0x48) +
            (int)(long)((double)(uVar4 & 0xffffffff) / DAT_001f4ff8 + 0.5))) +
            ((int)(uVar3 >> 0x20) - (int)(uVar4 >> 0x20)) * 1000;
    *param_4 = iVar2;
    iVar1 = *(int *)(param_1 + 0x20);
    uVar4 = (ulong)(iVar2 <= iVar1 && iVar2 + iVar1 < 0 == SBORROW4(iVar2,-iVar1));
  }
  return uVar4;
}


// ===== 005f59b0  FUN_005f59b0 =====

bool FUN_005f59b0(undefined4 *param_1,int param_2,int param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined1 uStack_89;
  char *local_88;
  char **ppcStack_80;
  ulong local_78;
  char **ppcStack_70;
  char *local_68;
  undefined8 uStack_60;
  ulong *local_58;
  char *local_50;
  char **ppcStack_48;
  
  uVar4 = *param_5;
  uVar6 = FUN_0044075c();
  if ((uVar6 & 1) == 0) {
    local_58 = &local_78;
    local_68 = "../../video/stream_synchronization.cc";
    uStack_60 = 0x240;
    ppcStack_48 = &local_68;
    local_50 = "Audio delay: ";
    FUN_00623bb0(&DAT_001fbf6e,"../../video/stream_synchronization.cc",0x240,"Audio delay: ",param_3
                 ," current diff: ",param_2," for stream ",param_1[1]);
  }
  iVar8 = (param_2 - param_3) + uVar4 + param_1[7] * 3;
  iVar2 = iVar8 + 3;
  if (-1 < iVar8) {
    iVar2 = iVar8;
  }
  uVar4 = (iVar2 >> 2) - 0x1e;
  param_1[7] = iVar2 >> 2;
  if (0xffffffc4 < uVar4) goto LAB_005f5bc4;
  iVar2 = iVar8 + 7;
  if (-1 < iVar8) {
    iVar2 = iVar8;
  }
  param_1[7] = 0;
  iVar2 = iVar2 >> 3;
  if (iVar2 == -0x50 || iVar2 + 0x50 < 0 != SCARRY4(iVar2,0x50)) {
    iVar2 = -0x50;
  }
  if (0x4f < iVar2) {
    iVar2 = 0x50;
  }
  uVar5 = param_1[6];
  if (iVar8 < 8) {
    iVar8 = param_1[2];
    if ((int)uVar5 < iVar8) goto LAB_005f5acc;
    iVar8 = param_1[4];
LAB_005f5adc:
    uVar9 = iVar8 - iVar2;
    uVar7 = uVar5;
  }
  else {
    iVar8 = param_1[4];
    if ((int)uVar5 < iVar8) goto LAB_005f5adc;
    iVar8 = param_1[2];
LAB_005f5acc:
    uVar9 = uVar5;
    uVar7 = iVar8 + iVar2;
  }
  uVar1 = param_1[8] + uVar5;
  uVar3 = uVar1;
  if ((int)uVar9 <= (int)uVar1) {
    uVar3 = uVar9;
  }
  if ((int)uVar7 <= (int)uVar1) {
    uVar1 = uVar7;
  }
  uVar9 = uVar3;
  if ((int)uVar3 <= (int)uVar5) {
    uVar9 = uVar5;
  }
  param_1[2] = uVar1;
  param_1[4] = uVar9;
  uVar7 = uVar9;
  if (((int)uVar3 <= (int)uVar5) && (uVar7 = param_1[5], (int)param_1[5] <= (int)uVar9)) {
    uVar7 = uVar9;
  }
  uVar9 = uVar1;
  if (((int)uVar1 <= (int)uVar5) && (uVar9 = param_1[3], (int)param_1[3] <= (int)uVar1)) {
    uVar9 = uVar1;
  }
  param_1[5] = uVar7;
  param_1[3] = uVar9;
  uVar6 = FUN_0044075c();
  if ((uVar6 & 1) == 0) {
    local_68 = "../../video/stream_synchronization.cc";
    uStack_60 = 0x558;
    local_58 = (ulong *)&uStack_89;
    ppcStack_80 = &local_68;
    local_88 = "Sync video delay ";
    local_78 = (ulong)uVar7;
    ppcStack_70 = &local_88;
    ppcStack_48 = (char **)&local_78;
    local_50 = " for video stream ";
    FUN_00623bb0(&DAT_001fbf76,"../../video/stream_synchronization.cc",0x558,"Sync video delay ",
                 uVar7," for video stream ",*param_1," and audio delay ",param_1[2],
                 " for audio stream ",param_1[1]);
  }
  *param_5 = uVar7;
  *param_4 = uVar9;
LAB_005f5bc4:
  return uVar4 < 0xffffffc5;
}


// ===== 005f5be8  FUN_005f5be8 =====

void FUN_005f5be8(long param_1)

{
  *(int *)(param_1 + 8) = (int)((float)*(int *)(param_1 + 8) * 0.9);
  return;
}


// ===== 005f5c10  FUN_005f5c10 =====

void FUN_005f5c10(long param_1)

{
  *(int *)(param_1 + 0x10) = (int)((float)*(int *)(param_1 + 0x10) * 0.9);
  return;
}


// ===== 005f5c38  FUN_005f5c38 =====

/* WARNING: Removing unreachable block (ram,0x005f6090) */

void FUN_005f5c38(undefined8 *param_1,long *param_2,long *param_3,undefined4 param_4,
                 undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,long param_10)

{
  undefined8 *puVar1;
  ulong ***pppuVar2;
  ulong ****ppppuVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  undefined8 ****ppppuVar7;
  undefined8 uVar8;
  ulong uVar9;
  void *pvVar10;
  undefined8 ***pppuVar11;
  void *pvVar12;
  long *plVar13;
  long lVar14;
  undefined8 ****ppppuVar15;
  long *plVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined8 ****ppppuVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  undefined8 ***local_a8;
  undefined8 ***local_a0;
  long local_98;
  long *local_90;
  long *local_88;
  ulong ***local_80;
  ulong **local_78;
  ulong local_70;
  ulong ***local_68;
  
  param_1[2] = &PTR_FUN_00d26e78;
  param_1[3] = &PTR_FUN_00d26ea0;
  *param_1 = &PTR_FUN_00d26d38;
  param_1[1] = &PTR_FUN_00d26e40;
  param_1[4] = &PTR_FUN_00d26ee8;
  param_1[5] = &PTR_FUN_00d26f10;
  param_1[6] = &PTR_FUN_00d26f40;
  lVar14 = *param_2;
  plVar13 = param_1 + 7;
  *plVar13 = lVar14;
  if (lVar14 != 0) {
    FUN_00d0f740(1,lVar14 + 8);
  }
  lVar22 = param_2[4];
  lVar14 = param_2[3];
  lVar23 = param_2[1];
  param_1[9] = param_2[2];
  param_1[8] = lVar23;
  param_1[0xb] = lVar22;
  param_1[10] = lVar14;
  FUN_00660fac(param_1 + 0xc);
  FUN_005fac58(param_1 + 0xe,*(undefined8 *)(param_6 + 0x80));
  FUN_00846884(param_1 + 0x11,param_6);
  *(undefined4 *)(param_1 + 0x30) = param_4;
  param_1[0x31] = param_3;
  param_1[0x32] = param_7;
  *(undefined2 *)(param_1 + 0x33) = 0x100;
  FUN_008742fc(param_1 + 0x34,param_1[9]);
  uVar17 = *(undefined4 *)(param_1 + 0x15);
  uVar21 = param_1[9];
  uVar8 = (**(code **)(*param_3 + 0xd8))(param_3);
  FUN_005fad00(param_1 + 0x48,uVar17,uVar21,uVar8);
  uVar8 = FUN_00851b98(param_1[9]);
  param_1[0x113] = uVar8;
  param_1[0x114] = param_8;
  FUN_00940050(param_1 + 0x115,param_1[9],param_8,param_1[8],param_1 + 6);
  param_1[0x137] = 0;
  uVar8 = (**(code **)(*param_3 + 0xd8))(param_3);
  uVar21 = param_1[0x113];
  local_88 = (long *)param_1[0x27];
  puVar4 = (undefined8 *)0x0;
  if (param_1 != (undefined8 *)0xfffffffffffffdc0) {
    puVar4 = param_1 + 0x4a;
  }
  puVar1 = (undefined8 *)0x0;
  if (param_1 != (undefined8 *)0xfffffffffffffdc0) {
    puVar1 = param_1 + 0x49;
  }
  if (local_88 != (long *)0x0) {
    (**(code **)*local_88)();
  }
  local_90 = (long *)param_1[0x2c];
  if (local_90 != (long *)0x0) {
    (**(code **)*local_90)();
  }
  FUN_006043b4(param_1 + 0x138,plVar13,uVar8,param_1 + 0xe,param_7,param_5,param_1 + 0x11,uVar21,
               puVar4,puVar1,param_9,param_1 + 2,&local_88,&local_90);
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 8))();
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 8))();
  }
  param_1[0x1f1] = 0;
  uVar8 = (**(code **)(*param_3 + 0xd8))(param_3);
  FUN_005f1f58(param_1 + 0x1f2,plVar13,uVar8,param_1 + 3);
  *(undefined1 *)((long)param_1 + 0x10bc) = 0;
  param_1[0x218] = 0;
  *(undefined1 *)(param_1 + 0x217) = 0;
  *(undefined1 *)(param_1 + 0x21a) = 0;
  param_1[0x214] = 0;
  param_1[0x213] = 0;
  param_1[0x216] = 0;
  param_1[0x215] = 0;
  *(undefined2 *)(param_1 + 0x219) = 1;
  uVar5 = *(uint *)(param_1 + 0x16);
  *(undefined1 *)(param_1 + 0x21b) = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  if ((int)uVar5 < 1) {
    param_1[0x21d] = 200000;
    uVar9 = 3000000;
  }
  else {
    lVar14 = (ulong)uVar5 * 1000;
    if (999 < uVar5) {
      lVar14 = 200000;
    }
    param_1[0x21d] = lVar14;
    uVar9 = (ulong)uVar5 * 3000;
    if (2999999 < (ulong)uVar5 * 3000) {
      uVar9 = 3000000;
    }
  }
  param_1[0x21e] = uVar9;
  param_1[0x229] = FUN_005fa1bc;
  param_1[0x22a] = &DAT_001fbc50;
  *(undefined1 *)(param_1 + 0x21f) = 0;
  *(undefined1 *)(param_1 + 0x220) = 0;
  *(undefined1 *)(param_1 + 0x221) = 0;
  *(undefined1 *)(param_1 + 0x222) = 0;
  *(undefined1 *)(param_1 + 0x223) = 0;
  *(undefined1 *)(param_1 + 0x224) = 0;
  *(undefined1 *)(param_1 + 0x225) = 0;
  *(undefined1 *)(param_1 + 0x226) = 0;
  *(undefined1 *)(param_1 + 0x22b) = 0;
  local_80 = (ulong ***)&DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_80);
  pthread_mutex_init((pthread_mutex_t *)((long)param_1 + 0x115c),(pthread_mutexattr_t *)&local_80);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_80);
  *(undefined1 *)((long)param_1 + 0x1184) = 0;
  *(undefined1 *)((long)param_1 + 0x118c) = 0;
  puVar4 = (undefined8 *)0x0;
  if (param_1 != (undefined8 *)0xfffffffffffffdc0) {
    puVar4 = param_1 + 0x4b;
  }
  param_1[0x232] = 0;
  param_1[0x234] = 0;
  param_1[0x233] = 0;
  uVar8 = FUN_009449f0(puVar4);
  param_1[0x235] = uVar8;
  FUN_007ebca0(param_1 + 0x236);
  plVar16 = (long *)param_1[10];
  (**(code **)(*(long *)param_1[8] + 0x10))
            (&local_80,(long *)param_1[8],"WebRTC-MediaTaskQueuePriorities",0x1f);
  uVar17 = 1;
  pppuVar2 = (ulong ***)local_78;
  if (-1 < (long)local_70) {
    pppuVar2 = (ulong ***)(local_70 >> 0x38);
  }
  if ((ulong ***)0x6 < pppuVar2) {
    ppppuVar3 = (ulong ****)local_80;
    if (-1 < (long)local_70) {
      ppppuVar3 = &local_80;
    }
    uVar17 = 1;
    if (*(int *)ppppuVar3 == 0x62616e45 && *(int *)((long)ppppuVar3 + 3) == 0x64656c62) {
      uVar17 = 2;
    }
  }
  if ((long)local_70 < 0) {
    operator_delete(local_80);
  }
  uVar8 = (**(code **)(*plVar16 + 0x10))(plVar16,"VideoDecoderQueue",0x11,uVar17);
  *(undefined1 *)(param_1 + 0x238) = 0;
  param_1[0x237] = uVar8;
  *(undefined1 *)((long)param_1 + 0x11c4) = 0;
  uVar9 = FUN_00417e08();
  if ((uVar9 & 1) == 0) {
    FUN_00846c3c(&local_80,param_1 + 0x11);
    FUN_00623bb0(&DAT_001f4e90,"../../video/video_receive_stream2.cc",0x889,"VideoReceiveStream2: ",
                 &local_80);
  }
  if (param_1[0x14] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../video/video_receive_stream2.cc",0x118,"config_.decoder_factory",
                 &DAT_001f5fa0);
  }
  lVar14 = param_1[0x11];
  lVar22 = param_1[0x12];
  local_a0 = (undefined8 ****)0x0;
  local_98 = 0;
  local_a8 = &local_a0;
  do {
    if (lVar14 == lVar22) {
      FUN_00947144(param_1[0x114],(long)*(int *)(param_1 + 0x23) * 1000);
      if (param_10 == 0) {
        uVar21 = param_1[9];
        uVar8 = (**(code **)(*(long *)param_1[0x31] + 0xd8))();
        pvVar10 = operator_new(0x30);
        FUN_009519fc(pvVar10,uVar21,uVar8);
      }
      else {
        pvVar10 = (void *)FUN_0094c484(param_10);
      }
      uVar21 = param_1[9];
      uVar8 = (**(code **)(*(long *)param_1[0x31] + 0xd8))();
      uVar18 = param_1[0x114];
      uVar20 = param_1[8];
      pvVar12 = operator_new(0x438);
      puVar4 = (undefined8 *)0x0;
      if (param_1 != (undefined8 *)0x0) {
        puVar4 = param_1 + 5;
      }
      FUN_00951fe8(pvVar12,uVar21,uVar8,uVar18,param_1 + 0x48,puVar4,param_1[0x21d],param_1[0x21e],
                   pvVar10,uVar20);
      plVar16 = (long *)param_1[0x213];
      param_1[0x213] = pvVar12;
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 8))();
      }
      if (param_1[0x1d] == 0) {
        (**(code **)(*(long *)param_1[0x113] + 0x28))
                  ((long *)param_1[0x113],*(undefined4 *)(param_1 + 0x15),1);
      }
      else {
        uVar17 = *(undefined4 *)(param_1 + 0x15);
        uVar8 = param_1[0x113];
        pvVar10 = operator_new(0x68);
        local_78 = (ulong **)0x0;
        local_70 = 0;
        local_80 = &local_78;
        local_78 = (ulong **)FUN_005fa240(&local_80,param_1[0x1c],&local_80);
        ((ulong ***)local_78)[2] = (ulong **)&local_78;
        pppuVar2 = (ulong ***)local_78;
        do {
          local_80 = pppuVar2;
          pppuVar2 = (ulong ***)*local_80;
        } while ((ulong ***)*local_80 != (ulong ***)0x0);
        local_70 = param_1[0x1d];
        puVar4 = (undefined8 *)0x0;
        if (param_1 != (undefined8 *)0xfffffffffffff640) {
          puVar4 = param_1 + 0x13a;
        }
        FUN_0089dcd4(pvVar10,plVar13,puVar4,&local_80,uVar17,uVar8);
        local_68 = (ulong ***)&local_80;
        FUN_005fa2f8(&local_68,local_78);
        plVar13 = (long *)param_1[0x216];
        param_1[0x216] = pvVar10;
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 8))();
        }
      }
      local_80 = (ulong ***)&local_a8;
      FUN_005fa1cc(&local_80,local_a0);
      return;
    }
    ppppuVar15 = &local_a0;
    ppppuVar19 = &local_a0;
    if ((undefined8 ****)local_a0 != (undefined8 ****)0x0) {
      iVar6 = *(int *)(lVar14 + 0x60);
      ppppuVar15 = (undefined8 ****)local_a0;
      do {
        while (iVar6 < *(int *)((long)ppppuVar15 + 0x1c)) {
          ppppuVar15 = (undefined8 ****)*ppppuVar15;
          if (ppppuVar15 == (undefined8 ****)0x0) goto LAB_005f6158;
        }
        if (iVar6 == *(int *)((long)ppppuVar15 + 0x1c)) {
          if (ppppuVar15 != &local_a0) {
                    /* WARNING: Subroutine does not return */
            FUN_0061fd88("../../video/video_receive_stream2.cc",0x11c,
                         "decoder_payload_types.find(decoder.payload_type) == decoder_payload_types.end()"
                         ,&DAT_001fc260,"Duplicate payload type (",iVar6,") for different decoders."
                        );
          }
          break;
        }
        ppppuVar15 = (undefined8 ****)ppppuVar15[1];
      } while (ppppuVar15 != (undefined8 ****)0x0);
LAB_005f6158:
      ppppuVar7 = (undefined8 ****)local_a0;
      do {
        while (ppppuVar15 = ppppuVar7, *(int *)(lVar14 + 0x60) < *(int *)((long)ppppuVar15 + 0x1c))
        {
          ppppuVar7 = (undefined8 ****)*ppppuVar15;
          ppppuVar19 = ppppuVar15;
          if ((undefined8 ****)*ppppuVar15 == (undefined8 ****)0x0) goto LAB_005f618c;
        }
        if (*(int *)(lVar14 + 0x60) == *(int *)((long)ppppuVar15 + 0x1c)) goto LAB_005f6104;
        ppppuVar7 = (undefined8 ****)ppppuVar15[1];
      } while ((undefined8 ****)ppppuVar15[1] != (undefined8 ****)0x0);
      ppppuVar19 = ppppuVar15 + 1;
    }
LAB_005f618c:
    pppuVar11 = (undefined8 ***)operator_new(0x20);
    if (pppuVar11 == (undefined8 ***)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar17 = *(undefined4 *)(lVar14 + 0x60);
    *pppuVar11 = (undefined8 **)0x0;
    pppuVar11[1] = (undefined8 **)0x0;
    pppuVar11[2] = ppppuVar15;
    *(undefined4 *)((long)pppuVar11 + 0x1c) = uVar17;
    *ppppuVar19 = pppuVar11;
    if ((undefined8 ****)*local_a8 != (undefined8 ****)0x0) {
      pppuVar11 = *ppppuVar19;
      local_a8 = (undefined8 ***)*local_a8;
    }
    FUN_005d5b94(local_a0,pppuVar11);
    local_98 = local_98 + 1;
LAB_005f6104:
    lVar14 = lVar14 + 0x68;
  } while( true );
}


// ===== 005f63d4  FUN_005f63d4 =====

void FUN_005f63d4(long *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  void *pvVar7;
  void *local_48 [2];
  char cStack_31;
  
  *param_1 = (long)&PTR_FUN_00d26d38;
  param_1[1] = (long)&PTR_FUN_00d26e40;
  param_1[2] = (long)&PTR_FUN_00d26e78;
  param_1[3] = (long)&PTR_FUN_00d26ea0;
  param_1[4] = (long)&PTR_FUN_00d26ee8;
  param_1[5] = (long)&PTR_FUN_00d26f10;
  param_1[6] = (long)&PTR_FUN_00d26f40;
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00846c3c(local_48,param_1 + 0x11);
    FUN_00623bb0(&DAT_001f4e90,"../../video/video_receive_stream2.cc",0x9c9,"~VideoReceiveStream2: "
                 ,local_48);
    if (cStack_31 < '\0') {
      operator_delete(local_48[0]);
    }
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  puVar3 = (undefined8 *)param_1[0x237];
  param_1[0x237] = 0;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)();
  }
  FUN_007ebdcc(param_1[0x236]);
  pvVar7 = (void *)param_1[0x236];
  if ((pvVar7 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar7), iVar1 == 1)) {
    operator_delete(pvVar7);
  }
  plVar4 = (long *)param_1[0x235];
  param_1[0x235] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = (long *)param_1[0x232];
  if (plVar4 != (long *)0x0) {
    plVar6 = (long *)param_1[0x233];
    plVar5 = plVar4;
    if (plVar4 != plVar6) {
      do {
        plVar6 = plVar6 + -1;
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        plVar5 = (long *)*plVar6;
        *plVar6 = 0;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 8))();
        }
      } while (plVar6 != plVar4);
      plVar5 = (long *)param_1[0x232];
    }
    param_1[0x233] = (long)plVar4;
    operator_delete(plVar5);
  }
  pthread_mutex_destroy((pthread_mutex_t *)((long)param_1 + 0x115c));
  if (*(code **)(param_1[0x22a] + 8) != (code *)0x0) {
    (**(code **)(param_1[0x22a] + 8))(param_1[0x227]);
  }
  plVar4 = (long *)param_1[0x218];
  param_1[0x218] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = (long *)param_1[0x216];
  param_1[0x216] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = (long *)param_1[0x215];
  param_1[0x215] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = (long *)param_1[0x213];
  param_1[0x213] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  FUN_005f2098(param_1 + 0x1f2);
  plVar4 = (long *)param_1[0x1f1];
  param_1[0x1f1] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x30))();
  }
  FUN_00604bb4(param_1 + 0x138);
  plVar4 = (long *)param_1[0x137];
  param_1[0x137] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  FUN_00940090(param_1 + 0x115);
  plVar4 = (long *)param_1[0x114];
  param_1[0x114] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = (long *)param_1[0x113];
  param_1[0x113] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  FUN_005faeb8(param_1 + 0x48);
  FUN_005daa6c(param_1 + 0x34);
  FUN_00846ac4(param_1 + 0x11);
  FUN_005fac70(param_1 + 0xe);
  plVar4 = (long *)param_1[7];
  if ((plVar4 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar4 + 1), iVar1 == 1)) {
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  FUN_008425a0(param_1 + 3);
  return;
}


// ===== 005f66c0  FUN_005f66c0 =====

void FUN_005f66c0(long param_1)

{
  FUN_005f63d4(param_1 + -8);
  return;
}


// ===== 005f66cc  FUN_005f66cc =====

void FUN_005f66cc(long param_1)

{
  FUN_005f63d4(param_1 + -0x10);
  return;
}


// ===== 005f66d8  FUN_005f66d8 =====

void FUN_005f66d8(long param_1)

{
  FUN_005f63d4(param_1 + -0x18);
  return;
}


// ===== 005f66e4  FUN_005f66e4 =====

void FUN_005f66e4(long param_1)

{
  FUN_005f63d4(param_1 + -0x20);
  return;
}


// ===== 005f66f0  FUN_005f66f0 =====

void FUN_005f66f0(long param_1)

{
  FUN_005f63d4(param_1 + -0x28);
  return;
}


// ===== 005f66fc  FUN_005f66fc =====

void FUN_005f66fc(long param_1)

{
  FUN_005f63d4(param_1 + -0x30);
  return;
}


// ===== 005f6708  FUN_005f6708 =====

void FUN_005f6708(void *param_1)

{
  FUN_005f63d4();
  operator_delete(param_1);
  return;
}


// ===== 005f6738  FUN_005f6738 =====

void FUN_005f6738(long param_1)

{
  FUN_005f63d4((void *)(param_1 + -8));
  operator_delete((void *)(param_1 + -8));
  return;
}


// ===== 005f676c  FUN_005f676c =====

void FUN_005f676c(long param_1)

{
  FUN_005f63d4((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}


// ===== 005f67a0  FUN_005f67a0 =====

void FUN_005f67a0(long param_1)

{
  FUN_005f63d4((void *)(param_1 + -0x18));
  operator_delete((void *)(param_1 + -0x18));
  return;
}


// ===== 005f67d4  FUN_005f67d4 =====

void FUN_005f67d4(long param_1)

{
  FUN_005f63d4((void *)(param_1 + -0x20));
  operator_delete((void *)(param_1 + -0x20));
  return;
}


// ===== 005f6808  FUN_005f6808 =====

void FUN_005f6808(long param_1)

{
  FUN_005f63d4((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}


// ===== 005f683c  FUN_005f683c =====

void FUN_005f683c(long param_1)

{
  FUN_005f63d4((void *)(param_1 + -0x30));
  operator_delete((void *)(param_1 + -0x30));
  return;
}


// ===== 005f6870  FUN_005f6870 =====

void FUN_005f6870(long param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  *(long **)(param_1 + 0x10a0) = param_2;
  lVar1 = 0;
  if (param_1 != -0x9c0) {
    lVar1 = param_1 + 0x9d0;
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,*(undefined4 *)(param_1 + 0xa8),lVar1);
  plVar3 = *(long **)(param_1 + 0x10a8);
  *(undefined8 *)(param_1 + 0x10a8) = uVar2;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  lVar1 = 0x10b8;
  if (*(char *)(param_1 + 0x10bc) == '\0') {
    lVar1 = 0xc4;
  }
  if ((*(int *)(param_1 + lVar1) != 0) && (*(long *)(param_1 + 0x10b0) != 0)) {
    uVar2 = (**(code **)(*param_2 + 0x10))(param_2);
    plVar3 = *(long **)(param_1 + 0x10c0);
    *(undefined8 *)(param_1 + 0x10c0) = uVar2;
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005f6924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3);
      return;
    }
  }
  return;
}


// ===== 005f6938  FUN_005f6938 =====

void FUN_005f6938(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10a8);
  *(undefined8 *)(param_1 + 0x10a8) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x10c0);
  *(undefined8 *)(param_1 + 0x10c0) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined8 *)(param_1 + 0x10a0) = 0;
  return;
}


// ===== 005f6990  FUN_005f6990 =====

long FUN_005f6990(long param_1)

{
  return param_1 + 0x120;
}


// ===== 005f699c  FUN_005f699c =====

void FUN_005f699c(long param_1)

{
  FUN_00609c38(param_1 + 0x9c0);
  return;
}


// ===== 005f69a8  FUN_005f69a8 =====

void FUN_005f69a8(long param_1)

{
  FUN_00609878(param_1 + 0x9c0);
  return;
}


// ===== 005f69b4  FUN_005f69b4 =====

void FUN_005f69b4(long param_1)

{
  FUN_005f2200(param_1 + 0xf90);
  return;
}


// ===== 005f69c0  FUN_005f69c0 =====

void FUN_005f69c0(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0xac) == param_2) {
    return;
  }
  *(int *)(param_1 + 0xac) = param_2;
  FUN_00609044(param_1 + 0x9c0);
  return;
}


// ===== 005f69e4  FUN_005f69e4 =====

/* WARNING: Removing unreachable block (ram,0x005f6a28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005f69e4(undefined1 *param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  undefined8 ****ppppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  long *plVar12;
  void *pvVar13;
  undefined8 uVar14;
  long lVar15;
  undefined1 *local_158;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 ***local_128;
  ulong uStack_120;
  byte bStack_111;
  undefined1 **local_110;
  undefined1 **local_108;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  undefined1 *local_c0;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  code *local_a0;
  code *pcStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  
  if ((param_1[0x198] & 1) == 0) {
    if ((((param_1[200] & 1) != 0) || (iVar10 = FUN_00609294(param_1 + 0x9c0), iVar10 != -1)) &&
       (0 < *(int *)(param_1 + 0xb0))) {
      FUN_00952264(*(undefined8 *)(param_1 + 0x1098),1);
    }
    FUN_005facdc(param_1 + 0x70);
    if (param_1[0x11c] == '\x01') {
      local_158 = (undefined1 *)operator_new(0x88);
      puVar2 = (undefined1 *)0x0;
      if (param_1 != (undefined1 *)0x0) {
        puVar2 = param_1 + 8;
      }
      FUN_009927b8(local_158,param_1 + 0x38,*(undefined4 *)(param_1 + 0x118),puVar2);
      plVar12 = *(long **)(param_1 + 0x9b8);
      *(undefined1 **)(param_1 + 0x9b8) = local_158;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 8))();
        local_158 = *(undefined1 **)(param_1 + 0x9b8);
      }
    }
    else {
      local_158 = param_1 + 8;
    }
    uVar8 = _UNK_001f1d08;
    uVar7 = _DAT_001f1d00;
    lVar15 = *(long *)(param_1 + 0x88);
    lVar4 = *(long *)(param_1 + 0x90);
    if (lVar15 != lVar4) {
      puVar1 = PTR_DAT_00d51ff8 + 0x10;
      do {
        local_140 = 0xaaaaaa00aaaaaa00;
        uStack_130 = uVar8;
        local_138 = uVar7;
        uVar11 = FUN_007b8cec(lVar15);
        uStack_130 = CONCAT44(uVar11,(undefined4)uStack_130);
        plVar12 = *(long **)(param_1 + 0x40);
        local_70 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
        local_b0 = &DAT_aaaaaaaaaaaaaaaa;
        pcStack_98 = (code *)&DAT_aaaaaaaaaaaaaaaa;
        local_a0 = (code *)&DAT_aaaaaaaaaaaaaaaa;
        puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
        local_90 = &DAT_aaaaaaaaaaaaaaaa;
        uStack_78 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
        FUN_00661054(&local_b0,&DAT_001d0acb,1);
        uStack_78._0_5_ = (uint5)(uint)uStack_78;
        local_70 = (undefined1 *)((ulong)local_70 & 0xffffffffffffff00);
        local_c0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
        local_100 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_f0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
        local_e0 = &DAT_aaaaaaaaaaaaaaaa;
        uStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
        local_b0 = puVar1;
        FUN_00661054(&local_100,&DAT_001d9535,1);
        local_110 = &local_b0;
        uStack_c8._0_5_ = (uint5)(uint)uStack_c8;
        local_108 = &local_100;
        local_c0 = (undefined1 *)((ulong)local_c0 & 0xffffffffffffff00);
        local_100 = puVar1;
        (**(code **)(*plVar12 + 0x10))
                  (&local_128,plVar12,"WebRTC-Video-InitialDecoderResolution",0x25);
        uVar3 = uStack_120;
        ppppuVar6 = (undefined8 ****)local_128;
        if (-1 < (char)bStack_111) {
          uVar3 = (ulong)bStack_111;
          ppppuVar6 = &local_128;
        }
        FUN_00661cc0(&local_110,2,ppppuVar6,uVar3);
        if ((char)bStack_111 < '\0') {
          operator_delete(local_128);
        }
        uVar9 = uStack_78._4_4_;
        uVar11 = uStack_c8._4_4_;
        bVar5 = (byte)local_70 & (byte)local_c0;
        FUN_006634ac(&local_100);
        FUN_006634ac(&local_b0);
        local_138 = CONCAT44(uVar11,uVar9);
        if ((bVar5 & 1) == 0) {
          local_138 = 0xb400000140;
        }
        FUN_007b9310(&local_140,*(undefined4 *)(param_1 + 0x180));
        iVar10 = *(int *)(lVar15 + 0x60);
        for (plVar12 = *(long **)(param_1 + 0xf8); plVar12 != (long *)0x0;
            plVar12 = (long *)*plVar12) {
          if (*(int *)((long)plVar12 + 0x1c) <= iVar10) {
            if (iVar10 == *(int *)((long)plVar12 + 0x1c)) {
              uVar14 = 1;
              goto LAB_005f6af8;
            }
            plVar12 = plVar12 + 1;
          }
        }
        uVar14 = 0;
LAB_005f6af8:
        FUN_006052a0(param_1 + 0x9c0,iVar10,uStack_130._4_4_,lVar15 + 0x18,uVar14);
        FUN_009402b4(param_1 + 0x8a8,*(undefined4 *)(lVar15 + 0x60),&local_140);
        lVar15 = lVar15 + 0x68;
      } while (lVar15 != lVar4);
    }
    pvVar13 = operator_new(0x20);
    FUN_0061ef8c(pvVar13,param_1 + 0x8a8,param_1 + 0x240,local_158);
    plVar12 = *(long **)(param_1 + 0xf88);
    *(void **)(param_1 + 0xf88) = pvVar13;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x30))();
    }
    FUN_005f1a28(*(undefined8 *)(param_1 + 400),param_1 + 0x20);
    FUN_005ff0a8(param_1 + 0x240);
    local_a0 = FUN_004473ec;
    pcStack_98 = FUN_005fa36c;
    local_b0 = param_1;
    (**(code **)(**(long **)(param_1 + 0x11b8) + 8))
              (*(long **)(param_1 + 0x11b8),&local_b0,&local_100,&local_128);
    (*local_a0)(0,&local_b0,&local_b0);
    FUN_009525f0(*(undefined8 *)(param_1 + 0x1098),1);
    param_1[0x198] = 1;
    FUN_00609c5c(param_1 + 0x9c0);
  }
  return;
}


// ===== 005f6d5c  FUN_005f6d5c =====

void FUN_005f6d5c(long param_1)

{
  long *plVar1;
  undefined1 uStack_a1;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 uStack_41;
  long local_40;
  undefined1 **ppuStack_38;
  code *local_30;
  code *pcStack_28;
  
  FUN_00609cf0(param_1 + 0x9c0);
  FUN_005fd8b4(param_1 + 0x240,*(undefined4 *)(param_1 + 0xca8));
  FUN_00952224(*(undefined8 *)(param_1 + 0x1098));
  FUN_005f1ad4(*(undefined8 *)(param_1 + 400),param_1 + 0x20);
  if (*(char *)(param_1 + 0x198) == '\x01') {
    puStack_4c = &DAT_aaaaaaaaaaaaaaaa;
    uStack_50 = 0xaaaaaaaa;
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_58 = 0xaaaaaaaa;
    local_54 = 0xaaaaaaaa;
    puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
    local_a0 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_0066f1ac(&local_a0);
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_005fa37c;
    local_40 = param_1;
    ppuStack_38 = &local_a0;
    (**(code **)(**(long **)(param_1 + 0x11b8) + 8))
              (*(long **)(param_1 + 0x11b8),&local_40,&uStack_41,&uStack_a1);
    (*local_30)(0,&local_40,&local_40);
    FUN_0066f318(&local_a0,0x7fffffffffffffff,3000000);
    *(undefined1 *)(param_1 + 0x198) = 0;
    FUN_005ff0b0(param_1 + 0x240);
    FUN_005f6e9c(param_1);
    FUN_0066f2b0(&local_a0);
  }
  FUN_006055b0(param_1 + 0x9c0);
  FUN_009402c0(param_1 + 0x8a8);
  plVar1 = *(long **)(param_1 + 0xf88);
  *(undefined8 *)(param_1 + 0xf88) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  plVar1 = *(long **)(param_1 + 0x9b8);
  *(undefined8 *)(param_1 + 0x9b8) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_005facf0(param_1 + 0x70);
  return;
}


// ===== 005f6e9c  FUN_005f6e9c =====

void FUN_005f6e9c(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined1 **ppuVar4;
  undefined1 *local_190;
  undefined1 *puStack_188;
  undefined1 *local_180;
  undefined1 *puStack_178;
  undefined1 *local_170;
  undefined1 *puStack_168;
  undefined1 *local_160;
  undefined1 *puStack_158;
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
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  
  ppuVar4 = &local_190;
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
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007ccda0(&local_e0);
  plVar2 = (long *)(**(code **)(**(long **)(param_1 + 0x898) + 0x18))
                             (*(long **)(param_1 + 0x898),*(undefined4 *)(param_1 + 0xa8));
  if (plVar2 == (long *)0x0) {
    uVar3 = 0xaaaaaa00aaaaaa00;
  }
  else {
    uVar3 = (**(code **)(*plVar2 + 0x18))();
    (**(code **)(*plVar2 + 0x20))(&local_190,plVar2);
    uVar3 = uVar3 & 0xffffffffff | 0xaaaaaa0000000000;
    puStack_58 = puStack_108;
    local_60 = local_110;
    puStack_48 = puStack_f8;
    local_50 = local_100;
    puStack_38 = puStack_e8;
    local_40 = local_f0;
    puStack_98 = puStack_148;
    local_a0 = local_150;
    puStack_88 = puStack_138;
    local_90 = local_140;
    puStack_78 = puStack_128;
    local_80 = local_130;
    puStack_68 = puStack_118;
    local_70 = local_120;
    puStack_d8 = puStack_188;
    local_e0 = local_190;
    puStack_c8 = puStack_178;
    local_d0 = local_180;
    puStack_b8 = puStack_168;
    local_c0 = local_170;
    puStack_a8 = puStack_158;
    local_b0 = local_160;
  }
  lVar1 = 0x10b8;
  if (*(char *)(param_1 + 0x10bc) == '\0') {
    lVar1 = 0xc4;
  }
  if ((*(int *)(param_1 + lVar1) == 0) ||
     (plVar2 = (long *)(**(code **)(**(long **)(param_1 + 0x898) + 0x18))(), plVar2 == (long *)0x0))
  {
    ppuVar4 = (undefined1 **)0x0;
  }
  else {
    puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
    local_180 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
    local_170 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
    local_160 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
    local_150 = &DAT_aaaaaaaaaaaaaaaa;
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
    puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
    local_190 = &DAT_aaaaaaaaaaaaaaaa;
    (**(code **)(*plVar2 + 0x20))(&local_190);
  }
  FUN_005fb0d0(param_1 + 0x240,uVar3,&local_e0,ppuVar4);
  return;
}


// ===== 005f7004  FUN_005f7004 =====

void FUN_005f7004(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xb4) = param_2;
  FUN_00609050(param_1 + 0x9c0);
  return;
}


// ===== 005f7018  FUN_005f7018 =====

void FUN_005f7018(long param_1,long param_2)

{
  FUN_00609068(param_1 + 0x9c0);
  *(long *)(param_1 + 0xd0) = param_2;
  *(bool *)(param_1 + 200) = param_2 != 0;
  return;
}


// ===== 005f7058  FUN_005f7058 =====

void FUN_005f7058(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xba) = param_2;
  FUN_00609074(param_1 + 0x9c0);
  return;
}


// ===== 005f706c  FUN_005f706c =====

void FUN_005f706c(long param_1,ulong param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  
  if ((long)param_2 < 0) {
    uVar4 = -(-param_2 / 1000) - (ulong)(500 < -param_2 % 1000);
  }
  else {
    uVar4 = (param_2 >> 3) / 0x7d;
    if (499 < param_2 + uVar4 * -1000) {
      uVar4 = uVar4 + 1;
    }
  }
  if (uVar4 != (long)*(int *)(param_1 + 0xb0)) {
    *(int *)(param_1 + 0xb0) = (int)uVar4;
    if ((*(byte *)(param_1 + 200) & 1) == 0) {
      iVar3 = FUN_00609294(param_1 + 0x9c0);
      bVar2 = iVar3 != -1;
    }
    else {
      bVar2 = true;
    }
    uVar4 = (param_2 >> 3) / 0x7d;
    if (499 < param_2 + uVar4 * -1000) {
      uVar4 = uVar4 + 1;
    }
    if ((param_2 & 0x8000000000000000) != 0) {
      uVar4 = -(-param_2 / 1000) - (ulong)(500 < -param_2 % 1000);
    }
    bVar1 = false;
    if (0 < (long)uVar4) {
      bVar1 = bVar2;
    }
    FUN_00952264(*(undefined8 *)(param_1 + 0x1098),bVar1);
    FUN_0060912c(param_1 + 0x9c0,param_2);
    uVar4 = 200000;
    lVar5 = 3000000;
    if (0 < (long)param_2) {
      uVar4 = param_2;
      lVar5 = param_2 * 3;
      if (2999999 < (long)(param_2 * 3)) {
        uVar4 = 200000;
        lVar5 = 3000000;
      }
    }
    *(ulong *)(param_1 + 0x10e8) = uVar4;
    *(long *)(param_1 + 0x10f0) = lVar5;
    FUN_009525e4(*(undefined8 *)(param_1 + 0x1098),uVar4,lVar5);
    return;
  }
  return;
}


// ===== 005f71e4  FUN_005f71e4 =====

void FUN_005f71e4(long param_1)

{
  FUN_006092b0(param_1 + 0x9c0);
  return;
}


// ===== 005f71f0  FUN_005f71f0 =====

void FUN_005f71f0(long param_1,uint param_2)

{
  FUN_0060905c(param_1 + 0x9c0,param_2 & 1);
  return;
}


// ===== 005f7200  FUN_005f7200 =====

void FUN_005f7200(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *local_38;
  long local_30;
  long local_28;
  long **local_8;
  
  lVar1 = *(long *)(param_1 + 0x10b0);
  if (lVar1 != 0) {
    plVar3 = (long *)*param_2;
    local_28 = param_2[2];
    plVar2 = param_2 + 1;
    local_30 = *plVar2;
    local_38 = &local_30;
    if (local_28 != 0) {
      *(long **)(local_30 + 0x10) = local_38;
      *param_2 = (long)plVar2;
      *plVar2 = 0;
      param_2[2] = 0;
      local_38 = plVar3;
    }
    FUN_0089def4(lVar1,&local_38);
    local_8 = &local_38;
    FUN_005fa2f8(&local_8,local_30);
  }
  return;
}


// ===== 005f7288  FUN_005f7288 =====

void FUN_005f7288(long param_1,long param_2)

{
  char ****ppppcVar1;
  undefined1 *puVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  size_t sVar7;
  undefined1 *puVar8;
  char ****ppppcVar9;
  long lVar10;
  undefined1 *puVar11;
  char *pcVar12;
  ulong uVar13;
  undefined8 uVar14;
  char *local_1b0;
  undefined1 *puStack_1a8;
  undefined1 *local_1a0;
  char ***local_190;
  undefined1 *puStack_188;
  undefined8 local_180;
  char **local_178;
  char *local_170;
  char *pcStack_168;
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
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (((DAT_00d641d0 & 1) == 0) && (iVar4 = FUN_0054fdd4(&DAT_00d641d0), iVar4 != 0)) {
    DAT_00d641c8 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d641d0);
  }
  local_178 = (char **)0x0;
  pcStack_168 = &DAT_aaaaaaaaaaaaaaaa;
  local_170 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d641c8 != '\0') {
    FUN_0066d348(0x42,DAT_00d641c8,"VideoReceiveStream2::CreateAndRegisterExternalDecoder",0,0,0,0,0
                 ,0);
    local_170 = DAT_00d641c8;
    pcStack_168 = "VideoReceiveStream2::CreateAndRegisterExternalDecoder";
    local_178 = &local_170;
  }
  plVar5 = (long *)(**(code **)(**(long **)(param_1 + 0xa0) + 0x20))
                             (*(long **)(param_1 + 0xa0),param_1 + 0x38,param_2);
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)operator_new(8);
    *plVar5 = (long)&PTR_FUN_00d26fc0;
  }
  else {
    (**(code **)(*plVar5 + 0x48))(plVar5,param_1 + 0x168);
  }
  puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
  local_190 = (char ***)&DAT_aaaaaaaaaaaaaaaa;
  local_180 = &DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(**(long **)(param_1 + 0x40) + 0x10))
            (&local_190,*(long **)(param_1 + 0x40),"WebRTC-DecoderDataDumpDirectory",0x1f);
  puVar8 = (undefined1 *)(long)local_180._7_1_;
  ppppcVar1 = (char ****)local_190;
  if (-1 < (long)puVar8) {
    ppppcVar1 = &local_190;
  }
  puVar2 = puStack_188;
  if (-1 < (long)local_180) {
    puVar2 = puVar8;
  }
  if (puVar2 == (undefined1 *)0x0) goto LAB_005f75d8;
  ppppcVar9 = ppppcVar1;
  if ((puVar2 < (undefined1 *)0x8) || ((char ****)((long)ppppcVar1 + (long)puVar2 + -1) < ppppcVar1)
     ) {
LAB_005f7770:
    do {
      if (*(char *)ppppcVar9 == ';') {
        *(char *)ppppcVar9 = '/';
      }
      ppppcVar9 = (char ****)((long)ppppcVar9 + 1);
    } while (ppppcVar9 != (char ****)((long)ppppcVar1 + (long)puVar2));
  }
  else if (puVar2 < (undefined1 *)0x10) {
    puVar8 = (undefined1 *)0x0;
LAB_005f73e4:
    puVar11 = (undefined1 *)((ulong)puVar2 & 0xfffffffffffffff8);
    ppppcVar9 = (char ****)((long)ppppcVar1 + (long)puVar11);
    lVar10 = (long)puVar8 - (long)puVar11;
    pcVar12 = (char *)((long)ppppcVar1 + (long)(puVar8 + 3));
    do {
      uVar14 = *(undefined8 *)(pcVar12 + -3);
      if ((char)uVar14 == ';') {
        pcVar12[-3] = '/';
      }
      if ((char)((ulong)uVar14 >> 8) == ';') {
        pcVar12[-2] = '/';
      }
      if ((char)((ulong)uVar14 >> 0x10) == ';') {
        pcVar12[-1] = '/';
      }
      if ((char)((ulong)uVar14 >> 0x18) == ';') {
        *pcVar12 = '/';
      }
      if ((char)((ulong)uVar14 >> 0x20) == ';') {
        pcVar12[1] = '/';
      }
      if ((char)((ulong)uVar14 >> 0x28) == ';') {
        pcVar12[2] = '/';
      }
      if ((char)((ulong)uVar14 >> 0x30) == ';') {
        pcVar12[3] = '/';
      }
      if ((char)((ulong)uVar14 >> 0x38) == ';') {
        pcVar12[4] = '/';
      }
      lVar10 = lVar10 + 8;
      pcVar12 = pcVar12 + 8;
    } while (lVar10 != 0);
    if (puVar2 != puVar11) goto LAB_005f7770;
  }
  else {
    puVar8 = (undefined1 *)((ulong)puVar2 & 0xfffffffffffffff0);
    pcVar12 = (char *)((long)ppppcVar1 + 7);
    uVar13 = (ulong)puVar2 & 0xfffffffffffffff0;
    do {
      uVar6 = *(undefined8 *)(pcVar12 + 1);
      uVar14 = *(undefined8 *)(pcVar12 + -7);
      if ((char)uVar14 == ';') {
        pcVar12[-7] = '/';
      }
      if ((char)((ulong)uVar14 >> 8) == ';') {
        pcVar12[-6] = '/';
      }
      if ((char)((ulong)uVar14 >> 0x10) == ';') {
        pcVar12[-5] = '/';
      }
      if ((char)((ulong)uVar14 >> 0x18) == ';') {
        pcVar12[-4] = '/';
      }
      if ((char)((ulong)uVar14 >> 0x20) == ';') {
        pcVar12[-3] = '/';
      }
      if ((char)((ulong)uVar14 >> 0x28) == ';') {
        pcVar12[-2] = '/';
      }
      if ((char)((ulong)uVar14 >> 0x30) == ';') {
        pcVar12[-1] = '/';
      }
      if ((char)((ulong)uVar14 >> 0x38) == ';') {
        *pcVar12 = '/';
      }
      if ((char)uVar6 == ';') {
        pcVar12[1] = '/';
      }
      if ((char)((ulong)uVar6 >> 8) == ';') {
        pcVar12[2] = '/';
      }
      if ((char)((ulong)uVar6 >> 0x10) == ';') {
        pcVar12[3] = '/';
      }
      if ((char)((ulong)uVar6 >> 0x18) == ';') {
        pcVar12[4] = '/';
      }
      if ((char)((ulong)uVar6 >> 0x20) == ';') {
        pcVar12[5] = '/';
      }
      if ((char)((ulong)uVar6 >> 0x28) == ';') {
        pcVar12[6] = '/';
      }
      if ((char)((ulong)uVar6 >> 0x30) == ';') {
        pcVar12[7] = '/';
      }
      if ((char)((ulong)uVar6 >> 0x38) == ';') {
        pcVar12[8] = '/';
      }
      uVar13 = uVar13 - 0x10;
      pcVar12 = pcVar12 + 0x10;
    } while (uVar13 != 0);
    if (puVar2 != puVar8) {
      if (((uint)puVar2 >> 3 & 1) == 0) {
        ppppcVar9 = (char ****)((long)ppppcVar1 + (long)puVar8);
        goto LAB_005f7770;
      }
      goto LAB_005f73e4;
    }
  }
  puVar8 = (undefined1 *)((ulong)local_180 >> 0x38);
LAB_005f75d8:
  puVar2 = puStack_188;
  if (((ulong)puVar8 & 0x80) == 0) {
    puVar2 = puVar8;
  }
  if (puVar2 != (undefined1 *)0x0) {
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
    local_1a0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1a8 = &DAT_aaaaaaaaaaaaaaaa;
    local_1b0 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00622830(&local_1b0,&local_160,0x100);
    puVar8 = puStack_188;
    ppppcVar1 = (char ****)local_190;
    if (-1 < (long)local_180) {
      puVar8 = (undefined1 *)((ulong)local_180 >> 0x38);
      ppppcVar1 = &local_190;
    }
    uVar14 = FUN_006228b0(&local_1b0,ppppcVar1,puVar8);
    uVar14 = FUN_006228b0(uVar14,"/webrtc_receive_stream_",0x17);
    uVar14 = FUN_006229f8(uVar14,*(undefined4 *)(param_1 + 0xa8));
    uVar14 = FUN_006228b0(uVar14,&DAT_001b07f5,1);
    uVar6 = (**(code **)(**(long **)(param_1 + 0x48) + 0x10))(*(long **)(param_1 + 0x48));
    uVar14 = FUN_00622a0c(uVar14,uVar6);
    FUN_006228b0(uVar14,&DAT_001c55f7,4);
    pcVar12 = local_1b0;
    if (local_1b0 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string_view:278: libc++ Hardening assertion __s != nullptr failed: null pointer passed to non-null argument of char_traits<...>::length\n"
                );
    }
    sVar7 = strlen(local_1b0);
    plVar5 = (long *)FUN_009510b4(plVar5,pcVar12,sVar7);
  }
  FUN_0094011c(param_1 + 0x8a8,plVar5,*(undefined4 *)(param_2 + 0x60));
  if ((long)local_180 < 0) {
    operator_delete(local_190);
  }
  if ((local_178 != (char **)0x0) && (**local_178 != '\0')) {
    FUN_0066d348(0x45,*local_178,local_178[1],0,0,0,0,0,0);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005f77cc  FUN_005f77cc =====

void FUN_005f77cc(void *param_1,long param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  memcpy(param_1,&DAT_001fbf80,0x2e0);
  FUN_005fd090(param_1,param_2 + 0x240);
  plVar4 = *(long **)(param_2 + 0x898);
  *(undefined4 *)((long)param_1 + 0x100) = 0;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,*(undefined4 *)((long)param_1 + 0x134));
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x10))(&local_90);
    *(undefined1 **)((long)param_1 + 0x158) = puStack_88;
    *(undefined1 **)((long)param_1 + 0x150) = local_90;
    *(undefined1 **)((long)param_1 + 0x168) = uStack_78;
    *(undefined1 **)((long)param_1 + 0x160) = local_80;
    *(undefined8 *)((long)param_1 + 0x1a0) = local_40;
    *(undefined1 **)((long)param_1 + 0x178) = puStack_68;
    *(undefined1 **)((long)param_1 + 0x170) = local_70;
    *(undefined8 *)((long)param_1 + 0x188) = uStack_58;
    *(undefined1 **)((long)param_1 + 0x180) = local_60;
    *(undefined8 *)((long)param_1 + 0x198) = uStack_48;
    *(undefined8 *)((long)param_1 + 400) = local_50;
    uVar2 = (**(code **)(*plVar4 + 0x28))(plVar4);
    *(undefined4 *)((long)param_1 + 0x100) = uVar2;
  }
  lVar6 = 0x10b8;
  if (*(char *)(param_2 + 0x10bc) == '\0') {
    lVar6 = 0xc4;
  }
  if ((*(int *)(param_2 + lVar6) != 0) &&
     (plVar4 = (long *)(**(code **)(**(long **)(param_2 + 0x898) + 0x18))(), plVar4 != (long *)0x0))
  {
    iVar3 = (**(code **)(*plVar4 + 0x28))();
    *(int *)((long)param_1 + 0x100) = *(int *)((long)param_1 + 0x100) + iVar3;
    (**(code **)(*plVar4 + 0x10))(&local_90,plVar4);
    *(undefined8 *)((long)param_1 + 0x210) = local_40;
    *(undefined1 **)((long)param_1 + 0x1c8) = puStack_88;
    *(undefined1 **)((long)param_1 + 0x1c0) = local_90;
    *(undefined1 **)((long)param_1 + 0x1d8) = uStack_78;
    *(undefined1 **)((long)param_1 + 0x1d0) = local_80;
    *(undefined1 **)((long)param_1 + 0x1e8) = puStack_68;
    *(undefined1 **)((long)param_1 + 0x1e0) = local_70;
    *(undefined8 *)((long)param_1 + 0x1f8) = uStack_58;
    *(undefined1 **)((long)param_1 + 0x1f0) = local_60;
    *(undefined8 *)((long)param_1 + 0x208) = uStack_48;
    *(undefined8 *)((long)param_1 + 0x200) = local_50;
    if ((*(byte *)((long)param_1 + 0x218) & 1) == 0) {
      *(undefined1 *)((long)param_1 + 0x218) = 1;
    }
  }
  uStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00609494(&local_90,param_2 + 0x9c0);
  if (((ulong)local_60 & 1) != 0) {
    if ((*(byte *)((long)param_1 + 0x2a0) & 1) == 0) {
      *(undefined1 *)((long)param_1 + 0x2a0) = 1;
    }
    *(undefined1 **)((long)param_1 + 0x298) = local_90;
    if (puStack_88 == (undefined1 *)0x0) {
      lVar6 = -0x8000000000000000;
      bVar1 = *(byte *)((long)param_1 + 0x2b0);
    }
    else {
      uVar5 = ((ulong)puStack_88 & 0xffffffff) * 1000000;
      lVar6 = (uVar5 >> 0x1f & 1) + (uVar5 >> 0x20) +
              (((ulong)puStack_88 >> 0x20) + 0x7c558180 & 0xffffffff) * 1000000;
      bVar1 = *(byte *)((long)param_1 + 0x2b0);
    }
    if ((bVar1 & 1) == 0) {
      *(undefined1 *)((long)param_1 + 0x2b0) = 1;
    }
    *(long *)((long)param_1 + 0x2a8) = lVar6;
    if (local_80 == (undefined1 *)0x0) {
      lVar6 = -0x8000000000000000;
      bVar1 = *(byte *)((long)param_1 + 0x2c0);
    }
    else {
      uVar5 = ((ulong)local_80 & 0xffffffff) * 1000000;
      lVar6 = (uVar5 >> 0x1f & 1) + (uVar5 >> 0x20) +
              (((ulong)local_80 >> 0x20) + 0x7c558180 & 0xffffffff) * 1000000;
      bVar1 = *(byte *)((long)param_1 + 0x2c0);
    }
    if ((bVar1 & 1) == 0) {
      *(undefined1 *)((long)param_1 + 0x2c0) = 1;
    }
    *(long *)((long)param_1 + 0x2b8) = lVar6;
    *(undefined4 *)((long)param_1 + 0x2c8) = uStack_78._4_4_;
    *(undefined1 **)((long)param_1 + 0x2d8) = puStack_68;
    *(undefined1 **)((long)param_1 + 0x2d0) = local_70;
  }
  return;
}


// ===== 005f79fc  FUN_005f79fc =====

void FUN_005f79fc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x005f7a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x11a8) + 0x10))(*(long **)(param_1 + 0x11a8),param_3,param_2);
  return;
}


// ===== 005f7a1c  FUN_005f7a1c =====

void FUN_005f7a1c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x005f7a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x1178) + 0x10))(*(long **)(param_1 + 0x1178),param_3,param_2);
  return;
}


// ===== 005f7a3c  FUN_005f7a3c =====

bool FUN_005f7a3c(long param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = (param_2 != -1 && param_2 + 1 < 0 == SCARRY4(param_2,1)) &&
          (ulong)((long)param_2 * 1000) < 0x989681;
  if (bVar1) {
    if ((*(byte *)(param_1 + 0x1110) & 1) == 0) {
      *(undefined1 *)(param_1 + 0x1110) = 1;
    }
    *(long *)(param_1 + 0x1108) = (long)param_2 * 1000;
    FUN_005f7aa0();
  }
  return bVar1;
}


// ===== 005f7aa0  FUN_005f7aa0 =====

/* WARNING: Removing unreachable block (ram,0x005f7d90) */
/* WARNING: Removing unreachable block (ram,0x005f7d30) */
/* WARNING: Removing unreachable block (ram,0x005f7c58) */
/* WARNING: Removing unreachable block (ram,0x005f7c3c) */
/* WARNING: Removing unreachable block (ram,0x005f7cb4) */
/* WARNING: Removing unreachable block (ram,0x005f8440) */
/* WARNING: Type propagation algorithm not settling */

void FUN_005f7aa0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *****pppppuVar3;
  undefined8 ***pppuVar4;
  uint uVar5;
  long lVar6;
  undefined8 *******pppppppuVar7;
  undefined8 *******pppppppuVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *******pppppppuVar14;
  undefined8 ****ppppuVar15;
  long *plVar16;
  undefined8 uVar17;
  double dVar18;
  char *local_1e8;
  undefined8 *******pppppppuStack_1e0;
  char cStack_1d1;
  undefined8 *******local_1d0;
  ulong uStack_1c8;
  undefined8 local_1c0;
  undefined8 *******local_1b8;
  ulong uStack_1b0;
  undefined8 local_1a8;
  undefined1 uStack_199;
  char *local_198;
  undefined8 local_190;
  char **local_188;
  char *local_180;
  char **ppcStack_178;
  undefined8 *******local_170;
  ulong uStack_168;
  undefined8 local_160;
  char **local_158;
  char *local_150;
  undefined8 *******pppppppuStack_148;
  undefined8 *******local_140;
  char **ppcStack_138;
  char *local_130;
  undefined8 *******pppppppuStack_128;
  long local_120;
  ulong uStack_118;
  long local_108;
  byte local_100 [8];
  long local_f8;
  byte local_f0;
  long local_e8;
  byte local_e0;
  undefined8 *******local_d8;
  char **ppcStack_d0;
  undefined8 *******local_c8;
  ulong uStack_c0;
  ulong local_b8;
  undefined8 *******local_b0;
  ulong uStack_a8;
  ulong local_a0;
  undefined8 *******local_98;
  long local_78;
  
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  local_108 = *(long *)(param_1 + 0x10f8);
  local_100[0] = *(byte *)(param_1 + 0x1100);
  local_f8 = *(long *)(param_1 + 0x1108);
  plVar16 = &local_108;
  local_e8 = *(long *)(param_1 + 0x1118);
  local_f0 = *(byte *)(param_1 + 0x1110);
  local_e0 = *(byte *)(param_1 + 0x1120);
  if ((*(byte *)(param_1 + 0x1110) & 1) != 0) {
    if ((*(byte *)(param_1 + 0x1100) == 1) &&
       (*(long *)(param_1 + 0x1108) <= *(long *)(param_1 + 0x10f8))) {
      plVar16 = &local_108;
    }
    else {
      plVar16 = &local_f8;
    }
  }
  if ((*(byte *)(param_1 + 0x1120) == 1) &&
     (((char)plVar16[1] != '\x01' || (*plVar16 < *(long *)(param_1 + 0x1118))))) {
    plVar16 = &local_e8;
  }
  lVar13 = *plVar16;
  uStack_118 = CONCAT71(0xaaaaaaaaaaaaaa,(char)plVar16[1]);
  local_120 = lVar13;
  if ((plVar16[1] & 1U) == 0) goto LAB_005f83c4;
  if ((*(char *)(param_1 + 0x1130) == '\x01') &&
     (local_120 = *(long *)(param_1 + 0x1128), local_120 < lVar13)) {
    lVar11 = FUN_0094717c(*(undefined8 *)(param_1 + 0x8a0));
    if ((uStack_118 & 1) == 0) goto LAB_005f84b0;
    lVar13 = local_120;
    if ((lVar11 != local_120) && (uVar12 = FUN_004022fc(), lVar13 = local_120, (uVar12 & 1) == 0)) {
      local_198 = "../../video/video_receive_stream2.cc";
      local_190 = 0x22a2;
      local_188 = (char **)&uStack_199;
      ppcStack_178 = &local_198;
      local_180 = "Maximum playout delay ";
      if ((*(byte *)(param_1 + 0x1130) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                  );
      }
      FUN_005f3380(&local_b0,param_1 + 0x1128);
      local_158 = &local_180;
      uStack_168 = uStack_a8;
      local_170 = local_b0;
      local_160 = local_a0;
      pppppppuStack_148 = &local_170;
      local_1d0 = *(undefined8 ********)(param_1 + 0x10f8);
      local_150 = " overrides minimum delay. frame min delay=";
      uStack_1c8 = *(ulong *)(param_1 + 0x1100);
      if ((uStack_1c8 & 1) == 0) {
        FUN_005d3510(&local_1b8,"<unset>");
      }
      else {
        local_c8 = (undefined8 *******)0x0;
        uStack_c0 = 0;
        local_b8 = 0;
        FUN_005f9f9c(&local_b0,&local_1d0,&local_c8);
        FUN_005f9ea8(&local_1b8,&local_b0);
      }
      local_140 = &local_1b8;
      ppcStack_138 = &local_150;
      local_1e8 = *(char **)(param_1 + 0x1108);
      pppppppuStack_128 = &local_140;
      local_130 = " base min delay=";
      pppppppuStack_1e0 = *(undefined8 ********)(param_1 + 0x1110);
      if (((ulong)pppppppuStack_1e0 & 1) == 0) {
        FUN_005d3510(&local_1d0,"<unset>");
      }
      else {
        local_c8 = (undefined8 *******)0x0;
        uStack_c0 = 0;
        local_b8 = 0;
        FUN_005f9f9c(&local_b0,&local_1e8,&local_c8);
        FUN_005f9ea8(&local_1d0,&local_b0);
      }
      local_d8 = *(undefined8 ********)(param_1 + 0x1118);
      ppcStack_d0 = *(char ***)(param_1 + 0x1120);
      if (((ulong)ppcStack_d0 & 1) == 0) {
        FUN_005d3510(&local_1e8,"<unset>");
      }
      else {
        local_c8 = (undefined8 *******)0x0;
        uStack_c0 = 0;
        local_b8 = 0;
        FUN_005f9f9c(&local_b0,&local_d8,&local_c8);
        FUN_005f9ea8(&local_1e8,&local_b0);
      }
      pppppuVar3 = pppppppuStack_128[1][1];
      ppppuVar15 = pppppuVar3[3];
      pppuVar4 = ppppuVar15[1];
      FUN_00623bb0("\r\t\n\t\n\t\n\t\n",*pppuVar4,*(undefined4 *)(pppuVar4 + 1),*ppppuVar15,
                   pppppuVar3,*pppppppuStack_128[1],*pppppppuStack_128,local_130,&local_1d0,
                   " sync min delay=",&local_1e8);
      if (cStack_1d1 < '\0') {
        operator_delete(local_1e8);
      }
      if ((long)local_1c0 < 0) {
        operator_delete(local_1d0);
      }
      if ((long)local_1a8 < 0) {
        operator_delete(local_1b8);
      }
      lVar13 = local_120;
      if ((long)local_160 < 0) {
        operator_delete(local_170);
        lVar13 = local_120;
      }
    }
  }
  local_120 = lVar13;
  if (1 < (byte)((local_e0 & 1) + (local_f0 & 1) + (local_100[0] & 1))) {
    lVar13 = FUN_0094717c(*(undefined8 *)(param_1 + 0x8a0));
    if ((uStack_118 & 1) == 0) goto LAB_005f84b0;
    if ((lVar13 == local_120) || (uVar12 = FUN_004022fc(), (uVar12 & 1) != 0)) goto LAB_005f82f4;
    local_198 = "../../video/video_receive_stream2.cc";
    local_190 = 0x231a;
    local_188 = &local_150;
    ppcStack_138 = &local_198;
    local_140 = (undefined8 *******)0x19d221;
    if ((uStack_118 & 1) == 0) goto LAB_005f84b0;
    FUN_005f3380(&local_170,&local_120);
    if ((long)local_160 < 0) {
      FUN_005478d8(&local_b0,local_170,uStack_168);
      local_98 = &local_140;
      if ((long)local_160 < 0) {
        operator_delete(local_170);
      }
    }
    else {
      local_98 = &local_140;
      uStack_a8 = uStack_168;
      local_b0 = local_170;
      local_a0 = local_160;
    }
    pppppppuStack_128 = &local_b0;
    local_130 = " frame min delay=";
    if ((*(uint *)(param_1 + 0x1100) & 1) == 0) {
      FUN_005d3510(&local_1b8,"<unset>");
    }
    else {
      local_c8 = (undefined8 *******)0x0;
      uStack_c0 = 0;
      local_b8 = 0;
      FUN_006224f8(&local_170,*(undefined8 *)(param_1 + 0x10f8));
      uVar12 = uStack_168;
      pppppppuVar7 = local_170;
      if (-1 < (long)local_160) {
        uVar12 = local_160 >> 0x38;
        pppppppuVar7 = &local_170;
      }
      thunk_FUN_00547cac(&local_c8,pppppppuVar7,uVar12);
      if ((long)local_160 < 0) {
        operator_delete(local_170);
      }
      uVar9 = local_b8;
      pppppppuVar8 = local_c8;
      uVar12 = uStack_c0;
      pppppppuVar7 = local_c8;
      if (-1 < (long)local_b8) {
        uVar12 = local_b8 >> 0x38;
        pppppppuVar7 = &local_c8;
      }
      if ((pppppppuVar7 == (undefined8 *******)0x0) && (uVar12 != 0)) goto LAB_005f84c4;
      if (0x7ffffffffffffff6 < uVar12) goto LAB_005f8518;
      if (uVar12 < 0x17) {
        local_1a8 = CONCAT17((char)uVar12,(undefined7)local_1a8);
        pppppppuVar14 = &local_1b8;
      }
      else {
        uVar1 = (uVar12 & 0x7ffffffffffffff8) + 8;
        uVar2 = 0x19;
        if (uVar1 != 0x18) {
          uVar2 = uVar1;
        }
        pppppppuVar14 = (undefined8 *******)operator_new(uVar2);
        local_1a8 = uVar2 | 0x8000000000000000;
        local_1b8 = pppppppuVar14;
        uStack_1b0 = uVar12;
      }
      if ((undefined8 *******)((long)pppppppuVar14 + uVar12) < pppppppuVar14) goto LAB_005f84d8;
      if ((pppppppuVar14 <= pppppppuVar7) &&
         (pppppppuVar7 < (undefined8 *******)((long)pppppppuVar14 + uVar12))) goto LAB_005f84ec;
      memmove(pppppppuVar14,pppppppuVar7,uVar12);
      *(undefined1 *)((long)pppppppuVar14 + uVar12) = 0;
      if ((long)uVar9 < 0) {
        operator_delete(pppppppuVar8);
      }
    }
    local_d8 = &local_1b8;
    ppcStack_d0 = &local_130;
    pppppppuStack_1e0 = &local_d8;
    local_1e8 = " base min delay=";
    if ((*(uint *)(param_1 + 0x1110) & 1) == 0) {
      FUN_005d3510(&local_1d0,"<unset>");
      if ((*(uint *)(param_1 + 0x1120) & 1) == 0) goto LAB_005f820c;
LAB_005f80f8:
      local_c8 = (undefined8 *******)0x0;
      uStack_c0 = 0;
      local_b8 = 0;
      FUN_006224f8(&local_170,*(undefined8 *)(param_1 + 0x1118));
      uVar12 = uStack_168;
      pppppppuVar7 = local_170;
      if (-1 < (long)local_160) {
        uVar12 = local_160 >> 0x38;
        pppppppuVar7 = &local_170;
      }
      thunk_FUN_00547cac(&local_c8,pppppppuVar7,uVar12);
      if ((long)local_160 < 0) {
        operator_delete(local_170);
      }
      uVar9 = local_b8;
      pppppppuVar8 = local_c8;
      uVar12 = uStack_c0;
      pppppppuVar7 = local_c8;
      if (-1 < (long)local_b8) {
        uVar12 = local_b8 >> 0x38;
        pppppppuVar7 = &local_c8;
      }
      if ((pppppppuVar7 == (undefined8 *******)0x0) && (uVar12 != 0)) {
LAB_005f84c4:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/string:1081: libc++ Hardening assertion __n == 0 || __s != nullptr failed: basic_string(const char*, n) detected nullptr\n"
                  );
      }
      if (0x7ffffffffffffff6 < uVar12) {
LAB_005f8518:
                    /* WARNING: Subroutine does not return */
        FUN_005d45ec();
      }
      if (uVar12 < 0x17) {
        local_160 = CONCAT17((char)uVar12,(undefined7)local_160);
        pppppppuVar14 = &local_170;
      }
      else {
        uVar1 = (uVar12 & 0x7ffffffffffffff8) + 8;
        uVar2 = 0x19;
        if (uVar1 != 0x18) {
          uVar2 = uVar1;
        }
        pppppppuVar14 = (undefined8 *******)operator_new(uVar2);
        local_160 = uVar2 | 0x8000000000000000;
        local_170 = pppppppuVar14;
        uStack_168 = uVar12;
      }
      if ((undefined8 *******)((long)pppppppuVar14 + uVar12) < pppppppuVar14) {
LAB_005f84d8:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                  );
      }
      if ((pppppppuVar14 <= pppppppuVar7) &&
         (pppppppuVar7 < (undefined8 *******)((long)pppppppuVar14 + uVar12))) {
LAB_005f84ec:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                  );
      }
      memmove(pppppppuVar14,pppppppuVar7,uVar12);
      *(undefined1 *)((long)pppppppuVar14 + uVar12) = 0;
      if ((long)uVar9 < 0) {
        operator_delete(pppppppuVar8);
      }
    }
    else {
      local_c8 = (undefined8 *******)0x0;
      uStack_c0 = 0;
      local_b8 = 0;
      FUN_006224f8(&local_170,*(undefined8 *)(param_1 + 0x1108));
      uVar12 = uStack_168;
      pppppppuVar7 = local_170;
      if (-1 < (long)local_160) {
        uVar12 = local_160 >> 0x38;
        pppppppuVar7 = &local_170;
      }
      thunk_FUN_00547cac(&local_c8,pppppppuVar7,uVar12);
      if ((long)local_160 < 0) {
        operator_delete(local_170);
      }
      uVar9 = local_b8;
      pppppppuVar8 = local_c8;
      uVar12 = uStack_c0;
      pppppppuVar7 = local_c8;
      if (-1 < (long)local_b8) {
        uVar12 = local_b8 >> 0x38;
        pppppppuVar7 = &local_c8;
      }
      if ((pppppppuVar7 == (undefined8 *******)0x0) && (uVar12 != 0)) goto LAB_005f84c4;
      if (0x7ffffffffffffff6 < uVar12) goto LAB_005f8518;
      if (uVar12 < 0x17) {
        local_1c0 = CONCAT17((char)uVar12,(undefined7)local_1c0);
        pppppppuVar14 = &local_1d0;
      }
      else {
        uVar1 = (uVar12 & 0x7ffffffffffffff8) + 8;
        uVar2 = 0x19;
        if (uVar1 != 0x18) {
          uVar2 = uVar1;
        }
        pppppppuVar14 = (undefined8 *******)operator_new(uVar2);
        local_1c0 = uVar2 | 0x8000000000000000;
        local_1d0 = pppppppuVar14;
        uStack_1c8 = uVar12;
      }
      if ((undefined8 *******)((long)pppppppuVar14 + uVar12) < pppppppuVar14) goto LAB_005f84d8;
      if ((pppppppuVar14 <= pppppppuVar7) &&
         (pppppppuVar7 < (undefined8 *******)((long)pppppppuVar14 + uVar12))) goto LAB_005f84ec;
      memmove(pppppppuVar14,pppppppuVar7,uVar12);
      *(undefined1 *)((long)pppppppuVar14 + uVar12) = 0;
      if ((long)uVar9 < 0) {
        operator_delete(pppppppuVar8);
      }
      if ((*(uint *)(param_1 + 0x1120) & 1) != 0) goto LAB_005f80f8;
LAB_005f820c:
      FUN_005d3510(&local_170,"<unset>");
    }
    pppppuVar3 = pppppppuStack_1e0[1][1];
    ppppuVar15 = pppppuVar3[3];
    pppuVar4 = ppppuVar15[1];
    FUN_00623bb0("\r\t\n\t\n\t\n\t\n",*pppuVar4,*(undefined4 *)(pppuVar4 + 1),*ppppuVar15,pppppuVar3
                 ,*pppppppuStack_1e0[1],*pppppppuStack_1e0,local_1e8,&local_1d0," sync min delay=",
                 &local_170);
    if ((long)local_160 < 0) {
      operator_delete(local_170);
    }
    if ((long)local_1c0 < 0) {
      operator_delete(local_1d0);
    }
    if ((long)local_1a8 < 0) {
      operator_delete(local_1b8);
    }
  }
LAB_005f82f4:
  if (*(char *)(param_1 + 0x1130) == '\x01') {
    if ((uStack_118 & 1) == 0) {
LAB_005f84b0:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    uVar17 = *(undefined8 *)(param_1 + 0x8a0);
    FUN_0065a16c(&local_b0,local_120,*(undefined8 *)(param_1 + 0x1128));
    FUN_00947374(uVar17,&local_b0);
  }
  else {
    if ((uStack_118 & 1) == 0) goto LAB_005f84b0;
    FUN_009471b8(*(undefined8 *)(param_1 + 0x8a0),local_120);
  }
  if ((((*(char *)(param_1 + 0x1100) == '\x01') && (*(long *)(param_1 + 0x10f8) == 0)) &&
      (*(char *)(param_1 + 0x1130) == '\x01')) &&
     (uVar12 = *(ulong *)(param_1 + 0x1128), 0 < (long)uVar12)) {
    dVar18 = INFINITY;
    if (uVar12 != 0x7fffffffffffffff) {
      dVar18 = (double)uVar12 * DAT_001f5658 * 60.0;
    }
    iVar10 = FUN_00952658(*(undefined8 *)(param_1 + 0x1098));
    uVar5 = (int)(long)(double)(long)dVar18 - iVar10;
    FUN_00947d04(*(undefined8 *)(param_1 + 0x8a0),
                 (ulong)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU)) | 0x100000000);
  }
LAB_005f83c4:
  if (*(long *)(lVar6 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005f851c  FUN_005f851c =====

ulong FUN_005f851c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  puVar1 = (ulong *)(param_1 + 0x1108);
  if (*(char *)(param_1 + 0x1110) == '\0') {
    puVar1 = &DAT_001f5a08;
  }
  uVar2 = *puVar1;
  uVar3 = uVar2 / 1000;
  if (499 < uVar2 % 1000) {
    uVar3 = uVar3 + 1;
  }
  if ((uVar2 & 0x8000000000000000) != 0) {
    uVar3 = -(-uVar2 / 1000) - (ulong)(500 < -uVar2 % 1000);
  }
  return uVar3;
}


// ===== 005f85a0  FUN_005f85a0 =====

void FUN_005f85a0(long param_1,long param_2)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined4 *puVar11;
  ulong uVar12;
  void *pvVar13;
  void *pvVar14;
  void *pvVar15;
  void *pvVar16;
  ulong uVar17;
  void *pvVar18;
  long lVar19;
  void *pvVar20;
  undefined1 uStack_d1;
  undefined4 *local_d0 [2];
  code *local_c0;
  undefined8 uStack_b8;
  long *local_b0 [2];
  code *local_a0;
  undefined8 uStack_98;
  undefined1 uStack_81;
  long *local_80;
  ulong local_78;
  code *local_70;
  code *pcStack_68;
  
  (**(code **)(**(long **)(param_1 + 0x110) + 0x10))();
  pvVar20 = *(void **)(param_2 + 0xb8);
  if (pvVar20 != (void *)0x0) {
    FUN_00d0f740(1,pvVar20);
  }
  uVar9 = (**(code **)(**(long **)(param_1 + 0x48) + 0x10))();
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  uVar4 = *(undefined4 *)(param_2 + 0x10);
  uVar5 = FUN_007bf3cc(param_2);
  uVar6 = FUN_007bf3e8(param_2);
  plVar10 = (long *)(**(code **)(**(long **)(param_1 + 0x188) + 0xd8))(*(long **)(param_1 + 0x188));
  lVar19 = *(long *)(param_1 + 0x11b0);
  if (lVar19 != 0) {
    FUN_00d0f740(1,lVar19);
  }
  if (pvVar20 != (void *)0x0) {
    FUN_00d0f740(1,pvVar20);
  }
  puVar11 = (undefined4 *)operator_new(0x38);
  *puVar11 = uVar4;
  puVar11[1] = 0xaaaaaaaa;
  *(undefined8 *)(puVar11 + 2) = uVar3;
  *(undefined8 *)(puVar11 + 4) = uVar2;
  puVar11[6] = uVar5;
  puVar11[7] = uVar6;
  *(undefined8 *)(puVar11 + 8) = uVar9;
  *(void **)(puVar11 + 10) = pvVar20;
  *(long *)(puVar11 + 0xc) = param_1;
  local_c0 = FUN_00433984;
  uStack_b8 = 0;
  local_d0[0] = puVar11;
  local_b0[0] = (long *)operator_new(0x30);
  *local_b0[0] = lVar19;
  local_b0[0][4] = (long)FUN_005fa5d8;
  local_b0[0][5] = (long)FUN_005fa4f0;
  local_b0[0][2] = (long)puVar11;
  local_70 = FUN_005db390;
  pcStack_68 = FUN_005db348;
  local_a0 = FUN_00433984;
  uStack_98 = 0;
  local_80 = local_b0[0];
  (**(code **)(*plVar10 + 8))(plVar10,&local_80,&uStack_81,&uStack_d1);
  (*local_70)(0,&local_80,&local_80);
  (*local_a0)(0,local_b0,local_b0);
  (*local_c0)(0,local_d0,local_d0);
  *(undefined4 *)(param_1 + 0x10e0) = *(undefined4 *)(param_2 + 0x10);
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x115c));
  if (*(char *)(param_1 + 0x118c) != '\x01') goto LAB_005f8860;
  puVar1 = (ulong *)(param_1 + 0x1184);
  if ((*(int *)puVar1 != 0) || (*(int *)(param_1 + 0x1188) != 0)) {
    iVar7 = FUN_007bf3cc(param_2);
    if ((*(byte *)(param_1 + 0x118c) & 1) == 0) goto LAB_005f8988;
    if (iVar7 == *(int *)puVar1) {
      iVar7 = FUN_007bf3e8(param_2);
      if ((*(byte *)(param_1 + 0x118c) & 1) == 0) goto LAB_005f8988;
      if (iVar7 == *(int *)(param_1 + 0x1188)) goto LAB_005f8830;
    }
    uVar12 = FUN_004022fc();
    if ((uVar12 & 1) == 0) {
      local_80 = (long *)0x1dbc0b;
      local_78 = 0x16aa;
      local_70 = (code *)&uStack_81;
      if ((*(byte *)(param_1 + 0x118c) & 1) == 0) {
LAB_005f8988:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                  );
      }
      uVar4 = *(undefined4 *)(param_1 + 0x1184);
      uVar5 = *(undefined4 *)(param_1 + 0x1188);
      uVar6 = FUN_007bf3cc(param_2);
      uVar8 = FUN_007bf3e8(param_2);
      FUN_00623bb0(&DAT_001fc264,local_80,local_78 & 0xffffffff,
                   "Recordable encoded frame stream resolution was reported as ",uVar4,&DAT_001c4fee
                   ,uVar5," but the stream is now ",uVar6,uVar8);
    }
  }
LAB_005f8830:
  uVar12 = FUN_007bf3cc(param_2);
  lVar19 = FUN_007bf3e8(param_2);
  *puVar1 = uVar12 & 0xffffffff | lVar19 << 0x20;
  if ((*(byte *)(param_1 + 0x118c) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x118c) = 1;
  }
LAB_005f8860:
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x115c));
  if ((pvVar20 != (void *)0x0) && (iVar7 = FUN_00d0f7a0(0xffffffff,pvVar20), iVar7 == 1)) {
    pvVar18 = *(void **)((long)pvVar20 + 8);
    if (pvVar18 != (void *)0x0) {
      pvVar14 = pvVar18;
      pvVar15 = *(void **)((long)pvVar20 + 0x10);
      if (pvVar18 != *(void **)((long)pvVar20 + 0x10)) {
        do {
          pvVar14 = (void *)((long)pvVar15 + -0x68);
          if (pvVar14 == (void *)0x0) {
LAB_005f8974:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          pvVar13 = *(void **)((long)pvVar15 + -0x60);
          if (pvVar13 != (void *)0x0) {
            pvVar16 = *(void **)((long)pvVar15 + -0x58);
            uVar17 = (ulong)((long)pvVar16 + (-4 - ((long)pvVar16 << 0x3e))) >> 2;
            uVar12 = (ulong)(((long)pvVar13 - (long)pvVar16 << 0x3e) -
                            ((long)pvVar13 - (long)pvVar16)) >> 2;
            if (uVar17 <= uVar12) {
              uVar12 = uVar17;
            }
            if ((1 < uVar12) && ((((int)pvVar13 - (int)pvVar16 | -(int)pvVar16) & 3U) == 0)) {
              uVar12 = uVar12 & 0x3ffffffffffffffe;
              pvVar16 = (void *)((long)pvVar16 + uVar12 * -4);
              do {
                uVar12 = uVar12 - 2;
              } while (uVar12 != 0);
            }
            while (pvVar16 != pvVar13) {
              pvVar16 = (void *)((long)pvVar16 + -4);
              if (pvVar16 == (void *)0x0) goto LAB_005f8974;
            }
            *(void **)((long)pvVar15 + -0x58) = pvVar13;
            operator_delete(pvVar13);
          }
          pvVar15 = pvVar14;
        } while (pvVar18 != pvVar14);
        pvVar14 = *(void **)((long)pvVar20 + 8);
      }
      *(void **)((long)pvVar20 + 0x10) = pvVar18;
      operator_delete(pvVar14);
    }
    operator_delete(pvVar20);
  }
  return;
}


// ===== 005f899c  FUN_005f899c =====

void FUN_005f899c(long param_1)

{
  FUN_005f85a0(param_1 + -8);
  return;
}


// ===== 005f89a8  FUN_005f89a8 =====

void FUN_005f89a8(long param_1,undefined8 *param_2)

{
  long *local_18;
  
  local_18 = (long *)*param_2;
  *param_2 = 0;
  FUN_00608e94(param_1 + 0x9c0,&local_18);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  return;
}


// ===== 005f89f4  FUN_005f89f4 =====

void FUN_005f89f4(long param_1,undefined8 *param_2)

{
  long *local_18;
  
  local_18 = (long *)*param_2;
  *param_2 = 0;
  FUN_00608f50(param_1 + 0x9c0,&local_18);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  return;
}


// ===== 005f8a40  FUN_005f8a40 =====

void FUN_005f8a40(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if ((*(byte *)(param_2 + 0x88) & 1) != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x78);
    uVar2 = *(undefined8 *)(param_2 + 0x80);
    if ((*(byte *)(param_1 + 0x1100) & 1) == 0) {
      *(undefined1 *)(param_1 + 0x1100) = 1;
    }
    *(undefined8 *)(param_1 + 0x10f8) = uVar1;
    if ((*(byte *)(param_1 + 0x1130) & 1) == 0) {
      *(undefined1 *)(param_1 + 0x1130) = 1;
    }
    *(undefined8 *)(param_1 + 0x1128) = uVar2;
    FUN_005f7aa0(param_1);
  }
  auVar3 = FUN_00952270(*(undefined8 *)(param_1 + 0x1098),param_2);
  if ((auVar3 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
    FUN_006099bc(param_1 + 0x9c0,auVar3._0_8_);
    return;
  }
  return;
}


// ===== 005f8ad4  FUN_005f8ad4 =====

void FUN_005f8ad4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if ((*(byte *)(param_2 + 0x88) & 1) != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x78);
    uVar2 = *(undefined8 *)(param_2 + 0x80);
    if ((*(byte *)(param_1 + 0x10f0) & 1) == 0) {
      *(undefined1 *)(param_1 + 0x10f0) = 1;
    }
    *(undefined8 *)(param_1 + 0x10e8) = uVar1;
    if ((*(byte *)(param_1 + 0x1120) & 1) == 0) {
      *(undefined1 *)(param_1 + 0x1120) = 1;
    }
    *(undefined8 *)(param_1 + 0x1118) = uVar2;
    FUN_005f7aa0(param_1 + -0x10);
  }
  auVar3 = FUN_00952270(*(undefined8 *)(param_1 + 0x1088),param_2);
  if ((auVar3 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
    FUN_006099bc(param_1 + 0x9b0,auVar3._0_8_);
    return;
  }
  return;
}


// ===== 005f8b68  FUN_005f8b68 =====

void FUN_005f8b68(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_009525d0(*(undefined8 *)(param_1 + 0x1098),param_3);
  FUN_00609030(param_1 + 0x9c0,param_3);
  FUN_005feec0(param_1 + 0x240,param_2);
  return;
}


// ===== 005f8bbc  FUN_005f8bbc =====

void FUN_005f8bbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_009525d0(*(undefined8 *)(param_1 + 0x1078),param_3);
  FUN_00609030(param_1 + 0x9a0,param_3);
  FUN_005feec0(param_1 + 0x220,param_2);
  return;
}


// ===== 005f8c10  FUN_005f8c10 =====

undefined4 FUN_005f8c10(long param_1)

{
  return *(undefined4 *)(param_1 + 0xa8);
}


// ===== 005f8c1c  FUN_005f8c1c =====

undefined4 FUN_005f8c1c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x90);
}


// ===== 005f8c28  FUN_005f8c28 =====

void FUN_005f8c28(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00605664(&local_50,param_2 + 0x9c0);
  if (((ulong)local_30 & 1) == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 4) = 0;
  }
  else {
    uVar1 = FUN_009479ac(*(undefined8 *)(param_2 + 0x8a0));
    if (((ulong)local_30 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                );
    }
    param_1[4] = local_30;
    param_1[1] = puStack_48;
    *param_1 = local_50;
    param_1[3] = uVar1;
    param_1[2] = puStack_40;
  }
  return;
}


// ===== 005f8cbc  FUN_005f8cbc =====

void FUN_005f8cbc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00605664(&local_50,param_2 + 0x9a8);
  if (((ulong)local_30 & 1) == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 4) = 0;
  }
  else {
    uVar1 = FUN_009479ac(*(undefined8 *)(param_2 + 0x888));
    if (((ulong)local_30 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                );
    }
    param_1[4] = local_30;
    param_1[1] = puStack_48;
    *param_1 = local_50;
    param_1[3] = uVar1;
    param_1[2] = puStack_40;
  }
  return;
}


// ===== 005f8d50  FUN_005f8d50 =====

void FUN_005f8d50(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x10e0);
  *param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)(param_1 + 1) = uVar1;
  return;
}


// ===== 005f8d6c  FUN_005f8d6c =====

void FUN_005f8d6c(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x10c8);
  *param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)(param_1 + 1) = uVar1;
  return;
}


// ===== 005f8d88  FUN_005f8d88 =====

void FUN_005f8d88(void)

{
  return;
}


// ===== 005f8d90  FUN_005f8d90 =====

void FUN_005f8d90(void)

{
  return;
}


// ===== 005f8d98  FUN_005f8d98 =====

undefined8 FUN_005f8d98(long param_1,undefined8 param_2)

{
  if ((*(byte *)(param_1 + 0x1120) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x1120) = 1;
  }
  *(undefined8 *)(param_1 + 0x1118) = param_2;
  FUN_005f7aa0();
  return 1;
}


// ===== 005f8dd4  FUN_005f8dd4 =====

undefined8 FUN_005f8dd4(long param_1,undefined8 param_2)

{
  if ((*(byte *)(param_1 + 0x1108) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x1108) = 1;
  }
  *(undefined8 *)(param_1 + 0x1100) = param_2;
  FUN_005f7aa0(param_1 + -0x18);
  return 1;
}


// ===== 005f8e18  FUN_005f8e18 =====

long FUN_005f8e18(long param_1)

{
  return param_1 + 0xf90;
}


// ===== 005f8e24  FUN_005f8e24 =====

void FUN_005f8e24(long param_1,long param_2)

{
  int iVar1;
  undefined1 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  long *local_70 [2];
  code *local_60;
  code *pcStack_58;
  undefined4 local_38;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  lVar3 = (**(code **)(**(long **)(param_1 + 0x48) + 0x10))();
  if (*(char *)(param_1 + 0x10d8) == '\x01') {
    lVar7 = *(long *)(param_1 + 0x10d0);
    lVar6 = 0x7fffffffffffffff;
    if ((lVar7 != 0x7fffffffffffffff) &&
       (lVar8 = *(long *)(param_1 + 0x10e8), lVar8 != 0x7fffffffffffffff)) {
      lVar6 = -0x8000000000000000;
      if (lVar8 != -0x8000000000000000 && lVar7 != -0x8000000000000000) {
        lVar6 = lVar7 + lVar8;
      }
    }
    bVar9 = lVar6 <= lVar3;
  }
  else {
    bVar9 = true;
  }
  iVar1 = *(int *)(param_2 + 0x20);
  local_38 = 0xffffffff;
  if (*(int *)(param_2 + 0x1d0) == 1) {
    plVar4 = *(long **)(param_2 + 0x90);
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x20))();
    }
    uVar5 = FUN_008a3e00(plVar4,*(undefined8 *)(param_2 + 0x98),&local_38);
    if (((uVar5 & 1) == 0) && (uVar5 = FUN_004022fc(), (uVar5 & 1) == 0)) {
      FUN_00623bb0(&DAT_001f4e98,"../../video/video_receive_stream2.cc",0x1a2a,
                   "Failed to extract QP from VP8 video frame");
    }
  }
  FUN_005fee7c(param_1 + 0x240,*(undefined4 *)(param_2 + 0x1d0),local_38);
  plVar4 = *(long **)(param_1 + 0x11b8);
  uVar2 = *(undefined1 *)(param_1 + 0x10c8);
  local_70[0] = (long *)operator_new(0x28);
  *local_70[0] = param_1;
  local_70[0][1] = lVar3;
  *(bool *)(local_70[0] + 2) = bVar9;
  *(bool *)((long)local_70[0] + 0x11) = iVar1 == 3;
  local_70[0][3] = param_2;
  *(undefined1 *)(local_70[0] + 4) = uVar2;
  local_60 = FUN_005fa8c0;
  pcStack_58 = FUN_005fa740;
  (**(code **)(*plVar4 + 8))(plVar4,local_70,&uStack_31,&uStack_32);
  (*local_60)(0,local_70,local_70);
  return;
}


// ===== 005f8fb8  FUN_005f8fb8 =====

void FUN_005f8fb8(long param_1)

{
  FUN_005f8e24(param_1 + -0x28);
  return;
}


// ===== 005f8fc4  FUN_005f8fc4 =====

/* WARNING: Removing unreachable block (ram,0x005f926c) */
/* WARNING: Removing unreachable block (ram,0x005f9140) */
/* WARNING: Removing unreachable block (ram,0x005f9124) */
/* WARNING: Removing unreachable block (ram,0x005f9284) */

void FUN_005f8fc4(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  void *local_c8;
  undefined8 local_c0;
  long local_b8;
  undefined1 uStack_a9;
  char *local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  char *local_90;
  char **ppcStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  char **local_68;
  char *local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_50 = param_2;
  lVar4 = (**(code **)(**(long **)(param_1 + 0x48) + 0x10))();
  auVar7 = FUN_0060935c(param_1 + 0x9c0);
  if ((((auVar7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) ||
      (lVar4 == 0x7fffffffffffffff || auVar7._0_8_ * 1000 == -0x8000000000000000)) ||
     ((lVar4 != -0x8000000000000000 && (4999999 < lVar4 + auVar7._0_8_ * -1000)))) {
    FUN_005feea4(param_1 + 0x240);
  }
  else {
    auVar7 = FUN_00609400(param_1 + 0x9c0);
    if ((auVar7 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      lVar2 = lVar4;
      if (lVar4 != -0x8000000000000000) {
        lVar2 = lVar4 + auVar7._0_8_ * -1000;
      }
      if ((auVar7._0_8_ * 1000 != -0x8000000000000000) && (lVar2 < *(long *)(param_1 + 0x10e8)))
      goto LAB_005f9048;
    }
    if ((*(char *)(param_1 + 0x144) != '\x01') ||
       (uVar5 = FUN_00608918(param_1 + 0x9c0), (uVar5 & 1) != 0)) {
      uVar5 = FUN_006093f0(param_1 + 0x9c0);
      uVar6 = FUN_004022fc();
      if ((uVar6 & 1) == 0) {
        local_a8 = "../../video/video_receive_stream2.cc";
        local_a0 = 0x1bfa;
        local_98 = &uStack_a9;
        ppcStack_88 = &local_a8;
        local_90 = "No decodable frame in ";
        FUN_005f3380(&local_48,&local_50);
        local_68 = &local_90;
        uStack_78 = uStack_40;
        local_80 = local_48;
        local_70 = local_38;
        puStack_58 = &local_80;
        local_60 = " requesting keyframe. Last RTP timestamp ";
        if ((uVar5 >> 0x20 & 1) == 0) {
          FUN_005d3510(&local_48,"<not set>");
        }
        else {
          local_48 = 0;
          uStack_40 = 0;
          local_38 = 0;
          FUN_005fa03c(&local_48,0x16,uVar5 & 0xffffffff);
        }
        if (*(char *)(param_1 + 0x11c4) == '\x01') {
          local_c0 = 0;
          local_b8 = 0;
          local_c8 = (void *)0x0;
          FUN_005fa03c(&local_c8,0x16,*(undefined4 *)(param_1 + 0x11c0));
        }
        else {
          FUN_005d3510(&local_c8,"<not set>");
        }
        puVar3 = (undefined8 *)((undefined8 *)puStack_58[3])[1];
        FUN_00623bb0("\r\t\n\t\n\t\n\t",*puVar3,*(undefined4 *)(puVar3 + 1),
                     *(undefined8 *)puStack_58[3],puStack_58,local_60,&local_48,
                     ", last decoded frame RTP timestamp ",&local_c8,&DAT_001ea377);
        if (local_b8 < 0) {
          operator_delete(local_c8);
        }
      }
      FUN_00608884(param_1 + 0x9c0);
      plVar1 = (long *)(param_1 + 0x10d0);
      if (*(char *)(param_1 + 0x10d8) == '\x01') {
        *plVar1 = lVar4;
      }
      else {
        if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        *plVar1 = lVar4;
        *(undefined1 *)(param_1 + 0x10d8) = 1;
      }
    }
  }
LAB_005f9048:
  FUN_009525f0(*(undefined8 *)(param_1 + 0x1098),*(undefined1 *)(param_1 + 0x10c8));
  return;
}


// ===== 005f92ac  FUN_005f92ac =====

void FUN_005f92ac(long param_1)

{
  FUN_005f8fc4(param_1 + -0x28);
  return;
}


// ===== 005f92b8  FUN_005f92b8 =====

void FUN_005f92b8(byte *param_1,long param_2,long param_3,byte param_4,byte param_5)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar4 = FUN_00940144(param_2 + 0x8a8,*(undefined1 *)(param_3 + 0x1c8));
  if ((uVar4 & 1) == 0) {
    lVar1 = *(long *)(param_2 + 0x90);
    for (lVar5 = *(long *)(param_2 + 0x88); lVar5 != lVar1; lVar5 = lVar5 + 0x68) {
      while (*(uint *)(lVar5 + 0x60) != (uint)*(byte *)(param_3 + 0x1c8)) {
        FUN_0094011c(param_2 + 0x8a8,0);
        lVar5 = lVar5 + 0x68;
        if (lVar5 == lVar1) goto LAB_005f9348;
      }
      FUN_005f7288(param_2,lVar5);
    }
  }
LAB_005f9348:
  uVar6 = *(undefined8 *)(param_3 + 0x9e0);
  uVar3 = FUN_005f93d8(param_2,param_3);
  bVar2 = (uVar3 & 0xfffffffb) != 0;
  if (bVar2) {
    FUN_005fedc4(param_2 + 0x240);
    uVar6 = 0xaaaaaaaaaaaaaa00;
    param_4 = param_4 | param_5 & *(byte *)(param_2 + 0x10c9) ^ 1;
  }
  else {
    param_4 = uVar3 == 4;
    *(undefined1 *)(param_2 + 0x10c9) = 1;
  }
  *(undefined8 *)(param_1 + 8) = uVar6;
  *param_1 = param_4 & 1;
  param_1[0x10] = !bVar2;
  param_1[0x18] = bVar2;
  return;
}


// ===== 005f93d8  FUN_005f93d8 =====

/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffed0 : 0x005f9648 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_005f93d8(long param_1,long *param_2)

{
  ulong *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  undefined4 uVar13;
  long *plVar14;
  uint uVar15;
  undefined **local_200;
  long *local_1f8;
  undefined1 *local_1f0;
  undefined4 local_1e8;
  undefined1 local_1e4;
  ulong local_1e0;
  undefined1 local_1d8 [68];
  undefined1 local_194;
  uint local_190;
  undefined1 local_18c;
  char *local_188;
  undefined8 uStack_180;
  undefined1 uStack_171;
  char *local_170;
  undefined ***pppuStack_168;
  ulong local_160;
  char **local_158;
  char *local_150;
  ulong *puStack_148;
  ulong local_140;
  char **local_138;
  char *local_130;
  ulong *puStack_128;
  ulong local_120;
  char **local_118;
  char *local_110;
  ulong *puStack_108;
  char **local_100;
  char **ppcStack_f8;
  char *local_f0;
  char ***pppcStack_e8;
  long local_e0;
  char **ppcStack_d8;
  char *local_d0;
  long *local_c8;
  ulong local_c0;
  char **ppcStack_b8;
  char *local_b0;
  ulong *puStack_a8;
  ulong local_a0;
  char **ppcStack_98;
  char *local_90;
  ulong *puStack_88;
  ulong local_80;
  char **ppcStack_78;
  long *local_70 [2];
  
  local_70[0] = param_2;
  if (((*(byte *)(*(long *)(param_1 + 0x1150) + 0x10) & 1) == 0) &&
     (plVar8 = *(long **)(param_1 + 0x1198),
     (ulong)((long)plVar8 - *(long *)(param_1 + 0x1190)) < 0x1e0)) {
    if (plVar8 < *(long **)(param_1 + 0x11a0)) {
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      local_70[0] = (long *)0x0;
      plVar14 = plVar8 + 1;
      *plVar8 = (long)param_2;
    }
    else {
      plVar14 = (long *)FUN_005f9c84(param_1 + 0x1190,local_70);
    }
    *(long **)(param_1 + 0x1198) = plVar14;
    if (((long)plVar14 - *(long *)(param_1 + 0x1190) == 0x1e0) &&
       (uVar9 = FUN_004249b0(), (uVar9 & 1) == 0)) {
      FUN_00623bb0(&DAT_001f4e98,"../../video/video_receive_stream2.cc",0x1edb,
                   "About to halt recordable encoded frame output due to too many buffered frames.")
      ;
    }
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x115c));
    if (((((int)param_2[4] == 3) && ((int)param_2[1] == 0)) && (*(int *)((long)param_2 + 0xc) == 0))
       && ((*(byte *)(param_1 + 0x118c) & 1) == 0)) {
      *(undefined8 *)(param_1 + 0x1184) = 0;
      *(undefined1 *)(param_1 + 0x118c) = 1;
    }
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x115c));
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  uVar7 = FUN_00940150(param_1 + 0x8a8,param_2);
  if (((int)uVar7 < 0) && (uVar9 = FUN_004022fc(), (uVar9 & 1) == 0)) {
    local_200 = (undefined **)0x1dbc0b;
    local_1f8 = (long *)0x1f42;
    local_1f0 = &uStack_171;
    pppuStack_168 = &local_200;
    local_170 = "Failed to decode frame. Return code: ";
    local_158 = &local_170;
    puStack_148 = &local_160;
    local_140 = (ulong)*(uint *)(param_1 + 0xa8);
    local_150 = ", SSRC: ";
    local_138 = &local_150;
    local_130 = ", frame RTP timestamp: ";
    local_118 = &local_130;
    local_120 = (ulong)*(uint *)(param_2 + 0x14);
    puStack_108 = &local_120;
    local_110 = ", type: ";
    iVar4 = (int)param_2[4];
    local_160 = (ulong)uVar7;
    if (iVar4 == 0) {
      local_188 = "empty";
LAB_005f95a8:
      uStack_180 = 5;
    }
    else {
      if (iVar4 == 4) {
        local_188 = "delta";
        goto LAB_005f95a8;
      }
      if (iVar4 != 3) {
        puStack_128 = &local_140;
                    /* WARNING: Subroutine does not return */
        FUN_0061ff28();
      }
      local_188 = "key";
      uStack_180 = 3;
    }
    local_100 = &local_188;
    ppcStack_f8 = &local_110;
    pppcStack_e8 = &local_100;
    local_c8 = &local_e0;
    ppcStack_d8 = &local_f0;
    local_f0 = ", size: ";
    ppcStack_b8 = &local_d0;
    local_e0 = param_2[0x13];
    ppcStack_98 = &local_b0;
    local_c0 = (ulong)*(uint *)(param_2 + 1);
    local_d0 = ", width: ";
    ppcStack_78 = &local_90;
    puStack_a8 = &local_c0;
    local_b0 = ", height: ";
    local_a0 = (ulong)*(uint *)((long)param_2 + 0xc);
    puStack_88 = &local_a0;
    local_90 = ", spatial idx: ";
    local_80 = 0xffffffff;
    if ((param_2[0x18] & 0x100000000U) != 0) {
      local_80 = param_2[0x18] & 0xffffffff;
    }
    puVar1 = puStack_128 + 1;
    uVar9 = *puStack_128;
    puVar2 = (undefined4 *)((undefined8 *)*puVar1)[1];
    puVar10 = *(undefined8 **)(puVar2 + 2);
    puVar3 = (undefined8 *)puVar10[1];
    uVar13 = (undefined4)param_2[0x19];
    if ((param_2[0x19] & 0x100000000U) == 0) {
      uVar13 = 0xffffffff;
    }
    puStack_128 = &local_140;
    FUN_00623bb0(&DAT_001fc276,*puVar3,*(undefined4 *)(puVar3 + 1),*puVar10,*puVar2,
                 *(undefined8 *)*puVar1,(int)uVar9,", frame RTP timestamp: ",
                 *(uint *)(param_2 + 0x14),", type: ",local_100,", size: ",local_e0,", width: ",
                 *(uint *)(param_2 + 1),", height: ",*(uint *)((long)param_2 + 0xc),
                 ", spatial idx: ",(int)local_80,", temporal idx: ",uVar13,", id: ",param_2[0x13c]);
  }
  if (bVar6) {
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x115c));
    bVar5 = *(byte *)(param_1 + 0x118c);
    if ((bVar5 & 1) == 0) {
      pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x115c));
      uVar9 = 0xaaaaaaaaaaaaaa00;
    }
    else {
      uVar9 = *(ulong *)(param_1 + 0x1184);
      pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x115c));
      if (uVar9 == 0) goto LAB_005f9884;
    }
    plVar8 = *(long **)(param_1 + 0x1190);
    plVar14 = *(long **)(param_1 + 0x1198);
    if (plVar8 != plVar14) {
      do {
        plVar11 = (long *)*plVar8;
        uVar15 = *(uint *)(plVar11 + 1);
        uVar12 = (ulong)*(uint *)((long)plVar11 + 0xc);
        if ((int)plVar11[4] == 3 && uVar15 == 0) {
          bVar6 = uVar12 == 0;
          if (bVar6) {
            uVar12 = uVar9 >> 0x20;
          }
          uVar15 = 0;
          if ((bVar6) && (uVar15 = (uint)uVar9, (bVar5 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                      );
          }
        }
        local_1f8 = (long *)plVar11[0x12];
        local_200 = &PTR_FUN_00d26f68;
        if (local_1f8 != (long *)0x0) {
          (**(code **)*local_1f8)();
        }
        uVar12 = (ulong)uVar15 | uVar12 << 0x20;
        local_1f0 = (undefined1 *)(**(code **)(*plVar11 + 0x18))(plVar11);
        local_1e8 = (undefined4)plVar11[0x3a];
        local_1e4 = (int)plVar11[4] == 3;
        local_1d8[0] = 0;
        bVar6 = *(char *)((long)plVar11 + 300) == '\x01';
        local_194 = 0;
        local_190 = local_190 & 0xffffff00;
        local_18c = 0;
        local_1e0 = uVar12;
        if (bVar6) {
          FUN_00659adc(local_1d8,plVar11 + 0x1d);
        }
        if (*(uint *)((long)plVar11 + 0x24) != 0) {
          local_18c = 1;
          local_190 = *(uint *)((long)plVar11 + 0x24);
        }
        local_194 = bVar6;
        (**(code **)(param_1 + 0x1148))(param_1 + 0x1138,&local_200);
        local_200 = &PTR_FUN_00d26f68;
        if (local_1f8 != (long *)0x0) {
          (**(code **)(*local_1f8 + 8))();
        }
        plVar8 = plVar8 + 1;
      } while (plVar8 != plVar14);
      plVar14 = *(long **)(param_1 + 0x1198);
      plVar8 = *(long **)(param_1 + 0x1190);
    }
    while (plVar8 != plVar14) {
      plVar14 = plVar14 + -1;
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar11 = (long *)*plVar14;
      *plVar14 = 0;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 8))();
      }
    }
    *(long **)(param_1 + 0x1198) = plVar8;
  }
LAB_005f9884:
  plVar8 = local_70[0];
  local_70[0] = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  return uVar7;
}


// ===== 005f9918  FUN_005f9918 =====

void FUN_005f9918(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d26f68;
  if ((long *)param_1[1] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005f993c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[1] + 8))();
    return;
  }
  return;
}


// ===== 005f9944  FUN_005f9944 =====

void FUN_005f9944(long param_1)

{
  FUN_00874c9c(param_1 + 0x1a0);
  return;
}


// ===== 005f9950  FUN_005f9950 =====

void FUN_005f9950(undefined8 *param_1,long param_2,long *param_3,ulong param_4)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 uStack_e1;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined1 *puStack_8c;
  undefined1 uStack_81;
  long *local_80 [2];
  code *local_70;
  code *pcStack_68;
  
  puStack_8c = &DAT_aaaaaaaaaaaaaaaa;
  uStack_90 = 0xaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_98 = 0xaaaaaaaa;
  local_94 = 0xaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0066f1ac(&local_e0);
  lVar7 = *(long *)(param_2 + 0x10d0);
  bVar1 = *(byte *)(param_2 + 0x10d8);
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = FUN_005fa1bc;
  param_1[3] = &DAT_001fbc50;
  plVar5 = (long *)(param_2 + 0x10d0);
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  if ((param_4 & 1) == 0) {
    bVar2 = bVar1;
    if ((char)param_3[5] == '\x01') {
      lVar3 = param_3[4] * 1000;
    }
    else {
      lVar3 = 0;
    }
  }
  else {
    lVar3 = (**(code **)(**(long **)(param_2 + 0x48) + 0x10))();
    bVar2 = *(byte *)(param_2 + 0x10d8);
  }
  if ((bVar2 & 1) == 0) {
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *plVar5 = lVar3;
    *(undefined1 *)(param_2 + 0x10d8) = 1;
  }
  else {
    *plVar5 = lVar3;
  }
  puVar6 = (undefined *)param_3[3];
  lVar3 = *param_3;
  lVar4 = param_3[1];
  plVar5 = *(long **)(param_2 + 0x11b8);
  lVar9 = param_3[3];
  lVar8 = param_3[2];
  if (*(long *)(puVar6 + 8) != 0) {
    param_3[2] = 0;
    param_3[3] = (long)&DAT_001fbc50;
  }
  local_80[0] = (long *)operator_new(0x48);
  *local_80[0] = param_2;
  local_80[0][1] = (long)&local_e0;
  local_80[0][2] = (long)param_1;
  local_80[0][3] = lVar3;
  local_80[0][4] = lVar4;
  local_80[0][6] = lVar9;
  local_80[0][5] = lVar8;
  lVar4 = *(long *)(puVar6 + 8);
  local_80[0][7] = lVar7;
  *(byte *)(local_80[0] + 8) = bVar1;
  local_70 = FUN_005fabe4;
  pcStack_68 = FUN_005faa78;
  if (lVar4 != 0) {
    puVar6 = &DAT_001fbc50;
  }
  (**(code **)(*plVar5 + 8))(plVar5,local_80,&uStack_81,&uStack_e1);
  (*local_70)(0,local_80,local_80);
  if (*(code **)(puVar6 + 8) != (code *)0x0) {
    (**(code **)(puVar6 + 8))(lVar3);
  }
  if ((param_4 & 1) != 0) {
    FUN_00608884(param_2 + 0x9c0);
    *(undefined1 *)(param_2 + 0x1158) = 1;
  }
  FUN_0066f318(&local_e0,0x7fffffffffffffff,3000000);
  FUN_0066f2b0(&local_e0);
  return;
}


// ===== 005f9b60  FUN_005f9b60 =====

void FUN_005f9b60(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = (**(code **)(**(long **)(param_1 + 0x48) + 0x10))();
  FUN_00608884(param_1 + 0x9c0);
  puVar1 = (undefined8 *)(param_1 + 0x10d0);
  if (*(char *)(param_1 + 0x10d8) == '\x01') {
    *puVar1 = uVar2;
  }
  else {
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *puVar1 = uVar2;
    *(undefined1 *)(param_1 + 0x10d8) = 1;
  }
  *(undefined1 *)(param_1 + 0x1158) = 1;
  return;
}


// ===== 005f9bf4  FUN_005f9bf4 =====

void FUN_005f9bf4(long param_1,undefined4 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(long **)(param_1 + 0x10c0);
  *(undefined8 *)(param_1 + 0x10c0) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 0x10b8) = param_2;
  *(undefined1 *)(param_1 + 0x10bc) = 1;
  uVar2 = (**(code **)(**(long **)(param_1 + 0x10a0) + 0x10))
                    (*(long **)(param_1 + 0x10a0),param_2,*(undefined8 *)(param_1 + 0x10b0));
  plVar1 = *(long **)(param_1 + 0x10c0);
  *(undefined8 *)(param_1 + 0x10c0) = uVar2;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005f9c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1);
    return;
  }
  return;
}


// ===== 005f9c84  FUN_005f9c84 =====

undefined8 * FUN_005f9c84(long *param_1,undefined8 *param_2)

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
    FUN_005f9d7c();
LAB_005f9d78:
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
    if (uVar6 >> 0x3d != 0) goto LAB_005f9d78;
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


// ===== 005f9d7c  FUN_005f9d7c =====

void FUN_005f9d7c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 005f9d94  FUN_005f9d94 =====

void FUN_005f9d94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d26f68;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}


// ===== 005f9de0  FUN_005f9de0 =====

void FUN_005f9de0(long *param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 8);
  *param_1 = (long)puVar1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005f9df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)();
    return;
  }
  return;
}


// ===== 005f9e00  FUN_005f9e00 =====

void FUN_005f9e00(undefined1 *param_1,long param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_2 + 0x6c);
  *param_1 = 0;
  param_1[0x44] = 0;
  if (cVar1 == '\x01') {
    if (param_1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    FUN_00659adc(param_1,param_2 + 0x28);
    param_1[0x44] = 1;
  }
  return;
}


// ===== 005f9e64  FUN_005f9e64 =====

undefined8 FUN_005f9e64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}


// ===== 005f9e70  FUN_005f9e70 =====

undefined4 FUN_005f9e70(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}


// ===== 005f9e7c  FUN_005f9e7c =====

undefined1 FUN_005f9e7c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1c);
}


// ===== 005f9e88  FUN_005f9e88 =====

undefined8 FUN_005f9e88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


// ===== 005f9e94  FUN_005f9e94 =====

long FUN_005f9e94(long param_1)

{
  return *(long *)(param_1 + 0x10) * 1000;
}


// ===== 005f9ea8  FUN_005f9ea8 =====

void FUN_005f9ea8(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *__src;
  ulong __n;
  undefined8 *__dest;
  
  __src = (undefined8 *)*param_2;
  __n = param_2[1];
  if ((__src == (undefined8 *)0x0) && (__n != 0)) {
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


// ===== 005f9f9c  FUN_005f9f9c =====

void FUN_005f9f9c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 *puVar3;
  undefined8 **local_48;
  ulong uStack_40;
  byte bStack_31;
  
  FUN_006224f8(&local_48,*param_2);
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    pppuVar2 = &local_48;
  }
  thunk_FUN_00547cac(param_3,pppuVar2,uStack_40);
  if ((char)bStack_31 < '\0') {
    operator_delete(local_48);
  }
  uVar1 = param_3[1];
  puVar3 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar3 = param_3;
  }
  *param_1 = puVar3;
  param_1[1] = uVar1;
  return;
}


// ===== 005fa03c  FUN_005fa03c =====

void FUN_005fa03c(long *param_1,ulong param_2,undefined4 param_3)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  if (0x7ffffffffffffff6 < param_2) {
    FUN_00621ff8("absl::StringResizeAndOverwrite");
    goto LAB_005fa1b8;
  }
  uVar6 = (ulong)*(char *)((long)param_1 + 0x17);
  if ((long)uVar6 < 0) {
    uVar6 = param_1[1];
    if (uVar6 < param_2) {
      uVar4 = (ulong)param_1[2] >> 0x38;
      lVar3 = (param_1[2] & 0x7fffffffffffffffU) - 1;
      goto LAB_005fa0a8;
    }
    plVar7 = (long *)*param_1;
LAB_005fa11c:
    param_1[1] = param_2;
  }
  else if (uVar6 < param_2) {
    lVar3 = 0x16;
    uVar4 = uVar6 & 0xffffffff;
LAB_005fa0a8:
    if (lVar3 - uVar6 < param_2 - uVar6) {
      FUN_0054774c(param_1,lVar3,param_2 - lVar3,uVar6,uVar6,0,0);
      uVar4 = (ulong)*(byte *)((long)param_1 + 0x17);
      param_1[1] = uVar6;
    }
    plVar7 = (long *)*param_1;
    if ((uVar4 & 0x80) == 0) {
      plVar7 = param_1;
    }
    memset((void *)((long)plVar7 + uVar6),0,param_2 - uVar6);
    if (*(char *)((long)param_1 + 0x17) < '\0') goto LAB_005fa11c;
    *(byte *)((long)param_1 + 0x17) = (byte)param_2 & 0x7f;
  }
  else {
    *(byte *)((long)param_1 + 0x17) = (byte)param_2;
    plVar7 = param_1;
  }
  *(undefined1 *)((long)plVar7 + param_2) = 0;
  plVar7 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar7 = param_1;
  }
  lVar3 = FUN_006200e4(param_3,plVar7);
  uVar6 = lVar3 - (long)plVar7;
  if (uVar6 <= param_2) {
    bVar1 = *(byte *)((long)param_1 + 0x17);
    plVar5 = (long *)*param_1;
    plVar7 = plVar5;
    if ((bVar1 & 0x80) == 0) {
      plVar7 = param_1;
    }
    if (*(char *)((long)plVar7 + param_2) == '\0') {
      if ((char)bVar1 < '\0') {
        if ((ulong)param_1[1] < uVar6) goto LAB_005fa1b8;
        param_1[1] = uVar6;
      }
      else {
        if (bVar1 < uVar6) {
LAB_005fa1b8:
                    /* WARNING: Subroutine does not return */
          FUN_005f5590();
        }
        *(char *)((long)param_1 + 0x17) = (char)uVar6;
        plVar5 = param_1;
      }
      *(undefined1 *)((long)plVar5 + uVar6) = 0;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x5fa1ac);
  (*pcVar2)();
}


// ===== 005fa1bc  FUN_005fa1bc =====

void FUN_005fa1bc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005dc0b4();
}


// ===== 005fa1cc  FUN_005fa1cc =====

void FUN_005fa1cc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_005fa1cc(param_1,*param_2);
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


// ===== 005fa240  FUN_005fa240 =====

long * FUN_005fa240(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_2 == (undefined8 *)0x0) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = (long *)operator_new(0x28);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar5 = *param_2;
    *(undefined8 *)((long)plVar2 + 0x1c) = *(undefined8 *)((long)param_2 + 0x1c);
    lVar3 = FUN_005fa240(param_1,uVar5,param_3);
    lVar4 = FUN_005fa240(param_1,param_2[1],param_3);
    uVar1 = *(undefined1 *)(param_2 + 3);
    *plVar2 = lVar3;
    plVar2[1] = lVar4;
    *(undefined1 *)(plVar2 + 3) = uVar1;
    if (lVar3 != 0) {
      *(long **)(lVar3 + 0x10) = plVar2;
    }
    if (lVar4 != 0) {
      *(long **)(lVar4 + 0x10) = plVar2;
    }
  }
  return plVar2;
}


// ===== 005fa2f8  FUN_005fa2f8 =====

void FUN_005fa2f8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_005fa2f8(param_1,*param_2);
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


// ===== 005fa36c  FUN_005fa36c =====

void FUN_005fa36c(long *param_1)

{
  *(undefined1 *)(*param_1 + 0x199) = 0;
  return;
}


// ===== 005fa37c  FUN_005fa37c =====

void FUN_005fa37c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  lVar1 = *(long *)(lVar3 + 0x88);
  lVar2 = *(long *)(lVar3 + 0x90);
  *(undefined1 *)(lVar3 + 0x199) = 1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x68) {
    FUN_0094011c(lVar3 + 0x8a8,0,*(undefined4 *)(lVar1 + 0x60));
  }
  FUN_0066f2dc(param_1[1]);
  return;
}


// ===== 005fa3e0  FUN_005fa3e0 =====

void FUN_005fa3e0(void)

{
  return;
}


// ===== 005fa3e8  FUN_005fa3e8 =====

void FUN_005fa3e8(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 005fa3f4  FUN_005fa3f4 =====

undefined8 FUN_005fa3f4(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004249b0();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../video/video_receive_stream2.cc",0x593,
                 "Can\'t initialize NullVideoDecoder.");
  }
  return 1;
}


// ===== 005fa438  FUN_005fa438 =====

undefined8 FUN_005fa438(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004249b0();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../video/video_receive_stream2.cc",0x5c3,
                 "The NullVideoDecoder doesn\'t support decoding.");
  }
  return 0;
}


// ===== 005fa47c  FUN_005fa47c =====

void FUN_005fa47c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x005fa48c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,param_2,param_4);
  return;
}


// ===== 005fa490  FUN_005fa490 =====

undefined8 FUN_005fa490(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004249b0();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../video/video_receive_stream2.cc",0x5f3,
                 "Can\'t register decode complete callback on NullVideoDecoder.");
  }
  return 0;
}


// ===== 005fa4d4  FUN_005fa4d4 =====

undefined8 FUN_005fa4d4(void)

{
  return 0;
}


// ===== 005fa4e0  FUN_005fa4e0 =====

char * FUN_005fa4e0(void)

{
  return "NullVideoDecoder";
}


// ===== 005fa4f0  FUN_005fa4f0 =====

void FUN_005fa4f0(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined8 local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  
  puVar3 = (undefined4 *)*param_1;
  uVar1 = *(ulong *)(puVar3 + 2);
  lVar4 = *(long *)(puVar3 + 0xc);
  uVar2 = uVar1 / 1000;
  if (499 < uVar1 % 1000) {
    uVar2 = uVar2 + 1;
  }
  local_28 = &DAT_aaaaaaaaaaaaaaaa;
  if ((uVar1 & 0x8000000000000000) != 0) {
    uVar2 = -(-uVar1 / 1000) - (ulong)(500 < -uVar1 % 1000);
  }
  local_38 = 0xffffffffffffffff;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  uVar2 = FUN_005f303c(lVar4 + 0xf90,*puVar3,uVar2,&local_28,&local_30,&local_38);
  if ((uVar2 & 1) != 0) {
    FUN_005feaac(local_38,lVar4 + 0x240,local_28,local_30);
  }
  FUN_005fe860(lVar4 + 0x240,puVar3);
  FUN_0087435c(lVar4 + 0x1a0,puVar3 + 10,*(undefined8 *)(puVar3 + 8));
  return;
}


// ===== 005fa5d8  FUN_005fa5d8 =====

void FUN_005fa5d8(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  void *pvVar9;
  void *pvVar10;
  void *pvVar11;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x5fa740);
      (*pcVar1)();
    }
    pvVar9 = (void *)*param_2;
    if (pvVar9 != (void *)0x0) {
      pvVar10 = *(void **)((long)pvVar9 + 0x28);
      if ((pvVar10 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,pvVar10), iVar2 == 1)) {
        pvVar11 = *(void **)((long)pvVar10 + 8);
        if (pvVar11 != (void *)0x0) {
          pvVar4 = pvVar11;
          pvVar5 = *(void **)((long)pvVar10 + 0x10);
          if (pvVar11 != *(void **)((long)pvVar10 + 0x10)) {
            do {
              pvVar4 = (void *)((long)pvVar5 + -0x68);
              if (pvVar4 == (void *)0x0) {
LAB_005fa728:
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                          );
              }
              pvVar3 = *(void **)((long)pvVar5 + -0x60);
              if (pvVar3 != (void *)0x0) {
                pvVar6 = *(void **)((long)pvVar5 + -0x58);
                uVar8 = (ulong)((long)pvVar6 + (-4 - ((long)pvVar6 << 0x3e))) >> 2;
                uVar7 = (ulong)(((long)pvVar3 - (long)pvVar6 << 0x3e) -
                               ((long)pvVar3 - (long)pvVar6)) >> 2;
                if (uVar8 <= uVar7) {
                  uVar7 = uVar8;
                }
                if ((1 < uVar7) && ((((int)pvVar3 - (int)pvVar6 | -(int)pvVar6) & 3U) == 0)) {
                  uVar7 = uVar7 & 0x3ffffffffffffffe;
                  pvVar6 = (void *)((long)pvVar6 + uVar7 * -4);
                  do {
                    uVar7 = uVar7 - 2;
                  } while (uVar7 != 0);
                }
                while (pvVar6 != pvVar3) {
                  pvVar6 = (void *)((long)pvVar6 + -4);
                  if (pvVar6 == (void *)0x0) goto LAB_005fa728;
                }
                *(void **)((long)pvVar5 + -0x58) = pvVar3;
                operator_delete(pvVar3);
              }
              pvVar5 = pvVar4;
            } while (pvVar11 != pvVar4);
            pvVar4 = *(void **)((long)pvVar10 + 8);
          }
          *(void **)((long)pvVar10 + 0x10) = pvVar11;
          operator_delete(pvVar4);
        }
        operator_delete(pvVar10);
      }
      operator_delete(pvVar9);
      return;
    }
  }
  return;
}


// ===== 005fa740  FUN_005fa740 =====

void FUN_005fa740(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined1 uStack_e1;
  undefined1 *local_e0;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_b1;
  long *local_b0 [2];
  code *local_a0;
  code *pcStack_98;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined1 uStack_74;
  undefined8 uStack_73;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  plVar8 = (long *)*param_1;
  lVar7 = *plVar8;
  if ((*(byte *)(lVar7 + 0x199) & 1) == 0) {
    lVar6 = plVar8[3];
    uVar1 = *(undefined4 *)(lVar6 + 0xa0);
    plVar8[3] = 0;
    uStack_d8 = 0xaa;
    uStack_d7 = 0xaaaaaaaaaaaaaa;
    local_e0 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_c8 = 0xaa;
    uStack_c7 = 0xaaaaaaaaaaaaaa;
    uStack_d0 = 0xaa;
    uStack_cf = 0xaaaaaaaaaaaaaa;
    FUN_005f92b8(&local_e0,lVar7,lVar6,(char)plVar8[2],(char)plVar8[4]);
    plVar5 = (long *)(**(code **)(**(long **)(lVar7 + 0x188) + 0xd8))();
    lVar6 = *(long *)(lVar7 + 0x11b0);
    if (lVar6 != 0) {
      FUN_00d0f740(1,lVar6);
    }
    uStack_73 = CONCAT17(uStack_c8,uStack_cf);
    lVar9 = plVar8[1];
    uVar2 = *(undefined1 *)((long)plVar8 + 0x11);
    lVar4 = plVar8[2];
    local_84 = SUB84(local_e0,0);
    uStack_80 = (undefined4)((ulong)local_e0 >> 0x20);
    uStack_7c._1_3_ = (undefined3)uStack_d7;
    uStack_7c = CONCAT31(uStack_7c._1_3_,uStack_d8);
    uStack_78 = (undefined4)((uint7)uStack_d7 >> 0x18);
    uStack_74 = uStack_d0;
    plVar8 = (long *)operator_new(0x40);
    *plVar8 = lVar7;
    plVar8[1] = lVar9;
    *(undefined4 *)(plVar8 + 2) = uVar1;
    *(ulong *)((long)plVar8 + 0x1c) = CONCAT44(uStack_7c,uStack_80);
    *(ulong *)((long)plVar8 + 0x14) = CONCAT44(local_84,uStack_88);
    *(undefined8 *)((long)plVar8 + 0x29) = uStack_73;
    *(ulong *)((long)plVar8 + 0x21) = CONCAT17(uStack_74,CONCAT43(uStack_78,uStack_7c._1_3_));
    *(undefined1 *)(plVar8 + 7) = uVar2;
    *(char *)((long)plVar8 + 0x39) = (char)lVar4;
    local_b0[0] = (long *)operator_new(0x30);
    *local_b0[0] = lVar6;
    local_b0[0][4] = (long)FUN_005ea56c;
    local_b0[0][5] = (long)FUN_005fa938;
    local_b0[0][2] = (long)plVar8;
    local_b0[0][3] = 0x40;
    local_a0 = FUN_005db390;
    pcStack_98 = FUN_005db348;
    (**(code **)(*plVar5 + 8))(plVar5,local_b0,&uStack_b1,&uStack_e1);
    (*local_a0)(0,local_b0,local_b0);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005fa8c0  FUN_005fa8c0 =====

void FUN_005fa8c0(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  long *plVar2;
  void *pvVar3;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x5fa938);
      (*pcVar1)();
    }
    pvVar3 = (void *)*param_2;
    if (pvVar3 != (void *)0x0) {
      plVar2 = *(long **)((long)pvVar3 + 0x18);
      *(undefined8 *)((long)pvVar3 + 0x18) = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      operator_delete(pvVar3);
      return;
    }
  }
  return;
}


// ===== 005fa938  FUN_005fa938 =====

void FUN_005fa938(undefined8 *param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  
  plVar5 = (long *)*param_1;
  lVar3 = *plVar5;
  *(char *)(lVar3 + 0x10c8) = (char)plVar5[6];
  if ((char)plVar5[5] == '\x01') {
    FUN_00609a14(lVar3 + 0x9c0,plVar5[4]);
  }
  lVar4 = plVar5[2];
  *(undefined1 *)(lVar3 + 0x11c4) = 1;
  *(int *)(lVar3 + 0x11c0) = (int)lVar4;
  lVar4 = plVar5[1];
  bVar2 = *(byte *)(plVar5 + 3);
  if (*(char *)(lVar3 + 0x1158) == '\x01') {
    if ((char)plVar5[7] == '\x01') {
      *(undefined1 *)(lVar3 + 0x1158) = 0;
      bVar2 = bVar2 & 1;
      goto joined_r0x005faa0c;
    }
    if (*(char *)((long)plVar5 + 0x39) == '\0') goto joined_r0x005faa0c;
    auVar6 = FUN_00609400(lVar3 + 0x9c0);
    if ((auVar6 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      lVar1 = lVar4;
      if (lVar4 != -0x8000000000000000) {
        lVar1 = lVar4 + auVar6._0_8_ * -1000;
      }
      if (((lVar4 != 0x7fffffffffffffff) && (auVar6._0_8_ * 1000 != -0x8000000000000000)) &&
         (lVar1 < *(long *)(lVar3 + 0x10e8))) {
        bVar2 = bVar2 & 1;
        goto joined_r0x005faa0c;
      }
    }
  }
  else {
joined_r0x005faa0c:
    if (bVar2 == 0) goto LAB_005faa44;
  }
  FUN_00608884(lVar3 + 0x9c0);
  plVar5 = (long *)(lVar3 + 0x10d0);
  if (*(char *)(lVar3 + 0x10d8) == '\x01') {
    *plVar5 = lVar4;
  }
  else {
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *plVar5 = lVar4;
    *(undefined1 *)(lVar3 + 0x10d8) = 1;
  }
LAB_005faa44:
  FUN_009525f0(*(undefined8 *)(lVar3 + 0x1098),*(undefined1 *)(lVar3 + 0x10c8));
  return;
}


// ===== 005faa78  FUN_005faa78 =====

void FUN_005faa78(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  param_1 = (long *)*param_1;
  puVar5 = &DAT_001fbc50;
  puVar7 = (undefined8 *)param_1[2];
  lVar6 = *param_1;
  lVar1 = puVar7[3];
  puVar7[2] = 0;
  puVar7[3] = &DAT_001fbc50;
  if (*(code **)(lVar1 + 8) != (code *)0x0) {
    (**(code **)(lVar1 + 8))(*puVar7);
  }
  uVar2 = *(undefined8 *)(lVar6 + 0x1138);
  puVar7[1] = *(undefined8 *)(lVar6 + 0x1140);
  *puVar7 = uVar2;
  puVar7[2] = *(undefined8 *)(lVar6 + 0x1148);
  puVar7[3] = *(undefined8 *)(lVar6 + 0x1150);
  *(undefined **)(lVar6 + 0x1150) = &DAT_001fbc50;
  *(undefined8 *)(lVar6 + 0x1148) = 0;
  lVar1 = param_1[3];
  lVar10 = param_1[4];
  lVar9 = param_1[6];
  lVar8 = param_1[5];
  if (*(code **)param_1[6] != (code *)0x0) {
    lVar1 = (**(code **)param_1[6])();
    puVar5 = *(undefined **)(lVar6 + 0x1150);
  }
  *(long *)(lVar6 + 0x1150) = lVar9;
  *(long *)(lVar6 + 0x1148) = lVar8;
  uVar2 = *(undefined8 *)(lVar6 + 0x1138);
  *(long *)(lVar6 + 0x1138) = lVar1;
  *(long *)(lVar6 + 0x1140) = lVar10;
  if (*(code **)(puVar5 + 8) != (code *)0x0) {
    (**(code **)(puVar5 + 8))(uVar2);
  }
  if ((char)param_1[8] == '\x01') {
    uVar3 = param_1[7];
    if ((long)uVar3 < 0) {
      uVar4 = -(-uVar3 / 1000) - (ulong)(500 < -uVar3 % 1000);
      goto LAB_005fabb0;
    }
  }
  else {
    uVar3 = 0;
  }
  uVar4 = uVar3 / 1000;
  if (499 < uVar3 % 1000) {
    uVar4 = uVar4 + 1;
  }
LAB_005fabb0:
  lVar1 = param_1[2];
  *(ulong *)(lVar1 + 0x20) = uVar4;
  *(undefined1 *)(lVar1 + 0x28) = 1;
  FUN_0066f2dc(param_1[1]);
  return;
}


// ===== 005fabe4  FUN_005fabe4 =====

void FUN_005fabe4(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x5fac58);
      (*pcVar1)();
    }
    pvVar2 = (void *)*param_2;
    if (pvVar2 != (void *)0x0) {
      pcVar1 = *(code **)(*(long *)((long)pvVar2 + 0x30) + 8);
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(*(undefined8 *)((long)pvVar2 + 0x18));
      }
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}


// ===== 005fac58  FUN_005fac58 =====

void FUN_005fac58(undefined8 *param_1,undefined8 param_2)

{
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_00d27020;
  param_1[1] = param_2;
  return;
}


// ===== 005fac70  FUN_005fac70 =====

void FUN_005fac70(void)

{
  return;
}


// ===== 005fac78  FUN_005fac78 =====

void FUN_005fac78(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 005fac84  FUN_005fac84 =====

undefined8 FUN_005fac84(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x005faca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)**(undefined8 **)(param_1 + 8))();
    return uVar1;
  }
  return 0;
}


// ===== 005facb0  FUN_005facb0 =====

undefined8 FUN_005facb0(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x005facd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 8) + 8))();
    return uVar1;
  }
  return 0;
}


// ===== 005facdc  FUN_005facdc =====

void FUN_005facdc(long param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 1;
  return;
}


// ===== 005facf0  FUN_005facf0 =====

void FUN_005facf0(long param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


// ===== 005fad00  FUN_005fad00 =====

void FUN_005fad00(undefined8 *param_1,undefined4 param_2,long *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  void *pvVar2;
  
  param_1[4] = param_3;
  *param_1 = &PTR_FUN_00d27050;
  param_1[1] = &PTR_FUN_00d270b8;
  param_1[2] = &PTR_FUN_00d270e0;
  param_1[3] = &PTR_FUN_00d27108;
  uVar1 = (**(code **)(*param_3 + 0x10))(param_3);
  param_1[5] = uVar1;
  FUN_00845388(param_1 + 6);
  *(undefined4 *)(param_1 + 0x62) = param_2;
  FUN_007de7c4(0x447a0000,param_1 + 99,1000);
  FUN_007de7c4(0x447a0000,param_1 + 0x6f,1000);
  param_1[0x7c] = 0;
  param_1[0x7b] = 0x8000000000000000;
  FUN_009925f4(param_1 + 0x7d);
  FUN_009925f4(param_1 + 0x81);
  FUN_009925f4(param_1 + 0x85);
  FUN_009925f4(param_1 + 0x89);
  FUN_009925f4(param_1 + 0x8d);
  FUN_009925f4(param_1 + 0x91);
  pvVar2 = operator_new(0x108);
  FUN_00603058();
  param_1[0x95] = pvVar2;
  param_1[0x96] = 1000;
  param_1[0x98] = 0;
  param_1[0x97] = 0;
  param_1[0x9a] = 0;
  param_1[0x99] = 0;
  param_1[0x9c] = 0;
  param_1[0x9b] = 0;
  param_1[0x9f] = 0;
  param_1[0x9e] = 0;
  param_1[0x9d] = param_1 + 0x9e;
  FUN_005f4cac(param_1 + 0xa0,param_3,0,40000);
  FUN_009925f4(param_1 + 0xab);
  param_1[0xaf] = 0;
  param_1[0xb0] = param_1 + 0xb1;
  *(undefined1 *)(param_1 + 0xb3) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  param_1[0xb2] = 0;
  param_1[0xb1] = 0;
  *(undefined4 *)((long)param_1 + 0x59c) = 1;
  param_1[0xc0] = 0;
  param_1[0xbf] = 0;
  param_1[0xc2] = 0;
  param_1[0xc1] = 0;
  param_1[0xbe] = 0;
  param_1[0xbd] = 0;
  *(undefined1 *)(param_1 + 0xb5) = 0;
  *(undefined1 *)(param_1 + 0xb6) = 0;
  *(undefined1 *)(param_1 + 0xb7) = 0;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  *(undefined1 *)(param_1 + 0xb9) = 0;
  param_1[0xbb] = 0;
  param_1[0xba] = 0;
  param_1[0xbc] = 1000;
  *(undefined1 *)((long)param_1 + 0x61c) = 0;
  *(undefined1 *)(param_1 + 0xc4) = 0;
  *(undefined1 *)(param_1 + 0xc5) = 0;
  *(undefined1 *)(param_1 + 0xc6) = 0;
  *(undefined1 *)(param_1 + 199) = 0;
  *(undefined1 *)(param_1 + 0xc3) = 0;
  param_1[200] = param_4;
  FUN_007ebca0(param_1 + 0xc9);
  *(undefined4 *)((long)param_1 + 0x164) = *(undefined4 *)(param_1 + 0x62);
  return;
}


// ===== 005faeb8  FUN_005faeb8 =====

void FUN_005faeb8(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined8 *local_28;
  
  *param_1 = &PTR_FUN_00d27050;
  param_1[1] = &PTR_FUN_00d270b8;
  param_1[2] = &PTR_FUN_00d270e0;
  param_1[3] = &PTR_FUN_00d27108;
  FUN_007ebdcc(param_1[0xc9]);
  pvVar2 = (void *)param_1[0xc9];
  if ((pvVar2 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar2), iVar1 == 1)) {
    operator_delete(pvVar2);
  }
  FUN_005ff0b8(param_1 + 0xbd);
  local_28 = param_1 + 0xb0;
  FUN_005ff710(&local_28,param_1[0xb1]);
  FUN_00992610(param_1 + 0xab);
  FUN_005f52e4(param_1 + 0xa0);
  local_28 = param_1 + 0x9d;
  FUN_005ff644(&local_28,param_1[0x9e]);
  FUN_005ff28c(param_1 + 0x97);
  pvVar2 = (void *)param_1[0x95];
  param_1[0x95] = 0;
  if (pvVar2 != (void *)0x0) {
    FUN_00601d8c(pvVar2);
    operator_delete(pvVar2);
  }
  FUN_00992610(param_1 + 0x91);
  FUN_00992610(param_1 + 0x8d);
  FUN_00992610(param_1 + 0x89);
  FUN_00992610(param_1 + 0x85);
  FUN_00992610(param_1 + 0x81);
  FUN_00992610(param_1 + 0x7d);
  FUN_007de938(param_1 + 0x6f);
  FUN_007de938(param_1 + 99);
  FUN_0084546c(param_1 + 6);
  return;
}


// ===== 005fafe0  FUN_005fafe0 =====

void FUN_005fafe0(long param_1)

{
  FUN_005faeb8(param_1 + -8);
  return;
}


// ===== 005fafec  FUN_005fafec =====

void FUN_005fafec(long param_1)

{
  FUN_005faeb8(param_1 + -0x10);
  return;
}


// ===== 005faff8  FUN_005faff8 =====

void FUN_005faff8(long param_1)

{
  FUN_005faeb8(param_1 + -0x18);
  return;
}


// ===== 005fb004  FUN_005fb004 =====

void FUN_005fb004(void *param_1)

{
  FUN_005faeb8();
  operator_delete(param_1);
  return;
}


// ===== 005fb034  FUN_005fb034 =====

void FUN_005fb034(long param_1)

{
  FUN_005faeb8((void *)(param_1 + -8));
  operator_delete((void *)(param_1 + -8));
  return;
}


// ===== 005fb068  FUN_005fb068 =====

void FUN_005fb068(long param_1)

{
  FUN_005faeb8((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}


// ===== 005fb09c  FUN_005fb09c =====

void FUN_005fb09c(long param_1)

{
  FUN_005faeb8((void *)(param_1 + -0x18));
  operator_delete((void *)(param_1 + -0x18));
  return;
}


// ===== 005fb0d0  FUN_005fb0d0 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005fb0d0(long param_1,ulong param_2,long *param_3,long *param_4)

{
  undefined8 *******pppppppuVar1;
  size_t __n;
  ulong uVar2;
  undefined1 *puVar3;
  undefined8 *******pppppppuVar4;
  void *__src;
  byte bVar5;
  int iVar6;
  long lVar7;
  char *pcVar8;
  undefined1 *puVar9;
  long *plVar10;
  bool bVar11;
  uint uVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 *******__dest;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  int iVar21;
  long *plVar22;
  long *plVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  float fVar28;
  double dVar29;
  char local_2258;
  undefined7 uStack_2257;
  ulong uStack_2250;
  byte bStack_2241;
  undefined8 *******local_2240;
  undefined1 *puStack_2238;
  undefined8 local_2230;
  undefined8 *******local_2220;
  ulong uStack_2218;
  ulong local_2210;
  long lStack_2208;
  long local_2200;
  long lStack_21f8;
  long lStack_21f0;
  long lStack_21e8;
  long local_21e0;
  long lStack_21d8;
  long local_21d0;
  long lStack_21c8;
  long local_21c0;
  long lStack_21b8;
  long lStack_21b0;
  long lStack_21a8;
  long local_21a0;
  long lStack_2198;
  long local_2190;
  long lStack_2188;
  long lStack_2180;
  long lStack_2178;
  undefined8 local_2170;
  void *local_2168;
  void *local_2160;
  long local_2158;
  undefined8 *******local_2150;
  undefined8 *******local_2148;
  long local_2140;
  long local_2138;
  long lStack_2130;
  long local_2128;
  long local_2120;
  long lStack_2118;
  long local_2110;
  double dStack_2108;
  long lStack_2100;
  long lStack_20f8;
  undefined1 *local_20f0;
  undefined1 *puStack_20e8;
  undefined1 *local_20e0;
  undefined1 *local_20d0;
  undefined1 *puStack_20c8;
  undefined1 *local_20c0;
  undefined1 uStack_20a9;
  undefined1 auStack_20a8 [8192];
  long local_a8;
  
  lVar7 = tpidr_el0;
  local_a8 = *(long *)(lVar7 + 0x28);
  memset(auStack_20a8,0xaa,0x2000);
  local_20c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_20c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_20d0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00622830(&local_20d0,auStack_20a8,0x2000);
  lVar13 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))();
  uVar15 = 0x7fffffffffffffff;
  if ((lVar13 != 0x7fffffffffffffff) &&
     (lVar20 = *(long *)(param_1 + 0x28), lVar20 != -0x8000000000000000)) {
    uVar15 = 0x8000000000000000;
    if (lVar20 != 0x7fffffffffffffff && lVar13 != -0x8000000000000000) {
      uVar15 = lVar13 - lVar20;
    }
  }
  if ((0 < *(int *)(param_1 + 100)) || (0 < *(int *)(param_1 + 0x68))) {
    lVar20 = DAT_00d641d8;
    if (DAT_00d641d8 == 0) {
      lVar20 = FUN_006660d0("WebRTC.Video.ReceiveStreamLifetimeInSeconds",0x2b,1,100000,0x32);
      FUN_00d0f5e0(0,lVar20,&DAT_00d641d8);
      if (lVar20 != 0) goto LAB_005fb218;
    }
    else {
LAB_005fb218:
      uVar19 = uVar15 / 1000000;
      if (499999 < uVar15 % 1000000) {
        uVar19 = uVar19 + 1;
      }
      if ((uVar15 & 0x8000000000000000) != 0) {
        uVar19 = -(-uVar15 / 1000000) - (ulong)(500000 < -uVar15 % 1000000);
      }
      FUN_00666568(lVar20,uVar19);
    }
    uVar14 = FUN_006228b0(&local_20d0,"WebRTC.Video.ReceiveStreamLifetimeInSeconds ",0x2c);
    if ((long)uVar15 < 0) {
      uVar19 = -(-uVar15 / 1000000) - (ulong)(500000 < -uVar15 % 1000000);
    }
    else {
      uVar19 = uVar15 / 1000000;
      if (499999 < uVar15 % 1000000) {
        uVar19 = uVar19 + 1;
      }
    }
    uVar14 = FUN_00622a0c(uVar14,uVar19);
    FUN_00622844(uVar14,10);
  }
  uVar14 = FUN_006228b0(&local_20d0,"Frames decoded ",0xf);
  uVar14 = FUN_006229f8(uVar14,*(undefined4 *)(param_1 + 0xb8));
  FUN_00622844(uVar14,10);
  if (*(char *)(param_1 + 0x61c) == '\x01') {
    iVar21 = *(int *)(param_1 + 0x618) - *(int *)(param_1 + 0xb8);
    lVar20 = DAT_00d641e0;
    if (DAT_00d641e0 == 0) {
      lVar20 = FUN_006660d0("WebRTC.Video.DroppedFrames.Receiver",0x23,1,1000,0x32);
      FUN_00d0f5e0(0,lVar20,&DAT_00d641e0);
      if (lVar20 != 0) goto LAB_005fb344;
    }
    else {
LAB_005fb344:
      FUN_00666568(lVar20,iVar21);
    }
    uVar14 = FUN_006228b0(&local_20d0,"WebRTC.Video.DroppedFrames.Receiver ",0x24);
    uVar14 = FUN_00622910(uVar14,iVar21);
    FUN_00622844(uVar14,10);
  }
  if (((param_2 >> 0x20 & 1) != 0) && (9999999 < (long)uVar15)) {
    lVar20 = FUN_0066631c("WebRTC.Video.ReceivedPacketsLostInPercent",0x29,0x65);
    if (lVar20 != 0) {
      FUN_00666568(lVar20,param_2 & 0xffffffff);
    }
    uVar14 = FUN_006228b0(&local_20d0,"WebRTC.Video.ReceivedPacketsLostInPercent ",0x2a);
    uVar14 = FUN_00622910(uVar14,param_2 & 0xffffffff);
    FUN_00622844(uVar14,10);
  }
  if (*(char *)(param_1 + 0x5b8) == '\x01') {
    uVar15 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))();
    if ((long)uVar15 < 0) {
      uVar19 = -(-uVar15 / 1000) - (ulong)(500 < -uVar15 % 1000);
      bVar5 = *(byte *)(param_1 + 0x5b8);
    }
    else {
      uVar19 = uVar15 / 1000;
      if (499 < uVar15 % 1000) {
        uVar19 = uVar19 + 1;
      }
      bVar5 = *(byte *)(param_1 + 0x5b8);
    }
    if ((bVar5 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    uVar19 = uVar19 - *(long *)(param_1 + 0x5b0);
    if (9999 < (long)uVar19) {
      fVar28 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xb8));
      iVar21 = (int)((fVar28 * 1000.0) / (float)uVar19 + 0.5);
      lVar20 = DAT_00d641e8;
      if (DAT_00d641e8 == 0) {
        lVar20 = FUN_006660d0("WebRTC.Video.DecodedFramesPerSecond",0x23,1,100,0x32);
        FUN_00d0f5e0(0,lVar20,&DAT_00d641e8);
        if (lVar20 != 0) goto LAB_005fb4a4;
      }
      else {
LAB_005fb4a4:
        FUN_00666568(lVar20,iVar21);
      }
      uVar14 = FUN_006228b0(&local_20d0,"WebRTC.Video.DecodedFramesPerSecond ",0x24);
      uVar14 = FUN_00622910(uVar14,iVar21);
      FUN_00622844(uVar14,10);
      uVar12 = *(uint *)(param_1 + 0x3c);
      if (uVar12 != 0) {
        lVar20 = FUN_0066631c("WebRTC.Video.DelayedFramesToRenderer",0x24,0x65);
        if (lVar20 != 0) {
          uVar15 = 0;
          if ((ulong)uVar12 != 0) {
            uVar15 = (ulong)(*(long *)(param_1 + 0x5d0) * 100) / (ulong)uVar12;
          }
          FUN_00666568(lVar20,uVar15);
        }
        if (*(long *)(param_1 + 0x5d0) != 0) {
          lVar20 = DAT_00d641f0;
          if (DAT_00d641f0 == 0) {
            lVar20 = FUN_006660d0("WebRTC.Video.DelayedFramesToRenderer_AvgDelayInMs",0x31,1,1000,
                                  0x32);
            FUN_00d0f5e0(0,lVar20,&DAT_00d641f0);
            if (lVar20 == 0) goto LAB_005fb624;
          }
          uVar15 = 0;
          if (*(ulong *)(param_1 + 0x5d0) != 0) {
            uVar15 = *(ulong *)(param_1 + 0x5d8) / *(ulong *)(param_1 + 0x5d0);
          }
          if ((long)uVar15 < 0) {
            uVar19 = -(-uVar15 / 1000) - (ulong)(500 < -uVar15 % 1000);
          }
          else {
            uVar19 = uVar15 / 1000;
            if (499 < uVar15 % 1000) {
              uVar19 = uVar19 + 1;
            }
          }
          FUN_00666568(lVar20,uVar19);
        }
      }
    }
  }
LAB_005fb624:
  if ((lVar13 == 0x7fffffffffffffff) ||
     (lVar20 = *(long *)(param_1 + 0x3d8), lVar20 == -0x8000000000000000)) {
    if (199 < *(uint *)(param_1 + 0x3c)) {
LAB_005fb7b4:
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../api/units/frequency.h",0x44,"interval.IsFinite()",&DAT_001f5fa0);
    }
  }
  else if ((((lVar13 != -0x8000000000000000) && (199 < *(uint *)(param_1 + 0x3c))) &&
           (lVar20 != 0x7fffffffffffffff)) && (uVar15 = lVar13 - lVar20, 0 < (long)uVar15)) {
    if (0x7ffffffffffffffe < uVar15) goto LAB_005fb7b4;
    uVar19 = 0;
    if (uVar15 != 0) {
      uVar19 = ((ulong)*(uint *)(param_1 + 0x3c) * 1000000000) / uVar15;
    }
    iVar21 = (int)(uVar19 / 1000);
    if (499 < uVar19 % 1000) {
      iVar21 = iVar21 + 1;
    }
    lVar13 = DAT_00d641f8;
    if (DAT_00d641f8 == 0) {
      lVar13 = FUN_006660d0("WebRTC.Video.RenderFramesPerSecond",0x22,1,100,0x32);
      FUN_00d0f5e0(0,lVar13,&DAT_00d641f8);
      if (lVar13 != 0) goto LAB_005fb6fc;
    }
    else {
LAB_005fb6fc:
      FUN_00666568(lVar13,iVar21);
    }
    uVar14 = FUN_006228b0(&local_20d0,"WebRTC.Video.RenderFramesPerSecond ",0x23);
    uVar14 = FUN_00622910(uVar14,iVar21);
    FUN_00622844(uVar14,10);
    lVar13 = DAT_00d64200;
    if (DAT_00d64200 == 0) {
      lVar13 = FUN_006660d0("WebRTC.Video.RenderSqrtPixelsPerSecond",0x26,1,100000,0x32);
      FUN_00d0f5e0(0,lVar13,&DAT_00d64200);
      if (lVar13 == 0) goto LAB_005fb800;
    }
    uVar19 = 0;
    if (uVar15 != 0) {
      uVar19 = (*(long *)(param_1 + 0x3e0) * 1000000000) / (long)uVar15;
    }
    if ((long)uVar19 < 0) {
      uVar15 = -(-uVar19 / 1000) - (ulong)(500 < -uVar19 % 1000);
    }
    else {
      uVar15 = uVar19 / 1000;
      if (499 < uVar19 % 1000) {
        uVar15 = uVar15 + 1;
      }
    }
    FUN_00666568(lVar13,uVar15);
  }
LAB_005fb800:
  uVar15 = FUN_00992680(param_1 + 1000,200);
  if ((uVar15 >> 0x20 & 1) != 0) {
    lVar13 = DAT_00d64208;
    if (DAT_00d64208 == 0) {
      lVar13 = FUN_006660d0("WebRTC.Video.AVSyncOffsetInMs",0x1d,1,10000,0x32);
      FUN_00d0f5e0(0,lVar13,&DAT_00d64208);
      if (lVar13 != 0) goto LAB_005fb85c;
    }
    else {
LAB_005fb85c:
      FUN_00666568(lVar13,uVar15 & 0xffffffff);
    }
    uVar14 = FUN_006228b0(&local_20d0,"WebRTC.Video.AVSyncOffsetInMs ",0x1e);
    uVar14 = FUN_00622910(uVar14,uVar15 & 0xffffffff);
    FUN_00622844(uVar14,10);
  }
  puStack_20e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_20f0 = &DAT_aaaaaaaaaaaaaaaa;
  local_20e0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_005f4404(&local_20f0,param_1 + 0x500);
  if (0 < (long)local_20f0) {
    lVar13 = DAT_00d64210;
    if (DAT_00d64210 == 0) {
      lVar13 = FUN_006660d0("WebRTC.Video.RtpToNtpFreqOffsetInKhz",0x24,1,10000,0x32);
      FUN_00d0f5e0(0,lVar13,&DAT_00d64210);
      if (lVar13 != 0) goto LAB_005fb8f8;
    }
    else {
LAB_005fb8f8:
      FUN_00666568(lVar13,(ulong)local_20e0 & 0xffffffff);
    }
    uVar14 = FUN_006228b0(&local_20d0,"WebRTC.Video.RtpToNtpFreqOffsetInKhz ",0x25);
    FUN_005f41a8(&local_2220,&local_20f0);
    uVar15 = uStack_2218;
    pppppppuVar4 = local_2220;
    if (-1 < (long)local_2210) {
      uVar15 = local_2210 >> 0x38;
      pppppppuVar4 = &local_2220;
    }
    uVar14 = FUN_006228b0(uVar14,pppppppuVar4,uVar15);
    FUN_00622844(uVar14,10);
    if ((long)local_2210 < 0) {
      operator_delete(local_2220);
    }
  }
  uVar12 = *(int *)(param_1 + 0x68) + *(int *)(param_1 + 100);
  if (199 < (int)uVar12) {
    iVar21 = 0;
    if (uVar12 != 0) {
      iVar21 = (int)(*(int *)(param_1 + 100) * 1000 + (uVar12 >> 1)) / (int)uVar12;
    }
    lVar13 = DAT_00d64218;
    if (DAT_00d64218 == 0) {
      lVar13 = FUN_006660d0("WebRTC.Video.KeyFramesReceivedInPermille",0x28,1,1000,0x32);
      FUN_00d0f5e0(0,lVar13,&DAT_00d64218);
      if (lVar13 != 0) goto LAB_005fb9d4;
    }
    else {
LAB_005fb9d4:
      FUN_00666568(lVar13,iVar21);
    }
    uVar14 = FUN_006228b0(&local_20d0,"WebRTC.Video.KeyFramesReceivedInPermille ",0x29);
    uVar14 = FUN_00622910(uVar14,iVar21);
    FUN_00622844(uVar14,10);
  }
  uVar15 = FUN_00992680(param_1 + 0x558,200);
  if ((uVar15 >> 0x20 & 1) != 0) {
    lVar13 = DAT_00d64220;
    if (DAT_00d64220 == 0) {
      lVar13 = FUN_006660d0("WebRTC.Video.Decoded.Vp8.Qp",0x1b,1,200,0x32);
      FUN_00d0f5e0(0,lVar13,&DAT_00d64220);
      if (lVar13 != 0) goto LAB_005fba60;
    }
    else {
LAB_005fba60:
      FUN_00666568(lVar13,uVar15 & 0xffffffff);
    }
    uVar14 = FUN_006228b0(&local_20d0,"WebRTC.Video.Decoded.Vp8.Qp ",0x1c);
    uVar14 = FUN_00622910(uVar14,uVar15 & 0xffffffff);
    FUN_00622844(uVar14,10);
  }
  uVar15 = FUN_00992680(param_1 + 0x408,200);
  if ((uVar15 >> 0x20 & 1) != 0) {
    lVar13 = DAT_00d64228;
    if (DAT_00d64228 == 0) {
      lVar13 = FUN_006660d0("WebRTC.Video.DecodeTimeInMs",0x1b,1,1000,0x32);
      FUN_00d0f5e0(0,lVar13,&DAT_00d64228);
      if (lVar13 != 0) goto LAB_005fbaec;
    }
    else {
LAB_005fbaec:
      FUN_00666568(lVar13,uVar15 & 0xffffffff);
    }
    uVar14 = FUN_006228b0(&local_20d0,"WebRTC.Video.DecodeTimeInMs ",0x1c);
    uVar14 = FUN_00622910(uVar14,uVar15 & 0xffffffff);
    FUN_00622844(uVar14,10);
  }
  uVar15 = FUN_00992680(param_1 + 0x428,200);
  if ((uVar15 >> 0x20 & 1) != 0) {
    lVar13 = DAT_00d64230;
    if (DAT_00d64230 == 0) {
      lVar13 = FUN_006660d0("WebRTC.Video.JitterBufferDelayInMs",0x22,1,10000,0x32);
      FUN_00d0f5e0(0,lVar13,&DAT_00d64230);
      if (lVar13 != 0) goto LAB_005fbb78;
    }
    else {
LAB_005fbb78:
      FUN_00666568(lVar13,uVar15 & 0xffffffff);
    }
    uVar14 = FUN_006228b0(&local_20d0,"WebRTC.Video.JitterBufferDelayInMs ",0x23);
    uVar14 = FUN_00622910(uVar14,uVar15 & 0xffffffff);
    FUN_00622844(uVar14,10);
  }
  uVar15 = FUN_00992680(param_1 + 0x448,200);
  if ((uVar15 >> 0x20 & 1) != 0) {
    lVar13 = DAT_00d64238;
    if (DAT_00d64238 == 0) {
      lVar13 = FUN_006660d0("WebRTC.Video.TargetDelayInMs",0x1c,1,10000,0x32);
      FUN_00d0f5e0(0,lVar13,&DAT_00d64238);
      if (lVar13 != 0) goto LAB_005fbc04;
    }
    else {
LAB_005fbc04:
      FUN_00666568(lVar13,uVar15 & 0xffffffff);
    }
    uVar14 = FUN_006228b0(&local_20d0,"WebRTC.Video.TargetDelayInMs ",0x1d);
    uVar14 = FUN_00622910(uVar14,uVar15 & 0xffffffff);
    FUN_00622844(uVar14,10);
  }
  uVar15 = FUN_00992680(param_1 + 0x468,200);
  if ((uVar15 >> 0x20 & 1) != 0) {
    lVar13 = DAT_00d64240;
    if (DAT_00d64240 == 0) {
      lVar13 = FUN_006660d0("WebRTC.Video.CurrentDelayInMs",0x1d,1,10000,0x32);
      FUN_00d0f5e0(0,lVar13,&DAT_00d64240);
      if (lVar13 != 0) goto LAB_005fbc94;
    }
    else {
LAB_005fbc94:
      FUN_00666568(lVar13,uVar15 & 0xffffffff);
    }
    uVar14 = FUN_006228b0(&local_20d0,"WebRTC.Video.CurrentDelayInMs ",0x1e);
    uVar14 = FUN_00622910(uVar14,uVar15 & 0xffffffff);
    FUN_00622844(uVar14,10);
  }
  uVar15 = FUN_00992680(param_1 + 0x488,200);
  if ((uVar15 >> 0x20 & 1) != 0) {
    lVar13 = DAT_00d64248;
    if (DAT_00d64248 == 0) {
      lVar13 = FUN_006660d0("WebRTC.Video.OnewayDelayInMs",0x1c,1,10000,0x32);
      FUN_00d0f5e0(0,lVar13,&DAT_00d64248);
      if (lVar13 == 0) goto LAB_005fbd2c;
    }
    FUN_00666568(lVar13,uVar15 & 0xffffffff);
  }
LAB_005fbd2c:
  uVar15 = _UNK_001f3238;
  puVar9 = _DAT_001f3230;
  plVar22 = *(long **)(param_1 + 0x4e8);
  if (plVar22 != (long *)(param_1 + 0x4f0)) {
    do {
      lVar13 = plVar22[4];
      memcpy(&local_2220,&DAT_001fc298,0x130);
      lStack_21f8 = plVar22[10];
      local_2200 = plVar22[9];
      lStack_21e8 = plVar22[0xc];
      lStack_21f0 = plVar22[0xb];
      uStack_2218 = plVar22[6];
      local_2220 = (undefined8 *******)plVar22[5];
      lStack_2208 = plVar22[8];
      local_2210 = plVar22[7];
      lStack_21a8 = plVar22[0x14];
      lStack_21b0 = plVar22[0x13];
      lStack_21b8 = plVar22[0x12];
      local_21c0 = plVar22[0x11];
      lStack_21d8 = plVar22[0xe];
      local_21e0 = plVar22[0xd];
      lStack_21c8 = plVar22[0x10];
      local_21d0 = plVar22[0xf];
      local_2170 = plVar22[0x1b];
      lStack_2178 = plVar22[0x1a];
      lStack_2180 = plVar22[0x19];
      lStack_2198 = plVar22[0x16];
      local_21a0 = plVar22[0x15];
      lStack_2188 = plVar22[0x18];
      local_2190 = plVar22[0x17];
      local_2160 = (void *)0x0;
      local_2158 = 0;
      local_2168 = (void *)0x0;
      __src = (void *)plVar22[0x1c];
      uVar19 = plVar22[0x1d] - (long)__src;
      if (uVar19 != 0) {
        if ((long)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_005ff43c();
        }
        local_2168 = operator_new(uVar19);
        lVar20 = (long)local_2168 + uVar19;
        local_2160 = local_2168;
        local_2158 = lVar20;
        memcpy(local_2168,__src,uVar19);
        local_2160 = (void *)lVar20;
      }
      local_2148 = (undefined8 *******)0x0;
      local_2140 = 0;
      local_2150 = &local_2148;
      if (plVar22[0x21] != 0) {
        local_2148 = (undefined8 *******)FUN_005ff454(&local_2150,plVar22[0x20],&local_2150);
        local_2148[2] = &local_2148;
        pppppppuVar4 = local_2148;
        do {
          local_2150 = pppppppuVar4;
          pppppppuVar4 = (undefined8 *******)*local_2150;
        } while ((undefined8 *******)*local_2150 != (undefined8 *******)0x0);
        local_2140 = plVar22[0x21];
      }
      local_2128 = plVar22[0x24];
      lStack_2130 = plVar22[0x23];
      local_2138 = plVar22[0x22];
      dStack_2108 = (double)plVar22[0x28];
      local_2110 = plVar22[0x27];
      lStack_20f8 = plVar22[0x2a];
      lStack_2100 = plVar22[0x29];
      lStack_2118 = plVar22[0x26];
      local_2120 = plVar22[0x25];
      local_2230 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_2238 = &DAT_aaaaaaaaaaaaaaaa;
      local_2240 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
      local_2258 = (char)lVar13;
      uVar19 = FUN_00659d40(&local_2258);
      bVar11 = (uVar19 & 1) == 0;
      pppppppuVar4 = (undefined8 *******)"WebRTC.Video.Screenshare";
      if (bVar11) {
        pppppppuVar4 = (undefined8 *******)"WebRTC.Video";
      }
      __n = 0x18;
      if (bVar11) {
        __n = 0xc;
      }
      if ((uVar19 & 1) == 0) {
        local_2230 = (undefined1 *)CONCAT17(0xc,(undefined7)local_2230);
        __dest = &local_2240;
        lVar20 = 0xc;
      }
      else {
        __dest = (undefined8 *******)operator_new(0x20);
        lVar20 = 0x18;
        local_2230 = (undefined1 *)uVar15;
        puStack_2238 = puVar9;
        local_2240 = __dest;
      }
      pppppppuVar1 = (undefined8 *******)((long)__dest + lVar20);
      if (pppppppuVar1 < __dest) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                  );
      }
      if ((__dest <= pppppppuVar4) && (pppppppuVar4 < pppppppuVar1)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                  );
      }
      memcpy(__dest,pppppppuVar4,__n);
      *(char *)pppppppuVar1 = '\0';
      uVar19 = FUN_00992680(&local_2220,200);
      if ((uVar19 >> 0x20 & 1) != 0) {
        pppppppuVar4 = local_2240;
        if (-1 < (long)local_2230._7_1_) {
          pppppppuVar4 = &local_2240;
        }
        puVar3 = puStack_2238;
        if (-1 < (long)local_2230) {
          puVar3 = (undefined1 *)(long)local_2230._7_1_;
        }
        FUN_005ff514(&local_2258,&uStack_20a9,pppppppuVar4,puVar3,".EndToEndDelayInMs",0x12);
        uVar16 = uStack_2250;
        pcVar8 = (char *)CONCAT71(uStack_2257,local_2258);
        if (-1 < (char)bStack_2241) {
          uVar16 = (ulong)bStack_2241;
          pcVar8 = &local_2258;
        }
        lVar20 = FUN_006660d0(pcVar8,uVar16,1,10000,0x32);
        if ((char)bStack_2241 < '\0') {
          operator_delete((void *)CONCAT71(uStack_2257,local_2258));
        }
        if (lVar20 != 0) {
          FUN_00666568(lVar20,uVar19 & 0xffffffff);
        }
        puVar3 = puStack_2238;
        pppppppuVar4 = local_2240;
        if (-1 < (long)local_2230) {
          puVar3 = (undefined1 *)((ulong)local_2230 >> 0x38);
          pppppppuVar4 = &local_2240;
        }
        uVar14 = FUN_006228b0(&local_20d0,pppppppuVar4,puVar3);
        uVar14 = FUN_006228b0(uVar14,".EndToEndDelayInMs",0x12);
        uVar14 = FUN_006228b0(uVar14,&DAT_001d5e07,1);
        uVar14 = FUN_00622910(uVar14,uVar19 & 0xffffffff);
        FUN_00622844(uVar14,10);
      }
      uVar16 = FUN_009926ac(&local_2220);
      if ((uVar19 & 0x100000000 & uVar16) != 0) {
        pppppppuVar4 = local_2240;
        if (-1 < (long)local_2230._7_1_) {
          pppppppuVar4 = &local_2240;
        }
        puVar3 = puStack_2238;
        if (-1 < (long)local_2230) {
          puVar3 = (undefined1 *)(long)local_2230._7_1_;
        }
        FUN_005ff514(&local_2258,&uStack_20a9,pppppppuVar4,puVar3,".EndToEndDelayMaxInMs",0x15);
        uVar19 = uStack_2250;
        pcVar8 = (char *)CONCAT71(uStack_2257,local_2258);
        if (-1 < (char)bStack_2241) {
          uVar19 = (ulong)bStack_2241;
          pcVar8 = &local_2258;
        }
        lVar20 = FUN_006660d0(pcVar8,uVar19,1,100000,0x32);
        if ((char)bStack_2241 < '\0') {
          operator_delete((void *)CONCAT71(uStack_2257,local_2258));
        }
        if (lVar20 != 0) {
          FUN_00666568(lVar20,uVar16 & 0xffffffff);
        }
        puVar3 = puStack_2238;
        pppppppuVar4 = local_2240;
        if (-1 < (long)local_2230) {
          puVar3 = (undefined1 *)((ulong)local_2230 >> 0x38);
          pppppppuVar4 = &local_2240;
        }
        uVar14 = FUN_006228b0(&local_20d0,pppppppuVar4,puVar3);
        uVar14 = FUN_006228b0(uVar14,".EndToEndDelayMaxInMs",0x15);
        uVar14 = FUN_006228b0(uVar14,&DAT_001d5e07,1);
        uVar14 = FUN_00622910(uVar14,uVar16 & 0xffffffff);
        FUN_00622844(uVar14,10);
      }
      uVar19 = FUN_00992680(&local_2200,200);
      if ((uVar19 >> 0x20 & 1) != 0) {
        pppppppuVar4 = local_2240;
        if (-1 < (long)local_2230._7_1_) {
          pppppppuVar4 = &local_2240;
        }
        puVar3 = puStack_2238;
        if (-1 < (long)local_2230) {
          puVar3 = (undefined1 *)(long)local_2230._7_1_;
        }
        FUN_005ff514(&local_2258,&uStack_20a9,pppppppuVar4,puVar3,".InterframeDelayInMs",0x14);
        uVar16 = uStack_2250;
        pcVar8 = (char *)CONCAT71(uStack_2257,local_2258);
        if (-1 < (char)bStack_2241) {
          uVar16 = (ulong)bStack_2241;
          pcVar8 = &local_2258;
        }
        lVar20 = FUN_006660d0(pcVar8,uVar16,1,10000,0x32);
        if ((char)bStack_2241 < '\0') {
          operator_delete((void *)CONCAT71(uStack_2257,local_2258));
        }
        if (lVar20 != 0) {
          FUN_00666568(lVar20,uVar19 & 0xffffffff);
        }
        puVar3 = puStack_2238;
        pppppppuVar4 = local_2240;
        if (-1 < (long)local_2230) {
          puVar3 = (undefined1 *)((ulong)local_2230 >> 0x38);
          pppppppuVar4 = &local_2240;
        }
        uVar14 = FUN_006228b0(&local_20d0,pppppppuVar4,puVar3);
        uVar14 = FUN_006228b0(uVar14,".InterframeDelayInMs",0x14);
        uVar14 = FUN_006228b0(uVar14,&DAT_001d5e07,1);
        uVar14 = FUN_00622910(uVar14,uVar19 & 0xffffffff);
        FUN_00622844(uVar14,10);
      }
      uVar16 = FUN_009926ac(&local_2200);
      if ((uVar19 & 0x100000000 & uVar16) != 0) {
        pppppppuVar4 = local_2240;
        if (-1 < (long)local_2230._7_1_) {
          pppppppuVar4 = &local_2240;
        }
        puVar3 = puStack_2238;
        if (-1 < (long)local_2230) {
          puVar3 = (undefined1 *)(long)local_2230._7_1_;
        }
        FUN_005ff514(&local_2258,&uStack_20a9,pppppppuVar4,puVar3,".InterframeDelayMaxInMs",0x17);
        uVar2 = uStack_2250;
        pcVar8 = (char *)CONCAT71(uStack_2257,local_2258);
        if (-1 < (char)bStack_2241) {
          uVar2 = (ulong)bStack_2241;
          pcVar8 = &local_2258;
        }
        lVar20 = FUN_006660d0(pcVar8,uVar2,1,10000,0x32);
        if ((char)bStack_2241 < '\0') {
          operator_delete((void *)CONCAT71(uStack_2257,local_2258));
        }
        if (lVar20 != 0) {
          FUN_00666568(lVar20,uVar16 & 0xffffffff);
        }
        puVar3 = puStack_2238;
        pppppppuVar4 = local_2240;
        if (-1 < (long)local_2230) {
          puVar3 = (undefined1 *)((ulong)local_2230 >> 0x38);
          pppppppuVar4 = &local_2240;
        }
        uVar14 = FUN_006228b0(&local_20d0,pppppppuVar4,puVar3);
        uVar14 = FUN_006228b0(uVar14,".InterframeDelayMaxInMs",0x17);
        uVar14 = FUN_006228b0(uVar14,&DAT_001d5e07,1);
        uVar14 = FUN_00622910(uVar14,uVar16 & 0xffffffff);
        FUN_00622844(uVar14,10);
      }
      uVar16 = FUN_00991f80(0x3f733333,&local_2168);
      if ((((uVar19 ^ 0xffffffffffffffff) & 0x1ffffffff) != 0) && ((uVar16 >> 0x20 & 1) != 0)) {
        pppppppuVar4 = local_2240;
        if (-1 < (long)local_2230._7_1_) {
          pppppppuVar4 = &local_2240;
        }
        puVar3 = puStack_2238;
        if (-1 < (long)local_2230) {
          puVar3 = (undefined1 *)(long)local_2230._7_1_;
        }
        FUN_005ff514(&local_2258,&uStack_20a9,pppppppuVar4,puVar3,".InterframeDelay95PercentileInMs"
                     ,0x20);
        uVar19 = uStack_2250;
        pcVar8 = (char *)CONCAT71(uStack_2257,local_2258);
        if (-1 < (char)bStack_2241) {
          uVar19 = (ulong)bStack_2241;
          pcVar8 = &local_2258;
        }
        lVar20 = FUN_006660d0(pcVar8,uVar19,1,10000,0x32);
        if ((char)bStack_2241 < '\0') {
          operator_delete((void *)CONCAT71(uStack_2257,local_2258));
        }
        if (lVar20 != 0) {
          FUN_00666568(lVar20,uVar16 & 0xffffffff);
        }
        puVar3 = puStack_2238;
        pppppppuVar4 = local_2240;
        if (-1 < (long)local_2230) {
          puVar3 = (undefined1 *)((ulong)local_2230 >> 0x38);
          pppppppuVar4 = &local_2240;
        }
        uVar14 = FUN_006228b0(&local_20d0,pppppppuVar4,puVar3);
        uVar14 = FUN_006228b0(uVar14,".InterframeDelay95PercentileInMs",0x20);
        uVar14 = FUN_006228b0(uVar14,&DAT_001d5e07,1);
        uVar14 = FUN_006229f8(uVar14,uVar16 & 0xffffffff);
        FUN_00622844(uVar14,10);
      }
      uVar19 = FUN_00992680(&local_21d0,200);
      if ((uVar19 >> 0x20 & 1) != 0) {
        pppppppuVar4 = local_2240;
        if (-1 < (long)local_2230._7_1_) {
          pppppppuVar4 = &local_2240;
        }
        puVar3 = puStack_2238;
        if (-1 < (long)local_2230) {
          puVar3 = (undefined1 *)(long)local_2230._7_1_;
        }
        FUN_005ff514(&local_2258,&uStack_20a9,pppppppuVar4,puVar3,".ReceivedWidthInPixels",0x16);
        uVar16 = uStack_2250;
        pcVar8 = (char *)CONCAT71(uStack_2257,local_2258);
        if (-1 < (char)bStack_2241) {
          uVar16 = (ulong)bStack_2241;
          pcVar8 = &local_2258;
        }
        lVar20 = FUN_006660d0(pcVar8,uVar16,1,10000,0x32);
        if ((char)bStack_2241 < '\0') {
          operator_delete((void *)CONCAT71(uStack_2257,local_2258));
        }
        if (lVar20 != 0) {
          FUN_00666568(lVar20,uVar19 & 0xffffffff);
        }
        puVar3 = puStack_2238;
        pppppppuVar4 = local_2240;
        if (-1 < (long)local_2230) {
          puVar3 = (undefined1 *)((ulong)local_2230 >> 0x38);
          pppppppuVar4 = &local_2240;
        }
        uVar14 = FUN_006228b0(&local_20d0,pppppppuVar4,puVar3);
        uVar14 = FUN_006228b0(uVar14,".ReceivedWidthInPixels",0x16);
        uVar14 = FUN_006228b0(uVar14,&DAT_001d5e07,1);
        uVar14 = FUN_00622910(uVar14,uVar19 & 0xffffffff);
        FUN_00622844(uVar14,10);
      }
      uVar19 = FUN_00992680(&lStack_21b0,200);
      if ((uVar19 >> 0x20 & 1) != 0) {
        pppppppuVar4 = local_2240;
        if (-1 < (long)local_2230._7_1_) {
          pppppppuVar4 = &local_2240;
        }
        puVar3 = puStack_2238;
        if (-1 < (long)local_2230) {
          puVar3 = (undefined1 *)(long)local_2230._7_1_;
        }
        FUN_005ff514(&local_2258,&uStack_20a9,pppppppuVar4,puVar3,".ReceivedHeightInPixels",0x17);
        uVar16 = uStack_2250;
        pcVar8 = (char *)CONCAT71(uStack_2257,local_2258);
        if (-1 < (char)bStack_2241) {
          uVar16 = (ulong)bStack_2241;
          pcVar8 = &local_2258;
        }
        lVar20 = FUN_006660d0(pcVar8,uVar16,1,10000,0x32);
        if ((char)bStack_2241 < '\0') {
          operator_delete((void *)CONCAT71(uStack_2257,local_2258));
        }
        if (lVar20 != 0) {
          FUN_00666568(lVar20,uVar19 & 0xffffffff);
        }
        puVar3 = puStack_2238;
        pppppppuVar4 = local_2240;
        if (-1 < (long)local_2230) {
          puVar3 = (undefined1 *)((ulong)local_2230 >> 0x38);
          pppppppuVar4 = &local_2240;
        }
        uVar14 = FUN_006228b0(&local_20d0,pppppppuVar4,puVar3);
        uVar14 = FUN_006228b0(uVar14,".ReceivedHeightInPixels",0x17);
        uVar14 = FUN_006228b0(uVar14,&DAT_001d5e07,1);
        uVar14 = FUN_00622910(uVar14,uVar19 & 0xffffffff);
        FUN_00622844(uVar14,10);
      }
      dVar29 = dStack_2108;
      if (local_2120 != 0) {
        pppppppuVar4 = local_2240;
        if (-1 < (long)local_2230._7_1_) {
          pppppppuVar4 = &local_2240;
        }
        puVar3 = puStack_2238;
        if (-1 < (long)local_2230) {
          puVar3 = (undefined1 *)(long)local_2230._7_1_;
        }
        FUN_005ff514(&local_2258,&uStack_20a9,pppppppuVar4,puVar3,".CorruptionLikelihoodPermille",
                     0x1d);
        uVar19 = uStack_2250;
        pcVar8 = (char *)CONCAT71(uStack_2257,local_2258);
        if (-1 < (char)bStack_2241) {
          uVar19 = (ulong)bStack_2241;
          pcVar8 = &local_2258;
        }
        lVar20 = FUN_006660d0(pcVar8,uVar19,0,1000,500);
        if ((char)bStack_2241 < '\0') {
          operator_delete((void *)CONCAT71(uStack_2257,local_2258));
        }
        if (lVar20 != 0) {
          FUN_00666568(lVar20,(int)(dVar29 * 1000.0));
        }
        puVar3 = puStack_2238;
        pppppppuVar4 = local_2240;
        if (-1 < (long)local_2230) {
          puVar3 = (undefined1 *)((ulong)local_2230 >> 0x38);
          pppppppuVar4 = &local_2240;
        }
        uVar14 = FUN_006228b0(&local_20d0,pppppppuVar4,puVar3);
        uVar14 = FUN_006228b0(uVar14,".CorruptionLikelihoodPermille",0x1d);
        uVar14 = FUN_006228b0(uVar14,&DAT_001d5e07,1);
        uVar14 = FUN_00622910(uVar14,(int)(dVar29 * 1000.0));
        FUN_00622844(uVar14,10);
      }
      lVar20 = lStack_21d8;
      if ((char)lVar13 != '\0') {
        dVar29 = (double)local_21e0 / 1000.0;
        if (dVar29 < 9.999999523162842 == NAN(dVar29)) {
          pppppppuVar4 = local_2240;
          if (-1 < (long)local_2230._7_1_) {
            pppppppuVar4 = &local_2240;
          }
          puVar3 = puStack_2238;
          if (-1 < (long)local_2230) {
            puVar3 = (undefined1 *)(long)local_2230._7_1_;
          }
          FUN_005ff514(&local_2258,&uStack_20a9,pppppppuVar4,puVar3,".MediaBitrateReceivedInKbps",
                       0x1b);
          uVar19 = uStack_2250;
          pcVar8 = (char *)CONCAT71(uStack_2257,local_2258);
          if (-1 < (char)bStack_2241) {
            uVar19 = (ulong)bStack_2241;
            pcVar8 = &local_2258;
          }
          lVar13 = FUN_006660d0(pcVar8,uVar19,1,10000,0x32);
          if ((char)bStack_2241 < '\0') {
            operator_delete((void *)CONCAT71(uStack_2257,local_2258));
          }
          iVar21 = (int)(((float)(lVar20 << 3) / (float)dVar29) / 1000.0);
          if (lVar13 != 0) {
            FUN_00666568(lVar13,iVar21);
          }
          puVar3 = puStack_2238;
          pppppppuVar4 = local_2240;
          if (-1 < (long)local_2230) {
            puVar3 = (undefined1 *)((ulong)local_2230 >> 0x38);
            pppppppuVar4 = &local_2240;
          }
          uVar14 = FUN_006228b0(&local_20d0,pppppppuVar4,puVar3);
          uVar14 = FUN_006228b0(uVar14,".MediaBitrateReceivedInKbps",0x1b);
          uVar14 = FUN_006228b0(uVar14,&DAT_001d5e07,1);
          uVar14 = FUN_00622910(uVar14,iVar21);
          FUN_00622844(uVar14,10);
        }
        iVar21 = (int)local_2170;
        uVar12 = local_2170._4_4_ + (int)local_2170;
        if (199 < (int)uVar12) {
          pppppppuVar4 = local_2240;
          if (-1 < (long)local_2230._7_1_) {
            pppppppuVar4 = &local_2240;
          }
          puVar3 = puStack_2238;
          if (-1 < (long)local_2230) {
            puVar3 = (undefined1 *)(long)local_2230._7_1_;
          }
          FUN_005ff514(&local_2258,&uStack_20a9,pppppppuVar4,puVar3,".KeyFramesReceivedInPermille",
                       0x1c);
          uVar19 = uStack_2250;
          pcVar8 = (char *)CONCAT71(uStack_2257,local_2258);
          if (-1 < (char)bStack_2241) {
            uVar19 = (ulong)bStack_2241;
            pcVar8 = &local_2258;
          }
          lVar13 = FUN_006660d0(pcVar8,uVar19,1,1000,0x32);
          if ((char)bStack_2241 < '\0') {
            operator_delete((void *)CONCAT71(uStack_2257,local_2258));
          }
          iVar6 = 0;
          if (uVar12 != 0) {
            iVar6 = (int)(iVar21 * 1000 + (uVar12 >> 1)) / (int)uVar12;
          }
          if (lVar13 != 0) {
            FUN_00666568(lVar13,iVar6);
          }
          puVar3 = puStack_2238;
          pppppppuVar4 = local_2240;
          if (-1 < (long)local_2230) {
            puVar3 = (undefined1 *)((ulong)local_2230 >> 0x38);
            pppppppuVar4 = &local_2240;
          }
          uVar14 = FUN_006228b0(&local_20d0,pppppppuVar4,puVar3);
          uVar14 = FUN_006228b0(uVar14,".KeyFramesReceivedInPermille",0x1c);
          uVar14 = FUN_006228b0(uVar14,&DAT_001d5e07,1);
          uVar14 = FUN_00622910(uVar14,iVar6);
          FUN_00622844(uVar14,10);
        }
        uVar19 = FUN_00992680(&local_2190,200);
        if ((uVar19 >> 0x20 & 1) != 0) {
          pppppppuVar4 = local_2240;
          if (-1 < (long)local_2230._7_1_) {
            pppppppuVar4 = &local_2240;
          }
          puVar3 = puStack_2238;
          if (-1 < (long)local_2230) {
            puVar3 = (undefined1 *)(long)local_2230._7_1_;
          }
          FUN_005ff514(&local_2258,&uStack_20a9,pppppppuVar4,puVar3,".Decoded.Vp8.Qp",0xf);
          uVar16 = uStack_2250;
          pcVar8 = (char *)CONCAT71(uStack_2257,local_2258);
          if (-1 < (char)bStack_2241) {
            uVar16 = (ulong)bStack_2241;
            pcVar8 = &local_2258;
          }
          lVar13 = FUN_006660d0(pcVar8,uVar16,1,200,0x32);
          if ((char)bStack_2241 < '\0') {
            operator_delete((void *)CONCAT71(uStack_2257,local_2258));
          }
          if (lVar13 != 0) {
            FUN_00666568(lVar13,uVar19 & 0xffffffff);
          }
          puVar3 = puStack_2238;
          pppppppuVar4 = local_2240;
          if (-1 < (long)local_2230) {
            puVar3 = (undefined1 *)((ulong)local_2230 >> 0x38);
            pppppppuVar4 = &local_2240;
          }
          uVar14 = FUN_006228b0(&local_20d0,pppppppuVar4,puVar3);
          uVar14 = FUN_006228b0(uVar14,".Decoded.Vp8.Qp",0xf);
          uVar14 = FUN_006228b0(uVar14,&DAT_001d5e07,1);
          uVar14 = FUN_00622910(uVar14,uVar19 & 0xffffffff);
          FUN_00622844(uVar14,10);
        }
      }
      if ((long)local_2230 < 0) {
        operator_delete(local_2240);
      }
      FUN_00991df8(&local_2168);
      FUN_00992610(&local_2190);
      FUN_00992610(&lStack_21b0);
      FUN_00992610(&local_21d0);
      FUN_00992610(&local_2200);
      FUN_00992610(&local_2220);
      plVar10 = (long *)plVar22[1];
      plVar23 = plVar22;
      if ((long *)plVar22[1] == (long *)0x0) {
        do {
          plVar22 = (long *)plVar23[2];
          bVar11 = plVar23 != (long *)*plVar22;
          plVar23 = plVar22;
        } while (bVar11);
      }
      else {
        do {
          plVar22 = plVar10;
          plVar10 = (long *)*plVar22;
        } while ((long *)*plVar22 != (long *)0x0);
      }
    } while (plVar22 != (long *)(param_1 + 0x4f0));
  }
  lVar17 = *param_3;
  lVar13 = param_3[1];
  lVar26 = param_3[10];
  lVar20 = param_3[2];
  lVar27 = param_3[3];
  lVar24 = param_3[8];
  lVar25 = param_3[9];
  lVar18 = lVar17;
  if (param_4 != (long *)0x0) {
    lVar13 = param_4[1] + lVar13;
    lVar20 = param_4[2] + lVar20;
    lVar27 = param_4[3] + lVar27;
    lVar18 = *param_4;
    if (lVar17 <= *param_4) {
      lVar18 = lVar17;
    }
    lVar24 = param_4[8] + lVar24;
    lVar25 = param_4[9] + lVar25;
    lVar26 = param_4[10] + lVar26;
  }
  lVar17 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))();
  if ((lVar18 == 0x7fffffffffffffff) ||
     (((uVar15 = 0x7fffffffffffffff, lVar18 != -0x8000000000000000 && (lVar17 != 0x7fffffffffffffff)
       ) && ((lVar17 == -0x8000000000000000 || (uVar15 = lVar17 - lVar18, (long)uVar15 < 10000000)))
      ))) goto LAB_005fcef0;
  uVar19 = uVar15 / 1000000;
  if (499999 < uVar15 % 1000000) {
    uVar19 = uVar19 + 1;
  }
  lVar18 = DAT_00d64250;
  if (DAT_00d64250 == 0) {
    lVar18 = FUN_006660d0("WebRTC.Video.BitrateReceivedInKbps",0x22,1,10000,0x32);
    FUN_00d0f5e0(0,lVar18,&DAT_00d64250);
    if (lVar18 != 0) goto LAB_005fcb38;
  }
  else {
LAB_005fcb38:
    uVar15 = 0;
    if (uVar19 != 0) {
      uVar15 = (ulong)((lVar20 + lVar13 + lVar27) * 8) / uVar19;
    }
    FUN_00666568(lVar18,uVar15 / 1000);
  }
  uVar15 = 0;
  if (uVar19 != 0) {
    uVar15 = (ulong)((param_3[2] - (param_3[9] + param_3[0x10])) * 8) / uVar19;
  }
  lVar13 = DAT_00d64258;
  if (DAT_00d64258 == 0) {
    lVar13 = FUN_006660d0("WebRTC.Video.MediaBitrateReceivedInKbps",0x27,1,10000,0x32);
    FUN_00d0f5e0(0,lVar13,&DAT_00d64258);
    if (lVar13 != 0) goto LAB_005fcbf0;
  }
  else {
LAB_005fcbf0:
    FUN_00666568(lVar13,uVar15 / 1000 & 0xffffffff);
  }
  uVar14 = FUN_006228b0(&local_20d0,"WebRTC.Video.MediaBitrateReceivedInKbps ",0x28);
  uVar14 = FUN_00622910(uVar14,uVar15 / 1000 & 0xffffffff);
  FUN_00622844(uVar14,10);
  lVar13 = DAT_00d64260;
  if (DAT_00d64260 == 0) {
    lVar13 = FUN_006660d0("WebRTC.Video.PaddingBitrateReceivedInKbps",0x29,1,10000,0x32);
    FUN_00d0f5e0(0,lVar13,&DAT_00d64260);
    if (lVar13 != 0) goto LAB_005fcc68;
  }
  else {
LAB_005fcc68:
    uVar15 = 0;
    if (uVar19 != 0) {
      uVar15 = (ulong)(lVar27 << 3) / uVar19;
    }
    FUN_00666568(lVar13,uVar15 / 1000);
  }
  lVar13 = DAT_00d64268;
  if (DAT_00d64268 == 0) {
    lVar13 = FUN_006660d0("WebRTC.Video.RetransmittedBitrateReceivedInKbps",0x2f,1,10000,0x32);
    FUN_00d0f5e0(0,lVar13,&DAT_00d64268);
    if (lVar13 != 0) goto LAB_005fcccc;
  }
  else {
LAB_005fcccc:
    uVar15 = 0;
    if (uVar19 != 0) {
      uVar15 = (ulong)((lVar25 + lVar24 + lVar26) * 8) / uVar19;
    }
    FUN_00666568(lVar13,uVar15 / 1000);
  }
  if (param_4 != (long *)0x0) {
    lVar13 = DAT_00d64270;
    if (DAT_00d64270 == 0) {
      lVar13 = FUN_006660d0("WebRTC.Video.RtxBitrateReceivedInKbps",0x25,1,10000,0x32);
      FUN_00d0f5e0(0,lVar13,&DAT_00d64270);
      if (lVar13 == 0) goto LAB_005fcd70;
    }
    uVar15 = 0;
    if (uVar19 != 0) {
      uVar15 = (ulong)((param_4[2] + param_4[1] + param_4[3]) * 8) / uVar19;
    }
    FUN_00666568(lVar13,uVar15 / 1000);
  }
LAB_005fcd70:
  lVar13 = DAT_00d64278;
  if (DAT_00d64278 == 0) {
    lVar13 = FUN_006660d0("WebRTC.Video.NackPacketsSentPerMinute",0x25,1,10000,0x32);
    FUN_00d0f5e0(0,lVar13,&DAT_00d64278);
    if (lVar13 != 0) goto LAB_005fcdb8;
  }
  else {
LAB_005fcdb8:
    uVar15 = 0;
    if (uVar19 != 0) {
      uVar15 = (uint)(*(int *)(param_1 + 0x1d8) * 0x3c) / uVar19;
    }
    FUN_00666568(lVar13,uVar15);
  }
  lVar13 = DAT_00d64280;
  if (DAT_00d64280 == 0) {
    lVar13 = FUN_006660d0("WebRTC.Video.FirPacketsSentPerMinute",0x24,1,10000,0x32);
    FUN_00d0f5e0(0,lVar13,&DAT_00d64280);
    if (lVar13 != 0) goto LAB_005fce18;
  }
  else {
LAB_005fce18:
    uVar15 = 0;
    if (uVar19 != 0) {
      uVar15 = (uint)(*(int *)(param_1 + 0x1dc) * 0x3c) / uVar19;
    }
    FUN_00666568(lVar13,uVar15);
  }
  lVar13 = DAT_00d64288;
  if (DAT_00d64288 == 0) {
    lVar13 = FUN_006660d0("WebRTC.Video.PliPacketsSentPerMinute",0x24,1,10000,0x32);
    FUN_00d0f5e0(0,lVar13,&DAT_00d64288);
    if (lVar13 != 0) goto LAB_005fce78;
  }
  else {
LAB_005fce78:
    uVar15 = 0;
    if (uVar19 != 0) {
      uVar15 = (uint)(*(int *)(param_1 + 0x1e0) * 0x3c) / uVar19;
    }
    FUN_00666568(lVar13,uVar15);
  }
  if ((*(int *)(param_1 + 0x1e4) != 0) &&
     (lVar13 = FUN_0066631c("WebRTC.Video.UniqueNackRequestsSentInPercent",0x2c,0x65), lVar13 != 0))
  {
    if (*(uint *)(param_1 + 0x1e4) == 0) {
      iVar21 = 0;
    }
    else {
      fVar28 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x1e8));
      iVar21 = (int)((fVar28 * 100.0) / (float)*(uint *)(param_1 + 0x1e4) + 0.5);
    }
    FUN_00666568(lVar13,iVar21);
  }
LAB_005fcef0:
  uVar15 = FUN_00417e08();
  if ((uVar15 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../video/receive_statistics_proxy.cc",0xce1,local_20d0);
  }
  uVar14 = *(undefined8 *)(param_1 + 0x4a8);
  uVar12 = FUN_00659d40(param_1 + 0x598);
  FUN_00603118(uVar14,uVar12 & 1);
  if (*(long *)(lVar7 + 0x28) != local_a8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 005fcfa4  FUN_005fcfa4 =====

void FUN_005fcfa4(long param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  uVar3 = *(ulong *)(param_1 + 0x590);
  if (uVar3 != 0) {
    do {
      plVar6 = *(long **)(param_1 + 0x580);
      if (param_2 + -1000 <= plVar6[4]) break;
      plVar4 = plVar6;
      plVar1 = (long *)plVar6[1];
      if ((long *)plVar6[1] == (long *)0x0) {
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
      *(long **)(param_1 + 0x580) = plVar5;
      *(ulong *)(param_1 + 0x590) = uVar3 - 1;
      FUN_005d5d48(*(undefined8 *)(param_1 + 0x588),plVar6);
      if (plVar6 + 4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      operator_delete(plVar6);
      uVar3 = *(ulong *)(param_1 + 0x590);
    } while (uVar3 != 0);
    uVar3 = (uVar3 * 1000 + 500) / 1000;
  }
  *(int *)(param_1 + 0x30) = (int)uVar3;
  return;
}


// ===== 005fd090  FUN_005fd090 =====

void FUN_005fd090(undefined8 *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  bool bVar3;
  char cVar4;
  long lVar5;
  undefined4 uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong extraout_x1;
  ulong extraout_x1_00;
  long *plVar10;
  long *plVar11;
  undefined1 uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 uVar19;
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
  undefined7 uStack_58;
  undefined1 local_51;
  undefined7 uStack_50;
  undefined1 *puStack_49;
  
  lVar5 = tpidr_el0;
  lVar13 = *(long *)(lVar5 + 0x28);
  uVar8 = (**(code **)(**(long **)(param_2 + 0x20) + 0x10))();
  uVar14 = uVar8 / 1000;
  if (499 < uVar8 % 1000) {
    uVar14 = uVar14 + 1;
  }
  if ((uVar8 & 0x8000000000000000) != 0) {
    uVar14 = -(-uVar8 / 1000) - (ulong)(500 < -uVar8 % 1000);
  }
  FUN_005fcfa4(param_2,uVar14);
  uVar6 = FUN_007df10c(param_2 + 0x378,uVar14);
  if ((extraout_x1 & 1) == 0) {
    uVar6 = 0;
  }
  *(undefined4 *)(param_2 + 0x38) = uVar6;
  uVar6 = FUN_007df10c(param_2 + 0x318,uVar14);
  if ((extraout_x1_00 & 1) == 0) {
    uVar6 = 0;
  }
  *(undefined4 *)(param_2 + 0x34) = uVar6;
  if (*(char *)(param_2 + 0x5c8) == '\x01') {
    uVar8 = *(ulong *)(param_2 + 0x4d8);
    lVar15 = *(long *)(param_2 + 0x4c0);
    lVar16 = *(long *)(param_2 + 0x4c8);
    plVar1 = (long *)(lVar15 + (uVar8 >> 8) * 8);
    if (lVar15 == lVar16) {
      plVar11 = (long *)0x0;
    }
    else {
      plVar11 = (long *)(*plVar1 + (uVar8 & 0xff) * 0x10);
    }
    plVar10 = plVar1;
    do {
      plVar17 = plVar11 + -0x200;
      do {
        if (lVar15 == lVar16) {
          if (plVar11 != (long *)0x0) goto LAB_005fd1e8;
LAB_005fd210:
          if (lVar15 == lVar16) {
            lVar15 = 0;
          }
          else {
            lVar15 = *plVar1 + (uVar8 & 0xff) * 0x10;
          }
          FUN_005ff784(param_2 + 0x4b8,plVar1,lVar15);
          if (*(long *)(param_2 + 0x4e0) == 0) {
            uVar8 = 0xaaaaaa00aaaaaa00;
          }
          else {
            uVar8 = (ulong)*(uint *)(*(long *)(*(long *)(param_2 + 0x4c0) +
                                              (*(ulong *)(param_2 + 0x4d8) >> 8) * 8) +
                                     (*(ulong *)(param_2 + 0x4d8) & 0xff) * 0x10 + 8) |
                    0xaa0100000000;
          }
          lVar15 = (long)(int)uVar8;
          if ((uVar8 & 0x100000000) == 0) {
            lVar15 = -1;
          }
          goto LAB_005fd274;
        }
        uVar2 = *(long *)(param_2 + 0x4e0) + uVar8;
        if (plVar11 == (long *)(*(long *)(lVar15 + (uVar2 >> 8) * 8) + (uVar2 & 0xff) * 0x10))
        goto LAB_005fd210;
LAB_005fd1e8:
        if (*(long *)(param_2 + 0x5c0) - *(long *)(param_2 + 0x4b0) <= *plVar11) goto LAB_005fd210;
        plVar17 = plVar17 + 2;
        plVar11 = plVar11 + 2;
      } while ((long *)*plVar10 != plVar17);
      plVar10 = plVar10 + 1;
      plVar11 = (long *)*plVar10;
    } while( true );
  }
  lVar15 = -1;
LAB_005fd274:
  *(long *)(param_2 + 0xa8) = lVar15;
  uVar6 = FUN_00603f7c(*(undefined8 *)(param_2 + 0x4a8));
  *(undefined4 *)(param_2 + 0x13c) = uVar6;
  uVar6 = FUN_00603f9c(*(undefined8 *)(param_2 + 0x4a8));
  *(undefined4 *)(param_2 + 0x140) = uVar6;
  uVar6 = FUN_00603fbc(*(undefined8 *)(param_2 + 0x4a8));
  *(undefined4 *)(param_2 + 0x144) = uVar6;
  uVar6 = FUN_00603fe8(*(undefined8 *)(param_2 + 0x4a8));
  *(undefined4 *)(param_2 + 0x148) = uVar6;
  uVar7 = FUN_00604014(*(undefined8 *)(param_2 + 0x4a8));
  *(double *)(param_2 + 0xe0) = (double)uVar7 / 1000.0;
  uVar18 = FUN_00604028(*(undefined8 *)(param_2 + 0x4a8));
  uVar8 = *(ulong *)(param_2 + 0x608);
  lVar15 = *(long *)(param_2 + 0x5f0);
  lVar16 = *(long *)(param_2 + 0x5f8);
  *(undefined8 *)(param_2 + 0xe8) = uVar18;
  *(undefined1 *)(param_2 + 0x14c) = *(undefined1 *)(param_2 + 0x598);
  plVar1 = (long *)(lVar15 + (uVar8 / 0x22) * 8);
  if (lVar15 == lVar16) {
    plVar11 = (long *)0x0;
  }
  else {
    plVar11 = (long *)(*plVar1 + (uVar8 % 0x22) * 0x78);
  }
  plVar10 = plVar1;
  do {
    plVar17 = plVar11 + -0x1fe;
    do {
      if (lVar15 == lVar16) {
        if (plVar11 == (long *)0x0) goto LAB_005fd3b4;
      }
      else {
        uVar2 = *(long *)(param_2 + 0x610) + uVar8;
        if (plVar11 == (long *)(*(long *)(lVar15 + (uVar2 / 0x22) * 8) + (uVar2 % 0x22) * 0x78))
        goto LAB_005fd3b4;
      }
      if ((long)(uVar14 - *(long *)(param_2 + 0x5e0)) <= *plVar11) {
LAB_005fd3b4:
        if (lVar15 == lVar16) {
          lVar15 = 0;
        }
        else {
          lVar15 = *plVar1 + (uVar8 % 0x22) * 0x78;
        }
        FUN_00600070(param_2 + 0x5e8,plVar1,lVar15);
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
        uStack_58 = 0xaaaaaaaaaaaaaa;
        puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_49 = &DAT_aaaaaaaaaaaaaaaa;
        local_51 = 0xaa;
        uStack_50 = 0xaaaaaaaaaaaaaa;
        bVar3 = *(long *)(param_2 + 0x610) == 0;
        if (bVar3) {
          uVar12 = 0;
        }
        else {
          lVar15 = *(long *)(*(long *)(param_2 + 0x5f0) + (*(ulong *)(param_2 + 0x608) / 0x22) * 8)
                   + (*(ulong *)(param_2 + 0x608) % 0x22) * 0x78;
          puStack_68 = *(undefined1 **)(lVar15 + 0x51);
          local_70 = *(undefined1 **)(lVar15 + 0x49);
          puStack_60 = *(undefined1 **)(lVar15 + 0x59);
          puStack_49 = *(undefined1 **)(lVar15 + 0x70);
          uStack_58 = (undefined7)*(undefined8 *)(lVar15 + 0x61);
          puStack_a8 = *(undefined1 **)(lVar15 + 0x11);
          local_b0 = *(undefined1 **)(lVar15 + 9);
          puStack_98 = *(undefined1 **)(lVar15 + 0x21);
          puStack_a0 = *(undefined1 **)(lVar15 + 0x19);
          local_51 = (undefined1)*(undefined8 *)(lVar15 + 0x68);
          uStack_50 = (undefined7)((ulong)*(undefined8 *)(lVar15 + 0x68) >> 8);
          puStack_88 = *(undefined1 **)(lVar15 + 0x31);
          local_90 = *(undefined1 **)(lVar15 + 0x29);
          puStack_78 = *(undefined1 **)(lVar15 + 0x41);
          puStack_80 = *(undefined1 **)(lVar15 + 0x39);
          uVar12 = *(undefined1 *)(lVar15 + 8);
        }
        *(undefined1 *)(param_2 + 0x250) = uVar12;
        *(bool *)(param_2 + 0x2c0) = !bVar3;
        *(undefined1 **)(param_2 + 0x2b8) = puStack_49;
        *(ulong *)(param_2 + 0x2b0) = CONCAT71(uStack_50,local_51);
        *(undefined1 **)(param_2 + 0x299) = puStack_68;
        *(undefined1 **)(param_2 + 0x291) = local_70;
        *(ulong *)(param_2 + 0x2a9) = CONCAT17(local_51,uStack_58);
        *(undefined1 **)(param_2 + 0x2a1) = puStack_60;
        *(undefined1 **)(param_2 + 0x259) = puStack_a8;
        *(undefined1 **)(param_2 + 0x251) = local_b0;
        *(undefined1 **)(param_2 + 0x269) = puStack_98;
        *(undefined1 **)(param_2 + 0x261) = puStack_a0;
        *(undefined1 **)(param_2 + 0x279) = puStack_88;
        *(undefined1 **)(param_2 + 0x271) = local_90;
        *(undefined1 **)(param_2 + 0x289) = puStack_78;
        *(undefined1 **)(param_2 + 0x281) = puStack_80;
        if ((*(char *)(param_2 + 0x628) == '\x01') && (*(char *)(param_2 + 0x638) == '\x01')) {
          lVar15 = (uVar14 - *(long *)(param_2 + 0x630)) + *(long *)(param_2 + 0x620);
          uVar12 = 1;
        }
        else {
          uVar12 = 0;
          lVar15 = 0;
        }
        *(undefined1 *)(param_2 + 0x158) = uVar12;
        cVar4 = *(char *)(param_2 + 0x58);
        uVar18 = *(undefined8 *)(param_2 + 0x30);
        *(long *)(param_2 + 0x150) = lVar15;
        param_1[1] = *(undefined8 *)(param_2 + 0x38);
        *param_1 = uVar18;
        puVar9 = param_1 + 2;
        *(undefined1 *)puVar9 = 0;
        *(undefined1 *)(param_1 + 5) = 0;
        if (cVar4 == '\x01') {
          if (*(char *)(param_2 + 0x57) < '\0') {
            FUN_005478d8(puVar9,*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x48));
          }
          else {
            uVar19 = *(undefined8 *)(param_2 + 0x40);
            uVar18 = *(undefined8 *)(param_2 + 0x50);
            param_1[3] = *(undefined8 *)(param_2 + 0x48);
            *puVar9 = uVar19;
            param_1[4] = uVar18;
          }
          *(undefined1 *)(param_1 + 5) = 1;
        }
        memcpy(param_1 + 6,(void *)(param_2 + 0x60),0x108);
        if (*(char *)(param_2 + 0x17f) < '\0') {
          FUN_005478d8(param_1 + 0x27,*(undefined8 *)(param_2 + 0x168),
                       *(undefined8 *)(param_2 + 0x170));
        }
        else {
          uVar19 = *(undefined8 *)(param_2 + 0x168);
          uVar18 = *(undefined8 *)(param_2 + 0x178);
          param_1[0x28] = *(undefined8 *)(param_2 + 0x170);
          param_1[0x27] = uVar19;
          param_1[0x29] = uVar18;
        }
        if (*(long *)(lVar5 + 0x28) != lVar13) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        memcpy(param_1 + 0x2a,(void *)(param_2 + 0x180),400);
        return;
      }
      plVar17 = plVar17 + 0xf;
      plVar11 = plVar11 + 0xf;
    } while ((long *)*plVar10 != plVar17);
    plVar10 = plVar10 + 1;
    plVar11 = (long *)*plVar10;
  } while( true );
}


// ===== 005fd59c  FUN_005fd59c =====

void FUN_005fd59c(long param_1,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 uStack_52;
  undefined1 uStack_51;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  
  lVar2 = *(long *)(param_1 + 0x648);
  plVar1 = *(long **)(param_1 + 0x640);
  if (lVar2 != 0) {
    FUN_00d0f740(1,lVar2);
  }
  local_50[0] = (long *)operator_new(0x30);
  *local_50[0] = lVar2;
  local_50[0][3] = param_1;
  local_50[0][4] = (long)FUN_004473ec;
  local_50[0][5] = (long)FUN_00600d58;
  *(undefined4 *)(local_50[0] + 2) = param_2;
  local_40 = FUN_005db390;
  pcStack_38 = FUN_005db348;
  (**(code **)(*plVar1 + 8))(plVar1,local_50,&uStack_51,&uStack_52);
  (*local_40)(0,local_50,local_50);
  return;
}


// ===== 005fd65c  FUN_005fd65c =====

void FUN_005fd65c(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined1 uStack_91;
  long local_90;
  void *local_88;
  long lStack_80;
  long local_78;
  undefined1 local_70;
  undefined1 uStack_61;
  long *local_60 [2];
  code *local_50;
  code *pcStack_48;
  
  lVar5 = *(long *)(param_1 + 0x648);
  plVar4 = *(long **)(param_1 + 0x640);
  if (lVar5 != 0) {
    FUN_00d0f740(1,lVar5);
  }
  local_90 = param_1;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_005478d8(&local_88,*param_2,param_2[1]);
  }
  else {
    lStack_80 = param_2[1];
    local_88 = (void *)*param_2;
    local_78 = param_2[2];
  }
  lVar2 = local_90;
  lVar1 = param_2[3];
  local_70 = (char)lVar1;
  plVar3 = (long *)operator_new(0x28);
  *plVar3 = lVar2;
  plVar3[2] = lStack_80;
  plVar3[1] = (long)local_88;
  plVar3[3] = local_78;
  *(char *)(plVar3 + 4) = (char)lVar1;
  local_88 = (void *)0x0;
  lStack_80 = 0;
  local_78 = 0;
  local_60[0] = (long *)operator_new(0x30);
  *local_60[0] = lVar5;
  local_60[0][4] = (long)FUN_00600dac;
  local_60[0][5] = (long)FUN_00600d6c;
  local_60[0][2] = (long)plVar3;
  local_50 = FUN_005db390;
  pcStack_48 = FUN_005db348;
  (**(code **)(*plVar4 + 8))(plVar4,local_60,&uStack_61,&uStack_91);
  (*local_50)(0,local_60,local_60);
  if (local_78 < 0) {
    operator_delete(local_88);
  }
  return;
}


// ===== 005fd7a0  FUN_005fd7a0 =====

void FUN_005fd7a0(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x80);
  lVar1 = 0x7fffffffffffffff;
  if ((lVar2 != 0x7fffffffffffffff) && (param_2 != 0x7fffffffffffffff)) {
    lVar1 = -0x8000000000000000;
    if (param_2 != -0x8000000000000000 && lVar2 != -0x8000000000000000) {
      lVar1 = lVar2 + param_2;
    }
  }
  lVar2 = *(long *)(param_1 + 0x88);
  *(long *)(param_1 + 0x80) = lVar1;
  lVar1 = 0x7fffffffffffffff;
  if ((lVar2 != 0x7fffffffffffffff) && (param_3 != 0x7fffffffffffffff)) {
    lVar1 = -0x8000000000000000;
    if (param_3 != -0x8000000000000000 && lVar2 != -0x8000000000000000) {
      lVar1 = lVar2 + param_3;
    }
  }
  lVar2 = *(long *)(param_1 + 0x98);
  *(long *)(param_1 + 0x88) = lVar1;
  *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + 1;
  lVar1 = 0x7fffffffffffffff;
  if ((lVar2 != 0x7fffffffffffffff) && (param_4 != 0x7fffffffffffffff)) {
    lVar1 = -0x8000000000000000;
    if (param_4 != -0x8000000000000000 && lVar2 != -0x8000000000000000) {
      lVar1 = lVar2 + param_4;
    }
  }
  *(long *)(param_1 + 0x98) = lVar1;
  return;
}


// ===== 005fd840  FUN_005fd840 =====

void FUN_005fd840(long param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5
                 ,undefined4 param_6,undefined4 param_7)

{
  *(undefined4 *)(param_1 + 0x70) = param_2;
  *(undefined4 *)(param_1 + 0x74) = param_3;
  *(uint *)(param_1 + 0x78) = param_4;
  *(undefined4 *)(param_1 + 0x7c) = param_5;
  *(undefined4 *)(param_1 + 0xa0) = param_6;
  *(undefined4 *)(param_1 + 0xa4) = param_7;
  FUN_00992618(param_1 + 0x428,param_5);
  FUN_00992618(param_1 + 0x448,(ulong)param_4);
  FUN_00992618(param_1 + 0x468,param_3);
  FUN_00992618(param_1 + 0x488,
               (ulong)param_4 +
               ((ulong)(*(long *)(param_1 + 0x578) - (*(long *)(param_1 + 0x578) >> 0x3f)) >> 1));
  return;
}


// ===== 005fd8b4  FUN_005fd8b4 =====

void FUN_005fd8b4(long param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0x61c) == '\x01') {
    *(undefined1 *)(param_1 + 0x61c) = 0;
  }
  if (param_1 != -0x618) {
    *(undefined4 *)(param_1 + 0x618) = param_2;
    *(undefined1 *)(param_1 + 0x61c) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 005fd900  FUN_005fd900 =====

void FUN_005fd900(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (*(char *)(param_2 + 0x68) != -1) {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))();
    uVar3 = uVar1 / 1000;
    if (499 < uVar1 % 1000) {
      uVar3 = uVar3 + 1;
    }
    if ((uVar1 & 0x8000000000000000) != 0) {
      uVar3 = -(-uVar1 / 1000) - (ulong)(500 < -uVar1 % 1000);
    }
    FUN_005fd9e8(param_1 + 0x5e0,param_2,uVar3);
  }
  if ((*(byte *)(param_1 + 0x5a8) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x48);
    *(undefined1 *)(param_1 + 0x5a8) = 1;
    *(undefined8 *)(param_1 + 0x5a0) = uVar2;
  }
  if ((*(long *)(param_1 + 0xf0) == -1) && (*(char *)(param_1 + 0x5b8) == '\x01')) {
    *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0x5b0) - *(long *)(param_1 + 0x5a0);
  }
  return;
}


// ===== 005fd9e8  FUN_005fd9e8 =====

void FUN_005fd9e8(long *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long local_b8;
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
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar6 = param_1[5];
  lVar3 = param_1[2];
  lVar2 = param_1[3];
  plVar1 = (long *)(lVar3 + (uVar6 / 0x22) * 8);
  if (lVar3 == lVar2) {
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = (long *)(*plVar1 + (uVar6 % 0x22) * 0x78);
  }
  plVar4 = plVar1;
  do {
    plVar7 = plVar5 + -0x1fe;
    do {
      if (lVar3 == lVar2) {
        if (plVar5 != (long *)0x0) goto LAB_005fdaac;
LAB_005fdad4:
        if (lVar3 == lVar2) {
          lVar3 = 0;
        }
        else {
          lVar3 = *plVar1 + (uVar6 % 0x22) * 0x78;
        }
        FUN_00600070(param_1 + 1,plVar1,lVar3);
        lVar3 = param_1[6];
        goto joined_r0x005fdb0c;
      }
      if (plVar5 == (long *)(*(long *)(lVar3 + ((param_1[6] + uVar6) / 0x22) * 8) +
                            ((param_1[6] + uVar6) % 0x22) * 0x78)) goto LAB_005fdad4;
LAB_005fdaac:
      if (param_3 - *param_1 <= *plVar5) goto LAB_005fdad4;
      plVar7 = plVar7 + 0xf;
      plVar5 = plVar5 + 0xf;
    } while ((long *)*plVar4 != plVar7);
    plVar4 = plVar4 + 1;
    plVar5 = (long *)*plVar4;
  } while( true );
joined_r0x005fdb0c:
  if (lVar3 == 0) {
LAB_005fdbb4:
    uStack_68 = param_2[9];
    local_70 = param_2[8];
    uStack_58 = param_2[0xb];
    uStack_60 = param_2[10];
    uStack_48 = param_2[0xd];
    local_50 = param_2[0xc];
    uStack_a8 = param_2[1];
    local_b0 = *param_2;
    uStack_98 = param_2[3];
    uStack_a0 = param_2[2];
    uStack_88 = param_2[5];
    local_90 = param_2[4];
    uStack_78 = param_2[7];
    uStack_80 = param_2[6];
    local_b8 = param_3;
    FUN_00600fec(param_1 + 1,&local_b8);
    return;
  }
  uVar6 = (lVar3 + param_1[5]) - 1;
  uVar6 = FUN_00659eac(*(long *)(param_1[2] + (uVar6 / 0x22) * 8) + (uVar6 % 0x22) * 0x78 + 8,
                       param_2);
  if ((uVar6 & 1) == 0) {
    if ((param_1[6] != 0) &&
       (uVar6 = (param_1[6] + param_1[5]) - 1,
       param_3 <= *(long *)(*(long *)(param_1[2] + (uVar6 / 0x22) * 8) + (uVar6 % 0x22) * 0x78))) {
      return;
    }
    goto LAB_005fdbb4;
  }
  FUN_00600f08(param_1 + 1);
  lVar3 = param_1[6];
  goto joined_r0x005fdb0c;
}


// ===== 005fdc00  FUN_005fdc00 =====

void FUN_005fdc00(long param_1,int param_2,undefined8 *param_3)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uStack_81;
  undefined8 local_80;
  undefined8 uStack_78;
  int local_70;
  undefined1 uStack_61;
  long *local_60 [2];
  code *local_50;
  code *pcStack_48;
  
  if (param_2 == *(int *)(param_1 + 0x310)) {
    lVar3 = *(long *)(param_1 + 0x640);
    lVar1 = FUN_005d6490();
    if (lVar1 != lVar3) {
      FUN_007e03ac();
      lVar1 = FUN_007e0878();
      if ((lVar1 == 0) || (lVar1 != lVar3)) {
        lVar1 = *(long *)(param_1 + 0x648);
        plVar4 = *(long **)(param_1 + 0x640);
        if (lVar1 != 0) {
          FUN_00d0f740(1,lVar1);
        }
        uStack_78 = param_3[1];
        local_80 = *param_3;
        local_70 = *(int *)(param_3 + 2);
        piVar2 = (int *)operator_new(0x20);
        *piVar2 = param_2;
        *(undefined8 *)(piVar2 + 3) = uStack_78;
        *(undefined8 *)(piVar2 + 1) = local_80;
        piVar2[5] = local_70;
        *(long *)(piVar2 + 6) = param_1;
        local_60[0] = (long *)operator_new(0x30);
        *local_60[0] = lVar1;
        local_60[0][4] = (long)FUN_005ea56c;
        local_60[0][5] = (long)FUN_00601d4c;
        local_60[0][2] = (long)piVar2;
        local_60[0][3] = 0x20;
        local_50 = FUN_005db390;
        pcStack_48 = FUN_005db348;
        (**(code **)(*plVar4 + 8))(plVar4,local_60,&uStack_61,&uStack_81);
        (*local_50)(0,local_60,local_60);
        return;
      }
    }
    uVar6 = param_3[1];
    uVar5 = *param_3;
    *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_3 + 2);
    *(undefined8 *)(param_1 + 0x1e0) = uVar6;
    *(undefined8 *)(param_1 + 0x1d8) = uVar5;
  }
  return;
}


// ===== 005fdd48  FUN_005fdd48 =====

void FUN_005fdd48(long param_1)

{
  FUN_005fdc00(param_1 + -0x10);
  return;
}


// ===== 005fdd54  FUN_005fdd54 =====

void FUN_005fdd54(long param_1,int param_2,undefined8 ***param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  undefined8 ***__dest;
  undefined8 **local_58;
  ulong uStack_50;
  undefined8 local_48;
  
  if (*(int *)(param_1 + 0x310) == param_2) {
    if (0x7ffffffffffffff6 < param_4) {
                    /* WARNING: Subroutine does not return */
      FUN_005d45ec();
    }
    if (param_4 < 0x17) {
      local_48 = CONCAT17((char)param_4,(undefined7)local_48);
      __dest = &local_58;
    }
    else {
      uVar1 = (param_4 & 0x7ffffffffffffff8) + 8;
      uVar2 = 0x19;
      if (uVar1 != 0x18) {
        uVar2 = uVar1;
      }
      __dest = (undefined8 ***)operator_new(uVar2);
      local_48 = uVar2 | 0x8000000000000000;
      local_58 = __dest;
      uStack_50 = param_4;
    }
    if ((undefined8 ***)((long)__dest + param_4) < __dest) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                );
    }
    if ((__dest <= param_3) && (param_3 < (undefined8 ***)((long)__dest + param_4))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memmove(__dest,param_3,param_4);
    cVar3 = *(char *)(param_1 + 0x17f);
    *(undefined1 *)((long)__dest + param_4) = 0;
    if (cVar3 < '\0') {
      operator_delete(*(void **)(param_1 + 0x168));
    }
    *(ulong *)(param_1 + 0x170) = uStack_50;
    *(undefined8 ***)(param_1 + 0x168) = local_58;
    *(ulong *)(param_1 + 0x178) = local_48;
  }
  return;
}


// ===== 005fde7c  FUN_005fde7c =====

void FUN_005fde7c(long param_1)

{
  FUN_005fdd54(param_1 + -8);
  return;
}


// ===== 005fde88  FUN_005fde88 =====

void FUN_005fde88(long param_1,long param_2,undefined2 param_3,undefined8 param_4,undefined1 param_5
                 ,undefined4 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  long lVar13;
  undefined4 *puVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long local_b0;
  undefined1 uStack_82;
  undefined1 uStack_81;
  long *local_80 [2];
  code *local_70;
  code *pcStack_68;
  
  lVar13 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))();
  if (*(long *)(param_2 + 0xb8) == 0) {
    plVar15 = DAT_00d60288;
    if (((DAT_00d60290 & 1) == 0) &&
       (iVar12 = FUN_0054fdd4(&DAT_00d60290), plVar15 = DAT_00d60288, iVar12 != 0)) {
      DAT_00d60288 = (long *)operator_new(0x18);
      DAT_00d60288[1] = 0;
      DAT_00d60288[2] = 0;
      *DAT_00d60288 = 0;
      FUN_0054ff1c(&DAT_00d60290);
      plVar15 = DAT_00d60288;
    }
  }
  else {
    plVar15 = (long *)(*(long *)(param_2 + 0xb8) + 8);
  }
  if (*plVar15 != plVar15[1]) {
    if (*(long *)(param_2 + 0xb8) == 0) {
      if (((DAT_00d60290 & 1) == 0) && (iVar12 = FUN_0054fdd4(&DAT_00d60290), iVar12 != 0)) {
        DAT_00d60288 = (long *)operator_new(0x18);
        DAT_00d60288[1] = 0;
        DAT_00d60288[2] = 0;
        *DAT_00d60288 = 0;
        FUN_0054ff1c(&DAT_00d60290);
      }
      lVar20 = *DAT_00d60288;
      if (*(long *)(param_2 + 0xb8) == 0) {
        plVar15 = DAT_00d60288;
        if (((DAT_00d60290 & 1) == 0) &&
           (iVar12 = FUN_0054fdd4(&DAT_00d60290), plVar15 = DAT_00d60288, iVar12 != 0)) {
          DAT_00d60288 = (long *)operator_new(0x18);
          DAT_00d60288[1] = 0;
          DAT_00d60288[2] = 0;
          *DAT_00d60288 = 0;
          FUN_0054ff1c(&DAT_00d60290);
          plVar15 = DAT_00d60288;
        }
      }
      else {
        plVar15 = (long *)(*(long *)(param_2 + 0xb8) + 8);
      }
    }
    else {
      plVar15 = (long *)(*(long *)(param_2 + 0xb8) + 8);
      lVar20 = *plVar15;
    }
    lVar17 = plVar15[1];
    lVar16 = lVar20;
    if ((lVar20 != lVar17) && (lVar1 = lVar20 + 0x68, lVar1 != lVar17)) {
      lVar4 = lVar20;
      if (*(long *)(lVar20 + 0x28) <= *(long *)(lVar20 + 0x90)) {
        lVar16 = lVar1;
        lVar1 = lVar20;
      }
      while (lVar9 = lVar4 + 0xd0, lVar20 = lVar1, lVar9 != lVar17) {
        lVar20 = lVar4 + 0x138;
        if (lVar20 == lVar17) {
          lVar20 = lVar9;
          if ((*(long *)(lVar1 + 0x28) <= *(long *)(lVar4 + 0xf8)) &&
             (lVar20 = lVar1, *(long *)(lVar16 + 0x28) <= *(long *)(lVar4 + 0xf8))) {
            lVar16 = lVar9;
          }
          break;
        }
        lVar18 = *(long *)(lVar4 + 0x160);
        lVar19 = *(long *)(lVar4 + 0xf8);
        lVar4 = lVar20;
        lVar8 = lVar18;
        if (lVar19 <= lVar18) {
          lVar4 = lVar9;
          lVar8 = lVar19;
        }
        lVar2 = lVar18;
        if (lVar18 <= lVar19) {
          lVar2 = lVar19;
        }
        lVar3 = lVar9;
        if (lVar19 <= lVar18) {
          lVar3 = lVar20;
        }
        if (*(long *)(lVar1 + 0x28) <= lVar8) {
          lVar4 = lVar1;
        }
        lVar1 = lVar4;
        lVar4 = lVar9;
        if (*(long *)(lVar16 + 0x28) <= lVar2) {
          lVar16 = lVar3;
        }
      }
    }
    lVar20 = *(long *)(lVar20 + 0x28);
    if (lVar20 + 0x7fffffffffffffffU < 0xfffffffffffffffe) {
      lVar17 = *(long *)(lVar16 + 0x28);
      lVar16 = lVar13;
      if (lVar13 != -0x8000000000000000) {
        lVar16 = lVar13 - lVar20;
      }
      local_b0 = lVar13;
      if (lVar13 != 0x7fffffffffffffff) {
        local_b0 = lVar16;
      }
      lVar16 = 0x7fffffffffffffff;
      if ((lVar17 != 0x7fffffffffffffff) && (lVar16 = lVar17, lVar17 != -0x8000000000000000)) {
        lVar16 = lVar17 - lVar20;
      }
      goto LAB_005fe044;
    }
  }
  local_b0 = 0;
  lVar16 = 0;
LAB_005fe044:
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x10);
  uVar10 = FUN_007bf3cc(param_2);
  uVar11 = FUN_007bf3e8(param_2);
  lVar20 = *(long *)(param_1 + 0x648);
  plVar15 = *(long **)(param_1 + 0x640);
  if (lVar20 != 0) {
    FUN_00d0f740(1,lVar20);
  }
  puVar14 = (undefined4 *)operator_new(0x58);
  *(undefined8 *)(puVar14 + 2) = uVar6;
  *(undefined8 *)(puVar14 + 4) = uVar5;
  *puVar14 = uVar7;
  puVar14[1] = 0xaaaaaaaa;
  puVar14[6] = uVar10;
  puVar14[7] = uVar11;
  *(long *)(puVar14 + 0x10) = lVar16;
  *(long *)(puVar14 + 8) = lVar13;
  *(undefined2 *)(puVar14 + 10) = param_3;
  *(long *)(puVar14 + 0x14) = param_1;
  *(undefined8 *)(puVar14 + 0xc) = param_4;
  *(long *)(puVar14 + 0xe) = local_b0;
  *(undefined1 *)(puVar14 + 0x12) = param_5;
  puVar14[0x13] = param_6;
  local_80[0] = (long *)operator_new(0x30);
  local_80[0][2] = (long)puVar14;
  local_80[0][3] = 0x58;
  local_80[0][4] = (long)FUN_005ea56c;
  local_80[0][5] = (long)FUN_00601d6c;
  *local_80[0] = lVar20;
  local_70 = FUN_005db390;
  pcStack_68 = FUN_005db348;
  (**(code **)(*plVar15 + 8))(plVar15,local_80,&uStack_81,&uStack_82);
  (*local_70)(0,local_80,local_80);
  return;
}


// ===== 005fe224  FUN_005fe224 =====

void FUN_005fe224(long param_1,undefined4 *param_2,ulong param_3,ulong param_4,long param_5,
                 long param_6,undefined1 param_7)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  void *pvVar12;
  undefined1 local_6c [3];
  undefined1 uStack_69;
  undefined1 *local_68;
  long local_48;
  
  local_6c[0] = param_7;
  uVar3 = FUN_00659d40(local_6c);
  uVar4 = FUN_00659d40(param_1 + 0x598);
  if ((uVar3 & 1) != (uVar4 & 1)) {
    FUN_00603118(*(undefined8 *)(param_1 + 0x4a8));
    pvVar5 = operator_new(0x108);
    FUN_00603058();
    pvVar12 = *(void **)(param_1 + 0x4a8);
    *(void **)(param_1 + 0x4a8) = pvVar5;
    if (pvVar12 != (void *)0x0) {
      FUN_00601d8c(pvVar12);
      operator_delete(pvVar12);
    }
  }
  FUN_00603ddc(*(undefined8 *)(param_1 + 0x4a8),*param_2,param_3 & 0xffff,
               *(undefined4 *)(param_1 + 0x59c));
  local_48 = param_1 + 0x4e8;
  local_68 = local_6c;
  lVar6 = FUN_00601e74(&local_48,local_6c,&DAT_001f94c3,&local_68,&uStack_69);
  iVar2 = *(int *)(param_1 + 0xb8);
  *(int *)(param_1 + 0xb8) = iVar2 + 1;
  if (((uint)param_3 >> 8 & 1) == 0) {
    if (*(char *)(param_1 + 0x100) == '\x01') {
      uVar7 = FUN_004022fc();
      if ((uVar7 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../video/receive_statistics_proxy.cc",0x157a,
                     "QP sum was already set and no QP was given for a frame.");
      }
      if (*(char *)(param_1 + 0x100) == '\x01') {
        *(undefined1 *)(param_1 + 0x100) = 0;
      }
    }
  }
  else {
    plVar1 = (long *)(param_1 + 0xf8);
    if ((*(byte *)(param_1 + 0x100) & 1) == 0) {
      if ((iVar2 != 0) && (uVar7 = FUN_004022fc(), (uVar7 & 1) == 0)) {
        FUN_00623bb0(&DAT_001f4e98,"../../video/receive_statistics_proxy.cc",0x153a,
                     "Frames decoded was not 1 when first qp value was received.");
      }
      if (*(char *)(param_1 + 0x100) == '\x01') {
        *plVar1 = 0;
      }
      else {
        if (plVar1 == (long *)0x0) goto LAB_005fe6ec;
        *(undefined8 *)(param_1 + 0xf8) = 0;
        *(undefined1 *)(param_1 + 0x100) = 1;
      }
    }
    *plVar1 = *plVar1 + (param_3 & 0xff);
    FUN_00992618(lVar6 + 0xb8,(uint)param_3 & 0xff);
  }
  if ((long)param_4 < 0) {
    uVar7 = -(-param_4 / 1000) - (ulong)(500 < -param_4 % 1000);
  }
  else {
    uVar7 = param_4 / 1000;
    if (499 < param_4 % 1000) {
      uVar7 = uVar7 + 1;
    }
  }
  FUN_00992618(param_1 + 0x408,uVar7 & 0xffffffff);
  lVar8 = *(long *)(param_1 + 0xc0);
  *(int *)(param_1 + 0x6c) = (int)uVar7;
  if (lVar8 == 0x7fffffffffffffff) {
    lVar11 = 0x7fffffffffffffff;
  }
  else {
    lVar11 = 0x7fffffffffffffff;
    if (param_4 != 0x7fffffffffffffff) {
      lVar11 = -0x8000000000000000;
      if (param_4 != 0x8000000000000000 && lVar8 != -0x8000000000000000) {
        lVar11 = lVar8 + param_4;
      }
    }
  }
  lVar9 = *(long *)(param_1 + 200);
  *(long *)(param_1 + 0xc0) = lVar11;
  lVar8 = 0x7fffffffffffffff;
  if ((lVar9 != 0x7fffffffffffffff) && (param_5 != 0x7fffffffffffffff)) {
    lVar8 = -0x8000000000000000;
    if (param_5 != -0x8000000000000000 && lVar9 != -0x8000000000000000) {
      lVar8 = lVar9 + param_5;
    }
  }
  lVar11 = *(long *)(param_1 + 0xd0);
  *(long *)(param_1 + 200) = lVar8;
  lVar8 = 0x7fffffffffffffff;
  if ((lVar11 != 0x7fffffffffffffff) && (param_6 != 0x7fffffffffffffff)) {
    lVar8 = -0x8000000000000000;
    if (param_6 != -0x8000000000000000 && lVar11 != -0x8000000000000000) {
      lVar8 = lVar11 + param_6;
    }
  }
  *(long *)(param_1 + 0xd0) = lVar8;
  if (param_6 != 0) {
    *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
  }
  *(undefined1 *)(param_1 + 0x598) = local_6c[0];
  uVar7 = *(ulong *)(param_2 + 8);
  if ((long)uVar7 < 0) {
    uVar10 = -(-uVar7 / 1000) - (ulong)(500 < -uVar7 % 1000);
  }
  else {
    uVar10 = uVar7 / 1000;
    if (499 < uVar7 % 1000) {
      uVar10 = uVar10 + 1;
    }
  }
  FUN_007dec4c(param_1 + 0x318,1,uVar10);
  if (*(char *)(param_1 + 0x5c8) == '\x01') {
    uVar7 = *(ulong *)(param_2 + 8);
    lVar8 = *(long *)(param_1 + 0x5c0);
    if ((long)uVar7 < 0) {
      uVar10 = -uVar7 / 1000;
      lVar11 = -(ulong)(500 < -uVar7 % 1000);
      uVar7 = lVar11 - (uVar10 + lVar8);
      uVar10 = lVar11 - uVar10;
    }
    else {
      uVar10 = uVar7 / 1000;
      if (499 < uVar7 % 1000) {
        uVar10 = uVar10 + 1;
      }
      uVar7 = uVar10 - lVar8;
    }
    local_48 = CONCAT44(local_48._4_4_,(int)uVar7);
    FUN_005fe700(param_1 + 0x4b0,&local_48,uVar10);
    FUN_00992618(lVar6 + 0x48,uVar7 & 0xffffffff);
    FUN_00991ec0(lVar6 + 0xe0,uVar7 & 0xffffffff);
    *(ulong *)(lVar6 + 0x68) = *(long *)(lVar6 + 0x68) + uVar7;
  }
  if (*(int *)(param_1 + 0xb8) == 1) {
    uVar7 = *(ulong *)(param_2 + 8);
    if ((long)uVar7 < 0) {
      uVar10 = -(-uVar7 / 1000) - (ulong)(500 < -uVar7 % 1000);
    }
    else {
      uVar10 = uVar7 / 1000;
      if (499 < uVar7 % 1000) {
        uVar10 = uVar10 + 1;
      }
    }
    if (*(char *)(param_1 + 0x5b8) == '\x01') {
      *(undefined1 *)(param_1 + 0x5b8) = 0;
    }
    if (param_1 == -0x5b0) goto LAB_005fe6ec;
    *(ulong *)(param_1 + 0x5b0) = uVar10;
    *(undefined1 *)(param_1 + 0x5b8) = 1;
  }
  uVar7 = *(ulong *)(param_2 + 8);
  if ((long)uVar7 < 0) {
    uVar10 = -(-uVar7 / 1000) - (ulong)(500 < -uVar7 % 1000);
  }
  else {
    uVar10 = uVar7 / 1000;
    if (499 < uVar7 % 1000) {
      uVar10 = uVar10 + 1;
    }
  }
  if (*(char *)(param_1 + 0x5c8) == '\x01') {
    *(undefined1 *)(param_1 + 0x5c8) = 0;
  }
  if ((long *)(param_1 + 0x5c0) != (long *)0x0) {
    *(ulong *)(param_1 + 0x5c0) = uVar10;
    *(undefined1 *)(param_1 + 0x5c8) = 1;
    return;
  }
LAB_005fe6ec:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 005fe700  FUN_005fe700 =====

void FUN_005fe700(long *param_1,int *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long local_40;
  int local_38;
  
  uVar6 = param_1[5];
  lVar5 = param_1[2];
  lVar2 = param_1[3];
  plVar1 = (long *)(lVar5 + (uVar6 >> 8) * 8);
  if (lVar5 == lVar2) {
    plVar4 = (long *)0x0;
  }
  else {
    plVar4 = (long *)(*plVar1 + (uVar6 & 0xff) * 0x10);
  }
  plVar3 = plVar1;
  do {
    plVar7 = plVar4 + -0x200;
    do {
      if (lVar5 == lVar2) {
        if (plVar4 != (long *)0x0) goto LAB_005fe790;
LAB_005fe7b8:
        if (lVar5 == lVar2) {
          lVar5 = 0;
        }
        else {
          lVar5 = *plVar1 + (uVar6 & 0xff) * 0x10;
        }
        FUN_005ff784(param_1 + 1,plVar1,lVar5);
        lVar5 = param_1[6];
        goto joined_r0x005fe7e0;
      }
      if (plVar4 == (long *)(*(long *)(lVar5 + (param_1[6] + uVar6 >> 8) * 8) +
                            (param_1[6] + uVar6 & 0xff) * 0x10)) goto LAB_005fe7b8;
LAB_005fe790:
      if (param_3 - *param_1 <= *plVar4) goto LAB_005fe7b8;
      plVar7 = plVar7 + 2;
      plVar4 = plVar4 + 2;
    } while ((long *)*plVar3 != plVar7);
    plVar3 = plVar3 + 1;
    plVar4 = (long *)*plVar3;
  } while( true );
joined_r0x005fe7e0:
  if (lVar5 == 0) {
LAB_005fe830:
    local_38 = *param_2;
    local_40 = param_3;
    FUN_00602094(param_1 + 1,&local_40);
    return;
  }
  uVar6 = (lVar5 + param_1[5]) - 1;
  plVar1 = (long *)(*(long *)(param_1[2] + (uVar6 >> 8) * 8) + (uVar6 & 0xff) * 0x10);
  if (*param_2 < (int)plVar1[1]) {
    if (param_3 <= *plVar1) {
      return;
    }
    goto LAB_005fe830;
  }
  FUN_00601fd4(param_1 + 1);
  lVar5 = param_1[6];
  goto joined_r0x005fe7e0;
}


// ===== 005fe860  FUN_005fe860 =====

void FUN_005fe860(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined1 uStack_39;
  long local_38;
  long local_18;
  
  FUN_006038ec(*(undefined8 *)(param_1 + 0x4a8));
  local_38 = param_1 + 0x598;
  local_18 = param_1 + 0x4e8;
  lVar1 = FUN_00601e74(&local_18,param_1 + 0x598,&DAT_001f94c3,&local_38,&uStack_39);
  uVar4 = *(ulong *)(param_2 + 0x20);
  uVar6 = uVar4 / 1000;
  if (499 < uVar4 % 1000) {
    uVar6 = uVar6 + 1;
  }
  if ((uVar4 & 0x8000000000000000) != 0) {
    uVar6 = -(-uVar4 / 1000) - (ulong)(500 < -uVar4 % 1000);
  }
  FUN_007dec4c(param_1 + 0x378,1,uVar6);
  iVar3 = *(int *)(param_1 + 0x3c);
  if (iVar3 == 0) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))();
    iVar3 = *(int *)(param_1 + 0x3c);
    *(undefined8 *)(param_1 + 0x3d8) = uVar2;
  }
  *(int *)(param_1 + 0x3c) = iVar3 + 1;
  *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_2 + 0x18);
  iVar3 = *(int *)(param_2 + 0x1c);
  *(int *)(param_1 + 0x138) = iVar3;
  *(long *)(param_1 + 0x3e0) =
       (long)(SQRT((double)(iVar3 * *(int *)(param_2 + 0x18))) + (double)*(long *)(param_1 + 0x3e0))
  ;
  FUN_00992618(lVar1 + 0x78,*(undefined4 *)(param_2 + 0x18));
  FUN_00992618(lVar1 + 0x98,*(undefined4 *)(param_2 + 0x1c));
  lVar5 = *(long *)(param_2 + 8);
  if ((lVar5 == 0x7fffffffffffffff) ||
     (lVar7 = *(long *)(param_2 + 0x20), lVar7 == -0x8000000000000000)) goto LAB_005fe9f0;
  if ((lVar5 == -0x8000000000000000) || (lVar7 == 0x7fffffffffffffff)) {
LAB_005fe9dc:
    lVar7 = 0x7fffffffffffffff;
  }
  else {
    lVar5 = lVar5 - lVar7;
    if (-1 < lVar5) goto LAB_005fe9f0;
    if (lVar5 == -0x8000000000000000) goto LAB_005fe9dc;
    lVar8 = *(long *)(param_1 + 0x5d8);
    lVar7 = 0x7fffffffffffffff;
    if (((lVar8 != 0x7fffffffffffffff) && (lVar5 != -0x7fffffffffffffff)) &&
       (lVar7 = lVar8, lVar8 != -0x8000000000000000)) {
      lVar7 = lVar8 - lVar5;
    }
  }
  *(long *)(param_1 + 0x5d8) = lVar7;
  *(long *)(param_1 + 0x5d0) = *(long *)(param_1 + 0x5d0) + 1;
LAB_005fe9f0:
  if (0 < *(long *)(param_2 + 0x10)) {
    plVar9 = *(long **)(param_1 + 0x20);
    uVar2 = (**(code **)(*plVar9 + 0x10))(plVar9);
    uVar6 = (**(code **)(*plVar9 + 0x18))(plVar9,uVar2);
    lVar5 = ((uVar6 >> 0x20) * 1000 - *(long *)(param_2 + 0x10)) +
            (long)((double)(uVar6 & 0xffffffff) / DAT_001f4ff8 + 0.5);
    if (-1 < lVar5) {
      FUN_00992618(lVar1 + 0x28,lVar5);
    }
  }
  return;
}


// ===== 005feaac  FUN_005feaac =====

void FUN_005feaac(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  
  uVar3 = (**(code **)(**(long **)(param_2 + 0x20) + 0x10))();
  uVar5 = uVar3 / 1000;
  if (499 < uVar3 % 1000) {
    uVar5 = uVar5 + 1;
  }
  if ((uVar3 & 0x8000000000000000) != 0) {
    uVar5 = -(-uVar3 / 1000) - (ulong)(500 < -uVar3 % 1000);
  }
  lVar1 = -param_4;
  if (-1 < param_4) {
    lVar1 = param_4;
  }
  FUN_00992618(param_2 + 1000,lVar1);
  *(int *)(param_2 + 0x160) = (int)param_4;
  *(undefined8 *)(param_2 + 0x620) = param_3;
  *(ulong *)(param_2 + 0x630) = uVar5;
  iVar4 = (int)(ABS(param_1 + -90.0) + 0.5);
  *(undefined1 *)(param_2 + 0x628) = 1;
  bVar2 = false;
  if ((param_1 != 0.0 && param_1 < 0.0 == NAN(param_1)) && (bVar2 = false, !NAN(param_1))) {
    bVar2 = param_1 < 10000.0;
  }
  if (!bVar2) {
    iVar4 = 10000;
  }
  *(undefined1 *)(param_2 + 0x638) = 1;
  thunk_FUN_005f48d0(param_2 + 0x500,iVar4);
  return;
}


// ===== 005febbc  FUN_005febbc =====

void FUN_005febbc(long param_1,ulong param_2,long param_3,undefined1 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_48;
  long lStack_40;
  undefined1 local_34 [3];
  undefined1 uStack_31;
  undefined1 *local_18;
  
  if ((param_2 & 1) == 0) {
    param_4 = *(undefined1 *)(param_1 + 0x598);
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
  }
  else {
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  }
  local_18 = local_34;
  local_48 = param_1 + 0x4e8;
  local_34[0] = param_4;
  lVar1 = FUN_00601e74(&local_48,local_34,&DAT_001f94c3,&local_18,&uStack_31);
  *(long *)(lVar1 + 0x70) = *(long *)(lVar1 + 0x70) + param_3;
  if ((param_2 & 1) == 0) {
    *(int *)(lVar1 + 0xdc) = *(int *)(lVar1 + 0xdc) + 1;
  }
  else {
    *(int *)(lVar1 + 0xd8) = *(int *)(lVar1 + 0xd8) + 1;
  }
  uVar2 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))();
  uVar3 = uVar2 / 1000;
  if (499 < uVar2 % 1000) {
    uVar3 = uVar3 + 1;
  }
  if ((uVar2 & 0x8000000000000000) != 0) {
    uVar3 = -(-uVar2 / 1000) - (ulong)(500 < -uVar2 % 1000);
  }
  local_48 = uVar3;
  lStack_40 = param_3;
  FUN_00602d9c(0,param_1 + 0x580,param_1 + 0x580,&local_48);
  FUN_005fcfa4(param_1,uVar3);
  return;
}


// ===== 005fed04  FUN_005fed04 =====

void FUN_005fed04(long param_1,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 uStack_52;
  undefined1 uStack_51;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  
  lVar2 = *(long *)(param_1 + 0x648);
  plVar1 = *(long **)(param_1 + 0x640);
  if (lVar2 != 0) {
    FUN_00d0f740(1,lVar2);
  }
  local_50[0] = (long *)operator_new(0x30);
  *local_50[0] = lVar2;
  local_50[0][3] = param_1;
  local_50[0][4] = (long)FUN_004473ec;
  local_50[0][5] = (long)FUN_00602ea0;
  *(undefined4 *)(local_50[0] + 2) = param_2;
  local_40 = FUN_005db390;
  pcStack_38 = FUN_005db348;
  (**(code **)(*plVar1 + 8))(plVar1,local_50,&uStack_51,&uStack_52);
  (*local_40)(0,local_50,local_50);
  return;
}


// ===== 005fedc4  FUN_005fedc4 =====

void FUN_005fedc4(long param_1)

{
  long *plVar1;
  long lVar2;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  lVar2 = *(long *)(param_1 + 0x648);
  plVar1 = *(long **)(param_1 + 0x640);
  if (lVar2 != 0) {
    FUN_00d0f740(1,lVar2);
  }
  local_50[0] = (long *)operator_new(0x30);
  *local_50[0] = lVar2;
  local_50[0][4] = (long)FUN_004473ec;
  local_50[0][5] = (long)FUN_00602ebc;
  local_50[0][2] = param_1;
  local_40 = FUN_005db390;
  pcStack_38 = FUN_005db348;
  (**(code **)(*plVar1 + 8))(plVar1,local_50,&uStack_11,&uStack_12);
  (*local_40)(0,local_50,local_50);
  return;
}


// ===== 005fee7c  FUN_005fee7c =====

void FUN_005fee7c(long param_1,int param_2,int param_3)

{
  *(int *)(param_1 + 0x59c) = param_2;
  if ((param_2 == 1) && (param_3 != -1)) {
    FUN_00992618(param_1 + 0x558,param_3);
    return;
  }
  return;
}


// ===== 005feea4  FUN_005feea4 =====

void FUN_005feea4(long param_1)

{
  if (*(char *)(param_1 + 0x5c8) == '\x01') {
    *(undefined1 *)(param_1 + 0x5c8) = 0;
  }
  FUN_00603f6c(*(undefined8 *)(param_1 + 0x4a8));
  return;
}


// ===== 005feec0  FUN_005feec0 =====

void FUN_005feec0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x578) = param_2;
  return;
}


// ===== 005feecc  FUN_005feecc =====

void FUN_005feecc(undefined8 param_1,long param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long *local_70 [2];
  code *local_60;
  code *pcStack_58;
  undefined1 uStack_42;
  undefined1 uStack_41;
  
  lVar3 = *(long *)(param_2 + 0x648);
  plVar2 = *(long **)(param_2 + 0x640);
  if (lVar3 != 0) {
    FUN_00d0f740(1,lVar3);
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = param_3;
  puVar1[2] = param_2;
  local_70[0] = (long *)operator_new(0x30);
  *local_70[0] = lVar3;
  local_70[0][4] = (long)FUN_005ea56c;
  local_70[0][5] = (long)FUN_00602ed4;
  local_70[0][2] = (long)puVar1;
  local_70[0][3] = 0x18;
  local_60 = FUN_005db390;
  pcStack_58 = FUN_005db348;
  (**(code **)(*plVar2 + 8))(plVar2,local_70,&uStack_41,&uStack_42);
  (*local_60)(0,local_70,local_70);
  return;
}


// ===== 005fefb8  FUN_005fefb8 =====

void FUN_005fefb8(undefined8 param_1,long param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long *local_70 [2];
  code *local_60;
  code *pcStack_58;
  undefined1 uStack_42;
  undefined1 uStack_41;
  
  lVar3 = *(long *)(param_2 + 0x630);
  plVar2 = *(long **)(param_2 + 0x628);
  if (lVar3 != 0) {
    FUN_00d0f740(1,lVar3);
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = param_3;
  puVar1[2] = param_2 + -0x18;
  local_70[0] = (long *)operator_new(0x30);
  *local_70[0] = lVar3;
  local_70[0][4] = (long)FUN_005ea56c;
  local_70[0][5] = (long)FUN_00602ed4;
  local_70[0][2] = (long)puVar1;
  local_70[0][3] = 0x18;
  local_60 = FUN_005db390;
  pcStack_58 = FUN_005db348;
  (**(code **)(*plVar2 + 8))(plVar2,local_70,&uStack_41,&uStack_42);
  (*local_60)(0,local_70,local_70);
  return;
}


// ===== 005ff0a8  FUN_005ff0a8 =====

void FUN_005ff0a8(void)

{
  return;
}


// ===== 005ff0b0  FUN_005ff0b0 =====

void FUN_005ff0b0(void)

{
  return;
}


// ===== 005ff0b8  FUN_005ff0b8 =====

void FUN_005ff0b8(undefined8 *param_1)

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
    plVar3 = puVar9 + uVar5 / 0x22;
    lVar6 = *plVar3;
    lVar4 = lVar6 + (uVar5 % 0x22) * 0x78;
    while (lVar4 != puVar9[(param_1[5] + uVar5) / 0x22] + ((param_1[5] + uVar5) % 0x22) * 0x78) {
      if (lVar4 == 0) goto LAB_005ff23c;
      lVar4 = lVar4 + 0x78;
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
    uVar1 = 0x11;
  }
  else {
    if (uVar5 != 2) goto LAB_005ff1b4;
    uVar1 = 0x22;
  }
  param_1[4] = uVar1;
LAB_005ff1b4:
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
LAB_005ff23c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 005ff28c  FUN_005ff28c =====

void FUN_005ff28c(undefined8 *param_1)

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
      if (lVar4 == 0) goto LAB_005ff3ec;
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
    if (uVar7 != 2) goto LAB_005ff364;
    uVar1 = 0x100;
  }
  param_1[4] = uVar1;
LAB_005ff364:
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
LAB_005ff3ec:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 005ff43c  FUN_005ff43c =====

void FUN_005ff43c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 005ff454  FUN_005ff454 =====

long * FUN_005ff454(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_2 == (undefined8 *)0x0) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = (long *)operator_new(0x30);
    if ((plVar2 == (long *)0x0) || (plVar2 + 4 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    lVar3 = param_2[4];
    uVar5 = *param_2;
    plVar2[5] = param_2[5];
    plVar2[4] = lVar3;
    lVar3 = FUN_005ff454(param_1,uVar5,param_3);
    lVar4 = FUN_005ff454(param_1,param_2[1],param_3);
    uVar1 = *(undefined1 *)(param_2 + 3);
    *plVar2 = lVar3;
    plVar2[1] = lVar4;
    *(undefined1 *)(plVar2 + 3) = uVar1;
    if (lVar3 != 0) {
      *(long **)(lVar3 + 0x10) = plVar2;
    }
    if (lVar4 != 0) {
      *(long **)(lVar4 + 0x10) = plVar2;
    }
  }
  return plVar2;
}


// ===== 005ff514  FUN_005ff514 =====

void FUN_005ff514(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,size_t param_4,
                 undefined8 *param_5,size_t param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  uVar2 = param_6 + param_4;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  if (0x7ffffffffffffff6 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (uVar2 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar2;
  }
  else {
    uVar1 = (uVar2 & 0x7ffffffffffffff8) + 8;
    uVar3 = 0x19;
    if (uVar1 != 0x18) {
      uVar3 = uVar1;
    }
    puVar4 = (undefined8 *)operator_new(uVar3);
    *param_1 = puVar4;
    param_1[1] = uVar2;
    param_1[2] = uVar3 | 0x8000000000000000;
    param_1 = puVar4;
  }
  puVar4 = (undefined8 *)((long)param_1 + param_4);
  if (param_1 <= puVar4) {
    if ((param_3 < param_1) || (puVar4 <= param_3)) {
      memmove(param_1,param_3,param_4);
      if ((undefined8 *)((long)puVar4 + param_6) < puVar4) goto LAB_005ff618;
      if ((param_5 < puVar4) || ((undefined8 *)((long)puVar4 + param_6) <= param_5)) {
        memmove(puVar4,param_5,param_6);
        *(undefined1 *)((long)puVar4 + param_6) = 0;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
LAB_005ff618:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 005ff644  FUN_005ff644 =====

void FUN_005ff644(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_005ff644(param_1,*param_2);
      puVar1 = (undefined8 *)param_2[1];
      FUN_005ff6a8(param_2 + 4);
      operator_delete(param_2);
      param_2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
  }
  return;
}


// ===== 005ff6a8  FUN_005ff6a8 =====

void FUN_005ff6a8(long param_1)

{
  if (param_1 != 0) {
    FUN_00991df8(param_1 + 0xc0);
    FUN_00992610(param_1 + 0x98);
    FUN_00992610(param_1 + 0x78);
    FUN_00992610(param_1 + 0x58);
    FUN_00992610(param_1 + 0x28);
    FUN_00992610(param_1 + 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 005ff710  FUN_005ff710 =====

void FUN_005ff710(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_005ff710(param_1,*param_2);
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


// ===== 005ff784  FUN_005ff784 =====

void FUN_005ff784(long param_1,long *param_2,ulong param_3,long *param_4,ulong param_5)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong *local_50;
  ulong local_48;
  
  if ((param_4 <= param_2) && ((param_2 != param_4 || (param_5 < param_3)))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/deque:2353: libc++ Hardening assertion __f <= __l failed: deque::erase(first, last) called with an invalid range\n"
              );
  }
  if (param_5 == param_3) {
    lVar14 = 0;
  }
  else {
    lVar14 = (((long)(param_5 - *param_4) >> 4) + ((long)param_4 - (long)param_2) * 0x20) -
             ((long)(param_3 - *param_2) >> 4);
  }
  uVar8 = *(ulong *)(param_1 + 0x20);
  lVar10 = *(long *)(param_1 + 8);
  puVar5 = (ulong *)(lVar10 + (uVar8 >> 8) * 8);
  puVar7 = puVar5;
  if (lVar10 == *(long *)(param_1 + 0x10)) {
    uVar11 = 0;
    if (param_3 == 0) goto LAB_005ff85c;
LAB_005ff810:
    uVar12 = ((long)(param_3 - *param_2) >> 4) + ((long)param_2 - (long)puVar5) * 0x20;
    uVar13 = uVar12 - ((long)(uVar11 - *puVar5) >> 4);
    uVar1 = uVar11;
    if (uVar13 != 0) {
      if ((long)uVar12 < 1) {
        uVar4 = 0xff - uVar12;
        uVar1 = 0x1fe - uVar12;
        if (-1 < (long)uVar4) {
          uVar1 = uVar4;
        }
        uVar12 = uVar4 & 0xff;
        puVar7 = puVar5 + -((long)uVar1 >> 8);
        if ((long)uVar4 < 1) {
          uVar12 = -(-uVar4 & 0xff);
        }
        uVar1 = *puVar7 + (0xff - uVar12) * 0x10;
      }
      else {
        puVar7 = puVar5 + (uVar12 >> 8);
        uVar1 = *puVar7 + (uVar12 & 0xff) * 0x10;
      }
    }
  }
  else {
    uVar11 = *puVar5 + (uVar8 & 0xff) * 0x10;
    if (param_3 != uVar11) goto LAB_005ff810;
LAB_005ff85c:
    uVar13 = 0;
    uVar1 = uVar11;
  }
  if (lVar14 < 1) {
    return;
  }
  uVar12 = lVar14 + ((long)(uVar1 - *puVar7) >> 4);
  if (uVar13 <= (ulong)(*(long *)(param_1 + 0x28) - lVar14) >> 1) {
    if ((long)uVar12 < 1) {
      uVar13 = 0xff - uVar12;
      uVar8 = 0x1fe - uVar12;
      if (-1 < (long)uVar13) {
        uVar8 = uVar13;
      }
      uVar12 = uVar13 & 0xff;
      if ((long)uVar13 < 1) {
        uVar12 = -(-uVar13 & 0xff);
      }
      local_50 = puVar7 + -((long)uVar8 >> 8);
      local_48 = *local_50 + (0xff - uVar12) * 0x10;
    }
    else {
      local_50 = puVar7 + (uVar12 >> 8);
      local_48 = *local_50 + (uVar12 & 0xff) * 0x10;
    }
    FUN_005ffc08(puVar5,uVar11,puVar7,uVar1,&local_50);
    while( true ) {
      if (local_48 == uVar11) {
        uVar8 = *(long *)(param_1 + 0x20) + lVar14;
        puVar9 = *(undefined8 **)(param_1 + 8);
        *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) - lVar14;
        *(ulong *)(param_1 + 0x20) = uVar8;
        while (0x1ff < uVar8) {
          operator_delete((void *)*puVar9);
          puVar9 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
          uVar8 = *(long *)(param_1 + 0x20) - 0x100;
          *(undefined8 **)(param_1 + 8) = puVar9;
          *(ulong *)(param_1 + 0x20) = uVar8;
        }
        return;
      }
      if (uVar11 == 0) break;
      uVar11 = uVar11 + 0x10;
      if (uVar11 - *puVar5 == 0x1000) {
        puVar5 = puVar5 + 1;
        uVar11 = *puVar5;
      }
    }
    goto LAB_005ffbf4;
  }
  if ((long)uVar12 < 1) {
    uVar13 = 0xff - uVar12;
    uVar11 = 0x1fe - uVar12;
    if (-1 < (long)uVar13) {
      uVar11 = uVar13;
    }
    uVar12 = uVar13 & 0xff;
    puVar5 = puVar7 + -((long)uVar11 >> 8);
    if ((long)uVar13 < 1) {
      uVar12 = -(-uVar13 & 0xff);
    }
    lVar6 = *puVar5 + (0xff - uVar12) * 0x10;
  }
  else {
    puVar5 = puVar7 + (uVar12 >> 8);
    lVar6 = *puVar5 + (uVar12 & 0xff) * 0x10;
  }
  uVar8 = *(long *)(param_1 + 0x28) + uVar8;
  plVar2 = (long *)(lVar10 + (uVar8 >> 8) * 8);
  if (lVar10 == *(long *)(param_1 + 0x10)) {
    lVar10 = 0;
  }
  else {
    lVar10 = *plVar2 + (uVar8 & 0xff) * 0x10;
  }
  local_50 = puVar7;
  local_48 = uVar1;
  FUN_005ffe28(puVar5,lVar6,plVar2,lVar10,&local_50);
  lVar10 = *(long *)(param_1 + 8);
  lVar6 = *(long *)(param_1 + 0x10);
  uVar8 = local_48;
  puVar5 = local_50;
  if (lVar10 == lVar6) {
    uVar11 = 0;
    if (local_48 != 0) goto LAB_005ffab4;
  }
  else {
    uVar11 = *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28);
    uVar11 = *(long *)(lVar10 + (uVar11 >> 8) * 8) + (uVar11 & 0xff) * 0x10;
    if (local_48 != uVar11) {
LAB_005ffab4:
      do {
        if (uVar8 == 0) goto LAB_005ffbf4;
        uVar8 = uVar8 + 0x10;
        if (uVar8 - *puVar5 == 0x1000) {
          puVar5 = puVar5 + 1;
          uVar8 = *puVar5;
        }
      } while (uVar8 != uVar11);
    }
  }
  lVar14 = *(long *)(param_1 + 0x28) - lVar14;
  *(long *)(param_1 + 0x28) = lVar14;
  lVar3 = 0;
  if (lVar6 != lVar10) {
    lVar3 = (lVar6 - lVar10) * 0x20 + -1;
  }
  uVar8 = lVar3 - (lVar14 + *(long *)(param_1 + 0x20));
  while( true ) {
    if (uVar8 < 0x200) {
      return;
    }
    operator_delete(*(void **)(lVar6 + -8));
    lVar6 = *(long *)(param_1 + 0x10) + -8;
    if (lVar6 == 0) break;
    *(long *)(param_1 + 0x10) = lVar6;
    lVar14 = 0;
    if (lVar6 != *(long *)(param_1 + 8)) {
      lVar14 = (lVar6 - *(long *)(param_1 + 8)) * 0x20 + -1;
    }
    uVar8 = lVar14 - (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20));
  }
LAB_005ffbf4:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 005ffc08  FUN_005ffc08 =====

void FUN_005ffc08(long *param_1,long param_2,long *param_3,long param_4,long *param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  
  plVar1 = (long *)*param_5;
  puVar2 = (undefined8 *)param_5[1];
  if (param_1 == param_3) {
    if (param_2 == param_4) goto LAB_005ffe14;
    lVar4 = *plVar1;
    while( true ) {
      lVar5 = (long)puVar2 - lVar4 >> 4;
      lVar4 = param_4 - param_2 >> 4;
      if (lVar5 <= lVar4) {
        lVar4 = lVar5;
      }
      lVar5 = lVar4 * -0x10;
      if (lVar5 != 0) {
        puVar3 = puVar2;
        puVar7 = (undefined4 *)(param_4 + -8);
        do {
          lVar5 = lVar5 + 0x10;
          puVar2 = puVar3 + -2;
          *puVar2 = *(undefined8 *)(puVar7 + -2);
          *(undefined4 *)(puVar3 + -1) = *puVar7;
          puVar3 = puVar2;
          puVar7 = puVar7 + -4;
        } while (lVar5 != 0);
      }
      param_4 = param_4 + lVar4 * -0x10;
      if (param_2 == param_4) break;
      plVar1 = plVar1 + -1;
      lVar4 = *plVar1;
      puVar2 = (undefined8 *)(lVar4 + 0x1000);
    }
  }
  else {
    lVar4 = *param_3;
    if (lVar4 != param_4) {
      lVar5 = *plVar1;
      while( true ) {
        lVar6 = (long)puVar2 - lVar5 >> 4;
        lVar5 = param_4 - lVar4 >> 4;
        if (lVar6 <= lVar5) {
          lVar5 = lVar6;
        }
        lVar6 = lVar5 * -0x10;
        if (lVar6 != 0) {
          puVar3 = puVar2;
          puVar7 = (undefined4 *)(param_4 + -8);
          do {
            lVar6 = lVar6 + 0x10;
            puVar2 = puVar3 + -2;
            *puVar2 = *(undefined8 *)(puVar7 + -2);
            *(undefined4 *)(puVar3 + -1) = *puVar7;
            puVar3 = puVar2;
            puVar7 = puVar7 + -4;
          } while (lVar6 != 0);
        }
        param_4 = param_4 + lVar5 * -0x10;
        if (lVar4 == param_4) break;
        plVar1 = plVar1 + -1;
        lVar5 = *plVar1;
        puVar2 = (undefined8 *)(lVar5 + 0x1000);
      }
      if ((plVar1 != (long *)0x0) && (puVar2 == (undefined8 *)(*plVar1 + 0x1000))) {
        plVar1 = plVar1 + 1;
        puVar2 = (undefined8 *)*plVar1;
      }
    }
    param_3 = param_3 + -1;
    while( true ) {
      *param_5 = (long)plVar1;
      param_5[1] = (long)puVar2;
      if (param_1 == param_3) break;
      lVar5 = *param_3;
      lVar6 = *plVar1;
      lVar4 = lVar5 + 0x1000;
      while( true ) {
        lVar8 = (long)puVar2 - lVar6 >> 4;
        lVar6 = lVar4 - lVar5 >> 4;
        if (lVar8 <= lVar6) {
          lVar6 = lVar8;
        }
        lVar8 = lVar6 * -0x10;
        if (lVar8 != 0) {
          puVar3 = puVar2;
          puVar7 = (undefined4 *)(lVar4 + -8);
          do {
            lVar8 = lVar8 + 0x10;
            puVar2 = puVar3 + -2;
            *puVar2 = *(undefined8 *)(puVar7 + -2);
            *(undefined4 *)(puVar3 + -1) = *puVar7;
            puVar3 = puVar2;
            puVar7 = puVar7 + -4;
          } while (lVar8 != 0);
        }
        lVar4 = lVar4 + lVar6 * -0x10;
        if (lVar5 == lVar4) break;
        plVar1 = plVar1 + -1;
        lVar6 = *plVar1;
        puVar2 = (undefined8 *)(lVar6 + 0x1000);
      }
      if ((plVar1 != (long *)0x0) && (puVar2 == (undefined8 *)(*plVar1 + 0x1000))) {
        plVar1 = plVar1 + 1;
        puVar2 = (undefined8 *)*plVar1;
      }
      param_3 = param_3 + -1;
    }
    lVar4 = *param_3 + 0x1000;
    if (param_2 == lVar4) goto LAB_005ffe14;
    lVar5 = *plVar1;
    while( true ) {
      lVar6 = (long)puVar2 - lVar5 >> 4;
      lVar5 = lVar4 - param_2 >> 4;
      if (lVar6 <= lVar5) {
        lVar5 = lVar6;
      }
      lVar6 = lVar5 * -0x10;
      if (lVar6 != 0) {
        puVar3 = puVar2;
        puVar7 = (undefined4 *)(lVar4 + -8);
        do {
          lVar6 = lVar6 + 0x10;
          puVar2 = puVar3 + -2;
          *puVar2 = *(undefined8 *)(puVar7 + -2);
          *(undefined4 *)(puVar3 + -1) = *puVar7;
          puVar3 = puVar2;
          puVar7 = puVar7 + -4;
        } while (lVar6 != 0);
      }
      lVar4 = lVar4 + lVar5 * -0x10;
      if (param_2 == lVar4) break;
      plVar1 = plVar1 + -1;
      lVar5 = *plVar1;
      puVar2 = (undefined8 *)(lVar5 + 0x1000);
    }
  }
  if ((plVar1 != (long *)0x0) && (puVar2 == (undefined8 *)(*plVar1 + 0x1000))) {
    lVar4 = plVar1[1];
    *param_5 = (long)(plVar1 + 1);
    param_5[1] = lVar4;
    return;
  }
LAB_005ffe14:
  *param_5 = (long)plVar1;
  param_5[1] = (long)puVar2;
  return;
}


// ===== 005ffe28  FUN_005ffe28 =====

void FUN_005ffe28(long *param_1,undefined8 *param_2,long *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  if (param_1 != param_3) {
    puVar6 = (undefined8 *)(*param_1 + 0x1000);
    plVar2 = (long *)*param_5;
    puVar3 = (undefined8 *)param_5[1];
    if (param_2 != puVar6) {
      puVar7 = (undefined8 *)*plVar2;
      do {
        lVar5 = (long)puVar6 - (long)param_2 >> 4;
        lVar4 = (long)puVar7 + (0x1000 - (long)puVar3) >> 4;
        if (lVar4 <= lVar5) {
          lVar5 = lVar4;
        }
        if (lVar5 != 0) {
          puVar7 = param_2 + lVar5 * 2;
          do {
            *puVar3 = *param_2;
            puVar8 = param_2 + 1;
            param_2 = param_2 + 2;
            *(undefined4 *)(puVar3 + 1) = *(undefined4 *)puVar8;
            puVar3 = puVar3 + 2;
          } while (param_2 != puVar7);
          param_2 = puVar7;
          if (puVar6 == puVar7) goto code_r0x005ffeac;
        }
        plVar2 = plVar2 + 1;
        puVar3 = (undefined8 *)*plVar2;
        puVar7 = puVar3;
      } while( true );
    }
    goto LAB_005ffec4;
  }
  plVar2 = (long *)*param_5;
  puVar3 = (undefined8 *)param_5[1];
  if (param_2 != param_4) {
    puVar6 = (undefined8 *)*plVar2;
    do {
      lVar5 = (long)param_4 - (long)param_2 >> 4;
      lVar4 = (long)puVar6 + (0x1000 - (long)puVar3) >> 4;
      if (lVar4 <= lVar5) {
        lVar5 = lVar4;
      }
      if (lVar5 != 0) {
        puVar6 = param_2 + lVar5 * 2;
        do {
          *puVar3 = *param_2;
          puVar7 = param_2 + 1;
          param_2 = param_2 + 2;
          *(undefined4 *)(puVar3 + 1) = *(undefined4 *)puVar7;
          puVar3 = puVar3 + 2;
        } while (param_2 != puVar6);
        param_2 = puVar6;
        if (param_4 == puVar6) goto code_r0x00600050;
      }
      plVar2 = plVar2 + 1;
      puVar3 = (undefined8 *)*plVar2;
      puVar6 = puVar3;
    } while( true );
  }
  goto LAB_005fffd8;
code_r0x005ffeac:
  if ((plVar2 != (long *)0x0) && (puVar3 == (undefined8 *)(*plVar2 + 0x1000))) {
    plVar2 = plVar2 + 1;
    puVar3 = (undefined8 *)*plVar2;
  }
LAB_005ffec4:
  param_1 = param_1 + 1;
LAB_005ffed0:
  *param_5 = plVar2;
  param_5[1] = puVar3;
  if (param_1 != param_3) {
    puVar6 = (undefined8 *)*param_1;
    puVar7 = puVar6 + 0x200;
    puVar8 = (undefined8 *)*plVar2;
    do {
      lVar5 = (long)puVar7 - (long)puVar6 >> 4;
      lVar4 = (long)puVar8 + (0x1000 - (long)puVar3) >> 4;
      if (lVar4 <= lVar5) {
        lVar5 = lVar4;
      }
      if (lVar5 != 0) {
        puVar8 = puVar6 + lVar5 * 2;
        do {
          *puVar3 = *puVar6;
          puVar1 = puVar6 + 1;
          puVar6 = puVar6 + 2;
          *(undefined4 *)(puVar3 + 1) = *(undefined4 *)puVar1;
          puVar3 = puVar3 + 2;
        } while (puVar6 != puVar8);
        puVar6 = puVar8;
        if (puVar7 == puVar8) goto code_r0x005fff48;
      }
      plVar2 = plVar2 + 1;
      puVar3 = (undefined8 *)*plVar2;
      puVar8 = puVar3;
    } while( true );
  }
  puVar6 = (undefined8 *)*param_1;
  if (puVar6 == param_4) goto LAB_005fffd8;
  puVar7 = (undefined8 *)*plVar2;
  while( true ) {
    lVar5 = (long)param_4 - (long)puVar6 >> 4;
    lVar4 = (long)puVar7 + (0x1000 - (long)puVar3) >> 4;
    if (lVar4 <= lVar5) {
      lVar5 = lVar4;
    }
    if (lVar5 != 0) break;
LAB_005fff7c:
    plVar2 = plVar2 + 1;
    puVar3 = (undefined8 *)*plVar2;
    puVar7 = puVar3;
  }
  puVar7 = puVar6 + lVar5 * 2;
  do {
    *puVar3 = *puVar6;
    puVar8 = puVar6 + 1;
    puVar6 = puVar6 + 2;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)puVar8;
    puVar3 = puVar3 + 2;
  } while (puVar6 != puVar7);
  puVar6 = puVar7;
  if (param_4 != puVar7) goto LAB_005fff7c;
  if (plVar2 == (long *)0x0) goto LAB_005fffd8;
  goto LAB_00600054;
code_r0x005fff48:
  if ((plVar2 != (long *)0x0) && (puVar3 == (undefined8 *)(*plVar2 + 0x1000))) {
    plVar2 = plVar2 + 1;
    puVar3 = (undefined8 *)*plVar2;
  }
  param_1 = param_1 + 1;
  goto LAB_005ffed0;
code_r0x00600050:
  if (plVar2 != (long *)0x0) {
LAB_00600054:
    if (puVar3 == (undefined8 *)(*plVar2 + 0x1000)) {
      lVar5 = plVar2[1];
      *param_5 = plVar2 + 1;
      param_5[1] = lVar5;
      return;
    }
  }
LAB_005fffd8:
  *param_5 = plVar2;
  param_5[1] = puVar3;
  return;
}


// ===== 00600070  FUN_00600070 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00600070(long param_1,long *param_2,ulong param_3,long *param_4,ulong param_5)

{
  long *plVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong *local_50;
  ulong local_48;
  
  if ((param_4 <= param_2) && ((param_2 != param_4 || (param_5 < param_3)))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/deque:2353: libc++ Hardening assertion __f <= __l failed: deque::erase(first, last) called with an invalid range\n"
              );
  }
  if (param_5 == param_3) {
    lVar13 = 0;
  }
  else {
    lVar13 = ((long)param_4 - (long)param_2 >> 3) * 0x22 +
             ((long)(param_5 - *param_4) >> 3) * -0x1111111111111111 +
             ((long)(param_3 - *param_2) >> 3) * 0x1111111111111111;
  }
  uVar4 = *(ulong *)(param_1 + 0x20);
  lVar5 = *(long *)(param_1 + 8);
  puVar3 = (ulong *)(lVar5 + (uVar4 / 0x22) * 8);
  puVar2 = puVar3;
  if (lVar5 == *(long *)(param_1 + 0x10)) {
    uVar11 = 0;
    if (param_3 != 0) goto LAB_00600138;
LAB_006001cc:
    uVar12 = 0;
    uVar7 = uVar11;
  }
  else {
    uVar11 = *puVar3 + (uVar4 % 0x22) * 0x78;
    if (param_3 == uVar11) goto LAB_006001cc;
LAB_00600138:
    lVar8 = (long)(uVar11 - *puVar3) >> 3;
    uVar12 = ((long)param_2 - (long)puVar3 >> 3) * 0x22 +
             ((long)(param_3 - *param_2) >> 3) * -0x1111111111111111 + lVar8 * 0x1111111111111111;
    uVar7 = uVar11;
    if (uVar12 != 0) {
      uVar7 = uVar12 + lVar8 * -0x1111111111111111;
      if ((long)uVar7 < 1) {
        lVar8 = 0x21 - uVar7;
        lVar10 = SUB168(SEXT816(lVar8) * SEXT816(-0x7878787878787879),8);
        puVar2 = puVar3 + ((lVar10 >> 4) - (lVar10 >> 0x3f));
        uVar7 = puVar3[(lVar10 >> 4) - (lVar10 >> 0x3f)] + ((lVar8 / 0x22) * 0x22 - lVar8) * 0x78 +
                0xf78;
      }
      else {
        puVar2 = puVar3 + uVar7 / 0x22;
        uVar7 = puVar3[uVar7 / 0x22] + (uVar7 % 0x22) * 0x78;
      }
    }
  }
  if (lVar13 < 1) {
    return;
  }
  uVar9 = lVar13 + ((long)(uVar7 - *puVar2) >> 3) * -0x1111111111111111;
  if (uVar12 <= (ulong)(*(long *)(param_1 + 0x28) - lVar13) >> 1) {
    if ((long)uVar9 < 1) {
      lVar5 = 0x21 - uVar9;
      lVar8 = SUB168(SEXT816(lVar5) * SEXT816(-0x7878787878787879),8);
      local_50 = puVar2 + ((lVar8 >> 4) - (lVar8 >> 0x3f));
      local_48 = *local_50 + ((lVar5 / 0x22) * 0x22 - lVar5) * 0x78 + 0xf78;
    }
    else {
      local_50 = puVar2 + uVar9 / 0x22;
      local_48 = *local_50 + (uVar9 % 0x22) * 0x78;
    }
    FUN_006006a8(puVar3,uVar11,puVar2,uVar7,&local_50);
    while( true ) {
      if (local_48 == uVar11) {
        uVar4 = *(long *)(param_1 + 0x20) + lVar13;
        puVar6 = *(undefined8 **)(param_1 + 8);
        *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) - lVar13;
        *(ulong *)(param_1 + 0x20) = uVar4;
        while (0x43 < uVar4) {
          operator_delete((void *)*puVar6);
          puVar6 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
          uVar4 = *(long *)(param_1 + 0x20) - 0x22;
          *(undefined8 **)(param_1 + 8) = puVar6;
          *(ulong *)(param_1 + 0x20) = uVar4;
        }
        return;
      }
      if (uVar11 == 0) break;
      uVar11 = uVar11 + 0x78;
      if (uVar11 - *puVar3 == 0xff0) {
        puVar3 = puVar3 + 1;
        uVar11 = *puVar3;
      }
    }
    goto LAB_00600694;
  }
  if ((long)uVar9 < 1) {
    lVar8 = 0x21 - uVar9;
    lVar10 = SUB168(SEXT816(lVar8) * SEXT816(-0x7878787878787879),8);
    puVar3 = puVar2 + ((lVar10 >> 4) - (lVar10 >> 0x3f));
    lVar8 = *puVar3 + ((lVar8 / 0x22) * 0x22 - lVar8) * 0x78 + 0xf78;
  }
  else {
    puVar3 = puVar2 + uVar9 / 0x22;
    lVar8 = *puVar3 + (uVar9 % 0x22) * 0x78;
  }
  uVar4 = *(long *)(param_1 + 0x28) + uVar4;
  plVar1 = (long *)(lVar5 + (uVar4 / 0x22) * 8);
  if (lVar5 == *(long *)(param_1 + 0x10)) {
    lVar5 = 0;
  }
  else {
    lVar5 = *plVar1 + (uVar4 % 0x22) * 0x78;
  }
  local_50 = puVar2;
  local_48 = uVar7;
  FUN_006009f4(puVar3,lVar8,plVar1,lVar5,&local_50);
  lVar5 = *(long *)(param_1 + 8);
  lVar8 = *(long *)(param_1 + 0x10);
  uVar4 = local_48;
  puVar3 = local_50;
  if (lVar5 == lVar8) {
    uVar11 = 0;
    if (local_48 != 0) goto LAB_006004ec;
  }
  else {
    uVar11 = *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28);
    uVar11 = *(long *)(lVar5 + (uVar11 / 0x22) * 8) + (uVar11 % 0x22) * 0x78;
    if (local_48 != uVar11) {
LAB_006004ec:
      do {
        if (uVar4 == 0) goto LAB_00600694;
        uVar4 = uVar4 + 0x78;
        if (uVar4 - *puVar3 == 0xff0) {
          puVar3 = puVar3 + 1;
          uVar4 = *puVar3;
        }
      } while (uVar4 != uVar11);
    }
  }
  lVar13 = *(long *)(param_1 + 0x28) - lVar13;
  *(long *)(param_1 + 0x28) = lVar13;
  lVar10 = 0;
  if (lVar8 != lVar5) {
    lVar10 = (lVar8 - lVar5 >> 3) * 0x22 + -1;
  }
  uVar4 = lVar10 - (lVar13 + *(long *)(param_1 + 0x20));
  while( true ) {
    if (uVar4 < 0x44) {
      return;
    }
    operator_delete(*(void **)(lVar8 + -8));
    lVar8 = *(long *)(param_1 + 0x10) + -8;
    if (lVar8 == 0) break;
    *(long *)(param_1 + 0x10) = lVar8;
    lVar5 = lVar8 - *(long *)(param_1 + 8);
    lVar13 = 0;
    if (lVar5 != 0) {
      lVar13 = (lVar5 >> 3) * 0x22 + -1;
    }
    uVar4 = lVar13 - (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20));
  }
LAB_00600694:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 006006a8  FUN_006006a8 =====

void FUN_006006a8(long *param_1,undefined8 *param_2,long *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  plVar3 = (long *)*param_5;
  puVar4 = (undefined8 *)param_5[1];
  if (param_1 == param_3) {
    if (param_2 == param_4) goto LAB_006009e0;
    lVar6 = *plVar3;
    while( true ) {
      lVar7 = ((long)puVar4 - lVar6 >> 3) * -0x1111111111111111;
      lVar6 = ((long)param_4 - (long)param_2 >> 3) * -0x1111111111111111;
      if (lVar7 <= lVar6) {
        lVar6 = lVar7;
      }
      lVar7 = lVar6 * -0x78;
      puVar5 = param_4;
      lVar2 = lVar6;
      while (lVar2 != 0) {
        puVar4[-0xf] = puVar5[-0xf];
        uVar9 = puVar5[-8];
        uVar11 = puVar5[-9];
        uVar10 = puVar5[-10];
        uVar13 = puVar5[-0xd];
        uVar12 = puVar5[-0xe];
        uVar15 = puVar5[-0xb];
        uVar14 = puVar5[-0xc];
        puVar4[-7] = puVar5[-7];
        puVar4[-8] = uVar9;
        puVar4[-9] = uVar11;
        puVar4[-10] = uVar10;
        puVar4[-0xb] = uVar15;
        puVar4[-0xc] = uVar14;
        puVar4[-0xd] = uVar13;
        puVar4[-0xe] = uVar12;
        uVar9 = *(undefined8 *)((long)puVar5 + -0x17);
        uVar11 = puVar5[-3];
        uVar10 = puVar5[-4];
        uVar13 = puVar5[-5];
        uVar12 = puVar5[-6];
        *(undefined8 *)((long)puVar4 + -0xf) = *(undefined8 *)((long)puVar5 + -0xf);
        *(undefined8 *)((long)puVar4 + -0x17) = uVar9;
        puVar4[-3] = uVar11;
        puVar4[-4] = uVar10;
        puVar4[-5] = uVar13;
        puVar4[-6] = uVar12;
        lVar7 = lVar7 + 0x78;
        puVar5 = puVar5 + -0xf;
        puVar4 = puVar4 + -0xf;
        lVar2 = lVar7;
      }
      param_4 = param_4 + lVar6 * -0xf;
      if (param_2 == param_4) break;
      plVar3 = plVar3 + -1;
      lVar6 = *plVar3;
      puVar4 = (undefined8 *)(lVar6 + 0xff0);
    }
  }
  else {
    puVar5 = (undefined8 *)*param_3;
    if (puVar5 != param_4) {
      lVar6 = *plVar3;
      while( true ) {
        lVar7 = ((long)puVar4 - lVar6 >> 3) * -0x1111111111111111;
        lVar6 = ((long)param_4 - (long)puVar5 >> 3) * -0x1111111111111111;
        if (lVar7 <= lVar6) {
          lVar6 = lVar7;
        }
        lVar7 = lVar6 * -0x78;
        puVar8 = param_4;
        lVar2 = lVar6;
        while (lVar2 != 0) {
          puVar4[-0xf] = puVar8[-0xf];
          uVar9 = puVar8[-8];
          uVar11 = puVar8[-9];
          uVar10 = puVar8[-10];
          uVar13 = puVar8[-0xd];
          uVar12 = puVar8[-0xe];
          uVar15 = puVar8[-0xb];
          uVar14 = puVar8[-0xc];
          puVar4[-7] = puVar8[-7];
          puVar4[-8] = uVar9;
          puVar4[-9] = uVar11;
          puVar4[-10] = uVar10;
          puVar4[-0xb] = uVar15;
          puVar4[-0xc] = uVar14;
          puVar4[-0xd] = uVar13;
          puVar4[-0xe] = uVar12;
          uVar9 = *(undefined8 *)((long)puVar8 + -0x17);
          uVar11 = puVar8[-3];
          uVar10 = puVar8[-4];
          uVar13 = puVar8[-5];
          uVar12 = puVar8[-6];
          *(undefined8 *)((long)puVar4 + -0xf) = *(undefined8 *)((long)puVar8 + -0xf);
          *(undefined8 *)((long)puVar4 + -0x17) = uVar9;
          puVar4[-3] = uVar11;
          puVar4[-4] = uVar10;
          puVar4[-5] = uVar13;
          puVar4[-6] = uVar12;
          lVar7 = lVar7 + 0x78;
          puVar8 = puVar8 + -0xf;
          puVar4 = puVar4 + -0xf;
          lVar2 = lVar7;
        }
        param_4 = param_4 + lVar6 * -0xf;
        if (puVar5 == param_4) break;
        plVar3 = plVar3 + -1;
        lVar6 = *plVar3;
        puVar4 = (undefined8 *)(lVar6 + 0xff0);
      }
      if ((plVar3 != (long *)0x0) && (puVar4 == (undefined8 *)(*plVar3 + 0xff0))) {
        plVar3 = plVar3 + 1;
        puVar4 = (undefined8 *)*plVar3;
      }
    }
    *param_5 = plVar3;
    param_5[1] = puVar4;
    for (param_3 = param_3 + -1; param_1 != param_3; param_3 = param_3 + -1) {
      puVar8 = (undefined8 *)*param_3;
      lVar6 = *plVar3;
      puVar5 = puVar8 + 0x1fe;
      while( true ) {
        lVar7 = ((long)puVar4 - lVar6 >> 3) * -0x1111111111111111;
        lVar6 = ((long)puVar5 - (long)puVar8 >> 3) * -0x1111111111111111;
        if (lVar7 <= lVar6) {
          lVar6 = lVar7;
        }
        lVar7 = lVar6 * -0x78;
        puVar1 = puVar5;
        lVar2 = lVar6;
        while (lVar2 != 0) {
          puVar4[-0xf] = puVar1[-0xf];
          uVar9 = puVar1[-8];
          uVar11 = puVar1[-9];
          uVar10 = puVar1[-10];
          uVar13 = puVar1[-0xd];
          uVar12 = puVar1[-0xe];
          uVar15 = puVar1[-0xb];
          uVar14 = puVar1[-0xc];
          puVar4[-7] = puVar1[-7];
          puVar4[-8] = uVar9;
          puVar4[-9] = uVar11;
          puVar4[-10] = uVar10;
          puVar4[-0xb] = uVar15;
          puVar4[-0xc] = uVar14;
          puVar4[-0xd] = uVar13;
          puVar4[-0xe] = uVar12;
          uVar9 = *(undefined8 *)((long)puVar1 + -0x17);
          uVar11 = puVar1[-3];
          uVar10 = puVar1[-4];
          uVar13 = puVar1[-5];
          uVar12 = puVar1[-6];
          *(undefined8 *)((long)puVar4 + -0xf) = *(undefined8 *)((long)puVar1 + -0xf);
          *(undefined8 *)((long)puVar4 + -0x17) = uVar9;
          puVar4[-3] = uVar11;
          puVar4[-4] = uVar10;
          puVar4[-5] = uVar13;
          puVar4[-6] = uVar12;
          lVar7 = lVar7 + 0x78;
          puVar4 = puVar4 + -0xf;
          puVar1 = puVar1 + -0xf;
          lVar2 = lVar7;
        }
        puVar5 = puVar5 + lVar6 * -0xf;
        if (puVar8 == puVar5) break;
        plVar3 = plVar3 + -1;
        lVar6 = *plVar3;
        puVar4 = (undefined8 *)(lVar6 + 0xff0);
      }
      if ((plVar3 != (long *)0x0) && (puVar4 == (undefined8 *)(*plVar3 + 0xff0))) {
        plVar3 = plVar3 + 1;
        puVar4 = (undefined8 *)*plVar3;
      }
      *param_5 = plVar3;
      param_5[1] = puVar4;
    }
    puVar5 = (undefined8 *)(*param_3 + 0xff0);
    if (param_2 == puVar5) goto LAB_006009e0;
    lVar6 = *plVar3;
    while( true ) {
      lVar7 = ((long)puVar4 - lVar6 >> 3) * -0x1111111111111111;
      lVar6 = ((long)puVar5 - (long)param_2 >> 3) * -0x1111111111111111;
      if (lVar7 <= lVar6) {
        lVar6 = lVar7;
      }
      lVar7 = lVar6 * -0x78;
      puVar8 = puVar5;
      lVar2 = lVar6;
      while (lVar2 != 0) {
        puVar4[-0xf] = puVar8[-0xf];
        uVar9 = puVar8[-8];
        uVar11 = puVar8[-9];
        uVar10 = puVar8[-10];
        uVar13 = puVar8[-0xd];
        uVar12 = puVar8[-0xe];
        uVar15 = puVar8[-0xb];
        uVar14 = puVar8[-0xc];
        puVar4[-7] = puVar8[-7];
        puVar4[-8] = uVar9;
        puVar4[-9] = uVar11;
        puVar4[-10] = uVar10;
        puVar4[-0xb] = uVar15;
        puVar4[-0xc] = uVar14;
        puVar4[-0xd] = uVar13;
        puVar4[-0xe] = uVar12;
        uVar9 = *(undefined8 *)((long)puVar8 + -0x17);
        uVar11 = puVar8[-3];
        uVar10 = puVar8[-4];
        uVar13 = puVar8[-5];
        uVar12 = puVar8[-6];
        *(undefined8 *)((long)puVar4 + -0xf) = *(undefined8 *)((long)puVar8 + -0xf);
        *(undefined8 *)((long)puVar4 + -0x17) = uVar9;
        puVar4[-3] = uVar11;
        puVar4[-4] = uVar10;
        puVar4[-5] = uVar13;
        puVar4[-6] = uVar12;
        lVar7 = lVar7 + 0x78;
        puVar4 = puVar4 + -0xf;
        puVar8 = puVar8 + -0xf;
        lVar2 = lVar7;
      }
      puVar5 = puVar5 + lVar6 * -0xf;
      if (param_2 == puVar5) break;
      plVar3 = plVar3 + -1;
      lVar6 = *plVar3;
      puVar4 = (undefined8 *)(lVar6 + 0xff0);
    }
  }
  if ((plVar3 != (long *)0x0) && (puVar4 == (undefined8 *)(*plVar3 + 0xff0))) {
    lVar6 = plVar3[1];
    *param_5 = plVar3 + 1;
    param_5[1] = lVar6;
    return;
  }
LAB_006009e0:
  *param_5 = plVar3;
  param_5[1] = puVar4;
  return;
}


// ===== 006009f4  FUN_006009f4 =====

void FUN_006009f4(long *param_1,undefined8 *param_2,long *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if (param_1 == param_3) {
    plVar2 = (long *)*param_5;
    puVar3 = (undefined8 *)param_5[1];
    if (param_2 != param_4) {
      puVar4 = (undefined8 *)*plVar2;
      do {
        lVar6 = ((long)param_4 - (long)param_2 >> 3) * -0x1111111111111111;
        lVar5 = ((long)puVar4 + (0xff0 - (long)puVar3) >> 3) * -0x1111111111111111;
        if (lVar5 <= lVar6) {
          lVar6 = lVar5;
        }
        if (lVar6 != 0) {
          puVar4 = param_2 + lVar6 * 0xf;
          do {
            *puVar3 = *param_2;
            uVar9 = param_2[7];
            uVar11 = param_2[6];
            uVar10 = param_2[5];
            uVar13 = param_2[2];
            uVar12 = param_2[1];
            uVar15 = param_2[4];
            uVar14 = param_2[3];
            puVar3[8] = param_2[8];
            puVar3[7] = uVar9;
            puVar3[6] = uVar11;
            puVar3[5] = uVar10;
            puVar3[4] = uVar15;
            puVar3[3] = uVar14;
            puVar3[2] = uVar13;
            puVar3[1] = uVar12;
            puVar7 = (undefined8 *)((long)param_2 + 0x69);
            uVar9 = *(undefined8 *)((long)param_2 + 0x61);
            uVar11 = param_2[0xc];
            uVar10 = param_2[0xb];
            uVar13 = param_2[10];
            uVar12 = param_2[9];
            param_2 = param_2 + 0xf;
            *(undefined8 *)((long)puVar3 + 0x69) = *puVar7;
            *(undefined8 *)((long)puVar3 + 0x61) = uVar9;
            puVar3[0xc] = uVar11;
            puVar3[0xb] = uVar10;
            puVar3[10] = uVar13;
            puVar3[9] = uVar12;
            puVar3 = puVar3 + 0xf;
          } while (param_2 != puVar4);
          param_2 = puVar4;
          if (param_4 == puVar4) goto joined_r0x00600d38;
        }
        plVar2 = plVar2 + 1;
        puVar3 = (undefined8 *)*plVar2;
        puVar4 = puVar3;
      } while( true );
    }
    goto LAB_00600c7c;
  }
  puVar4 = (undefined8 *)(*param_1 + 0xff0);
  plVar2 = (long *)*param_5;
  puVar3 = (undefined8 *)param_5[1];
  if (param_2 != puVar4) {
    puVar7 = (undefined8 *)*plVar2;
    do {
      lVar6 = ((long)puVar4 - (long)param_2 >> 3) * -0x1111111111111111;
      lVar5 = ((long)puVar7 + (0xff0 - (long)puVar3) >> 3) * -0x1111111111111111;
      if (lVar5 <= lVar6) {
        lVar6 = lVar5;
      }
      if (lVar6 != 0) {
        puVar7 = param_2 + lVar6 * 0xf;
        do {
          *puVar3 = *param_2;
          uVar9 = param_2[7];
          uVar11 = param_2[6];
          uVar10 = param_2[5];
          uVar13 = param_2[2];
          uVar12 = param_2[1];
          uVar15 = param_2[4];
          uVar14 = param_2[3];
          puVar3[8] = param_2[8];
          puVar3[7] = uVar9;
          puVar3[6] = uVar11;
          puVar3[5] = uVar10;
          puVar3[4] = uVar15;
          puVar3[3] = uVar14;
          puVar3[2] = uVar13;
          puVar3[1] = uVar12;
          puVar8 = (undefined8 *)((long)param_2 + 0x69);
          uVar9 = *(undefined8 *)((long)param_2 + 0x61);
          uVar11 = param_2[0xc];
          uVar10 = param_2[0xb];
          uVar13 = param_2[10];
          uVar12 = param_2[9];
          param_2 = param_2 + 0xf;
          *(undefined8 *)((long)puVar3 + 0x69) = *puVar8;
          *(undefined8 *)((long)puVar3 + 0x61) = uVar9;
          puVar3[0xc] = uVar11;
          puVar3[0xb] = uVar10;
          puVar3[10] = uVar13;
          puVar3[9] = uVar12;
          puVar3 = puVar3 + 0xf;
        } while (param_2 != puVar7);
        param_2 = puVar7;
        if (puVar4 == puVar7) goto code_r0x00600abc;
      }
      plVar2 = plVar2 + 1;
      puVar3 = (undefined8 *)*plVar2;
      puVar7 = puVar3;
    } while( true );
  }
  goto LAB_00600ad4;
code_r0x00600ba8:
  if ((plVar2 != (long *)0x0) && (puVar3 == (undefined8 *)(*plVar2 + 0xff0))) {
    plVar2 = plVar2 + 1;
    puVar3 = (undefined8 *)*plVar2;
  }
  param_1 = param_1 + 1;
  *param_5 = plVar2;
  param_5[1] = puVar3;
  if (param_1 == param_3) goto LAB_00600bc4;
  goto LAB_00600b04;
joined_r0x00600d38:
  if ((plVar2 != (long *)0x0) && (puVar3 == (undefined8 *)(*plVar2 + 0xff0))) {
    lVar6 = plVar2[1];
    *param_5 = plVar2 + 1;
    param_5[1] = lVar6;
    return;
  }
  goto LAB_00600c7c;
code_r0x00600abc:
  if ((plVar2 != (long *)0x0) && (puVar3 == (undefined8 *)(*plVar2 + 0xff0))) {
    plVar2 = plVar2 + 1;
    puVar3 = (undefined8 *)*plVar2;
  }
LAB_00600ad4:
  param_1 = param_1 + 1;
  *param_5 = plVar2;
  param_5[1] = puVar3;
  if (param_1 != param_3) {
LAB_00600b04:
    puVar7 = (undefined8 *)*param_1;
    puVar4 = puVar7 + 0x1fe;
    puVar8 = (undefined8 *)*plVar2;
    do {
      lVar6 = ((long)puVar4 - (long)puVar7 >> 3) * -0x1111111111111111;
      lVar5 = ((long)puVar8 + (0xff0 - (long)puVar3) >> 3) * -0x1111111111111111;
      if (lVar5 <= lVar6) {
        lVar6 = lVar5;
      }
      if (lVar6 != 0) {
        puVar8 = puVar7 + lVar6 * 0xf;
        do {
          *puVar3 = *puVar7;
          uVar9 = puVar7[7];
          uVar11 = puVar7[6];
          uVar10 = puVar7[5];
          uVar13 = puVar7[2];
          uVar12 = puVar7[1];
          uVar15 = puVar7[4];
          uVar14 = puVar7[3];
          puVar3[8] = puVar7[8];
          puVar3[7] = uVar9;
          puVar3[6] = uVar11;
          puVar3[5] = uVar10;
          puVar3[4] = uVar15;
          puVar3[3] = uVar14;
          puVar3[2] = uVar13;
          puVar3[1] = uVar12;
          puVar1 = (undefined8 *)((long)puVar7 + 0x69);
          uVar9 = *(undefined8 *)((long)puVar7 + 0x61);
          uVar11 = puVar7[0xc];
          uVar10 = puVar7[0xb];
          uVar13 = puVar7[10];
          uVar12 = puVar7[9];
          puVar7 = puVar7 + 0xf;
          *(undefined8 *)((long)puVar3 + 0x69) = *puVar1;
          *(undefined8 *)((long)puVar3 + 0x61) = uVar9;
          puVar3[0xc] = uVar11;
          puVar3[0xb] = uVar10;
          puVar3[10] = uVar13;
          puVar3[9] = uVar12;
          puVar3 = puVar3 + 0xf;
        } while (puVar7 != puVar8);
        puVar7 = puVar8;
        if (puVar4 == puVar8) goto code_r0x00600ba8;
      }
      plVar2 = plVar2 + 1;
      puVar3 = (undefined8 *)*plVar2;
      puVar8 = puVar3;
    } while( true );
  }
LAB_00600bc4:
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 != param_4) {
    puVar7 = (undefined8 *)*plVar2;
    do {
      lVar6 = ((long)param_4 - (long)puVar4 >> 3) * -0x1111111111111111;
      lVar5 = ((long)puVar7 + (0xff0 - (long)puVar3) >> 3) * -0x1111111111111111;
      if (lVar5 <= lVar6) {
        lVar6 = lVar5;
      }
      if (lVar6 != 0) {
        puVar7 = puVar4 + lVar6 * 0xf;
        do {
          *puVar3 = *puVar4;
          uVar9 = puVar4[7];
          uVar11 = puVar4[6];
          uVar10 = puVar4[5];
          uVar13 = puVar4[2];
          uVar12 = puVar4[1];
          uVar15 = puVar4[4];
          uVar14 = puVar4[3];
          puVar3[8] = puVar4[8];
          puVar3[7] = uVar9;
          puVar3[6] = uVar11;
          puVar3[5] = uVar10;
          puVar3[4] = uVar15;
          puVar3[3] = uVar14;
          puVar3[2] = uVar13;
          puVar3[1] = uVar12;
          puVar8 = (undefined8 *)((long)puVar4 + 0x69);
          uVar9 = *(undefined8 *)((long)puVar4 + 0x61);
          uVar11 = puVar4[0xc];
          uVar10 = puVar4[0xb];
          uVar13 = puVar4[10];
          uVar12 = puVar4[9];
          puVar4 = puVar4 + 0xf;
          *(undefined8 *)((long)puVar3 + 0x69) = *puVar8;
          *(undefined8 *)((long)puVar3 + 0x61) = uVar9;
          puVar3[0xc] = uVar11;
          puVar3[0xb] = uVar10;
          puVar3[10] = uVar13;
          puVar3[9] = uVar12;
          puVar3 = puVar3 + 0xf;
        } while (puVar4 != puVar7);
        puVar4 = puVar7;
        if (param_4 == puVar7) goto joined_r0x00600d38;
      }
      plVar2 = plVar2 + 1;
      puVar3 = (undefined8 *)*plVar2;
      puVar7 = puVar3;
    } while( true );
  }
LAB_00600c7c:
  *param_5 = plVar2;
  param_5[1] = puVar3;
  return;
}


// ===== 00600d58  FUN_00600d58 =====

void FUN_00600d58(undefined4 *param_1)

{
  *(undefined4 *)(*(long *)(param_1 + 2) + 300) = *param_1;
  return;
}


// ===== 00600d6c  FUN_00600d6c =====

void FUN_00600d6c(long *param_1)

{
  long lVar1;
  
  param_1 = (long *)*param_1;
  lVar1 = *param_1;
  FUN_00600e24(lVar1 + 0x40,param_1 + 1);
  *(ushort *)(lVar1 + 0x60) = *(byte *)(param_1 + 4) | 0x100;
  return;
}


// ===== 00600dac  FUN_00600dac =====

void FUN_00600dac(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x600e24);
      (*pcVar1)();
    }
    pvVar2 = (void *)*param_2;
    if (pvVar2 != (void *)0x0) {
      if (*(char *)((long)pvVar2 + 0x1f) < '\0') {
        operator_delete(*(void **)((long)pvVar2 + 8));
      }
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}


// ===== 00600e24  FUN_00600e24 =====

undefined8 * FUN_00600e24(undefined8 *param_1,undefined8 *param_2)

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


// ===== 00600f08  FUN_00600f08 =====

void FUN_00600f08(long param_1)

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
  uVar1 = lVar3 + -1 + *(long *)(param_1 + 0x20);
  lVar5 = *(long *)(param_1 + 8);
  if (*(long *)(lVar5 + (uVar1 / 0x22) * 8) + (uVar1 % 0x22) * 0x78 != 0) {
    lVar4 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x28) = lVar3 + -1;
    lVar2 = 0;
    if (lVar4 != lVar5) {
      lVar2 = (lVar4 - lVar5 >> 3) * 0x22 + -1;
    }
    if (0x43 < (lVar2 - (lVar3 + *(long *)(param_1 + 0x20))) + 1U) {
      operator_delete(*(void **)(lVar4 + -8));
      lVar3 = *(long *)(param_1 + 0x10) + -8;
      if (lVar3 == 0) goto LAB_00600fc4;
      *(long *)(param_1 + 0x10) = lVar3;
    }
    return;
  }
LAB_00600fc4:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00600fec  FUN_00600fec =====

long FUN_00600fec(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar6 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10);
  lVar5 = 0;
  if (lVar4 != lVar6) {
    lVar5 = (lVar4 - lVar6 >> 3) * 0x22 + -1;
  }
  if (lVar5 == *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) {
    FUN_0060111c(param_1);
    lVar6 = *(long *)(param_1 + 8);
    lVar4 = *(long *)(param_1 + 0x10);
  }
  if ((lVar6 != lVar4) &&
     (uVar1 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20),
     puVar3 = (undefined8 *)(*(long *)(lVar6 + (uVar1 / 0x22) * 8) + (uVar1 % 0x22) * 0x78),
     puVar3 != (undefined8 *)0x0)) {
    uVar9 = param_2[4];
    uVar8 = param_2[7];
    uVar7 = param_2[6];
    uVar11 = param_2[1];
    uVar10 = *param_2;
    uVar13 = param_2[3];
    uVar12 = param_2[2];
    puVar3[5] = param_2[5];
    puVar3[4] = uVar9;
    puVar3[7] = uVar8;
    puVar3[6] = uVar7;
    puVar3[1] = uVar11;
    *puVar3 = uVar10;
    puVar3[3] = uVar13;
    puVar3[2] = uVar12;
    uVar12 = param_2[0xb];
    uVar11 = param_2[10];
    uVar8 = param_2[0xd];
    uVar7 = param_2[0xc];
    uVar10 = param_2[9];
    uVar9 = param_2[8];
    puVar3[0xe] = param_2[0xe];
    puVar3[0xb] = uVar12;
    puVar3[10] = uVar11;
    puVar3[0xd] = uVar8;
    puVar3[0xc] = uVar7;
    puVar3[9] = uVar10;
    puVar3[8] = uVar9;
    lVar5 = *(long *)(param_1 + 0x28) + 1;
    uVar1 = *(long *)(param_1 + 0x20) + lVar5;
    *(long *)(param_1 + 0x28) = lVar5;
    plVar2 = (long *)(*(long *)(param_1 + 8) + (uVar1 / 0x22) * 8);
    lVar6 = *plVar2;
    lVar5 = 0;
    if (*(long *)(param_1 + 8) != *(long *)(param_1 + 0x10)) {
      lVar5 = lVar6 + (uVar1 % 0x22) * 0x78;
    }
    if (lVar5 == lVar6) {
      lVar5 = plVar2[-1] + 0xff0;
    }
    return lVar5 + -0x78;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0060111c  FUN_0060111c =====

void FUN_0060111c(long *param_1)

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
  
  if ((ulong)param_1[4] < 0x22) {
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
      FUN_0060158c(&local_50,&local_18);
      lVar2 = param_1[1];
      lVar5 = param_1[2];
      if (lVar5 != lVar2) {
        do {
          lVar5 = lVar5 + -8;
          FUN_00601ab0(&local_50,lVar5);
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
      FUN_0060158c(param_1,&local_50);
      return;
    }
    local_50 = (undefined1 *)operator_new(0xff0);
    FUN_00601814(param_1,&local_50);
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  else {
    param_1[4] = param_1[4] - 0x22;
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  FUN_00601304(param_1,&local_50);
  return;
}


// ===== 00601304  FUN_00601304 =====

void FUN_00601304(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_00601574;
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
LAB_00601574:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0060158c  FUN_0060158c =====

void FUN_0060158c(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_006017fc;
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
LAB_006017fc:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00601814  FUN_00601814 =====

void FUN_00601814(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_00601a98;
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
LAB_00601a98:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00601ab0  FUN_00601ab0 =====

void FUN_00601ab0(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_00601d34;
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
LAB_00601d34:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00601d4c  FUN_00601d4c =====

void FUN_00601d4c(undefined8 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
                    /* WARNING: Could not recover jumptable at 0x00601d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(puVar1 + 6) + 0x50))(*(long **)(puVar1 + 6),*puVar1,puVar1 + 1);
  return;
}


// ===== 00601d6c  FUN_00601d6c =====

void FUN_00601d6c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  FUN_005fe224(*(undefined8 *)(lVar1 + 0x50),lVar1,*(undefined2 *)(lVar1 + 0x28),
               *(undefined8 *)(lVar1 + 0x30),*(undefined8 *)(lVar1 + 0x38),
               *(undefined8 *)(lVar1 + 0x40),*(undefined1 *)(lVar1 + 0x48));
  return;
}


// ===== 00601d8c  FUN_00601d8c =====

void FUN_00601d8c(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  long local_8;
  
  local_8 = param_1 + 0xf0;
  FUN_005dabf4(&local_8,*(undefined8 *)(param_1 + 0xf8));
  pvVar1 = *(void **)(param_1 + 0xc0);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)(param_1 + 200);
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
    *(void **)(param_1 + 200) = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_00992610(param_1 + 0xa0);
  FUN_00992610(param_1 + 0x80);
  FUN_00992610(param_1 + 0x60);
  FUN_00625dbc(param_1 + 0x30);
  return;
}


// ===== 00601e74  FUN_00601e74 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_00601e74(undefined8 *param_1,byte *param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  
  plVar7 = (long *)*param_1;
  plVar5 = plVar7 + 1;
  plVar8 = plVar5;
  if ((long *)*plVar5 != (long *)0x0) {
    plVar3 = (long *)*plVar5;
    do {
      while (plVar4 = plVar3, plVar5 = plVar4, *(byte *)(plVar4 + 4) <= *param_2) {
        if (*param_2 <= *(byte *)(plVar4 + 4)) {
          uVar6 = 0;
          goto LAB_00601fa4;
        }
        plVar3 = (long *)plVar4[1];
        if ((long *)plVar4[1] == (long *)0x0) {
          plVar8 = plVar4 + 1;
          goto LAB_00601ee0;
        }
      }
      plVar3 = (long *)*plVar4;
      plVar8 = plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
LAB_00601ee0:
  plVar4 = (long *)operator_new(0x158);
  if ((plVar4 == (long *)0x0) || (*plVar4 = 0, plVar4 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  *(undefined1 *)(plVar4 + 4) = *(undefined1 *)*param_4;
  FUN_009925f4(plVar4 + 5);
  FUN_009925f4(plVar4 + 9);
  plVar4[0xd] = 0;
  plVar4[0xe] = 0;
  FUN_009925f4(plVar4 + 0xf);
  FUN_009925f4(plVar4 + 0x13);
  FUN_009925f4(plVar4 + 0x17);
  plVar4[0x1b] = 0;
  FUN_00991d04(plVar4 + 0x1c,500);
  plVar4[0x25] = 0;
  lVar2 = _UNK_001f2d18;
  lVar1 = _DAT_001f2d10;
  plVar4[0x29] = 0;
  plVar4[0x2a] = 0;
  plVar4[0x28] = 0;
  plVar4[0x27] = lVar2;
  plVar4[0x26] = lVar1;
  *plVar4 = 0;
  plVar4[1] = 0;
  plVar4[2] = (long)plVar5;
  *plVar8 = (long)plVar4;
  plVar5 = plVar4;
  if (*(long *)*plVar7 != 0) {
    *plVar7 = *(long *)*plVar7;
    plVar5 = (long *)*plVar8;
  }
  FUN_005d5b94(plVar7[1],plVar5);
  uVar6 = 1;
  plVar7[2] = plVar7[2] + 1;
LAB_00601fa4:
  auVar9._8_8_ = uVar6;
  auVar9._0_8_ = plVar4;
  return auVar9;
}


// ===== 00601fd4  FUN_00601fd4 =====

void FUN_00601fd4(long param_1)

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
      if (lVar3 == 0) goto LAB_0060206c;
      *(long *)(param_1 + 0x10) = lVar3;
    }
    return;
  }
LAB_0060206c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00602094  FUN_00602094 =====

long FUN_00602094(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar6 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10);
  lVar5 = 0;
  if (lVar4 != lVar6) {
    lVar5 = (lVar4 - lVar6) * 0x20 + -1;
  }
  if (lVar5 == *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) {
    FUN_0060216c(param_1);
    lVar6 = *(long *)(param_1 + 8);
    lVar4 = *(long *)(param_1 + 0x10);
  }
  if ((lVar6 != lVar4) &&
     (uVar2 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20),
     puVar1 = (undefined8 *)(*(long *)(lVar6 + (uVar2 >> 8) * 8) + (uVar2 & 0xff) * 0x10),
     puVar1 != (undefined8 *)0x0)) {
    uVar7 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar7;
    lVar5 = *(long *)(param_1 + 0x28) + 1;
    uVar2 = *(long *)(param_1 + 0x20) + lVar5;
    *(long *)(param_1 + 0x28) = lVar5;
    plVar3 = (long *)(*(long *)(param_1 + 8) + (uVar2 >> 8) * 8);
    lVar6 = *plVar3;
    lVar5 = 0;
    if (*(long *)(param_1 + 8) != *(long *)(param_1 + 0x10)) {
      lVar5 = lVar6 + (uVar2 & 0xff) * 0x10;
    }
    if (lVar5 == lVar6) {
      lVar5 = plVar3[-1] + 0x1000;
    }
    return lVar5 + -0x10;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0060216c  FUN_0060216c =====

void FUN_0060216c(long *param_1)

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
      FUN_006025dc(&local_50,&local_18);
      lVar2 = param_1[1];
      lVar5 = param_1[2];
      if (lVar5 != lVar2) {
        do {
          lVar5 = lVar5 + -8;
          FUN_00602b00(&local_50,lVar5);
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
      FUN_006025dc(param_1,&local_50);
      return;
    }
    local_50 = (undefined1 *)operator_new(0x1000);
    FUN_00602864(param_1,&local_50);
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  else {
    param_1[4] = param_1[4] - 0x100;
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  FUN_00602354(param_1,&local_50);
  return;
}


// ===== 00602354  FUN_00602354 =====

void FUN_00602354(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_006025c4;
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
LAB_006025c4:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 006025dc  FUN_006025dc =====

void FUN_006025dc(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_0060284c;
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
LAB_0060284c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00602864  FUN_00602864 =====

void FUN_00602864(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_00602ae8;
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
LAB_00602ae8:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00602b00  FUN_00602b00 =====

void FUN_00602b00(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_00602d84;
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
LAB_00602d84:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00602d9c  FUN_00602d9c =====

undefined1  [16] FUN_00602d9c(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  plVar3 = param_2 + 1;
  plVar5 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar2 = plVar1, plVar3 = plVar2, *param_4 < plVar2[4]) {
        plVar1 = (long *)*plVar2;
        plVar5 = plVar2;
        if ((long *)*plVar2 == (long *)0x0) goto LAB_00602e04;
      }
      if (*param_4 == plVar2[4]) {
        uVar4 = 0;
        goto LAB_00602e70;
      }
      plVar1 = (long *)plVar2[1];
    } while ((long *)plVar2[1] != (long *)0x0);
    plVar5 = plVar2 + 1;
  }
LAB_00602e04:
  plVar2 = (long *)operator_new(0x30);
  if ((plVar2 == (long *)0x0) || (*plVar2 = 0, plVar2 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  lVar7 = param_4[1];
  lVar6 = *param_4;
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[2] = (long)plVar3;
  plVar2[5] = lVar7;
  plVar2[4] = lVar6;
  *plVar5 = (long)plVar2;
  plVar3 = plVar2;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar3 = (long *)*plVar5;
  }
  FUN_005d5b94(param_2[1],plVar3);
  uVar4 = 1;
  param_2[2] = param_2[2] + 1;
LAB_00602e70:
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = plVar2;
  return auVar8;
}


// ===== 00602ea0  FUN_00602ea0 =====

void FUN_00602ea0(int *param_1)

{
  *(int *)(*(long *)(param_1 + 2) + 0xb0) = *(int *)(*(long *)(param_1 + 2) + 0xb0) + *param_1;
  return;
}


// ===== 00602ebc  FUN_00602ebc =====

void FUN_00602ebc(long *param_1)

{
  *(int *)(*param_1 + 0xb4) = *(int *)(*param_1 + 0xb4) + 1;
  return;
}


// ===== 00602ed4  FUN_00602ed4 =====

void FUN_00602ed4(long *param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  double dVar5;
  double *pdVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 uStack_29;
  double *local_28;
  long local_8;
  
  pdVar6 = (double *)*param_1;
  dVar5 = pdVar6[2];
  if ((*(byte *)((long)dVar5 + 0x110) & 1) == 0) {
    if ((double *)((long)dVar5 + 0x108) == (double *)0x0) {
LAB_00603044:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *(undefined8 *)((long)dVar5 + 0x108) = 0;
    *(undefined1 *)((long)dVar5 + 0x110) = 1;
    if (*(char *)((long)dVar5 + 0x120) == '\x01') {
      *(undefined8 *)((long)dVar5 + 0x118) = 0;
    }
    else {
      if ((undefined8 *)((long)dVar5 + 0x118) == (undefined8 *)0x0) goto LAB_00603044;
      *(undefined8 *)((long)dVar5 + 0x118) = 0;
      *(undefined1 *)((long)dVar5 + 0x120) = 1;
    }
    dVar7 = 0.0;
    *(double *)((long)dVar5 + 0x108) = *pdVar6 + 0.0;
  }
  else {
    *(double *)((long)dVar5 + 0x108) = *(double *)((long)dVar5 + 0x108) + *pdVar6;
    if (*(char *)((long)dVar5 + 0x120) != '\x01') {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    dVar7 = *(double *)((long)dVar5 + 0x118);
  }
  dVar8 = *pdVar6;
  *(int *)((long)dVar5 + 0x128) = *(int *)((long)dVar5 + 0x128) + 1;
  local_28 = pdVar6 + 1;
  *(double *)((long)dVar5 + 0x118) = dVar7 + dVar8 * dVar8;
  local_8 = (long)dVar5 + 0x4e8;
  lVar4 = FUN_00601e74(&local_8,pdVar6 + 1,&DAT_001f94c3,&local_28,&uStack_29);
  dVar5 = *pdVar6;
  lVar1 = *(long *)(lVar4 + 0x128) + 1;
  dVar8 = dVar5 - *(double *)(lVar4 + 0x140);
  *(long *)(lVar4 + 0x128) = lVar1;
  dVar7 = *(double *)(lVar4 + 0x140) + dVar8 / (double)lVar1;
  uVar9 = *(undefined8 *)*(undefined1 (*) [16])(lVar4 + 0x130);
  *(double *)(lVar4 + 0x140) = dVar7;
  auVar10._8_8_ = *(undefined8 *)(lVar4 + 0x138);
  auVar10._0_8_ = dVar5;
  auVar3._8_8_ = dVar5;
  auVar3._0_8_ = uVar9;
  auVar10 = NEON_fcmgt(auVar3,auVar10,8);
  auVar2._8_8_ = dVar5;
  auVar2._0_8_ = dVar5;
  auVar10 = NEON_bsl(auVar10,auVar2,*(undefined1 (*) [16])(lVar4 + 0x130),1);
  *(long *)(lVar4 + 0x138) = auVar10._8_8_;
  *(long *)(lVar4 + 0x130) = auVar10._0_8_;
  *(double *)(lVar4 + 0x150) = *(double *)(lVar4 + 0x150) + dVar5;
  *(double *)(lVar4 + 0x148) = *(double *)(lVar4 + 0x148) + dVar8 * (dVar5 - dVar7);
  return;
}


// ===== 00603058  FUN_00603058 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00603058(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  *(undefined1 *)(param_1 + 4) = 0;
  uVar2 = _UNK_001f3058;
  uVar1 = _DAT_001f3050;
  param_1[5] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  FUN_00625cdc(param_1 + 6,0x1e);
  param_1[0xb] = 0;
  FUN_009925f4(param_1 + 0xc);
  FUN_009925f4(param_1 + 0x10);
  FUN_009925f4(param_1 + 0x14);
  puVar3 = (undefined8 *)operator_new(0x18);
  param_1[0x18] = puVar3;
  param_1[0x19] = puVar3;
  param_1[0x1a] = puVar3 + 3;
  if ((puVar3 != (undefined8 *)0x0) && (*puVar3 = 0, puVar3 != (undefined8 *)0xfffffffffffffff8)) {
    puVar3[1] = 0;
    if (puVar3 + 2 != (undefined8 *)0x0) {
      puVar3[2] = 0;
      param_1[0x1f] = 0;
      param_1[0x19] = puVar3 + 3;
      param_1[0x20] = 0;
      param_1[0x1b] = 0;
      param_1[0x1c] = 0;
      *(undefined1 *)(param_1 + 0x1d) = 0;
      param_1[0x1e] = param_1 + 0x1f;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00603118  FUN_00603118 =====

void FUN_00603118(long *param_1,ulong param_2)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 *****pppppuVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  double dVar11;
  undefined8 ****local_8b8;
  ulong uStack_8b0;
  byte bStack_8a1;
  undefined8 ****local_8a0;
  undefined1 *puStack_898;
  undefined8 local_890;
  undefined1 *local_880;
  undefined1 *puStack_878;
  undefined1 *local_870;
  undefined1 uStack_859;
  undefined1 auStack_858 [2048];
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  if (param_1[1] != 0) {
    memset(auStack_858,0xaa,0x800);
    local_870 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_878 = &DAT_aaaaaaaaaaaaaaaa;
    local_880 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00622830(&local_880,auStack_858,0x800);
    if (param_1[5] < *param_1) {
      FUN_00992618(param_1 + 0x14,(int)*param_1 - (int)param_1[5]);
    }
    pcVar1 = "WebRTC.Video.Screenshare";
    if ((param_2 & 1) == 0) {
      pcVar1 = "WebRTC.Video";
    }
    puStack_898 = &DAT_aaaaaaaaaaaaaaaa;
    local_8a0 = (undefined8 ****)&DAT_aaaaaaaaaaaaaaaa;
    local_890 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_005d3510(&local_8a0,pcVar1);
    uVar7 = FUN_00992680(param_1 + 0x14,1);
    if ((uVar7 >> 0x20 & 1) != 0) {
      pppppuVar3 = (undefined8 *****)local_8a0;
      if (-1 < (long)local_890._7_1_) {
        pppppuVar3 = &local_8a0;
      }
      puVar4 = puStack_898;
      if (-1 < (long)local_890) {
        puVar4 = (undefined1 *)(long)local_890._7_1_;
      }
      FUN_005ff514(&local_8b8,&uStack_859,pppppuVar3,puVar4,".MeanTimeBetweenFreezesMs",0x19);
      uVar5 = uStack_8b0;
      pppppuVar3 = (undefined8 *****)local_8b8;
      if (-1 < (char)bStack_8a1) {
        uVar5 = (ulong)bStack_8a1;
        pppppuVar3 = &local_8b8;
      }
      lVar8 = FUN_006660d0(pppppuVar3,uVar5,1,100000,0x32);
      if ((char)bStack_8a1 < '\0') {
        operator_delete(local_8b8);
      }
      if (lVar8 != 0) {
        FUN_00666568(lVar8,uVar7 & 0xffffffff);
      }
      puVar4 = puStack_898;
      pppppuVar3 = (undefined8 *****)local_8a0;
      if (-1 < (long)local_890) {
        puVar4 = (undefined1 *)((ulong)local_890 >> 0x38);
        pppppuVar3 = &local_8a0;
      }
      uVar9 = FUN_006228b0(&local_880,pppppuVar3,puVar4);
      uVar9 = FUN_006228b0(uVar9,".MeanTimeBetweenFreezesMs ",0x1a);
      uVar9 = FUN_00622910(uVar9,uVar7 & 0xffffffff);
      FUN_006228b0(uVar9,&DAT_001ded1c,1);
    }
    uVar7 = FUN_00992680(param_1 + 0xc,1);
    if ((uVar7 >> 0x20 & 1) != 0) {
      pppppuVar3 = (undefined8 *****)local_8a0;
      if (-1 < (long)local_890._7_1_) {
        pppppuVar3 = &local_8a0;
      }
      puVar4 = puStack_898;
      if (-1 < (long)local_890) {
        puVar4 = (undefined1 *)(long)local_890._7_1_;
      }
      FUN_005ff514(&local_8b8,&uStack_859,pppppuVar3,puVar4,".MeanFreezeDurationMs",0x15);
      uVar5 = uStack_8b0;
      pppppuVar3 = (undefined8 *****)local_8b8;
      if (-1 < (char)bStack_8a1) {
        uVar5 = (ulong)bStack_8a1;
        pppppuVar3 = &local_8b8;
      }
      lVar8 = FUN_006660d0(pppppuVar3,uVar5,1,100000,0x32);
      if ((char)bStack_8a1 < '\0') {
        operator_delete(local_8b8);
      }
      if (lVar8 != 0) {
        FUN_00666568(lVar8,uVar7 & 0xffffffff);
      }
      puVar4 = puStack_898;
      pppppuVar3 = (undefined8 *****)local_8a0;
      if (-1 < (long)local_890) {
        puVar4 = (undefined1 *)((ulong)local_890 >> 0x38);
        pppppuVar3 = &local_8a0;
      }
      uVar9 = FUN_006228b0(&local_880,pppppuVar3,puVar4);
      uVar9 = FUN_006228b0(uVar9,".MeanFreezeDurationMs ",0x16);
      uVar9 = FUN_00622910(uVar9,uVar7 & 0xffffffff);
      FUN_006228b0(uVar9,&DAT_001ded1c,1);
    }
    uVar7 = *param_1 - param_1[2];
    if (2999 < (long)uVar7) {
      if ((ulong)(param_1[0x19] - param_1[0x18]) < 0x11) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      uVar5 = 0;
      if (uVar7 != 0) {
        uVar5 = (*(long *)(param_1[0x18] + 0x10) * 100) / (long)uVar7;
      }
      pppppuVar3 = (undefined8 *****)local_8a0;
      if (-1 < (long)local_890._7_1_) {
        pppppuVar3 = &local_8a0;
      }
      puVar4 = puStack_898;
      if (-1 < (long)local_890) {
        puVar4 = (undefined1 *)(long)local_890._7_1_;
      }
      FUN_005ff514(&local_8b8,&uStack_859,pppppuVar3,puVar4,".TimeInHdPercentage",0x13);
      uVar2 = uStack_8b0;
      pppppuVar3 = (undefined8 *****)local_8b8;
      if (-1 < (char)bStack_8a1) {
        uVar2 = (ulong)bStack_8a1;
        pppppuVar3 = &local_8b8;
      }
      lVar8 = FUN_006660d0(pppppuVar3,uVar2,1,100,0x32);
      if ((char)bStack_8a1 < '\0') {
        operator_delete(local_8b8);
      }
      if (lVar8 != 0) {
        FUN_00666568(lVar8,uVar5 & 0xffffffff);
      }
      puVar4 = puStack_898;
      pppppuVar3 = (undefined8 *****)local_8a0;
      if (-1 < (long)local_890) {
        puVar4 = (undefined1 *)((ulong)local_890 >> 0x38);
        pppppuVar3 = &local_8a0;
      }
      uVar9 = FUN_006228b0(&local_880,pppppuVar3,puVar4);
      uVar9 = FUN_006228b0(uVar9,".TimeInHdPercentage ",0x14);
      uVar9 = FUN_00622910(uVar9,uVar5 & 0xffffffff);
      FUN_006228b0(uVar9,&DAT_001ded1c,1);
      uVar5 = 0;
      if (uVar7 != 0) {
        uVar5 = (param_1[0x1c] * 100) / (long)uVar7;
      }
      pppppuVar3 = (undefined8 *****)local_8a0;
      if (-1 < (long)local_890._7_1_) {
        pppppuVar3 = &local_8a0;
      }
      puVar4 = puStack_898;
      if (-1 < (long)local_890) {
        puVar4 = (undefined1 *)(long)local_890._7_1_;
      }
      FUN_005ff514(&local_8b8,&uStack_859,pppppuVar3,puVar4,".TimeInBlockyVideoPercentage",0x1c);
      uVar2 = uStack_8b0;
      pppppuVar3 = (undefined8 *****)local_8b8;
      if (-1 < (char)bStack_8a1) {
        uVar2 = (ulong)bStack_8a1;
        pppppuVar3 = &local_8b8;
      }
      lVar8 = FUN_006660d0(pppppuVar3,uVar2,1,100,0x32);
      if ((char)bStack_8a1 < '\0') {
        operator_delete(local_8b8);
      }
      if (lVar8 != 0) {
        FUN_00666568(lVar8,uVar5 & 0xffffffff);
      }
      puVar4 = puStack_898;
      pppppuVar3 = (undefined8 *****)local_8a0;
      if (-1 < (long)local_890) {
        puVar4 = (undefined1 *)((ulong)local_890 >> 0x38);
        pppppuVar3 = &local_8a0;
      }
      uVar9 = FUN_006228b0(&local_880,pppppuVar3,puVar4);
      uVar9 = FUN_006228b0(uVar9,".TimeInBlockyVideoPercentage ",0x1d);
      uVar9 = FUN_00622910(uVar9,uVar5 & 0xffffffff);
      FUN_006228b0(uVar9,&DAT_001ded1c,1);
      if ((param_2 & 1) == 0) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = (long)(*(int *)((long)param_1 + 0xdc) * 60000) / (long)uVar7;
        }
        pppppuVar3 = (undefined8 *****)local_8a0;
        if (-1 < (long)local_890._7_1_) {
          pppppuVar3 = &local_8a0;
        }
        puVar4 = puStack_898;
        if (-1 < (long)local_890) {
          puVar4 = (undefined1 *)(long)local_890._7_1_;
        }
        FUN_005ff514(&local_8b8,&uStack_859,pppppuVar3,puVar4,
                     ".NumberResolutionDownswitchesPerMinute",0x26);
        uVar2 = uStack_8b0;
        pppppuVar3 = (undefined8 *****)local_8b8;
        if (-1 < (char)bStack_8a1) {
          uVar2 = (ulong)bStack_8a1;
          pppppuVar3 = &local_8b8;
        }
        lVar8 = FUN_006660d0(pppppuVar3,uVar2,1,100,0x32);
        if ((char)bStack_8a1 < '\0') {
          operator_delete(local_8b8);
        }
        if (lVar8 != 0) {
          FUN_00666568(lVar8,uVar5 & 0xffffffff);
        }
        puVar4 = puStack_898;
        pppppuVar3 = (undefined8 *****)local_8a0;
        if (-1 < (long)local_890) {
          puVar4 = (undefined1 *)((ulong)local_890 >> 0x38);
          pppppuVar3 = &local_8a0;
        }
        uVar9 = FUN_006228b0(&local_880,pppppuVar3,puVar4);
        uVar9 = FUN_006228b0(uVar9,".NumberResolutionDownswitchesPerMinute ",0x27);
        uVar9 = FUN_00622910(uVar9,uVar5 & 0xffffffff);
        FUN_006228b0(uVar9,&DAT_001ded1c,1);
      }
      lVar8 = FUN_009926e0(param_1 + 0xc);
      uVar5 = 0;
      if (uVar7 != 0) {
        uVar5 = (lVar8 * 60000) / (long)uVar7;
      }
      pppppuVar3 = (undefined8 *****)local_8a0;
      if (-1 < (long)local_890._7_1_) {
        pppppuVar3 = &local_8a0;
      }
      puVar4 = puStack_898;
      if (-1 < (long)local_890) {
        puVar4 = (undefined1 *)(long)local_890._7_1_;
      }
      FUN_005ff514(&local_8b8,&uStack_859,pppppuVar3,puVar4,".NumberFreezesPerMinute",0x17);
      uVar2 = uStack_8b0;
      pppppuVar3 = (undefined8 *****)local_8b8;
      if (-1 < (char)bStack_8a1) {
        uVar2 = (ulong)bStack_8a1;
        pppppuVar3 = &local_8b8;
      }
      lVar8 = FUN_006660d0(pppppuVar3,uVar2,1,100,0x32);
      if ((char)bStack_8a1 < '\0') {
        operator_delete(local_8b8);
      }
      if (lVar8 != 0) {
        FUN_00666568(lVar8,uVar5 & 0xffffffff);
      }
      puVar4 = puStack_898;
      pppppuVar3 = (undefined8 *****)local_8a0;
      if (-1 < (long)local_890) {
        puVar4 = (undefined1 *)((ulong)local_890 >> 0x38);
        pppppuVar3 = &local_8a0;
      }
      uVar9 = FUN_006228b0(&local_880,pppppuVar3,puVar4);
      uVar9 = FUN_006228b0(uVar9,".NumberFreezesPerMinute ",0x18);
      uVar9 = FUN_00622910(uVar9,uVar5 & 0xffffffff);
      FUN_006228b0(uVar9,&DAT_001ded1c,1);
      dVar11 = (double)param_1[0xb];
      if (dVar11 != 0.0 && dVar11 < 0.0 == NAN(dVar11)) {
        pppppuVar3 = (undefined8 *****)local_8a0;
        if (-1 < (long)local_890._7_1_) {
          pppppuVar3 = &local_8a0;
        }
        puVar4 = puStack_898;
        if (-1 < (long)local_890) {
          puVar4 = (undefined1 *)(long)local_890._7_1_;
        }
        iVar10 = (int)((double)uVar7 / (dVar11 * 1000.0));
        FUN_005ff514(&local_8b8,&uStack_859,pppppuVar3,puVar4,".HarmonicFrameRate",0x12);
        pppppuVar3 = (undefined8 *****)local_8b8;
        if (-1 < (char)bStack_8a1) {
          uStack_8b0 = (ulong)bStack_8a1;
          pppppuVar3 = &local_8b8;
        }
        lVar8 = FUN_006660d0(pppppuVar3,uStack_8b0,1,100,0x32);
        if ((char)bStack_8a1 < '\0') {
          operator_delete(local_8b8);
        }
        if (lVar8 != 0) {
          FUN_00666568(lVar8,iVar10);
        }
        puVar4 = puStack_898;
        pppppuVar3 = (undefined8 *****)local_8a0;
        if (-1 < (long)local_890) {
          puVar4 = (undefined1 *)((ulong)local_890 >> 0x38);
          pppppuVar3 = &local_8a0;
        }
        uVar9 = FUN_006228b0(&local_880,pppppuVar3,puVar4);
        uVar9 = FUN_006228b0(uVar9,".HarmonicFrameRate ",0x13);
        uVar9 = FUN_00622910(uVar9,iVar10);
        FUN_006228b0(uVar9,&DAT_001ded1c,1);
      }
    }
    uVar7 = FUN_00417e08();
    if ((uVar7 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../video/video_quality_observer2.cc",0x461,local_880);
    }
    if ((long)local_890 < 0) {
      operator_delete(local_8a0);
    }
  }
  if (*(long *)(lVar6 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 006038ec  FUN_006038ec =====

void FUN_006038ec(ulong *param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  
  if (param_1[1] == 0) {
    uVar5 = *(ulong *)(param_2 + 8);
    uVar7 = uVar5 / 1000;
    if (499 < uVar5 % 1000) {
      uVar7 = uVar7 + 1;
    }
    if ((uVar5 & 0x8000000000000000) != 0) {
      uVar7 = -(-uVar5 / 1000) - (ulong)(500 < -uVar5 % 1000);
    }
    param_1[5] = uVar7;
    param_1[2] = uVar7;
  }
  puVar8 = param_1 + 0x1f;
  puVar10 = (ulong *)*puVar8;
  puVar11 = puVar8;
  if (puVar10 != (ulong *)0x0) {
    do {
      while ((long)puVar10[4] <= (long)(ulong)*param_2) {
        puVar11 = puVar10;
        if ((puVar10[4] == (ulong)*param_2) ||
           (puVar10 = (ulong *)puVar10[1], puVar11 = puVar8, puVar10 == (ulong *)0x0))
        goto LAB_006039b0;
      }
      puVar10 = (ulong *)*puVar10;
      puVar11 = puVar8;
    } while (puVar10 != (ulong *)0x0);
  }
LAB_006039b0:
  if (0 < (long)param_1[1]) {
    uVar5 = *(ulong *)(param_2 + 8);
    uVar7 = uVar5 / 1000;
    if (499 < uVar5 % 1000) {
      uVar7 = uVar7 + 1;
    }
    if ((uVar5 & 0x8000000000000000) != 0) {
      uVar7 = -(-uVar5 / 1000) - (ulong)(500 < -uVar5 % 1000);
    }
    uVar7 = uVar7 - *param_1;
    param_1[0xb] = (ulong)((double)param_1[0xb] +
                          ((double)(long)uVar7 / 1000.0) * ((double)(long)uVar7 / 1000.0));
    if ((param_1[0x1d] & 1) == 0) {
      FUN_00625e64(param_1 + 6,uVar7 & 0xffffffff);
      uVar5 = FUN_00625ef0(param_1 + 6);
      if (4 < uVar5) {
        uVar5 = FUN_00625eb4(param_1 + 6);
        if ((uVar5 >> 0x20 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                    );
        }
        iVar4 = (int)uVar5;
        lVar1 = (long)iVar4 + (long)iVar4 * 2;
        lVar2 = (long)iVar4 + 0x96;
        if (lVar1 <= lVar2) {
          lVar1 = lVar2;
        }
        if (lVar1 <= (long)uVar7) {
          FUN_00992618(param_1 + 0xc,uVar7 & 0xffffffff);
          FUN_00992618(param_1 + 0x14,(int)*param_1 - (int)param_1[5]);
          uVar7 = *(ulong *)(param_2 + 8);
          if ((long)uVar7 < 0) {
            uVar5 = -(-uVar7 / 1000) - (ulong)(500 < -uVar7 % 1000);
          }
          else {
            uVar5 = uVar7 / 1000;
            if (499 < uVar7 % 1000) {
              uVar5 = uVar5 + 1;
            }
          }
          param_1[5] = uVar5;
          goto LAB_00603b28;
        }
      }
      uVar5 = param_1[0x18];
      uVar6 = (ulong)(uint)param_1[0x1b];
      if ((ulong)((long)(param_1[0x19] - uVar5) >> 3) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      *(ulong *)(uVar5 + uVar6 * 8) = *(long *)(uVar5 + uVar6 * 8) + uVar7;
      if ((char)param_1[4] == '\x01') {
        param_1[0x1c] = param_1[0x1c] + uVar7;
      }
    }
  }
LAB_00603b28:
  if ((char)param_1[0x1d] == '\x01') {
    *(undefined1 *)(param_1 + 0x1d) = 0;
    if ((long)param_1[5] < (long)*param_1) {
      FUN_00992618(param_1 + 0x14,(int)*param_1 - (int)param_1[5]);
    }
    uVar7 = *(ulong *)(param_2 + 8);
    if ((long)uVar7 < 0) {
      uVar5 = -(-uVar7 / 1000) - (ulong)(500 < -uVar7 % 1000);
    }
    else {
      uVar5 = uVar7 / 1000;
      if (499 < uVar7 % 1000) {
        uVar5 = uVar5 + 1;
      }
    }
    param_1[5] = uVar5;
    if (0 < (long)param_1[1]) {
      uVar7 = *(ulong *)(param_2 + 8);
      if ((long)uVar7 < 0) {
        iVar4 = -(int)(-uVar7 / 1000) - (uint)(500 < -uVar7 % 1000);
      }
      else {
        iVar4 = (int)(uVar7 / 1000);
        if (499 < uVar7 % 1000) {
          iVar4 = iVar4 + 1;
        }
      }
      FUN_00992618(param_1 + 0x10,iVar4 - (int)*param_1);
    }
  }
  iVar4 = param_2[7] * param_2[6];
  if (iVar4 < 0x7e900) {
    if (iVar4 < 0x38400) {
      *(undefined4 *)(param_1 + 0x1b) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x1b) = 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1b) = 2;
  }
  if ((long)iVar4 < (long)param_1[3]) {
    *(int *)((long)param_1 + 0xdc) = *(int *)((long)param_1 + 0xdc) + 1;
  }
  param_1[3] = (long)iVar4;
  uVar5 = *(ulong *)(param_2 + 8);
  uVar7 = uVar5 / 1000;
  if (499 < uVar5 % 1000) {
    uVar7 = uVar7 + 1;
  }
  if ((uVar5 & 0x8000000000000000) != 0) {
    uVar7 = -(-uVar5 / 1000) - (ulong)(500 < -uVar5 % 1000);
  }
  *param_1 = uVar7;
  *(bool *)(param_1 + 4) = puVar11 != puVar8;
  if (puVar11 != puVar8) {
    puVar10 = (ulong *)param_1[0x1e];
    puVar8 = (ulong *)puVar11[1];
    if ((ulong *)puVar11[1] == (ulong *)0x0) {
      do {
        puVar12 = (ulong *)puVar11[2];
        bVar3 = puVar11 != (ulong *)*puVar12;
        puVar11 = puVar12;
      } while (bVar3);
    }
    else {
      do {
        puVar12 = puVar8;
        puVar8 = (ulong *)*puVar12;
      } while ((ulong *)*puVar12 != (ulong *)0x0);
    }
    while (puVar10 != puVar12) {
      puVar11 = (ulong *)puVar10[1];
      puVar8 = puVar10;
      if ((ulong *)puVar10[1] == (ulong *)0x0) {
        do {
          puVar9 = (ulong *)puVar8[2];
          bVar3 = puVar8 != (ulong *)*puVar9;
          puVar8 = puVar9;
        } while (bVar3);
      }
      else {
        do {
          puVar9 = puVar11;
          puVar11 = (ulong *)*puVar9;
        } while ((ulong *)*puVar9 != (ulong *)0x0);
      }
      if ((ulong *)param_1[0x1e] == puVar10) {
        param_1[0x1e] = (ulong)puVar9;
      }
      param_1[0x20] = param_1[0x20] - 1;
      FUN_005d5d48(param_1[0x1f],puVar10);
      if (puVar10 == (ulong *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      operator_delete(puVar10);
      puVar10 = puVar9;
    }
  }
  param_1[1] = param_1[1] + 1;
  return;
}


// ===== 00603ddc  FUN_00603ddc =====

void FUN_00603ddc(long param_1,ulong param_2,uint param_3,int param_4)

{
  undefined8 *puVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong local_28;
  
  if ((param_3 >> 8 & 1) != 0) {
    if (param_4 == 1) {
      if ((byte)param_3 < 0x47) {
        return;
      }
    }
    else {
      if (param_4 != 2) {
        return;
      }
      if ((byte)param_3 < 0xb5) {
        return;
      }
    }
    if (100 < *(ulong *)(param_1 + 0x100)) {
      uVar3 = FUN_004022fc();
      if ((uVar3 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../video/video_quality_observer2.cc",0x82a,
                     "Overflow of blocky frames cache.");
      }
      puVar5 = *(undefined8 **)(param_1 + 0xf0);
      lVar4 = 0x32;
      puVar7 = puVar5;
      do {
        puVar1 = (undefined8 *)puVar7[1];
        puVar6 = puVar7;
        if ((undefined8 *)puVar7[1] == (undefined8 *)0x0) {
          do {
            puVar7 = (undefined8 *)puVar6[2];
            bVar2 = puVar6 != (undefined8 *)*puVar7;
            puVar6 = puVar7;
          } while (bVar2);
        }
        else {
          do {
            puVar7 = puVar1;
            puVar1 = (undefined8 *)*puVar7;
          } while ((undefined8 *)*puVar7 != (undefined8 *)0x0);
        }
        bVar2 = lVar4 != 0;
        lVar4 = lVar4 + -1;
      } while (bVar2 && lVar4 != 0);
      while (puVar5 != puVar7) {
        puVar1 = (undefined8 *)puVar5[1];
        puVar6 = puVar5;
        if ((undefined8 *)puVar5[1] == (undefined8 *)0x0) {
          do {
            puVar8 = (undefined8 *)puVar6[2];
            bVar2 = puVar6 != (undefined8 *)*puVar8;
            puVar6 = puVar8;
          } while (bVar2);
        }
        else {
          do {
            puVar8 = puVar1;
            puVar1 = (undefined8 *)*puVar8;
          } while ((undefined8 *)*puVar8 != (undefined8 *)0x0);
        }
        if (*(undefined8 **)(param_1 + 0xf0) == puVar5) {
          *(undefined8 **)(param_1 + 0xf0) = puVar8;
        }
        *(long *)(param_1 + 0x100) = *(long *)(param_1 + 0x100) + -1;
        FUN_005d5d48(*(undefined8 *)(param_1 + 0xf8),puVar5);
        if (puVar5 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        operator_delete(puVar5);
        puVar5 = puVar8;
      }
    }
    local_28 = param_2 & 0xffffffff;
    FUN_00604034(0,param_1 + 0xf0,param_1 + 0xf0,&local_28);
  }
  return;
}


// ===== 00603f6c  FUN_00603f6c =====

void FUN_00603f6c(long param_1)

{
  *(undefined1 *)(param_1 + 0xe8) = 1;
  return;
}


// ===== 00603f7c  FUN_00603f7c =====

void FUN_00603f7c(long param_1)

{
  FUN_009926e0(param_1 + 0x60);
  return;
}


// ===== 00603f9c  FUN_00603f9c =====

void FUN_00603f9c(long param_1)

{
  FUN_009926e0(param_1 + 0x80);
  return;
}


// ===== 00603fbc  FUN_00603fbc =====

undefined4 FUN_00603fbc(long param_1)

{
  undefined4 uVar1;
  ulong extraout_x1;
  
  uVar1 = FUN_009926b8(param_1 + 0x60,1);
  if ((extraout_x1 & 1) == 0) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 00603fe8  FUN_00603fe8 =====

undefined4 FUN_00603fe8(long param_1)

{
  undefined4 uVar1;
  ulong extraout_x1;
  
  uVar1 = FUN_009926b8(param_1 + 0x80,1);
  if ((extraout_x1 & 1) == 0) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 00604014  FUN_00604014 =====

int FUN_00604014(int *param_1)

{
  return *param_1 - param_1[4];
}


// ===== 00604028  FUN_00604028 =====

undefined1  [16] FUN_00604028(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(param_1 + 0x58);
  auVar1._8_8_ = 0;
  return auVar1;
}


// ===== 00604034  FUN_00604034 =====

undefined1  [16] FUN_00604034(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4)

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
        if ((long *)*plVar2 == (long *)0x0) goto LAB_0060409c;
      }
      if (*param_4 == plVar2[4]) {
        uVar4 = 0;
        goto LAB_00604108;
      }
      plVar1 = (long *)plVar2[1];
    } while ((long *)plVar2[1] != (long *)0x0);
    plVar6 = plVar2 + 1;
  }
LAB_0060409c:
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
LAB_00604108:
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = plVar2;
  return auVar7;
}


// ===== 00604138  FUN_00604138 =====

void FUN_00604138(long param_1)

{
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}


// ===== 00604148  FUN_00604148 =====

void FUN_00604148(long param_1,long *param_2,ulong param_3)

{
  FUN_0060a120(param_1 + 0x38,*(undefined8 *)(param_1 + 0x40),*param_2,param_2[1],
               param_2[1] - *param_2 >> 1);
  if ((param_3 & 1) != 0) {
    return;
  }
  FUN_006041a4(param_1);
  return;
}


// ===== 006041a4  FUN_006041a4 =====

void FUN_006041a4(long param_1)

{
  byte bVar1;
  byte bVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  void *pvVar6;
  void *local_48;
  void *local_40;
  undefined8 uStack_38;
  
  bVar2 = *(byte *)(param_1 + 0x30);
  pvVar6 = *(void **)(param_1 + 0x38);
  uStack_38 = *(undefined8 *)(param_1 + 0x48);
  pvVar3 = *(void **)(param_1 + 0x40);
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  local_48 = pvVar6;
  local_40 = pvVar3;
  if ((*(byte *)(param_1 + 0x56) & 1) == 0) {
    bVar2 = bVar2 & 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x56) = 0;
    bVar1 = bVar2;
    if (pvVar6 != pvVar3) {
      bVar1 = 1;
    }
    (**(code **)(**(long **)(param_1 + 0x28) + 0x10))
              (*(long **)(param_1 + 0x28),*(undefined2 *)(param_1 + 0x50),
               *(undefined2 *)(param_1 + 0x52),*(undefined1 *)(param_1 + 0x54),bVar1);
  }
  if (bVar2 == 0) {
    if (pvVar6 != pvVar3) {
      (**(code **)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20),&local_48,1);
      pvVar6 = local_48;
    }
  }
  else {
    (**(code **)**(undefined8 **)(param_1 + 0x18))();
  }
  if (pvVar6 != (void *)0x0) {
    uVar5 = (ulong)((long)local_40 + ((long)local_40 << 0x3f) + -2) >> 1;
    uVar4 = (ulong)(((long)pvVar6 - (long)local_40 << 0x3f) - ((long)pvVar6 - (long)local_40)) >> 1;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    pvVar3 = local_40;
    if ((1 < uVar4) && ((((int)pvVar6 - (uint)local_40 | (uint)local_40) & 1) == 0)) {
      uVar4 = uVar4 & 0x7ffffffffffffffe;
      pvVar3 = (void *)((long)local_40 + uVar4 * -2);
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    while (pvVar3 != pvVar6) {
      pvVar3 = (void *)((long)pvVar3 + -2);
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    local_40 = pvVar6;
    operator_delete(pvVar6);
  }
  return;
}


// ===== 00604300  FUN_00604300 =====

void FUN_00604300(long param_1,long *param_2,ulong param_3)

{
  FUN_0060a120(param_1 + 0x30,*(undefined8 *)(param_1 + 0x38),*param_2,param_2[1],
               param_2[1] - *param_2 >> 1);
  if ((param_3 & 1) != 0) {
    return;
  }
  FUN_006041a4(param_1 + -8);
  return;
}


// ===== 0060435c  FUN_0060435c =====

void FUN_0060435c(long param_1,uint param_2,int param_3,uint param_4)

{
  *(uint *)(param_1 + 0x50) = param_2 & 0xffff | param_3 << 0x10;
  *(undefined1 *)(param_1 + 0x56) = 1;
  *(ushort *)(param_1 + 0x54) = (ushort)((param_4 & 1) != 0);
  return;
}


// ===== 00604388  FUN_00604388 =====

void FUN_00604388(long param_1,uint param_2,int param_3,uint param_4)

{
  *(uint *)(param_1 + 0x40) = param_2 & 0xffff | param_3 << 0x10;
  *(undefined1 *)(param_1 + 0x46) = 1;
  *(ushort *)(param_1 + 0x44) = (ushort)((param_4 & 1) != 0);
  return;
}


// ===== 006043b4  FUN_006043b4 =====

void FUN_006043b4(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 long *param_13,long *param_14)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined *puVar6;
  int iVar7;
  void *pvVar8;
  long *****ppppplVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  uint uVar15;
  void *pvVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long *local_178;
  undefined8 *local_170;
  undefined8 *puStack_168;
  long ****local_160;
  undefined1 *puStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined5 local_d0;
  undefined3 uStack_cb;
  undefined5 uStack_c8;
  undefined3 uStack_c3;
  long *local_c0;
  undefined7 uStack_b8;
  undefined4 local_b1;
  undefined1 uStack_ad;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  long local_a0;
  void *local_98;
  undefined8 local_90;
  long lStack_88;
  undefined8 local_80;
  
  param_1[1] = &PTR_FUN_00d27218;
  param_1[3] = &PTR_FUN_00d27268;
  param_1[4] = &PTR_FUN_00d27290;
  param_1[5] = &PTR_FUN_00d272b8;
  *param_1 = &PTR_FUN_00d271b8;
  param_1[6] = &PTR_FUN_00d272e0;
  param_1[2] = &PTR_FUN_00d27240;
  param_1[7] = &PTR_FUN_00d27308;
  lVar12 = *param_2;
  param_1[8] = lVar12;
  if (lVar12 != 0) {
    FUN_00d0f740(1,lVar12 + 8);
  }
  lVar12 = param_2[1];
  lVar19 = param_2[4];
  lVar18 = param_2[3];
  param_1[10] = param_2[2];
  param_1[9] = lVar12;
  param_1[0xc] = lVar19;
  param_1[0xb] = lVar18;
  param_1[0xd] = param_3;
  param_1[0xe] = param_7;
  param_1[0xf] = param_6;
  FUN_00853340(param_1 + 0x10,param_1[10]);
  FUN_00661054(param_1 + 0x26,"max_ms",6);
  puVar6 = PTR_DAT_00d51ff8;
  *(undefined8 *)((long)param_1 + 0x16c) = 0;
  param_1[0x26] = puVar6 + 0x10;
  FUN_00661054(param_1 + 0x2f,"min_ms",6);
  param_1[0x2f] = puVar6 + 0x10;
  *(undefined8 *)((long)param_1 + 0x1b4) = 0;
  param_1[0x38] = param_8;
  if (*(int *)(param_7 + 0x38) == -1) {
    pvVar8 = (void *)0x0;
  }
  else {
    uVar13 = param_1[10];
    uVar3 = *(undefined4 *)(param_7 + 0x34);
    uVar4 = *(undefined4 *)(param_7 + 0x20);
    pvVar8 = operator_new(0x78);
    FUN_008777e4(pvVar8,uVar4,uVar3,param_1 + 1,uVar13);
    param_8 = param_1[0x38];
  }
  lVar12 = param_1[0xe];
  param_1[0x39] = pvVar8;
  *(undefined4 *)(param_1 + 0x3a) = *(undefined4 *)(lVar12 + 0x38);
  uVar13 = *(undefined8 *)(param_7 + 0x48);
  *(undefined1 *)(param_1 + 0x3c) = 0;
  param_1[0x3d] = 0xffffffffffffffff;
  param_1[0x3b] = uVar13;
  uStack_ac = *(undefined4 *)(lVar12 + 0x24);
  uStack_ad = 0xaa;
  uStack_c3 = 0xaaaaaa;
  local_160 = (long ****)0xaaaaaaaaaaaa0100;
  uStack_a8 = 0xaaaaaa00aaaaaa00;
  local_140 = 0;
  uStack_148 = 0;
  uStack_130 = 0;
  uStack_138 = 0;
  uStack_128 = 0;
  local_100 = 0;
  uStack_108 = 0;
  local_f0 = 0;
  uStack_f8 = 0;
  uStack_e0 = 0;
  uStack_e8 = 0;
  local_d0 = 0;
  uStack_d8 = 0;
  uStack_cb = 0;
  uStack_c8 = 0;
  local_c0 = (long *)0x0;
  uStack_b8 = 0;
  local_b1 = 0;
  local_98 = (void *)0x0;
  local_90 = 0;
  local_80 = 0xaaaaaaaaaaaaaa00;
  lStack_88 = 0;
  uStack_118 = param_9;
  local_110 = param_10;
  local_a0 = (ulong)CONCAT61(0xaaaaaaaaaaaa,*(undefined1 *)(lVar12 + 0x30)) << 8;
  puStack_158 = (undefined1 *)param_8;
  local_150 = (undefined1 *)param_4;
  local_120 = param_5;
  pvVar8 = operator_new(0x560);
  FUN_00863e98(pvVar8,param_1 + 8,&local_160);
  FUN_00864f38(pvVar8,1);
  if (lStack_88 < 0) {
    operator_delete(local_98);
  }
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 8))();
  }
  param_1[0x3e] = pvVar8;
  param_1[0x3f] = param_11;
  param_1[0x40] = param_12;
  uVar5 = *(undefined1 *)(param_1[0xe] + 0x31);
  param_1[0x42] = &PTR_FUN_00d27130;
  param_1[0x47] = param_1;
  *(undefined1 *)(param_1 + 0x41) = uVar5;
  param_1[0x43] = &PTR_FUN_00d27168;
  param_1[0x44] = &PTR_FUN_00d27190;
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined1 *)((long)param_1 + 0x266) = 0;
  param_1[0x45] = param_1 + 3;
  param_1[0x46] = param_1 + 4;
  param_1[0x49] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  if (*(int *)(param_1[0xe] + 0x28) == 0) {
    pvVar8 = (void *)0x0;
  }
  else {
    uVar13 = param_1[9];
    uVar17 = param_1[10];
    pvVar8 = operator_new(200);
    FUN_0094a2c0(pvVar8,param_3,param_11,uVar17,param_1 + 0x43,param_1 + 0x42,uVar13);
  }
  param_1[0x4d] = pvVar8;
  param_1[0x4e] = 0;
  local_150 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
  local_160 = (long ****)&DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*(long *)param_1[9] + 0x10))
            (&local_160,(long *)param_1[9],"WebRTC-PacketBufferMaxSize",0x1a);
  local_170 = (undefined8 *)CONCAT44(local_170._4_4_,0x800);
  if ((long)local_150 < 0) {
    ppppplVar9 = (long *****)local_160;
    if (puStack_158 != (undefined1 *)0x0) goto LAB_00604760;
    uVar15 = 0x800;
  }
  else {
    if (local_150._7_1_ == '\0') {
      uVar15 = 0x800;
      goto LAB_006047f4;
    }
    ppppplVar9 = &local_160;
LAB_00604760:
    iVar7 = sscanf((char *)ppppplVar9,"%d",&local_170);
    if (((iVar7 != 1) || ((int)(uint)local_170 < 1)) ||
       (uVar15 = (uint)local_170, ((uint)local_170 & (uint)local_170 - 1) != 0)) {
      uVar10 = FUN_004022fc();
      if ((uVar10 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e90,"../../video/rtp_video_stream_receiver2.cc",0x3a2,
                     "Invalid packet buffer max size: ",&local_160);
      }
      uVar15 = 0x800;
    }
    if (-1 < (long)local_150) goto LAB_006047f4;
  }
  operator_delete(local_160);
LAB_006047f4:
  FUN_00990008(param_1 + 0x4f,0x200,uVar15);
  param_1[0x5c] = 0;
  FUN_00951e04(param_1 + 0x5d);
  param_1[99] = 0;
  *(undefined1 *)(param_1 + 100) = 0;
  *(undefined1 *)((long)param_1 + 0x322) = 0;
  param_1[0x65] = 0;
  *(undefined1 *)(param_1 + 0x66) = 0;
  *(undefined1 *)(param_1 + 0x67) = 0;
  param_1[0x68] = 0x8000000000000000;
  pvVar8 = operator_new(0x18);
  FUN_009372ec();
  param_1[0x6c] = param_1 + 0x6d;
  param_1[0x69] = pvVar8;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  param_1[0x6e] = 0;
  param_1[0x6d] = 0;
  param_1[0x6f] = param_1 + 0x70;
  param_1[0x74] = 0;
  param_1[0x73] = 0;
  param_1[0x72] = param_1 + 0x73;
  param_1[0x75] = param_1 + 0x76;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  param_1[0x78] = param_1 + 0x79;
  param_1[0x7b] = param_1 + 0x7c;
  *(undefined1 *)((long)param_1 + 0x354) = 0;
  param_1[0x71] = 0;
  param_1[0x70] = 0;
  param_1[0x77] = 0;
  param_1[0x76] = 0;
  param_1[0x7d] = 0;
  param_1[0x7c] = 0;
  *(undefined2 *)(param_1 + 0x7e) = 0xffff;
  *(undefined1 *)((long)param_1 + 0x3f2) = 0;
  *(undefined1 *)((long)param_1 + 0x3f4) = 0;
  *(undefined1 *)(param_1 + 0x7f) = 0;
  *(undefined1 *)((long)param_1 + 0x3fc) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x81) = 0;
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined1 *)(param_1 + 0x83) = 0;
  *(undefined1 *)(param_1 + 0x84) = 0;
  param_1[0x85] = 0;
  *(undefined1 *)(param_1 + 0x86) = 0;
  *(undefined1 *)((long)param_1 + 0x434) = 0;
  *(undefined1 *)(param_1 + 0x8f) = 0;
  FUN_0084ab04(param_1 + 0x90,param_1[10]);
  *(undefined1 *)(param_1 + 0xa6) = 0;
  *(undefined1 *)(param_1 + 0xa7) = 0;
  *(undefined1 *)((long)param_1 + 0x55a) = 0;
  param_1[0xad] = 0;
  param_1[0xaf] = 0;
  param_1[0xae] = 0;
  param_1[0xa8] = 0;
  param_1[0xaa] = 0;
  param_1[0xa9] = 0;
  *(undefined1 *)(param_1 + 0xab) = 0;
  param_1[0xac] = param_1 + 0xad;
  param_1[0xb1] = 0;
  param_1[0xb0] = 0;
  param_1[0xb2] = 0x8000000000000000;
  *(undefined1 *)(param_1 + 0xb3) = 0;
  *(undefined1 *)((long)param_1 + 0x59c) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined1 *)((long)param_1 + 0x5a4) = 0;
  *(undefined1 *)(param_1 + 0xb5) = 0;
  *(undefined1 *)((long)param_1 + 0x5ac) = 0;
  *(undefined1 *)(param_1 + 0xb6) = 0;
  *(undefined1 *)((long)param_1 + 0x5b4) = 0;
  *(undefined1 *)(param_1 + 0xb7) = 0;
  *(undefined1 *)((long)param_1 + 0x5bc) = 0;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  if (param_1[0xf] != 0) {
    FUN_008e6c58(param_1[0xf],param_1[0x3e],0);
  }
  FUN_00864f38(param_1[0x3e],*(undefined4 *)(param_1[0xe] + 0x2c));
  FUN_008657ec(param_1[0x3e],*(undefined4 *)(param_1[0xe] + 0x20));
  if (0 < *(int *)(param_1[0xe] + 0x28)) {
    (**(code **)(*(long *)param_1[0x38] + 0x20))
              ((long *)param_1[0x38],*(undefined4 *)(param_1[0xe] + 0x20),0x1c2);
  }
  local_170 = param_1 + 0x26;
  puStack_168 = param_1 + 0x2f;
  (**(code **)(*(long *)param_1[9] + 0x10))
            (&local_160,(long *)param_1[9],"WebRTC-ForcePlayoutDelay",0x18);
  puVar1 = puStack_158;
  ppppplVar9 = (long *****)local_160;
  if (-1 < (long)local_150) {
    puVar1 = (undefined1 *)((ulong)local_150 >> 0x38);
    ppppplVar9 = &local_160;
  }
  FUN_00661cc0(&local_170,2,ppppplVar9,puVar1);
  if ((long)local_150 < 0) {
    operator_delete(local_160);
  }
  if (*(char *)(param_1[0xe] + 0x32) == '\x01') {
    pvVar8 = operator_new(0x48);
    FUN_0093548c(pvVar8,param_1 + 0x42,param_1 + 0x44);
    pvVar16 = (void *)param_1[0x4e];
    param_1[0x4e] = pvVar8;
    if (pvVar16 != (void *)0x0) {
      FUN_009354c8(pvVar16);
      operator_delete(pvVar16);
    }
  }
  if (*(char *)(param_1[0xe] + 0xbc) == '\x01') {
    uVar13 = param_1[9];
    pvVar8 = operator_new(0x50);
    puVar2 = (undefined8 *)0x0;
    if (param_1 != (undefined8 *)0x0) {
      puVar2 = param_1 + 5;
    }
    puVar11 = (undefined8 *)0x0;
    if (param_1 != (undefined8 *)0x0) {
      puVar11 = param_1 + 6;
    }
    FUN_0060c0b8(pvVar8,puVar2,puVar11,uVar13);
    pvVar16 = (void *)param_1[0x85];
    param_1[0x85] = pvVar8;
    if (pvVar16 != (void *)0x0) {
      FUN_0060c1a0(pvVar16);
      operator_delete(pvVar16);
    }
    plVar14 = (long *)*param_13;
    if (plVar14 != (long *)0x0) {
      uVar13 = param_1[0x85];
      *param_13 = 0;
      local_178 = plVar14;
      FUN_0060c3f0(uVar13,&local_178);
      if (local_178 != (long *)0x0) {
        (**(code **)(*local_178 + 8))();
      }
    }
  }
  if (*param_14 != 0) {
    uVar17 = param_1[10];
    uVar13 = FUN_007e06bc();
    lVar12 = param_1[0xe];
    puVar11 = (undefined8 *)operator_new(0x38);
    local_160 = (long ****)*param_14;
    *param_14 = 0;
    puVar2 = (undefined8 *)0x0;
    if (param_1 != (undefined8 *)0x0) {
      puVar2 = param_1 + 7;
    }
    FUN_00872ce0(puVar11,puVar2,uVar17,&local_160,uVar13,*(undefined4 *)(lVar12 + 0x20));
    if (local_160 != (long ****)0x0) {
      (*(code *)(*local_160)[1])();
    }
    *(undefined4 *)((long)puVar11 + 0x34) = 0;
    *puVar11 = &PTR_FUN_00d27330;
    if (puVar11 != (undefined8 *)0x0) {
      FUN_00d0f740(1,(long)puVar11 + 0x34);
    }
    plVar14 = (long *)param_1[0xa9];
    param_1[0xa9] = puVar11;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 8))();
      puVar11 = (undefined8 *)param_1[0xa9];
    }
    FUN_00872d0c(puVar11);
  }
  return;
}


// ===== 00604bb4  FUN_00604bb4 =====

void FUN_00604bb4(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  void *pvVar8;
  void *pvVar9;
  undefined8 *local_18;
  
  *param_1 = &PTR_FUN_00d271b8;
  param_1[1] = &PTR_FUN_00d27218;
  param_1[2] = &PTR_FUN_00d27240;
  param_1[3] = &PTR_FUN_00d27268;
  param_1[4] = &PTR_FUN_00d27290;
  param_1[5] = &PTR_FUN_00d272b8;
  param_1[6] = &PTR_FUN_00d272e0;
  param_1[7] = &PTR_FUN_00d27308;
  if (param_1[0xf] != 0) {
    FUN_008e6d4c(param_1[0xf],param_1[0x3e]);
  }
  pvVar8 = (void *)param_1[0x39];
  param_1[0x39] = 0;
  if (pvVar8 != (void *)0x0) {
    FUN_0087783c(pvVar8);
    operator_delete(pvVar8);
  }
  if (param_1[0xa9] != 0) {
    FUN_00872d80();
  }
  pvVar8 = (void *)param_1[0xaf];
  if (pvVar8 != (void *)0x0) {
    pvVar9 = (void *)param_1[0xb0];
    pvVar2 = pvVar8;
    if (pvVar8 != pvVar9) {
      do {
        pvVar9 = (void *)((long)pvVar9 + -0x90);
        if (pvVar9 == (void *)0x0) goto LAB_00604e88;
        FUN_007dc1b4(pvVar9);
      } while (pvVar9 != pvVar8);
      pvVar2 = (void *)param_1[0xaf];
    }
    param_1[0xb0] = pvVar8;
    operator_delete(pvVar2);
  }
  local_18 = param_1 + 0xac;
  FUN_0060b3f8(&local_18,param_1[0xad]);
  if ((long *)param_1[0xa9] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xa9] + 8))();
  }
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x91));
  pvVar8 = (void *)param_1[0x85];
  param_1[0x85] = 0;
  if (pvVar8 != (void *)0x0) {
    FUN_0060c1a0(pvVar8);
    operator_delete(pvVar8);
  }
  local_18 = param_1 + 0x7b;
  FUN_0060b384(&local_18,param_1[0x7c]);
  local_18 = param_1 + 0x78;
  FUN_0060b244(&local_18,param_1[0x79]);
  local_18 = param_1 + 0x75;
  FUN_0060b1b0(&local_18,param_1[0x76]);
  local_18 = param_1 + 0x72;
  FUN_0060a4c0(&local_18,param_1[0x73]);
  local_18 = param_1 + 0x6f;
  FUN_0060a54c(&local_18,param_1[0x70]);
  local_18 = param_1 + 0x6c;
  FUN_0060b13c(&local_18,param_1[0x6d]);
  pvVar8 = (void *)param_1[0x69];
  param_1[0x69] = 0;
  if (pvVar8 != (void *)0x0) {
    FUN_00937394(pvVar8);
    operator_delete(pvVar8);
  }
  pvVar8 = (void *)param_1[0x65];
  param_1[0x65] = 0;
  if (pvVar8 != (void *)0x0) {
    FUN_0060b02c(pvVar8);
    operator_delete(pvVar8);
  }
  pvVar8 = (void *)param_1[0x61];
  param_1[0x61] = 0;
  if (pvVar8 != (void *)0x0) {
    operator_delete__(pvVar8);
  }
  local_18 = param_1 + 0x5e;
  FUN_0060a5d8(&local_18,param_1[0x5f]);
  lVar3 = param_1[0x5c];
  param_1[0x5c] = 0;
  if (lVar3 != 0) {
    FUN_0060ba78(param_1 + 0x5c);
  }
  FUN_00990110(param_1 + 0x4f);
  pvVar8 = (void *)param_1[0x4e];
  param_1[0x4e] = 0;
  if (pvVar8 != (void *)0x0) {
    FUN_009354c8(pvVar8);
    operator_delete(pvVar8);
  }
  pvVar8 = (void *)param_1[0x4d];
  param_1[0x4d] = 0;
  if (pvVar8 != (void *)0x0) {
    FUN_0094a40c(pvVar8);
    operator_delete(pvVar8);
  }
  pvVar8 = (void *)param_1[0x49];
  param_1[0x42] = &PTR_FUN_00d27130;
  param_1[0x43] = &PTR_FUN_00d27168;
  param_1[0x44] = &PTR_FUN_00d27190;
  if (pvVar8 == (void *)0x0) {
LAB_00604eac:
    pvVar8 = (void *)param_1[0x3e];
    param_1[0x3e] = 0;
    if (pvVar8 != (void *)0x0) {
      FUN_0086425c(pvVar8);
      operator_delete(pvVar8);
    }
    pvVar8 = (void *)param_1[0x39];
    param_1[0x39] = 0;
    if (pvVar8 != (void *)0x0) {
      FUN_0087783c(pvVar8);
      operator_delete(pvVar8);
    }
    FUN_006634ac(param_1 + 0x2f);
    FUN_006634ac(param_1 + 0x26);
    if (param_1[0x1f] != 0) {
      plVar7 = (long *)param_1[0x1e];
      plVar4 = *(long **)(param_1[0x1d] + 8);
      *(long **)(*plVar7 + 8) = plVar4;
      *plVar4 = *plVar7;
      param_1[0x1f] = 0;
      while (plVar7 != param_1 + 0x1d) {
        if ((plVar7 == (long *)0xfffffffffffffff0) || (plVar7 == (long *)0x0)) goto LAB_00604e88;
        plVar4 = (long *)plVar7[1];
        operator_delete(plVar7);
        plVar7 = plVar4;
      }
    }
    if (param_1[0x19] != 0) {
      plVar7 = (long *)param_1[0x18];
      plVar4 = *(long **)(param_1[0x17] + 8);
      *(long **)(*plVar7 + 8) = plVar4;
      *plVar4 = *plVar7;
      param_1[0x19] = 0;
      while (plVar7 != param_1 + 0x17) {
        if ((plVar7 == (long *)0xfffffffffffffff0) || (plVar7 == (long *)0x0)) goto LAB_00604e88;
        plVar4 = (long *)plVar7[1];
        operator_delete(plVar7);
        plVar7 = plVar4;
      }
    }
    local_18 = param_1 + 0x12;
    FUN_005dabf4(&local_18,param_1[0x13]);
    plVar7 = (long *)param_1[8];
    if ((plVar7 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar7 + 1), iVar1 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
    return;
  }
  pvVar9 = (void *)param_1[0x4a];
  uVar6 = (ulong)((long)pvVar9 + ((long)pvVar9 << 0x3f) + -2) >> 1;
  uVar5 = (ulong)(((long)pvVar8 - (long)pvVar9 << 0x3f) - ((long)pvVar8 - (long)pvVar9)) >> 1;
  if (uVar6 <= uVar5) {
    uVar5 = uVar6;
  }
  if ((1 < uVar5) && ((((int)pvVar8 - (uint)pvVar9 | (uint)pvVar9) & 1) == 0)) {
    uVar5 = uVar5 & 0x7ffffffffffffffe;
    pvVar9 = (void *)((long)pvVar9 + uVar5 * -2);
    do {
      uVar5 = uVar5 - 2;
    } while (uVar5 != 0);
  }
  do {
    if (pvVar9 == pvVar8) {
      param_1[0x4a] = pvVar8;
      operator_delete(pvVar8);
      goto LAB_00604eac;
    }
    pvVar9 = (void *)((long)pvVar9 + -2);
  } while (pvVar9 != (void *)0x0);
LAB_00604e88:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00604ff8  FUN_00604ff8 =====

void FUN_00604ff8(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[7];
  *param_1 = &PTR_FUN_00d27130;
  param_1[1] = &PTR_FUN_00d27168;
  param_1[2] = &PTR_FUN_00d27190;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar2 = (void *)param_1[8];
  uVar4 = (ulong)((long)pvVar2 + ((long)pvVar2 << 0x3f) + -2) >> 1;
  uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3f) - ((long)pvVar1 - (long)pvVar2)) >> 1;
  if (uVar4 <= uVar3) {
    uVar3 = uVar4;
  }
  if ((1 < uVar3) && ((((int)pvVar1 - (uint)pvVar2 | (uint)pvVar2) & 1) == 0)) {
    uVar3 = uVar3 & 0x7ffffffffffffffe;
    pvVar2 = (void *)((long)pvVar2 + uVar3 * -2);
    do {
      uVar3 = uVar3 - 2;
    } while (uVar3 != 0);
  }
  do {
    if (pvVar2 == pvVar1) {
      param_1[8] = pvVar1;
      operator_delete(pvVar1);
      return;
    }
    pvVar2 = (void *)((long)pvVar2 + -2);
  } while (pvVar2 != (void *)0x0);
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 006050b0  FUN_006050b0 =====

void FUN_006050b0(long param_1)

{
  FUN_00604bb4(param_1 + -8);
  return;
}


// ===== 006050bc  FUN_006050bc =====

void FUN_006050bc(long param_1)

{
  FUN_00604bb4(param_1 + -0x10);
  return;
}


// ===== 006050c8  FUN_006050c8 =====

void FUN_006050c8(long param_1)

{
  FUN_00604bb4(param_1 + -0x18);
  return;
}


// ===== 006050d4  FUN_006050d4 =====

void FUN_006050d4(long param_1)

{
  FUN_00604bb4(param_1 + -0x20);
  return;
}


// ===== 006050e0  FUN_006050e0 =====

void FUN_006050e0(long param_1)

{
  FUN_00604bb4(param_1 + -0x28);
  return;
}


// ===== 006050ec  FUN_006050ec =====

void FUN_006050ec(long param_1)

{
  FUN_00604bb4(param_1 + -0x30);
  return;
}


// ===== 006050f8  FUN_006050f8 =====

void FUN_006050f8(long param_1)

{
  FUN_00604bb4(param_1 + -0x38);
  return;
}


// ===== 00605104  FUN_00605104 =====

void FUN_00605104(void *param_1)

{
  FUN_00604bb4();
  operator_delete(param_1);
  return;
}


// ===== 00605134  FUN_00605134 =====

void FUN_00605134(long param_1)

{
  FUN_00604bb4((void *)(param_1 + -8));
  operator_delete((void *)(param_1 + -8));
  return;
}


// ===== 00605168  FUN_00605168 =====

void FUN_00605168(long param_1)

{
  FUN_00604bb4((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}


// ===== 0060519c  FUN_0060519c =====

void FUN_0060519c(long param_1)

{
  FUN_00604bb4((void *)(param_1 + -0x18));
  operator_delete((void *)(param_1 + -0x18));
  return;
}


// ===== 006051d0  FUN_006051d0 =====

void FUN_006051d0(long param_1)

{
  FUN_00604bb4((void *)(param_1 + -0x20));
  operator_delete((void *)(param_1 + -0x20));
  return;
}


// ===== 00605204  FUN_00605204 =====

void FUN_00605204(long param_1)

{
  FUN_00604bb4((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}


// ===== 00605238  FUN_00605238 =====

void FUN_00605238(long param_1)

{
  FUN_00604bb4((void *)(param_1 + -0x30));
  operator_delete((void *)(param_1 + -0x30));
  return;
}


// ===== 0060526c  FUN_0060526c =====

void FUN_0060526c(long param_1)

{
  FUN_00604bb4((void *)(param_1 + -0x38));
  operator_delete((void *)(param_1 + -0x38));
  return;
}


// ===== 006052a0  FUN_006052a0 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_006052a0(long param_1,undefined1 param_2,undefined4 param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  long *__s2;
  long *******ppppppplVar3;
  undefined8 *******__s1;
  ulong uVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  size_t sVar8;
  undefined8 *******pppppppuVar9;
  long *plVar10;
  undefined8 *******local_98;
  ulong uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_7c [4];
  long *******local_78;
  ulong local_70;
  byte bStack_61;
  
  puVar5 = PTR_s_sps_pps_idr_in_keyframe_00d52000;
  local_80 = param_3;
  local_7c[0] = param_2;
  sVar8 = strlen(PTR_s_sps_pps_idr_in_keyframe_00d52000);
  if (0x7ffffffffffffff6 < sVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (sVar8 < 0x17) {
    local_88 = CONCAT17((char)sVar8,(undefined7)local_88);
    pppppppuVar9 = &local_98;
  }
  else {
    uVar1 = (sVar8 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    pppppppuVar9 = (undefined8 *******)operator_new(uVar2);
    local_88 = uVar2 | 0x8000000000000000;
    local_98 = pppppppuVar9;
    uStack_90 = sVar8;
  }
  if ((undefined8 *******)((long)pppppppuVar9 + sVar8) < pppppppuVar9) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((pppppppuVar9 <= puVar5) && (puVar5 < (undefined8 *******)((long)pppppppuVar9 + sVar8))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memcpy(pppppppuVar9,PTR_s_sps_pps_idr_in_keyframe_00d52000,sVar8);
  plVar10 = *(long **)(param_4 + 8);
  *(undefined1 *)((long)pppppppuVar9 + sVar8) = 0;
  uVar1 = local_88;
  pppppppuVar9 = local_98;
  if (plVar10 != (long *)0x0) {
    __s1 = local_98;
    uVar2 = uStack_90;
    if (-1 < (long)local_88) {
      __s1 = &local_98;
      uVar2 = local_88 >> 0x38;
    }
    do {
      __s2 = (long *)plVar10[4];
      uVar4 = plVar10[5];
      if (-1 < (char)*(byte *)((long)plVar10 + 0x37)) {
        __s2 = plVar10 + 4;
        uVar4 = (ulong)*(byte *)((long)plVar10 + 0x37);
      }
      sVar8 = uVar4;
      if (uVar2 <= uVar4) {
        sVar8 = uVar2;
      }
      iVar7 = memcmp(__s1,__s2,sVar8);
      if (iVar7 == 0) {
        if (uVar2 == uVar4) {
          if ((long)uVar1 < 0) {
            operator_delete(pppppppuVar9);
          }
          goto LAB_006054dc;
        }
        if (uVar4 <= uVar2) goto LAB_0060539c;
      }
      else if (-1 < iVar7) {
LAB_0060539c:
        plVar10 = plVar10 + 1;
      }
      plVar10 = (long *)*plVar10;
    } while (plVar10 != (long *)0x0);
  }
  (**(code **)(**(long **)(param_1 + 0x48) + 0x10))
            (&local_78,*(long **)(param_1 + 0x48),"WebRTC-SpsPpsIdrIsH264Keyframe",0x1e);
  if (-1 < (char)bStack_61) {
    local_70 = (ulong)bStack_61;
  }
  if (local_70 < 7) {
    bVar6 = false;
  }
  else {
    ppppppplVar3 = local_78;
    if (-1 < (char)bStack_61) {
      ppppppplVar3 = (long *******)&local_78;
    }
    bVar6 = *(int *)ppppppplVar3 == 0x62616e45 && *(int *)((long)ppppppplVar3 + 3) == 0x64656c62;
  }
  if ((char)bStack_61 < '\0') {
    operator_delete(local_78);
  }
  if ((long)local_88 < 0) {
    operator_delete(local_98);
  }
  if (bVar6) {
LAB_006054dc:
    FUN_00991ba0(param_1 + 0x278);
    *(undefined1 *)(param_1 + 0x598) = 1;
  }
  if ((param_5 & 1) == 0) {
    local_78 = (long *******)FUN_0084b300(param_3);
  }
  else {
    local_78 = (long *******)operator_new(8);
    *local_78 = (long ******)&PTR_FUN_00d3aea0;
  }
  FUN_0060b600(0,param_1 + 0x3a8,param_1 + 0x3a8,local_7c,&local_78);
  ppppppplVar3 = local_78;
  local_78 = (long *******)0x0;
  if (ppppppplVar3 != (long *******)0x0) {
    (*(code *)(*ppppppplVar3)[1])();
  }
  local_78 = (long *******)(param_1 + 0x3c0);
  FUN_0060b714(&local_78,local_7c,local_7c,param_4);
  FUN_0060b974(0,param_1 + 0x3d8,param_1 + 0x3d8,local_7c,&local_80);
  return;
}


// ===== 006055b0  FUN_006055b0 =====

void FUN_006055b0(long param_1)

{
  long lVar1;
  long local_28;
  
  local_28 = param_1 + 0x3c0;
  FUN_0060b244(&local_28,*(undefined8 *)(param_1 + 0x3c8));
  local_28 = param_1 + 0x3a8;
  *(undefined8 **)(param_1 + 0x3c0) = (undefined8 *)(param_1 + 0x3c8);
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  FUN_0060b1b0(&local_28,*(undefined8 *)(param_1 + 0x3b0));
  *(long *)(param_1 + 0x3a8) = param_1 + 0x3b0;
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  *(undefined8 *)(param_1 + 0x3b0) = 0;
  FUN_00991bb0(param_1 + 0x278);
  lVar1 = *(long *)(param_1 + 0x2e0);
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  if (lVar1 != 0) {
    FUN_0060ba78(param_1 + 0x2e0);
  }
  local_28 = param_1 + 0x3d8;
  FUN_0060b384(&local_28,*(undefined8 *)(param_1 + 0x3e0));
  *(long *)(param_1 + 0x3d8) = param_1 + 0x3e0;
  *(undefined8 *)(param_1 + 1000) = 0;
  *(undefined8 *)(param_1 + 0x3e0) = 0;
  return;
}


// ===== 00605664  FUN_00605664 =====

void FUN_00605664(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_008650b0(&local_60,*(undefined8 *)(param_2 + 0x1f0));
  if (((((ulong)local_30 & 1) == 0) || (*(char *)(param_2 + 0x3f8) != '\x01')) ||
     ((*(byte *)(param_2 + 0x410) & 1) == 0)) {
    uVar2 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x3f4);
    *param_1 = *(undefined8 *)(param_2 + 0x408);
    *(undefined4 *)(param_1 + 1) = uVar1;
    *(undefined4 *)((long)param_1 + 0xc) = puStack_48._0_4_;
    param_1[2] = local_50;
    param_1[3] = 0;
    uVar2 = 1;
  }
  *(undefined1 *)(param_1 + 4) = uVar2;
  return;
}


// ===== 006056fc  FUN_006056fc =====

/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffec0 : 0x00605c28 */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1 FUN_006056fc(long param_1,long param_2,ulong *param_3)

{
  int *******pppppppiVar1;
  undefined8 *******pppppppuVar2;
  char *pcVar3;
  char **ppcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  bool bVar9;
  uint *puVar10;
  undefined4 uVar11;
  ulong uVar12;
  ulong uVar13;
  ushort *puVar14;
  long extraout_x1;
  uint uVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong uVar18;
  undefined1 uVar19;
  void *pvVar20;
  undefined8 uVar21;
  long lVar22;
  undefined1 auVar23 [16];
  undefined1 uStack_169;
  char *local_168;
  undefined8 local_160;
  undefined1 *local_158;
  char *local_150;
  char **ppcStack_148;
  ulong local_140;
  char **ppcStack_138;
  char *local_130;
  ulong *puStack_128;
  ulong local_120;
  char **local_118;
  undefined1 *local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  uint uStack_f0;
  undefined4 uStack_ec;
  undefined8 *******local_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  ulong local_c0;
  int *******pppppppiStack_b8;
  undefined1 *puStack_b0;
  ulong local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined8 local_90;
  ulong local_88;
  undefined8 local_80;
  uint *local_78;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  local_108 = 0xaaaaaaaa;
  local_110 = &DAT_aaaaaaaaaaaaaaaa;
  auVar23 = FUN_007dba34(param_2,0x12);
  if ((auVar23._8_8_ == 0) ||
     (uVar12 = FUN_007d42f0(auVar23._0_8_,auVar23._8_8_,&local_110), (uVar12 & 1) == 0)) {
    local_e0 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_f8 = 0xaaaaaaaa;
    uStack_f4 = 0xaaaaaaaa;
    local_100._0_1_ = 0xaa;
    local_100._1_1_ = 0xaa;
    local_100._2_2_ = 0xaaaa;
    local_100._4_4_ = 0xaaaaaaaa;
    local_e8 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
    uStack_f0 = 0xaaaaaaaa;
    uStack_ec = 0xaaaaaaaa;
    FUN_007d7f20(&local_100);
    auVar23 = FUN_007dba34(param_2,0x11);
    if ((auVar23._8_8_ == 0) ||
       (uVar12 = FUN_007d801c(auVar23._0_8_,auVar23._8_8_,&local_100), (uVar12 & 1) == 0)) {
      uVar19 = 3;
    }
    else {
      *(byte *)((long)param_3 + 0xa5) = (byte)local_100;
      *(byte *)((long)param_3 + 0xa6) = local_100._1_1_;
      if (((byte)local_100 & 1) != 0) {
        FUN_007d7fc4(&local_100);
        uVar11 = 3;
        if (extraout_x1 != 0) {
          uVar11 = 4;
        }
        *(undefined4 *)(param_3 + 0x13) = uVar11;
        if ((byte)param_3[0x12] == 1) {
          FUN_007dca64(param_3);
          *(byte *)(param_3 + 0x12) = 0;
        }
        if (param_3 == (ulong *)0x0) goto LAB_00605d10;
        FUN_007dc964(param_3);
        *(byte *)(param_3 + 0x12) = 1;
        uVar12 = FUN_007d7fac(&local_100);
        if ((*(byte *)(param_1 + 0x322) & 1) == 0) {
          uVar13 = uVar12 & 0xffff;
        }
        else {
          uVar6 = (uint)uVar12 & 0xffff;
          uVar15 = (uint)*(ushort *)(param_1 + 800);
          uVar5 = (uint)uVar12 - uVar15;
          iVar7 = (int)(short)uVar5;
          bVar9 = uVar15 < uVar6;
          if (uVar6 - uVar15 != 0x8000) {
            bVar9 = iVar7 != -1 && iVar7 + 1 < 0 == SCARRY4(iVar7,1);
          }
          uVar13 = (ulong)uVar5 & 0xffff;
          if (!bVar9) {
            uVar13 = (ulong)uVar5 & 0xffff | 0xffffffffffff0000;
          }
          uVar13 = uVar13 + *(long *)(param_1 + 0x318);
        }
        *(short *)(param_1 + 800) = (short)uVar12;
        *(ulong *)(param_1 + 0x318) = uVar13;
        *(undefined1 *)(param_1 + 0x322) = 1;
        *param_3 = uVar13;
        uVar11 = FUN_007d7f5c(&local_100);
        *(undefined4 *)(param_3 + 1) = uVar11;
        uVar11 = FUN_007d7f44(&local_100);
        *(undefined4 *)((long)param_3 + 0xc) = uVar11;
        auVar23 = FUN_007d7fc4(&local_100);
        puVar14 = auVar23._0_8_;
        for (lVar22 = auVar23._8_8_ << 1; lVar22 != 0; lVar22 = lVar22 + -2) {
          local_168 = (char *)(uVar13 - *puVar14);
          if ((param_3[8] & 1) == 0) {
            puVar17 = param_3 + 9;
            uVar12 = 5;
          }
          else {
            puVar17 = (ulong *)param_3[9];
            uVar12 = param_3[10];
          }
          uVar18 = param_3[8] >> 1;
          if (uVar18 == uVar12) {
            FUN_0060bc3c(param_3 + 8,&local_168);
          }
          else {
            if (puVar17 + uVar18 == (ulong *)0x0) goto LAB_00605d10;
            puVar17[uVar18] = (ulong)local_168;
            param_3[8] = param_3[8] + 2;
          }
          puVar14 = puVar14 + 1;
        }
      }
      uVar19 = 2;
      *(short *)((long)param_3 + 0x9c) = (short)local_e0;
      *(short *)((long)param_3 + 0x9e) = (short)((ulong)local_e0 >> 0x20);
    }
    FUN_007d7f3c(&local_100);
    goto LAB_00605a3c;
  }
  uVar12 = (ulong)local_110 & 0xffff;
  if ((*(byte *)(param_1 + 0x322) & 1) != 0) {
    uVar6 = (uint)(ushort)local_110 - (uint)*(ushort *)(param_1 + 800);
    iVar7 = (int)(short)uVar6;
    bVar9 = (uint)*(ushort *)(param_1 + 800) <= (uint)(ushort)local_110 && uVar6 != 0;
    if (uVar6 != 0x8000) {
      bVar9 = iVar7 != -1 && iVar7 + 1 < 0 == SCARRY4(iVar7,1);
    }
    uVar12 = (ulong)uVar6 & 0xffff;
    if (!bVar9) {
      uVar12 = (ulong)uVar6 & 0xffff | 0xffffffffffff0000;
    }
    uVar12 = uVar12 + *(long *)(param_1 + 0x318);
  }
  *(ushort *)(param_1 + 800) = (ushort)local_110;
  *(undefined1 *)(param_1 + 0x322) = 1;
  uVar21 = *(undefined8 *)(param_1 + 0x328);
  *(ulong *)(param_1 + 0x318) = uVar12;
  local_78 = (uint *)0x0;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
  pppppppiStack_b8 = (int *******)&DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
  local_100._2_2_ = 0xaaaa;
  local_e8 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_100._0_1_ = 1;
  local_100._1_1_ = 1;
  local_c0 = 0;
  local_a8 = 0;
  local_90 = 0xaaaaaaaaaaaaaa00;
  local_88 = 0xaaaaaa00aaaaaa00;
  local_80 = 0xaaaaaaaaaaaaaa00;
  local_100._4_4_ = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  auVar23 = FUN_007dba34(param_2,0x12);
  if ((auVar23._8_8_ == 0) ||
     (uVar13 = FUN_007d41d8(auVar23._0_8_,auVar23._8_8_,uVar21,&local_100), (uVar13 & 1) == 0)) {
    if (*(char *)(param_1 + 0x338) != '\x01') goto LAB_00605c44;
    uVar19 = (long)uVar12 < *(long *)(param_1 + 0x330);
LAB_00605c48:
    puVar10 = local_78;
    local_78 = (uint *)0x0;
    if (puVar10 != (uint *)0x0) {
      FUN_0060b02c(puVar10);
      operator_delete(puVar10);
    }
  }
  else {
    if ((local_78 != (uint *)0x0) && (((byte)local_100 & 1) == 0)) {
      uVar12 = FUN_004022fc();
      if ((uVar12 & 1) == 0) {
        FUN_00623bb0(&DAT_001fcbd8,"../../video/rtp_video_stream_receiver2.cc",0xe72,"ssrc: ",
                     *(undefined4 *)(param_2 + 0xc),
                     "Invalid dependency descriptor: structure attached to non first packet of a frame."
                    );
      }
LAB_00605c44:
      uVar19 = 1;
      goto LAB_00605c48;
    }
    *(byte *)((long)param_3 + 0xa5) = (byte)local_100;
    *(byte *)((long)param_3 + 0xa6) = local_100._1_1_;
    if ((byte)param_3[0x12] == 1) {
      FUN_007dca64(param_3);
      *(byte *)(param_3 + 0x12) = 0;
    }
    if (param_3 == (ulong *)0x0) {
LAB_00605d10:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    FUN_007dc964(param_3);
    *(byte *)(param_3 + 0x12) = 1;
    *param_3 = uVar12;
    param_3[1] = CONCAT44(uStack_f4,uStack_f8);
    pppppppiVar1 = (int *******)&pppppppiStack_b8;
    if ((local_c0 & 1) != 0) {
      pppppppiVar1 = pppppppiStack_b8;
    }
    uVar13 = (local_c0 & 0x7ffffffffffffffe) << 1;
    uVar18 = local_c0 & 0x7ffffffffffffffe;
    while (uVar18 != 0) {
      local_168 = (char *)(uVar12 - (long)*(int *)pppppppiVar1);
      if ((param_3[8] & 1) == 0) {
        puVar17 = param_3 + 9;
        uVar18 = 5;
      }
      else {
        puVar17 = (ulong *)param_3[9];
        uVar18 = param_3[10];
      }
      uVar16 = param_3[8] >> 1;
      if (uVar16 == uVar18) {
        FUN_0060bc3c(param_3 + 8,&local_168);
      }
      else {
        if (puVar17 + uVar16 == (ulong *)0x0) goto LAB_00605d10;
        puVar17[uVar16] = (ulong)local_168;
        param_3[8] = param_3[8] + 2;
      }
      pppppppiVar1 = (int *******)((long)pppppppiVar1 + 4);
      uVar13 = uVar13 - 4;
      uVar18 = uVar13;
    }
    if (param_3 != &local_100) {
      pppppppuVar2 = &local_e8;
      if ((uStack_f0 & 1) != 0) {
        pppppppuVar2 = local_e8;
      }
      FUN_0060adc4(param_3 + 2,pppppppuVar2,(CONCAT44(uStack_ec,uStack_f0) << 1) >> 2);
    }
    puVar10 = local_78;
    if ((local_88 & 1) != 0) {
      *(short *)((long)param_3 + 0x9c) = (short)local_90;
      *(short *)((long)param_3 + 0x9e) = (short)((ulong)local_90 >> 0x20);
    }
    if (local_78 != (uint *)0x0) {
      if ((*(char *)(param_1 + 0x338) != '\x01') || (*(long *)(param_1 + 0x330) <= (long)uVar12)) {
        pvVar20 = *(void **)(param_1 + 0x328);
        local_78 = (uint *)0x0;
        *(uint **)(param_1 + 0x328) = puVar10;
        if (pvVar20 != (void *)0x0) {
          FUN_0060b02c(pvVar20);
          operator_delete(pvVar20);
        }
        *(ulong *)(param_1 + 0x330) = uVar12;
        *(undefined1 *)(param_1 + 0x338) = 1;
        uVar19 = 2;
        *(undefined4 *)(param_3 + 0x13) = 3;
        goto LAB_00605c48;
      }
      uVar18 = FUN_004022fc();
      uVar13 = local_140;
      if ((uVar18 & 1) == 0) {
        local_168 = "../../video/rtp_video_stream_receiver2.cc";
        local_160 = 0xf82;
        local_158 = &uStack_169;
        ppcStack_148 = &local_168;
        local_150 = "Arrived key frame with id ";
        puStack_128 = &local_140;
        local_130 = " and structure id ";
        local_118 = &local_130;
        local_120 = (ulong)*local_78;
        local_140 = uVar12;
        if ((*(byte *)(param_1 + 0x338) & 1) == 0) {
          ppcStack_138 = &local_150;
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                    );
        }
        pcVar3 = *ppcStack_138;
        ppcVar4 = ppcStack_138 + 1;
        ppcStack_138 = &local_150;
        FUN_00623bb0(&DAT_001fcbdd,*(undefined8 *)*ppcVar4,*(undefined4 *)(*ppcVar4 + 8),pcVar3,
                     uVar13," and structure id ",local_120,
                     " is older than the latest received key frame with id ",
                     *(undefined8 *)(param_1 + 0x330)," and structure id ",
                     **(undefined4 **)(param_1 + 0x328));
      }
      goto LAB_00605c44;
    }
    uVar19 = 2;
    *(undefined4 *)(param_3 + 0x13) = 4;
    local_78 = (uint *)0x0;
  }
  if ((local_a8 & 1) != 0) {
    operator_delete(local_a0);
  }
  if ((local_c0 & 1) != 0) {
    operator_delete(pppppppiStack_b8);
  }
  if ((uStack_f0 & 1) != 0) {
    operator_delete(local_e8);
  }
LAB_00605a3c:
  if (*(long *)(lVar8 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar19;
}


// ===== 00605d3c  FUN_00605d3c =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00605d3c(long *param_1,long *param_2,byte *param_3,undefined8 param_4,undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  byte bVar4;
  char cVar5;
  ushort uVar6;
  undefined2 uVar7;
  long lVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  undefined4 *puVar18;
  undefined1 extraout_w1;
  long *plVar19;
  int *******pppppppiVar20;
  char cVar21;
  undefined1 uVar22;
  void *pvVar23;
  long lVar24;
  void *pvVar25;
  ulong uVar26;
  long *plVar27;
  ulong uVar28;
  undefined8 *puVar29;
  uint uVar30;
  uint uVar31;
  undefined1 auVar32 [16];
  undefined8 *local_1b0;
  undefined8 *local_1a8;
  undefined8 *local_190;
  undefined8 *local_188;
  undefined8 local_170;
  undefined1 *puStack_168;
  undefined1 *local_160;
  void *local_158;
  void *local_150;
  char local_140;
  undefined8 local_130;
  void *local_128;
  void *local_120;
  int *******local_110;
  undefined1 uStack_108;
  undefined7 uStack_107;
  byte bStack_100;
  undefined6 uStack_ff;
  byte bStack_f9;
  byte bStack_f8;
  uint7 uStack_f7;
  void *local_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 local_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulong local_88;
  long local_78;
  
  lVar8 = tpidr_el0;
  local_78 = *(long *)(lVar8 + 0x28);
  uVar6 = *(ushort *)(param_3 + 4);
  uVar28 = (ulong)uVar6;
  if ((*(byte *)((long)param_1 + 0x55a) & 1) != 0) {
    uVar30 = (uint)uVar6 - (uint)*(ushort *)(param_1 + 0xab);
    iVar12 = (int)(short)uVar30;
    bVar10 = (uint)*(ushort *)(param_1 + 0xab) <= (uint)uVar6 && uVar30 != 0;
    if (uVar30 != 0x8000) {
      bVar10 = iVar12 != -1 && iVar12 + 1 < 0 == SCARRY4(iVar12,1);
    }
    uVar28 = (ulong)uVar30 & 0xffff;
    if (!bVar10) {
      uVar28 = (ulong)uVar30 & 0xffff | 0xffffffffffff0000;
    }
    uVar28 = uVar28 + param_1[0xaa];
  }
  *(ushort *)(param_1 + 0xab) = uVar6;
  param_1[0xaa] = uVar28;
  *(undefined1 *)((long)param_1 + 0x55a) = 1;
  puVar14 = (undefined8 *)operator_new(0x820);
  FUN_0098ffac(puVar14,param_3,uVar28,param_4);
  uVar11 = *(undefined4 *)(param_3 + 0xc);
  FUN_007da710(&local_128,param_3);
  uVar3 = *(undefined4 *)(param_3 + 8);
  uVar15 = (**(code **)(*(long *)param_1[10] + 0x10))();
  FUN_00659518(&local_110,uVar11,&local_128,uVar3,uVar15);
  plVar16 = (long *)param_1[0xad];
  if ((long *)param_1[0xad] == (long *)0x0) {
    plVar19 = param_1 + 0xad;
    plVar27 = param_1 + 0xad;
  }
  else {
    do {
      while (plVar19 = plVar16, (long)uVar28 < plVar19[4]) {
        plVar16 = (long *)*plVar19;
        plVar27 = plVar19;
        if ((long *)*plVar19 == (long *)0x0) goto LAB_00605e78;
      }
      if (uVar28 == plVar19[4]) {
        pvVar25 = (void *)CONCAT71(uStack_107,uStack_108);
        plVar16 = plVar19;
        goto joined_r0x00605f88;
      }
      plVar16 = (long *)plVar19[1];
    } while ((long *)plVar19[1] != (long *)0x0);
    plVar27 = plVar19 + 1;
  }
LAB_00605e78:
  plVar16 = (long *)operator_new(0x90);
  if ((plVar16 == (long *)0x0) || (*plVar16 = 0, plVar16 == (long *)0xffffffffffffffe0)) {
LAB_00606670:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  plVar16[4] = uVar28;
  plVar16[7] = CONCAT17(bStack_f9,CONCAT61(uStack_ff,bStack_100));
  plVar16[6] = CONCAT71(uStack_107,uStack_108);
  *(int *)(plVar16 + 5) = (int)local_110;
  plVar16[8] = CONCAT71(uStack_f7,bStack_f8);
  plVar16[10] = lStack_e8;
  plVar16[9] = (long)local_f0;
  plVar16[0xc] = lStack_d8;
  plVar16[0xb] = lStack_e0;
  uStack_108 = 0;
  uStack_107 = 0;
  bStack_100 = 0;
  uStack_ff = 0;
  bStack_f9 = 0;
  bStack_f8 = 0;
  uStack_f7 = 0;
  plVar16[0xe] = lStack_c8;
  plVar16[0xd] = local_d0;
  *(undefined1 *)(plVar16 + 0x11) = (undefined1)local_b0;
  plVar16[0x10] = lStack_b8;
  plVar16[0xf] = lStack_c0;
  *plVar16 = 0;
  plVar16[1] = 0;
  plVar16[2] = (long)plVar19;
  *plVar27 = (long)plVar16;
  plVar19 = plVar16;
  if (*(long *)param_1[0xac] != 0) {
    param_1[0xac] = *(long *)param_1[0xac];
    plVar19 = (long *)*plVar27;
  }
  FUN_005d5b94(param_1[0xad],plVar19);
  param_1[0xae] = param_1[0xae] + 1;
  pvVar25 = (void *)CONCAT71(uStack_107,uStack_108);
joined_r0x00605f88:
  if (pvVar25 != (void *)0x0) {
    pvVar23 = (void *)CONCAT17(bStack_f9,CONCAT61(uStack_ff,bStack_100));
    uVar26 = (ulong)((long)pvVar23 + (-4 - ((long)pvVar23 << 0x3e))) >> 2;
    uVar28 = (ulong)(((long)pvVar25 - (long)pvVar23 << 0x3e) - ((long)pvVar25 - (long)pvVar23)) >> 2
    ;
    if (uVar26 <= uVar28) {
      uVar28 = uVar26;
    }
    if ((1 < uVar28) &&
       (iVar12 = (int)CONCAT61(uStack_ff,bStack_100), (((int)pvVar25 - iVar12 | -iVar12) & 3U) == 0)
       ) {
      uVar28 = uVar28 & 0x3ffffffffffffffe;
      pvVar23 = (void *)((long)pvVar23 + uVar28 * -4);
      do {
        uVar28 = uVar28 - 2;
      } while (uVar28 != 0);
    }
    do {
      if (pvVar23 == pvVar25) {
        bStack_100 = (byte)pvVar25;
        uStack_ff = (undefined6)((ulong)pvVar25 >> 8);
        bStack_f9 = (byte)((ulong)pvVar25 >> 0x38);
        operator_delete(pvVar25);
        goto joined_r0x00606020;
      }
      pvVar23 = (void *)((long)pvVar23 + -4);
    } while (pvVar23 != (void *)0x0);
    goto LAB_00605ff8;
  }
joined_r0x00606020:
  if (local_128 != (void *)0x0) {
    uVar26 = (ulong)((long)local_120 + (-4 - ((long)local_120 << 0x3e))) >> 2;
    uVar28 = (ulong)(((long)local_128 - (long)local_120 << 0x3e) -
                    ((long)local_128 - (long)local_120)) >> 2;
    if (uVar26 <= uVar28) {
      uVar28 = uVar26;
    }
    if ((1 < uVar28) && ((((int)local_128 - (int)local_120 | -(int)local_120) & 3U) == 0)) {
      uVar28 = uVar28 & 0x3ffffffffffffffe;
      local_120 = (void *)((long)local_120 + uVar28 * -4);
      do {
        uVar28 = uVar28 - 2;
      } while (uVar28 != 0);
    }
    do {
      if (local_120 == local_128) {
        operator_delete(local_128);
        goto LAB_00606038;
      }
      local_120 = (void *)((long)local_120 + -4);
    } while (local_120 != (void *)0x0);
    goto LAB_00605ff8;
  }
LAB_00606038:
  lVar24 = plVar16[7] - plVar16[6];
  lVar17 = 0;
  if (lVar24 != 0) {
    lVar17 = plVar16[6];
  }
  uVar11 = FUN_0084ab88((int)plVar16[5],lVar17,lVar24 >> 2);
  lVar17 = plVar16[9];
  puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
  local_160 = &DAT_aaaaaaaaaaaaaaaa;
  local_170 = 0xaaaaaaaaaaaaaa00;
  local_158 = (void *)0xaaaaaaaaaaaaaa00;
  auVar32 = FUN_007dba34(param_3,6);
  if (auVar32._8_8_ != 0) {
    local_170 = 0;
    puStack_168 = (undefined1 *)0x0;
    local_160 = (undefined1 *)0x0;
    local_158 = (void *)CONCAT71(local_158._1_7_,1);
    uVar28 = FUN_007d8db0(auVar32._0_8_,auVar32._8_8_,&local_170);
    if (((uVar28 & 1) == 0) && (((ulong)local_158 & 1) != 0)) {
      local_158 = (void *)((ulong)local_158 & 0xffffffffffffff00);
    }
  }
  FUN_0084ab98(&local_110,param_1 + 0x90,uVar11,(int)lVar17,90000,&local_170);
  *(ulong *)((long)plVar16 + 0x71) = CONCAT17(bStack_f8,CONCAT16(bStack_f9,uStack_ff));
  *(ulong *)((long)plVar16 + 0x69) = CONCAT17(bStack_100,uStack_107);
  plVar16[0xd] = CONCAT71(uStack_107,uStack_108);
  plVar16[0xc] = (long)local_110;
  if ((char)plVar16[0xf] == '\x01') {
    auVar32 = FUN_0084b284(param_1 + 0xa6,plVar16[0xd],plVar16[0xe]);
    lVar17 = FUN_0084b2b4(auVar32._0_8_,auVar32._8_8_ & 0xff);
    plVar16[0x10] = lVar17;
    *(undefined1 *)(plVar16 + 0x11) = extraout_w1;
  }
  bVar4 = *param_3;
  *(undefined4 *)(puVar14 + 0x1a) = 0;
  *(undefined1 *)((long)puVar14 + 0xd4) = 0;
  *(undefined1 *)((long)puVar14 + 0x104) = 0xff;
  *(byte *)((long)puVar14 + 0xd6) = *(byte *)((long)puVar14 + 0xd6) | bVar4;
  auVar32 = FUN_007dba34(param_3,7);
  if (auVar32._8_8_ != 0) {
    FUN_007d90e0(auVar32._0_8_,auVar32._8_8_,puVar14 + 0x1a);
  }
  auVar32 = FUN_007dba34(param_3,0xb);
  if (auVar32._8_8_ != 0) {
    FUN_007d91f0(auVar32._0_8_,auVar32._8_8_,(undefined1 *)((long)puVar14 + 0xd4));
  }
  auVar32 = FUN_007dba34(param_3,0xd);
  if (auVar32._8_8_ != 0) {
    FUN_007d9264(auVar32._0_8_,auVar32._8_8_,puVar14 + 0x1f);
  }
  if (((char)param_1[0x2e] == '\x01') && ((char)param_1[0x37] == '\x01')) {
    if (*(char *)(puVar14 + 0x1e) == '\x01') {
      *(undefined1 *)(puVar14 + 0x1e) = 0;
    }
    uVar15 = _UNK_001f4cc8;
    pppppppiVar20 = _DAT_001f4cc0;
    if (puVar14 == (undefined8 *)0xffffffffffffff20) goto LAB_00606670;
    iVar12 = *(int *)((long)param_1 + 0x1b4);
    iVar13 = *(int *)((long)param_1 + 0x16c);
    *(undefined1 *)(puVar14 + 0x1e) = 1;
    puVar14[0x1d] = uVar15;
    puVar14[0x1c] = pppppppiVar20;
    uVar28 = FUN_0065a478(puVar14 + 0x1c,(long)iVar12 * 1000,(long)iVar13 * 1000);
    if (((uVar28 & 1) == 0) && (*(char *)(puVar14 + 0x1e) == '\x01')) {
      *(undefined1 *)(puVar14 + 0x1e) = 0;
    }
  }
  else {
    uStack_108 = 0xaa;
    uStack_107 = 0xaaaaaaaaaaaaaa;
    uStack_ff = 0xaaaaaaaaaaaa;
    bStack_f9 = 0xaa;
    local_110 = (int *******)0xaaaaaaaaaaaaaa00;
    bStack_100 = 0;
    auVar32 = FUN_007dba34(param_3,10);
    if (auVar32._8_8_ != 0) {
      bStack_100 = 1;
      uStack_108 = (undefined1)_UNK_001f4cc8;
      uStack_107 = (undefined7)((ulong)_UNK_001f4cc8 >> 8);
      local_110 = _DAT_001f4cc0;
      uVar28 = FUN_007d9154(auVar32._0_8_,auVar32._8_8_,&local_110);
      if (((uVar28 & 1) == 0) && ((bStack_100 & 1) != 0)) {
        bStack_100 = 0;
      }
    }
    puVar14[0x1d] = CONCAT71(uStack_107,uStack_108);
    puVar14[0x1c] = local_110;
    *(byte *)(puVar14 + 0x1e) = bStack_100;
  }
  puVar29 = puVar14 + 6;
  if ((param_3[0x80] & 1) == 0) {
    FUN_00606ca4(param_1,param_3,*(int *)(puVar14 + 0x19) == 3);
  }
  iVar12 = FUN_006056fc(param_1,param_3,puVar29);
  if (iVar12 == 0) {
LAB_00606a6c:
    if (puVar14 == (undefined8 *)0x0) goto LAB_00606a8c;
    FUN_007dd190(puVar29);
    FUN_007b5554(puVar14 + 3);
  }
  else {
    if (iVar12 == 1) {
      lVar17 = (**(code **)(*(long *)param_1[10] + 0x10))();
      if (((lVar17 == 0x7fffffffffffffff) || (lVar24 = param_1[0x68], lVar24 == -0x8000000000000000)
          ) || ((lVar17 != -0x8000000000000000 &&
                ((lVar24 != 0x7fffffffffffffff && (1000000 < lVar17 - lVar24)))))) {
        param_1[0x68] = lVar17;
        uVar28 = FUN_004022fc();
        if ((uVar28 & 1) == 0) {
          local_110 = (int *******)0x1e20b3;
          uStack_108 = 0x52;
          uStack_107 = 0x13;
          bStack_100 = (byte)&local_170;
          uStack_ff = (undefined6)((ulong)&local_170 >> 8);
          bStack_f9 = (byte)((ulong)&local_170 >> 0x38);
          FUN_00623bb0(&DAT_001fcbe7,"../../video/rtp_video_stream_receiver2.cc",0x1352,
                       "Failed to parse dependency descriptor for ","ssrc: ",
                       *(undefined4 *)(param_3 + 0xc),", timestamp: ",*(undefined4 *)(param_3 + 8));
        }
      }
      if ((param_1[0x65] == 0) && (param_1[0xb2] < lVar17)) {
        (**(code **)(*param_1 + 0x28))(param_1);
        if (lVar17 != 0x7fffffffffffffff) {
          lVar17 = lVar17 + 1000000;
        }
        param_1[0xb2] = lVar17;
      }
      goto LAB_00606a6c;
    }
    if (*(char *)((long)puVar14 + 0xd6) == '\x01') {
      local_d0 = 0xaaaaaa00aaaaaaaa;
      uStack_108 = (undefined1)_UNK_001fcbf8;
      uStack_107 = (undefined7)((ulong)_UNK_001fcbf8 >> 8);
      bStack_f8 = (byte)_UNK_001fcc08;
      uStack_f7 = (uint7)((ulong)_UNK_001fcc08 >> 8);
      bStack_100 = (byte)_DAT_001fcc00;
      uStack_ff = (undefined6)((ulong)_DAT_001fcc00 >> 8);
      bStack_f9 = (byte)((ulong)_DAT_001fcc00 >> 0x38);
      local_110 = (int *******)(_DAT_001fcbf0 & 0xffffffffffffff00);
      lStack_e8 = _UNK_001fcc18;
      local_f0 = _DAT_001fcc10;
      lStack_d8 = _UNK_001fcc28;
      lStack_e0 = _DAT_001fcc20;
      auVar32 = FUN_007dba34(param_3,0x13);
      if (auVar32._8_8_ == 0) {
        uVar28 = local_d0 >> 0x20 & 0xff;
      }
      else {
        FUN_00659ab8(&local_110);
        local_d0._0_5_ = CONCAT14(1,(uint)local_d0);
        uVar26 = FUN_007d939c(auVar32._0_8_,auVar32._8_8_,&local_110);
        uVar28 = (ulong)local_d0._4_1_;
        if (((uVar26 & 1) == 0) && (local_d0._4_1_ != 0)) {
          uVar28 = 0;
          local_d0._0_5_ = (uint5)(uint)local_d0;
        }
      }
      bVar4 = *(byte *)((long)puVar14 + 0x14c);
      if ((uint)bVar4 == (uint)uVar28) {
        if (bVar4 != 0) {
          FUN_00659b1c(puVar14 + 0x21,&local_110);
          uVar28 = (ulong)*(byte *)((long)puVar14 + 0x14c);
        }
        if ((uVar28 & 1) != 0) {
          cVar21 = '\x01';
          goto LAB_00606458;
        }
LAB_0060642c:
        if (*(int *)(puVar14 + 0x19) == 3) {
          cVar21 = '\0';
          goto LAB_00606458;
        }
        if ((char)param_1[0x8f] == '\x01') {
          FUN_0060a64c(puVar14 + 0x21,(long)param_1 + 0x434);
        }
      }
      else {
        if (bVar4 != 0) {
          *(undefined1 *)((long)puVar14 + 0x14c) = 0;
          goto LAB_0060642c;
        }
        if (puVar14 == (undefined8 *)0xfffffffffffffef8) goto LAB_00606670;
        FUN_00659afc(puVar14 + 0x21,&local_110);
        cVar21 = '\x01';
        *(undefined1 *)((long)puVar14 + 0x14c) = 1;
LAB_00606458:
        cVar5 = (char)param_1[0x8f];
        if (cVar5 == cVar21) {
          if (cVar5 != '\0') {
            FUN_00659b1c((long)param_1 + 0x434,puVar14 + 0x21);
          }
        }
        else if (cVar5 == '\0') {
          FUN_00659adc((long)param_1 + 0x434,puVar14 + 0x21);
          *(undefined1 *)(param_1 + 0x8f) = 1;
        }
        else {
          *(undefined1 *)(param_1 + 0x8f) = 0;
        }
      }
      bVar4 = *(byte *)(puVar14 + 0x18);
      if (bVar4 == 1) {
        uVar30 = *(uint *)(puVar14 + 7);
        uVar31 = 1;
        local_130 = CONCAT44(0xaaaaaa01,uVar30);
        if (4 < (int)uVar30) {
          uVar28 = FUN_004022fc();
          if ((uVar28 & 1) == 0) {
            FUN_00623bb0(&DAT_001f1906,"../../video/rtp_video_stream_receiver2.cc",0x1452,
                         "Invalid spatial id: ",uVar30," in generic descriptor.");
            uVar22 = 0;
          }
          else {
            uVar22 = 0;
          }
          goto LAB_006064fc;
        }
      }
      else {
        uVar30 = 0;
        uVar22 = 1;
        local_130 = 0xaaaaaaaa00000000;
LAB_006064fc:
        uVar31 = bVar4 ^ 1;
        local_130._0_5_ = CONCAT14(uVar22,(undefined4)local_130);
      }
      lStack_c8 = _UNK_001fcc80;
      local_d0 = _DAT_001fcc78;
      lStack_b8 = _UNK_001fcc90;
      lStack_c0 = _DAT_001fcc88;
      uStack_a8 = _UNK_001fcca0;
      local_b0 = _DAT_001fcc98;
      uStack_98 = _UNK_001fccb0;
      local_a0 = _DAT_001fcca8;
      local_90 = _DAT_001fccb8;
      local_88 = _UNK_001fccc0 & 0xffffffffffffff00;
      uStack_108 = (undefined1)_UNK_001fcc40;
      uStack_107 = (undefined7)((ulong)_UNK_001fcc40 >> 8);
      bStack_f8 = (byte)_UNK_001fcc50;
      uStack_f7 = (uint7)((ulong)_UNK_001fcc50 >> 8);
      bStack_100 = (byte)_DAT_001fcc48;
      uStack_ff = (undefined6)((ulong)_DAT_001fcc48 >> 8);
      bStack_f9 = (byte)((ulong)_DAT_001fcc48 >> 0x38);
      local_110 = (int *******)(_DAT_001fcc38 & 0xffffffffffffff00);
      lStack_e8 = _UNK_001fcc60;
      local_f0 = _DAT_001fcc58;
      lStack_d8 = _UNK_001fcc70;
      lStack_e0 = _DAT_001fcc68;
      auVar32 = FUN_007dba34(param_3,0x15);
      if (auVar32._8_8_ == 0) {
        uVar28 = local_88 & 0xff;
LAB_00606588:
        if (((uint)uVar28 & uVar31) == 1) {
          if ((int)uVar30 < 0) {
            puVar18 = (undefined4 *)FUN_006071a4(&local_130);
                    /* WARNING: Subroutine does not return */
            FUN_0061fd88("../../video/rtp_video_stream_receiver2.cc",0x295,"*spatial_id >= 0",
                         &DAT_001fbedc,*puVar18,0);
          }
          if (4 < uVar30) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/array:277: libc++ Hardening assertion __n < _Size failed: out-of-bounds access in std::array<T, N>\n"
                      );
          }
          FUN_0098dfdc(&local_170,(long)param_1 + (ulong)uVar30 * 8 + 0x59c,&local_110);
          FUN_0060a6c8(puVar14 + 0xfd,&local_170);
          if ((local_140 == '\x01') && (local_158 != (void *)0x0)) {
            uVar26 = (ulong)((long)local_150 + (-8 - ((long)local_150 << 0x3d))) >> 3;
            uVar28 = (ulong)(((long)local_158 - (long)local_150 << 0x3d) -
                            ((long)local_158 - (long)local_150)) >> 3;
            if (uVar26 <= uVar28) {
              uVar28 = uVar26;
            }
            pvVar25 = local_150;
            if ((1 < uVar28) && ((((int)local_158 - (int)local_150 | -(int)local_150) & 7U) == 0)) {
              uVar28 = uVar28 & 0x1ffffffffffffffe;
              pvVar25 = (void *)((long)local_150 + uVar28 * -8);
              do {
                uVar28 = uVar28 - 2;
              } while (uVar28 != 0);
            }
            do {
              if (pvVar25 == local_158) {
                local_150 = local_158;
                operator_delete(local_158);
                goto LAB_00606694;
              }
              pvVar25 = (void *)((long)pvVar25 + -8);
            } while (pvVar25 != (void *)0x0);
LAB_00605ff8:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
LAB_00606694:
          uVar28 = local_88 & 0xff;
        }
        if ((uVar28 & 1) == 0) goto LAB_006066b0;
      }
      else {
        local_90 = 0;
        local_88 = CONCAT71(local_88._1_7_,1);
        uStack_108 = 0;
        uStack_107 = 0;
        local_110 = (int *******)0x0;
        bStack_f8 = 0;
        uStack_f7 = 0;
        bStack_100 = 0;
        uStack_ff = 0;
        bStack_f9 = 0;
        lStack_e8 = 0;
        local_f0 = (void *)0x0;
        lStack_d8 = 0;
        lStack_e0 = 0;
        lStack_c8 = 0;
        local_d0 = 0;
        lStack_b8 = 0;
        lStack_c0 = 0;
        uStack_a8 = 0;
        local_b0 = 0;
        uStack_98 = 0;
        local_a0 = 0;
        uVar26 = FUN_007cce9c(auVar32._0_8_,auVar32._8_8_,&local_110);
        uVar28 = local_88 & 0xff;
        if (((uVar26 & 1) != 0) || ((local_88 & 1) == 0)) goto LAB_00606588;
      }
      if ((bStack_f8 & 1) != 0) {
        operator_delete(local_f0);
      }
    }
LAB_006066b0:
    local_110 = (int *******)CONCAT44(local_110._4_4_,0xaa00aa00);
    auVar32 = FUN_007dba34(param_3,0x14);
    if (auVar32._8_8_ != 0) {
      local_110 = (int *******)CONCAT53(local_110._3_5_,0x10000);
      uVar28 = FUN_007d9984(auVar32._0_8_,auVar32._8_8_,&local_110);
      if (((uVar28 & 1) == 0) && (((ulong)local_110 & 0x10000) != 0)) {
        local_110._0_3_ = (uint3)(ushort)local_110;
      }
    }
    lVar17 = param_1[0x4e];
    *(short *)(puVar14 + 0x2a) = (short)local_110;
    *(char *)((long)puVar14 + 0x152) = (char)((ulong)local_110 >> 0x10);
    if (lVar17 != 0) {
      if (param_3[0x80] == 1) {
        uVar28 = FUN_00417e08();
        if ((uVar28 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../video/rtp_video_stream_receiver2.cc",0x1509,
                       "LossNotificationController does not support reordering.");
        }
      }
      else if (iVar12 == 3) {
        uVar28 = FUN_004022fc();
        if ((uVar28 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../video/rtp_video_stream_receiver2.cc",0x1522,
                       "LossNotificationController requires generic frame descriptor, but it is missing."
                      );
        }
      }
      else {
        if (*(char *)((long)puVar14 + 0xd5) == '\x01') {
          bStack_100 = 0;
          uStack_ff = 0;
          bStack_f9 = 0;
          bStack_f8 = 0;
          uStack_f7 = 0;
          uStack_108 = 0xaa;
          uStack_107 = 0xaaaaaaaaaaaaaa;
          local_110 = (int *******)CONCAT71(0xaaaaaaaaaaaaaa,*(int *)(puVar14 + 0x19) == 3);
          if ((*(byte *)(puVar14 + 0x18) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                      );
          }
          uVar7 = *(undefined2 *)(param_3 + 4);
          pppppppiVar20 = (int *******)&local_110;
          uVar28 = puVar14[0xe];
          puVar1 = puVar14 + 0xf;
          if ((uVar28 & 1) != 0) {
            puVar1 = (undefined8 *)puVar14[0xf];
          }
          bStack_f8 = (byte)(uVar28 >> 1);
          uStack_f7 = (uint7)(uVar28 >> 9);
          puVar2 = (undefined8 *)0x0;
          if (uVar28 >> 1 != 0) {
            puVar2 = puVar1;
          }
          uStack_108 = (undefined1)puVar14[6];
          uStack_107 = (undefined7)((ulong)puVar14[6] >> 8);
          bStack_100 = (byte)puVar2;
          uStack_ff = (undefined6)((ulong)puVar2 >> 8);
          bStack_f9 = (byte)((ulong)puVar2 >> 0x38);
        }
        else {
          uVar7 = *(undefined2 *)(param_3 + 4);
          pppppppiVar20 = (int *******)0x0;
        }
        FUN_009354fc(lVar17,uVar7,pppppppiVar20);
      }
    }
    lVar17 = param_2[2];
    *(undefined4 *)((long)puVar14 + 0x14) = param_5;
    if (lVar17 == 0) {
      plVar16 = (long *)param_1[0x7c];
      if (plVar16 != (long *)0x0) {
        do {
          while (*(byte *)((long)puVar14 + 2) < *(byte *)((long)plVar16 + 0x1c)) {
            plVar16 = (long *)*plVar16;
            if (plVar16 == (long *)0x0) goto LAB_00606a58;
          }
          if (*(byte *)((long)puVar14 + 2) == *(byte *)((long)plVar16 + 0x1c)) {
            if (plVar16 != param_1 + 0x7c) {
              uVar28 = (ulong)*(uint *)(plVar16 + 4) | 0x100000000;
              goto LAB_00606a5c;
            }
            break;
          }
          plVar16 = (long *)plVar16[1];
        } while (plVar16 != (long *)0x0);
      }
LAB_00606a58:
      uVar28 = 0;
LAB_00606a5c:
      FUN_006071d4(param_1,*(undefined2 *)(puVar14 + 1),uVar28);
      FUN_006041a4(param_1 + 0x42);
      goto LAB_00606a6c;
    }
    if (*(int *)((long)puVar14 + 0xdc) == 4) {
      if ((ushort)*(byte *)((long)puVar14 + 2) != *(ushort *)(param_1 + 0x7e)) {
        *(ushort *)(param_1 + 0x7e) = (ushort)*(byte *)((long)puVar14 + 2);
        FUN_00607538(param_1);
        if (*(int *)((long)puVar14 + 0xdc) != 4) goto LAB_006068f8;
      }
      (**(code **)(*(long *)param_1[9] + 0x10))
                (&local_110,(long *)param_1[9],"WebRTC-Video-H26xPacketBuffer",0x1d);
      uVar28 = CONCAT71(uStack_107,uStack_108);
      if (-1 < (char)bStack_f9) {
        uVar28 = (ulong)bStack_f9;
      }
      if (uVar28 < 7) {
        bVar10 = false;
      }
      else {
        pppppppiVar20 = local_110;
        if (-1 < (char)bStack_f9) {
          pppppppiVar20 = (int *******)&local_110;
        }
        bVar10 = *(int *)pppppppiVar20 == 0x62616e45 &&
                 *(int *)((long)pppppppiVar20 + 3) == 0x64656c62;
      }
      if ((char)bStack_f9 < '\0') {
        operator_delete(local_110);
      }
      if (bVar10) goto LAB_006068f8;
      lVar17 = *param_2;
      uStack_108 = 0xaa;
      uStack_107 = 0xaaaaaaaaaaaaaa;
      local_110 = (int *******)&DAT_aaaaaaaaaaaaaaaa;
      bStack_f8 = 0xaa;
      uStack_f7 = 0xaaaaaaaaaaaaaa;
      bStack_100 = 0xaa;
      uStack_ff = 0xaaaaaaaaaaaa;
      bStack_f9 = 0xaa;
      if (lVar17 != 0) {
        lVar17 = *(long *)(lVar17 + 0x10) + param_2[1];
      }
      lVar24 = 0;
      if (param_2[2] != 0) {
        lVar24 = lVar17;
      }
      FUN_0093454c(&local_110,param_1 + 0x6f,lVar24,param_2[2],puVar29);
      if ((int)local_110 != 0) {
        if ((int)local_110 != 1) {
          if ((int)local_110 != 2) goto LAB_00606c3c;
          *(undefined1 *)(param_1 + 0x48) = 1;
          FUN_006041a4(param_1 + 0x42);
        }
        FUN_007b5554((ulong)&local_110 | 8);
        goto LAB_00606a6c;
      }
      FUN_0060a8bc(puVar14 + 3,(ulong)&local_110 | 8);
      uVar9 = CONCAT71(uStack_f7,bStack_f8);
      uVar15 = CONCAT17(bStack_f9,CONCAT61(uStack_ff,bStack_100));
      bStack_100 = 0;
      uStack_ff = 0;
      bStack_f9 = 0;
      bStack_f8 = 0;
      uStack_f7 = 0;
      puVar14[5] = uVar9;
      puVar14[4] = uVar15;
LAB_00606c3c:
      FUN_007b5554((ulong)&local_110 | 8);
    }
    else {
LAB_006068f8:
      lVar17 = *param_2;
      pvVar25 = (void *)puVar14[3];
      *param_2 = 0;
      puVar14[3] = lVar17;
      if ((pvVar25 != (void *)0x0) &&
         (iVar13 = FUN_00d0f7a0(0xffffffff,(long)pvVar25 + 0x18), iVar13 == 1)) {
        pvVar23 = *(void **)((long)pvVar25 + 0x10);
        *(undefined8 *)((long)pvVar25 + 0x10) = 0;
        if (pvVar23 != (void *)0x0) {
          operator_delete__(pvVar23);
        }
        operator_delete(pvVar25);
      }
      lVar24 = param_2[2];
      lVar17 = param_2[1];
      param_2[1] = 0;
      param_2[2] = 0;
      puVar14[5] = lVar24;
      puVar14[4] = lVar17;
    }
    FUN_006041a4(param_1 + 0x42);
    FUN_00951e5c(param_1 + 0x5d,*(undefined4 *)(puVar14 + 2));
    lVar17 = param_1[0x5c];
    if (lVar17 == 0) {
LAB_00606b88:
      FUN_00990228(&local_1b0,param_1 + 0x4f,puVar14);
      FUN_006079d4(param_1,&local_1b0);
      puVar29 = local_1b0;
      puVar14 = local_1b0;
      if (local_1b0 == (undefined8 *)0x0) goto LAB_00606a8c;
      while (puVar29 != local_1a8) {
        local_1a8 = local_1a8 + -1;
        if (local_1a8 == (undefined8 *)0x0) goto LAB_00605ff8;
        pvVar25 = (void *)*local_1a8;
        *local_1a8 = 0;
        if (pvVar25 != (void *)0x0) {
          local_1b0 = puVar14;
          FUN_007dd190((long)pvVar25 + 0x30);
          FUN_007b5554((long)pvVar25 + 0x18);
          operator_delete(pvVar25);
          puVar14 = local_1b0;
        }
      }
      local_1a8 = puVar29;
    }
    else {
      uVar28 = (ulong)*(uint *)((long)puVar14 + 0xdc) | 0x100000000;
      if (uVar28 != 0x100000005) {
        if (uVar28 == 0x100000004) {
          (**(code **)(*(long *)param_1[9] + 0x10))
                    (&local_110,(long *)param_1[9],"WebRTC-Video-H26xPacketBuffer",0x1d);
          uVar28 = CONCAT71(uStack_107,uStack_108);
          if (-1 < (char)bStack_f9) {
            uVar28 = (ulong)bStack_f9;
          }
          if (uVar28 < 7) {
            bVar10 = false;
          }
          else {
            pppppppiVar20 = local_110;
            if (-1 < (char)bStack_f9) {
              pppppppiVar20 = (int *******)&local_110;
            }
            bVar10 = *(int *)pppppppiVar20 == 0x62616e45 &&
                     *(int *)((long)pppppppiVar20 + 3) == 0x64656c62;
          }
          if ((char)bStack_f9 < '\0') {
            operator_delete(local_110);
          }
          if (bVar10) {
            lVar17 = param_1[0x5c];
            goto LAB_00606b14;
          }
        }
        goto LAB_00606b88;
      }
LAB_00606b14:
      FUN_0098e360(&local_190,lVar17,puVar14);
      FUN_006079d4(param_1,&local_190);
      puVar1 = local_190;
      puVar14 = local_190;
      puVar29 = local_188;
      if (local_190 == (undefined8 *)0x0) goto LAB_00606a8c;
      while (puVar1 != puVar29) {
        puVar29 = puVar29 + -1;
        if (puVar29 == (undefined8 *)0x0) goto LAB_00605ff8;
        pvVar25 = (void *)*puVar29;
        *puVar29 = 0;
        if (pvVar25 != (void *)0x0) {
          local_190 = puVar14;
          FUN_007dd190((long)pvVar25 + 0x30);
          FUN_007b5554((long)pvVar25 + 0x18);
          operator_delete(pvVar25);
          puVar14 = local_190;
        }
      }
      local_188 = puVar1;
    }
  }
  operator_delete(puVar14);
LAB_00606a8c:
  if (*(long *)(lVar8 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar12 == 0);
  }
  return;
}


// ===== 00606ca4  FUN_00606ca4 =====

void FUN_00606ca4(long param_1,long param_2,ulong param_3)

{
  undefined8 ***pppuVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  void *local_80;
  undefined8 uStack_78;
  long local_70;
  undefined8 **local_68;
  ulong uStack_60;
  ulong local_58;
  undefined4 local_38;
  undefined4 local_34;
  
  uVar2 = (**(code **)(**(long **)(param_1 + 0x50) + 0x10))();
  if ((param_3 & 1) == 0) {
    if ((*(char *)(param_1 + 0x400) == '\x01') &&
       (iVar4 = *(int *)(param_2 + 8), *(int *)(param_1 + 0x3fc) == iVar4)) goto LAB_00606d0c;
  }
  else {
    iVar4 = *(int *)(param_2 + 8);
LAB_00606d0c:
    *(int *)(param_1 + 0x3fc) = iVar4;
    *(undefined1 *)(param_1 + 0x400) = 1;
    if (*(char *)(param_1 + 0x420) == '\x01') {
      *(ulong *)(param_1 + 0x418) = uVar2;
    }
    else {
      if ((ulong *)(param_1 + 0x418) == (ulong *)0x0) goto LAB_00607190;
      *(ulong *)(param_1 + 0x418) = uVar2;
      *(undefined1 *)(param_1 + 0x420) = 1;
    }
  }
  if (*(char *)(param_1 + 0x410) == '\x01') {
    *(ulong *)(param_1 + 0x408) = uVar2;
  }
  else {
    if ((ulong *)(param_1 + 0x408) == (ulong *)0x0) {
LAB_00607190:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *(ulong *)(param_1 + 0x408) = uVar2;
    *(undefined1 *)(param_1 + 0x410) = 1;
  }
  uVar5 = uVar2 / 1000;
  *(undefined4 *)(param_1 + 0x3f4) = *(undefined4 *)(param_2 + 8);
  uVar3 = uVar5;
  if (499 < uVar2 % 1000) {
    uVar3 = uVar5 + 1;
  }
  if ((uVar2 & 0x8000000000000000) != 0) {
    uVar3 = -(-uVar2 / 1000) - (ulong)(500 < -uVar2 % 1000);
  }
  *(undefined1 *)(param_1 + 0x3f8) = 1;
  if (10000 < (long)(uVar3 - *(long *)(param_1 + 0x1e8))) {
    local_80 = (void *)0x0;
    uStack_78 = 0;
    local_70 = 0;
    FUN_00547cac(&local_80,"Packet received on SSRC: ",0x19);
    local_68 = (undefined8 ***)0x0;
    uStack_60 = 0;
    local_58 = 0;
    FUN_005fa03c(&local_68,0x16,*(undefined4 *)(param_2 + 0xc));
    uVar3 = uStack_60;
    pppuVar1 = (undefined8 ***)local_68;
    if (-1 < (long)local_58) {
      uVar3 = local_58 >> 0x38;
      pppuVar1 = &local_68;
    }
    FUN_00547cac(&local_80,pppuVar1,uVar3);
    if ((long)local_58 < 0) {
      operator_delete(local_68);
    }
    FUN_00547cac(&local_80," with payload type: ",0x14);
    local_68 = (undefined8 ***)0x0;
    uStack_60 = 0;
    local_58 = 0;
    FUN_005f55c4(&local_68,0x16,*(undefined1 *)(param_2 + 1));
    uVar3 = uStack_60;
    pppuVar1 = (undefined8 ***)local_68;
    if (-1 < (long)local_58) {
      uVar3 = local_58 >> 0x38;
      pppuVar1 = &local_68;
    }
    FUN_00547cac(&local_80,pppuVar1,uVar3);
    if ((long)local_58 < 0) {
      operator_delete(local_68);
    }
    FUN_00547cac(&local_80,", timestamp: ",0xd);
    local_68 = (undefined8 ***)0x0;
    uStack_60 = 0;
    local_58 = 0;
    FUN_005fa03c(&local_68,0x16,*(undefined4 *)(param_2 + 8));
    uVar3 = uStack_60;
    pppuVar1 = (undefined8 ***)local_68;
    if (-1 < (long)local_58) {
      uVar3 = local_58 >> 0x38;
      pppuVar1 = &local_68;
    }
    FUN_00547cac(&local_80,pppuVar1,uVar3);
    if ((long)local_58 < 0) {
      operator_delete(local_68);
    }
    FUN_00547cac(&local_80,", sequence number: ",0x13);
    local_68 = (undefined8 ***)0x0;
    uStack_60 = 0;
    local_58 = 0;
    FUN_005f55c4(&local_68,0x16,*(undefined2 *)(param_2 + 4));
    uVar3 = uStack_60;
    pppuVar1 = (undefined8 ***)local_68;
    if (-1 < (long)local_58) {
      uVar3 = local_58 >> 0x38;
      pppuVar1 = &local_68;
    }
    FUN_00547cac(&local_80,pppuVar1,uVar3);
    if ((long)local_58 < 0) {
      operator_delete(local_68);
    }
    FUN_00547cac(&local_80,", arrival time: ",0x10);
    FUN_00622c24(&local_68,*(undefined8 *)(param_2 + 0x70));
    uVar3 = uStack_60;
    pppuVar1 = (undefined8 ***)local_68;
    if (-1 < (long)local_58) {
      uVar3 = local_58 >> 0x38;
      pppuVar1 = &local_68;
    }
    FUN_00547cac(&local_80,pppuVar1,uVar3);
    if ((long)local_58 < 0) {
      operator_delete(local_68);
    }
    local_34 = 0xaaaaaaaa;
    auVar6 = FUN_007dba34(param_2,1);
    if ((auVar6._8_8_ != 0) &&
       (uVar3 = FUN_007d8fa0(auVar6._0_8_,auVar6._8_8_,&local_34), (uVar3 & 1) != 0)) {
      FUN_00547cac(&local_80,", toffset: ",0xb);
      local_68 = (undefined8 ***)0x0;
      uStack_60 = 0;
      local_58 = 0;
      FUN_005f55c4(&local_68,0x16,local_34);
      uVar3 = uStack_60;
      pppuVar1 = (undefined8 ***)local_68;
      if (-1 < (long)local_58) {
        uVar3 = local_58 >> 0x38;
        pppuVar1 = &local_68;
      }
      FUN_00547cac(&local_80,pppuVar1,uVar3);
      if ((long)local_58 < 0) {
        operator_delete(local_68);
      }
    }
    local_38 = 0xaaaaaaaa;
    auVar6 = FUN_007dba34(param_2,5);
    if ((auVar6._8_8_ != 0) &&
       (uVar3 = FUN_007d8d58(auVar6._0_8_,auVar6._8_8_,&local_38), (uVar3 & 1) != 0)) {
      FUN_00547cac(&local_80,", abs send time: ",0x11);
      local_68 = (undefined8 ***)0x0;
      uStack_60 = 0;
      local_58 = 0;
      FUN_005fa03c(&local_68,0x16,local_38);
      uVar3 = uStack_60;
      pppuVar1 = (undefined8 ***)local_68;
      if (-1 < (long)local_58) {
        uVar3 = local_58 >> 0x38;
        pppuVar1 = &local_68;
      }
      FUN_00547cac(&local_80,pppuVar1,uVar3);
      if ((long)local_58 < 0) {
        operator_delete(local_68);
      }
    }
    uVar3 = FUN_00417e08();
    if ((uVar3 & 1) == 0) {
      FUN_00623bb0(&DAT_001f627a,"../../video/rtp_video_stream_receiver2.cc",0x2d51,&local_80);
    }
    if ((long)uVar2 < 0) {
      uVar5 = -(-uVar2 / 1000) - (ulong)(500 < -uVar2 % 1000);
    }
    else if (499 < uVar2 % 1000) {
      uVar5 = uVar5 + 1;
    }
    *(ulong *)(param_1 + 0x1e8) = uVar5;
    if (local_70 < 0) {
      operator_delete(local_80);
    }
  }
  return;
}


// ===== 006071a4  FUN_006071a4 =====

void FUN_006071a4(long param_1)

{
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
            );
}


// ===== 006071d4  FUN_006071d4 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_006071d4(long param_1,undefined4 param_2,ulong param_3)

{
  long *****ppppplVar1;
  int *******pppppppiVar2;
  long lVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined2 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long ******pppppplVar11;
  void *pvVar12;
  undefined8 *puVar13;
  long *******ppppppplVar14;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  int ******local_b0;
  undefined1 uStack_a1;
  int *******local_a0;
  ulong local_98;
  byte bStack_89;
  ulong local_88;
  long *******appppppplStack_80 [3];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  FUN_009375c4(&local_88,*(undefined8 *)(param_1 + 0x348));
  ppppppplVar14 = (long *******)appppppplStack_80;
  if ((local_88 & 1) != 0) {
    ppppppplVar14 = appppppplStack_80[0];
  }
  lVar9 = (local_88 & 0x3ffffffffffffffe) << 2;
  if ((local_88 & 0x3ffffffffffffffe) != 0) {
    do {
      uVar6 = FUN_0084f7fc(*ppppppplVar14);
      local_b0 = (int ******)(*ppppppplVar14)[0x13c];
      local_a0 = &local_b0;
      lVar7 = FUN_0060be8c(0,param_1 + 0x360,param_1 + 0x360,&DAT_001f94c3,&local_a0,&uStack_a1);
      *(undefined2 *)(lVar7 + 0x28) = uVar6;
      plVar8 = *(long **)(param_1 + 0x200);
      ppppplVar1 = *(long ******)(param_1 + 0x540);
      if ((long)*(long ******)(param_1 + 0x540) <= (long)(*ppppppplVar14)[0x13c]) {
        ppppplVar1 = (*ppppppplVar14)[0x13c];
      }
      *(long ******)(param_1 + 0x540) = ppppplVar1;
      pppppplVar11 = *ppppppplVar14;
      *ppppppplVar14 = (long ******)0x0;
      (**(code **)(*plVar8 + 0x10))(plVar8,pppppplVar11);
      lVar9 = lVar9 + -8;
      ppppppplVar14 = ppppppplVar14 + 1;
    } while (lVar9 != 0);
  }
  if (local_88 != 0) {
    FUN_0060bdcc(&local_88);
  }
  lVar9 = *(long *)(param_1 + 0x2e0);
  if (lVar9 == 0) {
LAB_00607414:
    FUN_00991a98(&local_f0,param_1 + 0x278,param_2);
    FUN_006079d4(param_1,&local_f0);
    puVar13 = local_f0;
    if (local_f0 == (undefined8 *)0x0) goto LAB_006074a8;
    while (puVar13 != local_e8) {
      local_e8 = local_e8 + -1;
      if (local_e8 == (undefined8 *)0x0) goto LAB_00607520;
      pvVar12 = (void *)*local_e8;
      *local_e8 = 0;
      if (pvVar12 != (void *)0x0) {
        FUN_007dd190((long)pvVar12 + 0x30);
        FUN_007b5554((long)pvVar12 + 0x18);
        operator_delete(pvVar12);
      }
    }
    local_e8 = puVar13;
  }
  else {
    if ((param_3 & 0x1ffffffff) != 0x100000005) {
      if ((param_3 & 0x1ffffffff) == 0x100000004) {
        (**(code **)(**(long **)(param_1 + 0x48) + 0x10))
                  (&local_a0,*(long **)(param_1 + 0x48),"WebRTC-Video-H26xPacketBuffer",0x1d);
        if (-1 < (char)bStack_89) {
          local_98 = (ulong)bStack_89;
        }
        if (local_98 < 7) {
          bVar5 = false;
        }
        else {
          pppppppiVar2 = local_a0;
          if (-1 < (char)bStack_89) {
            pppppppiVar2 = (int *******)&local_a0;
          }
          bVar5 = *(int *)pppppppiVar2 == 0x62616e45 &&
                  *(int *)((long)pppppppiVar2 + 3) == 0x64656c62;
        }
        if ((char)bStack_89 < '\0') {
          operator_delete(local_a0);
        }
        if (bVar5) {
          lVar9 = *(long *)(param_1 + 0x2e0);
          goto LAB_00607348;
        }
      }
      goto LAB_00607414;
    }
LAB_00607348:
    FUN_0098e284(&local_d0,lVar9,param_2);
    FUN_006079d4(param_1,&local_d0);
    puVar4 = local_d0;
    local_f0 = local_d0;
    puVar13 = local_c8;
    if (local_d0 == (undefined8 *)0x0) goto LAB_006074a8;
    while (puVar4 != puVar13) {
      puVar13 = puVar13 + -1;
      if (puVar13 == (undefined8 *)0x0) {
LAB_00607520:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pvVar12 = (void *)*puVar13;
      *puVar13 = 0;
      if (pvVar12 != (void *)0x0) {
        local_d0 = local_f0;
        FUN_007dd190((long)pvVar12 + 0x30);
        FUN_007b5554((long)pvVar12 + 0x18);
        operator_delete(pvVar12);
        local_f0 = local_d0;
      }
    }
    local_c8 = puVar4;
  }
  operator_delete(local_f0);
LAB_006074a8:
  if (*(long *)(param_1 + 0x268) != 0) {
    FUN_0094aad8(*(long *)(param_1 + 0x268),param_2,0);
  }
  if ((*(long *)(param_1 + 0x270) != 0) && (uVar10 = FUN_004022fc(), (uVar10 & 1) == 0)) {
    FUN_00623bb0(&DAT_001f4e98,"../../video/rtp_video_stream_receiver2.cc",0x280a,
                 "LossNotificationController does not expect empty packets.");
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00607538  FUN_00607538 =====

/* WARNING: Removing unreachable block (ram,0x006077d4) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00607538(long param_1,byte param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  size_t sVar7;
  long *******ppppppplVar8;
  long *******__dest;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *******ppppppplVar12;
  long *plVar13;
  void *local_b0;
  void *pvStack_a8;
  undefined8 local_a0;
  void *pvStack_98;
  void *local_90;
  undefined8 local_88;
  long *******local_78;
  ulong local_70;
  undefined8 local_68;
  
  plVar13 = *(long **)(param_1 + 0x3c8);
  if (plVar13 == (long *)0x0) {
    return;
  }
  while( true ) {
    while (param_2 < *(byte *)(plVar13 + 4)) {
      plVar13 = (long *)*plVar13;
      if (plVar13 == (long *)0x0) {
        return;
      }
    }
    if (param_2 == *(byte *)(plVar13 + 4)) break;
    plVar13 = (long *)plVar13[1];
    if (plVar13 == (long *)0x0) {
      return;
    }
  }
  if (plVar13 == (long *)(param_1 + 0x3c8)) {
    return;
  }
  uVar6 = FUN_00417e08();
  if ((uVar6 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e94,"../../video/rtp_video_stream_receiver2.cc",0x2bb9,
                 "Found out of band supplied codec parameters for payload type: ",param_2);
  }
  puVar3 = PTR_s_sprop_parameter_sets_00d52010;
  pvStack_98 = (void *)0x0;
  local_a0 = 0;
  local_88 = 0;
  local_90 = (void *)0x0;
  pvStack_a8 = (void *)0x0;
  local_b0 = (void *)0x0;
  sVar7 = strlen(PTR_s_sprop_parameter_sets_00d52010);
  if (0x7ffffffffffffff6 < sVar7) {
LAB_006079bc:
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (sVar7 < 0x17) {
    local_68 = CONCAT17((char)sVar7,(undefined7)local_68);
    ppppppplVar8 = (long *******)&local_78;
  }
  else {
    uVar6 = (sVar7 & 0x7ffffffffffffff8) + 8;
    uVar1 = 0x19;
    if (uVar6 != 0x18) {
      uVar1 = uVar6;
    }
    ppppppplVar8 = (long *******)operator_new(uVar1);
    local_68 = uVar1 | 0x8000000000000000;
    local_78 = ppppppplVar8;
    local_70 = sVar7;
  }
  if ((long *******)((long)ppppppplVar8 + sVar7) < ppppppplVar8) {
LAB_00607980:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((ppppppplVar8 <= puVar3) && (puVar3 < (long *******)((long)ppppppplVar8 + sVar7))) {
LAB_00607994:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memcpy(ppppppplVar8,PTR_s_sprop_parameter_sets_00d52010,sVar7);
  *(undefined1 *)((long)ppppppplVar8 + sVar7) = 0;
  uVar6 = local_68;
  plVar13 = plVar13 + 6;
  plVar10 = (long *)*plVar13;
  plVar11 = plVar13;
  if (plVar10 != (long *)0x0) {
    ppppppplVar8 = local_78;
    uVar1 = local_70;
    if (-1 < (long)local_68) {
      ppppppplVar8 = (long *******)&local_78;
      uVar1 = local_68 >> 0x38;
    }
    do {
      while( true ) {
        plVar11 = (long *)plVar10[4];
        uVar2 = plVar10[5];
        if (-1 < (char)*(byte *)((long)plVar10 + 0x37)) {
          plVar11 = plVar10 + 4;
          uVar2 = (ulong)*(byte *)((long)plVar10 + 0x37);
        }
        sVar7 = uVar2;
        if (uVar1 <= uVar2) {
          sVar7 = uVar1;
        }
        iVar5 = memcmp(ppppppplVar8,plVar11,sVar7);
        if (iVar5 != 0) break;
        plVar11 = plVar10;
        if (uVar1 == uVar2) goto LAB_006076f8;
        if (uVar1 < uVar2) goto LAB_006076ec;
LAB_0060769c:
        plVar10 = (long *)plVar10[1];
        plVar11 = plVar13;
        if (plVar10 == (long *)0x0) goto LAB_006076f8;
      }
      if (-1 < iVar5) goto LAB_0060769c;
LAB_006076ec:
      plVar10 = (long *)*plVar10;
      plVar11 = plVar13;
    } while (plVar10 != (long *)0x0);
  }
LAB_006076f8:
  if ((long)uVar6 < 0) {
    operator_delete(local_78);
  }
  if (plVar11 != plVar13) {
    ppppppplVar8 = (long *******)(plVar11 + 7);
    ppppppplVar12 = ppppppplVar8;
    if (*(char *)((long)plVar11 + 0x4f) < '\0') {
      ppppppplVar12 = (long *******)*ppppppplVar8;
    }
    if (ppppppplVar12 == (long *******)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string:1063: libc++ Hardening assertion __s != nullptr failed: basic_string(const char*) detected nullptr\n"
                );
    }
    sVar7 = strlen((char *)ppppppplVar12);
    if (0x7ffffffffffffff6 < sVar7) goto LAB_006079bc;
    if (sVar7 < 0x17) {
      local_68 = CONCAT17((char)sVar7,(undefined7)local_68);
      __dest = (long *******)&local_78;
    }
    else {
      uVar6 = (sVar7 & 0x7ffffffffffffff8) + 8;
      uVar1 = 0x19;
      if (uVar6 != 0x18) {
        uVar1 = uVar6;
      }
      __dest = (long *******)operator_new(uVar1);
      local_68 = uVar1 | 0x8000000000000000;
      local_78 = __dest;
      local_70 = sVar7;
    }
    if ((long *******)((long)__dest + sVar7) < __dest) goto LAB_00607980;
    if ((__dest <= ppppppplVar12) && (ppppppplVar12 < (long *******)((long)__dest + sVar7)))
    goto LAB_00607994;
    memmove(__dest,ppppppplVar12,sVar7);
    *(undefined1 *)((long)__dest + sVar7) = 0;
    uVar6 = FUN_0094449c(&local_b0,&local_78);
    if ((uVar6 & 1) != 0) {
      FUN_00934b30(param_1 + 0x378,&local_b0,&pvStack_98);
      lVar9 = *(long *)(param_1 + 0x2e0);
      if ((lVar9 != 0) && (plVar13 = *(long **)(param_1 + 0x3e0), plVar13 != (long *)0x0)) {
        do {
          while (param_2 < *(byte *)((long)plVar13 + 0x1c)) {
            plVar13 = (long *)*plVar13;
            if (plVar13 == (long *)0x0) goto LAB_00607904;
          }
          if (param_2 == *(byte *)((long)plVar13 + 0x1c)) {
            if (plVar13 == (long *)(param_1 + 0x3e0)) break;
            if (((ulong)*(uint *)(plVar13 + 4) | 0x100000000) != 0x100000005) {
              if (((ulong)*(uint *)(plVar13 + 4) | 0x100000000) != 0x100000004) break;
              (**(code **)(**(long **)(param_1 + 0x48) + 0x10))
                        (&local_78,*(long **)(param_1 + 0x48),"WebRTC-Video-H26xPacketBuffer",0x1d);
              uVar6 = local_70;
              if (-1 < (long)local_68) {
                uVar6 = local_68 >> 0x38;
              }
              if (uVar6 < 7) {
                bVar4 = false;
              }
              else {
                ppppppplVar12 = local_78;
                if (-1 < (long)local_68) {
                  ppppppplVar12 = (long *******)&local_78;
                }
                bVar4 = *(int *)ppppppplVar12 == 0x62616e45 &&
                        *(int *)((long)ppppppplVar12 + 3) == 0x64656c62;
              }
              if ((long)local_68 < 0) {
                operator_delete(local_78);
              }
              if (!bVar4) break;
              lVar9 = *(long *)(param_1 + 0x2e0);
            }
            FUN_0098f53c(lVar9,ppppppplVar8);
            break;
          }
          plVar13 = (long *)plVar13[1];
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_00607904:
  if (pvStack_98 != (void *)0x0) {
    if ((long)local_90 - 1U < (ulong)((long)local_90 - (long)pvStack_98)) goto LAB_006079c0;
    local_90 = pvStack_98;
    operator_delete(pvStack_98);
  }
  if (local_b0 != (void *)0x0) {
    if ((long)pvStack_a8 - 1U < (ulong)((long)pvStack_a8 - (long)local_b0)) {
LAB_006079c0:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    pvStack_a8 = local_b0;
    operator_delete(local_b0);
  }
  return;
}


// ===== 006079d4  FUN_006079d4 =====

void FUN_006079d4(long *param_1,long *param_2)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  long ****pppplVar6;
  bool bVar7;
  double dVar8;
  long ***ppplVar9;
  bool bVar10;
  int iVar11;
  long lVar12;
  long *****ppppplVar13;
  void *pvVar14;
  long ***ppplVar15;
  long *plVar16;
  long ****pppplVar17;
  long *plVar18;
  undefined1 *puVar19;
  long lVar20;
  long ***ppplVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  int iVar26;
  long *plVar27;
  undefined8 uVar28;
  long ***ppplVar29;
  long ***ppplVar30;
  long ***ppplVar31;
  long ***ppplVar32;
  long ***ppplVar33;
  long local_f8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  long *local_d0;
  long ***local_c8;
  long ***local_c0;
  long ***local_b8;
  long *local_b0;
  long *local_a8;
  long *local_a0;
  long ****local_98;
  ulong local_90;
  byte bStack_81;
  long *local_80 [2];
  
  dVar8 = DAT_001f4ff8;
  plVar18 = (long *)*param_2;
  plVar2 = (long *)param_2[1];
  local_b0 = (long *)0x0;
  local_a8 = (long *)0x0;
  local_a0 = (long *)0x0;
  local_c8 = (long ***)0x0;
  local_c0 = (long ***)0x0;
  local_b8 = (long ***)0x0;
  if (plVar18 == plVar2) {
LAB_00608210:
    if ((*(byte *)(param_2 + 3) & 1) != 0) {
      if ((char)param_1[0x82] == '\x01') {
        *(undefined1 *)(param_1 + 0x82) = 0;
      }
      if ((char)param_1[0x84] == '\x01') {
        *(undefined1 *)(param_1 + 0x84) = 0;
      }
      if ((char)param_1[0x80] == '\x01') {
        *(undefined1 *)(param_1 + 0x80) = 0;
      }
      local_98 = (long ****)(param_1 + 0xac);
      FUN_0060b3f8(&local_98,param_1[0xad]);
      param_1[0xac] = (long)(param_1 + 0xad);
      param_1[0xae] = 0;
      param_1[0xad] = 0;
      (**(code **)(*param_1 + 0x28))(param_1);
    }
    FUN_005da674(&local_c8);
    if (local_b0 != (long *)0x0) {
      uVar24 = (ulong)((long)local_a8 + (-0x10 - ((long)local_a8 << 0x3c))) >> 4;
      uVar22 = (ulong)(((long)local_b0 - (long)local_a8 << 0x3c) - ((long)local_b0 - (long)local_a8)
                      ) >> 4;
      if (uVar24 <= uVar22) {
        uVar22 = uVar24;
      }
      plVar18 = local_a8;
      if ((1 < uVar22) && ((((int)local_b0 - (int)local_a8 | -(int)local_a8) & 0xfU) == 0)) {
        uVar22 = uVar22 & 0xffffffffffffffe;
        plVar18 = local_a8 + uVar22 * -2;
        do {
          uVar22 = uVar22 - 2;
        } while (uVar22 != 0);
      }
      while (plVar18 != local_b0) {
        plVar18 = plVar18 + -2;
        if (plVar18 == (long *)0x0) {
LAB_006082f0:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      local_a8 = local_b0;
      operator_delete(local_b0);
    }
    return;
  }
  lVar12 = 0;
  local_f8 = -0x5555555555555600;
  bVar10 = false;
  iVar26 = -0x55555556;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  bVar7 = false;
  local_d8 = &DAT_aaaaaaaaaaaaaaaa;
LAB_00607a70:
  ppplVar9 = local_c8;
  lVar25 = *plVar18;
  if (((!bVar10) || (*(char *)(lVar25 + 0xd5) == '\x01')) &&
     (plVar27 = (long *)param_1[0xad], plVar27 != (long *)0x0)) {
    do {
      while (*(long *)(lVar25 + 8) < plVar27[4]) {
        plVar27 = (long *)*plVar27;
        if (plVar27 == (long *)0x0) goto LAB_00607b34;
      }
      if (*(long *)(lVar25 + 8) == plVar27[4]) {
        if (plVar27 != param_1 + 0xad) {
          if (*(char *)(lVar25 + 0xd5) == '\x01') {
            uVar24 = (ulong)((long)local_a8 + (-0x10 - ((long)local_a8 << 0x3c))) >> 4;
            uVar22 = (ulong)(((long)local_b0 - (long)local_a8 << 0x3c) -
                            ((long)local_b0 - (long)local_a8)) >> 4;
            if (uVar24 <= uVar22) {
              uVar22 = uVar24;
            }
            plVar16 = local_a8;
            if ((1 < uVar22) && ((((int)local_b0 - (int)local_a8 | -(int)local_a8) & 0xfU) == 0)) {
              uVar22 = uVar22 & 0xffffffffffffffe;
              plVar16 = local_a8 + uVar22 * -2;
              do {
                uVar22 = uVar22 - 2;
              } while (uVar22 != 0);
            }
            goto LAB_00607b20;
          }
          uVar22 = plVar27[10];
          if (iVar26 <= *(int *)(lVar25 + 0x14)) {
            iVar26 = *(int *)(lVar25 + 0x14);
          }
          if ((long)uVar22 < 0) {
            puVar19 = (undefined1 *)(-(-uVar22 / 1000) - (ulong)(500 < -uVar22 % 1000));
          }
          else {
            puVar19 = (undefined1 *)(uVar22 / 1000);
            if (499 < uVar22 % 1000) {
              puVar19 = puVar19 + 1;
            }
          }
          puVar1 = puVar19;
          if ((long)local_d8 <= (long)puVar19) {
            puVar1 = local_d8;
          }
          local_d8 = puVar1;
          if ((long)local_e0 <= (long)puVar19) {
            local_e0 = puVar19;
          }
          goto LAB_00607bbc;
        }
        break;
      }
      plVar27 = (long *)plVar27[1];
    } while (plVar27 != (long *)0x0);
  }
LAB_00607b34:
  bVar10 = true;
  goto LAB_00607b3c;
LAB_00607b20:
  if (plVar16 == local_b0) goto LAB_00607fb8;
  plVar16 = plVar16 + -2;
  if (plVar16 == (long *)0x0) goto LAB_006082f0;
  goto LAB_00607b20;
LAB_00607fb8:
  local_a8 = local_b0;
  pppplVar17 = (long ****)local_c0;
  if (local_c8 != local_c0) {
    do {
      pppplVar6 = pppplVar17 + -0xd;
      if (pppplVar6 == (long ****)0x0) goto LAB_006082f0;
      ppplVar15 = pppplVar17[-0xc];
      if (ppplVar15 != (long ***)0x0) {
        ppplVar21 = pppplVar17[-0xb];
        uVar24 = (ulong)((long)ppplVar21 + (-4 - ((long)ppplVar21 << 0x3e))) >> 2;
        uVar22 = (ulong)(((long)ppplVar15 - (long)ppplVar21 << 0x3e) -
                        ((long)ppplVar15 - (long)ppplVar21)) >> 2;
        if (uVar24 <= uVar22) {
          uVar22 = uVar24;
        }
        if ((1 < uVar22) && ((((int)ppplVar15 - (int)ppplVar21 | -(int)ppplVar21) & 3U) == 0)) {
          uVar22 = uVar22 & 0x3ffffffffffffffe;
          ppplVar21 = (long ***)((long)ppplVar21 + uVar22 * -4);
          do {
            uVar22 = uVar22 - 2;
          } while (uVar22 != 0);
        }
        while (ppplVar21 != ppplVar15) {
          ppplVar21 = (long ***)((long)ppplVar21 + -4);
          if (ppplVar21 == (long ***)0x0) goto LAB_006082f0;
        }
        pppplVar17[-0xb] = ppplVar15;
        operator_delete(ppplVar15);
      }
      pppplVar17 = pppplVar6;
    } while ((long ****)ppplVar9 != pppplVar6);
    lVar25 = *plVar18;
  }
  local_c0 = ppplVar9;
  uVar22 = plVar27[10];
  if ((long)uVar22 < 0) {
    local_e0 = (undefined1 *)(-(-uVar22 / 1000) - (ulong)(500 < -uVar22 % 1000));
  }
  else {
    local_e0 = (undefined1 *)(uVar22 / 1000);
    if (499 < uVar22 % 1000) {
      local_e0 = local_e0 + 1;
    }
  }
  iVar26 = *(int *)(lVar25 + 0x14);
  (**(code **)(*(long *)param_1[9] + 0x10))
            (&local_98,(long *)param_1[9],"WebRTC-UseAbsCapTimeForG2gMetric",0x20);
  uVar22 = local_90;
  if (-1 < (char)bStack_81) {
    uVar22 = (ulong)bStack_81;
  }
  if (uVar22 < 7) {
    bVar10 = false;
  }
  else {
    ppppplVar13 = (long *****)local_98;
    if (-1 < (char)bStack_81) {
      ppppplVar13 = &local_98;
    }
    bVar10 = *(int *)ppppplVar13 == 0x62616e45 && *(int *)((long)ppppplVar13 + 3) == 0x64656c62;
  }
  if ((char)bStack_81 < '\0') {
    operator_delete(local_98);
  }
  lVar12 = lVar25;
  local_d8 = local_e0;
  if (((bVar10) && ((char)plVar27[0xf] == '\x01')) && ((char)plVar27[0x11] == '\x01')) {
    uVar22 = plVar27[0x10];
    if ((long)uVar22 < 0) {
      uVar24 = -(-uVar22 / 1000) - (ulong)(500 < -uVar22 % 1000);
    }
    else {
      uVar24 = uVar22 / 1000;
      if (499 < uVar22 % 1000) {
        uVar24 = uVar24 + 1;
      }
    }
    local_f8 = (long)((double)(plVar27[0xc] & 0xffffffff) / dVar8 + 0.5) +
               ((ulong)plVar27[0xc] >> 0x20) * 1000 + uVar24;
    bVar7 = true;
  }
LAB_00607bbc:
  lVar25 = *plVar18;
  if (local_a8 < local_a0) {
    if (local_a8 == (long *)0x0) goto LAB_0060833c;
    lVar23 = *(long *)(lVar25 + 0x18);
    if (lVar23 != 0) {
      lVar23 = *(long *)(lVar23 + 0x10) + *(long *)(lVar25 + 0x20);
    }
    lVar20 = *(long *)(lVar25 + 0x28);
    plVar16 = local_a8 + 2;
    lVar25 = 0;
    if (lVar20 != 0) {
      lVar25 = lVar23;
    }
    *local_a8 = lVar25;
    local_a8[1] = lVar20;
  }
  else {
    plVar16 = (long *)FUN_0060a928(&local_b0,lVar25 + 0x18);
  }
  ppplVar9 = local_c0;
  local_a8 = plVar16;
  if (local_c0 < local_b8) {
    if ((long ****)local_c0 == (long ****)0x0) {
LAB_0060833c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    lVar25 = plVar27[5];
    local_c0[2] = (long **)0x0;
    local_c0[3] = (long **)0x0;
    local_c0[1] = (long **)0x0;
    *(int *)local_c0 = (int)lVar25;
    pvVar14 = (void *)plVar27[6];
    uVar22 = plVar27[7] - (long)pvVar14;
    if (uVar22 != 0) {
      if ((long)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005da79c();
      }
      ppplVar15 = (long ***)operator_new(uVar22);
      ppplVar9[1] = (long **)ppplVar15;
      ppplVar9[2] = (long **)ppplVar15;
      ppplVar9[3] = (long **)((long)ppplVar15 + uVar22);
      memcpy(ppplVar15,pvVar14,uVar22);
      ppplVar9[2] = (long **)((long)ppplVar15 + uVar22);
    }
    ppplVar21 = (long ***)plVar27[0x10];
    ppplVar15 = (long ***)plVar27[0xf];
    ppplVar29 = (long ***)plVar27[0xd];
    local_c0 = ppplVar9 + 0xd;
    ppplVar31 = (long ***)plVar27[10];
    ppplVar30 = (long ***)plVar27[9];
    ppplVar33 = (long ***)plVar27[0xc];
    ppplVar32 = (long ***)plVar27[0xb];
    ppplVar9[9] = (long **)plVar27[0xe];
    ppplVar9[8] = (long **)ppplVar29;
    ppplVar9[0xb] = (long **)ppplVar21;
    ppplVar9[10] = (long **)ppplVar15;
    ppplVar9[5] = (long **)ppplVar31;
    ppplVar9[4] = (long **)ppplVar30;
    ppplVar9[7] = (long **)ppplVar33;
    ppplVar9[6] = (long **)ppplVar32;
    *(char *)(ppplVar9 + 0xc) = (char)plVar27[0x11];
  }
  else {
    local_c0 = (long ***)FUN_0060aa50(&local_c8,plVar27 + 5);
  }
  uVar28 = *(undefined8 *)((long)plVar27 + 0x69);
  lVar25 = *plVar18;
  lVar20 = plVar27[0xd];
  lVar23 = plVar27[0xc];
  *(undefined8 *)(lVar25 + 0x7d9) = *(undefined8 *)((long)plVar27 + 0x71);
  *(undefined8 *)(lVar25 + 0x7d1) = uVar28;
  *(long *)(lVar25 + 2000) = lVar20;
  *(long *)(lVar25 + 0x7c8) = lVar23;
  if (*(char *)(*plVar18 + 0xd6) == '\x01') {
    plVar27 = (long *)param_1[0x76];
    if (plVar27 != (long *)0x0) {
      do {
        if (*(byte *)(lVar12 + 2) < *(byte *)(plVar27 + 4)) {
          plVar27 = (long *)*plVar27;
        }
        else {
          if (*(byte *)(lVar12 + 2) == *(byte *)(plVar27 + 4)) goto LAB_00607d04;
          plVar27 = (long *)plVar27[1];
        }
        if (plVar27 == (long *)0x0) break;
      } while( true );
    }
    goto LAB_00608350;
  }
LAB_00607fb0:
  bVar10 = false;
LAB_00607b3c:
  plVar18 = plVar18 + 1;
  if (plVar18 == plVar2) goto LAB_00608210;
  goto LAB_00607a70;
LAB_00607d04:
  if (plVar27 == param_1 + 0x76) {
LAB_00608350:
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../video/rtp_video_stream_receiver2.cc",0x36e,
                 "depacketizer_it != payload_type_map_.end()",&DAT_001f5fa0);
  }
  if (plVar27[5] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../video/rtp_video_stream_receiver2.cc",0x36f,"depacketizer_it->second",
                 &DAT_001f5fa0);
  }
  local_d0 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  plVar16 = (long *)0x0;
  if ((long)local_a8 - (long)local_b0 != 0) {
    plVar16 = local_b0;
  }
  (**(code **)(*(long *)plVar27[5] + 0x18))
            (&local_d0,(long *)plVar27[5],plVar16,(long)local_a8 - (long)local_b0 >> 4);
  if (local_d0 != (long *)0x0) {
    lVar23 = *plVar18;
    uVar4 = *(undefined2 *)(lVar12 + 8);
    uVar5 = *(undefined2 *)(lVar23 + 8);
    lVar25 = local_f8;
    if (!bVar7) {
      uVar22 = FUN_008536b8(param_1 + 0x10,*(undefined4 *)(lVar12 + 0x10));
      if (uVar22 == 0) {
        lVar25 = -1;
      }
      else {
        lVar25 = (long)((double)(uVar22 & 0xffffffff) / dVar8 + 0.5) + (uVar22 >> 0x20) * 1000;
      }
    }
    ppplVar15 = local_c0;
    ppplVar9 = local_c8;
    uVar3 = *(undefined4 *)(lVar12 + 0xdc);
    if (local_c8 == local_c0) {
      ppppplVar13 = (long *****)0x0;
    }
    else {
      ppppplVar13 = (long *****)operator_new(0x20);
      *(int *)ppppplVar13 = 0;
      ppppplVar13[1] = (long ****)ppplVar9;
      ppppplVar13[2] = (long ****)ppplVar15;
      ppppplVar13[3] = (long ****)local_b8;
      local_c8 = (long ***)0x0;
      local_c0 = (long ***)0x0;
      local_b8 = (long ***)0x0;
      if (ppppplVar13 != (long *****)0x0) {
        FUN_00d0f740(1,ppppplVar13);
      }
    }
    pvVar14 = operator_new(0x1210);
    local_80[0] = local_d0;
    local_d0 = (long *)0x0;
    local_98 = (long ****)ppppplVar13;
    FUN_0084f06c(pvVar14,uVar4,uVar5,*(undefined1 *)(lVar23 + 1),iVar26,local_d8,local_e0,
                 *(undefined4 *)(lVar12 + 0x10),lVar25,lVar23 + 0xf8,*(undefined1 *)(lVar12 + 2),
                 uVar3,*(undefined4 *)(lVar23 + 0xd0),*(undefined1 *)(lVar23 + 0xd4),lVar12 + 0x30,
                 lVar23 + 0x108,lVar23 + 0x7e8,&local_98,local_80);
    if (local_80[0] != (long *)0x0) {
      (**(code **)(*local_80[0] + 8))();
    }
    pppplVar17 = local_98;
    if (((long *****)local_98 != (long *****)0x0) &&
       (iVar11 = FUN_00d0f7a0(0xffffffff,local_98), iVar11 == 1)) {
      FUN_005da674(pppplVar17 + 1);
      operator_delete(pppplVar17);
    }
    FUN_00608924(param_1,pvVar14);
    ppplVar9 = local_c8;
    pppplVar17 = (long ****)local_c0;
    while (pppplVar6 = pppplVar17, (long ****)ppplVar9 != pppplVar6) {
      pppplVar17 = pppplVar6 + -0xd;
      if (pppplVar17 == (long ****)0x0) goto LAB_006082f0;
      ppplVar15 = pppplVar6[-0xc];
      if (ppplVar15 != (long ***)0x0) {
        ppplVar21 = pppplVar6[-0xb];
        uVar24 = (ulong)((long)ppplVar21 + (-4 - ((long)ppplVar21 << 0x3e))) >> 2;
        uVar22 = (ulong)(((long)ppplVar15 - (long)ppplVar21 << 0x3e) -
                        ((long)ppplVar15 - (long)ppplVar21)) >> 2;
        if (uVar24 <= uVar22) {
          uVar22 = uVar24;
        }
        if ((1 < uVar22) && ((((int)ppplVar15 - (int)ppplVar21 | -(int)ppplVar21) & 3U) == 0)) {
          uVar22 = uVar22 & 0x3ffffffffffffffe;
          ppplVar21 = (long ***)((long)ppplVar21 + uVar22 * -4);
          do {
            uVar22 = uVar22 - 2;
          } while (uVar22 != 0);
        }
        while (ppplVar21 != ppplVar15) {
          ppplVar21 = (long ***)((long)ppplVar21 + -4);
          if (ppplVar21 == (long ***)0x0) goto LAB_006082f0;
        }
        pppplVar6[-0xb] = ppplVar15;
        operator_delete(ppplVar15);
      }
    }
    local_c0 = ppplVar9;
    if (local_d0 != (long *)0x0) {
      (**(code **)(*local_d0 + 8))();
    }
  }
  goto LAB_00607fb0;
}


// ===== 00608394  FUN_00608394 =====

void FUN_00608394(long param_1,long param_2)

{
  ulong uVar1;
  
  if (*(uint *)(param_1 + 0x1d0) != (uint)*(byte *)(param_2 + 1)) {
    FUN_006083ec();
    return;
  }
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00623bb0(&DAT_001f4e98,"../../video/rtp_video_stream_receiver2.cc",0x1782,
               "Discarding recovered packet with RED encapsulation");
  return;
}


// ===== 006083ec  FUN_006083ec =====

void FUN_006083ec(long param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long local_50;
  long **pplStack_48;
  long *local_28;
  
  if (*(long *)(param_2 + 0x18) == 0) {
    plVar5 = *(long **)(param_1 + 0x3e0);
    if (plVar5 != (long *)0x0) {
      do {
        while (*(byte *)((long)plVar5 + 0x1c) <= *(byte *)(param_2 + 1)) {
          if (*(byte *)(param_2 + 1) == *(byte *)((long)plVar5 + 0x1c)) {
            if (plVar5 != (long *)(param_1 + 0x3e0)) {
              uVar3 = (ulong)*(uint *)(plVar5 + 4) | 0x100000000;
              goto LAB_006084dc;
            }
            goto LAB_006084d8;
          }
          plVar5 = (long *)plVar5[1];
          if (plVar5 == (long *)0x0) goto LAB_006084d8;
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
LAB_006084d8:
    uVar3 = 0;
LAB_006084dc:
    FUN_006071d4(param_1,*(undefined2 *)(param_2 + 4),uVar3);
    return;
  }
  bVar2 = *(byte *)(param_2 + 1);
  if (*(uint *)(param_1 + 0x1d0) == (uint)bVar2) {
    FUN_006095cc(param_1,param_2);
    return;
  }
  local_28 = *(long **)(param_1 + 0x3b0);
  if (local_28 == (long *)0x0) {
    return;
  }
  while( true ) {
    while ((uint)bVar2 < (uint)*(byte *)(local_28 + 4)) {
      local_28 = (long *)*local_28;
      if (local_28 == (long *)0x0) {
        return;
      }
    }
    if ((uint)bVar2 == (uint)*(byte *)(local_28 + 4)) break;
    local_28 = (long *)local_28[1];
    if (local_28 == (long *)0x0) {
      return;
    }
  }
  if (local_28 == (long *)(param_1 + 0x3b0)) {
    return;
  }
  pplStack_48 = &local_28;
  local_50 = param_1;
  uVar3 = FUN_006096ac(&local_50,param_2);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 0x580);
    uVar7 = *(ulong *)(param_1 + 0x578);
    if (uVar3 - uVar7 == 0x3840) {
      do {
        uVar3 = uVar3 - 0x90;
        if (uVar3 == 0) {
LAB_00608650:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_007dc1b4(uVar3);
      } while (uVar3 != uVar7);
      *(ulong *)(param_1 + 0x580) = uVar7;
      uVar3 = uVar7;
    }
    if (*(ulong *)(param_1 + 0x588) <= uVar3) {
      uVar4 = FUN_0060ac00(param_1 + 0x578,param_2);
      *(undefined8 *)(param_1 + 0x580) = uVar4;
      return;
    }
    if (uVar3 != 0) {
      FUN_007dc0a0(uVar3,param_2);
      *(ulong *)(param_1 + 0x580) = uVar3 + 0x90;
      return;
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  lVar6 = *(long *)(param_1 + 0x578);
  if (lVar6 == *(long *)(param_1 + 0x580)) {
    return;
  }
  do {
    while (uVar3 = FUN_006096ac(&local_50,lVar6), (uVar3 & 1) != 0) {
      lVar6 = lVar6 + 0x90;
      if (lVar6 == *(long *)(param_1 + 0x580)) {
        return;
      }
    }
    lVar8 = *(long *)(param_1 + 0x580);
    if (lVar6 == lVar8) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:1160: libc++ Hardening assertion __position != end() failed: vector::erase(iterator) called with a non-dereferenceable iterator\n"
                );
    }
    lVar9 = lVar6;
    if (lVar6 + 0x90 == lVar8) {
      lVar10 = lVar6;
      if (lVar6 != lVar8) goto LAB_006085d4;
    }
    else {
      do {
        lVar10 = lVar9 + 0x90;
        FUN_007dc13c(lVar9,lVar9 + 0x90);
        lVar1 = lVar9 + 0x120;
        lVar9 = lVar10;
      } while (lVar1 != lVar8);
      lVar8 = *(long *)(param_1 + 0x580);
      if (lVar10 != lVar8) {
LAB_006085d4:
        do {
          lVar8 = lVar8 + -0x90;
          if (lVar8 == 0) goto LAB_00608650;
          FUN_007dc1b4(lVar8);
        } while (lVar8 != lVar10);
      }
    }
    *(long *)(param_1 + 0x580) = lVar10;
    if (lVar6 == lVar10) {
      return;
    }
  } while( true );
}


// ===== 006086a0  FUN_006086a0 =====

void FUN_006086a0(long param_1,long param_2)

{
  ulong uVar1;
  
  if (*(uint *)(param_1 + 0x1c8) != (uint)*(byte *)(param_2 + 1)) {
    FUN_006083ec(param_1 + -8);
    return;
  }
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00623bb0(&DAT_001f4e98,"../../video/rtp_video_stream_receiver2.cc",0x1782,
               "Discarding recovered packet with RED encapsulation");
  return;
}


// ===== 006086fc  FUN_006086fc =====

void FUN_006086fc(long param_1,long param_2)

{
  void *pvVar1;
  long *plVar2;
  
  if ((*(byte *)(param_2 + 0x80) & 1) == 0) {
    plVar2 = *(long **)(param_1 + 0x60);
    pvVar1 = operator_new(0x88);
    FUN_00889b64(pvVar1,param_2,0);
    (**(code **)(*plVar2 + 0x28))(plVar2,pvVar1);
  }
  if (*(char *)(param_1 + 0x1e0) == '\x01') {
    FUN_006083ec(param_1,param_2);
    if ((*(byte *)(param_2 + 0x80) & 1) == 0) {
      plVar2 = (long *)(*(long *)(param_1 + 0x1c0) + 8);
      (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
    }
    plVar2 = *(long **)(param_1 + 0x1d8);
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006087a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
      return;
    }
  }
  return;
}


// ===== 006087c0  FUN_006087c0 =====

void FUN_006087c0(long param_1,long param_2)

{
  void *pvVar1;
  long *plVar2;
  
  if ((*(byte *)(param_2 + 0x80) & 1) == 0) {
    plVar2 = *(long **)(param_1 + 0x50);
    pvVar1 = operator_new(0x88);
    FUN_00889b64(pvVar1,param_2,0);
    (**(code **)(*plVar2 + 0x28))(plVar2,pvVar1);
  }
  if (*(char *)(param_1 + 0x1d0) == '\x01') {
    FUN_006083ec(param_1 + -0x10,param_2);
    if ((*(byte *)(param_2 + 0x80) & 1) == 0) {
      plVar2 = (long *)(*(long *)(param_1 + 0x1b0) + 8);
      (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
    }
    plVar2 = *(long **)(param_1 + 0x1c8);
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0060886c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
      return;
    }
  }
  return;
}


// ===== 00608884  FUN_00608884 =====

void FUN_00608884(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x208) == '\x01') {
    uVar1 = 0x20;
  }
  else {
    if (*(char *)(param_1 + 0x208) != '\x02') {
      return;
    }
    uVar1 = 0x80;
  }
                    /* WARNING: Could not recover jumptable at 0x006088b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x1f0) + 0x1e8))(*(long **)(param_1 + 0x1f0),uVar1);
  return;
}


// ===== 006088bc  FUN_006088bc =====

void FUN_006088bc(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x1f0) == '\x01') {
    uVar1 = 0x20;
  }
  else {
    if (*(char *)(param_1 + 0x1f0) != '\x02') {
      return;
    }
    uVar1 = 0x80;
  }
                    /* WARNING: Could not recover jumptable at 0x006088ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x1d8) + 0x1e8))(*(long **)(param_1 + 0x1d8),uVar1);
  return;
}


// ===== 006088f4  FUN_006088f4 =====

void FUN_006088f4(long param_1)

{
  FUN_00865638(*(undefined8 *)(param_1 + 0x1f0));
  return;
}


// ===== 00608900  FUN_00608900 =====

void FUN_00608900(long param_1)

{
  FUN_00865638(*(undefined8 *)(param_1 + 0x1d0));
  return;
}


// ===== 0060890c  FUN_0060890c =====

void FUN_0060890c(long param_1)

{
  FUN_0086576c(*(undefined8 *)(param_1 + 0x1f0));
  return;
}


// ===== 00608918  FUN_00608918 =====

undefined1 FUN_00608918(long param_1)

{
  return *(undefined1 *)(param_1 + 0x430);
}


// ===== 00608924  FUN_00608924 =====

void FUN_00608924(long *param_1,long *param_2)

{
  int *piVar1;
  int *piVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long ****pppplVar6;
  long **pplVar7;
  long lVar8;
  bool bVar9;
  undefined2 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined8 *puVar13;
  void *pvVar14;
  long *plVar15;
  long ***ppplVar16;
  int *piVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  void *pvVar22;
  long *local_90;
  undefined1 uStack_81;
  undefined1 *local_80;
  ulong local_78;
  long ***appplStack_70 [3];
  long local_58;
  
  lVar8 = tpidr_el0;
  local_58 = *(long *)(lVar8 + 0x28);
  puVar13 = (undefined8 *)FUN_0084f840(param_2);
  lVar21 = param_1[0x4e];
  if ((lVar21 != 0) && (*(char *)(puVar13 + 0x12) == '\x01')) {
    uVar11 = FUN_0084f7f0(param_2);
    if ((*(byte *)(puVar13 + 0x12) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1054: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                );
    }
    uVar19 = puVar13[2] * 2;
    plVar15 = puVar13 + 3;
    if ((puVar13[2] & 1) != 0) {
      plVar15 = (long *)puVar13[3];
    }
    uVar3 = uVar19 & 0xfffffffffffffffc;
    if (uVar3 == 0) {
LAB_006089f4:
      bVar9 = false;
    }
    else {
      uVar19 = uVar19 - 4;
      piVar2 = (int *)((long)plVar15 + uVar3);
      uVar18 = (uint)uVar19;
      if ((~uVar18 & 0xc) != 0) {
        lVar20 = -((ulong)((uVar18 >> 2) + 1) & 3);
        do {
          if (*(int *)plVar15 == 1) goto LAB_00608a5c;
          bVar9 = lVar20 != -1;
          lVar20 = lVar20 + 1;
          plVar15 = (long *)((long)plVar15 + 4);
        } while (bVar9);
      }
      if (uVar19 < 0xc) goto LAB_006089f4;
      piVar17 = (int *)((long)plVar15 + 8);
      do {
        if (piVar17[-2] == 1) {
          plVar15 = (long *)(piVar17 + -2);
          break;
        }
        if (piVar17[-1] == 1) {
          plVar15 = (long *)(piVar17 + -1);
          break;
        }
        plVar15 = (long *)piVar17;
        if (*piVar17 == 1) break;
        if (piVar17[1] == 1) {
          plVar15 = (long *)(piVar17 + 1);
          break;
        }
        piVar1 = piVar17 + 2;
        piVar17 = piVar17 + 4;
        plVar15 = (long *)piVar2;
      } while (piVar1 != piVar2);
LAB_00608a5c:
      bVar9 = plVar15 != (long *)piVar2;
    }
    puVar4 = puVar13 + 9;
    if ((puVar13[8] & 1) != 0) {
      puVar4 = (undefined8 *)puVar13[9];
    }
    puVar5 = (undefined8 *)0x0;
    if ((ulong)puVar13[8] >> 1 != 0) {
      puVar5 = puVar4;
    }
    FUN_009358cc(lVar21,uVar11,*puVar13,bVar9,puVar5);
  }
  if ((*(byte *)((long)param_1 + 0x3f2) & 1) == 0) {
    if (((int)param_2[4] != 3) && (param_1[0x4e] == 0)) {
      (**(code **)(*param_1 + 0x28))(param_1);
    }
    *(undefined1 *)((long)param_1 + 0x3f2) = 1;
  }
  if (*(char *)((long)param_1 + 0x354) == '\x01') {
    iVar12 = *(uint *)(param_2 + 0x14) - *(uint *)(param_1 + 0x6b);
    if (iVar12 != 0) {
      bVar9 = *(uint *)(param_1 + 0x6b) <= *(uint *)(param_2 + 0x14) && iVar12 != 0;
      if (iVar12 != -0x80000000) {
        bVar9 = iVar12 != -1 && iVar12 + 1 < 0 == SCARRY4(iVar12,1);
      }
    }
    else {
      bVar9 = false;
    }
    iVar12 = FUN_0084f808(param_2);
    if ((*(char *)((long)param_1 + 0x354) == '\x01') && (iVar12 == (int)param_1[0x6a])) {
      if (bVar9) goto LAB_00608bac;
      lVar21 = param_1[0x85];
      goto joined_r0x00608bb8;
    }
    if (bVar9) {
      lVar21 = param_1[0xa8];
      pvVar14 = operator_new(0x18);
      FUN_00937340(pvVar14,lVar21 + 0xffff);
      pvVar22 = (void *)param_1[0x69];
      param_1[0x69] = (long)pvVar14;
      if (pvVar22 != (void *)0x0) {
        FUN_00937394(pvVar22);
        operator_delete(pvVar22);
      }
      goto LAB_00608b98;
    }
    if (param_2 != (long *)0x0) {
      if (*(long *)(lVar8 + 0x28) == local_58) {
                    /* WARNING: Could not recover jumptable at 0x00608c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_2 + 8))(param_2);
        return;
      }
      goto LAB_00608d3c;
    }
  }
  else {
LAB_00608b98:
    uVar11 = FUN_0084f808(param_2);
    *(undefined4 *)(param_1 + 0x6a) = uVar11;
    *(undefined1 *)((long)param_1 + 0x354) = 1;
LAB_00608bac:
    *(int *)(param_1 + 0x6b) = (int)param_2[0x14];
    lVar21 = param_1[0x85];
joined_r0x00608bb8:
    if (lVar21 != 0) {
      if (*(long *)(lVar8 + 0x28) == local_58) {
        FUN_0060c41c(lVar21,param_2);
        return;
      }
      goto LAB_00608d3c;
    }
    if (param_1[0xa9] != 0) {
      if (*(long *)(lVar8 + 0x28) == local_58) {
        FUN_00872dd0(param_1[0xa9],param_2);
        return;
      }
      goto LAB_00608d3c;
    }
    FUN_009373f8(&local_78,param_1[0x69],param_2);
    pppplVar6 = appplStack_70;
    if ((local_78 & 1) != 0) {
      pppplVar6 = (long ****)appplStack_70[0];
    }
    uVar19 = (local_78 & 0x3ffffffffffffffe) << 2;
    uVar3 = local_78 & 0x3ffffffffffffffe;
    while (uVar3 != 0) {
      uVar10 = FUN_0084f7fc(*pppplVar6);
      local_90 = (long *)(*pppplVar6)[0x13c];
      local_80 = (undefined1 *)&local_90;
      lVar21 = FUN_0060be8c(0,param_1 + 0x6c,param_1 + 0x6c,&DAT_001f94c3,&local_80,&uStack_81);
      *(undefined2 *)(lVar21 + 0x28) = uVar10;
      plVar15 = (long *)param_1[0x40];
      pplVar7 = (long **)param_1[0xa8];
      if (param_1[0xa8] <= (long)(*pppplVar6)[0x13c]) {
        pplVar7 = (*pppplVar6)[0x13c];
      }
      param_1[0xa8] = (long)pplVar7;
      ppplVar16 = *pppplVar6;
      *pppplVar6 = (long ***)0x0;
      (**(code **)(*plVar15 + 0x10))(plVar15,ppplVar16);
      uVar19 = uVar19 - 8;
      pppplVar6 = pppplVar6 + 1;
      uVar3 = uVar19;
    }
    if (local_78 != 0) {
      FUN_0060bdcc(&local_78);
    }
  }
  if (*(long *)(lVar8 + 0x28) == local_58) {
    return;
  }
LAB_00608d3c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00608d40  FUN_00608d40 =====

void FUN_00608d40(long param_1)

{
  ulong uVar1;
  long *****ppppplVar2;
  long ***ppplVar3;
  long lVar4;
  ulong uVar5;
  undefined2 uVar6;
  long lVar7;
  long *plVar8;
  long ****pppplVar9;
  long **local_90;
  undefined1 uStack_81;
  undefined1 *local_80;
  ulong local_78;
  long ****apppplStack_70 [3];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  FUN_009373f8(&local_78,*(undefined8 *)(param_1 + 0x348));
  ppppplVar2 = apppplStack_70;
  if ((local_78 & 1) != 0) {
    ppppplVar2 = (long *****)apppplStack_70[0];
  }
  uVar1 = (local_78 & 0x3ffffffffffffffe) << 2;
  uVar5 = local_78 & 0x3ffffffffffffffe;
  while (uVar5 != 0) {
    uVar6 = FUN_0084f7fc(*ppppplVar2);
    local_90 = (long **)(*ppppplVar2)[0x13c];
    local_80 = (undefined1 *)&local_90;
    lVar7 = FUN_0060be8c(0,param_1 + 0x360,param_1 + 0x360,&DAT_001f94c3,&local_80,&uStack_81);
    *(undefined2 *)(lVar7 + 0x28) = uVar6;
    plVar8 = *(long **)(param_1 + 0x200);
    ppplVar3 = *(long ****)(param_1 + 0x540);
    if ((long)*(long ****)(param_1 + 0x540) <= (long)(*ppppplVar2)[0x13c]) {
      ppplVar3 = (*ppppplVar2)[0x13c];
    }
    *(long ****)(param_1 + 0x540) = ppplVar3;
    pppplVar9 = *ppppplVar2;
    *ppppplVar2 = (long ****)0x0;
    (**(code **)(*plVar8 + 0x10))(plVar8,pppplVar9);
    uVar1 = uVar1 - 8;
    ppppplVar2 = ppppplVar2 + 1;
    uVar5 = uVar1;
  }
  if (local_78 != 0) {
    FUN_0060bdcc(&local_78);
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00608e60  FUN_00608e60 =====

void FUN_00608e60(long param_1)

{
  FUN_00608d40(param_1 + -0x28);
  return;
}


// ===== 00608e6c  FUN_00608e6c =====

void FUN_00608e6c(long param_1,uint param_2)

{
  *(bool *)(param_1 + 0x430) = param_2 < 2;
  return;
}


// ===== 00608e80  FUN_00608e80 =====

void FUN_00608e80(long param_1,uint param_2)

{
  *(bool *)(param_1 + 0x400) = param_2 < 2;
  return;
}


// ===== 00608e94  FUN_00608e94 =====

void FUN_00608e94(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  void *pvVar5;
  long *local_38;
  
  pvVar3 = *(void **)(param_1 + 0x428);
  if (pvVar3 == (void *)0x0) {
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    pvVar3 = operator_new(0x50);
    lVar1 = 0;
    if (param_1 != 0) {
      lVar1 = param_1 + 0x28;
    }
    lVar2 = 0;
    if (param_1 != 0) {
      lVar2 = param_1 + 0x30;
    }
    FUN_0060c0b8(pvVar3,lVar1,lVar2,uVar4);
    pvVar5 = *(void **)(param_1 + 0x428);
    *(void **)(param_1 + 0x428) = pvVar3;
    if (pvVar5 != (void *)0x0) {
      FUN_0060c1a0(pvVar5);
      operator_delete(pvVar5);
      pvVar3 = *(void **)(param_1 + 0x428);
    }
  }
  local_38 = (long *)*param_2;
  *param_2 = 0;
  FUN_0060c3f0(pvVar3,&local_38);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 8))();
  }
  return;
}


// ===== 00608f50  FUN_00608f50 =====

void FUN_00608f50(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long *local_48;
  
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  uVar2 = FUN_007e06bc();
  lVar6 = *(long *)(param_1 + 0x70);
  puVar3 = (undefined8 *)operator_new(0x38);
  local_48 = (long *)*param_2;
  *param_2 = 0;
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + 0x38;
  }
  FUN_00872ce0(puVar3,lVar1,uVar5,&local_48,uVar2,*(undefined4 *)(lVar6 + 0x20));
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 8))();
  }
  *(undefined4 *)((long)puVar3 + 0x34) = 0;
  *puVar3 = &PTR_FUN_00d27330;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_00d0f740(1,(long)puVar3 + 0x34);
  }
  plVar4 = *(long **)(param_1 + 0x548);
  *(undefined8 **)(param_1 + 0x548) = puVar3;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
    puVar3 = *(undefined8 **)(param_1 + 0x548);
  }
  FUN_00872d0c(puVar3);
  return;
}


// ===== 00609030  FUN_00609030 =====

void FUN_00609030(long param_1)

{
  if (*(long *)(param_1 + 0x268) != 0) {
    FUN_0094b480();
    return;
  }
  return;
}


// ===== 00609044  FUN_00609044 =====

void FUN_00609044(long param_1)

{
  FUN_00865824(*(undefined8 *)(param_1 + 0x1f0));
  return;
}


// ===== 00609050  FUN_00609050 =====

void FUN_00609050(long param_1)

{
  FUN_00864f38(*(undefined8 *)(param_1 + 0x1f0));
  return;
}


// ===== 0060905c  FUN_0060905c =====

void FUN_0060905c(long param_1)

{
  FUN_00864644(*(undefined8 *)(param_1 + 0x1f0));
  return;
}


// ===== 00609068  FUN_00609068 =====

void FUN_00609068(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x1d8) = param_2;
  return;
}


// ===== 00609074  FUN_00609074 =====

void FUN_00609074(long param_1,ulong param_2)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar2 = *(void **)(param_1 + 0x270);
  if ((param_2 & 1) == 0) {
    if (pvVar2 != (void *)0x0) {
      *(undefined8 *)(param_1 + 0x270) = 0;
      FUN_009354c8(pvVar2);
      operator_delete(pvVar2);
      if (*(char *)(param_1 + 0x266) == '\x01') {
        *(undefined1 *)(param_1 + 0x266) = 0;
      }
    }
  }
  else if (pvVar2 == (void *)0x0) {
    pvVar2 = operator_new(0x48);
    lVar1 = 0;
    if (param_1 != -0x210) {
      lVar1 = param_1 + 0x220;
    }
    FUN_0093548c(pvVar2,param_1 + 0x210,lVar1);
    pvVar3 = *(void **)(param_1 + 0x270);
    *(void **)(param_1 + 0x270) = pvVar2;
    if (pvVar3 != (void *)0x0) {
      FUN_009354c8(pvVar3);
      operator_delete(pvVar3);
      return;
    }
  }
  return;
}


// ===== 0060912c  FUN_0060912c =====

void FUN_0060912c(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined4 uVar6;
  void *pvVar7;
  ulong uVar8;
  
  pvVar7 = *(void **)(param_1 + 0x268);
  uVar8 = param_2 / 1000;
  uVar1 = uVar8;
  if (499 < param_2 % 1000) {
    uVar1 = uVar8 + 1;
  }
  if ((param_2 & 0x8000000000000000) != 0) {
    uVar1 = -(-param_2 / 1000) - (ulong)(500 < -param_2 % 1000);
  }
  if (uVar1 == 0) {
    *(undefined8 *)(param_1 + 0x268) = 0;
  }
  else {
    if (pvVar7 != (void *)0x0) goto LAB_00609218;
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    uVar4 = *(undefined8 *)(param_1 + 0x50);
    pvVar5 = operator_new(200);
    lVar2 = 0;
    if (param_1 != -0x210) {
      lVar2 = param_1 + 0x218;
    }
    FUN_0094a2c0(pvVar5,*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x1f8),uVar4,lVar2
                 ,param_1 + 0x210,uVar3);
    pvVar7 = *(void **)(param_1 + 0x268);
    *(void **)(param_1 + 0x268) = pvVar5;
  }
  if (pvVar7 != (void *)0x0) {
    FUN_0094a40c(pvVar7);
    operator_delete(pvVar7);
  }
LAB_00609218:
  if (499 < param_2 % 1000) {
    uVar8 = uVar8 + 1;
  }
  if ((param_2 & 0x8000000000000000) != 0) {
    uVar8 = -(-param_2 / 1000) - (ulong)(500 < -param_2 % 1000);
  }
  uVar6 = 0x1c2;
  if ((long)uVar8 < 1) {
    uVar6 = 0x32;
  }
                    /* WARNING: Could not recover jumptable at 0x00609290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x1c0) + 0x20))
            (*(long **)(param_1 + 0x1c0),*(undefined4 *)(*(long *)(param_1 + 0x70) + 0x20),uVar6);
  return;
}


// ===== 00609294  FUN_00609294 =====

undefined4 FUN_00609294(long param_1)

{
  if (*(long *)(param_1 + 0x1c8) != 0) {
    return *(undefined4 *)(*(long *)(param_1 + 0x1c8) + 4);
  }
  return 0xffffffff;
}


// ===== 006092b0  FUN_006092b0 =====

void FUN_006092b0(long param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 uVar4;
  
  *(int *)(param_1 + 0x1d0) = param_2;
  if (param_2 == -1) {
    pvVar2 = (void *)0x0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x50);
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x70) + 0x20);
    pvVar2 = operator_new(0x78);
    FUN_008777e4(pvVar2,uVar1,param_3,param_1 + 8,uVar4);
  }
  pvVar3 = *(void **)(param_1 + 0x1c8);
  *(void **)(param_1 + 0x1c8) = pvVar2;
  if (pvVar3 != (void *)0x0) {
    FUN_0087783c(pvVar3);
    operator_delete(pvVar3);
    return;
  }
  return;
}


// ===== 0060935c  FUN_0060935c =====

undefined1  [16] FUN_0060935c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (*(char *)(param_1 + 0x410) != '\x01') {
    return ZEXT816(0);
  }
  uVar1 = *(ulong *)(param_1 + 0x408);
  if (-1 < (long)uVar1) {
    uVar2 = uVar1 / 1000;
    if (499 < uVar1 % 1000) {
      uVar2 = uVar2 + 1;
    }
    auVar3._8_8_ = 1;
    auVar3._0_8_ = uVar2;
    return auVar3;
  }
  auVar4._0_8_ = -(-uVar1 / 1000) - (ulong)(500 < -uVar1 % 1000);
  auVar4._8_8_ = 1;
  return auVar4;
}


