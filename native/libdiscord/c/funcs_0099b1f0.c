// ===== 0099b1f0  FUN_0099b1f0 =====

ulong FUN_0099b1f0(undefined8 *param_1)

{
  uint uVar1;
  ulong uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_00d3fec0;
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_buffer.cc",0x2c1,
                 "AudioDeviceBuffer::~dtor");
  }
  (*(code *)**(undefined8 **)param_1[0xb])();
  param_1[0xb] = 0;
  FUN_0099c710(param_1 + 0x2d);
  pvVar3 = (void *)param_1[0x16];
  param_1[0x16] = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  pvVar3 = (void *)param_1[0x13];
  param_1[0x13] = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  puVar4 = (undefined8 *)param_1[0xb];
  param_1[0xb] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)();
  }
  uVar1 = pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 6));
  uVar2 = (ulong)uVar1;
  plVar5 = (long *)param_1[1];
  if ((plVar5 != (long *)0x0) && (uVar2 = FUN_00d0f7a0(0xffffffff,plVar5 + 1), (int)uVar2 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0099b2c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar5 + 8))(plVar5);
    return uVar2;
  }
  return uVar2;
}


// ===== 0099b2dc  FUN_0099b2dc =====

void FUN_0099b2dc(void *param_1)

{
  FUN_0099b1f0();
  operator_delete(param_1);
  return;
}


// ===== 0099b30c  FUN_0099b30c =====

undefined8 FUN_0099b30c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  if (((*(byte *)(param_1 + 0x80) & 1) == 0) && (*(char *)(param_1 + 0x81) != '\x01')) {
    *(undefined8 *)(param_1 + 0x60) = param_2;
    return 0;
  }
  uVar1 = FUN_004249b0();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_buffer.cc",0x35b,
                 "Failed to set audio transport since media was active");
  }
  return 0xffffffff;
}


// ===== 0099b378  FUN_0099b378 =====

void FUN_0099b378(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 uStack_42;
  undefined1 uStack_41;
  long local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  if ((*(byte *)(param_1 + 0x80) & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_0099c60c;
    local_40[0] = param_1;
    (**(code **)(**(long **)(param_1 + 0x58) + 8))
              (*(long **)(param_1 + 0x58),local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    if ((*(byte *)(param_1 + 0x81) & 1) == 0) {
      local_30 = FUN_004473ec;
      pcStack_28 = FUN_0099c69c;
      local_40[0] = param_1;
      (**(code **)(**(long **)(param_1 + 0x58) + 8))
                (*(long **)(param_1 + 0x58),local_40,&uStack_41,&uStack_42);
      (*local_30)(0,local_40,local_40);
    }
    uVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
    uVar2 = uVar1 / 1000;
    if (499 < uVar1 % 1000) {
      uVar2 = uVar2 + 1;
    }
    if ((uVar1 & 0x8000000000000000) != 0) {
      uVar2 = -(-uVar1 / 1000) - (ulong)(500 < -uVar1 % 1000);
    }
    *(ulong *)(param_1 + 0x100) = uVar2;
    *(undefined1 *)(param_1 + 0x80) = 1;
  }
  return;
}


// ===== 0099b4b4  FUN_0099b4b4 =====

void FUN_0099b4b4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 uStack_42;
  undefined1 uStack_41;
  long local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  if ((*(byte *)(param_1 + 0x81) & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_0099c654;
    local_40[0] = param_1;
    (**(code **)(**(long **)(param_1 + 0x58) + 8))
              (*(long **)(param_1 + 0x58),local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    if ((*(byte *)(param_1 + 0x80) & 1) == 0) {
      local_30 = FUN_004473ec;
      pcStack_28 = FUN_0099c69c;
      local_40[0] = param_1;
      (**(code **)(**(long **)(param_1 + 0x58) + 8))
                (*(long **)(param_1 + 0x58),local_40,&uStack_41,&uStack_42);
      (*local_30)(0,local_40,local_40);
    }
    uVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
    uVar2 = uVar1 / 1000;
    if (499 < uVar1 % 1000) {
      uVar2 = uVar2 + 1;
    }
    *(undefined1 *)(param_1 + 0x81) = 1;
    if ((uVar1 & 0x8000000000000000) != 0) {
      uVar2 = -(-uVar1 / 1000) - (ulong)(500 < -uVar1 % 1000);
    }
    *(ulong *)(param_1 + 0x108) = uVar2;
    *(undefined1 *)(param_1 + 0x160) = 1;
  }
  return;
}


// ===== 0099b5f4  FUN_0099b5f4 =====

void FUN_0099b5f4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long local_40 [2];
  code *local_30;
  code *pcStack_28;
  undefined1 uStack_2;
  undefined1 uStack_1;
  
  if (*(char *)(param_1 + 0x80) == '\x01') {
    *(undefined1 *)(param_1 + 0x80) = 0;
    if ((*(byte *)(param_1 + 0x81) & 1) == 0) {
      local_30 = FUN_004473ec;
      pcStack_28 = FUN_0099c6ac;
      local_40[0] = param_1;
      (**(code **)(**(long **)(param_1 + 0x58) + 8))
                (*(long **)(param_1 + 0x58),local_40,&uStack_1,&uStack_2);
      (*local_30)(0,local_40,local_40);
    }
    uVar1 = FUN_00417e08();
    if ((uVar1 & 1) == 0) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
      uVar1 = uVar2 / 1000;
      if (499 < uVar2 % 1000) {
        uVar1 = uVar1 + 1;
      }
      if ((uVar2 & 0x8000000000000000) != 0) {
        uVar1 = -(-uVar2 / 1000) - (ulong)(500 < -uVar2 % 1000);
      }
      FUN_00623bb0(&DAT_001f6276,"../../modules/audio_device/audio_device_buffer.cc",0x549,
                   "total playout time: ",uVar1 - *(long *)(param_1 + 0x100));
    }
  }
  return;
}


// ===== 0099b71c  FUN_0099b71c =====

void FUN_0099b71c(long param_1)

{
  undefined1 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 uStack_42;
  undefined1 uStack_41;
  long local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  if (*(char *)(param_1 + 0x81) == '\x01') {
    *(undefined1 *)(param_1 + 0x81) = 0;
    if ((*(byte *)(param_1 + 0x80) & 1) == 0) {
      local_30 = FUN_004473ec;
      pcStack_28 = FUN_0099c6ac;
      local_40[0] = param_1;
      (**(code **)(**(long **)(param_1 + 0x58) + 8))
                (*(long **)(param_1 + 0x58),local_40,&uStack_41,&uStack_42);
      (*local_30)(0,local_40,local_40);
    }
    uVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
    uVar4 = uVar2 / 1000;
    if (499 < uVar2 % 1000) {
      uVar4 = uVar4 + 1;
    }
    if ((uVar2 & 0x8000000000000000) != 0) {
      uVar4 = -(-uVar2 / 1000) - (ulong)(500 < -uVar2 % 1000);
    }
    uVar4 = uVar4 - *(long *)(param_1 + 0x108);
    if (10000 < uVar4) {
      uVar1 = *(undefined1 *)(param_1 + 0x160);
      lVar3 = FUN_0066631c("WebRTC.Audio.RecordedOnlyZeros",0x1e,2);
      if (lVar3 != 0) {
        FUN_00666568(lVar3,uVar1);
      }
      uVar2 = FUN_00417e08();
      if ((uVar2 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e94,"../../modules/audio_device/audio_device_buffer.cc",0x639,
                     "HISTOGRAM(WebRTC.Audio.RecordedOnlyZeros): ",uVar1);
      }
    }
    uVar2 = FUN_00417e08();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f6643,"../../modules/audio_device/audio_device_buffer.cc",0x651,
                   "total recording time: ",uVar4);
    }
  }
  return;
}


// ===== 0099b8a4  FUN_0099b8a4 =====

undefined8 FUN_0099b8a4(long param_1,undefined4 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001fcbd8,"../../modules/audio_device/audio_device_buffer.cc",0x671,
                 "SetRecordingSampleRate(",param_2,&DAT_001ca519);
  }
  *(undefined4 *)(param_1 + 0x68) = param_2;
  return 0;
}


// ===== 0099b90c  FUN_0099b90c =====

undefined8 FUN_0099b90c(long param_1,undefined4 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001fcbd8,"../../modules/audio_device/audio_device_buffer.cc",0x6a1,
                 "SetPlayoutSampleRate(",param_2,&DAT_001ca519);
  }
  *(undefined4 *)(param_1 + 0x6c) = param_2;
  return 0;
}


// ===== 0099b974  FUN_0099b974 =====

undefined8 FUN_0099b974(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}


// ===== 0099b984  FUN_0099b984 =====

undefined8 FUN_0099b984(long param_1)

{
  return *(undefined8 *)(param_1 + 0x6c);
}


// ===== 0099b994  FUN_0099b994 =====

undefined8 FUN_0099b994(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f6d4b,"../../modules/audio_device/audio_device_buffer.cc",0x711,
                 "SetRecordingChannels(",param_2,&DAT_001ca519);
  }
  *(undefined8 *)(param_1 + 0x70) = param_2;
  return 0;
}


// ===== 0099b9fc  FUN_0099b9fc =====

undefined8 FUN_0099b9fc(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f6d4b,"../../modules/audio_device/audio_device_buffer.cc",0x741,
                 "SetPlayoutChannels(",param_2,&DAT_001ca519);
  }
  *(undefined8 *)(param_1 + 0x78) = param_2;
  return 0;
}


// ===== 0099ba64  FUN_0099ba64 =====

undefined8 FUN_0099ba64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}


// ===== 0099ba74  FUN_0099ba74 =====

undefined8 FUN_0099ba74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}


// ===== 0099ba84  FUN_0099ba84 =====

void FUN_0099ba84(long param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xbc) = param_2;
  *(undefined4 *)(param_1 + 0xc0) = param_3;
  return;
}


// ===== 0099ba90  FUN_0099ba90 =====

void FUN_0099ba90(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0099baa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}


// ===== 0099baa8  FUN_0099baa8 =====

undefined8 FUN_0099baa8(long param_1,void *param_2,long param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  short sVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar7 = *(ulong *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  uVar8 = *(long *)(param_1 + 0x70) * param_3;
  if (uVar8 != 0) {
    uVar5 = *(ulong *)(param_1 + 0xa8);
    if (uVar8 < uVar5 || uVar8 - uVar5 == 0) {
      pvVar6 = (void *)0x0;
    }
    else {
      uVar5 = uVar5 + (uVar5 >> 1);
      uVar1 = uVar8;
      if (uVar8 < uVar5 || uVar8 - uVar5 == 0) {
        uVar1 = uVar5;
      }
      uVar5 = uVar1 << 1;
      if (uVar1 == 0xffffffffffffffff || (long)(uVar1 + 1) < 0 != SCARRY8(uVar1,1)) {
        uVar5 = 0xffffffffffffffff;
      }
      pvVar3 = operator_new__(uVar5);
      pvVar6 = *(void **)(param_1 + 0xb0);
      *(void **)(param_1 + 0xb0) = pvVar3;
      if (pvVar6 != (void *)0x0) {
        operator_delete__(pvVar6);
        pvVar6 = *(void **)(param_1 + 0xa0);
      }
      *(ulong *)(param_1 + 0xa8) = uVar1;
    }
    memcpy((void *)(*(long *)(param_1 + 0xb0) + (long)pvVar6 * 2),param_2,uVar8 * 2);
    *(ulong *)(param_1 + 0xa0) = uVar8;
  }
  if ((uVar7 != uVar8) && (uVar7 = FUN_00417e08(), (uVar7 & 1) == 0)) {
    FUN_00623bb0(&DAT_001f6643,"../../modules/audio_device/audio_device_buffer.cc",0x879,
                 "Size of recording buffer: ",*(undefined8 *)(param_1 + 0xa0));
  }
  if ((param_5 & 1) != 0) {
    lVar4 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
    if ((*(char *)(param_1 + 0xe0) == '\x01') && (lVar4 + -1000 <= *(long *)(param_1 + 0xd8))) {
      lVar4 = FUN_0099c8b4(param_1 + 0x168,param_4 / 1000);
    }
    else {
      *(long *)(param_1 + 0xd8) = lVar4;
      *(undefined1 *)(param_1 + 0xe0) = 1;
      lVar4 = FUN_0099c718(param_1 + 0x168,param_4 / 1000);
    }
    *(undefined1 *)(param_1 + 0xd0) = 1;
    *(long *)(param_1 + 200) = lVar4 * 1000;
  }
  sVar2 = *(short *)(param_1 + 0xf8) + 1;
  *(short *)(param_1 + 0xf8) = sVar2;
  if (sVar2 < 0x32) {
    sVar2 = 0;
  }
  else {
    sVar2 = (*(code *)PTR_FUN_00d27df8)
                      (*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xa0));
    *(undefined2 *)(param_1 + 0xf8) = 0;
    if (0 < sVar2) {
      *(undefined1 *)(param_1 + 0x160) = 0;
    }
  }
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x30));
  *(long *)(param_1 + 0x110) = *(long *)(param_1 + 0x110) + 1;
  *(long *)(param_1 + 0x120) = *(long *)(param_1 + 0x120) + param_3;
  if (*(short *)(param_1 + 0x130) < sVar2) {
    *(short *)(param_1 + 0x130) = sVar2;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x30));
  return 0;
}


// ===== 0099bccc  FUN_0099bccc =====

undefined8 FUN_0099bccc(long param_1)

{
  ulong *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined4 local_14;
  
  if (*(long *)(param_1 + 0x60) == 0) {
    uVar3 = FUN_004022fc();
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    pcVar5 = "Invalid audio transport";
    uVar4 = 0x9fa;
  }
  else {
    puVar1 = (ulong *)(param_1 + 0x70);
    uVar3 = 0;
    if (*puVar1 != 0) {
      uVar3 = *(ulong *)(param_1 + 0xa0) / *puVar1;
    }
    local_14 = 0;
    iVar2 = (**(code **)(**(long **)(param_1 + 0x60) + 8))
                      (*(long **)(param_1 + 0x60),*(undefined8 *)(param_1 + 0xb0),uVar3,*puVar1 << 1
                       ,*puVar1,*(undefined8 *)(param_1 + 0x68),
                       *(int *)(param_1 + 0xc0) + *(int *)(param_1 + 0xbc),0,0,
                       *(undefined1 *)(param_1 + 0xb8),&local_14,*(undefined8 *)(param_1 + 200),
                       *(undefined8 *)(param_1 + 0xd0));
    if (iVar2 != -1) {
      return 0;
    }
    uVar3 = FUN_004249b0();
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    pcVar5 = "RecordedDataIsAvailable() failed";
    uVar4 = 0xa5b;
  }
  FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_buffer.cc",uVar4,pcVar5);
  return 0;
}


// ===== 0099bdb8  FUN_0099bdb8 =====

ulong FUN_0099bdb8(long param_1,long param_2)

{
  ulong uVar1;
  short sVar2;
  int iVar3;
  void *__dest;
  ulong uVar4;
  void *__src;
  ulong uVar5;
  ulong uVar6;
  undefined8 *in_stack_ffffffffffffff80;
  undefined8 local_78;
  char **local_70;
  char *local_68;
  char *pcStack_60;
  long local_58;
  char *local_38;
  
  if (((DAT_00d807f8 & 1) == 0) && (iVar3 = FUN_0054fdd4(&DAT_00d807f8), iVar3 != 0)) {
    DAT_00d807f0 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d807f8);
  }
  local_70 = (char **)0x0;
  pcStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d807f0 != '\0') {
    local_38 = "samples_per_channel";
    local_78 = CONCAT71(local_78._1_7_,2);
    in_stack_ffffffffffffff80 =
         (undefined8 *)((ulong)in_stack_ffffffffffffff80 & 0xffffffffffffff00);
    local_58 = param_2;
    FUN_0066d348(0x42,DAT_00d807f0,"AudioDeviceBuffer::RequestPlayoutData",0,1,&local_38,&local_78,
                 &local_58,in_stack_ffffffffffffff80);
    local_68 = DAT_00d807f0;
    pcStack_60 = "AudioDeviceBuffer::RequestPlayoutData";
    local_70 = &local_68;
  }
  uVar6 = *(ulong *)(param_1 + 0x88);
  uVar5 = *(long *)(param_1 + 0x78) * param_2;
  if (uVar6 != uVar5) {
    uVar4 = *(ulong *)(param_1 + 0x90);
    if (uVar4 <= uVar5 && uVar5 - uVar4 != 0) {
      uVar4 = uVar4 + (uVar4 >> 1);
      uVar1 = uVar5;
      if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
        uVar1 = uVar4;
      }
      uVar4 = uVar1 << 1;
      if (uVar1 == 0xffffffffffffffff || (long)(uVar1 + 1) < 0 != SCARRY8(uVar1,1)) {
        uVar4 = 0xffffffffffffffff;
      }
      __dest = operator_new__(uVar4);
      __src = *(void **)(param_1 + 0x98);
      if (__src == (void *)0x0) {
        *(void **)(param_1 + 0x98) = __dest;
      }
      else {
        memcpy(__dest,__src,uVar6 << 1);
        *(void **)(param_1 + 0x98) = __dest;
        operator_delete__(__src);
      }
      *(ulong *)(param_1 + 0x90) = uVar1;
    }
    *(ulong *)(param_1 + 0x88) = uVar5;
    uVar5 = FUN_00417e08();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f6643,"../../modules/audio_device/audio_device_buffer.cc",0xad1,
                   "Size of playout buffer: ",*(undefined8 *)(param_1 + 0x88));
    }
  }
  local_38 = (char *)0x0;
  if (*(long *)(param_1 + 0x60) == 0) {
    uVar5 = FUN_004022fc();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_buffer.cc",0xb0a,
                   "Invalid audio transport");
    }
    uVar5 = 0;
  }
  else {
    local_58 = -1;
    local_78 = 0xffffffffffffffff;
    in_stack_ffffffffffffff80 = &local_78;
    iVar3 = (**(code **)(**(long **)(param_1 + 0x60) + 0x10))
                      (*(long **)(param_1 + 0x60),param_2,*(long *)(param_1 + 0x78) << 1,
                       *(long *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x6c),
                       *(undefined8 *)(param_1 + 0x98),&local_38,&local_58,in_stack_ffffffffffffff80
                      );
    if ((iVar3 != 0) && (uVar5 = FUN_004249b0(), (uVar5 & 1) == 0)) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_buffer.cc",0xb6b,
                   "NeedMorePlayData() failed");
    }
    sVar2 = *(short *)(param_1 + 0xfa) + 1;
    *(short *)(param_1 + 0xfa) = sVar2;
    if (sVar2 < 0x32) {
      sVar2 = 0;
    }
    else {
      sVar2 = (*(code *)PTR_FUN_00d27df8)
                        (*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0x88));
      *(undefined2 *)(param_1 + 0xfa) = 0;
    }
    uVar6 = *(ulong *)(param_1 + 0x78);
    uVar5 = 0;
    if (uVar6 != 0) {
      uVar5 = (ulong)local_38 / uVar6;
    }
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x30));
    *(long *)(param_1 + 0x118) = *(long *)(param_1 + 0x118) + 1;
    *(ulong *)(param_1 + 0x128) = *(long *)(param_1 + 0x128) + uVar5;
    if (*(short *)(param_1 + 0x132) < sVar2) {
      *(short *)(param_1 + 0x132) = sVar2;
    }
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x30));
    uVar6 = *(ulong *)(param_1 + 0x78);
    uVar5 = 0;
    if (uVar6 != 0) {
      uVar5 = (ulong)local_38 / uVar6;
    }
  }
  if ((local_70 != (char **)0x0) && (**local_70 != '\0')) {
    FUN_0066d348(0x45,*local_70,local_70[1],0,0,0,0,0,
                 (ulong)in_stack_ffffffffffffff80 & 0xffffffffffffff00);
  }
  return uVar5 & 0xffffffff;
}


// ===== 0099c0e4  FUN_0099c0e4 =====

ulong FUN_0099c0e4(long param_1,void *param_2)

{
  ulong uVar1;
  
  memcpy(param_2,*(void **)(param_1 + 0x98),*(long *)(param_1 + 0x88) << 1);
  uVar1 = 0;
  if (*(ulong *)(param_1 + 0x78) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x88) / *(ulong *)(param_1 + 0x78);
  }
  return uVar1;
}


// ===== 0099c130  FUN_0099c130 =====

void FUN_0099c130(char *param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  short sVar5;
  short sVar6;
  uint uVar7;
  float fVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  undefined1 uStack_c1;
  char *local_c0;
  char **ppcStack_b8;
  ulong local_b0;
  char **ppcStack_a8;
  char *local_a0;
  undefined8 uStack_98;
  code *local_90;
  code *local_88;
  
  uVar9 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  uVar11 = uVar9 / 1000;
  if (499 < uVar9 % 1000) {
    uVar11 = uVar11 + 1;
  }
  if ((uVar9 & 0x8000000000000000) != 0) {
    uVar11 = -(-uVar9 / 1000) - (ulong)(500 < -uVar9 % 1000);
  }
  if (param_2 == 1) {
    param_1[0x161] = '\0';
  }
  else {
    if (param_2 == 0) {
      param_1[0xe8] = '\0';
      param_1[0xe9] = '\0';
      param_1[0xea] = '\0';
      param_1[0xeb] = '\0';
      param_1[0xec] = '\0';
      param_1[0xed] = '\0';
      param_1[0xee] = '\0';
      param_1[0xef] = '\0';
      *(ulong *)(param_1 + 0xf0) = uVar11;
      param_1[0x161] = '\x01';
      uVar9 = uVar11;
    }
    else {
      if (param_1[0x161] != '\x01') {
        return;
      }
      uVar9 = *(ulong *)(param_1 + 0xf0);
    }
    uVar9 = FUN_006259ac(uVar11,uVar9);
    *(ulong *)(param_1 + 0xf0) = uVar11;
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x30));
    lVar1 = *(long *)(param_1 + 0x110);
    lVar3 = *(long *)(param_1 + 0x118);
    sVar5 = *(short *)(param_1 + 0x130);
    sVar6 = *(short *)(param_1 + 0x132);
    param_1[0x130] = '\0';
    param_1[0x131] = '\0';
    param_1[0x132] = '\0';
    param_1[0x133] = '\0';
    uVar2 = *(undefined8 *)(param_1 + 0x120);
    uVar4 = *(undefined8 *)(param_1 + 0x128);
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x30));
    uVar14 = *(ulong *)(param_1 + 0x68);
    uVar13 = *(ulong *)(param_1 + 0x6c);
    lVar12 = *(long *)(param_1 + 0xe8);
    *(ulong *)(param_1 + 0xe8) = lVar12 + 1U;
    if (5000 < uVar9 && 2 < lVar12 + 1U) {
      if ((int)uVar14 != 0) {
        uVar7 = (int)uVar2 - *(int *)(param_1 + 0x148);
        fVar8 = (float)uVar7 / ((float)(long)uVar9 / 1000.0);
        if (fVar8 != 0.0 && fVar8 < 0.0 == NAN(fVar8)) {
          iVar15 = (int)((ABS(fVar8 - (float)(uVar14 & 0xffffffff)) * 100.0) /
                         (float)(uVar14 & 0xffffffff) + 0.5);
          lVar12 = FUN_0066631c("WebRTC.Audio.RecordSampleRateOffsetInPercent",0x2c,0x65);
          if (lVar12 != 0) {
            FUN_00666568(lVar12,iVar15);
          }
          uVar10 = FUN_00417e08();
          if ((uVar10 & 1) == 0) {
            local_a0 = "../../modules/audio_device/audio_device_buffer.cc";
            uStack_98 = 0xeb1;
            local_90 = (code *)&uStack_c1;
            ppcStack_b8 = &local_a0;
            local_c0 = "[REC : ";
            ppcStack_a8 = &local_c0;
            local_b0 = uVar9;
            FUN_00623bb0(&DAT_0022b06b,"../../modules/audio_device/audio_device_buffer.cc",0xeb1,
                         "[REC : ",uVar9,"msec, ",(uVar14 & 0xffffffff) / 1000,"kHz] callbacks: ",
                         lVar1 - *(long *)(param_1 + 0x138),", samples: ",uVar7,", rate: ",
                         (int)(fVar8 + 0.5),", rate diff: ",iVar15,"%, level: ",(int)sVar5);
          }
        }
      }
      if ((int)uVar13 != 0) {
        uVar7 = (int)uVar4 - *(int *)(param_1 + 0x150);
        fVar8 = (float)uVar7 / ((float)(long)uVar9 / 1000.0);
        if (fVar8 != 0.0 && fVar8 < 0.0 == NAN(fVar8)) {
          iVar15 = (int)((ABS(fVar8 - (float)(uVar13 & 0xffffffff)) * 100.0) /
                         (float)(uVar13 & 0xffffffff) + 0.5);
          lVar12 = FUN_0066631c("WebRTC.Audio.PlayoutSampleRateOffsetInPercent",0x2d,0x65);
          if (lVar12 != 0) {
            FUN_00666568(lVar12,iVar15);
          }
          uVar14 = FUN_00417e08();
          if ((uVar14 & 1) == 0) {
            local_a0 = "../../modules/audio_device/audio_device_buffer.cc";
            uStack_98 = 0xf81;
            local_90 = (code *)&uStack_c1;
            ppcStack_b8 = &local_a0;
            local_c0 = "[PLAY: ";
            ppcStack_a8 = &local_c0;
            local_b0 = uVar9;
            FUN_00623bb0(&DAT_0022b06b,"../../modules/audio_device/audio_device_buffer.cc",0xf81,
                         "[PLAY: ",uVar9,"msec, ",(uVar13 & 0xffffffff) / 1000,"kHz] callbacks: ",
                         lVar3 - *(long *)(param_1 + 0x140),", samples: ",uVar7,", rate: ",
                         (int)(fVar8 + 0.5),", rate diff: ",iVar15,"%, level: ",(int)sVar6);
          }
        }
      }
    }
    *(undefined8 *)(param_1 + 0x148) = uVar2;
    *(undefined8 *)(param_1 + 0x150) = uVar4;
    *(long *)(param_1 + 0x138) = lVar1;
    *(long *)(param_1 + 0x140) = lVar3;
    *(short *)(param_1 + 0x158) = sVar5;
    *(short *)(param_1 + 0x15a) = sVar6;
    uVar13 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
    local_b0 = local_b0 & 0xffffffffffffff00;
    uVar9 = -uVar13 / 1000;
    if (500 < -uVar13 % 1000) {
      uVar9 = uVar9 + 1;
    }
    uVar14 = -(uVar13 / 1000) - (ulong)(499 < uVar13 % 1000);
    if ((uVar13 & 0x8000000000000000) != 0) {
      uVar14 = uVar9;
    }
    lVar1 = uVar11 + 10000 + uVar14;
    local_90 = FUN_004473ec;
    if (lVar1 < 0x3e9) {
      lVar1 = 1000;
    }
    local_88 = FUN_0099c6e4;
    local_a0 = param_1;
    (**(code **)(**(long **)(param_1 + 0x58) + 0x10))
              (*(long **)(param_1 + 0x58),&local_a0,lVar1 * 1000,&local_b0,&local_c0);
    (*local_90)(0,&local_a0,&local_a0);
  }
  return;
}


// ===== 0099c60c  FUN_0099c60c =====

int FUN_0099c60c(long *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + 0x140) = 0;
  *(undefined8 *)(lVar2 + 0x150) = 0;
  *(undefined2 *)(lVar2 + 0x15a) = 0;
  pthread_mutex_lock((pthread_mutex_t *)(lVar2 + 0x30));
  *(undefined8 *)(lVar2 + 0x118) = 0;
  *(undefined8 *)(lVar2 + 0x128) = 0;
  *(undefined2 *)(lVar2 + 0x132) = 0;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(lVar2 + 0x30));
  return iVar1;
}


// ===== 0099c654  FUN_0099c654 =====

int FUN_0099c654(long *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + 0x138) = 0;
  *(undefined8 *)(lVar2 + 0x148) = 0;
  *(undefined2 *)(lVar2 + 0x158) = 0;
  pthread_mutex_lock((pthread_mutex_t *)(lVar2 + 0x30));
  *(undefined8 *)(lVar2 + 0x110) = 0;
  *(undefined8 *)(lVar2 + 0x120) = 0;
  *(undefined2 *)(lVar2 + 0x130) = 0;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(lVar2 + 0x30));
  return iVar1;
}


// ===== 0099c69c  FUN_0099c69c =====

void FUN_0099c69c(undefined8 *param_1)

{
  FUN_0099c130(*param_1,0);
  return;
}


// ===== 0099c6ac  FUN_0099c6ac =====

void FUN_0099c6ac(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  (**(code **)(**(long **)(lVar1 + 0x18) + 0x10))();
  *(undefined1 *)(lVar1 + 0x161) = 0;
  return;
}


// ===== 0099c6e4  FUN_0099c6e4 =====

void FUN_0099c6e4(undefined8 *param_1)

{
  FUN_0099c130(*param_1,2);
  return;
}


// ===== 0099c6f4  FUN_0099c6f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0099c6f4(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  uVar2 = _UNK_001f4178;
  uVar1 = _DAT_001f4170;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined8 *)(param_1 + 6) = uVar1;
  return;
}


// ===== 0099c710  FUN_0099c710 =====

void FUN_0099c710(void)

{
  return;
}


// ===== 0099c718  FUN_0099c718 =====

void FUN_0099c718(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = FUN_0099c7d8();
  lVar2 = (lVar1 + param_2) - *(long *)(param_1 + 0x10);
  if (param_3 < lVar2) {
    *(long *)(param_1 + 0x10) = (lVar1 + param_2) - param_3;
    lVar2 = param_3;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x18) + 1000;
    if (((lVar2 < lVar1) && (lVar2 = lVar1, param_3 < lVar1)) &&
       (uVar3 = FUN_004022fc(), lVar2 = param_3, (uVar3 & 1) == 0)) {
      FUN_00623bb0(&DAT_002255de,"../../rtc_base/timestamp_aligner.cc",0x412,
                   "too short translated timestamp interval: system time (us) = ",param_3,
                   ", interval (us) = ",param_3 - *(long *)(param_1 + 0x18));
    }
  }
  *(long *)(param_1 + 0x18) = lVar2;
  *(long *)(param_1 + 0x20) = lVar2 - param_2;
  return;
}


// ===== 0099c7d8  FUN_0099c7d8 =====

void FUN_0099c7d8(int *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  undefined1 uStack_11;
  
  lVar4 = *(long *)(param_1 + 2);
  lVar2 = (param_3 - param_2) - lVar4;
  lVar1 = -lVar2;
  if (-1 < lVar2) {
    lVar1 = lVar2;
  }
  if (lVar1 < 0x493e1) {
    iVar5 = *param_1;
    if (99 < iVar5) goto LAB_0099c88c;
  }
  else {
    uVar3 = FUN_00417e08();
    if ((uVar3 & 1) == 0) {
      FUN_00623bb0(&DAT_0022b07b,"../../rtc_base/timestamp_aligner.cc",0x311,
                   "Resetting timestamp translation after averaging ",*param_1,
                   " frames. Old offset: ",*(undefined8 *)(param_1 + 2),", new offset: ",
                   param_3 - param_2,"../../rtc_base/timestamp_aligner.cc",0x311,&uStack_11);
    }
    lVar4 = *(long *)(param_1 + 2);
    iVar5 = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  iVar5 = iVar5 + 1;
  *param_1 = iVar5;
LAB_0099c88c:
  lVar1 = 0;
  if ((long)iVar5 != 0) {
    lVar1 = lVar2 / (long)iVar5;
  }
  *(long *)(param_1 + 2) = lVar4 + lVar1;
  return;
}


// ===== 0099c8b4  FUN_0099c8b4 =====

long FUN_0099c8b4(long param_1,long param_2)

{
  return *(long *)(param_1 + 0x20) + param_2;
}


// ===== 0099c8c4  FUN_0099c8c4 =====

undefined8 FUN_0099c8c4(void)

{
  return 0xffffffff;
}


// ===== 0099c8d0  FUN_0099c8d0 =====

undefined8 FUN_0099c8d0(void)

{
  return 0;
}


// ===== 0099c8dc  FUN_0099c8dc =====

undefined8 FUN_0099c8dc(void)

{
  return 0;
}


// ===== 0099c8e8  FUN_0099c8e8 =====

undefined8 FUN_0099c8e8(void)

{
  return 1;
}


// ===== 0099c8f4  FUN_0099c8f4 =====

undefined8 FUN_0099c8f4(void)

{
  return 0xffff;
}


// ===== 0099c900  FUN_0099c900 =====

undefined8 FUN_0099c900(void)

{
  return 0xffff;
}


// ===== 0099c90c  FUN_0099c90c =====

undefined8 FUN_0099c90c(void)

{
  return 0xffffffff;
}


// ===== 0099c918  FUN_0099c918 =====

undefined8 FUN_0099c918(void)

{
  return 0xffffffff;
}


// ===== 0099c924  FUN_0099c924 =====

undefined8 FUN_0099c924(void)

{
  return 0xffffffff;
}


// ===== 0099c930  FUN_0099c930 =====

undefined8 FUN_0099c930(void)

{
  return 0xffffffff;
}


// ===== 0099c93c  FUN_0099c93c =====

undefined8 FUN_0099c93c(void)

{
  return 0xffffffff;
}


// ===== 0099c948  FUN_0099c948 =====

undefined8 FUN_0099c948(void)

{
  return 0xffffffff;
}


// ===== 0099c954  FUN_0099c954 =====

undefined8 FUN_0099c954(void)

{
  return 0xffffffff;
}


// ===== 0099c960  FUN_0099c960 =====

undefined8 FUN_0099c960(void)

{
  return 0xffffffff;
}


// ===== 0099c96c  FUN_0099c96c =====

undefined8 FUN_0099c96c(void)

{
  return 0;
}


// ===== 0099c978  FUN_0099c978 =====

undefined8 FUN_0099c978(void)

{
  return 0xffffffff;
}


// ===== 0099c984  FUN_0099c984 =====

undefined8 FUN_0099c984(void)

{
  return 0xffffffff;
}


// ===== 0099c990  FUN_0099c990 =====

undefined8 FUN_0099c990(void)

{
  return 0;
}


// ===== 0099c99c  FUN_0099c99c =====

undefined8 FUN_0099c99c(void)

{
  return 0xffffffff;
}


// ===== 0099c9a8  FUN_0099c9a8 =====

undefined8 FUN_0099c9a8(void)

{
  return 0;
}


// ===== 0099c9b4  FUN_0099c9b4 =====

undefined8 FUN_0099c9b4(void)

{
  return 0;
}


// ===== 0099c9c0  FUN_0099c9c0 =====

undefined8 FUN_0099c9c0(void)

{
  return 0xffffffff;
}


// ===== 0099c9cc  FUN_0099c9cc =====

undefined8 FUN_0099c9cc(void)

{
  return 0;
}


// ===== 0099c9d8  FUN_0099c9d8 =====

undefined8 FUN_0099c9d8(void)

{
  return 0;
}


// ===== 0099c9e4  FUN_0099c9e4 =====

undefined8 FUN_0099c9e4(void)

{
  return 0xffffffff;
}


// ===== 0099c9f0  FUN_0099c9f0 =====

undefined8 FUN_0099c9f0(void)

{
  return 0;
}


// ===== 0099c9fc  FUN_0099c9fc =====

undefined8 FUN_0099c9fc(void)

{
  return 0xffffffff;
}


// ===== 0099ca08  FUN_0099ca08 =====

undefined8 FUN_0099ca08(void)

{
  return 0;
}


// ===== 0099ca14  FUN_0099ca14 =====

undefined8 FUN_0099ca14(void)

{
  return 0xffffffff;
}


// ===== 0099ca20  FUN_0099ca20 =====

undefined8 FUN_0099ca20(void)

{
  return 0xffffffff;
}


// ===== 0099ca2c  FUN_0099ca2c =====

undefined8 FUN_0099ca2c(void)

{
  return 0xffffffff;
}


// ===== 0099ca38  FUN_0099ca38 =====

undefined8 FUN_0099ca38(void)

{
  return 0xffffffff;
}


// ===== 0099ca44  FUN_0099ca44 =====

undefined8 FUN_0099ca44(void)

{
  return 0xffffffff;
}


// ===== 0099ca50  FUN_0099ca50 =====

undefined8 FUN_0099ca50(void)

{
  return 0xffffffff;
}


// ===== 0099ca5c  FUN_0099ca5c =====

undefined8 FUN_0099ca5c(void)

{
  return 0xffffffff;
}


// ===== 0099ca68  FUN_0099ca68 =====

undefined8 FUN_0099ca68(void)

{
  return 0xffffffff;
}


// ===== 0099ca74  FUN_0099ca74 =====

undefined8 FUN_0099ca74(void)

{
  return 0xffffffff;
}


// ===== 0099ca80  FUN_0099ca80 =====

undefined8 FUN_0099ca80(void)

{
  return 0xffffffff;
}


// ===== 0099ca8c  FUN_0099ca8c =====

undefined8 FUN_0099ca8c(void)

{
  return 0xffffffff;
}


// ===== 0099ca98  FUN_0099ca98 =====

undefined8 FUN_0099ca98(void)

{
  return 0xffffffff;
}


// ===== 0099caa4  FUN_0099caa4 =====

undefined8 FUN_0099caa4(void)

{
  return 0xffffffff;
}


// ===== 0099cab0  FUN_0099cab0 =====

undefined8 FUN_0099cab0(void)

{
  return 0xffffffff;
}


// ===== 0099cabc  FUN_0099cabc =====

undefined8 FUN_0099cabc(void)

{
  return 0xffffffff;
}


// ===== 0099cac8  FUN_0099cac8 =====

undefined8 FUN_0099cac8(void)

{
  return 0xffffffff;
}


// ===== 0099cad4  FUN_0099cad4 =====

undefined8 FUN_0099cad4(void)

{
  return 0xffffffff;
}


// ===== 0099cae0  FUN_0099cae0 =====

undefined8 FUN_0099cae0(void)

{
  return 0xffffffff;
}


// ===== 0099caec  FUN_0099caec =====

undefined8 FUN_0099caec(void)

{
  return 0xffffffff;
}


// ===== 0099caf8  FUN_0099caf8 =====

undefined8 FUN_0099caf8(void)

{
  return 0xffffffff;
}


// ===== 0099cb04  FUN_0099cb04 =====

undefined8 FUN_0099cb04(void)

{
  return 0xffffffff;
}


// ===== 0099cb10  FUN_0099cb10 =====

undefined8 FUN_0099cb10(void)

{
  return 0xffffffff;
}


// ===== 0099cb1c  FUN_0099cb1c =====

undefined8 FUN_0099cb1c(void)

{
  return 0xffffffff;
}


// ===== 0099cb28  FUN_0099cb28 =====

void FUN_0099cb28(void)

{
  return;
}


// ===== 0099cb30  FUN_0099cb30 =====

void FUN_0099cb30(void)

{
  return;
}


// ===== 0099cb38  FUN_0099cb38 =====

void FUN_0099cb38(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0099cb44  FUN_0099cb44 =====

undefined8 FUN_0099cb44(void)

{
  return 0;
}


// ===== 0099cb50  FUN_0099cb50 =====

undefined8 FUN_0099cb50(void)

{
  return 0xffffffff;
}


// ===== 0099cb5c  FUN_0099cb5c =====

undefined8 FUN_0099cb5c(void)

{
  return 0;
}


// ===== 0099cb68  FUN_0099cb68 =====

undefined8 FUN_0099cb68(void)

{
  return 0xffffffff;
}


// ===== 0099cb74  FUN_0099cb74 =====

undefined8 FUN_0099cb74(void)

{
  return 0;
}


// ===== 0099cb80  FUN_0099cb80 =====

undefined8 FUN_0099cb80(void)

{
  return 0xffffffff;
}


// ===== 0099cb8c  FUN_0099cb8c =====

undefined8 FUN_0099cb8c(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004249b0();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ead,"../../modules/audio_device/audio_device_generic.cc",0x1db,
                 "SetPlayoutDevice",&DAT_001c4dc3,"Not supported on this platform");
  }
  return 0xffffffff;
}


// ===== 0099cbe0  FUN_0099cbe0 =====

undefined8 FUN_0099cbe0(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004249b0();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ead,"../../modules/audio_device/audio_device_generic.cc",0x203,
                 "SetRecordingDevice",&DAT_001c4dc3,"Not supported on this platform");
  }
  return 0xffffffff;
}


// ===== 0099cc34  FUN_0099cc34 =====

undefined8 FUN_0099cc34(void)

{
  return 0xffffffff;
}


// ===== 0099cc40  FUN_0099cc40 =====

void FUN_0099cc40(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  void *pvVar2;
  
  *param_1 = &PTR_FUN_00d40118;
  FUN_0065a6d0(param_1 + 1);
  param_1[2] = param_3;
  FUN_00660fac(param_1 + 3);
  param_1[5] = param_4;
  param_1[6] = 0;
  pvVar1 = operator_new(0x48);
  FUN_009a0f78(pvVar1,0);
  pvVar2 = (void *)param_1[6];
  param_1[6] = pvVar1;
  if (pvVar2 != (void *)0x0) {
    FUN_009a0f9c(pvVar2);
    operator_delete(pvVar2);
    pvVar1 = (void *)param_1[6];
  }
  *(undefined4 *)((long)pvVar1 + 0x40) = 2;
  *(uint *)((long)pvVar1 + 0x10) = *(uint *)((long)pvVar1 + 0x10) | 0x20;
  return;
}


// ===== 0099cce0  FUN_0099cce0 =====

void FUN_0099cce0(undefined8 *param_1)

{
  void *pvVar1;
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
  undefined1 **local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  *param_1 = &PTR_FUN_00d40118;
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
  pcStack_28 = FUN_0099dca0;
  local_40[0] = &local_a0;
  (**(code **)(*(long *)param_1[5] + 8))((long *)param_1[5],local_40,&uStack_41,&uStack_a1);
  (*local_30)(0,local_40,local_40);
  FUN_0066f318(&local_a0,0x7fffffffffffffff,3000000);
  FUN_0066f2b0(&local_a0);
  pvVar1 = (void *)param_1[6];
  param_1[6] = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_009a0f9c(pvVar1);
    operator_delete(pvVar1);
  }
  FUN_0065a730(param_1 + 1);
  return;
}


// ===== 0099cdc4  FUN_0099cdc4 =====

void FUN_0099cdc4(void *param_1)

{
  FUN_0099cce0();
  operator_delete(param_1);
  return;
}


// ===== 0099cdf4  FUN_0099cdf4 =====

void FUN_0099cdf4(long param_1,undefined4 *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 uStack_52;
  undefined1 uStack_51;
  void *local_50;
  long lStack_48;
  code *local_40;
  code *pcStack_38;
  
  pvVar3 = operator_new(0x48);
  FUN_009a0f78(pvVar3,0);
  lVar4 = *(long *)((long)pvVar3 + 0x18);
  *(undefined4 *)((long)pvVar3 + 0x40) = 0;
  *(uint *)((long)pvVar3 + 0x10) = *(uint *)((long)pvVar3 + 0x10) | 0x21;
  if (lVar4 == 0) {
    uVar5 = *(ulong *)((long)pvVar3 + 8);
    if ((uVar5 & 1) != 0) {
      uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
    }
    lVar4 = FUN_0099db10(uVar5);
    *(long *)((long)pvVar3 + 0x18) = lVar4;
  }
  uVar1 = *(uint *)(lVar4 + 0x10);
  *(undefined4 *)(lVar4 + 0x18) = *param_2;
  *(uint *)(lVar4 + 0x10) = uVar1 | 1;
  uVar2 = param_2[6];
  *(uint *)(lVar4 + 0x10) = uVar1 | 0x41;
  *(undefined4 *)(lVar4 + 0x30) = uVar2;
  uVar2 = param_2[0xc];
  *(uint *)(lVar4 + 0x10) = uVar1 | 0x61;
  *(undefined4 *)(lVar4 + 0x2c) = uVar2;
  uVar2 = param_2[0x12];
  *(uint *)(lVar4 + 0x10) = uVar1 | 0xe1;
  *(undefined4 *)(lVar4 + 0x34) = uVar2;
  uVar6 = *(undefined8 *)(param_2 + 2);
  *(uint *)(lVar4 + 0x10) = uVar1 | 0xe5;
  *(int *)(lVar4 + 0x20) = (int)uVar6;
  uVar6 = *(undefined8 *)(param_2 + 8);
  *(uint *)(lVar4 + 0x10) = uVar1 | 0xed;
  *(int *)(lVar4 + 0x24) = (int)uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0xe);
  *(uint *)(lVar4 + 0x10) = uVar1 | 0xfd;
  *(int *)(lVar4 + 0x28) = (int)uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(lVar4 + 0x38) = param_3;
  *(uint *)(lVar4 + 0x10) = uVar1 | 0x3fd;
  *(int *)(lVar4 + 0x40) = (int)uVar6;
  local_40 = FUN_0099dd6c;
  pcStack_38 = FUN_0099dcac;
  local_50 = pvVar3;
  lStack_48 = param_1;
  (**(code **)(**(long **)(param_1 + 0x28) + 8))
            (*(long **)(param_1 + 0x28),&local_50,&uStack_51,&uStack_52);
  (*local_40)(0,&local_50,&local_50);
  return;
}


// ===== 0099cf68  FUN_0099cf68 =====

void FUN_0099cf68(long param_1)

{
  FUN_0099dde8(param_1 + 0x30);
  return;
}


// ===== 0099cf74  FUN_0099cf74 =====

void FUN_0099cf74(long param_1)

{
  FUN_0099def4(param_1 + 0x30);
  return;
}


// ===== 0099cf80  FUN_0099cf80 =====

void FUN_0099cf80(long param_1)

{
  FUN_0099dfa0(param_1 + 0x30);
  return;
}


// ===== 0099cf8c  FUN_0099cf8c =====

void FUN_0099cf8c(long param_1)

{
  FUN_0099e0ac(param_1 + 0x30);
  return;
}


// ===== 0099cf98  FUN_0099cf98 =====

void FUN_0099cf98(long param_1)

{
  FUN_0099e158(param_1 + 0x30);
  return;
}


// ===== 0099cfa4  FUN_0099cfa4 =====

void FUN_0099cfa4(long param_1)

{
  FUN_0099e224(param_1 + 0x30);
  return;
}


// ===== 0099cfb0  FUN_0099cfb0 =====

void FUN_0099cfb0(long param_1)

{
  FUN_0099e2f0(param_1 + 0x30);
  return;
}


// ===== 0099cfbc  FUN_0099cfbc =====

void FUN_0099cfbc(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined8 local_50;
  long lStack_48;
  code *local_40;
  code *pcStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  pvVar1 = operator_new(0x48);
  FUN_009a0f78(pvVar1,0);
  pvVar2 = *(void **)(param_1 + 0x30);
  *(void **)(param_1 + 0x30) = pvVar1;
  if (pvVar2 != (void *)0x0) {
    FUN_009a0f9c(pvVar2);
    operator_delete(pvVar2);
    pvVar1 = *(void **)(param_1 + 0x30);
  }
  *(undefined4 *)((long)pvVar1 + 0x40) = 2;
  *(uint *)((long)pvVar1 + 0x10) = *(uint *)((long)pvVar1 + 0x10) | 0x20;
  local_40 = FUN_0099dd6c;
  pcStack_38 = FUN_0099dcac;
  local_50 = uVar3;
  lStack_48 = param_1;
  (**(code **)(**(long **)(param_1 + 0x28) + 8))
            (*(long **)(param_1 + 0x28),&local_50,&uStack_51,&uStack_52);
  (*local_40)(0,&local_50,&local_50);
  return;
}


// ===== 0099d08c  FUN_0099d08c =====

void FUN_0099d08c(long param_1,long param_2,int param_3,int param_4)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  void *local_60;
  long lStack_58;
  code *local_50;
  code *pcStack_48;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  pvVar1 = operator_new(0x48);
  FUN_009a0f78(pvVar1,0);
  lVar2 = *(long *)((long)pvVar1 + 0x20);
  *(undefined4 *)((long)pvVar1 + 0x40) = 1;
  *(uint *)((long)pvVar1 + 0x10) = *(uint *)((long)pvVar1 + 0x10) | 0x22;
  if (lVar2 == 0) {
    uVar3 = *(ulong *)((long)pvVar1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    lVar2 = FUN_0099db60(uVar3);
    *(long *)((long)pvVar1 + 0x20) = lVar2;
  }
  uVar3 = *(ulong *)(lVar2 + 8);
  lVar4 = (long)param_4 * (long)param_3 * 2;
  *(uint *)(lVar2 + 0x10) = *(uint *)(lVar2 + 0x10) | 2;
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  if (lVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string_view:331: libc++ Hardening assertion __len <= static_cast<size_type>(numeric_limits<difference_type>::max()) failed: string_view::string_view(_CharT *, size_t): length does not fit in difference_type\n"
               ,lVar4,uVar3);
  }
  if ((param_2 == 0) && (lVar4 != 0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
               ,lVar4,uVar3);
  }
  FUN_00713f34(lVar2 + 0x30,param_2);
  local_50 = FUN_0099dd6c;
  pcStack_48 = FUN_0099dcac;
  local_60 = pvVar1;
  lStack_58 = param_1;
  (**(code **)(**(long **)(param_1 + 0x28) + 8))
            (*(long **)(param_1 + 0x28),&local_60,&uStack_21,&uStack_22);
  (*local_50)(0,&local_60,&local_60);
  return;
}


// ===== 0099d1d4  FUN_0099d1d4 =====

void FUN_0099d1d4(long param_1,int *param_2)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  void *local_60;
  long lStack_58;
  code *local_50;
  code *pcStack_48;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  pvVar1 = operator_new(0x48);
  FUN_009a0f78(pvVar1,0);
  lVar5 = *(long *)((long)pvVar1 + 0x20);
  *(undefined4 *)((long)pvVar1 + 0x40) = 1;
  *(uint *)((long)pvVar1 + 0x10) = *(uint *)((long)pvVar1 + 0x10) | 0x22;
  if (lVar5 == 0) {
    uVar2 = *(ulong *)((long)pvVar1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    lVar5 = FUN_0099db60(uVar2);
    *(long *)((long)pvVar1 + 0x20) = lVar5;
  }
  if (0 < *param_2) {
    lVar6 = 0;
    do {
      if ((char)param_2[6] == '\x01') {
        lVar3 = *(long *)(param_2 + 2);
        pvVar4 = (void *)(*(long *)(param_2 + 4) + lVar3 * lVar6 * 4);
      }
      else {
        if ((char)param_2[6] != '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_005ee558();
        }
        lVar3 = *(long *)(param_2 + 2);
        pvVar4 = *(void **)(*(long *)(param_2 + 4) + lVar6 * 8);
      }
      local_60 = (void *)0x0;
      if (lVar3 != 0) {
        local_60 = pvVar4;
      }
      FUN_0099d31c(lVar5,&local_60,lVar3 << 2);
      lVar6 = lVar6 + 1;
    } while (lVar6 < *param_2);
  }
  local_50 = FUN_0099dd6c;
  pcStack_48 = FUN_0099dcac;
  local_60 = pvVar1;
  lStack_58 = param_1;
  (**(code **)(**(long **)(param_1 + 0x28) + 8))
            (*(long **)(param_1 + 0x28),&local_60,&uStack_21,&uStack_22);
  (*local_50)(0,&local_60,&local_60);
  return;
}


// ===== 0099d31c  FUN_0099d31c =====

void FUN_0099d31c(long param_1,long *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  ulong *puVar7;
  ulong uVar8;
  
  uVar8 = *(ulong *)(param_1 + 8);
  if ((uVar8 & 1) != 0) {
    uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
  }
  puVar7 = (ulong *)(param_1 + 0x18);
  uVar4 = *puVar7;
  if (uVar4 == 0) {
    *(undefined4 *)(param_1 + 0x20) = 1;
    if (uVar8 == 0) goto LAB_0099d4b4;
LAB_0099d3b8:
    puVar2 = (undefined8 *)FUN_006fdb6c(uVar8);
  }
  else {
    Hint_Prefetch(uVar4,0,0,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(param_1 + 0x20) == 0) {
        *(undefined4 *)(param_1 + 0x20) = 1;
        lVar3 = *param_2;
      }
      else {
        puVar7 = (ulong *)FUN_00711858(puVar7,1,uVar8);
        if (uVar8 == 0) {
          puVar2 = (undefined8 *)operator_new(0x18);
        }
        else {
          puVar2 = (undefined8 *)FUN_006fdb6c(uVar8);
        }
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar7 = (ulong)puVar2;
        *(undefined4 *)(*(long *)(param_1 + 0x18) + 3) = 2;
        *(undefined4 *)(param_1 + 0x20) = 2;
        lVar3 = *param_2;
      }
      goto joined_r0x0099d3d0;
    }
    piVar5 = (int *)(uVar4 - 1);
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 == *piVar5) {
      FUN_00711858(puVar7,1,uVar8);
      iVar6 = *(int *)(*puVar7 + 3);
      piVar5 = (int *)(*puVar7 - 1);
    }
    else {
      iVar6 = *(int *)(uVar4 + 3);
      if (0 < iVar6 - iVar1) {
        *(int *)(param_1 + 0x20) = iVar1 + 1;
        puVar7 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
        lVar3 = *param_2;
        goto joined_r0x0099d3d0;
      }
    }
    piVar5[1] = iVar6 + 1;
    iVar1 = *(int *)(param_1 + 0x20);
    *(int *)(param_1 + 0x20) = iVar1 + 1;
    puVar7 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
    if (uVar8 != 0) goto LAB_0099d3b8;
LAB_0099d4b4:
    puVar2 = (undefined8 *)operator_new(0x18);
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar7 = (ulong)puVar2;
  lVar3 = *param_2;
joined_r0x0099d3d0:
  if ((param_3 != 0) && (lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string:2845: libc++ Hardening assertion __n == 0 || __s != nullptr failed: string::assign received nullptr\n"
              );
  }
  FUN_00547b08(*puVar7,lVar3,param_3);
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  return;
}


// ===== 0099d4cc  FUN_0099d4cc =====

void FUN_0099d4cc(long param_1,undefined8 *param_2,uint param_3,uint param_4)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  void *local_70;
  long lStack_68;
  code *local_60;
  code *pcStack_58;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  pvVar1 = operator_new(0x48);
  FUN_009a0f78(pvVar1,0);
  lVar3 = *(long *)((long)pvVar1 + 0x20);
  *(undefined4 *)((long)pvVar1 + 0x40) = 1;
  *(uint *)((long)pvVar1 + 0x10) = *(uint *)((long)pvVar1 + 0x10) | 0x22;
  if (lVar3 == 0) {
    uVar2 = *(ulong *)((long)pvVar1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    lVar3 = FUN_0099db60(uVar2);
    *(long *)((long)pvVar1 + 0x20) = lVar3;
  }
  if (0 < (int)param_3) {
    uVar2 = (ulong)param_3;
    do {
      local_70 = (void *)0x0;
      if (param_4 != 0) {
        local_70 = (void *)*param_2;
      }
      FUN_0099d31c(lVar3,&local_70,
                   -(ulong)(param_4 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_4 << 2);
      uVar2 = uVar2 - 1;
      param_2 = param_2 + 1;
    } while (uVar2 != 0);
  }
  local_60 = FUN_0099dd6c;
  pcStack_58 = FUN_0099dcac;
  local_70 = pvVar1;
  lStack_68 = param_1;
  (**(code **)(**(long **)(param_1 + 0x28) + 8))
            (*(long **)(param_1 + 0x28),&local_70,&uStack_31,&uStack_32);
  (*local_60)(0,&local_70,&local_70);
  return;
}


// ===== 0099d5f0  FUN_0099d5f0 =====

void FUN_0099d5f0(long param_1,undefined1 *param_2)

{
  uint uVar1;
  undefined1 uVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  undefined4 uVar6;
  undefined1 uStack_52;
  undefined1 uStack_51;
  void *local_50;
  long lStack_48;
  code *local_40;
  code *pcStack_38;
  
  pvVar3 = operator_new(0x48);
  FUN_009a0f78(pvVar3,0);
  lVar5 = *(long *)((long)pvVar3 + 0x30);
  *(undefined4 *)((long)pvVar3 + 0x40) = 3;
  *(uint *)((long)pvVar3 + 0x10) = *(uint *)((long)pvVar3 + 0x10) | 0x28;
  if (lVar5 == 0) {
    uVar4 = *(ulong *)((long)pvVar3 + 8);
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    lVar5 = FUN_0099dbb0(uVar4);
    *(long *)((long)pvVar3 + 0x30) = lVar5;
  }
  uVar1 = *(uint *)(lVar5 + 0x10);
  uVar4 = *(ulong *)(lVar5 + 8);
  *(undefined1 *)(lVar5 + 0x28) = *param_2;
  *(uint *)(lVar5 + 0x10) = uVar1 | 4;
  uVar2 = param_2[1];
  *(uint *)(lVar5 + 0x10) = uVar1 | 0xc;
  *(undefined1 *)(lVar5 + 0x29) = uVar2;
  uVar2 = param_2[2];
  *(uint *)(lVar5 + 0x10) = uVar1 | 0x1c;
  *(undefined1 *)(lVar5 + 0x2a) = uVar2;
  uVar2 = param_2[3];
  *(uint *)(lVar5 + 0x10) = uVar1 | 0x3c;
  *(undefined1 *)(lVar5 + 0x2b) = uVar2;
  uVar6 = *(undefined4 *)(param_2 + 4);
  *(uint *)(lVar5 + 0x10) = uVar1 | 0x7c;
  *(undefined4 *)(lVar5 + 0x2c) = uVar6;
  uVar2 = param_2[8];
  *(uint *)(lVar5 + 0x10) = uVar1 | 0x17c;
  *(undefined1 *)(lVar5 + 0x34) = uVar2;
  uVar6 = *(undefined4 *)(param_2 + 0xc);
  *(uint *)(lVar5 + 0x10) = uVar1 | 0x1fc;
  *(undefined4 *)(lVar5 + 0x30) = uVar6;
  uVar2 = param_2[0x10];
  *(uint *)(lVar5 + 0x10) = uVar1 | 0x3fc;
  *(undefined1 *)(lVar5 + 0x35) = uVar2;
  uVar2 = param_2[0x19];
  *(uint *)(lVar5 + 0x10) = uVar1 | 0x7fc;
  *(undefined1 *)(lVar5 + 0x36) = uVar2;
  uVar2 = param_2[0x11];
  *(uint *)(lVar5 + 0x10) = uVar1 | 0xffc;
  *(undefined1 *)(lVar5 + 0x37) = uVar2;
  uVar2 = param_2[0x12];
  *(uint *)(lVar5 + 0x10) = uVar1 | 0x2ffc;
  *(undefined1 *)(lVar5 + 0x3c) = uVar2;
  uVar6 = *(undefined4 *)(param_2 + 0x14);
  *(uint *)(lVar5 + 0x10) = uVar1 | 0x3ffc;
  *(undefined4 *)(lVar5 + 0x38) = uVar6;
  uVar2 = param_2[0x18];
  *(uint *)(lVar5 + 0x10) = uVar1 | 0x7ffc;
  *(undefined1 *)(lVar5 + 0x3d) = uVar2;
  uVar2 = param_2[0x1a];
  *(uint *)(lVar5 + 0x10) = uVar1 | 0xfffc;
  *(undefined1 *)(lVar5 + 0x3e) = uVar2;
  uVar6 = *(undefined4 *)(param_2 + 0x1c);
  *(uint *)(lVar5 + 0x10) = uVar1 | 0x1fffd;
  *(undefined4 *)(lVar5 + 0x40) = uVar6;
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  FUN_00713ffc(lVar5 + 0x18,param_2 + 0x20,uVar4);
  uVar4 = *(ulong *)(lVar5 + 8);
  *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 0x10) | 2;
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  FUN_00713ffc(lVar5 + 0x20,param_2 + 0x38,uVar4);
  local_40 = FUN_0099dd6c;
  pcStack_38 = FUN_0099dcac;
  local_50 = pvVar3;
  lStack_48 = param_1;
  (**(code **)(**(long **)(param_1 + 0x28) + 8))
            (*(long **)(param_1 + 0x28),&local_50,&uStack_51,&uStack_52);
  (*local_40)(0,&local_50,&local_50);
  return;
}


// ===== 0099d810  FUN_0099d810 =====

void FUN_0099d810(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  void *local_60;
  long lStack_58;
  code *local_50;
  code *pcStack_48;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  pvVar3 = operator_new(0x48);
  FUN_009a0f78(pvVar3,0);
  lVar7 = *(long *)((long)pvVar3 + 0x38);
  *(undefined4 *)((long)pvVar3 + 0x40) = 5;
  *(uint *)((long)pvVar3 + 0x10) = *(uint *)((long)pvVar3 + 0x10) | 0x30;
  if (lVar7 == 0) {
    uVar4 = *(ulong *)((long)pvVar3 + 8);
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    lVar7 = FUN_0099dc00(uVar4);
    *(long *)((long)pvVar3 + 0x38) = lVar7;
  }
  iVar2 = *param_2;
  if (iVar2 < 5) {
    if (iVar2 == 1) {
      *(int *)(lVar7 + 0x20) = param_2[1];
      uVar6 = *(uint *)(lVar7 + 0x10) | 2;
    }
    else if (iVar2 == 3) {
      uVar6 = *(uint *)(lVar7 + 0x10) | 8;
      *(int *)(lVar7 + 0x28) = param_2[1];
    }
    else {
      if (iVar2 != 4) goto LAB_0099d978;
      *(int *)(lVar7 + 0x2c) = param_2[1];
      uVar6 = *(uint *)(lVar7 + 0x10) | 0x10;
    }
  }
  else if (iVar2 < 7) {
    if (iVar2 != 5) {
      if (iVar2 == 6) {
        lVar5 = *(long *)(lVar7 + 0x18);
        iVar2 = param_2[1];
        iVar1 = param_2[2];
        *(uint *)(lVar7 + 0x10) = *(uint *)(lVar7 + 0x10) | 1;
        if (lVar5 == 0) {
          uVar4 = *(ulong *)(lVar7 + 8);
          if ((uVar4 & 1) != 0) {
            uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
          }
          lVar5 = FUN_0099dc50(uVar4);
          *(long *)(lVar7 + 0x18) = lVar5;
        }
        *(int *)(lVar5 + 0x18) = iVar2;
        *(int *)(lVar5 + 0x1c) = iVar1;
        *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 0x10) | 3;
      }
      goto LAB_0099d978;
    }
    *(int *)(lVar7 + 0x24) = param_2[1];
    uVar6 = *(uint *)(lVar7 + 0x10) | 4;
  }
  else if (iVar2 == 7) {
    *(int *)(lVar7 + 0x34) = param_2[1];
    uVar6 = *(uint *)(lVar7 + 0x10) | 0x40;
  }
  else {
    if (iVar2 != 8) goto LAB_0099d978;
    *(char *)(lVar7 + 0x30) = (char)param_2[1];
    uVar6 = *(uint *)(lVar7 + 0x10) | 0x20;
  }
  *(uint *)(lVar7 + 0x10) = uVar6;
LAB_0099d978:
  local_50 = FUN_0099dd6c;
  pcStack_48 = FUN_0099dcac;
  local_60 = pvVar3;
  lStack_58 = param_1;
  (**(code **)(**(long **)(param_1 + 0x28) + 8))
            (*(long **)(param_1 + 0x28),&local_60,&uStack_21,&uStack_22);
  (*local_50)(0,&local_60,&local_60);
  return;
}


// ===== 0099d9f4  FUN_0099d9f4 =====

void * FUN_0099d9f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  long local_38;
  undefined1 auStack_18 [8];
  
  FUN_0065a69c(&local_38,param_1,param_2,0);
  if (local_38 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = operator_new(0x38);
    FUN_0065a6d0(auStack_18,&local_38);
    FUN_0099cc40(pvVar1,auStack_18,param_3,param_4);
    FUN_0065a730(auStack_18);
  }
  FUN_0065a730(&local_38);
  return pvVar1;
}


// ===== 0099da88  FUN_0099da88 =====

void * FUN_0099da88(long param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  long local_38;
  undefined1 auStack_18 [8];
  
  local_38 = param_1;
  if (param_1 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = operator_new(0x38);
    FUN_0065a6d0(auStack_18,&local_38);
    FUN_0099cc40(pvVar1,auStack_18,param_2,param_3);
    FUN_0065a730(auStack_18);
  }
  FUN_0065a730(&local_38);
  return pvVar1;
}


// ===== 0099db10  FUN_0099db10 =====

void * FUN_0099db10(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x48);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x48);
  }
  FUN_0099e578(pvVar1,param_1);
  return pvVar1;
}


// ===== 0099db60  FUN_0099db60 =====

void * FUN_0099db60(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x38);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x38);
  }
  FUN_0099eb08(pvVar1,param_1);
  return pvVar1;
}


// ===== 0099dbb0  FUN_0099dbb0 =====

void * FUN_0099dbb0(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x48);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x48);
  }
  FUN_0099fc94(pvVar1,param_1);
  return pvVar1;
}


// ===== 0099dc00  FUN_0099dc00 =====

void * FUN_0099dc00(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x38);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x38);
  }
  FUN_009a0950(pvVar1,param_1);
  return pvVar1;
}


// ===== 0099dc50  FUN_0099dc50 =====

void * FUN_0099dc50(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x20);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x20);
  }
  FUN_009a06d4(pvVar1,param_1);
  return pvVar1;
}


// ===== 0099dca0  FUN_0099dca0 =====

void FUN_0099dca0(undefined8 *param_1)

{
  FUN_0066f2dc(*param_1);
  return;
}


// ===== 0099dcac  FUN_0099dcac =====

void FUN_0099dcac(undefined8 *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 ****ppppuVar4;
  uint uVar5;
  long lVar6;
  undefined1 *local_48;
  undefined8 ***local_40;
  undefined1 *puStack_38;
  undefined8 local_30;
  
  lVar3 = param_1[1];
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = (undefined8 ***)&DAT_aaaaaaaaaaaaaaaa;
  FUN_006dca58(&local_40,*param_1);
  uVar5 = (uint)(char)local_30._7_1_;
  local_48 = puStack_38;
  if (-1 < (int)uVar5) {
    local_48 = (undefined1 *)(ulong)local_30._7_1_;
  }
  lVar6 = *(long *)(lVar3 + 0x10);
  if (-1 < lVar6) {
    puVar1 = local_48 + 4;
    lVar2 = 0;
    if ((long)puVar1 <= lVar6) {
      lVar2 = lVar6 - (long)puVar1;
    }
    *(long *)(lVar3 + 0x10) = lVar2;
    if (lVar6 < (long)puVar1) goto LAB_0099dd44;
  }
  FUN_0065a830(lVar3 + 8,&local_48,4);
  puVar1 = puStack_38;
  ppppuVar4 = (undefined8 ****)local_40;
  if (-1 < (long)local_30) {
    puVar1 = (undefined1 *)((ulong)local_30 >> 0x38);
    ppppuVar4 = &local_40;
  }
  FUN_0065a830(lVar3 + 8,ppppuVar4,puVar1);
  uVar5 = (uint)local_30._7_1_;
LAB_0099dd44:
  if ((uVar5 >> 7 & 1) != 0) {
    operator_delete(local_40);
  }
  return;
}


// ===== 0099dd6c  FUN_0099dd6c =====

void FUN_0099dd6c(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  if ((param_1 & 0xff) - 1 < 2) {
    uVar2 = *param_2;
    *param_2 = 0;
    *param_3 = uVar2;
    param_3[1] = param_2[1];
  }
  else if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x99dde8);
    (*pcVar1)();
  }
  pvVar3 = (void *)*param_2;
  *param_2 = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_009a0f9c(pvVar3);
    operator_delete(pvVar3);
    return;
  }
  return;
}


// ===== 0099dde8  FUN_0099dde8 =====

void FUN_0099dde8(long *param_1,int *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long local_38;
  
  if (0 < *param_2) {
    lVar4 = 0;
    do {
      if ((char)param_2[6] == '\x01') {
        lVar5 = *(long *)(param_2 + 2);
        lVar3 = *(long *)(param_2 + 4) + lVar5 * lVar4 * 4;
      }
      else {
        if ((char)param_2[6] != '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_005ee558();
        }
        lVar5 = *(long *)(param_2 + 2);
        lVar3 = *(long *)(*(long *)(param_2 + 4) + lVar4 * 8);
      }
      lVar6 = *param_1;
      lVar1 = 0;
      if (lVar5 != 0) {
        lVar1 = lVar3;
      }
      lVar3 = *(long *)(lVar6 + 0x28);
      *(uint *)(lVar6 + 0x10) = *(uint *)(lVar6 + 0x10) | 4;
      if (lVar3 == 0) {
        uVar2 = *(ulong *)(lVar6 + 8);
        if ((uVar2 & 1) != 0) {
          uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
        }
        lVar3 = FUN_0099e398(uVar2);
        *(long *)(lVar6 + 0x28) = lVar3;
      }
      uVar2 = *(ulong *)(lVar3 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      local_38 = lVar1;
      FUN_0099e3e8(0,uVar2,lVar3 + 0x18,&local_38,lVar5 << 2,0);
      lVar4 = lVar4 + 1;
      *(uint *)(lVar3 + 0x10) = *(uint *)(lVar3 + 0x10) | 1;
    } while (lVar4 < *param_2);
  }
  return;
}


// ===== 0099def4  FUN_0099def4 =====

void FUN_0099def4(long *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 local_38;
  
  lVar3 = *param_1;
  lVar2 = *(long *)(lVar3 + 0x28);
  *(uint *)(lVar3 + 0x10) = *(uint *)(lVar3 + 0x10) | 4;
  if (lVar2 == 0) {
    uVar1 = *(ulong *)(lVar3 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    lVar2 = FUN_0099e398(uVar1);
    *(long *)(lVar3 + 0x28) = lVar2;
  }
  uVar1 = *(ulong *)(lVar2 + 8);
  if ((uVar1 & 1) != 0) {
    uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
  }
  local_38 = param_2;
  FUN_0099e3e8(0,uVar1,lVar2 + 0x18,&local_38,param_3 << 2,0);
  *(uint *)(lVar2 + 0x10) = *(uint *)(lVar2 + 0x10) | 1;
  return;
}


// ===== 0099dfa0  FUN_0099dfa0 =====

void FUN_0099dfa0(long *param_1,int *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long local_38;
  
  if (0 < *param_2) {
    lVar4 = 0;
    do {
      if ((char)param_2[6] == '\x01') {
        lVar5 = *(long *)(param_2 + 2);
        lVar3 = *(long *)(param_2 + 4) + lVar5 * lVar4 * 4;
      }
      else {
        if ((char)param_2[6] != '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_005ee558();
        }
        lVar5 = *(long *)(param_2 + 2);
        lVar3 = *(long *)(*(long *)(param_2 + 4) + lVar4 * 8);
      }
      lVar6 = *param_1;
      lVar1 = 0;
      if (lVar5 != 0) {
        lVar1 = lVar3;
      }
      lVar3 = *(long *)(lVar6 + 0x28);
      *(uint *)(lVar6 + 0x10) = *(uint *)(lVar6 + 0x10) | 4;
      if (lVar3 == 0) {
        uVar2 = *(ulong *)(lVar6 + 8);
        if ((uVar2 & 1) != 0) {
          uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
        }
        lVar3 = FUN_0099e398(uVar2);
        *(long *)(lVar6 + 0x28) = lVar3;
      }
      uVar2 = *(ulong *)(lVar3 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      local_38 = lVar1;
      FUN_0099e3e8(0,uVar2,lVar3 + 0x30,&local_38,lVar5 << 2,0);
      lVar4 = lVar4 + 1;
      *(uint *)(lVar3 + 0x10) = *(uint *)(lVar3 + 0x10) | 2;
    } while (lVar4 < *param_2);
  }
  return;
}


// ===== 0099e0ac  FUN_0099e0ac =====

void FUN_0099e0ac(long *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 local_38;
  
  lVar3 = *param_1;
  lVar2 = *(long *)(lVar3 + 0x28);
  *(uint *)(lVar3 + 0x10) = *(uint *)(lVar3 + 0x10) | 4;
  if (lVar2 == 0) {
    uVar1 = *(ulong *)(lVar3 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    lVar2 = FUN_0099e398(uVar1);
    *(long *)(lVar3 + 0x28) = lVar2;
  }
  uVar1 = *(ulong *)(lVar2 + 8);
  if ((uVar1 & 1) != 0) {
    uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
  }
  local_38 = param_2;
  FUN_0099e3e8(0,uVar1,lVar2 + 0x30,&local_38,param_3 << 2,0);
  *(uint *)(lVar2 + 0x10) = *(uint *)(lVar2 + 0x10) | 2;
  return;
}


// ===== 0099e158  FUN_0099e158 =====

void FUN_0099e158(long *param_1,long param_2,int param_3,int param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  lVar1 = *(long *)(lVar3 + 0x28);
  *(uint *)(lVar3 + 0x10) = *(uint *)(lVar3 + 0x10) | 4;
  if (lVar1 == 0) {
    uVar2 = *(ulong *)(lVar3 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    lVar1 = FUN_0099e398(uVar2);
    *(long *)(lVar3 + 0x28) = lVar1;
  }
  uVar2 = *(ulong *)(lVar1 + 8);
  lVar3 = (long)param_4 * (long)param_3 * 2;
  *(uint *)(lVar1 + 0x10) = *(uint *)(lVar1 + 0x10) | 4;
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  if (lVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string_view:331: libc++ Hardening assertion __len <= static_cast<size_type>(numeric_limits<difference_type>::max()) failed: string_view::string_view(_CharT *, size_t): length does not fit in difference_type\n"
               ,lVar3,uVar2);
  }
  if ((param_2 == 0) && (lVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
               ,lVar3,uVar2);
  }
  FUN_00713f34(lVar1 + 0x48,param_2);
  return;
}


// ===== 0099e224  FUN_0099e224 =====

void FUN_0099e224(long *param_1,long param_2,int param_3,int param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  lVar1 = *(long *)(lVar3 + 0x28);
  *(uint *)(lVar3 + 0x10) = *(uint *)(lVar3 + 0x10) | 4;
  if (lVar1 == 0) {
    uVar2 = *(ulong *)(lVar3 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    lVar1 = FUN_0099e398(uVar2);
    *(long *)(lVar3 + 0x28) = lVar1;
  }
  uVar2 = *(ulong *)(lVar1 + 8);
  lVar3 = (long)param_4 * (long)param_3 * 2;
  *(uint *)(lVar1 + 0x10) = *(uint *)(lVar1 + 0x10) | 8;
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  if (lVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string_view:331: libc++ Hardening assertion __len <= static_cast<size_type>(numeric_limits<difference_type>::max()) failed: string_view::string_view(_CharT *, size_t): length does not fit in difference_type\n"
               ,lVar3,uVar2);
  }
  if ((param_2 == 0) && (lVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
               ,lVar3,uVar2);
  }
  FUN_00713f34(lVar1 + 0x50,param_2);
  return;
}


// ===== 0099e2f0  FUN_0099e2f0 =====

void FUN_0099e2f0(long *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  
  lVar6 = *param_1;
  lVar3 = *(long *)(lVar6 + 0x28);
  *(uint *)(lVar6 + 0x10) = *(uint *)(lVar6 + 0x10) | 4;
  if (lVar3 == 0) {
    uVar4 = *(ulong *)(lVar6 + 8);
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    lVar3 = FUN_0099e398(uVar4);
    *(long *)(lVar6 + 0x28) = lVar3;
  }
  uVar1 = *(uint *)(lVar3 + 0x10);
  *(undefined4 *)(lVar3 + 0x58) = *param_2;
  *(uint *)(lVar3 + 0x10) = uVar1 | 0x10;
  uVar5 = uVar1 | 0x30;
  uVar2 = param_2[1];
  *(uint *)(lVar3 + 0x10) = uVar5;
  *(undefined4 *)(lVar3 + 0x5c) = uVar2;
  if (*(char *)(param_2 + 3) == '\x01') {
    uVar2 = param_2[2];
    uVar5 = uVar1 | 0x70;
    *(uint *)(lVar3 + 0x10) = uVar5;
    *(undefined4 *)(lVar3 + 0x60) = uVar2;
  }
  *(undefined1 *)(lVar3 + 100) = *(undefined1 *)(param_2 + 4);
  *(uint *)(lVar3 + 0x10) = uVar5 | 0x80;
  return;
}


// ===== 0099e398  FUN_0099e398 =====

void * FUN_0099e398(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x68);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x68);
  }
  FUN_0099f0f8(pvVar1,param_1);
  return pvVar1;
}


// ===== 0099e3e8  FUN_0099e3e8 =====

void FUN_0099e3e8(undefined8 param_1,long param_2,ulong *param_3,long *param_4,long param_5)

{
  int iVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  int iVar7;
  
  uVar5 = *param_3;
  if (uVar5 == 0) {
    *(int *)(param_3 + 1) = 1;
    if (param_2 == 0) goto LAB_0099e560;
LAB_0099e480:
    puVar3 = (undefined8 *)FUN_006fdb6c(param_2);
  }
  else {
    Hint_Prefetch(uVar5,0,0,0);
    if ((uVar5 & 1) == 0) {
      if ((int)param_3[1] == 0) {
        *(int *)(param_3 + 1) = 1;
        lVar4 = *param_4;
        puVar2 = param_3;
      }
      else {
        puVar2 = (ulong *)FUN_00711858(param_3,1,param_2);
        if (param_2 == 0) {
          puVar3 = (undefined8 *)operator_new(0x18);
        }
        else {
          puVar3 = (undefined8 *)FUN_006fdb6c(param_2);
        }
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        *puVar2 = (ulong)puVar3;
        *(undefined4 *)(*param_3 + 3) = 2;
        *(int *)(param_3 + 1) = 2;
        lVar4 = *param_4;
      }
      goto joined_r0x0099e498;
    }
    piVar6 = (int *)(uVar5 - 1);
    iVar1 = (int)param_3[1];
    if (iVar1 == *piVar6) {
      FUN_00711858(param_3,1,param_2);
      iVar7 = *(int *)(*param_3 + 3);
      piVar6 = (int *)(*param_3 - 1);
    }
    else {
      iVar7 = *(int *)(uVar5 + 3);
      if (0 < iVar7 - iVar1) {
        *(int *)(param_3 + 1) = iVar1 + 1;
        puVar2 = (ulong *)(piVar6 + (long)iVar1 * 2 + 2);
        lVar4 = *param_4;
        goto joined_r0x0099e498;
      }
    }
    piVar6[1] = iVar7 + 1;
    uVar5 = param_3[1];
    *(int *)(param_3 + 1) = (int)uVar5 + 1;
    param_3 = (ulong *)(piVar6 + (long)(int)uVar5 * 2 + 2);
    if (param_2 != 0) goto LAB_0099e480;
LAB_0099e560:
    puVar3 = (undefined8 *)operator_new(0x18);
  }
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *param_3 = (ulong)puVar3;
  lVar4 = *param_4;
  puVar2 = param_3;
joined_r0x0099e498:
  if ((param_5 != 0) && (lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string:2845: libc++ Hardening assertion __n == 0 || __s != nullptr failed: string::assign received nullptr\n"
              );
  }
  FUN_00547b08(*puVar2,lVar4,param_5);
  return;
}


// ===== 0099e578  FUN_0099e578 =====

void FUN_0099e578(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_00d40268;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  return;
}


// ===== 0099e59c  FUN_0099e59c =====

void FUN_0099e59c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dbb00();
  return;
}


// ===== 0099e5b0  FUN_0099e5b0 =====

void FUN_0099e5b0(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  operator_delete(param_1);
  return;
}


// ===== 0099e5e8  FUN_0099e5e8 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0099e5e8(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    }
    if ((uVar1 >> 6 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    }
    if ((uVar1 >> 7 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    }
  }
  if ((uVar1 & 0x300) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    }
    if ((uVar1 >> 9 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
    return;
  }
  return;
}


// ===== 0099e6c0  FUN_0099e6c0 =====

undefined ** FUN_0099e6c0(void)

{
  return &PTR_PTR_00d40358;
}


// ===== 0099e6d0  FUN_0099e6d0 =====

void FUN_0099e6d0(long param_1)

{
  if ((*(uint *)(param_1 + 0x10) & 0xff) != 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if ((*(uint *)(param_1 + 0x10) & 0x300) != 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0();
  return;
}


// ===== 0099e710  FUN_0099e710 =====

/* WARNING: Type propagation algorithm not settling */

void * FUN_0099e710(long param_1,void *param_2,long *param_3)

{
  uint uVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_2 = (void *)FUN_006d89ec(param_3,*(undefined4 *)(param_1 + 0x18),param_2);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = (void *)FUN_006da6b8(param_3,*(undefined4 *)(param_1 + 0x1c),param_2);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_2 = (void *)FUN_006d8a68(param_3,*(undefined4 *)(param_1 + 0x20),param_2);
  }
  if ((uVar1 >> 3 & 1) != 0) {
    param_2 = (void *)FUN_006d9c64(param_3,*(undefined4 *)(param_1 + 0x24),param_2);
  }
  if ((uVar1 >> 4 & 1) != 0) {
    param_2 = (void *)FUN_006d9ce0(param_3,*(undefined4 *)(param_1 + 0x28),param_2);
  }
  if ((uVar1 >> 5 & 1) != 0) {
    param_2 = (void *)FUN_006d9d5c(param_3,*(undefined4 *)(param_1 + 0x2c),param_2);
  }
  if ((uVar1 >> 6 & 1) != 0) {
    param_2 = (void *)FUN_006d9dd8(param_3,*(undefined4 *)(param_1 + 0x30),param_2);
  }
  if ((uVar1 >> 7 & 1) != 0) {
    param_2 = (void *)FUN_006d9e54(param_3,*(undefined4 *)(param_1 + 0x34),param_2);
  }
  if ((uVar1 >> 9 & 1) != 0) {
    param_2 = (void *)FUN_006d9ed0(param_3,*(undefined4 *)(param_1 + 0x40),param_2);
  }
  if ((uVar1 >> 8 & 1) == 0) {
    uVar4 = *(ulong *)(param_1 + 8);
  }
  else {
    param_2 = (void *)FUN_0099e8d4(param_3,*(undefined8 *)(param_1 + 0x38),param_2);
    uVar4 = *(ulong *)(param_1 + 8);
  }
  if ((uVar4 & 1) != 0) {
    uVar4 = uVar4 & 0xfffffffffffffffe;
    uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar3 < 0) {
      pvVar2 = *(void **)(uVar4 + 8);
      uVar3 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      pvVar2 = (void *)(uVar4 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      pvVar2 = (void *)FUN_006dcef8(param_3,pvVar2,uVar3,param_2);
      return pvVar2;
    }
    memcpy(param_2,pvVar2,uVar3 & 0xffffffff);
    param_2 = (void *)((long)param_2 + (long)(int)uVar3);
  }
  return param_2;
}


// ===== 0099e8d4  FUN_0099e8d4 =====

byte * FUN_0099e8d4(undefined8 *param_1,ulong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((undefined1 *)*param_1 <= param_3) {
    param_3 = (undefined1 *)FUN_006dcdb8(param_1,param_3);
  }
  pbVar1 = param_3 + 1;
  *param_3 = 0x50;
  pbVar2 = pbVar1;
  uVar4 = param_2;
  if (0x7f < param_2) {
    do {
      param_2 = uVar4 >> 7;
      uVar3 = uVar4 >> 0xe;
      pbVar1 = pbVar2 + 1;
      *pbVar2 = (byte)uVar4 | 0x80;
      pbVar2 = pbVar1;
      uVar4 = param_2;
    } while (uVar3 != 0);
  }
  *pbVar1 = (byte)param_2;
  return pbVar1 + 1;
}


// ===== 0099e94c  FUN_0099e94c =====

/* WARNING: Type propagation algorithm not settling */

ulong FUN_0099e94c(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xff) == 0) {
    uVar3 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar3 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x1c)) * -9 + 0x2c0U >> 6) + uVar3;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar3 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + uVar3;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      uVar3 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x24)) * -9 + 0x2c0U >> 6) + uVar3;
    }
    if ((uVar1 >> 4 & 1) != 0) {
      uVar3 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x28)) * -9 + 0x2c0U >> 6) + uVar3;
    }
    if ((uVar1 >> 5 & 1) != 0) {
      uVar3 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x2c)) * -9 + 0x2c0U >> 6) + uVar3;
    }
    if ((uVar1 >> 6 & 1) != 0) {
      uVar3 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x30)) * -9 + 0x2c0U >> 6) + uVar3;
    }
    if ((uVar1 >> 7 & 1) != 0) {
      uVar3 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x34)) * -9 + 0x2c0U >> 6) + uVar3;
    }
  }
  if ((uVar1 & 0x300) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      uVar3 = ((int)LZCOUNT(*(undefined8 *)(param_1 + 0x38)) * -9 + 0x2c0U >> 6) + uVar3;
    }
    if ((uVar1 >> 9 & 1) != 0) {
      uVar3 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x40)) * -9 + 0x2c0U >> 6) + uVar3;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    iVar2 = (int)uVar3;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar5 + 0x10);
    }
    uVar3 = lVar4 + uVar3;
    iVar2 = (int)uVar3;
  }
  if ((iVar2 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)uVar3;
  }
  return uVar3;
}


// ===== 0099eb08  FUN_0099eb08 =====

void FUN_0099eb08(undefined8 *param_1,undefined8 param_2)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00d401e8;
  param_1[1] = param_2;
  param_1[4] = 0;
  param_1[5] = param_2;
  param_1[6] = &DAT_00208540;
  return;
}


// ===== 0099eb30  FUN_0099eb30 =====

void FUN_0099eb30(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  FUN_00714208(param_1 + 0x30);
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_0070ed60((long *)(param_1 + 0x18));
    return;
  }
  return;
}


// ===== 0099eb84  FUN_0099eb84 =====

void FUN_0099eb84(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  FUN_00714208((long)param_1 + 0x30);
  if (*(long *)((long)param_1 + 0x18) != 0) {
    FUN_0070ed60();
  }
  operator_delete(param_1);
  return;
}


// ===== 0099ebd4  FUN_0099ebd4 =====

void FUN_0099ebd4(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if (((uVar1 & 1) != 0) && (*(int *)(param_2 + 0x20) != 0)) {
      FUN_00711b10(param_1 + 0x18,param_2 + 0x18,uVar2);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x30,*(ulong *)(param_2 + 0x30) & 0xfffffffffffffffc,uVar2);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcb04((ulong *)(param_1 + 8),(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  return;
}


// ===== 0099ec9c  FUN_0099ec9c =====

undefined ** FUN_0099ec9c(void)

{
  return &PTR_PTR_00d403b0;
}


// ===== 0099ecac  FUN_0099ecac =====

void FUN_0099ecac(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if (((uVar1 & 1) != 0) && (0 < *(int *)(param_1 + 0x20))) {
      FUN_0070ed04(param_1 + 0x18);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0((byte *)(param_1 + 8));
  return;
}


// ===== 0099ed40  FUN_0099ed40 =====

undefined1 * FUN_0099ed40(long param_1,undefined1 *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  void *__src;
  undefined8 *puVar5;
  ulong uVar6;
  size_t sVar7;
  ulong uVar8;
  long lVar9;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 >> 1 & 1) == 0) goto joined_r0x0099eed8;
  puVar4 = (undefined8 *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
  sVar7 = (size_t)*(char *)((long)puVar4 + 0x17);
  if ((long)sVar7 < 0) {
    puVar5 = (undefined8 *)*puVar4;
    sVar7 = puVar4[1];
    puVar4 = puVar5;
    if ((long)sVar7 < 0x80) goto LAB_0099ed9c;
  }
  else {
LAB_0099ed9c:
    puVar5 = puVar4;
    if ((long)sVar7 <= (*param_3 - (long)param_2) + 0xe) {
      *param_2 = 10;
      param_2[1] = (char)sVar7;
      memcpy(param_2 + 2,puVar4,sVar7);
      param_2 = param_2 + 2 + sVar7;
      goto joined_r0x0099eed8;
    }
  }
  param_2 = (undefined1 *)FUN_006dd0b8(param_3,1,puVar5,sVar7,param_2);
joined_r0x0099eed8:
  if (((uVar2 & 1) != 0) && (uVar2 = *(uint *)(param_1 + 0x20), 0 < (int)uVar2)) {
    uVar8 = 0;
    lVar9 = 8;
    do {
      if ((long)*(int *)(param_1 + 0x20) <= (long)uVar8) {
        FUN_006fc6ec(uVar8 & 0xffffffff);
      }
      uVar6 = *(ulong *)(param_1 + 0x18);
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar6 & 1) != 0) {
        puVar1 = (ulong *)(uVar6 + lVar9 + -1);
      }
      puVar4 = (undefined8 *)*puVar1;
      sVar7 = (size_t)*(char *)((long)puVar4 + 0x17);
      if ((long)sVar7 < 0) {
        sVar7 = puVar4[1];
        if (((long)sVar7 < 0x80) && ((long)sVar7 <= (*param_3 - (long)param_2) + 0xe))
        goto LAB_0099ee54;
        puVar4 = (undefined8 *)*puVar4;
LAB_0099ee98:
        param_2 = (undefined1 *)FUN_006dd25c(param_3,2,puVar4,sVar7,param_2);
      }
      else {
        if ((*param_3 - (long)param_2) + 0xe < (long)sVar7) goto LAB_0099ee98;
LAB_0099ee54:
        *param_2 = 0x12;
        param_2[1] = (char)sVar7;
        puVar5 = (undefined8 *)*puVar4;
        if (-1 < *(char *)((long)puVar4 + 0x17)) {
          puVar5 = puVar4;
        }
        memcpy(param_2 + 2,puVar5,sVar7);
        param_2 = param_2 + 2 + sVar7;
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while (uVar2 != uVar8);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar8 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar8 < 0) {
      __src = *(void **)(uVar6 + 8);
      uVar8 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      __src = (void *)(uVar6 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar8) {
      puVar3 = (undefined1 *)FUN_006dcef8(param_3,__src,uVar8,param_2);
      return puVar3;
    }
    memcpy(param_2,__src,uVar8 & 0xffffffff);
    param_2 = param_2 + (int)uVar8;
  }
  return param_2;
}


// ===== 0099ef74  FUN_0099ef74 =====

ulong FUN_0099ef74(long param_1)

{
  long lVar1;
  ulong *puVar2;
  uint uVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((uVar3 & 3) == 0) {
    uVar9 = 0;
    uVar6 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((uVar3 & 1) == 0) {
      uVar9 = 0;
    }
    else {
      uVar6 = (ulong)*(uint *)(param_1 + 0x20);
      uVar9 = uVar6;
      if (0 < (int)*(uint *)(param_1 + 0x20)) {
        uVar10 = 0;
        lVar7 = 8;
        do {
          if ((long)*(int *)(param_1 + 0x20) <= (long)uVar10) {
            FUN_006fc6ec(uVar10 & 0xffffffff);
          }
          uVar5 = *(ulong *)(param_1 + 0x18);
          uVar10 = uVar10 + 1;
          lVar1 = uVar5 + lVar7;
          lVar7 = lVar7 + 8;
          puVar2 = (ulong *)(param_1 + 0x18);
          if ((uVar5 & 1) != 0) {
            puVar2 = (ulong *)(lVar1 + -1);
          }
          bVar4 = *(byte *)(*puVar2 + 0x17);
          uVar5 = *(ulong *)(*puVar2 + 8);
          if ((bVar4 & 0x80) == 0) {
            uVar5 = (ulong)bVar4;
          }
          uVar9 = uVar5 + uVar9 + (ulong)((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6);
        } while (uVar6 != uVar10);
      }
    }
    if ((uVar3 >> 1 & 1) == 0) {
      uVar6 = *(ulong *)(param_1 + 8);
    }
    else {
      uVar6 = *(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc;
      bVar4 = *(byte *)(uVar6 + 0x17);
      uVar6 = *(ulong *)(uVar6 + 8);
      if ((bVar4 & 0x80) == 0) {
        uVar6 = (ulong)bVar4;
      }
      uVar9 = uVar9 + uVar6 + ((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6) + 1;
      uVar6 = *(ulong *)(param_1 + 8);
    }
  }
  if ((uVar6 & 1) == 0) {
    iVar8 = (int)uVar9;
  }
  else {
    lVar7 = (long)*(char *)((uVar6 & 0xfffffffffffffffe) + 0x1f);
    if (lVar7 < 0) {
      lVar7 = *(long *)((uVar6 & 0xfffffffffffffffe) + 0x10);
    }
    uVar9 = lVar7 + uVar9;
    iVar8 = (int)uVar9;
  }
  if ((iVar8 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)uVar9;
  }
  return uVar9;
}


// ===== 0099f0f8  FUN_0099f0f8 =====

void FUN_0099f0f8(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00d401a8;
  param_1[1] = param_2;
  param_1[4] = 0;
  param_1[5] = param_2;
  param_1[6] = 0;
  param_1[7] = 0;
  puVar1 = PTR_DAT_00d52590;
  param_1[8] = param_2;
  param_1[9] = puVar1;
  param_1[10] = puVar1;
  param_1[0xb] = 0;
  *(undefined8 *)((long)param_1 + 0x5d) = 0;
  return;
}


// ===== 0099f12c  FUN_0099f12c =====

void FUN_0099f12c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_00d401a8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_006dcb04(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(undefined4 *)(param_3 + 0x10);
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[5] = param_2;
  if (*(int *)(param_3 + 0x20) != 0) {
    FUN_00711b10(param_1 + 3,param_3 + 0x18,param_2);
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = param_2;
  if (*(int *)(param_3 + 0x38) != 0) {
    FUN_00711b10(param_1 + 6,param_3 + 0x30,param_2);
  }
  uVar2 = *(ulong *)(param_3 + 0x48);
  if ((uVar2 & 3) != 0) {
    uVar2 = FUN_00713e9c((ulong *)(param_3 + 0x48),param_2);
  }
  param_1[9] = uVar2;
  uVar2 = *(ulong *)(param_3 + 0x50);
  if ((uVar2 & 3) != 0) {
    uVar2 = FUN_00713e9c((ulong *)(param_3 + 0x50),param_2);
  }
  param_1[10] = uVar2;
  uVar3 = *(undefined8 *)(param_3 + 0x58);
  *(undefined8 *)((long)param_1 + 0x5d) = *(undefined8 *)(param_3 + 0x5d);
  param_1[0xb] = uVar3;
  return;
}


// ===== 0099f224  FUN_0099f224 =====

void FUN_0099f224(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  FUN_00714208(param_1 + 0x48);
  FUN_00714208(param_1 + 0x50);
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_0070ed60();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_0070ed60((long *)(param_1 + 0x18));
    return;
  }
  return;
}


// ===== 0099f290  FUN_0099f290 =====

void FUN_0099f290(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  FUN_00714208((long)param_1 + 0x48);
  FUN_00714208((long)param_1 + 0x50);
  if (*(long *)((long)param_1 + 0x30) != 0) {
    FUN_0070ed60();
  }
  if (*(long *)((long)param_1 + 0x18) != 0) {
    FUN_0070ed60();
  }
  operator_delete(param_1);
  return;
}


// ===== 0099f2f8  FUN_0099f2f8 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0099f2f8(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if (((uVar1 & 1) != 0) && (*(int *)(param_2 + 0x20) != 0)) {
      FUN_00711b10(param_1 + 0x18,param_2 + 0x18,uVar2);
    }
    if (((uVar1 >> 1 & 1) != 0) && (*(int *)(param_2 + 0x38) != 0)) {
      FUN_00711b10(param_1 + 0x30,param_2 + 0x30,uVar2);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x48,*(ulong *)(param_2 + 0x48) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x50,*(ulong *)(param_2 + 0x50) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
    }
    if ((uVar1 >> 6 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
    }
    if ((uVar1 >> 7 & 1) != 0) {
      *(undefined1 *)(param_1 + 100) = *(undefined1 *)(param_2 + 100);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04((ulong *)(param_1 + 8),(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
    return;
  }
  return;
}


// ===== 0099f45c  FUN_0099f45c =====

undefined ** FUN_0099f45c(void)

{
  return &PTR_PTR_00d40410;
}


// ===== 0099f46c  FUN_0099f46c =====

void FUN_0099f46c(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if (((uVar1 & 1) != 0) && (0 < *(int *)(param_1 + 0x20))) {
      FUN_0070ed04(param_1 + 0x18);
    }
    if (((uVar1 >> 1 & 1) != 0) && (0 < *(int *)(param_1 + 0x38))) {
      FUN_0070ed04(param_1 + 0x30);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x50) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
  }
  if ((uVar1 & 0xf0) != 0) {
    *(undefined8 *)(param_1 + 0x5d) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dcab0((byte *)(param_1 + 8));
    return;
  }
  return;
}


// ===== 0099f558  FUN_0099f558 =====

/* WARNING: Type propagation algorithm not settling */

byte * FUN_0099f558(long param_1,byte *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  void *__src;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulong uVar9;
  byte *pbVar10;
  ulong uVar11;
  size_t sVar12;
  long lVar13;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 >> 2 & 1) != 0) {
    puVar6 = (undefined8 *)(*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc);
    sVar12 = (size_t)*(char *)((long)puVar6 + 0x17);
    if ((long)sVar12 < 0) {
      puVar7 = (undefined8 *)*puVar6;
      sVar12 = puVar6[1];
      puVar6 = puVar7;
      if ((long)sVar12 < 0x80) goto LAB_0099f5d0;
    }
    else {
LAB_0099f5d0:
      puVar7 = puVar6;
      if ((long)sVar12 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 10;
        param_2[1] = (byte)sVar12;
        memcpy(param_2 + 2,puVar6,sVar12);
        param_2 = param_2 + 2 + sVar12;
        goto joined_r0x0099f604;
      }
    }
    param_2 = (byte *)FUN_006dd0b8(param_3,1,puVar7,sVar12,param_2);
  }
joined_r0x0099f604:
  if ((uVar2 >> 3 & 1) == 0) goto joined_r0x0099f590;
  puVar6 = (undefined8 *)(*(ulong *)(param_1 + 0x50) & 0xfffffffffffffffc);
  sVar12 = (size_t)*(char *)((long)puVar6 + 0x17);
  if ((long)sVar12 < 0) {
    puVar7 = (undefined8 *)*puVar6;
    sVar12 = puVar6[1];
    puVar6 = puVar7;
    if ((long)sVar12 < 0x80) goto LAB_0099f630;
  }
  else {
LAB_0099f630:
    puVar7 = puVar6;
    if ((long)sVar12 <= (*param_3 - (long)param_2) + 0xe) {
      *param_2 = 0x12;
      *(byte *)((long)param_2 + 1) = (byte)sVar12;
      memcpy((byte *)((long)param_2 + 2),puVar6,sVar12);
      param_2 = (byte *)((long)param_2 + 2) + sVar12;
      goto joined_r0x0099f590;
    }
  }
  param_2 = (byte *)FUN_006dd0b8(param_3,2,puVar7,sVar12,param_2);
joined_r0x0099f590:
  if ((uVar2 >> 4 & 1) != 0) {
    param_2 = (byte *)FUN_006d8a68(param_3,*(undefined4 *)(param_1 + 0x58),param_2);
  }
  if ((uVar2 >> 5 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar8 = *(int *)(param_1 + 0x5c) << 1 ^ *(int *)(param_1 + 0x5c) >> 0x1f;
    pbVar10 = param_2 + 1;
    *param_2 = 0x20;
    pbVar5 = pbVar10;
    if (0x7f < uVar8) {
      do {
        uVar4 = uVar8 >> 0xe;
        bVar3 = (byte)uVar8;
        uVar8 = uVar8 >> 7;
        pbVar10 = pbVar5 + 1;
        *pbVar5 = bVar3 | 0x80;
        pbVar5 = pbVar10;
      } while (uVar4 != 0);
    }
    param_2 = pbVar10 + 1;
    *pbVar10 = (byte)uVar8;
  }
  if ((uVar2 >> 6 & 1) != 0) {
    param_2 = (byte *)FUN_006d9ce0(param_3,*(undefined4 *)(param_1 + 0x60),param_2);
  }
  if ((uVar2 >> 7 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    bVar3 = *(byte *)(param_1 + 100);
    *param_2 = 0x30;
    param_2[1] = bVar3;
    param_2 = param_2 + 2;
  }
  if (((uVar2 & 1) != 0) && (uVar8 = *(uint *)(param_1 + 0x20), 0 < (int)uVar8)) {
    uVar11 = 0;
    lVar13 = 8;
    do {
      if ((long)*(int *)(param_1 + 0x20) <= (long)uVar11) {
        FUN_006fc6ec(uVar11 & 0xffffffff);
      }
      uVar9 = *(ulong *)(param_1 + 0x18);
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar9 & 1) != 0) {
        puVar1 = (ulong *)(uVar9 + lVar13 + -1);
      }
      puVar6 = (undefined8 *)*puVar1;
      sVar12 = (size_t)*(char *)((long)puVar6 + 0x17);
      if ((long)sVar12 < 0) {
        sVar12 = puVar6[1];
        if ((0x7f < (long)sVar12) || ((*param_3 - (long)param_2) + 0xe < (long)sVar12)) {
          puVar6 = (undefined8 *)*puVar6;
          goto LAB_0099f7b4;
        }
LAB_0099f770:
        *param_2 = 0x3a;
        param_2[1] = (byte)sVar12;
        puVar7 = (undefined8 *)*puVar6;
        if (-1 < *(char *)((long)puVar6 + 0x17)) {
          puVar7 = puVar6;
        }
        memcpy(param_2 + 2,puVar7,sVar12);
        param_2 = param_2 + 2 + sVar12;
      }
      else {
        if ((long)sVar12 <= (*param_3 - (long)param_2) + 0xe) goto LAB_0099f770;
LAB_0099f7b4:
        param_2 = (byte *)FUN_006dd25c(param_3,7,puVar6,sVar12,param_2);
      }
      uVar11 = uVar11 + 1;
      lVar13 = lVar13 + 8;
    } while (uVar8 != uVar11);
  }
  if (((uVar2 >> 1 & 1) != 0) && (uVar2 = *(uint *)(param_1 + 0x38), 0 < (int)uVar2)) {
    uVar11 = 0;
    lVar13 = 8;
    do {
      if ((long)*(int *)(param_1 + 0x38) <= (long)uVar11) {
        FUN_006fc6ec(uVar11 & 0xffffffff);
      }
      uVar9 = *(ulong *)(param_1 + 0x30);
      puVar1 = (ulong *)(param_1 + 0x30);
      if ((uVar9 & 1) != 0) {
        puVar1 = (ulong *)(uVar9 + lVar13 + -1);
      }
      puVar6 = (undefined8 *)*puVar1;
      sVar12 = (size_t)*(char *)((long)puVar6 + 0x17);
      if ((long)sVar12 < 0) {
        sVar12 = puVar6[1];
        if ((0x7f < (long)sVar12) || ((*param_3 - (long)param_2) + 0xe < (long)sVar12)) {
          puVar6 = (undefined8 *)*puVar6;
          goto LAB_0099f8a4;
        }
LAB_0099f860:
        *param_2 = 0x42;
        param_2[1] = (byte)sVar12;
        puVar7 = (undefined8 *)*puVar6;
        if (-1 < *(char *)((long)puVar6 + 0x17)) {
          puVar7 = puVar6;
        }
        memcpy(param_2 + 2,puVar7,sVar12);
        param_2 = param_2 + 2 + sVar12;
      }
      else {
        if ((long)sVar12 <= (*param_3 - (long)param_2) + 0xe) goto LAB_0099f860;
LAB_0099f8a4:
        param_2 = (byte *)FUN_006dd25c(param_3,8,puVar6,sVar12,param_2);
      }
      uVar11 = uVar11 + 1;
      lVar13 = lVar13 + 8;
    } while (uVar2 != uVar11);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar9 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar11 = (ulong)*(char *)(uVar9 + 0x1f);
    if ((long)uVar11 < 0) {
      __src = *(void **)(uVar9 + 8);
      uVar11 = (ulong)*(uint *)(uVar9 + 0x10);
    }
    else {
      __src = (void *)(uVar9 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar11) {
      pbVar5 = (byte *)FUN_006dcef8(param_3,__src,uVar11,param_2);
      return pbVar5;
    }
    memcpy(param_2,__src,uVar11 & 0xffffffff);
    param_2 = param_2 + (int)uVar11;
  }
  return param_2;
}


// ===== 0099f9e4  FUN_0099f9e4 =====

/* WARNING: Type propagation algorithm not settling */

ulong FUN_0099f9e4(long param_1)

{
  long lVar1;
  ulong *puVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar3 = *(uint *)(param_1 + 0x10);
  uVar8 = (ulong)(uVar3 >> 6) & 2;
  if ((uVar3 & 0x7f) != 0) {
    if ((uVar3 & 1) != 0) {
      uVar4 = *(uint *)(param_1 + 0x20);
      uVar8 = uVar4 + uVar8;
      if (0 < (int)uVar4) {
        uVar9 = 0;
        lVar10 = 8;
        do {
          if ((long)*(int *)(param_1 + 0x20) <= (long)uVar9) {
            FUN_006fc6ec(uVar9 & 0xffffffff);
          }
          uVar6 = *(ulong *)(param_1 + 0x18);
          uVar9 = uVar9 + 1;
          lVar1 = uVar6 + lVar10;
          lVar10 = lVar10 + 8;
          puVar2 = (ulong *)(param_1 + 0x18);
          if ((uVar6 & 1) != 0) {
            puVar2 = (ulong *)(lVar1 + -1);
          }
          bVar5 = *(byte *)(*puVar2 + 0x17);
          uVar6 = *(ulong *)(*puVar2 + 8);
          if ((bVar5 & 0x80) == 0) {
            uVar6 = (ulong)bVar5;
          }
          uVar8 = uVar6 + uVar8 + (ulong)((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6);
        } while (uVar4 != uVar9);
      }
    }
    if ((uVar3 >> 1 & 1) != 0) {
      uVar4 = *(uint *)(param_1 + 0x38);
      uVar8 = uVar8 + uVar4;
      if (0 < (int)uVar4) {
        uVar9 = 0;
        lVar10 = 8;
        do {
          if ((long)*(int *)(param_1 + 0x38) <= (long)uVar9) {
            FUN_006fc6ec(uVar9 & 0xffffffff);
          }
          uVar6 = *(ulong *)(param_1 + 0x30);
          uVar9 = uVar9 + 1;
          lVar1 = uVar6 + lVar10;
          lVar10 = lVar10 + 8;
          puVar2 = (ulong *)(param_1 + 0x30);
          if ((uVar6 & 1) != 0) {
            puVar2 = (ulong *)(lVar1 + -1);
          }
          bVar5 = *(byte *)(*puVar2 + 0x17);
          uVar6 = *(ulong *)(*puVar2 + 8);
          if ((bVar5 & 0x80) == 0) {
            uVar6 = (ulong)bVar5;
          }
          uVar8 = uVar6 + uVar8 + (ulong)((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6);
        } while (uVar4 != uVar9);
      }
    }
    if ((uVar3 >> 2 & 1) != 0) {
      uVar9 = *(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc;
      bVar5 = *(byte *)(uVar9 + 0x17);
      uVar9 = *(ulong *)(uVar9 + 8);
      if ((bVar5 & 0x80) == 0) {
        uVar9 = (ulong)bVar5;
      }
      uVar8 = uVar8 + uVar9 + ((int)LZCOUNT((int)uVar9) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar3 >> 3 & 1) != 0) {
      uVar9 = *(ulong *)(param_1 + 0x50) & 0xfffffffffffffffc;
      bVar5 = *(byte *)(uVar9 + 0x17);
      uVar9 = *(ulong *)(uVar9 + 8);
      if ((bVar5 & 0x80) == 0) {
        uVar9 = (ulong)bVar5;
      }
      uVar8 = uVar8 + uVar9 + ((int)LZCOUNT((int)uVar9) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar3 >> 4 & 1) != 0) {
      uVar8 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x58)) * -9 + 0x2c0U >> 6) + uVar8;
    }
    if ((uVar3 >> 5 & 1) != 0) {
      uVar8 = uVar8 + ((int)LZCOUNT(*(int *)(param_1 + 0x5c) << 1 ^ *(int *)(param_1 + 0x5c) >> 0x1f
                                   ) * -9 + 0x1a0U >> 6);
    }
    if ((uVar3 >> 6 & 1) != 0) {
      uVar8 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x60)) * -9 + 0x2c0U >> 6) + uVar8;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    iVar7 = (int)uVar8;
  }
  else {
    uVar9 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar10 = (long)*(char *)(uVar9 + 0x1f);
    if (lVar10 < 0) {
      lVar10 = *(long *)(uVar9 + 0x10);
    }
    uVar8 = lVar10 + uVar8;
    iVar7 = (int)uVar8;
  }
  if ((iVar7 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)uVar8;
  }
  return uVar8;
}


// ===== 0099fc94  FUN_0099fc94 =====

void FUN_0099fc94(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_00d402a8;
  param_1[1] = param_2;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[2] = 0;
  param_1[3] = &DAT_00208540;
  param_1[4] = &DAT_00208540;
  param_1[5] = 0;
  return;
}


// ===== 0099fcc0  FUN_0099fcc0 =====

void FUN_0099fcc0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  FUN_00714208(param_1 + 0x18);
  FUN_00714208(param_1 + 0x20);
  return;
}


// ===== 0099fcfc  FUN_0099fcfc =====

void FUN_0099fcfc(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  FUN_00714208((long)param_1 + 0x18);
  FUN_00714208((long)param_1 + 0x20);
  operator_delete(param_1);
  return;
}


// ===== 0099fd44  FUN_0099fd44 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0099fd44(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x18,*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x20,*(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x29) = *(undefined1 *)(param_2 + 0x29);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x2a) = *(undefined1 *)(param_2 + 0x2a);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x2b) = *(undefined1 *)(param_2 + 0x2b);
    }
    if ((uVar1 >> 6 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    }
    if ((uVar1 >> 7 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    }
  }
  if ((uVar1 & 0xff00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x34) = *(undefined1 *)(param_2 + 0x34);
    }
    if ((uVar1 >> 9 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x35) = *(undefined1 *)(param_2 + 0x35);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x36) = *(undefined1 *)(param_2 + 0x36);
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      *(undefined1 *)(param_1 + 0x37) = *(undefined1 *)(param_2 + 0x37);
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(param_2 + 0x3c);
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      *(undefined1 *)(param_1 + 0x3d) = *(undefined1 *)(param_2 + 0x3d);
    }
    if ((uVar1 >> 0xf & 1) != 0) {
      *(undefined1 *)(param_1 + 0x3e) = *(undefined1 *)(param_2 + 0x3e);
    }
  }
  if ((uVar1 >> 0x10 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
    return;
  }
  return;
}


// ===== 0099ff00  FUN_0099ff00 =====

undefined ** FUN_0099ff00(void)

{
  return &PTR_PTR_00d40468;
}


// ===== 0099ff10  FUN_0099ff10 =====

void FUN_0099ff10(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
  }
  if ((uVar1 & 0xfc) != 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  if ((uVar1 & 0xff00) != 0) {
    *(undefined4 *)(param_1 + 0x3b) = 0;
    *(undefined8 *)(param_1 + 0x34) = 0;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dcab0();
    return;
  }
  return;
}


// ===== 0099ffb4  FUN_0099ffb4 =====

/* WARNING: Type propagation algorithm not settling */

undefined2 * FUN_0099ffb4(long param_1,undefined2 *param_2,long *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined2 *puVar4;
  undefined8 *puVar5;
  void *__src;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  size_t sVar9;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 >> 2 & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_006dcdb8(param_3,param_2);
    }
    uVar3 = *(undefined1 *)(param_1 + 0x28);
    *(undefined1 *)param_2 = 8;
    *(undefined1 *)((long)param_2 + 1) = uVar3;
    param_2 = param_2 + 1;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_006dcdb8(param_3,param_2);
    }
    uVar3 = *(undefined1 *)(param_1 + 0x29);
    *(undefined1 *)param_2 = 0x10;
    *(undefined1 *)((long)param_2 + 1) = uVar3;
    param_2 = param_2 + 1;
  }
  if ((uVar1 >> 4 & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_006dcdb8(param_3,param_2);
    }
    uVar3 = *(undefined1 *)(param_1 + 0x2a);
    *(undefined1 *)param_2 = 0x18;
    *(undefined1 *)((long)param_2 + 1) = uVar3;
    param_2 = param_2 + 1;
  }
  if ((uVar1 >> 5 & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_006dcdb8(param_3,param_2);
    }
    uVar3 = *(undefined1 *)(param_1 + 0x2b);
    *(undefined1 *)param_2 = 0x20;
    *(undefined1 *)((long)param_2 + 1) = uVar3;
    param_2 = param_2 + 1;
  }
  if ((uVar1 >> 6 & 1) != 0) {
    param_2 = (undefined2 *)FUN_006d9ce0(param_3,*(undefined4 *)(param_1 + 0x2c),param_2);
  }
  if ((uVar1 >> 8 & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_006dcdb8(param_3,param_2);
    }
    uVar3 = *(undefined1 *)(param_1 + 0x34);
    *(undefined1 *)param_2 = 0x48;
    *(undefined1 *)((long)param_2 + 1) = uVar3;
    param_2 = param_2 + 1;
  }
  if ((uVar1 >> 7 & 1) != 0) {
    param_2 = (undefined2 *)FUN_006d9f4c(param_3,*(undefined4 *)(param_1 + 0x30),param_2);
  }
  if ((uVar1 >> 9 & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_006dcdb8(param_3,param_2);
    }
    uVar3 = *(undefined1 *)(param_1 + 0x35);
    *(undefined1 *)param_2 = 0x58;
    *(undefined1 *)((long)param_2 + 1) = uVar3;
    param_2 = param_2 + 1;
  }
  if ((uVar1 >> 10 & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_006dcdb8(param_3,param_2);
    }
    uVar3 = *(undefined1 *)(param_1 + 0x36);
    *(undefined1 *)param_2 = 0x60;
    *(undefined1 *)((long)param_2 + 1) = uVar3;
    param_2 = param_2 + 1;
  }
  if ((uVar1 >> 0xb & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_006dcdb8(param_3,param_2);
    }
    uVar3 = *(undefined1 *)(param_1 + 0x37);
    *(undefined1 *)param_2 = 0x68;
    *(undefined1 *)((long)param_2 + 1) = uVar3;
    param_2 = param_2 + 1;
  }
  if ((uVar1 >> 0xd & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_006dcdb8(param_3,param_2);
    }
    uVar3 = *(undefined1 *)(param_1 + 0x3c);
    *(undefined1 *)param_2 = 0x70;
    *(undefined1 *)((long)param_2 + 1) = uVar3;
    param_2 = param_2 + 1;
  }
  if ((uVar1 >> 0xc & 1) != 0) {
    param_2 = (undefined2 *)FUN_009a04c4(param_3,*(undefined4 *)(param_1 + 0x38),param_2);
  }
  if ((uVar1 >> 0xe & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_006dcdb8(param_3,param_2);
    }
    uVar3 = *(undefined1 *)(param_1 + 0x3d);
    *param_2 = 0x180;
    *(undefined1 *)(param_2 + 1) = uVar3;
    param_2 = (undefined2 *)((long)param_2 + 3);
  }
  if ((uVar1 & 1) != 0) {
    puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    sVar9 = (size_t)*(char *)((long)puVar5 + 0x17);
    if ((long)sVar9 < 0) {
      puVar6 = (undefined8 *)*puVar5;
      sVar9 = puVar5[1];
      puVar5 = puVar6;
      if ((long)sVar9 < 0x80) goto LAB_009a022c;
    }
    else {
LAB_009a022c:
      puVar6 = puVar5;
      if ((long)sVar9 <= (*param_3 - (long)param_2) + 0xd) {
        *param_2 = 0x18a;
        *(char *)((long)param_2 + 2) = (char)sVar9;
        memcpy((undefined1 *)((long)param_2 + 3),puVar5,sVar9);
        param_2 = (undefined2 *)((undefined1 *)((long)param_2 + 3) + sVar9);
        goto joined_r0x009a0014;
      }
    }
    param_2 = (undefined2 *)FUN_006dd0b8(param_3,0x11,puVar6,sVar9,param_2);
  }
joined_r0x009a0014:
  if ((uVar1 >> 0xf & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_006dcdb8(param_3,param_2);
    }
    uVar3 = *(undefined1 *)(param_1 + 0x3e);
    *param_2 = 0x198;
    *(undefined1 *)(param_2 + 1) = uVar3;
    param_2 = (undefined2 *)((long)param_2 + 3);
  }
  if ((uVar1 >> 0x10 & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_006dcdb8(param_3,param_2);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x40);
    *param_2 = 0x1a5;
    *(undefined4 *)(param_2 + 1) = uVar2;
    param_2 = param_2 + 3;
  }
  if ((uVar1 >> 1 & 1) == 0) {
    uVar8 = *(ulong *)(param_1 + 8);
    goto joined_r0x009a0024;
  }
  puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
  sVar9 = (size_t)*(char *)((long)puVar5 + 0x17);
  if ((long)sVar9 < 0) {
    puVar6 = (undefined8 *)*puVar5;
    sVar9 = puVar5[1];
    puVar5 = puVar6;
    if ((long)sVar9 < 0x80) goto LAB_009a02d8;
  }
  else {
LAB_009a02d8:
    puVar6 = puVar5;
    if ((long)sVar9 <= (*param_3 - (long)param_2) + 0xd) {
      *param_2 = 0x1aa;
      *(char *)(param_2 + 1) = (char)sVar9;
      memcpy((undefined1 *)((long)param_2 + 3),puVar5,sVar9);
      param_2 = (undefined2 *)((undefined1 *)((long)param_2 + 3) + sVar9);
      uVar8 = *(ulong *)(param_1 + 8);
      goto joined_r0x009a0024;
    }
  }
  param_2 = (undefined2 *)FUN_006dd0b8(param_3,0x15,puVar6,sVar9,param_2);
  uVar8 = *(ulong *)(param_1 + 8);
joined_r0x009a0024:
  if ((uVar8 & 1) != 0) {
    uVar8 = uVar8 & 0xfffffffffffffffe;
    uVar7 = (ulong)*(char *)(uVar8 + 0x1f);
    if ((long)uVar7 < 0) {
      __src = *(void **)(uVar8 + 8);
      uVar7 = (ulong)*(uint *)(uVar8 + 0x10);
    }
    else {
      __src = (void *)(uVar8 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar7) {
      puVar4 = (undefined2 *)FUN_006dcef8(param_3,__src,uVar7,param_2);
      return puVar4;
    }
    memcpy(param_2,__src,uVar7 & 0xffffffff);
    param_2 = (undefined2 *)((long)param_2 + (long)(int)uVar7);
  }
  return param_2;
}


// ===== 009a04c4  FUN_009a04c4 =====

byte * FUN_009a04c4(undefined8 *param_1,uint param_2,undefined1 *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if ((undefined1 *)*param_1 <= param_3) {
    param_3 = (undefined1 *)FUN_006dcdb8(param_1,param_3);
  }
  uVar3 = (ulong)(int)param_2;
  pbVar1 = param_3 + 1;
  *param_3 = 0x78;
  pbVar2 = pbVar1;
  uVar4 = uVar3;
  if (0x7f < param_2) {
    do {
      uVar3 = uVar4 >> 7;
      uVar5 = uVar4 >> 0xe;
      pbVar1 = pbVar2 + 1;
      *pbVar2 = (byte)uVar4 | 0x80;
      pbVar2 = pbVar1;
      uVar4 = uVar3;
    } while (uVar5 != 0);
  }
  *pbVar1 = (byte)uVar3;
  return pbVar1 + 1;
}


// ===== 009a0540  FUN_009a0540 =====

/* WARNING: Type propagation algorithm not settling */

long FUN_009a0540(long param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  lVar4 = 0;
  if ((uVar1 & 0x10000) != 0) {
    lVar4 = 6;
  }
  uVar8 = NEON_cnt((ulong)(uVar1 & 0xc000),1);
  uVar10 = NEON_cnt((ulong)(uVar1 & 0x2f3c),1);
  uVar7 = NEON_addv(uVar8,1);
  uVar9 = NEON_addv(uVar10,1);
  lVar4 = lVar4 + (ulong)(uint)((int)CONCAT71((int7)((ulong)uVar8 >> 8),uVar7) * 3) +
          (ulong)(uint)((int)CONCAT71((int7)((ulong)uVar10 >> 8),uVar9) << 1);
  if ((uVar1 & 0xc3) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar5 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar5 + 0x17);
      uVar5 = *(ulong *)(uVar5 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar5 = (ulong)bVar2;
      }
      lVar4 = lVar4 + uVar5 + ((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar5 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar5 + 0x17);
      uVar5 = *(ulong *)(uVar5 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar5 = (ulong)bVar2;
      }
      lVar4 = lVar4 + uVar5 + ((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 6 & 1) != 0) {
      lVar4 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x2c)) * -9 + 0x2c0U >> 6) + lVar4;
    }
    if ((uVar1 >> 7 & 1) != 0) {
      lVar4 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x30)) * -9 + 0x2c0U >> 6) + lVar4;
    }
  }
  if ((uVar1 >> 0xc & 1) == 0) {
    uVar5 = *(ulong *)(param_1 + 8);
  }
  else {
    lVar4 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x38)) * -9 + 0x2c0U >> 6) + lVar4;
    uVar5 = *(ulong *)(param_1 + 8);
  }
  if ((uVar5 & 1) == 0) {
    iVar3 = (int)lVar4;
  }
  else {
    lVar6 = (long)*(char *)((uVar5 & 0xfffffffffffffffe) + 0x1f);
    if (lVar6 < 0) {
      lVar6 = *(long *)((uVar5 & 0xfffffffffffffffe) + 0x10);
    }
    lVar4 = lVar6 + lVar4;
    iVar3 = (int)lVar4;
  }
  if ((iVar3 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)lVar4;
  }
  return lVar4;
}


// ===== 009a06d4  FUN_009a06d4 =====

void FUN_009a06d4(undefined8 *param_1,undefined8 param_2)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00d40228;
  param_1[1] = param_2;
  return;
}


// ===== 009a06ec  FUN_009a06ec =====

void FUN_009a06ec(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dbb00();
  return;
}


// ===== 009a0700  FUN_009a0700 =====

void FUN_009a0700(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  operator_delete(param_1);
  return;
}


// ===== 009a0738  FUN_009a0738 =====

void FUN_009a0738(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcb04(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  return;
}


// ===== 009a0788  FUN_009a0788 =====

undefined ** FUN_009a0788(void)

{
  return &PTR_PTR_00d404c0;
}


// ===== 009a0798  FUN_009a0798 =====

void FUN_009a0798(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 3) != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0();
  return;
}


// ===== 009a07c0  FUN_009a07c0 =====

void * FUN_009a07c0(long param_1,void *param_2,long *param_3)

{
  uint uVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_2 = (void *)FUN_006d89ec(param_3,*(undefined4 *)(param_1 + 0x18),param_2);
  }
  if ((uVar1 >> 1 & 1) == 0) {
    uVar4 = *(ulong *)(param_1 + 8);
  }
  else {
    param_2 = (void *)FUN_006da6b8(param_3,*(undefined4 *)(param_1 + 0x1c),param_2);
    uVar4 = *(ulong *)(param_1 + 8);
  }
  if ((uVar4 & 1) != 0) {
    uVar4 = uVar4 & 0xfffffffffffffffe;
    uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar3 < 0) {
      pvVar2 = *(void **)(uVar4 + 8);
      uVar3 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      pvVar2 = (void *)(uVar4 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      pvVar2 = (void *)FUN_006dcef8(param_3,pvVar2,uVar3,param_2);
      return pvVar2;
    }
    memcpy(param_2,pvVar2,uVar3 & 0xffffffff);
    param_2 = (void *)((long)param_2 + (long)(int)uVar3);
  }
  return param_2;
}


// ===== 009a08a4  FUN_009a08a4 =====

ulong FUN_009a08a4(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) == 0) {
    uVar3 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar3 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x1c)) * -9 + 0x2c0U >> 6) + uVar3;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    iVar2 = (int)uVar3;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar5 + 0x10);
    }
    uVar3 = lVar4 + uVar3;
    iVar2 = (int)uVar3;
  }
  if ((iVar2 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)uVar3;
  }
  return uVar3;
}


// ===== 009a0950  FUN_009a0950 =====

void FUN_009a0950(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_00d402e8;
  param_1[1] = param_2;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  return;
}


// ===== 009a0970  FUN_009a0970 =====

void FUN_009a0970(long param_1)

{
  void *pvVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    if ((*(byte *)((long)pvVar1 + 8) & 1) != 0) {
      FUN_006dbb00();
    }
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 009a09d0  FUN_009a09d0 =====

void FUN_009a09d0(void *param_1)

{
  void *pvVar1;
  
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  pvVar1 = *(void **)((long)param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    if ((*(byte *)((long)pvVar1 + 8) & 1) != 0) {
      FUN_006dbb00();
    }
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 009a0a2c  FUN_009a0a2c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_009a0a2c(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x7f) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar6 = *(long *)(param_1 + 0x18);
      lVar5 = *(long *)(param_2 + 0x18);
      if (lVar6 == 0) {
        uVar4 = FUN_009a16f0(uVar3);
        *(undefined8 *)(param_1 + 0x18) = uVar4;
      }
      else {
        uVar2 = *(uint *)(lVar5 + 0x10);
        if ((uVar2 & 3) != 0) {
          if ((uVar2 & 1) != 0) {
            *(undefined4 *)(lVar6 + 0x18) = *(undefined4 *)(lVar5 + 0x18);
          }
          if ((uVar2 >> 1 & 1) != 0) {
            *(undefined4 *)(lVar6 + 0x1c) = *(undefined4 *)(lVar5 + 0x1c);
          }
        }
        *(uint *)(lVar6 + 0x10) = *(uint *)(lVar6 + 0x10) | uVar2;
        if ((*(ulong *)(lVar5 + 8) & 1) != 0) {
          FUN_006dcb04(lVar6 + 8,(*(ulong *)(lVar5 + 8) & 0xfffffffffffffffe) + 8);
        }
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
    }
    if ((uVar1 >> 6 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04((ulong *)(param_1 + 8),(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
    return;
  }
  return;
}


// ===== 009a0b78  FUN_009a0b78 =====

undefined ** FUN_009a0b78(void)

{
  return &PTR_PTR_00d40528;
}


// ===== 009a0b88  FUN_009a0b88 =====

void FUN_009a0b88(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    FUN_009a0798(*(undefined8 *)(param_1 + 0x18));
  }
  if ((uVar1 & 0x7e) != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0((byte *)(param_1 + 8));
  return;
}


// ===== 009a0bec  FUN_009a0bec =====

/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_009a0bec(long param_1,undefined1 *param_2,long *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  void *__src;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 >> 1 & 1) != 0) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_006dcdb8(param_3,param_2);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x20);
    *param_2 = 0xd;
    *(undefined4 *)(param_2 + 1) = uVar2;
    param_2 = param_2 + 5;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_006dcdb8(param_3,param_2);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x24);
    *param_2 = 0x15;
    *(undefined4 *)(param_2 + 1) = uVar2;
    param_2 = param_2 + 5;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_006dcdb8(param_3,param_2);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x28);
    *param_2 = 0x1d;
    *(undefined4 *)(param_2 + 1) = uVar2;
    param_2 = param_2 + 5;
  }
  if ((uVar1 >> 4 & 1) != 0) {
    param_2 = (undefined1 *)FUN_006d9c64(param_3,*(undefined4 *)(param_1 + 0x2c),param_2);
  }
  if ((uVar1 & 1) != 0) {
    param_2 = (undefined1 *)
              FUN_006fc2f0(5,*(long *)(param_1 + 0x18),
                           *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x14),param_2,param_3);
  }
  if ((uVar1 >> 5 & 1) != 0) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_006dcdb8(param_3,param_2);
    }
    uVar3 = *(undefined1 *)(param_1 + 0x30);
    *param_2 = 0x30;
    param_2[1] = uVar3;
    param_2 = param_2 + 2;
  }
  if ((uVar1 >> 6 & 1) == 0) {
    uVar6 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_006dcdb8(param_3,param_2);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x34);
    *param_2 = 0x3d;
    *(undefined4 *)(param_2 + 1) = uVar2;
    param_2 = param_2 + 5;
    uVar6 = *(ulong *)(param_1 + 8);
  }
  if ((uVar6 & 1) != 0) {
    uVar6 = uVar6 & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      __src = *(void **)(uVar6 + 8);
      uVar5 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      __src = (void *)(uVar6 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar5) {
      puVar4 = (undefined1 *)FUN_006dcef8(param_3,__src,uVar5,param_2);
      return puVar4;
    }
    memcpy(param_2,__src,uVar5 & 0xffffffff);
    param_2 = param_2 + (int)uVar5;
  }
  return param_2;
}


// ===== 009a0e08  FUN_009a0e08 =====

ulong FUN_009a0e08(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar9 = NEON_cnt((ulong)(uVar1 & 0x4e),1);
  uVar4 = (ulong)((int)uVar9 * 5 + (uVar1 >> 4 & 2));
  if ((uVar1 & 0x11) == 0) goto LAB_009a0f18;
  if ((uVar1 & 1) != 0) {
    lVar5 = *(long *)(param_1 + 0x18);
    Hint_Prefetch(lVar5 + 0x1c0,0,0,0);
    Hint_Prefetch(lVar5 + 0x200,0,0,0);
    Hint_Prefetch(lVar5 + 0x240,0,0,0);
    Hint_Prefetch(lVar5 + 0x280,0,0,0);
    Hint_Prefetch(lVar5 + 0x2c0,0,0,0);
    uVar2 = *(uint *)(lVar5 + 0x10);
    if ((uVar2 & 3) == 0) {
      uVar6 = 0;
    }
    else {
      if ((uVar2 & 1) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (ulong)((int)LZCOUNT((long)*(int *)(lVar5 + 0x18)) * -9 + 0x2c0U >> 6);
      }
      if ((uVar2 >> 1 & 1) != 0) {
        uVar6 = ((int)LZCOUNT((long)*(int *)(lVar5 + 0x1c)) * -9 + 0x2c0U >> 6) + uVar6;
      }
    }
    if ((*(ulong *)(lVar5 + 8) & 1) == 0) {
      if ((int)uVar6 != 0) goto LAB_009a0ed4;
LAB_009a0f6c:
      if (*(int *)(lVar5 + 0x14) != 0) goto LAB_009a0ed4;
    }
    else {
      uVar8 = *(ulong *)(lVar5 + 8) & 0xfffffffffffffffe;
      lVar7 = (long)*(char *)(uVar8 + 0x1f);
      if (lVar7 < 0) {
        lVar7 = *(long *)(uVar8 + 0x10);
      }
      uVar6 = lVar7 + uVar6;
      if ((int)uVar6 == 0) goto LAB_009a0f6c;
LAB_009a0ed4:
      *(int *)(lVar5 + 0x14) = (int)uVar6;
    }
    uVar4 = uVar4 + uVar6 + (ulong)((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6) + 1;
  }
  if ((uVar1 >> 4 & 1) != 0) {
    uVar4 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x2c)) * -9 + 0x2c0U >> 6) + uVar4;
  }
LAB_009a0f18:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    iVar3 = (int)uVar4;
  }
  else {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar6 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar6 + 0x10);
    }
    uVar4 = lVar5 + uVar4;
    iVar3 = (int)uVar4;
  }
  if ((iVar3 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)uVar4;
  }
  return uVar4;
}


// ===== 009a0f78  FUN_009a0f78 =====

void FUN_009a0f78(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_00d40328;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  return;
}


// ===== 009a0f9c  FUN_009a0f9c =====

void FUN_009a0f9c(void)

{
  FUN_009a0fa4();
  return;
}


// ===== 009a0fa4  FUN_009a0fa4 =====

void FUN_009a0fa4(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    if ((*(byte *)((long)pvVar1 + 8) & 1) != 0) {
      FUN_006dbb00();
    }
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x20);
  if (pvVar1 != (void *)0x0) {
    if ((*(byte *)((long)pvVar1 + 8) & 1) != 0) {
      FUN_006dbb00();
    }
    FUN_00714208((long)pvVar1 + 0x30);
    if (*(long *)((long)pvVar1 + 0x18) != 0) {
      FUN_0070ed60();
    }
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x28);
  if (pvVar1 != (void *)0x0) {
    if ((*(byte *)((long)pvVar1 + 8) & 1) != 0) {
      FUN_006dbb00();
    }
    FUN_00714208((long)pvVar1 + 0x48);
    FUN_00714208((long)pvVar1 + 0x50);
    if (*(long *)((long)pvVar1 + 0x30) != 0) {
      FUN_0070ed60();
    }
    if (*(long *)((long)pvVar1 + 0x18) != 0) {
      FUN_0070ed60();
    }
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x30);
  if (pvVar1 != (void *)0x0) {
    if ((*(byte *)((long)pvVar1 + 8) & 1) != 0) {
      FUN_006dbb00();
    }
    FUN_00714208((long)pvVar1 + 0x18);
    FUN_00714208((long)pvVar1 + 0x20);
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x38);
  if (pvVar1 != (void *)0x0) {
    if ((*(byte *)((long)pvVar1 + 8) & 1) != 0) {
      FUN_006dbb00();
    }
    pvVar2 = *(void **)((long)pvVar1 + 0x18);
    if (pvVar2 != (void *)0x0) {
      if ((*(byte *)((long)pvVar2 + 8) & 1) != 0) {
        FUN_006dbb00();
      }
      operator_delete(pvVar2);
    }
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 009a1110  FUN_009a1110 =====

void FUN_009a1110(void *param_1)

{
  FUN_009a0fa4();
  operator_delete(param_1);
  return;
}


// ===== 009a1140  FUN_009a1140 =====

byte FUN_009a1140(long param_1)

{
  return *(byte *)(param_1 + 0x10) >> 5 & 1;
}


// ===== 009a1150  FUN_009a1150 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_009a1150(long param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = FUN_009a1770(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(undefined8 *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_0099e5e8();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar2 = FUN_009a1804(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(undefined8 *)(param_1 + 0x20) = uVar2;
      }
      else {
        FUN_0099ebd4();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar2 = FUN_009a18d0(uVar3,*(undefined8 *)(param_2 + 0x28));
        *(undefined8 *)(param_1 + 0x28) = uVar2;
      }
      else {
        FUN_0099f2f8();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar2 = FUN_009a1934(uVar3,*(undefined8 *)(param_2 + 0x30));
        *(undefined8 *)(param_1 + 0x30) = uVar2;
      }
      else {
        FUN_0099fd44();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        uVar2 = FUN_009a1a08(uVar3,*(undefined8 *)(param_2 + 0x38));
        *(undefined8 *)(param_1 + 0x38) = uVar2;
      }
      else {
        FUN_009a0a2c();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04((ulong *)(param_1 + 8),(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
    return;
  }
  return;
}


// ===== 009a12d0  FUN_009a12d0 =====

undefined ** FUN_009a12d0(void)

{
  return &PTR_PTR_00d40588;
}


// ===== 009a12e0  FUN_009a12e0 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_009a12e0(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_0099e6d0(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_0099ecac(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_0099f46c(*(undefined8 *)(param_1 + 0x28));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_0099ff10(*(undefined8 *)(param_1 + 0x30));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      FUN_009a0b88(*(undefined8 *)(param_1 + 0x38));
    }
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dcab0((byte *)(param_1 + 8));
    return;
  }
  return;
}


// ===== 009a1384  FUN_009a1384 =====

/* WARNING: Type propagation algorithm not settling */

byte * FUN_009a1384(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  void *__src;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 >> 5 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar2 = *(uint *)(param_1 + 0x40);
    uVar4 = (ulong)(int)uVar2;
    pbVar7 = param_2 + 1;
    *param_2 = 8;
    uVar5 = uVar4;
    pbVar3 = pbVar7;
    if (0x7f < uVar2) {
      do {
        uVar4 = uVar5 >> 7;
        uVar6 = uVar5 >> 0xe;
        pbVar7 = pbVar3 + 1;
        *pbVar3 = (byte)uVar5 | 0x80;
        uVar5 = uVar4;
        pbVar3 = pbVar7;
      } while (uVar6 != 0);
    }
    param_2 = pbVar7 + 1;
    *pbVar7 = (byte)uVar4;
  }
  if ((uVar1 & 1) != 0) {
    param_2 = (byte *)FUN_006fc2f0(2,*(long *)(param_1 + 0x18),
                                   *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x14),param_2,param_3
                                  );
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = (byte *)FUN_006fc2f0(3,*(long *)(param_1 + 0x20),
                                   *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x14),param_2,param_3
                                  );
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_2 = (byte *)FUN_006fc2f0(4,*(long *)(param_1 + 0x28),
                                   *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x14),param_2,param_3
                                  );
  }
  if ((uVar1 >> 3 & 1) != 0) {
    param_2 = (byte *)FUN_006fc2f0(5,*(long *)(param_1 + 0x30),
                                   *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x14),param_2,param_3
                                  );
  }
  if ((uVar1 >> 4 & 1) == 0) {
    uVar5 = *(ulong *)(param_1 + 8);
  }
  else {
    param_2 = (byte *)FUN_006fc2f0(6,*(long *)(param_1 + 0x38),
                                   *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x14),param_2,param_3
                                  );
    uVar5 = *(ulong *)(param_1 + 8);
  }
  if ((uVar5 & 1) != 0) {
    uVar5 = uVar5 & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      __src = *(void **)(uVar5 + 8);
      uVar4 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      __src = (void *)(uVar5 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      pbVar3 = (byte *)FUN_006dcef8(param_3,__src,uVar4,param_2);
      return pbVar3;
    }
    memcpy(param_2,__src,uVar4 & 0xffffffff);
    param_2 = param_2 + (int)uVar4;
  }
  return param_2;
}


// ===== 009a1544  FUN_009a1544 =====

long FUN_009a1544(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x1f) == 0) {
    lVar5 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = FUN_0099e94c(*(undefined8 *)(param_1 + 0x18));
      lVar5 = lVar5 + (ulong)((int)LZCOUNT((int)lVar5) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar3 = FUN_0099ef74(*(undefined8 *)(param_1 + 0x20));
      lVar5 = lVar5 + lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar3 = FUN_0099f9e4(*(undefined8 *)(param_1 + 0x28));
      lVar5 = lVar5 + lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      lVar3 = FUN_009a0540(*(undefined8 *)(param_1 + 0x30));
      lVar5 = lVar5 + lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 4 & 1) != 0) {
      lVar3 = FUN_009a0e08(*(undefined8 *)(param_1 + 0x38));
      lVar5 = lVar5 + lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 1;
    }
  }
  if ((uVar1 >> 5 & 1) == 0) {
    uVar2 = *(ulong *)(param_1 + 8);
  }
  else {
    lVar5 = lVar5 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x40)) * -9 + 0x280U >> 6) + 1;
    uVar2 = *(ulong *)(param_1 + 8);
  }
  if ((uVar2 & 1) == 0) {
    iVar4 = (int)lVar5;
  }
  else {
    lVar3 = (long)*(char *)((uVar2 & 0xfffffffffffffffe) + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)((uVar2 & 0xfffffffffffffffe) + 0x10);
    }
    lVar5 = lVar3 + lVar5;
    iVar4 = (int)lVar5;
  }
  if ((iVar4 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)lVar5;
  }
  return lVar5;
}


// ===== 009a16f0  FUN_009a16f0 =====

undefined8 * FUN_009a16f0(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    puVar1 = (undefined8 *)operator_new(0x20);
  }
  else {
    puVar1 = (undefined8 *)FUN_006fdbf0(param_1,0x20);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_00d40228;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  puVar1[3] = *(undefined8 *)(param_2 + 0x18);
  puVar1[2] = uVar2;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  return puVar1;
}


// ===== 009a1770  FUN_009a1770 =====

undefined8 * FUN_009a1770(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  Hint_Prefetch(param_2 + 0x40,0,0,0);
  if (param_1 == 0) {
    puVar1 = (undefined8 *)operator_new(0x48);
  }
  else {
    puVar1 = (undefined8 *)FUN_006fdbf0(param_1,0x48);
  }
  *puVar1 = &PTR_FUN_00d40268;
  puVar1[1] = param_1;
  uVar7 = *(undefined8 *)(param_2 + 0x28);
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  puVar1[8] = *(undefined8 *)(param_2 + 0x40);
  puVar1[5] = uVar7;
  puVar1[4] = uVar6;
  puVar1[7] = uVar3;
  puVar1[6] = uVar2;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  return puVar1;
}


// ===== 009a1804  FUN_009a1804 =====

undefined8 * FUN_009a1804(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  Hint_Prefetch(param_2 + 0x40,0,0,0);
  if (param_1 == 0) {
    puVar2 = (undefined8 *)operator_new(0x38);
  }
  else {
    puVar2 = (undefined8 *)FUN_006fdbf0(param_1,0x38);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_00d401e8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04(puVar2 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)((long)puVar2 + 0x1c) = 0;
  *(undefined8 *)((long)puVar2 + 0x14) = 0;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x24) = 0;
  puVar2[5] = param_1;
  if (*(int *)(param_2 + 0x20) != 0) {
    FUN_00711b10(puVar2 + 3,param_2 + 0x18,param_1);
  }
  uVar3 = *(ulong *)(param_2 + 0x30);
  if ((uVar3 & 3) != 0) {
    uVar3 = FUN_00713e9c((ulong *)(param_2 + 0x30),param_1);
  }
  puVar2[6] = uVar3;
  return puVar2;
}


// ===== 009a18d0  FUN_009a18d0 =====

void * FUN_009a18d0(long param_1,long param_2)

{
  void *pvVar1;
  
  Hint_Prefetch(param_2 + 0x40,0,0,0);
  if (param_1 == 0) {
    pvVar1 = operator_new(0x68);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x68);
  }
  FUN_0099f12c(pvVar1,param_1,param_2);
  return pvVar1;
}


// ===== 009a1934  FUN_009a1934 =====

undefined8 * FUN_009a1934(long param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  Hint_Prefetch(param_2 + 0x40,0,0,0);
  if (param_1 == 0) {
    puVar1 = (undefined8 *)operator_new(0x48);
  }
  else {
    puVar1 = (undefined8 *)FUN_006fdbf0(param_1,0x48);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_00d402a8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  uVar2 = *(ulong *)(param_2 + 0x18);
  if ((uVar2 & 3) != 0) {
    uVar2 = FUN_00713e9c((ulong *)(param_2 + 0x18),param_1);
  }
  puVar1[3] = uVar2;
  uVar2 = *(ulong *)(param_2 + 0x20);
  if ((uVar2 & 3) != 0) {
    uVar2 = FUN_00713e9c((ulong *)(param_2 + 0x20),param_1);
  }
  puVar1[4] = uVar2;
  uVar3 = *(undefined8 *)(param_2 + 0x34);
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)((long)puVar1 + 0x3c) = *(undefined8 *)(param_2 + 0x3c);
  *(undefined8 *)((long)puVar1 + 0x34) = uVar3;
  puVar1[6] = uVar5;
  puVar1[5] = uVar4;
  return puVar1;
}


// ===== 009a1a08  FUN_009a1a08 =====

undefined8 * FUN_009a1a08(long param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  Hint_Prefetch(param_2 + 0x40,0,0,0);
  if (param_1 == 0) {
    puVar2 = (undefined8 *)operator_new(0x38);
  }
  else {
    puVar2 = (undefined8 *)FUN_006fdbf0(param_1,0x38);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_00d402e8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04(puVar2 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(puVar2 + 2) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_009a16f0(param_1,*(undefined8 *)(param_2 + 0x18));
  }
  puVar2[3] = uVar3;
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  puVar2[6] = *(undefined8 *)(param_2 + 0x30);
  puVar2[5] = uVar4;
  puVar2[4] = uVar3;
  return puVar2;
}


// ===== 009a1ab8  FUN_009a1ab8 =====

void FUN_009a1ab8(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xb58);
  FUN_009a1ce8(puVar1,param_3,param_2 + 8,param_2 + 0xc0,param_2 + 0x330,param_2 + 0x5a8,
               param_2 + 0x5b0,param_2 + 0x5a0,param_2 + 0x5b8,param_2 + 0x5c0,param_2 + 0x5c8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
  }
  *param_1 = puVar1;
  return;
}


// ===== 009a1b5c  FUN_009a1b5c =====

void FUN_009a1b5c(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[0xb9];
  param_1[0xb9] = 0;
  *param_1 = &PTR_FUN_00d405f0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xb8];
  param_1[0xb8] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  if ((long *)param_1[0xb7] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xb7] + 8))();
  }
  plVar1 = (long *)param_1[0xb6];
  param_1[0xb6] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  plVar1 = (long *)param_1[0xb5];
  param_1[0xb5] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  plVar1 = (long *)param_1[0xb4];
  param_1[0xb4] = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x009a1c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}


// ===== 009a1c24  FUN_009a1c24 =====

void FUN_009a1c24(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[0xb9];
  param_1[0xb9] = 0;
  *param_1 = &PTR_FUN_00d405f0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xb8];
  param_1[0xb8] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  if ((long *)param_1[0xb7] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xb7] + 8))();
  }
  plVar1 = (long *)param_1[0xb6];
  param_1[0xb6] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  plVar1 = (long *)param_1[0xb5];
  param_1[0xb5] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  plVar1 = (long *)param_1[0xb4];
  param_1[0xb4] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  operator_delete(param_1);
  return;
}


// ===== 009a1ce8  FUN_009a1ce8 =====

void FUN_009a1ce8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 long param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                 undefined8 *param_9,undefined8 *param_10,undefined8 *param_11)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *local_550;
  undefined1 local_548 [616];
  undefined1 local_2e0;
  undefined1 local_2d8 [616];
  undefined1 local_70;
  
  bVar1 = *(char *)(param_4 + 0x268) == '\x01';
  local_2d8[0] = 0;
  local_70 = 0;
  if (bVar1) {
    FUN_0061f310(local_2d8,param_4);
  }
  local_548[0] = 0;
  local_2e0 = 0;
  bVar2 = *(char *)(param_5 + 0x268) == '\x01';
  local_70 = bVar1;
  if (bVar2) {
    FUN_0061f310(local_548,param_5);
  }
  uVar3 = *param_6;
  *param_6 = 0;
  uVar4 = *param_7;
  *param_7 = 0;
  uVar5 = *param_8;
  *param_8 = 0;
  local_550 = (long *)*param_9;
  *param_9 = 0;
  uVar7 = *param_10;
  *param_10 = 0;
  uVar6 = *param_11;
  *param_11 = 0;
  local_2e0 = bVar2;
  FUN_009a1f00(param_1,param_2,param_3,local_2d8,local_548,uVar3,uVar4,uVar5,&local_550,uVar7,uVar6)
  ;
  if (local_550 != (long *)0x0) {
    (**(code **)(*local_550 + 8))();
  }
  *(undefined4 *)(param_1 + 0x16a) = 0;
  *param_1 = &PTR_FUN_00d40618;
  return;
}


// ===== 009a1e20  FUN_009a1e20 =====

void FUN_009a1e20(long param_1)

{
  FUN_00d0f740(1,param_1 + 0xb50);
  return;
}


// ===== 009a1e44  FUN_009a1e44 =====

bool FUN_009a1e44(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 0x16a);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 009a1e9c  FUN_009a1e9c =====

void FUN_009a1e9c(void *param_1)

{
  FUN_009a278c();
  operator_delete(param_1);
  return;
}


// ===== 009a1ecc  FUN_009a1ecc =====

void FUN_009a1ecc(long param_1)

{
  FUN_009a7a48(param_1 + 0x8f8);
  return;
}


// ===== 009a1ed8  FUN_009a1ed8 =====

void FUN_009a1ed8(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009a1ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf8))();
  return;
}


// ===== 009a1ee8  FUN_009a1ee8 =====

bool FUN_009a1ee8(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0xb50) == 1;
}


// ===== 009a1f00  FUN_009a1f00 =====

/* WARNING: Removing unreachable block (ram,0x009a2734) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009a1f00(long *param_1,long *param_2,long *param_3,long param_4,long param_5,long param_6,
                 long param_7,long param_8,long *param_9,long param_10,long param_11)

{
  undefined8 *puVar1;
  int *****pppppiVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined1 uStack_101;
  char *local_100;
  int ****ppppiStack_f8;
  ulong local_f0;
  char **ppcStack_e8;
  char *local_e0;
  ulong *puStack_d8;
  ulong local_d0;
  char **ppcStack_c8;
  char *local_c0;
  ulong *puStack_b8;
  ulong local_b0;
  char **ppcStack_a8;
  char *local_a0;
  ulong *puStack_98;
  ulong local_90;
  char **ppcStack_88;
  int ****local_80;
  ulong local_78;
  undefined1 *local_70;
  
  *param_1 = (long)&PTR_FUN_00d40748;
  lVar10 = *param_2;
  param_1[1] = lVar10;
  if (lVar10 != 0) {
    FUN_00d0f740(1,lVar10 + 8);
  }
  lVar15 = param_2[4];
  lVar10 = param_2[3];
  lVar16 = param_2[1];
  param_1[3] = param_2[2];
  param_1[2] = lVar16;
  param_1[5] = lVar15;
  param_1[4] = lVar10;
  pvVar7 = operator_new(1);
  iVar6 = FUN_00d0f7a0(1,&DAT_00d80800);
  FUN_0065b3d8(pvVar7,iVar6 + 1);
  param_1[6] = (long)pvVar7;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  puVar8 = (undefined8 *)operator_new(0x4b0);
  puVar1 = puVar8 + 0x96;
  param_1[0xb] = (long)puVar8;
  param_1[0xc] = (long)puVar8;
  param_1[0xd] = (long)puVar1;
  uVar11 = (ulong)((long)puVar8 * -0x2aaaaaaaaaaaaaab) >> 2;
  if (0x62 < uVar11) {
    uVar11 = 99;
  }
  if ((7 < (ulong)((long)puVar8 * -0x2aaaaaaaaaaaaaab)) && ((-(int)puVar8 & 3U) == 0)) {
    uVar11 = uVar11 & 0x7e;
    puVar9 = puVar8 + 2;
    puVar8 = (undefined8 *)((long)puVar8 + uVar11 * 0xc);
    do {
      puVar9[-2] = 0;
      uVar11 = uVar11 - 2;
      *(undefined8 *)((long)puVar9 + -4) = 0;
      puVar9 = puVar9 + 3;
    } while (uVar11 != 0);
  }
  do {
    if (puVar8 == (undefined8 *)0x0) goto LAB_009a2778;
    puVar9 = (undefined8 *)((long)puVar8 + 0xc);
    *puVar8 = 0;
    puVar8 = puVar9;
  } while (puVar9 != puVar1);
  param_1[0xc] = (long)puVar1;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  puVar8 = (undefined8 *)operator_new(0x4b0);
  puVar1 = puVar8 + 0x96;
  param_1[0x12] = (long)puVar8;
  param_1[0x13] = (long)puVar8;
  param_1[0x14] = (long)puVar1;
  uVar11 = (ulong)((long)puVar8 * -0x2aaaaaaaaaaaaaab) >> 2;
  if (0x62 < uVar11) {
    uVar11 = 99;
  }
  if ((7 < (ulong)((long)puVar8 * -0x2aaaaaaaaaaaaaab)) && ((-(int)puVar8 & 3U) == 0)) {
    uVar11 = uVar11 & 0x7e;
    puVar9 = puVar8 + 2;
    puVar8 = (undefined8 *)((long)puVar8 + uVar11 * 0xc);
    do {
      puVar9[-2] = 0;
      uVar11 = uVar11 - 2;
      *(undefined8 *)((long)puVar9 + -4) = 0;
      puVar9 = puVar9 + 3;
    } while (uVar11 != 0);
  }
  while (puVar8 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)((long)puVar8 + 0xc);
    *puVar8 = 0;
    puVar8 = puVar9;
    if (puVar9 == puVar1) {
      param_1[0x13] = (long)puVar1;
      param_1[0x15] = (long)(param_1 + 7);
      param_1[0x16] = (long)(param_1 + 0xe);
      param_1[0x17] = param_8;
      param_1[0x18] = 0;
      FUN_009a888c(param_1 + 0x19);
      local_80 = (int ****)&DAT_aaaaaaaaaaaaaaaa;
      pthread_mutexattr_init((pthread_mutexattr_t *)&local_80);
      pthread_mutex_init((pthread_mutex_t *)(param_1 + 0x23),(pthread_mutexattr_t *)&local_80);
      pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_80);
      local_80 = (int ****)&DAT_aaaaaaaaaaaaaaaa;
      pthread_mutexattr_init((pthread_mutexattr_t *)&local_80);
      pthread_mutex_init((pthread_mutex_t *)(param_1 + 0x28),(pthread_mutexattr_t *)&local_80);
      pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_80);
      lVar16 = param_3[4];
      lVar15 = param_3[7];
      lVar10 = param_3[6];
      lVar18 = param_3[1];
      lVar17 = *param_3;
      lVar20 = param_3[3];
      lVar19 = param_3[2];
      param_1[0x32] = param_3[5];
      param_1[0x31] = lVar16;
      param_1[0x34] = lVar15;
      param_1[0x33] = lVar10;
      param_1[0x2e] = lVar18;
      param_1[0x2d] = lVar17;
      param_1[0x30] = lVar20;
      param_1[0x2f] = lVar19;
      lVar16 = param_3[0xc];
      lVar15 = param_3[0xf];
      lVar10 = param_3[0xe];
      lVar18 = param_3[9];
      lVar17 = param_3[8];
      lVar20 = param_3[0xb];
      lVar19 = param_3[10];
      param_1[0x3a] = param_3[0xd];
      param_1[0x39] = lVar16;
      param_1[0x3c] = lVar15;
      param_1[0x3b] = lVar10;
      param_1[0x36] = lVar18;
      param_1[0x35] = lVar17;
      param_1[0x38] = lVar20;
      param_1[0x37] = lVar19;
      lVar20 = param_3[0x13];
      lVar19 = param_3[0x12];
      lVar16 = param_3[0x15];
      lVar15 = param_3[0x14];
      lVar10 = param_3[0x16];
      lVar18 = param_3[0x11];
      lVar17 = param_3[0x10];
      *(undefined1 *)(param_1 + 0x44) = 0;
      *(int *)(param_1 + 0x43) = (int)lVar10;
      param_1[0x40] = lVar20;
      param_1[0x3f] = lVar19;
      param_1[0x42] = lVar16;
      param_1[0x41] = lVar15;
      param_1[0x3e] = lVar18;
      param_1[0x3d] = lVar17;
      *(undefined1 *)(param_1 + 0x91) = 0;
      if (*(char *)(param_4 + 0x268) == '\x01') {
        FUN_0061f310(param_1 + 0x44);
        *(undefined1 *)(param_1 + 0x91) = 1;
      }
      *(undefined1 *)(param_1 + 0x92) = 0;
      *(undefined1 *)(param_1 + 0xdf) = 0;
      if (*(char *)(param_5 + 0x268) == '\x01') {
        FUN_0061f310(param_1 + 0x92);
        *(undefined1 *)(param_1 + 0xdf) = 1;
      }
      bVar13 = true;
      *(undefined4 *)((long)param_1 + 0x703) = 0;
      *(undefined4 *)((long)param_1 + 0x706) = 0;
      *(bool *)(param_1 + 0xe0) = param_6 != 0;
      *(bool *)((long)param_1 + 0x702) = param_10 != 0;
      *(bool *)((long)param_1 + 0x701) = param_7 != 0;
      *(undefined1 *)((long)param_1 + 0x70a) = 1;
      lVar10 = *param_9;
      *param_9 = 0;
      param_1[0xe7] = 0;
      param_1[0xe6] = 0;
      param_1[0xe2] = lVar10;
      param_1[0xe9] = 0;
      param_1[0xe8] = 0;
      param_1[0xeb] = 0;
      param_1[0xea] = 0;
      param_1[0xed] = 0;
      param_1[0xec] = 0;
      lVar15 = _UNK_001f4a28;
      lVar10 = _DAT_001f4a20;
      param_1[0xee] = param_11;
      param_1[0xe3] = param_6;
      param_1[0xe4] = param_7;
      param_1[0xe5] = param_10;
      *(undefined4 *)(param_1 + 0xef) = 16000;
      param_1[0xf1] = lVar15;
      param_1[0xf0] = lVar10;
      *(undefined4 *)(param_1 + 0xf2) = 16000;
      param_1[0xf3] = 1;
      param_1[0xf4] = 0xa0;
      *(undefined4 *)(param_1 + 0xf5) = 16000;
      param_1[0xf7] = lVar15;
      param_1[0xf6] = lVar10;
      *(undefined4 *)(param_1 + 0xf8) = 16000;
      param_1[0xf9] = 1;
      param_1[0xfa] = 0xa0;
      *(undefined4 *)(param_1 + 0xfb) = 16000;
      param_1[0xfd] = lVar15;
      param_1[0xfc] = lVar10;
      (**(code **)(*(long *)param_2[1] + 0x10))
                (&local_80,(long *)param_2[1],"WebRTC-ApmExperimentalMultiChannelRenderKillSwitch",
                 0x32);
      uVar11 = local_78;
      if (-1 < (long)local_70) {
        uVar11 = (ulong)local_70 >> 0x38;
      }
      if (6 < uVar11) {
        pppppiVar2 = (int *****)local_80;
        if (-1 < (long)local_70) {
          pppppiVar2 = &local_80;
        }
        bVar13 = *(int *)pppppiVar2 != 0x62616e45 || *(int *)((long)pppppiVar2 + 3) != 0x64656c62;
      }
      if ((long)local_70 < 0) {
        operator_delete(local_80);
      }
      (**(code **)(*(long *)param_2[1] + 0x10))
                (&local_80,(long *)param_2[1],"WebRTC-ApmExperimentalMultiChannelCaptureKillSwitch",
                 0x33);
      uVar11 = local_78;
      if (-1 < (long)local_70) {
        uVar11 = (ulong)local_70 >> 0x38;
      }
      if (uVar11 < 7) {
        bVar12 = true;
      }
      else {
        pppppiVar2 = (int *****)local_80;
        if (-1 < (long)local_70) {
          pppppiVar2 = &local_80;
        }
        bVar12 = *(int *)pppppiVar2 != 0x62616e45 || *(int *)((long)pppppiVar2 + 3) != 0x64656c62;
      }
      if ((long)local_70 < 0) {
        operator_delete(local_80);
      }
      (**(code **)(*(long *)param_2[1] + 0x10))
                (&local_80,(long *)param_2[1],"WebRTC-FullBandHpfKillSwitch",0x1c);
      uVar11 = local_78;
      if (-1 < (long)local_70) {
        uVar11 = (ulong)local_70 >> 0x38;
      }
      if (uVar11 < 7) {
        bVar4 = false;
      }
      else {
        pppppiVar2 = (int *****)local_80;
        if (-1 < (long)local_70) {
          pppppiVar2 = &local_80;
        }
        bVar4 = *(int *)pppppiVar2 == 0x62616e45 && *(int *)((long)pppppiVar2 + 3) == 0x64656c62;
      }
      if ((long)local_70 < 0) {
        operator_delete(local_80);
      }
      (**(code **)(*(long *)param_2[1] + 0x10))
                (&local_80,(long *)param_2[1],"WebRTC-MutedStateKillSwitch",0x1b);
      uVar11 = local_78;
      if (-1 < (long)local_70) {
        uVar11 = (ulong)local_70 >> 0x38;
      }
      if (uVar11 < 7) {
        bVar14 = true;
      }
      else {
        pppppiVar2 = (int *****)local_80;
        if (-1 < (long)local_70) {
          pppppiVar2 = &local_80;
        }
        bVar14 = *(int *)pppppiVar2 != 0x62616e45 || *(int *)((long)pppppiVar2 + 3) != 0x64656c62;
      }
      if ((long)local_70 < 0) {
        operator_delete(local_80);
      }
      (**(code **)(*(long *)param_2[1] + 0x10))
                (&local_80,(long *)param_2[1],"WebRTC-ApmEnforce48kHzProcessingRate",0x24);
      uVar11 = local_78;
      if (-1 < (long)local_70) {
        uVar11 = (ulong)local_70 >> 0x38;
      }
      if (uVar11 < 7) {
        bVar5 = false;
      }
      else {
        pppppiVar2 = (int *****)local_80;
        if (-1 < (long)local_70) {
          pppppiVar2 = &local_80;
        }
        bVar5 = *(int *)pppppiVar2 == 0x62616e45 && *(int *)((long)pppppiVar2 + 3) == 0x64656c62;
      }
      if ((long)local_70 < 0) {
        operator_delete(local_80);
      }
      uVar3 = DAT_001f5a88;
      *(bool *)((long)param_1 + 0x7f4) = bVar5;
      *(bool *)(param_1 + 0xfe) = bVar13;
      *(int *)(param_1 + 0xff) = (int)uVar3;
      lVar15 = _UNK_001f2708;
      lVar10 = _DAT_001f2700;
      *(bool *)((long)param_1 + 0x7f1) = bVar12;
      *(bool *)((long)param_1 + 0x7f2) = bVar4;
      *(bool *)((long)param_1 + 0x7f3) = bVar14;
      param_1[0x100] = 0;
      param_1[0x102] = 0;
      param_1[0x101] = 0;
      *(undefined4 *)(param_1 + 0x103) = 16000;
      param_1[0x105] = lVar15;
      param_1[0x104] = lVar10;
      *(undefined1 *)(param_1 + 0x106) = 0;
      *(undefined4 *)((long)param_1 + 0x834) = 0xbf800000;
      param_1[0x107] = -1;
      FUN_0065f054(param_1 + 0x108);
      *(undefined1 *)(param_1 + 0x116) = 0;
      *(undefined1 *)((long)param_1 + 0x8b4) = 0;
      *(undefined1 *)(param_1 + 0x117) = 0;
      *(undefined1 *)((long)param_1 + 0x8bc) = 0;
      *(undefined1 *)(param_1 + 0x118) = 0;
      *(undefined4 *)(param_1 + 0x119) = 16000;
      param_1[0x11b] = lVar15;
      param_1[0x11a] = lVar10;
      *(undefined4 *)(param_1 + 0x11c) = 0;
      param_1[0x11e] = 0;
      param_1[0x11d] = 0;
      FUN_009a79b4(param_1 + 0x11f);
      param_1[0x13c] = 0;
      param_1[0x13b] = 0;
      param_1[0x13e] = 0;
      param_1[0x13d] = 0;
      param_1[0x140] = 0;
      param_1[0x13f] = 0;
      param_1[0x142] = 0;
      param_1[0x141] = 0;
      param_1[0x144] = 0;
      param_1[0x143] = 0;
      param_1[0x146] = 0;
      param_1[0x145] = 0;
      param_1[0x13a] = 0;
      param_1[0x139] = 0;
      FUN_0092c2a4(param_1 + 0x147);
      FUN_0092c2a4(param_1 + 0x14c);
      *(undefined4 *)(param_1 + 0x151) = 0;
      FUN_009af064(param_1 + 0x152,0);
      FUN_009af064(param_1 + 0x15d,1);
      param_1[0x169] = 0;
      param_1[0x168] = 0;
      uVar11 = FUN_00417e08();
      if ((uVar11 & 1) == 0) {
        local_80 = (int ****)0x1b8340;
        local_78 = 0xf21;
        local_70 = &uStack_101;
        ppppiStack_f8 = (int ****)&local_80;
        local_f0 = (ulong)(param_1[0x17] != 0);
        local_100 = "Injected APM submodules:\nEcho control factory: ";
        ppcStack_e8 = &local_100;
        puStack_d8 = &local_f0;
        local_d0 = (ulong)(param_1[0xe2] != 0);
        local_e0 = "\nEcho detector: ";
        ppcStack_c8 = &local_e0;
        local_b0 = (ulong)(param_1[0xe5] != 0);
        puStack_b8 = &local_d0;
        local_90 = (ulong)(param_1[0xe3] != 0);
        local_c0 = "\nCapture analyzer: ";
        ppcStack_a8 = &local_c0;
        puStack_98 = &local_b0;
        local_a0 = "\nCapture post processor: ";
        ppcStack_88 = &local_a0;
        FUN_00623bb0(&DAT_0022b5b0,"../../modules/audio_processing/audio_processing_impl.cc",0xf21);
      }
      uVar11 = FUN_009ba2ec();
      if (((uVar11 & 1) == 0) && (uVar11 = FUN_00417e08(), (uVar11 & 1) == 0)) {
        FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_processing/audio_processing_impl.cc",0xf81,
                     "Denormal disabler unsupported");
      }
      uVar11 = FUN_00417e08();
      if ((uVar11 & 1) == 0) {
        FUN_009a8d54(&local_80,param_1 + 0x2d);
        FUN_00623bb0(&DAT_001f4e90,"../../modules/audio_processing/audio_processing_impl.cc",0xf99,
                     "AudioProcessing: ",&local_80);
      }
      (**(code **)(*param_1 + 0x20))(param_1);
      return;
    }
  }
LAB_009a2778:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 009a278c  FUN_009a278c =====

void FUN_009a278c(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  long *plVar4;
  long lVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar5 = param_1[0x169];
  param_1[0x169] = 0;
  *param_1 = &PTR_FUN_00d40748;
  if (lVar5 != 0) {
    FUN_009a821c(param_1 + 0x169);
  }
  lVar5 = param_1[0x168];
  param_1[0x168] = 0;
  if (lVar5 != 0) {
    FUN_009a8104(param_1 + 0x168);
  }
  FUN_009af484(param_1 + 0x15d);
  FUN_009af484(param_1 + 0x152);
  FUN_0092c2c0(param_1 + 0x14c);
  FUN_0092c2c0(param_1 + 0x147);
  pvVar2 = (void *)param_1[0x144];
  if (pvVar2 == (void *)0x0) {
LAB_009a2878:
    pvVar2 = (void *)param_1[0x141];
    if (pvVar2 == (void *)0x0) {
LAB_009a28f8:
      pvVar2 = (void *)param_1[0x13d];
      if (pvVar2 == (void *)0x0) {
LAB_009a2970:
        pvVar2 = (void *)param_1[0x13a];
        if (pvVar2 == (void *)0x0) {
LAB_009a29e8:
          pvVar2 = (void *)param_1[0x136];
          if (pvVar2 != (void *)0x0) {
            pvVar6 = (void *)param_1[0x137];
            pvVar3 = pvVar2;
            if (pvVar2 != pvVar6) {
              do {
                pvVar6 = (void *)((long)pvVar6 + -0x70);
                if (pvVar6 == (void *)0x0) goto LAB_009a2c40;
                FUN_0065f0c8(pvVar6);
              } while (pvVar6 != pvVar2);
              pvVar3 = (void *)param_1[0x136];
            }
            param_1[0x137] = pvVar2;
            operator_delete(pvVar3);
          }
          FUN_0065f0c8(param_1 + 0x124);
          pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x11f));
          plVar4 = (long *)param_1[0x11e];
          param_1[0x11e] = 0;
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 8))();
          }
          plVar4 = (long *)param_1[0x11d];
          param_1[0x11d] = 0;
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 8))();
          }
          FUN_0065f0c8(param_1 + 0x108);
          plVar4 = (long *)param_1[0x102];
          param_1[0x102] = 0;
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 8))();
          }
          plVar4 = (long *)param_1[0x101];
          param_1[0x101] = 0;
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 8))();
          }
          plVar4 = (long *)param_1[0x100];
          param_1[0x100] = 0;
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 8))();
          }
          FUN_009a2cd4(param_1 + 0xe2);
          pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x28));
          pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x23));
          if (*(char *)((long)param_1 + 0x117) < '\0') {
            operator_delete((void *)param_1[0x20]);
          }
          if (*(char *)((long)param_1 + 0xff) < '\0') {
            operator_delete((void *)param_1[0x1d]);
          }
          plVar4 = (long *)param_1[0x18];
          param_1[0x18] = 0;
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 8))();
          }
          plVar4 = (long *)param_1[0x17];
          param_1[0x17] = 0;
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 8))();
          }
          pvVar2 = (void *)param_1[0x12];
          if (pvVar2 == (void *)0x0) {
LAB_009a2bc4:
            pvVar2 = (void *)param_1[0xb];
            if (pvVar2 == (void *)0x0) {
LAB_009a2c64:
              pvVar2 = (void *)param_1[6];
              param_1[6] = 0;
              if (pvVar2 != (void *)0x0) {
                FUN_0065b3e0(pvVar2);
                operator_delete(pvVar2);
              }
              plVar4 = (long *)param_1[1];
              if ((plVar4 != (long *)0x0) &&
                 (iVar1 = FUN_00d0f7a0(0xffffffff,plVar4 + 1), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x009a2cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*plVar4 + 8))(plVar4);
                return;
              }
              return;
            }
            pvVar6 = (void *)param_1[0xc];
            uVar7 = (ulong)(((long)pvVar2 - (long)pvVar6) * 0x1555555555555555) >> 2;
            uVar8 = (long)pvVar6 * -0x1555555555555555 - 4U >> 2;
            if (uVar8 <= uVar7) {
              uVar7 = uVar8;
            }
            if ((1 < uVar7) && ((((int)pvVar2 - (int)pvVar6 | -(int)pvVar6) & 3U) == 0)) {
              uVar7 = uVar7 & 0x3ffffffffffffffe;
              pvVar6 = (void *)((long)pvVar6 + uVar7 * -0xc);
              do {
                uVar7 = uVar7 - 2;
              } while (uVar7 != 0);
            }
            do {
              if (pvVar6 == pvVar2) {
                param_1[0xc] = pvVar2;
                operator_delete(pvVar2);
                goto LAB_009a2c64;
              }
              pvVar6 = (void *)((long)pvVar6 + -0xc);
            } while (pvVar6 != (void *)0x0);
          }
          else {
            pvVar6 = (void *)param_1[0x13];
            uVar7 = (ulong)(((long)pvVar2 - (long)pvVar6) * 0x1555555555555555) >> 2;
            uVar8 = (long)pvVar6 * -0x1555555555555555 - 4U >> 2;
            if (uVar8 <= uVar7) {
              uVar7 = uVar8;
            }
            if ((1 < uVar7) && ((((int)pvVar2 - (int)pvVar6 | -(int)pvVar6) & 3U) == 0)) {
              uVar7 = uVar7 & 0x3ffffffffffffffe;
              pvVar6 = (void *)((long)pvVar6 + uVar7 * -0xc);
              do {
                uVar7 = uVar7 - 2;
              } while (uVar7 != 0);
            }
            do {
              if (pvVar6 == pvVar2) {
                param_1[0x13] = pvVar2;
                operator_delete(pvVar2);
                goto LAB_009a2bc4;
              }
              pvVar6 = (void *)((long)pvVar6 + -0xc);
            } while (pvVar6 != (void *)0x0);
          }
        }
        else {
          pvVar6 = (void *)param_1[0x13b];
          uVar8 = (ulong)((long)pvVar6 + ((long)pvVar6 << 0x3f) + -2) >> 1;
          uVar7 = (ulong)(((long)pvVar2 - (long)pvVar6 << 0x3f) - ((long)pvVar2 - (long)pvVar6)) >>
                  1;
          if (uVar8 <= uVar7) {
            uVar7 = uVar8;
          }
          if ((1 < uVar7) && ((((int)pvVar2 - (uint)pvVar6 | (uint)pvVar6) & 1) == 0)) {
            uVar7 = uVar7 & 0x7ffffffffffffffe;
            pvVar6 = (void *)((long)pvVar6 + uVar7 * -2);
            do {
              uVar7 = uVar7 - 2;
            } while (uVar7 != 0);
          }
          do {
            if (pvVar6 == pvVar2) {
              param_1[0x13b] = pvVar2;
              operator_delete(pvVar2);
              goto LAB_009a29e8;
            }
            pvVar6 = (void *)((long)pvVar6 + -2);
          } while (pvVar6 != (void *)0x0);
        }
      }
      else {
        pvVar6 = (void *)param_1[0x13e];
        uVar8 = (ulong)((long)pvVar6 + ((long)pvVar6 << 0x3f) + -2) >> 1;
        uVar7 = (ulong)(((long)pvVar2 - (long)pvVar6 << 0x3f) - ((long)pvVar2 - (long)pvVar6)) >> 1;
        if (uVar8 <= uVar7) {
          uVar7 = uVar8;
        }
        if ((1 < uVar7) && ((((int)pvVar2 - (uint)pvVar6 | (uint)pvVar6) & 1) == 0)) {
          uVar7 = uVar7 & 0x7ffffffffffffffe;
          pvVar6 = (void *)((long)pvVar6 + uVar7 * -2);
          do {
            uVar7 = uVar7 - 2;
          } while (uVar7 != 0);
        }
        do {
          if (pvVar6 == pvVar2) {
            param_1[0x13e] = pvVar2;
            operator_delete(pvVar2);
            goto LAB_009a2970;
          }
          pvVar6 = (void *)((long)pvVar6 + -2);
        } while (pvVar6 != (void *)0x0);
      }
    }
    else {
      pvVar6 = (void *)param_1[0x142];
      uVar8 = (ulong)((long)pvVar6 + (-4 - ((long)pvVar6 << 0x3e))) >> 2;
      uVar7 = (ulong)(((long)pvVar2 - (long)pvVar6 << 0x3e) - ((long)pvVar2 - (long)pvVar6)) >> 2;
      if (uVar8 <= uVar7) {
        uVar7 = uVar8;
      }
      if ((1 < uVar7) && ((((int)pvVar2 - (int)pvVar6 | -(int)pvVar6) & 3U) == 0)) {
        uVar7 = uVar7 & 0x3ffffffffffffffe;
        pvVar6 = (void *)((long)pvVar6 + uVar7 * -4);
        do {
          uVar7 = uVar7 - 2;
        } while (uVar7 != 0);
      }
      do {
        if (pvVar6 == pvVar2) {
          param_1[0x142] = pvVar2;
          operator_delete(pvVar2);
          goto LAB_009a28f8;
        }
        pvVar6 = (void *)((long)pvVar6 + -4);
      } while (pvVar6 != (void *)0x0);
    }
  }
  else {
    pvVar6 = (void *)param_1[0x145];
    uVar8 = (ulong)((long)pvVar6 + (-4 - ((long)pvVar6 << 0x3e))) >> 2;
    uVar7 = (ulong)(((long)pvVar2 - (long)pvVar6 << 0x3e) - ((long)pvVar2 - (long)pvVar6)) >> 2;
    if (uVar8 <= uVar7) {
      uVar7 = uVar8;
    }
    if ((1 < uVar7) && ((((int)pvVar2 - (int)pvVar6 | -(int)pvVar6) & 3U) == 0)) {
      uVar7 = uVar7 & 0x3ffffffffffffffe;
      pvVar6 = (void *)((long)pvVar6 + uVar7 * -4);
      do {
        uVar7 = uVar7 - 2;
      } while (uVar7 != 0);
    }
    do {
      if (pvVar6 == pvVar2) {
        param_1[0x145] = pvVar2;
        operator_delete(pvVar2);
        goto LAB_009a2878;
      }
      pvVar6 = (void *)((long)pvVar6 + -4);
    } while (pvVar6 != (void *)0x0);
  }
LAB_009a2c40:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 009a2cd4  FUN_009a2cd4 =====

void FUN_009a2cd4(long *param_1)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  pvVar2 = (void *)param_1[0xb];
  param_1[0xb] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  lVar3 = param_1[10];
  param_1[10] = 0;
  if (lVar3 != 0) {
    FUN_009a833c();
  }
  pvVar2 = (void *)param_1[9];
  param_1[9] = 0;
  if (pvVar2 != (void *)0x0) {
    FUN_009a8404(pvVar2);
    operator_delete(pvVar2);
  }
  plVar1 = (long *)param_1[8];
  param_1[8] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x48))();
  }
  pvVar2 = (void *)param_1[7];
  param_1[7] = 0;
  if (pvVar2 != (void *)0x0) {
    FUN_0066087c(pvVar2);
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[6];
  param_1[6] = 0;
  if (pvVar2 != (void *)0x0) {
    FUN_009abeb0(pvVar2);
    operator_delete(pvVar2);
  }
  plVar1 = (long *)param_1[5];
  param_1[5] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x78))();
  }
  pvVar2 = (void *)param_1[4];
  param_1[4] = 0;
  if (pvVar2 != (void *)0x0) {
    FUN_009bae0c(pvVar2);
    operator_delete(pvVar2);
  }
  plVar1 = (long *)param_1[3];
  param_1[3] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  plVar1 = (long *)param_1[2];
  param_1[2] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  plVar1 = (long *)param_1[1];
  param_1[1] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  if ((long *)*param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x009a2e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)*param_1 + 8))();
    return;
  }
  return;
}


// ===== 009a2e50  FUN_009a2e50 =====

void FUN_009a2e50(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x9a2e58);
  (*pcVar1)();
}


// ===== 009a2e58  FUN_009a2e58 =====

undefined8 FUN_009a2e58(long *param_1)

{
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x23));
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x28));
  (**(code **)(*param_1 + 0x110))(param_1);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x28));
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x23));
  return 0;
}


// ===== 009a2eb0  FUN_009a2eb0 =====

undefined8 FUN_009a2eb0(long param_1,undefined8 param_2)

{
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x118));
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x140));
  FUN_009a2f08(param_1,param_2);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x140));
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x118));
  return 0;
}


// ===== 009a2f08  FUN_009a2f08 =====

void FUN_009a2f08(long *param_1,long *param_2)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  ulong uVar7;
  byte bVar8;
  long lVar9;
  uint uVar10;
  byte bVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  lVar9 = param_1[0xeb];
  bVar3 = *(byte *)((long)param_1 + 0x194);
  if ((*(byte *)(param_1 + 0x2f) & 1) == 0) {
    bVar11 = *(byte *)(param_1 + 0x30);
  }
  else {
    bVar11 = 1;
  }
  bVar6 = param_1[0xe7] != 0;
  bVar1 = param_1[0x17] != 0 | *(byte *)((long)param_1 + 0x196) & 1;
  if (((((*(byte *)((long)param_1 + 0x703) != bVar3) ||
        (bVar4 = *(byte *)((long)param_1 + 0x705), (bool)bVar4 != (lVar9 != 0))) ||
       (bVar5 = *(byte *)((long)param_1 + 0x706), (bool)bVar5 != bVar6)) ||
      (((bool)*(char *)((long)param_1 + 0x707) != (param_1[0xe8] != 0) ||
       (*(byte *)(param_1 + 0xe1) != (bVar11 & 1))))) ||
     (bVar8 = *(byte *)((long)param_1 + 0x709), bVar8 != bVar1)) {
    *(byte *)((long)param_1 + 0x703) = bVar3;
    *(bool *)((long)param_1 + 0x705) = lVar9 != 0;
    *(bool *)((long)param_1 + 0x706) = bVar6;
    *(bool *)((long)param_1 + 0x707) = param_1[0xe8] != 0;
    *(byte *)(param_1 + 0xe1) = bVar11 & 1;
    *(byte *)((long)param_1 + 0x709) = bVar1;
    bVar8 = bVar1;
    bVar5 = bVar6;
    bVar4 = lVar9 != 0;
  }
  *(undefined1 *)((long)param_1 + 0x70a) = 0;
  lVar14 = param_2[4];
  lVar13 = param_2[7];
  lVar9 = param_2[6];
  lVar16 = param_2[1];
  lVar15 = *param_2;
  lVar18 = param_2[3];
  lVar17 = param_2[2];
  param_1[0xf4] = param_2[5];
  param_1[0xf3] = lVar14;
  param_1[0xf6] = lVar13;
  param_1[0xf5] = lVar9;
  param_1[0xf0] = lVar16;
  param_1[0xef] = lVar15;
  param_1[0xf2] = lVar18;
  param_1[0xf1] = lVar17;
  lVar14 = param_2[8];
  lVar13 = param_2[0xb];
  lVar9 = param_2[10];
  param_1[0xf8] = param_2[9];
  param_1[0xf7] = lVar14;
  param_1[0xfa] = lVar13;
  param_1[0xf9] = lVar9;
  uVar10 = 48000;
  if (((int)param_1[0x2d] == 32000) && (uVar10 = 48000, *(char *)((long)param_1 + 0x7f4) == '\0')) {
    uVar10 = 32000;
  }
  uVar2 = *(uint *)(param_1 + 0xf2);
  if ((int)*(uint *)(param_1 + 0xef) <= (int)*(uint *)(param_1 + 0xf2)) {
    uVar2 = *(uint *)(param_1 + 0xef);
  }
  uVar12 = uVar10;
  bVar11 = bVar8;
  if (((((bVar3 & 1) == 0) && (((*(byte *)((long)param_1 + 0x704) | bVar4) & 1) == 0)) &&
      ((bVar5 & 1) == 0)) && (bVar8 == 0)) {
    uVar12 = 48000;
    bVar11 = 0;
  }
  param_1[0x11a] = 0;
  if (uVar2 < 0x7d01 || uVar12 < 0x7d01) {
    uVar12 = 32000;
  }
  if ((int)uVar2 < 0x3e81) {
    uVar12 = 16000;
  }
  *(uint *)(param_1 + 0x119) = uVar12;
  param_1[0x11b] = (ulong)(uVar12 / 100);
  if ((bVar11 & 1) == 0) {
    uVar2 = *(uint *)(param_1 + 0xf8);
    if ((int)*(uint *)(param_1 + 0xf5) <= (int)*(uint *)(param_1 + 0xf8)) {
      uVar2 = *(uint *)(param_1 + 0xf5);
    }
    if ((((bVar3 & 1) == 0) && (((*(byte *)((long)param_1 + 0x704) | bVar4) & 1) == 0)) &&
       (bVar5 == 0)) {
      uVar10 = 48000;
    }
    if (uVar2 < 0x7d01 || uVar10 < 0x7d01) {
      uVar10 = 32000;
    }
    uVar12 = uVar10;
    if ((int)uVar2 < 0x3e81) {
      uVar12 = 16000;
    }
  }
  if ((((bVar5 | bVar8) & 1) == 0) && ((*(byte *)((long)param_1 + 0x704) & 1) == 0)) {
    uVar12 = *(uint *)(param_1 + 0xf5);
    lVar9 = param_1[0xf6];
    uVar7 = (ulong)((int)uVar12 / 100);
  }
  else {
    if ((*(char *)((long)param_1 + 0x16c) == '\x01') && ((char)param_1[0xfe] == '\x01')) {
      lVar9 = (long)(int)param_1[0xf6];
    }
    else {
      lVar9 = 1;
    }
    uVar7 = (ulong)(uVar12 / 100);
  }
  *(uint *)(param_1 + 0xfb) = uVar12;
  param_1[0xfc] = lVar9;
  param_1[0xfd] = uVar7;
                    /* WARNING: Could not recover jumptable at 0x009a3154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x110))();
  return;
}


// ===== 009a3158  FUN_009a3158 =====

ulong FUN_009a3158(ulong param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 local_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  long lStack_30;
  undefined8 local_28;
  
  lStack_78 = *(long *)(param_1 + 0x780);
  local_80 = *(undefined8 *)(param_1 + 0x778);
  local_68 = *(undefined8 *)(param_1 + 0x790);
  uStack_70 = *(undefined8 *)(param_1 + 0x788);
  uStack_58 = *(undefined8 *)(param_1 + 0x7a0);
  local_60 = *(long *)(param_1 + 0x798);
  local_40 = param_2[2];
  local_48 = param_2[1];
  local_50 = *param_2;
  local_28 = param_3[2];
  lStack_30 = param_3[1];
  local_38 = *param_3;
  if ((((((int)local_80 == *(int *)(param_1 + 0x778)) && (lStack_78 == *(long *)(param_1 + 0x780)))
       && ((int)local_68 == *(int *)(param_1 + 0x790))) &&
      ((local_60 == *(long *)(param_1 + 0x798) && ((int)local_50 == *(int *)(param_1 + 0x7a8))))) &&
     ((local_48 == *(long *)(param_1 + 0x7b0) &&
      (((int)local_38 == *(int *)(param_1 + 0x7c0) && (lStack_30 == *(long *)(param_1 + 0x7c8)))))))
  {
    return param_1;
  }
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x140));
  FUN_009a2f08(param_1,&local_80);
  uVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x140));
  return (ulong)uVar1;
}


// ===== 009a3260  FUN_009a3260 =====

void FUN_009a3260(long *param_1)

{
  byte bVar1;
  long lVar2;
  undefined4 uVar3;
  void *pvVar4;
  long *plVar5;
  undefined8 uVar6;
  void *pvVar7;
  byte bVar8;
  long lVar9;
  undefined8 *puVar10;
  int iVar11;
  float fVar12;
  
  if ((*(byte *)(param_1 + 0x2f) & 1) == 0) {
    bVar8 = *(byte *)(param_1 + 0x30);
  }
  else {
    bVar8 = 1;
  }
  bVar1 = param_1[0x17] != 0 | *(byte *)((long)param_1 + 0x196) & 1;
  if (((((*(char *)((long)param_1 + 0x703) != *(char *)((long)param_1 + 0x194)) ||
        ((bool)*(char *)((long)param_1 + 0x705) != (param_1[0xeb] != 0))) ||
       ((bool)*(char *)((long)param_1 + 0x706) != (param_1[0xe7] != 0))) ||
      (((bool)*(char *)((long)param_1 + 0x707) != (param_1[0xe8] != 0) ||
       (*(byte *)(param_1 + 0xe1) != (bVar8 & 1))))) || (*(byte *)((long)param_1 + 0x709) != bVar1))
  {
    *(char *)((long)param_1 + 0x703) = *(char *)((long)param_1 + 0x194);
    *(bool *)((long)param_1 + 0x705) = param_1[0xeb] != 0;
    *(bool *)((long)param_1 + 0x706) = param_1[0xe7] != 0;
    *(bool *)((long)param_1 + 0x707) = param_1[0xe8] != 0;
    *(byte *)(param_1 + 0xe1) = bVar8 & 1;
    *(byte *)((long)param_1 + 0x709) = bVar1;
  }
  lVar9 = param_1[0xf6];
  *(undefined1 *)((long)param_1 + 0x70a) = 0;
  if (lVar9 == 0) {
    plVar5 = (long *)param_1[0x11e];
    param_1[0x11e] = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
LAB_009a33ec:
    plVar5 = (long *)param_1[0x11d];
    param_1[0x11d] = 0;
  }
  else {
    lVar2 = 0x7d8;
    if (param_1[0xfa] != 0) {
      lVar2 = 0x7c0;
    }
    iVar11 = *(int *)((long)param_1 + lVar2);
    pvVar4 = operator_new(0x138);
    FUN_0065b3e8(pvVar4,(long)(int)param_1[0xf5],lVar9,(long)(int)param_1[0xfb],param_1[0xfc],
                 (long)iVar11,param_1[0xfc]);
    plVar5 = (long *)param_1[0x11e];
    param_1[0x11e] = (long)pvVar4;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    if (((int)param_1[0xf5] == (int)param_1[0xf8]) && (param_1[0xf6] == param_1[0xf9]))
    goto LAB_009a33ec;
    lVar9 = FUN_009a9634(param_1[0xf6],param_1[0xf7],param_1[0xf9],param_1[0xfa]);
    plVar5 = (long *)param_1[0x11d];
    param_1[0x11d] = lVar9;
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  lVar9 = param_1[0x2e];
  uVar3 = *(undefined4 *)((long)param_1 + 0x174);
  pvVar4 = operator_new(0x138);
  FUN_0065b3f8(pvVar4,(long)(int)param_1[0xef],param_1[0xf0],(long)(int)param_1[0x119],param_1[0xf3]
               ,(long)(int)param_1[0xf2],(int)lVar9,uVar3);
  plVar5 = (long *)param_1[0x100];
  param_1[0x100] = (long)pvVar4;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  if (((int)param_1[0x119] < 48000) && ((int)param_1[0xf2] == 48000)) {
    pvVar4 = operator_new(0x138);
    FUN_0065b3f8(pvVar4,(long)(int)param_1[0xef],param_1[0xf0],48000,param_1[0xf3],48000,(int)lVar9,
                 uVar3);
    plVar5 = (long *)param_1[0x101];
    param_1[0x101] = (long)pvVar4;
  }
  else {
    plVar5 = (long *)param_1[0x101];
    param_1[0x101] = 0;
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  FUN_009a36b0(param_1);
  FUN_009a3ad8(param_1);
  FUN_009a3ddc(param_1,1);
  plVar5 = (long *)param_1[0xe2];
  if (plVar5 != (long *)0x0) {
    if (param_1[0x101] == 0) {
      iVar11 = (int)param_1[0x119];
    }
    else {
      iVar11 = *(int *)(param_1[0x101] + 0x20) * 100;
    }
    (**(code **)(*plVar5 + 0x20))(plVar5,iVar11,1,(int)param_1[0xfb],1);
  }
  FUN_009a3f38(param_1);
  FUN_009a42e4(param_1);
  FUN_009a4420(param_1);
  puVar10 = (undefined8 *)param_1[0xe5];
  if (puVar10 != (undefined8 *)0x0) {
    if (param_1[0x101] == 0) {
      iVar11 = (int)param_1[0x119];
    }
    else {
      iVar11 = *(int *)(param_1[0x101] + 0x20) * 100;
    }
    uVar6 = (**(code **)(*param_1 + 0x50))(param_1);
    (**(code **)*puVar10)(puVar10,iVar11,uVar6);
  }
  puVar10 = (undefined8 *)param_1[0xe3];
  if (puVar10 != (undefined8 *)0x0) {
    if (param_1[0x101] == 0) {
      iVar11 = (int)param_1[0x119];
    }
    else {
      iVar11 = *(int *)(param_1[0x101] + 0x20) * 100;
    }
    uVar6 = (**(code **)(*param_1 + 0x50))(param_1);
    (**(code **)*puVar10)(puVar10,iVar11,uVar6);
  }
  puVar10 = (undefined8 *)param_1[0xe4];
  if (puVar10 != (undefined8 *)0x0) {
    (**(code **)*puVar10)(puVar10,(int)param_1[0xfb],(int)param_1[0xfc]);
  }
  if ((*(byte *)(param_1 + 0x2f) & 1) == 0) {
    fVar12 = 1.0;
    if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
      pvVar4 = (void *)param_1[0xed];
      param_1[0xed] = 0;
      goto joined_r0x009a36a8;
    }
LAB_009a3614:
    fVar12 = fVar12 * *(float *)((long)param_1 + 0x184);
  }
  else {
    fVar12 = *(float *)((long)param_1 + 0x17c);
    if ((char)param_1[0x30] == '\x01') goto LAB_009a3614;
  }
  pvVar7 = operator_new(0x30);
  FUN_009caa08(fVar12,(int)param_1[0x31],pvVar7,*(undefined1 *)((long)param_1 + 0x18c),
               (int)param_1[0x32]);
  pvVar4 = (void *)param_1[0xed];
  param_1[0xed] = (long)pvVar7;
joined_r0x009a36a8:
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  plVar5 = (long *)param_1[0x18];
  if (plVar5 != (long *)0x0) {
    uVar6 = FUN_00625b64();
                    /* WARNING: Could not recover jumptable at 0x009a3684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x10))(plVar5,param_1 + 0xef,uVar6);
    return;
  }
  return;
}


// ===== 009a36b0  FUN_009a36b0 =====

void FUN_009a36b0(long param_1)

{
  ulong uVar1;
  undefined2 *__src;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined4 *__src_00;
  undefined8 uVar5;
  ulong uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined2 *puVar16;
  undefined4 *puVar17;
  
  if (*(ulong *)(param_1 + 0x9c8) < 0xa0) {
    *(undefined8 *)(param_1 + 0x9c8) = 0xa0;
    __src = (undefined2 *)operator_new(0x140);
    puVar16 = __src + 0xa0;
    puVar7 = __src;
    if ((0x1f < (ulong)-(long)__src) && (((ulong)__src & 1) == 0)) {
      uVar6 = (ulong)-(long)__src >> 1;
      if (0x9e < uVar6) {
        uVar6 = 0x9f;
      }
      uVar12 = uVar6 + 1 & 0xf;
      uVar1 = 0x10;
      if (uVar12 != 0) {
        uVar1 = uVar12;
      }
      puVar14 = (undefined8 *)(__src + 8);
      lVar13 = (uVar6 + 1) - uVar1;
      puVar7 = __src + lVar13;
      do {
        lVar13 = lVar13 + -0x10;
        puVar14[-1] = 0;
        puVar14[-2] = 0;
        puVar14[1] = 0;
        *puVar14 = 0;
        puVar14 = puVar14 + 4;
      } while (lVar13 != 0);
    }
    do {
      if (puVar7 == (undefined2 *)0x0) goto LAB_009a3aa0;
      puVar8 = puVar7 + 1;
      *puVar7 = 0;
      puVar7 = puVar8;
    } while (puVar8 != puVar16);
    puVar2 = (undefined8 *)operator_new(0x38);
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = 0xa0;
    puVar2[1] = 0;
    puVar3 = (undefined8 *)operator_new(0x960);
    puVar14 = puVar3 + 300;
    puVar2[4] = puVar3;
    puVar2[6] = puVar14;
    do {
      if (puVar3 == (undefined8 *)0x0) goto LAB_009a3aa0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      pvVar4 = operator_new(0x140);
      *puVar3 = pvVar4;
      puVar3[2] = (long)pvVar4 + 0x140;
      memcpy(pvVar4,__src,0x140);
      puVar3[1] = (long)pvVar4 + 0x140;
      puVar3 = puVar3 + 3;
    } while (puVar3 != puVar14);
    lVar13 = *(long *)(param_1 + 0xb40);
    puVar2[5] = puVar14;
    *(long *)(param_1 + 0xb40) = (long)puVar2;
    if (lVar13 == 0) {
      uVar5 = 0xa0;
    }
    else {
      FUN_009a8104(param_1 + 0xb40);
      uVar5 = *(undefined8 *)(param_1 + 0x9c8);
    }
    FUN_0091c9d8(param_1 + 0x9d0,uVar5);
    FUN_0091c9d8(param_1 + 0x9e8,*(undefined8 *)(param_1 + 0x9c8));
    if (__src != (undefined2 *)0x0) {
      uVar6 = (long)__src + ((long)__src << 0x3f) + 0x13e;
      if ((3 < uVar6) && (((ulong)__src & 1) == 0)) {
        uVar6 = uVar6 >> 1;
        if (0x9f < uVar6) {
          uVar6 = 0xa0;
        }
        uVar6 = uVar6 & 0xfe;
        puVar16 = puVar16 + -uVar6;
        do {
          uVar6 = uVar6 - 2;
        } while (uVar6 != 0);
      }
      do {
        if (puVar16 == __src) {
          operator_delete(__src);
          goto LAB_009a389c;
        }
        puVar16 = puVar16 + -1;
      } while (puVar16 != (undefined2 *)0x0);
      goto LAB_009a3a70;
    }
  }
  else {
    lVar15 = *(long *)(param_1 + 0xb40);
    lVar13 = FUN_00d0f6e0(0,lVar15 + 0x18);
    lVar11 = *(long *)(lVar15 + 0x28) - *(long *)(lVar15 + 0x20) >> 3;
    uVar6 = *(long *)(lVar15 + 0x10) + lVar13;
    *(ulong *)(lVar15 + 0x10) = uVar6;
    if ((ulong)(lVar11 * -0x5555555555555555) <= uVar6) {
      *(ulong *)(lVar15 + 0x10) = uVar6 + lVar11 * 0x5555555555555555;
    }
  }
LAB_009a389c:
  if (*(long *)(param_1 + 0x710) != 0) {
    if (*(ulong *)(param_1 + 0xa00) < 0x1e0) {
      *(undefined8 *)(param_1 + 0xa00) = 0x1e0;
      __src_00 = (undefined4 *)operator_new(0x780);
      uVar6 = (ulong)-(long)__src_00 >> 2;
      puVar17 = __src_00 + 0x1e0;
      if (0x1de < uVar6) {
        uVar6 = 0x1df;
      }
      puVar9 = __src_00;
      if ((0x1f < (ulong)-(long)__src_00) && ((-(int)__src_00 & 3U) == 0)) {
        uVar12 = uVar6 + 1 & 7;
        uVar1 = 8;
        if (uVar12 != 0) {
          uVar1 = uVar12;
        }
        puVar14 = (undefined8 *)(__src_00 + 4);
        lVar13 = (uVar6 + 1) - uVar1;
        puVar9 = __src_00 + lVar13;
        do {
          lVar13 = lVar13 + -8;
          puVar14[-1] = 0;
          puVar14[-2] = 0;
          puVar14[1] = 0;
          *puVar14 = 0;
          puVar14 = puVar14 + 4;
        } while (lVar13 != 0);
      }
      do {
        if (puVar9 == (undefined4 *)0x0) goto LAB_009a3aa0;
        puVar10 = puVar9 + 1;
        *puVar9 = 0;
        puVar9 = puVar10;
      } while (puVar10 != puVar17);
      puVar2 = (undefined8 *)operator_new(0x38);
      puVar2[2] = 0;
      puVar2[3] = 0;
      *puVar2 = 0x1e0;
      puVar2[1] = 0;
      puVar3 = (undefined8 *)operator_new(0x960);
      puVar14 = puVar3 + 300;
      puVar2[4] = puVar3;
      puVar2[6] = puVar14;
      do {
        if (puVar3 == (undefined8 *)0x0) {
LAB_009a3aa0:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar3[1] = 0;
        puVar3[2] = 0;
        pvVar4 = operator_new(0x780);
        *puVar3 = pvVar4;
        puVar3[2] = (long)pvVar4 + 0x780;
        memcpy(pvVar4,__src_00,0x780);
        puVar3[1] = (long)pvVar4 + 0x780;
        puVar3 = puVar3 + 3;
      } while (puVar3 != puVar14);
      lVar13 = *(long *)(param_1 + 0xb48);
      puVar2[5] = puVar14;
      *(long *)(param_1 + 0xb48) = (long)puVar2;
      if (lVar13 == 0) {
        uVar5 = 0x1e0;
      }
      else {
        FUN_009a821c(param_1 + 0xb48);
        uVar5 = *(undefined8 *)(param_1 + 0xa00);
      }
      FUN_0062abc0(param_1 + 0xa08,uVar5);
      FUN_0062abc0(param_1 + 0xa20,*(undefined8 *)(param_1 + 0xa00));
      if (__src_00 != (undefined4 *)0x0) {
        uVar6 = (long)__src_00 + (0x77c - ((long)__src_00 << 0x3e));
        uVar12 = uVar6 >> 2;
        if (0x1df < uVar12) {
          uVar12 = 0x1e0;
        }
        if ((7 < uVar6) && ((-(int)__src_00 & 3U) == 0)) {
          uVar12 = uVar12 & 0x1fe;
          puVar17 = puVar17 + -uVar12;
          do {
            uVar12 = uVar12 - 2;
          } while (uVar12 != 0);
        }
        do {
          if (puVar17 == __src_00) {
            operator_delete(__src_00);
            return;
          }
          puVar17 = puVar17 + -1;
        } while (puVar17 != (undefined4 *)0x0);
LAB_009a3a70:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    else {
      lVar15 = *(long *)(param_1 + 0xb48);
      lVar13 = FUN_00d0f6e0(0,lVar15 + 0x18);
      lVar11 = *(long *)(lVar15 + 0x28) - *(long *)(lVar15 + 0x20) >> 3;
      uVar6 = *(long *)(lVar15 + 0x10) + lVar13;
      *(ulong *)(lVar15 + 0x10) = uVar6;
      if ((ulong)(lVar11 * -0x5555555555555555) <= uVar6) {
        *(ulong *)(lVar15 + 0x10) = uVar6 + lVar11 * 0x5555555555555555;
      }
    }
  }
  return;
}


// ===== 009a3ad8  FUN_009a3ad8 =====

void FUN_009a3ad8(long *param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  void *pvVar10;
  void *pvVar11;
  
  if ((((*(char *)((long)param_1 + 0x1fc) == '\x01') && (*(char *)((long)param_1 + 0x1fd) == '\x01')
       ) && (*(char *)((long)param_1 + 0x1ac) == '\x01')) &&
     ((((int)param_1[0x36] == 0 || ((char)param_1[0x38] == '\x01')) &&
      (uVar6 = FUN_004249b0(), (uVar6 & 1) == 0)))) {
    FUN_00623bb0(&DAT_001f4ed3,"../../modules/audio_processing/audio_processing_impl.cc",0x3b7b,
                 "APM configuration not valid: ","Multiple input volume controllers enabled.");
  }
  if ((*(byte *)((long)param_1 + 0x1ac) & 1) == 0) {
    pvVar10 = (void *)param_1[0xe6];
    param_1[0xe6] = 0;
    if (pvVar10 != (void *)0x0) {
      FUN_009bae0c(pvVar10);
      operator_delete(pvVar10);
    }
    plVar8 = (long *)param_1[0xe7];
    param_1[0xe7] = 0;
    if (plVar8 == (long *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x009a3c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar8 + 0x78))();
    return;
  }
  lVar7 = FUN_0066631c("WebRTC.Audio.GainController.Analog.Enabled",0x2a,2);
  if (lVar7 != 0) {
    FUN_00666568(lVar7,(char)param_1[0x38]);
  }
  pvVar10 = (void *)param_1[0xe7];
  if (pvVar10 == (void *)0x0) {
    pvVar10 = operator_new(0x78);
    FUN_009aa70c();
    plVar8 = (long *)param_1[0xe7];
    param_1[0xe7] = (long)pvVar10;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x78))();
      pvVar10 = (void *)param_1[0xe7];
    }
  }
  uVar9 = (**(code **)(*param_1 + 0x50))(param_1);
  uVar3 = (**(code **)(*param_1 + 0x38))(param_1);
  FUN_009ab308(pvVar10,uVar9,uVar3);
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    if (2 < *(uint *)(param_1 + 0x36)) {
                    /* WARNING: Subroutine does not return */
      FUN_0061ff28();
    }
    (**(code **)(*(long *)param_1[0xe7] + 0x10))();
    (**(code **)(*(long *)param_1[0xe7] + 0x20))
              ((long *)param_1[0xe7],*(undefined4 *)((long)param_1 + 0x1b4));
    (**(code **)(*(long *)param_1[0xe7] + 0x30))((long *)param_1[0xe7],(int)param_1[0x37]);
    (**(code **)(*(long *)param_1[0xe7] + 0x40))
              ((long *)param_1[0xe7],*(undefined1 *)((long)param_1 + 0x1bc));
    (**(code **)(*(long *)param_1[0xe7] + 0x50))((long *)param_1[0xe7],0,0xff);
    pvVar10 = (void *)param_1[0xe6];
    param_1[0xe6] = 0;
    if (pvVar10 == (void *)0x0) {
      return;
    }
    FUN_009bae0c(pvVar10);
    operator_delete(pvVar10);
    return;
  }
  if (param_1[0xe6] == 0) {
LAB_009a3d34:
    bVar2 = false;
    uVar3 = 0xffffffff;
  }
  else {
    iVar1 = *(int *)(param_1[0xe6] + 0x18);
    iVar4 = (**(code **)(*param_1 + 0x50))(param_1);
    pvVar10 = (void *)param_1[0xe6];
    if (iVar1 == iVar4) goto LAB_009a3da4;
    if (pvVar10 == (void *)0x0) goto LAB_009a3d34;
    uVar3 = *(undefined4 *)((long)pvVar10 + 0x24);
    bVar2 = true;
  }
  uVar5 = (**(code **)(*param_1 + 0x50))(param_1);
  pvVar10 = operator_new(0x88);
  FUN_009ba86c(pvVar10,param_1 + 1,uVar5,param_1 + 0x38);
  pvVar11 = (void *)param_1[0xe6];
  param_1[0xe6] = (long)pvVar10;
  if (pvVar11 != (void *)0x0) {
    FUN_009bae0c(pvVar11);
    operator_delete(pvVar11);
    pvVar10 = (void *)param_1[0xe6];
  }
  if (bVar2) {
    FUN_009bb9f0(pvVar10,uVar3);
    pvVar10 = (void *)param_1[0xe6];
  }
LAB_009a3da4:
  FUN_009baf88(pvVar10);
  FUN_009bb0ac(param_1[0xe6],param_1[0xe7]);
  FUN_009bb994(param_1[0xe6],*(undefined1 *)((long)param_1 + 0x7f9));
  return;
}


// ===== 009a3ddc  FUN_009a3ddc =====

void FUN_009a3ddc(long *param_1,ulong param_2)

{
  byte bVar1;
  int iVar2;
  void *pvVar3;
  byte bVar4;
  long lVar5;
  int *piVar6;
  void *pvVar7;
  
  if (*(char *)((long)param_1 + 0x196) == '\x01') {
    bVar4 = *(byte *)(param_1 + 0x33);
    bVar1 = *(byte *)((long)param_1 + 0x703);
  }
  else {
    bVar4 = 0;
    bVar1 = *(byte *)((long)param_1 + 0x703);
  }
  if ((((bVar1 & 1) == 0) && ((*(byte *)((long)param_1 + 0x704) & 1) == 0)) &&
     (((*(byte *)((long)param_1 + 0x705) | bVar4) & 1) == 0)) {
    pvVar7 = (void *)param_1[0xe9];
    param_1[0xe9] = 0;
  }
  else {
    if ((*(char *)((long)param_1 + 0x195) == '\x01') &&
       ((*(byte *)((long)param_1 + 0x7f2) & 1) == 0)) {
      if (param_1[0x101] == 0) {
        iVar2 = (int)param_1[0x119];
        lVar5 = 0x58;
      }
      else {
        iVar2 = *(int *)(param_1[0x101] + 0x20) * 100;
        lVar5 = 0x58;
      }
    }
    else {
      iVar2 = (**(code **)(*param_1 + 0x40))(param_1);
      lVar5 = 0x50;
    }
    lVar5 = (**(code **)(*param_1 + lVar5))(param_1);
    piVar6 = (int *)param_1[0xe9];
    if (((piVar6 != (int *)0x0) && ((param_2 & 1) == 0)) &&
       ((iVar2 == *piVar6 && (lVar5 == *(long *)(piVar6 + 4) - *(long *)(piVar6 + 2) >> 3)))) {
      return;
    }
    pvVar3 = operator_new(0x20);
    FUN_006604e8(pvVar3,iVar2,lVar5);
    pvVar7 = (void *)param_1[0xe9];
    param_1[0xe9] = (long)pvVar3;
  }
  if (pvVar7 == (void *)0x0) {
    return;
  }
  FUN_0066087c(pvVar7);
  operator_delete(pvVar7);
  return;
}


// ===== 009a3f38  FUN_009a3f38 =====

void FUN_009a3f38(long *param_1)

{
  int *piVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *pvVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_790 [616];
  undefined1 local_528;
  undefined7 uStack_527;
  ulong local_520;
  byte bStack_511;
  char local_2c0;
  undefined1 auStack_2b8 [616];
  
  plVar5 = (long *)param_1[0xea];
  param_1[0xea] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x48))();
  }
  plVar5 = (long *)param_1[0x102];
  param_1[0x102] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  lVar10 = param_1[0xec];
  param_1[0xec] = 0;
  if (lVar10 != 0) {
    FUN_009a833c(param_1 + 0xec);
  }
  plVar5 = (long *)param_1[0x17];
  if ((plVar5 != (long *)0x0) || ((*(byte *)((long)param_1 + 0x196) & 1) != 0)) {
    if (plVar5 == (long *)0x0) {
      memcpy(auStack_2b8,&DAT_0022b088,0x268);
      FUN_0061f0b4(&local_528);
      plVar5 = param_1 + 0x44;
      if ((char)param_1[0x91] == '\0') {
        plVar5 = (long *)&local_528;
      }
      FUN_0061f310(auStack_2b8,plVar5);
      memcpy(&local_528,&DAT_0022b2f0,0x270);
      lVar10 = param_1[0xdf];
      local_528 = 0;
      local_2c0 = 0;
      bVar2 = (char)lVar10 == '\x01';
      if (bVar2) {
        FUN_0061f310(&local_528,param_1 + 0x92);
      }
      local_2c0 = bVar2;
      if ((char)param_1[0x91] == '\0' && (char)lVar10 == '\0') {
        FUN_0061f5d0(auStack_790);
        if (local_2c0 == '\x01') {
          FUN_0061f470();
        }
        else {
          FUN_0061f310(&local_528,auStack_790);
          local_2c0 = '\x01';
        }
      }
      lVar10 = param_1[0xee];
      uVar3 = (**(code **)(*param_1 + 0x38))(param_1);
      uVar6 = (**(code **)(*param_1 + 0x60))(param_1);
      uVar7 = (**(code **)(*param_1 + 0x50))(param_1);
      pvVar9 = operator_new(0x990);
      FUN_00628a40(pvVar9,param_1 + 1,auStack_2b8,&local_528,lVar10,uVar3,uVar6,uVar7);
      plVar5 = (long *)param_1[0xea];
      param_1[0xea] = (long)pvVar9;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x48))();
      }
    }
    else {
      uVar3 = (**(code **)(*param_1 + 0x38))(param_1);
      uVar4 = (**(code **)(*param_1 + 0x60))(param_1);
      uVar6 = (**(code **)(*param_1 + 0x50))(param_1);
      lVar10 = (**(code **)(*plVar5 + 0x18))(plVar5,param_1 + 1,uVar3,uVar4,uVar6,param_1[0xee]);
      plVar5 = (long *)param_1[0xea];
      param_1[0xea] = lVar10;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x48))(plVar5);
      }
    }
    if (*(char *)((long)param_1 + 0x197) == '\x01') {
      uVar6 = (**(code **)(*param_1 + 0x50))(param_1);
      uVar7 = (**(code **)(*param_1 + 0x50))(param_1);
      uVar8 = (**(code **)(*param_1 + 0x50))(param_1);
      pvVar9 = operator_new(0x138);
      FUN_0065b3e8(pvVar9,16000,uVar6,16000,uVar7,16000,uVar8);
      plVar5 = (long *)param_1[0x102];
      param_1[0x102] = (long)pvVar9;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
    (**(code **)(*(long *)param_1[2] + 0x10))
              (&local_528,(long *)param_1[2],"WebRTC-PostFilterKillSwitch",0x1b);
    if (-1 < (char)bStack_511) {
      local_520 = (ulong)bStack_511;
    }
    if (local_520 < 7) {
      bVar2 = false;
    }
    else {
      piVar1 = (int *)CONCAT71(uStack_527,local_528);
      if (-1 < (char)bStack_511) {
        piVar1 = (int *)&local_528;
      }
      bVar2 = *piVar1 == 0x62616e45 && *(int *)((long)piVar1 + 3) == 0x64656c62;
    }
    if ((char)bStack_511 < '\0') {
      operator_delete((void *)CONCAT71(uStack_527,local_528));
    }
    if (!bVar2) {
      uVar3 = (**(code **)(*param_1 + 0x38))(param_1);
      uVar6 = (**(code **)(*param_1 + 0x50))(param_1);
      lVar10 = FUN_009ba120(uVar3,uVar6);
      lVar11 = param_1[0xec];
      param_1[0xec] = lVar10;
      if (lVar11 != 0) {
        FUN_009a833c(param_1 + 0xec);
      }
    }
  }
  return;
}


// ===== 009a42e4  FUN_009a42e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009a42e4(long *param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  void *pvVar4;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 uStack_4c;
  undefined3 uStack_4b;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((*(byte *)((long)param_1 + 0x1fc) & 1) == 0) {
    pvVar2 = (void *)param_1[0xe8];
    param_1[0xe8] = 0;
    if (pvVar2 != (void *)0x0) {
      FUN_009abeb0(pvVar2);
      operator_delete(pvVar2);
      return;
    }
  }
  else {
    uStack_48 = _UNK_001f24f8;
    local_60 = DAT_001f5950;
    local_58 = 0x3dcccccd0000000f;
    uStack_4b = (undefined3)((ulong)_DAT_001f24f0 >> 0x28);
    _local_50 = CONCAT14(1,(int)_DAT_001f24f0);
    local_40 = DAT_001f5b68;
    uStack_38 = DAT_001f5820;
    if (param_1[0x101] == 0) {
      iVar3 = (int)param_1[0x119];
    }
    else {
      iVar3 = *(int *)(param_1[0x101] + 0x20) * 100;
    }
    uVar1 = (**(code **)(*param_1 + 0x58))(param_1);
    pvVar2 = operator_new(0x8a8);
    FUN_009aba94(pvVar2,param_1 + 1,(long)param_1 + 0x1fc,&local_60,iVar3,uVar1,1);
    pvVar4 = (void *)param_1[0xe8];
    param_1[0xe8] = (long)pvVar2;
    if (pvVar4 != (void *)0x0) {
      FUN_009abeb0(pvVar4);
      operator_delete(pvVar4);
      pvVar2 = (void *)param_1[0xe8];
    }
    FUN_009abf7c(pvVar2,*(undefined1 *)((long)param_1 + 0x7f9));
  }
  return;
}


// ===== 009a4420  FUN_009a4420 =====

void FUN_009a4420(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  void *pvVar4;
  uint local_34;
  
  pvVar3 = (void *)param_1[0xeb];
  param_1[0xeb] = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_009a8404(pvVar3);
    operator_delete(pvVar3);
  }
  if (*(char *)((long)param_1 + 0x19c) == '\x01') {
    local_34 = *(uint *)(param_1 + 0x34);
    if (3 < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_0061ff28();
    }
    iVar1 = (**(code **)(*param_1 + 0x38))(param_1);
    uVar2 = (**(code **)(*param_1 + 0x50))(param_1);
    pvVar3 = operator_new(0xd0);
    FUN_009cb030(pvVar3,&local_34,(long)iVar1,uVar2);
    pvVar4 = (void *)param_1[0xeb];
    param_1[0xeb] = (long)pvVar3;
    if (pvVar4 != (void *)0x0) {
      FUN_009a8404(pvVar4);
      operator_delete(pvVar4);
    }
  }
  return;
}


// ===== 009a44f8  FUN_009a44f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_009a44f8(long param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  void *pvVar18;
  void *pvVar19;
  byte bVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  float fVar28;
  void *local_88 [2];
  char cStack_71;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x118));
  iVar14 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x140));
  uVar16 = FUN_00417e08(iVar14);
  if ((uVar16 & 1) == 0) {
    FUN_009a8d54(local_88,param_2);
    FUN_00623bb0(&DAT_001f4e90,"../../modules/audio_processing/audio_processing_impl.cc",0x1541,
                 "AudioProcessing::ApplyConfig: ",local_88);
    if (cStack_71 < '\0') {
      operator_delete(local_88[0]);
    }
  }
  if ((((*(char *)(param_1 + 0x16c) == (char)param_2[1]) &&
       (*(char *)(param_1 + 0x16d) == *(char *)((long)param_2 + 5))) &&
      (*(int *)(param_1 + 0x168) == *param_2)) && (*(int *)(param_1 + 0x170) == param_2[2])) {
    bVar4 = *(int *)(param_1 + 0x174) != param_2[3];
  }
  else {
    bVar4 = true;
  }
  cVar2 = *(char *)(param_1 + 0x196);
  cVar3 = *(char *)((long)param_2 + 0x2e);
  uVar16 = FUN_009a8b14(param_1 + 0x1ac,param_2 + 0x11);
  uVar17 = FUN_009a8c54(param_1 + 0x1fc,param_2 + 0x25);
  if (*(char *)(param_1 + 0x19c) == (char)param_2[0xd]) {
    bVar5 = *(int *)(param_1 + 0x1a0) != param_2[0xe];
  }
  else {
    bVar5 = true;
  }
  if (*(char *)(param_1 + 0x178) == (char)param_2[4]) {
    bVar6 = *(float *)(param_1 + 0x17c) != (float)param_2[5];
  }
  else {
    bVar6 = true;
  }
  uVar15 = FUN_009a8cf4(param_1 + 0x180,param_2 + 6);
  uVar23 = *(undefined8 *)(param_2 + 8);
  uVar22 = *(undefined8 *)(param_2 + 0xe);
  uVar21 = *(undefined8 *)(param_2 + 0xc);
  uVar27 = *(undefined8 *)(param_2 + 2);
  uVar26 = *(undefined8 *)param_2;
  uVar25 = *(undefined8 *)(param_2 + 6);
  uVar24 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0x188) = uVar23;
  *(undefined8 *)(param_1 + 0x1a0) = uVar22;
  *(undefined8 *)(param_1 + 0x198) = uVar21;
  *(undefined8 *)(param_1 + 0x170) = uVar27;
  *(undefined8 *)(param_1 + 0x168) = uVar26;
  *(undefined8 *)(param_1 + 0x180) = uVar25;
  *(undefined8 *)(param_1 + 0x178) = uVar24;
  uVar23 = *(undefined8 *)(param_2 + 0x18);
  uVar22 = *(undefined8 *)(param_2 + 0x1e);
  uVar21 = *(undefined8 *)(param_2 + 0x1c);
  uVar27 = *(undefined8 *)(param_2 + 0x12);
  uVar26 = *(undefined8 *)(param_2 + 0x10);
  uVar25 = *(undefined8 *)(param_2 + 0x16);
  uVar24 = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x1c8) = uVar23;
  *(undefined8 *)(param_1 + 0x1e0) = uVar22;
  *(undefined8 *)(param_1 + 0x1d8) = uVar21;
  *(undefined8 *)(param_1 + 0x1b0) = uVar27;
  *(undefined8 *)(param_1 + 0x1a8) = uVar26;
  *(undefined8 *)(param_1 + 0x1c0) = uVar25;
  *(undefined8 *)(param_1 + 0x1b8) = uVar24;
  uVar24 = *(undefined8 *)(param_2 + 0x26);
  uVar23 = *(undefined8 *)(param_2 + 0x24);
  uVar22 = *(undefined8 *)(param_2 + 0x2a);
  uVar21 = *(undefined8 *)(param_2 + 0x28);
  uVar26 = *(undefined8 *)(param_2 + 0x22);
  uVar25 = *(undefined8 *)(param_2 + 0x20);
  *(int *)(param_1 + 0x218) = param_2[0x2c];
  *(undefined8 *)(param_1 + 0x200) = uVar24;
  *(undefined8 *)(param_1 + 0x1f8) = uVar23;
  *(undefined8 *)(param_1 + 0x210) = uVar22;
  *(undefined8 *)(param_1 + 0x208) = uVar21;
  *(undefined8 *)(param_1 + 0x1f0) = uVar26;
  *(undefined8 *)(param_1 + 0x1e8) = uVar25;
  if (cVar2 != cVar3) {
    FUN_009a3f38(param_1);
  }
  if (bVar5) {
    FUN_009a4420(param_1);
  }
  FUN_009a3ddc(param_1,0);
  if ((uVar16 & 1) == 0) {
    FUN_009a3ad8(param_1);
  }
  uVar16 = FUN_009ac484(param_1 + 0x1fc);
  if ((uVar16 & 1) == 0) {
    uVar16 = FUN_004249b0();
    if ((uVar16 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_processing/audio_processing_impl.cc",0x16eb,
                   "Invalid Gain Controller 2 config; using the default config.");
    }
    uVar22 = _UNK_001f4ac8;
    uVar21 = _DAT_001f4ac0;
    *(undefined8 *)(param_1 + 0x1fc) = 0;
    *(undefined8 *)(param_1 + 0x214) = 0xc2480000;
    *(undefined8 *)(param_1 + 0x20c) = uVar22;
    *(undefined8 *)(param_1 + 0x204) = uVar21;
    if ((uVar17 & 1) == 0) goto LAB_009a474c;
LAB_009a46f0:
    if (!bVar6 && ((uVar15 ^ 1) & 1) == 0) goto LAB_009a47c0;
  }
  else {
    if ((uVar17 & 1) != 0) goto LAB_009a46f0;
LAB_009a474c:
    FUN_009a42e4(param_1);
    if (!bVar6 && ((uVar15 ^ 1) & 1) == 0) goto LAB_009a47c0;
  }
  if ((*(byte *)(param_1 + 0x178) & 1) == 0) {
    fVar28 = 1.0;
    if ((*(byte *)(param_1 + 0x180) & 1) != 0) goto LAB_009a4784;
    pvVar19 = *(void **)(param_1 + 0x768);
    *(undefined8 *)(param_1 + 0x768) = 0;
  }
  else {
    fVar28 = *(float *)(param_1 + 0x17c);
    if (*(char *)(param_1 + 0x180) == '\x01') {
LAB_009a4784:
      fVar28 = fVar28 * *(float *)(param_1 + 0x184);
    }
    pvVar18 = operator_new(0x30);
    FUN_009caa08(fVar28,*(undefined4 *)(param_1 + 0x188),pvVar18,*(undefined1 *)(param_1 + 0x18c),
                 *(undefined4 *)(param_1 + 400));
    pvVar19 = *(void **)(param_1 + 0x768);
    *(void **)(param_1 + 0x768) = pvVar18;
  }
  if (pvVar19 != (void *)0x0) {
    operator_delete(pvVar19);
  }
LAB_009a47c0:
  cVar2 = *(char *)(param_1 + 0x194);
  if ((*(byte *)(param_1 + 0x178) & 1) == 0) {
    bVar20 = *(byte *)(param_1 + 0x180);
  }
  else {
    bVar20 = 1;
  }
  bVar5 = *(long *)(param_1 + 0x740) != 0;
  bVar6 = *(long *)(param_1 + 0x738) != 0;
  bVar7 = *(long *)(param_1 + 0x758) != 0;
  bVar20 = bVar20 & 1;
  bVar8 = *(char *)(param_1 + 0x703) != cVar2;
  bVar9 = (bool)*(char *)(param_1 + 0x705) != bVar7;
  bVar10 = (bool)*(char *)(param_1 + 0x706) != bVar6;
  bVar11 = (bool)*(char *)(param_1 + 0x707) != bVar5;
  bVar12 = *(byte *)(param_1 + 0x708) != bVar20;
  bVar1 = *(long *)(param_1 + 0xb8) != 0 | *(byte *)(param_1 + 0x196) & 1;
  bVar13 = *(byte *)(param_1 + 0x709) != bVar1;
  if (((((bVar8 || bVar9) || bVar10) || bVar11) || bVar12) || bVar13) {
    *(char *)(param_1 + 0x703) = cVar2;
    *(bool *)(param_1 + 0x705) = bVar7;
    *(bool *)(param_1 + 0x706) = bVar6;
    *(bool *)(param_1 + 0x707) = bVar5;
    *(byte *)(param_1 + 0x708) = bVar20;
    *(byte *)(param_1 + 0x709) = bVar1;
  }
  cVar2 = *(char *)(param_1 + 0x70a);
  *(undefined1 *)(param_1 + 0x70a) = 0;
  if ((cVar2 != '\0' || (((((bVar8 || bVar9) || bVar10) || bVar11) || bVar12) || bVar13)) || bVar4)
  {
    FUN_009a2f08(param_1,param_1 + 0x778);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x140));
  iVar14 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x118));
  return iVar14;
}


// ===== 009a48dc  FUN_009a48dc =====

undefined4 FUN_009a48dc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x8c8);
}


// ===== 009a48e8  FUN_009a48e8 =====

undefined8 FUN_009a48e8(void)

{
  return 16000;
}


// ===== 009a48f4  FUN_009a48f4 =====

undefined8 FUN_009a48f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x7e0);
}


// ===== 009a4900  FUN_009a4900 =====

undefined8 FUN_009a4900(long param_1)

{
  return *(undefined8 *)(param_1 + 0x780);
}


// ===== 009a490c  FUN_009a490c =====

undefined8 FUN_009a490c(long *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  
  if (*(char *)((long)param_1 + 0x16d) == '\x01') {
    bVar2 = *(byte *)((long)param_1 + 0x7f1);
  }
  else {
    bVar2 = 0;
  }
  if ((*(char *)((long)param_1 + 0x709) == '\x01') && ((bVar2 & 1) == 0)) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x009a4948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x58))();
  return uVar1;
}


// ===== 009a494c  FUN_009a494c =====

undefined8 FUN_009a494c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x798);
}


// ===== 009a4958  FUN_009a4958 =====

int FUN_009a4958(long param_1,ulong param_2)

{
  int iVar1;
  long *plVar2;
  byte bVar3;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x140));
  if ((param_2 & 1) == 0) {
    bVar3 = 1;
  }
  else {
    bVar3 = *(byte *)(param_1 + 0x7f3) ^ 1;
  }
  *(byte *)(param_1 + 0x7f9) = bVar3 & 1;
  if (*(long *)(param_1 + 0x730) != 0) {
    FUN_009bb994();
  }
  plVar2 = *(long **)(param_1 + 0x750);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x30))(plVar2,*(undefined1 *)(param_1 + 0x7f9));
  }
  if (*(long *)(param_1 + 0x758) != 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x758) + 0x50) = *(undefined1 *)(param_1 + 0x7f9);
  }
  if (*(long *)(param_1 + 0x740) != 0) {
    FUN_009abf7c(*(long *)(param_1 + 0x740),*(undefined1 *)(param_1 + 0x7f9));
  }
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x140));
  return iVar1;
}


// ===== 009a49ec  FUN_009a49ec =====

void FUN_009a49ec(long *param_1,undefined8 param_2,undefined4 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x009a49fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1,param_2,param_3);
  return;
}


// ===== 009a4a00  FUN_009a4a00 =====

bool FUN_009a4a00(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar7 = (uint)param_2;
  if (8 < uVar7) {
    return true;
  }
  if ((0x18eU >> (ulong)(uVar7 & 0x1f) & 1) == 0) {
    if ((0x60U >> (ulong)(uVar7 & 0x1f) & 1) == 0) {
      if (uVar7 != 4) {
        return true;
      }
      lVar8 = *(long *)(param_1 + 0xa8);
      uVar5 = *(ulong *)(lVar8 + 0x18);
      uVar10 = (*(long *)(lVar8 + 0x28) - *(long *)(lVar8 + 0x20) >> 2) * -0x5555555555555555;
      if (uVar5 == uVar10) {
        uVar9 = FUN_004249b0();
        if ((uVar9 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_processing/audio_processing_impl.cc",
                       0x1b3b,"Cannot enqueue a new runtime setting.");
        }
      }
      else {
        if (uVar10 <= *(ulong *)(lVar8 + 8)) goto LAB_009a4d00;
        puVar3 = (undefined8 *)(*(long *)(lVar8 + 0x20) + *(ulong *)(lVar8 + 8) * 0xc);
        *puVar3 = param_2;
        *(undefined4 *)(puVar3 + 1) = param_3;
        FUN_00d0f800(1,lVar8 + 0x18);
        lVar6 = 0;
        if (*(long *)(lVar8 + 8) + 1 !=
            (*(long *)(lVar8 + 0x28) - *(long *)(lVar8 + 0x20) >> 2) * -0x5555555555555555) {
          lVar6 = *(long *)(lVar8 + 8) + 1;
        }
        *(long *)(lVar8 + 8) = lVar6;
      }
      lVar8 = *(long *)(param_1 + 0xb0);
      uVar9 = *(ulong *)(lVar8 + 0x18);
      uVar11 = (*(long *)(lVar8 + 0x28) - *(long *)(lVar8 + 0x20) >> 2) * -0x5555555555555555;
      if (uVar9 == uVar11) {
        uVar2 = FUN_004249b0();
        if ((uVar2 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_processing/audio_processing_impl.cc",
                       0x1b3b,"Cannot enqueue a new runtime setting.");
        }
      }
      else {
        if (uVar11 <= *(ulong *)(lVar8 + 8)) goto LAB_009a4d00;
        puVar3 = (undefined8 *)(*(long *)(lVar8 + 0x20) + *(ulong *)(lVar8 + 8) * 0xc);
        *puVar3 = param_2;
        *(undefined4 *)(puVar3 + 1) = param_3;
        FUN_00d0f800(1,lVar8 + 0x18);
        lVar6 = 0;
        if (*(long *)(lVar8 + 8) + 1 !=
            (*(long *)(lVar8 + 0x28) - *(long *)(lVar8 + 0x20) >> 2) * -0x5555555555555555) {
          lVar6 = *(long *)(lVar8 + 8) + 1;
        }
        *(long *)(lVar8 + 8) = lVar6;
      }
      return uVar5 != uVar10 && uVar9 != uVar11;
    }
    lVar8 = *(long *)(param_1 + 0xb0);
    uVar5 = (*(long *)(lVar8 + 0x28) - *(long *)(lVar8 + 0x20) >> 2) * -0x5555555555555555;
    if (*(ulong *)(lVar8 + 0x18) != uVar5) {
      if (*(ulong *)(lVar8 + 8) < uVar5) {
        puVar3 = (undefined8 *)(*(long *)(lVar8 + 0x20) + *(ulong *)(lVar8 + 8) * 0xc);
        *puVar3 = param_2;
        *(undefined4 *)(puVar3 + 1) = param_3;
        FUN_00d0f800(1,lVar8 + 0x18);
        lVar6 = *(long *)(lVar8 + 0x20);
        lVar4 = *(long *)(lVar8 + 0x28);
        goto LAB_009a4bd4;
      }
      goto LAB_009a4d00;
    }
    uVar5 = FUN_004249b0();
  }
  else {
    lVar8 = *(long *)(param_1 + 0xa8);
    uVar5 = (*(long *)(lVar8 + 0x28) - *(long *)(lVar8 + 0x20) >> 2) * -0x5555555555555555;
    if (*(ulong *)(lVar8 + 0x18) != uVar5) {
      if (*(ulong *)(lVar8 + 8) < uVar5) {
        puVar3 = (undefined8 *)(*(long *)(lVar8 + 0x20) + *(ulong *)(lVar8 + 8) * 0xc);
        *puVar3 = param_2;
        *(undefined4 *)(puVar3 + 1) = param_3;
        FUN_00d0f800(1,lVar8 + 0x18);
        lVar6 = *(long *)(lVar8 + 0x20);
        lVar4 = *(long *)(lVar8 + 0x28);
LAB_009a4bd4:
        lVar1 = 0;
        if (*(long *)(lVar8 + 8) + 1 != (lVar4 - lVar6 >> 2) * -0x5555555555555555) {
          lVar1 = *(long *)(lVar8 + 8) + 1;
        }
        *(long *)(lVar8 + 8) = lVar1;
        return true;
      }
LAB_009a4d00:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                );
    }
    uVar5 = FUN_004249b0();
  }
  if ((uVar5 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_processing/audio_processing_impl.cc",0x1b3b,
                 "Cannot enqueue a new runtime setting.");
  }
  return false;
}


// ===== 009a4d14  FUN_009a4d14 =====

int FUN_009a4d14(long param_1,int *param_2,int *param_3)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  byte bVar13;
  undefined8 local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 local_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x140));
  cVar2 = *(char *)(param_1 + 0x194);
  uStack_58 = *(undefined8 *)(param_1 + 0x7c0);
  local_60 = *(undefined8 *)(param_1 + 0x7b8);
  uStack_48 = *(undefined8 *)(param_1 + 2000);
  uStack_50 = *(undefined8 *)(param_1 + 0x7c8);
  lStack_98 = *(long *)(param_1 + 0x780);
  local_a0 = *(undefined8 *)(param_1 + 0x778);
  local_88 = *(undefined8 *)(param_1 + 0x790);
  local_90 = *(undefined8 *)(param_1 + 0x788);
  uStack_78 = *(undefined8 *)(param_1 + 0x7a0);
  lStack_80 = *(long *)(param_1 + 0x798);
  uStack_68 = *(undefined8 *)(param_1 + 0x7b0);
  uStack_70 = *(undefined8 *)(param_1 + 0x7a8);
  if ((*(byte *)(param_1 + 0x178) & 1) == 0) {
    bVar13 = *(byte *)(param_1 + 0x180);
  }
  else {
    bVar13 = 1;
  }
  bVar3 = *(long *)(param_1 + 0x740) != 0;
  bVar4 = *(long *)(param_1 + 0x738) != 0;
  bVar5 = *(long *)(param_1 + 0x758) != 0;
  bVar13 = bVar13 & 1;
  bVar6 = *(char *)(param_1 + 0x703) == cVar2;
  bVar7 = (bool)*(char *)(param_1 + 0x705) == bVar5;
  bVar8 = (bool)*(char *)(param_1 + 0x706) == bVar4;
  bVar9 = (bool)*(char *)(param_1 + 0x707) == bVar3;
  bVar1 = *(long *)(param_1 + 0xb8) != 0 | *(byte *)(param_1 + 0x196) & 1;
  bVar10 = *(byte *)(param_1 + 0x708) == bVar13;
  bVar11 = *(byte *)(param_1 + 0x709) != bVar1;
  if (((((!bVar6 || !bVar7) || !bVar8) || !bVar9) || !bVar10) || bVar11) {
    *(char *)(param_1 + 0x703) = cVar2;
    *(bool *)(param_1 + 0x705) = bVar5;
    *(bool *)(param_1 + 0x706) = bVar4;
    *(bool *)(param_1 + 0x707) = bVar3;
    *(byte *)(param_1 + 0x708) = bVar13;
    *(byte *)(param_1 + 0x709) = bVar1;
  }
  bVar13 = *(byte *)(param_1 + 0x70a);
  *(undefined1 *)(param_1 + 0x70a) = 0;
  iVar12 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x140));
  if (((((int)local_88 == *param_3) && (lStack_80 == *(long *)(param_3 + 2))) &&
      ((bVar13 & 1) == 0 && (((((bVar6 && bVar7) && bVar8) && bVar9) && bVar10) && !bVar11))) &&
     (((int)local_a0 == *param_2 && (lStack_98 == *(long *)(param_2 + 2))))) {
    return iVar12;
  }
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x118));
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x140));
  uStack_68 = *(undefined8 *)(param_1 + 0x7b0);
  uStack_70 = *(undefined8 *)(param_1 + 0x7a8);
  uStack_58 = *(undefined8 *)(param_1 + 0x7c0);
  local_60 = *(undefined8 *)(param_1 + 0x7b8);
  uStack_48 = *(undefined8 *)(param_1 + 2000);
  uStack_50 = *(undefined8 *)(param_1 + 0x7c8);
  local_90 = *(undefined8 *)(param_2 + 4);
  uStack_78 = *(undefined8 *)(param_3 + 4);
  lStack_98 = *(long *)(param_2 + 2);
  local_a0 = *(undefined8 *)param_2;
  lStack_80 = *(long *)(param_3 + 2);
  local_88 = *(undefined8 *)param_3;
  FUN_009a2f08(param_1,&local_a0);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x140));
  iVar12 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x118));
  return iVar12;
}


// ===== 009a4ef8  FUN_009a4ef8 =====

ulong FUN_009a4ef8(long param_1,undefined8 *param_2,undefined8 param_3,long param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined1 *local_88;
  char **local_80;
  char *local_78;
  char *pcStack_70;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined8 local_58;
  
  if (((DAT_00d80810 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00d80810), iVar2 != 0)) {
    DAT_00d80808 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d80810);
  }
  local_80 = (char **)0x0;
  pcStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d80808 != '\0') {
    FUN_0066d348(0x42,DAT_00d80808,"AudioProcessing::ProcessStream_StreamConfig",0,0,0,0,0,0);
    local_78 = DAT_00d80808;
    pcStack_70 = "AudioProcessing::ProcessStream_StreamConfig";
    local_80 = &local_78;
  }
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_009ba2c4(&local_88);
  lVar8 = *(long *)(param_4 + 8);
  uVar3 = FUN_009a7ba4(param_3,param_4);
  if ((int)uVar3 == 0) {
    FUN_009a4d14(param_1,param_3,param_4);
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x140));
    if (*(long *)(param_1 + 0xc0) != 0) {
      FUN_009a75e4(param_1,0);
      lVar8 = *(long *)(param_1 + 0x780);
      if (lVar8 != 0) {
        lVar6 = *(long *)(param_1 + 0x788);
        puVar7 = param_2;
        do {
          uVar1 = 0;
          if (lVar6 != 0) {
            uVar1 = *puVar7;
          }
          (**(code **)(**(long **)(param_1 + 0xc0) + 0x20))(*(long **)(param_1 + 0xc0),uVar1,lVar6);
          lVar8 = lVar8 + -1;
          puVar7 = puVar7 + 1;
        } while (lVar8 != 0);
      }
      local_64 = *(undefined4 *)(param_1 + 0x8e0);
      local_5c = *(undefined4 *)(param_1 + 0x8b0);
      uStack_60 = 0;
      local_58 = CONCAT71(0xaaaaaaaaaaaaaa,*(undefined1 *)(param_1 + 0x8b4));
      local_58 = CONCAT35(0xaaaaaa,CONCAT14(*(undefined1 *)(param_1 + 0x7fb),(undefined4)local_58));
      (**(code **)(**(long **)(param_1 + 0xc0) + 0x48))(*(long **)(param_1 + 0xc0),&local_64);
    }
    FUN_0065bda0(*(undefined8 *)(param_1 + 0x800),param_2,param_1 + 0x778);
    if (*(long *)(param_1 + 0x808) != 0) {
      FUN_0065bda0(*(long *)(param_1 + 0x808),param_2,param_1 + 0x778);
    }
    uVar4 = FUN_009a5218(param_1);
    uVar3 = uVar4 & 0xffffffff;
    if ((int)uVar4 == 0) {
      lVar8 = *(long *)(param_1 + 0x808);
      if (lVar8 == 0) {
        lVar8 = *(long *)(param_1 + 0x800);
      }
      FUN_0065c10c(lVar8,param_1 + 0x790,param_5);
      plVar5 = *(long **)(param_1 + 0xc0);
      if (plVar5 != (long *)0x0) {
        lVar8 = *(long *)(param_1 + 0x798);
        if (lVar8 != 0) {
          lVar6 = *(long *)(param_1 + 0x7a0);
          do {
            uVar1 = 0;
            if (lVar6 != 0) {
              uVar1 = *param_5;
            }
            (**(code **)(**(long **)(param_1 + 0xc0) + 0x30))
                      (*(long **)(param_1 + 0xc0),uVar1,lVar6);
            lVar8 = lVar8 + -1;
            param_5 = param_5 + 1;
          } while (lVar8 != 0);
          plVar5 = *(long **)(param_1 + 0xc0);
        }
        (**(code **)(*plVar5 + 0x50))();
      }
    }
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x140));
  }
  else {
    iVar2 = (int)(uVar3 >> 0x20);
    if (uVar3 >> 0x20 < 2) {
      if (iVar2 == 0) {
        for (; lVar8 != 0; lVar8 = lVar8 + -1) {
          memcpy((void *)*param_5,(void *)*param_2,*(long *)(param_4 + 0x10) << 2);
          param_5 = param_5 + 1;
          param_2 = param_2 + 1;
        }
      }
      else {
        for (; lVar8 != 0; lVar8 = lVar8 + -1) {
          memcpy((void *)*param_5,(void *)*param_2,*(long *)(param_4 + 0x10) << 2);
          param_5 = param_5 + 1;
        }
      }
    }
    else if (iVar2 == 2) {
      for (; lVar8 != 0; lVar8 = lVar8 + -1) {
        memset((void *)*param_5,0,*(long *)(param_4 + 0x10) << 2);
        param_5 = param_5 + 1;
      }
    }
  }
  FUN_009ba2f8(&local_88);
  if ((local_80 != (char **)0x0) && (**local_80 != '\0')) {
    FUN_0066d348(0x45,*local_80,local_80[1],0,0,0,0,0,0);
  }
  return uVar3 & 0xffffffff;
}


// ===== 009a5218  FUN_009a5218 =====

int FUN_009a5218(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  void *__s;
  int iVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  size_t __n;
  byte bVar11;
  char cVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  long local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_38;
  
  FUN_009a6220();
  FUN_009a5aec(param_1);
  local_38 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_009ba2c4(&local_38);
  lVar13 = param_1[0x100];
  lVar14 = param_1[0x102];
  if (((param_1[0xe9] != 0) && (*(char *)((long)param_1 + 0x195) == '\x01')) &&
     ((*(byte *)((long)param_1 + 0x7f2) & 1) == 0)) {
    FUN_00660934(param_1[0xe9],lVar13,0);
  }
  plVar1 = param_1 + 0x116;
  if (param_1[0xed] != 0) {
    if (*(char *)((long)param_1 + 0x18c) == '\x01') {
      iVar3 = *(int *)(param_1[0xed] + 4);
      if (*(char *)((long)param_1 + 0x8b4) == '\x01') {
        bVar5 = (int)*plVar1 != iVar3;
      }
      else {
        bVar5 = false;
      }
      *(bool *)(param_1 + 0x117) = bVar5;
      *(int *)(param_1 + 0x116) = iVar3;
      *(undefined1 *)((long)param_1 + 0x8b4) = 1;
      if ((char)param_1[0x118] == '\x01') {
        *(undefined1 *)(param_1 + 0x118) = 0;
      }
      if (param_1[0xe6] == 0) {
        if ((undefined8 *)param_1[0xe7] != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)param_1[0xe7])();
        }
      }
      else {
        FUN_009bb9f0();
      }
    }
    FUN_009caa78(param_1[0xed],lVar13);
  }
  uVar2 = 0;
  if (param_1[0x11b] != 0) {
    uVar2 = **(undefined8 **)(*(long *)(lVar13 + 0x60) + 8);
  }
  FUN_0092c4a0(param_1 + 0x147,uVar2);
  iVar3 = (int)param_1[0x151] + 1;
  *(int *)(param_1 + 0x151) = iVar3;
  if (999 < iVar3) {
    *(undefined4 *)(param_1 + 0x151) = 0;
    uVar8 = FUN_0092c728(param_1 + 0x147);
    lVar9 = DAT_00d80828;
    if (DAT_00d80828 == 0) {
      lVar9 = FUN_006660d8("WebRTC.Audio.ApmCaptureInputLevelAverageRms",0x2b,1,0x7f,0x40);
      FUN_00d0f5e0(0,lVar9,&DAT_00d80828);
      if (lVar9 != 0) goto LAB_009a53a0;
    }
    else {
LAB_009a53a0:
      FUN_00666568(lVar9,uVar8 & 0xffffffff);
    }
    lVar9 = DAT_00d80830;
    if (DAT_00d80830 == 0) {
      lVar9 = FUN_006660d8("WebRTC.Audio.ApmCaptureInputLevelPeakRms",0x28,1,0x7f,0x40);
      FUN_00d0f5e0(0,lVar9,&DAT_00d80830);
      if (lVar9 == 0) goto LAB_009a5400;
    }
    FUN_00666568(lVar9,uVar8 >> 0x20);
  }
LAB_009a5400:
  if (*(char *)((long)param_1 + 0x8b4) == '\x01') {
    FUN_009af48c(param_1 + 0x152,(int)param_1[0x116]);
  }
  plVar10 = (long *)param_1[0xea];
  if (plVar10 != (long *)0x0) {
    cVar12 = (char)param_1[0x117];
    *(char *)(param_1 + 0x106) = cVar12;
    if (param_1[0xed] == 0) {
      if (cVar12 == '\0') goto LAB_009a5470;
LAB_009a5460:
      iVar6 = (int)param_1[0x107];
      bVar5 = true;
    }
    else {
      fVar16 = *(float *)(param_1[0xed] + 0xc);
      if (cVar12 != '\0') {
        *(float *)((long)param_1 + 0x834) = fVar16;
        goto LAB_009a5460;
      }
      fVar17 = *(float *)((long)param_1 + 0x834);
      if (fVar17 == fVar16) {
        *(float *)((long)param_1 + 0x834) = fVar16;
      }
      else {
        *(float *)((long)param_1 + 0x834) = fVar16;
        if (fVar17 < 0.0 == NAN(fVar17)) goto LAB_009a5460;
      }
LAB_009a5470:
      iVar4 = *(int *)((long)param_1 + 0x83c);
      iVar6 = (int)param_1[0x107];
      bVar5 = (iVar4 != -1 && iVar4 + 1 < 0 == SCARRY4(iVar4,1)) && iVar4 != iVar6;
    }
    *(bool *)(param_1 + 0x106) = bVar5;
    *(int *)((long)param_1 + 0x83c) = iVar6;
    (**(code **)(*plVar10 + 8))(plVar10,lVar13);
  }
  if (param_1[0xe6] != 0) {
    FUN_009bb20c(param_1[0xe6],lVar13);
  }
  if (((param_1[0xe8] != 0) && (*(char *)((long)param_1 + 0x1fd) == '\x01')) &&
     (*(char *)((long)param_1 + 0x8b4) == '\x01')) {
    FUN_009abff0(param_1[0xe8],(int)*plVar1,lVar13);
  }
  if (((((*(byte *)((long)param_1 + 0x703) & 1) != 0) ||
       ((*(byte *)((long)param_1 + 0x704) & 1) != 0)) ||
      (((*(byte *)((long)param_1 + 0x705) & 1) != 0 ||
       (((*(byte *)((long)param_1 + 0x706) & 1) != 0 || (*(char *)((long)param_1 + 0x709) == '\x01')
        ))))) && (((int)param_1[0x119] == 48000 || ((int)param_1[0x119] == 32000)))) {
    FUN_0065d268(lVar13);
  }
  if (*(char *)((long)param_1 + 0x16d) == '\x01') {
    bVar11 = *(byte *)((long)param_1 + 0x7f1);
    lVar9 = param_1[0xea];
  }
  else {
    bVar11 = 0;
    lVar9 = param_1[0xea];
  }
  if ((lVar9 != 0) && ((bVar11 & 1) == 0)) {
    FUN_0065c0ec(lVar13,1);
  }
  if ((param_1[0xe9] != 0) &&
     ((*(char *)((long)param_1 + 0x195) != '\x01' || (*(char *)((long)param_1 + 0x7f2) == '\x01'))))
  {
    FUN_00660934(param_1[0xe9],lVar13,1);
  }
  if ((param_1[0xe7] != 0) && (iVar6 = FUN_009aac1c(param_1[0xe7],lVar13), iVar6 != 0))
  goto LAB_009a5a5c;
  if (((lVar14 == 0) || ((*(byte *)((long)param_1 + 0x1a4) & 1) == 0)) && (param_1[0xeb] != 0)) {
    FUN_009cb508(param_1[0xeb],lVar13);
  }
  if (param_1[0xea] != 0) {
    (**(code **)(*param_1 + 200))(param_1);
    if ((char)param_1[0xff] == '\x01') {
      plVar10 = (long *)param_1[0xea];
      uVar7 = (**(code **)(*param_1 + 200))(param_1);
      (**(code **)(*plVar10 + 0x28))(plVar10,uVar7);
    }
    (**(code **)(*(long *)param_1[0xea] + 0x18))
              ((long *)param_1[0xea],lVar13,lVar14,(char)param_1[0x106]);
  }
  if (((lVar14 != 0) && ((*(byte *)((long)param_1 + 0x1a4) & 1) != 0)) && (param_1[0xeb] != 0)) {
    FUN_009cb508(param_1[0xeb],lVar14);
  }
  if (param_1[0xeb] != 0) {
    FUN_009cbed8(param_1[0xeb],lVar13);
  }
  if (param_1[0xe6] == 0) {
LAB_009a5684:
    if ((param_1[0xe7] != 0) && (iVar6 = FUN_009aada0(param_1[0xe7],lVar13,0), iVar6 != 0))
    goto LAB_009a5a5c;
  }
  else {
    FUN_009bb690(param_1[0xe6],lVar13);
    uVar8 = FUN_009bb954(param_1[0xe6]);
    if ((uVar8 >> 0x20 & 1) == 0) goto LAB_009a5684;
    plVar10 = (long *)param_1[0xe7];
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x30))(plVar10,uVar8);
      goto LAB_009a5684;
    }
  }
  if (((((*(byte *)((long)param_1 + 0x703) & 1) != 0) ||
       (((*(byte *)((long)param_1 + 0x704) & 1) != 0 ||
        ((*(byte *)((long)param_1 + 0x705) & 1) != 0)))) ||
      (((*(byte *)((long)param_1 + 0x706) & 1) != 0 || (*(char *)((long)param_1 + 0x709) == '\x01'))
      )) && (((int)param_1[0x119] == 48000 || ((int)param_1[0x119] == 32000)))) {
    FUN_0065d27c(lVar13);
  }
  if (*(char *)((long)param_1 + 0x7f9) == '\x01') {
    if (param_1[0x101] != 0) {
      plVar10 = (long *)param_1[0xea];
      if (plVar10 != (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar10 + 0x38))();
      }
      if (((((*(byte *)((long)param_1 + 0x703) & 1) != 0) ||
           ((*(byte *)((long)param_1 + 0x704) & 1) != 0)) ||
          ((*(byte *)((long)param_1 + 0x705) & 1) != 0)) ||
         (((*(byte *)((long)param_1 + 0x706) & 1) != 0 ||
          (((uint)plVar10 & (uint)*(byte *)((long)param_1 + 0x709) & 1) != 0)))) {
        FUN_0065c248(lVar13,param_1[0x101]);
      }
      lVar13 = param_1[0x101];
    }
    plVar10 = (long *)param_1[0xe2];
    if (plVar10 != (long *)0x0) {
      uVar2 = 0;
      if (*(long *)(lVar13 + 0x20) != 0) {
        uVar2 = **(undefined8 **)(*(long *)(lVar13 + 0x60) + 8);
      }
      (**(code **)(*plVar10 + 0x30))(plVar10,uVar2);
    }
    plVar10 = (long *)param_1[0xe5];
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))(plVar10,lVar13);
    }
    if (param_1[0xe8] != 0) {
      FUN_009ac014(param_1[0xe8],(char)param_1[0x117],lVar13);
    }
    if (param_1[0xec] != 0) {
      FUN_009ba234(param_1[0xec],lVar13);
    }
    plVar10 = (long *)param_1[0xe3];
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))(plVar10,lVar13);
    }
    uVar2 = 0;
    if (param_1[0x11b] != 0) {
      uVar2 = **(undefined8 **)(*(long *)(lVar13 + 0x60) + 8);
    }
    FUN_0092c4a0(param_1 + 0x14c,uVar2);
    if (999 < iVar3) {
      uVar8 = FUN_0092c728(param_1 + 0x14c);
      lVar14 = DAT_00d80838;
      if (DAT_00d80838 == 0) {
        lVar14 = FUN_006660d8("WebRTC.Audio.ApmCaptureOutputLevelAverageRms",0x2c,1,0x7f,0x40);
        FUN_00d0f5e0(0,lVar14,&DAT_00d80838);
        if (lVar14 != 0) goto LAB_009a5854;
      }
      else {
LAB_009a5854:
        FUN_00666568(lVar14,uVar8 & 0xffffffff);
      }
      lVar14 = DAT_00d80840;
      if (DAT_00d80840 == 0) {
        lVar14 = FUN_006660d8("WebRTC.Audio.ApmCaptureOutputLevelPeakRms",0x29,1,0x7f,0x40);
        FUN_00d0f5e0(0,lVar14,&DAT_00d80840);
        if (lVar14 == 0) goto LAB_009a58b4;
      }
      FUN_00666568(lVar14,uVar8 >> 0x20);
    }
LAB_009a58b4:
    if ((long *)param_1[0xe2] != (long *)0x0) {
      local_70 = -1;
      puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
      local_60 = (undefined1 *)0xffffffffffffffff;
      local_58 = &DAT_aaaaaaaaaaaaaaaa;
      (**(code **)(*(long *)param_1[0xe2] + 0x38))(&local_70);
      param_1[0x111] = local_70;
      *(undefined1 *)(param_1 + 0x112) = puStack_68._0_1_;
      param_1[0x113] = (long)local_60;
      *(undefined1 *)(param_1 + 0x114) = local_58._0_1_;
    }
  }
  if ((long *)param_1[0xea] != (long *)0x0) {
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = (undefined1 *)0xffffffffffffffff;
    local_70 = -1;
    (**(code **)(*(long *)param_1[0xea] + 0x20))(&local_70);
    *(undefined1 *)(param_1 + 0x10a) = 1;
    *(undefined1 *)(param_1 + 0x10c) = 1;
    param_1[0x109] = local_70;
    param_1[0x10b] = (long)puStack_68;
    *(undefined4 *)(param_1 + 0x115) = local_60._0_4_;
    *(undefined1 *)((long)param_1 + 0x8ac) = 1;
  }
  FUN_009a67d8(param_1 + 0x11f,param_1 + 0x108);
  if ((*(byte *)((long)param_1 + 0x8b4) & 1) == 0) {
    if ((char)param_1[0x118] == '\x01') {
      *(undefined1 *)(param_1 + 0x118) = 0;
    }
    goto LAB_009a59b4;
  }
  if (param_1[0xe6] == 0) {
    if ((long *)param_1[0xe7] != (long *)0x0) {
      uVar7 = (**(code **)(*(long *)param_1[0xe7] + 8))();
      goto LAB_009a5998;
    }
    if ((param_1[0xe8] == 0) || (*(char *)((long)param_1 + 0x1fd) != '\x01')) {
      *(byte *)(param_1 + 0x118) = *(byte *)((long)param_1 + 0x8b4);
      *(int *)((long)param_1 + 0x8bc) = (int)*plVar1;
      if ((*(byte *)((long)param_1 + 0x8b4) & 1) == 0) goto LAB_009a59b4;
      goto LAB_009a59a8;
    }
    uVar8 = *(ulong *)(param_1[0xe8] + 0x89c);
    *(int *)((long)param_1 + 0x8bc) = (int)uVar8;
    *(char *)(param_1 + 0x118) = (char)(uVar8 >> 0x20);
    if ((uVar8 >> 0x20 & 1) != 0) goto LAB_009a59a8;
  }
  else {
    uVar7 = *(undefined4 *)(param_1[0xe6] + 0x24);
LAB_009a5998:
    *(undefined4 *)((long)param_1 + 0x8bc) = uVar7;
    *(undefined1 *)(param_1 + 0x118) = 1;
LAB_009a59a8:
    FUN_009af48c(param_1 + 0x15d,*(undefined4 *)((long)param_1 + 0x8bc));
  }
LAB_009a59b4:
  if ((param_1[0xed] != 0) &&
     (FUN_009caa84(param_1[0xed],lVar13), *(char *)((long)param_1 + 0x18c) == '\x01')) {
    if ((*(byte *)(param_1 + 0x118) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    FUN_009caad4(param_1[0xed],*(undefined4 *)((long)param_1 + 0x8bc));
  }
  cVar12 = *(char *)((long)param_1 + 0x7f9);
  if (((*(byte *)((long)param_1 + 0x7fa) & 1) == 0) && (cVar12 != '\0')) {
    uVar8 = *(ulong *)(lVar13 + 0x48);
    if (uVar8 == 0) {
      cVar12 = '\x01';
    }
    else {
      uVar15 = 0;
      do {
        __n = *(long *)(lVar13 + 0x20) * 4;
        if (0 < (long)__n) {
          __s = (void *)0x0;
          if (*(long *)(lVar13 + 0x20) != 0) {
            __s = *(void **)(*(long *)(*(long *)(lVar13 + 0x60) + 8) + uVar15 * 8);
          }
          memset(__s,0,__n);
          uVar8 = *(ulong *)(lVar13 + 0x48);
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar8);
      cVar12 = *(char *)((long)param_1 + 0x7f9);
    }
  }
  iVar6 = 0;
  *(char *)((long)param_1 + 0x7fa) = cVar12;
  *(undefined1 *)(param_1 + 0xff) = 0;
LAB_009a5a5c:
  FUN_009ba2f8(&local_38);
  return iVar6;
}


// ===== 009a5aec  FUN_009a5aec =====

void FUN_009a5aec(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  ulong *puVar5;
  ulong uVar6;
  int iVar7;
  float fVar8;
  undefined8 local_50;
  undefined4 local_48;
  
  local_50 = 0;
  local_48 = 0xaaaaaaaa;
  if (*(long *)(param_1 + 0x50) != 0) {
    iVar7 = 0;
    do {
      if ((ulong)((*(long *)(param_1 + 0x60) - *(long *)(param_1 + 0x58) >> 2) * -0x5555555555555555
                 ) <= *(ulong *)(param_1 + 0x48)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      puVar5 = (ulong *)(*(long *)(param_1 + 0x58) + *(ulong *)(param_1 + 0x48) * 0xc);
      uVar6 = *puVar5;
      uVar2 = puVar5[1];
      *puVar5 = local_50;
      *(undefined4 *)(puVar5 + 1) = local_48;
      local_50 = uVar6;
      local_48 = (int)uVar2;
      FUN_00d0f800(0xffffffffffffffff,param_1 + 0x50);
      plVar3 = *(long **)(param_1 + 0xc0);
      lVar1 = 0;
      if (*(long *)(param_1 + 0x48) + 1 !=
          (*(long *)(param_1 + 0x60) - *(long *)(param_1 + 0x58) >> 2) * -0x5555555555555555) {
        lVar1 = *(long *)(param_1 + 0x48) + 1;
      }
      *(long *)(param_1 + 0x48) = lVar1;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x70))(plVar3,&local_50);
      }
      if ((int)local_50 < 4) {
        if ((int)local_50 == 1) {
          if ((*(byte *)(param_1 + 0x178) & 1) == 0) {
            if (*(char *)(param_1 + 0x180) == '\x01') {
              fVar8 = 1.0;
              *(float *)(param_1 + 0x184) = local_50._4_4_;
              goto LAB_009a5cd8;
            }
          }
          else {
            *(float *)(param_1 + 0x17c) = local_50._4_4_;
            fVar8 = local_50._4_4_;
            if (*(char *)(param_1 + 0x180) == '\x01') {
LAB_009a5cd8:
              fVar8 = fVar8 * *(float *)(param_1 + 0x184);
            }
            FUN_009caa90(fVar8,*(undefined8 *)(param_1 + 0x768));
          }
        }
        else if ((int)local_50 == 2) {
          if ((*(long *)(param_1 + 0x730) == 0) &&
             ((*(long *)(param_1 + 0x740) == 0 || ((*(byte *)(param_1 + 0x1fd) & 1) == 0)))) {
            *(int *)(param_1 + 0x1b8) = (int)(local_50._4_4_ + 0.5);
            if (*(long **)(param_1 + 0x738) != (long *)0x0) {
              (**(code **)(**(long **)(param_1 + 0x738) + 0x30))();
            }
          }
        }
        else if (((int)local_50 == 3) && (*(long *)(param_1 + 0x740) != 0)) {
          *(float *)(param_1 + 0x218) = local_50._4_4_;
          FUN_009abf94();
        }
      }
      else if ((int)local_50 == 4) {
        *(float *)(param_1 + 0x838) = local_50._4_4_;
      }
      else if ((int)local_50 == 7) {
        if (*(char *)(param_1 + 0x180) == '\x01') {
          *(float *)(param_1 + 0x188) = local_50._4_4_;
          FUN_009caac8(*(undefined8 *)(param_1 + 0x768));
        }
      }
      else if ((int)local_50 == 8) {
        if ((local_50 & 0x100000000) == 0) {
          bVar4 = *(byte *)(param_1 + 0x7f3) ^ 1;
        }
        else {
          bVar4 = 1;
        }
        *(byte *)(param_1 + 0x7f9) = bVar4 & 1;
        if (*(long *)(param_1 + 0x730) != 0) {
          FUN_009bb994();
        }
        plVar3 = *(long **)(param_1 + 0x750);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x30))(plVar3,*(undefined1 *)(param_1 + 0x7f9));
        }
        if (*(long *)(param_1 + 0x758) != 0) {
          *(undefined1 *)(*(long *)(param_1 + 0x758) + 0x50) = *(undefined1 *)(param_1 + 0x7f9);
        }
        if (*(long *)(param_1 + 0x740) != 0) {
          FUN_009abf7c(*(long *)(param_1 + 0x740),*(undefined1 *)(param_1 + 0x7f9));
        }
      }
      iVar7 = iVar7 + 1;
    } while (*(long *)(param_1 + 0x50) != 0);
    if (99 < iVar7) {
      *(undefined1 *)(param_1 + 0x7f9) = 1;
      if (*(long *)(param_1 + 0x730) != 0) {
        FUN_009bb994(*(long *)(param_1 + 0x730),1);
      }
      plVar3 = *(long **)(param_1 + 0x750);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x30))(plVar3,*(undefined1 *)(param_1 + 0x7f9));
      }
      if (*(long *)(param_1 + 0x758) != 0) {
        *(undefined1 *)(*(long *)(param_1 + 0x758) + 0x50) = *(undefined1 *)(param_1 + 0x7f9);
      }
      if (*(long *)(param_1 + 0x740) != 0) {
        FUN_009abf7c(*(long *)(param_1 + 0x740),*(undefined1 *)(param_1 + 0x7f9));
      }
    }
  }
  return;
}


// ===== 009a5dcc  FUN_009a5dcc =====

void FUN_009a5dcc(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong unaff_x20;
  undefined8 local_40;
  uint local_38;
  
  local_40 = 0;
  local_38 = 0xaaaaaaaa;
  lVar3 = *(long *)(param_1 + 0x88);
  while( true ) {
    if (lVar3 == 0) {
      return;
    }
    if ((ulong)((*(long *)(param_1 + 0x98) - *(long *)(param_1 + 0x90) >> 2) * -0x5555555555555555)
        <= *(ulong *)(param_1 + 0x80)) break;
    puVar4 = (undefined8 *)(*(long *)(param_1 + 0x90) + *(ulong *)(param_1 + 0x80) * 0xc);
    uVar5 = *puVar4;
    uVar1 = *(uint *)(puVar4 + 1);
    *puVar4 = local_40;
    *(uint *)(puVar4 + 1) = local_38;
    local_40 = uVar5;
    local_38 = uVar1;
    FUN_00d0f800(0xffffffffffffffff,param_1 + 0x88);
    plVar2 = *(long **)(param_1 + 0xc0);
    lVar3 = 0;
    if (*(long *)(param_1 + 0x80) + 1 !=
        (*(long *)(param_1 + 0x98) - *(long *)(param_1 + 0x90) >> 2) * -0x5555555555555555) {
      lVar3 = *(long *)(param_1 + 0x80) + 1;
    }
    *(long *)(param_1 + 0x80) = lVar3;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x70))(plVar2,&local_40);
    }
    if (((int)local_40 - 4U < 3) && (plVar2 = *(long **)(param_1 + 0x720), plVar2 != (long *)0x0)) {
      unaff_x20 = unaff_x20 & 0xffffffff00000000 | (ulong)local_38;
      (**(code **)(*plVar2 + 0x18))(plVar2,local_40,unaff_x20);
    }
    lVar3 = *(long *)(param_1 + 0x88);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 009a5f0c  FUN_009a5f0c =====

ulong FUN_009a5f0c(ulong param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((*(long *)(param_1 + 0x730) == 0) && (*(long *)(param_1 + 0x738) != 0)) {
    FUN_009aa9a0(param_2,param_1 + 0x9d0);
    lVar6 = *(long *)(param_1 + 0xb40);
    lVar2 = *(long *)(lVar6 + 0x20);
    uVar4 = (*(long *)(lVar6 + 0x28) - lVar2 >> 3) * -0x5555555555555555;
    if (*(ulong *)(lVar6 + 0x18) == uVar4) {
      pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x140));
      FUN_009a6220(param_1);
      uVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x140));
      lVar6 = *(long *)(param_1 + 0xb40);
      lVar2 = *(long *)(lVar6 + 0x20);
      uVar4 = (*(long *)(lVar6 + 0x28) - lVar2 >> 3) * -0x5555555555555555;
      if (*(ulong *)(lVar6 + 0x18) == uVar4) {
        return (ulong)uVar1;
      }
    }
    if (uVar4 <= *(ulong *)(lVar6 + 8)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                );
    }
    puVar3 = (undefined8 *)(lVar2 + *(ulong *)(lVar6 + 8) * 0x18);
    uVar5 = *(undefined8 *)(param_1 + 0x9d0);
    *(undefined8 *)(param_1 + 0x9d0) = *puVar3;
    *puVar3 = uVar5;
    uVar5 = *(undefined8 *)(param_1 + 0x9d8);
    *(undefined8 *)(param_1 + 0x9d8) = puVar3[1];
    puVar3[1] = uVar5;
    uVar5 = *(undefined8 *)(param_1 + 0x9e0);
    *(undefined8 *)(param_1 + 0x9e0) = puVar3[2];
    puVar3[2] = uVar5;
    param_1 = FUN_00d0f800(1,lVar6 + 0x18);
    lVar2 = 0;
    if (*(long *)(lVar6 + 8) + 1 !=
        (*(long *)(lVar6 + 0x28) - *(long *)(lVar6 + 0x20) >> 3) * -0x5555555555555555) {
      lVar2 = *(long *)(lVar6 + 8) + 1;
    }
    *(long *)(lVar6 + 8) = lVar2;
  }
  return param_1;
}


// ===== 009a604c  FUN_009a604c =====

ulong FUN_009a604c(ulong param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  if (*(long *)(param_1 + 0x710) != 0) {
    lVar4 = *(long *)(param_1 + 0xa10);
    lVar2 = *(long *)(param_1 + 0xa08);
    uVar7 = (lVar4 - (lVar4 << 0x3e)) - 4U >> 2;
    uVar5 = (ulong)((lVar2 - lVar4 << 0x3e) - (lVar2 - lVar4)) >> 2;
    if (uVar7 <= uVar5) {
      uVar5 = uVar7;
    }
    if ((1 < uVar5) && ((((int)lVar2 - (int)lVar4 | -(int)lVar4) & 3U) == 0)) {
      uVar5 = uVar5 & 0x3ffffffffffffffe;
      lVar4 = lVar4 + uVar5 * -4;
      do {
        uVar5 = uVar5 - 2;
      } while (uVar5 != 0);
    }
    while (lVar4 != lVar2) {
      lVar4 = lVar4 + -4;
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    *(long *)(param_1 + 0xa10) = lVar2;
    lVar4 = **(long **)(*(long *)(param_2 + 0x60) + 8);
    FUN_009a7d24(param_1 + 0xa08,lVar2,lVar4,lVar4 + *(long *)(param_2 + 0x20) * 4,
                 (*(long *)(param_2 + 0x20) << 2) >> 2);
    lVar2 = *(long *)(param_1 + 0xb48);
    lVar4 = *(long *)(lVar2 + 0x20);
    uVar5 = (*(long *)(lVar2 + 0x28) - lVar4 >> 3) * -0x5555555555555555;
    if (*(ulong *)(lVar2 + 0x18) == uVar5) {
      pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x140));
      FUN_009a6220(param_1);
      uVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x140));
      lVar2 = *(long *)(param_1 + 0xb48);
      lVar4 = *(long *)(lVar2 + 0x20);
      uVar5 = (*(long *)(lVar2 + 0x28) - lVar4 >> 3) * -0x5555555555555555;
      if (*(ulong *)(lVar2 + 0x18) == uVar5) {
        return (ulong)uVar1;
      }
    }
    if (uVar5 <= *(ulong *)(lVar2 + 8)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                );
    }
    puVar3 = (undefined8 *)(lVar4 + *(ulong *)(lVar2 + 8) * 0x18);
    uVar6 = *(undefined8 *)(param_1 + 0xa08);
    *(undefined8 *)(param_1 + 0xa08) = *puVar3;
    *puVar3 = uVar6;
    uVar6 = *(undefined8 *)(param_1 + 0xa10);
    *(undefined8 *)(param_1 + 0xa10) = puVar3[1];
    puVar3[1] = uVar6;
    uVar6 = *(undefined8 *)(param_1 + 0xa18);
    *(undefined8 *)(param_1 + 0xa18) = puVar3[2];
    puVar3[2] = uVar6;
    param_1 = FUN_00d0f800(1,lVar2 + 0x18);
    lVar4 = 0;
    if (*(long *)(lVar2 + 8) + 1 !=
        (*(long *)(lVar2 + 0x28) - *(long *)(lVar2 + 0x20) >> 3) * -0x5555555555555555) {
      lVar4 = *(long *)(lVar2 + 8) + 1;
    }
    *(long *)(lVar2 + 8) = lVar4;
  }
  return param_1;
}


// ===== 009a6220  FUN_009a6220 =====

void FUN_009a6220(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x738) != 0) {
    lVar4 = *(long *)(param_1 + 0xb40);
    lVar1 = *(long *)(lVar4 + 0x18);
    while (lVar1 != 0) {
      if ((ulong)((*(long *)(lVar4 + 0x28) - *(long *)(lVar4 + 0x20) >> 3) * -0x5555555555555555) <=
          *(ulong *)(lVar4 + 0x10)) goto LAB_009a63ec;
      puVar2 = (undefined8 *)(*(long *)(lVar4 + 0x20) + *(ulong *)(lVar4 + 0x10) * 0x18);
      uVar3 = *(undefined8 *)(param_1 + 0x9e8);
      *(undefined8 *)(param_1 + 0x9e8) = *puVar2;
      *puVar2 = uVar3;
      uVar3 = *(undefined8 *)(param_1 + 0x9f0);
      *(undefined8 *)(param_1 + 0x9f0) = puVar2[1];
      puVar2[1] = uVar3;
      uVar3 = *(undefined8 *)(param_1 + 0x9f8);
      *(undefined8 *)(param_1 + 0x9f8) = puVar2[2];
      puVar2[2] = uVar3;
      FUN_00d0f800(0xffffffffffffffff);
      lVar1 = 0;
      if (*(long *)(lVar4 + 0x10) + 1 !=
          (*(long *)(lVar4 + 0x28) - *(long *)(lVar4 + 0x20) >> 3) * -0x5555555555555555) {
        lVar1 = *(long *)(lVar4 + 0x10) + 1;
      }
      *(long *)(lVar4 + 0x10) = lVar1;
      lVar1 = *(long *)(param_1 + 0x9f0) - *(long *)(param_1 + 0x9e8);
      lVar4 = 0;
      if (lVar1 != 0) {
        lVar4 = *(long *)(param_1 + 0x9e8);
      }
      FUN_009aa930(*(undefined8 *)(param_1 + 0x738),lVar4,lVar1 >> 1);
      lVar4 = *(long *)(param_1 + 0xb40);
      lVar1 = *(long *)(lVar4 + 0x18);
    }
  }
  if (*(long *)(param_1 + 0x710) != 0) {
    lVar4 = *(long *)(param_1 + 0xb48);
    lVar1 = *(long *)(lVar4 + 0x18);
    while (lVar1 != 0) {
      if ((ulong)((*(long *)(lVar4 + 0x28) - *(long *)(lVar4 + 0x20) >> 3) * -0x5555555555555555) <=
          *(ulong *)(lVar4 + 0x10)) {
LAB_009a63ec:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      puVar2 = (undefined8 *)(*(long *)(lVar4 + 0x20) + *(ulong *)(lVar4 + 0x10) * 0x18);
      uVar3 = *(undefined8 *)(param_1 + 0xa20);
      *(undefined8 *)(param_1 + 0xa20) = *puVar2;
      *puVar2 = uVar3;
      uVar3 = *(undefined8 *)(param_1 + 0xa28);
      *(undefined8 *)(param_1 + 0xa28) = puVar2[1];
      puVar2[1] = uVar3;
      uVar3 = *(undefined8 *)(param_1 + 0xa30);
      *(undefined8 *)(param_1 + 0xa30) = puVar2[2];
      puVar2[2] = uVar3;
      FUN_00d0f800(0xffffffffffffffff);
      lVar1 = 0;
      if (*(long *)(lVar4 + 0x10) + 1 !=
          (*(long *)(lVar4 + 0x28) - *(long *)(lVar4 + 0x20) >> 3) * -0x5555555555555555) {
        lVar1 = *(long *)(lVar4 + 0x10) + 1;
      }
      *(long *)(lVar4 + 0x10) = lVar1;
      lVar1 = *(long *)(param_1 + 0xa28) - *(long *)(param_1 + 0xa20);
      lVar4 = 0;
      if (lVar1 != 0) {
        lVar4 = *(long *)(param_1 + 0xa20);
      }
      (**(code **)(**(long **)(param_1 + 0x710) + 0x28))
                (*(long **)(param_1 + 0x710),lVar4,lVar1 >> 2);
      lVar4 = *(long *)(param_1 + 0xb48);
      lVar1 = *(long *)(lVar4 + 0x18);
    }
  }
  return;
}


// ===== 009a6400  FUN_009a6400 =====

ulong FUN_009a6400(long param_1,void *param_2,long param_3,long param_4,void *param_5)

{
  undefined2 uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  char **ppcVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined8 uVar15;
  undefined1 *local_88;
  char **local_80;
  char *local_78;
  char *pcStack_70;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined1 local_58;
  undefined1 auStack_57 [4];
  undefined3 uStack_53;
  
  if (((DAT_00d80820 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00d80820), iVar2 != 0)) {
    DAT_00d80818 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d80820);
  }
  local_80 = (char **)0x0;
  pcStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d80818 != '\0') {
    FUN_0066d348(0x42,DAT_00d80818,"AudioProcessing::ProcessStream_AudioFrame",0,0,0,0,0,0);
    local_78 = DAT_00d80818;
    pcStack_70 = "AudioProcessing::ProcessStream_AudioFrame";
    local_80 = &local_78;
  }
  ppcVar12 = local_80;
  uVar3 = FUN_009a7ba4(param_3,param_4);
  if ((int)uVar3 == 0) {
    FUN_009a4d14(param_1,param_3,param_4);
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x140));
    local_88 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_009ba2c4(&local_88);
    if (*(long *)(param_1 + 0xc0) != 0) {
      FUN_009a75e4(param_1,0);
      (**(code **)(**(long **)(param_1 + 0xc0) + 0x38))
                (*(long **)(param_1 + 0xc0),param_2,*(undefined4 *)(param_3 + 8),
                 *(undefined4 *)(param_3 + 0x10));
      local_64 = *(undefined4 *)(param_1 + 0x8e0);
      local_5c = *(undefined4 *)(param_1 + 0x8b0);
      uStack_60 = 0;
      _local_58 = CONCAT71(0xaaaaaaaaaaaaaa,*(undefined1 *)(param_1 + 0x8b4));
      _local_58 = CONCAT35(0xaaaaaa,CONCAT14(*(undefined1 *)(param_1 + 0x7fb),_local_58));
      (**(code **)(**(long **)(param_1 + 0xc0) + 0x48))(*(long **)(param_1 + 0xc0),&local_64);
    }
    FUN_0065c37c(*(undefined8 *)(param_1 + 0x800),param_2,param_3);
    if (*(long *)(param_1 + 0x808) != 0) {
      FUN_0065c37c(*(long *)(param_1 + 0x808),param_2,param_3);
    }
    uVar6 = FUN_009a5218(param_1);
    uVar3 = uVar6 & 0xffffffff;
    if ((int)uVar6 == 0) {
      if ((((((*(byte *)(param_1 + 0x703) & 1) != 0) || ((*(byte *)(param_1 + 0x704) & 1) != 0)) ||
           ((*(byte *)(param_1 + 0x705) & 1) != 0)) ||
          (((*(byte *)(param_1 + 0x706) & 1) != 0 || ((*(byte *)(param_1 + 0x709) & 1) != 0)))) ||
         (((*(byte *)(param_1 + 0x707) & 1) != 0 ||
          (((*(byte *)(param_1 + 0x700) & 1) != 0 || (*(char *)(param_1 + 0x708) == '\x01')))))) {
        lVar4 = *(long *)(param_1 + 0x808);
        if (lVar4 == 0) {
          lVar4 = *(long *)(param_1 + 0x800);
        }
        FUN_0065ccb8(lVar4,param_4,param_5);
      }
      plVar5 = *(long **)(param_1 + 0xc0);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x40))
                  (plVar5,param_5,*(undefined4 *)(param_4 + 8),*(undefined4 *)(param_4 + 0x10));
        (**(code **)(**(long **)(param_1 + 0xc0) + 0x50))();
      }
    }
    FUN_009ba2f8(&local_88);
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x140));
    ppcVar12 = local_80;
  }
  else {
    uVar6 = *(ulong *)(param_4 + 8);
    iVar2 = (int)(uVar3 >> 0x20);
    if (uVar3 >> 0x20 < 2) {
      if (iVar2 == 0) {
        memcpy(param_5,param_2,uVar6 * *(long *)(param_4 + 0x10) * 2);
      }
      else {
        uVar9 = *(ulong *)(param_4 + 0x10);
        if (uVar9 != 0) {
          uVar7 = 0;
          puVar8 = (undefined8 *)((long)param_5 + 0x10);
          do {
            if (uVar6 != 0) {
              uVar1 = *(undefined2 *)((long)param_2 + *(long *)(param_3 + 8) * uVar7 * 2);
              if (uVar6 < 4) {
                uVar10 = 0;
LAB_009a673c:
                do {
                  *(undefined2 *)((long)param_5 + uVar10 * 2) = uVar1;
                  uVar10 = uVar10 + 1;
joined_r0x009a6738:
                } while (uVar6 != uVar10);
              }
              else {
                uVar13 = (undefined1)uVar1;
                uVar14 = (undefined1)((ushort)uVar1 >> 8);
                if (uVar6 < 0x10) {
                  uVar9 = 0;
LAB_009a6718:
                  lVar4 = uVar9 - (uVar6 & 0xfffffffffffffffc);
                  puVar11 = (undefined8 *)((long)param_5 + uVar9 * 2);
                  do {
                    lVar4 = lVar4 + 4;
                    *puVar11 = CONCAT17(uVar14,CONCAT16(uVar13,CONCAT15(uVar14,CONCAT14(uVar13,
                                                  CONCAT13(uVar14,CONCAT12(uVar13,uVar1))))));
                    puVar11 = puVar11 + 1;
                    uVar10 = uVar6 & 0xfffffffffffffffc;
                    if (lVar4 == 0) goto joined_r0x009a6738;
                  } while( true );
                }
                uVar15 = CONCAT26(uVar1,CONCAT24(uVar1,CONCAT22(uVar1,uVar1)));
                uVar9 = uVar6 & 0xfffffffffffffff0;
                puVar11 = puVar8;
                do {
                  uVar9 = uVar9 - 0x10;
                  puVar11[-1] = uVar15;
                  puVar11[-2] = CONCAT17(uVar14,CONCAT16(uVar13,CONCAT15(uVar14,CONCAT14(uVar13,
                                                  CONCAT13(uVar14,CONCAT12(uVar13,uVar1))))));
                  puVar11[1] = uVar15;
                  *puVar11 = CONCAT17(uVar14,CONCAT16(uVar13,CONCAT15(uVar14,CONCAT14(uVar13,
                                                  CONCAT13(uVar14,CONCAT12(uVar13,uVar1))))));
                  puVar11 = puVar11 + 4;
                } while (uVar9 != 0);
                if (uVar6 != (uVar6 & 0xfffffffffffffff0)) {
                  uVar9 = uVar6 & 0xfffffffffffffff0;
                  uVar10 = uVar6 & 0xfffffffffffffff0;
                  if ((uVar6 & 0xc) != 0) goto LAB_009a6718;
                  goto LAB_009a673c;
                }
              }
              uVar9 = *(ulong *)(param_4 + 0x10);
            }
            uVar7 = uVar7 + 1;
            puVar8 = (undefined8 *)((long)puVar8 + uVar6 * 2);
            param_5 = (void *)((long)param_5 + uVar6 * 2);
          } while (uVar7 < uVar9);
        }
      }
    }
    else if (iVar2 == 2) {
      memset(param_5,0,uVar6 * *(long *)(param_4 + 0x10) * 2);
    }
  }
  if ((ppcVar12 != (char **)0x0) && (**ppcVar12 != '\0')) {
    FUN_0066d348(0x45,*ppcVar12,ppcVar12[1],0,0,0,0,0,0);
  }
  return uVar3 & 0xffffffff;
}


// ===== 009a67d8  FUN_009a67d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009a67d8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
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
  
  uVar15 = _UNK_0022b628;
  uVar14 = _DAT_0022b620;
  uVar13 = _UNK_0022b618;
  uVar12 = _DAT_0022b610;
  uVar11 = _UNK_0022b608;
  uVar10 = _DAT_0022b600;
  uVar9 = _UNK_0022b5f8;
  uVar8 = _DAT_0022b5f0;
  uVar7 = _UNK_0022b5e8;
  uVar6 = _DAT_0022b5e0;
  uVar5 = _UNK_0022b5d8;
  uVar4 = _DAT_0022b5d0;
  uVar3 = _UNK_0022b5c8;
  uVar2 = _DAT_0022b5c0;
  uStack_a8 = _UNK_0022b628;
  local_b0 = _DAT_0022b620;
  uStack_c8 = _UNK_0022b608;
  local_d0 = _DAT_0022b600;
  uStack_b8 = _UNK_0022b618;
  local_c0 = _DAT_0022b610;
  uStack_108 = _UNK_0022b5c8;
  local_110 = _DAT_0022b5c0;
  uStack_f8 = _UNK_0022b5d8;
  uStack_100 = _DAT_0022b5d0;
  uStack_e8 = _UNK_0022b5e8;
  local_f0 = _DAT_0022b5e0;
  uStack_d8 = _UNK_0022b5f8;
  uStack_e0 = _DAT_0022b5f0;
  FUN_0065f0a0(&local_110);
  uVar16 = (*(long *)(param_1 + 0xc0) - *(long *)(param_1 + 0xb8) >> 4) * 0x6db6db6db6db6db7;
  if (*(ulong *)(param_1 + 0xb0) != uVar16) {
    if (uVar16 <= *(ulong *)(param_1 + 0xa0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                );
    }
    puVar17 = (undefined8 *)(*(long *)(param_1 + 0xb8) + *(ulong *)(param_1 + 0xa0) * 0x70);
    uStack_58 = uVar11;
    local_60 = uVar10;
    uStack_48 = uVar13;
    uStack_50 = uVar12;
    uStack_38 = uVar15;
    local_40 = uVar14;
    uStack_98 = uVar3;
    local_a0 = uVar2;
    uStack_88 = uVar5;
    uStack_90 = uVar4;
    uStack_78 = uVar7;
    local_80 = uVar6;
    uStack_68 = uVar9;
    uStack_70 = uVar8;
    FUN_0065f0a0(&local_a0,&local_110);
    uStack_e8 = puVar17[5];
    local_f0 = puVar17[4];
    uStack_d8 = puVar17[7];
    uStack_e0 = puVar17[6];
    uStack_108 = puVar17[1];
    local_110 = *puVar17;
    uStack_f8 = puVar17[3];
    uStack_100 = puVar17[2];
    uStack_b8 = puVar17[0xb];
    local_c0 = puVar17[10];
    uStack_a8 = puVar17[0xd];
    local_b0 = puVar17[0xc];
    uStack_c8 = puVar17[9];
    local_d0 = puVar17[8];
    puVar17[0xd] = uStack_38;
    puVar17[0xc] = local_40;
    puVar17[9] = uStack_58;
    puVar17[8] = local_60;
    puVar17[0xb] = uStack_48;
    puVar17[10] = uStack_50;
    puVar17[5] = uStack_78;
    puVar17[4] = local_80;
    puVar17[7] = uStack_68;
    puVar17[6] = uStack_70;
    puVar17[1] = uStack_98;
    *puVar17 = local_a0;
    puVar17[3] = uStack_88;
    puVar17[2] = uStack_90;
    FUN_0065f0c8(&local_a0);
    FUN_00d0f800(1,param_1 + 0xb0);
    lVar1 = 0;
    if (*(long *)(param_1 + 0xa0) + 1 !=
        (*(long *)(param_1 + 0xc0) - *(long *)(param_1 + 0xb8) >> 4) * 0x6db6db6db6db6db7) {
      lVar1 = *(long *)(param_1 + 0xa0) + 1;
    }
    *(long *)(param_1 + 0xa0) = lVar1;
  }
  FUN_0065f0c8(&local_110);
  return;
}


// ===== 009a6950  FUN_009a6950 =====

undefined4 FUN_009a6950(long param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined1 *local_60;
  char **local_58;
  char *local_50;
  char *pcStack_48;
  
  if (((DAT_00d80850 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d80850), iVar1 != 0)) {
    DAT_00d80848 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d80850);
  }
  local_58 = (char **)0x0;
  pcStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d80848 != '\0') {
    FUN_0066d348(0x42,DAT_00d80848,"AudioProcessing::AnalyzeReverseStream_StreamConfig",0,0,0,0,0,0)
    ;
    local_50 = DAT_00d80848;
    pcStack_48 = "AudioProcessing::AnalyzeReverseStream_StreamConfig";
    local_58 = &local_50;
  }
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x118));
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_009ba2c4(&local_60);
  if (-1 < *param_3) {
    if (*(long *)(param_3 + 2) == 0) {
      uVar3 = 0xfffffff7;
      goto LAB_009a6a80;
    }
    if (*param_3 - 8000U < 0x5bcc1) {
      FUN_009a3158(param_1,param_3,param_3);
      plVar2 = *(long **)(param_1 + 0xc0);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x68))
                  (plVar2,param_2,*(undefined4 *)(param_1 + 0x7b0),*(undefined4 *)(param_1 + 0x7b8))
        ;
      }
      FUN_0065bda0(*(undefined8 *)(param_1 + 0x8f0),param_2,param_1 + 0x7a8);
      FUN_009a6e00(param_1);
      uVar3 = 0;
      goto LAB_009a6a80;
    }
  }
  uVar3 = 0xfffffff9;
LAB_009a6a80:
  FUN_009ba2f8(&local_60);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x118));
  if ((local_58 != (char **)0x0) && (**local_58 != '\0')) {
    FUN_0066d348(0x45,*local_58,local_58[1],0,0,0,0,0,0);
  }
  return uVar3;
}


// ===== 009a6b18  FUN_009a6b18 =====

ulong FUN_009a6b18(long param_1,undefined8 *param_2,long param_3,long param_4,undefined8 *param_5)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *local_70;
  char **local_68;
  char *local_60;
  char *pcStack_58;
  
  if (((DAT_00d80860 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d80860), iVar1 != 0)) {
    DAT_00d80858 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d80860);
  }
  local_68 = (char **)0x0;
  pcStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d80858 != '\0') {
    FUN_0066d348(0x42,DAT_00d80858,"AudioProcessing::ProcessReverseStream_StreamConfig",0,0,0,0,0,0)
    ;
    local_60 = DAT_00d80858;
    pcStack_58 = "AudioProcessing::ProcessReverseStream_StreamConfig";
    local_68 = &local_60;
  }
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x118));
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_009ba2c4(&local_70);
  lVar6 = *(long *)(param_4 + 8);
  uVar2 = FUN_009a7ba4(param_3,param_4);
  if ((int)uVar2 == 0) {
    FUN_009a3158(param_1,param_3,param_4);
    plVar3 = *(long **)(param_1 + 0xc0);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x68))
                (plVar3,param_2,*(undefined4 *)(param_1 + 0x7b0),*(undefined4 *)(param_1 + 0x7b8));
    }
    FUN_0065bda0(*(undefined8 *)(param_1 + 0x8f0),param_2,param_1 + 0x7a8);
    FUN_009a6e00(param_1);
    if (*(char *)(param_1 + 0x701) == '\x01') {
      FUN_0065c10c(*(undefined8 *)(param_1 + 0x8f0),param_1 + 0x7c0,param_5);
    }
    else if ((*(int *)(param_1 + 0x7a8) == *(int *)(param_1 + 0x7c0)) &&
            (*(long *)(param_1 + 0x7b0) == *(long *)(param_1 + 0x7c8))) {
      if (0 < (int)*(ulong *)(param_3 + 8)) {
        uVar4 = *(ulong *)(param_3 + 0x10);
        uVar5 = *(ulong *)(param_3 + 8) & 0x7fffffff;
        do {
          if ((void *)*param_2 != (void *)*param_5) {
            memmove((void *)*param_5,(void *)*param_2,
                    -(uVar4 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar4 & 0xffffffff) << 2);
          }
          uVar5 = uVar5 - 1;
          uVar2 = 0;
          param_5 = param_5 + 1;
          param_2 = param_2 + 1;
        } while (uVar5 != 0);
        goto LAB_009a6d64;
      }
    }
    else {
      (**(code **)(**(long **)(param_1 + 0x8e8) + 0x10))
                (*(long **)(param_1 + 0x8e8),param_2,
                 *(long *)(param_3 + 0x10) * *(long *)(param_3 + 8),param_5,
                 *(long *)(param_4 + 0x10) * *(long *)(param_4 + 8));
    }
    uVar2 = 0;
  }
  else {
    iVar1 = (int)(uVar2 >> 0x20);
    if (uVar2 >> 0x20 < 2) {
      if (iVar1 == 0) {
        for (; lVar6 != 0; lVar6 = lVar6 + -1) {
          memcpy((void *)*param_5,(void *)*param_2,*(long *)(param_4 + 0x10) << 2);
          param_5 = param_5 + 1;
          param_2 = param_2 + 1;
        }
      }
      else {
        for (; lVar6 != 0; lVar6 = lVar6 + -1) {
          memcpy((void *)*param_5,(void *)*param_2,*(long *)(param_4 + 0x10) << 2);
          param_5 = param_5 + 1;
        }
      }
    }
    else if (iVar1 == 2) {
      for (; lVar6 != 0; lVar6 = lVar6 + -1) {
        memset((void *)*param_5,0,*(long *)(param_4 + 0x10) << 2);
        param_5 = param_5 + 1;
      }
    }
  }
LAB_009a6d64:
  FUN_009ba2f8(&local_70);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x118));
  if ((local_68 != (char **)0x0) && (**local_68 != '\0')) {
    FUN_0066d348(0x45,*local_68,local_68[1],0,0,0,0,0,0);
  }
  return uVar2 & 0xffffffff;
}


// ===== 009a6e00  FUN_009a6e00 =====

undefined8 FUN_009a6e00(long param_1)

{
  byte bVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 *local_28;
  
  uVar4 = *(undefined8 *)(param_1 + 0x8f0);
  FUN_009a5dcc();
  local_28 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_009ba2c4(&local_28);
  plVar2 = *(long **)(param_1 + 0x720);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2,uVar4);
  }
  FUN_009a604c(param_1,uVar4);
  bVar1 = *(byte *)(param_1 + 0x704);
  if ((((bVar1 & 1) == 0) && ((*(byte *)(param_1 + 0x706) & 1) == 0)) &&
     (*(char *)(param_1 + 0x709) != '\x01')) {
LAB_009a6e9c:
    if (((*(byte *)(param_1 + 0x706) & 1) == 0) && (*(char *)(param_1 + 0x709) != '\x01'))
    goto LAB_009a6ebc;
  }
  else {
    if ((*(int *)(param_1 + 0x7d8) == 48000) || (*(int *)(param_1 + 0x7d8) == 32000)) {
      FUN_0065d268(uVar4);
      bVar1 = *(byte *)(param_1 + 0x704);
    }
    if ((bVar1 & 1) == 0) goto LAB_009a6e9c;
  }
  FUN_009a5f0c(param_1,uVar4);
LAB_009a6ebc:
  puVar3 = *(undefined8 **)(param_1 + 0x750);
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,uVar4);
  }
  FUN_009ba2f8(&local_28);
  return 0;
}


// ===== 009a6ef4  FUN_009a6ef4 =====

ulong FUN_009a6ef4(long param_1,void *param_2,long param_3,long param_4,void *param_5)

{
  undefined2 uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined8 uVar14;
  undefined1 *local_70;
  char **local_68;
  char *local_60;
  char *pcStack_58;
  
  if (((DAT_00d80870 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00d80870), iVar2 != 0)) {
    DAT_00d80868 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d80870);
  }
  local_68 = (char **)0x0;
  pcStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d80868 != '\0') {
    FUN_0066d348(0x42,DAT_00d80868,"AudioProcessing::ProcessReverseStream_AudioFrame",0,0,0,0,0,0);
    local_60 = DAT_00d80868;
    pcStack_58 = "AudioProcessing::ProcessReverseStream_AudioFrame";
    local_68 = &local_60;
  }
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x118));
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_009ba2c4(&local_70);
  uVar3 = FUN_009a7ba4(param_3,param_4);
  if ((int)uVar3 == 0) {
    FUN_009a3158(param_1,param_3,param_4);
    plVar4 = *(long **)(param_1 + 0xc0);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x58))
                (plVar4,param_2,*(undefined4 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 8));
    }
    FUN_0065c37c(*(undefined8 *)(param_1 + 0x8f0),param_2,param_3);
    FUN_009a6e00(param_1);
    if (*(char *)(param_1 + 0x701) == '\x01') {
      FUN_0065ccb8(*(undefined8 *)(param_1 + 0x8f0),param_4,param_5);
    }
  }
  else {
    uVar6 = *(ulong *)(param_4 + 8);
    iVar2 = (int)(uVar3 >> 0x20);
    if (uVar3 >> 0x20 < 2) {
      if (iVar2 == 0) {
        memcpy(param_5,param_2,uVar6 * *(long *)(param_4 + 0x10) * 2);
      }
      else {
        uVar9 = *(ulong *)(param_4 + 0x10);
        if (uVar9 != 0) {
          uVar7 = 0;
          puVar8 = (undefined8 *)((long)param_5 + 0x10);
          do {
            if (uVar6 != 0) {
              uVar1 = *(undefined2 *)((long)param_2 + *(long *)(param_3 + 8) * uVar7 * 2);
              if (uVar6 < 4) {
                uVar10 = 0;
LAB_009a7140:
                do {
                  *(undefined2 *)((long)param_5 + uVar10 * 2) = uVar1;
                  uVar10 = uVar10 + 1;
joined_r0x009a713c:
                } while (uVar6 != uVar10);
              }
              else {
                uVar12 = (undefined1)uVar1;
                uVar13 = (undefined1)((ushort)uVar1 >> 8);
                if (uVar6 < 0x10) {
                  uVar9 = 0;
LAB_009a711c:
                  lVar5 = uVar9 - (uVar6 & 0xfffffffffffffffc);
                  puVar11 = (undefined8 *)((long)param_5 + uVar9 * 2);
                  do {
                    lVar5 = lVar5 + 4;
                    *puVar11 = CONCAT17(uVar13,CONCAT16(uVar12,CONCAT15(uVar13,CONCAT14(uVar12,
                                                  CONCAT13(uVar13,CONCAT12(uVar12,uVar1))))));
                    puVar11 = puVar11 + 1;
                    uVar10 = uVar6 & 0xfffffffffffffffc;
                    if (lVar5 == 0) goto joined_r0x009a713c;
                  } while( true );
                }
                uVar14 = CONCAT26(uVar1,CONCAT24(uVar1,CONCAT22(uVar1,uVar1)));
                uVar9 = uVar6 & 0xfffffffffffffff0;
                puVar11 = puVar8;
                do {
                  uVar9 = uVar9 - 0x10;
                  puVar11[-1] = uVar14;
                  puVar11[-2] = CONCAT17(uVar13,CONCAT16(uVar12,CONCAT15(uVar13,CONCAT14(uVar12,
                                                  CONCAT13(uVar13,CONCAT12(uVar12,uVar1))))));
                  puVar11[1] = uVar14;
                  *puVar11 = CONCAT17(uVar13,CONCAT16(uVar12,CONCAT15(uVar13,CONCAT14(uVar12,
                                                  CONCAT13(uVar13,CONCAT12(uVar12,uVar1))))));
                  puVar11 = puVar11 + 4;
                } while (uVar9 != 0);
                if (uVar6 != (uVar6 & 0xfffffffffffffff0)) {
                  uVar9 = uVar6 & 0xfffffffffffffff0;
                  uVar10 = uVar6 & 0xfffffffffffffff0;
                  if ((uVar6 & 0xc) != 0) goto LAB_009a711c;
                  goto LAB_009a7140;
                }
              }
              uVar9 = *(ulong *)(param_4 + 0x10);
            }
            uVar7 = uVar7 + 1;
            puVar8 = (undefined8 *)((long)puVar8 + uVar6 * 2);
            param_5 = (void *)((long)param_5 + uVar6 * 2);
          } while (uVar7 < uVar9);
        }
      }
    }
    else if (iVar2 == 2) {
      memset(param_5,0,uVar6 * *(long *)(param_4 + 0x10) * 2);
    }
  }
  FUN_009ba2f8(&local_70);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x118));
  if ((local_68 != (char **)0x0) && (**local_68 != '\0')) {
    FUN_0066d348(0x45,*local_68,local_68[1],0,0,0,0,0,0);
  }
  return uVar3 & 0xffffffff;
}


// ===== 009a71f0  FUN_009a71f0 =====

undefined4 FUN_009a71f0(long param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x140));
  uVar1 = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
  *(undefined1 *)(param_1 + 0x7f8) = 1;
  if (499 < (int)uVar1) {
    uVar1 = 500;
  }
  uVar2 = 0xfffffff3;
  if (param_2 < 0x1f5) {
    uVar2 = 0;
  }
  *(uint *)(param_1 + 0x8e0) = uVar1;
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x140));
  return uVar2;
}


// ===== 009a7254  FUN_009a7254 =====

bool FUN_009a7254(long param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x140));
  lVar3 = *(long *)(param_1 + 0x810);
  if (lVar3 == 0) {
    uVar4 = FUN_004249b0(iVar2);
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_processing/audio_processing_impl.cc",0x3403,
                   "No linear AEC output available");
    }
  }
  else if (*(long *)(lVar3 + 0x48) != 0) {
    uVar4 = 0;
    do {
      uVar1 = 0;
      if (*(long *)(lVar3 + 0x20) != 0) {
        uVar1 = *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x60) + 8) + uVar4 * 8);
      }
      FUN_005eec3c(uVar1,*(long *)(lVar3 + 0x20),param_2);
      uVar4 = uVar4 + 1;
      param_2 = param_2 + 0x280;
    } while (uVar4 < *(ulong *)(lVar3 + 0x48));
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x140));
  return lVar3 != 0;
}


// ===== 009a7314  FUN_009a7314 =====

undefined4 FUN_009a7314(long param_1)

{
  return *(undefined4 *)(param_1 + 0x8e0);
}


// ===== 009a7320  FUN_009a7320 =====

int FUN_009a7320(long param_1,undefined1 param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x140));
  *(undefined1 *)(param_1 + 0x7fb) = param_2;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x140));
  return iVar1;
}


// ===== 009a7358  FUN_009a7358 =====

int FUN_009a7358(long param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x140));
  if (*(char *)(param_1 + 0x8b4) == '\x01') {
    bVar1 = *(int *)(param_1 + 0x8b0) != param_2;
  }
  else {
    bVar1 = false;
  }
  *(bool *)(param_1 + 0x8b8) = bVar1;
  *(int *)(param_1 + 0x8b0) = param_2;
  *(undefined1 *)(param_1 + 0x8b4) = 1;
  if (*(char *)(param_1 + 0x8c0) == '\x01') {
    *(undefined1 *)(param_1 + 0x8c0) = 0;
  }
  if (*(long *)(param_1 + 0x730) == 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x738);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,param_2);
    }
  }
  else {
    FUN_009bb9f0(*(long *)(param_1 + 0x730),param_2);
  }
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x140));
  return iVar2;
}


// ===== 009a73f8  FUN_009a73f8 =====

undefined4 FUN_009a73f8(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x140));
  if (((*(byte *)(param_1 + 0x8b4) & 1) == 0) && (uVar2 = FUN_004249b0(iVar1), (uVar2 & 1) == 0)) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_processing/audio_processing_impl.cc",0x356b,
                 "set_stream_analog_level has not been called");
  }
  if (*(char *)(param_1 + 0x8b4) == '\x01') {
    uVar3 = *(undefined4 *)(param_1 + 0x8b0);
  }
  else {
    uVar3 = 0xff;
  }
  if (*(char *)(param_1 + 0x8c0) == '\x01') {
    uVar3 = *(undefined4 *)(param_1 + 0x8bc);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x140));
  return uVar3;
}


// ===== 009a7488  FUN_009a7488 =====

bool FUN_009a7488(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  
  lVar1 = FUN_0099d9f4(param_2,param_3,param_4,param_5);
  if (lVar1 != 0) {
    (**(code **)(*param_1 + 0xe8))(param_1,lVar1);
  }
  return lVar1 != 0;
}


// ===== 009a74e4  FUN_009a74e4 =====

bool FUN_009a74e4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = FUN_0099da88(param_2,param_3,param_4);
  if (lVar1 != 0) {
    (**(code **)(*param_1 + 0xe8))(param_1,lVar1);
  }
  return lVar1 != 0;
}


// ===== 009a753c  FUN_009a753c =====

ulong FUN_009a753c(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x118));
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x140));
  plVar4 = *(long **)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = param_2;
  FUN_009a75e4(param_1,1);
  plVar5 = *(long **)(param_1 + 0xc0);
  uVar2 = FUN_00625b64();
  (**(code **)(*plVar5 + 0x10))(plVar5,param_1 + 0x778,uVar2);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x140));
  uVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x118));
  if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x009a75cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar4 + 8))(plVar4);
    return uVar3;
  }
  return (ulong)uVar1;
}


// ===== 009a75e4  FUN_009a75e4 =====

/* WARNING: Removing unreachable block (ram,0x009a78b4) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009a75e4(long param_1,ulong param_2)

{
  undefined1 *puVar1;
  undefined8 *******pppppppuVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  long *plVar5;
  ulong uVar6;
  void *local_b8;
  undefined8 uStack_b0;
  long local_a8;
  ulong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 *******local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  void *pvStack_68;
  undefined8 uStack_60;
  long local_58;
  undefined8 *******local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  if (*(long *)(param_1 + 0xc0) != 0) {
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_005d3510(&local_50,&DAT_001b3348);
    if (*(long *)(param_1 + 0x718) != 0) {
      FUN_00547cac(&local_50,"CapturePostProcessor;",0x15);
    }
    if (*(long *)(param_1 + 0x720) != 0) {
      FUN_00547cac(&local_50,"RenderPreProcessor;",0x13);
    }
    if (*(char *)(param_1 + 0x709) == '\x01') {
      FUN_00547cac(&local_50,"EchoController;",0xf);
    }
    if (*(char *)(param_1 + 0x1fc) == '\x01') {
      FUN_00547cac(&local_50,"GainController2;",0x10);
    }
    if (*(long *)(param_1 + 0x770) != 0) {
      FUN_00547cac(&local_50,"NeuralResidualEchoEstimator;",0x1c);
    }
    uStack_98 = _UNK_0022b568;
    local_a0 = _DAT_0022b560;
    uStack_88 = _UNK_0022b578;
    local_90 = _DAT_0022b570;
    puStack_78 = _UNK_0022b588;
    local_80 = _DAT_0022b580;
    pvStack_68 = _UNK_0022b598;
    local_70 = _DAT_0022b590;
    local_58 = _UNK_0022b5a8;
    uStack_60 = _DAT_0022b5a0;
    FUN_009a888c(&local_a0);
    plVar5 = *(long **)(param_1 + 0x738);
    local_a0 = CONCAT71((int7)(local_a0 >> 8),*(undefined1 *)(param_1 + 0x196)) & 0xff00ff;
    uStack_98 = CONCAT71(uStack_98._1_7_,plVar5 != (long *)0x0);
    if (plVar5 == (long *)0x0) {
      uStack_98 = uStack_98 & 0xffffffff;
      uVar3 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar5 + 0x18))();
      plVar5 = *(long **)(param_1 + 0x738);
      uStack_98 = CONCAT44(uVar4,(undefined4)uStack_98);
      if (plVar5 == (long *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar5 + 0x48))(plVar5);
      }
    }
    local_90 = CONCAT71(local_90._1_7_,uVar3) & 0xffffffffffffff01;
    uVar6 = local_90;
    local_90._3_5_ = SUB85(uVar6,3);
    local_90._0_3_ =
         CONCAT12(*(undefined1 *)(param_1 + 0x19c),
                  CONCAT11(*(undefined1 *)(param_1 + 0x194),(undefined1)local_90));
    uStack_88._0_2_ = CONCAT11(*(long *)(param_1 + 0x730) != 0,(undefined1)uStack_88);
    local_90 = CONCAT44(*(undefined4 *)(param_1 + 0x1a0),(undefined4)local_90);
    if ((long)local_70 < 0) {
      puVar1 = puStack_48;
      pppppppuVar2 = local_50;
      if (-1 < (long)local_40) {
        puVar1 = (undefined1 *)((ulong)local_40 >> 0x38);
        pppppppuVar2 = &local_50;
      }
      FUN_00547f08(&local_80,pppppppuVar2,puVar1);
    }
    else if ((long)local_40 < 0) {
      FUN_00547fc0(&local_80,local_50,puStack_48);
    }
    else {
      puStack_78 = puStack_48;
      local_80 = local_50;
      local_70 = local_40;
    }
    uStack_88._0_3_ = CONCAT12(*(undefined1 *)(param_1 + 0x178),(undefined2)uStack_88);
    uStack_88 = CONCAT44(*(undefined4 *)(param_1 + 0x17c),(undefined4)uStack_88);
    FUN_009a8d54(&local_b8,param_1 + 0x168);
    if (local_58 < 0) {
      operator_delete(pvStack_68);
    }
    uStack_60 = uStack_b0;
    pvStack_68 = local_b8;
    local_58 = local_a8;
    if (((param_2 & 1) != 0) || (uVar6 = FUN_009a89d0(&local_a0,param_1 + 200), (uVar6 & 1) == 0)) {
      (**(code **)(**(long **)(param_1 + 0xc0) + 0x78))(*(long **)(param_1 + 0xc0),&local_a0);
      FUN_009a88ec(param_1 + 200,&local_a0);
    }
    if (local_58 < 0) {
      operator_delete(pvStack_68);
    }
    if ((long)local_70 < 0) {
      operator_delete(local_80);
    }
  }
  return;
}


// ===== 009a78c8  FUN_009a78c8 =====

ulong FUN_009a78c8(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x118));
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x140));
  plVar3 = *(long **)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x140));
  uVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x118));
  if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x009a7920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar3 + 8))(plVar3);
    return uVar2;
  }
  return (ulong)uVar1;
}


// ===== 009a7934  FUN_009a7934 =====

int FUN_009a7934(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x118));
  pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x140));
  uVar3 = *(undefined8 *)(param_2 + 0x1f0);
  uVar2 = *(undefined8 *)(param_2 + 0x1e8);
  uVar5 = *(undefined8 *)(param_2 + 0x200);
  uVar4 = *(undefined8 *)(param_2 + 0x1f8);
  uVar7 = *(undefined8 *)(param_2 + 0x210);
  uVar6 = *(undefined8 *)(param_2 + 0x208);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x218);
  param_1[0x15] = uVar7;
  param_1[0x14] = uVar6;
  param_1[0x11] = uVar3;
  param_1[0x10] = uVar2;
  param_1[0x13] = uVar5;
  param_1[0x12] = uVar4;
  uVar2 = *(undefined8 *)(param_2 + 0x1a8);
  uVar4 = *(undefined8 *)(param_2 + 0x1c0);
  uVar3 = *(undefined8 *)(param_2 + 0x1b8);
  param_1[9] = *(undefined8 *)(param_2 + 0x1b0);
  param_1[8] = uVar2;
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  uVar4 = *(undefined8 *)(param_2 + 0x1c8);
  uVar3 = *(undefined8 *)(param_2 + 0x1e0);
  uVar2 = *(undefined8 *)(param_2 + 0x1d8);
  param_1[0xd] = *(undefined8 *)(param_2 + 0x1d0);
  param_1[0xc] = uVar4;
  param_1[0xf] = uVar3;
  param_1[0xe] = uVar2;
  uVar4 = *(undefined8 *)(param_2 + 0x168);
  uVar3 = *(undefined8 *)(param_2 + 0x180);
  uVar2 = *(undefined8 *)(param_2 + 0x178);
  param_1[1] = *(undefined8 *)(param_2 + 0x170);
  *param_1 = uVar4;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar4 = *(undefined8 *)(param_2 + 0x188);
  uVar3 = *(undefined8 *)(param_2 + 0x1a0);
  uVar2 = *(undefined8 *)(param_2 + 0x198);
  param_1[5] = *(undefined8 *)(param_2 + 400);
  param_1[4] = uVar4;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x140));
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x118));
  return iVar1;
}


// ===== 009a79b4  FUN_009a79b4 =====

void FUN_009a79b4(pthread_mutex_t *param_1)

{
  void *pvVar1;
  undefined1 *local_28;
  
  local_28 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_28);
  pthread_mutex_init(param_1,(pthread_mutexattr_t *)&local_28);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_28);
  FUN_0065f054(param_1 + 1);
  param_1[4].__align = 0;
  *(undefined8 *)((long)param_1 + 0xa8) = 0;
  *(undefined8 *)((long)param_1 + 0xb0) = 0;
  pvVar1 = operator_new(0x70);
  *(void **)((long)param_1 + 0xb8) = pvVar1;
  *(void **)((long)param_1 + 0xc0) = pvVar1;
  param_1[5].__align = (long)pvVar1 + 0x70;
  if (pvVar1 != (void *)0x0) {
    FUN_0065f054();
    *(long *)((long)param_1 + 0xc0) = (long)pvVar1 + 0x70;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 009a7a48  FUN_009a7a48 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_009a7a48(undefined8 param_1,pthread_mutex_t *param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long local_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long local_40;
  long lStack_38;
  
  pthread_mutex_lock(param_2);
  if (*(long *)((long)param_2 + 0xb0) != 0) {
    if ((ulong)((*(long *)((long)param_2 + 0xc0) - *(long *)((long)param_2 + 0xb8) >> 4) *
               0x6db6db6db6db6db7) <= *(ulong *)((long)param_2 + 0xa8)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                );
    }
    plVar2 = (long *)(*(long *)((long)param_2 + 0xb8) + *(ulong *)((long)param_2 + 0xa8) * 0x70);
    lStack_38 = _UNK_0022b628;
    local_40 = _DAT_0022b620;
    lStack_58 = _UNK_0022b608;
    local_60 = _DAT_0022b600;
    lStack_48 = _UNK_0022b618;
    lStack_50 = _DAT_0022b610;
    lStack_98 = _UNK_0022b5c8;
    local_a0 = _DAT_0022b5c0;
    lStack_88 = _UNK_0022b5d8;
    lStack_90 = _DAT_0022b5d0;
    lStack_78 = _UNK_0022b5e8;
    local_80 = _DAT_0022b5e0;
    lStack_68 = _UNK_0022b5f8;
    lStack_70 = _DAT_0022b5f0;
    FUN_0065f0a0(&local_a0,param_2 + 1);
    lVar5 = plVar2[5];
    lVar4 = plVar2[4];
    lVar3 = plVar2[6];
    lVar7 = plVar2[1];
    lVar6 = *plVar2;
    lVar9 = plVar2[3];
    lVar8 = plVar2[2];
    *(long *)((long)param_2 + 0x60) = plVar2[7];
    *(long *)((long)param_2 + 0x58) = lVar3;
    param_2[2].__align = lVar5;
    *(long *)((long)param_2 + 0x48) = lVar4;
    *(long *)((long)param_2 + 0x40) = lVar9;
    *(long *)((long)param_2 + 0x38) = lVar8;
    *(long *)((long)param_2 + 0x30) = lVar7;
    param_2[1].__align = lVar6;
    lVar6 = plVar2[0xb];
    lVar5 = plVar2[10];
    lVar4 = plVar2[0xd];
    lVar3 = plVar2[0xc];
    lVar7 = plVar2[8];
    *(long *)((long)param_2 + 0x70) = plVar2[9];
    *(long *)((long)param_2 + 0x68) = lVar7;
    *(long *)((long)param_2 + 0x90) = lVar4;
    *(long *)((long)param_2 + 0x88) = lVar3;
    *(long *)((long)param_2 + 0x80) = lVar6;
    param_2[3].__align = lVar5;
    plVar2[0xd] = lStack_38;
    plVar2[0xc] = local_40;
    plVar2[9] = lStack_58;
    plVar2[8] = local_60;
    plVar2[0xb] = lStack_48;
    plVar2[10] = lStack_50;
    plVar2[5] = lStack_78;
    plVar2[4] = local_80;
    plVar2[7] = lStack_68;
    plVar2[6] = lStack_70;
    plVar2[1] = lStack_98;
    *plVar2 = local_a0;
    plVar2[3] = lStack_88;
    plVar2[2] = lStack_90;
    FUN_0065f0c8(&local_a0);
    FUN_00d0f800(0xffffffffffffffff,(long)param_2 + 0xb0);
    lVar3 = 0;
    if (*(long *)((long)param_2 + 0xa8) + 1 !=
        (*(long *)((long)param_2 + 0xc0) - *(long *)((long)param_2 + 0xb8) >> 4) *
        0x6db6db6db6db6db7) {
      lVar3 = *(long *)((long)param_2 + 0xa8) + 1;
    }
    *(long *)((long)param_2 + 0xa8) = lVar3;
  }
  FUN_0065f0a0(param_1,param_2 + 1);
  iVar1 = pthread_mutex_unlock(param_2);
  return iVar1;
}


// ===== 009a7ba4  FUN_009a7ba4 =====

/* WARNING: Removing unreachable block (ram,0x009a7c28) */

ulong FUN_009a7ba4(uint *param_1,uint *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar2 = *param_1;
  if ((int)uVar2 < 0) {
    uVar7 = 2;
    uVar6 = *param_2;
joined_r0x009a7bd8:
    if (-1 < (int)uVar6) goto LAB_009a7bdc;
LAB_009a7c0c:
    uVar8 = 2;
    uVar9 = 2;
    uVar3 = uVar7 | 2;
joined_r0x009a7c14:
    if (uVar3 == 0) {
LAB_009a7c60:
      uVar9 = uVar8;
      if (*(long *)(param_2 + 2) == 1) {
        return 0x300000000;
      }
      if (*(long *)(param_2 + 2) == *(long *)(param_1 + 2)) {
        return 0x300000000;
      }
    }
  }
  else {
    if (*(long *)(param_1 + 2) == 0) {
      uVar7 = 3;
      uVar6 = *param_2;
      goto joined_r0x009a7bd8;
    }
    if (uVar2 >> 6 < 0x7d) {
      uVar7 = 1;
      uVar6 = *param_2;
      goto joined_r0x009a7bd8;
    }
    uVar7 = (uint)(0x5dc00 < uVar2);
    uVar6 = *param_2;
    if ((int)uVar6 < 0) goto LAB_009a7c0c;
LAB_009a7bdc:
    if (*(long *)(param_2 + 2) != 0) {
      if (uVar6 >> 6 < 0x7d) {
        uVar8 = 1;
        uVar9 = 1;
        uVar3 = uVar7 | 1;
        goto joined_r0x009a7c14;
      }
      bVar1 = 0x5dc00 < uVar6;
      uVar9 = (uint)bVar1;
      uVar8 = (uint)bVar1;
      if (bVar1 || uVar7 != 0) goto LAB_009a7c7c;
      goto LAB_009a7c60;
    }
    uVar9 = 3;
  }
LAB_009a7c7c:
  if (uVar7 - 1 < 2) {
    if (1 < uVar9) {
      uVar4 = 0xfffffff9;
      uVar5 = 3;
      goto LAB_009a7d0c;
    }
    uVar4 = 0xfffffff9;
    if (uVar7 < 2) goto LAB_009a7cec;
  }
  else {
    if (uVar7 != 0) {
      uVar5 = 2;
      if (1 < uVar9) {
        uVar5 = 3;
      }
      uVar4 = 0xfffffff7;
      goto LAB_009a7d0c;
    }
    if (uVar9 - 1 < 2) {
      uVar4 = 0xfffffff9;
      if (1 < uVar9) {
        uVar5 = 3;
        goto LAB_009a7d0c;
      }
    }
    else {
      uVar4 = 0xfffffff7;
      if (uVar9 != 0) {
        uVar5 = (ulong)uVar9;
        goto LAB_009a7d0c;
      }
    }
LAB_009a7cec:
    if (uVar2 == uVar6) {
      uVar5 = (ulong)(*(long *)(param_1 + 2) != *(long *)(param_2 + 2));
      goto LAB_009a7d0c;
    }
  }
  uVar5 = 2;
LAB_009a7d0c:
  return uVar4 | uVar5 << 0x20;
}


// ===== 009a7d24  FUN_009a7d24 =====

undefined4 *
FUN_009a7d24(long *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,long param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  size_t sVar5;
  size_t __n;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
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
        FUN_0062a99c();
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
      puVar17 = (undefined4 *)((long)pvVar3 + ((long)param_2 - lVar19));
      puVar7 = puVar17;
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
             (0x1f < (ulong)((((long)pvVar3 + (long)param_2) - (long)param_3) - lVar19))) {
            uVar6 = uVar1 + 1 & 7;
            uVar16 = 8;
            if (uVar6 != 0) {
              uVar16 = uVar6;
            }
            lVar9 = (uVar1 + 1) - uVar16;
            puVar7 = param_3 + lVar9;
            puVar18 = puVar17 + lVar9;
            puVar14 = (undefined8 *)((long)pvVar3 + ((long)param_2 - lVar19) + 0x10);
            puVar15 = (undefined8 *)(param_3 + 4);
            do {
              puVar2 = puVar15 + -1;
              uVar20 = puVar15[-2];
              uVar22 = puVar15[1];
              uVar21 = *puVar15;
              lVar9 = lVar9 + -8;
              puVar15 = puVar15 + 4;
              puVar14[-1] = *puVar2;
              puVar14[-2] = uVar20;
              puVar14[1] = uVar22;
              *puVar14 = uVar21;
              puVar14 = puVar14 + 4;
              param_3 = puVar7;
            } while (lVar9 != 0);
          }
        }
        do {
          if (puVar18 == (undefined4 *)0x0) goto LAB_009a80e8;
          puVar7 = puVar18 + 1;
          *puVar18 = *param_3;
          puVar18 = puVar7;
          param_3 = param_3 + 1;
        } while (puVar7 != puVar17 + param_5);
        puVar18 = (undefined4 *)param_1[1];
        puVar7 = puVar17 + param_5;
      }
      memcpy(puVar7,param_2,(long)puVar18 - (long)param_2);
      lVar19 = param_1[1];
      param_1[1] = (long)param_2;
      sVar5 = (long)param_2 - *param_1;
      memcpy((void *)((long)puVar17 - sVar5),(void *)*param_1,sVar5);
      pvVar4 = (void *)*param_1;
      *param_1 = (long)puVar17 - sVar5;
      param_1[1] = (long)puVar7 + (lVar19 - (long)param_2);
      param_1[2] = (long)((long)pvVar3 + uVar10 * 4);
      if (pvVar4 != (void *)0x0) {
        operator_delete(pvVar4);
      }
    }
    else {
      sVar5 = (long)puVar18 - (long)param_2;
      if ((long)sVar5 >> 2 < param_5) {
        puVar7 = (undefined4 *)((long)param_3 + sVar5);
        puVar12 = puVar18;
        if (puVar7 != param_4) {
          uVar6 = ((((long)param_4 + (long)param_2) - (long)param_3) - (long)puVar18) - 4;
          uVar10 = uVar6 >> 2;
          uVar1 = uVar10;
          if ((ulong)-(long)puVar18 >> 2 <= uVar10) {
            uVar1 = (ulong)-(long)puVar18 >> 2;
          }
          puVar11 = puVar18;
          puVar13 = puVar18;
          if (0x2f < uVar1) {
            uVar16 = (ulong)-(long)puVar18 >> 2;
            if (uVar16 <= uVar10) {
              uVar10 = uVar16;
            }
            if ((((((uint)uVar6 | (uint)-(long)puVar18) & 3) == 0) && (puVar18 <= puVar18 + uVar10))
               && ((puVar7 <= puVar7 + uVar10 && (0x1f < (ulong)((long)param_2 - (long)param_3)))))
            {
              uVar10 = uVar1 + 1 & 7;
              uVar6 = 8;
              if (uVar10 != 0) {
                uVar6 = uVar10;
              }
              puVar14 = (undefined8 *)(puVar18 + 4);
              lVar19 = (uVar1 + 1) - uVar6;
              puVar15 = (undefined8 *)((long)param_3 + ((long)puVar14 - (long)param_2));
              puVar7 = puVar7 + lVar19;
              puVar11 = puVar18 + lVar19;
              do {
                puVar2 = puVar15 + -1;
                uVar20 = puVar15[-2];
                uVar22 = puVar15[1];
                uVar21 = *puVar15;
                lVar19 = lVar19 + -8;
                puVar15 = puVar15 + 4;
                puVar14[-1] = *puVar2;
                puVar14[-2] = uVar20;
                puVar14[1] = uVar22;
                *puVar14 = uVar21;
                puVar14 = puVar14 + 4;
                puVar13 = puVar11;
              } while (lVar19 != 0);
            }
          }
          do {
            if (puVar13 == (undefined4 *)0x0) goto LAB_009a80e8;
            puVar8 = puVar7 + 1;
            *puVar13 = *puVar7;
            puVar7 = puVar8;
            puVar12 = puVar11 + 1;
            puVar11 = puVar11 + 1;
            puVar13 = puVar13 + 1;
          } while (puVar8 != param_4);
        }
        param_1[1] = (long)puVar12;
        if ((long)sVar5 >> 2 < 1) {
          return param_2;
        }
        puVar11 = puVar12;
        for (puVar7 = puVar12 + -param_5; puVar7 < puVar18; puVar7 = puVar7 + 1) {
          if (puVar11 == (undefined4 *)0x0) {
LAB_009a80e8:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          *puVar11 = *puVar7;
          puVar11 = puVar11 + 1;
        }
        param_1[1] = (long)puVar11;
        __n = (long)puVar12 + (param_5 * -4 - (long)param_2);
        memmove((void *)((long)puVar12 - __n),param_2,__n);
      }
      else {
        sVar5 = param_5 * 4;
        puVar7 = puVar18;
        for (puVar12 = puVar18 + -param_5; puVar12 < puVar18; puVar12 = puVar12 + 1) {
          if (puVar7 == (undefined4 *)0x0) goto LAB_009a80e8;
          *puVar7 = *puVar12;
          puVar7 = puVar7 + 1;
        }
        param_1[1] = (long)puVar7;
        memmove((void *)((long)puVar18 - ((long)puVar18 - (long)(param_2 + param_5))),param_2,
                (long)puVar18 - (long)(param_2 + param_5));
      }
      memmove(param_2,param_3,sVar5);
    }
  }
  return puVar17;
}


// ===== 009a8104  FUN_009a8104 =====

void FUN_009a8104(undefined8 param_1,void *param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  if (param_2 == (void *)0x0) {
    return;
  }
  puVar7 = *(undefined8 **)((long)param_2 + 0x20);
  if (puVar7 != (undefined8 *)0x0) {
    puVar2 = puVar7;
    puVar3 = *(undefined8 **)((long)param_2 + 0x28);
    if (puVar7 != *(undefined8 **)((long)param_2 + 0x28)) {
      do {
        puVar2 = puVar3 + -3;
        if (puVar2 == (undefined8 *)0x0) {
LAB_009a8208:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        pvVar1 = (void *)*puVar2;
        if (pvVar1 != (void *)0x0) {
          pvVar4 = (void *)puVar3[-2];
          uVar6 = (ulong)((long)pvVar4 + ((long)pvVar4 << 0x3f) + -2) >> 1;
          uVar5 = (ulong)(((long)pvVar1 - (long)pvVar4 << 0x3f) - ((long)pvVar1 - (long)pvVar4)) >>
                  1;
          if (uVar6 <= uVar5) {
            uVar5 = uVar6;
          }
          if ((1 < uVar5) && ((((int)pvVar1 - (uint)pvVar4 | (uint)pvVar4) & 1) == 0)) {
            uVar5 = uVar5 & 0x7ffffffffffffffe;
            pvVar4 = (void *)((long)pvVar4 + uVar5 * -2);
            do {
              uVar5 = uVar5 - 2;
            } while (uVar5 != 0);
          }
          while (pvVar4 != pvVar1) {
            pvVar4 = (void *)((long)pvVar4 + -2);
            if (pvVar4 == (void *)0x0) goto LAB_009a8208;
          }
          puVar3[-2] = pvVar1;
          operator_delete(pvVar1);
        }
        puVar3 = puVar2;
      } while (puVar7 != puVar2);
      puVar2 = *(undefined8 **)((long)param_2 + 0x20);
    }
    *(undefined8 **)((long)param_2 + 0x28) = puVar7;
    operator_delete(puVar2);
  }
  operator_delete(param_2);
  return;
}


// ===== 009a821c  FUN_009a821c =====

void FUN_009a821c(undefined8 param_1,void *param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  if (param_2 == (void *)0x0) {
    return;
  }
  puVar7 = *(undefined8 **)((long)param_2 + 0x20);
  if (puVar7 != (undefined8 *)0x0) {
    puVar2 = puVar7;
    puVar3 = *(undefined8 **)((long)param_2 + 0x28);
    if (puVar7 != *(undefined8 **)((long)param_2 + 0x28)) {
      do {
        puVar2 = puVar3 + -3;
        if (puVar2 == (undefined8 *)0x0) {
LAB_009a8328:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        pvVar1 = (void *)*puVar2;
        if (pvVar1 != (void *)0x0) {
          pvVar4 = (void *)puVar3[-2];
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
            if (pvVar4 == (void *)0x0) goto LAB_009a8328;
          }
          puVar3[-2] = pvVar1;
          operator_delete(pvVar1);
        }
        puVar3 = puVar2;
      } while (puVar7 != puVar2);
      puVar2 = *(undefined8 **)((long)param_2 + 0x20);
    }
    *(undefined8 **)((long)param_2 + 0x28) = puVar7;
    operator_delete(puVar2);
  }
  operator_delete(param_2);
  return;
}


// ===== 009a833c  FUN_009a833c =====

void FUN_009a833c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  puVar4 = (undefined8 *)*param_2;
  if (puVar4 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)param_2[1];
    puVar1 = puVar4;
    if (puVar4 != puVar2) {
      do {
        puVar2 = puVar2 + -1;
        if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        pvVar3 = (void *)*puVar2;
        *puVar2 = 0;
        if (pvVar3 != (void *)0x0) {
          FUN_00660bb8(pvVar3);
          operator_delete(pvVar3);
        }
      } while (puVar2 != puVar4);
      puVar1 = (undefined8 *)*param_2;
    }
    param_2[1] = puVar4;
    operator_delete(puVar1);
  }
  operator_delete(param_2);
  return;
}


// ===== 009a8404  FUN_009a8404 =====

void FUN_009a8404(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (*(long *)(param_1 + 0xb8) != 0) {
    FUN_009a8770();
    operator_delete(*(void **)(param_1 + 0xb8));
  }
  pvVar1 = *(void **)(param_1 + 0xa0);
  if (pvVar1 == (void *)0x0) {
LAB_009a84b4:
    pvVar1 = *(void **)(param_1 + 0x88);
    if (pvVar1 == (void *)0x0) {
LAB_009a8534:
      pvVar1 = *(void **)(param_1 + 0x70);
      if (pvVar1 == (void *)0x0) {
LAB_009a85b4:
        pvVar1 = *(void **)(param_1 + 0x58);
        if (pvVar1 == (void *)0x0) {
LAB_009a8644:
          pvVar1 = *(void **)(param_1 + 0x38);
          if (pvVar1 == (void *)0x0) {
LAB_009a86c4:
            pvVar1 = *(void **)(param_1 + 0x20);
            if (pvVar1 == (void *)0x0) {
              return;
            }
            pvVar2 = *(void **)(param_1 + 0x28);
            uVar4 = (ulong)((long)pvVar2 + (-8 - ((long)pvVar2 << 0x3d))) >> 3;
            uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3d) - ((long)pvVar1 - (long)pvVar2))
                    >> 3;
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
                *(void **)(param_1 + 0x28) = pvVar1;
                operator_delete(pvVar1);
                return;
              }
              pvVar2 = (void *)((long)pvVar2 + -8);
            } while (pvVar2 != (void *)0x0);
          }
          else {
            pvVar2 = *(void **)(param_1 + 0x40);
            uVar4 = (ulong)((long)pvVar2 + (-4 - ((long)pvVar2 << 0x3e))) >> 2;
            uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3e) - ((long)pvVar1 - (long)pvVar2))
                    >> 2;
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
            do {
              if (pvVar2 == pvVar1) {
                *(void **)(param_1 + 0x40) = pvVar1;
                operator_delete(pvVar1);
                goto LAB_009a86c4;
              }
              pvVar2 = (void *)((long)pvVar2 + -4);
            } while (pvVar2 != (void *)0x0);
          }
        }
        else {
          pvVar2 = *(void **)(param_1 + 0x60);
          uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2) * 0x15555555555555) >> 10;
          uVar4 = (long)pvVar2 * -0x15555555555555 - 0x400U >> 10;
          if (uVar4 <= uVar3) {
            uVar3 = uVar4;
          }
          if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 0x3ffU) == 0)) {
            uVar3 = uVar3 & 0x3ffffffffffffe;
            pvVar2 = (void *)((long)pvVar2 + uVar3 * -0xc00);
            do {
              uVar3 = uVar3 - 2;
            } while (uVar3 != 0);
          }
          do {
            if (pvVar2 == pvVar1) {
              *(void **)(param_1 + 0x60) = pvVar1;
              operator_delete(pvVar1);
              goto LAB_009a8644;
            }
            pvVar2 = (void *)((long)pvVar2 + -0xc00);
          } while (pvVar2 != (void *)0x0);
        }
      }
      else {
        pvVar2 = *(void **)(param_1 + 0x78);
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
        do {
          if (pvVar2 == pvVar1) {
            *(void **)(param_1 + 0x78) = pvVar1;
            operator_delete(pvVar1);
            goto LAB_009a85b4;
          }
          pvVar2 = (void *)((long)pvVar2 + -4);
        } while (pvVar2 != (void *)0x0);
      }
    }
    else {
      pvVar2 = *(void **)(param_1 + 0x90);
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
      do {
        if (pvVar2 == pvVar1) {
          *(void **)(param_1 + 0x90) = pvVar1;
          operator_delete(pvVar1);
          goto LAB_009a8534;
        }
        pvVar2 = (void *)((long)pvVar2 + -4);
      } while (pvVar2 != (void *)0x0);
    }
  }
  else {
    pvVar2 = *(void **)(param_1 + 0xa8);
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
    do {
      if (pvVar2 == pvVar1) {
        *(void **)(param_1 + 0xa8) = pvVar1;
        operator_delete(pvVar1);
        goto LAB_009a84b4;
      }
      pvVar2 = (void *)((long)pvVar2 + -4);
    } while (pvVar2 != (void *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 009a8770  FUN_009a8770 =====

void FUN_009a8770(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  void *pvVar5;
  undefined8 *puVar6;
  
  puVar6 = *(undefined8 **)(param_1 + 8);
  while( true ) {
    if (param_2 == puVar6) {
      *(undefined8 **)(param_1 + 8) = param_2;
      return;
    }
    puVar6 = puVar6 + -1;
    if (puVar6 == (undefined8 *)0x0) break;
    pvVar5 = (void *)*puVar6;
    *puVar6 = 0;
    if (pvVar5 != (void *)0x0) {
      pvVar1 = *(void **)((long)pvVar5 + 0x5610);
      if (pvVar1 != (void *)0x0) {
        pvVar2 = *(void **)((long)pvVar5 + 0x5618);
        uVar4 = (long)pvVar2 * -0x155555555555555 - 0x80U >> 7;
        uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2) * 0x155555555555555) >> 7;
        if (uVar4 <= uVar3) {
          uVar3 = uVar4;
        }
        if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 0x7fU) == 0)) {
          uVar3 = uVar3 & 0x1fffffffffffffe;
          pvVar2 = (void *)((long)pvVar2 + uVar3 * -0x180);
          do {
            uVar3 = uVar3 - 2;
          } while (uVar3 != 0);
        }
        while (pvVar2 != pvVar1) {
          pvVar2 = (void *)((long)pvVar2 + -0x180);
          if (pvVar2 == (void *)0x0) goto LAB_009a8858;
        }
        *(void **)((long)pvVar5 + 0x5618) = pvVar1;
        operator_delete(pvVar1);
      }
      operator_delete(pvVar5);
    }
  }
LAB_009a8858:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 009a888c  FUN_009a888c =====

void FUN_009a888c(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)((long)param_1 + 0xf) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)((long)param_1 + 0x17) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0x3f800000;
  FUN_005d3510(param_1 + 4,&DAT_001b3348);
  FUN_005d3510(param_1 + 7,&DAT_001b3348);
  return;
}


// ===== 009a88ec  FUN_009a88ec =====

undefined8 * FUN_009a88ec(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  if (param_1 != param_2) {
    bVar2 = *(byte *)((long)param_2 + 0x37);
    if (*(char *)((long)param_1 + 0x37) < '\0') {
      uVar1 = param_2[5];
      puVar3 = (undefined8 *)param_2[4];
      if (-1 < (char)bVar2) {
        uVar1 = (ulong)bVar2;
        puVar3 = param_2 + 4;
      }
      FUN_00547f08(param_1 + 4,puVar3,uVar1);
    }
    else if ((char)bVar2 < '\0') {
      FUN_00547fc0(param_1 + 4,param_2[4],param_2[5]);
    }
    else {
      uVar5 = param_2[5];
      uVar4 = param_2[4];
      param_1[6] = param_2[6];
      param_1[5] = uVar5;
      param_1[4] = uVar4;
    }
    bVar2 = *(byte *)((long)param_2 + 0x4f);
    if (*(char *)((long)param_1 + 0x4f) < '\0') {
      uVar1 = param_2[8];
      puVar3 = (undefined8 *)param_2[7];
      if (-1 < (char)bVar2) {
        uVar1 = (ulong)bVar2;
        puVar3 = param_2 + 7;
      }
      FUN_00547f08(param_1 + 7,puVar3,uVar1);
    }
    else if ((char)bVar2 < '\0') {
      FUN_00547fc0(param_1 + 7,param_2[7],param_2[8]);
    }
    else {
      uVar5 = param_2[8];
      uVar4 = param_2[7];
      param_1[9] = param_2[9];
      param_1[8] = uVar5;
      param_1[7] = uVar4;
    }
  }
  return param_1;
}


// ===== 009a89d0  FUN_009a89d0 =====

undefined8 FUN_009a89d0(char *param_1,char *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
      (((param_1[3] == param_2[3] && (*(int *)(param_1 + 4) == *(int *)(param_2 + 4))) &&
       ((param_1[8] == param_2[8] &&
        ((*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc) && (param_1[0x10] == param_2[0x10])))))
       ))) && ((param_1[0x11] == param_2[0x11] &&
               (((((param_1[0x12] == param_2[0x12] &&
                   (*(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x14))) &&
                  (param_1[0x18] == param_2[0x18])) &&
                 ((param_1[0x19] == param_2[0x19] && (param_1[0x1a] == param_2[0x1a])))) &&
                ((*(float *)(param_1 + 0x1c) == *(float *)(param_2 + 0x1c) &&
                 (uVar1 = FUN_005f0614(param_1 + 0x20,param_2 + 0x20), (uVar1 & 1) != 0)))))))) {
    uVar2 = FUN_005f0614(param_1 + 0x38,param_2 + 0x38);
    return uVar2;
  }
  return 0;
}


// ===== 009a8b14  FUN_009a8b14 =====

bool FUN_009a8b14(char *param_1,char *param_2)

{
  if (((((((*param_1 == *param_2) && (*(int *)(param_1 + 4) == *(int *)(param_2 + 4))) &&
         (*(int *)(param_1 + 8) == *(int *)(param_2 + 8))) &&
        ((*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc) && (param_1[0x10] == param_2[0x10]))))
       && ((param_1[0x14] == param_2[0x14] &&
           ((*(int *)(param_1 + 0x18) == *(int *)(param_2 + 0x18) &&
            (*(int *)(param_1 + 0x1c) == *(int *)(param_2 + 0x1c))))))) &&
      (param_1[0x20] == param_2[0x20])) &&
     (((((*(int *)(param_1 + 0x24) == *(int *)(param_2 + 0x24) &&
         (*(float *)(param_1 + 0x28) == *(float *)(param_2 + 0x28))) &&
        (*(int *)(param_1 + 0x2c) == *(int *)(param_2 + 0x2c))) &&
       (((*(int *)(param_1 + 0x34) == *(int *)(param_2 + 0x34) &&
         (*(int *)(param_1 + 0x38) == *(int *)(param_2 + 0x38))) &&
        ((*(int *)(param_1 + 0x3c) == *(int *)(param_2 + 0x3c) &&
         ((*(int *)(param_1 + 0x40) == *(int *)(param_2 + 0x40) &&
          (*(float *)(param_1 + 0x44) == *(float *)(param_2 + 0x44))))))))) &&
      (*(float *)(param_1 + 0x48) == *(float *)(param_2 + 0x48))))) {
    return param_1[0x4c] == param_2[0x4c];
  }
  return false;
}


// ===== 009a8c54  FUN_009a8c54 =====

bool FUN_009a8c54(char *param_1,char *param_2)

{
  if (((((*param_1 == *param_2) && (*(float *)(param_1 + 0x1c) == *(float *)(param_2 + 0x1c))) &&
       (param_1[4] == param_2[4])) &&
      ((*(float *)(param_1 + 8) == *(float *)(param_2 + 8) &&
       (*(float *)(param_1 + 0xc) == *(float *)(param_2 + 0xc))))) &&
     ((*(float *)(param_1 + 0x10) == *(float *)(param_2 + 0x10) &&
      ((*(float *)(param_1 + 0x14) == *(float *)(param_2 + 0x14) &&
       (*(float *)(param_1 + 0x18) == *(float *)(param_2 + 0x18))))))) {
    return param_1[1] == param_2[1];
  }
  return false;
}


// ===== 009a8cf4  FUN_009a8cf4 =====

bool FUN_009a8cf4(char *param_1,char *param_2)

{
  if ((((*param_1 == *param_2) && (*(float *)(param_1 + 4) == *(float *)(param_2 + 4))) &&
      (*(float *)(param_1 + 8) == *(float *)(param_2 + 8))) && (param_1[0xc] == param_2[0xc])) {
    return *(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10);
  }
  return false;
}


// ===== 009a8d54  FUN_009a8d54 =====

void FUN_009a8d54(char *param_1,undefined4 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  char *__s;
  undefined8 uVar6;
  size_t __n;
  char *__dest;
  undefined8 uVar7;
  char local_890 [6];
  char cStack_88a;
  char cStack_889;
  undefined4 local_888;
  char local_884;
  char cStack_883;
  char local_882;
  char local_881 [8];
  char cStack_879;
  void *local_878;
  char local_870 [15];
  char cStack_861;
  char *local_860;
  undefined1 *puStack_858;
  undefined1 *local_850;
  undefined1 auStack_848 [2048];
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  memset(auStack_848,0xaa,0x800);
  local_850 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_858 = &DAT_aaaaaaaaaaaaaaaa;
  local_860 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00622830(&local_860,auStack_848,0x800);
  uVar6 = FUN_006228b0(&local_860,
                       "AudioProcessing::Config{ pipeline: { maximum_internal_processing_rate: ",
                       0x47);
  uVar6 = FUN_00622910(uVar6,*param_2);
  uVar6 = FUN_006228b0(uVar6,", multi_channel_render: ",0x18);
  uVar6 = FUN_00622910(uVar6,*(undefined1 *)(param_2 + 1));
  uVar6 = FUN_006228b0(uVar6,", multi_channel_capture: ",0x19);
  uVar6 = FUN_00622910(uVar6,*(undefined1 *)((long)param_2 + 5));
  uVar6 = FUN_006228b0(uVar6," }, pre_amplifier: { enabled: ",0x1e);
  uVar6 = FUN_00622910(uVar6,*(undefined1 *)(param_2 + 4));
  FUN_006228b0(uVar6,", fixed_gain_factor: ",0x15);
  uVar6 = FUN_00622a34((char)param_2[5]);
  uVar6 = FUN_006228b0(uVar6," },capture_level_adjustment: { enabled: ",0x28);
  uVar6 = FUN_00622910(uVar6,*(undefined1 *)(param_2 + 6));
  FUN_006228b0(uVar6,", pre_gain_factor: ",0x13);
  uVar6 = FUN_00622a34((char)param_2[7]);
  FUN_006228b0(uVar6,", post_gain_factor: ",0x14);
  uVar6 = FUN_00622a34((char)param_2[8]);
  uVar6 = FUN_006228b0(uVar6,", analog_mic_gain_emulation: { enabled: ",0x28);
  uVar6 = FUN_00622910(uVar6,*(undefined1 *)(param_2 + 9));
  uVar6 = FUN_006228b0(uVar6,", initial_level: ",0x11);
  uVar6 = FUN_00622910(uVar6,param_2[10]);
  uVar6 = FUN_006228b0(uVar6," }}, high_pass_filter: { enabled: ",0x22);
  uVar6 = FUN_00622910(uVar6,*(undefined1 *)(param_2 + 0xb));
  uVar6 = FUN_006228b0(uVar6," }, echo_canceller: { enabled: ",0x1f);
  uVar6 = FUN_00622910(uVar6,*(undefined1 *)((long)param_2 + 0x2e));
  uVar6 = FUN_006228b0(uVar6,", enforce_high_pass_filtering: ",0x1f);
  uVar6 = FUN_00622910(uVar6,*(undefined1 *)(param_2 + 0xc));
  uVar6 = FUN_006228b0(uVar6," }, noise_suppression: { enabled: ",0x22);
  uVar6 = FUN_00622910(uVar6,*(undefined1 *)(param_2 + 0xd));
  uVar6 = FUN_006228b0(uVar6,", level: ",9);
  iVar3 = param_2[0xe];
  if (iVar3 < 2) {
    if (iVar3 != 0) {
      if (iVar3 != 1) goto LAB_009a9540;
      cStack_861 = '\b';
      if ((&local_878 < (void **)0x1b24a6) && ("Moderate" < local_870)) goto LAB_009a9510;
      local_878 = (void *)0x6574617265646f4d;
      goto LAB_009a8fb0;
    }
    cStack_861 = '\x03';
    if ((&local_878 < &UNK_001afa0f) && (&UNK_001afa0e < (undefined *)((ulong)&local_878 | 3)))
    goto LAB_009a9510;
    uVar7 = 3;
    uVar4 = 0x776f4c;
LAB_009a9030:
    local_878 = (void *)CONCAT44(local_878._4_4_,uVar4);
  }
  else {
    if (iVar3 == 2) {
      cStack_861 = '\x04';
      if ((&local_878 < &UNK_001eb823) && (&UNK_001eb822 < (undefined *)((ulong)&local_878 | 4)))
      goto LAB_009a9510;
      uVar7 = 4;
      local_878 = (void *)((ulong)local_878 & 0xffffff0000000000);
      uVar4 = 0x68676948;
      goto LAB_009a9030;
    }
    if (iVar3 != 3) goto LAB_009a9540;
    cStack_861 = '\b';
    if ((&local_878 < (void **)0x1afa13) && ("VeryHigh" < local_870)) goto LAB_009a9510;
    local_878 = (void *)0x6867694879726556;
LAB_009a8fb0:
    cStack_861 = '\b';
    uVar7 = 8;
    local_870[0] = '\0';
  }
  uVar6 = FUN_006228b0(uVar6,&local_878,uVar7);
  uVar6 = FUN_006228b0(uVar6," }, transient_suppression: { enabled: ",0x26);
  uVar6 = FUN_00622910(uVar6,*(undefined1 *)(param_2 + 0x10));
  uVar6 = FUN_006228b0(uVar6," }, gain_controller1: { enabled: ",0x21);
  uVar6 = FUN_00622910(uVar6,*(undefined1 *)(param_2 + 0x11));
  uVar6 = FUN_006228b0(uVar6,", mode: ",8);
  iVar3 = param_2[0x12];
  if (iVar3 == 2) {
    cStack_879 = '\f';
    if ((local_890 < "ixedDigital") && ("FixedDigital" < &local_884)) goto LAB_009a9510;
    uVar7 = 0xc;
    local_884 = '\0';
    local_888 = 0x6c617469;
    local_890 = SUB86(s_FixedDigital_001b83dd._0_8_,0);
    cStack_88a = SUB81(s_FixedDigital_001b83dd._0_8_,6);
    cStack_889 = SUB81(s_FixedDigital_001b83dd._0_8_,7);
  }
  else if (iVar3 == 1) {
    cStack_879 = '\x0f';
    if ((local_890 < "daptiveDigital") && ("AdaptiveDigital" < local_881)) goto LAB_009a9510;
    uVar7 = 0xf;
    local_881[0] = '\0';
    local_890 = SUB76(s_AdaptiveDigital_001aa193._0_7_,0);
    cStack_88a = SUB71(s_AdaptiveDigital_001aa193._0_7_,6);
    cStack_889 = s_AdaptiveDigital_001aa193[7];
    local_888 = (undefined4)s_AdaptiveDigital_001aa193._8_7_;
    local_884 = SUB71(s_AdaptiveDigital_001aa193._8_7_,4);
    cStack_883 = SUB71(s_AdaptiveDigital_001aa193._8_7_,5);
    local_882 = SUB71(s_AdaptiveDigital_001aa193._8_7_,6);
  }
  else {
    if (iVar3 != 0) {
LAB_009a9540:
                    /* WARNING: Subroutine does not return */
      FUN_0061ff28();
    }
    cStack_879 = '\x0e';
    if ((local_890 < "daptiveAnalog") && ("AdaptiveAnalog" < &local_882)) goto LAB_009a9510;
    uVar7 = 0xe;
    local_882 = '\0';
    local_890[0] = s_AdaptiveAnalog_001c6aa9[0];
    local_890[1] = s_AdaptiveAnalog_001c6aa9[1];
    local_890[2] = s_AdaptiveAnalog_001c6aa9[2];
    local_890[3] = s_AdaptiveAnalog_001c6aa9[3];
    local_890[4] = s_AdaptiveAnalog_001c6aa9[4];
    local_890[5] = s_AdaptiveAnalog_001c6aa9[5];
    cStack_88a = (char)s_AdaptiveAnalog_001c6aa9._6_2_;
    cStack_889 = SUB21(s_AdaptiveAnalog_001c6aa9._6_2_,1);
    local_888 = (undefined4)s_AdaptiveAnalog_001c6aa9._8_6_;
    local_884 = SUB61(s_AdaptiveAnalog_001c6aa9._8_6_,4);
    cStack_883 = SUB61(s_AdaptiveAnalog_001c6aa9._8_6_,5);
  }
  uVar6 = FUN_006228b0(uVar6,local_890,uVar7);
  uVar6 = FUN_006228b0(uVar6,", target_level_dbfs: ",0x15);
  uVar6 = FUN_00622910(uVar6,param_2[0x13]);
  uVar6 = FUN_006228b0(uVar6,", compression_gain_db: ",0x17);
  uVar6 = FUN_00622910(uVar6,param_2[0x14]);
  uVar6 = FUN_006228b0(uVar6,", enable_limiter: ",0x12);
  uVar6 = FUN_00622910(uVar6,*(undefined1 *)(param_2 + 0x15));
  uVar6 = FUN_006228b0(uVar6,", analog_gain_controller { enabled: ",0x24);
  uVar6 = FUN_00622910(uVar6,*(undefined1 *)(param_2 + 0x16));
  uVar6 = FUN_006228b0(uVar6,", startup_min_volume: ",0x16);
  uVar6 = FUN_00622910(uVar6,param_2[0x17]);
  uVar6 = FUN_006228b0(uVar6,", clipped_level_min: ",0x15);
  uVar6 = FUN_00622910(uVar6,param_2[0x18]);
  uVar6 = FUN_006228b0(uVar6,", enable_digital_adaptive: ",0x1b);
  uVar6 = FUN_00622910(uVar6,*(undefined1 *)(param_2 + 0x19));
  uVar6 = FUN_006228b0(uVar6,", clipped_level_step: ",0x16);
  uVar6 = FUN_00622910(uVar6,param_2[0x1a]);
  FUN_006228b0(uVar6,", clipped_ratio_threshold: ",0x1b);
  uVar6 = FUN_00622a34((char)param_2[0x1b]);
  uVar6 = FUN_006228b0(uVar6,", clipped_wait_frames: ",0x17);
  uVar6 = FUN_00622910(uVar6,param_2[0x1c]);
  uVar6 = FUN_006228b0(uVar6,", clipping_predictor:  { enabled: ",0x22);
  uVar6 = FUN_00622910(uVar6,*(undefined1 *)(param_2 + 0x1d));
  uVar6 = FUN_006228b0(uVar6,", mode: ",8);
  uVar6 = FUN_00622910(uVar6,param_2[0x1e]);
  uVar6 = FUN_006228b0(uVar6,", window_length: ",0x11);
  uVar6 = FUN_00622910(uVar6,param_2[0x1f]);
  uVar6 = FUN_006228b0(uVar6,", reference_window_length: ",0x1b);
  uVar6 = FUN_00622910(uVar6,param_2[0x20]);
  uVar6 = FUN_006228b0(uVar6,", reference_window_delay: ",0x1a);
  uVar6 = FUN_00622910(uVar6,param_2[0x21]);
  FUN_006228b0(uVar6,", clipping_threshold: ",0x16);
  uVar6 = FUN_00622a34((char)param_2[0x22]);
  FUN_006228b0(uVar6,", crest_factor_margin: ",0x17);
  uVar6 = FUN_00622a34((char)param_2[0x23]);
  uVar6 = FUN_006228b0(uVar6,", use_predicted_step: ",0x16);
  uVar6 = FUN_00622910(uVar6,*(undefined1 *)(param_2 + 0x24));
  uVar6 = FUN_006228b0(uVar6," }}}, gain_controller2: { enabled: ",0x23);
  uVar6 = FUN_00622910(uVar6,*(undefined1 *)(param_2 + 0x25));
  FUN_006228b0(uVar6,", fixed_digital: { gain_db: ",0x1c);
  uVar6 = FUN_00622a34((char)param_2[0x2c]);
  uVar6 = FUN_006228b0(uVar6," }, adaptive_digital: { enabled: ",0x21);
  uVar6 = FUN_00622910(uVar6,*(undefined1 *)(param_2 + 0x26));
  FUN_006228b0(uVar6,", headroom_db: ",0xf);
  uVar6 = FUN_00622a34((char)param_2[0x27]);
  FUN_006228b0(uVar6,", max_gain_db: ",0xf);
  uVar6 = FUN_00622a34((char)param_2[0x28]);
  FUN_006228b0(uVar6,", initial_gain_db: ",0x13);
  uVar6 = FUN_00622a34((char)param_2[0x29]);
  FUN_006228b0(uVar6,", max_gain_change_db_per_second: ",0x21);
  uVar6 = FUN_00622a34((char)param_2[0x2a]);
  FUN_006228b0(uVar6,", max_output_noise_level_dbfs: ",0x1f);
  uVar6 = FUN_00622a34((char)param_2[0x2b]);
  uVar6 = FUN_006228b0(uVar6," }, input_volume_control : { enabled ",0x25);
  uVar6 = FUN_00622910(uVar6,*(undefined1 *)((long)param_2 + 0x95));
  FUN_006228b0(uVar6,&DAT_001c01c8,2);
  if (cStack_879 < '\0') {
    operator_delete((void *)CONCAT17(cStack_889,CONCAT16(cStack_88a,local_890)));
  }
  __s = local_860;
  if (cStack_861 < '\0') {
    operator_delete(local_878);
    __s = local_860;
  }
  local_860 = __s;
  if (__s == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string:1063: libc++ Hardening assertion __s != nullptr failed: basic_string(const char*) detected nullptr\n"
              );
  }
  __n = strlen(__s);
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
  if ((__s < __dest) || (__dest + __n <= __s)) {
    memmove(__dest,__s,__n);
    __dest[__n] = '\0';
    if (*(long *)(lVar5 + 0x28) == local_48) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_009a9510:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
            );
}


// ===== 009a9544  FUN_009a9544 =====

void FUN_009a9544(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    puVar1 = (undefined8 *)operator_new(0x10);
    *param_1 = 0;
    *puVar1 = &PTR_FUN_00d40870;
    puVar1[1] = lVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../api/audio/audio_processing.cc",0xe7,"audio_processing",&DAT_001f5fa0);
}


// ===== 009a95a8  FUN_009a95a8 =====

void FUN_009a95a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d40870;
  if ((long *)param_1[1] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x009a95cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[1] + 8))();
    return;
  }
  return;
}


// ===== 009a95d4  FUN_009a95d4 =====

void FUN_009a95d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d40870;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}


// ===== 009a9620  FUN_009a9620 =====

void FUN_009a9620(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  *param_1 = uVar1;
  return;
}


// ===== 009a9634  FUN_009a9634 =====

undefined8 * FUN_009a9634(ulong param_1,long param_2,ulong param_3,long param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  void *pvVar4;
  long *plVar5;
  long *plVar6;
  long *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  long *local_50;
  long *local_48;
  
  if (param_3 <= param_1 && param_1 != param_3) {
    if (param_2 == param_4) {
      puVar1 = (undefined8 *)operator_new(0x28);
      *puVar1 = &PTR_FUN_00d40898;
      puVar1[1] = param_1;
      puVar1[2] = param_2;
      puVar1[3] = param_3;
      puVar1[4] = param_2;
      if ((param_1 == 1) || (param_3 == 1)) {
        *puVar1 = &PTR_FUN_00d408c0;
        return puVar1;
      }
    }
    else {
      local_58 = (long *)&DAT_aaaaaaaaaaaaaaaa;
      puVar1 = (undefined8 *)operator_new(0x28);
      *puVar1 = &PTR_FUN_00d40898;
      puVar1[1] = param_1;
      puVar1[2] = param_2;
      puVar1[3] = param_3;
      puVar1[4] = param_2;
      if ((param_1 == 1) || (param_3 == 1)) {
        *puVar1 = &PTR_FUN_00d408c0;
        plVar2 = (long *)operator_new(8);
        if (plVar2 != (long *)0x0) {
          local_50 = plVar2 + 1;
          *plVar2 = (long)puVar1;
          local_58 = plVar2;
          local_48 = local_50;
          plVar2 = (long *)operator_new(0x40);
          FUN_009a9a84(plVar2,param_3,param_2,param_3,param_4);
          local_60 = plVar2;
          if (local_50 < local_48) {
            if (local_50 == (long *)0x0) goto LAB_009a9a3c;
            local_60 = (long *)0x0;
            plVar6 = local_50 + 1;
            *local_50 = (long)plVar2;
          }
          else {
            plVar6 = (long *)FUN_009a9d44(&local_58,&local_60);
          }
          plVar2 = local_60;
          local_60 = (long *)0x0;
          local_50 = plVar6;
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 8))();
          }
          plVar2 = local_50;
          puVar1 = (undefined8 *)operator_new(0x58);
          local_78 = local_58;
          local_58 = (long *)0x0;
          local_50 = (long *)0x0;
          local_68 = local_48;
          local_48 = (long *)0x0;
          local_70 = plVar2;
          FUN_009a9be0(puVar1,&local_78);
          plVar6 = local_78;
          plVar2 = local_70;
          if (local_78 != (long *)0x0) {
            while (plVar6 != plVar2) {
              plVar2 = plVar2 + -1;
              if (plVar2 == (long *)0x0) goto LAB_009a9a28;
              plVar3 = (long *)*plVar2;
              *plVar2 = 0;
              if (plVar3 != (long *)0x0) {
                (**(code **)(*plVar3 + 8))();
              }
            }
            local_70 = plVar6;
            operator_delete(local_78);
          }
          plVar3 = local_58;
          plVar2 = local_58;
          plVar6 = local_50;
          if (local_58 == (long *)0x0) {
            return puVar1;
          }
          while (local_58 = plVar2, plVar3 != plVar6) {
            plVar6 = plVar6 + -1;
            if (plVar6 == (long *)0x0) {
LAB_009a9a28:
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
              plVar2 = local_58;
            }
          }
          local_50 = plVar3;
LAB_009a9a00:
          operator_delete(plVar2);
          return puVar1;
        }
        goto LAB_009a9a3c;
      }
    }
  }
  else {
    if (param_3 <= param_1) {
      if (param_2 == param_4) {
        puVar1 = (undefined8 *)operator_new(0x28);
        puVar1[2] = param_2;
        puVar1[3] = param_3;
        puVar1[4] = param_2;
        *puVar1 = &PTR_FUN_00d40960;
        puVar1[1] = param_1;
        return puVar1;
      }
      puVar1 = (undefined8 *)operator_new(0x40);
      FUN_009a9a84(puVar1,param_1,param_2,param_3,param_4);
      return puVar1;
    }
    if (param_2 != param_4) {
      pvVar4 = operator_new(0x40);
      FUN_009a9a84(pvVar4,param_1,param_2,param_1,param_4);
      plVar2 = (long *)operator_new(8);
      if (plVar2 != (long *)0x0) {
        *plVar2 = (long)pvVar4;
        puVar1 = (undefined8 *)operator_new(0x28);
        *puVar1 = &PTR_FUN_00d40898;
        puVar1[1] = param_1;
        puVar1[2] = param_4;
        puVar1[3] = param_3;
        puVar1[4] = param_4;
        if ((param_1 != 1) && (param_3 != 1)) goto LAB_009a9a64;
        *puVar1 = &PTR_FUN_00d40938;
        local_90 = (long *)operator_new(0x10);
        if (local_90 != (long *)0xfffffffffffffff8) {
          *local_90 = *plVar2;
          local_90[1] = (long)puVar1;
          operator_delete(plVar2);
          puVar1 = (undefined8 *)operator_new(0x58);
          local_88 = local_90 + 2;
          local_80 = local_90 + 2;
          FUN_009a9be0(puVar1,&local_90);
          plVar3 = local_90;
          plVar2 = local_90;
          plVar6 = local_88;
          if (local_90 == (long *)0x0) {
            return puVar1;
          }
          while (local_90 = plVar2, plVar3 != plVar6) {
            plVar6 = plVar6 + -1;
            if (plVar6 == (long *)0x0) goto LAB_009a9a28;
            plVar5 = (long *)*plVar6;
            *plVar6 = 0;
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 8))();
              plVar2 = local_90;
            }
          }
          local_88 = plVar3;
          goto LAB_009a9a00;
        }
      }
LAB_009a9a3c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar1 = (undefined8 *)operator_new(0x28);
    *puVar1 = &PTR_FUN_00d40898;
    puVar1[1] = param_1;
    puVar1[2] = param_2;
    puVar1[3] = param_3;
    puVar1[4] = param_2;
    if ((param_1 == 1) || (param_3 == 1)) {
      *puVar1 = &PTR_FUN_00d40938;
      return puVar1;
    }
  }
LAB_009a9a64:
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../common_audio/audio_converter.cc",0xd2,
               "dst_channels == src_channels || dst_channels == 1 || src_channels == 1",
               &DAT_001f5fa0);
}


// ===== 009a9a84  FUN_009a9a84 =====

void FUN_009a9a84(undefined8 *param_1,ulong param_2,undefined8 param_3,ulong param_4,
                 undefined8 param_5)

{
  void *pvVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  void *pvStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 *puStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *local_48;
  
  *param_1 = &PTR_FUN_00d40898;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = param_5;
  if (((param_2 != 1) && (param_4 != param_2)) && (param_4 != 1)) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../common_audio/audio_converter.cc",0xd2,
                 "dst_channels == src_channels || dst_channels == 1 || src_channels == 1",
                 &DAT_001f5fa0);
  }
  *param_1 = &PTR_FUN_00d408e8;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if (param_2 != 0) {
    if (param_2 >> 0x3d != 0) {
      auVar7 = FUN_005ee540();
      puVar3 = auVar7._8_8_;
      puVar4 = auVar7._0_8_;
      pcStack_78 = FUN_009a9be0;
      *puVar4 = &PTR_FUN_00d40910;
      puVar4[6] = 0;
      puVar4[7] = 0;
      puVar4[5] = 0;
      puVar4[4] = 0;
      puVar4[3] = 0;
      puVar4[2] = 0;
      puVar4[1] = 0;
      puVar4[5] = *puVar3;
      puVar4[6] = puVar3[1];
      puVar4[7] = puVar3[2];
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      plVar2 = (long *)puVar4[5];
      puVar4[8] = 0;
      puVar4[9] = 0;
      puVar4[10] = 0;
      uVar6 = puVar4[6] - (long)plVar2 >> 3;
      puStack_80 = &stack0xffffffffffffffc0;
      puStack_70 = param_1;
      uStack_68 = param_2;
      uStack_60 = param_3;
      uStack_58 = param_5;
      if (uVar6 < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_0061fd88("../../common_audio/audio_converter.cc",0x7d,"converters_.size() >= 2",
                     &DAT_001fbca2,uVar6,2);
      }
      if (plVar2 != (long *)(puVar4[6] + -8)) {
        do {
          pvVar1 = operator_new(0x70);
          FUN_0065b730(pvVar1,*(undefined8 *)(*plVar2 + 0x20),*(undefined8 *)(*plVar2 + 0x18),1);
          puVar3 = (undefined8 *)puVar4[9];
          pvStack_88 = pvVar1;
          if (puVar3 < (undefined8 *)puVar4[10]) {
            if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                        );
            }
            pvStack_88 = (void *)0x0;
            puVar5 = puVar3 + 1;
            *puVar3 = pvVar1;
          }
          else {
            puVar5 = (undefined8 *)FUN_009aa44c(puVar4 + 8,&pvStack_88);
          }
          pvVar1 = pvStack_88;
          puVar4[9] = puVar5;
          pvStack_88 = (void *)0x0;
          if (pvVar1 != (void *)0x0) {
            FUN_0065d440(&pvStack_88);
          }
          plVar2 = plVar2 + 1;
        } while (plVar2 != (long *)(puVar4[6] + -8));
      }
      return;
    }
    pvVar1 = operator_new(param_2 * 8);
    param_1[5] = pvVar1;
    param_1[6] = pvVar1;
    param_1[7] = (void *)((long)pvVar1 + param_2 * 8);
    do {
      plVar2 = (long *)operator_new(0x40);
      FUN_005ee570(plVar2,param_3,param_5);
      puVar4 = (undefined8 *)param_1[6];
      local_48 = plVar2;
      if (puVar4 < (undefined8 *)param_1[7]) {
        if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        local_48 = (long *)0x0;
        puVar3 = puVar4 + 1;
        *puVar4 = plVar2;
      }
      else {
        puVar3 = (undefined8 *)FUN_0065d348(param_1 + 5,&local_48);
      }
      plVar2 = local_48;
      param_1[6] = puVar3;
      local_48 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
      }
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return;
}


// ===== 009a9be0  FUN_009a9be0 =====

void FUN_009a9be0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  void *local_38;
  
  *param_1 = &PTR_FUN_00d40910;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[5] = *param_2;
  param_1[6] = param_2[1];
  param_1[7] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  plVar5 = (long *)param_1[5];
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  uVar4 = param_1[6] - (long)plVar5 >> 3;
  if (uVar4 < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../common_audio/audio_converter.cc",0x7d,"converters_.size() >= 2",
                 &DAT_001fbca2,uVar4,2);
  }
  if (plVar5 != (long *)(param_1[6] + -8)) {
    do {
      pvVar2 = operator_new(0x70);
      FUN_0065b730(pvVar2,*(undefined8 *)(*plVar5 + 0x20),*(undefined8 *)(*plVar5 + 0x18),1);
      puVar1 = (undefined8 *)param_1[9];
      local_38 = pvVar2;
      if (puVar1 < (undefined8 *)param_1[10]) {
        if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        local_38 = (void *)0x0;
        puVar3 = puVar1 + 1;
        *puVar1 = pvVar2;
      }
      else {
        puVar3 = (undefined8 *)FUN_009aa44c(param_1 + 8,&local_38);
      }
      pvVar2 = local_38;
      param_1[9] = puVar3;
      local_38 = (void *)0x0;
      if (pvVar2 != (void *)0x0) {
        FUN_0065d440(&local_38);
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != (long *)(param_1[6] + -8));
  }
  return;
}


// ===== 009a9d34  FUN_009a9d34 =====

void FUN_009a9d34(void)

{
  return;
}


// ===== 009a9d3c  FUN_009a9d3c =====

void FUN_009a9d3c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x9a9d44);
  (*pcVar1)();
}


// ===== 009a9d44  FUN_009a9d44 =====

undefined8 * FUN_009a9d44(long *param_1,undefined8 *param_2)

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
    FUN_009a9e3c();
LAB_009a9e38:
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
    if (uVar6 >> 0x3d != 0) goto LAB_009a9e38;
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


// ===== 009a9e3c  FUN_009a9e3c =====

void FUN_009a9e3c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 009a9e54  FUN_009a9e54 =====

void FUN_009a9e54(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 009a9e60  FUN_009a9e60 =====

void FUN_009a9e60(long param_1,long *param_2,long param_3,long *param_4,ulong param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  float fVar6;
  
  if (param_3 != *(long *)(param_1 + 0x10) * *(long *)(param_1 + 8)) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../common_audio/audio_converter.cc",0xd6,
                 "src_size == src_channels() * src_frames()",&DAT_001fb920,param_3);
  }
  if (param_5 < (ulong)(*(long *)(param_1 + 0x20) * *(long *)(param_1 + 0x18))) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../common_audio/audio_converter.cc",0xd7,
                 "dst_capacity >= dst_channels() * dst_frames()",&DAT_001fb920);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = *param_4;
    uVar2 = 0;
    do {
      uVar3 = *(ulong *)(param_1 + 8);
      if (uVar3 == 0) {
        fVar6 = 0.0;
      }
      else {
        fVar6 = 0.0;
        plVar4 = param_2;
        uVar5 = uVar3;
        do {
          uVar5 = uVar5 - 1;
          fVar6 = fVar6 + *(float *)(*plVar4 + uVar2 * 4);
          plVar4 = plVar4 + 1;
        } while (uVar5 != 0);
      }
      *(float *)(lVar1 + uVar2 * 4) = fVar6 / (float)uVar3;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ulong *)(param_1 + 0x10));
  }
  return;
}


// ===== 009a9f3c  FUN_009a9f3c =====

void FUN_009a9f3c(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[5];
  *param_1 = &PTR_FUN_00d408e8;
  if (plVar3 == (long *)0x0) {
    return;
  }
  plVar2 = (long *)param_1[6];
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
    plVar1 = (long *)param_1[5];
  }
  param_1[6] = plVar3;
  operator_delete(plVar1);
  return;
}


// ===== 009a9ff8  FUN_009a9ff8 =====

void FUN_009a9ff8(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[5];
  *param_1 = &PTR_FUN_00d408e8;
  if (plVar3 != (long *)0x0) {
    plVar2 = (long *)param_1[6];
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
      plVar1 = (long *)param_1[5];
    }
    param_1[6] = plVar3;
    operator_delete(plVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 009aa0ac  FUN_009aa0ac =====

void FUN_009aa0ac(long param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  long lVar1;
  ulong uVar2;
  
  if (param_3 != *(long *)(param_1 + 0x10) * *(long *)(param_1 + 8)) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../common_audio/audio_converter.cc",0xd6,
                 "src_size == src_channels() * src_frames()",&DAT_001fb920,param_3);
  }
  if ((ulong)(*(long *)(param_1 + 0x20) * *(long *)(param_1 + 0x18)) <= param_5) {
    lVar1 = *(long *)(param_1 + 0x28);
    if (*(long *)(param_1 + 0x30) != lVar1) {
      uVar2 = 0;
      do {
        FUN_005ee748(*(undefined8 *)(lVar1 + uVar2 * 8),*(undefined8 *)(param_2 + uVar2 * 8),
                     *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_4 + uVar2 * 8),
                     *(undefined8 *)(param_1 + 0x20));
        lVar1 = *(long *)(param_1 + 0x28);
        uVar2 = uVar2 + 1;
      } while (uVar2 < (ulong)(*(long *)(param_1 + 0x30) - lVar1 >> 3));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../common_audio/audio_converter.cc",0xd7,
               "dst_capacity >= dst_channels() * dst_frames()",&DAT_001fb920);
}


// ===== 009aa184  FUN_009aa184 =====

void FUN_009aa184(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = (long *)param_1[8];
  *param_1 = &PTR_FUN_00d40910;
  if (plVar4 != (long *)0x0) {
    plVar3 = (long *)param_1[9];
    plVar1 = plVar4;
    if (plVar4 != plVar3) {
      do {
        plVar3 = plVar3 + -1;
        if (plVar3 == (long *)0x0) goto LAB_009aa28c;
        lVar2 = *plVar3;
        *plVar3 = 0;
        if (lVar2 != 0) {
          FUN_0065d440();
        }
      } while (plVar3 != plVar4);
      plVar1 = (long *)param_1[8];
    }
    param_1[9] = plVar4;
    operator_delete(plVar1);
  }
  plVar4 = (long *)param_1[5];
  if (plVar4 == (long *)0x0) {
    return;
  }
  plVar3 = (long *)param_1[6];
  plVar1 = plVar4;
  if (plVar4 != plVar3) {
    do {
      plVar3 = plVar3 + -1;
      if (plVar3 == (long *)0x0) {
LAB_009aa28c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar1 = (long *)*plVar3;
      *plVar3 = 0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
    } while (plVar3 != plVar4);
    plVar1 = (long *)param_1[5];
  }
  param_1[6] = plVar4;
  operator_delete(plVar1);
  return;
}


// ===== 009aa2a0  FUN_009aa2a0 =====

void FUN_009aa2a0(void *param_1)

{
  FUN_009aa184();
  operator_delete(param_1);
  return;
}


// ===== 009aa2d0  FUN_009aa2d0 =====

void FUN_009aa2d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  if ((*(undefined8 **)(param_1 + 0x28) == *(undefined8 **)(param_1 + 0x30)) ||
     (*(long *)(param_1 + 0x40) == *(long *)(param_1 + 0x48))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:431: libc++ Hardening assertion !empty() failed: front() called on an empty vector\n"
              );
  }
  (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x28) + 0x10))();
  lVar3 = *(long *)(param_1 + 0x28);
  lVar4 = *(long *)(param_1 + 0x30);
  if (0x10 < (ulong)(lVar4 - lVar3)) {
    uVar6 = 0;
    do {
      uVar5 = *(long *)(param_1 + 0x48) - *(long *)(param_1 + 0x40) >> 3;
      if ((uVar5 <= uVar6) || (uVar5 <= uVar6 + 1)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      plVar2 = (long *)(*(long *)(param_1 + 0x40) + uVar6 * 8);
      lVar4 = *plVar2;
      lVar1 = plVar2[1];
      plVar2 = *(long **)(lVar3 + uVar6 * 8 + 0x10);
      (**(code **)(*plVar2 + 0x10))
                (plVar2,*(undefined8 *)(lVar4 + 8),*(long *)(lVar4 + 0x28) * *(long *)(lVar4 + 0x18)
                 ,*(undefined8 *)(lVar1 + 8),*(long *)(lVar1 + 0x28) * *(long *)(lVar1 + 0x18));
      lVar3 = *(long *)(param_1 + 0x28);
      lVar4 = *(long *)(param_1 + 0x30);
      uVar5 = uVar6 + 3;
      uVar6 = uVar6 + 1;
    } while (uVar5 < (ulong)(lVar4 - lVar3 >> 3));
  }
  if ((lVar3 != lVar4) && (*(long *)(param_1 + 0x40) != *(long *)(param_1 + 0x48))) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x48) + -8);
                    /* WARNING: Could not recover jumptable at 0x009aa40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(lVar4 + -8) + 0x10))
              (*(long **)(lVar4 + -8),*(undefined8 *)(lVar3 + 8),
               *(long *)(lVar3 + 0x28) * *(long *)(lVar3 + 0x18),param_4,param_5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:439: libc++ Hardening assertion !empty() failed: back() called on an empty vector\n"
            );
}


// ===== 009aa44c  FUN_009aa44c =====

undefined8 * FUN_009aa44c(long *param_1,undefined8 *param_2)

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
    FUN_009aa544();
LAB_009aa540:
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
    if (uVar6 >> 0x3d != 0) goto LAB_009aa540;
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


// ===== 009aa544  FUN_009aa544 =====

void FUN_009aa544(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 009aa55c  FUN_009aa55c =====

void FUN_009aa55c(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 009aa568  FUN_009aa568 =====

void FUN_009aa568(long param_1,long *param_2,long param_3,long param_4,ulong param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 uVar5;
  
  if (param_3 != *(long *)(param_1 + 0x10) * *(long *)(param_1 + 8)) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../common_audio/audio_converter.cc",0xd6,
                 "src_size == src_channels() * src_frames()",&DAT_001fb920,param_3);
  }
  uVar3 = *(ulong *)(param_1 + 0x18);
  uVar4 = *(ulong *)(param_1 + 0x20);
  if (uVar4 * uVar3 <= param_5) {
    if (uVar4 != 0) {
      uVar2 = 0;
      do {
        if (uVar3 != 0) {
          uVar4 = 0;
          uVar5 = *(undefined4 *)(*param_2 + uVar2 * 4);
          do {
            lVar1 = uVar4 * 8;
            uVar4 = uVar4 + 1;
            *(undefined4 *)(*(long *)(param_4 + lVar1) + uVar2 * 4) = uVar5;
            uVar3 = *(ulong *)(param_1 + 0x18);
          } while (uVar4 < uVar3);
          uVar4 = *(ulong *)(param_1 + 0x20);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar4);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../common_audio/audio_converter.cc",0xd7,
               "dst_capacity >= dst_channels() * dst_frames()",&DAT_001fb920);
}


// ===== 009aa630  FUN_009aa630 =====

void FUN_009aa630(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 009aa63c  FUN_009aa63c =====

void FUN_009aa63c(long param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  
  if (param_3 != *(long *)(param_1 + 0x10) * *(long *)(param_1 + 8)) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../common_audio/audio_converter.cc",0xd6,
                 "src_size == src_channels() * src_frames()",&DAT_001fb920,param_3);
  }
  if ((ulong)(*(long *)(param_1 + 0x20) * *(long *)(param_1 + 0x18)) <= param_5) {
    if ((param_2 != param_4) && (*(long *)(param_1 + 8) != 0)) {
      uVar1 = 0;
      do {
        memcpy(*(void **)(param_4 + uVar1 * 8),*(void **)(param_2 + uVar1 * 8),
               *(long *)(param_1 + 0x20) << 2);
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(ulong *)(param_1 + 8));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../common_audio/audio_converter.cc",0xd7,
               "dst_capacity >= dst_channels() * dst_frames()",&DAT_001fb920);
}


// ===== 009aa70c  FUN_009aa70c =====

void FUN_009aa70c(undefined8 *param_1)

{
  undefined8 uVar1;
  void *pvVar2;
  
  *param_1 = &PTR_FUN_00d40988;
  pvVar2 = operator_new(1);
  FUN_0065b3d8(pvVar2,DAT_00d80878);
  param_1[1] = pvVar2;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xff;
  uVar1 = DAT_001f5390;
  *(undefined1 *)((long)param_1 + 0x1c) = 1;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[4] = uVar1;
  *(undefined2 *)((long)param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((long)param_1 + 0x74) = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  return;
}


// ===== 009aa7a0  FUN_009aa7a0 =====

void FUN_009aa7a0(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  pvVar1 = (void *)param_1[9];
  *param_1 = &PTR_FUN_00d40988;
  if (pvVar1 == (void *)0x0) {
LAB_009aa854:
    puVar7 = (undefined8 *)param_1[6];
    if (puVar7 != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)param_1[7];
      puVar2 = puVar7;
      if (puVar7 != puVar4) {
        do {
          puVar4 = puVar4 + -1;
          if (puVar4 == (undefined8 *)0x0) goto LAB_009aa830;
          pvVar1 = (void *)*puVar4;
          *puVar4 = 0;
          if (pvVar1 != (void *)0x0) {
            free(*(void **)((long)pvVar1 + 0x30));
            operator_delete(pvVar1);
          }
        } while (puVar4 != puVar7);
        puVar2 = (undefined8 *)param_1[6];
      }
      param_1[7] = puVar7;
      operator_delete(puVar2);
    }
    pvVar1 = (void *)param_1[1];
    param_1[1] = 0;
    if (pvVar1 == (void *)0x0) {
      return;
    }
    FUN_0065b3e0(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  pvVar3 = (void *)param_1[10];
  uVar6 = (ulong)((long)pvVar3 + (-4 - ((long)pvVar3 << 0x3e))) >> 2;
  uVar5 = (ulong)(((long)pvVar1 - (long)pvVar3 << 0x3e) - ((long)pvVar1 - (long)pvVar3)) >> 2;
  if (uVar6 <= uVar5) {
    uVar5 = uVar6;
  }
  if ((1 < uVar5) && ((((int)pvVar1 - (int)pvVar3 | -(int)pvVar3) & 3U) == 0)) {
    uVar5 = uVar5 & 0x3ffffffffffffffe;
    pvVar3 = (void *)((long)pvVar3 + uVar5 * -4);
    do {
      uVar5 = uVar5 - 2;
    } while (uVar5 != 0);
  }
  do {
    if (pvVar3 == pvVar1) {
      param_1[10] = pvVar1;
      operator_delete(pvVar1);
      goto LAB_009aa854;
    }
    pvVar3 = (void *)((long)pvVar3 + -4);
  } while (pvVar3 != (void *)0x0);
LAB_009aa830:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 009aa900  FUN_009aa900 =====

void FUN_009aa900(void *param_1)

{
  FUN_009aa7a0();
  operator_delete(param_1);
  return;
}


// ===== 009aa930  FUN_009aa930 =====

void FUN_009aa930(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != lVar1) {
    uVar2 = 0;
    do {
      FUN_009c8a04(*(undefined8 *)(*(long *)(lVar1 + uVar2 * 8) + 0x30),param_2,param_3);
      lVar1 = *(long *)(param_1 + 0x30);
      uVar2 = uVar2 + 1;
    } while (uVar2 < (ulong)(*(long *)(param_1 + 0x38) - lVar1 >> 3));
  }
  return;
}


// ===== 009aa9a0  FUN_009aa9a0 =====

void FUN_009aa9a0(long param_1,long *param_2)

{
  long *plVar1;
  undefined1 **ppuVar2;
  float fVar3;
  undefined2 uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
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
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  uVar6 = *(ulong *)(param_1 + 0x48);
  lVar15 = *(long *)(param_1 + 0x58);
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
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  if (uVar6 == 1) {
    lVar8 = *(long *)(param_1 + 0x60);
    if (*(long *)(param_1 + 0x68) != 0) {
      lVar8 = *(long *)(param_1 + 0x68);
    }
    FUN_005eea0c(**(undefined8 **)(lVar8 + 0x10),lVar15,&local_170);
  }
  else if (lVar15 != 0) {
    fVar3 = 32767.0;
    lVar8 = 0;
    uVar9 = uVar6 & 0x7fffffff;
    lVar7 = *(long *)(param_1 + 0x60);
    if (*(long *)(param_1 + 0x68) != 0) {
      lVar7 = *(long *)(param_1 + 0x68);
    }
    do {
      iVar5 = (int)uVar6;
      if (iVar5 < 1) {
        iVar11 = 0;
      }
      else {
        if (uVar9 < 2) {
          uVar13 = 0;
          iVar11 = 0;
        }
        else {
          iVar12 = 0;
          iVar11 = 0;
          plVar10 = (long *)(*(long *)(lVar7 + 8) + 8);
          uVar13 = uVar6 & 0x7ffffffe;
          do {
            plVar1 = plVar10 + -1;
            lVar14 = *plVar10;
            auVar20._8_8_ = 0x7fffffff7fffffff;
            auVar20._0_8_ = 0x7fffffff7fffffff;
            auVar21._8_8_ = 0x7fffffff7fffffff;
            auVar21._0_8_ = 0x7fffffff7fffffff;
            plVar10 = plVar10 + 2;
            fVar16 = *(float *)(*plVar1 + lVar8 * 4);
            fVar18 = *(float *)(lVar14 + lVar8 * 4);
            fVar17 = fVar3;
            if (fVar16 == 32767.0 || fVar16 < 32767.0 != NAN(fVar16)) {
              fVar17 = fVar16;
            }
            fVar16 = fVar3;
            if (fVar18 == 32767.0 || fVar18 < 32767.0 != NAN(fVar18)) {
              fVar16 = fVar18;
            }
            fVar18 = -32768.0;
            if (-32768.0 <= fVar17) {
              fVar18 = fVar17;
            }
            auVar19 = ZEXT816(0xc7000000);
            if (-32768.0 <= fVar16) {
              auVar19 = ZEXT416((uint)fVar16);
            }
            auVar20 = NEON_bsl(auVar20,ZEXT816(0x3f000000),ZEXT416((uint)fVar18),1);
            uVar13 = uVar13 - 2;
            auVar21 = NEON_bsl(auVar21,ZEXT816(0x3f000000),auVar19,1);
            iVar12 = iVar12 + (int)(fVar18 + auVar20._0_4_);
            iVar11 = iVar11 + (int)(auVar19._0_4_ + auVar21._0_4_);
          } while (uVar13 != 0);
          iVar11 = iVar11 + iVar12;
          uVar13 = uVar6 & 0x7ffffffe;
          if (uVar9 == (uVar6 & 0x7ffffffe)) goto LAB_009aab3c;
        }
        lVar14 = uVar9 - uVar13;
        plVar10 = (long *)(*(long *)(lVar7 + 8) + uVar13 * 8);
        do {
          auVar19._8_8_ = 0x7fffffff7fffffff;
          auVar19._0_8_ = 0x7fffffff7fffffff;
          fVar16 = *(float *)(*plVar10 + lVar8 * 4);
          fVar17 = fVar3;
          if (fVar16 == 32767.0 || fVar16 < 32767.0 != NAN(fVar16)) {
            fVar17 = fVar16;
          }
          fVar16 = -32768.0;
          if (-32768.0 <= fVar17) {
            fVar16 = fVar17;
          }
          lVar14 = lVar14 + -1;
          auVar20 = NEON_bsl(auVar19,ZEXT816(0x3f000000),ZEXT416((uint)fVar16),1);
          iVar11 = iVar11 + (int)(fVar16 + auVar20._0_4_);
          plVar10 = plVar10 + 1;
        } while (lVar14 != 0);
      }
LAB_009aab3c:
      if (lVar8 == 0xa0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/array:277: libc++ Hardening assertion __n < _Size failed: out-of-bounds access in std::array<T, N>\n"
                  );
      }
      uVar4 = 0;
      if (iVar5 != 0) {
        uVar4 = (undefined2)(iVar11 / iVar5);
      }
      *(undefined2 *)((long)&local_170 + lVar8 * 2) = uVar4;
      lVar8 = lVar8 + 1;
    } while (lVar8 != lVar15);
  }
  lVar8 = *param_2;
  lVar7 = param_2[1];
  uVar9 = (lVar7 + (lVar7 << 0x3f)) - 2U >> 1;
  uVar6 = (ulong)((lVar8 - lVar7 << 0x3f) - (lVar8 - lVar7)) >> 1;
  if (uVar9 <= uVar6) {
    uVar6 = uVar9;
  }
  if ((1 < uVar6) && ((((int)lVar8 - (uint)lVar7 | (uint)lVar7) & 1) == 0)) {
    uVar6 = uVar6 & 0x7ffffffffffffffe;
    lVar7 = lVar7 + uVar6 * -2;
    do {
      uVar6 = uVar6 - 2;
    } while (uVar6 != 0);
  }
  do {
    if (lVar7 == lVar8) {
      param_2[1] = lVar8;
      ppuVar2 = (undefined1 **)(undefined1 *)0x0;
      if (lVar15 != 0) {
        ppuVar2 = &local_170;
      }
      FUN_006ce204(param_2,lVar8,ppuVar2,
                   (undefined1 *)((long)ppuVar2 + *(long *)(param_1 + 0x58) * 2),
                   (*(long *)(param_1 + 0x58) << 1) >> 1);
      return;
    }
    lVar7 = lVar7 + -2;
  } while (lVar7 != 0);
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 009aac1c  FUN_009aac1c =====

undefined8 FUN_009aac1c(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  undefined4 local_40c;
  undefined1 *local_408;
  undefined1 *puStack_400;
  undefined1 *local_3f8;
  undefined1 auStack_3f0 [320];
  undefined1 auStack_2b0 [320];
  undefined1 auStack_170 [320];
  
  memset(auStack_3f0,0xaa,0x3c0);
  puStack_400 = auStack_2b0;
  local_3f8 = auStack_170;
  local_408 = auStack_3f0;
  if (*(int *)(param_1 + 0x10) == 0) {
    if (*(long *)(param_1 + 0x38) != *(long *)(param_1 + 0x30)) {
      uVar2 = 0;
      do {
        if ((ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2) <= uVar2)
        goto LAB_009aad8c;
        *(undefined4 *)(*(long *)(param_1 + 0x48) + uVar2 * 4) = *(undefined4 *)(param_1 + 0x28);
        FUN_0065d290(param_2,uVar2,&local_408);
        if ((ulong)(*(long *)(param_1 + 0x38) - *(long *)(param_1 + 0x30) >> 3) <= uVar2)
        goto LAB_009aad8c;
        iVar1 = FUN_009c8454(*(undefined8 *)
                              (*(long *)(*(long *)(param_1 + 0x30) + uVar2 * 8) + 0x30),&local_408,
                             *(undefined8 *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x58));
        if (iVar1 != 0) {
          return 0xffffffff;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < (ulong)(*(long *)(param_1 + 0x38) - *(long *)(param_1 + 0x30) >> 3));
    }
  }
  else if ((*(int *)(param_1 + 0x10) == 1) &&
          (*(long *)(param_1 + 0x38) != *(long *)(param_1 + 0x30))) {
    uVar2 = 0;
    do {
      local_40c = 0;
      FUN_0065d290(param_2,uVar2,&local_408);
      if ((ulong)(*(long *)(param_1 + 0x38) - *(long *)(param_1 + 0x30) >> 3) <= uVar2) {
LAB_009aad8c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      iVar1 = FUN_009c8a70(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + uVar2 * 8) + 0x30),
                           &local_408,*(undefined8 *)(param_2 + 0x50),
                           *(undefined8 *)(param_2 + 0x58),*(undefined4 *)(param_1 + 0x28),
                           &local_40c);
      if ((ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2) <= uVar2)
      goto LAB_009aad8c;
      *(undefined4 *)(*(long *)(param_1 + 0x48) + uVar2 * 4) = local_40c;
      if (iVar1 != 0) {
        return 0xffffffff;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (ulong)(*(long *)(param_1 + 0x38) - *(long *)(param_1 + 0x30) >> 3));
  }
  return 0;
}


// ===== 009aada0  FUN_009aada0 =====

undefined8 FUN_009aada0(long param_1,long param_2,uint param_3)

{
  int *piVar1;
  undefined1 (*pauVar2) [16];
  int iVar3;
  ulong uVar4;
  int *piVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  undefined1 (*pauVar8) [16];
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  float *pfVar18;
  long lVar19;
  float *pfVar20;
  ulong uVar21;
  undefined1 (*pauVar22) [16];
  long lVar23;
  ulong uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  undefined1 auVar32 [16];
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float *local_438;
  undefined1 *puStack_430;
  undefined1 *local_428;
  float local_420;
  float fStack_41c;
  float local_410;
  float fStack_40c;
  undefined8 local_400;
  float local_3f8;
  undefined1 auStack_2e0 [320];
  undefined1 auStack_1a0 [320];
  char local_48 [4];
  undefined4 local_44;
  
  if ((*(int *)(param_1 + 0x10) == 0) && (*(char *)(param_1 + 0x2c) != '\x01')) {
    return 0xfffffff5;
  }
  lVar11 = *(long *)(param_1 + 0x30);
  lVar23 = *(long *)(param_1 + 0x38);
  *(undefined1 *)(param_1 + 0x2d) = 0;
  if (lVar23 == lVar11) {
    bVar7 = false;
  }
  else {
    uVar24 = 0;
    bVar7 = false;
    do {
      memset(&local_420,0xaa,0x3c0);
      local_438 = &local_420;
      puStack_430 = auStack_2e0;
      local_428 = auStack_1a0;
      FUN_0065d290(param_2,uVar24,&local_438);
      local_44 = 0;
      local_48[0] = '\0';
      if (((ulong)(*(long *)(param_1 + 0x38) - *(long *)(param_1 + 0x30) >> 3) <= uVar24) ||
         ((ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2) <= uVar24))
      goto LAB_009ab1f4;
      lVar11 = *(long *)(*(long *)(param_1 + 0x30) + uVar24 * 8);
      iVar9 = FUN_009c95c0(*(undefined8 *)(lVar11 + 0x30),&local_438,*(undefined8 *)(param_2 + 0x50)
                           ,*(undefined8 *)(param_2 + 0x58),
                           *(undefined4 *)(*(long *)(param_1 + 0x48) + uVar24 * 4),&local_44,
                           param_3 & 1,local_48,lVar11);
      if ((ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2) <= uVar24)
      goto LAB_009ab1f4;
      *(undefined4 *)(*(long *)(param_1 + 0x48) + uVar24 * 4) = local_44;
      uVar24 = uVar24 + 1;
      lVar11 = *(long *)(param_1 + 0x30);
      lVar23 = *(long *)(param_1 + 0x38);
      bVar7 = (bool)(bVar7 | iVar9 != 0);
      uVar12 = lVar23 - lVar11 >> 3;
      *(byte *)(param_1 + 0x2d) = *(byte *)(param_1 + 0x2d) | local_48[0] == '\x01';
    } while (uVar24 < uVar12);
    if (1 < uVar12) {
      uVar14 = 1;
      uVar21 = 0;
      do {
        if (uVar12 <= uVar21) goto LAB_009ab1f4;
        uVar24 = uVar14;
        if (*(int *)(*(long *)(lVar11 + uVar14 * 8) + 0x28) <=
            *(int *)(*(long *)(lVar11 + uVar21 * 8) + 0x28)) {
          uVar24 = uVar21;
        }
        uVar14 = uVar14 + 1;
        uVar21 = uVar24;
      } while (uVar12 != uVar14);
      lVar16 = lVar23 - lVar11;
      goto joined_r0x009aaf2c;
    }
  }
  uVar24 = 0;
  lVar16 = lVar23 - lVar11;
joined_r0x009aaf2c:
  if (lVar16 != 0) {
    auVar26._8_4_ = 0xc7000000;
    auVar26._0_8_ = 0xc7000000c7000000;
    auVar26._12_4_ = 0xc7000000;
    uVar14 = lVar16 >> 3;
    uVar12 = 0;
    do {
      if (uVar14 <= uVar24) goto LAB_009ab1f4;
      lVar16 = *(long *)(param_2 + 0x68);
      if (lVar16 == 0) {
        lVar16 = *(long *)(param_2 + 0x60);
      }
      pauVar22 = *(undefined1 (**) [16])(lVar11 + uVar24 * 8);
      lVar17 = *(long *)(lVar16 + 0x38);
      lVar19 = *(long *)(lVar16 + 0x10);
      lVar16 = *(long *)(param_2 + 0x50);
      auVar29 = NEON_scvtf(*pauVar22,4);
      local_420 = auVar29._0_4_ * 1.5258789e-05;
      fStack_41c = auVar29._4_4_ * 1.5258789e-05;
      auVar29 = NEON_scvtf(pauVar22[1],4);
      local_410 = auVar29._0_4_ * 1.5258789e-05;
      fStack_40c = auVar29._4_4_ * 1.5258789e-05;
      uVar10 = NEON_scvtf(*(undefined8 *)pauVar22[2],4);
      local_400 = CONCAT44((float)((ulong)uVar10 >> 0x20) * 1.5258789e-05,
                           (float)uVar10 * 1.5258789e-05);
      local_3f8 = (float)*(int *)(pauVar22[2] + 8) * 1.5258789e-05;
      if (lVar16 != 0) {
        lVar11 = 0;
        do {
          lVar23 = 10;
          pfVar18 = (float *)(*(long *)(lVar19 + lVar17 * uVar12 * 8 + lVar11 * 8) + 0x20);
          pfVar20 = (float *)((ulong)&local_420 | 4);
          do {
            fVar28 = pfVar20[-1];
            fVar31 = *pfVar20;
            lVar23 = lVar23 + -1;
            pfVar20 = pfVar20 + 1;
            fVar33 = (fVar31 - fVar28) * 0.0625;
            fVar37 = fVar33 + fVar28 + fVar33;
            fVar31 = fVar33 + fVar37;
            fVar40 = fVar33 + fVar31;
            fVar42 = fVar33 + fVar40;
            fVar43 = fVar33 + fVar42;
            fVar44 = fVar33 + fVar43;
            fVar45 = fVar33 + fVar44;
            fVar46 = fVar33 + fVar45;
            fVar47 = fVar33 + fVar46;
            fVar48 = fVar33 + fVar47;
            fVar49 = fVar33 + fVar48;
            fVar50 = fVar33 + fVar49;
            fVar41 = fVar33 + fVar50;
            auVar36._0_4_ = fVar28 * pfVar18[-8];
            auVar36._4_4_ = (fVar28 + fVar33) * pfVar18[-7];
            auVar36._8_4_ = fVar37 * pfVar18[-6];
            auVar36._12_4_ = fVar31 * pfVar18[-5];
            auVar34._0_4_ = fVar40 * pfVar18[-4];
            auVar34._4_4_ = fVar42 * pfVar18[-3];
            auVar34._8_4_ = fVar43 * pfVar18[-2];
            auVar34._12_4_ = fVar44 * pfVar18[-1];
            auVar39._0_4_ = fVar45 * *pfVar18;
            auVar39._4_4_ = fVar46 * pfVar18[1];
            auVar39._8_4_ = fVar47 * pfVar18[2];
            auVar39._12_4_ = fVar48 * pfVar18[3];
            auVar38._0_4_ = fVar49 * pfVar18[4];
            auVar38._4_4_ = fVar50 * pfVar18[5];
            auVar38._8_4_ = fVar41 * pfVar18[6];
            auVar38._12_4_ = (fVar33 + fVar41) * pfVar18[7];
            auVar30 = NEON_fmaxnm(auVar36,auVar26,4);
            auVar35 = NEON_fmaxnm(auVar34,auVar26,4);
            auVar32 = NEON_fmaxnm(auVar39,auVar26,4);
            auVar39 = NEON_fmaxnm(auVar38,auVar26,4);
            auVar29._8_4_ = 0x46fffe00;
            auVar29._0_8_ = 0x46fffe0046fffe00;
            auVar29._12_4_ = 0x46fffe00;
            auVar29 = NEON_fminnm(auVar30,auVar29,4);
            auVar30._8_4_ = 0x46fffe00;
            auVar30._0_8_ = 0x46fffe0046fffe00;
            auVar30._12_4_ = 0x46fffe00;
            auVar36 = NEON_fminnm(auVar35,auVar30,4);
            auVar35._8_4_ = 0x46fffe00;
            auVar35._0_8_ = 0x46fffe0046fffe00;
            auVar35._12_4_ = 0x46fffe00;
            auVar30 = NEON_fminnm(auVar32,auVar35,4);
            auVar32._8_4_ = 0x46fffe00;
            auVar32._0_8_ = 0x46fffe0046fffe00;
            auVar32._12_4_ = 0x46fffe00;
            auVar35 = NEON_fminnm(auVar39,auVar32,4);
            *(long *)(pfVar18 + -6) = auVar29._8_8_;
            *(long *)(pfVar18 + -8) = auVar29._0_8_;
            *(long *)(pfVar18 + -2) = auVar36._8_8_;
            *(long *)(pfVar18 + -4) = auVar36._0_8_;
            *(long *)(pfVar18 + 2) = auVar30._8_8_;
            *(long *)pfVar18 = auVar30._0_8_;
            *(long *)(pfVar18 + 6) = auVar35._8_8_;
            *(long *)(pfVar18 + 4) = auVar35._0_8_;
            pfVar18 = pfVar18 + 0x10;
          } while (lVar23 != 0);
          lVar11 = lVar11 + 1;
        } while (lVar11 != lVar16);
        lVar11 = *(long *)(param_1 + 0x30);
        lVar23 = *(long *)(param_1 + 0x38);
      }
      uVar12 = uVar12 + 1;
      uVar14 = lVar23 - lVar11 >> 3;
    } while (uVar12 < uVar14);
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    piVar5 = *(int **)(param_1 + 0x48);
    lVar16 = *(long *)(param_1 + 0x50) - (long)piVar5;
    if (lVar16 == 0) {
LAB_009ab1f4:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                );
    }
    iVar9 = *piVar5;
    piVar13 = (int *)(param_1 + 0x28);
    *piVar13 = iVar9;
    if (8 < (ulong)(lVar23 - lVar11)) {
      uVar12 = lVar23 - lVar11 >> 3;
      uVar14 = lVar16 >> 2;
      uVar21 = uVar14 - 1;
      uVar24 = 0;
      if (1 < uVar12) {
        uVar24 = uVar12 - 2;
      }
      if (uVar21 <= uVar24) {
        uVar24 = uVar21;
      }
      if (uVar24 < 0x1c) {
        uVar15 = 1;
      }
      else {
        uVar4 = 0;
        if (1 < uVar12) {
          uVar4 = uVar12 - 2;
        }
        if (uVar21 <= uVar4) {
          uVar4 = uVar21;
        }
        uVar15 = 1;
        if ((piVar5 + 1 <= piVar5 + 1 + uVar4) && (uVar4 >> 0x3e == 0)) {
          uVar4 = 0;
          if (1 < uVar12) {
            uVar4 = uVar12 - 2;
          }
          if (uVar21 <= uVar4) {
            uVar4 = uVar21;
          }
          if ((piVar13 < piVar5 + uVar4 + 2) && (piVar5 + 1 < (int *)(param_1 + 0x2cU))) {
            uVar15 = 1;
          }
          else {
            auVar25._0_8_ = CONCAT44(iVar9,iVar9);
            auVar25._8_4_ = iVar9;
            auVar25._12_4_ = iVar9;
            uVar21 = uVar24 + 1 & 7;
            uVar4 = 8;
            if (uVar21 != 0) {
              uVar4 = uVar21;
            }
            pauVar22 = (undefined1 (*) [16])(piVar5 + 5);
            auVar27._8_8_ = auVar25._8_8_;
            auVar27._0_8_ = auVar25._0_8_;
            lVar11 = (uVar24 + 1) - uVar4;
            uVar15 = lVar11 + 1;
            do {
              pauVar2 = pauVar22 + -1;
              pauVar8 = pauVar22 + -1;
              auVar26 = *pauVar22;
              lVar11 = lVar11 + -8;
              pauVar22 = pauVar22 + 2;
              auVar6._12_4_ = (int)((ulong)*(undefined8 *)((long)*pauVar8 + 8) >> 0x20);
              auVar6._0_12_ = *(undefined1 (*) [12])*pauVar2;
              auVar25 = NEON_smin(auVar6,auVar25,4);
              auVar27 = NEON_smin(auVar26,auVar27,4);
            } while (lVar11 != 0);
            auVar26 = NEON_smin(auVar25,auVar27,4);
            iVar9 = NEON_sminv(auVar26,4);
            *piVar13 = iVar9;
          }
        }
      }
      do {
        if (uVar14 == uVar15) goto LAB_009ab1f4;
        piVar1 = piVar5 + uVar15;
        uVar15 = uVar15 + 1;
        iVar3 = *piVar1;
        if (iVar9 <= *piVar1) {
          iVar3 = iVar9;
        }
        *piVar13 = iVar3;
        iVar9 = iVar3;
      } while (uVar15 < uVar12);
    }
  }
  if (bVar7) {
    uVar10 = 0xffffffff;
  }
  else {
    uVar10 = 0;
    *(undefined1 *)(param_1 + 0x2c) = 0;
  }
  return uVar10;
}


// ===== 009ab258  FUN_009ab258 =====

undefined8 FUN_009ab258(long param_1,int param_2)

{
  *(undefined1 *)(param_1 + 0x2c) = 1;
  if (param_2 < *(int *)(param_1 + 0x14)) {
    return 0xfffffffa;
  }
  if (*(int *)(param_1 + 0x18) < param_2) {
    return 0xfffffffa;
  }
  *(int *)(param_1 + 0x28) = param_2;
  return 0;
}


// ===== 009ab29c  FUN_009ab29c =====

undefined4 FUN_009ab29c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}


// ===== 009ab2a8  FUN_009ab2a8 =====

undefined8 FUN_009ab2a8(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (param_2 < 3) {
    *(uint *)(param_1 + 0x10) = param_2;
    if (((*(byte *)(param_1 + 0x68) & 1) == 0) || ((*(byte *)(param_1 + 0x74) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    FUN_009ab308(param_1,*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x70));
    uVar1 = 0;
  }
  else {
    uVar1 = 0xfffffffa;
  }
  return uVar1;
}


// ===== 009ab308  FUN_009ab308 =====

void FUN_009ab308(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  ushort uVar2;
  void *pvVar3;
  long lVar4;
  void *unaff_x20;
  ulong uVar5;
  int iVar6;
  long lVar7;
  
  *(undefined8 *)(param_1 + 0x60) = param_2;
  *(undefined1 *)(param_1 + 0x68) = 1;
  *(undefined4 *)(param_1 + 0x70) = param_3;
  *(undefined1 *)(param_1 + 0x74) = 1;
  FUN_009ab780(param_1 + 0x30);
  if ((*(byte *)(param_1 + 0x68) & 1) != 0) {
    FUN_00712464(param_1 + 0x48,*(undefined8 *)(param_1 + 0x60));
    lVar7 = *(long *)(param_1 + 0x30);
    if (*(long *)(param_1 + 0x38) != lVar7) {
      uVar5 = 0;
      do {
        if (*(long *)(lVar7 + uVar5 * 8) == 0) {
          pvVar3 = operator_new(0x38);
          lVar4 = FUN_009c986c();
          *(long *)((long)pvVar3 + 0x30) = lVar4;
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0061fd88("../../modules/audio_processing/gain_control_impl.cc",0x54,"state",
                         &DAT_001f5fa0);
          }
          unaff_x20 = *(void **)(lVar7 + uVar5 * 8);
          *(void **)(lVar7 + uVar5 * 8) = pvVar3;
          if (unaff_x20 != (void *)0x0) {
            free(*(void **)((long)unaff_x20 + 0x30));
            operator_delete(unaff_x20);
          }
        }
        if ((ulong)(*(long *)(param_1 + 0x38) - *(long *)(param_1 + 0x30) >> 3) <= uVar5) {
LAB_009ab478:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                    );
        }
        if ((*(byte *)(param_1 + 0x74) & 1) == 0) goto LAB_009ab48c;
        iVar6 = -1;
        if (*(uint *)(param_1 + 0x10) < 3) {
          iVar6 = *(uint *)(param_1 + 0x10) + 1;
        }
        FUN_009c9898(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + uVar5 * 8) + 0x30),
                     *(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),iVar6,
                     *(undefined4 *)(param_1 + 0x70));
        if ((ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2) <= uVar5)
        goto LAB_009ab478;
        *(undefined4 *)(*(long *)(param_1 + 0x48) + uVar5 * 4) = *(undefined4 *)(param_1 + 0x28);
        uVar5 = uVar5 + 1;
        lVar7 = *(long *)(param_1 + 0x30);
      } while (uVar5 < (ulong)(*(long *)(param_1 + 0x38) - lVar7 >> 3));
      if (*(long *)(param_1 + 0x38) != lVar7) {
        iVar6 = *(int *)(param_1 + 0x24);
        uVar2 = *(ushort *)(param_1 + 0x20);
        uVar5 = 0;
        uVar1 = *(undefined1 *)(param_1 + 0x1c);
        do {
          unaff_x20 = (void *)((ulong)unaff_x20 & 0xffff000000000000 |
                              (ulong)CONCAT14(uVar1,(uint)uVar2 | iVar6 << 0x10) | 0xaa0000000000);
          FUN_009c9728(*(undefined8 *)(*(long *)(lVar7 + uVar5 * 8) + 0x30),unaff_x20);
          lVar7 = *(long *)(param_1 + 0x30);
          uVar5 = uVar5 + 1;
        } while (uVar5 < (ulong)(*(long *)(param_1 + 0x38) - lVar7 >> 3));
      }
    }
    return;
  }
LAB_009ab48c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
            );
}


// ===== 009ab4c0  FUN_009ab4c0 =====

undefined4 FUN_009ab4c0(long param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0xfffffffa;
  if (((param_2 <= param_3) && (-1 < param_2)) && (param_3 < 0x10000)) {
    *(int *)(param_1 + 0x14) = param_2;
    *(int *)(param_1 + 0x18) = param_3;
    if (((*(byte *)(param_1 + 0x68) & 1) == 0) || ((*(byte *)(param_1 + 0x74) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    FUN_009ab308(param_1,*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x70));
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 009ab52c  FUN_009ab52c =====

int FUN_009ab52c(long param_1,uint param_2)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  ulong unaff_x21;
  ulong uVar6;
  
  if (param_2 < 0x20) {
    lVar4 = *(long *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x20) = param_2;
    if (*(long *)(param_1 + 0x38) == lVar4) {
      iVar5 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x24);
      uVar2 = *(undefined1 *)(param_1 + 0x1c);
      uVar6 = 0;
      iVar5 = 0;
      do {
        unaff_x21 = unaff_x21 & 0xffff000000000000 |
                    (ulong)CONCAT14(uVar2,param_2 | iVar1 << 0x10) | 0xaa0000000000;
        iVar3 = FUN_009c9728(*(undefined8 *)(*(long *)(lVar4 + uVar6 * 8) + 0x30),unaff_x21);
        lVar4 = *(long *)(param_1 + 0x30);
        uVar6 = uVar6 + 1;
        if (iVar3 != 0) {
          iVar5 = iVar3;
        }
      } while (uVar6 < (ulong)(*(long *)(param_1 + 0x38) - lVar4 >> 3));
    }
  }
  else {
    iVar5 = -6;
  }
  return iVar5;
}


// ===== 009ab5e0  FUN_009ab5e0 =====

int FUN_009ab5e0(long param_1,uint param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  
  if (param_2 < 0x5b) {
    lVar5 = *(long *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x24) = param_2;
    if (*(long *)(param_1 + 0x38) == lVar5) {
      iVar6 = 0;
    }
    else {
      uVar2 = *(ushort *)(param_1 + 0x20);
      uVar1 = *(undefined1 *)(param_1 + 0x1c);
      uVar4 = 0;
      iVar6 = 0;
      do {
        iVar3 = FUN_009c9728(*(undefined8 *)(*(long *)(lVar5 + uVar4 * 8) + 0x30),
                             (ulong)CONCAT14(uVar1,(uint)uVar2 | param_2 << 0x10) | 0xaa0000000000);
        lVar5 = *(long *)(param_1 + 0x30);
        uVar4 = uVar4 + 1;
        if (iVar3 != 0) {
          iVar6 = iVar3;
        }
      } while (uVar4 < (ulong)(*(long *)(param_1 + 0x38) - lVar5 >> 3));
    }
  }
  else {
    uVar4 = FUN_004249b0();
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f1906,"../../modules/audio_processing/gain_control_impl.cc",0x9fb,
                   "set_compression_gain_db(",param_2,") failed.");
      iVar6 = -6;
    }
    else {
      iVar6 = -6;
    }
  }
  return iVar6;
}


// ===== 009ab6d4  FUN_009ab6d4 =====

int FUN_009ab6d4(long param_1,byte param_2)

{
  ulong uVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  ulong unaff_x21;
  ulong uVar7;
  
  lVar5 = *(long *)(param_1 + 0x30);
  *(byte *)(param_1 + 0x1c) = param_2;
  if (*(long *)(param_1 + 0x38) == lVar5) {
    iVar6 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x24);
    uVar3 = *(ushort *)(param_1 + 0x20);
    uVar7 = 0;
    iVar6 = 0;
    uVar1 = 0xaa0100000000;
    if ((param_2 & 1) == 0) {
      uVar1 = 0xaa0000000000;
    }
    do {
      unaff_x21 = uVar1 | ((uint)uVar3 | iVar2 << 0x10) | unaff_x21 & 0xffff000000000000;
      iVar4 = FUN_009c9728(*(undefined8 *)(*(long *)(lVar5 + uVar7 * 8) + 0x30),unaff_x21);
      lVar5 = *(long *)(param_1 + 0x30);
      uVar7 = uVar7 + 1;
      if (iVar4 != 0) {
        iVar6 = iVar4;
      }
    } while (uVar7 < (ulong)(*(long *)(param_1 + 0x38) - lVar5 >> 3));
  }
  return iVar6;
}


// ===== 009ab780  FUN_009ab780 =====

void FUN_009ab780(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  void *pvVar8;
  size_t __n;
  ulong uVar9;
  void *__dest;
  undefined8 *puVar10;
  ulong uVar11;
  
  pvVar8 = (void *)*param_1;
  puVar7 = (undefined8 *)param_1[1];
  __n = (long)puVar7 - (long)pvVar8;
  uVar11 = (long)__n >> 3;
  uVar6 = param_2 - uVar11;
  if (param_2 < uVar11 || uVar6 == 0) {
    if (param_2 < uVar11) {
      puVar10 = (undefined8 *)((long)pvVar8 + param_2 * 8);
      while (puVar10 != puVar7) {
        puVar7 = puVar7 + -1;
        if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        pvVar8 = (void *)*puVar7;
        *puVar7 = 0;
        if (pvVar8 != (void *)0x0) {
          free(*(void **)((long)pvVar8 + 0x30));
          operator_delete(pvVar8);
        }
      }
      param_1[1] = puVar10;
    }
  }
  else {
    uVar9 = param_1[2] - (long)pvVar8;
    if ((ulong)((long)uVar9 >> 3) < param_2) {
      if (param_2 >> 0x3d == 0) {
        uVar1 = (long)uVar9 >> 2;
        if ((ulong)((long)uVar9 >> 2) <= param_2) {
          uVar1 = param_2;
        }
        if (0x7ffffffffffffff7 < uVar9) {
          uVar1 = 0x1fffffffffffffff;
        }
        if (uVar1 >> 0x3d == 0) {
          pvVar3 = operator_new(uVar1 * 8);
          if (uVar6 * 8 == 0) {
            puVar10 = (undefined8 *)((long)pvVar3 + __n);
          }
          else {
            puVar10 = (undefined8 *)((long)pvVar3 + uVar6 * 8 + __n);
            uVar6 = (ulong)((long)pvVar8 + (-(long)pvVar3 - (long)puVar7)) >> 3;
            uVar9 = (param_2 * 8 - __n) - 8 >> 3;
            if (uVar9 <= uVar6) {
              uVar6 = uVar9;
            }
            if (uVar6 < 8) {
              puVar4 = (undefined8 *)((long)pvVar3 + __n);
            }
            else {
              puVar4 = (undefined8 *)((long)pvVar3 + __n);
              if ((((int)pvVar8 - (int)puVar7) - (int)pvVar3 & 7U) == 0) {
                uVar9 = uVar6 + 1 & 3;
                uVar2 = 4;
                if (uVar9 != 0) {
                  uVar2 = uVar9;
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
              if (puVar4 == (undefined8 *)0x0) goto LAB_009ab9f8;
              puVar7 = puVar4 + 1;
              *puVar4 = 0;
              puVar4 = puVar7;
            } while (puVar7 != puVar10);
          }
          __dest = (void *)((long)pvVar3 + uVar11 * -8 + __n);
          memcpy(__dest,pvVar8,__n);
          *param_1 = __dest;
          param_1[1] = puVar10;
          param_1[2] = (void *)((long)pvVar3 + uVar1 * 8);
          if (pvVar8 == (void *)0x0) {
            return;
          }
          operator_delete(pvVar8);
          return;
        }
      }
      else {
        FUN_009aba7c();
      }
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    puVar10 = puVar7;
    if ((uVar6 & 0x1fffffffffffffff) != 0) {
      puVar10 = puVar7 + uVar6;
      uVar11 = (param_2 * 8 - __n) - 8 >> 3;
      uVar6 = (ulong)-(long)puVar7 >> 3;
      if (uVar11 <= (ulong)-(long)puVar7 >> 3) {
        uVar6 = uVar11;
      }
      if ((5 < uVar6) && ((-(int)puVar7 & 7U) == 0)) {
        uVar11 = uVar6 + 1 & 3;
        uVar9 = 4;
        if (uVar11 != 0) {
          uVar9 = uVar11;
        }
        puVar4 = puVar7 + 2;
        lVar5 = (uVar6 + 1) - uVar9;
        puVar7 = puVar7 + lVar5;
        do {
          lVar5 = lVar5 + -4;
          puVar4[-1] = 0;
          puVar4[-2] = 0;
          puVar4[1] = 0;
          *puVar4 = 0;
          puVar4 = puVar4 + 4;
        } while (lVar5 != 0);
      }
      do {
        if (puVar7 == (undefined8 *)0x0) {
LAB_009ab9f8:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar4 = puVar7 + 1;
        *puVar7 = 0;
        puVar7 = puVar4;
      } while (puVar4 != puVar10);
    }
    param_1[1] = puVar10;
  }
  return;
}


// ===== 009aba28  FUN_009aba28 =====

undefined4 FUN_009aba28(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}


// ===== 009aba34  FUN_009aba34 =====

undefined4 FUN_009aba34(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}


// ===== 009aba40  FUN_009aba40 =====

undefined4 FUN_009aba40(long param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}


// ===== 009aba4c  FUN_009aba4c =====

undefined1 FUN_009aba4c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1c);
}


// ===== 009aba58  FUN_009aba58 =====

undefined4 FUN_009aba58(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


// ===== 009aba64  FUN_009aba64 =====

undefined4 FUN_009aba64(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}


// ===== 009aba70  FUN_009aba70 =====

undefined1 FUN_009aba70(long param_1)

{
  return *(undefined1 *)(param_1 + 0x2d);
}


// ===== 009aba7c  FUN_009aba7c =====

void FUN_009aba7c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 009aba94  FUN_009aba94 =====

void FUN_009aba94(ushort *param_1,long param_2,long param_3,undefined8 param_4,int param_5,
                 undefined4 param_6,uint param_7)

{
  undefined1 uVar1;
  ulong uVar2;
  int *****pppppiVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  void *pvVar9;
  void *pvVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  long *plVar14;
  ushort *puVar15;
  int ****local_78;
  ulong local_70;
  byte bStack_61;
  
  plVar14 = *(long **)(param_2 + 8);
  uVar6 = FUN_009acc48();
  (**(code **)(*plVar14 + 0x10))(&local_78,plVar14,"WebRTC-Agc2SimdSse2KillSwitch",0x1d);
  uVar2 = local_70;
  if (-1 < (char)bStack_61) {
    uVar2 = (ulong)bStack_61;
  }
  uVar12 = uVar6;
  if (6 < uVar2) {
    pppppiVar3 = (int *****)local_78;
    if (-1 < (char)bStack_61) {
      pppppiVar3 = &local_78;
    }
    uVar12 = 0;
    if (*(int *)((long)pppppiVar3 + 3) != 0x64656c62 || *(int *)pppppiVar3 != 0x62616e45) {
      uVar12 = uVar6;
    }
  }
  if ((char)bStack_61 < '\0') {
    operator_delete(local_78);
  }
  uVar4 = uVar6 >> 8 & 0xffff;
  (**(code **)(*plVar14 + 0x10))(&local_78,plVar14,"WebRTC-Agc2SimdAvx2KillSwitch",0x1d);
  uVar2 = local_70;
  if (-1 < (char)bStack_61) {
    uVar2 = (ulong)bStack_61;
  }
  uVar11 = uVar4;
  if (6 < uVar2) {
    pppppiVar3 = (int *****)local_78;
    if (-1 < (char)bStack_61) {
      pppppiVar3 = &local_78;
    }
    uVar11 = 0;
    if (*(int *)((long)pppppiVar3 + 3) != 0x64656c62 || *(int *)pppppiVar3 != 0x62616e45) {
      uVar11 = uVar4;
    }
  }
  if ((char)bStack_61 < '\0') {
    operator_delete(local_78);
  }
  (**(code **)(*plVar14 + 0x10))(&local_78,plVar14,"WebRTC-Agc2SimdNeonKillSwitch",0x1d);
  if (-1 < (char)bStack_61) {
    local_70 = (ulong)bStack_61;
  }
  if (local_70 < 7) {
    bVar5 = false;
  }
  else {
    pppppiVar3 = (int *****)local_78;
    if (-1 < (char)bStack_61) {
      pppppiVar3 = &local_78;
    }
    bVar5 = *(int *)pppppiVar3 == 0x62616e45 && *(int *)((long)pppppiVar3 + 3) == 0x64656c62;
  }
  if ((char)bStack_61 < '\0') {
    operator_delete(local_78);
  }
  uVar1 = 0;
  if (!bVar5) {
    uVar1 = (char)(uVar6 >> 0x10);
  }
  *param_1 = (ushort)uVar12 & 0xff | (ushort)(uVar11 << 8);
  *(undefined1 *)(param_1 + 1) = uVar1;
  iVar7 = FUN_00d0f7a0(1,&DAT_00d8087c);
  FUN_0065b3d8((long)param_1 + 3,iVar7 + 1);
  powf(10.0,*(float *)(param_3 + 0x1c) / 20.0);
  FUN_009ac944(param_1 + 2,0);
  puVar15 = param_1 + 0xc;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  puVar15[0] = 0;
  puVar15[1] = 0;
  puVar15[2] = 0;
  puVar15[3] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  FUN_00997380(param_1 + 0x24,(long)param_1 + 3,(ulong)(long)param_5 / 100,&DAT_001c6ab8,4);
  param_1[0x44c] = 0;
  param_1[0x44d] = 0;
  *(undefined1 *)(param_1 + 0x44e) = 0;
  *(undefined1 *)(param_1 + 0x450) = 0;
  pbVar13 = (byte *)(param_3 + 4);
  if (((*(byte *)(param_3 + 1) & 1) != 0) || ((*pbVar13 & 1) != 0)) {
    uVar8 = FUN_009afd48(*(undefined8 *)(param_2 + 8),(long)param_1 + 3,pbVar13,0xc);
    plVar14 = *(long **)(param_1 + 0x14);
    *(undefined8 *)(param_1 + 0x14) = uVar8;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 8))(plVar14);
    }
    if ((param_7 & 1) != 0) {
      pvVar9 = operator_new(0x98);
      FUN_009b022c(pvVar9,0x5dc,param_1,param_5);
      pvVar10 = *(void **)(param_1 + 0x10);
      *(void **)(param_1 + 0x10) = pvVar9;
      if (pvVar10 != (void *)0x0) {
        FUN_009b04e4(pvVar10);
        operator_delete(pvVar10);
      }
    }
  }
  if (*(char *)(param_3 + 1) == '\x01') {
    uVar8 = *(undefined8 *)(param_2 + 8);
    pvVar9 = operator_new(0x68);
    FUN_009ad01c(pvVar9,param_6,param_4,uVar8);
    pvVar10 = *(void **)(param_1 + 0x18);
    *(void **)(param_1 + 0x18) = pvVar9;
    if (pvVar10 != (void *)0x0) {
      FUN_009ad3a4(pvVar10);
      operator_delete(pvVar10);
      pvVar9 = *(void **)(param_1 + 0x18);
    }
    FUN_009ad468(pvVar9);
  }
  if (*pbVar13 == 1) {
    uVar8 = FUN_009af6bc((long)param_1 + 3);
    plVar14 = *(long **)puVar15;
    *(undefined8 *)puVar15 = uVar8;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 8))(plVar14);
    }
    uVar8 = FUN_009af994(0x41a00000,0xc,(long)param_1 + 3);
    plVar14 = *(long **)(param_1 + 0x1c);
    *(undefined8 *)(param_1 + 0x1c) = uVar8;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 8))(plVar14);
    }
    pvVar9 = operator_new(0x48);
    FUN_009ac4e4(pvVar9,(long)param_1 + 3,pbVar13,0xc);
    pvVar10 = *(void **)(param_1 + 0x20);
    *(void **)(param_1 + 0x20) = pvVar9;
    if (pvVar10 != (void *)0x0) {
      operator_delete(pvVar10);
    }
  }
  return;
}


// ===== 009abeb0  FUN_009abeb0 =====

void FUN_009abeb0(long param_1)

{
  void *pvVar1;
  long *plVar2;
  
  thunk_FUN_00997dbc(param_1 + 0x48);
  pvVar1 = *(void **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  plVar2 = *(long **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  pvVar1 = *(void **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_009ad3a4(pvVar1);
    operator_delete(pvVar1);
  }
  plVar2 = *(long **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  pvVar1 = *(void **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_009b04e4(pvVar1);
    operator_delete(pvVar1);
  }
  plVar2 = *(long **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_0065b3e0(param_1 + 3);
  return;
}


// ===== 009abf7c  FUN_009abf7c =====

void FUN_009abf7c(long param_1,uint param_2)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_009adcb0(*(long *)(param_1 + 0x30),param_2 & 1);
    return;
  }
  return;
}


// ===== 009abf94  FUN_009abf94 =====

void FUN_009abf94(float param_1,long param_2)

{
  float fVar1;
  
  fVar1 = powf(10.0,param_1 / 20.0);
  if (*(float *)(param_2 + 0xc) != fVar1) {
    FUN_00997a7c(param_2 + 0x48);
  }
  FUN_009acc3c(fVar1,param_2 + 4);
  return;
}


// ===== 009abff0  FUN_009abff0 =====

void FUN_009abff0(long param_1)

{
  if (*(char *)(param_1 + 0x8a0) == '\x01') {
    *(undefined1 *)(param_1 + 0x8a0) = 0;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_009ad564();
    return;
  }
  return;
}


// ===== 009ac014  FUN_009ac014 =====

void FUN_009ac014(long param_1,ulong param_2,long param_3)

{
  int iVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  float *pfVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  undefined1 uStack_1a9;
  char *local_1a8;
  undefined8 uStack_1a0;
  undefined1 *local_198;
  char *pcStack_190;
  char **local_188;
  char *local_180;
  char **ppcStack_178;
  undefined1 *local_170;
  char **ppcStack_168;
  char *local_160;
  undefined1 **ppuStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined1 *puStack_138;
  undefined1 *puStack_130;
  undefined1 *puStack_128;
  long local_120;
  ulong uStack_118;
  long *local_110;
  undefined1 local_108;
  undefined4 local_107;
  undefined2 local_103;
  undefined1 local_101;
  long local_100;
  ulong uStack_f8;
  long *local_f0;
  undefined1 local_e8;
  undefined4 local_e7;
  undefined2 local_e3;
  undefined1 local_e1;
  long local_e0;
  ulong uStack_d8;
  long *local_d0;
  undefined1 local_c8;
  undefined4 local_c7;
  undefined2 local_c3;
  undefined1 local_c1;
  long local_c0;
  ulong uStack_b8;
  long *local_b0;
  undefined1 local_a8;
  long local_a0;
  ulong uStack_98;
  long *local_90;
  undefined1 local_88;
  
  if (*(char *)(param_1 + 0x8a0) == '\x01') {
    *(undefined1 *)(param_1 + 0x8a0) = 0;
  }
  if ((param_2 & 1) != 0) {
    if (*(long **)(param_1 + 0x28) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x28) + 0x28))();
    }
    if (*(long **)(param_1 + 0x38) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x38) + 0x20))();
    }
  }
  lVar9 = *(long *)(param_3 + 0x48);
  uVar10 = *(ulong *)(param_3 + 0x20);
  if ((lVar9 == 0) || (uVar10 == 0)) {
    plVar11 = (long *)0x0;
  }
  else {
    plVar11 = *(long **)(*(long *)(param_3 + 0x60) + 8);
  }
  fVar18 = 0.0;
  uVar12 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    local_88 = 0;
    local_a0 = lVar9;
    uStack_98 = uVar10;
    local_90 = plVar11;
    uVar12 = FUN_009b05c4(*(long *)(param_1 + 0x20),&local_a0);
  }
  lVar4 = uVar10 << 2;
  pfVar6 = (float *)0x0;
  if (uVar10 != 0) {
    pfVar6 = (float *)*plVar11;
  }
  if (lVar4 == 0) {
LAB_009ac134:
    fVar13 = -90.309;
  }
  else {
    fVar13 = 0.0;
    do {
      fVar17 = *pfVar6;
      fVar18 = fVar18 + fVar17 * fVar17;
      if (fVar13 <= ABS(fVar17)) {
        fVar13 = ABS(fVar17);
      }
      lVar4 = lVar4 + -4;
      pfVar6 = pfVar6 + 1;
    } while (lVar4 != 0);
    if (fVar13 <= 1.0) goto LAB_009ac134;
    fVar13 = log10f(fVar13);
    fVar13 = fVar13 * 20.0 + -90.309;
  }
  fVar17 = -90.309;
  if (SQRT(fVar18 / (float)uVar10) <= 1.0) {
    plVar7 = *(long **)(param_1 + 0x18);
    if (plVar7 == (long *)0x0) goto LAB_009ac234;
LAB_009ac17c:
    local_a8 = 0;
    local_c0 = lVar9;
    uStack_b8 = uVar10;
    local_b0 = plVar11;
    uVar14 = (**(code **)(*plVar7 + 0x10))(plVar7,&local_c0);
    plVar8 = *(long **)(param_1 + 0x28);
    uVar16 = uVar14;
    if (plVar8 != (long *)0x0) goto LAB_009ac1a8;
LAB_009ac244:
    if (*(long *)(param_1 + 0x30) != 0) goto LAB_009ac45c;
    bVar2 = 0;
    uVar15 = 0xffffffff;
    lVar4 = *(long *)(param_1 + 0x40);
    uVar14 = uVar16;
  }
  else {
    fVar18 = log10f(SQRT(fVar18 / (float)uVar10));
    fVar17 = fVar18 * 20.0 + -90.309;
    plVar7 = *(long **)(param_1 + 0x18);
    if (plVar7 != (long *)0x0) goto LAB_009ac17c;
LAB_009ac234:
    uVar14 = 0xffffff00;
    uVar16 = 0xffffff00;
    plVar8 = *(long **)(param_1 + 0x28);
    if (plVar8 == (long *)0x0) goto LAB_009ac244;
LAB_009ac1a8:
    (**(code **)(*plVar8 + 0x10))(fVar17,uVar12,plVar8);
    bVar2 = (**(code **)(**(long **)(param_1 + 0x28) + 0x20))();
    uVar15 = (**(code **)(**(long **)(param_1 + 0x28) + 0x18))(*(long **)(param_1 + 0x28));
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar5 = (ulong)uVar15 | 0x100000000;
      if ((bVar2 & 1) == 0) {
        uVar5 = 0;
      }
      uVar3 = FUN_009ada5c(uVar12,*(long *)(param_1 + 0x30),uVar5);
      *(int *)(param_1 + 0x89c) = (int)uVar3;
      *(char *)(param_1 + 0x8a0) = (char)((ulong)uVar3 >> 0x20);
    }
    lVar4 = *(long *)(param_1 + 0x40);
  }
  if (lVar4 != 0) {
    if (plVar8 == (long *)0x0) {
LAB_009ac45c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                );
    }
    (**(code **)(**(long **)(param_1 + 0x38) + 0x18))(uVar12,fVar13,uVar15);
    uVar16 = (**(code **)(**(long **)(param_1 + 0x38) + 0x10))();
    fVar18 = (float)FUN_00997a88(param_1 + 0x48);
    if (fVar18 <= 1.0) {
      fVar18 = -90.309;
    }
    else {
      fVar18 = log10f(fVar18);
      fVar18 = fVar18 * 20.0 + -90.309;
    }
    local_150 = (undefined1 *)CONCAT44(uVar15,uVar12);
    uStack_148 = (undefined1 *)(CONCAT71(uStack_148._1_7_,bVar2) & 0xffffffffffffff01);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    local_c7 = 0xaaaaaaaa;
    local_c3 = 0xaaaa;
    uStack_148 = (undefined1 *)CONCAT44(uVar14,(undefined4)uStack_148);
    local_140 = (undefined1 *)CONCAT44(fVar18,uVar16);
    local_c8 = 0;
    local_c1 = 0xaa;
    local_e0 = lVar9;
    uStack_d8 = uVar10;
    local_d0 = plVar11;
    FUN_009ac57c(*(undefined8 *)(param_1 + 0x40),&local_150,&local_e0);
  }
  local_e8 = 0;
  local_e3 = 0xaaaa;
  local_e1 = 0xaa;
  local_e7 = 0xaaaaaaaa;
  local_100 = lVar9;
  uStack_f8 = uVar10;
  local_f0 = plVar11;
  FUN_009ac960(param_1 + 4,&local_100);
  local_108 = 0;
  local_107 = 0xaaaaaaaa;
  local_103 = 0xaaaa;
  local_101 = 0xaa;
  local_120 = lVar9;
  uStack_118 = uVar10;
  local_110 = plVar11;
  FUN_009973f4(param_1 + 0x48,&local_120);
  iVar1 = *(int *)(param_1 + 0x898) + 1;
  *(int *)(param_1 + 0x898) = iVar1;
  if (iVar1 == 3000) {
    *(undefined4 *)(param_1 + 0x898) = 0;
    puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
    local_140 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_148 = &DAT_aaaaaaaaaaaaaaaa;
    local_150 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00997a54(&local_150,param_1 + 0x48);
    uVar10 = FUN_00417e08();
    if ((uVar10 & 1) == 0) {
      local_1a8 = "../../modules/audio_processing/gain_controller2.cc";
      uStack_1a0 = 0x849;
      local_188 = &local_1a8;
      local_198 = &uStack_1a9;
      ppcStack_178 = &pcStack_190;
      pcStack_190 = "[AGC2] limiter stats";
      local_180 = " | identity: ";
      ppcStack_168 = &local_180;
      local_170 = local_150;
      ppuStack_158 = &local_170;
      local_160 = " | knee: ";
      FUN_00623bb0(&DAT_0022b630,"../../modules/audio_processing/gain_controller2.cc",0x849);
    }
  }
  return;
}


// ===== 009ac484  FUN_009ac484 =====

bool FUN_009ac484(long param_1)

{
  bool bVar1;
  ushort uVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  bVar1 = false;
  auVar6 = NEON_fcmge(*(undefined1 (*) [16])(param_1 + 8),0,4);
  auVar4 = NEON_fcmgt(*(undefined1 (*) [16])(param_1 + 8),0,4);
  uVar5 = NEON_rev32(CONCAT26(auVar6._12_2_,
                              CONCAT24(auVar6._8_2_,CONCAT22(auVar6._4_2_,auVar6._0_2_))),2);
  uVar2 = NEON_uminv(CONCAT26(auVar4._12_2_,
                              (int6)CONCAT44(CONCAT22(auVar4._12_2_,(short)((ulong)uVar5 >> 0x30)),
                                             CONCAT22(auVar4._4_2_,(short)((ulong)uVar5 >> 0x10)))),
                     2);
  if ((((uVar2 & 1) != 0) && (fVar3 = *(float *)(param_1 + 0x1c), fVar3 < 0.0 == NAN(fVar3))) &&
     (fVar3 < 50.0)) {
    bVar1 = *(float *)(param_1 + 0x18) <= 0.0;
  }
  return bVar1;
}


// ===== 009ac4e4  FUN_009ac4e4 =====

void FUN_009ac4e4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = param_2;
  powf(10.0,*(float *)((long)param_3 + 0xc) / 20.0);
  FUN_009ac944(param_1 + 1,0);
  uVar1 = param_3[2];
  uVar3 = param_3[1];
  uVar2 = *param_3;
  *(undefined4 *)((long)param_1 + 0x34) = param_4;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 8) = param_4;
  *(undefined8 *)((long)param_1 + 0x2c) = uVar1;
  *(undefined8 *)((long)param_1 + 0x24) = uVar3;
  *(undefined8 *)((long)param_1 + 0x1c) = uVar2;
  *(float *)(param_1 + 7) = (*(float *)((long)param_1 + 0x2c) * 10.0) / 1000.0;
  *(undefined4 *)((long)param_1 + 0x44) = *(undefined4 *)(param_1 + 5);
  return;
}


// ===== 009ac57c  FUN_009ac57c =====

void FUN_009ac57c(long param_1,float *param_2,undefined8 *param_3)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 uStack_a9;
  char *local_a8;
  undefined8 uStack_a0;
  undefined1 *local_98;
  char *pcStack_90;
  char **local_88;
  char *local_80;
  char **ppcStack_78;
  double local_70;
  char **local_68;
  char *local_60;
  double *pdStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  fVar7 = param_2[1] + param_2[4];
  fVar6 = *(float *)(param_1 + 0x24);
  if (-(*(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x24)) <= fVar7) {
    fVar5 = -*(float *)(param_1 + 0x20);
    fVar6 = 0.0;
    if (fVar7 < fVar5) {
      fVar6 = fVar5 - fVar7;
    }
  }
  fVar5 = *(float *)(param_1 + 0x30) - param_2[3];
  fVar7 = 0.0;
  if (0.0 <= fVar5) {
    fVar7 = fVar5;
  }
  if (fVar6 <= fVar7) {
    fVar7 = fVar6;
  }
  fVar6 = *(float *)(param_1 + 0x44);
  if ((-1.0 < param_2[5]) && (((uint)param_2[2] & 1) == 0)) {
    fVar8 = (fVar6 - param_2[5]) + -1.0;
    fVar5 = 0.0;
    if (0.0 <= fVar8) {
      fVar5 = fVar8;
    }
    if (fVar5 <= fVar7) {
      fVar7 = fVar5;
    }
  }
  if (0.95 <= *param_2) {
    iVar4 = *(int *)(param_1 + 0x40);
    if (iVar4 < 1) goto LAB_009ac678;
    fVar5 = *(float *)(param_1 + 0x38);
    *(int *)(param_1 + 0x40) = iVar4 + -1;
    if (iVar4 + -1 == 0) {
      bVar1 = true;
      fVar8 = fVar5 * (float)*(int *)(param_1 + 0x34);
    }
    else {
      bVar1 = false;
      fVar8 = fVar5;
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x34);
    *(int *)(param_1 + 0x40) = iVar4;
LAB_009ac678:
    fVar5 = *(float *)(param_1 + 0x38);
    bVar1 = iVar4 == 0;
    fVar8 = fVar5;
  }
  fVar7 = fVar7 - fVar6;
  if (fVar7 == 0.0 || fVar7 < 0.0 != NAN(fVar7)) {
    bVar1 = true;
  }
  if (!bVar1) {
    fVar7 = 0.0;
  }
  if (fVar7 < fVar8 != (NAN(fVar7) || NAN(fVar8))) {
    fVar8 = fVar7;
  }
  fVar9 = -fVar5;
  if (-fVar5 < fVar7) {
    fVar9 = fVar8;
  }
  if (fVar9 != 0.0) {
    powf(10.0,(fVar6 + fVar9) / 20.0);
    FUN_009acc3c(param_1 + 8);
  }
  uStack_48 = param_3[1];
  local_50 = *param_3;
  uStack_38 = param_3[3];
  local_40 = param_3[2];
  FUN_009ac960(param_1 + 8,&local_50);
  iVar4 = *(int *)(param_1 + 0x3c) + 1;
  *(int *)(param_1 + 0x3c) = iVar4;
  *(float *)(param_1 + 0x44) = fVar9 + *(float *)(param_1 + 0x44);
  if (iVar4 != 1000) {
    return;
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  lVar2 = DAT_00d80880;
  if (DAT_00d80880 == 0) {
    lVar2 = FUN_006660d8("WebRTC.Audio.Agc2.EstimatedSpeechLevel",0x26,0,100,0x65);
    FUN_00d0f5e0(0,lVar2,&DAT_00d80880);
    if (lVar2 != 0) goto LAB_009ac75c;
  }
  else {
LAB_009ac75c:
    FUN_00666568(lVar2,(int)-param_2[1]);
  }
  lVar2 = DAT_00d80888;
  if (DAT_00d80888 == 0) {
    lVar2 = FUN_006660d8("WebRTC.Audio.Agc2.EstimatedNoiseLevel",0x25,0,100,0x65);
    FUN_00d0f5e0(0,lVar2,&DAT_00d80888);
    if (lVar2 != 0) goto LAB_009ac7b8;
  }
  else {
LAB_009ac7b8:
    FUN_00666568(lVar2,(int)-param_2[3]);
  }
  lVar2 = DAT_00d80890;
  if (DAT_00d80890 == 0) {
    lVar2 = FUN_006660d8("WebRTC.Audio.Agc2.Headroom",0x1a,0,0x32,0x33);
    FUN_00d0f5e0(0,lVar2,&DAT_00d80890);
    if (lVar2 != 0) goto LAB_009ac814;
  }
  else {
LAB_009ac814:
    FUN_00666568(lVar2,(int)param_2[4]);
  }
  lVar2 = DAT_00d80898;
  if (DAT_00d80898 == 0) {
    lVar2 = FUN_006660d8("WebRTC.Audio.Agc2.DigitalGainApplied",0x24,0,0x1e,0x1f);
    FUN_00d0f5e0(0,lVar2,&DAT_00d80898);
    if (lVar2 == 0) goto LAB_009ac87c;
  }
  FUN_00666568(lVar2,(int)*(float *)(param_1 + 0x44));
LAB_009ac87c:
  uVar3 = FUN_00417e08();
  if ((uVar3 & 1) == 0) {
    local_a8 = "../../modules/audio_processing/agc2/adaptive_digital_gain_controller.cc";
    uStack_a0 = 0x691;
    local_88 = &local_a8;
    local_70 = (double)param_2[1];
    ppcStack_78 = &pcStack_90;
    local_98 = &uStack_a9;
    local_80 = " | speech_dbfs: ";
    local_68 = &local_80;
    pdStack_58 = &local_70;
    pcStack_90 = "AGC2 adaptive digital";
    local_60 = " | noise_dbfs: ";
    FUN_00623bb0(local_70,(double)param_2[3],(double)param_2[4],(double)*(float *)(param_1 + 0x44),
                 &DAT_0022b63b,
                 "../../modules/audio_processing/agc2/adaptive_digital_gain_controller.cc",0x691);
  }
  return;
}


// ===== 009ac944  FUN_009ac944 =====

void FUN_009ac944(undefined4 param_1,undefined1 *param_2,undefined1 param_3)

{
  *param_2 = param_3;
  *(undefined4 *)(param_2 + 4) = param_1;
  *(undefined4 *)(param_2 + 8) = param_1;
  *(undefined8 *)(param_2 + 0xc) = 0xbf800000ffffffff;
  return;
}


// ===== 009ac960  FUN_009ac960 =====

void FUN_009ac960(char *param_1,long *param_2)

{
  ulong uVar1;
  float *pfVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  long lVar8;
  bool bVar9;
  bool bVar10;
  float *pfVar11;
  undefined1 (*pauVar12) [16];
  float *pfVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  
  lVar16 = param_2[1];
  iVar15 = (int)lVar16;
  if (*(int *)(param_1 + 0xc) != iVar15) {
    *(int *)(param_1 + 0xc) = iVar15;
    *(float *)(param_1 + 0x10) = 1.0 / (float)iVar15;
    lVar16 = param_2[1];
  }
  fVar22 = *(float *)(param_1 + 4);
  fVar21 = *(float *)(param_1 + 8);
  lVar17 = *param_2;
  lVar18 = param_2[2];
  bVar3 = *(byte *)(param_2 + 3);
  if (fVar22 == fVar21) {
    bVar9 = true;
    bVar10 = false;
    if (fVar21 <= 1.0000305) {
      bVar9 = false;
      bVar10 = true;
      if (!NAN(fVar21)) {
        bVar9 = fVar21 < 0.9999695;
        bVar10 = false;
      }
    }
    if ((bVar9 != bVar10) && (lVar17 != 0)) {
      if (1 < bVar3) goto LAB_009acc38;
      lVar20 = 0;
      uVar19 = lVar16 * 4 - 4;
      uVar1 = (uVar19 >> 2) + 1;
      do {
        if (bVar3 == 0) {
          pfVar11 = *(float **)(lVar18 + lVar20 * 8);
        }
        else {
          pfVar11 = (float *)(lVar18 + lVar20 * lVar16 * 4);
        }
        pfVar2 = (float *)0x0;
        if (lVar16 != 0) {
          pfVar2 = pfVar11;
        }
        if (lVar16 * 4 != 0) {
          pfVar11 = pfVar2;
          if ((0x1b < uVar19) && (pfVar2 <= pfVar2 + lVar16 + -1)) {
            pfVar11 = pfVar2 + (uVar1 & 0x7ffffffffffffff8);
            pfVar13 = pfVar2 + 4;
            uVar14 = uVar1 & 0x7ffffffffffffff8;
            do {
              uVar14 = uVar14 - 8;
              *(ulong *)(pfVar13 + -2) =
                   CONCAT44((float)((ulong)*(undefined8 *)(pfVar13 + -2) >> 0x20) * fVar21,
                            (float)*(undefined8 *)(pfVar13 + -2) * fVar21);
              *(ulong *)(pfVar13 + -4) =
                   CONCAT44((float)((ulong)*(undefined8 *)(pfVar13 + -4) >> 0x20) * fVar21,
                            (float)*(undefined8 *)(pfVar13 + -4) * fVar21);
              *(ulong *)(pfVar13 + 2) =
                   CONCAT44((float)((ulong)*(undefined8 *)(pfVar13 + 2) >> 0x20) * fVar21,
                            (float)*(undefined8 *)(pfVar13 + 2) * fVar21);
              *(ulong *)pfVar13 =
                   CONCAT44((float)((ulong)*(undefined8 *)pfVar13 >> 0x20) * fVar21,
                            (float)*(undefined8 *)pfVar13 * fVar21);
              pfVar13 = pfVar13 + 8;
            } while (uVar14 != 0);
            if (uVar1 == (uVar1 & 0x7ffffffffffffff8)) goto LAB_009aca00;
          }
          do {
            pfVar13 = pfVar11 + 1;
            *pfVar11 = fVar21 * *pfVar11;
            pfVar11 = pfVar13;
          } while (pfVar13 != pfVar2 + lVar16);
        }
LAB_009aca00:
        lVar20 = lVar20 + 1;
      } while (lVar20 != lVar17);
    }
  }
  else if (lVar17 != 0) {
    if (1 < bVar3) goto LAB_009acc38;
    fVar23 = *(float *)(param_1 + 0x10);
    lVar20 = 0;
    do {
      if (bVar3 == 0) {
        pfVar11 = *(float **)(lVar18 + lVar20 * 8);
      }
      else {
        pfVar11 = (float *)(lVar18 + lVar20 * lVar16 * 4);
      }
      fVar7 = fVar22;
      lVar8 = lVar16 << 2;
      pfVar2 = (float *)0x0;
      if (lVar16 != 0) {
        pfVar2 = pfVar11;
      }
      for (; lVar8 != 0; lVar8 = lVar8 + -4) {
        *pfVar2 = fVar7 * *pfVar2;
        fVar7 = (fVar21 - fVar22) * fVar23 + fVar7;
        pfVar2 = pfVar2 + 1;
      }
      lVar20 = lVar20 + 1;
    } while (lVar20 != lVar17);
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 8);
  if ((*param_1 == '\x01') && (lVar16 = *param_2, lVar16 != 0)) {
    bVar3 = *(byte *)(param_2 + 3);
    if (1 < bVar3) {
LAB_009acc38:
                    /* WARNING: Subroutine does not return */
      FUN_005ee558();
    }
    lVar18 = param_2[1];
    lVar20 = param_2[2];
    lVar17 = 0;
    uVar19 = lVar18 * 4 - 4;
    uVar1 = (uVar19 >> 2) + 1;
    do {
      if (bVar3 == 0) {
        pfVar11 = *(float **)(lVar20 + lVar17 * 8);
      }
      else {
        pfVar11 = (float *)(lVar20 + lVar17 * lVar18 * 4);
      }
      pfVar2 = (float *)0x0;
      if (lVar18 != 0) {
        pfVar2 = pfVar11;
      }
      if (lVar18 * 4 != 0) {
        pfVar11 = pfVar2;
        if ((0x1b < uVar19) && (pfVar2 <= pfVar2 + lVar18 + -1)) {
          pfVar11 = pfVar2 + (uVar1 & 0x7ffffffffffffff8);
          pauVar12 = (undefined1 (*) [16])(pfVar2 + 4);
          uVar14 = uVar1 & 0x7ffffffffffffff8;
          do {
            auVar25 = pauVar12[-1];
            auVar4 = *pauVar12;
            uVar14 = uVar14 - 8;
            auVar27._8_4_ = 0x46fffe00;
            auVar27._0_8_ = 0x46fffe0046fffe00;
            auVar27._12_4_ = 0x46fffe00;
            auVar26 = NEON_fcmge(auVar25,auVar27,4);
            auVar28._8_4_ = 0x46fffe00;
            auVar28._0_8_ = 0x46fffe0046fffe00;
            auVar28._12_4_ = 0x46fffe00;
            auVar28 = NEON_fcmge(auVar4,auVar28,4);
            auVar24._8_4_ = 0xc7000000;
            auVar24._0_8_ = 0xc7000000c7000000;
            auVar24._12_4_ = 0xc7000000;
            auVar29 = NEON_fcmge(auVar24,auVar25,4);
            auVar5._8_4_ = 0x46fffe00;
            auVar5._0_8_ = 0x46fffe0046fffe00;
            auVar5._12_4_ = 0x46fffe00;
            auVar24 = NEON_bit(auVar25,auVar5,auVar26,1);
            auVar25._8_4_ = 0xc7000000;
            auVar25._0_8_ = 0xc7000000c7000000;
            auVar25._12_4_ = 0xc7000000;
            auVar27 = NEON_fcmge(auVar25,auVar4,4);
            auVar6._8_4_ = 0x46fffe00;
            auVar6._0_8_ = 0x46fffe0046fffe00;
            auVar6._12_4_ = 0x46fffe00;
            auVar25 = NEON_bit(auVar4,auVar6,auVar28,1);
            auVar4._8_4_ = 0xc7000000;
            auVar4._0_8_ = 0xc7000000c7000000;
            auVar4._12_4_ = 0xc7000000;
            auVar24 = NEON_bit(auVar24,auVar4,auVar29,1);
            auVar26._8_4_ = 0xc7000000;
            auVar26._0_8_ = 0xc7000000c7000000;
            auVar26._12_4_ = 0xc7000000;
            auVar25 = NEON_bit(auVar25,auVar26,auVar27,1);
            *(long *)(pauVar12[-1] + 8) = auVar24._8_8_;
            *(long *)pauVar12[-1] = auVar24._0_8_;
            *(long *)(*pauVar12 + 8) = auVar25._8_8_;
            *(long *)*pauVar12 = auVar25._0_8_;
            pauVar12 = pauVar12 + 2;
          } while (uVar14 != 0);
          if (uVar1 == (uVar1 & 0x7ffffffffffffff8)) goto LAB_009acb70;
        }
        do {
          fVar22 = *pfVar11;
          fVar21 = 32767.0;
          if (fVar22 < 32767.0 != NAN(fVar22)) {
            fVar21 = fVar22;
          }
          fVar23 = -32768.0;
          if (-32768.0 < fVar22) {
            fVar23 = fVar21;
          }
          pfVar13 = pfVar11 + 1;
          *pfVar11 = fVar23;
          pfVar11 = pfVar13;
        } while (pfVar13 != pfVar2 + lVar18);
      }
LAB_009acb70:
      lVar17 = lVar17 + 1;
    } while (lVar17 != lVar16);
  }
  return;
}


// ===== 009acc3c  FUN_009acc3c =====

void FUN_009acc3c(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 8) = param_1;
  return;
}


// ===== 009acc48  FUN_009acc48 =====

undefined8 FUN_009acc48(void)

{
  return 0x10000;
}


// ===== 009acc54  FUN_009acc54 =====

undefined8 FUN_009acc54(void)

{
  return 0;
}


// ===== 009acc60  FUN_009acc60 =====

void FUN_009acc60(float param_1,uint *param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  float fVar4;
  
  if (*(char *)((long)param_2 + 0x11) == '\x01') {
    uVar3 = param_2[5];
    *(undefined1 *)((long)param_2 + 0x11) = 0;
    if (uVar3 == 0) {
      if ((*(byte *)((long)param_2 + 0x12) & 1) == 0) goto LAB_009acd04;
    }
    else if (0xff < uVar3) {
      uVar2 = FUN_004249b0();
      if ((uVar2 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e94,"../../modules/audio_processing/agc2/input_volume_controller.cc",
                     0xa7b,"[AGC2] Invalid value for the applied input volume: ",uVar3);
      }
      goto LAB_009acd04;
    }
    uVar1 = *param_2;
    if ((int)uVar3 < (int)uVar1) {
      param_2[5] = uVar1;
      uVar3 = uVar1;
    }
    param_2[3] = uVar3;
    *(undefined1 *)((long)param_2 + 0x12) = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    *(undefined1 *)(param_2 + 10) = 1;
  }
LAB_009acd04:
  if (param_1 < (float)param_2[0xb] == (NAN(param_1) || NAN((float)param_2[0xb]))) {
    param_2[9] = param_2[9] + 1;
  }
  uVar3 = param_2[8];
  param_2[8] = uVar3 + 1;
  if ((int)param_2[7] <= (int)(uVar3 + 1)) {
    uVar3 = param_2[9];
    param_2[8] = 0;
    param_2[9] = 0;
    if (((param_2[10] & 1) == 0) &&
       (fVar4 = (float)(int)uVar3 / (float)(int)param_2[7],
       fVar4 < (float)param_2[0xc] == (NAN(fVar4) || NAN((float)param_2[0xc])) &&
       (param_3 & 0x100000000) != 0)) {
      FUN_009acd88(param_2,param_3 & 0xffffffff);
    }
  }
  *(undefined1 *)(param_2 + 10) = 0;
  return;
}


// ===== 009acd88  FUN_009acd88 =====

void FUN_009acd88(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  
  iVar7 = param_2;
  if (param_2 == -0xf || param_2 + 0xf < 0 != SCARRY4(param_2,0xf)) {
    iVar7 = -0xf;
  }
  if (0xe < iVar7) {
    iVar7 = 0xf;
  }
  if (param_2 == 0) {
    return;
  }
  uVar3 = param_1[3];
  if (param_2 < 1) {
    if (uVar3 < 0x100) {
      uVar8 = uVar3;
      do {
        if (((int)uVar8 <= *param_1) ||
           (*(int *)(&DAT_0022b648 + (ulong)uVar8 * 4) - *(int *)(&DAT_0022b648 + (ulong)uVar3 * 4)
            <= iVar7)) goto LAB_009acdfc;
        uVar8 = uVar8 - 1;
      } while ((uVar8 | uVar3) < 0x100);
    }
  }
  else if (uVar3 < 0x100) {
    lVar9 = (ulong)uVar3 * 4;
    uVar8 = uVar3 - 1;
    piVar1 = (int *)(&DAT_0022b648 + lVar9);
    do {
      uVar8 = uVar8 + 1;
      if (lVar9 == 0x3fc) break;
      piVar2 = (int *)(&DAT_0022b648 + lVar9);
      lVar9 = lVar9 + 4;
    } while (*piVar2 - *piVar1 < iVar7);
LAB_009acdfc:
    uVar4 = param_1[5];
    if (uVar4 == 0) {
      return;
    }
    if (0xff < uVar4) {
      uVar6 = FUN_004249b0();
      if ((uVar6 & 1) != 0) {
        return;
      }
      FUN_00623bb0(&DAT_001f4e94,"../../modules/audio_processing/agc2/input_volume_controller.cc",
                   0x823,"[AGC2] Invalid value for the applied input volume: ",uVar4);
      return;
    }
    if ((uVar3 + 0x19 < uVar4) || ((int)uVar4 < (int)(uVar3 - 0x19))) {
      param_1[3] = uVar4;
      if (param_1[2] < (int)uVar4) {
        param_1[2] = uVar4;
      }
      *(undefined1 *)(param_1 + 10) = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      return;
    }
    uVar4 = param_1[2];
    if ((int)uVar8 <= param_1[2]) {
      uVar4 = uVar8;
    }
    if (uVar4 == uVar3) {
      return;
    }
    param_1[5] = uVar4;
    param_1[3] = uVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(0x5512,0x9ace8c);
  (*pcVar5)();
}


// ===== 009acef0  FUN_009acef0 =====

void FUN_009acef0(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 4);
  iVar3 = *(int *)(param_1 + 8) - param_2;
  iVar1 = iVar6;
  if (iVar6 <= iVar3) {
    iVar1 = iVar3;
  }
  *(int *)(param_1 + 8) = iVar1;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    lVar4 = FUN_0066631c("WebRTC.Audio.AgcClippingAdjustmentAllowed",0x29,2);
    iVar6 = *(int *)(param_1 + 4);
    if (lVar4 != 0) {
      FUN_00666568(lVar4,iVar6 <= *(int *)(param_1 + 0xc) - param_2);
      iVar6 = *(int *)(param_1 + 4);
    }
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar6 < iVar1) {
    uVar2 = *(uint *)(param_1 + 0x14);
    if (iVar6 <= iVar1 - param_2) {
      iVar6 = iVar1 - param_2;
    }
    if (uVar2 != 0) {
      if (uVar2 < 0x100) {
        if ((iVar1 + 0x19 < (int)uVar2) || ((int)uVar2 < iVar1 + -0x19)) {
          *(uint *)(param_1 + 0xc) = uVar2;
          if (*(int *)(param_1 + 8) < (int)uVar2) {
            *(uint *)(param_1 + 8) = uVar2;
          }
        }
        else {
          iVar3 = *(int *)(param_1 + 8);
          if (iVar6 <= *(int *)(param_1 + 8)) {
            iVar3 = iVar6;
          }
          if (iVar3 != iVar1) {
            *(int *)(param_1 + 0x14) = iVar3;
            *(int *)(param_1 + 0xc) = iVar3;
          }
        }
      }
      else {
        uVar5 = FUN_004249b0();
        if ((uVar5 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e94,
                       "../../modules/audio_processing/agc2/input_volume_controller.cc",0x823,
                       "[AGC2] Invalid value for the applied input volume: ",uVar2);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}


// ===== 009ad01c  FUN_009ad01c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009ad01c(int *param_1,int param_2,int *param_3,long *param_4)

{
  int **ppiVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int *piVar9;
  void *pvVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  int *local_70;
  ulong uStack_68;
  undefined4 local_60;
  undefined8 uStack_5c;
  undefined4 local_54;
  
  *param_1 = param_2;
  iVar3 = *param_3;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[1] = iVar3;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[6] = param_3[2];
  local_54 = 0xaaaaaa01;
  param_1[7] = param_3[3];
  uStack_5c = DAT_001f5168;
  uVar15 = _DAT_001f3960;
  local_60 = 5;
  uStack_68 = _UNK_001f3968;
  param_1[8] = param_3[4];
  local_70 = (int *)CONCAT71((int7)((ulong)uVar15 >> 8),(char)param_3[5]);
  lVar6 = FUN_009add18(param_2,&local_70);
  *(long *)(param_1 + 10) = lVar6;
  *(bool *)(param_1 + 0xc) = lVar6 != 0;
  iVar3 = param_3[4];
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xd] = iVar3;
  (**(code **)(*param_4 + 0x10))(&local_70,param_4,"WebRTC-Agc2MaxSpeechLevelExperimental",0x25);
  bVar5 = false;
  uVar7 = uStack_68;
  if (-1 < (char)uStack_5c._3_1_) {
    uVar7 = (ulong)uStack_5c._3_1_;
  }
  if (6 < uVar7) {
    ppiVar1 = (int **)local_70;
    if (-1 < (char)uStack_5c._3_1_) {
      ppiVar1 = &local_70;
    }
    bVar5 = *(int *)ppiVar1 == 0x62616e45 && *(int *)((long)ppiVar1 + 3) == 0x64656c62;
  }
  if ((char)uStack_5c._3_1_ < '\0') {
    operator_delete(local_70);
    uVar7 = FUN_00417e08();
  }
  else {
    uVar7 = FUN_00417e08();
  }
  if (bVar5) {
    if ((uVar7 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_processing/agc2/input_volume_controller.cc",
                   0x461,"AGC2 input volume controller using experimental maximum speech level");
    }
    lVar6 = 0x1c;
  }
  else {
    if ((uVar7 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_processing/agc2/input_volume_controller.cc",
                   0x481,"AGC2 input volume controller using default maximum speech level");
    }
    lVar6 = 0x18;
  }
  param_1[0x10] = *(int *)((long)param_3 + lVar6);
  iVar3 = param_3[8];
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x11] = iVar3;
  if (param_2 != 0) {
    if (param_2 < 0) {
      lVar6 = FUN_009add00();
      puVar8 = *(undefined8 **)(lVar6 + 0x48);
      if (puVar8 != (undefined8 *)0x0) {
        puVar14 = *(undefined8 **)(lVar6 + 0x50);
        puVar11 = puVar8;
        if (puVar8 != puVar14) {
          do {
            puVar14 = puVar14 + -1;
            if (puVar14 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                        );
            }
            pvVar10 = (void *)*puVar14;
            *puVar14 = 0;
            if (pvVar10 != (void *)0x0) {
              operator_delete(pvVar10);
            }
          } while (puVar14 != puVar8);
          puVar11 = *(undefined8 **)(lVar6 + 0x48);
        }
        *(undefined8 **)(lVar6 + 0x50) = puVar8;
        operator_delete(puVar11);
      }
      plVar12 = *(long **)(lVar6 + 0x28);
      *(undefined8 *)(lVar6 + 0x28) = 0;
      if (plVar12 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x009ad43c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar12 + 8))();
        return;
      }
      return;
    }
    uVar7 = (long)param_2 * 8;
    puVar8 = (undefined8 *)operator_new(uVar7);
    *(undefined8 **)(param_1 + 0x12) = puVar8;
    *(undefined8 **)(param_1 + 0x14) = puVar8;
    uVar13 = uVar7 - 8 >> 3;
    uVar7 = (ulong)-(long)puVar8 >> 3;
    if (uVar13 <= (ulong)-(long)puVar8 >> 3) {
      uVar7 = uVar13;
    }
    puVar11 = puVar8 + param_2;
    *(undefined8 **)(param_1 + 0x16) = puVar11;
    if ((5 < uVar7) && ((-(int)puVar8 & 7U) == 0)) {
      uVar13 = uVar7 + 1 & 3;
      uVar2 = 4;
      if (uVar13 != 0) {
        uVar2 = uVar13;
      }
      puVar14 = puVar8 + 2;
      lVar6 = ~uVar7 + uVar2;
      puVar8 = puVar8 + ((uVar7 + 1) - uVar2);
      do {
        lVar6 = lVar6 + 4;
        puVar14[-1] = 0;
        puVar14[-2] = 0;
        puVar14[1] = 0;
        *puVar14 = 0;
        puVar14 = puVar14 + 4;
      } while (lVar6 != 0);
    }
    do {
      if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar14 = puVar8 + 1;
      *puVar8 = 0;
      puVar8 = puVar14;
    } while (puVar14 != puVar11);
    *(undefined8 **)(param_1 + 0x14) = puVar11;
  }
  param_1[0x18] = 0;
  uVar7 = FUN_00417e08();
  if ((uVar7 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e94,"../../modules/audio_processing/agc2/input_volume_controller.cc",
                 0xc51,"[AGC2] Input volume controller enabled. Minimum input volume: ",param_1[1]);
  }
  puVar8 = *(undefined8 **)(param_1 + 0x12);
  puVar11 = *(undefined8 **)(param_1 + 0x14);
  if (puVar8 != puVar11) {
    do {
      piVar9 = (int *)operator_new(0x34);
      iVar3 = param_1[1];
      iVar4 = param_3[1];
      uVar15 = *(undefined8 *)(param_3 + 10);
      piVar9[2] = 0xff;
      piVar9[3] = 0;
      *piVar9 = iVar3;
      piVar9[1] = iVar4;
      iVar3 = param_3[9];
      *(undefined2 *)(piVar9 + 4) = 0x101;
      *(undefined1 *)((long)piVar9 + 0x12) = 1;
      if (iVar3 < 2) {
        iVar3 = 1;
      }
      piVar9[5] = 0;
      *(undefined1 *)(piVar9 + 6) = 0;
      piVar9[8] = 0;
      piVar9[9] = 0;
      piVar9[7] = iVar3;
      *(undefined1 *)(piVar9 + 10) = 1;
      *(undefined8 *)(piVar9 + 0xb) = uVar15;
      pvVar10 = (void *)*puVar8;
      *puVar8 = piVar9;
      if (pvVar10 != (void *)0x0) {
        operator_delete(pvVar10);
      }
      puVar8 = puVar8 + 1;
    } while (puVar8 != puVar11);
    if (*(long **)(param_1 + 0x14) != *(long **)(param_1 + 0x12)) {
      *(undefined1 *)(**(long **)(param_1 + 0x12) + 0x18) = 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 009ad3a4  FUN_009ad3a4 =====

void FUN_009ad3a4(long param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(param_1 + 0x48);
  if (puVar5 != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_1 + 0x50);
    puVar2 = puVar5;
    if (puVar5 != puVar4) {
      do {
        puVar4 = puVar4 + -1;
        if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        pvVar1 = (void *)*puVar4;
        *puVar4 = 0;
        if (pvVar1 != (void *)0x0) {
          operator_delete(pvVar1);
        }
      } while (puVar4 != puVar5);
      puVar2 = *(undefined8 **)(param_1 + 0x48);
    }
    *(undefined8 **)(param_1 + 0x50) = puVar5;
    operator_delete(puVar2);
  }
  plVar3 = *(long **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x009ad43c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 8))();
  return;
}


// ===== 009ad468  FUN_009ad468 =====

void FUN_009ad468(long param_1)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar5;
  
  plVar4 = *(long **)(param_1 + 0x48);
  plVar1 = *(long **)(param_1 + 0x50);
  if (plVar4 == plVar1) {
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  else {
    do {
      plVar5 = plVar4 + 1;
      lVar8 = *plVar4;
      *(undefined4 *)(lVar8 + 8) = 0xff;
      *(undefined2 *)(lVar8 + 0x10) = 0x101;
      *(undefined8 *)(lVar8 + 0x20) = 0;
      *(undefined1 *)(lVar8 + 0x28) = 1;
      plVar4 = plVar5;
    } while (plVar5 != plVar1);
    plVar4 = *(long **)(param_1 + 0x48);
    *(undefined1 *)(param_1 + 0x14) = 1;
    lVar8 = *(long *)(param_1 + 0x50) - (long)plVar4;
    if (lVar8 != 0) {
      uVar6 = lVar8 >> 3;
      iVar3 = *(int *)(*plVar4 + 0x14);
      *(undefined4 *)(param_1 + 0x60) = 0;
      if (1 < uVar6) {
        uVar7 = 1;
        do {
          iVar2 = *(int *)(plVar4[uVar7] + 0x14);
          if (iVar2 < iVar3) {
            *(int *)(param_1 + 0x60) = (int)uVar7;
            iVar3 = iVar2;
          }
          uVar7 = uVar7 + 1;
        } while (uVar6 != uVar7);
      }
      if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
        *(int *)(param_1 + 8) = iVar3;
        *(undefined8 *)(param_1 + 0x38) = 0;
      }
      else {
        if ((0 < *(int *)(param_1 + 0xc)) && (iVar3 <= *(int *)(param_1 + 4))) {
          iVar3 = *(int *)(param_1 + 4);
        }
        *(int *)(param_1 + 8) = iVar3;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(undefined1 *)(param_1 + 0x10) = 0;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 009ad564  FUN_009ad564 =====

void FUN_009ad564(int *param_1,int param_2,long param_3)

{
  undefined1 (*pauVar1) [16];
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  float *pfVar12;
  undefined1 (*pauVar13) [16];
  long lVar14;
  uint uVar15;
  long lVar16;
  undefined8 *puVar17;
  int iVar18;
  uint uVar19;
  float fVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  undefined1 auVar30 [16];
  int iVar32;
  undefined1 auVar34 [16];
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  long local_60;
  long lStack_58;
  long local_50;
  undefined8 local_48;
  undefined1 auVar29 [12];
  undefined1 auVar31 [16];
  undefined1 auVar33 [12];
  undefined1 auVar35 [16];
  
  plVar4 = *(long **)(param_1 + 0x12);
  plVar2 = *(long **)(param_1 + 0x14);
  param_1[3] = param_2;
  *(undefined1 *)(param_1 + 4) = 1;
  if (plVar4 == plVar2) goto LAB_009ada48;
  do {
    plVar5 = plVar4 + 1;
    *(int *)(*plVar4 + 0x14) = param_2;
    plVar4 = plVar5;
  } while (plVar5 != plVar2);
  plVar4 = *(long **)(param_1 + 0x12);
  if (*(long *)(param_1 + 0x14) - (long)plVar4 == 0) goto LAB_009ada48;
  uVar7 = *(long *)(param_1 + 0x14) - (long)plVar4 >> 3;
  iVar18 = *(int *)(*plVar4 + 0x14);
  param_1[0x18] = 0;
  if (1 < uVar7) {
    uVar8 = 1;
    do {
      iVar21 = *(int *)(plVar4[uVar8] + 0x14);
      if (iVar21 < iVar18) {
        param_1[0x18] = (int)uVar8;
        iVar18 = iVar21;
      }
      uVar8 = uVar8 + 1;
    } while (uVar7 != uVar8);
  }
  if ((((*(byte *)(param_1 + 4) & 1) != 0) && (0 < param_1[3])) && (iVar18 <= param_1[1])) {
    iVar18 = param_1[1];
  }
  param_1[2] = iVar18;
  uVar8 = *(ulong *)(param_3 + 0x20);
  lVar16 = *(long *)(*(long *)(param_3 + 0x60) + 8);
  iVar18 = *(int *)(*plVar4 + 0x14);
  param_1[0x18] = 0;
  if (1 < uVar7) {
    uVar10 = 1;
    do {
      iVar21 = *(int *)(plVar4[uVar10] + 0x14);
      if (iVar21 < iVar18) {
        param_1[0x18] = (int)uVar10;
        iVar18 = iVar21;
      }
      uVar10 = uVar10 + 1;
    } while (uVar7 != uVar10);
  }
  if ((((*(byte *)(param_1 + 4) & 1) != 0) && (0 < param_1[3])) && (iVar18 <= param_1[1])) {
    iVar18 = param_1[1];
  }
  param_1[2] = iVar18;
  if ((char)param_1[5] != '\x01') {
    return;
  }
  plVar4 = *(long **)(param_1 + 10);
  if (plVar4 != (long *)0x0) {
    local_60 = (long)*param_1;
    lStack_58 = (long)(int)uVar8;
    local_50 = lVar16;
    if (local_60 == 0 || (int)uVar8 == 0) {
      local_50 = 0;
    }
    local_48 = 0xaaaaaaaaaaaaaa00;
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_60);
  }
  if (*param_1 == 0) {
    fVar20 = 0.0;
  }
  else {
    lVar9 = 0;
    uVar6 = 0;
    do {
      if (uVar8 == 0) {
        uVar19 = 0;
      }
      else {
        lVar11 = *(long *)(lVar16 + lVar9 * 8);
        if (uVar8 < 8) {
          uVar7 = 0;
          uVar19 = 0;
        }
        else {
          iVar18 = 0;
          iVar21 = 0;
          iVar22 = 0;
          iVar23 = 0;
          iVar24 = 0;
          iVar25 = 0;
          iVar26 = 0;
          iVar27 = 0;
          pauVar13 = (undefined1 (*) [16])(lVar11 + 0x10);
          uVar7 = uVar8 & 0xfffffffffffffff8;
          do {
            pauVar1 = pauVar13 + -1;
            auVar31 = *pauVar13;
            uVar7 = uVar7 - 8;
            pauVar13 = pauVar13 + 2;
            auVar37._8_4_ = 0x46fffe00;
            auVar37._0_8_ = 0x46fffe0046fffe00;
            auVar37._12_4_ = 0x46fffe00;
            auVar37 = NEON_fcmge(*pauVar1,auVar37,4);
            auVar38._8_4_ = 0x46fffe00;
            auVar38._0_8_ = 0x46fffe0046fffe00;
            auVar38._12_4_ = 0x46fffe00;
            auVar38 = NEON_fcmge(auVar31,auVar38,4);
            auVar30._8_4_ = 0xc7000000;
            auVar30._0_8_ = 0xc7000000c7000000;
            auVar30._12_4_ = 0xc7000000;
            auVar30 = NEON_fcmge(auVar30,*pauVar1,4);
            auVar34._8_4_ = 0xc7000000;
            auVar34._0_8_ = 0xc7000000c7000000;
            auVar34._12_4_ = 0xc7000000;
            auVar34 = NEON_fcmge(auVar34,auVar31,4);
            iVar28 = CONCAT13(auVar37[3] | auVar30[3],
                              CONCAT12(auVar37[2] | auVar30[2],
                                       CONCAT11(auVar37[1] | auVar30[1],auVar37[0] | auVar30[0])));
            auVar29._0_8_ =
                 CONCAT17(auVar37[7] | auVar30[7],
                          CONCAT16(auVar37[6] | auVar30[6],
                                   CONCAT15(auVar37[5] | auVar30[5],
                                            CONCAT14(auVar37[4] | auVar30[4],iVar28))));
            auVar29[8] = auVar37[8] | auVar30[8];
            auVar29[9] = auVar37[9] | auVar30[9];
            auVar29[10] = auVar37[10] | auVar30[10];
            auVar29[0xb] = auVar37[0xb] | auVar30[0xb];
            auVar31[0xc] = auVar37[0xc] | auVar30[0xc];
            auVar31._0_12_ = auVar29;
            auVar31[0xd] = auVar37[0xd] | auVar30[0xd];
            auVar31[0xe] = auVar37[0xe] | auVar30[0xe];
            auVar31[0xf] = auVar37[0xf] | auVar30[0xf];
            iVar32 = CONCAT13(auVar38[3] | auVar34[3],
                              CONCAT12(auVar38[2] | auVar34[2],
                                       CONCAT11(auVar38[1] | auVar34[1],auVar38[0] | auVar34[0])));
            auVar33._0_8_ =
                 CONCAT17(auVar38[7] | auVar34[7],
                          CONCAT16(auVar38[6] | auVar34[6],
                                   CONCAT15(auVar38[5] | auVar34[5],
                                            CONCAT14(auVar38[4] | auVar34[4],iVar32))));
            auVar33[8] = auVar38[8] | auVar34[8];
            auVar33[9] = auVar38[9] | auVar34[9];
            auVar33[10] = auVar38[10] | auVar34[10];
            auVar33[0xb] = auVar38[0xb] | auVar34[0xb];
            auVar35[0xc] = auVar38[0xc] | auVar34[0xc];
            auVar35._0_12_ = auVar33;
            auVar35[0xd] = auVar38[0xd] | auVar34[0xd];
            auVar35[0xe] = auVar38[0xe] | auVar34[0xe];
            auVar35[0xf] = auVar38[0xf] | auVar34[0xf];
            iVar18 = iVar18 - iVar28;
            iVar21 = iVar21 - (int)((ulong)auVar29._0_8_ >> 0x20);
            iVar22 = iVar22 - auVar29._8_4_;
            iVar23 = iVar23 - auVar31._12_4_;
            iVar24 = iVar24 - iVar32;
            iVar25 = iVar25 - (int)((ulong)auVar33._0_8_ >> 0x20);
            iVar26 = iVar26 - auVar33._8_4_;
            iVar27 = iVar27 - auVar35._12_4_;
          } while (uVar7 != 0);
          uVar7 = uVar8 & 0xfffffffffffffff8;
          uVar19 = iVar24 + iVar18 + iVar25 + iVar21 + iVar26 + iVar22 + iVar27 + iVar23;
          if (uVar8 == (uVar8 & 0xfffffffffffffff8)) goto LAB_009ad710;
        }
        lVar14 = uVar8 - uVar7;
        pfVar12 = (float *)(lVar11 + uVar7 * 4);
        do {
          fVar20 = *pfVar12;
          uVar15 = (uint)(fVar20 < 32767.0 == NAN(fVar20));
          if (fVar20 <= -32768.0) {
            uVar15 = 1;
          }
          lVar14 = lVar14 + -1;
          uVar19 = uVar19 + uVar15;
          pfVar12 = pfVar12 + 1;
        } while (lVar14 != 0);
      }
LAB_009ad710:
      lVar9 = lVar9 + 1;
      if ((int)uVar6 <= (int)uVar19) {
        uVar6 = uVar19;
      }
    } while (lVar9 != *param_1);
    fVar20 = (float)uVar6;
  }
  iVar18 = param_1[0xe];
  param_1[0xe] = iVar18 + 1;
  fVar20 = fVar20 / (float)uVar8;
  fVar36 = (float)param_1[0xf];
  if ((float)param_1[0xf] <= fVar20) {
    fVar36 = fVar20;
  }
  param_1[0xf] = (int)fVar36;
  if (iVar18 + 1 == 3000) {
    uVar7 = FUN_00417e08();
    if ((uVar7 & 1) == 0) {
      FUN_00623bb0(&DAT_001f1906,"../../modules/audio_processing/agc2/input_volume_controller.cc",
                   0x351,"[AGC2] Input clipping rate: ",(int)(fVar36 * 100.0),&DAT_001ef44c);
    }
    lVar16 = DAT_00d808a0;
    if (DAT_00d808a0 == 0) {
      lVar16 = FUN_006660d8("WebRTC.Audio.Agc.InputClippingRate",0x22,0,100,0x32);
      FUN_00d0f5e0(0,lVar16,&DAT_00d808a0);
      if (lVar16 != 0) goto LAB_009ad888;
    }
    else {
LAB_009ad888:
      FUN_00666568(lVar16,(int)(fVar36 * 100.0));
    }
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  if (param_1[0xd] < param_1[8]) {
    param_1[0xd] = param_1[0xd] + 1;
    return;
  }
  fVar36 = (float)param_1[7];
  if ((*(long *)(param_1 + 10) == 0) || (*param_1 < 1)) {
    if (fVar20 != fVar36 && fVar20 < fVar36 == (NAN(fVar20) || NAN(fVar36))) {
      iVar18 = param_1[6];
      goto LAB_009ad97c;
    }
  }
  else {
    uVar7 = 0;
    uVar6 = 0;
    iVar18 = 0;
    do {
      if ((ulong)(*(long *)(param_1 + 0x14) - *(long *)(param_1 + 0x12) >> 3) <= uVar7)
      goto LAB_009ada48;
      uVar8 = (**(code **)(**(long **)(param_1 + 10) + 0x20))
                        (*(long **)(param_1 + 10),uVar7 & 0xffffffff,param_1[2],param_1[6],
                         *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x12) + uVar7 * 8) + 4),0xff)
      ;
      uVar7 = uVar7 + 1;
      iVar21 = iVar18;
      if (iVar18 <= (int)uVar8) {
        iVar21 = (int)uVar8;
      }
      if ((uVar8 & 0x100000000) == 0) {
        iVar21 = iVar18;
      }
      uVar6 = (uint)((uVar8 & 0x100000000) >> 0x20) | uVar6;
      iVar18 = iVar21;
    } while ((long)uVar7 < (long)*param_1);
    iVar22 = param_1[6];
    iVar18 = iVar22;
    if (uVar6 != 0) {
      if (iVar21 <= iVar22) {
        iVar21 = iVar22;
      }
      iVar18 = iVar21;
      if ((char)param_1[0xc] == '\0') {
        iVar18 = iVar22;
      }
    }
    if ((fVar20 != fVar36 && fVar20 < fVar36 == (NAN(fVar20) || NAN(fVar36))) ||
       ((uVar6 != 0 && ((char)param_1[0xc] == '\x01')))) {
LAB_009ad97c:
      puVar3 = *(undefined8 **)(param_1 + 0x14);
      for (puVar17 = *(undefined8 **)(param_1 + 0x12); puVar17 != puVar3; puVar17 = puVar17 + 1) {
        FUN_009acef0(*puVar17,iVar18);
      }
      param_1[0xd] = 0;
      if (*(long **)(param_1 + 10) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 10) + 0x10))();
      }
    }
  }
  plVar4 = *(long **)(param_1 + 0x12);
  if (*(long *)(param_1 + 0x14) - (long)plVar4 != 0) {
    uVar7 = *(long *)(param_1 + 0x14) - (long)plVar4 >> 3;
    iVar18 = *(int *)(*plVar4 + 0x14);
    param_1[0x18] = 0;
    if (1 < uVar7) {
      uVar8 = 1;
      do {
        iVar21 = *(int *)(plVar4[uVar8] + 0x14);
        if (iVar21 < iVar18) {
          param_1[0x18] = (int)uVar8;
          iVar18 = iVar21;
        }
        uVar8 = uVar8 + 1;
      } while (uVar7 != uVar8);
    }
    if ((((*(byte *)(param_1 + 4) & 1) != 0) && (0 < param_1[3])) && (iVar18 <= param_1[1])) {
      iVar18 = param_1[1];
    }
    param_1[2] = iVar18;
    return;
  }
LAB_009ada48:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 009ada5c  FUN_009ada5c =====

ulong FUN_009ada5c(undefined4 param_1,long param_2,ulong param_3)

{
  long *plVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  float fVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
    uVar8 = FUN_004249b0();
    if ((uVar8 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_processing/agc2/input_volume_controller.cc",
                   0x106b,"[AGC2] Applied input volume not set.");
    }
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
  }
  else {
    plVar11 = *(long **)(param_2 + 0x48);
    plVar1 = *(long **)(param_2 + 0x50);
    lVar4 = (long)plVar1 - (long)plVar11;
    if (lVar4 == 0) {
LAB_009adc9c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                );
    }
    uVar8 = lVar4 >> 3;
    iVar10 = *(int *)(*plVar11 + 0x14);
    *(undefined4 *)(param_2 + 0x60) = 0;
    if (1 < uVar8) {
      uVar9 = 1;
      do {
        iVar5 = *(int *)(plVar11[uVar9] + 0x14);
        if (iVar5 < iVar10) {
          *(int *)(param_2 + 0x60) = (int)uVar9;
          iVar10 = iVar5;
        }
        uVar9 = uVar9 + 1;
      } while (uVar8 != uVar9);
    }
    if ((0 < *(int *)(param_2 + 0xc)) && (iVar10 <= *(int *)(param_2 + 4))) {
      iVar10 = *(int *)(param_2 + 4);
    }
    *(int *)(param_2 + 8) = iVar10;
    if ((*(byte *)(param_2 + 0x14) & 1) == 0) {
      uVar8 = *(ulong *)(param_2 + 0xc);
      uVar7 = (uint)uVar8 & 0xffffff00;
      uVar9 = uVar8 & 0xffffffff00000000;
    }
    else {
      if ((param_3 >> 0x20 & 1) == 0) {
        uVar8 = 0xaaaaaa00aaaaaa00;
      }
      else {
        fVar6 = (float)param_3;
        fVar13 = 30.0;
        if (fVar6 < 30.0 != NAN(fVar6)) {
          fVar13 = fVar6;
        }
        fVar15 = (float)*(int *)(param_2 + 0x40);
        fVar14 = -90.0;
        if (-90.0 < fVar6) {
          fVar14 = fVar13;
        }
        if ((fVar14 != fVar15 && fVar14 < fVar15 == (NAN(fVar14) || NAN(fVar15))) ||
           (fVar15 = (float)*(int *)(param_2 + 0x44), fVar14 < fVar15)) {
          uVar7 = (uint)(fVar15 - fVar14);
        }
        else {
          uVar7 = 0;
        }
        uVar8 = (ulong)uVar7 | 0xaaaaaa0100000000;
      }
      do {
        plVar12 = plVar11 + 1;
        FUN_009acc60(param_1,*plVar11,uVar8);
        plVar11 = plVar12;
      } while (plVar12 != plVar1);
      plVar11 = *(long **)(param_2 + 0x48);
      lVar4 = *(long *)(param_2 + 0x50) - (long)plVar11;
      if (lVar4 == 0) goto LAB_009adc9c;
      uVar8 = lVar4 >> 3;
      iVar5 = *(int *)(*plVar11 + 0x14);
      *(undefined4 *)(param_2 + 0x60) = 0;
      if (1 < uVar8) {
        uVar9 = 1;
        do {
          iVar2 = *(int *)(plVar11[uVar9] + 0x14);
          if (iVar2 < iVar5) {
            *(int *)(param_2 + 0x60) = (int)uVar9;
            iVar5 = iVar2;
          }
          uVar9 = uVar9 + 1;
        } while (uVar8 != uVar9);
      }
      bVar3 = *(byte *)(param_2 + 0x10);
      if ((((bVar3 & 1) != 0) && (0 < *(int *)(param_2 + 0xc))) && (iVar5 <= *(int *)(param_2 + 4)))
      {
        iVar5 = *(int *)(param_2 + 4);
      }
      *(int *)(param_2 + 8) = iVar5;
      if (iVar10 != iVar5) {
        FUN_009af638();
        bVar3 = *(byte *)(param_2 + 0x10) & 1;
      }
      if (bVar3 != 0) {
        *(undefined1 *)(param_2 + 0x10) = 0;
      }
      uVar8 = (ulong)*(uint *)(param_2 + 8);
      uVar9 = 0x100000000;
      uVar7 = *(uint *)(param_2 + 8) & 0xffffff00;
    }
  }
  return uVar9 | (uVar7 | (uint)uVar8 & 0xff);
}


// ===== 009adcb0  FUN_009adcb0 =====

void FUN_009adcb0(long param_1,byte param_2)

{
  byte bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 0x50);
  bVar1 = param_2 & 1;
  for (plVar2 = *(long **)(param_1 + 0x48); plVar2 != plVar3; plVar2 = plVar2 + 1) {
    lVar4 = *plVar2;
    if ((*(byte *)(lVar4 + 0x10) != bVar1) && (*(byte *)(lVar4 + 0x10) = bVar1, (param_2 & 1) != 0))
    {
      *(undefined1 *)(lVar4 + 0x11) = 1;
    }
  }
  *(byte *)(param_1 + 0x14) = bVar1;
  return;
}


// ===== 009add00  FUN_009add00 =====

void FUN_009add00(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 009add18  FUN_009add18 =====

undefined8 * FUN_009add18(int param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  byte bVar4;
  ulong uVar5;
  undefined8 *puVar6;
  void *pvVar7;
  void *pvVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  void *pvVar11;
  ulong uVar12;
  int iVar13;
  undefined8 uVar14;
  undefined1 local_5c [4];
  undefined1 local_58 [4];
  int local_54;
  void *local_38;
  
  bVar4 = *param_2;
  local_54 = param_1;
  uVar5 = FUN_00417e08();
  if ((bVar4 & 1) == 0) {
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_processing/agc2/clipping_predictor.cc",0xb79,
                   "[AGC2] Clipping prediction disabled.");
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar6 = (undefined8 *)0x0;
    }
  }
  else {
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_processing/agc2/clipping_predictor.cc",0xb91,
                   "[AGC2] Clipping prediction enabled.");
    }
    if (*(int *)(param_2 + 4) == 2) {
      puVar10 = local_5c;
      local_5c[0] = 0;
    }
    else {
      if (*(int *)(param_2 + 4) != 1) {
        puVar6 = (undefined8 *)operator_new(0x38);
        iVar1 = *(int *)(param_2 + 0xc);
        iVar2 = *(int *)(param_2 + 0x10);
        puVar6[4] = *(undefined8 *)(param_2 + 8);
        uVar14 = *(undefined8 *)(param_2 + 0x14);
        *puVar6 = &PTR_FUN_00d40a18;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6[1] = 0;
        *(int *)(puVar6 + 5) = iVar2;
        *(undefined8 *)((long)puVar6 + 0x2c) = uVar14;
        if (param_1 < 1) {
          return puVar6;
        }
        iVar13 = 0;
        do {
          pvVar7 = operator_new(0x20);
          FUN_009aede0(pvVar7,iVar2 + iVar1);
          puVar3 = (undefined8 *)puVar6[2];
          local_38 = pvVar7;
          if (puVar3 < (undefined8 *)puVar6[3]) {
            if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                        );
            }
            local_38 = (void *)0x0;
            puVar9 = puVar3 + 1;
            *puVar3 = pvVar7;
          }
          else {
            puVar9 = (undefined8 *)FUN_009ae608(puVar6 + 1,&local_38);
          }
          pvVar7 = local_38;
          puVar6[2] = puVar9;
          local_38 = (void *)0x0;
          if (pvVar7 != (void *)0x0) {
            pvVar8 = *(void **)((long)pvVar7 + 8);
            if (pvVar8 != (void *)0x0) {
              pvVar11 = *(void **)((long)pvVar7 + 0x10);
              uVar12 = (ulong)((long)pvVar11 + (-8 - ((long)pvVar11 << 0x3d))) >> 3;
              uVar5 = (ulong)(((long)pvVar8 - (long)pvVar11 << 0x3d) -
                             ((long)pvVar8 - (long)pvVar11)) >> 3;
              if (uVar12 <= uVar5) {
                uVar5 = uVar12;
              }
              if ((1 < uVar5) && ((((int)pvVar8 - (int)pvVar11 | -(int)pvVar11) & 7U) == 0)) {
                uVar5 = uVar5 & 0x1ffffffffffffffe;
                pvVar11 = (void *)((long)pvVar11 + uVar5 * -8);
                do {
                  uVar5 = uVar5 - 2;
                } while (uVar5 != 0);
              }
              while (pvVar11 != pvVar8) {
                pvVar11 = (void *)((long)pvVar11 + -8);
                if (pvVar11 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                  std::__Cr::__libcpp_verbose_abort
                            ("%s",
                             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                            );
                }
              }
              *(void **)((long)pvVar7 + 0x10) = pvVar8;
              operator_delete(pvVar8);
            }
            operator_delete(pvVar7);
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 != param_1);
        return puVar6;
      }
      local_58[0] = 1;
      puVar10 = local_58;
    }
    puVar6 = (undefined8 *)
             FUN_009adf80(&local_54,param_2 + 8,param_2 + 0xc,param_2 + 0x10,param_2 + 0x14,puVar10)
    ;
  }
  return puVar6;
}


// ===== 009adf80  FUN_009adf80 =====

undefined8 *
FUN_009adf80(int *param_1,undefined4 *param_2,int *param_3,int *param_4,float *param_5,
            undefined1 *param_6)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  void *pvVar7;
  void *pvVar8;
  undefined8 *puVar9;
  void *pvVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  float fVar14;
  void *local_58;
  
  puVar6 = (undefined8 *)operator_new(0x38);
  fVar14 = *param_5;
  *puVar6 = &PTR_FUN_00d40a50;
  iVar2 = *param_3;
  iVar3 = *param_1;
  iVar4 = *param_4;
  *(undefined4 *)(puVar6 + 4) = *param_2;
  *(int *)((long)puVar6 + 0x24) = iVar2;
  uVar5 = *param_6;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[1] = 0;
  *(int *)(puVar6 + 5) = iVar4;
  *(int *)((long)puVar6 + 0x2c) = (int)fVar14;
  *(undefined1 *)(puVar6 + 6) = uVar5;
  if (0 < iVar3) {
    iVar13 = 0;
    do {
      pvVar7 = operator_new(0x20);
      FUN_009aede0(pvVar7,iVar4 + iVar2);
      puVar1 = (undefined8 *)puVar6[2];
      local_58 = pvVar7;
      if (puVar1 < (undefined8 *)puVar6[3]) {
        if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        local_58 = (void *)0x0;
        puVar9 = puVar1 + 1;
        *puVar1 = pvVar7;
      }
      else {
        puVar9 = (undefined8 *)FUN_009ae608(puVar6 + 1,&local_58);
      }
      pvVar7 = local_58;
      puVar6[2] = puVar9;
      local_58 = (void *)0x0;
      if (pvVar7 != (void *)0x0) {
        pvVar8 = *(void **)((long)pvVar7 + 8);
        if (pvVar8 != (void *)0x0) {
          pvVar10 = *(void **)((long)pvVar7 + 0x10);
          uVar12 = (ulong)((long)pvVar10 + (-8 - ((long)pvVar10 << 0x3d))) >> 3;
          uVar11 = (ulong)(((long)pvVar8 - (long)pvVar10 << 0x3d) - ((long)pvVar8 - (long)pvVar10))
                   >> 3;
          if (uVar12 <= uVar11) {
            uVar11 = uVar12;
          }
          if ((1 < uVar11) && ((((int)pvVar8 - (int)pvVar10 | -(int)pvVar10) & 7U) == 0)) {
            uVar11 = uVar11 & 0x1ffffffffffffffe;
            pvVar10 = (void *)((long)pvVar10 + uVar11 * -8);
            do {
              uVar11 = uVar11 - 2;
            } while (uVar11 != 0);
          }
          while (pvVar10 != pvVar8) {
            pvVar10 = (void *)((long)pvVar10 + -8);
            if (pvVar10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                        );
            }
          }
          *(void **)((long)pvVar7 + 0x10) = pvVar8;
          operator_delete(pvVar8);
        }
        operator_delete(pvVar7);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 != iVar3);
  }
  return puVar6;
}


// ===== 009ae14c  FUN_009ae14c =====

void FUN_009ae14c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d40a18;
  if (param_1[1] != 0) {
    FUN_009ae840();
    operator_delete((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 009ae1a4  FUN_009ae1a4 =====

void FUN_009ae1a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d40a18;
  if (param_1[1] != 0) {
    FUN_009ae840();
    operator_delete((void *)param_1[1]);
  }
  operator_delete(param_1);
  return;
}


// ===== 009ae1f8  FUN_009ae1f8 =====

void FUN_009ae1f8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8);
  if (0 < (int)(uVar1 >> 3)) {
    uVar2 = 0;
    do {
      if ((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      FUN_009aef0c(*(undefined8 *)(*(long *)(param_1 + 8) + uVar2 * 8));
      uVar2 = uVar2 + 1;
    } while ((uVar1 >> 3 & 0x7fffffff) != uVar2);
  }
  return;
}


// ===== 009ae278  FUN_009ae278 =====

void FUN_009ae278(long param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  float *pfVar4;
  float *pfVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  
  uVar1 = *param_2;
  if (0 < (int)uVar1) {
    uVar7 = param_2[2];
    uVar6 = 0;
    do {
      if ((char)param_2[6] == '\x01') {
        lVar3 = *(long *)(param_2 + 2);
        pfVar5 = (float *)(*(long *)(param_2 + 4) + lVar3 * uVar6 * 4);
      }
      else {
        if ((char)param_2[6] != '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_005ee558();
        }
        lVar3 = *(long *)(param_2 + 2);
        pfVar5 = *(float **)(*(long *)(param_2 + 4) + uVar6 * 8);
      }
      lVar2 = lVar3 << 2;
      pfVar4 = (float *)0x0;
      if (lVar3 != 0) {
        pfVar4 = pfVar5;
      }
      if (lVar2 == 0) {
        uVar9 = 0;
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        uVar9 = 0;
        do {
          fVar10 = *pfVar4;
          uVar8 = (ulong)(uint)((float)uVar8 + fVar10 * fVar10);
          if ((float)uVar9 <= ABS(fVar10)) {
            uVar9 = (ulong)(uint)ABS(fVar10);
          }
          lVar2 = lVar2 + -4;
          pfVar4 = pfVar4 + 1;
        } while (lVar2 != 0);
      }
      if ((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",uVar8,uVar9,
                   "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      FUN_009aef1c((float)uVar8 / (float)(int)uVar7,
                   *(undefined8 *)(*(long *)(param_1 + 8) + uVar6 * 8));
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar1);
  }
  return;
}


// ===== 009ae374  FUN_009ae374 =====

ulong FUN_009ae374(long param_1,uint param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  uVar2 = (ulong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/audio_processing/agc2/clipping_predictor.cc",0x92,"channel >= 0",
                 &DAT_001fbedc,uVar2,0);
  }
  if (uVar2 < (ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3)) {
    if ((param_5 < param_3) &&
       (auVar7 = FUN_009aef94(*(undefined8 *)(*(long *)(param_1 + 8) + uVar2 * 8),0,
                              *(undefined4 *)(param_1 + 0x20)),
       (auVar7 & (undefined1  [16])0x1) != (undefined1  [16])0x0)) {
      fVar4 = auVar7._4_4_;
      if (fVar4 <= 1.0) {
        fVar3 = -90.309;
      }
      else {
        fVar3 = log10f(fVar4);
        fVar3 = fVar3 * 20.0 + -90.309;
      }
      fVar6 = *(float *)(param_1 + 0x2c);
      if (fVar3 != fVar6 && fVar3 < fVar6 == (NAN(fVar3) || NAN(fVar6))) {
        if ((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                    );
        }
        auVar8 = FUN_009aef94(*(undefined8 *)(*(long *)(param_1 + 8) + uVar2 * 8),
                              *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x24));
        if ((auVar8 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
          if (fVar4 <= 1.0) {
            fVar4 = -90.309;
          }
          else {
            fVar4 = log10f(fVar4);
            fVar4 = fVar4 * 20.0 + -90.309;
          }
          fVar3 = -90.309;
          if (1.0 < SQRT(auVar7._0_4_)) {
            fVar3 = log10f(SQRT(auVar7._0_4_));
            fVar3 = fVar3 * 20.0 + -90.309;
          }
          fVar6 = -90.309;
          if (1.0 < auVar8._4_4_) {
            fVar6 = log10f(auVar8._4_4_);
            fVar6 = fVar6 * 20.0 + -90.309;
          }
          fVar5 = -90.309;
          if (1.0 < SQRT(auVar8._0_4_)) {
            fVar5 = log10f(SQRT(auVar8._0_4_));
            fVar5 = fVar5 * 20.0 + -90.309;
          }
          if (fVar4 - fVar3 < (fVar6 - fVar5) - *(float *)(param_1 + 0x30)) {
            param_4 = param_3 - param_4;
            iVar1 = param_4;
            if (param_6 <= param_4) {
              iVar1 = param_6;
            }
            if (param_4 <= param_5) {
              iVar1 = param_5;
            }
            if (0 < param_3 - iVar1) {
              return (ulong)(uint)(param_3 - iVar1) | 0x100000000;
            }
          }
        }
      }
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../modules/audio_processing/agc2/clipping_predictor.cc",0x93,
               "channel < ch_buffers_.size()",&DAT_00224cd9);
}


// ===== 009ae608  FUN_009ae608 =====

undefined8 * FUN_009ae608(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  size_t __n;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  void *local_50;
  undefined8 *local_48;
  void *local_40;
  void *local_38;
  
  lVar6 = param_1[1] - *param_1;
  uVar1 = (lVar6 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    local_50 = (void *)0x0;
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
      if (uVar5 >> 0x3d != 0) goto LAB_009ae728;
      pvVar2 = operator_new(uVar5 << 3);
    }
    local_38 = (void *)((long)pvVar2 + uVar5 * 8);
    local_48 = (undefined8 *)((long)pvVar2 + lVar6);
    if (local_48 != (undefined8 *)0x0) {
      uVar3 = *param_2;
      *param_2 = 0;
      puVar7 = local_48 + 1;
      *local_48 = uVar3;
      __n = param_1[1] - *param_1;
      pvVar2 = (void *)((long)local_48 - __n);
      memcpy(pvVar2,(void *)*param_1,__n);
      local_50 = (void *)*param_1;
      lVar6 = param_1[2];
      *param_1 = (long)pvVar2;
      param_1[1] = (long)puVar7;
      param_1[2] = (long)local_38;
      local_48 = (undefined8 *)local_50;
      local_40 = local_50;
      local_38 = (void *)lVar6;
      FUN_009ae744(&local_50);
      if (local_50 != (void *)0x0) {
        operator_delete(local_50);
      }
      return puVar7;
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  FUN_009ae72c();
LAB_009ae728:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 009ae72c  FUN_009ae72c =====

void FUN_009ae72c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 009ae744  FUN_009ae744 =====

void FUN_009ae744(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  void *pvVar5;
  undefined8 *puVar6;
  
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  while( true ) {
    if (param_2 == puVar6) {
      *(undefined8 **)(param_1 + 0x10) = puVar6;
      return;
    }
    puVar6 = puVar6 + -1;
    if (puVar6 == (undefined8 *)0x0) break;
    pvVar5 = (void *)*puVar6;
    *puVar6 = 0;
    if (pvVar5 != (void *)0x0) {
      pvVar1 = *(void **)((long)pvVar5 + 8);
      if (pvVar1 != (void *)0x0) {
        pvVar2 = *(void **)((long)pvVar5 + 0x10);
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
          if (pvVar2 == (void *)0x0) goto LAB_009ae814;
        }
        *(void **)((long)pvVar5 + 0x10) = pvVar1;
        operator_delete(pvVar1);
      }
      operator_delete(pvVar5);
    }
  }
LAB_009ae814:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 009ae840  FUN_009ae840 =====

void FUN_009ae840(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  void *pvVar5;
  undefined8 *puVar6;
  
  puVar6 = *(undefined8 **)(param_1 + 8);
  while( true ) {
    if (param_2 == puVar6) {
      *(undefined8 **)(param_1 + 8) = param_2;
      return;
    }
    puVar6 = puVar6 + -1;
    if (puVar6 == (undefined8 *)0x0) break;
    pvVar5 = (void *)*puVar6;
    *puVar6 = 0;
    if (pvVar5 != (void *)0x0) {
      pvVar1 = *(void **)((long)pvVar5 + 8);
      if (pvVar1 != (void *)0x0) {
        pvVar2 = *(void **)((long)pvVar5 + 0x10);
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
          if (pvVar2 == (void *)0x0) goto LAB_009ae924;
        }
        *(void **)((long)pvVar5 + 0x10) = pvVar1;
        operator_delete(pvVar1);
      }
      operator_delete(pvVar5);
    }
  }
LAB_009ae924:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 009ae938  FUN_009ae938 =====

void FUN_009ae938(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d40a50;
  if (param_1[1] != 0) {
    FUN_009ae840();
    operator_delete((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 009ae990  FUN_009ae990 =====

void FUN_009ae990(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d40a50;
  if (param_1[1] != 0) {
    FUN_009ae840();
    operator_delete((void *)param_1[1]);
  }
  operator_delete(param_1);
  return;
}


// ===== 009ae9e4  FUN_009ae9e4 =====

void FUN_009ae9e4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8);
  if (0 < (int)(uVar1 >> 3)) {
    uVar2 = 0;
    do {
      if ((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      FUN_009aef0c(*(undefined8 *)(*(long *)(param_1 + 8) + uVar2 * 8));
      uVar2 = uVar2 + 1;
    } while ((uVar1 >> 3 & 0x7fffffff) != uVar2);
  }
  return;
}


// ===== 009aea64  FUN_009aea64 =====

void FUN_009aea64(long param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  float *pfVar4;
  float *pfVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  
  uVar1 = *param_2;
  if (0 < (int)uVar1) {
    uVar7 = param_2[2];
    uVar6 = 0;
    do {
      if ((char)param_2[6] == '\x01') {
        lVar3 = *(long *)(param_2 + 2);
        pfVar5 = (float *)(*(long *)(param_2 + 4) + lVar3 * uVar6 * 4);
      }
      else {
        if ((char)param_2[6] != '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_005ee558();
        }
        lVar3 = *(long *)(param_2 + 2);
        pfVar5 = *(float **)(*(long *)(param_2 + 4) + uVar6 * 8);
      }
      lVar2 = lVar3 << 2;
      pfVar4 = (float *)0x0;
      if (lVar3 != 0) {
        pfVar4 = pfVar5;
      }
      if (lVar2 == 0) {
        uVar9 = 0;
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        uVar9 = 0;
        do {
          fVar10 = *pfVar4;
          uVar8 = (ulong)(uint)((float)uVar8 + fVar10 * fVar10);
          if ((float)uVar9 <= ABS(fVar10)) {
            uVar9 = (ulong)(uint)ABS(fVar10);
          }
          lVar2 = lVar2 + -4;
          pfVar4 = pfVar4 + 1;
        } while (lVar2 != 0);
      }
      if ((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",uVar8,uVar9,
                   "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      FUN_009aef1c((float)uVar8 / (float)(int)uVar7,
                   *(undefined8 *)(*(long *)(param_1 + 8) + uVar6 * 8));
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar1);
  }
  return;
}


// ===== 009aeb60  FUN_009aeb60 =====

ulong FUN_009aeb60(long param_1,int param_2,uint param_3,int param_4,int param_5,int param_6)

{
  long lVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  if (param_5 < (int)param_3) {
    uVar8 = (ulong)param_2;
    if ((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) <= uVar8) {
LAB_009aedcc:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                );
    }
    uVar7 = (ulong)param_3;
    auVar12 = FUN_009aef94(*(undefined8 *)(*(long *)(param_1 + 8) + uVar8 * 8),
                           *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x24));
    if ((auVar12 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      if ((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) <= uVar8)
      goto LAB_009aedcc;
      auVar13 = FUN_009aef94(*(undefined8 *)(*(long *)(param_1 + 8) + uVar8 * 8),0,
                             *(undefined4 *)(param_1 + 0x20));
      if ((auVar13 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        if (auVar13._4_4_ <= 1.0) {
          fVar9 = -90.309;
        }
        else {
          fVar9 = log10f(auVar13._4_4_);
          fVar9 = fVar9 * 20.0 + -90.309;
        }
        fVar11 = (float)*(int *)(param_1 + 0x2c);
        if (fVar9 != fVar11 && fVar9 < fVar11 == (NAN(fVar9) || NAN(fVar11))) {
          if (auVar12._4_4_ <= 1.0) {
            fVar9 = -90.309;
          }
          else {
            fVar9 = log10f(auVar12._4_4_);
            fVar9 = fVar9 * 20.0 + -90.309;
          }
          fVar11 = -90.309;
          if (1.0 < SQRT(auVar12._0_4_)) {
            fVar11 = log10f(SQRT(auVar12._0_4_));
            fVar11 = fVar11 * 20.0 + -90.309;
          }
          fVar10 = -90.309;
          if (1.0 < SQRT(auVar13._0_4_)) {
            fVar10 = log10f(SQRT(auVar13._0_4_));
            fVar10 = fVar10 * 20.0 + -90.309;
          }
          fVar10 = (fVar9 - fVar11) + fVar10;
          fVar9 = (float)*(int *)(param_1 + 0x2c);
          if (fVar10 != fVar9 && fVar10 < fVar9 == (NAN(fVar10) || NAN(fVar9))) {
            iVar4 = param_4;
            if (*(char *)(param_1 + 0x30) == '\x01') {
              iVar4 = (int)fVar10;
              uVar6 = 0xfffffff1;
              if (iVar4 != 0xf && -iVar4 + 0xf < 0 == SCARRY4(-iVar4,0xf)) {
                uVar6 = -iVar4;
              }
              uVar5 = param_3;
              if (0 < iVar4) {
                if (param_3 < 0x100) {
                  lVar1 = uVar7 * 4;
                  do {
                    uVar5 = (uint)uVar7;
                    if (((int)uVar5 <= param_5) ||
                       (*(int *)(&DAT_0022ba48 + uVar7 * 4) - *(int *)(&DAT_0022ba48 + lVar1) <=
                        (int)(uVar6 & (int)uVar6 >> 0x1f))) goto LAB_009aed2c;
                    uVar7 = (ulong)(uVar5 - 1);
                  } while ((uVar5 - 1 | param_3) < 0x100);
                }
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(0x5512,0x9aedcc);
                (*pcVar3)();
              }
LAB_009aed2c:
              iVar4 = param_3 - uVar5;
              if ((int)(param_3 - uVar5) <= param_4) {
                iVar4 = param_4;
              }
            }
            iVar4 = param_3 - iVar4;
            iVar2 = iVar4;
            if (param_6 <= iVar4) {
              iVar2 = param_6;
            }
            if (iVar4 <= param_5) {
              iVar2 = param_5;
            }
            if (param_3 - iVar2 != 0 && iVar2 <= (int)param_3) {
              return (ulong)(param_3 - iVar2) | 0x100000000;
            }
          }
        }
      }
    }
  }
  return 0;
}


// ===== 009aede0  FUN_009aede0 =====

void FUN_009aede0(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  
  uVar3 = param_2;
  if ((int)param_2 < 2) {
    uVar3 = 1;
  }
  uVar5 = (ulong)uVar3 * 8;
  *param_1 = 0xffffffff;
  puVar4 = (undefined8 *)operator_new(uVar5);
  param_1[1] = puVar4;
  param_1[2] = puVar4;
  uVar6 = uVar5 - 8 >> 3;
  uVar5 = (ulong)-(long)puVar4 >> 3;
  if (uVar6 <= (ulong)-(long)puVar4 >> 3) {
    uVar5 = uVar6;
  }
  puVar1 = puVar4 + uVar3;
  param_1[3] = puVar1;
  if ((5 < uVar5) && ((-(int)puVar4 & 7U) == 0)) {
    uVar6 = uVar5 + 1 & 3;
    uVar2 = 4;
    if (uVar6 != 0) {
      uVar2 = uVar6;
    }
    puVar8 = puVar4 + 2;
    lVar7 = (uVar5 + 1) - uVar2;
    puVar4 = puVar4 + lVar7;
    do {
      lVar7 = lVar7 + -4;
      puVar8[-1] = 0;
      puVar8[-2] = 0;
      puVar8[1] = 0;
      *puVar8 = 0;
      puVar8 = puVar8 + 4;
    } while (lVar7 != 0);
  }
  do {
    if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar8 = puVar4 + 1;
    *puVar4 = 0;
    puVar4 = puVar8;
  } while (puVar8 != puVar1);
  param_1[2] = puVar1;
  if ((100 < (int)param_2) && (uVar5 = FUN_004022fc(), (uVar5 & 1) == 0)) {
    FUN_00623bb0(&DAT_00215736,
                 "../../modules/audio_processing/agc2/clipping_predictor_level_buffer.cc",0xfa,
                 "[agc]: ClippingPredictorLevelBuffer exceeds the ",
                 "maximum allowed capacity. Capacity: ",param_2);
    return;
  }
  return;
}


// ===== 009aef0c  FUN_009aef0c =====

void FUN_009aef0c(undefined8 *param_1)

{
  *param_1 = 0xffffffff;
  return;
}


// ===== 009aef1c  FUN_009aef1c =====

void FUN_009aef1c(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 *puVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *param_3 + 1;
  uVar2 = *(long *)(param_3 + 4) - *(long *)(param_3 + 2);
  *param_3 = iVar3;
  iVar4 = (int)(uVar2 >> 3);
  if (iVar3 == iVar4) {
    iVar3 = 0;
    *param_3 = 0;
  }
  if (param_3[1] < iVar4) {
    param_3[1] = param_3[1] + 1;
  }
  if ((ulong)(long)iVar3 < (ulong)((long)uVar2 >> 3)) {
    puVar1 = (undefined4 *)(*(long *)(param_3 + 2) + (long)iVar3 * 8);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 009aef94  FUN_009aef94 =====

undefined1  [16] FUN_009aef94(int *param_1,int param_2,int param_3)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  float fVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  
  iVar2 = param_1[1];
  if (iVar2 < param_3 + param_2) {
    uVar5 = 0;
    uVar4 = 0;
  }
  else {
    iVar3 = param_3;
    if (iVar2 <= param_3) {
      iVar3 = iVar2;
    }
    if (iVar3 < 1) {
      fVar7 = 0.0;
      uVar4 = 0;
    }
    else {
      uVar8 = 0;
      uVar9 = 0;
      uVar4 = *(long *)(param_1 + 4) - *(long *)(param_1 + 2);
      param_2 = *param_1 - param_2;
      do {
        uVar6 = (ulong)(int)(((uint)(uVar4 >> 3) & param_2 >> 0x1f) + param_2);
        if ((ulong)((long)uVar4 >> 3) <= uVar6) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",uVar8,uVar9,
                     "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                    );
        }
        pfVar1 = (float *)(*(long *)(param_1 + 2) + uVar6 * 8);
        iVar3 = iVar3 + -1;
        param_2 = param_2 + -1;
        fVar10 = pfVar1[1];
        fVar7 = (float)uVar8 + *pfVar1;
        uVar8 = (ulong)(uint)fVar7;
        uVar9 = (ulong)(uint)fVar10;
      } while (iVar3 != 0);
      uVar4 = (ulong)(uint)fVar10 << 0x20;
    }
    uVar5 = 1;
    uVar4 = uVar4 | (uint)(fVar7 / (float)param_3);
  }
  auVar11._8_8_ = uVar5;
  auVar11._0_8_ = uVar4;
  return auVar11;
}


// ===== 009af064  FUN_009af064 =====

void FUN_009af064(undefined8 *param_1,int param_2)

{
  undefined1 *puVar1;
  char *pcVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  size_t sVar6;
  long lVar7;
  ulong uVar8;
  char *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  char *local_90;
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
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00622830(&local_b0,&local_90,0x40);
  puVar1 = (undefined1 *)0x24;
  if (param_2 != 0) {
    puVar1 = (undefined1 *)0x28;
  }
  pcVar2 = "WebRTC.Audio.Apm.AppliedInputVolume.";
  if (param_2 != 0) {
    pcVar2 = "WebRTC.Audio.Apm.RecommendedInputVolume.";
  }
  uVar5 = FUN_006228b0(&local_b0,pcVar2,puVar1);
  FUN_006228b0(uVar5,"OnChange",8);
  pcVar4 = local_b0;
  if (local_b0 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string_view:278: libc++ Hardening assertion __s != nullptr failed: null pointer passed to non-null argument of char_traits<...>::length\n"
              );
  }
  sVar6 = strlen(local_b0);
  uVar5 = FUN_006660d8(pcVar4,sVar6,1,0xff,0x32);
  param_1[2] = uVar5;
  uVar5 = FUN_009af29c(param_2,"DecreaseRate",0xc);
  param_1[3] = uVar5;
  uVar5 = FUN_009af390(param_2,"DecreaseAverage",0xf);
  param_1[4] = uVar5;
  uVar5 = FUN_009af29c(param_2,"IncreaseRate",0xc);
  param_1[5] = uVar5;
  uVar5 = FUN_009af390(param_2,"IncreaseAverage",0xf);
  param_1[6] = uVar5;
  uVar5 = FUN_009af29c(param_2,"UpdateRate",10);
  param_1[7] = uVar5;
  lVar7 = FUN_009af390(param_2,"UpdateAverage",0xd);
  param_1[8] = lVar7;
  if ((((param_1[2] == 0) || (param_1[3] == 0)) || (param_1[4] == 0)) ||
     (((param_1[5] == 0 || (param_1[6] == 0)) || (param_1[7] == 0)))) {
    *(undefined1 *)(param_1 + 9) = 1;
    *(undefined4 *)((long)param_1 + 0x4c) = 0;
    *(undefined1 *)(param_1 + 10) = 0;
    *(undefined1 *)((long)param_1 + 0x54) = 0;
  }
  else {
    *(undefined4 *)((long)param_1 + 0x4c) = 0;
    *(undefined1 *)(param_1 + 10) = 0;
    *(bool *)(param_1 + 9) = lVar7 == 0;
    *(undefined1 *)((long)param_1 + 0x54) = 0;
    if (lVar7 != 0) goto LAB_009af258;
  }
  uVar8 = FUN_004022fc();
  if ((uVar8 & 1) == 0) {
    local_90 = pcVar2;
    puStack_88 = puVar1;
    FUN_00623bb0(&DAT_001ff3ea,"../../modules/audio_processing/agc2/input_volume_stats_reporter.cc",
                 0x312,"Will not log any `",&local_90,"*` histogram stats.");
  }
LAB_009af258:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 009af29c  FUN_009af29c =====

void FUN_009af29c(int param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  size_t sVar4;
  char *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
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
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00622830(&local_a0,&local_80,0x40);
  uVar3 = 0x24;
  if (param_1 != 0) {
    uVar3 = 0x28;
  }
  pcVar1 = "WebRTC.Audio.Apm.AppliedInputVolume.";
  if (param_1 != 0) {
    pcVar1 = "WebRTC.Audio.Apm.RecommendedInputVolume.";
  }
  uVar3 = FUN_006228b0(&local_a0,pcVar1,uVar3);
  FUN_006228b0(uVar3,param_2,param_3);
  pcVar1 = local_a0;
  if (local_a0 != (char *)0x0) {
    sVar4 = strlen(local_a0);
    FUN_006660d8(pcVar1,sVar4,1,6000,0x32);
    if (*(long *)(lVar2 + 0x28) == local_38) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/string_view:278: libc++ Hardening assertion __s != nullptr failed: null pointer passed to non-null argument of char_traits<...>::length\n"
            );
}


// ===== 009af390  FUN_009af390 =====

void FUN_009af390(int param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  size_t sVar4;
  char *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
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
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00622830(&local_a0,&local_80,0x40);
  uVar3 = 0x24;
  if (param_1 != 0) {
    uVar3 = 0x28;
  }
  pcVar1 = "WebRTC.Audio.Apm.AppliedInputVolume.";
  if (param_1 != 0) {
    pcVar1 = "WebRTC.Audio.Apm.RecommendedInputVolume.";
  }
  uVar3 = FUN_006228b0(&local_a0,pcVar1,uVar3);
  FUN_006228b0(uVar3,param_2,param_3);
  pcVar1 = local_a0;
  if (local_a0 != (char *)0x0) {
    sVar4 = strlen(local_a0);
    FUN_006660d8(pcVar1,sVar4,1,0xff,0x32);
    if (*(long *)(lVar2 + 0x28) == local_38) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/string_view:278: libc++ Hardening assertion __s != nullptr failed: null pointer passed to non-null argument of char_traits<...>::length\n"
            );
}


// ===== 009af484  FUN_009af484 =====

void FUN_009af484(void)

{
  return;
}


// ===== 009af48c  FUN_009af48c =====

void FUN_009af48c(int *param_1,int param_2)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
    if (((char)param_1[0x15] == '\x01') && (param_2 != param_1[0x14])) {
      FUN_00666568(*(undefined8 *)(param_1 + 4),param_2);
      if ((*(byte *)(param_1 + 0x15) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005dc08c();
      }
      iVar1 = param_2 - param_1[0x14];
      if (iVar1 < 0) {
        *param_1 = *param_1 + 1;
        param_1[2] = param_1[2] - iVar1;
      }
      else {
        param_1[1] = param_1[1] + 1;
        param_1[3] = param_1[3] + iVar1;
      }
    }
    iVar1 = param_1[0x13];
    param_1[0x13] = iVar1 + 1;
    if (5999 < iVar1 + 1) {
      FUN_009af560(param_1);
      param_1[0x13] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
    param_1[0x14] = param_2;
    *(undefined1 *)(param_1 + 0x15) = 1;
  }
  return;
}


// ===== 009af560  FUN_009af560 =====

void FUN_009af560(uint *param_1)

{
  uint uVar1;
  
  FUN_00666568(*(undefined8 *)(param_1 + 6),*param_1);
  if (0 < (int)*param_1) {
    FUN_00666568(*(undefined8 *)(param_1 + 8),(int)((float)(int)param_1[2] / (float)*param_1));
  }
  FUN_00666568(*(undefined8 *)(param_1 + 10),param_1[1]);
  uVar1 = param_1[1];
  if (0 < (int)uVar1) {
    FUN_00666568(*(undefined8 *)(param_1 + 0xc),(int)((float)(int)param_1[3] / (float)uVar1));
    uVar1 = param_1[1];
  }
  uVar1 = uVar1 + *param_1;
  FUN_00666568(*(undefined8 *)(param_1 + 0xe),uVar1);
  if (0 < (int)uVar1) {
    FUN_00666568(*(undefined8 *)(param_1 + 0x10),
                 (int)((float)(int)(param_1[3] + param_1[2]) / (float)uVar1));
    return;
  }
  return;
}


// ===== 009af638  FUN_009af638 =====

void FUN_009af638(undefined4 param_1)

{
  long lVar1;
  
  lVar1 = DAT_00d808a8;
  if (DAT_00d808a8 == 0) {
    lVar1 = FUN_006660d8("WebRTC.Audio.Apm.RecommendedInputVolume.OnChangeToMatchTarget",0x3d,1,0xff
                         ,0x32);
    FUN_00d0f5e0(0,lVar1,&DAT_00d808a8);
    if (lVar1 == 0) {
      return;
    }
  }
  FUN_00666568(lVar1,param_1);
  return;
}


// ===== 009af6bc  FUN_009af6bc =====

void FUN_009af6bc(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  *puVar1 = &PTR_FUN_00d40a88;
  puVar1[1] = param_1;
  puVar1[2] = 0x44f000000000bb80;
  *(undefined2 *)(puVar1 + 3) = 1;
  *(undefined8 *)((long)puVar1 + 0x1c) = 0x44f0000044f00000;
  *(undefined4 *)((long)puVar1 + 0x24) = 500;
  return;
}


// ===== 009af71c  FUN_009af71c =====

void FUN_009af71c(void)

{
  return;
}


// ===== 009af724  FUN_009af724 =====

void FUN_009af724(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 009af730  FUN_009af730 =====

float FUN_009af730(long param_1,long *param_2)

{
  ulong uVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  lVar9 = param_2[1];
  iVar8 = (int)lVar9 * 100;
  if (iVar8 != *(int *)(param_1 + 0x10)) {
    *(int *)(param_1 + 0x10) = iVar8;
    *(undefined2 *)(param_1 + 0x18) = 1;
    *(undefined4 *)(param_1 + 0x24) = 500;
    fVar12 = (float)iVar8 + (float)iVar8;
    fVar12 = (fVar12 + fVar12) / 100.0;
    *(float *)(param_1 + 0x14) = fVar12;
    *(float *)(param_1 + 0x1c) = fVar12;
    *(float *)(param_1 + 0x20) = fVar12;
    lVar9 = param_2[1];
  }
  if (*param_2 == 0) {
    fVar12 = 0.0;
  }
  else {
    if (1 < *(byte *)(param_2 + 3)) {
                    /* WARNING: Subroutine does not return */
      FUN_005ee558();
    }
    fVar12 = 0.0;
    lVar11 = 0;
    uVar10 = lVar9 * 4 - 4;
    uVar1 = (uVar10 >> 2) + 1;
    do {
      if (*(byte *)(param_2 + 3) == 0) {
        pfVar5 = *(float **)(param_2[2] + lVar11 * 8);
      }
      else {
        pfVar5 = (float *)(param_2[2] + lVar11 * lVar9 * 4);
      }
      fVar14 = 0.0;
      fVar13 = 0.0;
      pfVar2 = (float *)0x0;
      if (lVar9 != 0) {
        pfVar2 = pfVar5;
      }
      if (lVar9 * 4 != 0) {
        pfVar5 = pfVar2;
        if (0x1b < uVar10) {
          pfVar5 = pfVar2 + 4;
          uVar7 = uVar1 & 0x7ffffffffffffff8;
          fVar13 = fVar14;
          do {
            pfVar6 = pfVar5 + -4;
            pfVar3 = pfVar5 + -2;
            pfVar4 = pfVar5 + 2;
            uVar19 = *(undefined8 *)pfVar5;
            uVar7 = uVar7 - 8;
            pfVar5 = pfVar5 + 8;
            fVar14 = (float)*(undefined8 *)pfVar6;
            fVar15 = (float)((ulong)*(undefined8 *)pfVar6 >> 0x20);
            fVar16 = (float)*(undefined8 *)pfVar3;
            fVar17 = (float)((ulong)*(undefined8 *)pfVar3 >> 0x20);
            fVar18 = (float)uVar19;
            fVar20 = (float)((ulong)uVar19 >> 0x20);
            fVar21 = (float)*(undefined8 *)pfVar4;
            fVar22 = (float)((ulong)*(undefined8 *)pfVar4 >> 0x20);
            fVar13 = fVar13 + fVar14 * fVar14 + fVar15 * fVar15 + fVar16 * fVar16 + fVar17 * fVar17
                     + fVar18 * fVar18 + fVar20 * fVar20 + fVar21 * fVar21 + fVar22 * fVar22;
          } while (uVar7 != 0);
          pfVar5 = pfVar2 + (uVar1 & 0x7ffffffffffffff8);
          fVar14 = fVar13;
          if (uVar1 == (uVar1 & 0x7ffffffffffffff8)) goto LAB_009af7c8;
        }
        fVar13 = fVar14;
        do {
          pfVar6 = pfVar5 + 1;
          fVar13 = fVar13 + *pfVar5 * *pfVar5;
          pfVar5 = pfVar6;
        } while (pfVar6 != pfVar2 + lVar9);
      }
LAB_009af7c8:
      lVar11 = lVar11 + 1;
      if (fVar12 <= fVar13) {
        fVar12 = fVar13;
      }
    } while (lVar11 != *param_2);
  }
  if (fVar12 <= *(float *)(param_1 + 0x14)) {
    fVar12 = *(float *)(param_1 + 0x20) / (float)(int)lVar9;
    goto LAB_009af94c;
  }
  if (*(char *)(param_1 + 0x19) == '\x01') {
    if (*(float *)(param_1 + 0x1c) <= fVar12) {
      fVar12 = *(float *)(param_1 + 0x1c);
    }
    *(float *)(param_1 + 0x1c) = fVar12;
    iVar8 = *(int *)(param_1 + 0x24);
    if (iVar8 != 0) goto LAB_009af8c4;
LAB_009af900:
    *(undefined2 *)(param_1 + 0x18) = 0;
    iVar8 = 500;
    fVar13 = *(float *)(param_1 + 0x20) * 0.5 + fVar12 * 0.5;
    if (fVar12 <= *(float *)(param_1 + 0x20)) {
      fVar13 = fVar12;
    }
LAB_009af938:
    fVar12 = fVar13;
    *(float *)(param_1 + 0x20) = fVar12;
  }
  else {
    *(float *)(param_1 + 0x1c) = fVar12;
    *(undefined1 *)(param_1 + 0x19) = 1;
    iVar8 = *(int *)(param_1 + 0x24);
    if (iVar8 == 0) goto LAB_009af900;
LAB_009af8c4:
    if (*(char *)(param_1 + 0x18) != '\x01') {
      iVar8 = iVar8 + -1;
      fVar13 = fVar12;
      if (*(float *)(param_1 + 0x20) <= fVar12) {
        fVar13 = *(float *)(param_1 + 0x20);
      }
      goto LAB_009af938;
    }
    *(float *)(param_1 + 0x20) = fVar12;
    iVar8 = iVar8 + -1;
  }
  *(int *)(param_1 + 0x24) = iVar8;
  fVar12 = fVar12 / (float)(int)param_2[1];
LAB_009af94c:
  if (fVar12 <= 1.0) {
    fVar12 = -90.309;
  }
  else {
    fVar12 = log10f(fVar12);
    fVar12 = fVar12 * 10.0 + -90.309;
  }
  return fVar12;
}


// ===== 009af994  FUN_009af994 =====

long * FUN_009af994(undefined4 param_1,undefined4 param_2,long param_3)

{
  long *plVar1;
  
  plVar1 = (long *)operator_new(0x68);
  *plVar1 = (long)&PTR_FUN_00d40ab0;
  plVar1[1] = param_3;
  *(undefined4 *)(plVar1 + 2) = param_1;
  *(undefined4 *)((long)plVar1 + 0x14) = param_2;
  FUN_009afc70((long)plVar1 + 0x24);
  FUN_009afc70(plVar1 + 9);
  (**(code **)(*plVar1 + 0x20))(plVar1);
  return plVar1;
}


// ===== 009afa14  FUN_009afa14 =====

void FUN_009afa14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d40ab0;
  FUN_009afc7c(param_1 + 9);
  FUN_009afc7c((long)param_1 + 0x24);
  return;
}


// ===== 009afa50  FUN_009afa50 =====

void FUN_009afa50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d40ab0;
  FUN_009afc7c(param_1 + 9);
  FUN_009afc7c((long)param_1 + 0x24);
  operator_delete(param_1);
  return;
}


// ===== 009afa9c  FUN_009afa9c =====

undefined4 FUN_009afa9c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}


// ===== 009afaa8  FUN_009afaa8 =====

void FUN_009afaa8(float param_1,float param_2,float param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  
  if (0.95 <= param_1) {
    iVar1 = *(int *)(param_4 + 0x40) + 10;
    *(int *)(param_4 + 0x18) = *(int *)(param_4 + 0x18) + 1;
    *(int *)(param_4 + 0x40) = iVar1;
    if (param_2 <= *(float *)(param_4 + 0x3c)) {
      param_2 = *(float *)(param_4 + 0x3c);
    }
    *(float *)(param_4 + 0x3c) = param_2;
    if (400 < iVar1) {
      FUN_009afc90(param_4 + 0x24);
      *(undefined8 *)(param_4 + 0x3c) = 0xc2b49eb8;
    }
    uVar4 = FUN_009afcf4(param_4 + 0x24);
    fVar7 = *(float *)(param_4 + 0x3c);
    if ((uVar4 & 0x100000000) != 0) {
      fVar7 = (float)uVar4;
    }
    fVar11 = *(float *)(param_4 + 0x20);
    fVar7 = fVar7 - param_3;
    fVar14 = 0.0011506081;
    fVar8 = 0.9988494;
    if (fVar7 == fVar11 || fVar7 < fVar11 != (NAN(fVar7) || NAN(fVar11))) {
      fVar14 = 0.00023025274;
      fVar8 = 0.99976975;
    }
    fVar8 = fVar11 * fVar8 + fVar7 * fVar14;
    fVar7 = 25.0;
    if (fVar8 < 25.0 != NAN(fVar8)) {
      fVar7 = fVar8;
    }
    fVar14 = 12.0;
    if (12.0 < fVar8) {
      fVar14 = fVar7;
    }
    *(float *)(param_4 + 0x20) = fVar14;
    if (*(int *)(param_4 + 0x18) < *(int *)(param_4 + 0x14)) {
      return;
    }
    *(float *)(param_4 + 0x1c) = fVar14;
    return;
  }
  if (1 < *(int *)(param_4 + 0x14)) {
    if (*(int *)(param_4 + 0x18) < *(int *)(param_4 + 0x14)) {
      if (*(int *)(param_4 + 0x18) < 1) goto LAB_009afc00;
      lVar5 = 0x20;
      lVar6 = 0x44;
    }
    else {
      lVar5 = 0x44;
      lVar6 = 0x20;
    }
    puVar2 = (undefined8 *)(param_4 + lVar6);
    puVar3 = (undefined8 *)(param_4 + lVar5);
    uVar13 = puVar2[1];
    uVar12 = *puVar2;
    uVar10 = puVar2[3];
    uVar9 = puVar2[2];
    *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(puVar2 + 4);
    puVar3[1] = uVar13;
    *puVar3 = uVar12;
    puVar3[3] = uVar10;
    puVar3[2] = uVar9;
  }
LAB_009afc00:
  *(undefined4 *)(param_4 + 0x18) = 0;
  return;
}


// ===== 009afc18  FUN_009afc18 =====

void FUN_009afc18(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x10);
  FUN_009afc84(param_1 + 0x24);
  *(undefined8 *)(param_1 + 0x3c) = 0xc2b49eb8;
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x10);
  FUN_009afc84(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x60) = 0xc2b49eb8;
  return;
}


// ===== 009afc70  FUN_009afc70 =====

void FUN_009afc70(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}


// ===== 009afc7c  FUN_009afc7c =====

void FUN_009afc7c(void)

{
  return;
}


// ===== 009afc84  FUN_009afc84 =====

void FUN_009afc84(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}


// ===== 009afc90  FUN_009afc90 =====

void FUN_009afc90(undefined4 param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(param_2 + 0x10) = uVar1 + 1;
  if (uVar1 < 4) {
    *(undefined4 *)(param_2 + (ulong)uVar1 * 4) = param_1;
    if (*(int *)(param_2 + 0x10) == 4) {
      *(undefined4 *)(param_2 + 0x10) = 0;
    }
    if (*(int *)(param_2 + 0x14) < 4) {
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/array:277: libc++ Hardening assertion __n < _Size failed: out-of-bounds access in std::array<T, N>\n"
            );
}


// ===== 009afcf4  FUN_009afcf4 =====

ulong FUN_009afcf4(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  uVar2 = (ulong)uVar1;
  if (uVar1 != 0) {
    if (uVar1 == 4) {
      uVar2 = (ulong)*(uint *)(param_1 + 0x10);
      if (3 < *(uint *)(param_1 + 0x10)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/array:282: libc++ Hardening assertion __n < _Size failed: out-of-bounds access in std::array<T, N>\n"
                  );
      }
    }
    else {
      uVar2 = 0;
    }
    uVar2 = (ulong)*(uint *)(param_1 + uVar2 * 4) | 0x100000000;
  }
  return uVar2;
}


// ===== 009afd48  FUN_009afd48 =====

/* WARNING: Type propagation algorithm not settling */

void * FUN_009afd48(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int *******pppppppiVar1;
  bool bVar2;
  ulong uVar3;
  void *pvVar4;
  int *******local_48;
  ulong local_40;
  byte bStack_31;
  
  (**(code **)(*param_1 + 0x10))
            (&local_48,param_1,"WebRTC-Agc2SpeechLevelEstimatorExperimental",0x2b);
  if (-1 < (char)bStack_31) {
    local_40 = (ulong)bStack_31;
  }
  if (local_40 < 7) {
    bVar2 = false;
  }
  else {
    pppppppiVar1 = local_48;
    if (-1 < (char)bStack_31) {
      pppppppiVar1 = (int *******)&local_48;
    }
    bVar2 = *(int *)pppppppiVar1 == 0x62616e45 && *(int *)((long)pppppppiVar1 + 3) == 0x64656c62;
  }
  if ((char)bStack_31 < '\0') {
    operator_delete(local_48);
    uVar3 = FUN_00417e08();
  }
  else {
    uVar3 = FUN_00417e08();
  }
  if (!bVar2) {
    if ((uVar3 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_processing/agc2/speech_level_estimator.cc",
                   0x109,"AGC2 using SpeechLevelEstimator");
    }
    pvVar4 = operator_new(0x40);
    FUN_009b0020(pvVar4,param_2,param_3,param_4);
    return pvVar4;
  }
  if ((uVar3 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_processing/agc2/speech_level_estimator.cc",0xe9,
                 "AGC2 using SpeechLevelEstimatorExperimental");
  }
  pvVar4 = operator_new(0x38);
  FUN_009afea8(pvVar4,param_2,param_3,param_4);
  return pvVar4;
}


// ===== 009afea8  FUN_009afea8 =====

void FUN_009afea8(undefined8 *param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *param_1 = &PTR_FUN_00d40ae8;
  param_1[1] = param_2;
  fVar2 = *(float *)(param_3 + 0xc);
  fVar3 = *(float *)(param_3 + 4);
  *(undefined4 *)((long)param_1 + 0x14) = param_4;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  fVar3 = (-20.0 - fVar2) - fVar3;
  fVar2 = 30.0;
  if (fVar3 < 30.0 != NAN(fVar3)) {
    fVar2 = fVar3;
  }
  fVar1 = -90.0;
  if (-90.0 < fVar3) {
    fVar1 = fVar2;
  }
  *(float *)(param_1 + 2) = fVar1;
  *(float *)(param_1 + 5) = fVar1;
  *(float *)((long)param_1 + 0x34) = fVar1;
  return;
}


// ===== 009aff08  FUN_009aff08 =====

void FUN_009aff08(float param_1,float param_2,long param_3)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (0.95 <= param_2) {
    piVar2 = (int *)(param_3 + 0x18);
    iVar1 = *(int *)(param_3 + 0x30) + 1;
    *piVar2 = *piVar2 + 1;
    *(int *)(param_3 + 0x30) = iVar1;
    *(float *)(param_3 + 0x1c) = param_1 + *(float *)(param_3 + 0x1c);
    if (*(int *)(param_3 + 0x14) <= iVar1) {
      uVar3 = *(ulong *)(param_3 + 0x18);
      *(ulong *)(param_3 + 0x20) = uVar3;
      if (99 < (int)uVar3) {
        fVar4 = (float)(uVar3 >> 0x20) / (float)(uVar3 & 0xffffffff);
        fVar6 = 30.0;
        if (fVar4 < 30.0 != NAN(fVar4)) {
          fVar6 = fVar4;
        }
        fVar5 = -90.0;
        if (-90.0 < fVar4) {
          fVar5 = fVar6;
        }
        if ((*(char *)(param_3 + 0x2c) != '\x01') ||
           (fVar6 = *(float *)(param_3 + 0x28) + -10.0, fVar5 < fVar6 == (NAN(fVar5) || NAN(fVar6)))
           ) {
          *(float *)(param_3 + 0x28) = fVar5;
          *(undefined1 *)(param_3 + 0x2c) = 1;
        }
        piVar2[0] = 0;
        piVar2[1] = 0;
        *(undefined8 *)(param_3 + 0x20) = 0;
      }
    }
    return;
  }
  *(undefined4 *)(param_3 + 0x30) = 0;
  *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(param_3 + 0x20);
  return;
}


// ===== 009affd4  FUN_009affd4 =====

void FUN_009affd4(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x2c) = 0;
  return;
}


// ===== 009afff4  FUN_009afff4 =====

void FUN_009afff4(void)

{
  return;
}


// ===== 009afffc  FUN_009afffc =====

void FUN_009afffc(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 009b0008  FUN_009b0008 =====

undefined4 FUN_009b0008(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}


// ===== 009b0014  FUN_009b0014 =====

undefined1 FUN_009b0014(long param_1)

{
  return *(undefined1 *)(param_1 + 0x2c);
}


// ===== 009b0020  FUN_009b0020 =====

void FUN_009b0020(undefined8 *param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *param_1 = &PTR_FUN_00d40b28;
  param_1[1] = param_2;
  fVar2 = *(float *)(param_3 + 0xc);
  fVar3 = *(float *)(param_3 + 4);
  *(undefined4 *)((long)param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 3) = 400;
  *(undefined1 *)((long)param_1 + 0x34) = 0;
  param_1[4] = 0x1903f800000;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x3f800000;
  fVar3 = (-20.0 - fVar2) - fVar3;
  *(undefined4 *)(param_1 + 7) = 0;
  fVar2 = 30.0;
  if (fVar3 < 30.0 != NAN(fVar3)) {
    fVar2 = fVar3;
  }
  fVar1 = -90.0;
  if (-90.0 < fVar3) {
    fVar1 = fVar2;
  }
  *(float *)(param_1 + 2) = fVar1;
  *(float *)((long)param_1 + 0x1c) = fVar1;
  *(float *)(param_1 + 5) = fVar1;
  *(float *)(param_1 + 6) = fVar1;
  return;
}


