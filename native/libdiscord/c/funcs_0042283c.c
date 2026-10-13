// ===== 0042283c  FUN_0042283c =====

undefined8 FUN_0042283c(long param_1)

{
  (**(code **)(**(long **)(param_1 + 8) + 0x88))(*(long **)(param_1 + 8),1);
  return 0;
}


// ===== 00422864  FUN_00422864 =====

undefined8 FUN_00422864(long param_1)

{
  (**(code **)(**(long **)(param_1 + 8) + 0x90))(*(long **)(param_1 + 8),0);
  return 0;
}


// ===== 0042288c  FUN_0042288c =====

undefined8 FUN_0042288c(void)

{
  return 0;
}


// ===== 00422894  FUN_00422894 =====

undefined8 FUN_00422894(void)

{
  return 0;
}


// ===== 0042289c  FUN_0042289c =====

undefined8 FUN_0042289c(long param_1)

{
  (**(code **)(**(long **)(param_1 + 8) + 0x78))(*(long **)(param_1 + 8),1);
  return 0;
}


// ===== 004228c4  FUN_004228c4 =====

undefined8 FUN_004228c4(long param_1)

{
  (**(code **)(**(long **)(param_1 + 8) + 0x80))(*(long **)(param_1 + 8),0);
  return 0;
}


// ===== 004228ec  FUN_004228ec =====

undefined8 FUN_004228ec(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0x5c2,"InitSpeaker"," not implemented for audio state");
  }
  return 0xffffffff;
}


// ===== 00422930  FUN_00422930 =====

undefined8 FUN_00422930(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0x5f2,"SpeakerIsInitialized"," not implemented for audio state");
  }
  return 1;
}


// ===== 00422974  FUN_00422974 =====

undefined8 FUN_00422974(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0x622,"InitMicrophone"," not implemented for audio state");
  }
  return 0xffffffff;
}


// ===== 004229b8  FUN_004229b8 =====

undefined8 FUN_004229b8(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0x652,"MicrophoneIsInitialized"," not implemented for audio state");
  }
  return 1;
}


// ===== 004229fc  FUN_004229fc =====

undefined8 FUN_004229fc(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0x682,"SpeakerVolumeIsAvailable"," not implemented for audio state");
  }
  return 0xffffffff;
}


// ===== 00422a40  FUN_00422a40 =====

undefined8 FUN_00422a40(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0x6b2,"SetSpeakerVolume"," not implemented for audio state");
  }
  return 0xffffffff;
}


// ===== 00422a84  FUN_00422a84 =====

undefined8 FUN_00422a84(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0x6e2,"SpeakerVolume"," not implemented for audio state");
  }
  return 0xffffffff;
}


// ===== 00422ac8  FUN_00422ac8 =====

undefined8 FUN_00422ac8(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0x712,"MaxSpeakerVolume"," not implemented for audio state");
  }
  return 0xffffffff;
}


// ===== 00422b0c  FUN_00422b0c =====

undefined8 FUN_00422b0c(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0x742,"MinSpeakerVolume"," not implemented for audio state");
  }
  return 0xffffffff;
}


// ===== 00422b50  FUN_00422b50 =====

undefined8 FUN_00422b50(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0x772,"MicrophoneVolumeIsAvailable"," not implemented for audio state");
  }
  return 0xffffffff;
}


// ===== 00422b94  FUN_00422b94 =====

undefined8 FUN_00422b94(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0x7a2,"SetMicrophoneVolume"," not implemented for audio state");
  }
  return 0xffffffff;
}


// ===== 00422bd8  FUN_00422bd8 =====

undefined8 FUN_00422bd8(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0x7d2,"MicrophoneVolume"," not implemented for audio state");
  }
  return 0xffffffff;
}


// ===== 00422c1c  FUN_00422c1c =====

undefined8 FUN_00422c1c(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0x802,"MaxMicrophoneVolume"," not implemented for audio state");
  }
  return 0xffffffff;
}


// ===== 00422c60  FUN_00422c60 =====

undefined8 FUN_00422c60(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0x832,"MinMicrophoneVolume"," not implemented for audio state");
  }
  return 0xffffffff;
}


// ===== 00422ca4  FUN_00422ca4 =====

undefined8 FUN_00422ca4(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0x862,"SpeakerMuteIsAvailable"," not implemented for audio state");
  }
  return 0xffffffff;
}


// ===== 00422ce8  FUN_00422ce8 =====

undefined8 FUN_00422ce8(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0x892,"SetSpeakerMute"," not implemented for audio state");
  }
  return 0xffffffff;
}


// ===== 00422d2c  FUN_00422d2c =====

undefined8 FUN_00422d2c(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0x8c2,"SpeakerMute"," not implemented for audio state");
  }
  return 0xffffffff;
}


// ===== 00422d70  FUN_00422d70 =====

undefined8 FUN_00422d70(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0x8f2,"MicrophoneMuteIsAvailable"," not implemented for audio state");
  }
  return 0xffffffff;
}


// ===== 00422db4  FUN_00422db4 =====

undefined8 FUN_00422db4(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0x922,"SetMicrophoneMute"," not implemented for audio state");
  }
  return 0xffffffff;
}


// ===== 00422df8  FUN_00422df8 =====

undefined8 FUN_00422df8(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0x952,"MicrophoneMute"," not implemented for audio state");
  }
  return 0xffffffff;
}


// ===== 00422e3c  FUN_00422e3c =====

undefined8 FUN_00422e3c(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0x982,"StereoPlayoutIsAvailable"," not implemented for audio state");
  }
  return 0xffffffff;
}


// ===== 00422e80  FUN_00422e80 =====

undefined8 FUN_00422e80(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0x9b2,"SetStereoPlayout"," not implemented for audio state");
  }
  return 0xffffffff;
}


// ===== 00422ec4  FUN_00422ec4 =====

undefined8 FUN_00422ec4(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0x9e2,"StereoPlayout"," not implemented for audio state");
  }
  return 0xffffffff;
}


// ===== 00422f08  FUN_00422f08 =====

undefined8 FUN_00422f08(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0xa12,"StereoRecordingIsAvailable"," not implemented for audio state");
  }
  return 0xffffffff;
}


// ===== 00422f4c  FUN_00422f4c =====

undefined8 FUN_00422f4c(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0xa42,"SetStereoRecording"," not implemented for audio state");
  }
  return 0xffffffff;
}


// ===== 00422f90  FUN_00422f90 =====

undefined8 FUN_00422f90(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0xa72,"StereoRecording"," not implemented for audio state");
  }
  return 0xffffffff;
}


// ===== 00422fd4  FUN_00422fd4 =====

void FUN_00422fd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00422fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 200))();
  return;
}


// ===== 00422fe4  FUN_00422fe4 =====

undefined8 FUN_00422fe4(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0xad2,"BuiltInAECIsAvailable"," not implemented for audio state");
  }
  return 0;
}


// ===== 00423028  FUN_00423028 =====

undefined8 FUN_00423028(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0xb02,"BuiltInAGCIsAvailable"," not implemented for audio state");
  }
  return 0;
}


// ===== 0042306c  FUN_0042306c =====

undefined8 FUN_0042306c(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0xb32,"BuiltInNSIsAvailable"," not implemented for audio state");
  }
  return 0;
}


// ===== 004230b0  FUN_004230b0 =====

undefined8 FUN_004230b0(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0xb62,"EnableBuiltInAEC"," not implemented for audio state");
  }
  return 0xffffffff;
}


// ===== 004230f4  FUN_004230f4 =====

undefined8 FUN_004230f4(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0xb92,"EnableBuiltInAGC"," not implemented for audio state");
  }
  return 0xffffffff;
}


// ===== 00423138  FUN_00423138 =====

undefined8 FUN_00423138(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0xbc2,"EnableBuiltInNS"," not implemented for audio state");
  }
  return 0xffffffff;
}


// ===== 0042317c  FUN_0042317c =====

void FUN_0042317c(void)

{
  return;
}


// ===== 00423180  FUN_00423180 =====

void FUN_00423180(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x423184);
  (*pcVar1)();
}


// ===== 00423184  FUN_00423184 =====

undefined8 FUN_00423184(void)

{
  return 0xffffffff;
}


// ===== 0042318c  FUN_0042318c =====

void FUN_0042318c(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x28] = 0;
  return;
}


// ===== 00423198  FUN_00423198 =====

void FUN_00423198(undefined8 *param_1)

{
  param_1[0x1e] = 0;
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
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}


// ===== 004231c4  FUN_004231c4 =====

void FUN_004231c4(undefined8 *param_1)

{
  param_1[0x1e] = 0;
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
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}


// ===== 004231f0  FUN_004231f0 =====

void FUN_004231f0(undefined8 param_1,long *param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  byte bVar8;
  uint uVar9;
  long lVar10;
  void *pvVar11;
  ushort uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  void *local_1b0;
  void *pvStack_1a8;
  void *local_1a0;
  void *local_190;
  void *pvStack_188;
  void *local_180;
  undefined4 local_170;
  undefined3 uStack_16c;
  undefined1 local_169;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  
  lVar10 = tpidr_el0;
  local_78 = *(long *)(lVar10 + 0x28);
  if (*(char *)(*(long *)(param_3 + 0x18) + 0x10) != '\0') goto LAB_0042352c;
  uVar12 = (**(code **)(*param_2 + 0x50))(param_2);
  uVar9 = (uint)(short)uVar12;
  local_190 = (void *)0x0;
  pvStack_188 = (void *)0x0;
  local_180 = (void *)0x0;
  if ((int)uVar9 < 1) {
LAB_004233e8:
    pvVar3 = pvStack_188;
    local_169 = 0;
    uStack_80 = 0;
    local_88 = 0;
    uStack_90 = 0;
    local_98 = 0;
    uStack_a0 = 0;
    local_a8 = 0;
    uStack_b0 = 0;
    local_b8 = 0;
    uStack_c0 = 0;
    local_c8 = 0;
    uStack_d0 = 0;
    local_d8 = 0;
    uStack_e0 = 0;
    local_e8 = 0;
    uStack_f0 = 0;
    local_f8 = 0;
    uStack_100 = 0;
    local_108 = 0;
    uStack_110 = 0;
    local_118 = 0;
    uStack_120 = 0;
    local_128 = 0;
    local_168 = 0;
    uStack_160 = 0x700000000000000;
    local_170 = 0x61666564;
    uStack_16c = 0x746c75;
    uStack_130 = 0;
    local_138 = 0;
    uStack_140 = 0;
    local_148 = 0;
    uStack_150 = 0;
    local_158 = 0;
    if (pvStack_188 == local_180) {
      FUN_00424254(&local_190,&local_170);
    }
    else {
      if (pvStack_188 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                   ,0x23,"__location != nullptr","null pointer given to construct_at");
      }
      FUN_004243d4(pvStack_188,&local_170);
      pvStack_188 = (void *)((long)pvVar3 + 0xf8);
    }
    FUN_00411fac(&local_170);
  }
  else {
    uVar14 = (ulong)uVar9 & 0xffff;
    uVar15 = uVar14 * 0x100 + (ulong)uVar12 * -8;
    local_190 = operator_new(uVar15);
    pvVar3 = (void *)((long)local_190 + uVar15);
    local_180 = pvVar3;
    memset(local_190,0,uVar15 - ((int)uVar15 - 0xf8U) % 0xf8);
    if ((uVar9 & 0xfffe) == 0) {
      uVar14 = 1;
    }
    uVar15 = 0;
    lVar16 = 0;
    pvStack_188 = pvVar3;
    do {
      pvVar3 = local_190;
      uVar13 = ((long)pvStack_188 - (long)local_190 >> 3) * -0x1084210842108421;
      if (uVar13 < uVar15 || uVar13 - uVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x587,
                   "__n < size()","vector[] index out of bounds");
      }
      plVar4 = (long *)((long)local_190 + lVar16);
      bVar8 = *(byte *)((long)plVar4 + 0x17);
      uVar13 = plVar4[1];
      if (-1 < (char)bVar8) {
        uVar13 = (ulong)bVar8;
      }
      if (uVar13 < 0x80) {
        FUN_0054809c(plVar4,0x80 - uVar13,0);
      }
      else {
        if (-1 < (char)bVar8) goto LAB_004235ac;
        plVar4[1] = 0x80;
        *(undefined1 *)(*plVar4 + 0x80) = 0;
      }
      plVar5 = (long *)((long)pvVar3 + lVar16);
      plVar2 = plVar5 + 3;
      bVar8 = *(byte *)((long)plVar5 + 0x2f);
      plVar7 = (long *)*plVar5;
      if (-1 < *(char *)((long)plVar4 + 0x17)) {
        plVar7 = plVar4;
      }
      uVar13 = plVar5[4];
      if (-1 < (char)bVar8) {
        uVar13 = (ulong)bVar8;
      }
      if (uVar13 < 0x80) {
        FUN_0054809c(plVar2,0x80 - uVar13,0);
      }
      else {
        if (-1 < (char)bVar8) {
LAB_004235ac:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                     "__s < __min_cap",
                     "__s should never be greater than or equal to the short string capacity");
        }
        plVar5[4] = 0x80;
        *(undefined1 *)(*plVar2 + 0x80) = 0;
      }
      plVar6 = (long *)*plVar2;
      if (-1 < *(char *)((long)plVar5 + 0x2f)) {
        plVar6 = plVar2;
      }
      (**(code **)(*param_2 + 0x60))(param_2,uVar15 & 0xffffffff,plVar7,plVar6);
      FUN_004235d8(plVar4);
      lVar1 = lVar16 + 0xf8;
      *(int *)((long)pvVar3 + lVar16 + 0x30) = (int)uVar15;
      uVar15 = uVar15 + 1;
      lVar16 = lVar1;
    } while (uVar14 * 0xf8 != lVar1);
    if ((int)uVar9 < 1) goto LAB_004233e8;
  }
  local_1a0 = local_180;
  pvStack_1a8 = pvStack_188;
  pvStack_188 = (void *)0x0;
  local_180 = (void *)0x0;
  local_1b0 = local_190;
  local_190 = (void *)0x0;
  (**(code **)(param_3 + 0x10))(param_3,&local_1b0,0 < (int)uVar9);
  pvVar11 = local_1b0;
  pvVar3 = pvStack_1a8;
  if (local_1b0 != (void *)0x0) {
    while (pvVar3 != pvVar11) {
      FUN_00411fac((void *)((long)pvVar3 + -0xf8));
      pvVar3 = (void *)((long)pvVar3 + -0xf8);
    }
    pvStack_1a8 = pvVar11;
    operator_delete(local_1b0);
  }
  pvVar11 = local_190;
  pvVar3 = pvStack_188;
  if (local_190 != (void *)0x0) {
    while (pvVar3 != pvVar11) {
      FUN_00411fac((void *)((long)pvVar3 + -0xf8));
      pvVar3 = (void *)((long)pvVar3 + -0xf8);
    }
    pvStack_188 = pvVar11;
    operator_delete(local_190);
  }
LAB_0042352c:
  if (*(long *)(lVar10 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004235d8  FUN_004235d8 =====

void FUN_004235d8(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte bVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  bVar3 = *(byte *)((long)param_1 + 0x17);
  uVar2 = param_1[1];
  if (-1 < (char)bVar3) {
    uVar2 = (ulong)bVar3;
  }
  if (uVar2 != 0) {
    puVar6 = (undefined8 *)*param_1;
    puVar1 = puVar6;
    if (-1 < (char)bVar3) {
      puVar1 = param_1;
    }
    pvVar4 = memchr(puVar1,0,uVar2);
    uVar5 = (long)pvVar4 - (long)puVar1;
    if (pvVar4 != (void *)0x0 && uVar5 != 0xffffffffffffffff) {
      if (uVar5 < uVar2 || uVar5 - uVar2 == 0) {
        if ((char)bVar3 < '\0') {
          param_1[1] = uVar5;
        }
        else {
          if (0x16 < uVar5) goto LAB_0042370c;
          *(char *)((long)param_1 + 0x17) = (char)uVar5;
          puVar6 = param_1;
        }
        *(undefined1 *)((long)puVar6 + uVar5) = 0;
      }
      else {
        FUN_0054809c(param_1,uVar5 - uVar2,0);
      }
    }
  }
  bVar3 = *(byte *)((long)param_1 + 0x2f);
  uVar2 = param_1[4];
  if (-1 < (char)bVar3) {
    uVar2 = (ulong)bVar3;
  }
  if (uVar2 != 0) {
    puVar1 = param_1 + 3;
    puVar7 = (undefined8 *)*puVar1;
    puVar6 = puVar7;
    if (-1 < (char)bVar3) {
      puVar6 = puVar1;
    }
    pvVar4 = memchr(puVar6,0,uVar2);
    if ((pvVar4 != (void *)0x0) &&
       (uVar5 = (long)pvVar4 - (long)puVar6, uVar5 != 0xffffffffffffffff)) {
      if (uVar2 <= uVar5 && uVar5 - uVar2 != 0) {
        FUN_0054809c(puVar1,uVar5 - uVar2,0);
        return;
      }
      if ((char)bVar3 < '\0') {
        param_1[4] = uVar5;
      }
      else {
        if (0x16 < uVar5) {
LAB_0042370c:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                     "__s < __min_cap",
                     "__s should never be greater than or equal to the short string capacity");
        }
        *(char *)((long)param_1 + 0x2f) = (char)uVar5;
        puVar7 = puVar1;
      }
      *(undefined1 *)((long)puVar7 + uVar5) = 0;
    }
  }
  return;
}


// ===== 00423734  FUN_00423734 =====

void FUN_00423734(undefined8 param_1,long *param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  byte bVar8;
  uint uVar9;
  long lVar10;
  void *pvVar11;
  ushort uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  void *local_1b0;
  void *pvStack_1a8;
  void *local_1a0;
  void *local_190;
  void *pvStack_188;
  void *local_180;
  undefined4 local_170;
  undefined3 uStack_16c;
  undefined1 local_169;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  
  lVar10 = tpidr_el0;
  local_78 = *(long *)(lVar10 + 0x28);
  if (*(char *)(*(long *)(param_3 + 0x18) + 0x10) != '\0') goto LAB_00423a70;
  uVar12 = (**(code **)(*param_2 + 0x48))(param_2);
  uVar9 = (uint)(short)uVar12;
  local_190 = (void *)0x0;
  pvStack_188 = (void *)0x0;
  local_180 = (void *)0x0;
  if ((int)uVar9 < 1) {
LAB_0042392c:
    pvVar3 = pvStack_188;
    local_169 = 0;
    uStack_80 = 0;
    local_88 = 0;
    uStack_90 = 0;
    local_98 = 0;
    uStack_a0 = 0;
    local_a8 = 0;
    uStack_b0 = 0;
    local_b8 = 0;
    uStack_c0 = 0;
    local_c8 = 0;
    uStack_d0 = 0;
    local_d8 = 0;
    uStack_e0 = 0;
    local_e8 = 0;
    uStack_f0 = 0;
    local_f8 = 0;
    uStack_100 = 0;
    local_108 = 0;
    uStack_110 = 0;
    local_118 = 0;
    uStack_120 = 0;
    local_128 = 0;
    local_168 = 0;
    uStack_160 = 0x700000000000000;
    local_170 = 0x61666564;
    uStack_16c = 0x746c75;
    uStack_130 = 0;
    local_138 = 0;
    uStack_140 = 0;
    local_148 = 0;
    uStack_150 = 0;
    local_158 = 0;
    if (pvStack_188 == local_180) {
      FUN_00424254(&local_190,&local_170);
    }
    else {
      if (pvStack_188 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                   ,0x23,"__location != nullptr","null pointer given to construct_at");
      }
      FUN_004243d4(pvStack_188,&local_170);
      pvStack_188 = (void *)((long)pvVar3 + 0xf8);
    }
    FUN_00411fac(&local_170);
  }
  else {
    uVar14 = (ulong)uVar9 & 0xffff;
    uVar15 = uVar14 * 0x100 + (ulong)uVar12 * -8;
    local_190 = operator_new(uVar15);
    pvVar3 = (void *)((long)local_190 + uVar15);
    local_180 = pvVar3;
    memset(local_190,0,uVar15 - ((int)uVar15 - 0xf8U) % 0xf8);
    if ((uVar9 & 0xfffe) == 0) {
      uVar14 = 1;
    }
    uVar15 = 0;
    lVar16 = 0;
    pvStack_188 = pvVar3;
    do {
      pvVar3 = local_190;
      uVar13 = ((long)pvStack_188 - (long)local_190 >> 3) * -0x1084210842108421;
      if (uVar13 < uVar15 || uVar13 - uVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x587,
                   "__n < size()","vector[] index out of bounds");
      }
      plVar4 = (long *)((long)local_190 + lVar16);
      bVar8 = *(byte *)((long)plVar4 + 0x17);
      uVar13 = plVar4[1];
      if (-1 < (char)bVar8) {
        uVar13 = (ulong)bVar8;
      }
      if (uVar13 < 0x80) {
        FUN_0054809c(plVar4,0x80 - uVar13,0);
      }
      else {
        if (-1 < (char)bVar8) goto LAB_00423af0;
        plVar4[1] = 0x80;
        *(undefined1 *)(*plVar4 + 0x80) = 0;
      }
      plVar5 = (long *)((long)pvVar3 + lVar16);
      plVar2 = plVar5 + 3;
      bVar8 = *(byte *)((long)plVar5 + 0x2f);
      plVar7 = (long *)*plVar5;
      if (-1 < *(char *)((long)plVar4 + 0x17)) {
        plVar7 = plVar4;
      }
      uVar13 = plVar5[4];
      if (-1 < (char)bVar8) {
        uVar13 = (ulong)bVar8;
      }
      if (uVar13 < 0x80) {
        FUN_0054809c(plVar2,0x80 - uVar13,0);
      }
      else {
        if (-1 < (char)bVar8) {
LAB_00423af0:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                     "__s < __min_cap",
                     "__s should never be greater than or equal to the short string capacity");
        }
        plVar5[4] = 0x80;
        *(undefined1 *)(*plVar2 + 0x80) = 0;
      }
      plVar6 = (long *)*plVar2;
      if (-1 < *(char *)((long)plVar5 + 0x2f)) {
        plVar6 = plVar2;
      }
      (**(code **)(*param_2 + 0x58))(param_2,uVar15 & 0xffffffff,plVar7,plVar6);
      FUN_004235d8(plVar4);
      lVar1 = lVar16 + 0xf8;
      *(int *)((long)pvVar3 + lVar16 + 0x30) = (int)uVar15;
      uVar15 = uVar15 + 1;
      lVar16 = lVar1;
    } while (uVar14 * 0xf8 != lVar1);
    if ((int)uVar9 < 1) goto LAB_0042392c;
  }
  local_1a0 = local_180;
  pvStack_1a8 = pvStack_188;
  pvStack_188 = (void *)0x0;
  local_180 = (void *)0x0;
  local_1b0 = local_190;
  local_190 = (void *)0x0;
  (**(code **)(param_3 + 0x10))(param_3,&local_1b0,0 < (int)uVar9);
  pvVar11 = local_1b0;
  pvVar3 = pvStack_1a8;
  if (local_1b0 != (void *)0x0) {
    while (pvVar3 != pvVar11) {
      FUN_00411fac((void *)((long)pvVar3 + -0xf8));
      pvVar3 = (void *)((long)pvVar3 + -0xf8);
    }
    pvStack_1a8 = pvVar11;
    operator_delete(local_1b0);
  }
  pvVar11 = local_190;
  pvVar3 = pvStack_188;
  if (local_190 != (void *)0x0) {
    while (pvVar3 != pvVar11) {
      FUN_00411fac((void *)((long)pvVar3 + -0xf8));
      pvVar3 = (void *)((long)pvVar3 + -0xf8);
    }
    pvStack_188 = pvVar11;
    operator_delete(local_190);
  }
LAB_00423a70:
  if (*(long *)(lVar10 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00423b1c  FUN_00423b1c =====

void FUN_00423b1c(long *param_1,int *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  short sVar4;
  int iVar5;
  char *****pppppcVar6;
  char **ppcVar7;
  int *piVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  char *local_170;
  size_t sStack_168;
  ulong local_160;
  char ****ppppcStack_158;
  ulong local_150;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined1 local_138;
  undefined1 local_120;
  undefined1 local_118;
  undefined1 local_100;
  undefined1 local_f8;
  undefined1 local_e0;
  undefined1 local_d8;
  undefined1 local_c0;
  undefined1 local_b8;
  undefined1 local_a0;
  undefined1 local_98;
  undefined1 local_80;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  uVar10 = *(ulong *)(param_2 + 2);
  piVar8 = *(int **)param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar10 = (ulong)*(byte *)((long)param_2 + 0x17);
    piVar8 = param_2;
  }
  if (piVar8 == (int *)0x0 && uVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131,
               "__len == 0 || __s != nullptr",
               "string_view::string_view(_CharT *, size_t): received nullptr");
  }
  if ((uVar10 == 7) && (*piVar8 == 0x61666564 && *(int *)((long)piVar8 + 3) == 0x746c7561)) {
    if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* WARNING: Could not recover jumptable at 0x00423e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x68))(param_1,0);
      return;
    }
  }
  else {
    iVar5 = (**(code **)(*param_1 + 0x78))(param_1,param_2);
    if (iVar5 < 0) {
      sVar4 = (**(code **)(*param_1 + 0x48))(param_1);
      if (0 < sVar4) {
        uVar10 = 0;
        do {
          local_140 = 0;
          local_138 = 0;
          ppppcStack_158 = (char ****)0x0;
          local_160 = 0;
          uStack_148 = 0;
          local_150 = 0;
          sStack_168 = 0;
          local_170 = (char *)0x0;
          local_120 = 0;
          local_118 = 0;
          local_100 = 0;
          local_f8 = 0;
          local_e0 = 0;
          local_d8 = 0;
          local_c0 = 0;
          local_b8 = 0;
          local_a0 = 0;
          local_98 = 0;
          local_80 = 0;
          FUN_0054809c(&local_170,0x80,0);
          ppcVar7 = (char **)local_170;
          if (-1 < (long)local_160) {
            ppcVar7 = &local_170;
          }
          uVar11 = local_150;
          if (-1 < (long)uStack_148) {
            uVar11 = (ulong)uStack_148._7_1_;
          }
          if (uVar11 < 0x80) {
            FUN_0054809c(&ppppcStack_158,0x80 - uVar11,0);
          }
          else {
            if (-1 < (long)uStack_148) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                         "__s < __min_cap",
                         "__s should never be greater than or equal to the short string capacity");
            }
            local_150 = 0x80;
            *(char *)(ppppcStack_158 + 0x10) = '\0';
          }
          pppppcVar6 = (char *****)ppppcStack_158;
          if (-1 < (char)uStack_148._7_1_) {
            pppppcVar6 = &ppppcStack_158;
          }
          (**(code **)(*param_1 + 0x58))(param_1,uVar10 & 0xffffffff,ppcVar7,pppppcVar6);
          FUN_004235d8(&local_170);
          bVar2 = *(byte *)((long)param_2 + 0x17);
          uVar11 = (ulong)bVar2;
          __n = *(size_t *)(param_2 + 2);
          if (-1 < (char)bVar2) {
            __n = uVar11;
          }
          uVar9 = local_150;
          if (-1 < (long)uStack_148) {
            uVar9 = uStack_148 >> 0x38;
          }
          if (__n == uVar9) {
            piVar8 = *(int **)param_2;
            if (-1 < (char)bVar2) {
              piVar8 = param_2;
            }
            pppppcVar6 = (char *****)ppppcStack_158;
            if (-1 < (long)uStack_148) {
              pppppcVar6 = &ppppcStack_158;
            }
            if ((char)bVar2 < '\0') {
              if ((__n != 0) && (iVar5 = memcmp(piVar8,pppppcVar6,__n), iVar5 != 0))
              goto LAB_00423d64;
            }
            else {
              piVar8 = param_2;
              uVar9 = uVar11;
              if (bVar2 != 0) {
                while ((char)*piVar8 == *(char *)pppppcVar6) {
                  uVar9 = uVar9 - 1;
                  piVar8 = (int *)((long)piVar8 + 1);
                  pppppcVar6 = (char *****)((long)pppppcVar6 + 1);
                  if (uVar9 == 0) goto LAB_00423dd8;
                }
                goto LAB_00423d64;
              }
            }
            goto LAB_00423dd8;
          }
LAB_00423d64:
          sVar1 = sStack_168;
          if (-1 < (long)local_160) {
            sVar1 = local_160 >> 0x38;
          }
          if (__n == sVar1) {
            piVar8 = *(int **)param_2;
            if (-1 < (char)bVar2) {
              piVar8 = param_2;
            }
            ppcVar7 = (char **)local_170;
            if (-1 < (long)local_160) {
              ppcVar7 = &local_170;
            }
            if ((char)bVar2 < '\0') {
              if ((__n == 0) || (iVar5 = memcmp(piVar8,ppcVar7,__n), iVar5 == 0)) goto LAB_00423dd8;
            }
            else {
              piVar8 = param_2;
              if (bVar2 == 0) {
LAB_00423dd8:
                (**(code **)(*param_1 + 0x68))(param_1,uVar10 & 0xffffffff);
                FUN_00411fac(&local_170);
                break;
              }
              while ((char)*piVar8 == *(char *)ppcVar7) {
                uVar11 = uVar11 - 1;
                piVar8 = (int *)((long)piVar8 + 1);
                ppcVar7 = (char **)((long)ppcVar7 + 1);
                if (uVar11 == 0) goto LAB_00423dd8;
              }
            }
          }
          FUN_00411fac(&local_170);
          uVar10 = uVar10 + 1;
        } while (uVar10 != ((ulong)(uint)(int)sVar4 & 0xffff));
      }
    }
    if (*(long *)(lVar3 + 0x28) == local_70) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00423eb8  FUN_00423eb8 =====

void FUN_00423eb8(long *param_1,int *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  short sVar4;
  int iVar5;
  char *****pppppcVar6;
  char **ppcVar7;
  int *piVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  char *local_170;
  size_t sStack_168;
  ulong local_160;
  char ****ppppcStack_158;
  ulong local_150;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined1 local_138;
  undefined1 local_120;
  undefined1 local_118;
  undefined1 local_100;
  undefined1 local_f8;
  undefined1 local_e0;
  undefined1 local_d8;
  undefined1 local_c0;
  undefined1 local_b8;
  undefined1 local_a0;
  undefined1 local_98;
  undefined1 local_80;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  uVar10 = *(ulong *)(param_2 + 2);
  piVar8 = *(int **)param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar10 = (ulong)*(byte *)((long)param_2 + 0x17);
    piVar8 = param_2;
  }
  if (piVar8 == (int *)0x0 && uVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131,
               "__len == 0 || __s != nullptr",
               "string_view::string_view(_CharT *, size_t): received nullptr");
  }
  if ((uVar10 == 7) && (*piVar8 == 0x61666564 && *(int *)((long)piVar8 + 3) == 0x746c7561)) {
    if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* WARNING: Could not recover jumptable at 0x004241fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x80))(param_1,0);
      return;
    }
  }
  else {
    iVar5 = (**(code **)(*param_1 + 0x90))(param_1,param_2);
    if (iVar5 < 0) {
      sVar4 = (**(code **)(*param_1 + 0x50))(param_1);
      if (0 < sVar4) {
        uVar10 = 0;
        do {
          local_140 = 0;
          local_138 = 0;
          ppppcStack_158 = (char ****)0x0;
          local_160 = 0;
          uStack_148 = 0;
          local_150 = 0;
          sStack_168 = 0;
          local_170 = (char *)0x0;
          local_120 = 0;
          local_118 = 0;
          local_100 = 0;
          local_f8 = 0;
          local_e0 = 0;
          local_d8 = 0;
          local_c0 = 0;
          local_b8 = 0;
          local_a0 = 0;
          local_98 = 0;
          local_80 = 0;
          FUN_0054809c(&local_170,0x80,0);
          ppcVar7 = (char **)local_170;
          if (-1 < (long)local_160) {
            ppcVar7 = &local_170;
          }
          uVar11 = local_150;
          if (-1 < (long)uStack_148) {
            uVar11 = (ulong)uStack_148._7_1_;
          }
          if (uVar11 < 0x80) {
            FUN_0054809c(&ppppcStack_158,0x80 - uVar11,0);
          }
          else {
            if (-1 < (long)uStack_148) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                         "__s < __min_cap",
                         "__s should never be greater than or equal to the short string capacity");
            }
            local_150 = 0x80;
            *(char *)(ppppcStack_158 + 0x10) = '\0';
          }
          pppppcVar6 = (char *****)ppppcStack_158;
          if (-1 < (char)uStack_148._7_1_) {
            pppppcVar6 = &ppppcStack_158;
          }
          (**(code **)(*param_1 + 0x60))(param_1,uVar10 & 0xffffffff,ppcVar7,pppppcVar6);
          FUN_004235d8(&local_170);
          bVar2 = *(byte *)((long)param_2 + 0x17);
          uVar11 = (ulong)bVar2;
          __n = *(size_t *)(param_2 + 2);
          if (-1 < (char)bVar2) {
            __n = uVar11;
          }
          uVar9 = local_150;
          if (-1 < (long)uStack_148) {
            uVar9 = uStack_148 >> 0x38;
          }
          if (__n == uVar9) {
            piVar8 = *(int **)param_2;
            if (-1 < (char)bVar2) {
              piVar8 = param_2;
            }
            pppppcVar6 = (char *****)ppppcStack_158;
            if (-1 < (long)uStack_148) {
              pppppcVar6 = &ppppcStack_158;
            }
            if ((char)bVar2 < '\0') {
              if ((__n != 0) && (iVar5 = memcmp(piVar8,pppppcVar6,__n), iVar5 != 0))
              goto LAB_00424100;
            }
            else {
              piVar8 = param_2;
              uVar9 = uVar11;
              if (bVar2 != 0) {
                while ((char)*piVar8 == *(char *)pppppcVar6) {
                  uVar9 = uVar9 - 1;
                  piVar8 = (int *)((long)piVar8 + 1);
                  pppppcVar6 = (char *****)((long)pppppcVar6 + 1);
                  if (uVar9 == 0) goto LAB_00424174;
                }
                goto LAB_00424100;
              }
            }
            goto LAB_00424174;
          }
LAB_00424100:
          sVar1 = sStack_168;
          if (-1 < (long)local_160) {
            sVar1 = local_160 >> 0x38;
          }
          if (__n == sVar1) {
            piVar8 = *(int **)param_2;
            if (-1 < (char)bVar2) {
              piVar8 = param_2;
            }
            ppcVar7 = (char **)local_170;
            if (-1 < (long)local_160) {
              ppcVar7 = &local_170;
            }
            if ((char)bVar2 < '\0') {
              if ((__n == 0) || (iVar5 = memcmp(piVar8,ppcVar7,__n), iVar5 == 0)) goto LAB_00424174;
            }
            else {
              piVar8 = param_2;
              if (bVar2 == 0) {
LAB_00424174:
                (**(code **)(*param_1 + 0x80))(param_1,uVar10 & 0xffffffff);
                FUN_00411fac(&local_170);
                break;
              }
              while ((char)*piVar8 == *(char *)ppcVar7) {
                uVar11 = uVar11 - 1;
                piVar8 = (int *)((long)piVar8 + 1);
                ppcVar7 = (char **)((long)ppcVar7 + 1);
                if (uVar11 == 0) goto LAB_00424174;
              }
            }
          }
          FUN_00411fac(&local_170);
          uVar10 = uVar10 + 1;
        } while (uVar10 != ((ulong)(uint)(int)sVar4 & 0xffff));
      }
    }
    if (*(long *)(lVar3 + 0x28) == local_70) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00424254  FUN_00424254 =====

void FUN_00424254(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  void *pvVar7;
  void *pvVar8;
  
  lVar4 = param_1[1] - *param_1 >> 3;
  uVar1 = lVar4 * -0x1084210842108421 + 1;
  if (0x108421084210842 < uVar1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar5 = param_1[2] - *param_1 >> 3;
  uVar6 = lVar5 * -0x2108421084210842;
  if (uVar6 < uVar1 || uVar6 - uVar1 == 0) {
    uVar6 = uVar1;
  }
  if (0x84210842108420 < (ulong)(lVar5 * -0x1084210842108421)) {
    uVar6 = 0x108421084210842;
  }
  if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
  if (0x108421084210842 < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_00401ad4();
  }
  pvVar3 = operator_new(uVar6 * 0xf8);
  pvVar2 = (void *)((long)pvVar3 + uVar6 * 0xf8);
  pvVar3 = (void *)((long)pvVar3 + lVar4 * 8);
  FUN_004243d4(pvVar3,param_2);
  pvVar8 = (void *)*param_1;
  pvVar7 = (void *)param_1[1];
  lVar4 = (long)pvVar3 + 0xf8;
  if (pvVar7 == pvVar8) {
    *param_1 = (long)pvVar3;
    param_1[1] = lVar4;
    param_1[2] = (long)pvVar2;
  }
  else {
    do {
      pvVar3 = (void *)((long)pvVar3 + -0xf8);
      pvVar7 = (void *)((long)pvVar7 + -0xf8);
      FUN_004245ac(pvVar3,pvVar7);
    } while (pvVar7 != pvVar8);
    pvVar7 = (void *)*param_1;
    pvVar8 = (void *)param_1[1];
    *param_1 = (long)pvVar3;
    param_1[1] = lVar4;
    param_1[2] = (long)pvVar2;
    while (pvVar8 != pvVar7) {
      pvVar8 = (void *)((long)pvVar8 + -0xf8);
      FUN_00411fac(pvVar8);
    }
  }
  if (pvVar7 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar7);
  return;
}


// ===== 004243d4  FUN_004243d4 =====

void FUN_004243d4(long param_1,long param_2)

{
  FUN_00411394();
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  if (*(char *)(param_2 + 0x50) != '\0') {
    FUN_004244a8((undefined1 *)(param_1 + 0x38),param_2 + 0x38);
  }
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  if (*(char *)(param_2 + 0x70) != '\0') {
    FUN_004244a8((undefined1 *)(param_1 + 0x58),param_2 + 0x58);
  }
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0x90) = 0;
  if (*(char *)(param_2 + 0x90) != '\0') {
    FUN_004244a8((undefined1 *)(param_1 + 0x78),param_2 + 0x78);
  }
  *(undefined1 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  if (*(char *)(param_2 + 0xb0) != '\0') {
    FUN_004244a8((undefined1 *)(param_1 + 0x98),param_2 + 0x98);
  }
  *(undefined1 *)(param_1 + 0xb8) = 0;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  if (*(char *)(param_2 + 0xd0) != '\0') {
    FUN_004244a8((undefined1 *)(param_1 + 0xb8),param_2 + 0xb8);
  }
  *(undefined1 *)(param_1 + 0xd8) = 0;
  *(undefined1 *)(param_1 + 0xf0) = 0;
  if (*(char *)(param_2 + 0xf0) != '\0') {
    FUN_004244a8((undefined1 *)(param_1 + 0xd8),param_2 + 0xd8);
    return;
  }
  return;
}


// ===== 004244a8  FUN_004244a8 =====

void FUN_004244a8(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *__src;
  ulong uVar2;
  undefined8 *__dest;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + 3) != '\0') {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x167,
               "!has_value()","__construct called for engaged __optional_storage");
  }
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    __src = (undefined8 *)*param_2;
    uVar2 = param_2[1];
    if (uVar2 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)uVar2;
      __dest = param_1;
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined8 *)operator_new(uVar1);
      *param_1 = __dest;
      param_1[1] = uVar2;
      param_1[2] = uVar1 | 0x8000000000000000;
    }
    if ((__dest <= __src) && (__src < (undefined8 *)((long)__dest + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar2 + 1);
  }
  else {
    uVar4 = param_2[1];
    uVar3 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar4;
    *param_1 = uVar3;
  }
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}


// ===== 004245ac  FUN_004245ac =====

void FUN_004245ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar4 = param_2[1];
    uVar3 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar4;
    *param_1 = uVar3;
    param_2[1] = 0;
    param_2[2] = 0;
    uVar4 = param_2[4];
    uVar3 = param_2[3];
    *param_2 = 0;
    param_1[5] = param_2[5];
    param_1[4] = uVar4;
    param_1[3] = uVar3;
    param_2[4] = 0;
    param_2[5] = 0;
    uVar1 = *(undefined4 *)(param_2 + 6);
    param_2[3] = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    *(undefined1 *)(param_1 + 10) = 0;
    cVar2 = *(char *)(param_2 + 10);
    *(undefined4 *)(param_1 + 6) = uVar1;
    if (cVar2 != '\0') {
      uVar4 = param_2[8];
      uVar3 = param_2[7];
      param_1[9] = param_2[9];
      param_1[8] = uVar4;
      param_1[7] = uVar3;
      param_2[8] = 0;
      param_2[9] = 0;
      param_2[7] = 0;
      *(undefined1 *)(param_1 + 10) = 1;
    }
    *(undefined1 *)(param_1 + 0xb) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    if (*(char *)(param_2 + 0xe) != '\0') {
      uVar4 = param_2[0xc];
      uVar3 = param_2[0xb];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = uVar4;
      param_1[0xb] = uVar3;
      param_2[0xc] = 0;
      param_2[0xd] = 0;
      param_2[0xb] = 0;
      *(undefined1 *)(param_1 + 0xe) = 1;
    }
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0;
    if (*(char *)(param_2 + 0x12) != '\0') {
      uVar4 = param_2[0x10];
      uVar3 = param_2[0xf];
      param_1[0x11] = param_2[0x11];
      param_1[0x10] = uVar4;
      param_1[0xf] = uVar3;
      param_2[0x10] = 0;
      param_2[0x11] = 0;
      param_2[0xf] = 0;
      *(undefined1 *)(param_1 + 0x12) = 1;
    }
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(undefined1 *)(param_1 + 0x16) = 0;
    if (*(char *)(param_2 + 0x16) != '\0') {
      uVar4 = param_2[0x14];
      uVar3 = param_2[0x13];
      param_1[0x15] = param_2[0x15];
      param_1[0x14] = uVar4;
      param_1[0x13] = uVar3;
      param_2[0x14] = 0;
      param_2[0x15] = 0;
      param_2[0x13] = 0;
      *(undefined1 *)(param_1 + 0x16) = 1;
    }
    *(undefined1 *)(param_1 + 0x17) = 0;
    *(undefined1 *)(param_1 + 0x1a) = 0;
    if (*(char *)(param_2 + 0x1a) != '\0') {
      uVar4 = param_2[0x18];
      uVar3 = param_2[0x17];
      param_1[0x19] = param_2[0x19];
      param_1[0x18] = uVar4;
      param_1[0x17] = uVar3;
      param_2[0x18] = 0;
      param_2[0x19] = 0;
      param_2[0x17] = 0;
      *(undefined1 *)(param_1 + 0x1a) = 1;
    }
    *(undefined1 *)(param_1 + 0x1b) = 0;
    *(undefined1 *)(param_1 + 0x1e) = 0;
    if (*(char *)(param_2 + 0x1e) != '\0') {
      uVar4 = param_2[0x1c];
      uVar3 = param_2[0x1b];
      param_1[0x1d] = param_2[0x1d];
      param_1[0x1c] = uVar4;
      param_1[0x1b] = uVar3;
      param_2[0x1c] = 0;
      param_2[0x1d] = 0;
      param_2[0x1b] = 0;
      *(undefined1 *)(param_1 + 0x1e) = 1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h",
             0x23,"__location != nullptr","null pointer given to construct_at");
}


// ===== 00424758  FUN_00424758 =====

void FUN_00424758(undefined8 *param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  int *piVar10;
  long *plVar11;
  long *local_90;
  long *plStack_88;
  long *local_80;
  long *local_70;
  long *plStack_68;
  long *local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  local_90 = (long *)0x0;
  plStack_88 = (long *)0x0;
  local_80 = (long *)0x0;
  if (*param_2 == '\0') {
    lVar2 = *(long *)(param_2 + 0x10);
    for (lVar1 = *(long *)(param_2 + 8); lVar1 != lVar2; lVar1 = lVar1 + 0x18) {
      plVar6 = (long *)FUN_00428e48(lVar1,1);
      local_70 = plVar6;
      if (plVar6 == (long *)0x0) {
        uVar7 = FUN_004249b0();
        if ((uVar7 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e90,"../../discord_native_lib/src/media/audio_device/fake_adm.cpp",
                       0x323,"Skipping fake audio capture file that failed to load: ",lVar1);
        }
      }
      else if (plStack_88 < local_80) {
        if (plStack_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x23,"__location != nullptr","null pointer given to construct_at");
        }
        local_70 = (long *)0x0;
        *plStack_88 = (long)plVar6;
        plStack_88 = plStack_88 + 1;
      }
      else {
        FUN_004252e8(&local_90,&local_70);
      }
      plVar6 = local_70;
      local_70 = (long *)0x0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x30))();
      }
    }
  }
  else {
    local_70 = (long *)FUN_00428640();
    FUN_004252e8(&local_90,&local_70);
    plVar6 = local_70;
    local_70 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x30))();
    }
  }
  puVar8 = (undefined8 *)operator_new(0x48);
  plStack_68 = plStack_88;
  local_70 = local_90;
  local_90 = (long *)0x0;
  plStack_88 = (long *)0x0;
  local_60 = local_80;
  local_80 = (long *)0x0;
  FUN_004249b8(puVar8,param_2,&local_70);
  plVar6 = local_70;
  plVar11 = plStack_68;
  if (local_70 != (long *)0x0) {
    while (plVar11 != plVar6) {
      plVar11 = plVar11 + -1;
      plVar9 = (long *)*plVar11;
      *plVar11 = 0;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x30))();
      }
    }
    operator_delete(plVar6);
  }
  plVar6 = local_90;
  *param_1 = puVar8;
  piVar10 = (int *)(puVar8 + 8);
  *piVar10 = 0;
  *puVar8 = &PTR_FUN_00d1b5b8;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
    if (bVar4) {
      *piVar10 = *piVar10 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  plVar11 = plStack_88;
  if (local_90 != (long *)0x0) {
    while (plVar11 != plVar6) {
      plVar11 = plVar11 + -1;
      plVar9 = (long *)*plVar11;
      *plVar11 = 0;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x30))();
      }
    }
    plStack_88 = plVar6;
    operator_delete(local_90);
  }
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004249b0  FUN_004249b0 =====

void FUN_004249b0(void)

{
  FUN_00623b7c(3);
  return;
}


// ===== 004249b8  FUN_004249b8 =====

void FUN_004249b8(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *local_70;
  undefined8 *local_68 [2];
  code *local_58;
  undefined *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00d1b398;
  *(undefined4 *)(param_1 + 1) = 0xb;
  puVar5 = param_1 + 3;
  *puVar5 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar8 = *param_3;
  param_1[4] = param_3[1];
  *puVar5 = uVar8;
  param_1[5] = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  puVar7 = (undefined8 *)*puVar5;
  plVar6 = param_1 + 6;
  *plVar6 = 0;
  param_1[7] = 0;
  if (puVar7 == (undefined8 *)param_1[4]) {
    plVar2 = (long *)operator_new(8);
    puVar4 = (undefined8 *)param_1[5];
    *plVar2 = (long)(PTR_DAT_00d51af8 + 0x10);
    local_70 = plVar2;
    if (puVar7 < puVar4) {
      if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                   ,0x23,"__location != nullptr","null pointer given to construct_at");
      }
      local_70 = (long *)0x0;
      *puVar7 = plVar2;
      param_1[4] = puVar7 + 1;
    }
    else {
      FUN_004252e8(puVar5,&local_70);
    }
    plVar2 = local_70;
    local_70 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x30))();
    }
  }
  pvVar3 = operator_new(0x50);
  FUN_00489274(pvVar3,*(undefined8 *)(param_2 + 0x20),100);
  plVar2 = (long *)*plVar6;
  *plVar6 = (long)pvVar3;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
    pvVar3 = (void *)*plVar6;
  }
  local_58 = FUN_00425660;
  local_50 = &DAT_001f4ed8;
  local_68[0] = param_1;
  FUN_004891f8(pvVar3,local_68);
  if (*(code **)(local_50 + 8) != (code *)0x0) {
    (**(code **)(local_50 + 8))(local_68[0]);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00424b54  FUN_00424b54 =====

undefined8 FUN_00424b54(long param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 8);
  }
  return 0;
}


// ===== 00424b68  FUN_00424b68 =====

undefined8 FUN_00424b68(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return 0;
}


// ===== 00424b78  FUN_00424b78 =====

undefined8 FUN_00424b78(long param_1)

{
  *(undefined1 *)(param_1 + 0x38) = 1;
  return 0;
}


// ===== 00424b8c  FUN_00424b8c =====

undefined8 FUN_00424b8c(long param_1)

{
  *(undefined1 *)(param_1 + 0x38) = 0;
  return 0;
}


// ===== 00424b9c  FUN_00424b9c =====

undefined1 FUN_00424b9c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x38);
}


// ===== 00424ba4  FUN_00424ba4 =====

undefined8 FUN_00424ba4(void)

{
  return 0;
}


// ===== 00424bac  FUN_00424bac =====

ulong FUN_00424bac(long param_1)

{
  return (ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3;
}


// ===== 00424bbc  FUN_00424bbc =====

undefined8 FUN_00424bbc(void)

{
  return 0;
}


// ===== 00424bc4  FUN_00424bc4 =====

undefined8 FUN_00424bc4(long param_1,ulong param_2,void *param_3,void *param_4)

{
  ulong uVar1;
  size_t sVar2;
  long lVar3;
  ulong uVar4;
  undefined8 ****__src;
  byte bVar5;
  undefined8 *****pppppuVar6;
  uint uVar7;
  undefined8 ****local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined8 ****local_70;
  ulong uStack_68;
  undefined7 local_60;
  byte bStack_59;
  long local_58;
  
  pppppuVar6 = &local_90;
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if ((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18) >> 3) <= (param_2 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  (**(code **)(**(long **)(*(long *)(param_1 + 0x18) + (param_2 & 0xffff) * 8) + 0x20))(&local_70);
  bVar5 = bStack_59;
  uVar4 = uStack_68;
  __src = local_70;
  uVar7 = (uint)(char)bStack_59;
  if ((char)bStack_59 < '\0') {
    if (uStack_68 < 0x17) {
      local_80 = CONCAT17((char)uStack_68,(undefined7)local_80);
    }
    else {
      if (0x7fffffffffffffef < uStack_68) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uStack_68 | 0xf) + 1;
      pppppuVar6 = (undefined8 *****)operator_new(uVar1);
      local_80 = uVar1 | 0x8000000000000000;
      uStack_88 = uVar4;
      local_90 = pppppuVar6;
    }
    sVar2 = uVar4 + 1;
    if ((pppppuVar6 <= __src) && (__src < (undefined8 *****)((long)pppppuVar6 + sVar2))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(pppppuVar6,__src,sVar2);
  }
  else {
    local_80 = CONCAT17(bStack_59,local_60);
    local_90 = local_70;
    uStack_88 = uStack_68;
  }
  if (param_3 != (void *)0x0) {
    sVar2 = uStack_68;
    pppppuVar6 = (undefined8 *****)local_70;
    if (-1 < (int)uVar7) {
      sVar2 = (ulong)bVar5;
      pppppuVar6 = &local_70;
    }
    if (0x7e < sVar2) {
      sVar2 = 0x7f;
    }
    memcpy(param_3,pppppuVar6,sVar2);
    *(undefined1 *)((long)param_3 + sVar2) = 0;
  }
  uVar4 = local_80;
  if (param_4 != (void *)0x0) {
    sVar2 = uStack_88;
    pppppuVar6 = (undefined8 *****)local_90;
    if (-1 < (long)local_80) {
      sVar2 = local_80 >> 0x38;
      pppppuVar6 = &local_90;
    }
    if (0x7e < sVar2) {
      sVar2 = 0x7f;
    }
    memcpy(param_4,pppppuVar6,sVar2);
    *(undefined1 *)((long)param_4 + sVar2) = 0;
  }
  if ((long)uVar4 < 0) {
    operator_delete(local_90);
    if (-1 < (char)bStack_59) goto LAB_00424cb0;
  }
  else if ((uVar7 >> 7 & 1) == 0) goto LAB_00424cb0;
  operator_delete(local_70);
LAB_00424cb0:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


// ===== 00424d98  FUN_00424d98 =====

undefined8 FUN_00424d98(void)

{
  return 0;
}


// ===== 00424da0  FUN_00424da0 =====

undefined8 FUN_00424da0(void)

{
  return 0;
}


// ===== 00424da8  FUN_00424da8 =====

undefined8 FUN_00424da8(long param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x3e) = param_2;
  return 0;
}


// ===== 00424db8  FUN_00424db8 =====

undefined8 FUN_00424db8(void)

{
  return 0;
}


// ===== 00424dc0  FUN_00424dc0 =====

undefined8 FUN_00424dc0(undefined8 param_1,undefined1 *param_2)

{
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 1;
  }
  return 0;
}


// ===== 00424dd4  FUN_00424dd4 =====

undefined8 FUN_00424dd4(long param_1)

{
  *(undefined1 *)(param_1 + 0x3a) = 1;
  return 0;
}


// ===== 00424de8  FUN_00424de8 =====

undefined1 FUN_00424de8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x3a);
}


// ===== 00424df0  FUN_00424df0 =====

undefined8 FUN_00424df0(undefined8 param_1,undefined1 *param_2)

{
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 1;
  }
  return 0;
}


// ===== 00424e04  FUN_00424e04 =====

undefined8 FUN_00424e04(long param_1)

{
  *(undefined1 *)(param_1 + 0x39) = 1;
  return 0;
}


// ===== 00424e18  FUN_00424e18 =====

undefined1 FUN_00424e18(long param_1)

{
  return *(undefined1 *)(param_1 + 0x39);
}


// ===== 00424e20  FUN_00424e20 =====

undefined8 FUN_00424e20(long param_1)

{
  if ((*(char *)(param_1 + 0x3c) == '\0') &&
     (*(undefined1 *)(param_1 + 0x3c) = 1, *(char *)(param_1 + 0x3d) == '\0')) {
    (**(code **)(**(long **)(param_1 + 0x30) + 0x10))();
    *(undefined1 *)(param_1 + 0x3d) = 1;
  }
  return 0;
}


// ===== 00424e6c  FUN_00424e6c =====

undefined8 FUN_00424e6c(long param_1)

{
  long lVar1;
  undefined1 uVar2;
  
  if (*(char *)(param_1 + 0x3c) != '\0') {
    *(undefined1 *)(param_1 + 0x3c) = 0;
    if (*(char *)(param_1 + 0x3b) == '\0') {
      if (*(char *)(param_1 + 0x3d) == '\0') {
        return 0;
      }
      uVar2 = 0;
      lVar1 = 3;
    }
    else {
      if (*(char *)(param_1 + 0x3d) != '\0') {
        return 0;
      }
      uVar2 = 1;
      lVar1 = 2;
    }
    (**(code **)(**(long **)(param_1 + 0x30) + lVar1 * 8))();
    *(undefined1 *)(param_1 + 0x3d) = uVar2;
  }
  return 0;
}


// ===== 00424ed4  FUN_00424ed4 =====

undefined1 FUN_00424ed4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x3c);
}


// ===== 00424edc  FUN_00424edc =====

undefined8 FUN_00424edc(long param_1)

{
  if ((*(char *)(param_1 + 0x3b) == '\0') &&
     (*(undefined1 *)(param_1 + 0x3b) = 1, *(char *)(param_1 + 0x3d) == '\0')) {
    (**(code **)(**(long **)(param_1 + 0x30) + 0x10))();
    *(undefined1 *)(param_1 + 0x3d) = 1;
  }
  return 0;
}


// ===== 00424f28  FUN_00424f28 =====

undefined8 FUN_00424f28(long param_1)

{
  long lVar1;
  undefined1 uVar2;
  
  if (*(char *)(param_1 + 0x3b) != '\0') {
    *(undefined1 *)(param_1 + 0x3b) = 0;
    if (*(char *)(param_1 + 0x3c) == '\0') {
      if (*(char *)(param_1 + 0x3d) == '\0') {
        return 0;
      }
      uVar2 = 0;
      lVar1 = 3;
    }
    else {
      if (*(char *)(param_1 + 0x3d) != '\0') {
        return 0;
      }
      uVar2 = 1;
      lVar1 = 2;
    }
    (**(code **)(**(long **)(param_1 + 0x30) + lVar1 * 8))();
    *(undefined1 *)(param_1 + 0x3d) = uVar2;
  }
  return 0;
}


// ===== 00424f90  FUN_00424f90 =====

undefined1 FUN_00424f90(long param_1)

{
  return *(undefined1 *)(param_1 + 0x3b);
}


// ===== 00424f98  FUN_00424f98 =====

undefined8 FUN_00424f98(void)

{
  return 0xffffffff;
}


// ===== 00424fa0  FUN_00424fa0 =====

undefined8 FUN_00424fa0(void)

{
  return 0;
}


// ===== 00424fa8  FUN_00424fa8 =====

undefined8 FUN_00424fa8(void)

{
  return 0xffffffff;
}


// ===== 00424fb0  FUN_00424fb0 =====

undefined8 FUN_00424fb0(void)

{
  return 0;
}


// ===== 00424fb8  FUN_00424fb8 =====

undefined8 FUN_00424fb8(void)

{
  return 0xffffffff;
}


// ===== 00424fc0  FUN_00424fc0 =====

undefined8 FUN_00424fc0(void)

{
  return 0xffffffff;
}


// ===== 00424fc8  FUN_00424fc8 =====

undefined8 FUN_00424fc8(void)

{
  return 0xffffffff;
}


// ===== 00424fd0  FUN_00424fd0 =====

undefined8 FUN_00424fd0(void)

{
  return 0xffffffff;
}


// ===== 00424fd8  FUN_00424fd8 =====

undefined8 FUN_00424fd8(void)

{
  return 0xffffffff;
}


// ===== 00424fe0  FUN_00424fe0 =====

undefined8 FUN_00424fe0(void)

{
  return 0xffffffff;
}


// ===== 00424fe8  FUN_00424fe8 =====

undefined8 FUN_00424fe8(void)

{
  return 0xffffffff;
}


// ===== 00424ff0  FUN_00424ff0 =====

undefined8 FUN_00424ff0(void)

{
  return 0xffffffff;
}


// ===== 00424ff8  FUN_00424ff8 =====

undefined8 FUN_00424ff8(void)

{
  return 0xffffffff;
}


// ===== 00425000  FUN_00425000 =====

undefined8 FUN_00425000(void)

{
  return 0xffffffff;
}


// ===== 00425008  FUN_00425008 =====

undefined8 FUN_00425008(void)

{
  return 0xffffffff;
}


// ===== 00425010  FUN_00425010 =====

undefined8 FUN_00425010(void)

{
  return 0xffffffff;
}


// ===== 00425018  FUN_00425018 =====

undefined8 FUN_00425018(void)

{
  return 0xffffffff;
}


// ===== 00425020  FUN_00425020 =====

undefined8 FUN_00425020(void)

{
  return 0xffffffff;
}


// ===== 00425028  FUN_00425028 =====

undefined8 FUN_00425028(void)

{
  return 0xffffffff;
}


// ===== 00425030  FUN_00425030 =====

undefined8 FUN_00425030(void)

{
  return 0xffffffff;
}


// ===== 00425038  FUN_00425038 =====

undefined8 FUN_00425038(void)

{
  return 0xffffffff;
}


// ===== 00425040  FUN_00425040 =====

undefined8 FUN_00425040(void)

{
  return 0xffffffff;
}


// ===== 00425048  FUN_00425048 =====

undefined8 FUN_00425048(void)

{
  return 0xffffffff;
}


// ===== 00425050  FUN_00425050 =====

undefined8 FUN_00425050(void)

{
  return 0xffffffff;
}


// ===== 00425058  FUN_00425058 =====

undefined8 FUN_00425058(void)

{
  return 0xffffffff;
}


// ===== 00425060  FUN_00425060 =====

undefined8 FUN_00425060(void)

{
  return 0xffffffff;
}


// ===== 00425068  FUN_00425068 =====

undefined8 FUN_00425068(undefined8 param_1,undefined2 *param_2)

{
  *param_2 = 0;
  return 0;
}


// ===== 00425074  FUN_00425074 =====

undefined8 FUN_00425074(void)

{
  return 0;
}


// ===== 0042507c  FUN_0042507c =====

undefined8 FUN_0042507c(void)

{
  return 0;
}


// ===== 00425084  FUN_00425084 =====

undefined8 FUN_00425084(void)

{
  return 0;
}


// ===== 0042508c  FUN_0042508c =====

undefined8 FUN_0042508c(void)

{
  return 0xffffffff;
}


// ===== 00425094  FUN_00425094 =====

undefined8 FUN_00425094(void)

{
  return 0xffffffff;
}


// ===== 0042509c  FUN_0042509c =====

undefined8 FUN_0042509c(void)

{
  return 0xffffffff;
}


// ===== 004250a4  FUN_004250a4 =====

void FUN_004250a4(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  size_t __n;
  size_t sVar2;
  undefined8 *****__s1;
  undefined1 *__src;
  undefined8 *puVar3;
  long lVar4;
  undefined8 ****ppppuVar5;
  int iVar6;
  undefined1 **ppuVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 *local_90;
  size_t sStack_88;
  undefined8 local_80;
  undefined8 ****local_70;
  size_t local_68;
  byte local_59;
  long local_58;
  
  ppuVar7 = &local_90;
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  puVar10 = *(undefined8 **)(param_1 + 0x18);
  puVar3 = *(undefined8 **)(param_1 + 0x20);
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    __src = (undefined1 *)*param_2;
    uVar9 = param_2[1];
    if (uVar9 < 0x17) {
      local_80 = CONCAT17((char)uVar9,(undefined7)local_80);
    }
    else {
      if (0x7fffffffffffffef < uVar9) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar9 | 0xf) + 1;
      ppuVar7 = (undefined1 **)operator_new(uVar1);
      local_80 = uVar1 | 0x8000000000000000;
      local_90 = (undefined1 *)ppuVar7;
      sStack_88 = uVar9;
    }
    if ((ppuVar7 <= __src) && (__src < (undefined1 *)((long)ppuVar7 + uVar9 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(ppuVar7,__src,uVar9 + 1);
  }
  else {
    sStack_88 = param_2[1];
    local_90 = (undefined1 *)*param_2;
    local_80 = param_2[2];
  }
  puVar11 = puVar10;
  if (puVar10 != puVar3) {
    do {
      (**(code **)(*(long *)*puVar10 + 0x20))(&local_70);
      ppppuVar5 = local_70;
      __n = local_68;
      if (-1 < (char)local_59) {
        __n = (ulong)local_59;
      }
      sVar2 = sStack_88;
      if (-1 < (long)local_80) {
        sVar2 = local_80 >> 0x38;
      }
      if (__n == sVar2) {
        __s1 = (undefined8 *****)local_70;
        if (-1 < (char)local_59) {
          __s1 = &local_70;
        }
        ppuVar7 = (undefined1 **)local_90;
        if (-1 < (long)local_80) {
          ppuVar7 = &local_90;
        }
        puVar11 = puVar10;
        if (-1 < (char)local_59) {
          if (local_59 != 0) {
            uVar9 = 0;
            while (*(char *)((long)&local_70 + uVar9) == *(char *)((long)ppuVar7 + uVar9)) {
              uVar9 = uVar9 + 1;
              if (local_59 == uVar9) goto LAB_00425234;
            }
            goto LAB_0042516c;
          }
          break;
        }
        if (__n == 0) {
          operator_delete(local_70);
          if (-1 < (long)local_80) goto LAB_00425244;
          goto LAB_0042523c;
        }
        iVar6 = memcmp(__s1,ppuVar7,__n);
        operator_delete(ppppuVar5);
        if (iVar6 == 0) break;
      }
      else {
LAB_0042516c:
        if ((char)local_59 < '\0') {
          operator_delete(local_70);
        }
      }
      puVar10 = puVar10 + 1;
      puVar11 = puVar3;
    } while (puVar10 != puVar3);
  }
LAB_00425234:
  puVar10 = puVar11;
  if ((long)local_80 < 0) {
LAB_0042523c:
    operator_delete(local_90);
  }
LAB_00425244:
  if (puVar10 == *(undefined8 **)(param_1 + 0x20)) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = 0;
    *(short *)(param_1 + 0x3e) = (short)((uint)((int)puVar10 - *(int *)(param_1 + 0x18)) >> 3);
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}


// ===== 004252dc  FUN_004252dc =====

undefined8 FUN_004252dc(void)

{
  return 0;
}


// ===== 004252e4  FUN_004252e4 =====

void FUN_004252e4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4252e8);
  (*pcVar1)();
}


// ===== 004252e8  FUN_004252e8 =====

void FUN_004252e8(ulong *param_1,long *param_2)

{
  void *pvVar1;
  void *pvVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  lVar14 = param_1[1] - *param_1;
  lVar13 = lVar14 >> 3;
  uVar7 = lVar13 + 1;
  if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar4 = param_1[2] - *param_1;
  uVar5 = uVar4 >> 2;
  if (uVar5 <= uVar7) {
    uVar5 = uVar7;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar5 = 0x1fffffffffffffff;
  }
  if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
  if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00401ad4();
  }
  pvVar2 = operator_new(uVar5 * 8);
  lVar8 = *param_2;
  *param_2 = 0;
  plVar12 = (long *)*param_1;
  plVar11 = (long *)param_1[1];
  plVar3 = (long *)((long)pvVar2 + lVar13 * 8);
  pvVar1 = (void *)((long)pvVar2 + uVar5 * 8);
  lVar15 = (long)plVar11 - (long)plVar12;
  plVar6 = plVar3 + 1;
  *plVar3 = lVar8;
  if (lVar15 == 0) {
    *param_1 = (ulong)plVar3;
    param_1[1] = (ulong)plVar6;
    param_1[2] = (ulong)pvVar1;
    goto joined_r0x00425470;
  }
  uVar7 = lVar15 - 8;
  if ((uVar7 < 0x78) ||
     (((long *)((long)plVar11 + (-8 - (uVar7 & 0xfffffffffffffff8))) < plVar3 &&
      ((long *)((long)pvVar2 + (lVar14 - (uVar7 & 0xfffffffffffffff8)) + -8) < plVar11)))) {
LAB_00425400:
    do {
      plVar11 = plVar11 + -1;
      lVar13 = *plVar11;
      *plVar11 = 0;
      plVar3 = plVar3 + -1;
      *plVar3 = lVar13;
    } while (plVar11 != plVar12);
  }
  else {
    uVar7 = (uVar7 >> 3) + 1;
    plVar9 = plVar11 + -2;
    uVar4 = uVar7 & 0x3ffffffffffffffc;
    plVar10 = (long *)((long)pvVar2 + lVar13 * 8 + -0x10);
    plVar3 = plVar3 + -uVar4;
    plVar11 = plVar11 + -uVar4;
    uVar5 = uVar4;
    do {
      lVar8 = plVar9[-1];
      lVar15 = plVar9[-2];
      lVar14 = plVar9[1];
      lVar13 = *plVar9;
      plVar9[-1] = 0;
      plVar9[-2] = 0;
      plVar9[1] = 0;
      *plVar9 = 0;
      plVar9 = plVar9 + -4;
      uVar5 = uVar5 - 4;
      plVar10[-1] = lVar8;
      plVar10[-2] = lVar15;
      plVar10[1] = lVar14;
      *plVar10 = lVar13;
      plVar10 = plVar10 + -4;
    } while (uVar5 != 0);
    if (uVar7 != uVar4) goto LAB_00425400;
  }
  plVar11 = (long *)*param_1;
  plVar12 = (long *)param_1[1];
  *param_1 = (ulong)plVar3;
  param_1[1] = (ulong)plVar6;
  param_1[2] = (ulong)pvVar1;
  while (plVar12 != plVar11) {
    plVar12 = plVar12 + -1;
    plVar3 = (long *)*plVar12;
    *plVar12 = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x30))();
    }
  }
joined_r0x00425470:
  if (plVar11 == (long *)0x0) {
    return;
  }
  operator_delete(plVar11);
  return;
}


// ===== 004254b8  FUN_004254b8 =====

void FUN_004254b8(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  piVar1 = (int *)(param_1 + 0x40);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}


// ===== 004254d0  FUN_004254d0 =====

bool FUN_004254d0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  
  plVar1 = param_1 + 8;
  do {
    lVar5 = *plVar1;
    iVar4 = (int)lVar5 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*param_1 + 0x18))();
  }
  return (int)lVar5 != 1;
}


// ===== 00425514  FUN_00425514 =====

void FUN_00425514(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)param_1[6];
  param_1[6] = 0;
  *param_1 = &PTR_FUN_00d1b398;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[3];
  if (plVar1 == (long *)0x0) {
    return;
  }
  plVar3 = (long *)param_1[4];
  plVar2 = plVar1;
  if (plVar3 != plVar1) {
    do {
      plVar3 = plVar3 + -1;
      plVar2 = (long *)*plVar3;
      *plVar3 = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x30))();
      }
    } while (plVar3 != plVar1);
    plVar2 = (long *)param_1[3];
  }
  param_1[4] = plVar1;
  operator_delete(plVar2);
  return;
}


// ===== 004255b4  FUN_004255b4 =====

void FUN_004255b4(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)param_1[6];
  param_1[6] = 0;
  *param_1 = &PTR_FUN_00d1b398;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[3];
  if (plVar1 != (long *)0x0) {
    plVar3 = (long *)param_1[4];
    plVar2 = plVar1;
    if (plVar3 != plVar1) {
      do {
        plVar3 = plVar3 + -1;
        plVar2 = (long *)*plVar3;
        *plVar3 = 0;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x30))();
        }
      } while (plVar3 != plVar1);
      plVar2 = (long *)param_1[3];
    }
    param_1[4] = plVar1;
    operator_delete(plVar2);
  }
  operator_delete(param_1);
  return;
}


// ===== 0042564c  FUN_0042564c =====

bool FUN_0042564c(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x40) == 1;
}


// ===== 00425660  FUN_00425660 =====

void FUN_00425660(long *param_1)

{
  ulong __n;
  long lVar1;
  int iVar2;
  void *__s;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 in_stack_fffffffffffffcf0;
  uint uVar6;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined4 local_2d8 [160];
  long local_58;
  
  uVar6 = (uint)((ulong)in_stack_fffffffffffffcf0 >> 0x20);
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar5 = *param_1;
  if (*(char *)(lVar5 + 0x3b) != '\0') {
    if ((ulong)(*(long *)(lVar5 + 0x20) - *(long *)(lVar5 + 0x18) >> 3) <=
        (ulong)*(ushort *)(lVar5 + 0x3e)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    plVar4 = *(long **)(*(long *)(lVar5 + 0x18) + (ulong)*(ushort *)(lVar5 + 0x3e) * 8);
    puVar3 = *(undefined8 **)(lVar5 + 0x10);
    if (plVar4 != (long *)0x0 && puVar3 != (undefined8 *)0x0) {
      iVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
      __n = ((ulong)(uint)(iVar2 * 5) & 0x7ffffff) << 6;
      if ((long)((ulong)(uint)(iVar2 * 5) << 0x25) < 0) {
        __n = 0xffffffffffffffff;
      }
      __s = operator_new__(__n);
      memset(__s,0,__n);
      (**(code **)*plVar4)(plVar4,0xa0,16000,__s);
      local_2d8[0] = 0;
      (**(code **)*puVar3)
                (puVar3,__s,0xa0,(long)(iVar2 << 1),(long)iVar2,16000,0,0,(ulong)uVar6 << 0x20,0,
                 local_2d8);
      operator_delete__(__s);
    }
  }
  if ((*(char *)(lVar5 + 0x3c) != '\0') &&
     (plVar4 = *(long **)(lVar5 + 0x10), plVar4 != (long *)0x0)) {
    local_2e8 = 0;
    uStack_2e0 = 0;
    local_2f0 = 0;
    (**(code **)(*plVar4 + 0x10))(plVar4,0xa0,4,2,16000,local_2d8,&uStack_2e0,&local_2e8,&local_2f0)
    ;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004257e0  FUN_004257e0 =====

void FUN_004257e0(long param_1)

{
  long lVar1;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = 0xb;
  (**(code **)(**(long **)(param_1 + 8) + 0x20))(*(long **)(param_1 + 8),&local_2c);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_2c);
}


// ===== 00425840  FUN_00425840 =====

void FUN_00425840(long *param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 8);
  *param_1 = (long)puVar1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00425854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)();
    return;
  }
  return;
}


// ===== 0042585c  FUN_0042585c =====

void FUN_0042585c(long param_1,long param_2)

{
  short sVar1;
  
  sVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x50))();
                    /* WARNING: Could not recover jumptable at 0x00425898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x10))(param_2,0 < sVar1);
  return;
}


// ===== 0042589c  FUN_0042589c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0042589c(long param_1,long param_2)

{
  undefined8 *******pppppppuVar1;
  ulong uVar2;
  undefined8 *******pppppppuVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  short sVar7;
  int iVar8;
  long *plVar9;
  void *local_1a0;
  void *pvStack_198;
  void *local_190;
  void *local_180;
  void *pvStack_178;
  void *local_170;
  undefined8 *******local_160;
  undefined8 uStack_158;
  long local_150;
  undefined8 *******pppppppuStack_148;
  ulong local_140;
  undefined8 uStack_138;
  int local_130;
  undefined1 local_128;
  undefined1 local_110;
  undefined1 local_108;
  undefined1 local_f0;
  undefined1 local_e8;
  undefined1 local_d0;
  undefined1 local_c8;
  undefined1 local_b0;
  undefined1 local_a8;
  undefined1 local_90;
  undefined1 local_88;
  undefined1 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_170 = (void *)0x0;
  pvStack_178 = (void *)0x0;
  local_180 = (void *)0x0;
  sVar7 = (**(code **)(**(long **)(param_1 + 8) + 0x50))();
  if (sVar7 < 1) {
    local_190 = (void *)0x0;
    local_1a0 = (void *)0x0;
    pvStack_198 = (void *)0x0;
  }
  else {
    iVar8 = 0;
    do {
      plVar9 = *(long **)(param_1 + 8);
      local_130 = 0;
      local_128 = 0;
      pppppppuStack_148 = (undefined8 *******)0x0;
      local_150 = 0;
      uStack_138 = 0;
      local_140 = 0;
      uStack_158 = 0;
      local_160 = (undefined8 *******)0x0;
      local_110 = 0;
      local_108 = 0;
      local_f0 = 0;
      local_e8 = 0;
      local_d0 = 0;
      local_c8 = 0;
      local_b0 = 0;
      local_a8 = 0;
      local_90 = 0;
      local_88 = 0;
      local_70 = 0;
      FUN_0054809c(&local_160,0x80,0);
      pppppppuVar1 = local_160;
      if (-1 < local_150) {
        pppppppuVar1 = &local_160;
      }
      uVar2 = local_140;
      if (-1 < uStack_138) {
        uVar2 = (ulong)uStack_138._7_1_;
      }
      if (uVar2 < 0x80) {
        FUN_0054809c(&pppppppuStack_148,0x80 - uVar2,0);
      }
      else {
        if (-1 < uStack_138) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                     "__s < __min_cap",
                     "__s should never be greater than or equal to the short string capacity");
        }
        local_140 = 0x80;
        *(undefined1 *)(pppppppuStack_148 + 0x10) = 0;
      }
      pppppppuVar3 = pppppppuStack_148;
      if (-1 < (char)uStack_138._7_1_) {
        pppppppuVar3 = &pppppppuStack_148;
      }
      (**(code **)(*plVar9 + 0x60))(plVar9,iVar8,pppppppuVar1,pppppppuVar3);
      FUN_004235d8(&local_160);
      pvVar5 = pvStack_178;
      local_130 = iVar8;
      if (pvStack_178 == local_170) {
        FUN_00424254(&local_180,&local_160);
      }
      else {
        if (pvStack_178 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x23,"__location != nullptr","null pointer given to construct_at");
        }
        FUN_004243d4(pvStack_178,&local_160);
        pvStack_178 = (void *)((long)pvVar5 + 0xf8);
      }
      FUN_00411fac(&local_160);
      iVar8 = iVar8 + 1;
      sVar7 = (**(code **)(**(long **)(param_1 + 8) + 0x50))();
      local_190 = local_170;
      local_1a0 = local_180;
      pvStack_198 = pvStack_178;
    } while (iVar8 < sVar7);
  }
  pvStack_178 = (void *)0x0;
  local_170 = (void *)0x0;
  local_180 = (void *)0x0;
  (**(code **)(param_2 + 0x10))(param_2,&local_1a0,1);
  pvVar6 = local_1a0;
  pvVar5 = pvStack_198;
  if (local_1a0 != (void *)0x0) {
    while (pvVar5 != pvVar6) {
      FUN_00411fac((void *)((long)pvVar5 + -0xf8));
      pvVar5 = (void *)((long)pvVar5 + -0xf8);
    }
    pvStack_198 = pvVar6;
    operator_delete(local_1a0);
  }
  pvVar6 = local_180;
  pvVar5 = pvStack_178;
  if (local_180 != (void *)0x0) {
    while (pvVar5 != pvVar6) {
      FUN_00411fac((void *)((long)pvVar5 + -0xf8));
      pvVar5 = (void *)((long)pvVar5 + -0xf8);
    }
    pvStack_178 = pvVar6;
    operator_delete(local_180);
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00425b6c  FUN_00425b6c =====

void FUN_00425b6c(undefined8 *param_1)

{
  param_1[0x1e] = 0;
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
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}


// ===== 00425b98  FUN_00425b98 =====

void FUN_00425b98(undefined8 param_1,long param_2)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  void *local_50;
  void *local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = (void *)0x0;
  uStack_40 = 0;
  local_50 = (void *)0x0;
  (**(code **)(param_2 + 0x10))(param_2,&local_50,0);
  pvVar3 = local_50;
  pvVar2 = local_48;
  if (local_50 != (void *)0x0) {
    while (pvVar2 != pvVar3) {
      FUN_00411fac((void *)((long)pvVar2 + -0xf8));
      pvVar2 = (void *)((long)pvVar2 + -0xf8);
    }
    local_48 = pvVar3;
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00425c34  FUN_00425c34 =====

void FUN_00425c34(undefined8 *param_1)

{
  param_1[0x1e] = 0;
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
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}


// ===== 00425c60  FUN_00425c60 =====

void FUN_00425c60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00425c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x78))();
  return;
}


// ===== 00425c70  FUN_00425c70 =====

void FUN_00425c70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00425c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x90))();
  return;
}


// ===== 00425c80  FUN_00425c80 =====

void FUN_00425c80(void)

{
  return;
}


// ===== 00425c84  FUN_00425c84 =====

void FUN_00425c84(long param_1)

{
  long lVar1;
  undefined1 local_2c [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c[0] = 0;
  (**(code **)(**(long **)(param_1 + 8) + 0x198))(*(long **)(param_1 + 8),local_2c);
  (**(code **)(**(long **)(param_1 + 8) + 0x1a0))(*(long **)(param_1 + 8),local_2c[0]);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00425cf4  FUN_00425cf4 =====

void FUN_00425cf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00425d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x1b8))(*(long **)(param_1 + 8),1);
  return;
}


// ===== 00425d08  FUN_00425d08 =====

void FUN_00425d08(long param_1)

{
  long lVar1;
  undefined1 local_2c [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c[0] = 0;
  (**(code **)(**(long **)(param_1 + 8) + 0x1b0))(*(long **)(param_1 + 8),local_2c);
  (**(code **)(**(long **)(param_1 + 8) + 0x1b8))(*(long **)(param_1 + 8),local_2c[0]);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00425d78  FUN_00425d78 =====

void FUN_00425d78(void)

{
  return;
}


// ===== 00425d7c  FUN_00425d7c =====

undefined8 FUN_00425d7c(void)

{
  return 0;
}


// ===== 00425d84  FUN_00425d84 =====

void FUN_00425d84(void)

{
  return;
}


// ===== 00425d88  FUN_00425d88 =====

void FUN_00425d88(void)

{
  return;
}


// ===== 00425d8c  FUN_00425d8c =====

void FUN_00425d8c(void)

{
  return;
}


// ===== 00425d90  FUN_00425d90 =====

void FUN_00425d90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00425d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x30))();
  return;
}


// ===== 00425da0  FUN_00425da0 =====

void FUN_00425da0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00425dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x28))();
  return;
}


// ===== 00425db0  FUN_00425db0 =====

void FUN_00425db0(long param_1)

{
  FUN_00428c30(*(undefined8 *)(param_1 + 8));
  return;
}


// ===== 00425db8  FUN_00425db8 =====

void FUN_00425db8(long param_1)

{
  FUN_00428cd8(*(undefined8 *)(param_1 + 8));
  return;
}


// ===== 00425dc0  FUN_00425dc0 =====

void FUN_00425dc0(long param_1)

{
  FUN_00428d3c(*(undefined8 *)(param_1 + 8));
  return;
}


// ===== 00425dc8  FUN_00425dc8 =====

void FUN_00425dc8(long param_1)

{
  FUN_00428de4(*(undefined8 *)(param_1 + 8));
  return;
}


// ===== 00425dd0  FUN_00425dd0 =====

void FUN_00425dd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00425ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x38))();
  return;
}


// ===== 00425de0  FUN_00425de0 =====

void FUN_00425de0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00425dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x1c8))();
  return;
}


// ===== 00425df0  FUN_00425df0 =====

void FUN_00425df0(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00425e00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x10))(param_2,*(undefined8 *)(param_1 + 8));
  return;
}


// ===== 00425e04  FUN_00425e04 =====

void FUN_00425e04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1b7e0;
  if ((long *)param_1[1] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00425e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[1] + 8))();
    return;
  }
  return;
}


// ===== 00425e2c  FUN_00425e2c =====

void FUN_00425e2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1b7e0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}


// ===== 00425e6c  FUN_00425e6c =====

void FUN_00425e6c(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  if (param_3 == (long *)0x0) {
    FUN_00994394(param_1 + 2,1);
    param_1[0x893] = 0;
    param_1[0x892] = 0;
    param_1[0x891] = 0;
    param_1[0x890] = 0;
    param_1[0x88f] = 0;
    param_1[0x88e] = 0;
  }
  else {
    plVar1 = param_3 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_00994394(param_1 + 2,1);
    param_1[0x893] = 0;
    param_1[0x892] = 0;
    param_1[0x891] = 0;
    param_1[0x890] = 0;
    param_1[0x88f] = 0;
    param_1[0x88e] = 0;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*param_3 + 0x10))(param_3);
      FUN_005466cc(param_3);
      return;
    }
  }
  return;
}


// ===== 00425f24  FUN_00425f24 =====

void FUN_00425f24(long *param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  void *pvVar11;
  long lVar12;
  void *pvVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  void *pvVar16;
  void *pvVar17;
  long *plVar18;
  undefined1 auStack_7918 [64];
  int *local_78d8;
  undefined1 auStack_3cb8 [64];
  int *local_3c78;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  if (((long *)*param_1 != (long *)0x0) &&
     (uVar6 = (**(code **)(*(long *)*param_1 + 0x18))(), (uVar6 & 1) != 0)) {
    uVar6 = *(long *)(param_2 + 0x28) * *(long *)(param_2 + 0x18);
    if (uVar6 < 0x1e01) {
      FUN_00658c48(auStack_3cb8);
      uVar14 = *(undefined8 *)(param_2 + 0x18);
      uVar2 = *(undefined4 *)(param_2 + 0x20);
      uVar8 = (**(code **)(*(long *)*param_1 + 0x10))();
      FUN_00658d78(auStack_3cb8,0,0,uVar14,uVar2,4,2,uVar8);
      puVar15 = (undefined8 *)*param_1;
      uVar14 = *(undefined8 *)(param_2 + 0x18);
      uVar2 = *(undefined4 *)(param_2 + 0x20);
      uVar8 = FUN_006591a0(auStack_3cb8);
      uVar6 = (**(code **)*puVar15)(puVar15,uVar14,uVar2,uVar8);
      if ((uVar6 & 1) == 0) {
        uVar6 = FUN_004022fc();
        if ((uVar6 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,
                       "../../discord_native_lib/src/media/audio_device/local_audio_combiner.cpp",
                       0x17a,
                       "Failed to get audio samples from localAudio, skip combining local audio");
        }
      }
      else {
        plVar9 = (long *)operator_new(8);
        plVar18 = plVar9 + 1;
        *plVar9 = (long)auStack_3cb8;
        uVar6 = FUN_0065901c(param_2);
        plVar10 = plVar9;
        if ((uVar6 & 1) == 0) {
          plVar10 = (long *)operator_new(0x10);
          plVar18 = plVar10 + 2;
          *plVar10 = (long)auStack_3cb8;
          plVar10[1] = param_2;
          operator_delete(plVar9);
        }
        FUN_00658c48(auStack_7918);
        lVar12 = (long)plVar18 - (long)plVar10 >> 3;
        plVar9 = (long *)0x0;
        if ((long)plVar18 - (long)plVar10 != 0) {
          plVar9 = plVar10;
        }
        FUN_00994cf8(param_1 + 2,plVar9,lVar12,*(undefined8 *)(param_2 + 0x28),
                     *(undefined4 *)(param_2 + 0x20),lVar12,auStack_7918);
        FUN_00658e5c(param_2,auStack_7918);
        if (local_78d8 != (int *)0x0) {
          do {
            iVar1 = *local_78d8;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(local_78d8,0x10);
            if (bVar4) {
              *local_78d8 = iVar1 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar1 + -1 == 0) {
            pvVar16 = *(void **)(local_78d8 + 2);
            if (pvVar16 != (void *)0x0) {
              pvVar11 = pvVar16;
              pvVar13 = *(void **)(local_78d8 + 4);
              if (*(void **)(local_78d8 + 4) != pvVar16) {
                do {
                  pvVar11 = *(void **)((long)pvVar13 + -0x60);
                  pvVar17 = (void *)((long)pvVar13 + -0x68);
                  if (pvVar11 != (void *)0x0) {
                    *(void **)((long)pvVar13 + -0x58) = pvVar11;
                    operator_delete(pvVar11);
                  }
                  pvVar13 = pvVar17;
                } while (pvVar17 != pvVar16);
                pvVar11 = *(void **)(local_78d8 + 2);
              }
              *(void **)(local_78d8 + 4) = pvVar16;
              operator_delete(pvVar11);
            }
            operator_delete(local_78d8);
          }
        }
        operator_delete(plVar10);
      }
      if (local_3c78 != (int *)0x0) {
        do {
          iVar1 = *local_3c78;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(local_3c78,0x10);
          if (bVar4) {
            *local_3c78 = iVar1 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar1 + -1 == 0) {
          pvVar16 = *(void **)(local_3c78 + 2);
          if (pvVar16 != (void *)0x0) {
            pvVar11 = pvVar16;
            pvVar13 = *(void **)(local_3c78 + 4);
            if (*(void **)(local_3c78 + 4) != pvVar16) {
              do {
                pvVar11 = *(void **)((long)pvVar13 + -0x60);
                pvVar17 = (void *)((long)pvVar13 + -0x68);
                if (pvVar11 != (void *)0x0) {
                  *(void **)((long)pvVar13 + -0x58) = pvVar11;
                  operator_delete(pvVar11);
                }
                pvVar13 = pvVar17;
              } while (pvVar17 != pvVar16);
              pvVar11 = *(void **)(local_3c78 + 2);
            }
            *(void **)(local_3c78 + 4) = pvVar16;
            operator_delete(pvVar11);
          }
          operator_delete(local_3c78);
        }
      }
    }
    else {
      uVar7 = FUN_004022fc();
      if ((uVar7 & 1) == 0) {
        if (*(long *)(lVar5 + 0x28) == local_58) {
          FUN_00623bb0(&DAT_001f4ef8,
                       "../../discord_native_lib/src/media/audio_device/local_audio_combiner.cpp",
                       0xda,"audio combiner could only process a frame of ",0x1e00,
                       " samples, but the input has ",uVar6," samples, skip combining.");
          return;
        }
        goto LAB_00426244;
      }
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
LAB_00426244:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00426248  FUN_00426248 =====

void FUN_00426248(long param_1,undefined8 param_2)

{
  long lVar1;
  
  FUN_00546924(param_1 + 8);
  lVar1 = FUN_00426e9c(param_1 + 0x40,param_2);
  if (lVar1 != 0) {
    FUN_00427ef4(*(undefined8 *)(lVar1 + 0x28));
    FUN_004274f4(param_1 + 0x40,lVar1);
  }
  FUN_00546948(param_1 + 8);
  return;
}


// ===== 004262ac  FUN_004262ac =====

void FUN_004262ac(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  
  FUN_00546924(param_1 + 8);
  for (plVar4 = *(long **)(param_1 + 0x50); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    FUN_00427ef4(plVar4[5]);
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    puVar1 = (undefined8 *)*(void **)(param_1 + 0x50);
    while (puVar1 != (undefined8 *)0x0) {
      plVar4 = (long *)puVar1[5];
      puVar1[5] = 0;
      pvVar5 = (void *)*puVar1;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x30))();
      }
      if (*(char *)((long)puVar1 + 0x27) < '\0') {
        operator_delete((void *)puVar1[2]);
      }
      operator_delete(puVar1);
      puVar1 = (undefined8 *)pvVar5;
    }
    lVar2 = *(long *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x50) = 0;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*(long *)(param_1 + 0x40) + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  FUN_00546948(param_1 + 8);
  return;
}


// ===== 00426370  FUN_00426370 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_00426370(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
            undefined8 *param_5,undefined8 *param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  code *pcVar9;
  ulong uVar10;
  void *local_d0;
  void *pvStack_c8;
  undefined8 local_c0;
  long *local_b0;
  char *local_a8;
  undefined8 local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  lVar1 = param_1 + 8;
  local_68 = *(long *)(lVar2 + 0x28);
  FUN_00546924(lVar1);
  lVar6 = FUN_00426e9c(param_1 + 0x40,param_2);
  if (lVar6 == 0) {
    FUN_00546924(lVar1);
    uVar10 = *(ulong *)(param_1 + 0x58);
    FUN_00546948(lVar1);
    if (*(ulong *)(param_1 + 0x38) <= uVar10) {
      if (*(char *)(param_6[3] + 0x10) == '\0') {
        local_a8 = (char *)operator_new(0x20);
        uVar7 = s_Couldn_t_start_playback_001d5d4e._0_8_;
        lStack_98 = _UNK_001f3b08;
        local_a0 = _DAT_001f3b00;
        if ((local_a8 < "ouldn\'t start playback") && ("Couldn\'t start playback" < local_a8 + 0x17)
           ) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                     ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
        }
        uVar3 = CONCAT17(s_Couldn_t_start_playback_001d5d4e[0xf],
                         s_Couldn_t_start_playback_001d5d4e._8_7_);
        local_a8[0x17] = '\0';
        uVar4 = CONCAT71(s_Couldn_t_start_playback_001d5d4e._16_7_,
                         s_Couldn_t_start_playback_001d5d4e[0xf]);
        pcVar9 = (code *)param_6[2];
        *(undefined8 *)(local_a8 + 8) = uVar3;
        *(undefined8 *)local_a8 = uVar7;
        *(undefined8 *)(local_a8 + 0xf) = uVar4;
        (*pcVar9)(param_6,1,&local_a8);
        uVar7 = 0;
        if (lStack_98 < 0) {
          operator_delete(local_a8);
          uVar7 = 0;
        }
      }
      else {
        uVar7 = 0;
      }
      goto LAB_0042645c;
    }
    plVar8 = (long *)operator_new(0xe0);
    plVar8[1] = 0;
    *plVar8 = 0;
    plVar8[3] = 0;
    plVar8[2] = 0;
    plVar8[5] = 0;
    plVar8[4] = 0;
    plVar8[7] = 0;
    plVar8[6] = 0;
    plVar8[9] = 0;
    plVar8[8] = 0;
    plVar8[0xb] = 0;
    plVar8[10] = 0;
    puVar5 = PTR_DAT_00d51b00;
    plVar8[0xd] = 0;
    plVar8[0xc] = 0;
    plVar8[0xf] = 0;
    plVar8[0xe] = 0;
    plVar8[0x11] = 0;
    plVar8[0x10] = 0;
    plVar8[0x13] = 0;
    plVar8[0x12] = 0;
    plVar8[0x15] = 0;
    plVar8[0x14] = 0;
    plVar8[0x17] = 0;
    plVar8[0x16] = 0;
    plVar8[0x19] = 0;
    plVar8[0x18] = 0;
    plVar8[0x1b] = 0;
    plVar8[0x1a] = 0;
    *plVar8 = (long)(puVar5 + 0x10);
    FUN_0054680c(plVar8 + 1);
    plVar8[8] = 0;
    plVar8[9] = 0;
    *(undefined4 *)((long)plVar8 + 0x34) = 1;
    plVar8[7] = 0;
    *(undefined4 *)(plVar8 + 0xe) = 0;
    plVar8[0xc] = (long)FUN_00419a50;
    plVar8[0xd] = (long)&DAT_001f1910;
    FUN_005edbb0(plVar8 + 0xf);
    local_b0 = plVar8;
    lVar6 = FUN_004276f0(param_1 + 0x40,param_2,param_2,&local_b0);
    plVar8 = local_b0;
    local_b0 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x30))(plVar8);
    }
  }
  local_c0 = param_5[2];
  uVar7 = *(undefined8 *)(lVar6 + 0x28);
  pvStack_c8 = (void *)param_5[1];
  local_d0 = (void *)*param_5;
  param_5[1] = 0;
  param_5[2] = 0;
  *param_5 = 0;
  uStack_88 = param_6[1];
  local_90 = *param_6;
  local_80 = param_6[2];
  local_78 = param_6[3];
  if (*(long *)(local_78 + 8) != 0) {
    param_6[2] = FUN_00419a50;
    param_6[3] = &DAT_001f1910;
  }
  FUN_00427cc8(uVar7,param_3,param_4,&local_d0,&local_90);
  if (*(code **)(local_78 + 8) != (code *)0x0) {
    (**(code **)(local_78 + 8))(local_90);
  }
  if (local_d0 != (void *)0x0) {
    pvStack_c8 = local_d0;
    operator_delete(local_d0);
  }
  uVar7 = 1;
LAB_0042645c:
  FUN_00546948(lVar1);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042661c  FUN_0042661c =====

/* WARNING: Removing unreachable block (ram,0x00426a5c) */

bool FUN_0042661c(long param_1,long param_2,int param_3,void *param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  void *pvVar7;
  undefined8 uVar8;
  void *pvVar9;
  ulong uVar10;
  void *pvVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  void *pvVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  void *local_3d18;
  void *local_3d10;
  void *local_3d08;
  void *local_3d00;
  void *local_3cf8;
  void *local_3cf0;
  void *local_3ce8;
  void *local_3ce0;
  void *local_3cd8;
  undefined1 auStack_3cd0 [64];
  int *local_3c90;
  long local_70;
  
  lVar6 = tpidr_el0;
  lVar1 = param_1 + 8;
  local_70 = *(long *)(lVar6 + 0x28);
  FUN_00546924(lVar1);
  FUN_00546924(lVar1);
  lVar17 = *(long *)(param_1 + 0x58);
  FUN_00546948(lVar1);
  if (lVar17 != 0) {
    FUN_00546924(lVar1);
    uVar13 = *(ulong *)(param_1 + 0x58);
    FUN_00546948(lVar1);
    local_3ce8 = (void *)0x0;
    local_3ce0 = (void *)0x0;
    local_3cd8 = (void *)0x0;
    pvVar9 = local_3ce0;
    if (uVar13 != 0) {
      if (0x43d7b7eacc968 < uVar13) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar13 = uVar13 * 0x3c60;
      pvVar7 = operator_new(uVar13);
      pvVar9 = (void *)((long)pvVar7 + uVar13);
      local_3ce8 = pvVar7;
      local_3cd8 = pvVar9;
      do {
        FUN_00658c48(pvVar7);
        pvVar7 = (void *)((long)pvVar7 + 0x3c60);
        uVar13 = uVar13 - 0x3c60;
      } while (uVar13 != 0);
    }
    local_3ce0 = pvVar9;
    FUN_00546924(lVar1);
    uVar13 = *(ulong *)(param_1 + 0x58);
    FUN_00546948(lVar1);
    local_3d00 = (void *)0x0;
    local_3cf8 = (void *)0x0;
    local_3cf0 = (void *)0x0;
    if (uVar13 != 0) {
      if (uVar13 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar13 = uVar13 * 8;
      local_3d00 = operator_new(uVar13);
      pvVar9 = (void *)((long)local_3d00 + uVar13);
      local_3cf0 = pvVar9;
      memset(local_3d00,0,uVar13);
      local_3cf8 = pvVar9;
    }
    FUN_00546924(lVar1);
    uVar13 = *(ulong *)(param_1 + 0x58);
    FUN_00546948(lVar1);
    local_3d18 = (void *)0x0;
    local_3d10 = (void *)0x0;
    local_3d08 = (void *)0x0;
    if (uVar13 != 0) {
      if (0xaaaaaaaaaaaaaaa < uVar13) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar13 = uVar13 * 0x18;
      local_3d18 = operator_new(uVar13);
      pvVar9 = (void *)((long)local_3d18 + uVar13);
      local_3d08 = pvVar9;
      memset(local_3d18,0,((uVar13 - 0x18) / 0x18) * 0x18 + 0x18);
      local_3d10 = pvVar9;
    }
    plVar14 = *(long **)(param_1 + 0x50);
    if (plVar14 != (long *)0x0) {
      lVar19 = 0;
      lVar12 = 0;
      uVar13 = 0;
      plVar15 = plVar14;
      do {
        pvVar9 = local_3ce8;
        uVar10 = ((long)local_3ce0 - (long)local_3ce8 >> 5) * -0x21ebdbf5664b435;
        if ((uVar10 < uVar13 || uVar10 - uVar13 == 0) ||
           (uVar10 = ((long)local_3d10 - (long)local_3d18 >> 3) * -0x5555555555555555,
           uVar10 < uVar13 || uVar10 - uVar13 == 0)) {
LAB_00426ad4:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x587,
                     "__n < size()","vector[] index out of bounds");
        }
        lVar18 = plVar15[5];
        FUN_00411268((long)local_3d18 + lVar19,plVar15 + 2);
        if ((ulong)((long)local_3cf8 - (long)local_3d00 >> 3) <= uVar13) goto LAB_00426ad4;
        lVar2 = (long)pvVar9 + lVar12;
        *(long *)((long)local_3d00 + uVar13 * 8) = lVar2;
        uVar8 = FUN_0042843c(lVar18);
        FUN_00658d78(lVar2,0,0,param_2,param_3,4,2,uVar8);
        uVar8 = FUN_006591a0(lVar2);
        uVar10 = FUN_0042805c(lVar18,param_2,param_3,uVar8);
        if (((uVar10 & 1) == 0) && (uVar10 = FUN_004022fc(), (uVar10 & 1) == 0)) {
          FUN_00623bb0(&DAT_001f4eff,
                       "../../discord_native_lib/src/media/audio_device/multi_sample_source_audio.cpp"
                       ,0x51a,"Failed to get audio samples from source ",plVar15 + 2,", skipping");
        }
        uVar10 = FUN_00427ea0(lVar18);
        if ((uVar10 & 1) == 0) {
          plVar15 = (long *)FUN_004274f4(param_1 + 0x40,plVar15);
        }
        else {
          plVar15 = (long *)*plVar15;
        }
        lVar12 = lVar12 + 0x3c60;
        lVar19 = lVar19 + 0x18;
        uVar13 = uVar13 + 1;
      } while (plVar15 != (long *)0x0);
      if ((*(char *)(*(long *)(param_1 + 0x44e0) + 0x10) == '\0') && (plVar14 != (long *)0x0)) {
        (**(code **)(param_1 + 0x44d8))
                  (param_1 + 0x44c8,&local_3d18,&local_3d00,param_2,(long)*(int *)(param_1 + 0x30),
                   (long)param_3);
      }
    }
    FUN_00658c48(auStack_3cd0);
    lVar19 = (long)local_3cf8 - (long)local_3d00 >> 3;
    pvVar9 = (void *)0x0;
    if ((long)local_3cf8 - (long)local_3d00 != 0) {
      pvVar9 = local_3d00;
    }
    FUN_00994cf8(param_1 + 0x68,pvVar9,lVar19,(long)*(int *)(param_1 + 0x30),param_3,lVar19,
                 auStack_3cd0);
    pvVar9 = (void *)FUN_00659108(auStack_3cd0);
    memcpy(param_4,pvVar9,param_2 * *(int *)(param_1 + 0x30) * 2);
    if (local_3c90 != (int *)0x0) {
      do {
        iVar3 = *local_3c90;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(local_3c90,0x10);
        if (bVar5) {
          *local_3c90 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        pvVar9 = *(void **)(local_3c90 + 2);
        if (pvVar9 != (void *)0x0) {
          pvVar7 = pvVar9;
          pvVar11 = *(void **)(local_3c90 + 4);
          if (*(void **)(local_3c90 + 4) != pvVar9) {
            do {
              pvVar7 = *(void **)((long)pvVar11 + -0x60);
              pvVar16 = (void *)((long)pvVar11 + -0x68);
              if (pvVar7 != (void *)0x0) {
                *(void **)((long)pvVar11 + -0x58) = pvVar7;
                operator_delete(pvVar7);
              }
              pvVar11 = pvVar16;
            } while (pvVar16 != pvVar9);
            pvVar7 = *(void **)(local_3c90 + 2);
          }
          *(void **)(local_3c90 + 4) = pvVar9;
          operator_delete(pvVar7);
        }
        operator_delete(local_3c90);
      }
    }
    if (local_3d18 != (void *)0x0) {
      for (; local_3d10 != local_3d18; local_3d10 = (void *)((long)local_3d10 + -0x18)) {
      }
      local_3d10 = local_3d18;
      operator_delete(local_3d18);
    }
    if (local_3d00 != (void *)0x0) {
      local_3cf8 = local_3d00;
      operator_delete(local_3d00);
    }
    FUN_00426b0c(&local_3ce8);
  }
  FUN_00546948(lVar1);
  if (*(long *)(lVar6 + 0x28) == local_70) {
    return lVar17 != 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00426b0c  FUN_00426b0c =====

void FUN_00426b0c(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  int *piVar7;
  void *pvVar8;
  void *pvVar9;
  void *pvVar10;
  
  pvVar8 = (void *)*param_1;
  if (pvVar8 == (void *)0x0) {
    return;
  }
  pvVar9 = (void *)param_1[1];
  pvVar5 = pvVar8;
  if (pvVar9 != pvVar8) {
    do {
      pvVar5 = (void *)((long)pvVar9 + -0x3c60);
      piVar7 = *(int **)((long)pvVar9 + -0x3c20);
      if (piVar7 != (int *)0x0) {
        do {
          iVar1 = *piVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar3) {
            *piVar7 = iVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar1 + -1 == 0) {
          pvVar9 = *(void **)(piVar7 + 2);
          if (pvVar9 != (void *)0x0) {
            pvVar4 = pvVar9;
            pvVar6 = *(void **)(piVar7 + 4);
            if (*(void **)(piVar7 + 4) != pvVar9) {
              do {
                pvVar4 = *(void **)((long)pvVar6 + -0x60);
                pvVar10 = (void *)((long)pvVar6 + -0x68);
                if (pvVar4 != (void *)0x0) {
                  *(void **)((long)pvVar6 + -0x58) = pvVar4;
                  operator_delete(pvVar4);
                }
                pvVar6 = pvVar10;
              } while (pvVar10 != pvVar9);
              pvVar4 = *(void **)(piVar7 + 2);
            }
            *(void **)(piVar7 + 4) = pvVar9;
            operator_delete(pvVar4);
          }
          operator_delete(piVar7);
        }
      }
      pvVar9 = pvVar5;
    } while (pvVar5 != pvVar8);
    pvVar5 = (void *)*param_1;
  }
  param_1[1] = pvVar8;
  operator_delete(pvVar5);
  return;
}


// ===== 00426bfc  FUN_00426bfc =====

long FUN_00426bfc(long param_1)

{
  return (long)*(int *)(param_1 + 0x30);
}


// ===== 00426c04  FUN_00426c04 =====

bool FUN_00426c04(long param_1)

{
  long lVar1;
  
  FUN_00546924(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x58);
  FUN_00546948(param_1 + 8);
  return lVar1 != 0;
}


// ===== 00426c40  FUN_00426c40 =====

void FUN_00426c40(char *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1[0x17] = '\x16';
  uVar2 = s_MultiSampleSourceAudio_001c7b58._0_8_;
  if ((param_1 < "ultiSampleSourceAudio") && ("MultiSampleSourceAudio" < param_1 + 0x16)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  uVar1 = CONCAT62(s_MultiSampleSourceAudio_001c7b58._16_6_,s_MultiSampleSourceAudio_001c7b58._14_2_
                  );
  *(ulong *)(param_1 + 8) =
       CONCAT26(s_MultiSampleSourceAudio_001c7b58._14_2_,s_MultiSampleSourceAudio_001c7b58._8_6_);
  *(undefined8 *)param_1 = uVar2;
  *(undefined8 *)(param_1 + 0xe) = uVar1;
  param_1[0x16] = '\0';
  return;
}


// ===== 00426cb0  FUN_00426cb0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00426cb0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  
  pcVar6 = (char *)operator_new(0x60);
  *param_1 = pcVar6;
  uVar1 = _DAT_001f2930;
  param_1[2] = _UNK_001f2938;
  param_1[1] = uVar1;
  uVar3 = s_MultiSampleSourceAudio_outputs_a_001a858b._56_8_;
  uVar2 = s_MultiSampleSourceAudio_outputs_a_001a858b._48_8_;
  uVar1 = s_MultiSampleSourceAudio_outputs_a_001a858b._32_8_;
  if ((pcVar6 < "ultiSampleSourceAudio outputs a PCM audio frame from the passed in AudioBuffers")
     && ("MultiSampleSourceAudio outputs a PCM audio frame from the passed in AudioBuffers" <
         pcVar6 + 0x50)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  *(undefined8 *)(pcVar6 + 0x28) = s_MultiSampleSourceAudio_outputs_a_001a858b._40_8_;
  *(undefined8 *)(pcVar6 + 0x20) = uVar1;
  *(undefined8 *)(pcVar6 + 0x38) = uVar3;
  *(undefined8 *)(pcVar6 + 0x30) = uVar2;
  uVar5 = s_MultiSampleSourceAudio_outputs_a_001a858b._64_8_;
  uVar4 = s_MultiSampleSourceAudio_outputs_a_001a858b._24_8_;
  uVar3 = s_MultiSampleSourceAudio_outputs_a_001a858b._16_8_;
  uVar2 = s_MultiSampleSourceAudio_outputs_a_001a858b._8_8_;
  uVar1 = s_MultiSampleSourceAudio_outputs_a_001a858b._0_8_;
  *(undefined8 *)(pcVar6 + 0x48) = s_MultiSampleSourceAudio_outputs_a_001a858b._72_8_;
  *(undefined8 *)(pcVar6 + 0x40) = uVar5;
  *(undefined8 *)(pcVar6 + 8) = uVar2;
  *(undefined8 *)pcVar6 = uVar1;
  *(undefined8 *)(pcVar6 + 0x18) = uVar4;
  *(undefined8 *)(pcVar6 + 0x10) = uVar3;
  pcVar6[0x50] = '\0';
  return;
}


// ===== 00426d44  FUN_00426d44 =====

void FUN_00426d44(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  long *plVar3;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_1[0x89c] + 8);
  *param_1 = &PTR_FUN_00d1b8d8;
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(param_1[0x899]);
  }
  FUN_00994408(param_1 + 0xd);
  puVar1 = (undefined8 *)param_1[10];
  while (puVar1 != (undefined8 *)0x0) {
    plVar3 = (long *)puVar1[5];
    puVar1[5] = 0;
    pvVar2 = (void *)*puVar1;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x30))();
    }
    if (*(char *)((long)puVar1 + 0x27) < '\0') {
      operator_delete((void *)puVar1[2]);
    }
    operator_delete(puVar1);
    puVar1 = (undefined8 *)pvVar2;
  }
  pvVar2 = (void *)param_1[8];
  param_1[8] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  FUN_005468e0(param_1 + 1);
  return;
}


// ===== 00426dec  FUN_00426dec =====

void FUN_00426dec(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  long *plVar3;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_1[0x89c] + 8);
  *param_1 = &PTR_FUN_00d1b8d8;
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(param_1[0x899]);
  }
  FUN_00994408(param_1 + 0xd);
  puVar1 = (undefined8 *)param_1[10];
  while (puVar1 != (undefined8 *)0x0) {
    plVar3 = (long *)puVar1[5];
    puVar1[5] = 0;
    pvVar2 = (void *)*puVar1;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x30))();
    }
    if (*(char *)((long)puVar1 + 0x27) < '\0') {
      operator_delete((void *)puVar1[2]);
    }
    operator_delete(puVar1);
    puVar1 = (undefined8 *)pvVar2;
  }
  pvVar2 = (void *)param_1[8];
  param_1[8] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  FUN_005468e0(param_1 + 1);
  operator_delete(param_1);
  return;
}


// ===== 00426e9c  FUN_00426e9c =====

long * FUN_00426e9c(long *param_1,undefined8 *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined2 uVar13;
  undefined8 uVar14;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar7 = param_2[1];
  puVar5 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar7 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar5 = param_2;
  }
  uVar7 = FUN_00427058(auStack_70,puVar5,uVar7);
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    uVar14 = NEON_cnt(uVar10,1);
    uVar13 = NEON_uaddlv(uVar14,1);
    uVar11 = CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar13) & 0xffffffff;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & uVar7;
    }
    else {
      uVar12 = uVar7;
      if (uVar10 <= uVar7) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = uVar7 / uVar10;
        }
        uVar12 = uVar7 - uVar12 * uVar10;
      }
    }
    plVar8 = *(long **)(*param_1 + uVar12 * 8);
    if (plVar8 != (long *)0x0) {
      plVar8 = (long *)*plVar8;
      if (plVar8 != (long *)0x0) {
        puVar5 = (undefined8 *)*param_2;
        __n = param_2[1];
        if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
          puVar5 = param_2;
          __n = (ulong)*(byte *)((long)param_2 + 0x17);
        }
        do {
          uVar9 = plVar8[1];
          if (uVar9 == uVar7) {
            bVar2 = *(byte *)((long)plVar8 + 0x27);
            sVar1 = plVar8[3];
            if (-1 < (char)bVar2) {
              sVar1 = (ulong)bVar2;
            }
            if (sVar1 == __n) {
              if ((char)bVar2 < '\0') {
                if ((__n == 0) || (iVar6 = memcmp((void *)plVar8[2],puVar5,__n), iVar6 == 0)) break;
              }
              else {
                if (bVar2 == 0) break;
                uVar9 = 0;
                while (*(char *)((long)plVar8 + uVar9 + 0x10) == *(char *)((long)puVar5 + uVar9)) {
                  uVar9 = uVar9 + 1;
                  if (bVar2 == uVar9) goto LAB_00427020;
                }
              }
            }
          }
          else {
            if (uVar11 < 2) {
              uVar9 = uVar9 & uVar10 - 1;
            }
            else if (uVar10 <= uVar9) {
              uVar3 = 0;
              if (uVar10 != 0) {
                uVar3 = uVar9 / uVar10;
              }
              uVar9 = uVar9 - uVar3 * uVar10;
            }
            if (uVar9 != uVar12) goto LAB_0042701c;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      goto LAB_00427020;
    }
  }
LAB_0042701c:
  plVar8 = (long *)0x0;
LAB_00427020:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return plVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00427058  FUN_00427058 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_00427058(undefined8 param_1,ulong *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auVar16 [16];
  long lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  if (param_3 < 0x21) {
    if (param_3 < 0x11) {
      if (8 < param_3) {
        uVar5 = *(ulong *)((long)param_2 + (param_3 - 8));
        uVar6 = uVar5 + param_3;
        uVar7 = uVar6 >> (param_3 & 0x3f) | uVar6 << 0x40 - (param_3 & 0x3f);
        uVar6 = (uVar7 ^ *param_2) * -0x622015f714c7d297;
        uVar6 = (uVar7 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
        return (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297 ^ uVar5;
      }
      if (param_3 < 4) {
        if (param_3 == 0) {
          return 0x9ae16a3b2f90404f;
        }
        uVar6 = (param_3 + (ulong)*(byte *)((long)param_2 + (param_3 - 1)) * 4) *
                -0x36b62838af619aa9 ^
                (ulong)CONCAT11(*(undefined1 *)((long)param_2 + (param_3 >> 1)),(char)*param_2) *
                -0x651e95c4d06fbfb1;
        return (uVar6 ^ uVar6 >> 0x2f) * -0x651e95c4d06fbfb1;
      }
      uVar5 = (ulong)*(uint *)((long)param_2 + (param_3 - 4));
      uVar6 = (param_3 + (ulong)(uint)*param_2 * 8 ^ uVar5) * -0x622015f714c7d297;
      uVar6 = uVar5 ^ uVar6 >> 0x2f ^ uVar6;
    }
    else {
      lVar10 = *(long *)((long)param_2 + (param_3 - 8));
      uVar6 = lVar10 * -0x651e95c4d06fbfb1;
      uVar7 = *param_2 * -0x4b6d499041670d8d - param_2[1];
      uVar5 = param_2[1] ^ 0xc949d7c7509e6557;
      uVar5 = *param_2 * -0x4b6d499041670d8d + param_3 + (uVar5 >> 0x14 | uVar5 << 0x2c) +
              lVar10 * 0x651e95c4d06fbfb1;
      uVar6 = ((uVar6 >> 0x1e | uVar6 << 0x22) + (uVar7 >> 0x2b | uVar7 * 0x200000) +
               *(long *)((long)param_2 + (param_3 - 0x10)) * -0x3c5a37a36834ced9 ^ uVar5) *
              -0x622015f714c7d297;
      uVar6 = uVar5 ^ uVar6 >> 0x2f ^ uVar6;
    }
    lVar8 = -0x622015f714c7d297;
    uVar6 = uVar6 * -0x622015f714c7d297;
  }
  else {
    if (0x40 < param_3) {
      lVar8 = *(long *)((long)param_2 + (param_3 - 0x30));
      lVar2 = *(long *)((long)param_2 + (param_3 - 0x28));
      uVar7 = *(ulong *)((long)param_2 + (param_3 - 0x18));
      lVar1 = *(long *)((long)param_2 + (param_3 - 0x38));
      uVar6 = (uVar7 ^ lVar8 + param_3) * -0x622015f714c7d297;
      lVar10 = *(long *)((long)param_2 + (param_3 - 0x40)) + param_3;
      lVar17 = *(long *)((long)param_2 + (param_3 - 0x10));
      lVar13 = *(long *)((long)param_2 + (param_3 - 8));
      uVar4 = (uVar7 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
      uVar6 = lVar10 + lVar1 + lVar8;
      lVar15 = *param_2 + lVar2 * -0x4b6d499041670d8d;
      uVar5 = lVar1 + lVar17;
      lVar8 = uVar5 + *(long *)((long)param_2 + (param_3 - 0x20)) + -0x4b6d499041670d8d;
      uVar14 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
      uVar7 = lVar8 + uVar7 + lVar17;
      uVar4 = lVar2 + lVar10 + uVar14;
      uVar11 = lVar8 + lVar2 + lVar13;
      uVar12 = uVar6 + lVar2;
      uVar9 = uVar7 + lVar13;
      uVar6 = (uVar6 >> 0x2c | uVar6 * 0x100000) + lVar10 + (uVar4 >> 0x15 | uVar4 << 0x2b);
      uVar7 = (uVar7 >> 0x2c | uVar7 * 0x100000) + lVar8 + (uVar11 >> 0x15 | uVar11 << 0x2b);
      lVar10 = -(param_3 - 1 & 0xffffffffffffffc0);
      puVar3 = param_2 + 4;
      do {
        uVar4 = uVar14 + uVar9;
        lVar10 = lVar10 + 0x40;
        lVar17 = puVar3[-4] + uVar6 * -0x4b6d499041670d8d;
        uVar11 = lVar15 + uVar12 + uVar5 + puVar3[-3];
        uVar6 = uVar5 + uVar6 + puVar3[2];
        uVar5 = puVar3[1] + uVar12 + (uVar6 >> 0x2a | uVar6 * 0x400000) * -0x4b6d499041670d8d;
        uVar14 = (uVar11 >> 0x25 | uVar11 * 0x8000000) * -0x4b6d499041670d8d ^ uVar7;
        lVar15 = (uVar4 >> 0x21 | uVar4 * 0x80000000) * -0x4b6d499041670d8d;
        lVar8 = lVar15 + uVar7 + *puVar3;
        uVar6 = lVar17 + puVar3[-3] + puVar3[-2];
        uVar7 = lVar8 + puVar3[1] + puVar3[2];
        uVar4 = lVar17 + uVar9 + puVar3[-1] + uVar14;
        uVar11 = uVar5 + puVar3[-2] + lVar8 + puVar3[3];
        uVar12 = uVar6 + puVar3[-1];
        uVar6 = (uVar6 >> 0x2c | uVar6 * 0x100000) + lVar17 + (uVar4 >> 0x15 | uVar4 << 0x2b);
        uVar9 = uVar7 + puVar3[3];
        uVar7 = (uVar7 >> 0x2c | uVar7 * 0x100000) + lVar8 + (uVar11 >> 0x15 | uVar11 << 0x2b);
        puVar3 = puVar3 + 8;
      } while (lVar10 != 0);
      uVar4 = (uVar9 ^ uVar12) * -0x622015f714c7d297;
      uVar11 = (uVar7 ^ uVar6) * -0x622015f714c7d297;
      uVar6 = (uVar9 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
      uVar7 = (uVar7 ^ uVar11 >> 0x2f ^ uVar11) * -0x622015f714c7d297;
      uVar7 = lVar15 + (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
      uVar6 = (uVar7 ^ uVar14 + (uVar5 ^ uVar5 >> 0x2f) * -0x4b6d499041670d8d +
                       (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297) * -0x622015f714c7d297;
      uVar6 = (uVar7 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
      return (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    }
    uVar6 = param_2[3];
    lVar2 = *(long *)((long)param_2 + (param_3 - 0x10));
    lVar10 = *(long *)((long)param_2 + (param_3 - 8)) + uVar6;
    lVar13 = *param_2 + (lVar2 + param_3) * -0x3c5a37a36834ced9;
    lVar8 = *(long *)((long)param_2 + (param_3 - 0x20)) + param_2[2];
    lVar17 = *(long *)((long)param_2 + (param_3 - 0x18)) + lVar8;
    lVar2 = lVar17 + lVar2;
    lVar1 = lVar13 + param_2[1] + param_2[2];
    auVar22._8_8_ = lVar2;
    auVar22._0_8_ = lVar10 + lVar8;
    auVar23._8_8_ = lVar1;
    auVar23._0_8_ = lVar13 + uVar6;
    auVar21._8_8_ = lVar13 + param_2[1];
    auVar21._0_8_ = lVar13;
    auVar26 = NEON_ushl(auVar22,_DAT_001f1af0,8);
    auVar19 = NEON_ushl(auVar22,_DAT_001f3240,8);
    auVar24 = NEON_ushl(auVar23,_DAT_001f1af0,8);
    auVar23 = NEON_ushl(auVar23,_DAT_001f3240,8);
    auVar25 = NEON_ushl(auVar21,_DAT_001f4c80,8);
    auVar22 = NEON_ushl(auVar21,_DAT_001f3030,8);
    auVar16._8_8_ = lVar17;
    auVar16._0_8_ = lVar8;
    auVar16 = NEON_ushl(auVar16,_DAT_001f4c80,8);
    auVar18._8_8_ = lVar17;
    auVar18._0_8_ = lVar8;
    auVar18 = NEON_ushl(auVar18,_DAT_001f3030,8);
    auVar20._0_8_ =
         CONCAT17(auVar19[7] | auVar26[7],
                  CONCAT16(auVar19[6] | auVar26[6],
                           CONCAT15(auVar19[5] | auVar26[5],
                                    CONCAT14(auVar19[4] | auVar26[4],
                                             CONCAT13(auVar19[3] | auVar26[3],
                                                      CONCAT12(auVar19[2] | auVar26[2],
                                                               CONCAT11(auVar19[1] | auVar26[1],
                                                                        auVar19[0] | auVar26[0])))))
                          ));
    auVar20[8] = auVar19[8] | auVar26[8];
    auVar20[9] = auVar19[9] | auVar26[9];
    auVar20[10] = auVar19[10] | auVar26[10];
    auVar20[0xb] = auVar19[0xb] | auVar26[0xb];
    auVar20[0xc] = auVar19[0xc] | auVar26[0xc];
    auVar20[0xd] = auVar19[0xd] | auVar26[0xd];
    auVar20[0xe] = auVar19[0xe] | auVar26[0xe];
    auVar20[0xf] = auVar19[0xf] | auVar26[0xf];
    auVar19._0_8_ =
         CONCAT17(auVar18[7] | auVar16[7],
                  CONCAT16(auVar18[6] | auVar16[6],
                           CONCAT15(auVar18[5] | auVar16[5],
                                    CONCAT14(auVar18[4] | auVar16[4],
                                             CONCAT13(auVar18[3] | auVar16[3],
                                                      CONCAT12(auVar18[2] | auVar16[2],
                                                               CONCAT11(auVar18[1] | auVar16[1],
                                                                        auVar18[0] | auVar16[0])))))
                          ));
    auVar19[8] = auVar18[8] | auVar16[8];
    auVar19[9] = auVar18[9] | auVar16[9];
    auVar19[10] = auVar18[10] | auVar16[10];
    auVar19[0xb] = auVar18[0xb] | auVar16[0xb];
    auVar19[0xc] = auVar18[0xc] | auVar16[0xc];
    auVar19[0xd] = auVar18[0xd] | auVar16[0xd];
    auVar19[0xe] = auVar18[0xe] | auVar16[0xe];
    auVar19[0xf] = auVar18[0xf] | auVar16[0xf];
    auVar26._0_8_ =
         CONCAT17(auVar22[7] | auVar25[7],
                  CONCAT16(auVar22[6] | auVar25[6],
                           CONCAT15(auVar22[5] | auVar25[5],
                                    CONCAT14(auVar22[4] | auVar25[4],
                                             CONCAT13(auVar22[3] | auVar25[3],
                                                      CONCAT12(auVar22[2] | auVar25[2],
                                                               CONCAT11(auVar22[1] | auVar25[1],
                                                                        auVar22[0] | auVar25[0])))))
                          ));
    auVar26[8] = auVar22[8] | auVar25[8];
    auVar26[9] = auVar22[9] | auVar25[9];
    auVar26[10] = auVar22[10] | auVar25[10];
    auVar26[0xb] = auVar22[0xb] | auVar25[0xb];
    auVar26[0xc] = auVar22[0xc] | auVar25[0xc];
    auVar26[0xd] = auVar22[0xd] | auVar25[0xd];
    auVar26[0xe] = auVar22[0xe] | auVar25[0xe];
    auVar26[0xf] = auVar22[0xf] | auVar25[0xf];
    auVar25._0_8_ =
         CONCAT17(auVar23[7] | auVar24[7],
                  CONCAT16(auVar23[6] | auVar24[6],
                           CONCAT15(auVar23[5] | auVar24[5],
                                    CONCAT14(auVar23[4] | auVar24[4],
                                             CONCAT13(auVar23[3] | auVar24[3],
                                                      CONCAT12(auVar23[2] | auVar24[2],
                                                               CONCAT11(auVar23[1] | auVar24[1],
                                                                        auVar23[0] | auVar24[0])))))
                          ));
    auVar25[8] = auVar23[8] | auVar24[8];
    auVar25[9] = auVar23[9] | auVar24[9];
    auVar25[10] = auVar23[10] | auVar24[10];
    auVar25[0xb] = auVar23[0xb] | auVar24[0xb];
    auVar25[0xc] = auVar23[0xc] | auVar24[0xc];
    auVar25[0xd] = auVar23[0xd] | auVar24[0xd];
    auVar25[0xe] = auVar23[0xe] | auVar24[0xe];
    auVar25[0xf] = auVar23[0xf] | auVar24[0xf];
    lVar17 = auVar26._0_8_ + auVar25._0_8_ + auVar26._8_8_ + auVar25._8_8_;
    lVar8 = -0x651e95c4d06fbfb1;
    uVar6 = (lVar2 + lVar10 + lVar17) * -0x3c5a37a36834ced9 +
            (auVar19._0_8_ + auVar20._0_8_ + auVar19._8_8_ + auVar20._8_8_ + lVar1 + uVar6) *
            -0x651e95c4d06fbfb1;
    uVar6 = lVar17 + (uVar6 ^ uVar6 >> 0x2f) * -0x3c5a37a36834ced9;
  }
  return (uVar6 ^ uVar6 >> 0x2f) * lVar8;
}


// ===== 004274f4  FUN_004274f4 =====

undefined8 FUN_004274f4(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  undefined8 uVar4;
  void *local_50 [2];
  char local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__hash_table",0x965,
               "__p != end()",
               "unordered container erase(iterator) called with a non-dereferenceable iterator");
  }
  uVar4 = *param_2;
  FUN_004275bc(local_50);
  pvVar2 = local_50[0];
  local_50[0] = (void *)0x0;
  if (pvVar2 != (void *)0x0) {
    if (local_40 != '\0') {
      plVar3 = *(long **)((long)pvVar2 + 0x28);
      *(undefined8 *)((long)pvVar2 + 0x28) = 0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x30))();
      }
      if (*(char *)((long)pvVar2 + 0x27) < '\0') {
        operator_delete(*(void **)((long)pvVar2 + 0x10));
      }
    }
    operator_delete(pvVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004275bc  FUN_004275bc =====

void FUN_004275bc(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  
  uVar5 = param_2[1];
  uVar3 = param_3[1];
  uVar11 = NEON_cnt(uVar5,1);
  uVar10 = NEON_uaddlv(uVar11,1);
  uVar7 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
  if (uVar7 < 2) {
    uVar3 = uVar5 - 1 & uVar3;
  }
  else if (uVar5 <= uVar3) {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar3 / uVar5;
    }
    uVar3 = uVar3 - uVar9 * uVar5;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar6 = plVar2;
    plVar2 = (long *)*plVar6;
  } while ((long *)*plVar6 != param_3);
  if (plVar6 != param_2 + 2) {
    uVar9 = plVar6[1];
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_00427688;
  }
  if (*param_3 != 0) {
    uVar9 = *(ulong *)(*param_3 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_00427688;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_00427688:
  lVar8 = *param_3;
  if (lVar8 != 0) {
    uVar9 = *(ulong *)(lVar8 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar7 * uVar5;
    }
    if (uVar9 != uVar3) {
      *(long **)(*param_2 + uVar9 * 8) = plVar6;
      lVar8 = *param_3;
    }
  }
  lVar4 = param_2[3];
  *plVar6 = lVar8;
  *param_3 = 0;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  param_2[3] = lVar4 + -1;
  return;
}


// ===== 004276f0  FUN_004276f0 =====

long * FUN_004276f0(long *param_1,undefined8 *param_2,long *param_3,long *param_4)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *unaff_x28;
  undefined2 uVar16;
  undefined8 uVar17;
  float fVar18;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar11 = param_2[1];
  puVar6 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar11 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar6 = param_2;
  }
  plVar5 = (long *)FUN_00427058(auStack_70,puVar6,uVar11);
  plVar15 = (long *)param_1[1];
  if (plVar15 != (long *)0x0) {
    uVar17 = NEON_cnt(plVar15,1);
    uVar16 = NEON_uaddlv(uVar17,1);
    uVar11 = CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) & 0xffffffff;
    if (uVar11 < 2) {
      unaff_x28 = (long *)((long)plVar15 - 1U & (ulong)plVar5);
    }
    else {
      unaff_x28 = plVar5;
      if (plVar15 <= plVar5) {
        uVar9 = 0;
        if (plVar15 != (long *)0x0) {
          uVar9 = (ulong)plVar5 / (ulong)plVar15;
        }
        unaff_x28 = (long *)((long)plVar5 - uVar9 * (long)plVar15);
      }
    }
    puVar6 = *(undefined8 **)(*param_1 + (long)unaff_x28 * 8);
    if ((puVar6 != (undefined8 *)0x0) && (plVar14 = (long *)*puVar6, plVar14 != (long *)0x0)) {
      puVar6 = (undefined8 *)*param_2;
      __n = param_2[1];
      if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
        puVar6 = param_2;
        __n = (ulong)*(byte *)((long)param_2 + 0x17);
      }
      do {
        plVar7 = (long *)plVar14[1];
        if (plVar7 != plVar5) {
          if (uVar11 < 2) {
            plVar7 = (long *)((ulong)plVar7 & (long)plVar15 - 1U);
          }
          else if (plVar15 <= plVar7) {
            uVar9 = 0;
            if (plVar15 != (long *)0x0) {
              uVar9 = (ulong)plVar7 / (ulong)plVar15;
            }
            plVar7 = (long *)((long)plVar7 - uVar9 * (long)plVar15);
          }
          if (plVar7 != unaff_x28) break;
        }
        bVar2 = *(byte *)((long)plVar14 + 0x27);
        sVar1 = plVar14[3];
        if (-1 < (char)bVar2) {
          sVar1 = (ulong)bVar2;
        }
        if (sVar1 == __n) {
          plVar7 = plVar14 + 2;
          plVar12 = (long *)*plVar7;
          if ((char)bVar2 < '\0') {
            plVar7 = plVar12;
            if (__n != 0) {
              uVar4 = memcmp(plVar12,puVar6,__n);
              plVar7 = (long *)(ulong)uVar4;
              if (uVar4 != 0) goto LAB_004277cc;
            }
          }
          else if (bVar2 != 0) {
            uVar9 = 0;
            while (*(char *)((long)plVar14 + uVar9 + 0x10) == *(char *)((long)puVar6 + uVar9)) {
              uVar9 = uVar9 + 1;
              if (bVar2 == uVar9) goto LAB_004278ac;
            }
            goto LAB_004277cc;
          }
LAB_004278ac:
          uVar17 = 0;
          goto LAB_00427b08;
        }
LAB_004277cc:
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
  }
  plVar14 = (long *)operator_new(0x30);
  plVar7 = plVar14 + 2;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    plVar12 = (long *)*param_3;
    uVar11 = param_3[1];
    if (uVar11 < 0x17) {
      *(char *)((long)plVar14 + 0x27) = (char)uVar11;
    }
    else {
      if (0x7fffffffffffffef < uVar11) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar9 = (uVar11 | 0xf) + 1;
      plVar7 = (long *)operator_new(uVar9);
      plVar14[2] = (long)plVar7;
      plVar14[3] = uVar11;
      plVar14[4] = uVar9 | 0x8000000000000000;
    }
    if ((plVar7 <= plVar12) && (plVar12 < (long *)((long)plVar7 + uVar11 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    plVar7 = (long *)memmove(plVar7,plVar12,uVar11 + 1);
  }
  else {
    lVar10 = *param_3;
    lVar8 = param_3[2];
    plVar14[3] = param_3[1];
    *plVar7 = lVar10;
    plVar14[4] = lVar8;
  }
  lVar8 = param_1[3];
  *plVar14 = 0;
  plVar14[1] = (long)plVar5;
  lVar10 = *param_4;
  *param_4 = 0;
  fVar18 = *(float *)(param_1 + 4);
  plVar14[5] = lVar10;
  if ((plVar15 == (long *)0x0) || (fVar18 * (float)plVar15 < (float)(lVar8 + 1))) {
    if (plVar15 < (long *)0x3) {
      uVar11 = 1;
    }
    else {
      uVar11 = (ulong)(((ulong)plVar15 & (long)plVar15 - 1U) != 0);
    }
    plVar12 = (long *)(uVar11 | (long)plVar15 << 1);
    plVar13 = (long *)(long)((float)(lVar8 + 1) / fVar18);
    if (plVar12 <= plVar13) {
      plVar12 = plVar13;
    }
    if ((long)plVar12 - 1U == 0) {
      plVar12 = (long *)0x2;
    }
    else if (((ulong)plVar12 & (long)plVar12 - 1U) != 0) {
      plVar7 = (long *)FUN_005204f8(plVar12);
      plVar15 = (long *)param_1[1];
      plVar12 = plVar7;
    }
    if (plVar15 < plVar12) {
LAB_004279e4:
      plVar7 = (long *)FUN_00427b6c(param_1,plVar12);
    }
    else if (plVar12 < plVar15) {
      plVar7 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (plVar15 < (long *)0x3) {
LAB_00427a4c:
        plVar7 = (long *)FUN_005204f8();
      }
      else {
        uVar17 = NEON_cnt(plVar15,1);
        uVar16 = NEON_uaddlv(uVar17,1);
        if (1 < (CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) & 0xffffffff)) goto LAB_00427a4c;
        if ((long *)0x1 < plVar7) {
          plVar7 = (long *)(1L << (-LZCOUNT((long)plVar7 + -1) & 0x3fU));
        }
      }
      if (plVar12 <= plVar7) {
        plVar12 = plVar7;
      }
      if (plVar12 < plVar15) goto LAB_004279e4;
    }
    plVar15 = (long *)param_1[1];
    if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
      unaff_x28 = (long *)((long)plVar15 - 1U & (ulong)plVar5);
    }
    else {
      unaff_x28 = plVar5;
      if (plVar15 <= plVar5) {
        uVar11 = 0;
        if (plVar15 != (long *)0x0) {
          uVar11 = (ulong)plVar5 / (ulong)plVar15;
        }
        unaff_x28 = (long *)((long)plVar5 - uVar11 * (long)plVar15);
      }
    }
  }
  lVar8 = *param_1;
  plVar5 = *(long **)(lVar8 + (long)unaff_x28 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    lVar10 = *plVar5;
    *plVar5 = (long)plVar14;
    *plVar14 = lVar10;
    *(long **)(lVar8 + (long)unaff_x28 * 8) = plVar5;
    if (*plVar14 == 0) goto LAB_00427af8;
    plVar5 = *(long **)(*plVar14 + 8);
    if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
      plVar5 = (long *)((ulong)plVar5 & (long)plVar15 - 1U);
    }
    else if (plVar15 <= plVar5) {
      uVar11 = 0;
      if (plVar15 != (long *)0x0) {
        uVar11 = (ulong)plVar5 / (ulong)plVar15;
      }
      plVar5 = (long *)((long)plVar5 - uVar11 * (long)plVar15);
    }
    plVar5 = (long *)(*param_1 + (long)plVar5 * 8);
  }
  else {
    *plVar14 = *plVar5;
  }
  *plVar5 = (long)plVar14;
LAB_00427af8:
  uVar17 = 1;
  param_1[3] = param_1[3] + 1;
LAB_00427b08:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(plVar7,uVar17);
  }
  return plVar14;
}


// ===== 00427b6c  FUN_00427b6c =====

void FUN_00427b6c(long *param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  if (param_2 == 0) {
    pvVar2 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00401ad4();
    }
    pvVar2 = operator_new(param_2 << 3);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)pvVar2;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    uVar4 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      uVar4 = plVar5[1];
      uVar10 = NEON_cnt(param_2,1);
      uVar9 = NEON_uaddlv(uVar10,1);
      uVar6 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
      if (uVar6 < 2) {
        uVar4 = uVar4 & param_2 - 1;
      }
      else if (param_2 <= uVar4) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar8 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      plVar7 = (long *)*plVar5;
      if (plVar7 != (long *)0x0) {
        do {
          uVar8 = plVar7[1];
          if (uVar6 < 2) {
            uVar8 = uVar8 & param_2 - 1;
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
              *(long **)(*param_1 + uVar8 * 8) = plVar5;
              uVar4 = uVar8;
            }
            else {
              *plVar5 = *plVar7;
              *plVar7 = **(long **)(*param_1 + uVar8 * 8);
              **(undefined8 **)(*param_1 + uVar8 * 8) = plVar7;
              plVar7 = plVar5;
            }
          }
          plVar5 = plVar7;
          plVar7 = (long *)*plVar5;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  return;
}


// ===== 00427cc8  FUN_00427cc8 =====

void FUN_00427cc8(long param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  code *pcVar8;
  undefined8 uVar9;
  void *local_80;
  char acStack_78 [8];
  undefined4 local_70;
  char local_6c [3];
  char local_69;
  long local_68;
  
  lVar5 = tpidr_el0;
  lVar1 = param_1 + 8;
  local_68 = *(long *)(lVar5 + 0x28);
  FUN_00546924(lVar1);
  FUN_00546924(lVar1);
  lVar7 = *(long *)(param_1 + 0x38);
  lVar2 = *(long *)(param_1 + 0x40);
  iVar3 = *(int *)(param_1 + 0x70);
  iVar4 = *(int *)(param_1 + 0x34);
  FUN_00546948(lVar1);
  if (((ulong)(long)iVar4 <= (ulong)((lVar2 - lVar7 >> 1) - (long)iVar3)) &&
     (*(char *)(*(long *)(param_1 + 0x68) + 0x10) == '\0')) {
    local_69 = '\x14';
    if ((&local_80 < "layback interrupted") && ("Playback interrupted" < local_6c)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    acStack_78[0] = s_Playback_interrupted_001a5be9[8];
    acStack_78[1] = s_Playback_interrupted_001a5be9[9];
    acStack_78[2] = s_Playback_interrupted_001a5be9[10];
    acStack_78[3] = s_Playback_interrupted_001a5be9[0xb];
    acStack_78[4] = s_Playback_interrupted_001a5be9[0xc];
    acStack_78[5] = s_Playback_interrupted_001a5be9[0xd];
    acStack_78[6] = s_Playback_interrupted_001a5be9[0xe];
    acStack_78[7] = s_Playback_interrupted_001a5be9[0xf];
    local_80 = (void *)s_Playback_interrupted_001a5be9._0_8_;
    local_70 = 0x64657470;
    local_6c[0] = '\0';
    (**(code **)(param_1 + 0x60))(param_1 + 0x50,1,&local_80);
    if (local_69 < '\0') {
      operator_delete(local_80);
    }
  }
  pvVar6 = *(void **)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x30) = param_2;
  *(undefined4 *)(param_1 + 0x34) = param_3;
  if (pvVar6 != (void *)0x0) {
    *(void **)(param_1 + 0x40) = pvVar6;
    operator_delete(pvVar6);
    *(long *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  uVar9 = *param_4;
  *(undefined8 *)(param_1 + 0x40) = param_4[1];
  *(undefined8 *)(param_1 + 0x38) = uVar9;
  *(undefined8 *)(param_1 + 0x48) = param_4[2];
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  lVar7 = *(long *)(param_1 + 0x68);
  *(undefined8 **)(param_1 + 0x68) = &DAT_001f1910;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(code **)(param_1 + 0x60) = FUN_00419a50;
  pcVar8 = *(code **)(lVar7 + 8);
  if (pcVar8 != (code *)0x0) {
    (*pcVar8)(*(undefined8 *)(param_1 + 0x50));
  }
  uVar9 = *param_5;
  *(undefined8 *)(param_1 + 0x58) = param_5[1];
  *(undefined8 *)(param_1 + 0x50) = uVar9;
  *(undefined8 *)(param_1 + 0x60) = param_5[2];
  *(undefined8 *)(param_1 + 0x68) = param_5[3];
  param_5[2] = FUN_00419a50;
  param_5[3] = &DAT_001f1910;
  FUN_00546948(lVar1);
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00427ea0  FUN_00427ea0 =====

bool FUN_00427ea0(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  FUN_00546924(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x38);
  lVar2 = *(long *)(param_1 + 0x40);
  iVar3 = *(int *)(param_1 + 0x70);
  iVar4 = *(int *)(param_1 + 0x34);
  FUN_00546948(param_1 + 8);
  return (ulong)(long)iVar4 <= (ulong)((lVar2 - lVar1 >> 1) - (long)iVar3);
}


// ===== 00427ef4  FUN_00427ef4 =====

void FUN_00427ef4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  code *pcVar7;
  void *local_60;
  char acStack_58 [8];
  undefined4 local_50;
  char local_4c [3];
  char local_49;
  long local_48;
  
  lVar6 = tpidr_el0;
  lVar1 = param_1 + 8;
  local_48 = *(long *)(lVar6 + 0x28);
  FUN_00546924(lVar1);
  FUN_00546924(lVar1);
  lVar2 = *(long *)(param_1 + 0x38);
  lVar3 = *(long *)(param_1 + 0x40);
  iVar4 = *(int *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x34);
  FUN_00546948(lVar1);
  if (((ulong)(long)iVar5 <= (ulong)((lVar3 - lVar2 >> 1) - (long)iVar4)) &&
     (*(char *)(*(long *)(param_1 + 0x68) + 0x10) == '\0')) {
    local_49 = '\x14';
    if ((&local_60 < "layback interrupted") && ("Playback interrupted" < local_4c)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    acStack_58[0] = s_Playback_interrupted_001a5be9[8];
    acStack_58[1] = s_Playback_interrupted_001a5be9[9];
    acStack_58[2] = s_Playback_interrupted_001a5be9[10];
    acStack_58[3] = s_Playback_interrupted_001a5be9[0xb];
    acStack_58[4] = s_Playback_interrupted_001a5be9[0xc];
    acStack_58[5] = s_Playback_interrupted_001a5be9[0xd];
    acStack_58[6] = s_Playback_interrupted_001a5be9[0xe];
    acStack_58[7] = s_Playback_interrupted_001a5be9[0xf];
    local_60 = (void *)s_Playback_interrupted_001a5be9._0_8_;
    local_50 = 0x64657470;
    local_4c[0] = '\0';
    (**(code **)(param_1 + 0x60))(param_1 + 0x50,1,&local_60);
    if (local_49 < '\0') {
      operator_delete(local_60);
    }
  }
  *(code **)(param_1 + 0x60) = FUN_00419a50;
  pcVar7 = *(code **)(*(long *)(param_1 + 0x68) + 8);
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined8 **)(param_1 + 0x68) = &DAT_001f1910;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x38);
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(*(undefined8 *)(param_1 + 0x50));
  }
  FUN_00546948(lVar1);
  if (*(long *)(lVar6 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042805c  FUN_0042805c =====

bool FUN_0042805c(long param_1,ulong param_2,int param_3,void *param_4)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  void *pvVar10;
  void *pvVar11;
  void *pvVar12;
  void *pvVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  void *pvVar17;
  ulong uVar18;
  ulong uVar19;
  void *local_a0;
  char acStack_98 [8];
  undefined2 local_90;
  char local_89;
  long local_88;
  ulong uStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  
  lVar9 = tpidr_el0;
  lVar1 = param_1 + 8;
  local_68 = *(long *)(lVar9 + 0x28);
  FUN_00546924(lVar1);
  uVar18 = (ulong)*(int *)(param_1 + 0x34);
  uVar14 = *(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x38) >> 1;
  uVar19 = uVar14 - (long)*(int *)(param_1 + 0x70);
  if (uVar18 <= uVar19) {
    uVar8 = 0;
    if (uVar18 != 0) {
      uVar8 = uVar19 / uVar18;
    }
    if (*(int *)(param_1 + 0x30) != param_3) {
      param_2 = (ulong)((float)((long)*(int *)(param_1 + 0x30) * param_2) / (float)param_3);
    }
    if (uVar8 <= param_2 && param_2 - uVar8 != 0) {
      uVar8 = (param_2 - uVar8) * uVar18 + uVar14;
      if (uVar14 < uVar8) {
        FUN_0041fd24();
      }
      else if (uVar8 < uVar14) {
        *(ulong *)(param_1 + 0x40) = *(long *)(param_1 + 0x38) + uVar8 * 2;
      }
    }
    pvVar10 = operator_new(0x3c60);
    FUN_00658c48();
    lVar15 = *(long *)(param_1 + 0x38);
    iVar4 = *(int *)(param_1 + 0x70);
    uVar2 = *(undefined4 *)(param_1 + 0x30);
    local_88 = (long)*(int *)(param_1 + 0x34);
    lStack_70 = param_2 * local_88;
    *(int *)((long)pvVar10 + 0x20) = param_3;
    *(long *)((long)pvVar10 + 0x28) = local_88;
    *(long *)((long)pvVar10 + 0x18) = (long)(param_3 / 100);
    local_78 = 0;
    if (lStack_70 != 0) {
      local_78 = lVar15 + (long)iVar4 * 2;
    }
    uStack_80 = param_2;
    FUN_005dd988(&local_88,uVar2,param_1 + 0x78,pvVar10);
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + *(int *)(param_1 + 0x34) * (int)param_2;
    pvVar11 = (void *)FUN_00659108(pvVar10);
    memcpy(param_4,pvVar11,*(long *)((long)pvVar10 + 0x28) * *(long *)((long)pvVar10 + 0x18) * 2);
    FUN_00546924(lVar1);
    lVar15 = *(long *)(param_1 + 0x38);
    lVar3 = *(long *)(param_1 + 0x40);
    iVar4 = *(int *)(param_1 + 0x70);
    iVar5 = *(int *)(param_1 + 0x34);
    FUN_00546948(lVar1);
    if (((ulong)((lVar3 - lVar15 >> 1) - (long)iVar4) < (ulong)(long)iVar5) &&
       (*(char *)(*(long *)(param_1 + 0x68) + 0x10) == '\0')) {
      local_89 = '\x11';
      if ((&local_a0 < "layback finished") && ("Playback finished" < (char *)((long)&local_90 + 1U))
         ) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      local_90 = 100;
      acStack_98[0] = s_Playback_finished_001c4d37[8];
      acStack_98[1] = s_Playback_finished_001c4d37[9];
      acStack_98[2] = s_Playback_finished_001c4d37[10];
      acStack_98[3] = s_Playback_finished_001c4d37[0xb];
      acStack_98[4] = s_Playback_finished_001c4d37[0xc];
      acStack_98[5] = s_Playback_finished_001c4d37[0xd];
      acStack_98[6] = s_Playback_finished_001c4d37[0xe];
      acStack_98[7] = s_Playback_finished_001c4d37[0xf];
      local_a0 = (void *)s_Playback_finished_001c4d37._0_8_;
      (**(code **)(param_1 + 0x60))(param_1 + 0x50,0,&local_a0);
      if (local_89 < '\0') {
        operator_delete(local_a0);
      }
    }
    piVar16 = *(int **)((long)pvVar10 + 0x40);
    if (piVar16 != (int *)0x0) {
      do {
        iVar4 = *piVar16;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar7) {
          *piVar16 = iVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar4 + -1 == 0) {
        pvVar11 = *(void **)(piVar16 + 2);
        if (pvVar11 != (void *)0x0) {
          pvVar12 = pvVar11;
          pvVar13 = *(void **)(piVar16 + 4);
          if (*(void **)(piVar16 + 4) != pvVar11) {
            do {
              pvVar12 = *(void **)((long)pvVar13 + -0x60);
              pvVar17 = (void *)((long)pvVar13 + -0x68);
              if (pvVar12 != (void *)0x0) {
                *(void **)((long)pvVar13 + -0x58) = pvVar12;
                operator_delete(pvVar12);
              }
              pvVar13 = pvVar17;
            } while (pvVar17 != pvVar11);
            pvVar12 = *(void **)(piVar16 + 2);
          }
          *(void **)(piVar16 + 4) = pvVar11;
          operator_delete(pvVar12);
        }
        operator_delete(piVar16);
      }
    }
    operator_delete(pvVar10);
  }
  FUN_00546948(lVar1);
  if (*(long *)(lVar9 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar18 <= uVar19;
}


// ===== 0042833c  FUN_0042833c =====

void FUN_0042833c(char *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1[0x17] = '\x11';
  uVar2 = s_SampleSourceAudio_001ca507._8_8_;
  uVar1 = s_SampleSourceAudio_001ca507._0_8_;
  if ((param_1 < "ampleSourceAudio") && ("SampleSourceAudio" < param_1 + 0x11)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  param_1[0x10] = 'o';
  param_1[0x11] = '\0';
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined8 *)param_1 = uVar1;
  return;
}


// ===== 004283a8  FUN_004283a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004283a8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  
  pcVar6 = (char *)operator_new(0x50);
  *param_1 = pcVar6;
  uVar2 = _DAT_001f27c0;
  param_1[2] = _UNK_001f27c8;
  param_1[1] = uVar2;
  uVar3 = s_SampleSourceAudio_outputs_a_PCM_a_001d8a3e._48_8_;
  uVar2 = s_SampleSourceAudio_outputs_a_PCM_a_001d8a3e._32_8_;
  if ((pcVar6 < "ampleSourceAudio outputs a PCM audio frame from the passed in AudioBuffer") &&
     ("SampleSourceAudio outputs a PCM audio frame from the passed in AudioBuffer" < pcVar6 + 0x4a))
  {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  uVar1 = CONCAT62(s_SampleSourceAudio_outputs_a_PCM_a_001d8a3e._58_6_,
                   s_SampleSourceAudio_outputs_a_PCM_a_001d8a3e._56_2_);
  *(undefined8 *)(pcVar6 + 0x28) = s_SampleSourceAudio_outputs_a_PCM_a_001d8a3e._40_8_;
  *(undefined8 *)(pcVar6 + 0x20) = uVar2;
  *(undefined8 *)(pcVar6 + 0x38) = uVar1;
  *(undefined8 *)(pcVar6 + 0x30) = uVar3;
  uVar5 = s_SampleSourceAudio_outputs_a_PCM_a_001d8a3e._24_8_;
  uVar4 = s_SampleSourceAudio_outputs_a_PCM_a_001d8a3e._16_8_;
  uVar1 = s_SampleSourceAudio_outputs_a_PCM_a_001d8a3e._8_8_;
  uVar3 = s_SampleSourceAudio_outputs_a_PCM_a_001d8a3e._0_8_;
  uVar2 = CONCAT26(s_SampleSourceAudio_outputs_a_PCM_a_001d8a3e._64_2_,
                   s_SampleSourceAudio_outputs_a_PCM_a_001d8a3e._58_6_);
  *(undefined8 *)(pcVar6 + 0x42) = s_SampleSourceAudio_outputs_a_PCM_a_001d8a3e._66_8_;
  *(undefined8 *)(pcVar6 + 0x3a) = uVar2;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  *(undefined8 *)pcVar6 = uVar3;
  *(undefined8 *)(pcVar6 + 0x18) = uVar5;
  *(undefined8 *)(pcVar6 + 0x10) = uVar4;
  pcVar6[0x4a] = '\0';
  return;
}


// ===== 0042843c  FUN_0042843c =====

long FUN_0042843c(long param_1)

{
  return (long)*(int *)(param_1 + 0x34);
}


// ===== 00428444  FUN_00428444 =====

void FUN_00428444(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_00d1b920;
  FUN_005edd2c(param_1 + 0xf);
  if (*(code **)(param_1[0xd] + 8) != (code *)0x0) {
    (**(code **)(param_1[0xd] + 8))(param_1[10]);
  }
  pvVar1 = (void *)param_1[7];
  if (pvVar1 != (void *)0x0) {
    param_1[8] = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_005468e0(param_1 + 1);
  return;
}


// ===== 0042849c  FUN_0042849c =====

void FUN_0042849c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_00d1b920;
  FUN_005edd2c(param_1 + 0xf);
  if (*(code **)(param_1[0xd] + 8) != (code *)0x0) {
    (**(code **)(param_1[0xd] + 8))(param_1[10]);
  }
  pvVar1 = (void *)param_1[7];
  if (pvVar1 != (void *)0x0) {
    param_1[8] = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_005468e0(param_1 + 1);
  operator_delete(param_1);
  return;
}


// ===== 004284fc  FUN_004284fc =====

undefined8 FUN_004284fc(undefined8 param_1,long param_2,undefined8 param_3,void *param_4)

{
  if (param_2 != 0) {
    memset(param_4,0,param_2 << 1);
  }
  return 1;
}


// ===== 00428524  FUN_00428524 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00428524(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  pcVar5 = (char *)operator_new(0x30);
  *param_1 = pcVar5;
  uVar1 = _DAT_001f2560;
  param_1[2] = _UNK_001f2568;
  param_1[1] = uVar1;
  uVar4 = s_DummyAudio_generates_a_silence_a_001d0118._24_8_;
  uVar3 = s_DummyAudio_generates_a_silence_a_001d0118._16_8_;
  uVar2 = s_DummyAudio_generates_a_silence_a_001d0118._8_8_;
  uVar1 = s_DummyAudio_generates_a_silence_a_001d0118._0_8_;
  if ((pcVar5 < "ummyAudio generates a silence audio") &&
     ("DummyAudio generates a silence audio" < pcVar5 + 0x24)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  pcVar5[0x20] = 'u';
  pcVar5[0x21] = 'd';
  pcVar5[0x22] = 'i';
  pcVar5[0x23] = 'o';
  *(undefined8 *)(pcVar5 + 8) = uVar2;
  *(undefined8 *)pcVar5 = uVar1;
  *(undefined8 *)(pcVar5 + 0x18) = uVar4;
  *(undefined8 *)(pcVar5 + 0x10) = uVar3;
  pcVar5[0x24] = '\0';
  return;
}


// ===== 004285b4  FUN_004285b4 =====

undefined8 FUN_004285b4(void)

{
  return 1;
}


// ===== 004285bc  FUN_004285bc =====

undefined8 FUN_004285bc(void)

{
  return 1;
}


// ===== 004285c4  FUN_004285c4 =====

void FUN_004285c4(char *param_1)

{
  undefined8 uVar1;
  
  param_1[0x17] = '\v';
  uVar1 = s_SilentAudio_001bee9e._0_8_;
  if ((param_1 < "ilentAudio") && ("SilentAudio" < param_1 + 0xb)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  param_1[7] = 'u';
  param_1[8] = 'd';
  param_1[9] = 'i';
  param_1[10] = 'o';
  *(undefined8 *)param_1 = uVar1;
  param_1[0xb] = '\0';
  return;
}


// ===== 00428638  FUN_00428638 =====

void FUN_00428638(void)

{
  return;
}


// ===== 0042863c  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 00428640  FUN_00428640 =====

void FUN_00428640(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x18);
  uVar1 = DAT_001f5b40;
  *puVar2 = &PTR_FUN_00d1b9b0;
  puVar2[1] = uVar1;
  *(undefined2 *)(puVar2 + 2) = 30000;
  return;
}


// ===== 00428678  FUN_00428678 =====

undefined8 FUN_00428678(long param_1,long param_2,int param_3,undefined2 *param_4)

{
  short sVar1;
  int iVar2;
  float fVar3;
  double dVar4;
  float __x;
  
  if (param_2 != 0) {
    __x = *(float *)(param_1 + 8);
    dVar4 = (double)(*(float *)(param_1 + 0xc) + *(float *)(param_1 + 0xc)) * DAT_001f4fe8;
    do {
      sVar1 = *(short *)(param_1 + 0x10);
      fVar3 = sinf(__x);
      iVar2 = (int)(fVar3 * (float)(int)sVar1);
      if (iVar2 == -0x8000 || iVar2 + 0x8000 < 0 != SCARRY4(iVar2,0x8000)) {
        iVar2 = -0x8000;
      }
      __x = (float)(dVar4 / (double)param_3 + (double)__x);
      if (0x7ffe < iVar2) {
        iVar2 = 0x7fff;
      }
      param_2 = param_2 + -1;
      *param_4 = (short)iVar2;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
    *(float *)(param_1 + 8) = __x;
  }
  return 1;
}


// ===== 00428730  FUN_00428730 =====

void FUN_00428730(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *local_188 [11];
  void *local_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined *local_108;
  undefined8 uStack_100;
  undefined4 auStack_f8 [34];
  long local_70;
  
  puVar6 = PTR_PTR_00d51b18;
  puVar5 = PTR_DAT_00d51b10;
  lVar4 = tpidr_el0;
  ppuVar1 = local_188 + 3;
  local_70 = *(long *)(lVar4 + 0x28);
  puVar2 = PTR_DAT_00d51b10 + 0x68;
  puVar3 = PTR_DAT_00d51b10 + 0x40;
  local_188[0] = *(undefined **)(PTR_PTR_00d51b18 + 0x10);
  local_188[1] = (undefined *)0x0;
  local_188[2] = puVar3;
  local_108 = puVar2;
  *(undefined8 *)((long)local_188 + *(long *)(local_188[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_00d51b18 + 0x18);
  lVar8 = *(long *)(local_188[0] + -0x18);
  FUN_00520e8c((long)local_188 + lVar8,ppuVar1);
  *(undefined8 *)((long)&uStack_100 + lVar8) = 0;
  lVar9 = *(long *)(puVar6 + 8);
  *(undefined4 *)((long)auStack_f8 + lVar8) = 0xffffffff;
  *(undefined8 *)((long)(local_188 + 2) + *(long *)(*(long *)(puVar6 + 0x20) + -0x18)) =
       *(undefined8 *)(puVar6 + 0x28);
  *(undefined8 *)((long)local_188 + *(long *)(lVar9 + -0x18)) = *(undefined8 *)(puVar6 + 0x30);
  local_188[0] = puVar5 + 0x18;
  local_188[2] = puVar3;
  local_108 = puVar2;
  FUN_0054a4c8(ppuVar1);
  puVar2 = PTR_DAT_00d51b20 + 0x10;
  uStack_128 = 0;
  local_130 = (void *)0x0;
  uStack_118 = 0;
  lStack_120 = 0;
  local_110 = 0x18;
  local_188[3] = puVar2;
  uVar7 = FUN_00428964(local_188 + 2,"SineAudio generates a local sine audio wave with amplitude: ",
                       0x3c);
  uVar7 = FUN_0054b710(uVar7,*(undefined2 *)(param_2 + 0x10));
  FUN_00428964(uVar7," and frequency: ",0x10);
  FUN_0054c438(*(undefined4 *)(param_2 + 0xc));
  FUN_0054d504(param_1,ppuVar1);
  local_188[0] = *(undefined **)puVar6;
  uVar7 = *(undefined8 *)(puVar6 + 0x48);
  *(undefined8 *)((long)local_188 + *(long *)(local_188[0] + -0x18)) =
       *(undefined8 *)(puVar6 + 0x40);
  local_188[2] = (undefined *)uVar7;
  local_188[3] = puVar2;
  if (lStack_120 < 0) {
    operator_delete(local_130);
  }
  FUN_0054a488(ppuVar1);
  FUN_0054ce58(local_188,puVar6 + 8);
  thunk_FUN_00520cf4(&local_108);
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004288e4  FUN_004288e4 =====

undefined8 FUN_004288e4(void)

{
  return 1;
}


// ===== 004288ec  FUN_004288ec =====

undefined8 FUN_004288ec(void)

{
  return 1;
}


// ===== 004288f4  FUN_004288f4 =====

void FUN_004288f4(char *param_1)

{
  undefined8 uVar1;
  
  param_1[0x17] = '\t';
  uVar1 = s_SineAudio_001b33bb._0_8_;
  if ((param_1 < "ineAudio") && ("SineAudio" < param_1 + 9)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  param_1[8] = 'o';
  param_1[9] = '\0';
  *(undefined8 *)param_1 = uVar1;
  return;
}


// ===== 00428960  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 00428964  FUN_00428964 =====

long * FUN_00428964(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  char local_70 [16];
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_0054b44c(local_70,param_1);
  if (local_70[0] != '\0') {
    lVar5 = (long)param_1 + *(long *)(*param_1 + -0x18);
    uVar6 = *(undefined8 *)(lVar5 + 0x28);
    lVar1 = param_2 + param_3;
    if ((*(uint *)(lVar5 + 8) & 0xb0) != 0x20) {
      lVar1 = param_2;
    }
    if (*(int *)(lVar5 + 0x90) == -1) {
      FUN_00520ce8(auStack_60,lVar5);
      plVar4 = (long *)FUN_0053cfd4(auStack_60,PTR_DAT_00d51b28);
      uVar3 = (**(code **)(*plVar4 + 0x38))(plVar4,0x20);
      FUN_0053ceec(auStack_60);
      *(uint *)(lVar5 + 0x90) = uVar3 & 0xff;
    }
    lVar5 = FUN_00428a94(uVar6,param_2,lVar1,param_2 + param_3,lVar5);
    if (lVar5 == 0) {
      lVar5 = (long)param_1 + *(long *)(*param_1 + -0x18);
      FUN_00520d98(lVar5,*(uint *)(lVar5 + 0x20) | 5);
    }
  }
  FUN_0054b498(local_70);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00428a94  FUN_00428a94 =====

long * FUN_00428a94(long *param_1,long param_2,long param_3,long param_4,long param_5,int param_6)

{
  ulong __n;
  long lVar1;
  long lVar2;
  undefined1 **ppuVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *local_80;
  ulong local_78;
  undefined8 uStack_70;
  long local_68;
  
  ppuVar3 = &local_80;
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (param_1 == (long *)0x0) goto LAB_00428bf4;
  __n = *(long *)(param_5 + 0x18) - (param_4 - param_2);
  lVar5 = param_3 - param_2;
  if (__n == 0 || *(long *)(param_5 + 0x18) < param_4 - param_2) {
    __n = 0;
  }
  if ((lVar5 < 1) || (lVar2 = (**(code **)(*param_1 + 0x60))(param_1,param_2,lVar5), lVar2 == lVar5)
     ) {
    if (0 < (long)__n) {
      if (0x7fffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (__n < 0x17) {
        uStack_70 = CONCAT17((char)__n,(undefined7)uStack_70);
      }
      else {
        uVar4 = (__n | 0xf) + 1;
        ppuVar3 = (undefined1 **)operator_new(uVar4);
        uStack_70 = uVar4 | 0x8000000000000000;
        local_80 = (undefined1 *)ppuVar3;
        local_78 = __n;
      }
      memset(ppuVar3,param_6,__n);
      *(undefined1 *)((long)ppuVar3 + __n) = 0;
      ppuVar3 = (undefined1 **)local_80;
      if (-1 < (long)uStack_70) {
        ppuVar3 = &local_80;
      }
      uVar4 = (**(code **)(*param_1 + 0x60))(param_1,ppuVar3,__n);
      if ((long)uStack_70 < 0) {
        operator_delete(local_80);
      }
      if (uVar4 != __n) goto LAB_00428bf0;
    }
    param_4 = param_4 - param_3;
    if ((param_4 < 1) ||
       (lVar5 = (**(code **)(*param_1 + 0x60))(param_1,param_3,param_4), lVar5 == param_4)) {
      *(undefined8 *)(param_5 + 0x18) = 0;
      goto LAB_00428bf4;
    }
  }
LAB_00428bf0:
  param_1 = (long *)0x0;
LAB_00428bf4:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}


// ===== 00428c30  FUN_00428c30 =====

void FUN_00428c30(long *param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (param_2 == 0) {
LAB_00428cb8:
                    /* WARNING: Could not recover jumptable at 0x00428cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0xe0))(param_1);
    return;
  }
  uVar1 = (**(code **)(lVar2 + 0x110))(param_1);
  if ((uVar1 & 1) == 0) {
    (**(code **)(*param_1 + 0x108))(param_1);
  }
  uVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
  if ((uVar1 & 1) == 0) {
    uVar1 = (**(code **)(*param_1 + 0xc0))(param_1);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*param_1 + 0xb8))(param_1);
    }
    uVar1 = (**(code **)(*param_1 + 0xc0))(param_1);
    if ((uVar1 & 1) != 0) {
      lVar2 = *param_1;
      goto LAB_00428cb8;
    }
  }
  return;
}


// ===== 00428cd8  FUN_00428cd8 =====

void FUN_00428cd8(long *param_1,int param_2)

{
  ulong uVar1;
  code *pcVar2;
  
  if (param_2 == 2) {
    pcVar2 = *(code **)(*param_1 + 0xf0);
  }
  else {
    if (param_2 != 1) goto LAB_00428d18;
    pcVar2 = *(code **)(*param_1 + 0xc0);
  }
  uVar1 = (*pcVar2)(param_1);
  if ((uVar1 & 1) == 0) {
    return;
  }
LAB_00428d18:
                    /* WARNING: Could not recover jumptable at 0x00428d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}


// ===== 00428d3c  FUN_00428d3c =====

void FUN_00428d3c(long *param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (param_2 == 0) {
LAB_00428dc4:
                    /* WARNING: Could not recover jumptable at 0x00428dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 200))(param_1);
    return;
  }
  uVar1 = (**(code **)(lVar2 + 0x100))(param_1);
  if ((uVar1 & 1) == 0) {
    (**(code **)(*param_1 + 0xf8))(param_1);
  }
  uVar1 = (**(code **)(*param_1 + 0xd8))(param_1);
  if ((uVar1 & 1) == 0) {
    uVar1 = (**(code **)(*param_1 + 0xa8))(param_1);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*param_1 + 0xa0))(param_1);
    }
    uVar1 = (**(code **)(*param_1 + 0xa8))(param_1);
    if ((uVar1 & 1) != 0) {
      lVar2 = *param_1;
      goto LAB_00428dc4;
    }
  }
  return;
}


// ===== 00428de4  FUN_00428de4 =====

void FUN_00428de4(long *param_1,int param_2)

{
  ulong uVar1;
  code *pcVar2;
  
  if (param_2 == 2) {
    pcVar2 = *(code **)(*param_1 + 0xd8);
  }
  else {
    if (param_2 != 1) goto LAB_00428e24;
    pcVar2 = *(code **)(*param_1 + 0xa8);
  }
  uVar1 = (*pcVar2)(param_1);
  if ((uVar1 & 1) == 0) {
    return;
  }
LAB_00428e24:
                    /* WARNING: Could not recover jumptable at 0x00428e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xd0))(param_1);
  return;
}


// ===== 00428e48  FUN_00428e48 =====

undefined8 * FUN_00428e48(undefined8 *param_1,byte param_2)

{
  ulong uVar1;
  undefined8 *__src;
  char cVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *__dest;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar5 = param_1[1];
  puVar4 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar5 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar4 = param_1;
  }
  if (puVar4 == (undefined8 *)0x0 && uVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131,
               "__len == 0 || __s != nullptr",
               "string_view::string_view(_CharT *, size_t): received nullptr");
  }
  lVar3 = FUN_005ef334(puVar4,uVar5);
  if (lVar3 == 0) {
    uVar5 = FUN_004249b0();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e90,
                   "../../discord_native_lib/src/media/audio_device/wav_file_audio.cpp",0x113,
                   "failed to read wav file: ",param_1);
      puVar4 = (undefined8 *)0x0;
    }
    else {
      puVar4 = (undefined8 *)0x0;
    }
  }
  else {
    puVar4 = (undefined8 *)operator_new(0x50);
    cVar2 = *(char *)((long)param_1 + 0x17);
    __dest = puVar4 + 1;
    *puVar4 = &PTR_FUN_00d1b9f8;
    if (cVar2 < '\0') {
      __src = (undefined8 *)*param_1;
      uVar5 = param_1[1];
      if (uVar5 < 0x17) {
        *(char *)((long)puVar4 + 0x1f) = (char)uVar5;
      }
      else {
        if (0x7fffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar1 = (uVar5 | 0xf) + 1;
        __dest = (undefined8 *)operator_new(uVar1);
        puVar4[1] = __dest;
        puVar4[2] = uVar5;
        puVar4[3] = uVar1 | 0x8000000000000000;
      }
      if ((__dest <= __src) && (__src < (undefined8 *)((long)__dest + uVar5 + 1))) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      memmove(__dest,__src,uVar5 + 1);
    }
    else {
      uVar7 = *param_1;
      uVar6 = param_1[2];
      puVar4[2] = param_1[1];
      *__dest = uVar7;
      puVar4[3] = uVar6;
    }
    puVar4[4] = lVar3;
    *(undefined4 *)(puVar4 + 5) = 0;
    *(byte *)((long)puVar4 + 0x2c) = param_2 & 1;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[9] = 0;
    puVar4[8] = 0;
  }
  return puVar4;
}


// ===== 00428fe8  FUN_00428fe8 =====

void FUN_00428fe8(long param_1,ulong param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined1 auStack_f0 [8];
  char *local_e8;
  char **ppcStack_e0;
  ulong local_d8;
  char **ppcStack_d0;
  char *local_c8;
  ulong *puStack_c0;
  char *local_b8;
  char **ppcStack_b0;
  ulong local_a8;
  char **ppcStack_a0;
  undefined *local_98;
  ulong *puStack_90;
  char *local_88;
  long local_80;
  undefined1 *local_78;
  long local_70;
  
  lVar11 = tpidr_el0;
  local_70 = *(long *)(lVar11 + 0x28);
  lVar6 = *(long *)(param_1 + 0x20);
  uVar1 = *(uint *)(lVar6 + 8);
  lVar7 = *(long *)(lVar6 + 0x10);
  lVar9 = (long)(int)uVar1;
  uVar8 = param_2;
  if (uVar1 != param_3) {
    uVar8 = (ulong)((float)(lVar9 * param_2) / (float)(int)param_3);
  }
  uVar10 = *(ulong *)(lVar6 + 0x20);
  if ((*(long *)(param_1 + 0x30) == 0) || (*(ulong *)(*(long *)(param_1 + 0x30) + 0x20) != uVar8)) {
    pvVar3 = operator_new(0x138);
    FUN_0065b3e8(pvVar3,lVar9,lVar7,lVar9,lVar7,(long)(int)param_3,lVar7);
    plVar4 = *(long **)(param_1 + 0x30);
    *(void **)(param_1 + 0x30) = pvVar3;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  if (uVar10 < uVar8) {
    uVar8 = FUN_004022fc();
    if ((uVar8 & 1) == 0) {
      local_78 = auStack_f0;
      local_88 = "../../discord_native_lib/src/media/audio_device/wav_file_audio.cpp";
      local_80 = 0x262;
      ppcStack_e0 = &local_88;
      ppcStack_b0 = &local_c8;
      local_e8 = "Requested to read ";
      ppcStack_d0 = &local_e8;
      ppcStack_a0 = &local_b8;
      local_b8 = " at sample frequency of ";
      puStack_c0 = &local_d8;
      local_c8 = " samples per channel";
      local_a8 = (ulong)param_3;
      puStack_90 = &local_a8;
      local_98 = &DAT_001e9e37;
      local_d8 = param_2;
      FUN_00623bb0(&DAT_001f5db0,
                   "../../discord_native_lib/src/media/audio_device/wav_file_audio.cpp",0x262,
                   "Requested to read ",param_2," samples per channel"," at sample frequency of ",
                   param_3,&DAT_001e9e37," but the wav file only have ",uVar10," samples",
                   &DAT_001e4282,uVar1,&DAT_001e9e37,lVar11," but the wav file only have ",&local_98
                  );
    }
LAB_004291cc:
    uVar5 = 0;
  }
  else {
    uVar8 = uVar8 * lVar7;
    if (uVar10 < uVar8 + (long)*(int *)(param_1 + 0x28)) {
      if (*(char *)(param_1 + 0x2c) == '\0') goto LAB_004291cc;
      FUN_005ef430(*(undefined8 *)(param_1 + 0x20));
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    plVar4 = (long *)(param_1 + 0x38);
    lVar6 = *plVar4;
    uVar10 = *(long *)(param_1 + 0x40) - lVar6 >> 1;
    if (uVar8 < uVar10 || uVar8 - uVar10 == 0) {
      if (uVar8 < uVar10) {
        *(ulong *)(param_1 + 0x40) = lVar6 + uVar8 * 2;
      }
    }
    else {
      FUN_0041fd24(plVar4,uVar8 - uVar10);
      lVar6 = *plVar4;
    }
    iVar2 = FUN_005ef468(*(undefined8 *)(param_1 + 0x20),uVar8,lVar6);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + iVar2;
    local_78 = (undefined1 *)(long)((int)uVar1 / 100);
    local_80 = lVar7;
    local_88._0_4_ = uVar1;
    FUN_0065c37c(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),&local_88);
    local_88 = (char *)CONCAT44(local_88._4_4_,param_3);
    local_78 = (undefined1 *)(long)((int)param_3 / 100);
    local_80 = lVar7;
    FUN_0065ccb8(*(undefined8 *)(param_1 + 0x30),&local_88,param_4);
    uVar5 = 1;
  }
  if (*(long *)(lVar11 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 00429290  FUN_00429290 =====

void FUN_00429290(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined *local_188 [11];
  void *local_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined *local_108;
  undefined8 uStack_100;
  undefined4 auStack_f8 [34];
  long local_70;
  
  puVar8 = PTR_PTR_00d51b18;
  puVar7 = PTR_DAT_00d51b10;
  lVar5 = tpidr_el0;
  ppuVar1 = local_188 + 3;
  local_70 = *(long *)(lVar5 + 0x28);
  puVar2 = PTR_DAT_00d51b10 + 0x68;
  puVar3 = PTR_DAT_00d51b10 + 0x40;
  local_188[0] = *(undefined **)(PTR_PTR_00d51b18 + 0x10);
  local_188[1] = (undefined *)0x0;
  local_188[2] = puVar3;
  local_108 = puVar2;
  *(undefined8 *)((long)local_188 + *(long *)(local_188[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_00d51b18 + 0x18);
  lVar10 = *(long *)(local_188[0] + -0x18);
  FUN_00520e8c((long)local_188 + lVar10,ppuVar1);
  *(undefined8 *)((long)&uStack_100 + lVar10) = 0;
  lVar11 = *(long *)(puVar8 + 8);
  *(undefined4 *)((long)auStack_f8 + lVar10) = 0xffffffff;
  *(undefined8 *)((long)(local_188 + 2) + *(long *)(*(long *)(puVar8 + 0x20) + -0x18)) =
       *(undefined8 *)(puVar8 + 0x28);
  *(undefined8 *)((long)local_188 + *(long *)(lVar11 + -0x18)) = *(undefined8 *)(puVar8 + 0x30);
  local_188[0] = puVar7 + 0x18;
  local_188[2] = puVar3;
  local_108 = puVar2;
  FUN_0054a4c8(ppuVar1);
  puVar2 = PTR_DAT_00d51b20 + 0x10;
  uStack_128 = 0;
  local_130 = (void *)0x0;
  uStack_118 = 0;
  lStack_120 = 0;
  local_110 = 0x18;
  local_188[3] = puVar2;
  uVar9 = FUN_00428964(local_188 + 2,"WavFileAudio outputs a PCM audio frame from file: ",0x32);
  uVar4 = *(ulong *)(param_2 + 0x10);
  puVar6 = *(undefined8 **)(param_2 + 8);
  if (-1 < (char)*(byte *)(param_2 + 0x1f)) {
    uVar4 = (ulong)*(byte *)(param_2 + 0x1f);
    puVar6 = (undefined8 *)(param_2 + 8);
  }
  FUN_00428964(uVar9,puVar6,uVar4);
  FUN_0054d504(param_1,ppuVar1);
  local_188[0] = *(undefined **)puVar8;
  uVar9 = *(undefined8 *)(puVar8 + 0x48);
  *(undefined8 *)((long)local_188 + *(long *)(local_188[0] + -0x18)) =
       *(undefined8 *)(puVar8 + 0x40);
  local_188[2] = (undefined *)uVar9;
  local_188[3] = puVar2;
  if (lStack_120 < 0) {
    operator_delete(local_130);
  }
  FUN_0054a488(ppuVar1);
  FUN_0054ce58(local_188,puVar8 + 8);
  thunk_FUN_00520cf4(&local_108);
  if (*(long *)(lVar5 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00429444  FUN_00429444 =====

undefined8 FUN_00429444(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
}


// ===== 00429450  FUN_00429450 =====

undefined8 FUN_00429450(void)

{
  return 1;
}


// ===== 00429458  FUN_00429458 =====

void FUN_00429458(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  char cVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *__src;
  ulong uVar8;
  undefined8 uVar9;
  
  puVar5 = (undefined8 *)(param_2 + 8);
  __src = (undefined8 *)*puVar5;
  bVar3 = *(byte *)(param_2 + 0x1f);
  uVar8 = *(ulong *)(param_2 + 0x10);
  uVar1 = uVar8;
  puVar4 = __src;
  if (-1 < (char)bVar3) {
    uVar1 = (ulong)bVar3;
    puVar4 = puVar5;
  }
  do {
    uVar7 = uVar1;
    if (uVar7 == 0) goto LAB_004294d4;
    cVar2 = *(char *)((long)puVar4 + (uVar7 - 1));
  } while ((cVar2 != '\\') && (uVar1 = uVar7 - 1, cVar2 != '/'));
  if (uVar7 - 1 != 0xffffffffffffffff) {
    FUN_00547e10(param_1,puVar5,uVar7,0xffffffffffffffff,puVar5);
    return;
  }
LAB_004294d4:
  if (-1 < (char)bVar3) {
    uVar9 = *puVar5;
    uVar6 = *(undefined8 *)(param_2 + 0x18);
    param_1[1] = *(undefined8 *)(param_2 + 0x10);
    *param_1 = uVar9;
    param_1[2] = uVar6;
    return;
  }
  if (uVar8 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar8;
    puVar4 = param_1;
  }
  else {
    if (0x7fffffffffffffef < uVar8) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar1 = (uVar8 | 0xf) + 1;
    puVar4 = (undefined8 *)operator_new(uVar1);
    *param_1 = puVar4;
    param_1[1] = uVar8;
    param_1[2] = uVar1 | 0x8000000000000000;
  }
  if ((puVar4 <= __src) && (__src < (undefined8 *)((long)puVar4 + uVar8 + 1))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  memmove(puVar4,__src,uVar8 + 1);
  return;
}


// ===== 00429590  FUN_00429590 =====

void FUN_00429590(undefined8 *param_1)

{
  void *pvVar1;
  long *plVar2;
  
  pvVar1 = (void *)param_1[7];
  *param_1 = &PTR_FUN_00d1b9f8;
  if (pvVar1 != (void *)0x0) {
    param_1[8] = pvVar1;
    operator_delete(pvVar1);
  }
  plVar2 = (long *)param_1[6];
  param_1[6] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  pvVar1 = (void *)param_1[4];
  param_1[4] = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_005ef6e0(pvVar1);
    FUN_0065a730((long)pvVar1 + 0x30);
    operator_delete(pvVar1);
  }
  if (-1 < *(char *)((long)param_1 + 0x1f)) {
    return;
  }
  operator_delete((void *)param_1[1]);
  return;
}


// ===== 0042961c  FUN_0042961c =====

void FUN_0042961c(undefined8 *param_1)

{
  void *pvVar1;
  long *plVar2;
  
  pvVar1 = (void *)param_1[7];
  *param_1 = &PTR_FUN_00d1b9f8;
  if (pvVar1 != (void *)0x0) {
    param_1[8] = pvVar1;
    operator_delete(pvVar1);
  }
  plVar2 = (long *)param_1[6];
  param_1[6] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  pvVar1 = (void *)param_1[4];
  param_1[4] = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_005ef6e0(pvVar1);
    FUN_0065a730((long)pvVar1 + 0x30);
    operator_delete(pvVar1);
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete((void *)param_1[1]);
  }
  operator_delete(param_1);
  return;
}


// ===== 004296a4  FUN_004296a4 =====

void FUN_004296a4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  undefined8 uVar1;
  
  param_1[2] = param_3;
  param_1[3] = param_4;
  *param_1 = &PTR_FUN_00d1ba40;
  param_1[1] = param_2;
  uVar1 = *param_5;
  *param_5 = 0;
  param_1[4] = uVar1;
  param_1[5] = 0;
  return;
}


// ===== 004296c4  FUN_004296c4 =====

void FUN_004296c4(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = 0;
  iVar2 = (**(code **)(**(long **)(param_1 + 0x20) + 0x20))(*(long **)(param_1 + 0x20),&local_2c);
  if (iVar2 < 0) {
    uVar3 = FUN_00417e08();
    if ((uVar3 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e94,
                   "../../discord_native_lib/src/media/audio_device/webrtc_adm_helper.cpp",0x1c9,
                   "WebrtcAdmHelper::GetActiveAudioLayer ",iVar2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_2c);
}


// ===== 00429754  FUN_00429754 =====

void FUN_00429754(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  
  if (*(long *)(param_2 + 8) == 0) {
    puVar3 = *(undefined8 **)(param_2 + 0x20);
    *param_1 = (long)puVar3;
    if (puVar3 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004297e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)();
      return;
    }
  }
  else {
    puVar3 = (undefined8 *)operator_new(0x18);
    FUN_0042234c(puVar3,param_2);
    piVar4 = (int *)(puVar3 + 2);
    *piVar4 = 0;
    *puVar3 = &PTR_FUN_00d1bc78;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *param_1 = (long)puVar3;
  }
  return;
}


// ===== 004297e4  FUN_004297e4 =====

void FUN_004297e4(long param_1,long *param_2)

{
  long lVar1;
  short sVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long *local_78 [2];
  code *local_68;
  undefined **local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  puVar8 = (undefined8 *)param_2[3];
  if (*(char *)(puVar8 + 2) == '\0') {
    lVar6 = *param_2;
    lVar10 = param_2[2];
    lVar9 = param_2[1];
    puVar7 = puVar8;
    if (puVar8[1] != 0) {
      param_2[2] = (long)FUN_0041c32c;
      param_2[3] = (long)&DAT_001f1910;
      if (puVar8[1] != 0) {
        puVar7 = &DAT_001f1910;
      }
    }
    local_68 = FUN_0042b334;
    local_60 = &PTR_FUN_00d1bb28;
    plVar3 = (long *)operator_new(0x28);
    lVar4 = *(long *)(param_1 + 8);
    *plVar3 = param_1;
    plVar3[3] = lVar10;
    plVar3[2] = lVar9;
    plVar3[1] = lVar6;
    plVar3[4] = (long)puVar8;
    if (puVar8[1] != 0) {
      puVar8 = &DAT_001f1910;
    }
    local_78[0] = plVar3;
    if (lVar4 == 0) {
      sVar2 = (**(code **)(**(long **)(param_1 + 0x20) + 0x50))();
      (*(code *)plVar3[3])(plVar3 + 1,0 < sVar2);
      pcVar5 = (code *)PTR_FUN_00d1bb30;
    }
    else {
      FUN_0040a080(lVar4,local_78,"Perform",7);
      pcVar5 = (code *)local_60[1];
    }
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(local_78[0]);
    }
    if ((code *)puVar8[1] != (code *)0x0) {
      (*(code *)puVar8[1])(lVar6);
    }
    if ((code *)puVar7[1] != (code *)0x0) {
      (*(code *)puVar7[1])(lVar6);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00429958  FUN_00429958 =====

void FUN_00429958(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *local_a8 [2];
  code *local_98;
  undefined **local_90;
  long *local_88 [2];
  code *local_78;
  undefined **local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  puVar11 = (undefined8 *)param_2[3];
  if (*(char *)(puVar11 + 2) == '\0') {
    lVar2 = *param_2;
    lVar4 = param_2[1];
    lVar9 = param_2[2];
    puVar10 = puVar11;
    if (puVar11[1] != 0) {
      param_2[2] = (long)FUN_0042b410;
      param_2[3] = (long)&DAT_001f1910;
      if (puVar11[1] != 0) {
        puVar10 = &DAT_001f1910;
      }
    }
    local_98 = FUN_0042b41c;
    local_90 = &PTR_FUN_00d1bb68;
    local_a8[0] = (long *)operator_new(0x28);
    lVar8 = *(long *)(param_1 + 8);
    *local_a8[0] = param_1;
    local_a8[0][1] = lVar2;
    local_a8[0][2] = lVar4;
    local_a8[0][3] = lVar9;
    local_a8[0][4] = (long)puVar11;
    puVar1 = puVar11;
    if (puVar11[1] != 0) {
      puVar1 = &DAT_001f1910;
    }
    if (lVar8 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      lVar8 = lVar2;
      if ((code *)*puVar11 != (code *)0x0) {
        lVar8 = (*(code *)*puVar11)(lVar2);
      }
      local_78 = FUN_0042b510;
      local_70 = &PTR_FUN_00d1bb48;
      local_88[0] = (long *)operator_new(0x20);
      *local_88[0] = lVar8;
      local_88[0][1] = lVar4;
      local_88[0][2] = lVar9;
      local_88[0][3] = (long)puVar11;
      if (puVar11[1] != 0) {
        puVar11 = &DAT_001f1910;
      }
      FUN_004231f0(uVar5,uVar3,local_88);
      if ((code *)local_70[1] != (code *)0x0) {
        (*(code *)local_70[1])(local_88[0]);
      }
      pcVar7 = (code *)PTR_FUN_00d1bb70;
      if ((code *)puVar11[1] != (code *)0x0) {
        (*(code *)puVar11[1])(lVar8);
        pcVar7 = (code *)PTR_FUN_00d1bb70;
      }
    }
    else {
      FUN_0040a080(lVar8,local_a8,"Perform",7);
      pcVar7 = (code *)local_90[1];
    }
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(local_a8[0]);
    }
    if ((code *)puVar1[1] != (code *)0x0) {
      (*(code *)puVar1[1])(lVar2);
    }
    if ((code *)puVar10[1] != (code *)0x0) {
      (*(code *)puVar10[1])(lVar2);
      if ((code *)puVar10[1] != (code *)0x0) {
        (*(code *)puVar10[1])(lVar2);
      }
    }
  }
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00429b38  FUN_00429b38 =====

void FUN_00429b38(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  code *pcVar4;
  undefined1 auStack_160 [248];
  undefined8 *local_68 [2];
  code *local_58;
  undefined **local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  param_1[0x1e] = 0;
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
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  local_58 = FUN_0042b78c;
  local_50 = &PTR_FUN_00d1bb88;
  puVar2 = (undefined8 *)operator_new(0x18);
  lVar3 = *(long *)(param_2 + 8);
  *puVar2 = param_1;
  puVar2[1] = param_2;
  puVar2[2] = param_3;
  local_68[0] = puVar2;
  if (lVar3 == 0) {
    FUN_00423198(auStack_160,*(undefined8 *)(param_2 + 0x20),param_3);
    FUN_0042b7fc(*puVar2,auStack_160);
    FUN_00411fac(auStack_160);
    pcVar4 = (code *)PTR_operator_delete_00d1bb90;
  }
  else {
    FUN_0042aeb0(lVar3,local_68,"PerformBlocking",0xf);
    pcVar4 = (code *)local_50[1];
  }
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(local_68[0]);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00429c50  FUN_00429c50 =====

void FUN_00429c50(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *local_a8 [2];
  code *local_98;
  undefined **local_90;
  long *local_88 [2];
  code *local_78;
  undefined **local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  puVar11 = (undefined8 *)param_2[3];
  if (*(char *)(puVar11 + 2) == '\0') {
    lVar2 = *param_2;
    lVar4 = param_2[1];
    lVar9 = param_2[2];
    puVar10 = puVar11;
    if (puVar11[1] != 0) {
      param_2[2] = (long)FUN_0042b410;
      param_2[3] = (long)&DAT_001f1910;
      if (puVar11[1] != 0) {
        puVar10 = &DAT_001f1910;
      }
    }
    local_98 = FUN_0042bbd4;
    local_90 = &PTR_FUN_00d1bbc8;
    local_a8[0] = (long *)operator_new(0x28);
    lVar8 = *(long *)(param_1 + 8);
    *local_a8[0] = param_1;
    local_a8[0][1] = lVar2;
    local_a8[0][2] = lVar4;
    local_a8[0][3] = lVar9;
    local_a8[0][4] = (long)puVar11;
    puVar1 = puVar11;
    if (puVar11[1] != 0) {
      puVar1 = &DAT_001f1910;
    }
    if (lVar8 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      lVar8 = lVar2;
      if ((code *)*puVar11 != (code *)0x0) {
        lVar8 = (*(code *)*puVar11)(lVar2);
      }
      local_78 = FUN_0042bcc8;
      local_70 = &PTR_FUN_00d1bba8;
      local_88[0] = (long *)operator_new(0x20);
      *local_88[0] = lVar8;
      local_88[0][1] = lVar4;
      local_88[0][2] = lVar9;
      local_88[0][3] = (long)puVar11;
      if (puVar11[1] != 0) {
        puVar11 = &DAT_001f1910;
      }
      FUN_00423734(uVar5,uVar3,local_88);
      if ((code *)local_70[1] != (code *)0x0) {
        (*(code *)local_70[1])(local_88[0]);
      }
      pcVar7 = (code *)PTR_FUN_00d1bbd0;
      if ((code *)puVar11[1] != (code *)0x0) {
        (*(code *)puVar11[1])(lVar8);
        pcVar7 = (code *)PTR_FUN_00d1bbd0;
      }
    }
    else {
      FUN_0040a080(lVar8,local_a8,"Perform",7);
      pcVar7 = (code *)local_90[1];
    }
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(local_a8[0]);
    }
    if ((code *)puVar1[1] != (code *)0x0) {
      (*(code *)puVar1[1])(lVar2);
    }
    if ((code *)puVar10[1] != (code *)0x0) {
      (*(code *)puVar10[1])(lVar2);
      if ((code *)puVar10[1] != (code *)0x0) {
        (*(code *)puVar10[1])(lVar2);
      }
    }
  }
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00429e30  FUN_00429e30 =====

void FUN_00429e30(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  code *pcVar4;
  undefined1 auStack_160 [248];
  undefined8 *local_68 [2];
  code *local_58;
  undefined **local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  param_1[0x1e] = 0;
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
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  local_58 = FUN_0042bf44;
  local_50 = &PTR_FUN_00d1bbe8;
  puVar2 = (undefined8 *)operator_new(0x18);
  lVar3 = *(long *)(param_2 + 8);
  *puVar2 = param_1;
  puVar2[1] = param_2;
  puVar2[2] = param_3;
  local_68[0] = puVar2;
  if (lVar3 == 0) {
    FUN_004231c4(auStack_160,*(undefined8 *)(param_2 + 0x20),param_3);
    FUN_0042b7fc(*puVar2,auStack_160);
    FUN_00411fac(auStack_160);
    pcVar4 = (code *)PTR_operator_delete_00d1bbf0;
  }
  else {
    FUN_0042aeb0(lVar3,local_68,"PerformBlocking",0xf);
    pcVar4 = (code *)local_50[1];
  }
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(local_68[0]);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00429f48  FUN_00429f48 =====

void FUN_00429f48(long param_1,long *param_2)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined7 local_68;
  undefined1 uStack_61;
  long *local_58 [2];
  code *local_48;
  undefined **local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  lVar4 = *param_2;
  lVar1 = param_2[1];
  *param_2 = 0;
  uVar6 = *(undefined8 *)((long)param_2 + 0xf);
  uVar2 = *(undefined1 *)((long)param_2 + 0x17);
  param_2[1] = 0;
  param_2[2] = 0;
  local_68 = (undefined7)lVar1;
  uStack_61 = (undefined1)uVar6;
  local_48 = FUN_0042bfec;
  local_40 = &PTR_FUN_00d1bc08;
  local_58[0] = (long *)operator_new(0x20);
  *local_58[0] = param_1;
  local_58[0][1] = lVar4;
  lVar4 = *(long *)(param_1 + 8);
  local_58[0][2] = CONCAT17(uStack_61,local_68);
  *(undefined8 *)((long)local_58[0] + 0x17) = uVar6;
  *(undefined1 *)((long)local_58[0] + 0x1f) = uVar2;
  if (lVar4 == 0) {
    FUN_0042bfec(local_58);
    pcVar5 = (code *)PTR_FUN_00d1bc10;
  }
  else {
    FUN_0040a080(lVar4,local_58,"Perform",7);
    pcVar5 = (code *)local_40[1];
  }
  if (pcVar5 != (code *)0x0) {
    (*pcVar5)(local_58[0]);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042a038  FUN_0042a038 =====

void FUN_0042a038(long param_1,long *param_2)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined7 local_68;
  undefined1 uStack_61;
  long *local_58 [2];
  code *local_48;
  undefined **local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  lVar4 = *param_2;
  lVar1 = param_2[1];
  *param_2 = 0;
  uVar6 = *(undefined8 *)((long)param_2 + 0xf);
  uVar2 = *(undefined1 *)((long)param_2 + 0x17);
  param_2[1] = 0;
  param_2[2] = 0;
  local_68 = (undefined7)lVar1;
  uStack_61 = (undefined1)uVar6;
  local_48 = FUN_0042c224;
  local_40 = &PTR_FUN_00d1bc28;
  local_58[0] = (long *)operator_new(0x20);
  *local_58[0] = param_1;
  local_58[0][1] = lVar4;
  lVar4 = *(long *)(param_1 + 8);
  local_58[0][2] = CONCAT17(uStack_61,local_68);
  *(undefined8 *)((long)local_58[0] + 0x17) = uVar6;
  *(undefined1 *)((long)local_58[0] + 0x1f) = uVar2;
  if (lVar4 == 0) {
    FUN_0042c224(local_58);
    pcVar5 = (code *)PTR_FUN_00d1bc30;
  }
  else {
    FUN_0040a080(lVar4,local_58,"Perform",7);
    pcVar5 = (code *)local_40[1];
  }
  if (pcVar5 != (code *)0x0) {
    (*pcVar5)(local_58[0]);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042a128  FUN_0042a128 =====

void FUN_0042a128(long param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long local_58;
  ulong uStack_50;
  code *local_48;
  undefined *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uStack_50 = param_2 & 1;
  local_48 = FUN_0042c45c;
  local_40 = &DAT_001f5dc0;
  local_58 = param_1;
  if (*(long *)(param_1 + 8) == 0) {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x20) + 0x1d0))();
    pcVar2 = DAT_001f5dc8;
    if ((uVar3 & 1) != 0) {
      (**(code **)(**(long **)(param_1 + 0x20) + 0x1e8))
                (*(long **)(param_1 + 0x20),(uint)param_2 & 1);
      pcVar2 = DAT_001f5dc8;
    }
  }
  else {
    FUN_0040a080(*(long *)(param_1 + 8),&local_58,"Perform",7);
    pcVar2 = *(code **)(local_40 + 8);
  }
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(local_58);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0042a200  FUN_0042a200 =====

void FUN_0042a200(long *param_1)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 local_4c [4];
  long *local_48 [2];
  code *local_38;
  undefined *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(*param_1 + 0x48))();
  if ((uVar2 & 1) == 0) {
    local_38 = FUN_0042c4ac;
    local_30 = &DAT_001f5de0;
    local_48[0] = param_1;
    if (param_1[1] == 0) {
      local_4c[0] = 0;
      (**(code **)(*(long *)param_1[4] + 0x198))((long *)param_1[4],local_4c);
      (**(code **)(*(long *)param_1[4] + 0x1a0))((long *)param_1[4],local_4c[0]);
      pcVar3 = DAT_001f5de8;
    }
    else {
      FUN_0040a080(param_1[1],local_48,"Perform",7);
      pcVar3 = *(code **)(local_30 + 8);
    }
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(local_48[0]);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042a2dc  FUN_0042a2dc =====

void FUN_0042a2dc(long *param_1)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long *local_48 [2];
  code *local_38;
  undefined *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(*param_1 + 0x48))();
  if ((uVar2 & 1) == 0) {
    local_38 = FUN_0042c51c;
    local_30 = &DAT_001f5e00;
    local_48[0] = param_1;
    if (param_1[1] == 0) {
      (**(code **)(*(long *)param_1[4] + 0x1b8))((long *)param_1[4],1);
      pcVar3 = DAT_001f5e08;
    }
    else {
      FUN_0040a080(param_1[1],local_48,"Perform",7);
      pcVar3 = *(code **)(local_30 + 8);
    }
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(local_48[0]);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042a3a0  FUN_0042a3a0 =====

void FUN_0042a3a0(long *param_1)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 local_4c [4];
  long *local_48 [2];
  code *local_38;
  undefined *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(*param_1 + 0x48))();
  if ((uVar2 & 1) == 0) {
    local_38 = FUN_0042c534;
    local_30 = &DAT_001f5e20;
    local_48[0] = param_1;
    if (param_1[1] == 0) {
      local_4c[0] = 0;
      (**(code **)(*(long *)param_1[4] + 0x1b0))((long *)param_1[4],local_4c);
      (**(code **)(*(long *)param_1[4] + 0x1b8))((long *)param_1[4],local_4c[0]);
      pcVar3 = DAT_001f5e28;
    }
    else {
      FUN_0040a080(param_1[1],local_48,"Perform",7);
      pcVar3 = *(code **)(local_30 + 8);
    }
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(local_48[0]);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042a47c  FUN_0042a47c =====

void FUN_0042a47c(float param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  float fVar4;
  undefined4 local_5c;
  long *local_58;
  ulong uStack_50;
  code *local_48;
  undefined *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uStack_50 = (ulong)(uint)param_1;
  local_48 = FUN_0042c5a4;
  local_40 = &DAT_001f5e40;
  local_58 = param_2;
  if (param_2[1] == 0) {
    local_5c = 0xff;
    uVar2 = (**(code **)(*param_2 + 0x48))(param_2);
    if ((uVar2 & 1) == 0) {
      (**(code **)(*(long *)param_2[4] + 0x158))((long *)param_2[4],&local_5c);
      fVar4 = (float)NEON_ucvtf(local_5c);
    }
    else {
      fVar4 = 255.0;
    }
    (**(code **)(*(long *)param_2[4] + 0x148))((long *)param_2[4],(int)(fVar4 * param_1));
    pcVar3 = DAT_001f5e48;
  }
  else {
    FUN_0040a080(param_2[1],&local_58,"Perform",7);
    pcVar3 = *(code **)(local_40 + 8);
  }
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(local_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042a588  FUN_0042a588 =====

undefined8 FUN_0042a588(void)

{
  return 0;
}


// ===== 0042a590  FUN_0042a590 =====

void FUN_0042a590(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  char *local_70;
  char *local_68;
  char *local_60;
  undefined2 local_54 [2];
  undefined1 auStack_50 [40];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_54[0] = 0;
  iVar2 = (**(code **)(**(long **)(param_1 + 0x20) + 0x1c8))(*(long **)(param_1 + 0x20),local_54);
  if (iVar2 == 0) {
    FUN_004df1c8(auStack_50,local_54[0]);
    local_60 = "audioDevice";
    uVar3 = FUN_004e148c(param_2,&local_60);
    local_68 = "output";
    uVar3 = FUN_004e148c(uVar3,&local_68);
    local_70 = "delayMs";
    uVar3 = FUN_004e148c(uVar3,&local_70);
    FUN_004dfa04(uVar3,auStack_50);
    FUN_004df880(auStack_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042a64c  FUN_0042a64c =====

void FUN_0042a64c(void)

{
  return;
}


// ===== 0042a650  FUN_0042a650 =====

void FUN_0042a650(void)

{
  return;
}


// ===== 0042a654  FUN_0042a654 =====

void FUN_0042a654(long param_1)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  long local_48 [2];
  code *local_38;
  undefined *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_0042c654;
  local_30 = &DAT_001f5e60;
  local_48[0] = param_1;
  if (*(long *)(param_1 + 8) == 0) {
    iVar3 = (**(code **)(**(long **)(param_1 + 0x20) + 0x30))();
    pcVar2 = DAT_001f5e68;
    if ((iVar3 < 0) && (uVar4 = FUN_00417e08(), pcVar2 = DAT_001f5e68, (uVar4 & 1) == 0)) {
      FUN_00623bb0(&DAT_001f4e94,
                   "../../discord_native_lib/src/media/audio_device/webrtc_adm_helper.cpp",0x879,
                   "WebrtcAdmHelper::Init ",iVar3);
      pcVar2 = DAT_001f5e68;
    }
  }
  else {
    FUN_0040a080(*(long *)(param_1 + 8),local_48,"Perform",7);
    pcVar2 = *(code **)(local_30 + 8);
  }
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(local_48[0]);
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0042a738  FUN_0042a738 =====

void FUN_0042a738(long param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  long local_48;
  undefined8 uStack_40;
  code *local_38;
  undefined *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_0042c6bc;
  local_30 = &DAT_001f5e80;
  local_48 = param_1;
  uStack_40 = param_2;
  if (*(long *)(param_1 + 8) == 0) {
    iVar3 = (**(code **)(**(long **)(param_1 + 0x20) + 0x28))();
    pcVar2 = DAT_001f5e88;
    if ((iVar3 < 0) && (uVar4 = FUN_00417e08(), pcVar2 = DAT_001f5e88, (uVar4 & 1) == 0)) {
      FUN_00623bb0(&DAT_001f4e94,
                   "../../discord_native_lib/src/media/audio_device/webrtc_adm_helper.cpp",0x8c9,
                   "WebrtcAdmHelper::RegisterAudioCallback ",iVar3);
      pcVar2 = DAT_001f5e88;
    }
  }
  else {
    FUN_0040a080(*(long *)(param_1 + 8),&local_48,"Perform",7);
    pcVar2 = *(code **)(local_30 + 8);
  }
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(local_48);
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0042a81c  FUN_0042a81c =====

void FUN_0042a81c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042a828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x1c8))();
  return;
}


// ===== 0042a82c  FUN_0042a82c =====

void FUN_0042a82c(long param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long local_58;
  ulong uStack_50;
  code *local_48;
  undefined *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_2 = param_2 & 0xffffffff;
  local_58 = param_1;
  if (*(long *)(param_1 + 8) == 0) {
    local_48 = FUN_0042c724;
    local_40 = &DAT_001f5ea0;
    uStack_50 = param_2;
    FUN_00428c30(*(undefined8 *)(param_1 + 0x20),param_2);
    pcVar2 = DAT_001f5ea8;
  }
  else {
    uVar3 = FUN_00417e08();
    if ((uVar3 & 1) == 0) {
      FUN_00623bb0(&DAT_001f1906,
                   "../../discord_native_lib/src/media/audio_device/webrtc_adm_helper.cpp",0x951,
                   "Deferring to work queue: EnsureRecordingStarted(",param_2,&DAT_001ca519);
    }
    uStack_50 = param_2 | 0x100000000;
    local_48 = FUN_0042c724;
    local_40 = &DAT_001f5ea0;
    if (*(long *)(param_1 + 8) == 0) {
      FUN_00428c30(*(undefined8 *)(param_1 + 0x20),param_2);
      uVar3 = FUN_00417e08();
      pcVar2 = DAT_001f5ea8;
      if ((uVar3 & 1) == 0) {
        FUN_00623bb0(&DAT_001f1906,
                     "../../discord_native_lib/src/media/audio_device/webrtc_adm_helper.cpp",0x981,
                     "Completed: EnsureRecordingStarted(",param_2,&DAT_001ca519);
        pcVar2 = DAT_001f5ea8;
      }
    }
    else {
      FUN_0040a080(*(long *)(param_1 + 8),&local_58,"Perform",7);
      pcVar2 = *(code **)(local_40 + 8);
    }
  }
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(local_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042a990  FUN_0042a990 =====

void FUN_0042a990(long param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long local_58;
  ulong uStack_50;
  code *local_48;
  undefined *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_2 = param_2 & 0xffffffff;
  local_58 = param_1;
  if (*(long *)(param_1 + 8) == 0) {
    local_48 = FUN_0042c794;
    local_40 = &DAT_001f5ec0;
    uStack_50 = param_2;
    FUN_00428cd8(*(undefined8 *)(param_1 + 0x20),param_2);
    pcVar2 = DAT_001f5ec8;
  }
  else {
    uVar3 = FUN_00417e08();
    if ((uVar3 & 1) == 0) {
      FUN_00623bb0(&DAT_001f1906,
                   "../../discord_native_lib/src/media/audio_device/webrtc_adm_helper.cpp",0x9d9,
                   "Deferring to work queue: EnsureRecordingStopped(",param_2,&DAT_001ca519);
    }
    uStack_50 = param_2 | 0x100000000;
    local_48 = FUN_0042c794;
    local_40 = &DAT_001f5ec0;
    if (*(long *)(param_1 + 8) == 0) {
      FUN_00428cd8(*(undefined8 *)(param_1 + 0x20),param_2);
      uVar3 = FUN_00417e08();
      pcVar2 = DAT_001f5ec8;
      if ((uVar3 & 1) == 0) {
        FUN_00623bb0(&DAT_001f1906,
                     "../../discord_native_lib/src/media/audio_device/webrtc_adm_helper.cpp",0xa09,
                     "Completed: EnsureRecordingStopped(",param_2,&DAT_001ca519);
        pcVar2 = DAT_001f5ec8;
      }
    }
    else {
      FUN_0040a080(*(long *)(param_1 + 8),&local_58,"Perform",7);
      pcVar2 = *(code **)(local_40 + 8);
    }
  }
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(local_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042aaf4  FUN_0042aaf4 =====

void FUN_0042aaf4(long param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long local_58;
  ulong uStack_50;
  code *local_48;
  undefined *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_2 = param_2 & 0xffffffff;
  local_58 = param_1;
  if (*(long *)(param_1 + 8) == 0) {
    local_48 = FUN_0042c804;
    local_40 = &DAT_001f5ee0;
    uStack_50 = param_2;
    FUN_00428d3c(*(undefined8 *)(param_1 + 0x20),param_2);
    pcVar2 = DAT_001f5ee8;
  }
  else {
    uVar3 = FUN_00417e08();
    if ((uVar3 & 1) == 0) {
      FUN_00623bb0(&DAT_001f1906,
                   "../../discord_native_lib/src/media/audio_device/webrtc_adm_helper.cpp",0xa61,
                   "Deferring to work queue: EnsurePlayoutStarted(",param_2,&DAT_001ca519);
    }
    uStack_50 = param_2 | 0x100000000;
    local_48 = FUN_0042c804;
    local_40 = &DAT_001f5ee0;
    if (*(long *)(param_1 + 8) == 0) {
      FUN_00428d3c(*(undefined8 *)(param_1 + 0x20),param_2);
      uVar3 = FUN_00417e08();
      pcVar2 = DAT_001f5ee8;
      if ((uVar3 & 1) == 0) {
        FUN_00623bb0(&DAT_001f1906,
                     "../../discord_native_lib/src/media/audio_device/webrtc_adm_helper.cpp",0xa91,
                     "Completed: EnsurePlayoutStarted(",param_2,&DAT_001ca519);
        pcVar2 = DAT_001f5ee8;
      }
    }
    else {
      FUN_0040a080(*(long *)(param_1 + 8),&local_58,"Perform",7);
      pcVar2 = *(code **)(local_40 + 8);
    }
  }
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(local_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042ac58  FUN_0042ac58 =====

void FUN_0042ac58(long param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long local_58;
  ulong uStack_50;
  code *local_48;
  undefined *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_2 = param_2 & 0xffffffff;
  local_58 = param_1;
  if (*(long *)(param_1 + 8) == 0) {
    local_48 = FUN_0042c874;
    local_40 = &DAT_001f5f00;
    uStack_50 = param_2;
    FUN_00428de4(*(undefined8 *)(param_1 + 0x20),param_2);
    pcVar2 = DAT_001f5f08;
  }
  else {
    uVar3 = FUN_00417e08();
    if ((uVar3 & 1) == 0) {
      FUN_00623bb0(&DAT_001f1906,
                   "../../discord_native_lib/src/media/audio_device/webrtc_adm_helper.cpp",0xae9,
                   "Deferring to work queue: EnsurePlayoutStopped(",param_2,&DAT_001ca519);
    }
    uStack_50 = param_2 | 0x100000000;
    local_48 = FUN_0042c874;
    local_40 = &DAT_001f5f00;
    if (*(long *)(param_1 + 8) == 0) {
      FUN_00428de4(*(undefined8 *)(param_1 + 0x20),param_2);
      uVar3 = FUN_00417e08();
      pcVar2 = DAT_001f5f08;
      if ((uVar3 & 1) == 0) {
        FUN_00623bb0(&DAT_001f1906,
                     "../../discord_native_lib/src/media/audio_device/webrtc_adm_helper.cpp",0xb19,
                     "Completed: EnsurePlayoutStopped(",param_2,&DAT_001ca519);
        pcVar2 = DAT_001f5f08;
      }
    }
    else {
      FUN_0040a080(*(long *)(param_1 + 8),&local_58,"Perform",7);
      pcVar2 = *(code **)(local_40 + 8);
    }
  }
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(local_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042adbc  FUN_0042adbc =====

void FUN_0042adbc(long param_1)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long local_48 [2];
  code *local_38;
  undefined *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_0042c8e4;
  local_30 = &DAT_001f5f20;
  local_48[0] = param_1;
  if (*(long *)(param_1 + 8) == 0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x38))();
    if (*(long **)(param_1 + 0x28) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x28) + 8))();
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (*(long **)(param_1 + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x20) + 8))();
    }
    plVar3 = *(long **)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    pcVar2 = DAT_001f5f28;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x20))();
      pcVar2 = DAT_001f5f28;
    }
  }
  else {
    FUN_0042aeb0(*(long *)(param_1 + 8),local_48,"PerformBlocking",0xf);
    pcVar2 = *(code **)(local_30 + 8);
  }
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(local_48[0]);
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0042aeb0  FUN_0042aeb0 =====

void FUN_0042aeb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 local_c8;
  undefined8 local_c0;
  long local_b8 [2];
  code *local_a8;
  undefined *local_a0;
  undefined8 local_98 [3];
  long local_80;
  void *local_78;
  char local_61;
  undefined8 local_60;
  long local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(param_1 + 0x58);
  if (lVar3 != 0) {
    if (*(long *)(param_1 + 0x78) == 0) {
      FUN_00520194(local_98);
      puVar2 = (undefined8 *)operator_new(0x18);
      puVar2[2] = local_98;
      *puVar2 = &PTR_FUN_00d1bec8;
      puVar2[1] = param_2;
      FUN_00512cf8(lVar3,puVar2);
      FUN_005203e8(&local_c0,local_98);
      FUN_0052007c(local_c0);
      FUN_00520164(&local_c0);
      FUN_005201dc(local_98);
    }
    else {
      local_a8 = FUN_0040e7ec;
      local_a0 = &DAT_001f4e70;
      local_b8[0] = *(long *)(param_1 + 0x78);
      FUN_0041977c(local_98,param_1,param_2,param_3,param_4,local_b8);
      FUN_00520194(&local_c0);
      puVar2 = (undefined8 *)operator_new(0x18);
      puVar2[2] = &local_c0;
      *puVar2 = &PTR_FUN_00d1bea0;
      puVar2[1] = local_98;
      FUN_00512cf8(lVar3,puVar2);
      FUN_005203e8(&local_c8,&local_c0);
      FUN_0052007c(local_c8);
      FUN_00520164(&local_c8);
      FUN_005201dc(&local_c0);
      if (*(code **)(local_48 + 8) != (code *)0x0) {
        (**(code **)(local_48 + 8))(local_60);
      }
      if (local_61 < '\0') {
        operator_delete(local_78);
      }
      if (*(code **)(local_80 + 8) != (code *)0x0) {
        (**(code **)(local_80 + 8))(local_98[0]);
      }
      if (*(code **)(local_a0 + 8) != (code *)0x0) {
        (**(code **)(local_a0 + 8))(local_b8[0]);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042b030  FUN_0042b030 =====

void FUN_0042b030(long param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long *local_78 [2];
  code *local_68;
  undefined **local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  pcVar6 = (code *)param_2[2];
  puVar2 = (undefined8 *)param_2[3];
  lVar1 = *param_2;
  lVar3 = param_2[1];
  if (puVar2[1] != 0) {
    param_2[2] = (long)FUN_0042c9f0;
    param_2[3] = (long)&DAT_001f1910;
  }
  local_68 = FUN_0042c9fc;
  local_60 = &PTR_FUN_00d1bc48;
  local_78[0] = (long *)operator_new(0x28);
  lVar5 = *(long *)(param_1 + 8);
  *local_78[0] = param_1;
  local_78[0][2] = lVar3;
  local_78[0][3] = (long)pcVar6;
  local_78[0][4] = (long)puVar2;
  local_78[0][1] = lVar1;
  if (puVar2[1] != 0) {
    puVar2 = &DAT_001f1910;
  }
  if (lVar5 == 0) {
    (*pcVar6)(local_78[0] + 1,*(undefined8 *)(param_1 + 0x20));
    pcVar6 = (code *)PTR_FUN_00d1bc50;
  }
  else {
    FUN_0042aeb0(lVar5,local_78,"PerformBlocking",0xf);
    pcVar6 = (code *)local_60[1];
  }
  if (pcVar6 != (code *)0x0) {
    (*pcVar6)(local_78[0]);
  }
  if ((code *)puVar2[1] != (code *)0x0) {
    (*(code *)puVar2[1])(lVar1);
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042b154  FUN_0042b154 =====

void FUN_0042b154(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_00d1ba40;
  if ((long *)param_1[5] != (long *)0x0) {
    (**(code **)(*(long *)param_1[5] + 8))();
  }
  if ((long *)param_1[4] != (long *)0x0) {
    (**(code **)(*(long *)param_1[4] + 8))();
  }
  plVar4 = (long *)param_1[3];
  param_1[3] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)param_1[2];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_005466cc(plVar4);
      return;
    }
  }
  return;
}


// ===== 0042b1fc  FUN_0042b1fc =====

void FUN_0042b1fc(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_00d1ba40;
  if ((long *)param_1[5] != (long *)0x0) {
    (**(code **)(*(long *)param_1[5] + 8))();
  }
  if ((long *)param_1[4] != (long *)0x0) {
    (**(code **)(*(long *)param_1[4] + 8))();
  }
  plVar4 = (long *)param_1[3];
  param_1[3] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)param_1[2];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_005466cc(plVar4);
    }
  }
  operator_delete(param_1);
  return;
}


// ===== 0042b2a0  FUN_0042b2a0 =====

void FUN_0042b2a0(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  piVar1 = (int *)(param_1 + 0x10);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}


// ===== 0042b2b8  FUN_0042b2b8 =====

bool FUN_0042b2b8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  
  plVar1 = param_1 + 2;
  do {
    lVar5 = *plVar1;
    iVar4 = (int)lVar5 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*param_1 + 0x18))();
  }
  return (int)lVar5 != 1;
}


// ===== 0042b2fc  FUN_0042b2fc =====

void FUN_0042b2fc(void *param_1)

{
  FUN_0042317c();
  operator_delete(param_1);
  return;
}


// ===== 0042b320  FUN_0042b320 =====

bool FUN_0042b320(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x10) == 1;
}


// ===== 0042b334  FUN_0042b334 =====

void FUN_0042b334(undefined8 *param_1)

{
  short sVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  sVar1 = (**(code **)(**(long **)(*plVar2 + 0x20) + 0x50))();
                    /* WARNING: Could not recover jumptable at 0x0042b378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)plVar2[3])(plVar2 + 1,0 < sVar1);
  return;
}


// ===== 0042b37c  FUN_0042b37c =====

undefined8 * FUN_0042b37c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = (undefined8 *)operator_new(0x28);
  uVar3 = param_1[3];
  puVar1 = (undefined8 *)param_1[4];
  uVar6 = param_1[2];
  uVar5 = param_1[1];
  *puVar2 = *param_1;
  pcVar4 = (code *)*puVar1;
  puVar2[2] = uVar6;
  puVar2[1] = uVar5;
  puVar2[3] = uVar3;
  puVar2[4] = puVar1;
  if (pcVar4 != (code *)0x0) {
    uVar3 = (*pcVar4)(param_1[1]);
    puVar2[1] = uVar3;
  }
  return puVar2;
}


// ===== 0042b3dc  FUN_0042b3dc =====

void FUN_0042b3dc(void *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)((long)param_1 + 0x20) + 8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 0042b410  FUN_0042b410 =====

void FUN_0042b410(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 0042b41c  FUN_0042b41c =====

void FUN_0042b41c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long *local_68 [2];
  code *local_58;
  undefined **local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  plVar5 = (long *)*param_1;
  lVar4 = plVar5[1];
  puVar6 = (undefined8 *)plVar5[4];
  lVar8 = plVar5[3];
  lVar7 = plVar5[2];
  uVar1 = *(undefined8 *)(*plVar5 + 0x20);
  uVar2 = *(undefined8 *)(*plVar5 + 0x28);
  if ((code *)*puVar6 != (code *)0x0) {
    lVar4 = (*(code *)*puVar6)(lVar4);
  }
  local_58 = FUN_0042b510;
  local_50 = &PTR_FUN_00d1bb48;
  local_68[0] = (long *)operator_new(0x20);
  *local_68[0] = lVar4;
  local_68[0][3] = (long)puVar6;
  local_68[0][2] = lVar8;
  local_68[0][1] = lVar7;
  if (puVar6[1] != 0) {
    puVar6 = &DAT_001f1910;
  }
  FUN_004231f0(uVar2,uVar1,local_68);
  if ((code *)local_50[1] != (code *)0x0) {
    (*(code *)local_50[1])(local_68[0]);
  }
  if ((code *)puVar6[1] != (code *)0x0) {
    (*(code *)puVar6[1])(lVar4);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042b510  FUN_0042b510 =====

void FUN_0042b510(long *param_1,undefined8 *param_2,uint param_3)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  void *pvVar7;
  void *local_70;
  void *local_68;
  void *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  pvVar1 = (void *)*param_2;
  pvVar5 = (void *)param_2[1];
  local_70 = (void *)0x0;
  local_68 = (void *)0x0;
  lVar6 = *param_1;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  local_60 = (void *)0x0;
  uVar2 = (long)pvVar5 - (long)pvVar1;
  pvVar4 = local_68;
  if (uVar2 != 0) {
    if (0x108421084210842 < (ulong)(((long)uVar2 >> 3) * -0x1084210842108421)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar4 = operator_new(uVar2);
    local_60 = (void *)((long)pvVar4 + ((long)uVar2 >> 3) * 8);
    pvVar7 = pvVar1;
    local_70 = pvVar4;
    do {
      FUN_004243d4(pvVar4,pvVar7);
      pvVar7 = (void *)((long)pvVar7 + 0xf8);
      pvVar4 = (void *)((long)pvVar4 + 0xf8);
    } while (pvVar7 != pvVar5);
  }
  local_68 = pvVar4;
  (**(code **)(lVar6 + 0x10))(lVar6,&local_70,param_3 & 1);
  pvVar7 = local_70;
  pvVar4 = local_68;
  if (local_70 != (void *)0x0) {
    while (pvVar4 != pvVar7) {
      FUN_00411fac((void *)((long)pvVar4 + -0xf8));
      pvVar4 = (void *)((long)pvVar4 + -0xf8);
    }
    local_68 = pvVar7;
    operator_delete(local_70);
  }
  if (pvVar1 != (void *)0x0) {
    while (pvVar5 != pvVar1) {
      pvVar5 = (void *)((long)pvVar5 + -0xf8);
      FUN_00411fac(pvVar5);
    }
    operator_delete(pvVar1);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042b674  FUN_0042b674 =====

undefined8 * FUN_0042b674(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  uVar3 = param_1[2];
  puVar1 = (undefined8 *)param_1[3];
  uVar5 = *param_1;
  pcVar4 = (code *)*puVar1;
  puVar2[1] = param_1[1];
  *puVar2 = uVar5;
  puVar2[2] = uVar3;
  puVar2[3] = puVar1;
  if (pcVar4 != (code *)0x0) {
    uVar3 = (*pcVar4)(*param_1);
    *puVar2 = uVar3;
  }
  return puVar2;
}


// ===== 0042b6c4  FUN_0042b6c4 =====

void FUN_0042b6c4(undefined8 *param_1)

{
  if (*(code **)(param_1[3] + 8) != (code *)0x0) {
    (**(code **)(param_1[3] + 8))(*param_1);
  }
  operator_delete(param_1);
  return;
}


// ===== 0042b6f8  FUN_0042b6f8 =====

undefined8 * FUN_0042b6f8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = (undefined8 *)operator_new(0x28);
  uVar3 = param_1[3];
  puVar1 = (undefined8 *)param_1[4];
  uVar6 = param_1[2];
  uVar5 = param_1[1];
  *puVar2 = *param_1;
  pcVar4 = (code *)*puVar1;
  puVar2[2] = uVar6;
  puVar2[1] = uVar5;
  puVar2[3] = uVar3;
  puVar2[4] = puVar1;
  if (pcVar4 != (code *)0x0) {
    uVar3 = (*pcVar4)(param_1[1]);
    puVar2[1] = uVar3;
  }
  return puVar2;
}


// ===== 0042b758  FUN_0042b758 =====

void FUN_0042b758(void *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)((long)param_1 + 0x20) + 8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 0042b78c  FUN_0042b78c =====

void FUN_0042b78c(undefined8 *param_1)

{
  long lVar1;
  undefined1 auStack_130 [248];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_1 = (undefined8 *)*param_1;
  FUN_00423198(auStack_130,*(undefined8 *)(param_1[1] + 0x20),param_1[2]);
  FUN_0042b7fc(*param_1,auStack_130);
  FUN_00411fac(auStack_130);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042b7fc  FUN_0042b7fc =====

undefined8 * FUN_0042b7fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    operator_delete((void *)*param_1);
  }
  uVar6 = param_2[1];
  uVar5 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar6;
  *param_1 = uVar5;
  *(undefined1 *)((long)param_2 + 0x17) = 0;
  *(undefined1 *)param_2 = 0;
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  puVar1 = param_2 + 7;
  uVar6 = param_2[4];
  uVar5 = param_2[3];
  param_1[5] = param_2[5];
  param_1[4] = uVar6;
  param_1[3] = uVar5;
  puVar2 = param_1 + 7;
  *(undefined1 *)((long)param_2 + 0x2f) = 0;
  cVar3 = *(char *)(param_2 + 10);
  *(undefined1 *)(param_2 + 3) = 0;
  cVar4 = *(char *)(param_1 + 10);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  if (cVar4 == cVar3) {
    if (cVar4 != '\0') {
      if (*(char *)((long)param_1 + 0x4f) < '\0') {
        operator_delete((void *)*puVar2);
      }
      uVar6 = param_2[8];
      uVar5 = *puVar1;
      param_1[9] = param_2[9];
      param_1[8] = uVar6;
      *puVar2 = uVar5;
      *(undefined1 *)((long)param_2 + 0x4f) = 0;
      *(undefined1 *)(param_2 + 7) = 0;
    }
  }
  else if (cVar4 == '\0') {
    uVar6 = param_2[8];
    uVar5 = *puVar1;
    param_1[9] = param_2[9];
    param_1[8] = uVar6;
    *puVar2 = uVar5;
    param_2[8] = 0;
    param_2[9] = 0;
    *puVar1 = 0;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  else {
    if (*(char *)((long)param_1 + 0x4f) < '\0') {
      operator_delete((void *)*puVar2);
    }
    *(undefined1 *)(param_1 + 10) = 0;
  }
  cVar3 = *(char *)(param_1 + 0xe);
  puVar1 = param_1 + 0xb;
  puVar2 = param_2 + 0xb;
  if (cVar3 == *(char *)(param_2 + 0xe)) {
    if (cVar3 != '\0') {
      if (*(char *)((long)param_1 + 0x6f) < '\0') {
        operator_delete((void *)*puVar1);
      }
      uVar6 = param_2[0xc];
      uVar5 = *puVar2;
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = uVar6;
      *puVar1 = uVar5;
      *(undefined1 *)((long)param_2 + 0x6f) = 0;
      *(undefined1 *)(param_2 + 0xb) = 0;
    }
  }
  else if (cVar3 == '\0') {
    uVar6 = param_2[0xc];
    uVar5 = *puVar2;
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar6;
    *puVar1 = uVar5;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    *puVar2 = 0;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  else {
    if (*(char *)((long)param_1 + 0x6f) < '\0') {
      operator_delete((void *)*puVar1);
    }
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  cVar3 = *(char *)(param_1 + 0x12);
  puVar1 = param_1 + 0xf;
  puVar2 = param_2 + 0xf;
  if (cVar3 == *(char *)(param_2 + 0x12)) {
    if (cVar3 != '\0') {
      if (*(char *)((long)param_1 + 0x8f) < '\0') {
        operator_delete((void *)*puVar1);
      }
      uVar6 = param_2[0x10];
      uVar5 = *puVar2;
      param_1[0x11] = param_2[0x11];
      param_1[0x10] = uVar6;
      *puVar1 = uVar5;
      *(undefined1 *)((long)param_2 + 0x8f) = 0;
      *(undefined1 *)(param_2 + 0xf) = 0;
    }
  }
  else if (cVar3 == '\0') {
    uVar6 = param_2[0x10];
    uVar5 = *puVar2;
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar6;
    *puVar1 = uVar5;
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    *puVar2 = 0;
    *(undefined1 *)(param_1 + 0x12) = 1;
  }
  else {
    if (*(char *)((long)param_1 + 0x8f) < '\0') {
      operator_delete((void *)*puVar1);
    }
    *(undefined1 *)(param_1 + 0x12) = 0;
  }
  cVar3 = *(char *)(param_1 + 0x16);
  puVar1 = param_1 + 0x13;
  puVar2 = param_2 + 0x13;
  if (cVar3 == *(char *)(param_2 + 0x16)) {
    if (cVar3 != '\0') {
      if (*(char *)((long)param_1 + 0xaf) < '\0') {
        operator_delete((void *)*puVar1);
      }
      uVar6 = param_2[0x14];
      uVar5 = *puVar2;
      param_1[0x15] = param_2[0x15];
      param_1[0x14] = uVar6;
      *puVar1 = uVar5;
      *(undefined1 *)((long)param_2 + 0xaf) = 0;
      *(undefined1 *)(param_2 + 0x13) = 0;
    }
  }
  else if (cVar3 == '\0') {
    uVar6 = param_2[0x14];
    uVar5 = *puVar2;
    param_1[0x15] = param_2[0x15];
    param_1[0x14] = uVar6;
    *puVar1 = uVar5;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    *puVar2 = 0;
    *(undefined1 *)(param_1 + 0x16) = 1;
  }
  else {
    if (*(char *)((long)param_1 + 0xaf) < '\0') {
      operator_delete((void *)*puVar1);
    }
    *(undefined1 *)(param_1 + 0x16) = 0;
  }
  cVar3 = *(char *)(param_1 + 0x1a);
  puVar1 = param_1 + 0x17;
  puVar2 = param_2 + 0x17;
  if (cVar3 == *(char *)(param_2 + 0x1a)) {
    if (cVar3 != '\0') {
      if (*(char *)((long)param_1 + 0xcf) < '\0') {
        operator_delete((void *)*puVar1);
      }
      uVar6 = param_2[0x18];
      uVar5 = *puVar2;
      param_1[0x19] = param_2[0x19];
      param_1[0x18] = uVar6;
      *puVar1 = uVar5;
      *(undefined1 *)((long)param_2 + 0xcf) = 0;
      *(undefined1 *)(param_2 + 0x17) = 0;
    }
  }
  else if (cVar3 == '\0') {
    uVar6 = param_2[0x18];
    uVar5 = *puVar2;
    param_1[0x19] = param_2[0x19];
    param_1[0x18] = uVar6;
    *puVar1 = uVar5;
    param_2[0x18] = 0;
    param_2[0x19] = 0;
    *puVar2 = 0;
    *(undefined1 *)(param_1 + 0x1a) = 1;
  }
  else {
    if (*(char *)((long)param_1 + 0xcf) < '\0') {
      operator_delete((void *)*puVar1);
    }
    *(undefined1 *)(param_1 + 0x1a) = 0;
  }
  cVar3 = *(char *)(param_1 + 0x1e);
  puVar1 = param_1 + 0x1b;
  puVar2 = param_2 + 0x1b;
  if (cVar3 == *(char *)(param_2 + 0x1e)) {
    if (cVar3 != '\0') {
      if (*(char *)((long)param_1 + 0xef) < '\0') {
        operator_delete((void *)*puVar1);
      }
      uVar6 = param_2[0x1c];
      uVar5 = *puVar2;
      param_1[0x1d] = param_2[0x1d];
      param_1[0x1c] = uVar6;
      *puVar1 = uVar5;
      *(undefined1 *)((long)param_2 + 0xef) = 0;
      *(undefined1 *)(param_2 + 0x1b) = 0;
    }
  }
  else if (cVar3 == '\0') {
    uVar6 = param_2[0x1c];
    uVar5 = *puVar2;
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1c] = uVar6;
    *puVar1 = uVar5;
    param_2[0x1c] = 0;
    param_2[0x1d] = 0;
    *puVar2 = 0;
    *(undefined1 *)(param_1 + 0x1e) = 1;
  }
  else {
    if (*(char *)((long)param_1 + 0xef) < '\0') {
      operator_delete((void *)*puVar1);
    }
    *(undefined1 *)(param_1 + 0x1e) = 0;
  }
  return param_1;
}


// ===== 0042bb9c  FUN_0042bb9c =====

void FUN_0042bb9c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  uVar3 = *param_1;
  uVar2 = param_1[2];
  puVar1[1] = param_1[1];
  *puVar1 = uVar3;
  puVar1[2] = uVar2;
  return;
}


// ===== 0042bbd0  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0042bbd4  FUN_0042bbd4 =====

void FUN_0042bbd4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long *local_68 [2];
  code *local_58;
  undefined **local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  plVar5 = (long *)*param_1;
  lVar4 = plVar5[1];
  puVar6 = (undefined8 *)plVar5[4];
  lVar8 = plVar5[3];
  lVar7 = plVar5[2];
  uVar1 = *(undefined8 *)(*plVar5 + 0x20);
  uVar2 = *(undefined8 *)(*plVar5 + 0x28);
  if ((code *)*puVar6 != (code *)0x0) {
    lVar4 = (*(code *)*puVar6)(lVar4);
  }
  local_58 = FUN_0042bcc8;
  local_50 = &PTR_FUN_00d1bba8;
  local_68[0] = (long *)operator_new(0x20);
  *local_68[0] = lVar4;
  local_68[0][3] = (long)puVar6;
  local_68[0][2] = lVar8;
  local_68[0][1] = lVar7;
  if (puVar6[1] != 0) {
    puVar6 = &DAT_001f1910;
  }
  FUN_00423734(uVar2,uVar1,local_68);
  if ((code *)local_50[1] != (code *)0x0) {
    (*(code *)local_50[1])(local_68[0]);
  }
  if ((code *)puVar6[1] != (code *)0x0) {
    (*(code *)puVar6[1])(lVar4);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042bcc8  FUN_0042bcc8 =====

void FUN_0042bcc8(long *param_1,undefined8 *param_2,uint param_3)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  void *pvVar7;
  void *local_70;
  void *local_68;
  void *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  pvVar1 = (void *)*param_2;
  pvVar5 = (void *)param_2[1];
  local_70 = (void *)0x0;
  local_68 = (void *)0x0;
  lVar6 = *param_1;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  local_60 = (void *)0x0;
  uVar2 = (long)pvVar5 - (long)pvVar1;
  pvVar4 = local_68;
  if (uVar2 != 0) {
    if (0x108421084210842 < (ulong)(((long)uVar2 >> 3) * -0x1084210842108421)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar4 = operator_new(uVar2);
    local_60 = (void *)((long)pvVar4 + ((long)uVar2 >> 3) * 8);
    pvVar7 = pvVar1;
    local_70 = pvVar4;
    do {
      FUN_004243d4(pvVar4,pvVar7);
      pvVar7 = (void *)((long)pvVar7 + 0xf8);
      pvVar4 = (void *)((long)pvVar4 + 0xf8);
    } while (pvVar7 != pvVar5);
  }
  local_68 = pvVar4;
  (**(code **)(lVar6 + 0x10))(lVar6,&local_70,param_3 & 1);
  pvVar7 = local_70;
  pvVar4 = local_68;
  if (local_70 != (void *)0x0) {
    while (pvVar4 != pvVar7) {
      FUN_00411fac((void *)((long)pvVar4 + -0xf8));
      pvVar4 = (void *)((long)pvVar4 + -0xf8);
    }
    local_68 = pvVar7;
    operator_delete(local_70);
  }
  if (pvVar1 != (void *)0x0) {
    while (pvVar5 != pvVar1) {
      pvVar5 = (void *)((long)pvVar5 + -0xf8);
      FUN_00411fac(pvVar5);
    }
    operator_delete(pvVar1);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042be2c  FUN_0042be2c =====

undefined8 * FUN_0042be2c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  uVar3 = param_1[2];
  puVar1 = (undefined8 *)param_1[3];
  uVar5 = *param_1;
  pcVar4 = (code *)*puVar1;
  puVar2[1] = param_1[1];
  *puVar2 = uVar5;
  puVar2[2] = uVar3;
  puVar2[3] = puVar1;
  if (pcVar4 != (code *)0x0) {
    uVar3 = (*pcVar4)(*param_1);
    *puVar2 = uVar3;
  }
  return puVar2;
}


// ===== 0042be7c  FUN_0042be7c =====

void FUN_0042be7c(undefined8 *param_1)

{
  if (*(code **)(param_1[3] + 8) != (code *)0x0) {
    (**(code **)(param_1[3] + 8))(*param_1);
  }
  operator_delete(param_1);
  return;
}


// ===== 0042beb0  FUN_0042beb0 =====

undefined8 * FUN_0042beb0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = (undefined8 *)operator_new(0x28);
  uVar3 = param_1[3];
  puVar1 = (undefined8 *)param_1[4];
  uVar6 = param_1[2];
  uVar5 = param_1[1];
  *puVar2 = *param_1;
  pcVar4 = (code *)*puVar1;
  puVar2[2] = uVar6;
  puVar2[1] = uVar5;
  puVar2[3] = uVar3;
  puVar2[4] = puVar1;
  if (pcVar4 != (code *)0x0) {
    uVar3 = (*pcVar4)(param_1[1]);
    puVar2[1] = uVar3;
  }
  return puVar2;
}


// ===== 0042bf10  FUN_0042bf10 =====

void FUN_0042bf10(void *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)((long)param_1 + 0x20) + 8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 0042bf44  FUN_0042bf44 =====

void FUN_0042bf44(undefined8 *param_1)

{
  long lVar1;
  undefined1 auStack_130 [248];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_1 = (undefined8 *)*param_1;
  FUN_004231c4(auStack_130,*(undefined8 *)(param_1[1] + 0x20),param_1[2]);
  FUN_0042b7fc(*param_1,auStack_130);
  FUN_00411fac(auStack_130);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042bfb4  FUN_0042bfb4 =====

void FUN_0042bfb4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  uVar3 = *param_1;
  uVar2 = param_1[2];
  puVar1[1] = param_1[1];
  *puVar1 = uVar3;
  puVar1[2] = uVar2;
  return;
}


// ===== 0042bfe8  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0042bfec  FUN_0042bfec =====

void FUN_0042bfec(long *param_1)

{
  ulong uVar1;
  undefined1 *__src;
  ulong uVar2;
  long lVar3;
  undefined1 **__dest;
  undefined8 uVar4;
  undefined1 *local_60;
  ulong uStack_58;
  undefined8 local_50;
  long local_48;
  
  __dest = &local_60;
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  param_1 = (long *)*param_1;
  uVar4 = *(undefined8 *)(*param_1 + 0x20);
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __src = (undefined1 *)param_1[1];
    uVar2 = param_1[2];
    if (uVar2 < 0x17) {
      local_50 = CONCAT17((char)uVar2,(undefined7)local_50);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined1 **)operator_new(uVar1);
      local_50 = uVar1 | 0x8000000000000000;
      local_60 = (undefined1 *)__dest;
      uStack_58 = uVar2;
    }
    if ((__dest <= __src) && (__src < (undefined1 *)((long)__dest + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar2 + 1);
  }
  else {
    local_50 = param_1[3];
    uStack_58 = param_1[2];
    local_60 = (undefined1 *)param_1[1];
  }
  FUN_00423b1c(uVar4,&local_60);
  if ((long)local_50 < 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042c110  FUN_0042c110 =====

undefined8 * FUN_0042c110(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *__src;
  ulong uVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *__dest;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar4 = (undefined8 *)operator_new(0x20);
  cVar3 = *(char *)((long)param_1 + 0x1f);
  __dest = puVar4 + 1;
  *puVar4 = *param_1;
  if (cVar3 < '\0') {
    __src = (undefined8 *)param_1[1];
    uVar2 = param_1[2];
    if (uVar2 < 0x17) {
      *(char *)((long)puVar4 + 0x1f) = (char)uVar2;
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined8 *)operator_new(uVar1);
      puVar4[1] = __dest;
      puVar4[2] = uVar2;
      puVar4[3] = uVar1 | 0x8000000000000000;
    }
    if ((__dest <= __src) && (__src < (undefined8 *)((long)__dest + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar2 + 1);
  }
  else {
    uVar6 = param_1[1];
    uVar5 = param_1[3];
    puVar4[2] = param_1[2];
    *__dest = uVar6;
    puVar4[3] = uVar5;
  }
  return puVar4;
}


// ===== 0042c1f4  FUN_0042c1f4 =====

void FUN_0042c1f4(void *param_1)

{
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete(*(void **)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 0042c224  FUN_0042c224 =====

void FUN_0042c224(long *param_1)

{
  ulong uVar1;
  undefined1 *__src;
  ulong uVar2;
  long lVar3;
  undefined1 **__dest;
  undefined8 uVar4;
  undefined1 *local_60;
  ulong uStack_58;
  undefined8 local_50;
  long local_48;
  
  __dest = &local_60;
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  param_1 = (long *)*param_1;
  uVar4 = *(undefined8 *)(*param_1 + 0x20);
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __src = (undefined1 *)param_1[1];
    uVar2 = param_1[2];
    if (uVar2 < 0x17) {
      local_50 = CONCAT17((char)uVar2,(undefined7)local_50);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined1 **)operator_new(uVar1);
      local_50 = uVar1 | 0x8000000000000000;
      local_60 = (undefined1 *)__dest;
      uStack_58 = uVar2;
    }
    if ((__dest <= __src) && (__src < (undefined1 *)((long)__dest + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar2 + 1);
  }
  else {
    local_50 = param_1[3];
    uStack_58 = param_1[2];
    local_60 = (undefined1 *)param_1[1];
  }
  FUN_00423eb8(uVar4,&local_60);
  if ((long)local_50 < 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042c348  FUN_0042c348 =====

undefined8 * FUN_0042c348(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *__src;
  ulong uVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *__dest;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar4 = (undefined8 *)operator_new(0x20);
  cVar3 = *(char *)((long)param_1 + 0x1f);
  __dest = puVar4 + 1;
  *puVar4 = *param_1;
  if (cVar3 < '\0') {
    __src = (undefined8 *)param_1[1];
    uVar2 = param_1[2];
    if (uVar2 < 0x17) {
      *(char *)((long)puVar4 + 0x1f) = (char)uVar2;
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined8 *)operator_new(uVar1);
      puVar4[1] = __dest;
      puVar4[2] = uVar2;
      puVar4[3] = uVar1 | 0x8000000000000000;
    }
    if ((__dest <= __src) && (__src < (undefined8 *)((long)__dest + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar2 + 1);
  }
  else {
    uVar6 = param_1[1];
    uVar5 = param_1[3];
    puVar4[2] = param_1[2];
    *__dest = uVar6;
    puVar4[3] = uVar5;
  }
  return puVar4;
}


// ===== 0042c42c  FUN_0042c42c =====

void FUN_0042c42c(void *param_1)

{
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete(*(void **)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 0042c45c  FUN_0042c45c =====

void FUN_0042c45c(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *param_1;
  uVar1 = (**(code **)(**(long **)(lVar3 + 0x20) + 0x1d0))();
  if ((uVar1 & 1) != 0) {
    plVar2 = *(long **)(lVar3 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x0042c49c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x1e8))(plVar2,(char)param_1[1]);
    return;
  }
  return;
}


// ===== 0042c4ac  FUN_0042c4ac =====

void FUN_0042c4ac(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined1 local_2c [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar3 = *param_1;
  local_2c[0] = 0;
  plVar2 = *(long **)(lVar3 + 0x20);
  (**(code **)(*plVar2 + 0x198))(plVar2,local_2c);
  plVar2 = *(long **)(lVar3 + 0x20);
  (**(code **)(*plVar2 + 0x1a0))(plVar2,local_2c[0]);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042c51c  FUN_0042c51c =====

void FUN_0042c51c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*param_1 + 0x20) + 0x1b8))(*(long **)(*param_1 + 0x20),1);
  return;
}


// ===== 0042c534  FUN_0042c534 =====

void FUN_0042c534(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined1 local_2c [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar3 = *param_1;
  local_2c[0] = 0;
  plVar2 = *(long **)(lVar3 + 0x20);
  (**(code **)(*plVar2 + 0x1b0))(plVar2,local_2c);
  plVar2 = *(long **)(lVar3 + 0x20);
  (**(code **)(*plVar2 + 0x1b8))(plVar2,local_2c[0]);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042c5a4  FUN_0042c5a4 =====

void FUN_0042c5a4(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  float fVar4;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)*param_1;
  local_3c = 0xff;
  uVar2 = (**(code **)(*plVar3 + 0x48))(plVar3);
  if ((uVar2 & 1) == 0) {
    (**(code **)(*(long *)plVar3[4] + 0x158))((long *)plVar3[4],&local_3c);
    fVar4 = (float)NEON_ucvtf(local_3c);
  }
  else {
    fVar4 = 255.0;
  }
  (**(code **)(*(long *)plVar3[4] + 0x148))
            ((long *)plVar3[4],(int)(fVar4 * *(float *)(param_1 + 1)));
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042c654  FUN_0042c654 =====

void FUN_0042c654(long *param_1)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = (**(code **)(**(long **)(*param_1 + 0x20) + 0x30))();
  if (iVar1 < 0) {
    uVar2 = FUN_00417e08();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e94,
                   "../../discord_native_lib/src/media/audio_device/webrtc_adm_helper.cpp",0x879,
                   "WebrtcAdmHelper::Init ",iVar1);
      return;
    }
  }
  return;
}


// ===== 0042c6bc  FUN_0042c6bc =====

void FUN_0042c6bc(long *param_1)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = (**(code **)(**(long **)(*param_1 + 0x20) + 0x28))(*(long **)(*param_1 + 0x20),param_1[1])
  ;
  if (iVar1 < 0) {
    uVar2 = FUN_00417e08();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e94,
                   "../../discord_native_lib/src/media/audio_device/webrtc_adm_helper.cpp",0x8c9,
                   "WebrtcAdmHelper::RegisterAudioCallback ",iVar1);
      return;
    }
  }
  return;
}


// ===== 0042c724  FUN_0042c724 =====

void FUN_0042c724(long *param_1)

{
  ulong uVar1;
  
  FUN_00428c30(*(undefined8 *)(*param_1 + 0x20),(int)param_1[1]);
  if ((*(char *)((long)param_1 + 0xc) != '\0') && (uVar1 = FUN_00417e08(), (uVar1 & 1) == 0)) {
    FUN_00623bb0(&DAT_001f1906,
                 "../../discord_native_lib/src/media/audio_device/webrtc_adm_helper.cpp",0x981,
                 "Completed: EnsureRecordingStarted(",(int)param_1[1],&DAT_001ca519);
    return;
  }
  return;
}


// ===== 0042c794  FUN_0042c794 =====

void FUN_0042c794(long *param_1)

{
  ulong uVar1;
  
  FUN_00428cd8(*(undefined8 *)(*param_1 + 0x20),(int)param_1[1]);
  if ((*(char *)((long)param_1 + 0xc) != '\0') && (uVar1 = FUN_00417e08(), (uVar1 & 1) == 0)) {
    FUN_00623bb0(&DAT_001f1906,
                 "../../discord_native_lib/src/media/audio_device/webrtc_adm_helper.cpp",0xa09,
                 "Completed: EnsureRecordingStopped(",(int)param_1[1],&DAT_001ca519);
    return;
  }
  return;
}


// ===== 0042c804  FUN_0042c804 =====

void FUN_0042c804(long *param_1)

{
  ulong uVar1;
  
  FUN_00428d3c(*(undefined8 *)(*param_1 + 0x20),(int)param_1[1]);
  if ((*(char *)((long)param_1 + 0xc) != '\0') && (uVar1 = FUN_00417e08(), (uVar1 & 1) == 0)) {
    FUN_00623bb0(&DAT_001f1906,
                 "../../discord_native_lib/src/media/audio_device/webrtc_adm_helper.cpp",0xa91,
                 "Completed: EnsurePlayoutStarted(",(int)param_1[1],&DAT_001ca519);
    return;
  }
  return;
}


// ===== 0042c874  FUN_0042c874 =====

void FUN_0042c874(long *param_1)

{
  ulong uVar1;
  
  FUN_00428de4(*(undefined8 *)(*param_1 + 0x20),(int)param_1[1]);
  if ((*(char *)((long)param_1 + 0xc) != '\0') && (uVar1 = FUN_00417e08(), (uVar1 & 1) == 0)) {
    FUN_00623bb0(&DAT_001f1906,
                 "../../discord_native_lib/src/media/audio_device/webrtc_adm_helper.cpp",0xb19,
                 "Completed: EnsurePlayoutStopped(",(int)param_1[1],&DAT_001ca519);
    return;
  }
  return;
}


// ===== 0042c8e4  FUN_0042c8e4 =====

void FUN_0042c8e4(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_1;
  (**(code **)(**(long **)(lVar2 + 0x20) + 0x38))();
  if (*(long **)(lVar2 + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x28) + 8))();
  }
  *(undefined8 *)(lVar2 + 0x28) = 0;
  if (*(long **)(lVar2 + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x20) + 8))();
  }
  plVar1 = *(long **)(lVar2 + 0x18);
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0042c94c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))();
    return;
  }
  return;
}


// ===== 0042c95c  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0042c960  FUN_0042c960 =====

void FUN_0042c960(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  uVar1 = FUN_005ce36c();
  (**(code **)(lVar3 + 0x10))(lVar3);
  uVar2 = FUN_005ce36c();
  (**(code **)(lVar3 + 0x48))(lVar3 + 0x38,lVar3 + 0x20,*(undefined8 *)(lVar3 + 0x58),uVar1,uVar2);
  FUN_00520464(*(undefined8 *)(param_1 + 0x10));
  return;
}


// ===== 0042c9c0  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0042c9c4  FUN_0042c9c4 =====

void FUN_0042c9c4(long param_1)

{
  (**(code **)(*(long *)(param_1 + 8) + 0x10))();
  FUN_00520464(*(undefined8 *)(param_1 + 0x10));
  return;
}


// ===== 0042c9f0  FUN_0042c9f0 =====

void FUN_0042c9f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 0042c9fc  FUN_0042c9fc =====

void FUN_0042c9fc(long *param_1)

{
  param_1 = (long *)*param_1;
                    /* WARNING: Could not recover jumptable at 0x0042ca10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1[3])(param_1 + 1,*(undefined8 *)(*param_1 + 0x20));
  return;
}


// ===== 0042ca14  FUN_0042ca14 =====

undefined8 * FUN_0042ca14(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = (undefined8 *)operator_new(0x28);
  uVar3 = param_1[3];
  puVar1 = (undefined8 *)param_1[4];
  uVar6 = param_1[2];
  uVar5 = param_1[1];
  *puVar2 = *param_1;
  pcVar4 = (code *)*puVar1;
  puVar2[2] = uVar6;
  puVar2[1] = uVar5;
  puVar2[3] = uVar3;
  puVar2[4] = puVar1;
  if (pcVar4 != (code *)0x0) {
    uVar3 = (*pcVar4)(param_1[1]);
    puVar2[1] = uVar3;
  }
  return puVar2;
}


// ===== 0042ca74  FUN_0042ca74 =====

void FUN_0042ca74(void *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)((long)param_1 + 0x20) + 8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 0042caa8  FUN_0042caa8 =====

/* WARNING: Removing unreachable block (ram,0x0042cffc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042caa8(long *param_1,long param_2,undefined8 param_3,undefined4 *param_4,
                 undefined8 param_5,byte param_6,byte param_7)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  void *pvVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  void *pvVar21;
  long *plVar22;
  undefined8 uVar23;
  undefined1 auStack_768 [8];
  void *local_760;
  void *local_758;
  undefined8 local_740;
  long lStack_738;
  long *local_730;
  long *local_728;
  long *local_720;
  undefined8 local_718;
  undefined8 local_710;
  undefined1 local_708;
  undefined4 local_704;
  undefined1 local_700;
  undefined8 local_6fc;
  undefined1 local_6f4;
  undefined4 local_6f0;
  undefined1 local_6ec;
  undefined4 local_6eb;
  undefined1 local_6e4;
  undefined4 local_6e0;
  undefined1 local_6dc;
  undefined1 local_6d8;
  undefined1 local_6d4;
  undefined8 local_6d0;
  undefined4 local_6c8;
  undefined1 local_6c4;
  undefined1 local_6c0;
  undefined8 local_6bc;
  undefined1 local_6b4;
  undefined8 local_6b0;
  undefined4 local_6a8;
  undefined1 local_6a4;
  undefined8 local_6a0;
  undefined8 uStack_698;
  undefined8 local_690;
  undefined1 local_688;
  undefined2 local_684;
  undefined1 local_680;
  long local_67c;
  long lStack_674;
  long local_66c;
  undefined *local_660;
  undefined4 local_658;
  undefined1 local_653;
  undefined8 local_650;
  undefined1 local_648;
  undefined4 local_644;
  undefined8 local_63c;
  undefined4 local_630;
  undefined1 local_62b;
  undefined2 local_629;
  undefined4 local_620;
  undefined1 local_618;
  undefined8 local_610;
  undefined4 local_608;
  undefined1 local_604;
  undefined1 local_600;
  undefined4 local_5f8;
  undefined1 local_5f4;
  undefined8 local_5f0;
  undefined4 local_5e8;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined8 local_5d0;
  undefined1 local_5c8;
  undefined1 local_5c3;
  long local_5bc;
  long lStack_5b4;
  undefined4 local_5ac;
  undefined1 local_5a0;
  undefined1 local_330;
  long *local_c0;
  long *plStack_b8;
  long *local_b0;
  long *plStack_a8;
  long *local_a0;
  long *plStack_98;
  long local_90;
  
  lVar5 = tpidr_el0;
  local_90 = *(long *)(lVar5 + 0x28);
  *param_1 = param_2;
  uVar2 = *param_4;
  *(undefined1 *)((long)param_1 + 0x27) = 7;
  *(undefined4 *)(param_1 + 1) = uVar2;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  if (("default" < param_1 + 2) || ((char *)((long)param_1 + 0x17U) < "efault")) {
    *(undefined1 *)((long)param_1 + 0x17) = 0;
    *(undefined1 *)((long)param_1 + 0x3f) = 7;
    *(undefined4 *)((long)param_1 + 0x13) = 0x746c7561;
    *(undefined4 *)(param_1 + 2) = 0x61666564;
    if (("default" < param_1 + 5) || ((char *)((long)param_1 + 0x2fU) < "efault")) {
      *(undefined4 *)((long)param_1 + 0x2b) = 0x746c7561;
      lVar12 = DAT_001f59f8;
      lVar20 = DAT_001f4ff0;
      lVar9 = _UNK_001f4ac8;
      lVar17 = _DAT_001f4ac0;
      *(undefined4 *)(param_1 + 0xc) = 0x1010000;
      param_1[8] = lVar20;
      *(undefined4 *)(param_1 + 5) = 0x61666564;
      *(undefined1 *)((long)param_1 + 0x2f) = 0;
      param_1[10] = lVar9;
      param_1[9] = lVar17;
      param_1[0xb] = lVar12;
      *(undefined1 *)((long)param_1 + 100) = 1;
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined8 *)((long)param_1 + 0x74) = 0;
      *(undefined8 *)((long)param_1 + 0x6c) = 0;
      *(undefined8 *)((long)param_1 + 0x84) = 0;
      *(undefined8 *)((long)param_1 + 0x7c) = 0;
      *(undefined8 *)((long)param_1 + 0x94) = 0;
      *(undefined8 *)((long)param_1 + 0x8c) = 0;
      *(undefined8 *)((long)param_1 + 0xa4) = 0;
      *(undefined8 *)((long)param_1 + 0x9c) = 0;
      *(undefined8 *)((long)param_1 + 0xb4) = 0;
      *(undefined8 *)((long)param_1 + 0xac) = 0;
      *(undefined8 *)((long)param_1 + 0xc4) = 0;
      *(undefined8 *)((long)param_1 + 0xbc) = 0;
      *(undefined8 *)((long)param_1 + 0xd4) = 0;
      *(undefined8 *)((long)param_1 + 0xcc) = 0;
      *(undefined8 *)((long)param_1 + 0xe4) = 0;
      *(undefined8 *)((long)param_1 + 0xdc) = 0;
      param_1[0x1e] = 0;
      param_1[0x1d] = 0;
      *(undefined4 *)(param_1 + 0x1f) = 0x3f800000;
      param_1[0x21] = 0;
      param_1[0x20] = 0;
      param_1[0x23] = 0;
      param_1[0x22] = 0;
      *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
      param_1[0x26] = 0;
      param_1[0x25] = 0;
      param_1[0x28] = 0;
      param_1[0x27] = 0;
      param_1[0x29] = 0;
      pvVar14 = operator_new(0x100);
      puVar19 = (undefined8 *)(param_4 + 8);
      FUN_004d7028(pvVar14,*puVar19);
      param_1[0x2a] = (long)pvVar14;
      *(undefined2 *)(param_1 + 0x2b) = 0;
      *(byte *)((long)param_1 + 99) = param_6 & 1;
      param_1[0x2d] = 0;
      param_1[0x2c] = 0;
      param_1[0x2f] = 0;
      param_1[0x2e] = 0;
      *(byte *)((long)param_1 + 100) = param_7 & 1;
      plVar15 = (long *)operator_new(0x18);
      FUN_0044b11c();
      local_720 = plVar15;
      memset(&local_658,0,0x598);
      puVar13 = PTR_DAT_00d51b38;
      uVar11 = DAT_001f55d0;
      uVar10 = DAT_001f5168;
      uVar8 = _UNK_001f48c8;
      uVar7 = _DAT_001f48c0;
      uVar23 = NEON_fmov(0x3f800000,4);
      local_658 = 32000;
      local_62b = 1;
      local_620 = 1;
      local_660 = PTR_DAT_00d51b38 + 0x10;
      local_604 = 1;
      local_630 = 0xff;
      local_600 = 1;
      local_608 = 9;
      local_5f4 = 1;
      local_5f8 = 0x46;
      local_5c8 = 1;
      lVar20 = param_1[0x13];
      local_653 = 0;
      local_5e8 = 300;
      local_650 = 0;
      uStack_5d8 = _UNK_001f48c8;
      local_5e0 = _DAT_001f48c0;
      local_648 = 0;
      lStack_5b4 = lVar9;
      local_5bc = lVar17;
      local_644 = 0x3f800000;
      local_629 = 0x100;
      local_618 = 0;
      local_610 = DAT_001f55d0;
      local_5f0 = 0x3dcccccd0000000f;
      local_5d0 = DAT_001f5168;
      local_5c3 = 0;
      local_5ac = 0xc2480000;
      local_5a0 = 0;
      local_330 = 0;
      plStack_98 = (long *)0x0;
      local_a0 = (long *)0x0;
      plStack_a8 = (long *)0x0;
      local_b0 = (long *)0x0;
      plStack_b8 = (long *)0x0;
      local_c0 = (long *)0x0;
      local_63c = uVar23;
      if (lVar20 != 0) {
        plVar16 = (long *)operator_new(0x20);
        lVar18 = param_1[0x14];
        if (lVar18 == 0) {
          plVar22 = (long *)0x0;
        }
        else {
          plVar1 = (long *)(lVar18 + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            plVar22 = local_c0;
          } while (cVar3 != '\0');
        }
        FUN_0044b38c(plVar16,lVar20,lVar18,0);
        local_c0 = plVar16;
        if (plVar22 != (long *)0x0) {
          (**(code **)(*plVar22 + 8))(plVar22);
        }
      }
      if (plStack_b8 != (long *)0x0) {
        lVar20 = *plStack_b8;
        plStack_b8 = plVar15;
        (**(code **)(lVar20 + 0x28))();
        plVar15 = plStack_b8;
      }
      plStack_b8 = plVar15;
      FUN_009a1ab8(&local_718,&local_660,*param_1 + 0x17f8);
      lVar20 = (long)local_718;
      local_718 = (long *)0x0;
      plVar15 = (long *)param_1[0x15];
      param_1[0x15] = lVar20;
      if ((plVar15 != (long *)0x0) && ((**(code **)(*plVar15 + 8))(), local_718 != (long *)0x0)) {
        (**(code **)(*local_718 + 8))();
      }
      uVar6 = (ulong)local_718 >> 0x20;
      local_6eb = 0x1000001;
      local_704 = 0x3f800000;
      local_6bc = DAT_001f5428;
      local_6c8 = 9;
      local_6f0 = 0xff;
      uStack_698 = uVar8;
      local_6a0 = uVar7;
      local_710 = 0;
      local_6b0 = 0x3dcccccd0000000f;
      local_708 = 0;
      local_700 = 0;
      local_6f4 = 0;
      local_6e4 = 0;
      local_6e0 = 1;
      local_6dc = 0;
      local_6d8 = 0;
      local_6d4 = 0;
      local_6d0 = uVar11;
      local_6c4 = 1;
      local_6c0 = 1;
      local_6b4 = 1;
      local_6a8 = 300;
      local_6a4 = 0;
      local_690 = uVar10;
      local_688 = 1;
      local_684 = 0;
      local_680 = 0;
      lStack_674 = lVar9;
      local_67c = lVar17;
      local_66c = lVar12;
      local_6ec = 1;
      local_718 = (long *)CONCAT44((uint)uVar6 & 0xffff0000,48000);
      local_6fc = uVar23;
      (**(code **)(*(long *)param_1[0x15] + 0x30))((long *)param_1[0x15],&local_718);
      pvVar14 = operator_new(0xd8);
      FUN_00471580(pvVar14,*puVar19);
      pvVar21 = (void *)param_1[0x16];
      param_1[0x16] = (long)pvVar14;
      if (pvVar21 != (void *)0x0) {
        FUN_00430410(pvVar21);
        operator_delete(pvVar21);
      }
      plVar15 = (long *)operator_new(0x48);
      FUN_00485a74();
      plVar16 = plVar15 + 8;
      *(int *)plVar16 = 0;
      *plVar15 = (long)&PTR_FUN_00d1bef0;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *(int *)plVar16 = (int)*plVar16 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      local_728 = plVar15;
      FUN_00993548(&local_730);
      lStack_738 = param_1[0x16];
      local_740 = *(undefined8 *)(*param_1 + 0x1810);
      lVar17 = FUN_0042d110(&local_728,&local_730,param_1 + 0x15,&local_720,&lStack_738,puVar19,
                            param_5,&local_740);
      plVar15 = (long *)param_1[0x17];
      param_1[0x17] = lVar17;
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x10))();
      }
      if (local_730 != (long *)0x0) {
        (**(code **)(*local_730 + 8))();
      }
      if (local_728 != (long *)0x0) {
        (**(code **)(*local_728 + 8))();
      }
      FUN_0042db4c(auStack_768,param_4);
      FUN_0042d2f8(param_1,param_3,auStack_768);
      if (local_760 != (void *)0x0) {
        for (; local_758 != local_760; local_758 = (void *)((long)local_758 + -0x18)) {
        }
        local_758 = local_760;
        operator_delete(local_760);
      }
      plVar15 = plStack_98;
      local_660 = puVar13 + 0x10;
      plStack_98 = (long *)0x0;
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 8))();
      }
      plVar15 = local_a0;
      local_a0 = (long *)0x0;
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x20))();
      }
      if (plStack_a8 != (long *)0x0) {
        (**(code **)(*plStack_a8 + 8))();
      }
      plVar15 = local_b0;
      local_b0 = (long *)0x0;
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x28))();
      }
      plVar15 = plStack_b8;
      plStack_b8 = (long *)0x0;
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x28))();
      }
      plVar15 = local_c0;
      local_c0 = (long *)0x0;
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 8))();
      }
      if (*(long *)(lVar5 + 0x28) == local_90) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 0042d110  FUN_0042d110 =====

void * FUN_0042d110(undefined8 *param_1,undefined8 *param_2,long *param_3,undefined8 *param_4,
                   undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  ulong uVar1;
  undefined8 ***__src;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  undefined8 ***__dest;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 **local_a0;
  ulong uStack_98;
  undefined8 local_90;
  long *local_80;
  long *local_78;
  long *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pvVar4 = operator_new(0xfd80);
  local_70 = (long *)*param_1;
  local_78 = (long *)*param_2;
  *param_1 = 0;
  local_80 = (long *)*param_3;
  *param_2 = 0;
  if (local_80 != (long *)0x0) {
    (**(code **)*local_80)();
  }
  uVar5 = *param_4;
  uVar6 = *param_5;
  uVar7 = *param_6;
  if (*(char *)((long)param_7 + 0x17) < '\0') {
    __src = (undefined8 ***)*param_7;
    uVar2 = param_7[1];
    if (uVar2 < 0x17) {
      __dest = &local_a0;
      local_90 = CONCAT17((char)uVar2,(undefined7)local_90);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined8 ***)operator_new(uVar1);
      local_90 = uVar1 | 0x8000000000000000;
      local_a0 = __dest;
      uStack_98 = uVar2;
    }
    if ((__dest <= __src) && (__src < (undefined8 ***)((long)__dest + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar2 + 1);
  }
  else {
    uStack_98 = param_7[1];
    local_a0 = (undefined8 **)*param_7;
    local_90 = param_7[2];
  }
  FUN_00458d20(pvVar4,&local_70,&local_78,&local_80,uVar5,uVar6,uVar7,&local_a0,*param_8);
  if ((long)local_90 < 0) {
    operator_delete(local_a0);
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 8))();
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 8))();
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 8))();
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return pvVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042d2f8  FUN_0042d2f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042d2f8(long *param_1,long *param_2,undefined4 *param_3)

{
  ulong uVar1;
  undefined8 *****__src;
  undefined1 *__src_00;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong uVar11;
  void *pvVar12;
  undefined8 *****__dest;
  undefined1 **__dest_00;
  long *plVar13;
  long lVar14;
  void *pvVar15;
  undefined1 *local_690;
  ulong uStack_688;
  undefined8 local_680;
  undefined8 ****local_670;
  ulong uStack_668;
  undefined8 local_660;
  long *local_650;
  long *local_648;
  long *local_640;
  long *local_638;
  long *local_628;
  undefined4 local_620;
  undefined1 local_61b;
  long local_618;
  undefined1 local_610;
  undefined4 local_60c;
  undefined8 local_604;
  undefined1 local_5fa;
  undefined4 local_5f8;
  undefined1 local_5f4;
  undefined1 local_5f3;
  undefined1 local_5f1;
  undefined4 uStack_5f0;
  undefined4 local_5e8;
  undefined1 local_5e4;
  ulong local_5e0;
  ulong local_5d8;
  undefined4 local_5d0;
  undefined1 local_5cc;
  undefined1 local_5c8;
  undefined4 local_5c0;
  undefined1 local_5bc;
  undefined8 local_5b8;
  undefined4 local_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined1 local_590;
  long local_58c;
  long lStack_584;
  long lStack_57c;
  undefined4 local_574;
  undefined1 local_568;
  undefined1 local_2f8;
  long *local_88;
  long *plStack_80;
  long *local_78;
  long *plStack_70;
  long *local_68;
  long *plStack_60;
  long local_58;
  
  __dest_00 = &local_690;
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((char)param_1[0xd] != '\0') goto LAB_0042dac0;
  *(undefined4 *)(param_1 + 1) = *param_3;
  puVar9 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,param_3,*param_1 + 0x17f8);
  plVar13 = (long *)param_1[0xf];
  param_1[0xf] = (long)puVar9;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0xe0))(plVar13);
    puVar9 = (undefined8 *)param_1[0xf];
  }
  uVar7 = (**(code **)*puVar9)();
  *(undefined4 *)((long)param_1 + 0xc) = uVar7;
  FUN_008421fc(&local_648);
  FUN_00993548(&local_628);
  plVar10 = local_628;
  plVar13 = local_648;
  local_628 = (long *)0x0;
  local_648 = plVar10;
  if ((plVar13 != (long *)0x0) && ((**(code **)(*plVar13 + 8))(), local_628 != (long *)0x0)) {
    (**(code **)(*local_628 + 8))();
  }
  memset(&local_620,0,0x598);
  uVar3 = DAT_001f55d0;
  local_604 = NEON_fmov(0x3f800000,4);
  local_620 = 32000;
  local_5f1 = 0;
  uStack_5f0 = CONCAT31(uStack_5f0._1_3_,1);
  plVar13 = (long *)(PTR_DAT_00d51b38 + 0x10);
  local_5f8 = 0xff;
  local_61b = 0;
  local_60c = 0x3f800000;
  local_618 = 0;
  local_5d0 = 9;
  local_610 = 0;
  uStack_5a0 = _UNK_001f48c8;
  local_5a8 = _DAT_001f48c0;
  local_5b8 = 0x3dcccccd0000000f;
  local_5f3 = 1;
  local_5b0 = 300;
  local_5e8 = 1;
  local_5c0 = 0x46;
  local_5e0 = local_5e0 & 0xffffffffffffff00;
  local_5d8 = DAT_001f55d0;
  local_598 = DAT_001f5168;
  local_5cc = 1;
  local_5c8 = 1;
  lStack_57c = _UNK_001f4ac8;
  lStack_584 = _DAT_001f4ac0;
  local_574 = 0xc2480000;
  local_5bc = 1;
  local_590 = 1;
  local_58c._0_2_ = (ushort)(byte)local_58c;
  local_568 = 0;
  local_2f8 = 0;
  plStack_60 = (long *)0x0;
  local_68 = (long *)0x0;
  plStack_70 = (long *)0x0;
  local_78 = (long *)0x0;
  plStack_80 = (long *)0x0;
  local_88 = (long *)0x0;
  local_628 = plVar13;
  FUN_009a1ab8(&local_650,&local_628,*param_1 + 0x17f8);
  plVar10 = local_640;
  local_640 = local_650;
  local_650 = (long *)0x0;
  if ((plVar10 != (long *)0x0) && ((**(code **)(*plVar10 + 8))(), local_650 != (long *)0x0)) {
    (**(code **)(*local_650 + 8))();
  }
  plVar10 = plStack_60;
  plStack_60 = (long *)0x0;
  local_628 = plVar13;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))();
  }
  plVar13 = local_68;
  local_68 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x20))();
  }
  if (plStack_70 != (long *)0x0) {
    (**(code **)(*plStack_70 + 8))();
  }
  plVar13 = local_78;
  local_78 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x28))();
  }
  plVar13 = plStack_80;
  plStack_80 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x28))();
  }
  plVar13 = local_88;
  local_88 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  (**(code **)(*(long *)param_1[0xf] + 0x40))(&local_628);
  plVar10 = local_628;
  plVar13 = local_638;
  local_628 = (long *)0x0;
  local_638 = plVar10;
  if ((plVar13 != (long *)0x0) && ((**(code **)(*plVar13 + 8))(), local_628 != (long *)0x0)) {
    (**(code **)(*local_628 + 8))();
  }
  FUN_005d543c(&local_628,&local_648);
  plVar13 = local_628;
  local_628 = (long *)0x0;
  plVar10 = (long *)param_1[0x10];
  param_1[0x10] = (long)plVar13;
  if ((plVar10 != (long *)0x0) && ((**(code **)(*plVar10 + 8))(), local_628 != (long *)0x0)) {
    (**(code **)(*local_628 + 8))();
  }
  uVar11 = FUN_00417e08();
  if ((uVar11 & 1) == 0) {
    FUN_00486064(&local_628,(int)param_1[1]);
    FUN_00623bb0(&DAT_001f4e90,"../../discord_native_lib/src/media/audio_engine.cpp",0x1769,
                 "Creating audio engine: ",&local_628);
    if (local_618 < 0) {
      operator_delete(local_628);
    }
  }
  (**(code **)(*(long *)param_1[0xf] + 0x68))();
  if ((long *)param_1[0x2d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2d] + 0x68))();
  }
  FUN_0042044c(&local_628,*(undefined1 *)((long)param_1 + 100));
  plVar13 = local_628;
  local_628 = (long *)0x0;
  plVar10 = (long *)param_1[0x11];
  param_1[0x11] = (long)plVar13;
  if ((plVar10 != (long *)0x0) && ((**(code **)(*plVar10 + 8))(), local_628 != (long *)0x0)) {
    (**(code **)(*local_628 + 8))();
  }
  FUN_004204d8(&local_628,*(undefined1 *)((long)param_1 + 99));
  plVar13 = local_628;
  local_628 = (long *)0x0;
  plVar10 = (long *)param_1[0x12];
  param_1[0x12] = (long)plVar13;
  if ((plVar10 != (long *)0x0) && ((**(code **)(*plVar10 + 8))(), local_628 != (long *)0x0)) {
    (**(code **)(*local_628 + 8))();
  }
  pvVar12 = operator_new(0x38);
  FUN_004a2268();
  pvVar15 = (void *)param_1[0x1a];
  param_1[0x1a] = (long)pvVar12;
  if (pvVar15 != (void *)0x0) {
    FUN_004a2288(pvVar15);
    operator_delete(pvVar15);
    pvVar12 = (void *)param_1[0x1a];
  }
  FUN_004011e4(pvVar12,param_1[0xf],param_1[0x17]);
  if (param_1[0x2d] != 0) {
    pvVar12 = operator_new(0x38);
    FUN_004a2268();
    pvVar15 = (void *)param_1[0x2e];
    param_1[0x2e] = (long)pvVar12;
    if (pvVar15 != (void *)0x0) {
      FUN_004a2288(pvVar15);
      operator_delete(pvVar15);
    }
    (**(code **)(*(long *)param_1[0x2d] + 0xc0))(0x3f800000);
    FUN_004011e4(param_1[0x2e],param_1[0x2d],param_1[0x17]);
    FUN_004015d8(param_1[0x2e],1);
  }
  plVar13 = (long *)*param_1;
  *(undefined1 *)(param_1 + 0xd) = 1;
  FUN_005467a4(plVar13 + 0x41);
  if ((char)plVar13[0x4a] == '\0') {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
               "this->has_value()","optional operator-> called on a disengaged value");
  }
  local_628 = plVar13;
  FUN_007b6160(plVar13 + 0x46,&local_628,FUN_0043012c);
  FUN_005467c8(plVar13 + 0x41);
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    __src = (undefined8 *****)param_1[2];
    uVar11 = param_1[3];
    if (uVar11 < 0x17) {
      __dest = &local_670;
      local_660 = CONCAT17((char)uVar11,(undefined7)local_660);
    }
    else {
      if (0x7fffffffffffffef < uVar11) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar11 | 0xf) + 1;
      __dest = (undefined8 *****)operator_new(uVar1);
      local_660 = uVar1 | 0x8000000000000000;
      local_670 = __dest;
      uStack_668 = uVar11;
    }
    if ((__dest <= __src) && (__src < (undefined8 *****)((long)__dest + uVar11 + 1)))
    goto LAB_0042db18;
    memmove(__dest,__src,uVar11 + 1);
  }
  else {
    uStack_668 = param_1[3];
    local_670 = (undefined8 ****)param_1[2];
    local_660 = param_1[4];
  }
  FUN_0042e4b4(param_1,&local_670);
  if ((long)local_660 < 0) {
    operator_delete(local_670);
    if (-1 < *(char *)((long)param_1 + 0x3f)) goto LAB_0042d898;
LAB_0042d8c0:
    __src_00 = (undefined1 *)param_1[5];
    uVar11 = param_1[6];
    if (uVar11 < 0x17) {
      local_680 = CONCAT17((char)uVar11,(undefined7)local_680);
    }
    else {
      if (0x7fffffffffffffef < uVar11) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar11 | 0xf) + 1;
      __dest_00 = (undefined1 **)operator_new(uVar1);
      local_680 = uVar1 | 0x8000000000000000;
      local_690 = (undefined1 *)__dest_00;
      uStack_688 = uVar11;
    }
    if ((__dest_00 <= __src_00) && (__src_00 < (undefined1 *)((long)__dest_00 + uVar11 + 1))) {
LAB_0042db18:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest_00,__src_00,uVar11 + 1);
  }
  else {
    if (*(char *)((long)param_1 + 0x3f) < '\0') goto LAB_0042d8c0;
LAB_0042d898:
    uStack_688 = param_1[6];
    local_690 = (undefined1 *)param_1[5];
    local_680 = param_1[7];
  }
  FUN_0042e754(param_1,&local_690);
  if ((long)local_680 < 0) {
    operator_delete(local_690);
  }
  plVar13 = (long *)param_1[0xf];
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0xa0))(plVar13,(char)param_1[8]);
  }
  if (param_1[0x13] != 0) {
    FUN_0044b32c(param_1[0x13],*(undefined1 *)((long)param_1 + 0x41));
  }
  if ((long *)param_1[0x15] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x15] + 0x108))(&local_628);
    local_5fa = *(undefined1 *)((long)param_1 + 0x41);
    (**(code **)(*(long *)param_1[0x15] + 0x30))((long *)param_1[0x15],&local_628);
    if ((long *)param_1[0x15] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x15] + 0x108))(&local_628);
      uVar4 = local_598;
      lStack_584 = param_1[10];
      local_58c = param_1[9];
      local_5e0 = uVar3;
      bVar5 = *(char *)((long)param_1 + 0x44) != '\0';
      bVar6 = *(char *)((long)param_1 + 0x45) == '\0';
      local_5e4 = bVar6 && bVar5;
      lStack_57c = param_1[0xb];
      local_590 = *(undefined1 *)((long)param_1 + 0x47);
      local_5d8 = CONCAT35(local_5d8._5_3_,0x100000009);
      local_598._6_2_ = SUB82(uVar4,6);
      local_598._0_6_ =
           CONCAT15(*(undefined1 *)((long)param_1 + 0x46),
                    CONCAT14(!bVar6 && bVar5,(undefined4)local_598));
      (**(code **)(*(long *)param_1[0x15] + 0x30))((long *)param_1[0x15],&local_628);
    }
  }
  if (param_1[0x17] != 0) {
    FUN_0045b674(param_1[0x17],(char)param_1[0xc]);
    if (param_1[0x17] != 0) {
      FUN_0045b68c(param_1[0x17],*(undefined1 *)((long)param_1 + 0x61));
    }
  }
  if ((long *)param_1[0x15] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x15] + 0x108))(&local_628);
    local_5f4 = *(undefined1 *)((long)param_1 + 0x62);
    uStack_5f0 = 2;
    (**(code **)(*(long *)param_1[0x15] + 0x30))((long *)param_1[0x15],&local_628);
  }
  for (plVar13 = (long *)param_1[0x1d]; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
    FUN_0040127c(param_1[0x1a],plVar13[2]);
  }
  lVar14 = param_1[0x17];
  uVar8 = (**(code **)(*(long *)param_1[0xf] + 0x48))();
  FUN_0045b8a0(lVar14,uVar8 & 1);
  FUN_0084220c(&local_648);
LAB_0042dac0:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0042db4c  FUN_0042db4c =====

void FUN_0042db4c(undefined4 *param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *__src;
  long lVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  ulong uVar7;
  void *pvVar8;
  undefined8 *__dest;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar5 = *param_2;
  uVar6 = *(undefined2 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *param_1 = uVar5;
  *(undefined2 *)(param_1 + 1) = uVar6;
  uVar7 = *(long *)(param_2 + 4) - *(long *)(param_2 + 2);
  if (uVar7 != 0) {
    if (0xaaaaaaaaaaaaaaa < (ulong)(((long)uVar7 >> 3) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar8 = operator_new(uVar7);
    *(void **)(param_1 + 2) = pvVar8;
    *(void **)(param_1 + 4) = pvVar8;
    *(void **)(param_1 + 6) = (void *)((long)pvVar8 + ((long)uVar7 >> 3) * 8);
    lVar3 = *(long *)(param_2 + 2);
    lVar4 = *(long *)(param_2 + 4);
    if (lVar3 != lVar4) {
      lVar9 = 0;
      do {
        puVar2 = (undefined8 *)(lVar3 + lVar9);
        __dest = (undefined8 *)((long)pvVar8 + lVar9);
        if (*(char *)((long)puVar2 + 0x17) < '\0') {
          __src = (undefined8 *)*puVar2;
          uVar7 = puVar2[1];
          if (uVar7 < 0x17) {
            *(char *)((long)pvVar8 + lVar9 + 0x17) = (char)uVar7;
          }
          else {
            if (0x7fffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            uVar1 = (uVar7 | 0xf) + 1;
            __dest = (undefined8 *)operator_new(uVar1);
            puVar2 = (undefined8 *)((long)pvVar8 + lVar9);
            puVar2[1] = uVar7;
            puVar2[2] = uVar1 | 0x8000000000000000;
            *puVar2 = __dest;
          }
          if ((__dest <= __src) && (__src < (undefined8 *)((long)__dest + uVar7 + 1))) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                       ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range")
            ;
          }
          memmove(__dest,__src,uVar7 + 1);
        }
        else {
          uVar11 = puVar2[1];
          uVar10 = *puVar2;
          __dest[2] = puVar2[2];
          __dest[1] = uVar11;
          *__dest = uVar10;
        }
        lVar9 = lVar9 + 0x18;
      } while (lVar3 + lVar9 != lVar4);
      pvVar8 = (void *)((long)pvVar8 + lVar9);
    }
    *(void **)(param_1 + 4) = pvVar8;
  }
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  return;
}


// ===== 0042dcd8  FUN_0042dcd8 =====

void FUN_0042dcd8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  void *pvVar7;
  long lVar8;
  long local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  FUN_0042dfc4();
  lVar8 = *param_1;
  FUN_005467a4(lVar8 + 0x1b8);
  if (*(char *)(lVar8 + 0x200) == '\0') {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
               "this->has_value()","optional operator-> called on a disengaged value");
  }
  local_40 = lVar8;
  FUN_007b6160(lVar8 + 0x1e0,&local_40,FUN_0043012c);
  FUN_005467c8(lVar8 + 0x1b8);
  pvVar7 = (void *)param_1[0x2f];
  param_1[0x2f] = 0;
  if (pvVar7 != (void *)0x0) {
    FUN_004311dc(pvVar7);
    operator_delete(pvVar7);
  }
  pvVar7 = (void *)param_1[0x2e];
  param_1[0x2e] = 0;
  if (pvVar7 != (void *)0x0) {
    FUN_004a2288(pvVar7);
    operator_delete(pvVar7);
  }
  plVar6 = (long *)param_1[0x2d];
  param_1[0x2d] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0xe0))();
  }
  if ((long *)param_1[0x2c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2c] + 8))();
  }
  plVar6 = (long *)param_1[0x2a];
  param_1[0x2a] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  FUN_00546ab0(param_1 + 0x25);
  puVar5 = (undefined8 *)param_1[0x22];
  while (puVar5 != (undefined8 *)0x0) {
    pvVar7 = (void *)*puVar5;
    operator_delete(puVar5);
    puVar5 = (undefined8 *)pvVar7;
  }
  pvVar7 = (void *)param_1[0x20];
  param_1[0x20] = 0;
  if (pvVar7 != (void *)0x0) {
    operator_delete(pvVar7);
  }
  puVar5 = (undefined8 *)param_1[0x1d];
  while (puVar5 != (undefined8 *)0x0) {
    pvVar7 = (void *)*puVar5;
    operator_delete(puVar5);
    puVar5 = (undefined8 *)pvVar7;
  }
  pvVar7 = (void *)param_1[0x1b];
  param_1[0x1b] = 0;
  if (pvVar7 != (void *)0x0) {
    operator_delete(pvVar7);
  }
  pvVar7 = (void *)param_1[0x1a];
  param_1[0x1a] = 0;
  if (pvVar7 != (void *)0x0) {
    FUN_004a2288(pvVar7);
    operator_delete(pvVar7);
  }
  pvVar7 = (void *)param_1[0x19];
  param_1[0x19] = 0;
  if (pvVar7 != (void *)0x0) {
    FUN_00431770(pvVar7);
    operator_delete(pvVar7);
  }
  pvVar7 = (void *)param_1[0x18];
  param_1[0x18] = 0;
  if (pvVar7 != (void *)0x0) {
    FUN_004311dc(pvVar7);
    operator_delete(pvVar7);
  }
  plVar6 = (long *)param_1[0x17];
  param_1[0x17] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x10))();
  }
  pvVar7 = (void *)param_1[0x16];
  param_1[0x16] = 0;
  if (pvVar7 != (void *)0x0) {
    FUN_00430410(pvVar7);
    operator_delete(pvVar7);
  }
  if ((long *)param_1[0x15] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x15] + 8))();
  }
  plVar6 = (long *)param_1[0x14];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
    }
  }
  if ((long *)param_1[0x12] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x12] + 8))();
  }
  if ((long *)param_1[0x11] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x11] + 8))();
  }
  if ((long *)param_1[0x10] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x10] + 8))();
  }
  plVar6 = (long *)param_1[0xf];
  param_1[0xf] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0xe0))();
  }
  if ((long *)param_1[0xe] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xe] + 8))();
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
    cVar2 = *(char *)((long)param_1 + 0x27);
  }
  else {
    cVar2 = *(char *)((long)param_1 + 0x27);
  }
  if (cVar2 < '\0') {
    operator_delete((void *)param_1[2]);
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0042dfc4  FUN_0042dfc4 =====

void FUN_0042dfc4(long *param_1)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((char)param_1[0xd] == '\0') {
LAB_0042e1a4:
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  pvVar3 = (void *)param_1[0x18];
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0x18] = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_004311dc(pvVar3);
    operator_delete(pvVar3);
  }
  pvVar3 = (void *)param_1[0x19];
  param_1[0x19] = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_00431770(pvVar3);
    operator_delete(pvVar3);
  }
  pvVar3 = (void *)param_1[0x2f];
  param_1[0x2f] = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_004311dc(pvVar3);
    operator_delete(pvVar3);
  }
  FUN_0042ebc0(param_1,0);
  if ((long *)param_1[0xf] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xf] + 0x98))();
    plVar2 = (long *)param_1[0xf];
    param_1[0xf] = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0xe0))();
    }
  }
  if (param_1[0x1a] != 0) {
    FUN_00401364();
    pvVar3 = (void *)param_1[0x1a];
    param_1[0x1a] = 0;
    if (pvVar3 != (void *)0x0) {
      FUN_004a2288(pvVar3);
      operator_delete(pvVar3);
    }
  }
  if ((long *)param_1[0x2d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2d] + 0x98))();
    plVar2 = (long *)param_1[0x2d];
    param_1[0x2d] = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0xe0))();
    }
  }
  if (param_1[0x2e] != 0) {
    FUN_00401364();
    pvVar3 = (void *)param_1[0x2e];
    param_1[0x2e] = 0;
    if (pvVar3 != (void *)0x0) {
      FUN_004a2288(pvVar3);
      operator_delete(pvVar3);
    }
  }
  lVar4 = *param_1;
  FUN_005467a4(lVar4 + 0x78);
  if (*(char *)(lVar4 + 0xc0) != '\0') {
    local_40 = lVar4;
    FUN_007b6160(lVar4 + 0xa0,&local_40,FUN_00430140);
    FUN_005467c8(lVar4 + 0x78);
    lVar4 = *param_1;
    FUN_005467a4(lVar4 + 200);
    if (*(char *)(lVar4 + 0x110) != '\0') {
      local_40 = lVar4;
      FUN_007b6160(lVar4 + 0xf0,&local_40,FUN_00430140);
      FUN_005467c8(lVar4 + 200);
      lVar4 = *param_1;
      FUN_005467a4(lVar4 + 600);
      if (*(char *)(lVar4 + 0x2a0) != '\0') {
        local_40 = lVar4;
        FUN_007b6160(lVar4 + 0x280,&local_40,FUN_0043012c);
        FUN_005467c8(lVar4 + 600);
        goto LAB_0042e1a4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
             "this->has_value()","optional operator-> called on a disengaged value");
}


// ===== 0042e1f4  FUN_0042e1f4 =====

void FUN_0042e1f4(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x78);
  if (plVar2 != (long *)0x0) {
    local_40 = param_2[2];
    local_38 = param_2[3];
    uStack_48 = param_2[1];
    local_50 = *param_2;
    if (*(long *)(local_38 + 8) != 0) {
      param_2[2] = FUN_00419a50;
      param_2[3] = &DAT_001f1910;
    }
    (**(code **)(*plVar2 + 0x60))(plVar2,&local_50);
    if (*(code **)(local_38 + 8) != (code *)0x0) {
      (**(code **)(local_38 + 8))(local_50);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042e290  FUN_0042e290 =====

void FUN_0042e290(long param_1,long param_2)

{
  long lVar1;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_2;
  if (param_2 != 0) {
    FUN_00401ae0(param_1 + 0xd8,&local_30,&local_30);
    if (*(long *)(param_1 + 0xd0) != 0) {
      FUN_0040127c(*(long *)(param_1 + 0xd0),local_30);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042e2fc  FUN_0042e2fc =====

void FUN_0042e2fc(long param_1,long param_2)

{
  long lVar1;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_2;
  if (param_2 != 0) {
    FUN_00401f14(param_1 + 0xd8,&local_30);
    if (*(long *)(param_1 + 0xd0) != 0) {
      FUN_004012f4(*(long *)(param_1 + 0xd0),local_30);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042e364  FUN_0042e364 =====

void FUN_0042e364(long param_1)

{
  if (*(long *)(param_1 + 0xd0) != 0) {
    FUN_00401488();
    return;
  }
  return;
}


// ===== 0042e374  FUN_0042e374 =====

void FUN_0042e374(long param_1)

{
  if (*(long *)(param_1 + 0xd0) != 0) {
    FUN_00401598();
    return;
  }
  return;
}


// ===== 0042e384  FUN_0042e384 =====

void FUN_0042e384(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_2 + 0x78);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0042e39c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2 + 0x10);
    return;
  }
  param_1[0x1e] = 0;
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
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}


// ===== 0042e3cc  FUN_0042e3cc =====

void FUN_0042e3cc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_2 + 0x78);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0042e3e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))(plVar1,param_2 + 0x28);
    return;
  }
  param_1[0x1e] = 0;
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
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}


// ===== 0042e414  FUN_0042e414 =====

void FUN_0042e414(long param_1)

{
  FUN_00485ab8(*(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x138));
  return;
}


// ===== 0042e420  FUN_0042e420 =====

void FUN_0042e420(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = param_2[2];
  local_38 = param_2[3];
  uStack_48 = param_2[1];
  local_50 = *param_2;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x138);
  if (*(long *)(local_38 + 8) != 0) {
    param_2[2] = FUN_0041a0c4;
    param_2[3] = &DAT_001f1910;
  }
  FUN_00485b20(uVar2,&local_50);
  if (*(code **)(local_38 + 8) != (code *)0x0) {
    (**(code **)(local_38 + 8))(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042e4b4  FUN_0042e4b4 =====

void FUN_0042e4b4(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  long local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00417e08();
  if ((uVar3 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4eff,"../../discord_native_lib/src/media/audio_engine.cpp",0x881,
                 "Setting audio input device: \'",param_2,&DAT_001c1d3e);
  }
  pvVar5 = (void *)param_1[0x18];
  param_1[0x18] = 0;
  if (pvVar5 != (void *)0x0) {
    FUN_004311dc(pvVar5);
    operator_delete(pvVar5);
  }
  plVar1 = param_1 + 2;
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    operator_delete((void *)*plVar1);
  }
  lVar6 = param_2[1];
  lVar4 = *param_2;
  param_1[4] = param_2[2];
  param_1[3] = lVar6;
  *plVar1 = lVar4;
  *(undefined1 *)((long)param_2 + 0x17) = 0;
  *(undefined1 *)param_2 = 0;
  if ((char)param_1[0xd] != '\0') {
    lVar4 = FUN_0042e614(plVar1,param_1[0xf],*param_1);
    pvVar5 = (void *)param_1[0x18];
    param_1[0x18] = lVar4;
    if (pvVar5 != (void *)0x0) {
      FUN_004311dc(pvVar5);
      operator_delete(pvVar5);
    }
    lVar4 = *param_1;
    FUN_005467a4(lVar4 + 0x78);
    if (*(char *)(lVar4 + 0xc0) == '\0') {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
                 "this->has_value()","optional operator-> called on a disengaged value");
    }
    local_40 = lVar4;
    FUN_007b6160(lVar4 + 0xa0,&local_40,FUN_00430140);
    FUN_005467c8(lVar4 + 0x78);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042e614  FUN_0042e614 =====

void * FUN_0042e614(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined1 *__src;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  undefined1 **__dest;
  undefined1 *local_70;
  ulong uStack_68;
  undefined8 local_60;
  long local_58;
  
  __dest = &local_70;
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  pvVar4 = operator_new(0x40);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __src = (undefined1 *)*param_1;
    uVar2 = param_1[1];
    if (uVar2 < 0x17) {
      local_60 = CONCAT17((char)uVar2,(undefined7)local_60);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined1 **)operator_new(uVar1);
      local_60 = uVar1 | 0x8000000000000000;
      local_70 = (undefined1 *)__dest;
      uStack_68 = uVar2;
    }
    if ((__dest <= __src) && (__src < (undefined1 *)((long)__dest + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar2 + 1);
  }
  else {
    uStack_68 = param_1[1];
    local_70 = (undefined1 *)*param_1;
    local_60 = param_1[2];
  }
  FUN_00430f54(pvVar4,&local_70,param_2,param_3);
  if ((long)local_60 < 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return pvVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042e754  FUN_0042e754 =====

void FUN_0042e754(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  long local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00417e08();
  if ((uVar3 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4eff,"../../discord_native_lib/src/media/audio_engine.cpp",0x909,
                 "Setting audio output device: \'",param_2,&DAT_001c1d3e);
  }
  pvVar5 = (void *)param_1[0x19];
  param_1[0x19] = 0;
  if (pvVar5 != (void *)0x0) {
    FUN_00431770(pvVar5);
    operator_delete(pvVar5);
  }
  plVar1 = param_1 + 5;
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)*plVar1);
  }
  lVar6 = param_2[1];
  lVar4 = *param_2;
  param_1[7] = param_2[2];
  param_1[6] = lVar6;
  *plVar1 = lVar4;
  *(undefined1 *)((long)param_2 + 0x17) = 0;
  *(undefined1 *)param_2 = 0;
  if ((char)param_1[0xd] != '\0') {
    lVar4 = FUN_0042e8b4(plVar1,param_1[0xf],*param_1);
    pvVar5 = (void *)param_1[0x19];
    param_1[0x19] = lVar4;
    if (pvVar5 != (void *)0x0) {
      FUN_00431770(pvVar5);
      operator_delete(pvVar5);
    }
    lVar4 = *param_1;
    FUN_005467a4(lVar4 + 200);
    if (*(char *)(lVar4 + 0x110) == '\0') {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
                 "this->has_value()","optional operator-> called on a disengaged value");
    }
    local_40 = lVar4;
    FUN_007b6160(lVar4 + 0xf0,&local_40,FUN_00430140);
    FUN_005467c8(lVar4 + 200);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042e8b4  FUN_0042e8b4 =====

void * FUN_0042e8b4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined1 *__src;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  undefined1 **__dest;
  undefined1 *local_70;
  ulong uStack_68;
  undefined8 local_60;
  long local_58;
  
  __dest = &local_70;
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  pvVar4 = operator_new(0x28);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __src = (undefined1 *)*param_1;
    uVar2 = param_1[1];
    if (uVar2 < 0x17) {
      local_60 = CONCAT17((char)uVar2,(undefined7)local_60);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined1 **)operator_new(uVar1);
      local_60 = uVar1 | 0x8000000000000000;
      local_70 = (undefined1 *)__dest;
      uStack_68 = uVar2;
    }
    if ((__dest <= __src) && (__src < (undefined1 *)((long)__dest + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar2 + 1);
  }
  else {
    uStack_68 = param_1[1];
    local_70 = (undefined1 *)*param_1;
    local_60 = param_1[2];
  }
  FUN_004315fc(pvVar4,&local_70,param_2,param_3);
  if ((long)local_60 < 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return pvVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042e9f4  FUN_0042e9f4 =====

void FUN_0042e9f4(long *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  void *pvVar6;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1[0x2d] == 0) {
    uVar2 = FUN_004022fc();
    if ((uVar2 & 1) == 0) {
      if (*(long *)(lVar1 + 0x28) == local_38) {
        pcVar5 = "Go live audio is not supported";
        uVar4 = 0x9f2;
LAB_0042eb80:
        FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/audio_engine.cpp",uVar4,
                     pcVar5);
        return;
      }
      goto LAB_0042ebbc;
    }
  }
  else {
    uVar2 = FUN_00417e08();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4eff,"../../discord_native_lib/src/media/audio_engine.cpp",0xa09,
                   "Setting go live audio input device: \'",param_2,&DAT_001c1d3e);
    }
    pvVar6 = (void *)param_1[0x2f];
    param_1[0x2f] = 0;
    if (pvVar6 != (void *)0x0) {
      FUN_004311dc(pvVar6);
      operator_delete(pvVar6);
    }
    FUN_0042ebc0(param_1,0);
    if ((char)param_1[0xd] == '\0') {
      uVar2 = FUN_004249b0();
      if ((uVar2 & 1) == 0) {
        if (*(long *)(lVar1 + 0x28) == local_38) {
          pcVar5 = "Audio engine was not acquired at GoLive input creation time";
          uVar4 = 0xa4b;
          goto LAB_0042eb80;
        }
        goto LAB_0042ebbc;
      }
    }
    else {
      lVar3 = FUN_0042e614(param_2,param_1[0x2d],*param_1);
      pvVar6 = (void *)param_1[0x2f];
      param_1[0x2f] = lVar3;
      if (pvVar6 != (void *)0x0) {
        FUN_004311dc(pvVar6);
        operator_delete(pvVar6);
      }
      lVar3 = *param_1;
      FUN_005467a4(lVar3 + 0x78);
      if (*(char *)(lVar3 + 0xc0) == '\0') {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
                   "this->has_value()","optional operator-> called on a disengaged value");
      }
      local_40 = lVar3;
      FUN_007b6160(lVar3 + 0xa0,&local_40,FUN_00430140);
      FUN_005467c8(lVar3 + 0x78);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_0042ebbc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042ebc0  FUN_0042ebc0 =====

void FUN_0042ebc0(long param_1,byte param_2)

{
  char cVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  FUN_005467a4(param_1 + 0x128);
  cVar1 = *(char *)(param_1 + 0x159);
  cVar2 = *(char *)(param_1 + 0x158);
  *(byte *)(param_1 + 0x158) = param_2;
  if (*(long *)(param_1 + 0x150) != 0) {
    if ((((param_2 | cVar1 != '\0') ^ (cVar2 != '\0' || cVar1 != '\0')) & 1) != 0) {
      uVar3 = FUN_00417e08();
      if ((param_2 & 1) == 0 && cVar1 == '\0') {
        if ((uVar3 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/audio_engine.cpp",0x1d71,
                       "Resuming soundshare capture: game audio path released");
        }
        uVar4 = *(undefined8 *)(param_1 + 0xb8);
      }
      else {
        if ((uVar3 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/audio_engine.cpp",0x1d51,
                       "Suspending soundshare capture: another source owns game audio");
        }
        uVar4 = 0;
      }
      FUN_004d71b4(*(undefined8 *)(param_1 + 0x150),uVar4);
    }
  }
  FUN_005467c8(param_1 + 0x128);
  return;
}


// ===== 0042ec90  FUN_0042ec90 =====

void FUN_0042ec90(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x178);
  *(undefined8 *)(param_1 + 0x178) = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_004311dc(pvVar1);
    operator_delete(pvVar1);
  }
  FUN_0042ebc0(param_1,0);
  return;
}


// ===== 0042ecd0  FUN_0042ecd0 =====

void FUN_0042ecd0(long param_1,byte param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x78);
  *(byte *)(param_1 + 0x40) = param_2;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0042ecec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xa0))(plVar1,param_2 & 1);
    return;
  }
  return;
}


// ===== 0042ecf4  FUN_0042ecf4 =====

void FUN_0042ecf4(long param_1,byte param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_e0 [46];
  undefined1 local_b2;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(byte *)(param_1 + 0x41) = param_2;
  *(undefined1 *)(param_1 + 0x42) = param_3;
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_0044b32c(*(long *)(param_1 + 0x98),param_2 & 1);
  }
  if (*(long **)(param_1 + 0xa8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xa8) + 0x108))(auStack_e0);
    local_b2 = *(undefined1 *)(param_1 + 0x41);
    (**(code **)(**(long **)(param_1 + 0xa8) + 0x30))(*(long **)(param_1 + 0xa8),auStack_e0);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042ed84  FUN_0042ed84 =====

void FUN_0042ed84(long param_1,byte param_2)

{
  long lVar1;
  undefined1 auStack_358 [46];
  undefined1 local_32a;
  undefined1 auStack_2a0 [112];
  byte local_230;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_0044b358(auStack_2a0);
    local_230 = param_2 & 1;
    FUN_0044b2f8(*(undefined8 *)(param_1 + 0x98),auStack_2a0);
    if (*(char *)(param_1 + 0x41) != '\0') {
      FUN_0044b32c(*(undefined8 *)(param_1 + 0x98),0);
      (**(code **)(**(long **)(param_1 + 0xa8) + 0x108))(auStack_358);
      local_32a = 0;
      (**(code **)(**(long **)(param_1 + 0xa8) + 0x30))(*(long **)(param_1 + 0xa8),auStack_358);
      FUN_0044b32c(*(undefined8 *)(param_1 + 0x98),1);
      local_32a = 1;
      (**(code **)(**(long **)(param_1 + 0xa8) + 0x30))(*(long **)(param_1 + 0xa8),auStack_358);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042ee5c  FUN_0042ee5c =====

void FUN_0042ee5c(long param_1,undefined1 param_2)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  undefined1 auStack_f0 [68];
  undefined1 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_58;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined8 local_44;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined1 *)(param_1 + 0x44) = param_2;
  if (*(long **)(param_1 + 0xa8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xa8) + 0x108))(auStack_f0);
    bVar2 = *(char *)(param_1 + 0x44) != '\0';
    bVar3 = *(char *)(param_1 + 0x45) != '\0';
    local_a0 = 9;
    local_9c = 1;
    local_5c = bVar3 && bVar2;
    local_a8 = DAT_001f55d0;
    uStack_4c = *(undefined8 *)(param_1 + 0x50);
    local_54 = *(undefined8 *)(param_1 + 0x48);
    local_ac = !bVar3 && bVar2;
    local_5b = *(undefined1 *)(param_1 + 0x46);
    local_58 = *(undefined1 *)(param_1 + 0x47);
    local_44 = *(undefined8 *)(param_1 + 0x58);
    (**(code **)(**(long **)(param_1 + 0xa8) + 0x30))(*(long **)(param_1 + 0xa8),auStack_f0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042ef3c  FUN_0042ef3c =====

void FUN_0042ef3c(long param_1,undefined8 *param_2)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_f0 [68];
  undefined1 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_58;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined8 local_44;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar5 = param_2[1];
  uVar4 = *param_2;
  uVar6 = *(undefined8 *)((long)param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)((long)param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x50) = uVar6;
  *(undefined8 *)(param_1 + 0x4c) = uVar5;
  *(undefined8 *)(param_1 + 0x44) = uVar4;
  if (*(long **)(param_1 + 0xa8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xa8) + 0x108))(auStack_f0);
    bVar2 = *(char *)(param_1 + 0x44) != '\0';
    bVar3 = *(char *)(param_1 + 0x45) != '\0';
    local_a0 = 9;
    local_9c = 1;
    local_5c = bVar3 && bVar2;
    local_a8 = DAT_001f55d0;
    uStack_4c = *(undefined8 *)(param_1 + 0x50);
    local_54 = *(undefined8 *)(param_1 + 0x48);
    local_ac = !bVar3 && bVar2;
    local_5b = *(undefined1 *)(param_1 + 0x46);
    local_58 = *(undefined1 *)(param_1 + 0x47);
    local_44 = *(undefined8 *)(param_1 + 0x58);
    (**(code **)(**(long **)(param_1 + 0xa8) + 0x30))(*(long **)(param_1 + 0xa8),auStack_f0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042f028  FUN_0042f028 =====

void FUN_0042f028(void)

{
  return;
}


// ===== 0042f02c  FUN_0042f02c =====

void FUN_0042f02c(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x60) = param_2;
  if (*(long *)(param_1 + 0xb8) != 0) {
    FUN_0045b674(*(long *)(param_1 + 0xb8),param_2 & 1);
    return;
  }
  return;
}


// ===== 0042f048  FUN_0042f048 =====

void FUN_0042f048(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x61) = param_2;
  if (*(long *)(param_1 + 0xb8) != 0) {
    FUN_0045b68c(*(long *)(param_1 + 0xb8),param_2 & 1);
    return;
  }
  return;
}


// ===== 0042f064  FUN_0042f064 =====

void FUN_0042f064(long param_1)

{
  if (*(long *)(param_1 + 0xb8) != 0) {
    FUN_0045b694();
    return;
  }
  return;
}


// ===== 0042f074  FUN_0042f074 =====

void FUN_0042f074(long param_1,uint param_2)

{
  if (*(long *)(param_1 + 0xb8) != 0) {
    FUN_0045b67c(*(long *)(param_1 + 0xb8),param_2 & 1);
    return;
  }
  return;
}


// ===== 0042f088  FUN_0042f088 =====

void FUN_0042f088(long param_1,uint param_2)

{
  if (*(long *)(param_1 + 0xb8) != 0) {
    FUN_0045b684(*(long *)(param_1 + 0xb8),param_2 & 1);
    return;
  }
  return;
}


// ===== 0042f09c  FUN_0042f09c =====

void FUN_0042f09c(long param_1,undefined1 param_2)

{
  long lVar1;
  undefined1 auStack_e0 [52];
  undefined1 local_ac;
  undefined4 local_a8;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(undefined1 *)(param_1 + 0x62) = param_2;
  if (*(long **)(param_1 + 0xa8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xa8) + 0x108))(auStack_e0);
    local_ac = *(undefined1 *)(param_1 + 0x62);
    local_a8 = 2;
    (**(code **)(**(long **)(param_1 + 0xa8) + 0x30))(*(long **)(param_1 + 0xa8),auStack_e0);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042f120  FUN_0042f120 =====

void FUN_0042f120(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_40 = param_2;
  FUN_004308a8(param_1 + 0x20,&local_40,&local_40);
  lVar6 = param_1[0x23];
  if ((param_1[0x18] != 0) && (lVar6 != 0)) {
    iVar3 = FUN_005183d8();
    FUN_0043128c(param_1[0x18]);
    iVar4 = FUN_005183d8();
    FUN_00450618(*param_1,param_1 + 2,iVar4 - iVar3);
    lVar6 = param_1[0x23];
  }
  if ((param_1[0x2f] != 0) && (lVar6 != 0)) {
    FUN_0043128c();
    FUN_005467a4(param_1 + 0x25);
    cVar1 = *(char *)(param_1 + 0x2b);
    *(undefined1 *)(param_1 + 0x2b) = 1;
    if ((cVar1 == '\0') && ((*(char *)((long)param_1 + 0x159) == '\0' && (param_1[0x2a] != 0)))) {
      uVar5 = FUN_00417e08();
      if ((uVar5 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/audio_engine.cpp",0x1d51,
                     "Suspending soundshare capture: another source owns game audio");
      }
      FUN_004d71b4(param_1[0x2a],0);
    }
    FUN_005467c8(param_1 + 0x25);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042f234  FUN_0042f234 =====

void FUN_0042f234(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_2;
  FUN_00430cdc(param_1 + 0x100,&local_30);
  lVar2 = *(long *)(param_1 + 0x118);
  if ((*(long *)(param_1 + 0xc0) != 0) && (lVar2 == 0)) {
    FUN_004312a0();
    lVar2 = *(long *)(param_1 + 0x118);
  }
  if ((*(long *)(param_1 + 0x178) != 0) && (lVar2 == 0)) {
    FUN_004312a0();
    FUN_0042ebc0(param_1,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042f2bc  FUN_0042f2bc =====

undefined8 FUN_0042f2bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_e8 [176];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_0042f4d0(auStack_e8,param_3);
  uVar2 = FUN_0042f344(param_1,param_2,auStack_e8,param_4,0);
  FUN_008420e8(auStack_e8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042f344  FUN_0042f344 =====

long * FUN_0042f344(long param_1,long *param_2,long param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  undefined1 *__src;
  ulong uVar2;
  long lVar3;
  undefined1 **__dest;
  long *plVar4;
  undefined1 *local_80;
  ulong uStack_78;
  undefined8 local_70;
  long local_68;
  
  __dest = &local_80;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (*(char *)(param_3 + 0x4f) < '\0') {
    __src = *(undefined1 **)(param_3 + 0x38);
    uVar2 = *(ulong *)(param_3 + 0x40);
    if (uVar2 < 0x17) {
      local_70 = CONCAT17((char)uVar2,(undefined7)local_70);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined1 **)operator_new(uVar1);
      local_70 = uVar1 | 0x8000000000000000;
      local_80 = (undefined1 *)__dest;
      uStack_78 = uVar2;
    }
    if ((__dest <= __src) && (__src < (undefined1 *)((long)__dest + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar2 + 1);
  }
  else {
    uStack_78 = *(ulong *)(param_3 + 0x40);
    local_80 = *(undefined1 **)(param_3 + 0x38);
    local_70 = *(ulong *)(param_3 + 0x48);
  }
  plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,param_3);
  if ((param_4 & 1) == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if ((param_5 & 1) == 0) {
    FUN_0045ad2c(*(undefined8 *)(param_1 + 0xb8),plVar4);
  }
  else {
    FUN_0045aecc();
  }
  FUN_00472a48(*(undefined8 *)(param_1 + 0xb0),param_2,&local_80,plVar4);
  if ((long)local_70 < 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return plVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042f4d0  FUN_0042f4d0 =====

void FUN_0042f4d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  ulong uVar9;
  undefined2 *puVar10;
  undefined8 *puVar11;
  undefined2 *puVar12;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined2 *puVar13;
  
  uVar20 = param_2[2];
  uVar19 = param_2[5];
  uVar18 = param_2[4];
  uVar2 = *(undefined4 *)(param_2 + 6);
  uVar22 = param_2[1];
  uVar21 = *param_2;
  param_1[3] = param_2[3];
  param_1[2] = uVar20;
  param_1[5] = uVar19;
  param_1[4] = uVar18;
  *(undefined4 *)(param_1 + 6) = uVar2;
  puVar7 = param_1 + 7;
  param_1[1] = uVar22;
  *param_1 = uVar21;
  if (*(char *)((long)param_2 + 0x4f) < '\0') {
    puVar11 = (undefined8 *)param_2[7];
    uVar9 = param_2[8];
    if (uVar9 < 0x17) {
      *(char *)((long)param_1 + 0x4f) = (char)uVar9;
    }
    else {
      if (0x7fffffffffffffef < uVar9) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar15 = (uVar9 | 0xf) + 1;
      puVar7 = (undefined8 *)operator_new(uVar15);
      param_1[7] = puVar7;
      param_1[8] = uVar9;
      param_1[9] = uVar15 | 0x8000000000000000;
    }
    if ((puVar7 <= puVar11) && (puVar11 < (undefined8 *)((long)puVar7 + uVar9 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(puVar7,puVar11,uVar9 + 1);
  }
  else {
    uVar19 = param_2[8];
    uVar18 = param_2[7];
    param_1[9] = param_2[9];
    param_1[8] = uVar19;
    *puVar7 = uVar18;
  }
  puVar7 = param_1 + 0xb;
  *puVar7 = 0;
  param_1[10] = puVar7;
  param_1[0xc] = 0;
  plVar16 = (long *)param_2[10];
  while (plVar16 != param_2 + 0xb) {
    FUN_00430154(param_1 + 10,puVar7,plVar16 + 4,plVar16 + 4);
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xc2,
                 "__x != nullptr","node shouldn\'t be null");
    }
    plVar5 = (long *)plVar16[1];
    plVar17 = plVar16;
    if ((long *)plVar16[1] == (long *)0x0) {
      do {
        plVar16 = (long *)plVar17[2];
        bVar6 = (long *)*plVar16 != plVar17;
        plVar17 = plVar16;
      } while (bVar6);
    }
    else {
      do {
        plVar16 = plVar5;
        plVar5 = (long *)*plVar16;
      } while ((long *)*plVar16 != (long *)0x0);
    }
  }
  puVar7 = (undefined8 *)param_2[0xd];
  param_1[0xd] = puVar7;
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)();
  }
  uVar18 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar18;
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  uVar3 = *(undefined1 *)((long)param_2 + 0x84);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined1 *)((long)param_1 + 0x84) = uVar3;
  uVar9 = param_2[0x12] - param_2[0x11];
  if (uVar9 == 0) goto LAB_0042f6e8;
  if ((long)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar8 = (undefined2 *)operator_new(uVar9);
  param_1[0x11] = puVar8;
  param_1[0x12] = puVar8;
  param_1[0x13] = puVar8 + ((long)uVar9 >> 1);
  puVar13 = (undefined2 *)param_2[0x11];
  puVar1 = (undefined2 *)param_2[0x12];
  puVar10 = puVar8;
  if (puVar13 != puVar1) {
    uVar9 = (long)puVar1 + (-2 - (long)puVar13);
    puVar12 = puVar13;
    if ((0x1d < uVar9) && (0x1f < (ulong)((long)puVar8 - (long)puVar13))) {
      puVar7 = (undefined8 *)(puVar8 + 8);
      uVar9 = (uVar9 >> 1) + 1;
      uVar14 = uVar9 & 0xfffffffffffffff0;
      puVar8 = puVar8 + uVar14;
      puVar12 = puVar13 + uVar14;
      puVar11 = (undefined8 *)(puVar13 + 8);
      uVar15 = uVar14;
      do {
        puVar4 = puVar11 + -1;
        uVar18 = puVar11[-2];
        uVar20 = puVar11[1];
        uVar19 = *puVar11;
        puVar11 = puVar11 + 4;
        uVar15 = uVar15 - 0x10;
        puVar7[-1] = *puVar4;
        puVar7[-2] = uVar18;
        puVar7[1] = uVar20;
        *puVar7 = uVar19;
        puVar7 = puVar7 + 4;
      } while (uVar15 != 0);
      puVar10 = puVar8;
      if (uVar9 == uVar14) goto LAB_0042f6e4;
    }
    do {
      puVar13 = puVar12 + 1;
      puVar10 = puVar8 + 1;
      *puVar8 = *puVar12;
      puVar8 = puVar10;
      puVar12 = puVar13;
    } while (puVar13 != puVar1);
  }
LAB_0042f6e4:
  param_1[0x12] = puVar10;
LAB_0042f6e8:
  puVar7 = (undefined8 *)param_2[0x14];
  param_1[0x14] = puVar7;
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)();
  }
  puVar7 = (undefined8 *)param_2[0x15];
  param_1[0x15] = puVar7;
  if (puVar7 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0042f724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar7)();
    return;
  }
  return;
}


// ===== 0042f794  FUN_0042f794 =====

undefined8 FUN_0042f794(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_e8 [176];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_0042f4d0(auStack_e8,param_3);
  uVar2 = FUN_0042f344(param_1,param_2,auStack_e8,param_4,1);
  FUN_008420e8(auStack_e8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042f81c  FUN_0042f81c =====

void FUN_0042f81c(long param_1,long *param_2,long *param_3)

{
  FUN_00472fc0(*(undefined8 *)(param_1 + 0xb0),param_3);
  FUN_0045b09c(*(undefined8 *)(param_1 + 0xb8),param_3);
  (**(code **)(*param_3 + 0x18))(param_3);
                    /* WARNING: Could not recover jumptable at 0x0042f87c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x18))(param_2,param_3);
  return;
}


// ===== 0042f880  FUN_0042f880 =====

undefined8
FUN_0042f880(long param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
            undefined4 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)*param_2)(param_2,param_3);
  FUN_0045a9a4(*(undefined8 *)(param_1 + 0xb8),uVar1,param_4,param_5,param_6);
  return uVar1;
}


// ===== 0042f8ec  FUN_0042f8ec =====

void FUN_0042f8ec(long param_1,long *param_2,long *param_3)

{
  FUN_0045aed8(*(undefined8 *)(param_1 + 0xb8),param_3);
  (**(code **)(*param_3 + 0x30))(param_3);
                    /* WARNING: Could not recover jumptable at 0x0042f934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 8))(param_2,param_3);
  return;
}


// ===== 0042f938  FUN_0042f938 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0042f938(undefined4 param_1,long param_2,undefined8 *param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 *param_6)

{
  ulong uVar1;
  undefined8 *******__src;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *******__dest;
  void *pvVar6;
  undefined8 uVar7;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *******local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 *local_78;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar7 = *(undefined8 *)(param_2 + 0xb8);
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    __src = (undefined8 *******)*param_3;
    uVar2 = param_3[1];
    if (uVar2 < 0x17) {
      __dest = &local_b0;
      local_a0 = CONCAT17((char)uVar2,(undefined7)local_a0);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined8 *******)operator_new(uVar1);
      local_a0 = uVar1 | 0x8000000000000000;
      local_b0 = __dest;
      uStack_a8 = uVar2;
    }
    if ((__dest <= __src) && (__src < (undefined8 *******)((long)__dest + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar2 + 1);
  }
  else {
    uStack_a8 = param_3[1];
    local_b0 = (undefined8 *******)*param_3;
    local_a0 = param_3[2];
  }
  FUN_0042fb14(&local_c8,param_5);
  local_80 = param_6[2];
  local_78 = (undefined8 *)param_6[3];
  uStack_88 = param_6[1];
  local_90 = *param_6;
  if ((code *)*local_78 != (code *)0x0) {
    local_90 = (*(code *)*local_78)(*param_6);
  }
  FUN_0045b160(param_1,uVar7,&local_b0,param_4,&local_c8,&local_90);
  if ((code *)local_78[1] != (code *)0x0) {
    (*(code *)local_78[1])(local_90);
  }
  puVar5 = local_c8;
  if (local_c8 != (undefined8 *)0x0) {
    while (puVar4 = local_c0, puVar4 != puVar5) {
      local_c0 = puVar4 + -3;
      pvVar6 = (void *)*local_c0;
      if (pvVar6 != (void *)0x0) {
        puVar4[-2] = pvVar6;
        operator_delete(pvVar6);
      }
    }
    local_c0 = puVar5;
    operator_delete(local_c8);
  }
  if ((long)local_a0 < 0) {
    operator_delete(local_b0);
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0042fb14  FUN_0042fb14 =====

void FUN_0042fb14(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 *puVar10;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar7 = param_2[1] - *param_2;
  if (uVar7 != 0) {
    if (0xaaaaaaaaaaaaaaa < (ulong)(((long)uVar7 >> 3) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar4 = (undefined8 *)operator_new(uVar7);
    *param_1 = puVar4;
    param_1[1] = puVar4;
    param_1[2] = puVar4 + ((long)uVar7 >> 3);
    plVar1 = (long *)param_2[1];
    for (param_2 = (long *)*param_2; param_2 != plVar1; param_2 = param_2 + 3) {
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
      uVar7 = param_2[1] - *param_2;
      if (uVar7 != 0) {
        if ((long)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        puVar5 = (undefined4 *)operator_new(uVar7);
        *puVar4 = puVar5;
        puVar4[1] = puVar5;
        puVar4[2] = puVar5 + ((long)uVar7 >> 2);
        puVar10 = (undefined4 *)*param_2;
        puVar2 = (undefined4 *)param_2[1];
        puVar6 = puVar5;
        if (puVar10 != puVar2) {
          uVar7 = (long)puVar2 + (-4 - (long)puVar10);
          puVar9 = puVar10;
          if ((0x1b < uVar7) && (0x1f < (ulong)((long)puVar5 - (long)puVar10))) {
            puVar12 = (undefined8 *)(puVar5 + 4);
            uVar7 = (uVar7 >> 2) + 1;
            uVar11 = uVar7 & 0x7ffffffffffffff8;
            puVar5 = puVar5 + uVar11;
            puVar9 = puVar10 + uVar11;
            puVar8 = (undefined8 *)(puVar10 + 4);
            uVar13 = uVar11;
            do {
              puVar3 = puVar8 + -1;
              uVar14 = puVar8[-2];
              uVar16 = puVar8[1];
              uVar15 = *puVar8;
              puVar8 = puVar8 + 4;
              uVar13 = uVar13 - 8;
              puVar12[-1] = *puVar3;
              puVar12[-2] = uVar14;
              puVar12[1] = uVar16;
              *puVar12 = uVar15;
              puVar12 = puVar12 + 4;
            } while (uVar13 != 0);
            puVar6 = puVar5;
            if (uVar7 == uVar11) goto LAB_0042fb8c;
          }
          do {
            puVar10 = puVar9 + 1;
            puVar6 = puVar5 + 1;
            *puVar5 = *puVar9;
            puVar5 = puVar6;
            puVar9 = puVar10;
          } while (puVar10 != puVar2);
        }
LAB_0042fb8c:
        puVar4[1] = puVar6;
      }
      puVar4 = puVar4 + 3;
    }
    param_1[1] = puVar4;
  }
  return;
}


// ===== 0042fc78  FUN_0042fc78 =====

void FUN_0042fc78(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined1 *__src;
  ulong uVar2;
  long lVar3;
  undefined1 **__dest;
  undefined8 uVar4;
  undefined1 *local_60;
  ulong uStack_58;
  undefined8 local_50;
  long local_48;
  
  __dest = &local_60;
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0xb8);
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    __src = (undefined1 *)*param_2;
    uVar2 = param_2[1];
    if (uVar2 < 0x17) {
      local_50 = CONCAT17((char)uVar2,(undefined7)local_50);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined1 **)operator_new(uVar1);
      local_50 = uVar1 | 0x8000000000000000;
      local_60 = (undefined1 *)__dest;
      uStack_58 = uVar2;
    }
    if ((__dest <= __src) && (__src < (undefined1 *)((long)__dest + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar2 + 1);
  }
  else {
    uStack_58 = param_2[1];
    local_60 = (undefined1 *)*param_2;
    local_50 = param_2[2];
  }
  FUN_0045b558(uVar4,&local_60);
  if ((long)local_50 < 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042fd90  FUN_0042fd90 =====

void FUN_0042fd90(long param_1)

{
  FUN_0045b548(*(undefined8 *)(param_1 + 0xb8));
  return;
}


// ===== 0042fd98  FUN_0042fd98 =====

void FUN_0042fd98(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  long *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar4 = *(int *)(param_1 + 0x6c);
  if (iVar4 == 0) {
    FUN_0042044c(&local_30,*(undefined1 *)(param_1 + 100));
    plVar2 = local_30;
    local_30 = (long *)0x0;
    plVar3 = *(long **)(param_1 + 0x88);
    *(long **)(param_1 + 0x88) = plVar2;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
      if (local_30 != (long *)0x0) {
        (**(code **)(*local_30 + 8))();
      }
    }
    FUN_004204d8(&local_30,*(undefined1 *)(param_1 + 99));
    plVar2 = local_30;
    local_30 = (long *)0x0;
    plVar3 = *(long **)(param_1 + 0x90);
    *(long **)(param_1 + 0x90) = plVar2;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
      if (local_30 != (long *)0x0) {
        (**(code **)(*local_30 + 8))();
      }
    }
    iVar4 = *(int *)(param_1 + 0x6c);
  }
  *(int *)(param_1 + 0x6c) = iVar4 + 1;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042fe70  FUN_0042fe70 =====

void FUN_0042fe70(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x6c) + -1;
  *(int *)(param_1 + 0x6c) = iVar1;
  if (iVar1 == 0) {
    if (*(long **)(param_1 + 0x88) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x88) + 8))();
    }
    *(undefined8 *)(param_1 + 0x88) = 0;
    if (*(long **)(param_1 + 0x90) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x90) + 8))();
    }
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  return;
}


// ===== 0042fecc  FUN_0042fecc =====

void FUN_0042fecc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_40;
  undefined8 uStack_38;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_38 = param_3[1];
  local_40 = (void *)*param_3;
  local_30 = param_3[2];
  uVar2 = *(undefined8 *)(param_1 + 0xd0);
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  FUN_004a22f0(uVar2,param_2,&local_40);
  if (local_30 < 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042ff40  FUN_0042ff40 =====

void FUN_0042ff40(long param_1)

{
  FUN_004a22f4(*(undefined8 *)(param_1 + 0xd0));
  return;
}


// ===== 0042ff48  FUN_0042ff48 =====

void FUN_0042ff48(long param_1,byte param_2)

{
  char cVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  FUN_005467a4(param_1 + 0x128);
  cVar1 = *(char *)(param_1 + 0x158);
  cVar2 = *(char *)(param_1 + 0x159);
  *(byte *)(param_1 + 0x159) = param_2;
  if (*(long *)(param_1 + 0x150) != 0) {
    if ((((cVar1 != '\0' | param_2) ^ (cVar1 != '\0' || cVar2 != '\0')) & 1) != 0) {
      uVar3 = FUN_00417e08();
      if (cVar1 != '\0' || (param_2 & 1) != 0) {
        if ((uVar3 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/audio_engine.cpp",0x1d51,
                       "Suspending soundshare capture: another source owns game audio");
        }
        uVar4 = 0;
      }
      else {
        if ((uVar3 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/audio_engine.cpp",0x1d71,
                       "Resuming soundshare capture: game audio path released");
        }
        uVar4 = *(undefined8 *)(param_1 + 0xb8);
      }
      FUN_004d71b4(*(undefined8 *)(param_1 + 0x150),uVar4);
    }
  }
  FUN_005467c8(param_1 + 0x128);
  return;
}


// ===== 00430018  FUN_00430018 =====

undefined8 FUN_00430018(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  FUN_005467a4(param_1 + 0x128);
  if (*(long *)(param_1 + 0x150) == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_00417e08();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/audio_engine.cpp",0x1dc1,
                   "soundshare is moved from AudioEngine to local user");
    }
    FUN_004d7250(*(undefined8 *)(param_1 + 0x150));
    uVar2 = *(undefined8 *)(param_1 + 0x150);
  }
  *(undefined8 *)(param_1 + 0x150) = 0;
  FUN_005467c8(param_1 + 0x128);
  return uVar2;
}


// ===== 0043009c  FUN_0043009c =====

void FUN_0043009c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  
  FUN_005467a4(param_1 + 0x128);
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/audio_engine.cpp",0x1e21,
                 "soundshare is returned from AudioEngine to local user");
  }
  plVar2 = *(long **)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x150) = param_2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_005467c8(param_1 + 0x128);
  return;
}


// ===== 00430114  FUN_00430114 =====

void FUN_00430114(long param_1)

{
  if (*(long **)(param_1 + 0x78) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00430124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x78) + 0x50))();
    return;
  }
  return;
}


// ===== 0043012c  FUN_0043012c =====

void FUN_0043012c(undefined8 *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0043013c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x20))(param_2,*param_1);
  return;
}


// ===== 00430140  FUN_00430140 =====

void FUN_00430140(undefined8 *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00430150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x20))(param_2,*param_1);
  return;
}


// ===== 00430154  FUN_00430154 =====

undefined8 * FUN_00430154(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)FUN_00430234(param_1,param_2,&local_50,auStack_58,param_3);
  puVar5 = (undefined8 *)*puVar2;
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)operator_new(0x68);
    *(undefined4 *)(puVar5 + 4) = *param_4;
    FUN_00667388(puVar5 + 5,param_4 + 2);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = local_50;
    *puVar2 = puVar5;
    puVar4 = puVar5;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      puVar4 = (undefined8 *)*puVar2;
    }
    puVar2 = (undefined8 *)FUN_0041dcd0(param_1[1],puVar4);
    uVar3 = 1;
    param_1[2] = param_1[2] + 1;
  }
  else {
    uVar3 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar2,uVar3);
}


// ===== 00430234  FUN_00430234 =====

long * FUN_00430234(undefined8 *param_1,long *param_2,long *param_3,long *param_4,int *param_5)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar5 = param_1 + 1;
  if (plVar5 != param_2) {
    iVar1 = *param_5;
    if ((int)param_2[4] <= iVar1) {
      if (iVar1 <= (int)param_2[4]) {
        *param_3 = (long)param_2;
        *param_4 = (long)param_2;
        return param_4;
      }
      plVar3 = param_2 + 1;
      plVar7 = (long *)*plVar3;
      plVar8 = param_2;
      plVar6 = plVar7;
      if (plVar7 == (long *)0x0) {
        do {
          plVar4 = (long *)plVar8[2];
          bVar2 = (long *)*plVar4 != plVar8;
          plVar8 = plVar4;
        } while (bVar2);
      }
      else {
        do {
          plVar4 = plVar6;
          plVar6 = (long *)*plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
      if ((plVar4 != plVar5) && ((int)plVar4[4] <= iVar1)) {
        plVar6 = (long *)*plVar5;
        plVar8 = plVar5;
        while (plVar6 != (long *)0x0) {
          while (plVar8 = plVar6, iVar1 < (int)plVar8[4]) {
            plVar5 = plVar8;
            plVar6 = (long *)*plVar8;
            if ((long *)*plVar8 == (long *)0x0) goto LAB_004303cc;
          }
          if (iVar1 <= (int)plVar8[4]) break;
          plVar5 = plVar8 + 1;
          plVar6 = (long *)*plVar5;
        }
LAB_004303cc:
        *param_3 = (long)plVar8;
        return plVar5;
      }
      if (plVar7 != (long *)0x0) {
        *param_3 = (long)plVar4;
        return plVar4;
      }
      goto LAB_00430340;
    }
  }
  if ((long *)*param_1 == param_2) {
    plVar6 = (long *)*param_2;
    plVar8 = param_2;
  }
  else {
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xd1,
                 "__x != nullptr","node shouldn\'t be null");
    }
    plVar6 = (long *)*param_2;
    plVar3 = param_2;
    plVar7 = plVar6;
    if (plVar6 == (long *)0x0) {
      do {
        plVar8 = (long *)plVar3[2];
        bVar2 = (long *)*plVar8 == plVar3;
        plVar3 = plVar8;
      } while (bVar2);
    }
    else {
      do {
        plVar8 = plVar7;
        plVar7 = (long *)plVar8[1];
      } while ((long *)plVar8[1] != (long *)0x0);
    }
    iVar1 = *param_5;
    if (iVar1 <= (int)plVar8[4]) {
      plVar6 = (long *)*plVar5;
      plVar8 = plVar5;
      while (plVar6 != (long *)0x0) {
        while (plVar8 = plVar6, iVar1 < (int)plVar8[4]) {
          plVar5 = plVar8;
          plVar6 = (long *)*plVar8;
          if ((long *)*plVar8 == (long *)0x0) goto LAB_00430330;
        }
        if (iVar1 <= (int)plVar8[4]) break;
        plVar5 = plVar8 + 1;
        plVar6 = (long *)*plVar5;
      }
LAB_00430330:
      *param_3 = (long)plVar8;
      return plVar5;
    }
  }
  plVar3 = param_2;
  if (plVar6 != (long *)0x0) {
    *param_3 = (long)plVar8;
    return plVar8 + 1;
  }
LAB_00430340:
  *param_3 = (long)param_2;
  return plVar3;
}


// ===== 00430410  FUN_00430410 =====

void FUN_00430410(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  puVar1 = (undefined8 *)param_1[0x17];
  while (puVar1 != (undefined8 *)0x0) {
    pvVar2 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = (undefined8 *)pvVar2;
  }
  pvVar2 = (void *)param_1[0x15];
  param_1[0x15] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  puVar1 = (undefined8 *)param_1[0x12];
  while (puVar1 != (undefined8 *)0x0) {
    pvVar2 = (void *)*puVar1;
    if (*(char *)((long)puVar1 + 0x37) < '\0') {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = (undefined8 *)pvVar2;
  }
  pvVar2 = (void *)param_1[0x10];
  param_1[0x10] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  puVar1 = (undefined8 *)param_1[0xd];
  while (puVar1 != (undefined8 *)0x0) {
    pvVar2 = (void *)*puVar1;
    if (*(char *)((long)puVar1 + 0x37) < '\0') {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = (undefined8 *)pvVar2;
  }
  pvVar2 = (void *)param_1[0xb];
  param_1[0xb] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  FUN_00430514(param_1 + 6);
  FUN_00546ab0(param_1 + 1);
  pvVar2 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  FUN_00512bf4(pvVar2);
  operator_delete(pvVar2);
  return;
}


// ===== 00430514  FUN_00430514 =====

void FUN_00430514(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  
  puVar1 = (undefined8 *)param_1[2];
  while (puVar1 != (undefined8 *)0x0) {
    pvVar3 = (void *)*puVar1;
    puVar2 = (undefined8 *)puVar1[5];
    while (puVar2 != (undefined8 *)0x0) {
      pvVar4 = (void *)*puVar2;
      FUN_004305c8(puVar2 + 5);
      if (*(char *)((long)puVar2 + 0x27) < '\0') {
        operator_delete((void *)puVar2[2]);
      }
      operator_delete(puVar2);
      puVar2 = (undefined8 *)pvVar4;
    }
    pvVar4 = (void *)puVar1[3];
    puVar1[3] = 0;
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
    }
    operator_delete(puVar1);
    puVar1 = (undefined8 *)pvVar3;
  }
  pvVar3 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar3 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar3);
  return;
}


// ===== 004305c8  FUN_004305c8 =====

void FUN_004305c8(long param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(param_1 + 0x608);
  if (puVar4 != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_1 + 0x610);
    puVar2 = puVar4;
    if (puVar3 != puVar4) {
      do {
        puVar2 = puVar3 + -3;
        pvVar1 = (void *)*puVar2;
        if (pvVar1 != (void *)0x0) {
          puVar3[-2] = pvVar1;
          operator_delete(pvVar1);
        }
        puVar3 = puVar2;
      } while (puVar2 != puVar4);
      puVar2 = *(undefined8 **)(param_1 + 0x608);
    }
    *(undefined8 **)(param_1 + 0x610) = puVar4;
    operator_delete(puVar2);
  }
  puVar4 = *(undefined8 **)(param_1 + 0x5c8);
  if (puVar4 != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_1 + 0x5d0);
    puVar2 = puVar4;
    if (puVar3 != puVar4) {
      do {
        puVar2 = puVar3 + -3;
        pvVar1 = (void *)*puVar2;
        if (pvVar1 != (void *)0x0) {
          puVar3[-2] = pvVar1;
          operator_delete(pvVar1);
        }
        puVar3 = puVar2;
      } while (puVar2 != puVar4);
      puVar2 = *(undefined8 **)(param_1 + 0x5c8);
    }
    *(undefined8 **)(param_1 + 0x5d0) = puVar4;
    operator_delete(puVar2);
  }
  puVar4 = *(undefined8 **)(param_1 + 0x588);
  if (puVar4 != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_1 + 0x590);
    puVar2 = puVar4;
    if (puVar3 != puVar4) {
      do {
        puVar2 = puVar3 + -3;
        pvVar1 = (void *)*puVar2;
        if (pvVar1 != (void *)0x0) {
          puVar3[-2] = pvVar1;
          operator_delete(pvVar1);
        }
        puVar3 = puVar2;
      } while (puVar2 != puVar4);
      puVar2 = *(undefined8 **)(param_1 + 0x588);
    }
    *(undefined8 **)(param_1 + 0x590) = puVar4;
    operator_delete(puVar2);
  }
  puVar4 = *(undefined8 **)(param_1 + 0x548);
  if (puVar4 != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_1 + 0x550);
    puVar2 = puVar4;
    if (puVar3 != puVar4) {
      do {
        puVar2 = puVar3 + -3;
        pvVar1 = (void *)*puVar2;
        if (pvVar1 != (void *)0x0) {
          puVar3[-2] = pvVar1;
          operator_delete(pvVar1);
        }
        puVar3 = puVar2;
      } while (puVar2 != puVar4);
      puVar2 = *(undefined8 **)(param_1 + 0x548);
    }
    *(undefined8 **)(param_1 + 0x550) = puVar4;
    operator_delete(puVar2);
  }
  puVar4 = *(undefined8 **)(param_1 + 0x508);
  if (puVar4 != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_1 + 0x510);
    puVar2 = puVar4;
    if (puVar3 != puVar4) {
      do {
        puVar2 = puVar3 + -3;
        pvVar1 = (void *)*puVar2;
        if (pvVar1 != (void *)0x0) {
          puVar3[-2] = pvVar1;
          operator_delete(pvVar1);
        }
        puVar3 = puVar2;
      } while (puVar2 != puVar4);
      puVar2 = *(undefined8 **)(param_1 + 0x508);
    }
    *(undefined8 **)(param_1 + 0x510) = puVar4;
    operator_delete(puVar2);
  }
  pvVar1 = *(void **)(param_1 + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  *(void **)(param_1 + 0x10) = pvVar1;
  operator_delete(pvVar1);
  return;
}


// ===== 00430784  FUN_00430784 =====

void FUN_00430784(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  piVar1 = (int *)(param_1 + 0x40);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}


// ===== 0043079c  FUN_0043079c =====

bool FUN_0043079c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  
  plVar1 = param_1 + 8;
  do {
    lVar5 = *plVar1;
    iVar4 = (int)lVar5 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*param_1 + 0x18))();
  }
  return (int)lVar5 != 1;
}


// ===== 004307e0  FUN_004307e0 =====

void FUN_004307e0(long *param_1)

{
  *param_1 = (long)(PTR_DAT_00d51b40 + 0x10);
  if ((long *)param_1[7] != (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 8))();
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0043082c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[5] + 8))(param_1[2]);
    return;
  }
  return;
}


// ===== 0043083c  FUN_0043083c =====

void FUN_0043083c(long *param_1)

{
  *param_1 = (long)(PTR_DAT_00d51b40 + 0x10);
  if ((long *)param_1[7] != (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 8))();
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
    (**(code **)(param_1[5] + 8))(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00430894  FUN_00430894 =====

bool FUN_00430894(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x40) == 1;
}


// ===== 004308a8  FUN_004308a8 =====

undefined1  [16] FUN_004308a8(long *param_1,ulong *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong unaff_x24;
  undefined2 uVar11;
  undefined8 uVar12;
  float fVar13;
  undefined1 auVar14 [16];
  
  uVar2 = *param_2;
  uVar10 = param_1[1];
  uVar6 = ((uVar2 & 0xffffffff) * 8 + 8 ^ uVar2 >> 0x20) * -0x622015f714c7d297;
  uVar6 = (uVar2 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
  uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  if (uVar10 != 0) {
    uVar12 = NEON_cnt(uVar10,1);
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar7 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar7 < 2) {
      unaff_x24 = uVar6 & uVar10 - 1;
    }
    else {
      unaff_x24 = uVar6;
      if (uVar10 <= uVar6) {
        uVar8 = 0;
        if (uVar10 != 0) {
          uVar8 = uVar6 / uVar10;
        }
        unaff_x24 = uVar6 - uVar8 * uVar10;
      }
    }
    plVar9 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar9 != (long *)0x0) {
      do {
        plVar9 = (long *)*plVar9;
        if (plVar9 == (long *)0x0) goto LAB_004309a0;
        uVar8 = plVar9[1];
        if (uVar8 != uVar6) {
          if (uVar7 < 2) {
            uVar8 = uVar8 & uVar10 - 1;
          }
          else if (uVar10 <= uVar8) {
            uVar1 = 0;
            if (uVar10 != 0) {
              uVar1 = uVar8 / uVar10;
            }
            uVar8 = uVar8 - uVar1 * uVar10;
          }
          if (uVar8 != unaff_x24) goto LAB_004309a0;
        }
      } while (plVar9[2] != uVar2);
      uVar12 = 0;
      goto LAB_00430b68;
    }
  }
LAB_004309a0:
  plVar9 = (long *)operator_new(0x18);
  lVar3 = param_1[3];
  lVar5 = *param_3;
  *plVar9 = 0;
  fVar13 = *(float *)(param_1 + 4);
  plVar9[1] = uVar6;
  plVar9[2] = lVar5;
  if ((uVar10 == 0) || (fVar13 * (float)uVar10 < (float)(lVar3 + 1))) {
    if (uVar10 < 3) {
      uVar2 = 1;
    }
    else {
      uVar2 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar2 = uVar2 | uVar10 << 1;
    uVar7 = (ulong)((float)(lVar3 + 1) / fVar13);
    if (uVar2 <= uVar7) {
      uVar2 = uVar7;
    }
    if (uVar2 - 1 == 0) {
      uVar2 = 2;
    }
    else if ((uVar2 & uVar2 - 1) != 0) {
      uVar2 = FUN_005204f8(uVar2);
      uVar10 = param_1[1];
    }
    if (uVar10 < uVar2) {
LAB_00430ab4:
      FUN_00430b80(param_1,uVar2);
    }
    else if (uVar2 < uVar10) {
      uVar7 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar10 < 3) {
LAB_00430aa0:
        uVar7 = FUN_005204f8();
      }
      else {
        uVar12 = NEON_cnt(uVar10,1);
        uVar11 = NEON_uaddlv(uVar12,1);
        if (1 < (CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff)) goto LAB_00430aa0;
        if (1 < uVar7) {
          uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
        }
      }
      if (uVar2 <= uVar7) {
        uVar2 = uVar7;
      }
      if (uVar2 < uVar10) goto LAB_00430ab4;
    }
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x24 = uVar10 - 1 & uVar6;
    }
    else {
      unaff_x24 = uVar6;
      if (uVar10 <= uVar6) {
        uVar2 = 0;
        if (uVar10 != 0) {
          uVar2 = uVar6 / uVar10;
        }
        unaff_x24 = uVar6 - uVar2 * uVar10;
      }
    }
  }
  lVar3 = *param_1;
  plVar4 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    lVar5 = *plVar4;
    *plVar4 = (long)plVar9;
    *plVar9 = lVar5;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar4;
    if (*plVar9 != 0) {
      uVar2 = *(ulong *)(*plVar9 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar2 = uVar2 & uVar10 - 1;
      }
      else if (uVar10 <= uVar2) {
        uVar6 = 0;
        if (uVar10 != 0) {
          uVar6 = uVar2 / uVar10;
        }
        uVar2 = uVar2 - uVar6 * uVar10;
      }
      plVar4 = (long *)(*param_1 + uVar2 * 8);
      goto LAB_00430b54;
    }
  }
  else {
    *plVar9 = *plVar4;
LAB_00430b54:
    *plVar4 = (long)plVar9;
  }
  uVar12 = 1;
  param_1[3] = param_1[3] + 1;
LAB_00430b68:
  auVar14._8_8_ = uVar12;
  auVar14._0_8_ = plVar9;
  return auVar14;
}


// ===== 00430b80  FUN_00430b80 =====

void FUN_00430b80(long *param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  if (param_2 == 0) {
    pvVar2 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00401ad4();
    }
    pvVar2 = operator_new(param_2 << 3);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)pvVar2;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    uVar4 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      uVar4 = plVar5[1];
      uVar10 = NEON_cnt(param_2,1);
      uVar9 = NEON_uaddlv(uVar10,1);
      uVar6 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
      if (uVar6 < 2) {
        uVar4 = uVar4 & param_2 - 1;
      }
      else if (param_2 <= uVar4) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar8 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      plVar7 = (long *)*plVar5;
      if (plVar7 != (long *)0x0) {
        do {
          uVar8 = plVar7[1];
          if (uVar6 < 2) {
            uVar8 = uVar8 & param_2 - 1;
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
              *(long **)(*param_1 + uVar8 * 8) = plVar5;
              uVar4 = uVar8;
            }
            else {
              *plVar5 = *plVar7;
              *plVar7 = **(long **)(*param_1 + uVar8 * 8);
              **(undefined8 **)(*param_1 + uVar8 * 8) = plVar7;
              plVar7 = plVar5;
            }
          }
          plVar5 = plVar7;
          plVar7 = (long *)*plVar5;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  return;
}


// ===== 00430cdc  FUN_00430cdc =====

void FUN_00430cdc(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  void *local_40 [3];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    uVar5 = *param_2;
    uVar12 = NEON_cnt(uVar4,1);
    uVar6 = ((uVar5 & 0xffffffff) * 8 + 8 ^ uVar5 >> 0x20) * -0x622015f714c7d297;
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar6 = (uVar5 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
    uVar7 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    if (uVar7 < 2) {
      uVar8 = uVar6 & uVar4 - 1;
    }
    else {
      uVar8 = uVar6;
      if (uVar4 <= uVar6) {
        uVar8 = 0;
        if (uVar4 != 0) {
          uVar8 = uVar6 / uVar4;
        }
        uVar8 = uVar6 - uVar8 * uVar4;
      }
    }
    plVar9 = *(long **)(*param_1 + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == uVar6) {
          if (plVar9[2] == uVar5) {
            FUN_00430e20(local_40);
            pvVar3 = local_40[0];
            local_40[0] = (void *)0x0;
            if (pvVar3 != (void *)0x0) {
              operator_delete(pvVar3);
            }
            uVar12 = 1;
            goto LAB_00430ddc;
          }
        }
        else {
          if (uVar7 < 2) {
            uVar10 = uVar10 & uVar4 - 1;
          }
          else if (uVar4 <= uVar10) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar10 / uVar4;
            }
            uVar10 = uVar10 - uVar1 * uVar4;
          }
          if (uVar10 != uVar8) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  uVar12 = 0;
LAB_00430ddc:
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar12);
}


// ===== 00430e20  FUN_00430e20 =====

void FUN_00430e20(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  
  uVar5 = param_2[1];
  uVar3 = param_3[1];
  uVar11 = NEON_cnt(uVar5,1);
  uVar10 = NEON_uaddlv(uVar11,1);
  uVar7 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
  if (uVar7 < 2) {
    uVar3 = uVar5 - 1 & uVar3;
  }
  else if (uVar5 <= uVar3) {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar3 / uVar5;
    }
    uVar3 = uVar3 - uVar9 * uVar5;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar6 = plVar2;
    plVar2 = (long *)*plVar6;
  } while ((long *)*plVar6 != param_3);
  if (plVar6 != param_2 + 2) {
    uVar9 = plVar6[1];
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_00430eec;
  }
  if (*param_3 != 0) {
    uVar9 = *(ulong *)(*param_3 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_00430eec;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_00430eec:
  lVar8 = *param_3;
  if (lVar8 != 0) {
    uVar9 = *(ulong *)(lVar8 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar7 * uVar5;
    }
    if (uVar9 != uVar3) {
      *(long **)(*param_2 + uVar9 * 8) = plVar6;
      lVar8 = *param_3;
    }
  }
  lVar4 = param_2[3];
  *plVar6 = lVar8;
  *param_3 = 0;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  param_2[3] = lVar4 + -1;
  return;
}


// ===== 00430f54  FUN_00430f54 =====

void FUN_00430f54(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined1 *__src;
  ulong uVar3;
  long lVar4;
  undefined1 **__dest;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *local_90;
  ulong uStack_88;
  undefined8 local_80;
  long local_78;
  undefined8 *puStack_70;
  code *local_68;
  undefined8 *local_60;
  long local_58;
  
  __dest = &local_90;
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  *param_1 = param_3;
  param_1[1] = param_4;
  uVar8 = param_2[1];
  uVar7 = *param_2;
  param_1[4] = param_2[2];
  param_1[3] = uVar8;
  param_1[2] = uVar7;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = 0;
  (**(code **)(*(long *)*param_1 + 0xb0))();
  plVar5 = (long *)*param_1;
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    __src = (undefined1 *)param_1[2];
    uVar3 = param_1[3];
    if (uVar3 < 0x17) {
      local_80 = CONCAT17((char)uVar3,(undefined7)local_80);
    }
    else {
      if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar3 | 0xf) + 1;
      __dest = (undefined1 **)operator_new(uVar1);
      local_80 = uVar1 | 0x8000000000000000;
      local_90 = (undefined1 *)__dest;
      uStack_88 = uVar3;
    }
    if ((__dest <= __src) && (__src < (undefined1 *)((long)__dest + uVar3 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar3 + 1);
  }
  else {
    uStack_88 = param_1[3];
    local_90 = (undefined1 *)param_1[2];
    local_80 = param_1[4];
  }
  (**(code **)(*plVar5 + 0x38))(plVar5,&local_90);
  if ((long)local_80 < 0) {
    operator_delete(local_90);
  }
  (**(code **)(*(long *)*param_1 + 0xb8))();
  lVar6 = param_1[1];
  lVar2 = lVar6 + 0x118;
  FUN_005467a4(lVar2);
  if (*(char *)(lVar6 + 0x160) == '\0') {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
               "this->has_value()","optional operator-> called on a disengaged value");
  }
  FUN_007b5a0c(lVar6 + 0x140,param_1,param_1,FUN_004313e4);
  FUN_005467c8(lVar2);
  plVar5 = (long *)param_1[6];
  local_68 = FUN_00431598;
  local_60 = (undefined8 *)&DAT_001f5f40;
  local_78 = lVar2;
  puStack_70 = param_1;
  if (plVar5 < (long *)param_1[7]) {
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                 ,0x23,"__location != nullptr","null pointer given to construct_at");
    }
    plVar5[1] = (long)param_1;
    *plVar5 = lVar2;
    plVar5[2] = (long)FUN_00431598;
    plVar5[3] = (long)&DAT_001f5f40;
    if (DAT_001f5f48 != 0) {
      local_68 = FUN_0040dec4;
      local_60 = &DAT_001f1910;
    }
    param_1[6] = plVar5 + 4;
  }
  else {
    FUN_004313e8(param_1 + 5,&local_78);
  }
  if ((code *)local_60[1] != (code *)0x0) {
    (*(code *)local_60[1])(local_78);
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004311dc  FUN_004311dc =====

void FUN_004311dc(undefined8 *param_1)

{
  void *pvVar1;
  code *pcVar2;
  void *pvVar3;
  void *pvVar4;
  
  (**(code **)(*(long *)*param_1 + 0x80))((long *)*param_1,1);
  FUN_004312b4(param_1 + 5);
  pvVar3 = (void *)param_1[5];
  if (pvVar3 != (void *)0x0) {
    pvVar4 = pvVar3;
    pvVar1 = (void *)param_1[6];
    if ((void *)param_1[6] != pvVar3) {
      do {
        pvVar4 = (void *)((long)pvVar1 + -0x20);
        pcVar2 = *(code **)(*(long *)((long)pvVar1 + -8) + 8);
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)(*(undefined8 *)((long)pvVar1 + -0x20));
        }
        pvVar1 = pvVar4;
      } while (pvVar4 != pvVar3);
      pvVar4 = (void *)param_1[5];
    }
    param_1[6] = pvVar3;
    operator_delete(pvVar4);
  }
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    operator_delete((void *)param_1[2]);
    return;
  }
  return;
}


// ===== 0043128c  FUN_0043128c =====

void FUN_0043128c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0043129c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x78))((long *)*param_1,1);
  return;
}


// ===== 004312a0  FUN_004312a0 =====

void FUN_004312a0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004312b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x80))((long *)*param_1,2);
  return;
}


// ===== 004312b4  FUN_004312b4 =====

void FUN_004312b4(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 local_70;
  undefined8 uStack_68;
  code *local_60;
  long local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = *param_1;
  lVar2 = param_1[1];
  if (lVar3 != lVar2) {
    do {
      uStack_68 = *(undefined8 *)(lVar2 + -0x18);
      local_70 = *(undefined8 *)(lVar2 + -0x20);
      local_60 = *(code **)(lVar2 + -0x10);
      local_58 = *(long *)(lVar2 + -8);
      if (*(long *)(local_58 + 8) != 0) {
        *(code **)(lVar2 + -0x10) = FUN_0040dec4;
        *(undefined8 **)(lVar2 + -8) = &DAT_001f1910;
        lVar3 = *param_1;
        lVar2 = param_1[1];
      }
      if (lVar3 == lVar2) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x623,
                   "!empty()","vector::pop_back called on an empty vector");
      }
      pcVar4 = *(code **)(*(long *)(lVar2 + -8) + 8);
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(*(undefined8 *)(lVar2 + -0x20));
      }
      param_1[1] = lVar2 + -0x20;
      if (*(char *)(local_58 + 0x10) == '\0') {
        (*local_60)(&local_70);
        pcVar4 = *(code **)(local_58 + 8);
      }
      else {
        pcVar4 = *(code **)(local_58 + 8);
      }
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(local_70);
      }
      lVar3 = *param_1;
      lVar2 = param_1[1];
    } while (lVar3 != lVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004313e4  FUN_004313e4 =====

void FUN_004313e4(void)

{
  return;
}


// ===== 004313e8  FUN_004313e8 =====

void FUN_004313e8(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  undefined8 *puVar5;
  code *pcVar6;
  ulong uVar7;
  void *pvVar8;
  void *pvVar9;
  void *pvVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  pvVar9 = (void *)*param_1;
  pvVar10 = (void *)param_1[1];
  lVar11 = (long)pvVar10 - (long)pvVar9 >> 5;
  uVar1 = lVar11 + 1;
  if (uVar1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar7 = (ulong)(param_1[2] - (long)pvVar9) >> 4;
  if (uVar7 <= uVar1) {
    uVar7 = uVar1;
  }
  if (0x7fffffffffffffdf < (ulong)(param_1[2] - (long)pvVar9)) {
    uVar7 = 0x7ffffffffffffff;
  }
  if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
  if (uVar7 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00401ad4();
  }
  pvVar4 = operator_new(uVar7 * 0x20);
  lVar3 = param_2[3];
  puVar5 = (undefined8 *)((long)pvVar4 + lVar11 * 0x20);
  uVar13 = param_2[1];
  uVar12 = *param_2;
  puVar5[2] = param_2[2];
  puVar5[1] = uVar13;
  *puVar5 = uVar12;
  lVar11 = *(long *)(lVar3 + 8);
  puVar5[3] = lVar3;
  if (lVar11 != 0) {
    param_2[2] = FUN_0040dec4;
    param_2[3] = &DAT_001f1910;
    pvVar9 = (void *)*param_1;
    pvVar10 = (void *)param_1[1];
  }
  pvVar4 = (void *)((long)pvVar4 + uVar7 * 0x20);
  puVar2 = puVar5 + 4;
  if (pvVar10 == pvVar9) {
    *param_1 = (long)puVar5;
    param_1[1] = (long)puVar2;
    param_1[2] = (long)pvVar4;
  }
  else {
    do {
      uVar12 = *(undefined8 *)((long)pvVar10 + -0x20);
      puVar5[-3] = *(undefined8 *)((long)pvVar10 + -0x18);
      puVar5[-4] = uVar12;
      puVar5[-2] = *(undefined8 *)((long)pvVar10 + -0x10);
      pvVar8 = (void *)((long)pvVar10 + -0x20);
      lVar11 = *(long *)(*(long *)((long)pvVar10 + -8) + 8);
      puVar5[-1] = *(long *)((long)pvVar10 + -8);
      if (lVar11 != 0) {
        *(code **)((long)pvVar10 + -0x10) = FUN_0040dec4;
        *(undefined8 **)((long)pvVar10 + -8) = &DAT_001f1910;
      }
      puVar5 = puVar5 + -4;
      pvVar10 = pvVar8;
    } while (pvVar8 != pvVar9);
    pvVar9 = (void *)*param_1;
    pvVar10 = (void *)param_1[1];
    *param_1 = (long)puVar5;
    param_1[1] = (long)puVar2;
    param_1[2] = (long)pvVar4;
    while (pvVar4 = pvVar10, pvVar4 != pvVar9) {
      pcVar6 = *(code **)(*(long *)((long)pvVar4 + -8) + 8);
      pvVar10 = (void *)((long)pvVar4 + -0x20);
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(*(undefined8 *)((long)pvVar4 + -0x20));
      }
    }
  }
  if (pvVar9 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar9);
  return;
}


// ===== 00431598  FUN_00431598 =====

void FUN_00431598(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  FUN_005467a4(lVar1);
  if (*(char *)(lVar1 + 0x48) != '\0') {
    FUN_007b5df8(lVar1 + 0x28,lVar2);
    FUN_005467c8(lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
             "this->has_value()","optional operator-> called on a disengaged value");
}


// ===== 004315fc  FUN_004315fc =====

void FUN_004315fc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 *__src;
  ulong uVar3;
  long lVar4;
  undefined1 **__dest;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *local_70;
  ulong uStack_68;
  undefined8 local_60;
  long local_58;
  
  __dest = &local_70;
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  *param_1 = param_3;
  param_1[1] = param_4;
  uVar7 = param_2[1];
  uVar6 = *param_2;
  param_1[4] = param_2[2];
  param_1[3] = uVar7;
  param_1[2] = uVar6;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  plVar5 = (long *)*param_1;
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    __src = (undefined1 *)param_1[2];
    uVar3 = param_1[3];
    if (uVar3 < 0x17) {
      local_60 = CONCAT17((char)uVar3,(undefined7)local_60);
    }
    else {
      if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar3 | 0xf) + 1;
      __dest = (undefined1 **)operator_new(uVar1);
      local_60 = uVar1 | 0x8000000000000000;
      local_70 = (undefined1 *)__dest;
      uStack_68 = uVar3;
    }
    if ((__dest <= __src) && (__src < (undefined1 *)((long)__dest + uVar3 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar3 + 1);
  }
  else {
    uStack_68 = param_1[3];
    local_70 = (undefined1 *)param_1[2];
    local_60 = param_1[4];
  }
  (**(code **)(*plVar5 + 0x30))(plVar5,&local_70);
  if ((long)local_60 < 0) {
    operator_delete(local_70);
  }
  (**(code **)(*(long *)*param_1 + 0xa8))();
  puVar2 = (undefined8 *)param_1[2];
  if (-1 < *(char *)((long)param_1 + 0x27)) {
    puVar2 = param_1 + 2;
  }
  FUN_004a2264(*(undefined8 *)(param_1[1] + 0x450),puVar2);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00431770  FUN_00431770 =====

void FUN_00431770(undefined8 *param_1)

{
  (**(code **)(*(long *)*param_1 + 0x90))((long *)*param_1,1);
  if (-1 < *(char *)((long)param_1 + 0x27)) {
    return;
  }
  operator_delete((void *)param_1[2]);
  return;
}


// ===== 004317b8  FUN_004317b8 =====

void FUN_004317b8(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004317c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x88))((long *)*param_1,1);
  return;
}


// ===== 004317cc  FUN_004317cc =====

void FUN_004317cc(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004317dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x90))((long *)*param_1,2);
  return;
}


// ===== 004317e0  FUN_004317e0 =====

void FUN_004317e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined2 param_4,
                 undefined8 *param_5)

{
  ulong uVar1;
  undefined8 *__src;
  ulong uVar2;
  undefined8 *__dest;
  undefined8 uVar3;
  undefined8 uVar4;
  
  param_1[0xb] = 0;
  param_1[0xc] = param_2;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *param_1 = &PTR_FUN_00d1bf40;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xd] = param_3;
  *(undefined2 *)(param_1 + 0x10) = param_4;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  FUN_00992290(param_1 + 0x15,100,10);
  __dest = param_1 + 0x1c;
  if (*(char *)((long)param_5 + 0x17) < '\0') {
    __src = (undefined8 *)*param_5;
    uVar2 = param_5[1];
    if (uVar2 < 0x17) {
      *(char *)((long)param_1 + 0xf7) = (char)uVar2;
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined8 *)operator_new(uVar1);
      param_1[0x1c] = __dest;
      param_1[0x1d] = uVar2;
      param_1[0x1e] = uVar1 | 0x8000000000000000;
    }
    if ((__dest <= __src) && (__src < (undefined8 *)((long)__dest + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar2 + 1);
  }
  else {
    uVar4 = param_5[1];
    uVar3 = *param_5;
    param_1[0x1e] = param_5[2];
    param_1[0x1d] = uVar4;
    *__dest = uVar3;
  }
  *(undefined1 *)(param_1 + 0x1f) = 0x78;
  return;
}


// ===== 00431904  FUN_00431904 =====

undefined4 FUN_00431904(long param_1,void *param_2,ulong param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  byte *pbVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  byte *pbVar9;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  byte local_d38 [8];
  byte *local_d30;
  byte *pbStack_d28;
  byte *local_d20;
  undefined6 uStack_d18;
  undefined2 local_d12;
  undefined6 uStack_d10;
  undefined8 local_d08;
  undefined1 auStack_cf8 [1600];
  ulong local_6b8;
  byte *local_6b0;
  byte *pbStack_6a8;
  byte *local_6a0;
  undefined8 uStack_698;
  undefined8 local_690;
  undefined8 uStack_688;
  long local_68;
  byte *pbVar10;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar6 = FUN_006258f0();
  local_d30 = (byte *)0x0;
  pbStack_d28 = (byte *)0x0;
  local_d20 = (byte *)0x0;
  FUN_005d34d8(&uStack_d18);
  lVar8 = param_1 + 8;
  local_d08 = 0;
  FUN_005467a4(lVar8);
  pbStack_6a8 = (byte *)0x0;
  local_6b0 = (byte *)0x0;
  local_6a0 = (byte *)0x0;
  if (param_3 != 0) {
    if ((long)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    local_6b0 = (byte *)operator_new(param_3);
    pbVar3 = local_6b0 + param_3;
    local_6a0 = pbVar3;
    memcpy(local_6b0,param_2,param_3);
    pbStack_6a8 = pbVar3;
  }
  lVar2 = param_1 + 0x30;
  FUN_005d34f0(&uStack_698,param_4);
  uStack_688 = uVar6;
  FUN_00431f14(lVar2,&local_6b0);
  FUN_005d3508(&uStack_698);
  if (local_6b0 != (byte *)0x0) {
    pbStack_6a8 = local_6b0;
    operator_delete(local_6b0);
  }
  if (*(ulong *)(param_1 + 0x58) < *(ulong *)(param_1 + 0x70)) {
    FUN_005467c8(lVar8);
    uVar5 = 1;
  }
  else {
    if (*(ulong *)(param_1 + 0x70) + 1 < *(ulong *)(param_1 + 0x58)) {
      do {
        FUN_00432d78(lVar2);
      } while (*(long *)(param_1 + 0x70) + 1U < *(ulong *)(param_1 + 0x58));
    }
    uVar13 = *(ulong *)(param_1 + 0x50) % 0x55;
    lVar11 = *(long *)(*(long *)(param_1 + 0x38) + (*(ulong *)(param_1 + 0x50) / 0x55) * 8);
    puVar12 = (undefined8 *)(lVar11 + uVar13 * 0x30);
    if (local_d30 != (byte *)0x0) {
      pbStack_d28 = local_d30;
      operator_delete(local_d30);
    }
    pbStack_d28 = (byte *)puVar12[1];
    local_d30 = (byte *)*puVar12;
    lVar11 = lVar11 + uVar13 * 0x30;
    local_d20 = (byte *)puVar12[2];
    uVar6 = *(undefined8 *)(lVar11 + 0x1e);
    puVar12[1] = 0;
    puVar12[2] = 0;
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    *puVar12 = 0;
    uStack_d10 = (undefined6)((ulong)uVar6 >> 0x10);
    uStack_d18 = (undefined6)uVar7;
    local_d12 = (undefined2)((ulong)uVar7 >> 0x30);
    local_d08 = *(undefined8 *)(lVar11 + 0x28);
    FUN_00432d78(lVar2);
    if (*(int *)(param_1 + 0x78) == 0) {
      if (9 < *(int *)(param_1 + 0x7c)) {
        FUN_005467c8(lVar8);
        uVar5 = 1;
        *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + 1;
        goto LAB_00431d44;
      }
      FUN_00510af8(&local_6b0,local_d30,*(undefined1 *)(param_1 + 0xf8));
      if (local_d30 != (byte *)0x0) {
        pbStack_d28 = local_d30;
        operator_delete(local_d30);
      }
      iVar1 = *(int *)(param_1 + 0x7c);
      pbStack_d28 = pbStack_6a8;
      local_d30 = local_6b0;
      local_d20 = local_6a0;
      *(int *)(param_1 + 0x7c) = iVar1 + 1;
      if (8 < iVar1) {
        uStack_698 = 0;
        local_6a0 = (byte *)0x0;
        uStack_688 = 0;
        local_690 = 0;
        pbStack_6a8 = (byte *)0x0;
        local_6b0 = (byte *)0x0;
        FUN_00432a4c(lVar2);
        FUN_00432e50(lVar2);
        FUN_0043300c(lVar2,&local_6b0);
        uVar7 = uStack_688;
        uVar6 = local_690;
        local_690 = 0;
        uStack_688 = 0;
        uVar13 = (long)local_6a0 - (long)pbStack_6a8;
        *(undefined8 *)(param_1 + 0x58) = uVar7;
        *(undefined8 *)(param_1 + 0x50) = uVar6;
        pbVar3 = local_6a0;
        while (local_6a0 = pbVar3, 0x10 < uVar13) {
          operator_delete(*(void **)pbStack_6a8);
          pbStack_6a8 = pbStack_6a8 + 8;
          pbVar3 = local_6a0;
          uVar13 = (long)local_6a0 - (long)pbStack_6a8;
        }
        if (uVar13 >> 3 == 1) {
          local_690 = 0x2a;
        }
        else if (uVar13 >> 3 == 2) {
          local_690 = 0x55;
        }
        pbVar10 = pbStack_6a8;
        if (pbStack_6a8 != pbVar3) {
          do {
            pbVar9 = pbVar10 + 8;
            operator_delete(*(void **)pbVar10);
            pbVar10 = pbVar9;
          } while (pbVar9 != pbVar3);
          if (local_6a0 != pbStack_6a8) {
            local_6a0 = local_6a0 +
                        ((ulong)(pbStack_6a8 + (7 - (long)local_6a0)) & 0xfffffffffffffff8);
          }
        }
        if (local_6b0 != (byte *)0x0) {
          operator_delete(local_6b0);
        }
      }
    }
    pbVar3 = local_d30;
    iVar1 = *(ushort *)(param_1 + 0x80) + 1;
    *(short *)(param_1 + 0x80) = (short)iVar1;
    local_d30[2] = (byte)((uint)iVar1 >> 8);
    local_d30[3] = (byte)iVar1;
    FUN_005109d8(&local_6b0);
    if ((*pbVar3 >> 4 & 1) != 0) {
      uVar6 = FUN_005106fc(local_d30,(long)pbStack_d28 - (long)local_d30);
      FUN_00510774(auStack_cf8,uVar6);
      while (uVar13 = FUN_00510894(auStack_cf8), (uVar13 & 1) != 0) {
        uVar5 = FUN_005107e4(auStack_cf8);
        uVar6 = FUN_0051081c(auStack_cf8);
        uVar7 = FUN_00510860(auStack_cf8);
        FUN_00510a0c(&local_6b0,uVar5,uVar6,uVar7);
        FUN_00510918(auStack_cf8);
      }
    }
    local_d38[0] = (byte)((*(byte *)(param_1 + 0x78) & 3) << 1) | *(byte *)(param_1 + 0x78) >> 2 & 1
    ;
    FUN_00510a0c(&local_6b0,9,1,local_d38);
    memset(auStack_cf8,0,0x648);
    FUN_00510f14(&local_6b0,local_d30,(long)pbStack_d28 - (long)local_d30,auStack_cf8);
    uVar13 = (long)pbStack_d28 - (long)local_d30;
    if (local_6b8 < uVar13 || local_6b8 - uVar13 == 0) {
      if (local_6b8 < uVar13) {
        pbStack_d28 = local_d30 + local_6b8;
      }
    }
    else {
      FUN_00432ba8(&local_d30,local_6b8 - uVar13);
    }
    memcpy(local_d30,auStack_cf8,local_6b8);
    FUN_005467c8(lVar8);
    pbVar3 = (byte *)0x0;
    if ((long)pbStack_d28 - (long)local_d30 != 0) {
      pbVar3 = local_d30;
    }
    uVar13 = (**(code **)(**(long **)(param_1 + 0x60) + 0x48))
                       (*(long **)(param_1 + 0x60),pbVar3,(long)pbStack_d28 - (long)local_d30,
                        &uStack_d18,local_d08);
    if ((uVar13 & 1) == 0) {
      uVar5 = 0;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
    }
    else {
      lVar8 = (long)pbStack_d28 - (long)local_d30;
      *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + 1;
      *(long *)(param_1 + 0x90) = lVar8 + *(long *)(param_1 + 0x90);
      uVar6 = FUN_006258f0();
      FUN_009924ec(param_1 + 0xa8,lVar8,uVar6);
      uVar5 = 1;
    }
  }
LAB_00431d44:
  FUN_005d3508(&uStack_d18);
  if (local_d30 != (byte *)0x0) {
    pbStack_d28 = local_d30;
    operator_delete(local_d30);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00431dec  FUN_00431dec =====

bool FUN_00431dec(long param_1)

{
  return *(int *)(param_1 + 0x7c) < 10;
}


// ===== 00431dfc  FUN_00431dfc =====

void FUN_00431dfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00431e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x60) + 8))();
  return;
}


// ===== 00431e0c  FUN_00431e0c =====

void FUN_00431e0c(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x78) = param_2;
  return;
}


// ===== 00431e14  FUN_00431e14 =====

void FUN_00431e14(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x70) = param_2;
  return;
}


// ===== 00431e1c  FUN_00431e1c =====

void FUN_00431e1c(long param_1)

{
  *(undefined4 *)(param_1 + 0x7c) = 0;
  return;
}


// ===== 00431e24  FUN_00431e24 =====

void FUN_00431e24(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  void *pvVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  if (*(char *)(param_1 + 0xf7) < '\0') {
    operator_delete(*(void **)(param_1 + 0xe0));
  }
  FUN_00992338(param_1 + 0xa8);
  plVar7 = *(long **)(param_1 + 0x68);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_005466cc(plVar7);
    }
  }
  FUN_00432a4c((undefined8 *)(param_1 + 0x30));
  puVar2 = *(undefined8 **)(param_1 + 0x40);
  puVar8 = *(undefined8 **)(param_1 + 0x38);
  if (*(undefined8 **)(param_1 + 0x38) != puVar2) {
    do {
      puVar9 = puVar8 + 1;
      operator_delete((void *)*puVar8);
      puVar8 = puVar9;
    } while (puVar9 != puVar2);
    lVar6 = *(long *)(param_1 + 0x40);
    if (lVar6 != *(long *)(param_1 + 0x38)) {
      *(ulong *)(param_1 + 0x40) =
           lVar6 + ((*(long *)(param_1 + 0x38) - lVar6) + 7U & 0xfffffffffffffff8);
    }
  }
  pvVar5 = *(void **)(param_1 + 0x30);
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5);
  }
  FUN_00546ab0(param_1 + 8);
  return;
}


// ===== 00431ef0  FUN_00431ef0 =====

void FUN_00431ef0(void *param_1)

{
  FUN_00431e24();
  operator_delete(param_1);
  return;
}


// ===== 00431f14  FUN_00431f14 =====

long FUN_00431f14(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  lVar5 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10);
  lVar3 = 0;
  if (lVar4 != lVar5) {
    lVar3 = (lVar4 - lVar5 >> 3) * 0x55 + -1;
  }
  if (lVar3 == *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) {
    FUN_00432060(param_1);
    lVar5 = *(long *)(param_1 + 8);
    lVar4 = *(long *)(param_1 + 0x10);
  }
  if (lVar4 != lVar5) {
    uVar1 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
    lVar3 = *(long *)(lVar5 + (uVar1 / 0x55) * 8);
    if (lVar3 != 0) {
      puVar6 = (undefined8 *)(lVar3 + (uVar1 % 0x55) * 0x30);
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = 0;
      uVar7 = *param_2;
      puVar6[1] = param_2[1];
      *puVar6 = uVar7;
      puVar6[2] = param_2[2];
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      FUN_005d34f0(puVar6 + 3,param_2 + 3);
      puVar6[5] = param_2[5];
      lVar3 = *(long *)(param_1 + 0x28) + 1;
      uVar1 = *(long *)(param_1 + 0x20) + lVar3;
      *(long *)(param_1 + 0x28) = lVar3;
      plVar2 = (long *)(*(long *)(param_1 + 8) + (uVar1 / 0x55) * 8);
      lVar5 = *plVar2;
      lVar3 = 0;
      if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
        lVar3 = lVar5 + (uVar1 % 0x55) * 0x30;
      }
      if (lVar3 == lVar5) {
        lVar3 = plVar2[-1] + 0xff0;
      }
      return lVar3 + -0x30;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h",
             0x23,"__location != nullptr","null pointer given to construct_at");
}


// ===== 00432060  FUN_00432060 =====

void FUN_00432060(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  void *local_68;
  void *local_60;
  void *pvStack_58;
  void *local_50;
  void *pvStack_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((ulong)param_1[4] < 0x55) {
    plVar3 = param_1 + 3;
    lVar4 = *plVar3;
    lVar7 = lVar4 - *param_1;
    uVar8 = param_1[2] - param_1[1] >> 3;
    if ((ulong)(lVar7 >> 3) <= uVar8) {
      uVar6 = lVar7 >> 2;
      if (lVar4 == *param_1) {
        uVar6 = 1;
      }
      local_40 = plVar3;
      if (uVar6 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00401ad4();
      }
      local_60 = operator_new(uVar6 * 8);
      pvStack_58 = (void *)((long)local_60 + uVar8 * 8);
      pvStack_48 = (void *)((long)local_60 + uVar6 * 8);
      local_50 = pvStack_58;
      local_68 = operator_new(0xff0);
      FUN_00432704(&local_60,&local_68);
      lVar4 = param_1[2];
      lVar7 = lVar4;
      if (lVar4 != param_1[1]) {
        do {
          lVar7 = lVar7 + -8;
          FUN_004328b4(&local_60,lVar7);
        } while (lVar7 != param_1[1]);
        lVar4 = param_1[2];
      }
      pvVar2 = (void *)*param_1;
      lVar5 = param_1[3];
      param_1[1] = (long)pvStack_58;
      *param_1 = (long)local_60;
      param_1[3] = (long)pvStack_48;
      param_1[2] = (long)local_50;
      local_50 = (void *)lVar4;
      if (lVar4 != lVar7) {
        local_50 = (void *)(lVar4 + ((lVar7 - lVar4) + 7U & 0xfffffffffffffff8));
      }
      local_60 = pvVar2;
      pvStack_58 = (void *)lVar7;
      pvStack_48 = (void *)lVar5;
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
      }
      goto LAB_004321e0;
    }
    if (lVar4 != param_1[2]) {
      local_60 = operator_new(0xff0);
      FUN_004323bc(param_1,&local_60);
      goto LAB_004321e0;
    }
    local_60 = operator_new(0xff0);
    FUN_0043256c(param_1,&local_60);
    local_60 = *(void **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  else {
    param_1[4] = param_1[4] - 0x55;
    local_60 = *(void **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  FUN_0043220c(param_1,&local_60);
LAB_004321e0:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0043220c  FUN_0043220c =====

void FUN_0043220c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *__src;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar11 = (undefined8 *)param_1[2];
  if (puVar11 != (undefined8 *)param_1[3]) goto LAB_00432360;
  puVar2 = (undefined8 *)*param_1;
  __src = (undefined8 *)param_1[1];
  if (puVar2 <= __src && (long)__src - (long)puVar2 != 0) {
    lVar6 = (long)__src - (long)puVar2 >> 3;
    uVar7 = lVar6 + 2;
    if (-1 < lVar6 + 1) {
      uVar7 = lVar6 + 1;
    }
    uVar7 = uVar7 >> 1;
    memmove(__src + -uVar7,__src,(long)puVar11 - (long)__src);
    puVar11 = puVar11 + -uVar7;
    param_1[1] = param_1[1] + uVar7 * -8;
    param_1[2] = puVar11;
    goto LAB_00432360;
  }
  uVar7 = (long)puVar11 - (long)puVar2 >> 2;
  if ((long)puVar11 - (long)puVar2 == 0) {
    uVar7 = 1;
  }
  if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00401ad4();
  }
  uVar12 = uVar7 >> 2;
  pvVar5 = operator_new(uVar7 * 8);
  puVar1 = (undefined8 *)((long)pvVar5 + uVar12 * 8);
  uVar3 = (long)puVar11 - (long)__src;
  puVar11 = puVar1;
  if (uVar3 != 0) {
    puVar11 = (undefined8 *)((long)puVar1 + (uVar3 & 0xfffffffffffffff8));
    puVar8 = puVar1;
    if ((0x37 < uVar3 - 8) && (0x1f < (long)pvVar5 + (uVar12 * 8 - (long)__src))) {
      puVar8 = __src + 2;
      uVar3 = (uVar3 - 8 >> 3) + 1;
      puVar10 = (undefined8 *)((long)pvVar5 + uVar12 * 8 + 0x10);
      uVar9 = uVar3 & 0x3ffffffffffffffc;
      __src = __src + uVar9;
      uVar12 = uVar9;
      do {
        puVar4 = puVar8 + -1;
        uVar13 = puVar8[-2];
        uVar15 = puVar8[1];
        uVar14 = *puVar8;
        puVar8 = puVar8 + 4;
        uVar12 = uVar12 - 4;
        puVar10[-1] = *puVar4;
        puVar10[-2] = uVar13;
        puVar10[1] = uVar15;
        *puVar10 = uVar14;
        puVar10 = puVar10 + 4;
      } while (uVar12 != 0);
      puVar8 = puVar1 + uVar9;
      if (uVar3 == uVar9) goto LAB_00432348;
    }
    do {
      puVar10 = puVar8 + 1;
      *puVar8 = *__src;
      puVar8 = puVar10;
      __src = __src + 1;
    } while (puVar10 != puVar11);
  }
LAB_00432348:
  *param_1 = pvVar5;
  param_1[1] = puVar1;
  param_1[2] = puVar11;
  param_1[3] = (void *)((long)pvVar5 + uVar7 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2);
    puVar11 = (undefined8 *)param_1[2];
  }
LAB_00432360:
  if (puVar11 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
  *puVar11 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}


// ===== 004323bc  FUN_004323bc =====

void FUN_004323bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *__src;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar11 = (undefined8 *)param_1[2];
  if (puVar11 != (undefined8 *)param_1[3]) goto LAB_00432510;
  puVar2 = (undefined8 *)*param_1;
  __src = (undefined8 *)param_1[1];
  if (puVar2 <= __src && (long)__src - (long)puVar2 != 0) {
    lVar6 = (long)__src - (long)puVar2 >> 3;
    uVar7 = lVar6 + 2;
    if (-1 < lVar6 + 1) {
      uVar7 = lVar6 + 1;
    }
    uVar7 = uVar7 >> 1;
    memmove(__src + -uVar7,__src,(long)puVar11 - (long)__src);
    puVar11 = puVar11 + -uVar7;
    param_1[1] = param_1[1] + uVar7 * -8;
    param_1[2] = puVar11;
    goto LAB_00432510;
  }
  uVar7 = (long)puVar11 - (long)puVar2 >> 2;
  if ((long)puVar11 - (long)puVar2 == 0) {
    uVar7 = 1;
  }
  if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00401ad4();
  }
  uVar12 = uVar7 >> 2;
  pvVar5 = operator_new(uVar7 * 8);
  puVar1 = (undefined8 *)((long)pvVar5 + uVar12 * 8);
  uVar3 = (long)puVar11 - (long)__src;
  puVar11 = puVar1;
  if (uVar3 != 0) {
    puVar11 = (undefined8 *)((long)puVar1 + (uVar3 & 0xfffffffffffffff8));
    puVar8 = puVar1;
    if ((0x37 < uVar3 - 8) && (0x1f < (long)pvVar5 + (uVar12 * 8 - (long)__src))) {
      puVar8 = __src + 2;
      uVar3 = (uVar3 - 8 >> 3) + 1;
      puVar10 = (undefined8 *)((long)pvVar5 + uVar12 * 8 + 0x10);
      uVar9 = uVar3 & 0x3ffffffffffffffc;
      __src = __src + uVar9;
      uVar12 = uVar9;
      do {
        puVar4 = puVar8 + -1;
        uVar13 = puVar8[-2];
        uVar15 = puVar8[1];
        uVar14 = *puVar8;
        puVar8 = puVar8 + 4;
        uVar12 = uVar12 - 4;
        puVar10[-1] = *puVar4;
        puVar10[-2] = uVar13;
        puVar10[1] = uVar15;
        *puVar10 = uVar14;
        puVar10 = puVar10 + 4;
      } while (uVar12 != 0);
      puVar8 = puVar1 + uVar9;
      if (uVar3 == uVar9) goto LAB_004324f8;
    }
    do {
      puVar10 = puVar8 + 1;
      *puVar8 = *__src;
      puVar8 = puVar10;
      __src = __src + 1;
    } while (puVar10 != puVar11);
  }
LAB_004324f8:
  *param_1 = pvVar5;
  param_1[1] = puVar1;
  param_1[2] = puVar11;
  param_1[3] = (void *)((long)pvVar5 + uVar7 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2);
    puVar11 = (undefined8 *)param_1[2];
  }
LAB_00432510:
  if (puVar11 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
  *puVar11 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}


// ===== 0043256c  FUN_0043256c =====

void FUN_0043256c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  size_t __n;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *__src;
  undefined8 *__dest;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  __src = (undefined8 *)param_1[1];
  __dest = __src;
  if (__src != (undefined8 *)*param_1) goto LAB_004326d4;
  uVar2 = param_1[2];
  uVar11 = param_1[3];
  if (uVar2 < uVar11) {
    lVar4 = (long)(uVar11 - uVar2) >> 3;
    lVar1 = lVar4 + 2;
    if (-1 < lVar4 + 1) {
      lVar1 = lVar4 + 1;
    }
    __n = uVar2 - (long)__src;
    __dest = (undefined8 *)(uVar2 + (lVar1 >> 1) * 8);
    if (__n != 0) {
      __dest = (undefined8 *)((long)__dest - __n);
      memmove(__dest,__src,__n);
      __src = (undefined8 *)param_1[2];
    }
    param_1[1] = (long)__dest;
    param_1[2] = (long)(__src + (lVar1 >> 1));
    goto LAB_004326d4;
  }
  uVar5 = (long)(uVar11 - (long)__src) >> 2;
  if (uVar11 - (long)__src == 0) {
    uVar5 = 1;
  }
  if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00401ad4();
  }
  uVar11 = uVar5 + 3 >> 2;
  pvVar3 = operator_new(uVar5 * 8);
  __dest = (undefined8 *)((long)pvVar3 + uVar11 * 8);
  uVar2 = uVar2 - (long)__src;
  puVar6 = __dest;
  if (uVar2 != 0) {
    puVar6 = (undefined8 *)((long)__dest + (uVar2 & 0xfffffffffffffff8));
    puVar7 = __dest;
    puVar9 = __src;
    if ((0x37 < uVar2 - 8) && (0x1f < (long)pvVar3 + (uVar11 * 8 - (long)__src))) {
      puVar7 = __src + 2;
      uVar2 = (uVar2 - 8 >> 3) + 1;
      puVar9 = (undefined8 *)((long)pvVar3 + uVar11 * 8 + 0x10);
      uVar10 = uVar2 & 0x3ffffffffffffffc;
      uVar11 = uVar10;
      do {
        puVar8 = puVar7 + -1;
        uVar12 = puVar7[-2];
        uVar14 = puVar7[1];
        uVar13 = *puVar7;
        puVar7 = puVar7 + 4;
        uVar11 = uVar11 - 4;
        puVar9[-1] = *puVar8;
        puVar9[-2] = uVar12;
        puVar9[1] = uVar14;
        *puVar9 = uVar13;
        puVar9 = puVar9 + 4;
      } while (uVar11 != 0);
      puVar7 = __dest + uVar10;
      puVar9 = __src + uVar10;
      if (uVar2 == uVar10) goto LAB_004326bc;
    }
    do {
      puVar8 = puVar7 + 1;
      *puVar7 = *puVar9;
      puVar7 = puVar8;
      puVar9 = puVar9 + 1;
    } while (puVar8 != puVar6);
  }
LAB_004326bc:
  *param_1 = (long)pvVar3;
  param_1[1] = (long)__dest;
  param_1[2] = (long)puVar6;
  param_1[3] = (long)((long)pvVar3 + uVar5 * 8);
  if (__src != (undefined8 *)0x0) {
    operator_delete(__src);
    __dest = (undefined8 *)param_1[1];
  }
LAB_004326d4:
  __dest[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}


// ===== 00432704  FUN_00432704 =====

void FUN_00432704(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *__src;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar11 = (undefined8 *)param_1[2];
  if (puVar11 != (undefined8 *)param_1[3]) goto LAB_00432858;
  puVar2 = (undefined8 *)*param_1;
  __src = (undefined8 *)param_1[1];
  if (puVar2 <= __src && (long)__src - (long)puVar2 != 0) {
    lVar6 = (long)__src - (long)puVar2 >> 3;
    uVar7 = lVar6 + 2;
    if (-1 < lVar6 + 1) {
      uVar7 = lVar6 + 1;
    }
    uVar7 = uVar7 >> 1;
    memmove(__src + -uVar7,__src,(long)puVar11 - (long)__src);
    puVar11 = puVar11 + -uVar7;
    param_1[1] = param_1[1] + uVar7 * -8;
    param_1[2] = puVar11;
    goto LAB_00432858;
  }
  uVar7 = (long)puVar11 - (long)puVar2 >> 2;
  if ((long)puVar11 - (long)puVar2 == 0) {
    uVar7 = 1;
  }
  if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00401ad4();
  }
  uVar12 = uVar7 >> 2;
  pvVar5 = operator_new(uVar7 * 8);
  puVar1 = (undefined8 *)((long)pvVar5 + uVar12 * 8);
  uVar3 = (long)puVar11 - (long)__src;
  puVar11 = puVar1;
  if (uVar3 != 0) {
    puVar11 = (undefined8 *)((long)puVar1 + (uVar3 & 0xfffffffffffffff8));
    puVar8 = puVar1;
    if ((0x37 < uVar3 - 8) && (0x1f < (long)pvVar5 + (uVar12 * 8 - (long)__src))) {
      puVar8 = __src + 2;
      uVar3 = (uVar3 - 8 >> 3) + 1;
      puVar10 = (undefined8 *)((long)pvVar5 + uVar12 * 8 + 0x10);
      uVar9 = uVar3 & 0x3ffffffffffffffc;
      __src = __src + uVar9;
      uVar12 = uVar9;
      do {
        puVar4 = puVar8 + -1;
        uVar13 = puVar8[-2];
        uVar15 = puVar8[1];
        uVar14 = *puVar8;
        puVar8 = puVar8 + 4;
        uVar12 = uVar12 - 4;
        puVar10[-1] = *puVar4;
        puVar10[-2] = uVar13;
        puVar10[1] = uVar15;
        *puVar10 = uVar14;
        puVar10 = puVar10 + 4;
      } while (uVar12 != 0);
      puVar8 = puVar1 + uVar9;
      if (uVar3 == uVar9) goto LAB_00432840;
    }
    do {
      puVar10 = puVar8 + 1;
      *puVar8 = *__src;
      puVar8 = puVar10;
      __src = __src + 1;
    } while (puVar10 != puVar11);
  }
LAB_00432840:
  *param_1 = pvVar5;
  param_1[1] = puVar1;
  param_1[2] = puVar11;
  param_1[3] = (void *)((long)pvVar5 + uVar7 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2);
    puVar11 = (undefined8 *)param_1[2];
  }
LAB_00432858:
  if (puVar11 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
  *puVar11 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}


// ===== 004328b4  FUN_004328b4 =====

void FUN_004328b4(long *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  size_t __n;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *__src;
  undefined8 *__dest;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  __src = (undefined8 *)param_1[1];
  __dest = __src;
  if (__src != (undefined8 *)*param_1) goto LAB_00432a1c;
  uVar2 = param_1[2];
  uVar11 = param_1[3];
  if (uVar2 < uVar11) {
    lVar4 = (long)(uVar11 - uVar2) >> 3;
    lVar1 = lVar4 + 2;
    if (-1 < lVar4 + 1) {
      lVar1 = lVar4 + 1;
    }
    __n = uVar2 - (long)__src;
    __dest = (undefined8 *)(uVar2 + (lVar1 >> 1) * 8);
    if (__n != 0) {
      __dest = (undefined8 *)((long)__dest - __n);
      memmove(__dest,__src,__n);
      __src = (undefined8 *)param_1[2];
    }
    param_1[1] = (long)__dest;
    param_1[2] = (long)(__src + (lVar1 >> 1));
    goto LAB_00432a1c;
  }
  uVar5 = (long)(uVar11 - (long)__src) >> 2;
  if (uVar11 - (long)__src == 0) {
    uVar5 = 1;
  }
  if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00401ad4();
  }
  uVar11 = uVar5 + 3 >> 2;
  pvVar3 = operator_new(uVar5 * 8);
  __dest = (undefined8 *)((long)pvVar3 + uVar11 * 8);
  uVar2 = uVar2 - (long)__src;
  puVar6 = __dest;
  if (uVar2 != 0) {
    puVar6 = (undefined8 *)((long)__dest + (uVar2 & 0xfffffffffffffff8));
    puVar7 = __dest;
    puVar9 = __src;
    if ((0x37 < uVar2 - 8) && (0x1f < (long)pvVar3 + (uVar11 * 8 - (long)__src))) {
      puVar7 = __src + 2;
      uVar2 = (uVar2 - 8 >> 3) + 1;
      puVar9 = (undefined8 *)((long)pvVar3 + uVar11 * 8 + 0x10);
      uVar10 = uVar2 & 0x3ffffffffffffffc;
      uVar11 = uVar10;
      do {
        puVar8 = puVar7 + -1;
        uVar12 = puVar7[-2];
        uVar14 = puVar7[1];
        uVar13 = *puVar7;
        puVar7 = puVar7 + 4;
        uVar11 = uVar11 - 4;
        puVar9[-1] = *puVar8;
        puVar9[-2] = uVar12;
        puVar9[1] = uVar14;
        *puVar9 = uVar13;
        puVar9 = puVar9 + 4;
      } while (uVar11 != 0);
      puVar7 = __dest + uVar10;
      puVar9 = __src + uVar10;
      if (uVar2 == uVar10) goto LAB_00432a04;
    }
    do {
      puVar8 = puVar7 + 1;
      *puVar7 = *puVar9;
      puVar7 = puVar8;
      puVar9 = puVar9 + 1;
    } while (puVar8 != puVar6);
  }
LAB_00432a04:
  *param_1 = (long)pvVar3;
  param_1[1] = (long)__dest;
  param_1[2] = (long)puVar6;
  param_1[3] = (long)((long)pvVar3 + uVar5 * 8);
  if (__src != (undefined8 *)0x0) {
    operator_delete(__src);
    __dest = (undefined8 *)param_1[1];
  }
LAB_00432a1c:
  __dest[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}


// ===== 00432a4c  FUN_00432a4c =====

void FUN_00432a4c(long param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar5;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  if (puVar5 != puVar2) {
    uVar6 = *(ulong *)(param_1 + 0x20);
    uVar4 = *(long *)(param_1 + 0x28) + uVar6;
    plVar7 = puVar2 + uVar6 / 0x55;
    puVar9 = (undefined8 *)(*plVar7 + (uVar6 % 0x55) * 0x30);
    puVar8 = (undefined8 *)(puVar2[uVar4 / 0x55] + (uVar4 % 0x55) * 0x30);
    if (puVar9 != puVar8) {
      do {
        if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x3f,"__loc != nullptr","null pointer given to destroy_at");
        }
        FUN_005d3508(puVar9 + 3);
        pvVar1 = (void *)*puVar9;
        if (pvVar1 != (void *)0x0) {
          puVar9[1] = pvVar1;
          operator_delete(pvVar1);
        }
        puVar9 = puVar9 + 6;
        if ((long)puVar9 - *plVar7 == 0xff0) {
          plVar7 = plVar7 + 1;
          puVar9 = (undefined8 *)*plVar7;
        }
      } while (puVar9 != puVar8);
      puVar2 = *(undefined8 **)(param_1 + 8);
      puVar5 = *(undefined8 **)(param_1 + 0x10);
    }
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  uVar4 = (long)puVar5 - (long)puVar2;
  while (0x10 < uVar4) {
    operator_delete((void *)*puVar2);
    puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    *(undefined8 **)(param_1 + 8) = puVar2;
    uVar4 = *(long *)(param_1 + 0x10) - (long)puVar2;
  }
  if (uVar4 >> 3 == 1) {
    uVar3 = 0x2a;
  }
  else {
    if (uVar4 >> 3 != 2) {
      return;
    }
    uVar3 = 0x55;
  }
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  return;
}


// ===== 00432ba8  FUN_00432ba8 =====

void FUN_00432ba8(long *param_1,ulong param_2)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  void *__src;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  
  puVar7 = (undefined1 *)param_1[1];
  if ((ulong)(param_1[2] - (long)puVar7) < param_2) {
    lVar10 = *param_1;
    lVar11 = (long)puVar7 - lVar10;
    uVar3 = lVar11 + param_2;
    if ((long)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar2 = param_1[2] - lVar10;
    uVar5 = uVar2 * 2;
    if (uVar5 < uVar3 || uVar5 - uVar3 == 0) {
      uVar5 = uVar3;
    }
    if (0x3ffffffffffffffe < uVar2) {
      uVar5 = 0x7fffffffffffffff;
    }
    if (uVar5 == 0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = operator_new(uVar5);
    }
    uVar3 = lVar10 - (long)((long)pvVar1 + (long)puVar7);
    puVar9 = (undefined1 *)((long)pvVar1 + lVar11);
    if (param_2 - 1 <= uVar3) {
      uVar3 = param_2 - 1;
    }
    uVar3 = uVar3 + 1;
    puVar8 = puVar9;
    if (0x20 < uVar3) {
      uVar2 = 0x20;
      if ((uVar3 & 0x1f) != 0) {
        uVar2 = uVar3 & 0x1f;
      }
      lVar10 = uVar3 - uVar2;
      puVar6 = (undefined8 *)((long)pvVar1 + lVar11 + 0x10);
      puVar8 = puVar9 + lVar10;
      do {
        puVar6[-1] = 0;
        puVar6[-2] = 0;
        puVar6[1] = 0;
        *puVar6 = 0;
        puVar6 = puVar6 + 4;
        lVar10 = lVar10 + -0x20;
      } while (lVar10 != 0);
    }
    do {
      if (puVar8 == (undefined1 *)0x0) {
LAB_00432d4c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                   ,0x23,"__location != nullptr","null pointer given to construct_at");
      }
      puVar4 = puVar8 + 1;
      *puVar8 = 0;
      puVar8 = puVar4;
    } while (puVar4 != puVar9 + param_2);
    __src = (void *)*param_1;
    memmove(puVar9 + ((long)__src - (long)puVar7),__src,(long)puVar7 - (long)__src);
    *param_1 = (long)(puVar9 + ((long)__src - (long)puVar7));
    param_1[1] = (long)(puVar9 + param_2);
    param_1[2] = (long)pvVar1 + uVar5;
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    puVar9 = puVar7;
    if (param_2 != 0) {
      uVar3 = param_2 - 1;
      puVar9 = puVar7 + param_2;
      if ((ulong)-(long)puVar7 < uVar3) {
        uVar3 = -(long)puVar7;
      }
      uVar3 = uVar3 + 1;
      if (0x20 < uVar3) {
        uVar5 = 0x20;
        if ((uVar3 & 0x1f) != 0) {
          uVar5 = uVar3 & 0x1f;
        }
        puVar6 = (undefined8 *)(puVar7 + 0x10);
        lVar10 = uVar3 - uVar5;
        puVar7 = puVar7 + lVar10;
        do {
          puVar6[-1] = 0;
          puVar6[-2] = 0;
          puVar6[1] = 0;
          *puVar6 = 0;
          puVar6 = puVar6 + 4;
          lVar10 = lVar10 + -0x20;
        } while (lVar10 != 0);
      }
      do {
        if (puVar7 == (undefined1 *)0x0) goto LAB_00432d4c;
        puVar8 = puVar7 + 1;
        *puVar7 = 0;
        puVar7 = puVar8;
      } while (puVar8 != puVar9);
    }
    param_1[1] = (long)puVar9;
  }
  return;
}


// ===== 00432d78  FUN_00432d78 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00432d78(long param_1)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  lVar2 = *(long *)(*(long *)(param_1 + 8) + (*(ulong *)(param_1 + 0x20) / 0x55) * 8);
  if (lVar2 != 0) {
    uVar3 = *(ulong *)(param_1 + 0x20) % 0x55;
    puVar4 = (undefined8 *)(lVar2 + uVar3 * 0x30);
    FUN_005d3508(lVar2 + uVar3 * 0x30 + 0x18);
    pvVar1 = (void *)*puVar4;
    if (pvVar1 != (void *)0x0) {
      puVar4[1] = pvVar1;
      operator_delete(pvVar1);
    }
    uVar3 = *(long *)(param_1 + 0x20) + _DAT_001f2940;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + _UNK_001f2948;
    *(ulong *)(param_1 + 0x20) = uVar3;
    if (0xa9 < uVar3) {
      operator_delete((void *)**(undefined8 **)(param_1 + 8));
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x55;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h",
             0x3f,"__loc != nullptr","null pointer given to destroy_at");
}


// ===== 00432e50  FUN_00432e50 =====

void FUN_00432e50(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  void *pvVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar4 = param_1[5];
  if (lVar4 == 0) {
    puVar3 = (undefined8 *)param_1[2];
    if (puVar3 != (undefined8 *)param_1[1]) {
      do {
        operator_delete((void *)puVar3[-1]);
        puVar3 = (undefined8 *)(param_1[2] + -8);
        param_1[2] = puVar3;
      } while (puVar3 != (undefined8 *)param_1[1]);
    }
    param_1[4] = 0;
    puVar10 = puVar3;
  }
  else {
    uVar7 = param_1[4];
    puVar10 = (undefined8 *)param_1[1];
    if (0x54 < uVar7) {
      operator_delete((void *)*puVar10);
      lVar4 = param_1[5];
      uVar7 = param_1[4] - 0x55;
      puVar10 = (undefined8 *)(param_1[1] + 8);
      param_1[4] = uVar7;
      param_1[1] = puVar10;
    }
    puVar3 = (undefined8 *)param_1[2];
    lVar1 = 0;
    if (puVar3 != puVar10) {
      lVar1 = ((long)puVar3 - (long)puVar10 >> 3) * 0x55 + -1;
    }
    if (0x54 < lVar1 - (lVar4 + uVar7)) {
      operator_delete((void *)puVar3[-1]);
      puVar3 = (undefined8 *)(param_1[2] + -8);
      param_1[2] = puVar3;
      puVar10 = (undefined8 *)param_1[1];
    }
  }
  uVar7 = (long)puVar3 - (long)puVar10;
  pvVar9 = (void *)*param_1;
  uVar11 = (long)uVar7 >> 3;
  if ((ulong)(param_1[3] - (long)pvVar9 >> 3) <= uVar11) {
    return;
  }
  if (puVar3 == puVar10) {
    puVar2 = (undefined8 *)0x0;
    puVar3 = (undefined8 *)(uVar11 << 3);
  }
  else {
    if ((long)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00401ad4();
    }
    puVar2 = (undefined8 *)operator_new(uVar7);
    puVar3 = puVar2 + uVar11;
    puVar5 = puVar2;
    if ((0x17 < uVar7 - 8) && (0x1f < (ulong)((long)puVar2 - (long)puVar10))) {
      lVar4 = 0;
      uVar7 = (uVar7 - 8 >> 3) + 1;
      uVar8 = uVar7 & 0x3ffffffffffffffc;
      uVar11 = uVar8;
      do {
        puVar5 = (undefined8 *)((long)puVar10 + lVar4);
        puVar6 = (undefined8 *)((long)puVar2 + lVar4);
        lVar4 = lVar4 + 0x20;
        uVar11 = uVar11 - 4;
        uVar12 = *puVar5;
        uVar14 = puVar5[3];
        uVar13 = puVar5[2];
        puVar6[1] = puVar5[1];
        *puVar6 = uVar12;
        puVar6[3] = uVar14;
        puVar6[2] = uVar13;
      } while (uVar11 != 0);
      puVar5 = puVar2 + uVar8;
      puVar10 = puVar10 + uVar8;
      if (uVar7 == uVar8) goto LAB_00432fd0;
    }
    do {
      puVar6 = puVar5 + 1;
      *puVar5 = *puVar10;
      puVar5 = puVar6;
      puVar10 = puVar10 + 1;
    } while (puVar6 != puVar3);
  }
LAB_00432fd0:
  *param_1 = puVar2;
  param_1[1] = puVar2;
  param_1[2] = puVar3;
  param_1[3] = puVar3;
  if (pvVar9 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar9);
  return;
}


// ===== 0043300c  FUN_0043300c =====

undefined8 * FUN_0043300c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  void *pvVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar9 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  puVar2 = puVar9;
  if (puVar1 != puVar9) {
    puVar2 = (undefined8 *)
             ((long)puVar1 + ((long)puVar9 + (7 - (long)puVar1) & 0xfffffffffffffff8U));
    param_1[2] = puVar2;
  }
  uVar8 = (long)puVar2 - (long)puVar9;
  pvVar7 = (void *)*param_1;
  uVar10 = (long)uVar8 >> 3;
  if ((ulong)(param_1[3] - (long)pvVar7 >> 3) <= uVar10) goto LAB_00433124;
  if (puVar2 == puVar9) {
    puVar1 = (undefined8 *)0x0;
    puVar2 = (undefined8 *)(uVar10 << 3);
  }
  else {
    if ((long)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00401ad4();
    }
    puVar1 = (undefined8 *)operator_new(uVar8);
    puVar2 = puVar1 + uVar10;
    puVar3 = puVar1;
    if ((0x17 < uVar8 - 8) && (0x1f < (ulong)((long)puVar1 - (long)puVar9))) {
      lVar5 = 0;
      uVar8 = (uVar8 - 8 >> 3) + 1;
      uVar6 = uVar8 & 0x3ffffffffffffffc;
      uVar10 = uVar6;
      do {
        puVar3 = (undefined8 *)((long)puVar9 + lVar5);
        puVar4 = (undefined8 *)((long)puVar1 + lVar5);
        lVar5 = lVar5 + 0x20;
        uVar10 = uVar10 - 4;
        uVar11 = *puVar3;
        uVar13 = puVar3[3];
        uVar12 = puVar3[2];
        puVar4[1] = puVar3[1];
        *puVar4 = uVar11;
        puVar4[3] = uVar13;
        puVar4[2] = uVar12;
      } while (uVar10 != 0);
      puVar3 = puVar1 + uVar6;
      puVar9 = puVar9 + uVar6;
      if (uVar8 == uVar6) goto LAB_00433110;
    }
    do {
      puVar4 = puVar3 + 1;
      *puVar3 = *puVar9;
      puVar3 = puVar4;
      puVar9 = puVar9 + 1;
    } while (puVar4 != puVar2);
  }
LAB_00433110:
  *param_1 = puVar1;
  param_1[1] = puVar1;
  param_1[2] = puVar2;
  param_1[3] = puVar2;
  if (pvVar7 != (void *)0x0) {
    operator_delete(pvVar7);
  }
LAB_00433124:
  uVar11 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar11;
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  return param_1;
}


// ===== 00433164  FUN_00433164 =====

void FUN_00433164(undefined8 *param_1,float param_2,long *param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  void *__s;
  long lVar3;
  long lVar4;
  long lVar5;
  float *pfVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  void *pvVar10;
  float fVar11;
  undefined1 auVar12 [16];
  
  lVar2 = *param_3;
  lVar5 = param_3[1];
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  lVar4 = lVar5 - lVar2 >> 3;
  uVar9 = lVar4 * -0x5555555555555555;
  lVar3 = uVar9 * param_4;
  if (lVar3 == 0) {
    __s = (void *)0x0;
    pvVar10 = (void *)0x0;
  }
  else {
    if (lVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar8 = lVar3 * 2;
    __s = operator_new(uVar8);
    pvVar10 = (void *)((long)__s + uVar8);
    *param_1 = __s;
    param_1[2] = pvVar10;
    memset(__s,0,uVar8);
    param_1[1] = pvVar10;
  }
  if (lVar5 != lVar2) {
    lVar5 = (long)pvVar10 - (long)__s;
    uVar8 = 0;
    uVar1 = uVar9;
    if (uVar9 < 2) {
      uVar1 = 1;
    }
    lVar4 = lVar4 * 0x5555555555555555;
    do {
      if (param_4 != 0) {
        lVar3 = 0;
        pfVar6 = *(float **)(lVar2 + uVar8 * 0x18);
        lVar7 = param_4;
        do {
          if ((ulong)(lVar5 >> 1) <= lVar4 + lVar3 + uVar9) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x587,
                       "__n < size()","vector[] index out of bounds");
          }
          lVar7 = lVar7 + -1;
          fVar11 = (float)NEON_fmin(*pfVar6 * param_2,0x46fffe00);
          auVar12._8_8_ = 0x7fffffff7fffffff;
          auVar12._0_8_ = 0x7fffffff7fffffff;
          if (fVar11 <= -32768.0) {
            fVar11 = -32768.0;
          }
          auVar12 = NEON_bsl(auVar12,ZEXT816(0x3f000000),ZEXT416((uint)fVar11),1);
          *(short *)((long)__s + lVar3 * 2) = (short)(int)(fVar11 + auVar12._0_4_);
          lVar3 = lVar3 + uVar9;
          pfVar6 = pfVar6 + 1;
        } while (lVar7 != 0);
      }
      uVar8 = uVar8 + 1;
      lVar4 = lVar4 + 1;
      __s = (void *)((long)__s + 2);
    } while (uVar8 != uVar1);
  }
  return;
}


// ===== 004332ec  FUN_004332ec =====

void FUN_004332ec(short *param_1,short *param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  undefined1 auVar2 [16];
  short *psVar3;
  ulong uVar18;
  short *psVar19;
  long lVar20;
  ulong uVar21;
  short *psVar22;
  ulong uVar23;
  long lVar24;
  short sVar25;
  int iVar26;
  int iVar29;
  int iVar30;
  int iVar31;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  int iVar32;
  int iVar34;
  int iVar35;
  int iVar36;
  undefined1 auVar33 [16];
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  short *psVar9;
  short *psVar10;
  short *psVar11;
  short *psVar12;
  short *psVar13;
  short *psVar14;
  short *psVar15;
  short *psVar16;
  short *psVar17;
  
  if (param_4 == 1) {
    if (param_3 != 0) {
      memmove(param_1,param_2,param_3 << 1);
      return;
    }
  }
  else if (param_4 == 2) {
    if (param_3 != 0) {
      if ((param_3 < 8) || ((param_1 < param_2 + param_3 * 2 && (param_2 < param_1 + param_3)))) {
        uVar18 = 0;
      }
      else {
        uVar18 = param_3 & 0xfffffffffffffff8;
        uVar21 = uVar18;
        psVar19 = param_1;
        psVar22 = param_2;
        do {
          sVar25 = *psVar22;
          psVar3 = psVar22 + 1;
          psVar4 = psVar22 + 2;
          psVar5 = psVar22 + 3;
          psVar6 = psVar22 + 4;
          psVar7 = psVar22 + 5;
          psVar8 = psVar22 + 6;
          psVar9 = psVar22 + 7;
          psVar10 = psVar22 + 8;
          psVar11 = psVar22 + 9;
          psVar12 = psVar22 + 10;
          psVar13 = psVar22 + 0xb;
          psVar14 = psVar22 + 0xc;
          psVar15 = psVar22 + 0xd;
          psVar16 = psVar22 + 0xe;
          psVar17 = psVar22 + 0xf;
          psVar22 = psVar22 + 0x10;
          uVar21 = uVar21 - 8;
          auVar27._0_4_ = (int)*psVar3 + (int)sVar25;
          auVar27._4_4_ = (int)*psVar5 + (int)*psVar4;
          auVar27._8_4_ = (int)*psVar7 + (int)*psVar6;
          auVar27._12_4_ = (int)*psVar9 + (int)*psVar8;
          auVar33._0_4_ = (uint)((int)*psVar11 + (int)*psVar10) >> 0x1f;
          auVar33._4_4_ = (uint)((int)*psVar13 + (int)*psVar12) >> 0x1f;
          auVar33._8_4_ = (uint)((int)*psVar15 + (int)*psVar14) >> 0x1f;
          auVar33._12_4_ = (uint)((int)*psVar17 + (int)*psVar16) >> 0x1f;
          auVar28._4_4_ = (int)*psVar13 + (int)*psVar12;
          auVar28._0_4_ = (int)*psVar11 + (int)*psVar10;
          auVar28._8_4_ = (int)*psVar15 + (int)*psVar14;
          auVar28._12_4_ = (int)*psVar17 + (int)*psVar16;
          auVar33 = NEON_shadd(auVar28,auVar33,4);
          auVar2._4_4_ = auVar27._4_4_ >> 0x1f;
          auVar2._0_4_ = auVar27._0_4_ >> 0x1f;
          auVar2._8_4_ = auVar27._8_4_ >> 0x1f;
          auVar2._12_4_ = auVar27._12_4_ >> 0x1f;
          auVar28 = NEON_shadd(auVar27,auVar2,4);
          psVar19[8] = auVar33._0_2_;
          psVar19[9] = auVar33._4_2_;
          psVar19[10] = auVar33._8_2_;
          psVar19[0xb] = auVar33._12_2_;
          *psVar19 = auVar28._0_2_;
          psVar19[1] = auVar28._4_2_;
          psVar19[2] = auVar28._8_2_;
          psVar19[3] = auVar28._12_2_;
          psVar19 = psVar19 + 8;
        } while (uVar21 != 0);
        if (uVar18 == param_3) {
          return;
        }
      }
      lVar20 = param_3 - uVar18;
      param_2 = param_2 + uVar18 * 2 + 1;
      psVar19 = param_1 + uVar18;
      do {
        psVar22 = param_2 + -1;
        sVar25 = *param_2;
        param_2 = param_2 + 2;
        uVar1 = (int)sVar25 + (int)*psVar22;
        if ((int)uVar1 < 0) {
          uVar1 = uVar1 + 1;
        }
        lVar20 = lVar20 + -1;
        *psVar19 = (short)(uVar1 >> 1);
        psVar19 = psVar19 + 1;
      } while (lVar20 != 0);
    }
  }
  else if (param_3 != 0) {
    lVar20 = 0;
    uVar18 = 0;
    uVar21 = param_4 & 0xfffffffffffffff0;
    psVar19 = param_2 + 8;
    do {
      if (param_4 == 0) {
        iVar26 = 0;
      }
      else {
        if (param_4 < 0x10) {
          iVar26 = 0;
          uVar23 = 0;
        }
        else {
          iVar26 = 0;
          iVar29 = 0;
          iVar30 = 0;
          iVar31 = 0;
          iVar32 = 0;
          iVar34 = 0;
          iVar35 = 0;
          iVar36 = 0;
          iVar37 = 0;
          iVar38 = 0;
          iVar39 = 0;
          iVar40 = 0;
          iVar41 = 0;
          iVar42 = 0;
          iVar43 = 0;
          iVar44 = 0;
          uVar23 = uVar21;
          psVar22 = psVar19;
          do {
            uVar46 = *(undefined8 *)(psVar22 + -4);
            uVar45 = *(undefined8 *)(psVar22 + -8);
            uVar48 = *(undefined8 *)(psVar22 + 4);
            uVar47 = *(undefined8 *)psVar22;
            psVar22 = psVar22 + 0x10;
            uVar23 = uVar23 - 0x10;
            iVar32 = iVar32 + (short)uVar46;
            iVar34 = iVar34 + (short)((ulong)uVar46 >> 0x10);
            iVar35 = iVar35 + (short)((ulong)uVar46 >> 0x20);
            iVar36 = iVar36 + (short)((ulong)uVar46 >> 0x30);
            iVar26 = iVar26 + (short)uVar45;
            iVar29 = iVar29 + (short)((ulong)uVar45 >> 0x10);
            iVar30 = iVar30 + (short)((ulong)uVar45 >> 0x20);
            iVar31 = iVar31 + (short)((ulong)uVar45 >> 0x30);
            iVar41 = iVar41 + (short)uVar48;
            iVar42 = iVar42 + (short)((ulong)uVar48 >> 0x10);
            iVar43 = iVar43 + (short)((ulong)uVar48 >> 0x20);
            iVar44 = iVar44 + (short)((ulong)uVar48 >> 0x30);
            iVar37 = iVar37 + (short)uVar47;
            iVar38 = iVar38 + (short)((ulong)uVar47 >> 0x10);
            iVar39 = iVar39 + (short)((ulong)uVar47 >> 0x20);
            iVar40 = iVar40 + (short)((ulong)uVar47 >> 0x30);
          } while (uVar23 != 0);
          iVar26 = iVar37 + iVar26 + iVar41 + iVar32 + iVar38 + iVar29 + iVar42 + iVar34 +
                   iVar39 + iVar30 + iVar43 + iVar35 + iVar40 + iVar31 + iVar44 + iVar36;
          uVar23 = uVar21;
          if (uVar21 == param_4) goto LAB_0043338c;
        }
        lVar24 = param_4 - uVar23;
        psVar22 = param_2 + uVar23 + lVar20;
        do {
          lVar24 = lVar24 + -1;
          iVar26 = iVar26 + *psVar22;
          psVar22 = psVar22 + 1;
        } while (lVar24 != 0);
      }
LAB_0043338c:
      psVar19 = psVar19 + param_4;
      lVar20 = lVar20 + param_4;
      sVar25 = 0;
      if (param_4 != 0) {
        sVar25 = (short)((ulong)(long)iVar26 / param_4);
      }
      param_1[uVar18] = sVar25;
      uVar18 = uVar18 + 1;
    } while (uVar18 != param_3);
  }
  return;
}


