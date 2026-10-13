// ===== 005c0424  FUN_005c0424 =====

undefined8 FUN_005c0424(long param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  timeval local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
LAB_005c04ac:
  while( true ) {
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xd64));
    iVar2 = *(int *)(param_1 + 0xd60);
    while (iVar2 == 0) {
      pthread_cond_wait((pthread_cond_t *)(param_1 + 0xd8c),(pthread_mutex_t *)(param_1 + 0xd64));
      iVar2 = *(int *)(param_1 + 0xd60);
    }
    *(undefined4 *)(param_1 + 0xd60) = 0;
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xd64));
    iVar2 = *(int *)(param_1 + 0xe74);
    if (iVar2 < 2) break;
    if (iVar2 == 2) {
      gettimeofday(&local_58,(__timezone_ptr_t)0x0);
      *(double *)(param_1 + 0xe88) =
           *(double *)(param_1 + 0xe88) +
           (double)(ulong)((local_58.tv_usec + local_58.tv_sec * 1000000) -
                          *(long *)(param_1 + 0xe80)) / 1000000.0;
      goto LAB_005c0534;
    }
    if (iVar2 == 3) {
      *(undefined4 *)(param_1 + 0xe78) = 0;
      pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xdc0));
      *(undefined4 *)(param_1 + 0xdbc) = 1;
      pthread_cond_signal((pthread_cond_t *)(param_1 + 0xde8));
      pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xdc0));
      pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xe1c));
      *(int *)(param_1 + 0xe18) = *(int *)(param_1 + 0xe18) + 1;
      iVar2 = pthread_cond_signal((pthread_cond_t *)(param_1 + 0xe44));
      if (*(long *)(lVar1 + 0x28) == local_48) {
        pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xe1c));
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(iVar2);
    }
  }
  if (iVar2 == 0) {
    uVar3 = 0xfffffffd;
  }
  else {
    if (iVar2 != 1) goto LAB_005c04ac;
LAB_005c0534:
    gettimeofday(&local_58,(__timezone_ptr_t)0x0);
    uVar3 = 0;
    *(__suseconds_t *)(param_1 + 0xe80) = local_58.tv_usec + local_58.tv_sec * 1000000;
  }
  *(undefined4 *)(param_1 + 0xe78) = uVar3;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xdc0));
  *(undefined4 *)(param_1 + 0xdbc) = 1;
  pthread_cond_signal((pthread_cond_t *)(param_1 + 0xde8));
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xdc0));
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xe1c));
  *(int *)(param_1 + 0xe18) = *(int *)(param_1 + 0xe18) + 1;
  pthread_cond_signal((pthread_cond_t *)(param_1 + 0xe44));
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xe1c));
  goto LAB_005c04ac;
}


// ===== 005c05d4  FUN_005c05d4 =====

undefined8 FUN_005c05d4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x70);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x1a8);
  ma_log_postf(uVar2,4,"Loading symbol: %s\n",param_2);
  puVar1 = (undefined8 *)dlsym(uVar3,param_2);
  if (puVar1 == (undefined8 *)0x0) {
    ma_log_postf(uVar2,2,"Failed to load symbol: %s\n",param_2);
    ma_log_postf(*(undefined8 *)(param_1 + 0x70),3,"[OpenSL] Cannot find symbol %s",param_2);
    uVar2 = 0xffffff35;
  }
  else {
    uVar2 = 0;
    *param_3 = *puVar1;
  }
  return uVar2;
}


// ===== 005c068c  FUN_005c068c =====

ulong FUN_005c068c(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  if (DAT_006873f4 == 0) {
    DAT_006873f4 = DAT_006873f4 + 1;
    iVar1 = (**(code **)(param_1 + 0x1e8))(&DAT_006873f8,0,0,0,0,0);
    if (iVar1 == 0) {
      (**(code **)*DAT_006873f8)(DAT_006873f8,0);
      uVar2 = (**(code **)(*DAT_006873f8 + 0x18))
                        (DAT_006873f8,*(undefined8 *)(param_1 + 0x1b0),&DAT_00687400);
      iVar1 = (int)uVar2;
      if (iVar1 == 0) {
        return uVar2;
      }
      (**(code **)(*DAT_006873f8 + 0x30))();
    }
    DAT_006873f4 = DAT_006873f4 + -1;
    if (iVar1 - 2U < 0xb) {
      uVar2 = (ulong)*(uint *)(&DAT_00285170 + (ulong)(iVar1 - 2U) * 4);
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  else {
    uVar2 = 0;
    DAT_006873f4 = DAT_006873f4 + 1;
  }
  return uVar2;
}


// ===== 005c0784  FUN_005c0784 =====

undefined8 FUN_005c0784(void)

{
  int iVar1;
  
  iVar1 = FUN_00341150(1,&DAT_006873f0);
  while (iVar1 != 0) {
    do {
    } while (DAT_006873f0 == 1);
    iVar1 = FUN_00341150(1,&DAT_006873f0);
  }
  DAT_006873f4 = DAT_006873f4 + -1;
  if (DAT_006873f4 == 0) {
    (**(code **)(*DAT_006873f8 + 0x30))();
  }
  DAT_006873f0 = 0;
  return 0;
}


// ===== 005c0814  FUN_005c0814 =====

void FUN_005c0814(undefined8 param_1,code *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_650 [64];
  undefined1 auStack_550 [1288];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (DAT_006873f4 == 0) {
    uVar2 = 0xfffffffd;
  }
  else {
    memset(local_650,0,0x608);
    local_650[0] = 0xfffffffe;
    ma_strncpy_s(auStack_550,0x100,"Default Playback Device",0xffffffffffffffff);
    uVar2 = (*param_2)(param_1,1,local_650,param_3);
    if ((int)uVar2 != 0) {
      memset(local_650,0,0x608);
      local_650[0] = 0xffffffff;
      ma_strncpy_s(auStack_550,0x100,"Default Capture Device",0xffffffffffffffff);
      (*param_2)(param_1,2,local_650,param_3);
      uVar2 = 0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 005c0918  FUN_005c0918 =====

undefined8 FUN_005c0918(undefined8 param_1,int param_2,int *param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  
  if (DAT_006873f4 == 0) {
    return 0xfffffffd;
  }
  if (param_3 == (int *)0x0) {
    if (param_2 != 1) goto LAB_005c0994;
    pcVar3 = "Default Playback Device";
    uVar4 = 0xfffffffe;
LAB_005c09a0:
    *param_4 = uVar4;
    ma_strncpy_s(param_4 + 0x40,0x100,pcVar3,0xffffffffffffffff);
    uVar2 = DAT_0024e8d0;
    uVar5 = 0;
    uVar6 = 0;
    *(undefined8 *)(param_4 + 0x80) = DAT_0024e700;
    do {
      if ((0xe1fUL >> (uVar6 & 0x3f) & 1) != 0) {
        uVar4 = (&DAT_00281c28)[uVar6];
        param_4[0x81] = uVar5 + 1;
        *(undefined8 *)(param_4 + (ulong)uVar5 * 4 + 0x82) = uVar2;
        param_4[(ulong)uVar5 * 4 + 0x84] = uVar4;
        param_4[(ulong)uVar5 * 4 + 0x85] = 0;
        uVar5 = uVar5 + 1;
      }
      uVar1 = DAT_0024e8a8;
      uVar6 = uVar6 + 1;
    } while (uVar6 != 0xe);
    uVar6 = 0;
    do {
      if ((0xe1fUL >> (uVar6 & 0x3f) & 1) != 0) {
        uVar4 = (&DAT_00281c28)[uVar6];
        param_4[0x81] = uVar5 + 1;
        *(undefined8 *)(param_4 + (ulong)uVar5 * 4 + 0x82) = uVar1;
        param_4[(ulong)uVar5 * 4 + 0x84] = uVar4;
        param_4[(ulong)uVar5 * 4 + 0x85] = 0;
        uVar5 = uVar5 + 1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != 0xe);
    uVar6 = 0;
    do {
      if ((0xe1fUL >> (uVar6 & 0x3f) & 1) != 0) {
        uVar4 = (&DAT_00281c28)[uVar6];
        param_4[0x81] = uVar5 + 1;
        *(undefined8 *)(param_4 + (ulong)uVar5 * 4 + 0x82) = 0x100000001;
        param_4[(ulong)uVar5 * 4 + 0x84] = uVar4;
        param_4[(ulong)uVar5 * 4 + 0x85] = 0;
        uVar5 = uVar5 + 1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != 0xe);
    uVar2 = 0;
  }
  else {
    if (param_2 == 2) {
      if (*param_3 == -1) goto LAB_005c0994;
    }
    else {
      if (param_2 != 1) {
LAB_005c0994:
        pcVar3 = "Default Capture Device";
        uVar4 = 0xffffffff;
        goto LAB_005c09a0;
      }
      if (*param_3 == -2) {
        pcVar3 = "Default Playback Device";
        uVar4 = 0xfffffffe;
        goto LAB_005c09a0;
      }
    }
    uVar2 = 0xffffff34;
  }
  return uVar2;
}


// ===== 005c0ab0  FUN_005c0ab0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c0ab0(long *param_1,uint *param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  void *pvVar8;
  long *plVar9;
  char *pcVar10;
  code *pcVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  uint local_f4;
  undefined8 *local_f0;
  undefined8 ***local_e8;
  undefined8 *puStack_e0;
  undefined8 **local_d8;
  long local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_80 = 1;
  if (DAT_006873f4 == 0) {
    uVar6 = 0xfffffffd;
    goto LAB_005c179c;
  }
  uVar4 = *param_2;
  if (uVar4 == 4) {
    uVar6 = 0xffffff37;
    goto LAB_005c179c;
  }
  local_78 = *(undefined8 *)(*param_1 + 0x1c0);
  local_70 = *(undefined8 *)(*param_1 + 0x1e0);
  if ((((uVar4 | 2) == 3) && (*(int *)(param_3 + 1) == 1)) ||
     (((uVar4 & 0xfffffffe) == 2 && (*(int *)(param_4 + 8) == 1)))) {
    uVar6 = 0xffffff36;
    goto LAB_005c179c;
  }
  plVar9 = param_1 + 0x1ab;
  local_88 = 0x800007bd;
  param_1[0x1ac] = 0;
  *plVar9 = 0;
  param_1[0x1ae] = 0;
  param_1[0x1ad] = 0;
  param_1[0x1b0] = 0;
  param_1[0x1af] = 0;
  param_1[0x1b2] = 0;
  param_1[0x1b1] = 0;
  param_1[0x1b4] = 0;
  param_1[0x1b3] = 0;
  param_1[0x1b6] = 0;
  param_1[0x1b5] = 0;
  uVar4 = *param_2;
  if ((uVar4 & 0xfffffffe) == 2) {
    uVar2 = *(uint *)(param_4 + 0xc);
    iVar5 = *(int *)(param_4 + 0x14);
    uVar12 = *(uint *)(param_4 + 0x10);
    uVar4 = 5;
    if (uVar2 != 0) {
      uVar4 = uVar2;
    }
    uVar6 = 2;
    uVar2 = 2;
    if (uVar12 != 0) {
      uVar2 = uVar12;
    }
    if (uVar4 == 5) {
      uVar6 = 4;
      local_94 = 3;
    }
    local_b0 = CONCAT44(uVar2,uVar6);
    uVar12 = 48000000;
    if (iVar5 != 0) {
      uVar12 = iVar5 * 1000;
    }
    uVar13 = 8000000;
    if (((8000000 < uVar12) && (uVar13 = 0xa83a68, 0xa83a68 < uVar12)) &&
       (uVar13 = 12000000, 12000000 < uVar12)) {
      uVar13 = 16000000;
      if (((16000000 < uVar12) && (uVar13 = 0x15074d0, 0x15074d0 < uVar12)) &&
         (((uVar13 = 24000000, 24000000 < uVar12 &&
           ((uVar13 = 32000000, 32000000 < uVar12 && (uVar13 = 44100000, 44100000 < uVar12)))) &&
          (uVar13 = 16000000, uVar12 < 0x2dc6c01)))) {
        uVar13 = 48000000;
      }
    }
    uVar15 = 0;
    uVar14 = 0;
    uVar12 = *(int *)(&DAT_00281c10 + (ulong)uVar4 * 4) << 3;
    uStack_a8 = CONCAT44(uVar12,uVar13);
    do {
      uVar16 = *(byte *)(param_4 + uVar15 + 0x18) - 1;
      if (uVar16 < 0x13) {
        uVar16 = *(uint *)(&DAT_002851e0 + ((ulong)uVar16 & 0xff) * 4);
      }
      else {
        uVar16 = 0;
      }
      uVar15 = uVar15 + 1;
      uVar14 = uVar16 | uVar14;
    } while (uVar2 != uVar15);
    uStack_98 = 2;
    if (2 < uVar2) {
      local_b0 = CONCAT44(2,uVar6);
    }
    if (uVar4 == 5) {
      if (0x20 < uVar12) {
        uVar12 = 0x20;
LAB_005c0d34:
        uStack_a8 = CONCAT44(uVar12,uVar13);
      }
    }
    else if (0x10 < uVar12) {
      uVar12 = 0x10;
      goto LAB_005c0d34;
    }
    local_c0 = (undefined8 *)CONCAT44(local_c0._4_4_,0xffffffff);
    local_84 = *(undefined4 *)(param_4 + 0x120);
    local_d8 = &local_c8;
    local_a0 = CONCAT44(uVar14,uVar12);
    local_e8 = (undefined8 ***)&local_88;
    local_d0 = 0;
    plVar1 = param_1 + 0x1af;
    puStack_e0 = &local_b0;
    local_b8 = 0;
    local_c8 = DAT_0024e7b8;
    uVar4 = (**(code **)(*DAT_00687400 + 0x18))
                      (DAT_00687400,plVar1,&local_d8,&local_e8,2,&local_78,&local_80);
    if ((uVar4 == 9) || (uVar4 == 2)) {
      uStack_a8 = _UNK_0024e278;
      local_b0 = _DAT_0024e270;
      local_a0 = DAT_0024e918;
      uVar4 = (**(code **)(*DAT_00687400 + 0x18))
                        (DAT_00687400,plVar1,&local_d8,&local_e8,2,&local_78,&local_80);
    }
    if (uVar4 == 0) {
      if ((param_2[0x40] != 0) &&
         (iVar5 = (**(code **)(*(long *)param_1[0x1af] + 0x18))
                            ((long *)param_1[0x1af],*(undefined8 *)(*param_1 + 0x1e0),&local_f0),
         iVar5 == 0)) {
        local_f4 = param_2[0x40];
        if (4 < local_f4 - 1) {
          local_f4 = 0;
        }
        (**(code **)*local_f0)(local_f0,"androidRecordingPreset",&local_f4,4);
      }
      uVar4 = (*(code *)**(undefined8 **)*plVar1)((undefined8 *)*plVar1,0);
      if (uVar4 == 0) {
        uVar4 = (**(code **)(*(long *)param_1[0x1af] + 0x18))
                          ((long *)param_1[0x1af],*(undefined8 *)(*param_1 + 0x1c8),param_1 + 0x1b0)
        ;
        if (uVar4 == 0) {
          uVar4 = (**(code **)(*(long *)param_1[0x1af] + 0x18))
                            ((long *)param_1[0x1af],*(undefined8 *)(*param_1 + 0x1c0),
                             param_1 + 0x1b2);
          if (uVar4 == 0) {
            uVar4 = (**(code **)(*(long *)param_1[0x1b2] + 0x18))
                              ((long *)param_1[0x1b2],FUN_005c1fe4,param_1);
            if (uVar4 == 0) {
              FUN_005c2094(&local_b0,(uint *)(param_4 + 0xc),(uint *)(param_4 + 0x10),
                           (int *)(param_4 + 0x14),param_4 + 0x18);
              uVar6 = ma_calculate_buffer_size_in_frames_from_descriptor
                                (param_4,*(undefined4 *)(param_4 + 0x14),param_2[5]);
              *(undefined4 *)(param_4 + 0x118) = uVar6;
              *(undefined4 *)((long)param_1 + 0xda4) = 0;
              pcVar11 = *(code **)(*param_1 + 0x128);
              if (pcVar11 != (code *)0x0) {
                uVar4 = *(int *)(param_4 + 0x10) * *(int *)(param_4 + 0x118) *
                        *(int *)(&DAT_00281c10 + (ulong)*(uint *)(param_4 + 0xc) * 4) *
                        *(int *)(param_4 + 0x120);
                pvVar8 = (void *)(*pcVar11)((ulong)uVar4,*(undefined8 *)(*param_1 + 0x120));
                if (pvVar8 != (void *)0x0) {
                  param_1[0x1b6] = (long)pvVar8;
                  if (uVar4 != 0) {
                    memset(pvVar8,0,(ulong)uVar4);
                  }
                  uVar4 = *param_2;
                  goto LAB_005c10c0;
                }
              }
              param_1[0x1b6] = 0;
LAB_005c1624:
              FUN_005c17f0(param_1);
              if (*param_1 == 0) {
                uVar7 = 0;
              }
              else {
                uVar7 = *(undefined8 *)(*param_1 + 0x70);
              }
              ma_log_post(uVar7,1,"[OpenSL] Failed to allocate memory for data buffer.");
              uVar6 = 0xfffffffc;
              goto LAB_005c179c;
            }
            uVar15 = (ulong)uVar4;
            FUN_005c17f0(param_1);
            if (*param_1 == 0) {
              uVar7 = 0;
            }
            else {
              uVar7 = *(undefined8 *)(*param_1 + 0x70);
            }
            pcVar10 = "[OpenSL] Failed to register buffer queue callback.";
          }
          else {
            uVar15 = (ulong)uVar4;
            FUN_005c17f0(param_1);
            if (*param_1 == 0) {
              uVar7 = 0;
            }
            else {
              uVar7 = *(undefined8 *)(*param_1 + 0x70);
            }
            pcVar10 = "[OpenSL] Failed to retrieve SL_IID_ANDROIDSIMPLEBUFFERQUEUE interface.";
          }
        }
        else {
          uVar15 = (ulong)uVar4;
          FUN_005c17f0(param_1);
          if (*param_1 == 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = *(undefined8 *)(*param_1 + 0x70);
          }
          pcVar10 = "[OpenSL] Failed to retrieve SL_IID_RECORD interface.";
        }
      }
      else {
        uVar15 = (ulong)uVar4;
        FUN_005c17f0(param_1);
        if (*param_1 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined8 *)(*param_1 + 0x70);
        }
        pcVar10 = "[OpenSL] Failed to realize audio recorder.";
      }
      ma_log_post(uVar7,1,pcVar10);
      uVar4 = (uint)uVar15;
joined_r0x005c135c:
      if (uVar4 < 0x11) {
        uVar6 = *(undefined4 *)(&DAT_0028519c + uVar15 * 4);
        goto LAB_005c179c;
      }
    }
    else {
      FUN_005c17f0(param_1);
      if ((*param_1 != 0) && (lVar17 = *(long *)(*param_1 + 0x70), lVar17 != 0)) {
        pthread_mutex_lock((pthread_mutex_t *)(lVar17 + 0x68));
        uVar15 = (ulong)*(uint *)(lVar17 + 0x40);
        if (*(uint *)(lVar17 + 0x40) != 0) {
          uVar19 = 0;
          puVar20 = (undefined8 *)(lVar17 + 8);
          do {
            if ((code *)puVar20[-1] != (code *)0x0) {
              (*(code *)puVar20[-1])(*puVar20,1,"[OpenSL] Failed to create audio recorder.");
              uVar15 = (ulong)*(uint *)(lVar17 + 0x40);
            }
            uVar19 = uVar19 + 1;
            puVar20 = puVar20 + 2;
          } while (uVar19 < uVar15);
        }
        pthread_mutex_unlock((pthread_mutex_t *)(lVar17 + 0x68));
      }
joined_r0x005c159c:
      if (uVar4 < 0x11) {
        uVar6 = *(undefined4 *)(&DAT_0028519c + (ulong)uVar4 * 4);
        goto LAB_005c179c;
      }
    }
  }
  else {
LAB_005c10c0:
    if ((uVar4 | 2) != 3) {
LAB_005c1798:
      uVar6 = 0;
      goto LAB_005c179c;
    }
    uVar2 = *(uint *)((long)param_3 + 0xc);
    iVar5 = *(int *)((long)param_3 + 0x14);
    uVar12 = *(uint *)(param_3 + 2);
    uVar4 = 5;
    if (uVar2 != 0) {
      uVar4 = uVar2;
    }
    uVar6 = 2;
    uVar2 = 2;
    if (uVar12 != 0) {
      uVar2 = uVar12;
    }
    if (uVar4 == 5) {
      uVar6 = 4;
      local_94 = 3;
    }
    local_b0 = CONCAT44(uVar2,uVar6);
    uVar12 = 48000000;
    if (iVar5 != 0) {
      uVar12 = iVar5 * 1000;
    }
    uVar13 = 8000000;
    if (((8000000 < uVar12) && (uVar13 = 0xa83a68, 0xa83a68 < uVar12)) &&
       (uVar13 = 12000000, 12000000 < uVar12)) {
      uVar13 = 16000000;
      if ((((16000000 < uVar12) && (uVar13 = 0x15074d0, 0x15074d0 < uVar12)) &&
          ((uVar13 = 24000000, 24000000 < uVar12 &&
           ((uVar13 = 32000000, 32000000 < uVar12 && (uVar13 = 44100000, 44100000 < uVar12)))))) &&
         (uVar13 = 16000000, uVar12 < 0x2dc6c01)) {
        uVar13 = 48000000;
      }
    }
    uVar15 = 0;
    uVar14 = 0;
    uVar12 = *(int *)(&DAT_00281c10 + (ulong)uVar4 * 4) << 3;
    uStack_a8 = CONCAT44(uVar12,uVar13);
    do {
      uVar16 = *(byte *)((long)param_3 + uVar15 + 0x18) - 1;
      if (uVar16 < 0x13) {
        uVar16 = *(uint *)(&DAT_002851e0 + ((ulong)uVar16 & 0xff) * 4);
      }
      else {
        uVar16 = 0;
      }
      uVar15 = uVar15 + 1;
      uVar14 = uVar16 | uVar14;
    } while (uVar2 != uVar15);
    uStack_98 = 2;
    if (2 < uVar2) {
      local_b0 = CONCAT44(2,uVar6);
    }
    if (uVar4 == 5) {
      if (0x20 < uVar12) {
        uVar12 = 0x20;
LAB_005c1274:
        uStack_a8 = CONCAT44(uVar12,uVar13);
      }
    }
    else if (0x10 < uVar12) {
      uVar12 = 0x10;
      goto LAB_005c1274;
    }
    local_a0 = CONCAT44(uVar14,uVar12);
    uVar4 = (**(code **)(*DAT_00687400 + 0x38))(DAT_00687400,plVar9,0,0,0);
    if (uVar4 != 0) {
      uVar15 = (ulong)uVar4;
      FUN_005c17f0(param_1);
      if ((*param_1 != 0) && (lVar17 = *(long *)(*param_1 + 0x70), lVar17 != 0)) {
        pthread_mutex_lock((pthread_mutex_t *)(lVar17 + 0x68));
        uVar19 = (ulong)*(uint *)(lVar17 + 0x40);
        if (*(uint *)(lVar17 + 0x40) != 0) {
          uVar18 = 0;
          puVar20 = (undefined8 *)(lVar17 + 8);
          do {
            if ((code *)puVar20[-1] != (code *)0x0) {
              (*(code *)puVar20[-1])(*puVar20,1,"[OpenSL] Failed to create output mix.");
              uVar19 = (ulong)*(uint *)(lVar17 + 0x40);
            }
            uVar18 = uVar18 + 1;
            puVar20 = puVar20 + 2;
          } while (uVar18 < uVar19);
        }
        pthread_mutex_unlock((pthread_mutex_t *)(lVar17 + 0x68));
      }
      goto joined_r0x005c135c;
    }
    uVar4 = (*(code *)**(undefined8 **)*plVar9)((undefined8 *)*plVar9,0);
    if (uVar4 == 0) {
      uVar4 = (**(code **)(*(long *)param_1[0x1ab] + 0x18))
                        ((long *)param_1[0x1ab],*(undefined8 *)(*param_1 + 0x1d8),param_1 + 0x1ac);
      if (uVar4 == 0) {
        if ((uint *)*param_3 != (uint *)0x0) {
          plVar9 = (long *)param_1[0x1ac];
          local_f4 = *(uint *)*param_3;
          (**(code **)(*plVar9 + 0x10))(plVar9,1,&local_f4);
        }
        local_c8 = (undefined8 *)&local_88;
        local_c0 = &local_b0;
        local_84 = *(undefined4 *)(param_3 + 0x24);
        local_d8 = (undefined8 **)CONCAT44(local_d8._4_4_,4);
        local_e8 = &local_d8;
        local_d0 = param_1[0x1ab];
        plVar9 = param_1 + 0x1ad;
        puStack_e0 = (undefined8 *)0x0;
        uVar4 = (**(code **)(*DAT_00687400 + 0x10))
                          (DAT_00687400,plVar9,&local_c8,&local_e8,2,&local_78,&local_80);
        if ((uVar4 == 9) || (uVar4 == 2)) {
          uStack_a8 = _UNK_0024de68;
          local_b0 = _DAT_0024de60;
          local_a0 = DAT_0024e890;
          uVar4 = (**(code **)(*DAT_00687400 + 0x10))
                            (DAT_00687400,plVar9,&local_c8,&local_e8,2,&local_78,&local_80);
        }
        if (uVar4 != 0) {
          FUN_005c17f0(param_1);
          if (*param_1 == 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = *(undefined8 *)(*param_1 + 0x70);
          }
          ma_log_post(uVar7,1,"[OpenSL] Failed to create audio player.");
          goto joined_r0x005c159c;
        }
        if ((param_2[0x3f] != 0) &&
           (iVar5 = (**(code **)(*(long *)param_1[0x1ad] + 0x18))
                              ((long *)param_1[0x1ad],*(undefined8 *)(*param_1 + 0x1e0),&local_f0),
           iVar5 == 0)) {
          local_f4 = param_2[0x3f] - 1;
          if (4 < param_2[0x3f] - 2) {
            local_f4 = 0;
          }
          (**(code **)*local_f0)(local_f0,"androidPlaybackStreamType",&local_f4,4);
        }
        uVar4 = (*(code *)**(undefined8 **)*plVar9)((undefined8 *)*plVar9,0);
        if (uVar4 == 0) {
          uVar4 = (**(code **)(*(long *)param_1[0x1ad] + 0x18))
                            ((long *)param_1[0x1ad],*(undefined8 *)(*param_1 + 0x1d0),
                             param_1 + 0x1ae);
          if (uVar4 == 0) {
            uVar4 = (**(code **)(*(long *)param_1[0x1ad] + 0x18))
                              ((long *)param_1[0x1ad],*(undefined8 *)(*param_1 + 0x1c0),
                               param_1 + 0x1b1);
            if (uVar4 == 0) {
              uVar4 = (**(code **)(*(long *)param_1[0x1b1] + 0x18))
                                ((long *)param_1[0x1b1],FUN_005c2354);
              if (uVar4 == 0) {
                FUN_005c2094(&local_b0,(uint *)((long)param_3 + 0xc),param_3 + 2,
                             (int *)((long)param_3 + 0x14),param_3 + 3);
                uVar6 = ma_calculate_buffer_size_in_frames_from_descriptor
                                  (param_3,*(undefined4 *)((long)param_3 + 0x14),param_2[5]);
                *(undefined4 *)(param_3 + 0x23) = uVar6;
                *(undefined4 *)(param_1 + 0x1b4) = 0;
                pcVar11 = *(code **)(*param_1 + 0x128);
                if (pcVar11 != (code *)0x0) {
                  uVar4 = *(int *)(param_3 + 2) * *(int *)(param_3 + 0x23) *
                          *(int *)(&DAT_00281c10 + (ulong)*(uint *)((long)param_3 + 0xc) * 4) *
                          *(int *)(param_3 + 0x24);
                  pvVar8 = (void *)(*pcVar11)((ulong)uVar4,*(undefined8 *)(*param_1 + 0x120));
                  if (pvVar8 != (void *)0x0) {
                    param_1[0x1b5] = (long)pvVar8;
                    if (uVar4 != 0) {
                      memset(pvVar8,0,(ulong)uVar4);
                    }
                    goto LAB_005c1798;
                  }
                }
                param_1[0x1b5] = 0;
                goto LAB_005c1624;
              }
              FUN_005c17f0(param_1);
              if (*param_1 == 0) {
                uVar7 = 0;
              }
              else {
                uVar7 = *(undefined8 *)(*param_1 + 0x70);
              }
              pcVar10 = "[OpenSL] Failed to register buffer queue callback.";
            }
            else {
              FUN_005c17f0(param_1);
              if (*param_1 == 0) {
                uVar7 = 0;
              }
              else {
                uVar7 = *(undefined8 *)(*param_1 + 0x70);
              }
              pcVar10 = "[OpenSL] Failed to retrieve SL_IID_ANDROIDSIMPLEBUFFERQUEUE interface.";
            }
          }
          else {
            FUN_005c17f0(param_1);
            if (*param_1 == 0) {
              uVar7 = 0;
            }
            else {
              uVar7 = *(undefined8 *)(*param_1 + 0x70);
            }
            pcVar10 = "[OpenSL] Failed to retrieve SL_IID_PLAY interface.";
          }
        }
        else {
          FUN_005c17f0(param_1);
          if (*param_1 == 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = *(undefined8 *)(*param_1 + 0x70);
          }
          pcVar10 = "[OpenSL] Failed to realize audio player.";
        }
      }
      else {
        FUN_005c17f0(param_1);
        if (*param_1 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined8 *)(*param_1 + 0x70);
        }
        pcVar10 = "[OpenSL] Failed to retrieve SL_IID_OUTPUTMIX interface.";
      }
    }
    else {
      FUN_005c17f0(param_1);
      if (*param_1 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined8 *)(*param_1 + 0x70);
      }
      pcVar10 = "[OpenSL] Failed to realize output mix object.";
    }
    ma_log_post(uVar7,1,pcVar10);
    if (uVar4 < 0x11) {
      uVar6 = *(undefined4 *)(&DAT_0028519c + (ulong)uVar4 * 4);
      goto LAB_005c179c;
    }
  }
  uVar6 = 0xffffffff;
LAB_005c179c:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}


// ===== 005c17f0  FUN_005c17f0 =====

undefined8 FUN_005c17f0(long *param_1)

{
  uint uVar1;
  code *pcVar2;
  
  if (DAT_006873f4 == 0) {
    return 0xfffffffd;
  }
  uVar1 = *(uint *)(param_1 + 1);
  if ((uVar1 & 0xfffffffe) == 2) {
    if ((long *)param_1[0x1af] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x1af] + 0x30))();
    }
    if (param_1[0x1b6] != 0) {
      pcVar2 = *(code **)(*param_1 + 0x138);
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(param_1[0x1b6],*(undefined8 *)(*param_1 + 0x120));
      }
    }
    uVar1 = *(uint *)(param_1 + 1);
  }
  if ((uVar1 | 2) == 3) {
    if ((long *)param_1[0x1ad] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x1ad] + 0x30))();
    }
    if ((long *)param_1[0x1ab] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x1ab] + 0x30))();
    }
    if (param_1[0x1b5] == 0) {
      return 0;
    }
    pcVar2 = *(code **)(*param_1 + 0x138);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(param_1[0x1b5],*(undefined8 *)(*param_1 + 0x120));
    }
  }
  return 0;
}


// ===== 005c18b8  FUN_005c18b8 =====

ulong FUN_005c18b8(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  if (DAT_006873f4 == 0) {
    return 0xfffffffd;
  }
  uVar1 = *(uint *)(param_1 + 1);
  if ((uVar1 & 0xfffffffe) == 2) {
    uVar2 = (*(code *)**(undefined8 **)param_1[0x1b0])((undefined8 *)param_1[0x1b0],3);
    if ((int)uVar2 == 0) {
      if (*(int *)((long)param_1 + 0xc04) != 0) {
        lVar4 = 0;
        uVar2 = 0;
        uVar3 = (ulong)(uint)((int)param_1[0x15f] * (int)param_1[0x180] *
                             *(int *)(&DAT_00281c10 + (ulong)*(uint *)((long)param_1 + 0xaf4) * 4));
        do {
          uVar1 = (*(code *)**(undefined8 **)param_1[0x1b2])
                            ((undefined8 *)param_1[0x1b2],param_1[0x1b6] + lVar4,uVar3);
          if (uVar1 != 0) {
            uVar2 = (ulong)uVar1;
            (*(code *)**(undefined8 **)param_1[0x1b0])((undefined8 *)param_1[0x1b0],1);
            if ((*param_1 != 0) && (lVar4 = *(long *)(*param_1 + 0x70), lVar4 != 0)) {
              pthread_mutex_lock((pthread_mutex_t *)(lVar4 + 0x68));
              uVar3 = (ulong)*(uint *)(lVar4 + 0x40);
              if (*(uint *)(lVar4 + 0x40) != 0) {
                uVar5 = 0;
                puVar6 = (undefined8 *)(lVar4 + 8);
                do {
                  if ((code *)puVar6[-1] != (code *)0x0) {
                    (*(code *)puVar6[-1])
                              (*puVar6,1,"[OpenSL] Failed to enqueue buffer for capture device.");
                    uVar3 = (ulong)*(uint *)(lVar4 + 0x40);
                  }
                  uVar5 = uVar5 + 1;
                  puVar6 = puVar6 + 2;
                } while (uVar5 < uVar3);
              }
              pthread_mutex_unlock((pthread_mutex_t *)(lVar4 + 0x68));
            }
            goto joined_r0x005c1c8c;
          }
          uVar2 = uVar2 + 1;
          lVar4 = lVar4 + uVar3;
        } while (uVar2 < *(uint *)((long)param_1 + 0xc04));
      }
      uVar1 = *(uint *)(param_1 + 1);
      goto LAB_005c19dc;
    }
    if ((*param_1 != 0) && (lVar4 = *(long *)(*param_1 + 0x70), lVar4 != 0)) {
      uVar2 = uVar2 & 0xffffffff;
      pthread_mutex_lock((pthread_mutex_t *)(lVar4 + 0x68));
      uVar3 = (ulong)*(uint *)(lVar4 + 0x40);
      if (*(uint *)(lVar4 + 0x40) != 0) {
        uVar5 = 0;
        puVar6 = (undefined8 *)(lVar4 + 8);
        do {
          if ((code *)puVar6[-1] != (code *)0x0) {
            (*(code *)puVar6[-1])(*puVar6,1,"[OpenSL] Failed to start internal capture device.");
            uVar3 = (ulong)*(uint *)(lVar4 + 0x40);
          }
          uVar5 = uVar5 + 1;
          puVar6 = puVar6 + 2;
        } while (uVar5 < uVar3);
      }
LAB_005c1a68:
      pthread_mutex_unlock((pthread_mutex_t *)(lVar4 + 0x68));
    }
  }
  else {
LAB_005c19dc:
    if ((uVar1 | 2) != 3) {
      return 0;
    }
    uVar2 = (*(code *)**(undefined8 **)param_1[0x1ae])((undefined8 *)param_1[0x1ae],3);
    if ((int)uVar2 == 0) {
      if ((int)param_1[1] == 3) {
        if (((void *)param_1[0x1b5] != (void *)0x0) &&
           (uVar1 = *(int *)((long)param_1 + 0x66c) * (int)param_1[0xcd] * (int)param_1[0xac] *
                    *(int *)(&DAT_00281c10 + (ulong)*(uint *)((long)param_1 + 0x55c) * 4),
           uVar1 != 0)) {
          memset((void *)param_1[0x1b5],0,(ulong)uVar1);
        }
      }
      else {
        FUN_005b8588(param_1,*(int *)((long)param_1 + 0x66c) * (int)param_1[0xcd],param_1[0x1b5]);
      }
      if (*(int *)((long)param_1 + 0x66c) == 0) {
        return 0;
      }
      lVar4 = 0;
      uVar3 = 0;
      uVar5 = (ulong)(uint)((int)param_1[0xac] * (int)param_1[0xcd] *
                           *(int *)(&DAT_00281c10 + (ulong)*(uint *)((long)param_1 + 0x55c) * 4));
      while( true ) {
        uVar2 = (*(code *)**(undefined8 **)param_1[0x1b1])
                          ((undefined8 *)param_1[0x1b1],param_1[0x1b5] + lVar4,uVar5);
        uVar1 = (uint)uVar2;
        if (uVar1 != 0) break;
        uVar3 = uVar3 + 1;
        lVar4 = lVar4 + uVar5;
        if (*(uint *)((long)param_1 + 0x66c) <= uVar3) {
          return uVar2;
        }
      }
      uVar2 = uVar2 & 0xffffffff;
      (*(code *)**(undefined8 **)param_1[0x1ae])((undefined8 *)param_1[0x1ae],1);
      if ((*param_1 != 0) && (lVar4 = *(long *)(*param_1 + 0x70), lVar4 != 0)) {
        pthread_mutex_lock((pthread_mutex_t *)(lVar4 + 0x68));
        uVar3 = (ulong)*(uint *)(lVar4 + 0x40);
        if (*(uint *)(lVar4 + 0x40) != 0) {
          uVar5 = 0;
          puVar6 = (undefined8 *)(lVar4 + 8);
          do {
            if ((code *)puVar6[-1] != (code *)0x0) {
              (*(code *)puVar6[-1])
                        (*puVar6,1,"[OpenSL] Failed to enqueue buffer for playback device.");
              uVar3 = (ulong)*(uint *)(lVar4 + 0x40);
            }
            uVar5 = uVar5 + 1;
            puVar6 = puVar6 + 2;
          } while (uVar5 < uVar3);
        }
        pthread_mutex_unlock((pthread_mutex_t *)(lVar4 + 0x68));
      }
      goto joined_r0x005c1c8c;
    }
    if ((*param_1 != 0) && (lVar4 = *(long *)(*param_1 + 0x70), lVar4 != 0)) {
      uVar2 = uVar2 & 0xffffffff;
      pthread_mutex_lock((pthread_mutex_t *)(lVar4 + 0x68));
      uVar3 = (ulong)*(uint *)(lVar4 + 0x40);
      if (*(uint *)(lVar4 + 0x40) != 0) {
        uVar5 = 0;
        puVar6 = (undefined8 *)(lVar4 + 8);
        do {
          if ((code *)puVar6[-1] != (code *)0x0) {
            (*(code *)puVar6[-1])(*puVar6,1,"[OpenSL] Failed to start internal playback device.");
            uVar3 = (ulong)*(uint *)(lVar4 + 0x40);
          }
          uVar5 = uVar5 + 1;
          puVar6 = puVar6 + 2;
        } while (uVar5 < uVar3);
      }
      goto LAB_005c1a68;
    }
  }
  uVar1 = (uint)uVar2;
joined_r0x005c1c8c:
  if (uVar1 < 0x11) {
    uVar2 = (ulong)*(uint *)(&DAT_0028519c + (uVar2 & 0xffffffff) * 4);
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// ===== 005c1c94  FUN_005c1c94 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c1c94(long *param_1)

{
  long lVar1;
  __suseconds_t _Var2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 *puVar11;
  int local_68 [2];
  timeval local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (DAT_006873f4 == 0) {
    uVar5 = 0xfffffffd;
    goto LAB_005c1fb8;
  }
  uVar4 = *(uint *)(param_1 + 1);
  if ((uVar4 & 0xfffffffe) == 2) {
    if (uVar4 == 2) {
      plVar7 = (long *)param_1[0x1b2];
      *(undefined4 *)(param_1 + 0x1b3) = 1;
    }
    else {
      plVar7 = (long *)param_1[0x1b1];
      *(undefined4 *)((long)param_1 + 0xd9c) = 1;
    }
    (**(code **)(*plVar7 + 0x10))(plVar7,local_68);
    _Var2 = _UNK_0024df58;
    plVar9 = _DAT_0024df50;
    while (local_68[0] != 0) {
      local_60.tv_usec = _Var2;
      local_60.tv_sec = (__time_t)plVar9;
      select(0,(fd_set *)0x0,(fd_set *)0x0,(fd_set *)0x0,&local_60);
      (**(code **)(*plVar7 + 0x10))(plVar7,local_68);
    }
    if ((int)param_1[1] == 2) {
      *(undefined4 *)(param_1 + 0x1b3) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + 0xd9c) = 0;
    }
    uVar4 = (*(code *)**(undefined8 **)param_1[0x1b0])((undefined8 *)param_1[0x1b0],1);
    if (uVar4 == 0) {
      (**(code **)(*(long *)param_1[0x1b2] + 8))();
      uVar4 = *(uint *)(param_1 + 1);
      goto LAB_005c1e14;
    }
    if ((*param_1 != 0) && (lVar8 = *(long *)(*param_1 + 0x70), lVar8 != 0)) {
      pthread_mutex_lock((pthread_mutex_t *)(lVar8 + 0x68));
      uVar6 = (ulong)*(uint *)(lVar8 + 0x40);
      if (*(uint *)(lVar8 + 0x40) != 0) {
        uVar10 = 0;
        puVar11 = (undefined8 *)(lVar8 + 8);
        do {
          if ((code *)puVar11[-1] != (code *)0x0) {
            (*(code *)puVar11[-1])(*puVar11,1,"[OpenSL] Failed to stop internal capture device.");
            uVar6 = (ulong)*(uint *)(lVar8 + 0x40);
          }
          uVar10 = uVar10 + 1;
          puVar11 = puVar11 + 2;
        } while (uVar10 < uVar6);
      }
      pthread_mutex_unlock((pthread_mutex_t *)(lVar8 + 0x68));
    }
joined_r0x005c1fb0:
    if (uVar4 < 0x11) {
      uVar5 = *(undefined4 *)(&DAT_0028519c + (ulong)uVar4 * 4);
    }
    else {
      uVar5 = 0xffffffff;
    }
  }
  else {
LAB_005c1e14:
    if ((uVar4 | 2) == 3) {
      plVar9 = (long *)param_1[0x1b1];
      *(undefined4 *)((long)param_1 + 0xd9c) = 1;
      (**(code **)(*plVar9 + 0x10))(plVar9,local_68);
      _Var2 = _UNK_0024df58;
      plVar7 = _DAT_0024df50;
      while (local_68[0] != 0) {
        local_60.tv_usec = _Var2;
        local_60.tv_sec = (__time_t)plVar7;
        select(0,(fd_set *)0x0,(fd_set *)0x0,(fd_set *)0x0,&local_60);
        (**(code **)(*plVar9 + 0x10))(plVar9,local_68);
      }
      if ((int)param_1[1] == 2) {
        *(undefined4 *)(param_1 + 0x1b3) = 0;
      }
      else {
        *(undefined4 *)((long)param_1 + 0xd9c) = 0;
      }
      uVar4 = (*(code *)**(undefined8 **)param_1[0x1ae])((undefined8 *)param_1[0x1ae],1);
      if (uVar4 != 0) {
        if ((*param_1 != 0) && (lVar8 = *(long *)(*param_1 + 0x70), lVar8 != 0)) {
          pthread_mutex_lock((pthread_mutex_t *)(lVar8 + 0x68));
          uVar6 = (ulong)*(uint *)(lVar8 + 0x40);
          if (*(uint *)(lVar8 + 0x40) != 0) {
            uVar10 = 0;
            puVar11 = (undefined8 *)(lVar8 + 8);
            do {
              if ((code *)puVar11[-1] != (code *)0x0) {
                (*(code *)puVar11[-1])
                          (*puVar11,1,"[OpenSL] Failed to stop internal playback device.");
                uVar6 = (ulong)*(uint *)(lVar8 + 0x40);
              }
              uVar10 = uVar10 + 1;
              puVar11 = puVar11 + 2;
            } while (uVar10 < uVar6);
          }
          pthread_mutex_unlock((pthread_mutex_t *)(lVar8 + 0x68));
        }
        goto joined_r0x005c1fb0;
      }
      (**(code **)(*(long *)param_1[0x1b1] + 8))();
    }
    bVar3 = true;
    local_60.tv_usec = 1;
    local_60.tv_sec = (__time_t)param_1;
    if ((code *)param_1[4] != (code *)0x0) {
      (*(code *)param_1[4])(&local_60);
      bVar3 = (int)local_60.tv_usec == 1;
    }
    if ((*(code **)(local_60.tv_sec + 0x28) != (code *)0x0) && (bVar3)) {
      (**(code **)(local_60.tv_sec + 0x28))(local_60.tv_sec);
    }
    uVar5 = 0;
  }
LAB_005c1fb8:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 005c1fe4  FUN_005c1fe4 =====

void FUN_005c1fe4(undefined8 param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  
  if (((param_2 != 0) && ((int)*(undefined8 *)(param_2 + 0x10) == 2)) &&
     (*(int *)(param_2 + 0xd98) == 0)) {
    uVar2 = *(int *)(param_2 + 0xaf8) * *(int *)(param_2 + 0xc00) *
            *(int *)(&DAT_00281c10 + (ulong)*(uint *)(param_2 + 0xaf4) * 4);
    lVar5 = *(long *)(param_2 + 0xdb0) + (ulong)*(uint *)(param_2 + 0xda4) * (ulong)uVar2;
    ma_device_handle_backend_data_callback(param_2,0,lVar5);
    iVar4 = (**(code **)**(undefined8 **)(param_2 + 0xd90))
                      (*(undefined8 **)(param_2 + 0xd90),lVar5,uVar2);
    if (iVar4 == 0) {
      uVar1 = *(uint *)(param_2 + 0xc04);
      uVar2 = *(int *)(param_2 + 0xda4) + 1;
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = uVar2 / uVar1;
      }
      *(uint *)(param_2 + 0xda4) = uVar2 - uVar3 * uVar1;
    }
  }
  return;
}


// ===== 005c2094  FUN_005c2094 =====

void FUN_005c2094(int *param_1,int *param_2,int *param_3,uint *param_4,undefined2 *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar3 = param_1[3];
  if (*param_1 == 4) {
    if (iVar3 != 0x20) goto LAB_005c20cc;
    iVar3 = 5;
  }
  else {
    uVar1 = (uint)(CONCAT44(iVar3,iVar3 + -8) >> 3);
    if (3 < uVar1) goto LAB_005c20cc;
    iVar3 = uVar1 + 1;
  }
  *param_2 = iVar3;
LAB_005c20cc:
  *param_3 = param_1[1];
  *param_4 = (uint)param_1[2] / 1000;
  uVar5 = param_1[1];
  uVar2 = param_1[5];
  uVar1 = uVar5;
  if (0xfd < uVar5) {
    uVar1 = 0xfe;
  }
  if ((uVar2 != 0) || (uVar5 != 1)) {
    if ((uVar2 == 0) && (uVar5 == 2)) {
      *param_5 = 0x302;
      return;
    }
    if (((uVar2 >> 2 & 1) == 0) || (uVar5 != 1)) {
      if (uVar5 != 0) {
        uVar4 = 0;
        uVar5 = 0;
        do {
          uVar6 = uVar2 & (uint)(1L << (uVar4 & 0x3f));
          if ((int)uVar6 < 0x100) {
            if (7 < (int)uVar6) {
              if ((int)uVar6 < 0x20) {
                if (uVar6 == 8) {
                  uVar6 = 5;
                }
                else {
                  if (uVar6 != 0x10) goto LAB_005c22a8;
                  uVar6 = 6;
                }
              }
              else if (uVar6 == 0x20) {
                uVar6 = 7;
              }
              else if (uVar6 == 0x40) {
                uVar6 = 8;
              }
              else {
                if (uVar6 != 0x80) goto LAB_005c22a8;
                uVar6 = 9;
              }
              goto LAB_005c22ac;
            }
            if (1 < (int)uVar6) {
              if (uVar6 == 2) {
                uVar6 = 3;
              }
              else if (uVar6 != 4) goto LAB_005c22a8;
              goto LAB_005c22ac;
            }
            if (uVar6 != 0) {
              if (uVar6 == 1) {
                uVar6 = 2;
              }
              else {
LAB_005c22a8:
                uVar6 = 0;
              }
              goto LAB_005c22ac;
            }
          }
          else {
            if ((int)uVar6 < 0x2000) {
              if ((int)uVar6 < 0x400) {
                if (uVar6 == 0x100) {
                  uVar6 = 10;
                }
                else {
                  if (uVar6 != 0x200) goto LAB_005c22a8;
                  uVar6 = 0xb;
                }
              }
              else if (uVar6 == 0x400) {
                uVar6 = 0xc;
              }
              else if (uVar6 == 0x800) {
                uVar6 = 0xd;
              }
              else {
                if (uVar6 != 0x1000) goto LAB_005c22a8;
                uVar6 = 0xe;
              }
            }
            else if ((int)uVar6 < 0x8000) {
              if (uVar6 == 0x2000) {
                uVar6 = 0xf;
              }
              else {
                if (uVar6 != 0x4000) goto LAB_005c22a8;
                uVar6 = 0x10;
              }
            }
            else if (uVar6 == 0x8000) {
              uVar6 = 0x11;
            }
            else if (uVar6 == 0x10000) {
              uVar6 = 0x12;
            }
            else {
              if (uVar6 != 0x20000) goto LAB_005c22a8;
              uVar6 = 0x13;
            }
LAB_005c22ac:
            *(char *)((long)param_5 + (ulong)uVar5) = (char)uVar6;
            uVar5 = uVar5 + 1;
          }
        } while ((uVar4 < 0x1f) && (uVar4 = uVar4 + 1, uVar5 < uVar1));
      }
      return;
    }
  }
  *(undefined1 *)param_5 = 1;
  return;
}


// ===== 005c22cc  ma_calculate_buffer_size_in_frames_from_descriptor =====

ulong ma_calculate_buffer_size_in_frames_from_descriptor(long param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    param_2 = *(int *)(param_1 + 0x14);
  }
  iVar1 = 48000;
  if (param_2 != 0) {
    iVar1 = param_2;
  }
  if (*(uint *)(param_1 + 0x118) != 0) {
    return (ulong)*(uint *)(param_1 + 0x118);
  }
  if (*(int *)(param_1 + 0x11c) == 0) {
    if (param_3 == 0) {
      return (ulong)(uint)(iVar1 * 10) / 1000;
    }
    uVar2 = iVar1 * 100;
  }
  else {
    uVar2 = *(int *)(param_1 + 0x11c) * iVar1;
  }
  return (ulong)uVar2 / 1000;
}


// ===== 005c2354  FUN_005c2354 =====

void FUN_005c2354(undefined8 param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  
  if (((param_2 != 0) && ((int)*(undefined8 *)(param_2 + 0x10) == 2)) &&
     (*(int *)(param_2 + 0xd9c) == 0)) {
    uVar2 = *(int *)(param_2 + 0x560) * *(int *)(param_2 + 0x668) *
            *(int *)(&DAT_00281c10 + (ulong)*(uint *)(param_2 + 0x55c) * 4);
    lVar5 = *(long *)(param_2 + 0xda8) + (ulong)*(uint *)(param_2 + 0xda0) * (ulong)uVar2;
    ma_device_handle_backend_data_callback(param_2,lVar5,0);
    iVar4 = (**(code **)**(undefined8 **)(param_2 + 0xd88))
                      (*(undefined8 **)(param_2 + 0xd88),lVar5,uVar2);
    if (iVar4 == 0) {
      uVar1 = *(uint *)(param_2 + 0x66c);
      uVar2 = *(int *)(param_2 + 0xda0) + 1;
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = uVar2 / uVar1;
      }
      *(uint *)(param_2 + 0xda0) = uVar2 - uVar3 * uVar1;
    }
  }
  return;
}


// ===== 005c2408  FUN_005c2408 =====

undefined8 FUN_005c2408(long param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_78 = 0;
  uStack_80 = 0;
  local_90 = 0xffff0000;
  local_30 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_88 = 0xffffffffffffffff;
  uVar3 = ma_job_queue_post(param_1 + 0x2a0,&local_90);
  if (*(int *)(param_1 + 0x360) != 0) {
    uVar2 = pthread_join(*(pthread_t *)(param_1 + 0x298),(void **)0x0);
    uVar3 = (ulong)uVar2;
  }
  if ((*(byte *)(param_1 + 0x2a0) & 1) == 0) {
    pthread_cond_destroy((pthread_cond_t *)(param_1 + 0x2e4));
    uVar2 = pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 700));
    uVar3 = (ulong)uVar2;
  }
  if (((*(int *)(param_1 + 0x330) != 0) && (uVar3 = *(ulong *)(param_1 + 0x338), uVar3 != 0)) &&
     (*(code **)(param_1 + 0x138) != (code *)0x0)) {
    uVar3 = (**(code **)(param_1 + 0x138))(uVar3,*(undefined8 *)(param_1 + 0x120));
  }
  if (((*(int *)(param_1 + 0x358) != 0) && (uVar3 = *(ulong *)(param_1 + 0x350), uVar3 != 0)) &&
     (*(code **)(param_1 + 0x138) != (code *)0x0)) {
    uVar3 = (**(code **)(param_1 + 0x138))(uVar3,*(undefined8 *)(param_1 + 0x120));
  }
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 005c24f0  FUN_005c24f0 =====

undefined8 FUN_005c24f0(long param_1,code *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  long local_670;
  undefined8 local_668;
  undefined1 auStack_660 [256];
  undefined1 auStack_560 [1288];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  memset(auStack_660,0,0x608);
  ma_strncpy_s(auStack_560,0x100,"Default Playback Device",0xffffffffffffffff);
  local_670 = 0;
  iVar3 = (**(code **)(param_1 + 0x1b0))(&local_668);
  if (iVar3 == 0) {
    (**(code **)(param_1 + 0x1c8))(local_668,0);
    (**(code **)(param_1 + 0x1d0))(local_668,1);
    uVar2 = local_668;
    (**(code **)(param_1 + 0x210))(local_668,0xc);
    iVar3 = (**(code **)(param_1 + 0x238))(uVar2,&local_670);
    (**(code **)(param_1 + 0x1b8))(uVar2);
    if (iVar3 == 0) {
      if (local_670 != 0) {
        (**(code **)(param_1 + 0x240))();
      }
      iVar3 = (*param_2)(param_1,1,auStack_660,param_3);
      if (iVar3 == 0) goto LAB_005c26a0;
    }
  }
  memset(auStack_660,0,0x608);
  ma_strncpy_s(auStack_560,0x100,"Default Capture Device",0xffffffffffffffff);
  local_670 = 0;
  iVar3 = (**(code **)(param_1 + 0x1b0))(&local_668);
  if (iVar3 == 0) {
    (**(code **)(param_1 + 0x1c8))(local_668,1);
    (**(code **)(param_1 + 0x1d0))(local_668,1);
    (**(code **)(param_1 + 0x210))(local_668,0xc);
    iVar3 = (**(code **)(param_1 + 0x238))(local_668,&local_670);
    (**(code **)(param_1 + 0x1b8))(local_668);
    if (iVar3 == 0) {
      if (local_670 != 0) {
        (**(code **)(param_1 + 0x240))();
      }
      (*param_2)(param_1,2,auStack_660,param_3);
    }
  }
LAB_005c26a0:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005c26d4  FUN_005c26d4 =====

void FUN_005c26d4(long param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  char *pcVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long local_58;
  undefined8 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (param_3 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *param_3;
  }
  *param_4 = uVar5;
  pcVar1 = "Default Playback Device";
  if (param_2 != 1) {
    pcVar1 = "Default Capture Device";
  }
  ma_strncpy_s(param_4 + 0x40,0x100,pcVar1,0xffffffffffffffff);
  param_4[0x81] = 0;
  local_58 = 0;
  iVar4 = (**(code **)(param_1 + 0x1b0))(&local_50);
  if (iVar4 == 0) {
    if (param_3 != (undefined4 *)0x0) {
      (**(code **)(param_1 + 0x1c0))(local_50,*param_3);
    }
    (**(code **)(param_1 + 0x1c8))(local_50,param_2 != 1);
    (**(code **)(param_1 + 0x1d0))(local_50,1);
    (**(code **)(param_1 + 0x210))(local_50,0xc);
    iVar4 = (**(code **)(param_1 + 0x238))(local_50,&local_58);
    (**(code **)(param_1 + 0x1b8))(local_50);
    lVar6 = local_58;
    if (iVar4 == 0) {
      param_4[(ulong)(uint)param_4[0x81] * 4 + 0x82] = 5;
      uVar5 = (**(code **)(param_1 + 0x260))(local_58);
      param_4[(ulong)(uint)param_4[0x81] * 4 + 0x83] = uVar5;
      uVar5 = (**(code **)(param_1 + 0x268))(lVar6);
      uVar2 = param_4[0x81];
      param_4[0x81] = uVar2 + 1;
      param_4[(ulong)uVar2 * 4 + 0x84] = uVar5;
      param_4[(ulong)uVar2 * 4 + 0x85] = 0;
      param_4[(ulong)(uVar2 + 1) * 4 + 0x82] = 2;
      uVar5 = (**(code **)(param_1 + 0x260))(lVar6);
      param_4[(ulong)(uint)param_4[0x81] * 4 + 0x83] = uVar5;
      uVar5 = (**(code **)(param_1 + 0x268))(lVar6);
      uVar2 = param_4[0x81];
      param_4[(ulong)uVar2 * 4 + 0x84] = uVar5;
      param_4[(ulong)uVar2 * 4 + 0x85] = 0;
      param_4[0x81] = uVar2 + 1;
      lVar6 = local_58;
      if (local_58 != 0) {
        (**(code **)(param_1 + 0x240))();
        lVar6 = 0;
      }
      goto LAB_005c27d0;
    }
  }
  lVar6 = 0xffffffff;
LAB_005c27d0:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar6);
}


// ===== 005c28ac  FUN_005c28ac =====

ulong FUN_005c28ac(long param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  
  if (*param_2 == 4) {
    return 0xffffff37;
  }
  *(uint *)(param_1 + 0xd90) = param_2[0x42];
  *(uint *)(param_1 + 0xd94) = param_2[0x43];
  *(uint *)(param_1 + 0xd98) = param_2[0x44];
  *(uint *)(param_1 + 0xd9c) = param_2[0x45];
  *(uint *)(param_1 + 0xda0) = param_2[0x46];
  uVar1 = *param_2;
  if ((uVar1 & 0xfffffffe) == 2) {
    uVar2 = FUN_005b0ca0(param_1,param_2,2,param_4,param_1 + 0xd60);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar1 = *param_2;
  }
  if (((uVar1 | 2) != 3) ||
     (uVar2 = FUN_005b0ca0(param_1,param_2,1,param_3,param_1 + 0xd58), (int)uVar2 == 0)) {
    *(undefined8 *)(param_1 + 0xd88) = 0;
    *(undefined8 *)(param_1 + 0xd70) = 0;
    ((pthread_mutex_t *)(param_1 + 0xd68))->__align = 0;
    *(undefined8 *)(param_1 + 0xd80) = 0;
    *(undefined8 *)(param_1 + 0xd78) = 0;
    uVar1 = pthread_mutex_init((pthread_mutex_t *)(param_1 + 0xd68),(pthread_mutexattr_t *)0x0);
    uVar2 = (ulong)uVar1;
    if (uVar1 != 0) {
      if (uVar1 < 0x82) {
        uVar2 = (ulong)*(uint *)(&DAT_00284ec8 + (ulong)uVar1 * 4);
      }
      else {
        uVar2 = 0xffffffff;
      }
    }
  }
  return uVar2;
}


// ===== 005c299c  FUN_005c299c =====

undefined8 FUN_005c299c(long *param_1)

{
  uint uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x1ad));
  uVar1 = *(uint *)(param_1 + 1);
  if ((uVar1 & 0xfffffffe) == 2) {
    if (param_1[0x1ac] != 0) {
      (**(code **)(*param_1 + 0x240))();
      uVar1 = *(uint *)(param_1 + 1);
    }
    param_1[0x1ac] = 0;
  }
  if ((uVar1 | 2) == 3) {
    if (param_1[0x1ab] != 0) {
      (**(code **)(*param_1 + 0x240))();
    }
    param_1[0x1ab] = 0;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x1ad));
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x1ad));
  return 0;
}


// ===== 005c2a24  FUN_005c2a24 =====

void FUN_005c2a24(long *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  long *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar5 = *(uint *)(param_1 + 1);
  if ((uVar5 & 0xfffffffe) == 2) {
    lVar6 = param_1[0x1ac];
    if (lVar6 != 0) {
      iVar3 = (**(code **)(*param_1 + 0x248))(lVar6);
      if (iVar3 == 0xd) {
LAB_005c2a78:
        uVar5 = *(uint *)(param_1 + 1);
        goto LAB_005c2a7c;
      }
      iVar3 = (**(code **)(*param_1 + 0x290))(lVar6);
      if (iVar3 == 0) {
        iVar3 = (**(code **)(*param_1 + 0x248))(lVar6);
        if (iVar3 != 10) {
          if (iVar3 != 9) goto LAB_005c2b7c;
          iVar3 = (**(code **)(*param_1 + 0x250))(lVar6,9,&local_48,5000000000);
          uVar4 = 0xffffffff;
          if ((iVar3 != 0) || ((int)local_48 != 10)) goto LAB_005c2b80;
        }
        goto LAB_005c2a78;
      }
      goto LAB_005c2b7c;
    }
LAB_005c2aec:
    uVar4 = 0xfffffffe;
  }
  else {
LAB_005c2a7c:
    if ((uVar5 | 2) == 3) {
      lVar6 = param_1[0x1ab];
      if (lVar6 == 0) goto LAB_005c2aec;
      iVar3 = (**(code **)(*param_1 + 0x248))(lVar6);
      if (iVar3 != 0xd) {
        iVar3 = (**(code **)(*param_1 + 0x290))(lVar6);
        if (iVar3 != 0) {
LAB_005c2b7c:
          uVar4 = 0xffffffff;
          goto LAB_005c2b80;
        }
        iVar3 = (**(code **)(*param_1 + 0x248))(lVar6);
        if (iVar3 != 10) {
          if (iVar3 != 9) goto LAB_005c2b7c;
          iVar3 = (**(code **)(*param_1 + 0x250))(lVar6,9,&local_48,5000000000);
          uVar4 = 0xffffffff;
          if ((iVar3 != 0) || ((int)local_48 != 10)) goto LAB_005c2b80;
        }
      }
    }
    bVar2 = true;
    local_40 = 1;
    local_48 = param_1;
    if ((code *)param_1[4] != (code *)0x0) {
      (*(code *)param_1[4])(&local_48);
      bVar2 = (int)local_40 == 1;
    }
    if (((code *)local_48[5] != (code *)0x0) && (bVar2)) {
      (*(code *)local_48[5])(local_48);
    }
    uVar4 = 0;
  }
LAB_005c2b80:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


// ===== 005c2c08  FUN_005c2c08 =====

undefined8 FUN_005c2c08(long *param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  char *pcVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  if (param_2 == 1) {
    plVar4 = param_1 + 0x1ab;
    plVar5 = param_1 + 0x4a;
    pcVar3 = "Default Playback Device";
  }
  else {
    if (param_2 != 2) {
      return 0xfffffffd;
    }
    plVar4 = param_1 + 0x1ac;
    plVar5 = param_1 + 0xfd;
    pcVar3 = "Default Capture Device";
  }
  lVar6 = *plVar4;
  *param_3 = (int)*plVar5;
  ma_strncpy_s(param_3 + 0x40,0x100,pcVar3,0xffffffffffffffff);
  if (lVar6 == 0) {
    return 0xfffffffd;
  }
  *(undefined8 *)(param_3 + 0x81) = 0x500000000;
  lVar7 = *param_1;
  uVar2 = (**(code **)(lVar7 + 0x260))(lVar6);
  param_3[(ulong)(uint)param_3[0x81] * 4 + 0x83] = uVar2;
  uVar2 = (**(code **)(lVar7 + 0x268))(lVar6);
  uVar1 = param_3[0x81];
  param_3[0x81] = uVar1 + 1;
  param_3[(ulong)uVar1 * 4 + 0x84] = uVar2;
  param_3[(ulong)uVar1 * 4 + 0x85] = 0;
  param_3[(ulong)(uVar1 + 1) * 4 + 0x82] = 2;
  uVar2 = (**(code **)(lVar7 + 0x260))(lVar6);
  param_3[(ulong)(uint)param_3[0x81] * 4 + 0x83] = uVar2;
  uVar2 = (**(code **)(lVar7 + 0x268))(lVar6);
  uVar1 = param_3[0x81];
  param_3[(ulong)uVar1 * 4 + 0x84] = uVar2;
  param_3[(ulong)uVar1 * 4 + 0x85] = 0;
  param_3[0x81] = uVar1 + 1;
  return 0;
}


// ===== 005c2d24  ma_context_get_log =====

long ma_context_get_log(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0x70);
  }
  return param_1;
}


// ===== 005c2d30  ma_context_uninit =====

undefined8 ma_context_uninit(long param_1)

{
  if (param_1 != 0) {
    if (*(code **)(param_1 + 8) != (code *)0x0) {
      (**(code **)(param_1 + 8))(param_1);
    }
    pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x140));
    pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x168));
    if ((*(long *)(param_1 + 0x1a0) != 0) && (*(code **)(param_1 + 0x138) != (code *)0x0)) {
      (**(code **)(param_1 + 0x138))(*(long *)(param_1 + 0x1a0),*(undefined8 *)(param_1 + 0x120));
    }
    if (*(long *)(param_1 + 0x70) == param_1 + 0x78) {
      pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0xe0));
    }
    return 0;
  }
  return 0xfffffffe;
}


// ===== 005c2dac  ma_context_sizeof =====

undefined8 ma_context_sizeof(void)

{
  return 0x370;
}


// ===== 005c2db4  ma_context_enumerate_devices =====

undefined4 ma_context_enumerate_devices(long param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0xfffffffe;
  if ((param_1 != 0) && (param_2 != 0)) {
    if (*(long *)(param_1 + 0x10) == 0) {
      uVar1 = 0xfffffffd;
    }
    else {
      pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x140));
      uVar1 = (**(code **)(param_1 + 0x10))(param_1,param_2,param_3);
      pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x140));
    }
  }
  return uVar1;
}


// ===== 005c2e28  ma_context_get_devices =====

int ma_context_get_devices
              (long param_1,undefined8 *param_2,undefined4 *param_3,long *param_4,
              undefined4 *param_5)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (long *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  if (param_1 == 0) {
    iVar2 = -2;
  }
  else if (*(long *)(param_1 + 0x10) == 0) {
    iVar2 = -3;
  }
  else {
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x140));
    *(undefined4 *)(param_1 + 0x198) = 0;
    *(undefined4 *)(param_1 + 0x194) = 0;
    iVar2 = (**(code **)(param_1 + 0x10))(param_1,FUN_005c2f24,0);
    if (iVar2 == 0) {
      if (param_2 != (undefined8 *)0x0) {
        *param_2 = *(undefined8 *)(param_1 + 0x1a0);
      }
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(param_1 + 0x194);
      }
      if (param_4 != (long *)0x0) {
        lVar3 = *(long *)(param_1 + 0x1a0);
        uVar1 = *(uint *)(param_1 + 0x194);
        *param_4 = lVar3;
        if (uVar1 != 0) {
          *param_4 = lVar3 + (ulong)uVar1 * 0x608;
        }
      }
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = *(undefined4 *)(param_1 + 0x198);
      }
    }
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x140));
  }
  return iVar2;
}


// ===== 005c2f24  FUN_005c2f24 =====

undefined8 FUN_005c2f24(long param_1,int param_2,void *param_3)

{
  uint uVar1;
  uint uVar2;
  void *__dest;
  long lVar3;
  ulong uVar4;
  
  uVar2 = *(int *)(param_1 + 0x198) + *(int *)(param_1 + 0x194);
  uVar4 = (ulong)uVar2;
  if (*(uint *)(param_1 + 400) <= uVar2) {
    if (*(code **)(param_1 + 0x130) == (code *)0x0) {
      return 0;
    }
    uVar1 = *(uint *)(param_1 + 400) + 2;
    lVar3 = (**(code **)(param_1 + 0x130))
                      (*(undefined8 *)(param_1 + 0x1a0),(ulong)uVar1 * 0x608,
                       *(undefined8 *)(param_1 + 0x120));
    if (lVar3 == 0) {
      return 0;
    }
    *(long *)(param_1 + 0x1a0) = lVar3;
    *(uint *)(param_1 + 400) = uVar1;
  }
  if (param_2 == 1) {
    uVar1 = *(uint *)(param_1 + 0x194);
    if (uVar1 < uVar2) {
      lVar3 = (ulong)uVar2 * 0x608;
      do {
        __dest = (void *)(*(long *)(param_1 + 0x1a0) + lVar3);
        memcpy(__dest,(void *)((long)__dest + -0x608),0x608);
        uVar4 = uVar4 - 1;
        lVar3 = lVar3 + -0x608;
      } while (uVar1 < uVar4);
    }
    memcpy((void *)(*(long *)(param_1 + 0x1a0) + (ulong)uVar1 * 0x608),param_3,0x608);
    *(int *)(param_1 + 0x194) = *(int *)(param_1 + 0x194) + 1;
  }
  else {
    memcpy((void *)(*(long *)(param_1 + 0x1a0) + (ulong)uVar2 * 0x608),param_3,0x608);
    *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + 1;
  }
  return 1;
}


// ===== 005c3038  ma_context_get_device_info =====

void ma_context_get_device_info(long param_1,undefined4 param_2,undefined8 *param_3,void *param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 local_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 local_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 local_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  long local_48;
  
  lVar1 = tpidr_el0;
  uVar2 = 0xfffffffe;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((param_1 != 0) && (param_4 != (void *)0x0)) {
    memset(&local_650,0,0x608);
    if (param_3 != (undefined8 *)0x0) {
      uStack_588 = param_3[0x19];
      local_590 = param_3[0x18];
      uStack_578 = param_3[0x1b];
      uStack_580 = param_3[0x1a];
      uStack_568 = param_3[0x1d];
      local_570 = param_3[0x1c];
      uStack_558 = param_3[0x1f];
      uStack_560 = param_3[0x1e];
      uStack_5c8 = param_3[0x11];
      local_5d0 = param_3[0x10];
      uStack_5b8 = param_3[0x13];
      uStack_5c0 = param_3[0x12];
      uStack_5a8 = param_3[0x15];
      local_5b0 = param_3[0x14];
      uStack_598 = param_3[0x17];
      uStack_5a0 = param_3[0x16];
      uStack_608 = param_3[9];
      local_610 = param_3[8];
      uStack_5f8 = param_3[0xb];
      uStack_600 = param_3[10];
      uStack_5e8 = param_3[0xd];
      local_5f0 = param_3[0xc];
      uStack_5d8 = param_3[0xf];
      uStack_5e0 = param_3[0xe];
      uStack_648 = param_3[1];
      local_650 = *param_3;
      uStack_638 = param_3[3];
      uStack_640 = param_3[2];
      uStack_628 = param_3[5];
      local_630 = param_3[4];
      uStack_618 = param_3[7];
      uStack_620 = param_3[6];
    }
    if (*(long *)(param_1 + 0x18) == 0) {
      uVar2 = 0xfffffffd;
    }
    else {
      pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x168));
      uVar2 = (**(code **)(param_1 + 0x18))(param_1,param_2,param_3,&local_650);
      pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x168));
      memcpy(param_4,&local_650,0x608);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 005c3148  ma_context_is_loopback_supported =====

ulong ma_context_is_loopback_supported(ulong param_1)

{
  if (param_1 != 0) {
    if (0xe < *(uint *)(param_1 + 0x68)) {
      return 0;
    }
    param_1 = (ulong)*(uint *)(&DAT_002850e4 + (ulong)*(uint *)(param_1 + 0x68) * 4);
  }
  return param_1;
}


// ===== 005c3170  ma_device_config_init =====

void ma_device_config_init(undefined8 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    param_1[0x24] = 0;
    param_1[1] = 0;
    *param_1 = 0;
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
    param_1[0x1f] = 0;
    param_1[0x1e] = 0;
    param_1[0x21] = 0;
    param_1[0x20] = 0;
    param_1[0x23] = 0;
    param_1[0x22] = 0;
  }
  *(undefined4 *)param_1 = param_2;
  uVar1 = DAT_0024e8e0;
  param_1[0xc] = 0;
  param_1[0xd] = uVar1;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  return;
}


// ===== 005c31c0  ma_resampler_config_init =====

void ma_resampler_config_init
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  if (param_1 != (undefined4 *)0x0) {
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 10) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[10] = 4;
  return;
}


// ===== 005c31e4  ma_device_init =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ma_device_init(long param_1,uint *param_2,long *param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  void *__ptr;
  undefined8 uVar6;
  char *pcVar7;
  long *plVar8;
  undefined1 uVar9;
  ulong uVar10;
  uint uVar11;
  char *pcVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  char cVar16;
  uint uVar17;
  pthread_mutex_t *__mutex;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined8 local_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 local_7a0;
  undefined8 uStack_798;
  undefined8 local_790;
  undefined4 local_788;
  undefined1 auStack_3b8 [256];
  undefined8 local_2b8;
  uint local_2b0;
  uint local_2ac;
  uint local_2a8;
  uint local_2a4;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  uint local_188;
  uint local_184;
  uint local_180;
  uint local_17c;
  undefined8 local_178;
  undefined8 uStack_170;
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
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (param_1 == 0) {
    if (param_2 != (uint *)0x0) {
      __ptr = malloc(0x370);
      if (__ptr == (void *)0x0) {
        uVar10 = 0xfffffffc;
      }
      else {
        lVar20 = 0;
        uStack_7b8 = _UNK_0024e058;
        local_7c0 = _DAT_0024e050;
        uStack_7a8 = _UNK_0024df98;
        uStack_7b0 = _DAT_0024df90;
        uStack_798 = _UNK_0024df48;
        local_7a0 = _DAT_0024df40;
        local_790 = DAT_0024e7a0;
        local_788 = 0xe;
        do {
          uVar10 = ma_context_init((long)&local_7c0 + lVar20,1,0,__ptr);
          if ((int)uVar10 == 0) {
            uVar10 = ma_device_init(__ptr,param_2,param_3);
            if ((int)uVar10 == 0) {
              *(undefined1 *)((long)param_3 + 0x184) = 1;
              goto LAB_005c3408;
            }
            uVar10 = uVar10 & 0xffffffff;
            if (*(code **)((long)__ptr + 8) != (code *)0x0) {
              (**(code **)((long)__ptr + 8))(__ptr);
            }
            pthread_mutex_destroy((pthread_mutex_t *)((long)__ptr + 0x140));
            pthread_mutex_destroy((pthread_mutex_t *)((long)__ptr + 0x168));
            if ((*(long *)((long)__ptr + 0x1a0) != 0) &&
               (*(code **)((long)__ptr + 0x138) != (code *)0x0)) {
              (**(code **)((long)__ptr + 0x138))
                        (*(long *)((long)__ptr + 0x1a0),*(undefined8 *)((long)__ptr + 0x120));
            }
            if (*(long *)((long)__ptr + 0x70) == (long)__ptr + 0x78) {
              pthread_mutex_destroy((pthread_mutex_t *)((long)__ptr + 0xe0));
            }
          }
          lVar20 = lVar20 + 4;
        } while (lVar20 != 0x3c);
        uVar10 = uVar10 & 0xffffffff;
        free(__ptr);
      }
      goto LAB_005c3408;
    }
  }
  else if ((param_3 != (long *)0x0) && (memset(param_3,0,0xeb0), param_2 != (uint *)0x0)) {
    if (*(long *)(param_1 + 0x20) == 0) {
      uVar10 = 0xfffffffd;
      goto LAB_005c3408;
    }
    uVar5 = *param_2;
    if ((uVar5 & 0xfffffffe) == 2) {
      uVar11 = param_2[0x29];
      uVar10 = (ulong)uVar11;
      if (0xfe < uVar11) goto LAB_005c3404;
      pcVar12 = *(char **)(param_2 + 0x2a);
      if ((pcVar12 != (char *)0x0) && (*pcVar12 != '\0')) {
        if (uVar11 == 0) goto LAB_005c3404;
        uVar13 = 1;
        uVar14 = 0;
        do {
          uVar1 = uVar14 + 1;
          if (uVar1 < uVar10) {
            uVar15 = uVar10;
            pcVar7 = pcVar12;
            do {
              if (pcVar12[uVar14] == pcVar7[uVar13]) goto LAB_005c3404;
              uVar15 = uVar15 - 1;
              pcVar7 = pcVar7 + 1;
            } while (uVar13 != uVar15);
          }
          uVar13 = uVar13 + 1;
          uVar14 = uVar1;
        } while (uVar1 != uVar10);
      }
    }
    if ((uVar5 < 5) && ((1 << (ulong)(uVar5 & 0x1f) & 0x1aU) != 0)) {
      uVar5 = param_2[0x1f];
      uVar10 = (ulong)uVar5;
      if (0xfe < uVar5) goto LAB_005c3404;
      pcVar12 = *(char **)(param_2 + 0x20);
      if ((pcVar12 != (char *)0x0) && (*pcVar12 != '\0')) {
        if (uVar5 == 0) goto LAB_005c3404;
        uVar13 = 1;
        uVar14 = 0;
        do {
          uVar1 = uVar14 + 1;
          if (uVar1 < uVar10) {
            uVar15 = uVar10;
            pcVar7 = pcVar12;
            do {
              if (pcVar12[uVar14] == pcVar7[uVar13]) goto LAB_005c3404;
              uVar15 = uVar15 - 1;
              pcVar7 = pcVar7 + 1;
            } while (uVar13 != uVar15);
          }
          uVar13 = uVar13 + 1;
          uVar14 = uVar1;
        } while (uVar1 != uVar10);
      }
    }
    *param_3 = param_1;
    param_3[6] = *(long *)(param_2 + 0xe);
    lVar20 = *(long *)(param_2 + 8);
    param_3[4] = *(long *)(param_2 + 10);
    param_3[3] = lVar20;
    param_3[5] = *(long *)(param_2 + 0xc);
    plVar8 = *(long **)(param_2 + 0x1c);
    if (plVar8 != (long *)0x0) {
      lVar19 = plVar8[4];
      lVar18 = plVar8[7];
      lVar20 = plVar8[6];
      lVar22 = plVar8[1];
      lVar21 = *plVar8;
      lVar24 = plVar8[3];
      lVar23 = plVar8[2];
      param_3[0x4f] = plVar8[5];
      param_3[0x4e] = lVar19;
      param_3[0x51] = lVar18;
      param_3[0x50] = lVar20;
      param_3[0x4b] = lVar22;
      param_3[0x4a] = lVar21;
      param_3[0x4d] = lVar24;
      param_3[0x4c] = lVar23;
      lVar19 = plVar8[0xc];
      lVar18 = plVar8[0xf];
      lVar20 = plVar8[0xe];
      lVar22 = plVar8[9];
      lVar21 = plVar8[8];
      lVar24 = plVar8[0xb];
      lVar23 = plVar8[10];
      param_3[0x57] = plVar8[0xd];
      param_3[0x56] = lVar19;
      param_3[0x59] = lVar18;
      param_3[0x58] = lVar20;
      param_3[0x53] = lVar22;
      param_3[0x52] = lVar21;
      param_3[0x55] = lVar24;
      param_3[0x54] = lVar23;
      lVar19 = plVar8[0x14];
      lVar18 = plVar8[0x17];
      lVar20 = plVar8[0x16];
      lVar22 = plVar8[0x11];
      lVar21 = plVar8[0x10];
      lVar24 = plVar8[0x13];
      lVar23 = plVar8[0x12];
      param_3[0x5f] = plVar8[0x15];
      param_3[0x5e] = lVar19;
      param_3[0x61] = lVar18;
      param_3[0x60] = lVar20;
      param_3[0x5b] = lVar22;
      param_3[0x5a] = lVar21;
      param_3[0x5d] = lVar24;
      param_3[0x5c] = lVar23;
      plVar4 = plVar8 + 0x1d;
      lVar19 = plVar8[0x1c];
      lVar18 = plVar8[0x1f];
      lVar20 = plVar8[0x1e];
      lVar22 = plVar8[0x19];
      lVar21 = plVar8[0x18];
      lVar24 = plVar8[0x1b];
      lVar23 = plVar8[0x1a];
      plVar8 = param_3 + 0x4a;
      param_3[0x67] = *plVar4;
      param_3[0x66] = lVar19;
      param_3[0x69] = lVar18;
      param_3[0x68] = lVar20;
      param_3[99] = lVar22;
      param_3[0x62] = lVar21;
      param_3[0x65] = lVar24;
      param_3[100] = lVar23;
    }
    param_3[0x49] = (long)plVar8;
    plVar8 = *(long **)(param_2 + 0x26);
    if (plVar8 != (long *)0x0) {
      lVar19 = plVar8[5];
      lVar18 = plVar8[4];
      lVar20 = plVar8[6];
      lVar22 = plVar8[1];
      lVar21 = *plVar8;
      lVar24 = plVar8[3];
      lVar23 = plVar8[2];
      param_3[0x104] = plVar8[7];
      param_3[0x103] = lVar20;
      param_3[0x102] = lVar19;
      param_3[0x101] = lVar18;
      param_3[0x100] = lVar24;
      param_3[0xff] = lVar23;
      param_3[0xfe] = lVar22;
      param_3[0xfd] = lVar21;
      lVar19 = plVar8[0xd];
      lVar18 = plVar8[0xc];
      lVar20 = plVar8[0xe];
      lVar22 = plVar8[9];
      lVar21 = plVar8[8];
      lVar24 = plVar8[0xb];
      lVar23 = plVar8[10];
      param_3[0x10c] = plVar8[0xf];
      param_3[0x10b] = lVar20;
      param_3[0x10a] = lVar19;
      param_3[0x109] = lVar18;
      param_3[0x108] = lVar24;
      param_3[0x107] = lVar23;
      param_3[0x106] = lVar22;
      param_3[0x105] = lVar21;
      lVar19 = plVar8[0x15];
      lVar18 = plVar8[0x14];
      lVar20 = plVar8[0x16];
      lVar22 = plVar8[0x11];
      lVar21 = plVar8[0x10];
      lVar24 = plVar8[0x13];
      lVar23 = plVar8[0x12];
      param_3[0x114] = plVar8[0x17];
      param_3[0x113] = lVar20;
      param_3[0x112] = lVar19;
      param_3[0x111] = lVar18;
      param_3[0x110] = lVar24;
      param_3[0x10f] = lVar23;
      param_3[0x10e] = lVar22;
      param_3[0x10d] = lVar21;
      lVar19 = plVar8[0x1d];
      lVar18 = plVar8[0x1c];
      plVar4 = plVar8 + 0x1f;
      lVar20 = plVar8[0x1e];
      lVar22 = plVar8[0x19];
      lVar21 = plVar8[0x18];
      lVar24 = plVar8[0x1b];
      lVar23 = plVar8[0x1a];
      plVar8 = param_3 + 0xfd;
      param_3[0x11c] = *plVar4;
      param_3[0x11b] = lVar20;
      param_3[0x11a] = lVar19;
      param_3[0x119] = lVar18;
      param_3[0x118] = lVar24;
      param_3[0x117] = lVar23;
      param_3[0x116] = lVar22;
      param_3[0x115] = lVar21;
    }
    param_3[0xfc] = (long)plVar8;
    *(uint *)((long)param_3 + 0x185) = param_2[6];
    *(undefined4 *)((long)param_3 + 0x18c) = 0x3f800000;
    param_3[1] = *(long *)param_2;
    *(uint *)(param_3 + 0x45) = param_2[0x14];
    *(uint *)(param_3 + 0x48) = param_2[0x1a];
    lVar20 = *(long *)(param_2 + 0x16);
    param_3[0x47] = *(long *)(param_2 + 0x18);
    param_3[0x46] = lVar20;
    *(uint *)(param_3 + 0x13d) = param_2[0x2e];
    *(uint *)((long)param_3 + 0x9ec) = param_2[0x28];
    uVar5 = param_2[0x29];
    *(uint *)(param_3 + 0x13e) = uVar5;
    if (uVar5 != 0) {
      if (*(void **)(param_2 + 0x2a) == (void *)0x0) {
        uVar17 = uVar5 - 1;
        uVar10 = (ulong)uVar17;
        uVar11 = uVar17;
        if (0xfc < uVar17) {
          uVar11 = 0xfd;
        }
        uVar9 = (undefined1)(0x202020202020102 >> (((ulong)uVar5 & 7) << 3));
        if (7 < uVar5) {
          uVar9 = 2;
        }
        *(undefined1 *)((long)param_3 + 0x9f4) = uVar9;
        if (uVar17 != 0) {
          uVar9 = (undefined1)(0x3030303030301 >> (((ulong)(uVar5 - 1) & 7) << 3));
          if (7 < uVar5) {
            uVar9 = 3;
          }
          *(undefined1 *)((long)param_3 + 0x9f5) = uVar9;
          if (uVar11 != 1) {
            if (0xfc < uVar10) {
              uVar10 = 0xfd;
            }
            lVar20 = 0;
            uVar13 = 0x10;
            do {
              uVar14 = lVar20 + 2;
              if ((int)uVar5 < 4) {
                if (uVar5 == 1) {
                  cVar16 = '\x01';
                }
                else if (uVar5 == 2) {
LAB_005c3800:
                  cVar16 = '\0';
                }
                else {
                  if (uVar5 != 3) goto LAB_005c37d8;
                  cVar16 = (char)uVar14 + '\x02';
                }
              }
              else if ((int)uVar5 < 6) {
                if (uVar5 == 4) {
                  cVar16 = (char)(0xa040302 >> (ulong)((uint)uVar13 & 0x1f));
                }
                else if (uVar5 == 5) {
                  cVar16 = (char)(0x706040302 >> (uVar13 & 0x3f));
                }
                else {
LAB_005c37d8:
                  if (uVar14 < 8) {
                    cVar16 = (char)(0xc0b070605040302 >> (uVar13 & 0x3f));
                  }
                  else {
                    if (0x1f < uVar14) goto LAB_005c3800;
                    cVar16 = (char)uVar14 + '\f';
                  }
                }
              }
              else if (uVar5 == 6) {
                cVar16 = (char)(0xc0b05040302 >> (uVar13 & 0x3f));
              }
              else {
                if (uVar5 != 7) goto LAB_005c37d8;
                cVar16 = (char)(0xc0b0a05040302 >> (uVar13 & 0x3f));
              }
              *(char *)((long)param_3 + lVar20 + 0x9f6) = cVar16;
              lVar20 = lVar20 + 1;
              uVar13 = uVar13 + 8;
            } while (uVar10 - 1 != lVar20);
          }
        }
      }
      else {
        memcpy((void *)((long)param_3 + 0x9f4),*(void **)(param_2 + 0x2a),(ulong)uVar5);
      }
    }
    param_3[0x181] = *(long *)(param_2 + 0x2c);
    *(uint *)(param_3 + 0x8a) = param_2[0x24];
    *(uint *)((long)param_3 + 0x454) = param_2[0x1e];
    uVar5 = param_2[0x1f];
    *(uint *)(param_3 + 0x8b) = uVar5;
    if (uVar5 != 0) {
      if (*(void **)(param_2 + 0x20) == (void *)0x0) {
        uVar17 = uVar5 - 1;
        uVar10 = (ulong)uVar17;
        uVar11 = uVar17;
        if (0xfc < uVar17) {
          uVar11 = 0xfd;
        }
        uVar9 = (undefined1)(0x202020202020102 >> (((ulong)uVar5 & 7) << 3));
        if (7 < uVar5) {
          uVar9 = 2;
        }
        *(undefined1 *)((long)param_3 + 0x45c) = uVar9;
        if (uVar17 != 0) {
          uVar9 = (undefined1)(0x3030303030301 >> (((ulong)(uVar5 - 1) & 7) << 3));
          if (7 < uVar5) {
            uVar9 = 3;
          }
          *(undefined1 *)((long)param_3 + 0x45d) = uVar9;
          if (uVar11 != 1) {
            if (0xfc < uVar10) {
              uVar10 = 0xfd;
            }
            lVar20 = 0;
            uVar13 = 0x10;
            do {
              uVar14 = lVar20 + 2;
              if ((int)uVar5 < 4) {
                if (uVar5 == 1) {
                  cVar16 = '\x01';
                }
                else if (uVar5 == 2) {
LAB_005c397c:
                  cVar16 = '\0';
                }
                else {
                  if (uVar5 != 3) goto LAB_005c3954;
                  cVar16 = (char)uVar14 + '\x02';
                }
              }
              else if ((int)uVar5 < 6) {
                if (uVar5 == 4) {
                  cVar16 = (char)(0xa040302 >> (ulong)((uint)uVar13 & 0x1f));
                }
                else if (uVar5 == 5) {
                  cVar16 = (char)(0x706040302 >> (uVar13 & 0x3f));
                }
                else {
LAB_005c3954:
                  if (uVar14 < 8) {
                    cVar16 = (char)(0xc0b070605040302 >> (uVar13 & 0x3f));
                  }
                  else {
                    if (0x1f < uVar14) goto LAB_005c397c;
                    cVar16 = (char)uVar14 + '\f';
                  }
                }
              }
              else if (uVar5 == 6) {
                cVar16 = (char)(0xc0b05040302 >> (uVar13 & 0x3f));
              }
              else {
                if (uVar5 != 7) goto LAB_005c3954;
                cVar16 = (char)(0xc0b0a05040302 >> (uVar13 & 0x3f));
              }
              *(char *)((long)param_3 + lVar20 + 0x45e) = cVar16;
              lVar20 = lVar20 + 1;
              uVar13 = uVar13 + 8;
            } while (uVar10 - 1 != lVar20);
          }
        }
      }
      else {
        memcpy((void *)((long)param_3 + 0x45c),*(void **)(param_2 + 0x20),(ulong)uVar5);
      }
    }
    lVar20 = *(long *)(param_2 + 0x22);
    __mutex = (pthread_mutex_t *)(param_3 + 7);
    param_3[8] = 0;
    __mutex->__align = 0;
    param_3[0xce] = lVar20;
    param_3[10] = 0;
    param_3[9] = 0;
    param_3[0xb] = 0;
    uVar5 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
    if (uVar5 != 0) {
      if (uVar5 < 0x82) {
        uVar10 = (ulong)*(uint *)(&DAT_00284ec8 + (ulong)uVar5 * 4);
      }
      else {
        uVar10 = 0xffffffff;
      }
      goto LAB_005c3408;
    }
    uVar5 = pthread_mutex_init((pthread_mutex_t *)((long)param_3 + 100),(pthread_mutexattr_t *)0x0);
    if (uVar5 == 0) {
      uVar5 = pthread_cond_init((pthread_cond_t *)((long)param_3 + 0x8c),(pthread_condattr_t *)0x0);
      if (uVar5 == 0) {
        *(undefined4 *)(param_3 + 0xc) = 0;
        uVar5 = ma_event_init((long)param_3 + 0xbc);
        if (uVar5 == 0) {
          uVar5 = ma_event_init(param_3 + 0x23);
          if (uVar5 == 0) {
            local_190 = *(undefined8 *)(param_2 + 0x1c);
            local_184 = param_2[0x1e];
            local_180 = param_2[0x1f];
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
            uStack_130 = 0;
            local_138 = 0;
            uStack_140 = 0;
            local_148 = 0;
            uStack_150 = 0;
            local_158 = 0;
            uStack_160 = 0;
            local_168 = 0;
            uStack_170 = 0;
            local_178 = 0;
            local_188 = param_2[0x24];
            local_17c = param_2[1];
            uStack_80 = 0;
            local_88 = 0;
            local_70 = 0;
            local_78 = 0;
            ma_channel_map_copy_or_default(&local_178,0xfe,*(undefined8 *)(param_2 + 0x20));
            local_78 = *(undefined8 *)(param_2 + 2);
            local_2b0 = param_2[0x2e];
            uVar5 = 3;
            if (param_2[4] != 0) {
              uVar5 = param_2[4];
            }
            local_70 = CONCAT44(local_70._4_4_,uVar5);
            local_2b8 = *(undefined8 *)(param_2 + 0x26);
            uStack_298 = 0;
            local_2a0 = 0;
            local_2ac = param_2[0x28];
            local_2a8 = param_2[0x29];
            uStack_288 = 0;
            local_290 = 0;
            uStack_278 = 0;
            local_280 = 0;
            local_2a4 = param_2[1];
            uStack_268 = 0;
            local_270 = 0;
            uStack_258 = 0;
            local_260 = 0;
            uStack_248 = 0;
            local_250 = 0;
            uStack_238 = 0;
            local_240 = 0;
            uStack_228 = 0;
            local_230 = 0;
            uStack_218 = 0;
            local_220 = 0;
            uStack_208 = 0;
            local_210 = 0;
            uStack_1f8 = 0;
            local_200 = 0;
            uStack_1e8 = 0;
            local_1f0 = 0;
            uStack_1d8 = 0;
            local_1e0 = 0;
            uStack_1c8 = 0;
            local_1d0 = 0;
            uStack_1b8 = 0;
            local_1c0 = 0;
            uStack_1a8 = 0;
            local_1b0 = 0;
            local_198 = 0;
            local_1a0 = 0;
            ma_channel_map_copy_or_default(&local_2a0,0xfe,*(undefined8 *)(param_2 + 0x2a));
            local_1a0 = *(undefined8 *)(param_2 + 2);
            uVar5 = 3;
            if (param_2[4] != 0) {
              uVar5 = param_2[4];
            }
            local_198 = CONCAT44(local_198._4_4_,uVar5);
            uVar5 = (**(code **)(param_1 + 0x20))(param_3,param_2,&local_190,&local_2b8);
            if (uVar5 == 0) {
              uVar5 = ma_device_post_init(param_3,*param_2,&local_190,&local_2b8);
              if (uVar5 != 0) {
                uVar10 = (ulong)uVar5;
                ma_device_uninit(param_3);
                goto LAB_005c3408;
              }
              if (*(char *)((long)param_2 + 0x1b) == '\0') {
                uVar5 = param_2[2];
                if (uVar5 == 0) {
                  if (*(int *)((long)param_3 + 0xc) != 0) {
                    uVar5 = (param_2[3] * *(int *)((long)param_3 + 0xc)) / 1000;
                    goto LAB_005c3c14;
                  }
                  uVar11 = *param_2;
                  if (uVar11 - 2 < 3) {
                    *(undefined4 *)((long)param_3 + 0xd54) = 0;
LAB_005c3c6c:
                    uVar5 = *(uint *)(param_3 + 0x180);
                    uVar17 = 0;
                    *(uint *)(param_3 + 0x1aa) = uVar5;
                    goto LAB_005c3c78;
                  }
                  uVar5 = 0;
LAB_005c4324:
                  if ((uVar11 | 2) != 3) goto LAB_005c3b9c;
                  *(undefined4 *)((long)param_3 + 0x7bc) = 0;
                  if (uVar11 == 3) {
                    uVar5 = *(uint *)(param_3 + 0x1aa);
LAB_005c4350:
                    *(uint *)(param_3 + 0xf7) = uVar5;
                  }
                  else {
                    *(uint *)(param_3 + 0xf7) = uVar5;
                    if (uVar5 == 0) {
                      uVar5 = *(uint *)(param_3 + 0xcd);
                      goto LAB_005c4350;
                    }
                  }
                  if (*(code **)(param_1 + 0x128) == (code *)0x0) {
                    param_3[0xf6] = 0;
                  }
                  else {
                    lVar20 = (**(code **)(param_1 + 0x128))
                                       (*(int *)(&DAT_00281c10 +
                                                (ulong)*(uint *)((long)param_3 + 0x454) * 4) * uVar5
                                        * (int)param_3[0x8b],*(undefined8 *)(param_1 + 0x120));
                    param_3[0xf6] = lVar20;
                    if (lVar20 != 0) {
                      ma_silence_pcm_frames
                                (lVar20,(int)param_3[0xf7],*(undefined4 *)((long)param_3 + 0x454),
                                 (int)param_3[0x8b]);
                      *(undefined4 *)((long)param_3 + 0x7bc) = 0;
                      goto LAB_005c3b9c;
                    }
                  }
                }
                else {
LAB_005c3c14:
                  uVar11 = *param_2;
                  if (2 < uVar11 - 2) goto LAB_005c4324;
                  *(undefined4 *)((long)param_3 + 0xd54) = 0;
                  *(uint *)(param_3 + 0x1aa) = uVar5;
                  uVar17 = uVar5;
                  if (uVar5 == 0) goto LAB_005c3c6c;
LAB_005c3c78:
                  if (*(code **)(param_1 + 0x128) == (code *)0x0) {
                    param_3[0x1a9] = 0;
                  }
                  else {
                    lVar20 = (**(code **)(param_1 + 0x128))
                                       (*(int *)(&DAT_00281c10 +
                                                (ulong)*(uint *)((long)param_3 + 0x9ec) * 4) * uVar5
                                        * (int)param_3[0x13e],*(undefined8 *)(param_1 + 0x120));
                    param_3[0x1a9] = lVar20;
                    if (lVar20 != 0) {
                      ma_silence_pcm_frames
                                (lVar20,(int)param_3[0x1aa],*(undefined4 *)((long)param_3 + 0x9ec),
                                 (int)param_3[0x13e]);
                      *(int *)((long)param_3 + 0xd54) = (int)param_3[0x1aa];
                      uVar11 = *param_2;
                      uVar5 = uVar17;
                      goto LAB_005c4324;
                    }
                  }
                }
                ma_device_uninit(param_3);
                uVar10 = 0xfffffffc;
                goto LAB_005c3408;
              }
LAB_005c3b9c:
              if (((*(long *)(param_1 + 0x40) == 0) && (*(long *)(param_1 + 0x48) == 0)) &&
                 (*(long *)(param_1 + 0x50) == 0)) {
                if ((*param_2 != 3) ||
                   (uVar5 = ma_duplex_rb_init(*(undefined4 *)((long)param_3 + 0x9ec),
                                              (int)param_3[0x13e],
                                              *(undefined4 *)((long)param_3 + 0xc),
                                              *(undefined4 *)((long)param_3 + 0xafc),
                                              (int)param_3[0x180],*param_3 + 0x120,param_3 + 0x32),
                   uVar5 == 0)) {
                  *(undefined4 *)(param_3 + 2) = 1;
                  lVar20 = *param_3;
                  if (lVar20 != 0) goto LAB_005c3c48;
LAB_005c3d1c:
                  uVar6 = 0;
LAB_005c3d20:
                  if (*(uint *)(lVar20 + 0x68) < 0xf) {
                    pcVar12 = (&PTR_s_WASAPI_00679b18)[(ulong)*(uint *)(lVar20 + 0x68) * 2];
                  }
                  else {
                    pcVar12 = "Unknown";
                  }
                  ma_log_postf(uVar6,3,"[%s]\n",pcVar12);
                  uVar5 = *(uint *)(param_3 + 1);
                  if (uVar5 - 2 < 3) {
                    ma_device_get_name(param_3,2,auStack_3b8,0x100,0);
                    if (*param_3 == 0) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = *(undefined8 *)(*param_3 + 0x70);
                    }
                    ma_log_postf(uVar6,3,"  %s (%s)\n",auStack_3b8,"Capture");
                    if (*param_3 == 0) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = *(undefined8 *)(*param_3 + 0x70);
                    }
                    if (*(uint *)((long)param_3 + 0xaf4) < 6) {
                      pcVar12 = (&PTR_s_Unknown_00679c20)[*(uint *)((long)param_3 + 0xaf4)];
                    }
                    else {
                      pcVar12 = "Invalid";
                    }
                    if (*(uint *)((long)param_3 + 0x9ec) < 6) {
                      pcVar7 = (&PTR_s_Unknown_00679c20)[*(uint *)((long)param_3 + 0x9ec)];
                    }
                    else {
                      pcVar7 = "Invalid";
                    }
                    ma_log_postf(uVar6,3,"    Format:      %s -> %s\n",pcVar12,pcVar7);
                    if (*param_3 == 0) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = *(undefined8 *)(*param_3 + 0x70);
                    }
                    ma_log_postf(uVar6,3,"    Channels:    %d -> %d\n",(int)param_3[0x15f],
                                 (int)param_3[0x13e]);
                    if (*param_3 == 0) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = *(undefined8 *)(*param_3 + 0x70);
                    }
                    ma_log_postf(uVar6,3,"    Sample Rate: %d -> %d\n",
                                 *(undefined4 *)((long)param_3 + 0xafc),
                                 *(undefined4 *)((long)param_3 + 0xc));
                    if (*param_3 == 0) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = *(undefined8 *)(*param_3 + 0x70);
                    }
                    ma_log_postf(uVar6,3,"    Buffer Size: %d*%d (%d)\n",(int)param_3[0x180],
                                 *(int *)((long)param_3 + 0xc04),
                                 *(int *)((long)param_3 + 0xc04) * (int)param_3[0x180]);
                    if (*param_3 == 0) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = *(undefined8 *)(*param_3 + 0x70);
                    }
                    ma_log_postf(uVar6,3,"    Conversion:\n");
                    if (*param_3 == 0) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = *(undefined8 *)(*param_3 + 0x70);
                    }
                    puVar2 = &DAT_0024940a;
                    if ((char)param_3[0x1a7] != '\0') {
                      puVar2 = &DAT_002406e1;
                    }
                    ma_log_postf(uVar6,3,"      Pre Format Conversion:  %s\n",puVar2);
                    if (*param_3 == 0) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = *(undefined8 *)(*param_3 + 0x70);
                    }
                    puVar2 = &DAT_0024940a;
                    if (*(char *)((long)param_3 + 0xd39) != '\0') {
                      puVar2 = &DAT_002406e1;
                    }
                    ma_log_postf(uVar6,3,"      Post Format Conversion: %s\n",puVar2);
                    if (*param_3 == 0) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = *(undefined8 *)(*param_3 + 0x70);
                    }
                    puVar2 = &DAT_0024940a;
                    if (*(char *)((long)param_3 + 0xd3a) != '\0') {
                      puVar2 = &DAT_002406e1;
                    }
                    ma_log_postf(uVar6,3,"      Channel Routing:        %s\n",puVar2);
                    if (*param_3 == 0) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = *(undefined8 *)(*param_3 + 0x70);
                    }
                    puVar2 = &DAT_0024940a;
                    if (*(char *)((long)param_3 + 0xd3b) != '\0') {
                      puVar2 = &DAT_002406e1;
                    }
                    ma_log_postf(uVar6,3,"      Resampling:             %s\n",puVar2);
                    if (*param_3 == 0) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = *(undefined8 *)(*param_3 + 0x70);
                    }
                    puVar2 = &DAT_0024940a;
                    if (*(char *)((long)param_3 + 0xd3c) != '\0') {
                      puVar2 = &DAT_002406e1;
                    }
                    ma_log_postf(uVar6,3,"      Passthrough:            %s\n",puVar2);
                    ma_channel_map_to_string(param_3 + 0x160,(int)param_3[0x15f],&local_7c0,0x400);
                    if (*param_3 == 0) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = *(undefined8 *)(*param_3 + 0x70);
                    }
                    ma_log_postf(uVar6,3,"      Channel Map In:         {%s}\n",&local_7c0);
                    ma_channel_map_to_string
                              ((long)param_3 + 0x9f4,(int)param_3[0x13e],&local_7c0,0x400);
                    if (*param_3 == 0) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = *(undefined8 *)(*param_3 + 0x70);
                    }
                    ma_log_postf(uVar6,3,"      Channel Map Out:        {%s}\n",&local_7c0);
                    uVar5 = *(uint *)(param_3 + 1);
                  }
                  if ((uVar5 | 2) == 3) {
                    ma_device_get_name(param_3,1,auStack_3b8,0x100,0);
                    if (*param_3 == 0) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = *(undefined8 *)(*param_3 + 0x70);
                    }
                    ma_log_postf(uVar6,3,"  %s (%s)\n",auStack_3b8,"Playback");
                    if (*param_3 == 0) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = *(undefined8 *)(*param_3 + 0x70);
                    }
                    if (*(uint *)((long)param_3 + 0x454) < 6) {
                      pcVar12 = (&PTR_s_Unknown_00679c20)[*(uint *)((long)param_3 + 0x454)];
                    }
                    else {
                      pcVar12 = "Invalid";
                    }
                    if (*(uint *)((long)param_3 + 0x55c) < 6) {
                      pcVar7 = (&PTR_s_Unknown_00679c20)[*(uint *)((long)param_3 + 0x55c)];
                    }
                    else {
                      pcVar7 = "Invalid";
                    }
                    ma_log_postf(uVar6,3,"    Format:      %s -> %s\n",pcVar12,pcVar7);
                    if (*param_3 == 0) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = *(undefined8 *)(*param_3 + 0x70);
                    }
                    ma_log_postf(uVar6,3,"    Channels:    %d -> %d\n",(int)param_3[0x8b],
                                 (int)param_3[0xac]);
                    if (*param_3 == 0) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = *(undefined8 *)(*param_3 + 0x70);
                    }
                    ma_log_postf(uVar6,3,"    Sample Rate: %d -> %d\n",
                                 *(undefined4 *)((long)param_3 + 0xc),
                                 *(undefined4 *)((long)param_3 + 0x564));
                    if (*param_3 == 0) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = *(undefined8 *)(*param_3 + 0x70);
                    }
                    ma_log_postf(uVar6,3,"    Buffer Size: %d*%d (%d)\n",(int)param_3[0xcd],
                                 *(int *)((long)param_3 + 0x66c),
                                 *(int *)((long)param_3 + 0x66c) * (int)param_3[0xcd]);
                    if (*param_3 == 0) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = *(undefined8 *)(*param_3 + 0x70);
                    }
                    ma_log_postf(uVar6,3,"    Conversion:\n");
                    if (*param_3 == 0) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = *(undefined8 *)(*param_3 + 0x70);
                    }
                    puVar2 = &DAT_0024940a;
                    if ((char)param_3[0xf4] != '\0') {
                      puVar2 = &DAT_002406e1;
                    }
                    ma_log_postf(uVar6,3,"      Pre Format Conversion:  %s\n",puVar2);
                    if (*param_3 == 0) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = *(undefined8 *)(*param_3 + 0x70);
                    }
                    puVar2 = &DAT_0024940a;
                    if (*(char *)((long)param_3 + 0x7a1) != '\0') {
                      puVar2 = &DAT_002406e1;
                    }
                    ma_log_postf(uVar6,3,"      Post Format Conversion: %s\n",puVar2);
                    if (*param_3 == 0) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = *(undefined8 *)(*param_3 + 0x70);
                    }
                    puVar2 = &DAT_0024940a;
                    if (*(char *)((long)param_3 + 0x7a2) != '\0') {
                      puVar2 = &DAT_002406e1;
                    }
                    ma_log_postf(uVar6,3,"      Channel Routing:        %s\n",puVar2);
                    if (*param_3 == 0) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = *(undefined8 *)(*param_3 + 0x70);
                    }
                    puVar2 = &DAT_0024940a;
                    if (*(char *)((long)param_3 + 0x7a3) != '\0') {
                      puVar2 = &DAT_002406e1;
                    }
                    ma_log_postf(uVar6,3,"      Resampling:             %s\n",puVar2);
                    if (*param_3 == 0) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = *(undefined8 *)(*param_3 + 0x70);
                    }
                    puVar2 = &DAT_0024940a;
                    if (*(char *)((long)param_3 + 0x7a4) != '\0') {
                      puVar2 = &DAT_002406e1;
                    }
                    ma_log_postf(uVar6,3,"      Passthrough:            %s\n",puVar2);
                    ma_channel_map_to_string
                              ((long)param_3 + 0x45c,(int)param_3[0x8b],&local_7c0,0x400);
                    if (*param_3 == 0) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = *(undefined8 *)(*param_3 + 0x70);
                    }
                    ma_log_postf(uVar6,3,"      Channel Map In:         {%s}\n",&local_7c0);
                    ma_channel_map_to_string(param_3 + 0xad,(int)param_3[0xac],&local_7c0,0x400);
                    if (*param_3 == 0) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = *(undefined8 *)(*param_3 + 0x70);
                    }
                    ma_log_postf(uVar6,3,"      Channel Map Out:        {%s}\n",&local_7c0);
                  }
                  uVar10 = 0;
                  goto LAB_005c3408;
                }
              }
              else {
                uVar5 = FUN_005bdcf8(param_3 + 0x2f,*(undefined4 *)(param_1 + 0x108),
                                     *(undefined8 *)(param_1 + 0x110),FUN_005c4a30,param_3,
                                     param_1 + 0x120);
                if (uVar5 == 0) {
                  ma_event_wait(param_3 + 0x23);
                  lVar20 = *param_3;
                  if (lVar20 == 0) goto LAB_005c3d1c;
LAB_005c3c48:
                  uVar6 = *(undefined8 *)(lVar20 + 0x70);
                  goto LAB_005c3d20;
                }
              }
              uVar10 = (ulong)uVar5;
              ma_device_uninit(param_3);
              goto LAB_005c3408;
            }
          }
          pthread_cond_destroy((pthread_cond_t *)(param_3 + 0x1d));
          pthread_mutex_destroy((pthread_mutex_t *)(param_3 + 0x18));
        }
        uVar10 = (ulong)uVar5;
        pthread_cond_destroy((pthread_cond_t *)((long)param_3 + 0x8c));
        pthread_mutex_destroy((pthread_mutex_t *)((long)param_3 + 100));
        pthread_mutex_destroy(__mutex);
        goto LAB_005c3408;
      }
      pthread_mutex_destroy((pthread_mutex_t *)((long)param_3 + 100));
    }
    if (uVar5 < 0x82) {
      uVar10 = (ulong)*(uint *)(&DAT_00284ec8 + (ulong)uVar5 * 4);
    }
    else {
      uVar10 = 0xffffffff;
    }
    pthread_mutex_destroy(__mutex);
    goto LAB_005c3408;
  }
LAB_005c3404:
  uVar10 = 0xfffffffe;
LAB_005c3408:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar10);
  }
  return;
}


// ===== 005c43b8  ma_device_init_ex =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ma_device_init_ex(undefined8 *param_1,uint param_2,long param_3,long param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  undefined8 *puVar7;
  code *pcVar8;
  ulong uVar9;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (param_4 == 0) goto LAB_005c4440;
  if (param_3 == 0) {
LAB_005c4448:
    lVar6 = 0;
    pcVar5 = malloc;
    pcVar8 = free;
LAB_005c4464:
    lVar4 = (*pcVar5)(0x370,lVar6);
    if (lVar4 != 0) {
      uStack_a8 = _UNK_0024e058;
      local_b0 = _DAT_0024e050;
      uStack_98 = _UNK_0024df98;
      uStack_a0 = _DAT_0024df90;
      local_78 = 0xe;
      uVar1 = 0xf;
      if (param_1 != (undefined8 *)0x0) {
        uVar1 = param_2;
      }
      uVar9 = (ulong)uVar1;
      puVar7 = &local_b0;
      if (param_1 != (undefined8 *)0x0) {
        puVar7 = param_1;
      }
      uStack_88 = _UNK_0024df48;
      local_90 = _DAT_0024df40;
      local_80 = DAT_0024e7a0;
      if (uVar1 == 0) {
        uVar3 = 0xffffff35;
      }
      else {
        do {
          uVar3 = ma_context_init(puVar7,1,param_3,lVar4);
          if ((int)uVar3 == 0) {
            uVar3 = ma_device_init(lVar4,param_4,param_5);
            if ((int)uVar3 == 0) {
              *(undefined1 *)(param_5 + 0x184) = 1;
              goto LAB_005c4598;
            }
            uVar3 = uVar3 & 0xffffffff;
            if (*(code **)(lVar4 + 8) != (code *)0x0) {
              (**(code **)(lVar4 + 8))(lVar4);
            }
            pthread_mutex_destroy((pthread_mutex_t *)(lVar4 + 0x140));
            pthread_mutex_destroy((pthread_mutex_t *)(lVar4 + 0x168));
            if ((*(long *)(lVar4 + 0x1a0) != 0) && (*(code **)(lVar4 + 0x138) != (code *)0x0)) {
              (**(code **)(lVar4 + 0x138))(*(long *)(lVar4 + 0x1a0),*(undefined8 *)(lVar4 + 0x120));
            }
            if (*(long *)(lVar4 + 0x70) == lVar4 + 0x78) {
              pthread_mutex_destroy((pthread_mutex_t *)(lVar4 + 0xe0));
            }
          }
          uVar9 = uVar9 - 1;
          puVar7 = (undefined8 *)((long)puVar7 + 4);
        } while (uVar9 != 0);
      }
      if (pcVar8 != (code *)0x0) {
        uVar3 = uVar3 & 0xffffffff;
        (*pcVar8)(lVar4,lVar6);
      }
      goto LAB_005c4598;
    }
LAB_005c4564:
    uVar3 = 0xfffffffc;
  }
  else {
    lVar6 = *(long *)(param_3 + 0x20);
    pcVar8 = *(code **)(param_3 + 0x38);
    if (lVar6 == 0) {
      if (pcVar8 != (code *)0x0) goto LAB_005c4410;
      if ((*(long *)(param_3 + 0x28) == 0) && (*(long *)(param_3 + 0x30) == 0)) goto LAB_005c4448;
    }
    else if (pcVar8 != (code *)0x0) {
LAB_005c4410:
      pcVar5 = *(code **)(param_3 + 0x28);
      if (pcVar5 != (code *)0x0) goto LAB_005c4464;
      if (*(long *)(param_3 + 0x30) != 0) goto LAB_005c4564;
    }
LAB_005c4440:
    uVar3 = 0xfffffffe;
  }
LAB_005c4598:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


// ===== 005c45cc  ma_channel_map_copy_or_default =====

void ma_channel_map_copy_or_default(undefined1 *param_1,long param_2,void *param_3,uint param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 uVar5;
  char cVar6;
  
  if ((param_1 != (undefined1 *)0x0) && (param_4 != 0)) {
    if (param_3 != (void *)0x0) {
      memcpy(param_1,param_3,(ulong)param_4);
      return;
    }
    if (param_2 != 0) {
      uVar3 = (ulong)(param_4 - 1);
      uVar2 = param_2 - 1U;
      if (uVar3 <= param_2 - 1U) {
        uVar2 = uVar3;
      }
      uVar5 = (undefined1)(0x202020202020102 >> (((ulong)param_4 & 7) << 3));
      if (7 < param_4) {
        uVar5 = 2;
      }
      *param_1 = uVar5;
      if (uVar2 != 0) {
        uVar5 = (undefined1)(0x3030303030301 >> ((uVar3 & 7) << 3));
        if (6 < param_4 - 1) {
          uVar5 = 3;
        }
        param_1[1] = uVar5;
        if (uVar2 != 1) {
          lVar4 = 0;
          uVar3 = 0x10;
          do {
            uVar1 = lVar4 + 2;
            if ((int)param_4 < 4) {
              if (param_4 == 1) {
                cVar6 = '\x01';
              }
              else if (param_4 == 2) {
LAB_005c474c:
                cVar6 = '\0';
              }
              else {
                if (param_4 != 3) goto LAB_005c4724;
                cVar6 = (char)uVar1 + '\x02';
              }
            }
            else if ((int)param_4 < 6) {
              if (param_4 == 4) {
                cVar6 = (char)(0xa040302 >> (ulong)((uint)uVar3 & 0x1f));
              }
              else if (param_4 == 5) {
                cVar6 = (char)(0x706040302 >> (uVar3 & 0x3f));
              }
              else {
LAB_005c4724:
                if (uVar1 < 8) {
                  cVar6 = (char)(0xc0b070605040302 >> (uVar3 & 0x3f));
                }
                else {
                  if (0x1f < uVar1) goto LAB_005c474c;
                  cVar6 = (char)uVar1 + '\f';
                }
              }
            }
            else if (param_4 == 6) {
              cVar6 = (char)(0xc0b05040302 >> (uVar3 & 0x3f));
            }
            else {
              if (param_4 != 7) goto LAB_005c4724;
              cVar6 = (char)(0xc0b0a05040302 >> (uVar3 & 0x3f));
            }
            param_1[lVar4 + 2] = cVar6;
            lVar4 = lVar4 + 1;
            uVar3 = uVar3 + 8;
          } while (uVar2 - 1 != lVar4);
        }
      }
    }
  }
  return;
}


// ===== 005c4754  ma_device_uninit =====

void ma_device_uninit(long *param_1)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  if ((param_1 != (long *)0x0) && ((int)param_1[2] != 0)) {
    *(undefined4 *)(param_1 + 2) = 0;
    lVar2 = *param_1;
    if (((*(long *)(lVar2 + 0x40) != 0) || (*(long *)(lVar2 + 0x48) != 0)) ||
       (*(long *)(lVar2 + 0x50) != 0)) {
      pthread_mutex_lock((pthread_mutex_t *)((long)param_1 + 100));
      *(undefined4 *)(param_1 + 0xc) = 1;
      pthread_cond_signal((pthread_cond_t *)((long)param_1 + 0x8c));
      pthread_mutex_unlock((pthread_mutex_t *)((long)param_1 + 100));
      pthread_join(param_1[0x2f],(void **)0x0);
      lVar2 = *param_1;
    }
    if (*(code **)(lVar2 + 0x28) != (code *)0x0) {
      (**(code **)(lVar2 + 0x28))(param_1);
    }
    pthread_cond_destroy((pthread_cond_t *)((long)param_1 + 0x144));
    pthread_mutex_destroy((pthread_mutex_t *)((long)param_1 + 0x11c));
    pthread_cond_destroy((pthread_cond_t *)(param_1 + 0x1d));
    pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x18));
    pthread_cond_destroy((pthread_cond_t *)((long)param_1 + 0x8c));
    pthread_mutex_destroy((pthread_mutex_t *)((long)param_1 + 100));
    pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 7));
    lVar2 = *param_1;
    if (((((*(long *)(lVar2 + 0x40) == 0) && (*(long *)(lVar2 + 0x48) == 0)) &&
         ((*(long *)(lVar2 + 0x50) == 0 &&
          (((int)param_1[1] == 3 && (*(char *)((long)param_1 + 500) != '\0')))))) &&
        (*(long *)(param_1[0x3b] + -8) != 0)) && ((code *)param_1[0x42] != (code *)0x0)) {
      (*(code *)param_1[0x42])(*(long *)(param_1[0x3b] + -8),param_1[0x3f]);
    }
    uVar1 = *(uint *)(param_1 + 1);
    if (uVar1 - 2 < 3) {
      ma_data_converter_uninit(param_1 + 0x182,*param_1 + 0x120);
      uVar1 = *(uint *)(param_1 + 1);
    }
    if ((uVar1 | 2) == 3) {
      ma_data_converter_uninit(param_1 + 0xcf,*param_1 + 0x120);
    }
    if (param_1[0xf8] != 0) {
      pcVar3 = *(code **)(*param_1 + 0x138);
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(param_1[0xf8],*(undefined8 *)(*param_1 + 0x120));
      }
    }
    if (param_1[0x1a9] != 0) {
      pcVar3 = *(code **)(*param_1 + 0x138);
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(param_1[0x1a9],*(undefined8 *)(*param_1 + 0x120));
      }
    }
    if (param_1[0xf6] != 0) {
      pcVar3 = *(code **)(*param_1 + 0x138);
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(param_1[0xf6],*(undefined8 *)(*param_1 + 0x120));
      }
    }
    if (*(char *)((long)param_1 + 0x184) != '\0') {
      lVar2 = *param_1;
      uVar4 = *(undefined8 *)(lVar2 + 0x120);
      pcVar3 = *(code **)(lVar2 + 0x138);
      if (*(code **)(lVar2 + 8) != (code *)0x0) {
        (**(code **)(lVar2 + 8))(lVar2);
      }
      pthread_mutex_destroy((pthread_mutex_t *)(lVar2 + 0x140));
      pthread_mutex_destroy((pthread_mutex_t *)(lVar2 + 0x168));
      if ((*(long *)(lVar2 + 0x1a0) != 0) && (*(code **)(lVar2 + 0x138) != (code *)0x0)) {
        (**(code **)(lVar2 + 0x138))(*(long *)(lVar2 + 0x1a0),*(undefined8 *)(lVar2 + 0x120));
      }
      if (*(long *)(lVar2 + 0x70) == lVar2 + 0x78) {
        pthread_mutex_destroy((pthread_mutex_t *)(lVar2 + 0xe0));
      }
      if ((*param_1 != 0) && (pcVar3 != (code *)0x0)) {
        (*pcVar3)(*param_1,uVar4);
      }
    }
    memset(param_1,0,0xeb0);
    return;
  }
  return;
}


// ===== 005c4994  ma_silence_pcm_frames =====

void ma_silence_pcm_frames(void *param_1,long param_2,uint param_3,uint param_4)

{
  size_t __n;
  ulong uVar1;
  
  if (param_3 == 1) {
    if ((ulong)param_4 * param_2 != 0) {
      memset(param_1,0x80,(ulong)param_4 * param_2);
      return;
    }
  }
  else {
    for (uVar1 = (ulong)(*(int *)(&DAT_00281c10 + (ulong)param_3 * 4) * param_4) * param_2;
        uVar1 != 0; uVar1 = uVar1 - __n) {
      __n = uVar1;
      if (0xfffffffe < uVar1) {
        __n = 0xffffffff;
      }
      if (param_1 != (void *)0x0) {
        memset(param_1,0,__n);
      }
      param_1 = (void *)((long)param_1 + __n);
    }
  }
  return;
}


// ===== 005c4a30  FUN_005c4a30 =====

undefined8 FUN_005c4a30(long *param_1)

{
  pthread_mutex_t *__mutex;
  pthread_mutex_t *__mutex_00;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  uint uVar11;
  long lVar12;
  code *pcVar13;
  uint uVar14;
  pthread_mutex_t *__mutex_01;
  pthread_cond_t *__cond;
  uint uVar15;
  ulong local_4098;
  ulong local_4090;
  ulong local_4088;
  ulong local_4080;
  uint local_4074;
  undefined1 auStack_4070 [4096];
  int local_3070 [1024];
  undefined1 auStack_2070 [4096];
  long *local_1070;
  undefined8 local_1068;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  __mutex = (pthread_mutex_t *)((long)param_1 + 0x11c);
  *(undefined4 *)(param_1 + 2) = 1;
  pthread_mutex_lock(__mutex);
  *(undefined4 *)(param_1 + 0x23) = 1;
  pthread_cond_signal((pthread_cond_t *)((long)param_1 + 0x144U));
  pthread_mutex_unlock(__mutex);
  __mutex_00 = (pthread_mutex_t *)(param_1 + 0x18);
  while( true ) {
    pthread_mutex_lock((pthread_mutex_t *)((long)param_1 + 100));
    iVar8 = (int)param_1[0xc];
    while (iVar8 == 0) {
      pthread_cond_wait((pthread_cond_t *)((long)param_1 + 0x8c),
                        (pthread_mutex_t *)((long)param_1 + 100));
      iVar8 = (int)param_1[0xc];
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    uVar7 = pthread_mutex_unlock((pthread_mutex_t *)((long)param_1 + 100));
    plVar10 = (long *)(ulong)uVar7;
    *(undefined4 *)(param_1 + 0x30) = 0;
    if ((int)param_1[2] == 0) break;
    if ((*(code **)(*param_1 + 0x30) == (code *)0x0) ||
       (iVar8 = (**(code **)(*param_1 + 0x30))(param_1), iVar8 == 0)) {
      *(undefined4 *)(param_1 + 2) = 2;
      pthread_mutex_lock(__mutex_00);
      *(undefined4 *)((long)param_1 + 0xbc) = 1;
      pthread_cond_signal((pthread_cond_t *)(param_1 + 0x1d));
      pthread_mutex_unlock(__mutex_00);
      local_1068 = 0;
      local_1070 = param_1;
      if ((code *)param_1[4] != (code *)0x0) {
        (*(code *)param_1[4])(&local_1070);
        if (((code *)local_1070[5] != (code *)0x0) && ((int)local_1068 == 1)) {
          (*(code *)local_1070[5])();
        }
      }
      lVar12 = *param_1;
      if (*(code **)(lVar12 + 0x50) == (code *)0x0) {
        if (*(uint *)(param_1 + 1) - 2 < 3) {
          if (*(long *)(lVar12 + 0x40) == 0) goto LAB_005c4ed0;
          uVar11 = *(int *)(&DAT_00281c10 + (ulong)*(uint *)((long)param_1 + 0xaf4) * 4) *
                   (int)param_1[0x15f];
          uVar7 = 0;
          if (uVar11 != 0) {
            uVar7 = 0x1000 / uVar11;
          }
        }
        else {
          uVar7 = 0;
        }
        if ((*(uint *)(param_1 + 1) | 2) == 3) {
          if (*(long *)(lVar12 + 0x48) == 0) goto LAB_005c4ed0;
          uVar1 = *(int *)(&DAT_00281c10 + (ulong)*(uint *)((long)param_1 + 0x55c) * 4) *
                  (int)param_1[0xac];
          uVar11 = 0;
          if (uVar1 != 0) {
            uVar11 = 0x1000 / uVar1;
          }
        }
        else {
          uVar11 = 0;
        }
        if ((int)param_1[2] == 2) {
LAB_005c4c40:
          iVar8 = (int)param_1[1];
          bVar6 = false;
          if (iVar8 < 3) {
            if (iVar8 == 1) {
              uVar1 = *(uint *)(param_1 + 0xcd);
              if (uVar1 != 0) {
                uVar15 = 0;
                do {
                  uVar14 = uVar1 - uVar15;
                  if (uVar11 <= uVar1 - uVar15) {
                    uVar14 = uVar11;
                  }
                  FUN_005b8588(param_1,uVar14,auStack_2070);
                  iVar8 = (**(code **)(*param_1 + 0x48))(param_1,auStack_2070,uVar14,local_3070);
                  if (iVar8 != 0) goto LAB_005c4eb4;
                } while ((local_3070[0] != 0) && (uVar15 = local_3070[0] + uVar15, uVar15 < uVar1));
              }
LAB_005c4eac:
              bVar6 = false;
            }
            else if (iVar8 == 2) goto LAB_005c4ddc;
          }
          else {
            if (iVar8 == 4) {
LAB_005c4ddc:
              uVar1 = *(uint *)(param_1 + 0x180);
              if (uVar1 != 0) {
                uVar15 = 0;
                do {
                  uVar14 = uVar1 - uVar15;
                  if (uVar7 <= uVar1 - uVar15) {
                    uVar14 = uVar7;
                  }
                  iVar8 = (**(code **)(*param_1 + 0x40))(param_1,&local_1070,uVar14,local_3070);
                  if (iVar8 != 0) goto LAB_005c4eb4;
                  if (local_3070[0] == 0) break;
                  FUN_005b8440(param_1,local_3070[0],&local_1070);
                  uVar15 = local_3070[0] + uVar15;
                } while (uVar15 < uVar1);
              }
              goto LAB_005c4eac;
            }
            if (iVar8 == 3) {
              uVar1 = *(uint *)(param_1 + 0x180);
              if (*(uint *)(param_1 + 0xcd) <= *(uint *)(param_1 + 0x180)) {
                uVar1 = *(uint *)(param_1 + 0xcd);
              }
              if (uVar1 == 0) goto LAB_005c4eac;
              bVar6 = false;
              uVar15 = 0;
              do {
                uVar14 = uVar1 - uVar15;
                if (uVar7 <= uVar1 - uVar15) {
                  uVar14 = uVar7;
                }
                iVar8 = (**(code **)(*param_1 + 0x40))(param_1,&local_1070,uVar14,&local_4074);
                if (iVar8 != 0) goto LAB_005c4eb4;
                iVar8 = 0;
                uVar14 = local_4074;
                while( true ) {
                  uVar2 = *(int *)(&DAT_00281c10 + (ulong)*(uint *)((long)param_1 + 0x9ec) * 4) *
                          (int)param_1[0x13e];
                  uVar3 = 0;
                  if (uVar2 != 0) {
                    uVar3 = 0x1000 / uVar2;
                  }
                  uVar2 = *(int *)(&DAT_00281c10 + (ulong)*(uint *)((long)param_1 + 0x454) * 4) *
                          (int)param_1[0x8b];
                  uVar4 = 0;
                  if (uVar2 != 0) {
                    uVar4 = 0x1000 / uVar2;
                  }
                  if (uVar4 <= uVar3) {
                    uVar3 = uVar4;
                  }
                  local_4080 = (ulong)uVar3;
                  local_4088 = (ulong)uVar14;
                  iVar9 = ma_data_converter_process_pcm_frames
                                    (param_1 + 0x182,
                                     (long)&local_1070 +
                                     (ulong)(uint)((int)param_1[0x15f] * iVar8 *
                                                  *(int *)(&DAT_00281c10 +
                                                          (ulong)*(uint *)((long)param_1 + 0xaf4) *
                                                          4)),&local_4088,local_3070,&local_4080);
                  if ((iVar9 != 0) || (local_4080 == 0)) break;
                  FUN_005b8168(param_1,auStack_4070,local_3070);
                  iVar8 = iVar8 + (int)local_4088;
                  uVar14 = uVar14 - (int)local_4088;
                  do {
                    local_4098 = (ulong)uVar11;
                    local_4090 = local_4080;
                    iVar9 = ma_data_converter_process_pcm_frames
                                      (param_1 + 0xcf,auStack_4070,&local_4090,auStack_2070,
                                       &local_4098);
                    if ((iVar9 != 0) ||
                       (iVar9 = (**(code **)(*param_1 + 0x48))
                                          (param_1,auStack_2070,local_4098 & 0xffffffff,0),
                       iVar9 != 0)) {
                      bVar6 = true;
                      goto LAB_005c4dc8;
                    }
                    local_4080 = local_4080 - (local_4090 & 0xffffffff);
                  } while (local_4080 != 0);
                }
LAB_005c4dc8:
              } while ((iVar8 != 0) && (uVar15 = iVar8 + uVar15, uVar15 < uVar1));
            }
          }
          goto LAB_005c4eb8;
        }
      }
      else {
        (**(code **)(lVar12 + 0x50))(param_1);
      }
LAB_005c4ed0:
      if ((*(code **)(*param_1 + 0x38) == (code *)0x0) ||
         (plVar10 = (long *)(**(code **)(*param_1 + 0x38))(param_1), (int)plVar10 == 0)) {
        bVar6 = true;
        local_1068 = 1;
        if ((code *)param_1[4] == (code *)0x0) {
          pcVar13 = (code *)param_1[5];
          plVar10 = param_1;
        }
        else {
          local_1070 = param_1;
          (*(code *)param_1[4])(&local_1070);
          bVar6 = (int)local_1068 == 1;
          pcVar13 = (code *)local_1070[5];
          plVar10 = local_1070;
        }
        local_1070 = plVar10;
        if ((pcVar13 != (code *)0x0) && (bVar6)) {
          plVar10 = (long *)(*pcVar13)();
        }
      }
      if ((int)param_1[2] == 0) break;
      *(undefined4 *)(param_1 + 2) = 1;
      plVar10 = param_1 + 0x23;
      __mutex_01 = __mutex;
      __cond = (pthread_cond_t *)((long)param_1 + 0x144U);
    }
    else {
      *(int *)(param_1 + 0x30) = iVar8;
      plVar10 = (long *)((long)param_1 + 0xbc);
      __mutex_01 = __mutex_00;
      __cond = (pthread_cond_t *)(param_1 + 0x1d);
    }
    pthread_mutex_lock(__mutex_01);
    *(undefined4 *)plVar10 = 1;
    pthread_cond_signal(__cond);
    pthread_mutex_unlock(__mutex_01);
  }
  if (*(long *)(lVar5 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(plVar10);
  }
  return 0;
LAB_005c4eb4:
  bVar6 = true;
LAB_005c4eb8:
  if (((int)param_1[2] != 2) || (bVar6)) goto LAB_005c4ed0;
  goto LAB_005c4c40;
}


// ===== 005c4f98  ma_duplex_rb_init =====

int ma_duplex_rb_init(uint param_1,int param_2,uint param_3,uint param_4,int param_5,
                     undefined8 param_6,undefined8 *param_7)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  
  iVar3 = -2;
  if (((param_3 != 0) && (param_4 != 0)) && (param_5 != 0)) {
    uVar4 = param_5 * 5;
    uVar6 = (ulong)uVar4;
    if (param_3 != param_4) {
      uVar7 = 0;
      if ((ulong)param_4 != 0) {
        uVar7 = (uVar6 * param_3) / (ulong)param_4;
      }
      uVar5 = 0;
      if (param_3 != 0) {
        uVar5 = param_4 / param_3;
      }
      uVar2 = 0;
      if ((ulong)param_3 != 0) {
        uVar2 = (uVar7 * uVar5) / (ulong)param_3;
      }
      uVar4 = (uint)uVar7;
      if (uVar2 + uVar7 * (param_4 - uVar5 * param_3) <= uVar6) {
        uVar4 = uVar4 + 1;
      }
    }
    iVar3 = -2;
    if ((param_7 != (undefined8 *)0x0) && (uVar4 != 0)) {
      param_7[0x12] = 0;
      param_7[1] = 0;
      *param_7 = 0;
      param_7[3] = 0;
      param_7[2] = 0;
      iVar1 = *(int *)(&DAT_00281c10 + (ulong)param_1 * 4);
      param_7[7] = 0;
      param_7[6] = 0;
      param_7[9] = 0;
      param_7[8] = 0;
      param_7[0xb] = 0;
      param_7[10] = 0;
      param_7[0xd] = 0;
      param_7[0xc] = 0;
      iVar3 = iVar1 * param_2;
      param_7[0xf] = 0;
      param_7[0xe] = 0;
      param_7[0x11] = 0;
      param_7[0x10] = 0;
      param_7[5] = 0;
      param_7[4] = 0;
      if (iVar3 == 0) {
        iVar3 = -2;
      }
      else {
        iVar3 = ma_rb_init_ex(iVar3 * uVar4,1,0,0,param_6,param_7 + 9);
        if (iVar3 == 0) {
          *param_7 = &PTR_FUN_006867e0;
          *(uint *)(param_7 + 0x11) = param_1;
          *(int *)((long)param_7 + 0x8c) = param_2;
          *(undefined4 *)(param_7 + 0x12) = 0;
          param_7[2] = 0;
          param_7[1] = 0;
          param_7[4] = 0;
          param_7[3] = 0;
          param_7[6] = 0;
          param_7[5] = 0;
          param_7[8] = 0;
          param_7[7] = 0;
          param_7[2] = 0xffffffffffffffff;
          param_7[4] = 0xffffffffffffffff;
          param_7[5] = param_7;
          param_7[6] = 0;
          param_7[7] = 0;
          uVar6 = (ulong)(uint)(param_5 * param_2 * iVar1 * 2);
          uVar4 = (uint)*(ulong *)((long)param_7 + 0x5c) & 0x80000000;
          uVar5 = (uint)param_7[0xc] & 0x80000000;
          uVar7 = param_7[0xc] & 0x7fffffff;
          if (uVar4 == uVar5) {
            uVar7 = uVar7 + uVar6;
            uVar5 = uVar4;
            if (*(uint *)(param_7 + 10) <= uVar7) {
              uVar7 = (ulong)((int)uVar7 - *(uint *)(param_7 + 10));
              uVar5 = uVar4 ^ 0x80000000;
            }
          }
          else {
            uVar6 = uVar6 + uVar7;
            uVar7 = *(ulong *)((long)param_7 + 0x5c) & 0x7fffffff;
            uVar4 = (uint)uVar7;
            if (uVar6 <= uVar7) {
              uVar4 = (uint)uVar6;
            }
            uVar7 = (ulong)uVar4;
          }
          FUN_003410a0((uint)uVar7 | uVar5,param_7 + 0xc);
          iVar3 = 0;
        }
      }
    }
  }
  return iVar3;
}


// ===== 005c5140  ma_device_get_name =====

void ma_device_get_name(undefined8 param_1,undefined8 param_2,char *param_3,long param_4,
                       size_t *param_5)

{
  long lVar1;
  ulong uVar2;
  size_t sVar3;
  undefined1 auStack_650 [256];
  char acStack_550 [1288];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_5 != (size_t *)0x0) {
    *param_5 = 0;
  }
  if ((param_3 != (char *)0x0) && (param_4 != 0)) {
    *param_3 = '\0';
  }
  uVar2 = ma_device_get_info(param_1,param_2,auStack_650);
  if ((int)uVar2 == 0) {
    if (param_3 == (char *)0x0) {
      if (param_5 == (size_t *)0x0) goto LAB_005c51e0;
      param_3 = acStack_550;
    }
    else {
      uVar2 = uVar2 & 0xffffffff;
      ma_strncpy_s(param_3,param_4,acStack_550,0xffffffffffffffff);
      if (param_5 == (size_t *)0x0) goto LAB_005c51e0;
    }
    uVar2 = uVar2 & 0xffffffff;
    sVar3 = strlen(param_3);
    *param_5 = sVar3;
  }
LAB_005c51e0:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


// ===== 005c520c  ma_get_format_name =====

char * ma_get_format_name(uint param_1)

{
  if (param_1 < 6) {
    return (&PTR_s_Unknown_00679c20)[param_1];
  }
  return "Invalid";
}


// ===== 005c5230  ma_channel_map_to_string =====

ulong ma_channel_map_to_string(byte *param_1,uint param_2,void *param_3,ulong param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (param_2 == 0) {
    uVar4 = 0;
    goto LAB_005c52d8;
  }
  if (param_1 == (byte *)0x0) {
    uVar3 = 1;
    if (param_2 != 1) {
      uVar3 = 2;
    }
    uVar2 = param_2;
    if (param_2 != 2) {
      uVar2 = uVar3;
    }
    uVar4 = (ulong)uVar2;
LAB_005c5298:
    pcVar6 = (&PTR_s_CHANNEL_NONE_00679c50)[uVar4 & 0xff];
  }
  else {
    uVar4 = (ulong)*param_1;
    if (*param_1 < 0x34) goto LAB_005c5298;
    pcVar6 = "UNKNOWN";
  }
  uVar4 = strlen(pcVar6);
  if ((param_3 != (void *)0x0) && (uVar4 < param_4)) {
    memcpy(param_3,pcVar6,uVar4);
  }
  if (param_2 == 1) goto LAB_005c52d8;
  uVar8 = uVar4 + 1;
  if ((param_3 != (void *)0x0) && (uVar8 < param_4)) {
    *(undefined1 *)((long)param_3 + uVar4) = 0x20;
  }
  if (param_1 == (byte *)0x0) {
    uVar3 = 3;
    if (param_2 == 1) {
      uVar3 = 1;
    }
    uVar2 = 3;
    if (param_2 != 2) {
      uVar2 = uVar3;
    }
code_r0x005c5358:
    pcVar6 = (&PTR_s_CHANNEL_NONE_00679c50)[uVar2];
  }
  else {
    uVar2 = (uint)param_1[1];
    if (param_1[1] < 0x34) goto code_r0x005c5358;
    pcVar6 = "UNKNOWN";
  }
  sVar1 = strlen(pcVar6);
  uVar4 = sVar1 + uVar8;
  if ((param_3 != (void *)0x0) && (uVar4 < param_4)) {
    memcpy((void *)((long)param_3 + uVar8),pcVar6,sVar1);
  }
  if (param_2 < 3) {
    uVar8 = uVar4;
    if (param_2 == 2) goto LAB_005c52d8;
  }
  else {
    uVar8 = uVar4 + 1;
    if ((param_3 != (void *)0x0) && (uVar8 < param_4)) {
      *(undefined1 *)((long)param_3 + uVar4) = 0x20;
    }
  }
  uVar4 = uVar8;
  uVar7 = 2;
  uVar8 = 0x10;
  do {
    if (param_1 != (byte *)0x0) {
      uVar3 = (uint)param_1[uVar7];
      goto LAB_005c53e0;
    }
    uVar3 = (uint)uVar7;
    if (uVar3 < param_2) {
      if ((int)param_2 < 4) {
        if (param_2 != 1) {
          if (param_2 != 2) {
            if (param_2 != 3) goto LAB_005c547c;
            uVar3 = (uVar3 & 0xff) + 2;
            goto LAB_005c53e0;
          }
          goto LAB_005c54e4;
        }
        uVar3 = 1;
        goto code_r0x005c54ec;
      }
      if ((int)param_2 < 6) {
        if (param_2 == 4) {
          uVar3 = 0xa040302U >> (ulong)((uint)uVar8 & 0x1f) & 0xff;
        }
        else {
          if (param_2 == 5) {
            uVar5 = 0x706040302;
            goto LAB_005c54c4;
          }
LAB_005c547c:
          if (uVar3 < 8) {
            uVar3 = (uint)(0xc0b070605040302 >> (uVar8 & 0x38)) & 0xf;
          }
          else {
            if (0x1f < uVar3) goto LAB_005c54e4;
            uVar3 = (uVar3 & 0xff) + 0xc;
          }
        }
      }
      else {
        if (param_2 == 6) {
          uVar5 = 0xc0b05040302;
        }
        else {
          if (param_2 != 7) goto LAB_005c547c;
          uVar5 = 0xc0b0a05040302;
        }
LAB_005c54c4:
        uVar3 = (uint)(uVar5 >> (uVar8 & 0x3f)) & 0xff;
      }
LAB_005c53e0:
      pcVar6 = "UNKNOWN";
      if (uVar3 < 0x34) goto code_r0x005c54ec;
    }
    else {
LAB_005c54e4:
      uVar3 = 0;
code_r0x005c54ec:
      pcVar6 = (&PTR_s_CHANNEL_NONE_00679c50)[uVar3];
    }
    sVar1 = strlen(pcVar6);
    uVar5 = sVar1 + uVar4;
    if ((param_3 != (void *)0x0) && (uVar5 < param_4)) {
      memcpy((void *)((long)param_3 + uVar4),pcVar6,sVar1);
    }
    uVar7 = uVar7 + 1;
    uVar4 = uVar5;
    if (((uVar7 < param_2) && (uVar4 = uVar5 + 1, param_3 != (void *)0x0)) && (uVar4 < param_4)) {
      *(undefined1 *)((long)param_3 + uVar5) = 0x20;
    }
    uVar8 = uVar8 + 8;
  } while (param_2 != uVar7);
LAB_005c52d8:
  if ((param_3 != (void *)0x0) && (uVar4 + 1 < param_4)) {
    *(undefined1 *)((long)param_3 + uVar4) = 0;
  }
  return uVar4;
}


// ===== 005c5544  ma_channel_position_to_string =====

char * ma_channel_position_to_string(byte param_1)

{
  if (param_1 < 0x34) {
    return (&PTR_s_CHANNEL_NONE_00679c50)[param_1];
  }
  return "UNKNOWN";
}


// ===== 005c5570  ma_rb_init_ex =====

undefined4
ma_rb_init_ex(long param_1,ulong param_2,undefined4 param_3,long param_4,long *param_5,long *param_6
             )

{
  uint uVar1;
  void *__s;
  int iVar2;
  long lVar3;
  long *plVar4;
  size_t __n;
  long lVar5;
  long lVar6;
  
  if (param_6 == (long *)0x0) {
    return 0xfffffffe;
  }
  if (param_1 - 0x7fffffe1U < 0xffffffff80000020) {
    return 0xfffffffe;
  }
  if (param_2 == 0) {
    return 0xfffffffe;
  }
  param_6[7] = 0;
  param_6[6] = 0;
  param_6[1] = 0;
  *param_6 = 0;
  param_6[3] = 0;
  param_6[2] = 0;
  plVar4 = param_6 + 4;
  param_6[5] = 0;
  *plVar4 = 0;
  iVar2 = (int)param_1;
  if (param_5 == (long *)0x0) {
code_r0x005c5690:
    param_6[5] = (long)malloc;
    param_6[6] = (long)realloc;
    param_6[7] = (long)free;
    *(int *)(param_6 + 1) = iVar2;
    *(int *)((long)param_6 + 0xc) = (int)param_2;
  }
  else {
    if (*param_5 == 0) {
      if (param_5[3] == 0) {
        if (param_5[1] != 0) {
          return 0xfffffffe;
        }
        if (param_5[2] != 0) {
          return 0xfffffffe;
        }
        goto code_r0x005c5690;
      }
    }
    else if (param_5[3] == 0) {
      return 0xfffffffe;
    }
    if ((param_5[1] == 0) && (param_5[2] == 0)) {
      return 0xfffffffe;
    }
    lVar6 = *param_5;
    lVar5 = param_5[3];
    lVar3 = param_5[2];
    param_6[5] = param_5[1];
    *plVar4 = lVar6;
    param_6[7] = lVar5;
    param_6[6] = lVar3;
    *(int *)(param_6 + 1) = iVar2;
    *(int *)((long)param_6 + 0xc) = (int)param_2;
  }
  if (param_4 != 0) {
    *(undefined4 *)(param_6 + 2) = param_3;
    *param_6 = param_4;
    return 0;
  }
  uVar1 = iVar2 + 0x1fU & 0xffffffdf;
  *(uint *)(param_6 + 2) = uVar1;
  if ((code *)param_6[5] != (code *)0x0) {
    __n = (param_2 & 0xffffffff) * (ulong)uVar1;
    lVar3 = (*(code *)param_6[5])(__n + 0x27,*plVar4);
    if (lVar3 != 0) {
      __s = (void *)(lVar3 + 0x27U & 0xffffffffffffffe0);
      *(long *)((long)__s + -8) = lVar3;
      *param_6 = (long)__s;
      if (__s == (void *)0x0) {
        return 0xfffffffc;
      }
      if (__n != 0) {
        memset(__s,0,__n);
      }
      *(undefined1 *)((long)param_6 + 0x1c) = 1;
      return 0;
    }
  }
  *param_6 = 0;
  return 0xfffffffc;
}


// ===== 005c56c8  FUN_005c56c8 =====

undefined8 FUN_005c56c8(long param_1,long param_2,ulong param_3,ulong *param_4)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  size_t sVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  void *pvVar10;
  void *__dest;
  ulong uVar11;
  
  uVar11 = 0;
  if ((param_3 != 0) && (param_1 != 0)) {
    uVar11 = 0;
    do {
      uVar9 = param_3 - uVar11;
      uVar8 = (uint)*(undefined8 *)(param_1 + 0x5c);
      uVar7 = (uint)*(undefined8 *)(param_1 + 0x60);
      if (0xfffffffe < uVar9) {
        uVar9 = 0xffffffff;
      }
      if ((int)(uVar8 ^ uVar7) < 0) {
        uVar7 = *(uint *)(param_1 + 0x50);
      }
      else {
        uVar7 = uVar7 & 0x7fffffff;
      }
      uVar7 = uVar7 - (uVar8 & 0x7fffffff);
      uVar8 = *(int *)(param_1 + 0x8c) * (int)uVar9 *
              *(int *)(&DAT_00281c10 + (ulong)*(uint *)(param_1 + 0x88) * 4);
      iVar6 = *(int *)(param_1 + 0x8c);
      iVar5 = *(int *)(&DAT_00281c10 + (ulong)*(uint *)(param_1 + 0x88) * 4);
      if (uVar7 <= uVar8) {
        uVar8 = uVar7;
      }
      uVar7 = iVar5 * iVar6;
      if (uVar8 < uVar7) break;
      uVar3 = 0;
      if (uVar7 != 0) {
        uVar3 = uVar8 / uVar7;
      }
      __dest = (void *)(param_2 + uVar11 * uVar7);
      pvVar10 = (void *)(*(long *)(param_1 + 0x48) + (*(ulong *)(param_1 + 0x5c) & 0x7fffffff));
      if (__dest != pvVar10) {
        uVar9 = (ulong)uVar7 * (ulong)uVar3;
        do {
          sVar4 = uVar9;
          if (0xfffffffe < uVar9) {
            sVar4 = 0xffffffff;
          }
          memcpy(__dest,pvVar10,sVar4);
          uVar9 = uVar9 - sVar4;
          __dest = (void *)((long)__dest + sVar4);
          pvVar10 = (void *)((long)pvVar10 + sVar4);
        } while (uVar9 != 0);
        iVar6 = *(int *)(param_1 + 0x8c);
        iVar5 = *(int *)(&DAT_00281c10 + (ulong)*(uint *)(param_1 + 0x88) * 4);
      }
      uVar7 = (uint)*(undefined8 *)(param_1 + 0x5c);
      uVar8 = (uVar7 & 0x7fffffff) + iVar6 * uVar3 * iVar5;
      if (*(uint *)(param_1 + 0x50) < uVar8) break;
      uVar7 = uVar7 & 0x80000000;
      uVar1 = uVar7 ^ 0x80000000;
      if (uVar8 != *(uint *)(param_1 + 0x50)) {
        uVar1 = uVar8 | uVar7;
      }
      FUN_003410a0(uVar1);
      uVar11 = uVar11 + uVar3;
    } while (uVar11 < param_3);
  }
  lVar2 = param_3 - uVar11;
  if (uVar11 <= param_3 && lVar2 != 0) {
    uVar9 = (ulong)(*(int *)(&DAT_00281c10 + (ulong)*(uint *)(param_1 + 0x88) * 4) *
                   *(uint *)(param_1 + 0x8c));
    pvVar10 = (void *)(param_2 + uVar11 * uVar9);
    uVar11 = param_3;
    if (*(uint *)(param_1 + 0x88) == 1) {
      sVar4 = lVar2 * (ulong)*(uint *)(param_1 + 0x8c);
      if (sVar4 != 0) {
        memset(pvVar10,0x80,sVar4);
      }
    }
    else {
      for (uVar9 = lVar2 * uVar9; uVar9 != 0; uVar9 = uVar9 - sVar4) {
        sVar4 = uVar9;
        if (0xfffffffe < uVar9) {
          sVar4 = 0xffffffff;
        }
        if (pvVar10 != (void *)0x0) {
          memset(pvVar10,0,sVar4);
        }
        pvVar10 = (void *)((long)pvVar10 + sVar4);
      }
    }
  }
  *param_4 = uVar11;
  return 0;
}


// ===== 005c58d4  FUN_005c58d4 =====

undefined8
FUN_005c58d4(long param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined1 *param_5,long param_6)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  char cVar4;
  long lVar5;
  undefined1 uVar6;
  ulong uVar7;
  
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x88);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x8c);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_1 + 0x90);
  }
  if ((param_5 != (undefined1 *)0x0) && (param_6 != 0)) {
    uVar3 = *(uint *)(param_1 + 0x8c);
    if (uVar3 != 0) {
      uVar2 = param_6 - 1U;
      if ((ulong)(uVar3 - 1) <= param_6 - 1U) {
        uVar2 = (ulong)(uVar3 - 1);
      }
      uVar6 = (undefined1)(0x202020202020102 >> (((ulong)uVar3 & 7) << 3));
      if (7 < uVar3) {
        uVar6 = 2;
      }
      *param_5 = uVar6;
      if (uVar2 != 0) {
        uVar6 = (undefined1)(0x3030303030301 >> (((ulong)(uVar3 - 1) & 7) << 3));
        if (6 < uVar3 - 1) {
          uVar6 = 3;
        }
        param_5[1] = uVar6;
        if (uVar2 != 1) {
          lVar5 = 0;
          uVar7 = 0x10;
          do {
            uVar1 = lVar5 + 2;
            if ((int)uVar3 < 4) {
              if (uVar3 == 1) {
                cVar4 = '\x01';
              }
              else if (uVar3 == 2) {
LAB_005c5a70:
                cVar4 = '\0';
              }
              else {
                if (uVar3 != 3) goto LAB_005c5a48;
                cVar4 = (char)uVar1 + '\x02';
              }
            }
            else if ((int)uVar3 < 6) {
              if (uVar3 == 4) {
                cVar4 = (char)(0xa040302 >> (ulong)((uint)uVar7 & 0x1f));
              }
              else if (uVar3 == 5) {
                cVar4 = (char)(0x706040302 >> (uVar7 & 0x3f));
              }
              else {
LAB_005c5a48:
                if (uVar1 < 8) {
                  cVar4 = (char)(0xc0b070605040302 >> (uVar7 & 0x3f));
                }
                else {
                  if (0x1f < uVar1) goto LAB_005c5a70;
                  cVar4 = (char)uVar1 + '\f';
                }
              }
            }
            else if (uVar3 == 6) {
              cVar4 = (char)(0xc0b05040302 >> (uVar7 & 0x3f));
            }
            else {
              if (uVar3 != 7) goto LAB_005c5a48;
              cVar4 = (char)(0xc0b0a05040302 >> (uVar7 & 0x3f));
            }
            param_5[lVar5 + 2] = cVar4;
            lVar5 = lVar5 + 1;
            uVar7 = uVar7 + 8;
          } while (uVar2 - 1 != lVar5);
        }
      }
    }
  }
  return 0;
}


// ===== 005c5a78  ma_device_get_log =====

long * ma_device_get_log(long *param_1)

{
  if (param_1 != (long *)0x0) {
    if (*param_1 != 0) {
      return *(long **)(*param_1 + 0x70);
    }
    param_1 = (long *)0x0;
  }
  return param_1;
}


// ===== 005c5a94  ma_duplex_rb_uninit =====

undefined8 ma_duplex_rb_uninit(long param_1)

{
  long lVar1;
  
  if ((((param_1 != 0) && (*(char *)(param_1 + 100) != '\0')) &&
      (lVar1 = *(long *)(*(long *)(param_1 + 0x48) + -8), lVar1 != 0)) &&
     (*(code **)(param_1 + 0x80) != (code *)0x0)) {
    (**(code **)(param_1 + 0x80))(lVar1,*(undefined8 *)(param_1 + 0x68));
  }
  return 0;
}


// ===== 005c5ad4  ma_device_get_context =====

long * ma_device_get_context(long *param_1)

{
  if (param_1 != (long *)0x0) {
    param_1 = (long *)*param_1;
  }
  return param_1;
}


// ===== 005c5ae0  ma_device_start =====

void ma_device_start(long *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 == (long *)0x0) {
    iVar2 = -2;
    goto LAB_005c5c50;
  }
  if ((int)param_1[2] == 0) {
    iVar2 = -3;
    goto LAB_005c5c50;
  }
  if ((int)param_1[2] == 2) {
    iVar2 = 0;
    goto LAB_005c5c50;
  }
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 7));
  if ((int)param_1[2] == 2) {
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 7));
    iVar2 = 0;
    goto LAB_005c5c50;
  }
  *(undefined4 *)(param_1 + 2) = 3;
  lVar3 = *param_1;
  if (((*(long *)(lVar3 + 0x40) == 0) && (*(long *)(lVar3 + 0x48) == 0)) &&
     (*(long *)(lVar3 + 0x50) == 0)) {
    if (*(code **)(lVar3 + 0x30) == (code *)0x0) {
      iVar2 = -3;
    }
    else {
      iVar2 = (**(code **)(lVar3 + 0x30))(param_1);
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 2) = 2;
        local_40 = 0;
        local_48 = param_1;
        if ((code *)param_1[4] != (code *)0x0) {
          (*(code *)param_1[4])(&local_48);
          if (((code *)local_48[5] != (code *)0x0) && ((int)local_40 == 1)) {
            (*(code *)local_48[5])();
          }
        }
        goto LAB_005c5c40;
      }
    }
LAB_005c5bdc:
    *(undefined4 *)(param_1 + 2) = 1;
  }
  else {
    pthread_mutex_lock((pthread_mutex_t *)((long)param_1 + 100));
    *(undefined4 *)(param_1 + 0xc) = 1;
    pthread_cond_signal((pthread_cond_t *)((long)param_1 + 0x8c));
    pthread_mutex_unlock((pthread_mutex_t *)((long)param_1 + 100));
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x18));
    iVar2 = *(int *)((long)param_1 + 0xbc);
    while (iVar2 == 0) {
      pthread_cond_wait((pthread_cond_t *)(param_1 + 0x1d),(pthread_mutex_t *)(param_1 + 0x18));
      iVar2 = *(int *)((long)param_1 + 0xbc);
    }
    *(undefined4 *)((long)param_1 + 0xbc) = 0;
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x18));
    iVar2 = (int)param_1[0x30];
    if (iVar2 != 0) goto LAB_005c5bdc;
LAB_005c5c40:
    iVar2 = 0;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 7));
LAB_005c5c50:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}


// ===== 005c5c80  ma_device_get_state =====

long ma_device_get_state(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0x10);
  }
  return param_1;
}


// ===== 005c5c90  ma_device_is_started =====

ulong ma_device_is_started(ulong param_1)

{
  if (param_1 != 0) {
    param_1 = (ulong)((int)*(undefined8 *)(param_1 + 0x10) == 2);
  }
  return param_1;
}


// ===== 005c5ca8  ma_device_set_master_volume =====

undefined8 ma_device_set_master_volume(float param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffe;
  if ((param_2 != 0) && (0.0 <= param_1)) {
    uVar1 = 0;
    *(float *)(param_2 + 0x18c) = param_1;
  }
  return uVar1;
}


// ===== 005c5cd0  ma_device_get_master_volume =====

undefined8 ma_device_get_master_volume(long param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    if (param_1 != 0) {
      *param_2 = (int)*(undefined8 *)(param_1 + 0x18c);
      return 0;
    }
    *param_2 = 0;
  }
  return 0xfffffffe;
}


// ===== 005c5cfc  ma_device_set_master_volume_db =====

undefined8 ma_device_set_master_volume_db(float param_1,long param_2)

{
  undefined8 uVar1;
  double dVar2;
  
  if (param_1 != 0.0 && param_1 < 0.0 == NAN(param_1)) {
    return 0xfffffffe;
  }
  dVar2 = pow(10.0,(double)(param_1 / 20.0));
  uVar1 = 0xfffffffe;
  if ((param_2 != 0) && (0.0 <= (float)dVar2)) {
    uVar1 = 0;
    *(float *)(param_2 + 0x18c) = (float)dVar2;
  }
  return uVar1;
}


// ===== 005c5d60  ma_volume_db_to_linear =====

float ma_volume_db_to_linear(float param_1)

{
  double dVar1;
  
  dVar1 = pow(10.0,(double)(param_1 / 20.0));
  return (float)dVar1;
}


// ===== 005c5d88  ma_device_get_master_volume_db =====

undefined8 ma_device_get_master_volume_db(long param_1,float *param_2)

{
  undefined8 uVar1;
  float fVar2;
  double dVar3;
  
  if (param_2 != (float *)0x0) {
    if (param_1 == 0) {
      fVar2 = 0.0;
      uVar1 = 0xfffffffe;
    }
    else {
      dVar3 = log((double)(float)*(undefined8 *)(param_1 + 0x18c));
      uVar1 = 0;
      fVar2 = (float)(dVar3 * DAT_0024e6e0) * 20.0;
    }
    *param_2 = fVar2;
    return uVar1;
  }
  return 0xfffffffe;
}


// ===== 005c5df4  ma_volume_linear_to_db =====

float ma_volume_linear_to_db(float param_1)

{
  double dVar1;
  
  dVar1 = log((double)param_1);
  return (float)(dVar1 * DAT_0024e6e0) * 20.0;
}


// ===== 005c5e24  ma_calculate_buffer_size_in_milliseconds_from_frames =====

uint ma_calculate_buffer_size_in_milliseconds_from_frames(int param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 != 0) {
    uVar1 = 0;
    if (param_2 != 0) {
      uVar1 = ((param_2 + param_1 * 1000) - 1) / param_2;
    }
    return uVar1;
  }
  return 0;
}


// ===== 005c5e44  ma_copy_pcm_frames =====

void ma_copy_pcm_frames(void *param_1,void *param_2,long param_3,uint param_4,int param_5)

{
  size_t __n;
  ulong uVar1;
  
  if (param_1 != param_2) {
    for (uVar1 = (ulong)(uint)(*(int *)(&DAT_00281c10 + (ulong)param_4 * 4) * param_5) * param_3;
        uVar1 != 0; uVar1 = uVar1 - __n) {
      __n = uVar1;
      if (0xfffffffe < uVar1) {
        __n = 0xffffffff;
      }
      memcpy(param_1,param_2,__n);
      param_1 = (void *)((long)param_1 + __n);
      param_2 = (void *)((long)param_2 + __n);
    }
  }
  return;
}


// ===== 005c5ec0  ma_offset_pcm_frames_ptr =====

long ma_offset_pcm_frames_ptr(long param_1,long param_2,uint param_3,int param_4)

{
  return param_1 + (ulong)(uint)(*(int *)(&DAT_00281c10 + (ulong)param_3 * 4) * param_4) * param_2;
}


// ===== 005c5ed8  ma_offset_pcm_frames_const_ptr =====

long ma_offset_pcm_frames_const_ptr(long param_1,long param_2,uint param_3,int param_4)

{
  return param_1 + (ulong)(uint)(*(int *)(&DAT_00281c10 + (ulong)param_3 * 4) * param_4) * param_2;
}


// ===== 005c5ef0  ma_clip_samples_u8 =====

void ma_clip_samples_u8(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  byte *pbVar2;
  long lVar3;
  ulong *puVar4;
  undefined1 (*pauVar5) [16];
  short *psVar6;
  int iVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if (param_3 == 0) {
    return;
  }
  if ((param_3 < 8) || ((param_1 < param_2 + param_3 * 2 && (param_2 < param_1 + param_3)))) {
    uVar1 = 0;
  }
  else {
    if (param_3 < 0x20) {
      uVar8 = 0;
    }
    else {
      uVar1 = param_3 & 0xffffffffffffffe0;
      puVar4 = (ulong *)(param_1 + 0x10);
      pauVar5 = (undefined1 (*) [16])(param_2 + 0x20);
      uVar8 = uVar1;
      do {
        auVar9 = pauVar5[-2];
        uVar8 = uVar8 - 0x20;
        auVar10 = *pauVar5;
        auVar9._0_8_ = NEON_sqxtn(auVar9._0_8_,auVar9,2);
        auVar11._8_8_ = auVar10._8_8_;
        auVar11._0_8_ = NEON_sqxtn(auVar10._0_8_,auVar10,2);
        auVar9 = NEON_sqxtn2(auVar9,pauVar5[-1],2);
        auVar11 = NEON_sqxtn2(auVar11,pauVar5[1],2);
        auVar10._0_8_ = auVar9._0_8_ ^ 0x8080808080808080;
        auVar10[8] = auVar9[8] ^ 0x80;
        auVar10[9] = auVar9[9] ^ 0x80;
        auVar10[10] = auVar9[10] ^ 0x80;
        auVar10[0xb] = auVar9[0xb] ^ 0x80;
        auVar10[0xc] = auVar9[0xc] ^ 0x80;
        auVar10[0xd] = auVar9[0xd] ^ 0x80;
        auVar10[0xe] = auVar9[0xe] ^ 0x80;
        auVar10[0xf] = auVar9[0xf] ^ 0x80;
        auVar12._0_8_ = auVar11._0_8_ ^ 0x8080808080808080;
        auVar12[8] = auVar11[8] ^ 0x80;
        auVar12[9] = auVar11[9] ^ 0x80;
        auVar12[10] = auVar11[10] ^ 0x80;
        auVar12[0xb] = auVar11[0xb] ^ 0x80;
        auVar12[0xc] = auVar11[0xc] ^ 0x80;
        auVar12[0xd] = auVar11[0xd] ^ 0x80;
        auVar12[0xe] = auVar11[0xe] ^ 0x80;
        auVar12[0xf] = auVar11[0xf] ^ 0x80;
        puVar4[-1] = auVar10._8_8_;
        puVar4[-2] = auVar10._0_8_;
        puVar4[1] = auVar12._8_8_;
        *puVar4 = auVar12._0_8_;
        puVar4 = puVar4 + 4;
        pauVar5 = pauVar5 + 4;
      } while (uVar8 != 0);
      if (uVar1 == param_3) {
        return;
      }
      uVar8 = uVar1;
      if ((param_3 & 0x18) == 0) goto LAB_005c5f18;
    }
    uVar1 = param_3 & 0xfffffffffffffff8;
    lVar3 = uVar8 - uVar1;
    pauVar5 = (undefined1 (*) [16])(param_2 + uVar8 * 2);
    puVar4 = (ulong *)(param_1 + uVar8);
    do {
      lVar3 = lVar3 + 8;
      uVar8 = NEON_sqxtn(SUB168(*pauVar5,0),*pauVar5,2);
      *puVar4 = uVar8 ^ 0x8080808080808080;
      pauVar5 = pauVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (lVar3 != 0);
    if (uVar1 == param_3) {
      return;
    }
  }
LAB_005c5f18:
  lVar3 = param_3 - uVar1;
  pbVar2 = (byte *)(param_1 + uVar1);
  psVar6 = (short *)(param_2 + uVar1 * 2);
  do {
    iVar7 = (int)*psVar6;
    if (0x7e < *psVar6) {
      iVar7 = 0x7f;
    }
    if (iVar7 == -0x80 || iVar7 + 0x80 < 0 != SCARRY4(iVar7,0x80)) {
      iVar7 = -0x80;
    }
    lVar3 = lVar3 + -1;
    *pbVar2 = (byte)iVar7 ^ 0x80;
    pbVar2 = pbVar2 + 1;
    psVar6 = psVar6 + 1;
  } while (lVar3 != 0);
  return;
}


// ===== 005c5ff4  ma_clip_samples_s16 =====

void ma_clip_samples_s16(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  undefined1 (*pauVar6) [16];
  int *piVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  if (param_3 != 0) {
    if (param_3 < 0x10) {
      uVar2 = 0;
    }
    else {
      uVar2 = param_3 & 0xfffffffffffffff0;
      puVar4 = (undefined8 *)(param_1 + 0x10);
      pauVar6 = (undefined1 (*) [16])(param_2 + 0x20);
      uVar8 = uVar2;
      do {
        auVar9 = pauVar6[-2];
        uVar8 = uVar8 - 0x10;
        auVar10 = *pauVar6;
        auVar9._0_8_ = NEON_sqxtn(auVar9._0_8_,auVar9,4);
        auVar10._0_8_ = NEON_sqxtn(auVar10._0_8_,auVar10,4);
        auVar9 = NEON_sqxtn2(auVar9,pauVar6[-1],4);
        auVar10 = NEON_sqxtn2(auVar10,pauVar6[1],4);
        puVar4[-1] = auVar9._8_8_;
        puVar4[-2] = auVar9._0_8_;
        puVar4[1] = auVar10._8_8_;
        *puVar4 = auVar10._0_8_;
        puVar4 = puVar4 + 4;
        pauVar6 = pauVar6 + 4;
      } while (uVar8 != 0);
      if (uVar2 == param_3) {
        return;
      }
    }
    lVar3 = param_3 - uVar2;
    puVar5 = (undefined2 *)(param_1 + uVar2 * 2);
    piVar7 = (int *)(param_2 + uVar2 * 4);
    do {
      iVar1 = *piVar7;
      if (0x7ffe < iVar1) {
        iVar1 = 0x7fff;
      }
      if (iVar1 == -0x8000 || iVar1 + 0x8000 < 0 != SCARRY4(iVar1,0x8000)) {
        iVar1 = -0x8000;
      }
      lVar3 = lVar3 + -1;
      *puVar5 = (short)iVar1;
      puVar5 = puVar5 + 1;
      piVar7 = piVar7 + 1;
    } while (lVar3 != 0);
  }
  return;
}


// ===== 005c6080  ma_clip_samples_s24 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ma_clip_samples_s24(undefined1 *param_1,undefined1 (*param_2) [16],ulong param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
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
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 *puVar43;
  ulong uVar44;
  long *plVar45;
  ulong uVar46;
  long lVar47;
  undefined1 (*pauVar48) [16];
  long lVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
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
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  
  auVar42 = _DAT_0024e420;
  if (param_3 == 0) {
    return;
  }
  if (7 < param_3) {
    auVar52._8_8_ = 0;
    auVar52._0_8_ = param_3 - 1;
    lVar47 = (param_3 - 1) * 3;
    uVar44 = 0;
    if ((((param_1 + 2 + lVar47 < param_1 + 2) || (param_1 + 1 + lVar47 < param_1 + 1)) ||
        (param_1 + lVar47 < param_1)) || (SUB168(auVar52 * ZEXT816(3),8) != 0)) goto LAB_005c6098;
    if ((*param_2 + param_3 * 8 <= param_1) ||
       ((undefined1 (*) [16])(param_1 + param_3 * 3) <= param_2)) {
      if (param_3 < 0x10) {
        uVar46 = 0;
      }
      else {
        uVar44 = param_3 & 0xfffffffffffffff0;
        pauVar48 = param_2;
        puVar43 = param_1;
        uVar46 = uVar44;
        do {
          pauVar1 = pauVar48 + 2;
          pauVar4 = pauVar48 + 3;
          uVar46 = uVar46 - 0x10;
          auVar52 = *pauVar48;
          pauVar5 = pauVar48 + 1;
          pauVar2 = pauVar48 + 6;
          pauVar6 = pauVar48 + 7;
          auVar56._8_8_ = 0x7fffff;
          auVar56._0_8_ = 0x7fffff;
          auVar56 = NEON_cmgt(auVar56,*pauVar4,8);
          pauVar3 = pauVar48 + 4;
          pauVar7 = pauVar48 + 5;
          auVar58._8_8_ = 0x7fffff;
          auVar58._0_8_ = 0x7fffff;
          auVar68 = NEON_cmgt(auVar58,*pauVar5,8);
          auVar60._8_8_ = 0x7fffff;
          auVar60._0_8_ = 0x7fffff;
          auVar77 = NEON_cmgt(auVar60,auVar52,8);
          auVar55._8_8_ = 0x7fffff;
          auVar55._0_8_ = 0x7fffff;
          auVar58 = NEON_cmgt(auVar55,*pauVar1,8);
          auVar57._8_8_ = 0x7fffff;
          auVar57._0_8_ = 0x7fffff;
          auVar60 = NEON_cmgt(auVar57,*pauVar6,8);
          auVar59._8_8_ = 0x7fffff;
          auVar59._0_8_ = 0x7fffff;
          auVar73 = NEON_cmgt(auVar59,*pauVar2,8);
          pauVar48 = pauVar48 + 8;
          auVar81._8_8_ = 0x7fffff;
          auVar81._0_8_ = 0x7fffff;
          auVar56 = NEON_bif(*pauVar4,auVar81,auVar56,1);
          auVar78._8_8_ = 0x7fffff;
          auVar78._0_8_ = 0x7fffff;
          auVar81 = NEON_cmgt(auVar78,*pauVar7,8);
          auVar61._8_8_ = 0x7fffff;
          auVar61._0_8_ = 0x7fffff;
          auVar59 = NEON_cmgt(auVar61,*pauVar3,8);
          auVar62._8_8_ = 0x7fffff;
          auVar62._0_8_ = 0x7fffff;
          auVar57 = NEON_bif(*pauVar5,auVar62,auVar68,1);
          auVar68._8_8_ = 0x7fffff;
          auVar68._0_8_ = 0x7fffff;
          auVar55 = NEON_bif(*pauVar1,auVar68,auVar58,1);
          auVar69._8_8_ = 0x7fffff;
          auVar69._0_8_ = 0x7fffff;
          auVar58 = NEON_bif(*pauVar6,auVar69,auVar60,1);
          auVar82._8_8_ = 0x7fffff;
          auVar82._0_8_ = 0x7fffff;
          auVar60 = NEON_bif(*pauVar2,auVar82,auVar73,1);
          auVar73._8_8_ = 0x7fffff;
          auVar73._0_8_ = 0x7fffff;
          auVar81 = NEON_bif(*pauVar7,auVar73,auVar81,1);
          auVar85._8_8_ = 0x7fffff;
          auVar85._0_8_ = 0x7fffff;
          auVar68 = NEON_bif(*pauVar3,auVar85,auVar59,1);
          auVar87._8_8_ = 0x7fffff;
          auVar87._0_8_ = 0x7fffff;
          auVar69 = NEON_bsl(auVar77,auVar52,auVar87,1);
          auVar77._8_8_ = 0xffffffffff800000;
          auVar77._0_8_ = 0xffffffffff800000;
          auVar52 = NEON_cmgt(auVar56,auVar77,8);
          auVar24._8_8_ = 0xffffffffff800000;
          auVar24._0_8_ = 0xffffffffff800000;
          auVar78 = NEON_cmgt(auVar55,auVar24,8);
          auVar25._8_8_ = 0xffffffffff800000;
          auVar25._0_8_ = 0xffffffffff800000;
          auVar73 = NEON_cmgt(auVar57,auVar25,8);
          auVar26._8_8_ = 0xffffffffff800000;
          auVar26._0_8_ = 0xffffffffff800000;
          auVar59 = NEON_cmgt(auVar58,auVar26,8);
          auVar27._8_8_ = 0xffffffffff800000;
          auVar27._0_8_ = 0xffffffffff800000;
          auVar82 = NEON_cmgt(auVar60,auVar27,8);
          auVar28._8_8_ = 0xffffffffff800000;
          auVar28._0_8_ = 0xffffffffff800000;
          auVar85 = NEON_cmgt(auVar81,auVar28,8);
          auVar29._8_8_ = 0xffffffffff800000;
          auVar29._0_8_ = 0xffffffffff800000;
          auVar87 = NEON_cmgt(auVar69,auVar29,8);
          auVar30._8_8_ = 0xffffffffff800000;
          auVar30._0_8_ = 0xffffffffff800000;
          auVar62 = NEON_bsl(auVar52,auVar56,auVar30,1);
          auVar31._8_8_ = 0xffffffffff800000;
          auVar31._0_8_ = 0xffffffffff800000;
          auVar52 = NEON_cmgt(auVar68,auVar31,8);
          auVar32._8_8_ = 0xffffffffff800000;
          auVar32._0_8_ = 0xffffffffff800000;
          auVar61 = NEON_bsl(auVar78,auVar55,auVar32,1);
          auVar33._8_8_ = 0xffffffffff800000;
          auVar33._0_8_ = 0xffffffffff800000;
          auVar78 = NEON_bsl(auVar73,auVar57,auVar33,1);
          auVar34._8_8_ = 0xffffffffff800000;
          auVar34._0_8_ = 0xffffffffff800000;
          auVar59 = NEON_bsl(auVar59,auVar58,auVar34,1);
          auVar35._8_8_ = 0xffffffffff800000;
          auVar35._0_8_ = 0xffffffffff800000;
          auVar57 = NEON_bsl(auVar82,auVar60,auVar35,1);
          auVar36._8_8_ = 0xffffffffff800000;
          auVar36._0_8_ = 0xffffffffff800000;
          auVar58 = NEON_bsl(auVar85,auVar81,auVar36,1);
          auVar37._8_8_ = 0xffffffffff800000;
          auVar37._0_8_ = 0xffffffffff800000;
          auVar81 = NEON_bsl(auVar87,auVar69,auVar37,1);
          auVar38._8_8_ = 0xffffffffff800000;
          auVar38._0_8_ = 0xffffffffff800000;
          auVar56 = NEON_bsl(auVar52,auVar68,auVar38,1);
          auVar74._0_8_ = auVar62._0_8_ >> 8;
          auVar74._8_8_ = auVar62._8_8_ >> 8;
          auVar86._0_8_ = auVar59._0_8_ >> 8;
          auVar86._8_8_ = auVar59._8_8_ >> 8;
          auVar70._0_8_ = auVar61._0_8_ >> 8;
          auVar70._8_8_ = auVar61._8_8_ >> 8;
          auVar84._0_8_ = auVar57._0_8_ >> 8;
          auVar84._8_8_ = auVar57._8_8_ >> 8;
          auVar52 = a64_TBL(ZEXT816(0),auVar81,auVar78,auVar61,auVar62,auVar42);
          auVar65._0_8_ = auVar78._0_8_ >> 8;
          auVar65._8_8_ = auVar78._8_8_ >> 8;
          auVar83._0_8_ = auVar58._0_8_ >> 8;
          auVar83._8_8_ = auVar58._8_8_ >> 8;
          auVar63._0_8_ = auVar81._0_8_ >> 8;
          auVar63._8_8_ = auVar81._8_8_ >> 8;
          auVar60 = a64_TBL(ZEXT816(0),auVar56,auVar58,auVar57,auVar59,auVar42);
          auVar79._0_8_ = auVar56._0_8_ >> 8;
          auVar79._8_8_ = auVar56._8_8_ >> 8;
          auVar88._0_8_ = auVar56._0_8_ >> 0x10;
          auVar88._8_8_ = auVar56._8_8_ >> 0x10;
          auVar55 = a64_TBL(ZEXT816(0),auVar79,auVar83,auVar84,auVar86,auVar42);
          auVar56 = a64_TBL(ZEXT816(0),auVar63,auVar65,auVar70,auVar74,auVar42);
          auVar75._0_8_ = auVar62._0_8_ >> 0x10;
          auVar75._8_8_ = auVar62._8_8_ >> 0x10;
          auVar71._0_8_ = auVar61._0_8_ >> 0x10;
          auVar71._8_8_ = auVar61._8_8_ >> 0x10;
          auVar66._0_8_ = auVar78._0_8_ >> 0x10;
          auVar66._8_8_ = auVar78._8_8_ >> 0x10;
          auVar64._0_8_ = auVar81._0_8_ >> 0x10;
          auVar64._8_8_ = auVar81._8_8_ >> 0x10;
          auVar39._8_8_ = auVar58._8_8_ >> 0x10;
          auVar39._0_8_ = auVar58._0_8_ >> 0x10;
          auVar40._8_8_ = auVar57._8_8_ >> 0x10;
          auVar40._0_8_ = auVar57._0_8_ >> 0x10;
          auVar41._8_8_ = auVar59._8_8_ >> 0x10;
          auVar41._0_8_ = auVar59._0_8_ >> 0x10;
          auVar57 = a64_TBL(ZEXT816(0),auVar88,auVar39,auVar40,auVar41,auVar42);
          auVar58 = a64_TBL(ZEXT816(0),auVar64,auVar66,auVar71,auVar75,auVar42);
          *puVar43 = auVar52[0];
          puVar43[1] = auVar56[0];
          puVar43[2] = auVar58[0];
          puVar43[3] = auVar52[1];
          puVar43[4] = auVar56[1];
          puVar43[5] = auVar58[1];
          puVar43[6] = auVar52[2];
          puVar43[7] = auVar56[2];
          puVar43[8] = auVar58[2];
          puVar43[9] = auVar52[3];
          puVar43[10] = auVar56[3];
          puVar43[0xb] = auVar58[3];
          puVar43[0xc] = auVar52[4];
          puVar43[0xd] = auVar56[4];
          puVar43[0xe] = auVar58[4];
          puVar43[0xf] = auVar52[5];
          puVar43[0x10] = auVar56[5];
          puVar43[0x11] = auVar58[5];
          puVar43[0x12] = auVar52[6];
          puVar43[0x13] = auVar56[6];
          puVar43[0x14] = auVar58[6];
          puVar43[0x15] = auVar52[7];
          puVar43[0x16] = auVar56[7];
          puVar43[0x17] = auVar58[7];
          puVar43[0x18] = auVar60[0];
          puVar43[0x19] = auVar55[0];
          puVar43[0x1a] = auVar57[0];
          puVar43[0x1b] = auVar60[1];
          puVar43[0x1c] = auVar55[1];
          puVar43[0x1d] = auVar57[1];
          puVar43[0x1e] = auVar60[2];
          puVar43[0x1f] = auVar55[2];
          puVar43[0x20] = auVar57[2];
          puVar43[0x21] = auVar60[3];
          puVar43[0x22] = auVar55[3];
          puVar43[0x23] = auVar57[3];
          puVar43[0x24] = auVar60[4];
          puVar43[0x25] = auVar55[4];
          puVar43[0x26] = auVar57[4];
          puVar43[0x27] = auVar60[5];
          puVar43[0x28] = auVar55[5];
          puVar43[0x29] = auVar57[5];
          puVar43[0x2a] = auVar60[6];
          puVar43[0x2b] = auVar55[6];
          puVar43[0x2c] = auVar57[6];
          puVar43[0x2d] = auVar60[7];
          puVar43[0x2e] = auVar55[7];
          puVar43[0x2f] = auVar57[7];
          puVar43 = puVar43 + 0x30;
        } while (uVar46 != 0);
        if (uVar44 == param_3) {
          return;
        }
        uVar46 = uVar44;
        if (((uint)param_3 >> 3 & 1) == 0) goto LAB_005c6098;
      }
      auVar42 = _DAT_0024e460;
      uVar44 = param_3 & 0xfffffffffffffff8;
      lVar47 = uVar46 - uVar44;
      puVar43 = param_1 + uVar46 * 3;
      pauVar48 = (undefined1 (*) [16])(*param_2 + uVar46 * 8);
      do {
        lVar47 = lVar47 + 8;
        auVar8._8_8_ = 0x7fffff;
        auVar8._0_8_ = 0x7fffff;
        auVar52 = NEON_cmgt(auVar8,pauVar48[3],8);
        auVar9._8_8_ = 0x7fffff;
        auVar9._0_8_ = 0x7fffff;
        auVar56 = NEON_cmgt(auVar9,pauVar48[2],8);
        auVar10._8_8_ = 0x7fffff;
        auVar10._0_8_ = 0x7fffff;
        auVar58 = NEON_cmgt(auVar10,pauVar48[1],8);
        auVar11._8_8_ = 0x7fffff;
        auVar11._0_8_ = 0x7fffff;
        auVar60 = NEON_cmgt(auVar11,*pauVar48,8);
        auVar12._8_8_ = 0x7fffff;
        auVar12._0_8_ = 0x7fffff;
        auVar52 = NEON_bif(pauVar48[3],auVar12,auVar52,1);
        auVar13._8_8_ = 0x7fffff;
        auVar13._0_8_ = 0x7fffff;
        auVar56 = NEON_bif(pauVar48[2],auVar13,auVar56,1);
        auVar14._8_8_ = 0x7fffff;
        auVar14._0_8_ = 0x7fffff;
        auVar58 = NEON_bsl(auVar58,pauVar48[1],auVar14,1);
        auVar16._8_8_ = 0xffffffffff800000;
        auVar16._0_8_ = 0xffffffffff800000;
        auVar57 = NEON_cmgt(auVar56,auVar16,8);
        auVar15._8_8_ = 0x7fffff;
        auVar15._0_8_ = 0x7fffff;
        auVar60 = NEON_bsl(auVar60,*pauVar48,auVar15,1);
        auVar17._8_8_ = 0xffffffffff800000;
        auVar17._0_8_ = 0xffffffffff800000;
        auVar55 = NEON_cmgt(auVar52,auVar17,8);
        auVar18._8_8_ = 0xffffffffff800000;
        auVar18._0_8_ = 0xffffffffff800000;
        auVar59 = NEON_cmgt(auVar58,auVar18,8);
        auVar19._8_8_ = 0xffffffffff800000;
        auVar19._0_8_ = 0xffffffffff800000;
        auVar57 = NEON_bsl(auVar57,auVar56,auVar19,1);
        auVar20._8_8_ = 0xffffffffff800000;
        auVar20._0_8_ = 0xffffffffff800000;
        auVar55 = NEON_bsl(auVar55,auVar52,auVar20,1);
        auVar21._8_8_ = 0xffffffffff800000;
        auVar21._0_8_ = 0xffffffffff800000;
        auVar52 = NEON_cmgt(auVar60,auVar21,8);
        auVar22._8_8_ = 0xffffffffff800000;
        auVar22._0_8_ = 0xffffffffff800000;
        auVar56 = NEON_bsl(auVar59,auVar58,auVar22,1);
        auVar80._0_8_ = auVar55._0_8_ >> 0x10;
        auVar80._8_8_ = auVar55._8_8_ >> 0x10;
        auVar76._0_8_ = auVar57._0_8_ >> 0x10;
        auVar76._8_8_ = auVar57._8_8_ >> 0x10;
        auVar23._8_8_ = 0xffffffffff800000;
        auVar23._0_8_ = 0xffffffffff800000;
        auVar52 = NEON_bsl(auVar52,auVar60,auVar23,1);
        auVar54._0_8_ = auVar55._0_8_ >> 8;
        auVar54._8_8_ = auVar55._8_8_ >> 8;
        auVar72._0_8_ = auVar56._0_8_ >> 0x10;
        auVar72._8_8_ = auVar56._8_8_ >> 0x10;
        auVar53._0_8_ = auVar57._0_8_ >> 8;
        auVar53._8_8_ = auVar57._8_8_ >> 8;
        auVar51._0_8_ = auVar56._0_8_ >> 8;
        auVar51._8_8_ = auVar56._8_8_ >> 8;
        auVar50._0_8_ = auVar52._0_8_ >> 8;
        auVar50._8_8_ = auVar52._8_8_ >> 8;
        auVar67._0_8_ = auVar52._0_8_ >> 0x10;
        auVar67._8_8_ = auVar52._8_8_ >> 0x10;
        auVar52 = a64_TBL(ZEXT816(0),auVar52,auVar56,auVar57,auVar55,auVar42);
        auVar56 = a64_TBL(ZEXT816(0),auVar50,auVar51,auVar53,auVar54,auVar42);
        auVar58 = a64_TBL(ZEXT816(0),auVar67,auVar72,auVar76,auVar80,auVar42);
        *puVar43 = auVar52[0];
        puVar43[1] = auVar56[0];
        puVar43[2] = auVar58[0];
        puVar43[3] = auVar52[1];
        puVar43[4] = auVar56[1];
        puVar43[5] = auVar58[1];
        puVar43[6] = auVar52[2];
        puVar43[7] = auVar56[2];
        puVar43[8] = auVar58[2];
        puVar43[9] = auVar52[3];
        puVar43[10] = auVar56[3];
        puVar43[0xb] = auVar58[3];
        puVar43[0xc] = auVar52[4];
        puVar43[0xd] = auVar56[4];
        puVar43[0xe] = auVar58[4];
        puVar43[0xf] = auVar52[5];
        puVar43[0x10] = auVar56[5];
        puVar43[0x11] = auVar58[5];
        puVar43[0x12] = auVar52[6];
        puVar43[0x13] = auVar56[6];
        puVar43[0x14] = auVar58[6];
        puVar43[0x15] = auVar52[7];
        puVar43[0x16] = auVar56[7];
        puVar43[0x17] = auVar58[7];
        puVar43 = puVar43 + 0x18;
        pauVar48 = pauVar48 + 4;
      } while (lVar47 != 0);
      if (uVar44 == param_3) {
        return;
      }
      goto LAB_005c6098;
    }
  }
  uVar44 = 0;
LAB_005c6098:
  lVar47 = param_3 - uVar44;
  plVar45 = (long *)(*param_2 + uVar44 * 8);
  puVar43 = param_1 + uVar44 * 3 + 2;
  do {
    lVar49 = *plVar45;
    if (0x7ffffe < lVar49) {
      lVar49 = 0x7fffff;
    }
    if (lVar49 == -0x800000 || lVar49 + 0x800000 < 0 != SCARRY8(lVar49,0x800000)) {
      lVar49 = -0x800000;
    }
    lVar47 = lVar47 + -1;
    puVar43[-2] = (char)lVar49;
    puVar43[-1] = (char)((ulong)lVar49 >> 8);
    *puVar43 = (char)((ulong)lVar49 >> 0x10);
    plVar45 = plVar45 + 1;
    puVar43 = puVar43 + 3;
  } while (lVar47 != 0);
  return;
}


// ===== 005c6398  ma_clip_samples_s32 =====

void ma_clip_samples_s32(long param_1,long param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulong uVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined1 (*pauVar11) [16];
  long *plVar12;
  ulong uVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  if (param_3 != 0) {
    if (param_3 < 8) {
      uVar8 = 0;
    }
    else {
      uVar8 = param_3 & 0xfffffffffffffff8;
      puVar10 = (undefined4 *)(param_1 + 0x10);
      pauVar11 = (undefined1 (*) [16])(param_2 + 0x20);
      uVar13 = uVar8;
      do {
        uVar13 = uVar13 - 8;
        auVar17._8_8_ = 0x7fffffff;
        auVar17._0_8_ = 0x7fffffff;
        auVar17 = NEON_cmgt(auVar17,pauVar11[-2],8);
        auVar15._8_8_ = 0x7fffffff;
        auVar15._0_8_ = 0x7fffffff;
        auVar19 = NEON_cmgt(auVar15,pauVar11[-1],8);
        auVar21._8_8_ = 0x7fffffff;
        auVar21._0_8_ = 0x7fffffff;
        auVar21 = NEON_cmgt(auVar21,*pauVar11,8);
        auVar16._8_8_ = 0x7fffffff;
        auVar16._0_8_ = 0x7fffffff;
        auVar22 = NEON_cmgt(auVar16,pauVar11[1],8);
        auVar18._8_8_ = 0x7fffffff;
        auVar18._0_8_ = 0x7fffffff;
        auVar15 = NEON_bif(pauVar11[-2],auVar18,auVar17,1);
        auVar20._8_8_ = 0x7fffffff;
        auVar20._0_8_ = 0x7fffffff;
        auVar17 = NEON_bif(pauVar11[-1],auVar20,auVar19,1);
        auVar19._8_8_ = 0x7fffffff;
        auVar19._0_8_ = 0x7fffffff;
        auVar16 = NEON_bif(*pauVar11,auVar19,auVar21,1);
        auVar23._8_8_ = 0x7fffffff;
        auVar23._0_8_ = 0x7fffffff;
        auVar21 = NEON_bif(pauVar11[1],auVar23,auVar22,1);
        auVar22._8_8_ = 0xffffffff80000000;
        auVar22._0_8_ = 0xffffffff80000000;
        auVar18 = NEON_cmgt(auVar17,auVar22,8);
        auVar1._8_8_ = 0xffffffff80000000;
        auVar1._0_8_ = 0xffffffff80000000;
        auVar20 = NEON_cmgt(auVar15,auVar1,8);
        auVar2._8_8_ = 0xffffffff80000000;
        auVar2._0_8_ = 0xffffffff80000000;
        auVar19 = NEON_cmgt(auVar21,auVar2,8);
        auVar3._8_8_ = 0xffffffff80000000;
        auVar3._0_8_ = 0xffffffff80000000;
        auVar23 = NEON_cmgt(auVar16,auVar3,8);
        auVar4._8_8_ = 0xffffffff80000000;
        auVar4._0_8_ = 0xffffffff80000000;
        auVar17 = NEON_bif(auVar17,auVar4,auVar18,1);
        auVar5._8_8_ = 0xffffffff80000000;
        auVar5._0_8_ = 0xffffffff80000000;
        auVar15 = NEON_bif(auVar15,auVar5,auVar20,1);
        auVar6._8_8_ = 0xffffffff80000000;
        auVar6._0_8_ = 0xffffffff80000000;
        auVar21 = NEON_bif(auVar21,auVar6,auVar19,1);
        auVar7._8_8_ = 0xffffffff80000000;
        auVar7._0_8_ = 0xffffffff80000000;
        auVar16 = NEON_bif(auVar16,auVar7,auVar23,1);
        *puVar10 = auVar17._0_4_;
        puVar10[1] = auVar17._8_4_;
        puVar10[-4] = auVar15._0_4_;
        puVar10[-3] = auVar15._8_4_;
        puVar10[4] = auVar21._0_4_;
        puVar10[5] = auVar21._8_4_;
        *puVar10 = auVar16._0_4_;
        puVar10[1] = auVar16._8_4_;
        puVar10 = puVar10 + 8;
        pauVar11 = pauVar11 + 4;
      } while (uVar13 != 0);
      if (uVar8 == param_3) {
        return;
      }
    }
    lVar9 = param_3 - uVar8;
    puVar10 = (undefined4 *)(param_1 + uVar8 * 4);
    plVar12 = (long *)(param_2 + uVar8 * 8);
    do {
      lVar14 = *plVar12;
      if (0x7ffffffe < lVar14) {
        lVar14 = 0x7fffffff;
      }
      if (lVar14 < -0x7fffffff) {
        lVar14 = -0x80000000;
      }
      lVar9 = lVar9 + -1;
      *puVar10 = (int)lVar14;
      puVar10 = puVar10 + 1;
      plVar12 = plVar12 + 1;
    } while (lVar9 != 0);
  }
  return;
}


// ===== 005c646c  ma_clip_samples_f32 =====

void ma_clip_samples_f32(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  float *pfVar4;
  undefined1 (*pauVar5) [16];
  float *pfVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  if (param_3 != 0) {
    uVar1 = 0;
    if ((7 < param_3) && (0x1f < (ulong)(param_1 - param_2))) {
      auVar8 = NEON_fmov(0xbf800000,4);
      auVar9 = NEON_fmov(0x3f800000,4);
      uVar1 = param_3 & 0xfffffffffffffff8;
      puVar3 = (undefined8 *)(param_1 + 0x10);
      pauVar5 = (undefined1 (*) [16])(param_2 + 0x10);
      uVar7 = uVar1;
      do {
        auVar12 = pauVar5[-1];
        auVar14 = *pauVar5;
        uVar7 = uVar7 - 8;
        pauVar5 = pauVar5 + 2;
        auVar15 = NEON_fcmgt(auVar12,auVar9,4);
        auVar16 = NEON_fcmgt(auVar14,auVar9,4);
        auVar17 = NEON_fcmgt(auVar8,auVar12,4);
        auVar12 = NEON_bit(auVar12,auVar9,auVar15,1);
        auVar15 = NEON_fcmgt(auVar8,auVar14,4);
        auVar14 = NEON_bit(auVar14,auVar9,auVar16,1);
        auVar12 = NEON_bit(auVar12,auVar8,auVar17,1);
        auVar14 = NEON_bit(auVar14,auVar8,auVar15,1);
        puVar3[-1] = auVar12._8_8_;
        puVar3[-2] = auVar12._0_8_;
        puVar3[1] = auVar14._8_8_;
        *puVar3 = auVar14._0_8_;
        puVar3 = puVar3 + 4;
      } while (uVar7 != 0);
      if (uVar1 == param_3) {
        return;
      }
    }
    lVar2 = param_3 - uVar1;
    pfVar4 = (float *)(param_1 + uVar1 * 4);
    pfVar6 = (float *)(param_2 + uVar1 * 4);
    do {
      fVar10 = *pfVar6;
      fVar13 = 1.0;
      if (fVar10 == 1.0 || fVar10 < 1.0 != NAN(fVar10)) {
        fVar13 = fVar10;
      }
      fVar11 = -1.0;
      if (-1.0 <= fVar10) {
        fVar11 = fVar13;
      }
      lVar2 = lVar2 + -1;
      *pfVar4 = fVar11;
      pfVar4 = pfVar4 + 1;
      pfVar6 = pfVar6 + 1;
    } while (lVar2 != 0);
  }
  return;
}


// ===== 005c651c  ma_clip_pcm_frames =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ma_clip_pcm_frames(undefined1 *param_1,undefined1 (*param_2) [16],long param_3,int param_4,
                       uint param_5)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  float *pfVar12;
  long *plVar13;
  ulong uVar14;
  byte *pbVar15;
  undefined8 *puVar16;
  float *pfVar17;
  short *psVar18;
  undefined4 *puVar19;
  undefined2 *puVar20;
  ulong *puVar21;
  undefined1 (*pauVar22) [16];
  int iVar23;
  int *piVar24;
  long lVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  
  auVar26 = _DAT_0024e420;
  uVar9 = (ulong)param_5 * param_3;
  if (param_4 < 3) {
    if (param_4 != 1) {
      if (param_4 != 2) {
        return;
      }
      if (uVar9 == 0) {
        return;
      }
      if (uVar9 < 0x10) {
        uVar14 = 0;
      }
      else {
        uVar14 = uVar9 & 0xfffffffffffffff0;
        puVar16 = (undefined8 *)(param_1 + 0x10);
        pauVar22 = param_2 + 2;
        uVar11 = uVar14;
        do {
          auVar26 = pauVar22[-2];
          uVar11 = uVar11 - 0x10;
          auVar28 = *pauVar22;
          auVar26._0_8_ = NEON_sqxtn(auVar26._0_8_,auVar26,4);
          auVar28._0_8_ = NEON_sqxtn(auVar28._0_8_,auVar28,4);
          auVar26 = NEON_sqxtn2(auVar26,pauVar22[-1],4);
          auVar28 = NEON_sqxtn2(auVar28,pauVar22[1],4);
          puVar16[-1] = auVar26._8_8_;
          puVar16[-2] = auVar26._0_8_;
          puVar16[1] = auVar28._8_8_;
          *puVar16 = auVar28._0_8_;
          puVar16 = puVar16 + 4;
          pauVar22 = pauVar22 + 4;
        } while (uVar11 != 0);
        if (uVar9 - uVar14 == 0) {
          return;
        }
      }
      lVar10 = uVar9 - uVar14;
      puVar20 = (undefined2 *)(param_1 + uVar14 * 2);
      piVar24 = (int *)(*param_2 + uVar14 * 4);
      do {
        iVar23 = *piVar24;
        if (0x7ffe < iVar23) {
          iVar23 = 0x7fff;
        }
        if (iVar23 == -0x8000 || iVar23 + 0x8000 < 0 != SCARRY4(iVar23,0x8000)) {
          iVar23 = -0x8000;
        }
        lVar10 = lVar10 + -1;
        *puVar20 = (short)iVar23;
        puVar20 = puVar20 + 1;
        piVar24 = piVar24 + 1;
      } while (lVar10 != 0);
      return;
    }
    if (uVar9 == 0) {
      return;
    }
    if ((uVar9 < 8) ||
       ((param_1 < *param_2 + uVar9 * 2 && (param_2 < (undefined1 (*) [16])(param_1 + uVar9))))) {
      uVar11 = 0;
    }
    else {
      if (uVar9 < 0x20) {
        uVar14 = 0;
      }
      else {
        uVar11 = uVar9 & 0xffffffffffffffe0;
        puVar21 = (ulong *)(param_1 + 0x10);
        pauVar22 = param_2 + 2;
        uVar14 = uVar11;
        do {
          auVar26 = pauVar22[-2];
          uVar14 = uVar14 - 0x20;
          auVar28 = *pauVar22;
          auVar33._8_8_ = auVar26._8_8_;
          auVar33._0_8_ = NEON_sqxtn(auVar26._0_8_,auVar26,2);
          auVar37._8_8_ = auVar28._8_8_;
          auVar37._0_8_ = NEON_sqxtn(auVar28._0_8_,auVar28,2);
          auVar26 = NEON_sqxtn2(auVar33,pauVar22[-1],2);
          auVar28 = NEON_sqxtn2(auVar37,pauVar22[1],2);
          auVar35._0_8_ = auVar26._0_8_ ^ 0x8080808080808080;
          auVar35[8] = auVar26[8] ^ 0x80;
          auVar35[9] = auVar26[9] ^ 0x80;
          auVar35[10] = auVar26[10] ^ 0x80;
          auVar35[0xb] = auVar26[0xb] ^ 0x80;
          auVar35[0xc] = auVar26[0xc] ^ 0x80;
          auVar35[0xd] = auVar26[0xd] ^ 0x80;
          auVar35[0xe] = auVar26[0xe] ^ 0x80;
          auVar35[0xf] = auVar26[0xf] ^ 0x80;
          auVar39._0_8_ = auVar28._0_8_ ^ 0x8080808080808080;
          auVar39[8] = auVar28[8] ^ 0x80;
          auVar39[9] = auVar28[9] ^ 0x80;
          auVar39[10] = auVar28[10] ^ 0x80;
          auVar39[0xb] = auVar28[0xb] ^ 0x80;
          auVar39[0xc] = auVar28[0xc] ^ 0x80;
          auVar39[0xd] = auVar28[0xd] ^ 0x80;
          auVar39[0xe] = auVar28[0xe] ^ 0x80;
          auVar39[0xf] = auVar28[0xf] ^ 0x80;
          puVar21[-1] = auVar35._8_8_;
          puVar21[-2] = auVar35._0_8_;
          puVar21[1] = auVar39._8_8_;
          *puVar21 = auVar39._0_8_;
          puVar21 = puVar21 + 4;
          pauVar22 = pauVar22 + 4;
        } while (uVar14 != 0);
        if (uVar9 - uVar11 == 0) {
          return;
        }
        uVar14 = uVar11;
        if ((uVar9 & 0x18) == 0) goto LAB_005c66bc;
      }
      uVar11 = uVar9 & 0xfffffffffffffff8;
      lVar10 = uVar14 - uVar11;
      pauVar22 = (undefined1 (*) [16])(*param_2 + uVar14 * 2);
      puVar21 = (ulong *)(param_1 + uVar14);
      do {
        lVar10 = lVar10 + 8;
        uVar14 = NEON_sqxtn(SUB168(*pauVar22,0),*pauVar22,2);
        *puVar21 = uVar14 ^ 0x8080808080808080;
        pauVar22 = pauVar22 + 1;
        puVar21 = puVar21 + 1;
      } while (lVar10 != 0);
      if (uVar9 - uVar11 == 0) {
        return;
      }
    }
LAB_005c66bc:
    lVar10 = uVar9 - uVar11;
    pbVar15 = param_1 + uVar11;
    psVar18 = (short *)(*param_2 + uVar11 * 2);
    do {
      iVar23 = (int)*psVar18;
      if (0x7e < *psVar18) {
        iVar23 = 0x7f;
      }
      if (iVar23 == -0x80 || iVar23 + 0x80 < 0 != SCARRY4(iVar23,0x80)) {
        iVar23 = -0x80;
      }
      lVar10 = lVar10 + -1;
      *pbVar15 = (byte)iVar23 ^ 0x80;
      pbVar15 = pbVar15 + 1;
      psVar18 = psVar18 + 1;
    } while (lVar10 != 0);
    return;
  }
  if (param_4 != 3) {
    if (param_4 == 4) {
      if (uVar9 == 0) {
        return;
      }
      if (uVar9 < 8) {
        uVar14 = 0;
      }
      else {
        auVar41._8_8_ = 0x7fffffff;
        auVar41._0_8_ = 0x7fffffff;
        auVar44._8_8_ = 0xffffffff80000000;
        auVar44._0_8_ = 0xffffffff80000000;
        uVar14 = uVar9 & 0xfffffffffffffff8;
        puVar19 = (undefined4 *)(param_1 + 0x10);
        pauVar22 = param_2 + 2;
        uVar11 = uVar14;
        do {
          uVar11 = uVar11 - 8;
          auVar26 = NEON_cmgt(auVar41,pauVar22[-2],8);
          auVar33 = NEON_cmgt(auVar41,pauVar22[-1],8);
          auVar35 = NEON_cmgt(auVar41,*pauVar22,8);
          auVar37 = NEON_cmgt(auVar41,pauVar22[1],8);
          auVar28 = NEON_bif(pauVar22[-2],auVar41,auVar26,1);
          auVar26 = NEON_bif(pauVar22[-1],auVar41,auVar33,1);
          auVar35 = NEON_bif(*pauVar22,auVar41,auVar35,1);
          auVar33 = NEON_bif(pauVar22[1],auVar41,auVar37,1);
          auVar37 = NEON_cmgt(auVar26,auVar44,8);
          auVar39 = NEON_cmgt(auVar28,auVar44,8);
          auVar43 = NEON_cmgt(auVar33,auVar44,8);
          auVar45 = NEON_cmgt(auVar35,auVar44,8);
          auVar26 = NEON_bif(auVar26,auVar44,auVar37,1);
          auVar28 = NEON_bif(auVar28,auVar44,auVar39,1);
          auVar33 = NEON_bif(auVar33,auVar44,auVar43,1);
          auVar35 = NEON_bif(auVar35,auVar44,auVar45,1);
          *puVar19 = auVar26._0_4_;
          puVar19[1] = auVar26._8_4_;
          puVar19[-4] = auVar28._0_4_;
          puVar19[-3] = auVar28._8_4_;
          puVar19[4] = auVar33._0_4_;
          puVar19[5] = auVar33._8_4_;
          *puVar19 = auVar35._0_4_;
          puVar19[1] = auVar35._8_4_;
          puVar19 = puVar19 + 8;
          pauVar22 = pauVar22 + 4;
        } while (uVar11 != 0);
        if (uVar9 - uVar14 == 0) {
          return;
        }
      }
      lVar10 = uVar9 - uVar14;
      puVar19 = (undefined4 *)(param_1 + uVar14 * 4);
      plVar13 = (long *)(*param_2 + uVar14 * 8);
      do {
        lVar25 = *plVar13;
        if (0x7ffffffe < lVar25) {
          lVar25 = 0x7fffffff;
        }
        if (lVar25 < -0x7fffffff) {
          lVar25 = -0x80000000;
        }
        lVar10 = lVar10 + -1;
        *puVar19 = (int)lVar25;
        puVar19 = puVar19 + 1;
        plVar13 = plVar13 + 1;
      } while (lVar10 != 0);
      return;
    }
    if (param_4 != 5) {
      return;
    }
    if (uVar9 == 0) {
      return;
    }
    uVar11 = 0;
    if ((7 < uVar9) && (0x1f < (ulong)((long)param_1 - (long)param_2))) {
      auVar26 = NEON_fmov(0xbf800000,4);
      auVar28 = NEON_fmov(0x3f800000,4);
      uVar11 = uVar9 & 0xfffffffffffffff8;
      puVar16 = (undefined8 *)(param_1 + 0x10);
      pauVar22 = param_2 + 1;
      uVar14 = uVar11;
      do {
        auVar33 = pauVar22[-1];
        auVar35 = *pauVar22;
        uVar14 = uVar14 - 8;
        pauVar22 = pauVar22 + 2;
        auVar37 = NEON_fcmgt(auVar33,auVar28,4);
        auVar39 = NEON_fcmgt(auVar35,auVar28,4);
        auVar41 = NEON_fcmgt(auVar26,auVar33,4);
        auVar33 = NEON_bit(auVar33,auVar28,auVar37,1);
        auVar37 = NEON_fcmgt(auVar26,auVar35,4);
        auVar35 = NEON_bit(auVar35,auVar28,auVar39,1);
        auVar33 = NEON_bit(auVar33,auVar26,auVar41,1);
        auVar35 = NEON_bit(auVar35,auVar26,auVar37,1);
        puVar16[-1] = auVar33._8_8_;
        puVar16[-2] = auVar33._0_8_;
        puVar16[1] = auVar35._8_8_;
        *puVar16 = auVar35._0_8_;
        puVar16 = puVar16 + 4;
      } while (uVar14 != 0);
      if (uVar9 - uVar11 == 0) {
        return;
      }
    }
    lVar10 = uVar9 - uVar11;
    pfVar12 = (float *)(param_1 + uVar11 * 4);
    pfVar17 = (float *)(*param_2 + uVar11 * 4);
    do {
      fVar31 = *pfVar17;
      fVar34 = 1.0;
      if (fVar31 == 1.0 || fVar31 < 1.0 != NAN(fVar31)) {
        fVar34 = fVar31;
      }
      fVar32 = -1.0;
      if (-1.0 <= fVar31) {
        fVar32 = fVar34;
      }
      lVar10 = lVar10 + -1;
      *pfVar12 = fVar32;
      pfVar12 = pfVar12 + 1;
      pfVar17 = pfVar17 + 1;
    } while (lVar10 != 0);
    return;
  }
  if (uVar9 == 0) {
    return;
  }
  if (7 < uVar9) {
    auVar43._8_8_ = 0;
    auVar43._0_8_ = uVar9 - 1;
    lVar10 = (uVar9 - 1) * 3;
    uVar11 = 0;
    if ((((param_1 + 2 + lVar10 < param_1 + 2) || (param_1 + 1 + lVar10 < param_1 + 1)) ||
        (param_1 + lVar10 < param_1)) || (SUB168(auVar43 * ZEXT816(3),8) != 0)) goto LAB_005c6630;
    if ((*param_2 + uVar9 * 8 <= param_1) || ((undefined1 (*) [16])(param_1 + uVar9 * 3) <= param_2)
       ) {
      if (uVar9 < 0x10) {
        uVar14 = 0;
      }
      else {
        auVar45._8_8_ = 0x7fffff;
        auVar45._0_8_ = 0x7fffff;
        auVar30._8_8_ = 0xffffffffff800000;
        auVar30._0_8_ = 0xffffffffff800000;
        uVar11 = uVar9 & 0xfffffffffffffff0;
        pauVar22 = param_2;
        puVar8 = param_1;
        uVar14 = uVar11;
        do {
          pauVar1 = pauVar22 + 2;
          pauVar4 = pauVar22 + 3;
          uVar14 = uVar14 - 0x10;
          auVar28 = *pauVar22;
          pauVar5 = pauVar22 + 1;
          pauVar2 = pauVar22 + 6;
          pauVar6 = pauVar22 + 7;
          auVar33 = NEON_cmgt(auVar45,*pauVar4,8);
          pauVar3 = pauVar22 + 4;
          pauVar7 = pauVar22 + 5;
          auVar39 = NEON_cmgt(auVar45,*pauVar5,8);
          auVar54 = NEON_cmgt(auVar45,auVar28,8);
          auVar35 = NEON_cmgt(auVar45,*pauVar1,8);
          auVar37 = NEON_cmgt(auVar45,*pauVar6,8);
          auVar43 = NEON_cmgt(auVar45,*pauVar2,8);
          pauVar22 = pauVar22 + 8;
          auVar33 = NEON_bif(*pauVar4,auVar45,auVar33,1);
          auVar57 = NEON_cmgt(auVar45,*pauVar7,8);
          auVar44 = NEON_cmgt(auVar45,*pauVar3,8);
          auVar41 = NEON_bif(*pauVar5,auVar45,auVar39,1);
          auVar39 = NEON_bif(*pauVar1,auVar45,auVar35,1);
          auVar35 = NEON_bif(*pauVar6,auVar45,auVar37,1);
          auVar37 = NEON_bif(*pauVar2,auVar45,auVar43,1);
          auVar43 = NEON_bif(*pauVar7,auVar45,auVar57,1);
          auVar47 = NEON_bif(*pauVar3,auVar45,auVar44,1);
          auVar49 = NEON_bsl(auVar54,auVar28,auVar45,1);
          auVar28 = NEON_cmgt(auVar33,auVar30,8);
          auVar54 = NEON_cmgt(auVar39,auVar30,8);
          auVar60 = NEON_cmgt(auVar41,auVar30,8);
          auVar44 = NEON_cmgt(auVar35,auVar30,8);
          auVar58 = NEON_cmgt(auVar37,auVar30,8);
          auVar62 = NEON_cmgt(auVar43,auVar30,8);
          auVar64 = NEON_cmgt(auVar49,auVar30,8);
          auVar46 = NEON_bsl(auVar28,auVar33,auVar30,1);
          auVar28 = NEON_cmgt(auVar47,auVar30,8);
          auVar57 = NEON_bsl(auVar54,auVar39,auVar30,1);
          auVar54 = NEON_bsl(auVar60,auVar41,auVar30,1);
          auVar44 = NEON_bsl(auVar44,auVar35,auVar30,1);
          auVar41 = NEON_bsl(auVar58,auVar37,auVar30,1);
          auVar35 = NEON_bsl(auVar62,auVar43,auVar30,1);
          auVar43 = NEON_bsl(auVar64,auVar49,auVar30,1);
          auVar33 = NEON_bsl(auVar28,auVar47,auVar30,1);
          auVar51._0_8_ = auVar46._0_8_ >> 8;
          auVar51._8_8_ = auVar46._8_8_ >> 8;
          auVar63._0_8_ = auVar44._0_8_ >> 8;
          auVar63._8_8_ = auVar44._8_8_ >> 8;
          auVar62._0_8_ = auVar57._0_8_ >> 8;
          auVar62._8_8_ = auVar57._8_8_ >> 8;
          auVar61._0_8_ = auVar41._0_8_ >> 8;
          auVar61._8_8_ = auVar41._8_8_ >> 8;
          auVar28 = a64_TBL(ZEXT816(0),auVar43,auVar54,auVar57,auVar46,auVar26);
          auVar58._0_8_ = auVar54._0_8_ >> 8;
          auVar58._8_8_ = auVar54._8_8_ >> 8;
          auVar59._0_8_ = auVar35._0_8_ >> 8;
          auVar59._8_8_ = auVar35._8_8_ >> 8;
          auVar47._0_8_ = auVar43._0_8_ >> 8;
          auVar47._8_8_ = auVar43._8_8_ >> 8;
          auVar37 = a64_TBL(ZEXT816(0),auVar33,auVar35,auVar41,auVar44,auVar26);
          auVar55._0_8_ = auVar33._0_8_ >> 8;
          auVar55._8_8_ = auVar33._8_8_ >> 8;
          auVar65._0_8_ = auVar33._0_8_ >> 0x10;
          auVar65._8_8_ = auVar33._8_8_ >> 0x10;
          auVar39 = a64_TBL(ZEXT816(0),auVar55,auVar59,auVar61,auVar63,auVar26);
          auVar33 = a64_TBL(ZEXT816(0),auVar47,auVar58,auVar62,auVar51,auVar26);
          auVar52._0_8_ = auVar46._0_8_ >> 0x10;
          auVar52._8_8_ = auVar46._8_8_ >> 0x10;
          auVar64._0_8_ = auVar57._0_8_ >> 0x10;
          auVar64._8_8_ = auVar57._8_8_ >> 0x10;
          auVar60._0_8_ = auVar54._0_8_ >> 0x10;
          auVar60._8_8_ = auVar54._8_8_ >> 0x10;
          auVar49._0_8_ = auVar43._0_8_ >> 0x10;
          auVar49._8_8_ = auVar43._8_8_ >> 0x10;
          auVar54._8_8_ = auVar35._8_8_ >> 0x10;
          auVar54._0_8_ = auVar35._0_8_ >> 0x10;
          auVar57._8_8_ = auVar41._8_8_ >> 0x10;
          auVar57._0_8_ = auVar41._0_8_ >> 0x10;
          auVar46._8_8_ = auVar44._8_8_ >> 0x10;
          auVar46._0_8_ = auVar44._0_8_ >> 0x10;
          auVar41 = a64_TBL(ZEXT816(0),auVar65,auVar54,auVar57,auVar46,auVar26);
          auVar35 = a64_TBL(ZEXT816(0),auVar49,auVar60,auVar64,auVar52,auVar26);
          *puVar8 = auVar28[0];
          puVar8[1] = auVar33[0];
          puVar8[2] = auVar35[0];
          puVar8[3] = auVar28[1];
          puVar8[4] = auVar33[1];
          puVar8[5] = auVar35[1];
          puVar8[6] = auVar28[2];
          puVar8[7] = auVar33[2];
          puVar8[8] = auVar35[2];
          puVar8[9] = auVar28[3];
          puVar8[10] = auVar33[3];
          puVar8[0xb] = auVar35[3];
          puVar8[0xc] = auVar28[4];
          puVar8[0xd] = auVar33[4];
          puVar8[0xe] = auVar35[4];
          puVar8[0xf] = auVar28[5];
          puVar8[0x10] = auVar33[5];
          puVar8[0x11] = auVar35[5];
          puVar8[0x12] = auVar28[6];
          puVar8[0x13] = auVar33[6];
          puVar8[0x14] = auVar35[6];
          puVar8[0x15] = auVar28[7];
          puVar8[0x16] = auVar33[7];
          puVar8[0x17] = auVar35[7];
          puVar8[0x18] = auVar37[0];
          puVar8[0x19] = auVar39[0];
          puVar8[0x1a] = auVar41[0];
          puVar8[0x1b] = auVar37[1];
          puVar8[0x1c] = auVar39[1];
          puVar8[0x1d] = auVar41[1];
          puVar8[0x1e] = auVar37[2];
          puVar8[0x1f] = auVar39[2];
          puVar8[0x20] = auVar41[2];
          puVar8[0x21] = auVar37[3];
          puVar8[0x22] = auVar39[3];
          puVar8[0x23] = auVar41[3];
          puVar8[0x24] = auVar37[4];
          puVar8[0x25] = auVar39[4];
          puVar8[0x26] = auVar41[4];
          puVar8[0x27] = auVar37[5];
          puVar8[0x28] = auVar39[5];
          puVar8[0x29] = auVar41[5];
          puVar8[0x2a] = auVar37[6];
          puVar8[0x2b] = auVar39[6];
          puVar8[0x2c] = auVar41[6];
          puVar8[0x2d] = auVar37[7];
          puVar8[0x2e] = auVar39[7];
          puVar8[0x2f] = auVar41[7];
          puVar8 = puVar8 + 0x30;
        } while (uVar14 != 0);
        if (uVar9 - uVar11 == 0) {
          return;
        }
        uVar14 = uVar11;
        if (((uint)uVar9 >> 3 & 1) == 0) goto LAB_005c6630;
      }
      auVar26 = _DAT_0024e460;
      auVar27._8_8_ = 0x7fffff;
      auVar27._0_8_ = 0x7fffff;
      auVar29._8_8_ = 0xffffffffff800000;
      auVar29._0_8_ = 0xffffffffff800000;
      uVar11 = uVar9 & 0xfffffffffffffff8;
      lVar10 = uVar14 - uVar11;
      puVar8 = param_1 + uVar14 * 3;
      pauVar22 = (undefined1 (*) [16])(*param_2 + uVar14 * 8);
      do {
        lVar10 = lVar10 + 8;
        auVar28 = NEON_cmgt(auVar27,pauVar22[3],8);
        auVar33 = NEON_cmgt(auVar27,pauVar22[2],8);
        auVar35 = NEON_cmgt(auVar27,pauVar22[1],8);
        auVar37 = NEON_cmgt(auVar27,*pauVar22,8);
        auVar28 = NEON_bif(pauVar22[3],auVar27,auVar28,1);
        auVar33 = NEON_bif(pauVar22[2],auVar27,auVar33,1);
        auVar35 = NEON_bsl(auVar35,pauVar22[1],auVar27,1);
        auVar41 = NEON_cmgt(auVar33,auVar29,8);
        auVar37 = NEON_bsl(auVar37,*pauVar22,auVar27,1);
        auVar39 = NEON_cmgt(auVar28,auVar29,8);
        auVar44 = NEON_cmgt(auVar35,auVar29,8);
        auVar41 = NEON_bsl(auVar41,auVar33,auVar29,1);
        auVar39 = NEON_bsl(auVar39,auVar28,auVar29,1);
        auVar28 = NEON_cmgt(auVar37,auVar29,8);
        auVar33 = NEON_bsl(auVar44,auVar35,auVar29,1);
        auVar56._0_8_ = auVar39._0_8_ >> 0x10;
        auVar56._8_8_ = auVar39._8_8_ >> 0x10;
        auVar53._0_8_ = auVar41._0_8_ >> 0x10;
        auVar53._8_8_ = auVar41._8_8_ >> 0x10;
        auVar28 = NEON_bsl(auVar28,auVar37,auVar29,1);
        auVar42._0_8_ = auVar39._0_8_ >> 8;
        auVar42._8_8_ = auVar39._8_8_ >> 8;
        auVar50._0_8_ = auVar33._0_8_ >> 0x10;
        auVar50._8_8_ = auVar33._8_8_ >> 0x10;
        auVar40._0_8_ = auVar41._0_8_ >> 8;
        auVar40._8_8_ = auVar41._8_8_ >> 8;
        auVar38._0_8_ = auVar33._0_8_ >> 8;
        auVar38._8_8_ = auVar33._8_8_ >> 8;
        auVar36._0_8_ = auVar28._0_8_ >> 8;
        auVar36._8_8_ = auVar28._8_8_ >> 8;
        auVar48._0_8_ = auVar28._0_8_ >> 0x10;
        auVar48._8_8_ = auVar28._8_8_ >> 0x10;
        auVar28 = a64_TBL(ZEXT816(0),auVar28,auVar33,auVar41,auVar39,auVar26);
        auVar33 = a64_TBL(ZEXT816(0),auVar36,auVar38,auVar40,auVar42,auVar26);
        auVar35 = a64_TBL(ZEXT816(0),auVar48,auVar50,auVar53,auVar56,auVar26);
        *puVar8 = auVar28[0];
        puVar8[1] = auVar33[0];
        puVar8[2] = auVar35[0];
        puVar8[3] = auVar28[1];
        puVar8[4] = auVar33[1];
        puVar8[5] = auVar35[1];
        puVar8[6] = auVar28[2];
        puVar8[7] = auVar33[2];
        puVar8[8] = auVar35[2];
        puVar8[9] = auVar28[3];
        puVar8[10] = auVar33[3];
        puVar8[0xb] = auVar35[3];
        puVar8[0xc] = auVar28[4];
        puVar8[0xd] = auVar33[4];
        puVar8[0xe] = auVar35[4];
        puVar8[0xf] = auVar28[5];
        puVar8[0x10] = auVar33[5];
        puVar8[0x11] = auVar35[5];
        puVar8[0x12] = auVar28[6];
        puVar8[0x13] = auVar33[6];
        puVar8[0x14] = auVar35[6];
        puVar8[0x15] = auVar28[7];
        puVar8[0x16] = auVar33[7];
        puVar8[0x17] = auVar35[7];
        puVar8 = puVar8 + 0x18;
        pauVar22 = pauVar22 + 4;
      } while (lVar10 != 0);
      if (uVar9 - uVar11 == 0) {
        return;
      }
      goto LAB_005c6630;
    }
  }
  uVar11 = 0;
LAB_005c6630:
  lVar10 = uVar9 - uVar11;
  plVar13 = (long *)(*param_2 + uVar11 * 8);
  puVar8 = param_1 + uVar11 * 3 + 2;
  do {
    lVar25 = *plVar13;
    if (0x7ffffe < lVar25) {
      lVar25 = 0x7fffff;
    }
    if (lVar25 == -0x800000 || lVar25 + 0x800000 < 0 != SCARRY8(lVar25,0x800000)) {
      lVar25 = -0x800000;
    }
    lVar10 = lVar10 + -1;
    puVar8[-2] = (char)lVar25;
    puVar8[-1] = (char)((ulong)lVar25 >> 8);
    *puVar8 = (char)((ulong)lVar25 >> 0x10);
    plVar13 = plVar13 + 1;
    puVar8 = puVar8 + 3;
  } while (lVar10 != 0);
  return;
}


// ===== 005c6b80  ma_copy_and_apply_volume_factor_u8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ma_copy_and_apply_volume_factor_u8
               (float param_1,undefined8 *param_2,undefined1 (*param_3) [16],ulong param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  ulong *puVar10;
  undefined1 (*pauVar11) [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  auVar13 = _DAT_0024e4f0;
  auVar12 = _DAT_0024e3a0;
  auVar3 = _DAT_0024e360;
  auVar2 = _DAT_0024e210;
  auVar1 = _DAT_0024de80;
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  if (param_3 == (undefined1 (*) [16])0x0) {
    return;
  }
  if (param_4 == 0) {
    return;
  }
  uVar4 = 0;
  if ((7 < param_4) && (0xf < (ulong)((long)param_2 - (long)param_3))) {
    if (param_4 < 0x10) {
      uVar5 = 0;
    }
    else {
      uVar4 = param_4 & 0xfffffffffffffff0;
      pauVar11 = param_3;
      puVar8 = param_2;
      uVar5 = uVar4;
      do {
        auVar14 = *pauVar11;
        uVar5 = uVar5 - 0x10;
        auVar15 = a64_TBL(ZEXT816(0),auVar14,auVar1);
        auVar17 = a64_TBL(ZEXT816(0),auVar14,auVar12);
        auVar19 = a64_TBL(ZEXT816(0),auVar14,auVar13);
        auVar14 = a64_TBL(ZEXT816(0),auVar14,auVar2);
        auVar16 = NEON_ucvtf(auVar15,4);
        auVar18 = NEON_ucvtf(auVar17,4);
        auVar17 = NEON_ucvtf(auVar19,4);
        auVar15 = NEON_ucvtf(auVar14,4);
        auVar14._4_4_ = (int)(auVar15._4_4_ * param_1);
        auVar14._0_4_ = (int)(auVar15._0_4_ * param_1);
        auVar14._8_4_ = (int)(auVar15._8_4_ * param_1);
        auVar14._12_4_ = (int)(auVar15._12_4_ * param_1);
        auVar15._4_4_ = (int)(auVar17._4_4_ * param_1);
        auVar15._0_4_ = (int)(auVar17._0_4_ * param_1);
        auVar15._8_4_ = (int)(auVar17._8_4_ * param_1);
        auVar15._12_4_ = (int)(auVar17._12_4_ * param_1);
        auVar17._4_4_ = (int)(auVar18._4_4_ * param_1);
        auVar17._0_4_ = (int)(auVar18._0_4_ * param_1);
        auVar17._8_4_ = (int)(auVar18._8_4_ * param_1);
        auVar17._12_4_ = (int)(auVar18._12_4_ * param_1);
        auVar18._4_4_ = (int)(auVar16._4_4_ * param_1);
        auVar18._0_4_ = (int)(auVar16._0_4_ * param_1);
        auVar18._8_4_ = (int)(auVar16._8_4_ * param_1);
        auVar18._12_4_ = (int)(auVar16._12_4_ * param_1);
        auVar14 = a64_TBL(ZEXT816(0),auVar14,auVar15,auVar17,auVar18,auVar3);
        puVar8[1] = auVar14._8_8_;
        *puVar8 = auVar14._0_8_;
        pauVar11 = pauVar11 + 1;
        puVar8 = puVar8 + 2;
      } while (uVar5 != 0);
      if (uVar4 == param_4) {
        return;
      }
      uVar5 = uVar4;
      if (((uint)param_4 >> 3 & 1) == 0) goto LAB_005c6cac;
    }
    auVar3 = _DAT_0024e4f0;
    auVar2 = _DAT_0024e210;
    auVar1 = _DAT_0024e040;
    uVar4 = param_4 & 0xfffffffffffffff8;
    lVar7 = uVar5 - uVar4;
    puVar8 = (undefined8 *)((long)param_2 + uVar5);
    puVar10 = (ulong *)(*param_3 + uVar5);
    do {
      auVar12._0_8_ = *puVar10;
      auVar12._8_8_ = 0;
      lVar7 = lVar7 + 8;
      auVar13 = a64_TBL(ZEXT816(0),auVar12,auVar3);
      auVar12 = a64_TBL(ZEXT816(0),auVar12,auVar2);
      auVar13 = NEON_ucvtf(auVar13,4);
      auVar12 = NEON_ucvtf(auVar12,4);
      auVar16._0_4_ = (int)(auVar13._0_4_ * param_1);
      auVar16._4_4_ = (int)(auVar13._4_4_ * param_1);
      auVar16._8_4_ = (int)(auVar13._8_4_ * param_1);
      auVar16._12_4_ = (int)(auVar13._12_4_ * param_1);
      auVar13._0_4_ = (int)(auVar12._0_4_ * param_1);
      auVar13._4_4_ = (int)(auVar12._4_4_ * param_1);
      auVar13._8_4_ = (int)(auVar12._8_4_ * param_1);
      auVar13._12_4_ = (int)(auVar12._12_4_ * param_1);
      auVar12 = a64_TBL(ZEXT816(0),auVar13,auVar16,auVar1);
      *puVar8 = auVar12._0_8_;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    } while (lVar7 != 0);
    if (uVar4 == param_4) {
      return;
    }
  }
LAB_005c6cac:
  lVar7 = param_4 - uVar4;
  pbVar6 = *param_3 + uVar4;
  puVar9 = (undefined1 *)((long)param_2 + uVar4);
  do {
    lVar7 = lVar7 + -1;
    *puVar9 = (char)(int)((float)*pbVar6 * param_1);
    pbVar6 = pbVar6 + 1;
    puVar9 = puVar9 + 1;
  } while (lVar7 != 0);
  return;
}


// ===== 005c6cd8  ma_copy_and_apply_volume_factor_s16 =====

void ma_copy_and_apply_volume_factor_s16(float param_1,long param_2,long param_3,ulong param_4)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  short sVar9;
  short *psVar10;
  short *psVar11;
  short *psVar12;
  short *psVar13;
  short *psVar14;
  short *psVar15;
  short *psVar16;
  ulong uVar17;
  long lVar18;
  undefined2 *puVar19;
  short *psVar20;
  ulong uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  if (((param_2 != 0) && (param_3 != 0)) && (param_4 != 0)) {
    uVar17 = 0;
    if ((0xf < param_4) && (0x1f < (ulong)(param_2 - param_3))) {
      uVar17 = param_4 & 0xfffffffffffffff0;
      puVar19 = (undefined2 *)(param_2 + 0x10);
      psVar20 = (short *)(param_3 + 0x10);
      uVar21 = uVar17;
      do {
        psVar1 = psVar20 + -8;
        psVar2 = psVar20 + -7;
        psVar3 = psVar20 + -6;
        psVar4 = psVar20 + -5;
        psVar5 = psVar20 + -4;
        psVar6 = psVar20 + -3;
        psVar7 = psVar20 + -2;
        psVar8 = psVar20 + -1;
        sVar9 = *psVar20;
        psVar10 = psVar20 + 1;
        psVar11 = psVar20 + 2;
        psVar12 = psVar20 + 3;
        psVar13 = psVar20 + 4;
        psVar14 = psVar20 + 5;
        psVar15 = psVar20 + 6;
        psVar16 = psVar20 + 7;
        uVar21 = uVar21 - 0x10;
        psVar20 = psVar20 + 0x10;
        auVar24._0_4_ = (int)*psVar5;
        auVar24._4_4_ = (int)*psVar6;
        auVar24._8_4_ = (int)*psVar7;
        auVar24._12_4_ = (int)*psVar8;
        auVar22._0_4_ = (int)*psVar1;
        auVar22._4_4_ = (int)*psVar2;
        auVar22._8_4_ = (int)*psVar3;
        auVar22._12_4_ = (int)*psVar4;
        auVar25._0_4_ = (int)*psVar13;
        auVar25._4_4_ = (int)*psVar14;
        auVar25._8_4_ = (int)*psVar15;
        auVar25._12_4_ = (int)*psVar16;
        auVar23._0_4_ = (int)sVar9;
        auVar23._4_4_ = (int)*psVar10;
        auVar23._8_4_ = (int)*psVar11;
        auVar23._12_4_ = (int)*psVar12;
        auVar24 = NEON_scvtf(auVar24,4);
        auVar22 = NEON_scvtf(auVar22,4);
        auVar25 = NEON_scvtf(auVar25,4);
        auVar23 = NEON_scvtf(auVar23,4);
        *puVar19 = (short)(int)(auVar24._0_4_ * param_1);
        puVar19[1] = (short)(int)(auVar24._4_4_ * param_1);
        puVar19[2] = (short)(int)(auVar24._8_4_ * param_1);
        puVar19[3] = (short)(int)(auVar24._12_4_ * param_1);
        puVar19[-8] = (short)(int)(auVar22._0_4_ * param_1);
        puVar19[-7] = (short)(int)(auVar22._4_4_ * param_1);
        puVar19[-6] = (short)(int)(auVar22._8_4_ * param_1);
        puVar19[-5] = (short)(int)(auVar22._12_4_ * param_1);
        puVar19[8] = (short)(int)(auVar25._0_4_ * param_1);
        puVar19[9] = (short)(int)(auVar25._4_4_ * param_1);
        puVar19[10] = (short)(int)(auVar25._8_4_ * param_1);
        puVar19[0xb] = (short)(int)(auVar25._12_4_ * param_1);
        *puVar19 = (short)(int)(auVar23._0_4_ * param_1);
        puVar19[1] = (short)(int)(auVar23._4_4_ * param_1);
        puVar19[2] = (short)(int)(auVar23._8_4_ * param_1);
        puVar19[3] = (short)(int)(auVar23._12_4_ * param_1);
        puVar19 = puVar19 + 0x10;
      } while (uVar21 != 0);
      if (uVar17 == param_4) {
        return;
      }
    }
    lVar18 = param_4 - uVar17;
    puVar19 = (undefined2 *)(param_2 + uVar17 * 2);
    psVar20 = (short *)(param_3 + uVar17 * 2);
    do {
      lVar18 = lVar18 + -1;
      *puVar19 = (short)(int)((float)(int)*psVar20 * param_1);
      puVar19 = puVar19 + 1;
      psVar20 = psVar20 + 1;
    } while (lVar18 != 0);
  }
  return;
}


// ===== 005c6da4  ma_copy_and_apply_volume_factor_s24 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ma_copy_and_apply_volume_factor_s24
               (float param_1,undefined1 *param_2,undefined1 *param_3,ulong param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  uint uVar15;
  uint uVar16;
  undefined1 in_q4 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  uint uVar17;
  uint uVar18;
  uint uVar21;
  uint uVar22;
  undefined1 in_q5 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  uint uVar23;
  undefined1 in_q6 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  uint uVar30;
  uint uVar33;
  uint uVar34;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  uint uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  
  auVar3 = _DAT_0024e4f0;
  auVar2 = _DAT_0024e3a0;
  auVar25 = _DAT_0024e360;
  auVar1 = _DAT_0024e210;
  auVar14 = _DAT_0024de80;
  if (param_2 == (undefined1 *)0x0) {
    return;
  }
  if (param_3 == (undefined1 *)0x0) {
    return;
  }
  if (param_4 == 0) {
    return;
  }
  if (7 < param_4) {
    auVar28._8_8_ = 0;
    auVar28._0_8_ = param_4 - 1;
    lVar10 = (param_4 - 1) * 3;
    uVar6 = 0;
    if ((((param_2 + 2 + lVar10 < param_2 + 2) || (param_2 + 1 + lVar10 < param_2 + 1)) ||
        (param_2 + lVar10 < param_2)) || (SUB168(auVar28 * ZEXT816(3),8) != 0)) goto LAB_005c6dbc;
    if ((param_3 + param_4 * 3 <= param_2) || (param_2 + param_4 * 3 <= param_3)) {
      if (param_4 < 0x10) {
        uVar8 = 0;
        auVar14 = in_q4;
        auVar25 = in_q5;
      }
      else {
        uVar6 = param_4 & 0xfffffffffffffff0;
        puVar5 = param_3;
        puVar4 = param_2;
        uVar8 = uVar6;
        do {
          auVar44[0] = *puVar5;
          auVar47[0] = puVar5[1];
          auVar38[0] = puVar5[2];
          auVar44[1] = puVar5[3];
          auVar47[1] = puVar5[4];
          auVar38[1] = puVar5[5];
          auVar44[2] = puVar5[6];
          auVar47[2] = puVar5[7];
          auVar38[2] = puVar5[8];
          auVar44[3] = puVar5[9];
          auVar47[3] = puVar5[10];
          auVar38[3] = puVar5[0xb];
          auVar44[4] = puVar5[0xc];
          auVar47[4] = puVar5[0xd];
          auVar38[4] = puVar5[0xe];
          auVar44[5] = puVar5[0xf];
          auVar47[5] = puVar5[0x10];
          auVar38[5] = puVar5[0x11];
          auVar44[6] = puVar5[0x12];
          auVar47[6] = puVar5[0x13];
          auVar38[6] = puVar5[0x14];
          auVar44[7] = puVar5[0x15];
          auVar47[7] = puVar5[0x16];
          auVar38[7] = puVar5[0x17];
          auVar44[8] = puVar5[0x18];
          auVar47[8] = puVar5[0x19];
          auVar38[8] = puVar5[0x1a];
          auVar44[9] = puVar5[0x1b];
          auVar47[9] = puVar5[0x1c];
          auVar38[9] = puVar5[0x1d];
          auVar44[10] = puVar5[0x1e];
          auVar47[10] = puVar5[0x1f];
          auVar38[10] = puVar5[0x20];
          auVar44[0xb] = puVar5[0x21];
          auVar47[0xb] = puVar5[0x22];
          auVar38[0xb] = puVar5[0x23];
          auVar44[0xc] = puVar5[0x24];
          auVar47[0xc] = puVar5[0x25];
          auVar38[0xc] = puVar5[0x26];
          auVar44[0xd] = puVar5[0x27];
          auVar47[0xd] = puVar5[0x28];
          auVar38[0xd] = puVar5[0x29];
          auVar44[0xe] = puVar5[0x2a];
          auVar47[0xe] = puVar5[0x2b];
          auVar38[0xe] = puVar5[0x2c];
          auVar44[0xf] = puVar5[0x2d];
          auVar47[0xf] = puVar5[0x2e];
          auVar38[0xf] = puVar5[0x2f];
          puVar5 = puVar5 + 0x30;
          uVar8 = uVar8 - 0x10;
          auVar28 = a64_TBL(ZEXT816(0),auVar44,auVar14);
          auVar41 = a64_TBL(ZEXT816(0),auVar47,auVar14);
          auVar31 = a64_TBL(ZEXT816(0),auVar44,auVar2);
          auVar43 = a64_TBL(ZEXT816(0),auVar47,auVar2);
          auVar42 = a64_TBL(ZEXT816(0),auVar44,auVar3);
          auVar45 = a64_TBL(ZEXT816(0),auVar47,auVar3);
          auVar44 = a64_TBL(ZEXT816(0),auVar44,auVar1);
          auVar47 = a64_TBL(ZEXT816(0),auVar47,auVar1);
          auVar49 = a64_TBL(ZEXT816(0),auVar38,auVar14);
          auVar51 = a64_TBL(ZEXT816(0),auVar38,auVar2);
          auVar53 = a64_TBL(ZEXT816(0),auVar38,auVar3);
          auVar36 = a64_TBL(ZEXT816(0),auVar38,auVar1);
          auVar39[5] = auVar28[4];
          auVar39[6] = auVar41[4] | auVar28[5];
          auVar39[9] = auVar28[8];
          auVar39[10] = auVar41[8] | auVar28[9];
          auVar39[0xd] = auVar28[0xc];
          auVar39[0xe] = auVar41[0xc] | auVar28[0xd];
          auVar27[5] = auVar31[4];
          auVar27[6] = auVar43[4] | auVar31[5];
          auVar27[9] = auVar31[8];
          auVar27[10] = auVar43[8] | auVar31[9];
          auVar27[0xd] = auVar31[0xc];
          auVar27[0xe] = auVar43[0xc] | auVar31[0xd];
          auVar39._0_5_ =
               (uint5)CONCAT12(auVar41[1] | auVar28[2] | auVar49[0],
                               CONCAT11(auVar41[0] | auVar28[1],auVar28[0])) << 8;
          auVar39[7] = auVar41[5] | auVar28[6] | auVar49[4];
          auVar39[8] = 0;
          auVar39[0xb] = auVar41[9] | auVar28[10] | auVar49[8];
          auVar39[0xc] = 0;
          auVar39[0xf] = auVar41[0xd] | auVar28[0xe] | auVar49[0xc];
          auVar27._0_5_ =
               (uint5)CONCAT12(auVar43[1] | auVar31[2] | auVar51[0],
                               CONCAT11(auVar43[0] | auVar31[1],auVar31[0])) << 8;
          auVar27[7] = auVar43[5] | auVar31[6] | auVar51[4];
          auVar27[8] = 0;
          auVar27[0xb] = auVar43[9] | auVar31[10] | auVar51[8];
          auVar27[0xc] = 0;
          auVar27[0xf] = auVar43[0xd] | auVar31[0xe] | auVar51[0xc];
          auVar43._0_5_ =
               (uint5)CONCAT12(auVar45[1] | auVar42[2] | auVar53[0],
                               CONCAT11(auVar45[0] | auVar42[1],auVar42[0])) << 8;
          auVar43[5] = auVar42[4];
          auVar43[6] = auVar45[4] | auVar42[5];
          auVar43[7] = auVar45[5] | auVar42[6] | auVar53[4];
          auVar43[8] = 0;
          auVar43[9] = auVar42[8];
          auVar43[10] = auVar45[8] | auVar42[9];
          auVar43[0xb] = auVar45[9] | auVar42[10] | auVar53[8];
          auVar43[0xc] = 0;
          auVar43[0xd] = auVar42[0xc];
          auVar43[0xe] = auVar45[0xc] | auVar42[0xd];
          auVar43[0xf] = auVar45[0xd] | auVar42[0xe] | auVar53[0xc];
          auVar41._0_5_ =
               (uint5)CONCAT12(auVar47[1] | auVar44[2] | auVar36[0],
                               CONCAT11(auVar47[0] | auVar44[1],auVar44[0])) << 8;
          auVar41[5] = auVar44[4];
          auVar41[6] = auVar47[4] | auVar44[5];
          auVar41[7] = auVar47[5] | auVar44[6] | auVar36[4];
          auVar41[8] = 0;
          auVar41[9] = auVar44[8];
          auVar41[10] = auVar47[8] | auVar44[9];
          auVar41[0xb] = auVar47[9] | auVar44[10] | auVar36[8];
          auVar41[0xc] = 0;
          auVar41[0xd] = auVar44[0xc];
          auVar41[0xe] = auVar47[0xc] | auVar44[0xd];
          auVar41[0xf] = auVar47[0xd] | auVar44[0xe] | auVar36[0xc];
          auVar28 = NEON_scvtf(auVar39,4);
          auVar31 = NEON_scvtf(auVar27,4);
          auVar39 = NEON_scvtf(auVar43,4);
          auVar36 = NEON_scvtf(auVar41,4);
          in_q6._0_4_ = (uint)(auVar28._0_4_ * param_1);
          in_q6._4_4_ = (uint)(auVar28._4_4_ * param_1);
          in_q6._8_4_ = (uint)(auVar28._8_4_ * param_1);
          in_q6._12_4_ = (uint)(auVar28._12_4_ * param_1);
          uVar12 = (uint)(auVar31._0_4_ * param_1);
          uVar15 = (uint)(auVar31._4_4_ * param_1);
          uVar16 = (uint)(auVar31._8_4_ * param_1);
          uVar17 = (uint)(auVar31._12_4_ * param_1);
          uVar30 = (uint)(auVar39._0_4_ * param_1);
          uVar33 = (uint)(auVar39._4_4_ * param_1);
          uVar34 = (uint)(auVar39._8_4_ * param_1);
          uVar35 = (uint)(auVar39._12_4_ * param_1);
          uVar18 = (uint)(auVar36._0_4_ * param_1);
          uVar21 = (uint)(auVar36._4_4_ * param_1);
          uVar22 = (uint)(auVar36._8_4_ * param_1);
          uVar23 = (uint)(auVar36._12_4_ * param_1);
          auVar51._0_4_ = in_q6._0_4_ >> 8;
          auVar51._4_4_ = in_q6._4_4_ >> 8;
          auVar51._8_4_ = in_q6._8_4_ >> 8;
          auVar51._12_4_ = in_q6._12_4_ >> 8;
          auVar50._0_4_ = in_q6._0_4_ >> 0x10;
          auVar50._4_4_ = in_q6._4_4_ >> 0x10;
          auVar50._8_4_ = in_q6._8_4_ >> 0x10;
          auVar50._12_4_ = in_q6._12_4_ >> 0x10;
          auVar49._0_4_ = uVar12 >> 8;
          auVar49._4_4_ = uVar15 >> 8;
          auVar49._8_4_ = uVar16 >> 8;
          auVar49._12_4_ = uVar17 >> 8;
          auVar48._0_4_ = uVar12 >> 0x10;
          auVar48._4_4_ = uVar15 >> 0x10;
          auVar48._8_4_ = uVar16 >> 0x10;
          auVar48._12_4_ = uVar17 >> 0x10;
          auVar45._0_4_ = uVar30 >> 8;
          auVar45._4_4_ = uVar33 >> 8;
          auVar45._8_4_ = uVar34 >> 8;
          auVar45._12_4_ = uVar35 >> 8;
          auVar46._0_4_ = uVar30 >> 0x10;
          auVar46._4_4_ = uVar33 >> 0x10;
          auVar46._8_4_ = uVar34 >> 0x10;
          auVar46._12_4_ = uVar35 >> 0x10;
          auVar54._0_4_ = uVar30 >> 0x18;
          auVar54._4_4_ = uVar33 >> 0x18;
          auVar54._8_4_ = uVar34 >> 0x18;
          auVar54._12_4_ = uVar35 >> 0x18;
          auVar42._0_4_ = uVar18 >> 8;
          auVar42._4_4_ = uVar21 >> 8;
          auVar42._8_4_ = uVar22 >> 8;
          auVar42._12_4_ = uVar23 >> 8;
          auVar53._0_4_ = uVar18 >> 0x10;
          auVar53._4_4_ = uVar21 >> 0x10;
          auVar53._8_4_ = uVar22 >> 0x10;
          auVar53._12_4_ = uVar23 >> 0x10;
          auVar52._0_4_ = uVar18 >> 0x18;
          auVar52._4_4_ = uVar21 >> 0x18;
          auVar52._8_4_ = uVar22 >> 0x18;
          auVar52._12_4_ = uVar23 >> 0x18;
          auVar28 = a64_TBL(ZEXT816(0),auVar42,auVar45,auVar49,auVar51,auVar25);
          auVar39 = a64_TBL(ZEXT816(0),auVar53,auVar46,auVar48,auVar50,auVar25);
          auVar31._4_4_ = uVar15 >> 0x18;
          auVar31._0_4_ = uVar12 >> 0x18;
          auVar31._8_4_ = uVar16 >> 0x18;
          auVar31._12_4_ = uVar17 >> 0x18;
          auVar36._4_4_ = in_q6._4_4_ >> 0x18;
          auVar36._0_4_ = in_q6._0_4_ >> 0x18;
          auVar36._8_4_ = in_q6._8_4_ >> 0x18;
          auVar36._12_4_ = in_q6._12_4_ >> 0x18;
          auVar31 = a64_TBL(ZEXT816(0),auVar52,auVar54,auVar31,auVar36,auVar25);
          *puVar4 = auVar28[0];
          puVar4[1] = auVar39[0];
          puVar4[2] = auVar31[0];
          puVar4[3] = auVar28[1];
          puVar4[4] = auVar39[1];
          puVar4[5] = auVar31[1];
          puVar4[6] = auVar28[2];
          puVar4[7] = auVar39[2];
          puVar4[8] = auVar31[2];
          puVar4[9] = auVar28[3];
          puVar4[10] = auVar39[3];
          puVar4[0xb] = auVar31[3];
          puVar4[0xc] = auVar28[4];
          puVar4[0xd] = auVar39[4];
          puVar4[0xe] = auVar31[4];
          puVar4[0xf] = auVar28[5];
          puVar4[0x10] = auVar39[5];
          puVar4[0x11] = auVar31[5];
          puVar4[0x12] = auVar28[6];
          puVar4[0x13] = auVar39[6];
          puVar4[0x14] = auVar31[6];
          puVar4[0x15] = auVar28[7];
          puVar4[0x16] = auVar39[7];
          puVar4[0x17] = auVar31[7];
          puVar4[0x18] = auVar28[8];
          puVar4[0x19] = auVar39[8];
          puVar4[0x1a] = auVar31[8];
          puVar4[0x1b] = auVar28[9];
          puVar4[0x1c] = auVar39[9];
          puVar4[0x1d] = auVar31[9];
          puVar4[0x1e] = auVar28[10];
          puVar4[0x1f] = auVar39[10];
          puVar4[0x20] = auVar31[10];
          puVar4[0x21] = auVar28[0xb];
          puVar4[0x22] = auVar39[0xb];
          puVar4[0x23] = auVar31[0xb];
          puVar4[0x24] = auVar28[0xc];
          puVar4[0x25] = auVar39[0xc];
          puVar4[0x26] = auVar31[0xc];
          puVar4[0x27] = auVar28[0xd];
          puVar4[0x28] = auVar39[0xd];
          puVar4[0x29] = auVar31[0xd];
          puVar4[0x2a] = auVar28[0xe];
          puVar4[0x2b] = auVar39[0xe];
          puVar4[0x2c] = auVar31[0xe];
          puVar4[0x2d] = auVar28[0xf];
          puVar4[0x2e] = auVar39[0xf];
          puVar4[0x2f] = auVar31[0xf];
          puVar4 = puVar4 + 0x30;
        } while (uVar8 != 0);
        if (uVar6 == param_4) {
          return;
        }
        uVar8 = uVar6;
        if (((uint)param_4 >> 3 & 1) == 0) goto LAB_005c6dbc;
      }
      auVar3 = _DAT_0024e4f0;
      auVar2 = _DAT_0024e210;
      auVar1 = _DAT_0024e040;
      uVar6 = param_4 & 0xfffffffffffffff8;
      lVar10 = uVar8 - uVar6;
      puVar5 = param_2 + uVar8 * 3;
      puVar4 = param_3 + uVar8 * 3;
      do {
        auVar13[0] = *puVar4;
        auVar19[0] = puVar4[1];
        auVar24[0] = puVar4[2];
        auVar13[1] = puVar4[3];
        auVar19[1] = puVar4[4];
        auVar24[1] = puVar4[5];
        auVar13[2] = puVar4[6];
        auVar19[2] = puVar4[7];
        auVar24[2] = puVar4[8];
        auVar13[3] = puVar4[9];
        auVar19[3] = puVar4[10];
        auVar24[3] = puVar4[0xb];
        auVar13[4] = puVar4[0xc];
        auVar19[4] = puVar4[0xd];
        auVar24[4] = puVar4[0xe];
        auVar13[5] = puVar4[0xf];
        auVar19[5] = puVar4[0x10];
        auVar24[5] = puVar4[0x11];
        auVar13[6] = puVar4[0x12];
        auVar19[6] = puVar4[0x13];
        auVar24[6] = puVar4[0x14];
        auVar13._8_8_ = auVar14._8_8_;
        auVar13[7] = puVar4[0x15];
        auVar19._8_8_ = auVar25._8_8_;
        auVar19[7] = puVar4[0x16];
        auVar24._8_8_ = in_q6._8_8_;
        auVar24[7] = puVar4[0x17];
        puVar4 = puVar4 + 0x18;
        lVar10 = lVar10 + 8;
        auVar25 = a64_TBL(ZEXT816(0),auVar13,auVar3);
        auVar28 = a64_TBL(ZEXT816(0),auVar19,auVar3);
        auVar31 = a64_TBL(ZEXT816(0),auVar13,auVar2);
        auVar36 = a64_TBL(ZEXT816(0),auVar19,auVar2);
        auVar39 = a64_TBL(ZEXT816(0),auVar24,auVar3);
        auVar14 = a64_TBL(ZEXT816(0),auVar24,auVar2);
        auVar20[5] = auVar25[4];
        auVar20[6] = auVar28[4] | auVar25[5];
        auVar20[9] = auVar25[8];
        auVar20[10] = auVar28[8] | auVar25[9];
        auVar20[0xd] = auVar25[0xc];
        auVar20[0xe] = auVar28[0xc] | auVar25[0xd];
        auVar20._0_5_ =
             (uint5)CONCAT12(auVar28[1] | auVar25[2] | auVar39[0],
                             CONCAT11(auVar28[0] | auVar25[1],auVar25[0])) << 8;
        auVar20[7] = auVar28[5] | auVar25[6] | auVar39[4];
        auVar20[8] = 0;
        auVar20[0xb] = auVar28[9] | auVar25[10] | auVar39[8];
        auVar20[0xc] = 0;
        auVar20[0xf] = auVar28[0xd] | auVar25[0xe] | auVar39[0xc];
        auVar25._0_5_ =
             (uint5)CONCAT12(auVar36[1] | auVar31[2] | auVar14[0],
                             CONCAT11(auVar36[0] | auVar31[1],auVar31[0])) << 8;
        auVar25[5] = auVar31[4];
        auVar25[6] = auVar36[4] | auVar31[5];
        auVar25[7] = auVar36[5] | auVar31[6] | auVar14[4];
        auVar25[8] = 0;
        auVar25[9] = auVar31[8];
        auVar25[10] = auVar36[8] | auVar31[9];
        auVar25[0xb] = auVar36[9] | auVar31[10] | auVar14[8];
        auVar25[0xc] = 0;
        auVar25[0xd] = auVar31[0xc];
        auVar25[0xe] = auVar36[0xc] | auVar31[0xd];
        auVar25[0xf] = auVar36[0xd] | auVar31[0xe] | auVar14[0xc];
        auVar28 = NEON_scvtf(auVar20,4);
        auVar14 = NEON_scvtf(auVar25,4);
        uVar18 = (uint)(auVar28._0_4_ * param_1);
        uVar21 = (uint)(auVar28._4_4_ * param_1);
        uVar22 = (uint)(auVar28._8_4_ * param_1);
        uVar23 = (uint)(auVar28._12_4_ * param_1);
        uVar12 = (uint)(auVar14._0_4_ * param_1);
        uVar15 = (uint)(auVar14._4_4_ * param_1);
        uVar16 = (uint)(auVar14._8_4_ * param_1);
        uVar17 = (uint)(auVar14._12_4_ * param_1);
        auVar26._0_4_ = uVar18 >> 8;
        auVar26._4_4_ = uVar21 >> 8;
        auVar26._8_4_ = uVar22 >> 8;
        auVar26._12_4_ = uVar23 >> 8;
        auVar32._0_4_ = uVar18 >> 0x10;
        auVar32._4_4_ = uVar21 >> 0x10;
        auVar32._8_4_ = uVar22 >> 0x10;
        auVar32._12_4_ = uVar23 >> 0x10;
        auVar40._0_4_ = uVar18 >> 0x18;
        auVar40._4_4_ = uVar21 >> 0x18;
        auVar40._8_4_ = uVar22 >> 0x18;
        auVar40._12_4_ = uVar23 >> 0x18;
        auVar14._0_4_ = uVar12 >> 8;
        auVar14._4_4_ = uVar15 >> 8;
        auVar14._8_4_ = uVar16 >> 8;
        auVar14._12_4_ = uVar17 >> 8;
        auVar29._0_4_ = uVar12 >> 0x10;
        auVar29._4_4_ = uVar15 >> 0x10;
        auVar29._8_4_ = uVar16 >> 0x10;
        auVar29._12_4_ = uVar17 >> 0x10;
        auVar37._0_4_ = uVar12 >> 0x18;
        auVar37._4_4_ = uVar15 >> 0x18;
        auVar37._8_4_ = uVar16 >> 0x18;
        auVar37._12_4_ = uVar17 >> 0x18;
        auVar14 = a64_TBL(ZEXT816(0),auVar14,auVar26,auVar1);
        auVar25 = a64_TBL(ZEXT816(0),auVar29,auVar32,auVar1);
        in_q6 = a64_TBL(ZEXT816(0),auVar37,auVar40,auVar1);
        *puVar5 = auVar14[0];
        puVar5[1] = auVar25[0];
        puVar5[2] = in_q6[0];
        puVar5[3] = auVar14[1];
        puVar5[4] = auVar25[1];
        puVar5[5] = in_q6[1];
        puVar5[6] = auVar14[2];
        puVar5[7] = auVar25[2];
        puVar5[8] = in_q6[2];
        puVar5[9] = auVar14[3];
        puVar5[10] = auVar25[3];
        puVar5[0xb] = in_q6[3];
        puVar5[0xc] = auVar14[4];
        puVar5[0xd] = auVar25[4];
        puVar5[0xe] = in_q6[4];
        puVar5[0xf] = auVar14[5];
        puVar5[0x10] = auVar25[5];
        puVar5[0x11] = in_q6[5];
        puVar5[0x12] = auVar14[6];
        puVar5[0x13] = auVar25[6];
        puVar5[0x14] = in_q6[6];
        puVar5[0x15] = auVar14[7];
        puVar5[0x16] = auVar25[7];
        puVar5[0x17] = in_q6[7];
        puVar5 = puVar5 + 0x18;
      } while (lVar10 != 0);
      if (uVar6 == param_4) {
        return;
      }
      goto LAB_005c6dbc;
    }
  }
  uVar6 = 0;
LAB_005c6dbc:
  lVar7 = param_4 - uVar6;
  lVar10 = uVar6 * 3 + 2;
  pbVar9 = param_3 + lVar10;
  puVar5 = param_2 + lVar10;
  do {
    lVar7 = lVar7 + -1;
    iVar11 = (int)((float)(int)((uint)pbVar9[-2] << 8 | (uint)pbVar9[-1] << 0x10 |
                               (uint)*pbVar9 << 0x18) * param_1);
    puVar5[-2] = (char)((uint)iVar11 >> 8);
    puVar5[-1] = (char)((uint)iVar11 >> 0x10);
    *puVar5 = (char)((uint)iVar11 >> 0x18);
    pbVar9 = pbVar9 + 3;
    puVar5 = puVar5 + 3;
  } while (lVar7 != 0);
  return;
}


// ===== 005c7090  ma_copy_and_apply_volume_factor_s32 =====

void ma_copy_and_apply_volume_factor_s32(float param_1,long param_2,long param_3,ulong param_4)

{
  undefined1 (*pauVar1) [16];
  ulong uVar2;
  long lVar3;
  int *piVar4;
  undefined1 (*pauVar5) [16];
  int *piVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if (((param_2 != 0) && (param_3 != 0)) && (param_4 != 0)) {
    uVar2 = 0;
    if ((7 < param_4) && (0x1f < (ulong)(param_2 - param_3))) {
      uVar2 = param_4 & 0xfffffffffffffff8;
      piVar4 = (int *)(param_2 + 0x10);
      pauVar5 = (undefined1 (*) [16])(param_3 + 0x10);
      uVar7 = uVar2;
      do {
        pauVar1 = pauVar5 + -1;
        auVar9 = *pauVar5;
        uVar7 = uVar7 - 8;
        pauVar5 = pauVar5 + 2;
        auVar8 = NEON_scvtf(*pauVar1,4);
        auVar9 = NEON_scvtf(auVar9,4);
        *piVar4 = (int)(auVar8._8_4_ * param_1);
        piVar4[1] = (int)(auVar8._12_4_ * param_1);
        piVar4[-4] = (int)(auVar8._0_4_ * param_1);
        piVar4[-3] = (int)(auVar8._4_4_ * param_1);
        piVar4[4] = (int)(auVar9._8_4_ * param_1);
        piVar4[5] = (int)(auVar9._12_4_ * param_1);
        *piVar4 = (int)(auVar9._0_4_ * param_1);
        piVar4[1] = (int)(auVar9._4_4_ * param_1);
        piVar4 = piVar4 + 8;
      } while (uVar7 != 0);
      if (uVar2 == param_4) {
        return;
      }
    }
    lVar3 = param_4 - uVar2;
    piVar4 = (int *)(param_2 + uVar2 * 4);
    piVar6 = (int *)(param_3 + uVar2 * 4);
    do {
      lVar3 = lVar3 + -1;
      *piVar4 = (int)((float)*piVar6 * param_1);
      piVar4 = piVar4 + 1;
      piVar6 = piVar6 + 1;
    } while (lVar3 != 0);
  }
  return;
}


// ===== 005c712c  ma_copy_and_apply_volume_factor_f32 =====

void ma_copy_and_apply_volume_factor_f32(float param_1,long param_2,long param_3,ulong param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  float *pfVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  float *pfVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    if (param_1 == 1.0) {
      if ((param_2 != param_3) && (param_4 != 0)) {
        uVar2 = 0;
        if ((7 < param_4) && (0x1f < (ulong)(param_2 - param_3))) {
          uVar2 = param_4 & 0xfffffffffffffff8;
          puVar4 = (undefined8 *)(param_2 + 0x10);
          puVar7 = (undefined8 *)(param_3 + 0x10);
          uVar10 = uVar2;
          do {
            puVar1 = puVar7 + -1;
            uVar11 = puVar7[-2];
            uVar13 = puVar7[1];
            uVar12 = *puVar7;
            uVar10 = uVar10 - 8;
            puVar7 = puVar7 + 4;
            puVar4[-1] = *puVar1;
            puVar4[-2] = uVar11;
            puVar4[1] = uVar13;
            *puVar4 = uVar12;
            puVar4 = puVar4 + 4;
          } while (uVar10 != 0);
          if (uVar2 == param_4) {
            return;
          }
        }
        lVar3 = param_4 - uVar2;
        puVar5 = (undefined4 *)(param_2 + uVar2 * 4);
        puVar8 = (undefined4 *)(param_3 + uVar2 * 4);
        do {
          lVar3 = lVar3 + -1;
          *puVar5 = *puVar8;
          puVar5 = puVar5 + 1;
          puVar8 = puVar8 + 1;
        } while (lVar3 != 0);
      }
    }
    else if (param_4 != 0) {
      uVar2 = 0;
      if ((7 < param_4) && (0x1f < (ulong)(param_2 - param_3))) {
        uVar2 = param_4 & 0xfffffffffffffff8;
        puVar4 = (undefined8 *)(param_2 + 0x10);
        puVar7 = (undefined8 *)(param_3 + 0x10);
        uVar10 = uVar2;
        do {
          puVar1 = puVar7 + -1;
          uVar11 = puVar7[-2];
          uVar13 = puVar7[1];
          uVar12 = *puVar7;
          uVar10 = uVar10 - 8;
          puVar7 = puVar7 + 4;
          puVar4[-1] = CONCAT44((float)((ulong)*puVar1 >> 0x20) * param_1,(float)*puVar1 * param_1);
          puVar4[-2] = CONCAT44((float)((ulong)uVar11 >> 0x20) * param_1,(float)uVar11 * param_1);
          puVar4[1] = CONCAT44((float)((ulong)uVar13 >> 0x20) * param_1,(float)uVar13 * param_1);
          *puVar4 = CONCAT44((float)((ulong)uVar12 >> 0x20) * param_1,(float)uVar12 * param_1);
          puVar4 = puVar4 + 4;
        } while (uVar10 != 0);
        if (uVar2 == param_4) {
          return;
        }
      }
      lVar3 = param_4 - uVar2;
      pfVar6 = (float *)(param_2 + uVar2 * 4);
      pfVar9 = (float *)(param_3 + uVar2 * 4);
      do {
        lVar3 = lVar3 + -1;
        *pfVar6 = *pfVar9 * param_1;
        pfVar6 = pfVar6 + 1;
        pfVar9 = pfVar9 + 1;
      } while (lVar3 != 0);
    }
  }
  return;
}


// ===== 005c7230  ma_apply_volume_factor_u8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ma_apply_volume_factor_u8(float param_1,undefined1 (*param_2) [16],ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  long lVar7;
  ulong *puVar8;
  undefined1 (*pauVar9) [16];
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  auVar12 = _DAT_0024e4f0;
  auVar11 = _DAT_0024e3a0;
  auVar3 = _DAT_0024e360;
  auVar2 = _DAT_0024e210;
  auVar1 = _DAT_0024de80;
  if (param_2 == (undefined1 (*) [16])0x0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  if (param_3 < 8) {
    uVar4 = 0;
  }
  else {
    if (param_3 < 0x10) {
      uVar5 = 0;
    }
    else {
      uVar4 = param_3 & 0xfffffffffffffff0;
      pauVar9 = param_2;
      uVar5 = uVar4;
      do {
        auVar13 = *pauVar9;
        uVar5 = uVar5 - 0x10;
        auVar14 = a64_TBL(ZEXT816(0),auVar13,auVar1);
        auVar16 = a64_TBL(ZEXT816(0),auVar13,auVar11);
        auVar18 = a64_TBL(ZEXT816(0),auVar13,auVar12);
        auVar13 = a64_TBL(ZEXT816(0),auVar13,auVar2);
        auVar15 = NEON_ucvtf(auVar14,4);
        auVar17 = NEON_ucvtf(auVar16,4);
        auVar16 = NEON_ucvtf(auVar18,4);
        auVar14 = NEON_ucvtf(auVar13,4);
        auVar13._4_4_ = (int)(auVar14._4_4_ * param_1);
        auVar13._0_4_ = (int)(auVar14._0_4_ * param_1);
        auVar13._8_4_ = (int)(auVar14._8_4_ * param_1);
        auVar13._12_4_ = (int)(auVar14._12_4_ * param_1);
        auVar14._4_4_ = (int)(auVar16._4_4_ * param_1);
        auVar14._0_4_ = (int)(auVar16._0_4_ * param_1);
        auVar14._8_4_ = (int)(auVar16._8_4_ * param_1);
        auVar14._12_4_ = (int)(auVar16._12_4_ * param_1);
        auVar16._4_4_ = (int)(auVar17._4_4_ * param_1);
        auVar16._0_4_ = (int)(auVar17._0_4_ * param_1);
        auVar16._8_4_ = (int)(auVar17._8_4_ * param_1);
        auVar16._12_4_ = (int)(auVar17._12_4_ * param_1);
        auVar17._4_4_ = (int)(auVar15._4_4_ * param_1);
        auVar17._0_4_ = (int)(auVar15._0_4_ * param_1);
        auVar17._8_4_ = (int)(auVar15._8_4_ * param_1);
        auVar17._12_4_ = (int)(auVar15._12_4_ * param_1);
        auVar13 = a64_TBL(ZEXT816(0),auVar13,auVar14,auVar16,auVar17,auVar3);
        *(long *)(*pauVar9 + 8) = auVar13._8_8_;
        *(long *)*pauVar9 = auVar13._0_8_;
        pauVar9 = pauVar9 + 1;
      } while (uVar5 != 0);
      if (uVar4 == param_3) {
        return;
      }
      uVar5 = uVar4;
      if (((uint)param_3 >> 3 & 1) == 0) goto LAB_005c7348;
    }
    auVar3 = _DAT_0024e4f0;
    auVar2 = _DAT_0024e210;
    auVar1 = _DAT_0024e040;
    uVar4 = param_3 & 0xfffffffffffffff8;
    lVar7 = uVar5 - uVar4;
    puVar8 = (ulong *)(*param_2 + uVar5);
    do {
      auVar11._0_8_ = *puVar8;
      auVar11._8_8_ = 0;
      lVar7 = lVar7 + 8;
      auVar12 = a64_TBL(ZEXT816(0),auVar11,auVar3);
      auVar11 = a64_TBL(ZEXT816(0),auVar11,auVar2);
      auVar12 = NEON_ucvtf(auVar12,4);
      auVar11 = NEON_ucvtf(auVar11,4);
      auVar15._0_4_ = (int)(auVar12._0_4_ * param_1);
      auVar15._4_4_ = (int)(auVar12._4_4_ * param_1);
      auVar15._8_4_ = (int)(auVar12._8_4_ * param_1);
      auVar15._12_4_ = (int)(auVar12._12_4_ * param_1);
      auVar12._0_4_ = (int)(auVar11._0_4_ * param_1);
      auVar12._4_4_ = (int)(auVar11._4_4_ * param_1);
      auVar12._8_4_ = (int)(auVar11._8_4_ * param_1);
      auVar12._12_4_ = (int)(auVar11._12_4_ * param_1);
      auVar11 = a64_TBL(ZEXT816(0),auVar12,auVar15,auVar1);
      *puVar8 = auVar11._0_8_;
      puVar8 = puVar8 + 1;
    } while (lVar7 != 0);
    if (uVar4 == param_3) {
      return;
    }
  }
LAB_005c7348:
  lVar7 = param_3 - uVar4;
  pbVar6 = *param_2 + uVar4;
  do {
    lVar7 = lVar7 + -1;
    fVar10 = (float)NEON_ucvtf((uint)*pbVar6);
    *pbVar6 = (byte)(int)(fVar10 * param_1);
    pbVar6 = pbVar6 + 1;
  } while (lVar7 != 0);
  return;
}


// ===== 005c7370  ma_apply_volume_factor_s16 =====

void ma_apply_volume_factor_s16(float param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  short *psVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if ((param_2 != 0) && (param_3 != 0)) {
    if (param_3 < 0x10) {
      uVar1 = 0;
    }
    else {
      uVar1 = param_3 & 0xfffffffffffffff0;
      psVar3 = (short *)(param_2 + 0x10);
      uVar4 = uVar1;
      do {
        uVar4 = uVar4 - 0x10;
        auVar7._0_4_ = (int)psVar3[-4];
        auVar7._4_4_ = (int)psVar3[-3];
        auVar7._8_4_ = (int)psVar3[-2];
        auVar7._12_4_ = (int)psVar3[-1];
        auVar5._0_4_ = (int)psVar3[-8];
        auVar5._4_4_ = (int)psVar3[-7];
        auVar5._8_4_ = (int)psVar3[-6];
        auVar5._12_4_ = (int)psVar3[-5];
        auVar8._0_4_ = (int)psVar3[4];
        auVar8._4_4_ = (int)psVar3[5];
        auVar8._8_4_ = (int)psVar3[6];
        auVar8._12_4_ = (int)psVar3[7];
        auVar6._0_4_ = (int)*psVar3;
        auVar6._4_4_ = (int)psVar3[1];
        auVar6._8_4_ = (int)psVar3[2];
        auVar6._12_4_ = (int)psVar3[3];
        auVar7 = NEON_scvtf(auVar7,4);
        auVar5 = NEON_scvtf(auVar5,4);
        auVar8 = NEON_scvtf(auVar8,4);
        auVar6 = NEON_scvtf(auVar6,4);
        *psVar3 = (short)(int)(auVar7._0_4_ * param_1);
        psVar3[1] = (short)(int)(auVar7._4_4_ * param_1);
        psVar3[2] = (short)(int)(auVar7._8_4_ * param_1);
        psVar3[3] = (short)(int)(auVar7._12_4_ * param_1);
        psVar3[-8] = (short)(int)(auVar5._0_4_ * param_1);
        psVar3[-7] = (short)(int)(auVar5._4_4_ * param_1);
        psVar3[-6] = (short)(int)(auVar5._8_4_ * param_1);
        psVar3[-5] = (short)(int)(auVar5._12_4_ * param_1);
        psVar3[8] = (short)(int)(auVar8._0_4_ * param_1);
        psVar3[9] = (short)(int)(auVar8._4_4_ * param_1);
        psVar3[10] = (short)(int)(auVar8._8_4_ * param_1);
        psVar3[0xb] = (short)(int)(auVar8._12_4_ * param_1);
        *psVar3 = (short)(int)(auVar6._0_4_ * param_1);
        psVar3[1] = (short)(int)(auVar6._4_4_ * param_1);
        psVar3[2] = (short)(int)(auVar6._8_4_ * param_1);
        psVar3[3] = (short)(int)(auVar6._12_4_ * param_1);
        psVar3 = psVar3 + 0x10;
      } while (uVar4 != 0);
      if (uVar1 == param_3) {
        return;
      }
    }
    lVar2 = param_3 - uVar1;
    psVar3 = (short *)(param_2 + uVar1 * 2);
    do {
      lVar2 = lVar2 + -1;
      *psVar3 = (short)(int)((float)(int)*psVar3 * param_1);
      psVar3 = psVar3 + 1;
    } while (lVar2 != 0);
  }
  return;
}


// ===== 005c7420  ma_apply_volume_factor_s24 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ma_apply_volume_factor_s24(float param_1,undefined1 *param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  uint uVar13;
  uint uVar14;
  undefined1 in_q4 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint uVar15;
  uint uVar16;
  uint uVar19;
  uint uVar20;
  undefined1 in_q5 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  uint uVar21;
  undefined1 in_q6 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  uint uVar28;
  uint uVar31;
  uint uVar32;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  uint uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  
  auVar3 = _DAT_0024e4f0;
  auVar2 = _DAT_0024e3a0;
  auVar23 = _DAT_0024e360;
  auVar1 = _DAT_0024e210;
  auVar12 = _DAT_0024de80;
  if (param_2 == (undefined1 *)0x0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  if (param_3 < 8) {
    uVar5 = 0;
  }
  else {
    auVar26._8_8_ = 0;
    auVar26._0_8_ = param_3 - 1;
    lVar6 = (param_3 - 1) * 3;
    uVar5 = 0;
    if ((((param_2 + 1 <= param_2 + 1 + lVar6) && (param_2 + 2 <= param_2 + 2 + lVar6)) &&
        (param_2 <= param_2 + lVar6)) && (SUB168(auVar26 * ZEXT816(3),8) == 0)) {
      if (param_3 < 0x10) {
        uVar7 = 0;
        auVar12 = in_q4;
        auVar23 = in_q5;
      }
      else {
        uVar5 = param_3 & 0xfffffffffffffff0;
        puVar4 = param_2;
        uVar7 = uVar5;
        do {
          auVar42[0] = *puVar4;
          auVar45[0] = puVar4[1];
          auVar36[0] = puVar4[2];
          auVar42[1] = puVar4[3];
          auVar45[1] = puVar4[4];
          auVar36[1] = puVar4[5];
          auVar42[2] = puVar4[6];
          auVar45[2] = puVar4[7];
          auVar36[2] = puVar4[8];
          auVar42[3] = puVar4[9];
          auVar45[3] = puVar4[10];
          auVar36[3] = puVar4[0xb];
          auVar42[4] = puVar4[0xc];
          auVar45[4] = puVar4[0xd];
          auVar36[4] = puVar4[0xe];
          auVar42[5] = puVar4[0xf];
          auVar45[5] = puVar4[0x10];
          auVar36[5] = puVar4[0x11];
          auVar42[6] = puVar4[0x12];
          auVar45[6] = puVar4[0x13];
          auVar36[6] = puVar4[0x14];
          auVar42[7] = puVar4[0x15];
          auVar45[7] = puVar4[0x16];
          auVar36[7] = puVar4[0x17];
          auVar42[8] = puVar4[0x18];
          auVar45[8] = puVar4[0x19];
          auVar36[8] = puVar4[0x1a];
          auVar42[9] = puVar4[0x1b];
          auVar45[9] = puVar4[0x1c];
          auVar36[9] = puVar4[0x1d];
          auVar42[10] = puVar4[0x1e];
          auVar45[10] = puVar4[0x1f];
          auVar36[10] = puVar4[0x20];
          auVar42[0xb] = puVar4[0x21];
          auVar45[0xb] = puVar4[0x22];
          auVar36[0xb] = puVar4[0x23];
          auVar42[0xc] = puVar4[0x24];
          auVar45[0xc] = puVar4[0x25];
          auVar36[0xc] = puVar4[0x26];
          auVar42[0xd] = puVar4[0x27];
          auVar45[0xd] = puVar4[0x28];
          auVar36[0xd] = puVar4[0x29];
          auVar42[0xe] = puVar4[0x2a];
          auVar45[0xe] = puVar4[0x2b];
          auVar36[0xe] = puVar4[0x2c];
          auVar42[0xf] = puVar4[0x2d];
          auVar45[0xf] = puVar4[0x2e];
          auVar36[0xf] = puVar4[0x2f];
          uVar7 = uVar7 - 0x10;
          auVar26 = a64_TBL(ZEXT816(0),auVar42,auVar12);
          auVar39 = a64_TBL(ZEXT816(0),auVar45,auVar12);
          auVar29 = a64_TBL(ZEXT816(0),auVar42,auVar2);
          auVar41 = a64_TBL(ZEXT816(0),auVar45,auVar2);
          auVar40 = a64_TBL(ZEXT816(0),auVar42,auVar3);
          auVar43 = a64_TBL(ZEXT816(0),auVar45,auVar3);
          auVar42 = a64_TBL(ZEXT816(0),auVar42,auVar1);
          auVar45 = a64_TBL(ZEXT816(0),auVar45,auVar1);
          auVar47 = a64_TBL(ZEXT816(0),auVar36,auVar12);
          auVar49 = a64_TBL(ZEXT816(0),auVar36,auVar2);
          auVar51 = a64_TBL(ZEXT816(0),auVar36,auVar3);
          auVar34 = a64_TBL(ZEXT816(0),auVar36,auVar1);
          auVar37[5] = auVar26[4];
          auVar37[6] = auVar39[4] | auVar26[5];
          auVar37[9] = auVar26[8];
          auVar37[10] = auVar39[8] | auVar26[9];
          auVar37[0xd] = auVar26[0xc];
          auVar37[0xe] = auVar39[0xc] | auVar26[0xd];
          auVar25[5] = auVar29[4];
          auVar25[6] = auVar41[4] | auVar29[5];
          auVar25[9] = auVar29[8];
          auVar25[10] = auVar41[8] | auVar29[9];
          auVar25[0xd] = auVar29[0xc];
          auVar25[0xe] = auVar41[0xc] | auVar29[0xd];
          auVar37._0_5_ =
               (uint5)CONCAT12(auVar39[1] | auVar26[2] | auVar47[0],
                               CONCAT11(auVar39[0] | auVar26[1],auVar26[0])) << 8;
          auVar37[7] = auVar39[5] | auVar26[6] | auVar47[4];
          auVar37[8] = 0;
          auVar37[0xb] = auVar39[9] | auVar26[10] | auVar47[8];
          auVar37[0xc] = 0;
          auVar37[0xf] = auVar39[0xd] | auVar26[0xe] | auVar47[0xc];
          auVar25._0_5_ =
               (uint5)CONCAT12(auVar41[1] | auVar29[2] | auVar49[0],
                               CONCAT11(auVar41[0] | auVar29[1],auVar29[0])) << 8;
          auVar25[7] = auVar41[5] | auVar29[6] | auVar49[4];
          auVar25[8] = 0;
          auVar25[0xb] = auVar41[9] | auVar29[10] | auVar49[8];
          auVar25[0xc] = 0;
          auVar25[0xf] = auVar41[0xd] | auVar29[0xe] | auVar49[0xc];
          auVar41._0_5_ =
               (uint5)CONCAT12(auVar43[1] | auVar40[2] | auVar51[0],
                               CONCAT11(auVar43[0] | auVar40[1],auVar40[0])) << 8;
          auVar41[5] = auVar40[4];
          auVar41[6] = auVar43[4] | auVar40[5];
          auVar41[7] = auVar43[5] | auVar40[6] | auVar51[4];
          auVar41[8] = 0;
          auVar41[9] = auVar40[8];
          auVar41[10] = auVar43[8] | auVar40[9];
          auVar41[0xb] = auVar43[9] | auVar40[10] | auVar51[8];
          auVar41[0xc] = 0;
          auVar41[0xd] = auVar40[0xc];
          auVar41[0xe] = auVar43[0xc] | auVar40[0xd];
          auVar41[0xf] = auVar43[0xd] | auVar40[0xe] | auVar51[0xc];
          auVar39._0_5_ =
               (uint5)CONCAT12(auVar45[1] | auVar42[2] | auVar34[0],
                               CONCAT11(auVar45[0] | auVar42[1],auVar42[0])) << 8;
          auVar39[5] = auVar42[4];
          auVar39[6] = auVar45[4] | auVar42[5];
          auVar39[7] = auVar45[5] | auVar42[6] | auVar34[4];
          auVar39[8] = 0;
          auVar39[9] = auVar42[8];
          auVar39[10] = auVar45[8] | auVar42[9];
          auVar39[0xb] = auVar45[9] | auVar42[10] | auVar34[8];
          auVar39[0xc] = 0;
          auVar39[0xd] = auVar42[0xc];
          auVar39[0xe] = auVar45[0xc] | auVar42[0xd];
          auVar39[0xf] = auVar45[0xd] | auVar42[0xe] | auVar34[0xc];
          auVar26 = NEON_scvtf(auVar37,4);
          auVar29 = NEON_scvtf(auVar25,4);
          auVar37 = NEON_scvtf(auVar41,4);
          auVar34 = NEON_scvtf(auVar39,4);
          in_q6._0_4_ = (uint)(auVar26._0_4_ * param_1);
          in_q6._4_4_ = (uint)(auVar26._4_4_ * param_1);
          in_q6._8_4_ = (uint)(auVar26._8_4_ * param_1);
          in_q6._12_4_ = (uint)(auVar26._12_4_ * param_1);
          uVar10 = (uint)(auVar29._0_4_ * param_1);
          uVar13 = (uint)(auVar29._4_4_ * param_1);
          uVar14 = (uint)(auVar29._8_4_ * param_1);
          uVar15 = (uint)(auVar29._12_4_ * param_1);
          uVar28 = (uint)(auVar37._0_4_ * param_1);
          uVar31 = (uint)(auVar37._4_4_ * param_1);
          uVar32 = (uint)(auVar37._8_4_ * param_1);
          uVar33 = (uint)(auVar37._12_4_ * param_1);
          uVar16 = (uint)(auVar34._0_4_ * param_1);
          uVar19 = (uint)(auVar34._4_4_ * param_1);
          uVar20 = (uint)(auVar34._8_4_ * param_1);
          uVar21 = (uint)(auVar34._12_4_ * param_1);
          auVar49._0_4_ = in_q6._0_4_ >> 8;
          auVar49._4_4_ = in_q6._4_4_ >> 8;
          auVar49._8_4_ = in_q6._8_4_ >> 8;
          auVar49._12_4_ = in_q6._12_4_ >> 8;
          auVar48._0_4_ = in_q6._0_4_ >> 0x10;
          auVar48._4_4_ = in_q6._4_4_ >> 0x10;
          auVar48._8_4_ = in_q6._8_4_ >> 0x10;
          auVar48._12_4_ = in_q6._12_4_ >> 0x10;
          auVar47._0_4_ = uVar10 >> 8;
          auVar47._4_4_ = uVar13 >> 8;
          auVar47._8_4_ = uVar14 >> 8;
          auVar47._12_4_ = uVar15 >> 8;
          auVar46._0_4_ = uVar10 >> 0x10;
          auVar46._4_4_ = uVar13 >> 0x10;
          auVar46._8_4_ = uVar14 >> 0x10;
          auVar46._12_4_ = uVar15 >> 0x10;
          auVar43._0_4_ = uVar28 >> 8;
          auVar43._4_4_ = uVar31 >> 8;
          auVar43._8_4_ = uVar32 >> 8;
          auVar43._12_4_ = uVar33 >> 8;
          auVar44._0_4_ = uVar28 >> 0x10;
          auVar44._4_4_ = uVar31 >> 0x10;
          auVar44._8_4_ = uVar32 >> 0x10;
          auVar44._12_4_ = uVar33 >> 0x10;
          auVar52._0_4_ = uVar28 >> 0x18;
          auVar52._4_4_ = uVar31 >> 0x18;
          auVar52._8_4_ = uVar32 >> 0x18;
          auVar52._12_4_ = uVar33 >> 0x18;
          auVar40._0_4_ = uVar16 >> 8;
          auVar40._4_4_ = uVar19 >> 8;
          auVar40._8_4_ = uVar20 >> 8;
          auVar40._12_4_ = uVar21 >> 8;
          auVar51._0_4_ = uVar16 >> 0x10;
          auVar51._4_4_ = uVar19 >> 0x10;
          auVar51._8_4_ = uVar20 >> 0x10;
          auVar51._12_4_ = uVar21 >> 0x10;
          auVar50._0_4_ = uVar16 >> 0x18;
          auVar50._4_4_ = uVar19 >> 0x18;
          auVar50._8_4_ = uVar20 >> 0x18;
          auVar50._12_4_ = uVar21 >> 0x18;
          auVar26 = a64_TBL(ZEXT816(0),auVar40,auVar43,auVar47,auVar49,auVar23);
          auVar37 = a64_TBL(ZEXT816(0),auVar51,auVar44,auVar46,auVar48,auVar23);
          auVar29._4_4_ = uVar13 >> 0x18;
          auVar29._0_4_ = uVar10 >> 0x18;
          auVar29._8_4_ = uVar14 >> 0x18;
          auVar29._12_4_ = uVar15 >> 0x18;
          auVar34._4_4_ = in_q6._4_4_ >> 0x18;
          auVar34._0_4_ = in_q6._0_4_ >> 0x18;
          auVar34._8_4_ = in_q6._8_4_ >> 0x18;
          auVar34._12_4_ = in_q6._12_4_ >> 0x18;
          auVar29 = a64_TBL(ZEXT816(0),auVar50,auVar52,auVar29,auVar34,auVar23);
          *puVar4 = auVar26[0];
          puVar4[1] = auVar37[0];
          puVar4[2] = auVar29[0];
          puVar4[3] = auVar26[1];
          puVar4[4] = auVar37[1];
          puVar4[5] = auVar29[1];
          puVar4[6] = auVar26[2];
          puVar4[7] = auVar37[2];
          puVar4[8] = auVar29[2];
          puVar4[9] = auVar26[3];
          puVar4[10] = auVar37[3];
          puVar4[0xb] = auVar29[3];
          puVar4[0xc] = auVar26[4];
          puVar4[0xd] = auVar37[4];
          puVar4[0xe] = auVar29[4];
          puVar4[0xf] = auVar26[5];
          puVar4[0x10] = auVar37[5];
          puVar4[0x11] = auVar29[5];
          puVar4[0x12] = auVar26[6];
          puVar4[0x13] = auVar37[6];
          puVar4[0x14] = auVar29[6];
          puVar4[0x15] = auVar26[7];
          puVar4[0x16] = auVar37[7];
          puVar4[0x17] = auVar29[7];
          puVar4[0x18] = auVar26[8];
          puVar4[0x19] = auVar37[8];
          puVar4[0x1a] = auVar29[8];
          puVar4[0x1b] = auVar26[9];
          puVar4[0x1c] = auVar37[9];
          puVar4[0x1d] = auVar29[9];
          puVar4[0x1e] = auVar26[10];
          puVar4[0x1f] = auVar37[10];
          puVar4[0x20] = auVar29[10];
          puVar4[0x21] = auVar26[0xb];
          puVar4[0x22] = auVar37[0xb];
          puVar4[0x23] = auVar29[0xb];
          puVar4[0x24] = auVar26[0xc];
          puVar4[0x25] = auVar37[0xc];
          puVar4[0x26] = auVar29[0xc];
          puVar4[0x27] = auVar26[0xd];
          puVar4[0x28] = auVar37[0xd];
          puVar4[0x29] = auVar29[0xd];
          puVar4[0x2a] = auVar26[0xe];
          puVar4[0x2b] = auVar37[0xe];
          puVar4[0x2c] = auVar29[0xe];
          puVar4[0x2d] = auVar26[0xf];
          puVar4[0x2e] = auVar37[0xf];
          puVar4[0x2f] = auVar29[0xf];
          puVar4 = puVar4 + 0x30;
        } while (uVar7 != 0);
        if (uVar5 == param_3) {
          return;
        }
        uVar7 = uVar5;
        if (((uint)param_3 >> 3 & 1) == 0) goto LAB_005c7434;
      }
      auVar3 = _DAT_0024e4f0;
      auVar2 = _DAT_0024e210;
      auVar1 = _DAT_0024e040;
      uVar5 = param_3 & 0xfffffffffffffff8;
      lVar6 = uVar7 - uVar5;
      puVar4 = param_2 + uVar7 * 3;
      do {
        auVar11[0] = *puVar4;
        auVar17[0] = puVar4[1];
        auVar22[0] = puVar4[2];
        auVar11[1] = puVar4[3];
        auVar17[1] = puVar4[4];
        auVar22[1] = puVar4[5];
        auVar11[2] = puVar4[6];
        auVar17[2] = puVar4[7];
        auVar22[2] = puVar4[8];
        auVar11[3] = puVar4[9];
        auVar17[3] = puVar4[10];
        auVar22[3] = puVar4[0xb];
        auVar11[4] = puVar4[0xc];
        auVar17[4] = puVar4[0xd];
        auVar22[4] = puVar4[0xe];
        auVar11[5] = puVar4[0xf];
        auVar17[5] = puVar4[0x10];
        auVar22[5] = puVar4[0x11];
        auVar11[6] = puVar4[0x12];
        auVar17[6] = puVar4[0x13];
        auVar22[6] = puVar4[0x14];
        auVar11._8_8_ = auVar12._8_8_;
        auVar11[7] = puVar4[0x15];
        auVar17._8_8_ = auVar23._8_8_;
        auVar17[7] = puVar4[0x16];
        auVar22._8_8_ = in_q6._8_8_;
        auVar22[7] = puVar4[0x17];
        lVar6 = lVar6 + 8;
        auVar23 = a64_TBL(ZEXT816(0),auVar11,auVar3);
        auVar26 = a64_TBL(ZEXT816(0),auVar17,auVar3);
        auVar29 = a64_TBL(ZEXT816(0),auVar11,auVar2);
        auVar34 = a64_TBL(ZEXT816(0),auVar17,auVar2);
        auVar37 = a64_TBL(ZEXT816(0),auVar22,auVar3);
        auVar12 = a64_TBL(ZEXT816(0),auVar22,auVar2);
        auVar18[5] = auVar23[4];
        auVar18[6] = auVar26[4] | auVar23[5];
        auVar18[9] = auVar23[8];
        auVar18[10] = auVar26[8] | auVar23[9];
        auVar18[0xd] = auVar23[0xc];
        auVar18[0xe] = auVar26[0xc] | auVar23[0xd];
        auVar18._0_5_ =
             (uint5)CONCAT12(auVar26[1] | auVar23[2] | auVar37[0],
                             CONCAT11(auVar26[0] | auVar23[1],auVar23[0])) << 8;
        auVar18[7] = auVar26[5] | auVar23[6] | auVar37[4];
        auVar18[8] = 0;
        auVar18[0xb] = auVar26[9] | auVar23[10] | auVar37[8];
        auVar18[0xc] = 0;
        auVar18[0xf] = auVar26[0xd] | auVar23[0xe] | auVar37[0xc];
        auVar23._0_5_ =
             (uint5)CONCAT12(auVar34[1] | auVar29[2] | auVar12[0],
                             CONCAT11(auVar34[0] | auVar29[1],auVar29[0])) << 8;
        auVar23[5] = auVar29[4];
        auVar23[6] = auVar34[4] | auVar29[5];
        auVar23[7] = auVar34[5] | auVar29[6] | auVar12[4];
        auVar23[8] = 0;
        auVar23[9] = auVar29[8];
        auVar23[10] = auVar34[8] | auVar29[9];
        auVar23[0xb] = auVar34[9] | auVar29[10] | auVar12[8];
        auVar23[0xc] = 0;
        auVar23[0xd] = auVar29[0xc];
        auVar23[0xe] = auVar34[0xc] | auVar29[0xd];
        auVar23[0xf] = auVar34[0xd] | auVar29[0xe] | auVar12[0xc];
        auVar26 = NEON_scvtf(auVar18,4);
        auVar12 = NEON_scvtf(auVar23,4);
        uVar16 = (uint)(auVar26._0_4_ * param_1);
        uVar19 = (uint)(auVar26._4_4_ * param_1);
        uVar20 = (uint)(auVar26._8_4_ * param_1);
        uVar21 = (uint)(auVar26._12_4_ * param_1);
        uVar10 = (uint)(auVar12._0_4_ * param_1);
        uVar13 = (uint)(auVar12._4_4_ * param_1);
        uVar14 = (uint)(auVar12._8_4_ * param_1);
        uVar15 = (uint)(auVar12._12_4_ * param_1);
        auVar24._0_4_ = uVar16 >> 8;
        auVar24._4_4_ = uVar19 >> 8;
        auVar24._8_4_ = uVar20 >> 8;
        auVar24._12_4_ = uVar21 >> 8;
        auVar30._0_4_ = uVar16 >> 0x10;
        auVar30._4_4_ = uVar19 >> 0x10;
        auVar30._8_4_ = uVar20 >> 0x10;
        auVar30._12_4_ = uVar21 >> 0x10;
        auVar38._0_4_ = uVar16 >> 0x18;
        auVar38._4_4_ = uVar19 >> 0x18;
        auVar38._8_4_ = uVar20 >> 0x18;
        auVar38._12_4_ = uVar21 >> 0x18;
        auVar12._0_4_ = uVar10 >> 8;
        auVar12._4_4_ = uVar13 >> 8;
        auVar12._8_4_ = uVar14 >> 8;
        auVar12._12_4_ = uVar15 >> 8;
        auVar27._0_4_ = uVar10 >> 0x10;
        auVar27._4_4_ = uVar13 >> 0x10;
        auVar27._8_4_ = uVar14 >> 0x10;
        auVar27._12_4_ = uVar15 >> 0x10;
        auVar35._0_4_ = uVar10 >> 0x18;
        auVar35._4_4_ = uVar13 >> 0x18;
        auVar35._8_4_ = uVar14 >> 0x18;
        auVar35._12_4_ = uVar15 >> 0x18;
        auVar12 = a64_TBL(ZEXT816(0),auVar12,auVar24,auVar1);
        auVar23 = a64_TBL(ZEXT816(0),auVar27,auVar30,auVar1);
        in_q6 = a64_TBL(ZEXT816(0),auVar35,auVar38,auVar1);
        *puVar4 = auVar12[0];
        puVar4[1] = auVar23[0];
        puVar4[2] = in_q6[0];
        puVar4[3] = auVar12[1];
        puVar4[4] = auVar23[1];
        puVar4[5] = in_q6[1];
        puVar4[6] = auVar12[2];
        puVar4[7] = auVar23[2];
        puVar4[8] = in_q6[2];
        puVar4[9] = auVar12[3];
        puVar4[10] = auVar23[3];
        puVar4[0xb] = in_q6[3];
        puVar4[0xc] = auVar12[4];
        puVar4[0xd] = auVar23[4];
        puVar4[0xe] = in_q6[4];
        puVar4[0xf] = auVar12[5];
        puVar4[0x10] = auVar23[5];
        puVar4[0x11] = in_q6[5];
        puVar4[0x12] = auVar12[6];
        puVar4[0x13] = auVar23[6];
        puVar4[0x14] = in_q6[6];
        puVar4[0x15] = auVar12[7];
        puVar4[0x16] = auVar23[7];
        puVar4[0x17] = in_q6[7];
        puVar4 = puVar4 + 0x18;
      } while (lVar6 != 0);
      if (uVar5 == param_3) {
        return;
      }
    }
  }
LAB_005c7434:
  lVar6 = param_3 - uVar5;
  pbVar8 = param_2 + uVar5 * 3 + 2;
  do {
    lVar6 = lVar6 + -1;
    iVar9 = (int)((float)(int)((uint)pbVar8[-2] << 8 | (uint)pbVar8[-1] << 0x10 |
                              (uint)*pbVar8 << 0x18) * param_1);
    pbVar8[-2] = (byte)((uint)iVar9 >> 8);
    pbVar8[-1] = (byte)((uint)iVar9 >> 0x10);
    *pbVar8 = (byte)((uint)iVar9 >> 0x18);
    pbVar8 = pbVar8 + 3;
  } while (lVar6 != 0);
  return;
}


// ===== 005c76e0  ma_apply_volume_factor_s32 =====

void ma_apply_volume_factor_s32(float param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  int *piVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if ((param_2 != 0) && (param_3 != 0)) {
    if (param_3 < 8) {
      uVar1 = 0;
    }
    else {
      uVar1 = param_3 & 0xfffffffffffffff8;
      pauVar3 = (undefined1 (*) [16])(param_2 + 0x10);
      uVar5 = uVar1;
      do {
        uVar5 = uVar5 - 8;
        auVar6 = NEON_scvtf(pauVar3[-1],4);
        auVar7 = NEON_scvtf(*pauVar3,4);
        *(int *)*pauVar3 = (int)(auVar6._8_4_ * param_1);
        *(int *)(*pauVar3 + 4) = (int)(auVar6._12_4_ * param_1);
        *(int *)pauVar3[-1] = (int)(auVar6._0_4_ * param_1);
        *(int *)(pauVar3[-1] + 4) = (int)(auVar6._4_4_ * param_1);
        *(int *)pauVar3[1] = (int)(auVar7._8_4_ * param_1);
        *(int *)(pauVar3[1] + 4) = (int)(auVar7._12_4_ * param_1);
        *(int *)*pauVar3 = (int)(auVar7._0_4_ * param_1);
        *(int *)(*pauVar3 + 4) = (int)(auVar7._4_4_ * param_1);
        pauVar3 = pauVar3 + 2;
      } while (uVar5 != 0);
      if (uVar1 == param_3) {
        return;
      }
    }
    lVar2 = param_3 - uVar1;
    piVar4 = (int *)(param_2 + uVar1 * 4);
    do {
      lVar2 = lVar2 + -1;
      *piVar4 = (int)((float)*piVar4 * param_1);
      piVar4 = piVar4 + 1;
    } while (lVar2 != 0);
  }
  return;
}


// ===== 005c7760  ma_apply_volume_factor_f32 =====

void ma_apply_volume_factor_f32(float param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  float *pfVar4;
  ulong uVar5;
  
  if (((param_3 != 0) && (param_2 != 0)) && (param_1 != 1.0)) {
    if (param_3 < 8) {
      uVar1 = 0;
    }
    else {
      uVar1 = param_3 & 0xfffffffffffffff8;
      puVar3 = (undefined8 *)(param_2 + 0x10);
      uVar5 = uVar1;
      do {
        uVar5 = uVar5 - 8;
        puVar3[-1] = CONCAT44((float)((ulong)puVar3[-1] >> 0x20) * param_1,
                              (float)puVar3[-1] * param_1);
        puVar3[-2] = CONCAT44((float)((ulong)puVar3[-2] >> 0x20) * param_1,
                              (float)puVar3[-2] * param_1);
        puVar3[1] = CONCAT44((float)((ulong)puVar3[1] >> 0x20) * param_1,(float)puVar3[1] * param_1)
        ;
        *puVar3 = CONCAT44((float)((ulong)*puVar3 >> 0x20) * param_1,(float)*puVar3 * param_1);
        puVar3 = puVar3 + 4;
      } while (uVar5 != 0);
      if (uVar1 == param_3) {
        return;
      }
    }
    lVar2 = param_3 - uVar1;
    pfVar4 = (float *)(param_2 + uVar1 * 4);
    do {
      lVar2 = lVar2 + -1;
      *pfVar4 = *pfVar4 * param_1;
      pfVar4 = pfVar4 + 1;
    } while (lVar2 != 0);
  }
  return;
}


// ===== 005c77d4  ma_copy_and_apply_volume_factor_pcm_frames_u8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ma_copy_and_apply_volume_factor_pcm_frames_u8
               (float param_1,undefined8 *param_2,undefined1 (*param_3) [16],long param_4,
               uint param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  undefined1 (*pauVar12) [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  auVar14 = _DAT_0024e4f0;
  auVar13 = _DAT_0024e3a0;
  auVar3 = _DAT_0024e360;
  auVar2 = _DAT_0024e210;
  auVar1 = _DAT_0024de80;
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  if (param_3 == (undefined1 (*) [16])0x0) {
    return;
  }
  uVar4 = (ulong)param_5 * param_4;
  if (uVar4 == 0) {
    return;
  }
  uVar5 = 0;
  if ((7 < uVar4) && (0xf < (ulong)((long)param_2 - (long)param_3))) {
    if (uVar4 < 0x10) {
      uVar6 = 0;
    }
    else {
      uVar5 = uVar4 & 0xfffffffffffffff0;
      pauVar12 = param_3;
      puVar10 = param_2;
      uVar6 = uVar5;
      do {
        auVar15 = *pauVar12;
        uVar6 = uVar6 - 0x10;
        auVar16 = a64_TBL(ZEXT816(0),auVar15,auVar1);
        auVar18 = a64_TBL(ZEXT816(0),auVar15,auVar13);
        auVar20 = a64_TBL(ZEXT816(0),auVar15,auVar14);
        auVar15 = a64_TBL(ZEXT816(0),auVar15,auVar2);
        auVar17 = NEON_ucvtf(auVar16,4);
        auVar19 = NEON_ucvtf(auVar18,4);
        auVar18 = NEON_ucvtf(auVar20,4);
        auVar16 = NEON_ucvtf(auVar15,4);
        auVar15._4_4_ = (int)(auVar16._4_4_ * param_1);
        auVar15._0_4_ = (int)(auVar16._0_4_ * param_1);
        auVar15._8_4_ = (int)(auVar16._8_4_ * param_1);
        auVar15._12_4_ = (int)(auVar16._12_4_ * param_1);
        auVar16._4_4_ = (int)(auVar18._4_4_ * param_1);
        auVar16._0_4_ = (int)(auVar18._0_4_ * param_1);
        auVar16._8_4_ = (int)(auVar18._8_4_ * param_1);
        auVar16._12_4_ = (int)(auVar18._12_4_ * param_1);
        auVar18._4_4_ = (int)(auVar19._4_4_ * param_1);
        auVar18._0_4_ = (int)(auVar19._0_4_ * param_1);
        auVar18._8_4_ = (int)(auVar19._8_4_ * param_1);
        auVar18._12_4_ = (int)(auVar19._12_4_ * param_1);
        auVar19._4_4_ = (int)(auVar17._4_4_ * param_1);
        auVar19._0_4_ = (int)(auVar17._0_4_ * param_1);
        auVar19._8_4_ = (int)(auVar17._8_4_ * param_1);
        auVar19._12_4_ = (int)(auVar17._12_4_ * param_1);
        auVar15 = a64_TBL(ZEXT816(0),auVar15,auVar16,auVar18,auVar19,auVar3);
        puVar10[1] = auVar15._8_8_;
        *puVar10 = auVar15._0_8_;
        pauVar12 = pauVar12 + 1;
        puVar10 = puVar10 + 2;
      } while (uVar6 != 0);
      if (uVar4 - uVar5 == 0) {
        return;
      }
      uVar6 = uVar5;
      if (((uint)uVar4 >> 3 & 1) == 0) goto LAB_005c7908;
    }
    auVar3 = _DAT_0024e4f0;
    auVar2 = _DAT_0024e210;
    auVar1 = _DAT_0024e040;
    uVar5 = uVar4 & 0xfffffffffffffff8;
    lVar8 = uVar6 - uVar5;
    puVar10 = (undefined8 *)((long)param_2 + uVar6);
    puVar11 = (ulong *)(*param_3 + uVar6);
    do {
      auVar13._0_8_ = *puVar11;
      auVar13._8_8_ = 0;
      lVar8 = lVar8 + 8;
      auVar14 = a64_TBL(ZEXT816(0),auVar13,auVar3);
      auVar13 = a64_TBL(ZEXT816(0),auVar13,auVar2);
      auVar14 = NEON_ucvtf(auVar14,4);
      auVar13 = NEON_ucvtf(auVar13,4);
      auVar17._0_4_ = (int)(auVar14._0_4_ * param_1);
      auVar17._4_4_ = (int)(auVar14._4_4_ * param_1);
      auVar17._8_4_ = (int)(auVar14._8_4_ * param_1);
      auVar17._12_4_ = (int)(auVar14._12_4_ * param_1);
      auVar14._0_4_ = (int)(auVar13._0_4_ * param_1);
      auVar14._4_4_ = (int)(auVar13._4_4_ * param_1);
      auVar14._8_4_ = (int)(auVar13._8_4_ * param_1);
      auVar14._12_4_ = (int)(auVar13._12_4_ * param_1);
      auVar13 = a64_TBL(ZEXT816(0),auVar14,auVar17,auVar1);
      *puVar10 = auVar13._0_8_;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    } while (lVar8 != 0);
    if (uVar4 - uVar5 == 0) {
      return;
    }
  }
LAB_005c7908:
  lVar8 = uVar4 - uVar5;
  pbVar7 = *param_3 + uVar5;
  puVar9 = (undefined1 *)((long)param_2 + uVar5);
  do {
    lVar8 = lVar8 + -1;
    *puVar9 = (char)(int)((float)*pbVar7 * param_1);
    pbVar7 = pbVar7 + 1;
    puVar9 = puVar9 + 1;
  } while (lVar8 != 0);
  return;
}


// ===== 005c7934  ma_copy_and_apply_volume_factor_pcm_frames_s16 =====

void ma_copy_and_apply_volume_factor_pcm_frames_s16
               (float param_1,long param_2,long param_3,long param_4,uint param_5)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  short sVar9;
  short *psVar10;
  short *psVar11;
  short *psVar12;
  short *psVar13;
  short *psVar14;
  short *psVar15;
  short *psVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  undefined2 *puVar20;
  short *psVar21;
  ulong uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  if (((param_2 != 0) && (param_3 != 0)) && (uVar17 = (ulong)param_5 * param_4, uVar17 != 0)) {
    uVar19 = 0;
    if ((0xf < uVar17) && (0x1f < (ulong)(param_2 - param_3))) {
      uVar19 = uVar17 & 0xfffffffffffffff0;
      puVar20 = (undefined2 *)(param_2 + 0x10);
      psVar21 = (short *)(param_3 + 0x10);
      uVar22 = uVar19;
      do {
        psVar1 = psVar21 + -8;
        psVar2 = psVar21 + -7;
        psVar3 = psVar21 + -6;
        psVar4 = psVar21 + -5;
        psVar5 = psVar21 + -4;
        psVar6 = psVar21 + -3;
        psVar7 = psVar21 + -2;
        psVar8 = psVar21 + -1;
        sVar9 = *psVar21;
        psVar10 = psVar21 + 1;
        psVar11 = psVar21 + 2;
        psVar12 = psVar21 + 3;
        psVar13 = psVar21 + 4;
        psVar14 = psVar21 + 5;
        psVar15 = psVar21 + 6;
        psVar16 = psVar21 + 7;
        uVar22 = uVar22 - 0x10;
        psVar21 = psVar21 + 0x10;
        auVar25._0_4_ = (int)*psVar5;
        auVar25._4_4_ = (int)*psVar6;
        auVar25._8_4_ = (int)*psVar7;
        auVar25._12_4_ = (int)*psVar8;
        auVar23._0_4_ = (int)*psVar1;
        auVar23._4_4_ = (int)*psVar2;
        auVar23._8_4_ = (int)*psVar3;
        auVar23._12_4_ = (int)*psVar4;
        auVar26._0_4_ = (int)*psVar13;
        auVar26._4_4_ = (int)*psVar14;
        auVar26._8_4_ = (int)*psVar15;
        auVar26._12_4_ = (int)*psVar16;
        auVar24._0_4_ = (int)sVar9;
        auVar24._4_4_ = (int)*psVar10;
        auVar24._8_4_ = (int)*psVar11;
        auVar24._12_4_ = (int)*psVar12;
        auVar25 = NEON_scvtf(auVar25,4);
        auVar23 = NEON_scvtf(auVar23,4);
        auVar26 = NEON_scvtf(auVar26,4);
        auVar24 = NEON_scvtf(auVar24,4);
        *puVar20 = (short)(int)(auVar25._0_4_ * param_1);
        puVar20[1] = (short)(int)(auVar25._4_4_ * param_1);
        puVar20[2] = (short)(int)(auVar25._8_4_ * param_1);
        puVar20[3] = (short)(int)(auVar25._12_4_ * param_1);
        puVar20[-8] = (short)(int)(auVar23._0_4_ * param_1);
        puVar20[-7] = (short)(int)(auVar23._4_4_ * param_1);
        puVar20[-6] = (short)(int)(auVar23._8_4_ * param_1);
        puVar20[-5] = (short)(int)(auVar23._12_4_ * param_1);
        puVar20[8] = (short)(int)(auVar26._0_4_ * param_1);
        puVar20[9] = (short)(int)(auVar26._4_4_ * param_1);
        puVar20[10] = (short)(int)(auVar26._8_4_ * param_1);
        puVar20[0xb] = (short)(int)(auVar26._12_4_ * param_1);
        *puVar20 = (short)(int)(auVar24._0_4_ * param_1);
        puVar20[1] = (short)(int)(auVar24._4_4_ * param_1);
        puVar20[2] = (short)(int)(auVar24._8_4_ * param_1);
        puVar20[3] = (short)(int)(auVar24._12_4_ * param_1);
        puVar20 = puVar20 + 0x10;
      } while (uVar22 != 0);
      if (uVar17 - uVar19 == 0) {
        return;
      }
    }
    lVar18 = uVar17 - uVar19;
    puVar20 = (undefined2 *)(param_2 + uVar19 * 2);
    psVar21 = (short *)(param_3 + uVar19 * 2);
    do {
      lVar18 = lVar18 + -1;
      *puVar20 = (short)(int)((float)(int)*psVar21 * param_1);
      puVar20 = puVar20 + 1;
      psVar21 = psVar21 + 1;
    } while (lVar18 != 0);
  }
  return;
}


// ===== 005c7a08  ma_copy_and_apply_volume_factor_pcm_frames_s24 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ma_copy_and_apply_volume_factor_pcm_frames_s24
               (float param_1,undefined1 *param_2,undefined1 *param_3,long param_4,uint param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  uint uVar13;
  uint uVar16;
  uint uVar17;
  undefined1 in_q4 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  uint uVar18;
  uint uVar19;
  uint uVar22;
  uint uVar23;
  undefined1 in_q5 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  uint uVar24;
  undefined1 in_q6 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  uint uVar31;
  uint uVar34;
  uint uVar35;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  uint uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  
  auVar3 = _DAT_0024e4f0;
  auVar2 = _DAT_0024e3a0;
  auVar26 = _DAT_0024e360;
  auVar1 = _DAT_0024e210;
  auVar15 = _DAT_0024de80;
  if (param_2 == (undefined1 *)0x0) {
    return;
  }
  if (param_3 == (undefined1 *)0x0) {
    return;
  }
  uVar6 = (ulong)param_5 * param_4;
  if (uVar6 == 0) {
    return;
  }
  if (7 < uVar6) {
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar6 - 1;
    lVar11 = (uVar6 - 1) * 3;
    uVar8 = 0;
    if ((((param_2 + 2 + lVar11 < param_2 + 2) || (param_2 + 1 + lVar11 < param_2 + 1)) ||
        (param_2 + lVar11 < param_2)) || (SUB168(auVar29 * ZEXT816(3),8) != 0)) goto LAB_005c7a28;
    if ((param_3 + uVar6 * 3 <= param_2) || (param_2 + uVar6 * 3 <= param_3)) {
      if (uVar6 < 0x10) {
        uVar10 = 0;
        auVar15 = in_q4;
        auVar26 = in_q5;
      }
      else {
        uVar8 = uVar6 & 0xfffffffffffffff0;
        puVar5 = param_3;
        puVar4 = param_2;
        uVar10 = uVar8;
        do {
          auVar45[0] = *puVar5;
          auVar48[0] = puVar5[1];
          auVar39[0] = puVar5[2];
          auVar45[1] = puVar5[3];
          auVar48[1] = puVar5[4];
          auVar39[1] = puVar5[5];
          auVar45[2] = puVar5[6];
          auVar48[2] = puVar5[7];
          auVar39[2] = puVar5[8];
          auVar45[3] = puVar5[9];
          auVar48[3] = puVar5[10];
          auVar39[3] = puVar5[0xb];
          auVar45[4] = puVar5[0xc];
          auVar48[4] = puVar5[0xd];
          auVar39[4] = puVar5[0xe];
          auVar45[5] = puVar5[0xf];
          auVar48[5] = puVar5[0x10];
          auVar39[5] = puVar5[0x11];
          auVar45[6] = puVar5[0x12];
          auVar48[6] = puVar5[0x13];
          auVar39[6] = puVar5[0x14];
          auVar45[7] = puVar5[0x15];
          auVar48[7] = puVar5[0x16];
          auVar39[7] = puVar5[0x17];
          auVar45[8] = puVar5[0x18];
          auVar48[8] = puVar5[0x19];
          auVar39[8] = puVar5[0x1a];
          auVar45[9] = puVar5[0x1b];
          auVar48[9] = puVar5[0x1c];
          auVar39[9] = puVar5[0x1d];
          auVar45[10] = puVar5[0x1e];
          auVar48[10] = puVar5[0x1f];
          auVar39[10] = puVar5[0x20];
          auVar45[0xb] = puVar5[0x21];
          auVar48[0xb] = puVar5[0x22];
          auVar39[0xb] = puVar5[0x23];
          auVar45[0xc] = puVar5[0x24];
          auVar48[0xc] = puVar5[0x25];
          auVar39[0xc] = puVar5[0x26];
          auVar45[0xd] = puVar5[0x27];
          auVar48[0xd] = puVar5[0x28];
          auVar39[0xd] = puVar5[0x29];
          auVar45[0xe] = puVar5[0x2a];
          auVar48[0xe] = puVar5[0x2b];
          auVar39[0xe] = puVar5[0x2c];
          auVar45[0xf] = puVar5[0x2d];
          auVar48[0xf] = puVar5[0x2e];
          auVar39[0xf] = puVar5[0x2f];
          puVar5 = puVar5 + 0x30;
          uVar10 = uVar10 - 0x10;
          auVar29 = a64_TBL(ZEXT816(0),auVar45,auVar15);
          auVar42 = a64_TBL(ZEXT816(0),auVar48,auVar15);
          auVar32 = a64_TBL(ZEXT816(0),auVar45,auVar2);
          auVar44 = a64_TBL(ZEXT816(0),auVar48,auVar2);
          auVar43 = a64_TBL(ZEXT816(0),auVar45,auVar3);
          auVar46 = a64_TBL(ZEXT816(0),auVar48,auVar3);
          auVar45 = a64_TBL(ZEXT816(0),auVar45,auVar1);
          auVar48 = a64_TBL(ZEXT816(0),auVar48,auVar1);
          auVar50 = a64_TBL(ZEXT816(0),auVar39,auVar15);
          auVar52 = a64_TBL(ZEXT816(0),auVar39,auVar2);
          auVar54 = a64_TBL(ZEXT816(0),auVar39,auVar3);
          auVar37 = a64_TBL(ZEXT816(0),auVar39,auVar1);
          auVar40[5] = auVar29[4];
          auVar40[6] = auVar42[4] | auVar29[5];
          auVar40[9] = auVar29[8];
          auVar40[10] = auVar42[8] | auVar29[9];
          auVar40[0xd] = auVar29[0xc];
          auVar40[0xe] = auVar42[0xc] | auVar29[0xd];
          auVar28[5] = auVar32[4];
          auVar28[6] = auVar44[4] | auVar32[5];
          auVar28[9] = auVar32[8];
          auVar28[10] = auVar44[8] | auVar32[9];
          auVar28[0xd] = auVar32[0xc];
          auVar28[0xe] = auVar44[0xc] | auVar32[0xd];
          auVar40._0_5_ =
               (uint5)CONCAT12(auVar42[1] | auVar29[2] | auVar50[0],
                               CONCAT11(auVar42[0] | auVar29[1],auVar29[0])) << 8;
          auVar40[7] = auVar42[5] | auVar29[6] | auVar50[4];
          auVar40[8] = 0;
          auVar40[0xb] = auVar42[9] | auVar29[10] | auVar50[8];
          auVar40[0xc] = 0;
          auVar40[0xf] = auVar42[0xd] | auVar29[0xe] | auVar50[0xc];
          auVar28._0_5_ =
               (uint5)CONCAT12(auVar44[1] | auVar32[2] | auVar52[0],
                               CONCAT11(auVar44[0] | auVar32[1],auVar32[0])) << 8;
          auVar28[7] = auVar44[5] | auVar32[6] | auVar52[4];
          auVar28[8] = 0;
          auVar28[0xb] = auVar44[9] | auVar32[10] | auVar52[8];
          auVar28[0xc] = 0;
          auVar28[0xf] = auVar44[0xd] | auVar32[0xe] | auVar52[0xc];
          auVar44._0_5_ =
               (uint5)CONCAT12(auVar46[1] | auVar43[2] | auVar54[0],
                               CONCAT11(auVar46[0] | auVar43[1],auVar43[0])) << 8;
          auVar44[5] = auVar43[4];
          auVar44[6] = auVar46[4] | auVar43[5];
          auVar44[7] = auVar46[5] | auVar43[6] | auVar54[4];
          auVar44[8] = 0;
          auVar44[9] = auVar43[8];
          auVar44[10] = auVar46[8] | auVar43[9];
          auVar44[0xb] = auVar46[9] | auVar43[10] | auVar54[8];
          auVar44[0xc] = 0;
          auVar44[0xd] = auVar43[0xc];
          auVar44[0xe] = auVar46[0xc] | auVar43[0xd];
          auVar44[0xf] = auVar46[0xd] | auVar43[0xe] | auVar54[0xc];
          auVar42._0_5_ =
               (uint5)CONCAT12(auVar48[1] | auVar45[2] | auVar37[0],
                               CONCAT11(auVar48[0] | auVar45[1],auVar45[0])) << 8;
          auVar42[5] = auVar45[4];
          auVar42[6] = auVar48[4] | auVar45[5];
          auVar42[7] = auVar48[5] | auVar45[6] | auVar37[4];
          auVar42[8] = 0;
          auVar42[9] = auVar45[8];
          auVar42[10] = auVar48[8] | auVar45[9];
          auVar42[0xb] = auVar48[9] | auVar45[10] | auVar37[8];
          auVar42[0xc] = 0;
          auVar42[0xd] = auVar45[0xc];
          auVar42[0xe] = auVar48[0xc] | auVar45[0xd];
          auVar42[0xf] = auVar48[0xd] | auVar45[0xe] | auVar37[0xc];
          auVar29 = NEON_scvtf(auVar40,4);
          auVar32 = NEON_scvtf(auVar28,4);
          auVar40 = NEON_scvtf(auVar44,4);
          auVar37 = NEON_scvtf(auVar42,4);
          in_q6._0_4_ = (uint)(auVar29._0_4_ * param_1);
          in_q6._4_4_ = (uint)(auVar29._4_4_ * param_1);
          in_q6._8_4_ = (uint)(auVar29._8_4_ * param_1);
          in_q6._12_4_ = (uint)(auVar29._12_4_ * param_1);
          uVar13 = (uint)(auVar32._0_4_ * param_1);
          uVar16 = (uint)(auVar32._4_4_ * param_1);
          uVar17 = (uint)(auVar32._8_4_ * param_1);
          uVar18 = (uint)(auVar32._12_4_ * param_1);
          uVar31 = (uint)(auVar40._0_4_ * param_1);
          uVar34 = (uint)(auVar40._4_4_ * param_1);
          uVar35 = (uint)(auVar40._8_4_ * param_1);
          uVar36 = (uint)(auVar40._12_4_ * param_1);
          uVar19 = (uint)(auVar37._0_4_ * param_1);
          uVar22 = (uint)(auVar37._4_4_ * param_1);
          uVar23 = (uint)(auVar37._8_4_ * param_1);
          uVar24 = (uint)(auVar37._12_4_ * param_1);
          auVar52._0_4_ = in_q6._0_4_ >> 8;
          auVar52._4_4_ = in_q6._4_4_ >> 8;
          auVar52._8_4_ = in_q6._8_4_ >> 8;
          auVar52._12_4_ = in_q6._12_4_ >> 8;
          auVar51._0_4_ = in_q6._0_4_ >> 0x10;
          auVar51._4_4_ = in_q6._4_4_ >> 0x10;
          auVar51._8_4_ = in_q6._8_4_ >> 0x10;
          auVar51._12_4_ = in_q6._12_4_ >> 0x10;
          auVar50._0_4_ = uVar13 >> 8;
          auVar50._4_4_ = uVar16 >> 8;
          auVar50._8_4_ = uVar17 >> 8;
          auVar50._12_4_ = uVar18 >> 8;
          auVar49._0_4_ = uVar13 >> 0x10;
          auVar49._4_4_ = uVar16 >> 0x10;
          auVar49._8_4_ = uVar17 >> 0x10;
          auVar49._12_4_ = uVar18 >> 0x10;
          auVar46._0_4_ = uVar31 >> 8;
          auVar46._4_4_ = uVar34 >> 8;
          auVar46._8_4_ = uVar35 >> 8;
          auVar46._12_4_ = uVar36 >> 8;
          auVar47._0_4_ = uVar31 >> 0x10;
          auVar47._4_4_ = uVar34 >> 0x10;
          auVar47._8_4_ = uVar35 >> 0x10;
          auVar47._12_4_ = uVar36 >> 0x10;
          auVar55._0_4_ = uVar31 >> 0x18;
          auVar55._4_4_ = uVar34 >> 0x18;
          auVar55._8_4_ = uVar35 >> 0x18;
          auVar55._12_4_ = uVar36 >> 0x18;
          auVar43._0_4_ = uVar19 >> 8;
          auVar43._4_4_ = uVar22 >> 8;
          auVar43._8_4_ = uVar23 >> 8;
          auVar43._12_4_ = uVar24 >> 8;
          auVar54._0_4_ = uVar19 >> 0x10;
          auVar54._4_4_ = uVar22 >> 0x10;
          auVar54._8_4_ = uVar23 >> 0x10;
          auVar54._12_4_ = uVar24 >> 0x10;
          auVar53._0_4_ = uVar19 >> 0x18;
          auVar53._4_4_ = uVar22 >> 0x18;
          auVar53._8_4_ = uVar23 >> 0x18;
          auVar53._12_4_ = uVar24 >> 0x18;
          auVar29 = a64_TBL(ZEXT816(0),auVar43,auVar46,auVar50,auVar52,auVar26);
          auVar40 = a64_TBL(ZEXT816(0),auVar54,auVar47,auVar49,auVar51,auVar26);
          auVar32._4_4_ = uVar16 >> 0x18;
          auVar32._0_4_ = uVar13 >> 0x18;
          auVar32._8_4_ = uVar17 >> 0x18;
          auVar32._12_4_ = uVar18 >> 0x18;
          auVar37._4_4_ = in_q6._4_4_ >> 0x18;
          auVar37._0_4_ = in_q6._0_4_ >> 0x18;
          auVar37._8_4_ = in_q6._8_4_ >> 0x18;
          auVar37._12_4_ = in_q6._12_4_ >> 0x18;
          auVar32 = a64_TBL(ZEXT816(0),auVar53,auVar55,auVar32,auVar37,auVar26);
          *puVar4 = auVar29[0];
          puVar4[1] = auVar40[0];
          puVar4[2] = auVar32[0];
          puVar4[3] = auVar29[1];
          puVar4[4] = auVar40[1];
          puVar4[5] = auVar32[1];
          puVar4[6] = auVar29[2];
          puVar4[7] = auVar40[2];
          puVar4[8] = auVar32[2];
          puVar4[9] = auVar29[3];
          puVar4[10] = auVar40[3];
          puVar4[0xb] = auVar32[3];
          puVar4[0xc] = auVar29[4];
          puVar4[0xd] = auVar40[4];
          puVar4[0xe] = auVar32[4];
          puVar4[0xf] = auVar29[5];
          puVar4[0x10] = auVar40[5];
          puVar4[0x11] = auVar32[5];
          puVar4[0x12] = auVar29[6];
          puVar4[0x13] = auVar40[6];
          puVar4[0x14] = auVar32[6];
          puVar4[0x15] = auVar29[7];
          puVar4[0x16] = auVar40[7];
          puVar4[0x17] = auVar32[7];
          puVar4[0x18] = auVar29[8];
          puVar4[0x19] = auVar40[8];
          puVar4[0x1a] = auVar32[8];
          puVar4[0x1b] = auVar29[9];
          puVar4[0x1c] = auVar40[9];
          puVar4[0x1d] = auVar32[9];
          puVar4[0x1e] = auVar29[10];
          puVar4[0x1f] = auVar40[10];
          puVar4[0x20] = auVar32[10];
          puVar4[0x21] = auVar29[0xb];
          puVar4[0x22] = auVar40[0xb];
          puVar4[0x23] = auVar32[0xb];
          puVar4[0x24] = auVar29[0xc];
          puVar4[0x25] = auVar40[0xc];
          puVar4[0x26] = auVar32[0xc];
          puVar4[0x27] = auVar29[0xd];
          puVar4[0x28] = auVar40[0xd];
          puVar4[0x29] = auVar32[0xd];
          puVar4[0x2a] = auVar29[0xe];
          puVar4[0x2b] = auVar40[0xe];
          puVar4[0x2c] = auVar32[0xe];
          puVar4[0x2d] = auVar29[0xf];
          puVar4[0x2e] = auVar40[0xf];
          puVar4[0x2f] = auVar32[0xf];
          puVar4 = puVar4 + 0x30;
        } while (uVar10 != 0);
        if (uVar6 - uVar8 == 0) {
          return;
        }
        uVar10 = uVar8;
        if (((uint)uVar6 >> 3 & 1) == 0) goto LAB_005c7a28;
      }
      auVar3 = _DAT_0024e4f0;
      auVar2 = _DAT_0024e210;
      auVar1 = _DAT_0024e040;
      uVar8 = uVar6 & 0xfffffffffffffff8;
      lVar11 = uVar10 - uVar8;
      puVar5 = param_2 + uVar10 * 3;
      puVar4 = param_3 + uVar10 * 3;
      do {
        auVar14[0] = *puVar4;
        auVar20[0] = puVar4[1];
        auVar25[0] = puVar4[2];
        auVar14[1] = puVar4[3];
        auVar20[1] = puVar4[4];
        auVar25[1] = puVar4[5];
        auVar14[2] = puVar4[6];
        auVar20[2] = puVar4[7];
        auVar25[2] = puVar4[8];
        auVar14[3] = puVar4[9];
        auVar20[3] = puVar4[10];
        auVar25[3] = puVar4[0xb];
        auVar14[4] = puVar4[0xc];
        auVar20[4] = puVar4[0xd];
        auVar25[4] = puVar4[0xe];
        auVar14[5] = puVar4[0xf];
        auVar20[5] = puVar4[0x10];
        auVar25[5] = puVar4[0x11];
        auVar14[6] = puVar4[0x12];
        auVar20[6] = puVar4[0x13];
        auVar25[6] = puVar4[0x14];
        auVar14._8_8_ = auVar15._8_8_;
        auVar14[7] = puVar4[0x15];
        auVar20._8_8_ = auVar26._8_8_;
        auVar20[7] = puVar4[0x16];
        auVar25._8_8_ = in_q6._8_8_;
        auVar25[7] = puVar4[0x17];
        puVar4 = puVar4 + 0x18;
        lVar11 = lVar11 + 8;
        auVar26 = a64_TBL(ZEXT816(0),auVar14,auVar3);
        auVar29 = a64_TBL(ZEXT816(0),auVar20,auVar3);
        auVar32 = a64_TBL(ZEXT816(0),auVar14,auVar2);
        auVar37 = a64_TBL(ZEXT816(0),auVar20,auVar2);
        auVar40 = a64_TBL(ZEXT816(0),auVar25,auVar3);
        auVar15 = a64_TBL(ZEXT816(0),auVar25,auVar2);
        auVar21[5] = auVar26[4];
        auVar21[6] = auVar29[4] | auVar26[5];
        auVar21[9] = auVar26[8];
        auVar21[10] = auVar29[8] | auVar26[9];
        auVar21[0xd] = auVar26[0xc];
        auVar21[0xe] = auVar29[0xc] | auVar26[0xd];
        auVar21._0_5_ =
             (uint5)CONCAT12(auVar29[1] | auVar26[2] | auVar40[0],
                             CONCAT11(auVar29[0] | auVar26[1],auVar26[0])) << 8;
        auVar21[7] = auVar29[5] | auVar26[6] | auVar40[4];
        auVar21[8] = 0;
        auVar21[0xb] = auVar29[9] | auVar26[10] | auVar40[8];
        auVar21[0xc] = 0;
        auVar21[0xf] = auVar29[0xd] | auVar26[0xe] | auVar40[0xc];
        auVar26._0_5_ =
             (uint5)CONCAT12(auVar37[1] | auVar32[2] | auVar15[0],
                             CONCAT11(auVar37[0] | auVar32[1],auVar32[0])) << 8;
        auVar26[5] = auVar32[4];
        auVar26[6] = auVar37[4] | auVar32[5];
        auVar26[7] = auVar37[5] | auVar32[6] | auVar15[4];
        auVar26[8] = 0;
        auVar26[9] = auVar32[8];
        auVar26[10] = auVar37[8] | auVar32[9];
        auVar26[0xb] = auVar37[9] | auVar32[10] | auVar15[8];
        auVar26[0xc] = 0;
        auVar26[0xd] = auVar32[0xc];
        auVar26[0xe] = auVar37[0xc] | auVar32[0xd];
        auVar26[0xf] = auVar37[0xd] | auVar32[0xe] | auVar15[0xc];
        auVar29 = NEON_scvtf(auVar21,4);
        auVar15 = NEON_scvtf(auVar26,4);
        uVar19 = (uint)(auVar29._0_4_ * param_1);
        uVar22 = (uint)(auVar29._4_4_ * param_1);
        uVar23 = (uint)(auVar29._8_4_ * param_1);
        uVar24 = (uint)(auVar29._12_4_ * param_1);
        uVar13 = (uint)(auVar15._0_4_ * param_1);
        uVar16 = (uint)(auVar15._4_4_ * param_1);
        uVar17 = (uint)(auVar15._8_4_ * param_1);
        uVar18 = (uint)(auVar15._12_4_ * param_1);
        auVar27._0_4_ = uVar19 >> 8;
        auVar27._4_4_ = uVar22 >> 8;
        auVar27._8_4_ = uVar23 >> 8;
        auVar27._12_4_ = uVar24 >> 8;
        auVar33._0_4_ = uVar19 >> 0x10;
        auVar33._4_4_ = uVar22 >> 0x10;
        auVar33._8_4_ = uVar23 >> 0x10;
        auVar33._12_4_ = uVar24 >> 0x10;
        auVar41._0_4_ = uVar19 >> 0x18;
        auVar41._4_4_ = uVar22 >> 0x18;
        auVar41._8_4_ = uVar23 >> 0x18;
        auVar41._12_4_ = uVar24 >> 0x18;
        auVar15._0_4_ = uVar13 >> 8;
        auVar15._4_4_ = uVar16 >> 8;
        auVar15._8_4_ = uVar17 >> 8;
        auVar15._12_4_ = uVar18 >> 8;
        auVar30._0_4_ = uVar13 >> 0x10;
        auVar30._4_4_ = uVar16 >> 0x10;
        auVar30._8_4_ = uVar17 >> 0x10;
        auVar30._12_4_ = uVar18 >> 0x10;
        auVar38._0_4_ = uVar13 >> 0x18;
        auVar38._4_4_ = uVar16 >> 0x18;
        auVar38._8_4_ = uVar17 >> 0x18;
        auVar38._12_4_ = uVar18 >> 0x18;
        auVar15 = a64_TBL(ZEXT816(0),auVar15,auVar27,auVar1);
        auVar26 = a64_TBL(ZEXT816(0),auVar30,auVar33,auVar1);
        in_q6 = a64_TBL(ZEXT816(0),auVar38,auVar41,auVar1);
        *puVar5 = auVar15[0];
        puVar5[1] = auVar26[0];
        puVar5[2] = in_q6[0];
        puVar5[3] = auVar15[1];
        puVar5[4] = auVar26[1];
        puVar5[5] = in_q6[1];
        puVar5[6] = auVar15[2];
        puVar5[7] = auVar26[2];
        puVar5[8] = in_q6[2];
        puVar5[9] = auVar15[3];
        puVar5[10] = auVar26[3];
        puVar5[0xb] = in_q6[3];
        puVar5[0xc] = auVar15[4];
        puVar5[0xd] = auVar26[4];
        puVar5[0xe] = in_q6[4];
        puVar5[0xf] = auVar15[5];
        puVar5[0x10] = auVar26[5];
        puVar5[0x11] = in_q6[5];
        puVar5[0x12] = auVar15[6];
        puVar5[0x13] = auVar26[6];
        puVar5[0x14] = in_q6[6];
        puVar5[0x15] = auVar15[7];
        puVar5[0x16] = auVar26[7];
        puVar5[0x17] = in_q6[7];
        puVar5 = puVar5 + 0x18;
      } while (lVar11 != 0);
      if (uVar6 - uVar8 == 0) {
        return;
      }
      goto LAB_005c7a28;
    }
  }
  uVar8 = 0;
LAB_005c7a28:
  lVar7 = uVar6 - uVar8;
  lVar11 = uVar8 * 3 + 2;
  pbVar9 = param_3 + lVar11;
  puVar5 = param_2 + lVar11;
  do {
    lVar7 = lVar7 + -1;
    iVar12 = (int)((float)(int)((uint)pbVar9[-2] << 8 | (uint)pbVar9[-1] << 0x10 |
                               (uint)*pbVar9 << 0x18) * param_1);
    puVar5[-2] = (char)((uint)iVar12 >> 8);
    puVar5[-1] = (char)((uint)iVar12 >> 0x10);
    *puVar5 = (char)((uint)iVar12 >> 0x18);
    pbVar9 = pbVar9 + 3;
    puVar5 = puVar5 + 3;
  } while (lVar7 != 0);
  return;
}


// ===== 005c7cfc  ma_copy_and_apply_volume_factor_pcm_frames_s32 =====

void ma_copy_and_apply_volume_factor_pcm_frames_s32
               (float param_1,long param_2,long param_3,long param_4,uint param_5)

{
  undefined1 (*pauVar1) [16];
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  int *piVar6;
  undefined1 (*pauVar7) [16];
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  if (((param_2 != 0) && (param_3 != 0)) && (uVar2 = (ulong)param_5 * param_4, uVar2 != 0)) {
    uVar4 = 0;
    if ((7 < uVar2) && (0x1f < (ulong)(param_2 - param_3))) {
      uVar4 = uVar2 & 0xfffffffffffffff8;
      piVar5 = (int *)(param_2 + 0x10);
      pauVar7 = (undefined1 (*) [16])(param_3 + 0x10);
      uVar8 = uVar4;
      do {
        pauVar1 = pauVar7 + -1;
        auVar10 = *pauVar7;
        uVar8 = uVar8 - 8;
        pauVar7 = pauVar7 + 2;
        auVar9 = NEON_scvtf(*pauVar1,4);
        auVar10 = NEON_scvtf(auVar10,4);
        *piVar5 = (int)(auVar9._8_4_ * param_1);
        piVar5[1] = (int)(auVar9._12_4_ * param_1);
        piVar5[-4] = (int)(auVar9._0_4_ * param_1);
        piVar5[-3] = (int)(auVar9._4_4_ * param_1);
        piVar5[4] = (int)(auVar10._8_4_ * param_1);
        piVar5[5] = (int)(auVar10._12_4_ * param_1);
        *piVar5 = (int)(auVar10._0_4_ * param_1);
        piVar5[1] = (int)(auVar10._4_4_ * param_1);
        piVar5 = piVar5 + 8;
      } while (uVar8 != 0);
      if (uVar2 - uVar4 == 0) {
        return;
      }
    }
    lVar3 = uVar2 - uVar4;
    piVar5 = (int *)(param_2 + uVar4 * 4);
    piVar6 = (int *)(param_3 + uVar4 * 4);
    do {
      lVar3 = lVar3 + -1;
      *piVar5 = (int)((float)*piVar6 * param_1);
      piVar5 = piVar5 + 1;
      piVar6 = piVar6 + 1;
    } while (lVar3 != 0);
  }
  return;
}


// ===== 005c7da0  ma_copy_and_apply_volume_factor_pcm_frames_f32 =====

void ma_copy_and_apply_volume_factor_pcm_frames_f32
               (float param_1,long param_2,long param_3,long param_4,uint param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined4 *puVar5;
  float *pfVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  float *pfVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar2 = (ulong)param_5 * param_4;
    if (param_1 == 1.0) {
      if ((param_2 != param_3) && (uVar2 != 0)) {
        uVar4 = 0;
        if ((7 < uVar2) && (0x1f < (ulong)(param_2 - param_3))) {
          uVar4 = uVar2 & 0xfffffffffffffff8;
          puVar7 = (undefined8 *)(param_2 + 0x10);
          puVar10 = (undefined8 *)(param_3 + 0x10);
          uVar11 = uVar4;
          do {
            puVar1 = puVar10 + -1;
            uVar12 = puVar10[-2];
            uVar14 = puVar10[1];
            uVar13 = *puVar10;
            uVar11 = uVar11 - 8;
            puVar10 = puVar10 + 4;
            puVar7[-1] = *puVar1;
            puVar7[-2] = uVar12;
            puVar7[1] = uVar14;
            *puVar7 = uVar13;
            puVar7 = puVar7 + 4;
          } while (uVar11 != 0);
          if (uVar2 - uVar4 == 0) {
            return;
          }
        }
        lVar3 = uVar2 - uVar4;
        puVar5 = (undefined4 *)(param_2 + uVar4 * 4);
        puVar8 = (undefined4 *)(param_3 + uVar4 * 4);
        do {
          lVar3 = lVar3 + -1;
          *puVar5 = *puVar8;
          puVar5 = puVar5 + 1;
          puVar8 = puVar8 + 1;
        } while (lVar3 != 0);
      }
    }
    else if (uVar2 != 0) {
      uVar4 = 0;
      if ((7 < uVar2) && (0x1f < (ulong)(param_2 - param_3))) {
        uVar4 = uVar2 & 0xfffffffffffffff8;
        puVar7 = (undefined8 *)(param_2 + 0x10);
        puVar10 = (undefined8 *)(param_3 + 0x10);
        uVar11 = uVar4;
        do {
          puVar1 = puVar10 + -1;
          uVar12 = puVar10[-2];
          uVar14 = puVar10[1];
          uVar13 = *puVar10;
          uVar11 = uVar11 - 8;
          puVar10 = puVar10 + 4;
          puVar7[-1] = CONCAT44((float)((ulong)*puVar1 >> 0x20) * param_1,(float)*puVar1 * param_1);
          puVar7[-2] = CONCAT44((float)((ulong)uVar12 >> 0x20) * param_1,(float)uVar12 * param_1);
          puVar7[1] = CONCAT44((float)((ulong)uVar14 >> 0x20) * param_1,(float)uVar14 * param_1);
          *puVar7 = CONCAT44((float)((ulong)uVar13 >> 0x20) * param_1,(float)uVar13 * param_1);
          puVar7 = puVar7 + 4;
        } while (uVar11 != 0);
        if (uVar2 - uVar4 == 0) {
          return;
        }
      }
      lVar3 = uVar2 - uVar4;
      pfVar6 = (float *)(param_2 + uVar4 * 4);
      pfVar9 = (float *)(param_3 + uVar4 * 4);
      do {
        lVar3 = lVar3 + -1;
        *pfVar6 = *pfVar9 * param_1;
        pfVar6 = pfVar6 + 1;
        pfVar9 = pfVar9 + 1;
      } while (lVar3 != 0);
    }
  }
  return;
}


// ===== 005c7eac  ma_apply_volume_factor_pcm_frames_u8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ma_apply_volume_factor_pcm_frames_u8
               (float param_1,undefined1 (*param_2) [16],long param_3,uint param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong *puVar9;
  undefined1 (*pauVar10) [16];
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  auVar13 = _DAT_0024e4f0;
  auVar12 = _DAT_0024e3a0;
  auVar3 = _DAT_0024e360;
  auVar2 = _DAT_0024e210;
  auVar1 = _DAT_0024de80;
  if (param_2 == (undefined1 (*) [16])0x0) {
    return;
  }
  uVar4 = (ulong)param_4 * param_3;
  if (uVar4 == 0) {
    return;
  }
  if (uVar4 < 8) {
    uVar6 = 0;
  }
  else {
    if (uVar4 < 0x10) {
      uVar7 = 0;
    }
    else {
      uVar6 = uVar4 & 0xfffffffffffffff0;
      pauVar10 = param_2;
      uVar7 = uVar6;
      do {
        auVar14 = *pauVar10;
        uVar7 = uVar7 - 0x10;
        auVar15 = a64_TBL(ZEXT816(0),auVar14,auVar1);
        auVar17 = a64_TBL(ZEXT816(0),auVar14,auVar12);
        auVar19 = a64_TBL(ZEXT816(0),auVar14,auVar13);
        auVar14 = a64_TBL(ZEXT816(0),auVar14,auVar2);
        auVar16 = NEON_ucvtf(auVar15,4);
        auVar18 = NEON_ucvtf(auVar17,4);
        auVar17 = NEON_ucvtf(auVar19,4);
        auVar15 = NEON_ucvtf(auVar14,4);
        auVar14._4_4_ = (int)(auVar15._4_4_ * param_1);
        auVar14._0_4_ = (int)(auVar15._0_4_ * param_1);
        auVar14._8_4_ = (int)(auVar15._8_4_ * param_1);
        auVar14._12_4_ = (int)(auVar15._12_4_ * param_1);
        auVar15._4_4_ = (int)(auVar17._4_4_ * param_1);
        auVar15._0_4_ = (int)(auVar17._0_4_ * param_1);
        auVar15._8_4_ = (int)(auVar17._8_4_ * param_1);
        auVar15._12_4_ = (int)(auVar17._12_4_ * param_1);
        auVar17._4_4_ = (int)(auVar18._4_4_ * param_1);
        auVar17._0_4_ = (int)(auVar18._0_4_ * param_1);
        auVar17._8_4_ = (int)(auVar18._8_4_ * param_1);
        auVar17._12_4_ = (int)(auVar18._12_4_ * param_1);
        auVar18._4_4_ = (int)(auVar16._4_4_ * param_1);
        auVar18._0_4_ = (int)(auVar16._0_4_ * param_1);
        auVar18._8_4_ = (int)(auVar16._8_4_ * param_1);
        auVar18._12_4_ = (int)(auVar16._12_4_ * param_1);
        auVar14 = a64_TBL(ZEXT816(0),auVar14,auVar15,auVar17,auVar18,auVar3);
        *(long *)(*pauVar10 + 8) = auVar14._8_8_;
        *(long *)*pauVar10 = auVar14._0_8_;
        pauVar10 = pauVar10 + 1;
      } while (uVar7 != 0);
      if (uVar4 - uVar6 == 0) {
        return;
      }
      uVar7 = uVar6;
      if (((uint)uVar4 >> 3 & 1) == 0) goto LAB_005c7fcc;
    }
    auVar3 = _DAT_0024e4f0;
    auVar2 = _DAT_0024e210;
    auVar1 = _DAT_0024e040;
    uVar6 = uVar4 & 0xfffffffffffffff8;
    lVar5 = uVar7 - uVar6;
    puVar9 = (ulong *)(*param_2 + uVar7);
    do {
      auVar12._0_8_ = *puVar9;
      auVar12._8_8_ = 0;
      lVar5 = lVar5 + 8;
      auVar13 = a64_TBL(ZEXT816(0),auVar12,auVar3);
      auVar12 = a64_TBL(ZEXT816(0),auVar12,auVar2);
      auVar13 = NEON_ucvtf(auVar13,4);
      auVar12 = NEON_ucvtf(auVar12,4);
      auVar16._0_4_ = (int)(auVar13._0_4_ * param_1);
      auVar16._4_4_ = (int)(auVar13._4_4_ * param_1);
      auVar16._8_4_ = (int)(auVar13._8_4_ * param_1);
      auVar16._12_4_ = (int)(auVar13._12_4_ * param_1);
      auVar13._0_4_ = (int)(auVar12._0_4_ * param_1);
      auVar13._4_4_ = (int)(auVar12._4_4_ * param_1);
      auVar13._8_4_ = (int)(auVar12._8_4_ * param_1);
      auVar13._12_4_ = (int)(auVar12._12_4_ * param_1);
      auVar12 = a64_TBL(ZEXT816(0),auVar13,auVar16,auVar1);
      *puVar9 = auVar12._0_8_;
      puVar9 = puVar9 + 1;
    } while (lVar5 != 0);
    if (uVar4 - uVar6 == 0) {
      return;
    }
  }
LAB_005c7fcc:
  lVar5 = uVar4 - uVar6;
  pbVar8 = *param_2 + uVar6;
  do {
    lVar5 = lVar5 + -1;
    fVar11 = (float)NEON_ucvtf((uint)*pbVar8);
    *pbVar8 = (byte)(int)(fVar11 * param_1);
    pbVar8 = pbVar8 + 1;
  } while (lVar5 != 0);
  return;
}


// ===== 005c7ff4  ma_apply_volume_factor_pcm_frames_s16 =====

void ma_apply_volume_factor_pcm_frames_s16(float param_1,long param_2,long param_3,uint param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  short *psVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if ((param_2 != 0) && (uVar1 = (ulong)param_4 * param_3, uVar1 != 0)) {
    if (uVar1 < 0x10) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar1 & 0xfffffffffffffff0;
      psVar4 = (short *)(param_2 + 0x10);
      uVar5 = uVar3;
      do {
        uVar5 = uVar5 - 0x10;
        auVar8._0_4_ = (int)psVar4[-4];
        auVar8._4_4_ = (int)psVar4[-3];
        auVar8._8_4_ = (int)psVar4[-2];
        auVar8._12_4_ = (int)psVar4[-1];
        auVar6._0_4_ = (int)psVar4[-8];
        auVar6._4_4_ = (int)psVar4[-7];
        auVar6._8_4_ = (int)psVar4[-6];
        auVar6._12_4_ = (int)psVar4[-5];
        auVar9._0_4_ = (int)psVar4[4];
        auVar9._4_4_ = (int)psVar4[5];
        auVar9._8_4_ = (int)psVar4[6];
        auVar9._12_4_ = (int)psVar4[7];
        auVar7._0_4_ = (int)*psVar4;
        auVar7._4_4_ = (int)psVar4[1];
        auVar7._8_4_ = (int)psVar4[2];
        auVar7._12_4_ = (int)psVar4[3];
        auVar8 = NEON_scvtf(auVar8,4);
        auVar6 = NEON_scvtf(auVar6,4);
        auVar9 = NEON_scvtf(auVar9,4);
        auVar7 = NEON_scvtf(auVar7,4);
        *psVar4 = (short)(int)(auVar8._0_4_ * param_1);
        psVar4[1] = (short)(int)(auVar8._4_4_ * param_1);
        psVar4[2] = (short)(int)(auVar8._8_4_ * param_1);
        psVar4[3] = (short)(int)(auVar8._12_4_ * param_1);
        psVar4[-8] = (short)(int)(auVar6._0_4_ * param_1);
        psVar4[-7] = (short)(int)(auVar6._4_4_ * param_1);
        psVar4[-6] = (short)(int)(auVar6._8_4_ * param_1);
        psVar4[-5] = (short)(int)(auVar6._12_4_ * param_1);
        psVar4[8] = (short)(int)(auVar9._0_4_ * param_1);
        psVar4[9] = (short)(int)(auVar9._4_4_ * param_1);
        psVar4[10] = (short)(int)(auVar9._8_4_ * param_1);
        psVar4[0xb] = (short)(int)(auVar9._12_4_ * param_1);
        *psVar4 = (short)(int)(auVar7._0_4_ * param_1);
        psVar4[1] = (short)(int)(auVar7._4_4_ * param_1);
        psVar4[2] = (short)(int)(auVar7._8_4_ * param_1);
        psVar4[3] = (short)(int)(auVar7._12_4_ * param_1);
        psVar4 = psVar4 + 0x10;
      } while (uVar5 != 0);
      if (uVar1 - uVar3 == 0) {
        return;
      }
    }
    lVar2 = uVar1 - uVar3;
    psVar4 = (short *)(param_2 + uVar3 * 2);
    do {
      lVar2 = lVar2 + -1;
      *psVar4 = (short)(int)((float)(int)*psVar4 * param_1);
      psVar4 = psVar4 + 1;
    } while (lVar2 != 0);
  }
  return;
}


// ===== 005c80ac  ma_apply_volume_factor_pcm_frames_s24 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ma_apply_volume_factor_pcm_frames_s24
               (float param_1,undefined1 *param_2,long param_3,uint param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  uint uVar14;
  uint uVar15;
  undefined1 in_q4 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  uint uVar16;
  uint uVar17;
  uint uVar20;
  uint uVar21;
  undefined1 in_q5 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  uint uVar22;
  undefined1 in_q6 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  uint uVar29;
  uint uVar32;
  uint uVar33;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  uint uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  
  auVar3 = _DAT_0024e4f0;
  auVar2 = _DAT_0024e3a0;
  auVar24 = _DAT_0024e360;
  auVar1 = _DAT_0024e210;
  auVar13 = _DAT_0024de80;
  if (param_2 == (undefined1 *)0x0) {
    return;
  }
  uVar5 = (ulong)param_4 * param_3;
  if (uVar5 == 0) {
    return;
  }
  if (uVar5 < 8) {
    uVar7 = 0;
  }
  else {
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar5 - 1;
    lVar6 = (uVar5 - 1) * 3;
    uVar7 = 0;
    if (((param_2 + 1 <= param_2 + 1 + lVar6 && param_2 + 2 <= param_2 + 2 + lVar6) &&
         param_2 <= param_2 + lVar6) && (SUB168(auVar27 * ZEXT816(3),8) == 0)) {
      if (uVar5 < 0x10) {
        uVar8 = 0;
        auVar13 = in_q4;
        auVar24 = in_q5;
      }
      else {
        uVar7 = uVar5 & 0xfffffffffffffff0;
        puVar4 = param_2;
        uVar8 = uVar7;
        do {
          auVar43[0] = *puVar4;
          auVar46[0] = puVar4[1];
          auVar37[0] = puVar4[2];
          auVar43[1] = puVar4[3];
          auVar46[1] = puVar4[4];
          auVar37[1] = puVar4[5];
          auVar43[2] = puVar4[6];
          auVar46[2] = puVar4[7];
          auVar37[2] = puVar4[8];
          auVar43[3] = puVar4[9];
          auVar46[3] = puVar4[10];
          auVar37[3] = puVar4[0xb];
          auVar43[4] = puVar4[0xc];
          auVar46[4] = puVar4[0xd];
          auVar37[4] = puVar4[0xe];
          auVar43[5] = puVar4[0xf];
          auVar46[5] = puVar4[0x10];
          auVar37[5] = puVar4[0x11];
          auVar43[6] = puVar4[0x12];
          auVar46[6] = puVar4[0x13];
          auVar37[6] = puVar4[0x14];
          auVar43[7] = puVar4[0x15];
          auVar46[7] = puVar4[0x16];
          auVar37[7] = puVar4[0x17];
          auVar43[8] = puVar4[0x18];
          auVar46[8] = puVar4[0x19];
          auVar37[8] = puVar4[0x1a];
          auVar43[9] = puVar4[0x1b];
          auVar46[9] = puVar4[0x1c];
          auVar37[9] = puVar4[0x1d];
          auVar43[10] = puVar4[0x1e];
          auVar46[10] = puVar4[0x1f];
          auVar37[10] = puVar4[0x20];
          auVar43[0xb] = puVar4[0x21];
          auVar46[0xb] = puVar4[0x22];
          auVar37[0xb] = puVar4[0x23];
          auVar43[0xc] = puVar4[0x24];
          auVar46[0xc] = puVar4[0x25];
          auVar37[0xc] = puVar4[0x26];
          auVar43[0xd] = puVar4[0x27];
          auVar46[0xd] = puVar4[0x28];
          auVar37[0xd] = puVar4[0x29];
          auVar43[0xe] = puVar4[0x2a];
          auVar46[0xe] = puVar4[0x2b];
          auVar37[0xe] = puVar4[0x2c];
          auVar43[0xf] = puVar4[0x2d];
          auVar46[0xf] = puVar4[0x2e];
          auVar37[0xf] = puVar4[0x2f];
          uVar8 = uVar8 - 0x10;
          auVar27 = a64_TBL(ZEXT816(0),auVar43,auVar13);
          auVar40 = a64_TBL(ZEXT816(0),auVar46,auVar13);
          auVar30 = a64_TBL(ZEXT816(0),auVar43,auVar2);
          auVar42 = a64_TBL(ZEXT816(0),auVar46,auVar2);
          auVar41 = a64_TBL(ZEXT816(0),auVar43,auVar3);
          auVar44 = a64_TBL(ZEXT816(0),auVar46,auVar3);
          auVar43 = a64_TBL(ZEXT816(0),auVar43,auVar1);
          auVar46 = a64_TBL(ZEXT816(0),auVar46,auVar1);
          auVar48 = a64_TBL(ZEXT816(0),auVar37,auVar13);
          auVar50 = a64_TBL(ZEXT816(0),auVar37,auVar2);
          auVar52 = a64_TBL(ZEXT816(0),auVar37,auVar3);
          auVar35 = a64_TBL(ZEXT816(0),auVar37,auVar1);
          auVar38[5] = auVar27[4];
          auVar38[6] = auVar40[4] | auVar27[5];
          auVar38[9] = auVar27[8];
          auVar38[10] = auVar40[8] | auVar27[9];
          auVar38[0xd] = auVar27[0xc];
          auVar38[0xe] = auVar40[0xc] | auVar27[0xd];
          auVar26[5] = auVar30[4];
          auVar26[6] = auVar42[4] | auVar30[5];
          auVar26[9] = auVar30[8];
          auVar26[10] = auVar42[8] | auVar30[9];
          auVar26[0xd] = auVar30[0xc];
          auVar26[0xe] = auVar42[0xc] | auVar30[0xd];
          auVar38._0_5_ =
               (uint5)CONCAT12(auVar40[1] | auVar27[2] | auVar48[0],
                               CONCAT11(auVar40[0] | auVar27[1],auVar27[0])) << 8;
          auVar38[7] = auVar40[5] | auVar27[6] | auVar48[4];
          auVar38[8] = 0;
          auVar38[0xb] = auVar40[9] | auVar27[10] | auVar48[8];
          auVar38[0xc] = 0;
          auVar38[0xf] = auVar40[0xd] | auVar27[0xe] | auVar48[0xc];
          auVar26._0_5_ =
               (uint5)CONCAT12(auVar42[1] | auVar30[2] | auVar50[0],
                               CONCAT11(auVar42[0] | auVar30[1],auVar30[0])) << 8;
          auVar26[7] = auVar42[5] | auVar30[6] | auVar50[4];
          auVar26[8] = 0;
          auVar26[0xb] = auVar42[9] | auVar30[10] | auVar50[8];
          auVar26[0xc] = 0;
          auVar26[0xf] = auVar42[0xd] | auVar30[0xe] | auVar50[0xc];
          auVar42._0_5_ =
               (uint5)CONCAT12(auVar44[1] | auVar41[2] | auVar52[0],
                               CONCAT11(auVar44[0] | auVar41[1],auVar41[0])) << 8;
          auVar42[5] = auVar41[4];
          auVar42[6] = auVar44[4] | auVar41[5];
          auVar42[7] = auVar44[5] | auVar41[6] | auVar52[4];
          auVar42[8] = 0;
          auVar42[9] = auVar41[8];
          auVar42[10] = auVar44[8] | auVar41[9];
          auVar42[0xb] = auVar44[9] | auVar41[10] | auVar52[8];
          auVar42[0xc] = 0;
          auVar42[0xd] = auVar41[0xc];
          auVar42[0xe] = auVar44[0xc] | auVar41[0xd];
          auVar42[0xf] = auVar44[0xd] | auVar41[0xe] | auVar52[0xc];
          auVar40._0_5_ =
               (uint5)CONCAT12(auVar46[1] | auVar43[2] | auVar35[0],
                               CONCAT11(auVar46[0] | auVar43[1],auVar43[0])) << 8;
          auVar40[5] = auVar43[4];
          auVar40[6] = auVar46[4] | auVar43[5];
          auVar40[7] = auVar46[5] | auVar43[6] | auVar35[4];
          auVar40[8] = 0;
          auVar40[9] = auVar43[8];
          auVar40[10] = auVar46[8] | auVar43[9];
          auVar40[0xb] = auVar46[9] | auVar43[10] | auVar35[8];
          auVar40[0xc] = 0;
          auVar40[0xd] = auVar43[0xc];
          auVar40[0xe] = auVar46[0xc] | auVar43[0xd];
          auVar40[0xf] = auVar46[0xd] | auVar43[0xe] | auVar35[0xc];
          auVar27 = NEON_scvtf(auVar38,4);
          auVar30 = NEON_scvtf(auVar26,4);
          auVar38 = NEON_scvtf(auVar42,4);
          auVar35 = NEON_scvtf(auVar40,4);
          in_q6._0_4_ = (uint)(auVar27._0_4_ * param_1);
          in_q6._4_4_ = (uint)(auVar27._4_4_ * param_1);
          in_q6._8_4_ = (uint)(auVar27._8_4_ * param_1);
          in_q6._12_4_ = (uint)(auVar27._12_4_ * param_1);
          uVar11 = (uint)(auVar30._0_4_ * param_1);
          uVar14 = (uint)(auVar30._4_4_ * param_1);
          uVar15 = (uint)(auVar30._8_4_ * param_1);
          uVar16 = (uint)(auVar30._12_4_ * param_1);
          uVar29 = (uint)(auVar38._0_4_ * param_1);
          uVar32 = (uint)(auVar38._4_4_ * param_1);
          uVar33 = (uint)(auVar38._8_4_ * param_1);
          uVar34 = (uint)(auVar38._12_4_ * param_1);
          uVar17 = (uint)(auVar35._0_4_ * param_1);
          uVar20 = (uint)(auVar35._4_4_ * param_1);
          uVar21 = (uint)(auVar35._8_4_ * param_1);
          uVar22 = (uint)(auVar35._12_4_ * param_1);
          auVar50._0_4_ = in_q6._0_4_ >> 8;
          auVar50._4_4_ = in_q6._4_4_ >> 8;
          auVar50._8_4_ = in_q6._8_4_ >> 8;
          auVar50._12_4_ = in_q6._12_4_ >> 8;
          auVar49._0_4_ = in_q6._0_4_ >> 0x10;
          auVar49._4_4_ = in_q6._4_4_ >> 0x10;
          auVar49._8_4_ = in_q6._8_4_ >> 0x10;
          auVar49._12_4_ = in_q6._12_4_ >> 0x10;
          auVar48._0_4_ = uVar11 >> 8;
          auVar48._4_4_ = uVar14 >> 8;
          auVar48._8_4_ = uVar15 >> 8;
          auVar48._12_4_ = uVar16 >> 8;
          auVar47._0_4_ = uVar11 >> 0x10;
          auVar47._4_4_ = uVar14 >> 0x10;
          auVar47._8_4_ = uVar15 >> 0x10;
          auVar47._12_4_ = uVar16 >> 0x10;
          auVar44._0_4_ = uVar29 >> 8;
          auVar44._4_4_ = uVar32 >> 8;
          auVar44._8_4_ = uVar33 >> 8;
          auVar44._12_4_ = uVar34 >> 8;
          auVar45._0_4_ = uVar29 >> 0x10;
          auVar45._4_4_ = uVar32 >> 0x10;
          auVar45._8_4_ = uVar33 >> 0x10;
          auVar45._12_4_ = uVar34 >> 0x10;
          auVar53._0_4_ = uVar29 >> 0x18;
          auVar53._4_4_ = uVar32 >> 0x18;
          auVar53._8_4_ = uVar33 >> 0x18;
          auVar53._12_4_ = uVar34 >> 0x18;
          auVar41._0_4_ = uVar17 >> 8;
          auVar41._4_4_ = uVar20 >> 8;
          auVar41._8_4_ = uVar21 >> 8;
          auVar41._12_4_ = uVar22 >> 8;
          auVar52._0_4_ = uVar17 >> 0x10;
          auVar52._4_4_ = uVar20 >> 0x10;
          auVar52._8_4_ = uVar21 >> 0x10;
          auVar52._12_4_ = uVar22 >> 0x10;
          auVar51._0_4_ = uVar17 >> 0x18;
          auVar51._4_4_ = uVar20 >> 0x18;
          auVar51._8_4_ = uVar21 >> 0x18;
          auVar51._12_4_ = uVar22 >> 0x18;
          auVar27 = a64_TBL(ZEXT816(0),auVar41,auVar44,auVar48,auVar50,auVar24);
          auVar38 = a64_TBL(ZEXT816(0),auVar52,auVar45,auVar47,auVar49,auVar24);
          auVar30._4_4_ = uVar14 >> 0x18;
          auVar30._0_4_ = uVar11 >> 0x18;
          auVar30._8_4_ = uVar15 >> 0x18;
          auVar30._12_4_ = uVar16 >> 0x18;
          auVar35._4_4_ = in_q6._4_4_ >> 0x18;
          auVar35._0_4_ = in_q6._0_4_ >> 0x18;
          auVar35._8_4_ = in_q6._8_4_ >> 0x18;
          auVar35._12_4_ = in_q6._12_4_ >> 0x18;
          auVar30 = a64_TBL(ZEXT816(0),auVar51,auVar53,auVar30,auVar35,auVar24);
          *puVar4 = auVar27[0];
          puVar4[1] = auVar38[0];
          puVar4[2] = auVar30[0];
          puVar4[3] = auVar27[1];
          puVar4[4] = auVar38[1];
          puVar4[5] = auVar30[1];
          puVar4[6] = auVar27[2];
          puVar4[7] = auVar38[2];
          puVar4[8] = auVar30[2];
          puVar4[9] = auVar27[3];
          puVar4[10] = auVar38[3];
          puVar4[0xb] = auVar30[3];
          puVar4[0xc] = auVar27[4];
          puVar4[0xd] = auVar38[4];
          puVar4[0xe] = auVar30[4];
          puVar4[0xf] = auVar27[5];
          puVar4[0x10] = auVar38[5];
          puVar4[0x11] = auVar30[5];
          puVar4[0x12] = auVar27[6];
          puVar4[0x13] = auVar38[6];
          puVar4[0x14] = auVar30[6];
          puVar4[0x15] = auVar27[7];
          puVar4[0x16] = auVar38[7];
          puVar4[0x17] = auVar30[7];
          puVar4[0x18] = auVar27[8];
          puVar4[0x19] = auVar38[8];
          puVar4[0x1a] = auVar30[8];
          puVar4[0x1b] = auVar27[9];
          puVar4[0x1c] = auVar38[9];
          puVar4[0x1d] = auVar30[9];
          puVar4[0x1e] = auVar27[10];
          puVar4[0x1f] = auVar38[10];
          puVar4[0x20] = auVar30[10];
          puVar4[0x21] = auVar27[0xb];
          puVar4[0x22] = auVar38[0xb];
          puVar4[0x23] = auVar30[0xb];
          puVar4[0x24] = auVar27[0xc];
          puVar4[0x25] = auVar38[0xc];
          puVar4[0x26] = auVar30[0xc];
          puVar4[0x27] = auVar27[0xd];
          puVar4[0x28] = auVar38[0xd];
          puVar4[0x29] = auVar30[0xd];
          puVar4[0x2a] = auVar27[0xe];
          puVar4[0x2b] = auVar38[0xe];
          puVar4[0x2c] = auVar30[0xe];
          puVar4[0x2d] = auVar27[0xf];
          puVar4[0x2e] = auVar38[0xf];
          puVar4[0x2f] = auVar30[0xf];
          puVar4 = puVar4 + 0x30;
        } while (uVar8 != 0);
        if (uVar5 - uVar7 == 0) {
          return;
        }
        uVar8 = uVar7;
        if (((uint)uVar5 >> 3 & 1) == 0) goto LAB_005c8314;
      }
      auVar3 = _DAT_0024e4f0;
      auVar2 = _DAT_0024e210;
      auVar1 = _DAT_0024e040;
      uVar7 = uVar5 & 0xfffffffffffffff8;
      lVar6 = uVar8 - uVar7;
      puVar4 = param_2 + uVar8 * 3;
      do {
        auVar12[0] = *puVar4;
        auVar18[0] = puVar4[1];
        auVar23[0] = puVar4[2];
        auVar12[1] = puVar4[3];
        auVar18[1] = puVar4[4];
        auVar23[1] = puVar4[5];
        auVar12[2] = puVar4[6];
        auVar18[2] = puVar4[7];
        auVar23[2] = puVar4[8];
        auVar12[3] = puVar4[9];
        auVar18[3] = puVar4[10];
        auVar23[3] = puVar4[0xb];
        auVar12[4] = puVar4[0xc];
        auVar18[4] = puVar4[0xd];
        auVar23[4] = puVar4[0xe];
        auVar12[5] = puVar4[0xf];
        auVar18[5] = puVar4[0x10];
        auVar23[5] = puVar4[0x11];
        auVar12[6] = puVar4[0x12];
        auVar18[6] = puVar4[0x13];
        auVar23[6] = puVar4[0x14];
        auVar12._8_8_ = auVar13._8_8_;
        auVar12[7] = puVar4[0x15];
        auVar18._8_8_ = auVar24._8_8_;
        auVar18[7] = puVar4[0x16];
        auVar23._8_8_ = in_q6._8_8_;
        auVar23[7] = puVar4[0x17];
        lVar6 = lVar6 + 8;
        auVar24 = a64_TBL(ZEXT816(0),auVar12,auVar3);
        auVar27 = a64_TBL(ZEXT816(0),auVar18,auVar3);
        auVar30 = a64_TBL(ZEXT816(0),auVar12,auVar2);
        auVar35 = a64_TBL(ZEXT816(0),auVar18,auVar2);
        auVar38 = a64_TBL(ZEXT816(0),auVar23,auVar3);
        auVar13 = a64_TBL(ZEXT816(0),auVar23,auVar2);
        auVar19[5] = auVar24[4];
        auVar19[6] = auVar27[4] | auVar24[5];
        auVar19[9] = auVar24[8];
        auVar19[10] = auVar27[8] | auVar24[9];
        auVar19[0xd] = auVar24[0xc];
        auVar19[0xe] = auVar27[0xc] | auVar24[0xd];
        auVar19._0_5_ =
             (uint5)CONCAT12(auVar27[1] | auVar24[2] | auVar38[0],
                             CONCAT11(auVar27[0] | auVar24[1],auVar24[0])) << 8;
        auVar19[7] = auVar27[5] | auVar24[6] | auVar38[4];
        auVar19[8] = 0;
        auVar19[0xb] = auVar27[9] | auVar24[10] | auVar38[8];
        auVar19[0xc] = 0;
        auVar19[0xf] = auVar27[0xd] | auVar24[0xe] | auVar38[0xc];
        auVar24._0_5_ =
             (uint5)CONCAT12(auVar35[1] | auVar30[2] | auVar13[0],
                             CONCAT11(auVar35[0] | auVar30[1],auVar30[0])) << 8;
        auVar24[5] = auVar30[4];
        auVar24[6] = auVar35[4] | auVar30[5];
        auVar24[7] = auVar35[5] | auVar30[6] | auVar13[4];
        auVar24[8] = 0;
        auVar24[9] = auVar30[8];
        auVar24[10] = auVar35[8] | auVar30[9];
        auVar24[0xb] = auVar35[9] | auVar30[10] | auVar13[8];
        auVar24[0xc] = 0;
        auVar24[0xd] = auVar30[0xc];
        auVar24[0xe] = auVar35[0xc] | auVar30[0xd];
        auVar24[0xf] = auVar35[0xd] | auVar30[0xe] | auVar13[0xc];
        auVar27 = NEON_scvtf(auVar19,4);
        auVar13 = NEON_scvtf(auVar24,4);
        uVar17 = (uint)(auVar27._0_4_ * param_1);
        uVar20 = (uint)(auVar27._4_4_ * param_1);
        uVar21 = (uint)(auVar27._8_4_ * param_1);
        uVar22 = (uint)(auVar27._12_4_ * param_1);
        uVar11 = (uint)(auVar13._0_4_ * param_1);
        uVar14 = (uint)(auVar13._4_4_ * param_1);
        uVar15 = (uint)(auVar13._8_4_ * param_1);
        uVar16 = (uint)(auVar13._12_4_ * param_1);
        auVar25._0_4_ = uVar17 >> 8;
        auVar25._4_4_ = uVar20 >> 8;
        auVar25._8_4_ = uVar21 >> 8;
        auVar25._12_4_ = uVar22 >> 8;
        auVar31._0_4_ = uVar17 >> 0x10;
        auVar31._4_4_ = uVar20 >> 0x10;
        auVar31._8_4_ = uVar21 >> 0x10;
        auVar31._12_4_ = uVar22 >> 0x10;
        auVar39._0_4_ = uVar17 >> 0x18;
        auVar39._4_4_ = uVar20 >> 0x18;
        auVar39._8_4_ = uVar21 >> 0x18;
        auVar39._12_4_ = uVar22 >> 0x18;
        auVar13._0_4_ = uVar11 >> 8;
        auVar13._4_4_ = uVar14 >> 8;
        auVar13._8_4_ = uVar15 >> 8;
        auVar13._12_4_ = uVar16 >> 8;
        auVar28._0_4_ = uVar11 >> 0x10;
        auVar28._4_4_ = uVar14 >> 0x10;
        auVar28._8_4_ = uVar15 >> 0x10;
        auVar28._12_4_ = uVar16 >> 0x10;
        auVar36._0_4_ = uVar11 >> 0x18;
        auVar36._4_4_ = uVar14 >> 0x18;
        auVar36._8_4_ = uVar15 >> 0x18;
        auVar36._12_4_ = uVar16 >> 0x18;
        auVar13 = a64_TBL(ZEXT816(0),auVar13,auVar25,auVar1);
        auVar24 = a64_TBL(ZEXT816(0),auVar28,auVar31,auVar1);
        in_q6 = a64_TBL(ZEXT816(0),auVar36,auVar39,auVar1);
        *puVar4 = auVar13[0];
        puVar4[1] = auVar24[0];
        puVar4[2] = in_q6[0];
        puVar4[3] = auVar13[1];
        puVar4[4] = auVar24[1];
        puVar4[5] = in_q6[1];
        puVar4[6] = auVar13[2];
        puVar4[7] = auVar24[2];
        puVar4[8] = in_q6[2];
        puVar4[9] = auVar13[3];
        puVar4[10] = auVar24[3];
        puVar4[0xb] = in_q6[3];
        puVar4[0xc] = auVar13[4];
        puVar4[0xd] = auVar24[4];
        puVar4[0xe] = in_q6[4];
        puVar4[0xf] = auVar13[5];
        puVar4[0x10] = auVar24[5];
        puVar4[0x11] = in_q6[5];
        puVar4[0x12] = auVar13[6];
        puVar4[0x13] = auVar24[6];
        puVar4[0x14] = in_q6[6];
        puVar4[0x15] = auVar13[7];
        puVar4[0x16] = auVar24[7];
        puVar4[0x17] = in_q6[7];
        puVar4 = puVar4 + 0x18;
      } while (lVar6 != 0);
      if (uVar5 - uVar7 == 0) {
        return;
      }
    }
  }
LAB_005c8314:
  lVar6 = uVar5 - uVar7;
  pbVar9 = param_2 + uVar7 * 3 + 2;
  do {
    lVar6 = lVar6 + -1;
    iVar10 = (int)((float)(int)((uint)pbVar9[-2] << 8 | (uint)pbVar9[-1] << 0x10 |
                               (uint)*pbVar9 << 0x18) * param_1);
    pbVar9[-2] = (byte)((uint)iVar10 >> 8);
    pbVar9[-1] = (byte)((uint)iVar10 >> 0x10);
    *pbVar9 = (byte)((uint)iVar10 >> 0x18);
    pbVar9 = pbVar9 + 3;
  } while (lVar6 != 0);
  return;
}


// ===== 005c836c  ma_apply_volume_factor_pcm_frames_s32 =====

void ma_apply_volume_factor_pcm_frames_s32(float param_1,long param_2,long param_3,uint param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 (*pauVar4) [16];
  int *piVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if ((param_2 != 0) && (uVar1 = (ulong)param_4 * param_3, uVar1 != 0)) {
    if (uVar1 < 8) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar1 & 0xfffffffffffffff8;
      pauVar4 = (undefined1 (*) [16])(param_2 + 0x10);
      uVar6 = uVar3;
      do {
        uVar6 = uVar6 - 8;
        auVar7 = NEON_scvtf(pauVar4[-1],4);
        auVar8 = NEON_scvtf(*pauVar4,4);
        *(int *)*pauVar4 = (int)(auVar7._8_4_ * param_1);
        *(int *)(*pauVar4 + 4) = (int)(auVar7._12_4_ * param_1);
        *(int *)pauVar4[-1] = (int)(auVar7._0_4_ * param_1);
        *(int *)(pauVar4[-1] + 4) = (int)(auVar7._4_4_ * param_1);
        *(int *)pauVar4[1] = (int)(auVar8._8_4_ * param_1);
        *(int *)(pauVar4[1] + 4) = (int)(auVar8._12_4_ * param_1);
        *(int *)*pauVar4 = (int)(auVar8._0_4_ * param_1);
        *(int *)(*pauVar4 + 4) = (int)(auVar8._4_4_ * param_1);
        pauVar4 = pauVar4 + 2;
      } while (uVar6 != 0);
      if (uVar1 - uVar3 == 0) {
        return;
      }
    }
    lVar2 = uVar1 - uVar3;
    piVar5 = (int *)(param_2 + uVar3 * 4);
    do {
      lVar2 = lVar2 + -1;
      *piVar5 = (int)((float)*piVar5 * param_1);
      piVar5 = piVar5 + 1;
    } while (lVar2 != 0);
  }
  return;
}


// ===== 005c83f4  ma_apply_volume_factor_pcm_frames_f32 =====

void ma_apply_volume_factor_pcm_frames_f32(float param_1,long param_2,long param_3,uint param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  float *pfVar5;
  ulong uVar6;
  
  if ((param_2 != 0) && (uVar1 = (ulong)param_4 * param_3, param_1 != 1.0 && uVar1 != 0)) {
    if (uVar1 < 8) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar1 & 0xfffffffffffffff8;
      puVar4 = (undefined8 *)(param_2 + 0x10);
      uVar6 = uVar3;
      do {
        uVar6 = uVar6 - 8;
        puVar4[-1] = CONCAT44((float)((ulong)puVar4[-1] >> 0x20) * param_1,
                              (float)puVar4[-1] * param_1);
        puVar4[-2] = CONCAT44((float)((ulong)puVar4[-2] >> 0x20) * param_1,
                              (float)puVar4[-2] * param_1);
        puVar4[1] = CONCAT44((float)((ulong)puVar4[1] >> 0x20) * param_1,(float)puVar4[1] * param_1)
        ;
        *puVar4 = CONCAT44((float)((ulong)*puVar4 >> 0x20) * param_1,(float)*puVar4 * param_1);
        puVar4 = puVar4 + 4;
      } while (uVar6 != 0);
      if (uVar1 - uVar3 == 0) {
        return;
      }
    }
    lVar2 = uVar1 - uVar3;
    pfVar5 = (float *)(param_2 + uVar3 * 4);
    do {
      lVar2 = lVar2 + -1;
      *pfVar5 = *pfVar5 * param_1;
      pfVar5 = pfVar5 + 1;
    } while (lVar2 != 0);
  }
  return;
}


// ===== 005c8470  ma_apply_volume_factor_pcm_frames =====

void ma_apply_volume_factor_pcm_frames
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  ma_copy_and_apply_volume_factor_pcm_frames(param_1,param_1,param_2,param_3,param_4);
  return;
}


// ===== 005c8484  ma_copy_and_apply_volume_factor_per_channel_f32 =====

void ma_copy_and_apply_volume_factor_per_channel_f32
               (long param_1,long param_2,long param_3,uint param_4,long param_5)

{
  long lVar1;
  undefined8 *puVar2;
  float *pfVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  float *pfVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  float *pfVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  if (param_3 != 0) {
    uVar11 = (ulong)param_4;
    lVar1 = (ulong)param_4 * 4;
    lVar9 = 0;
    lVar10 = 0;
    uVar12 = uVar11 & 0xfffffff8;
    puVar13 = (undefined8 *)(param_2 + 0x10);
    puVar14 = (undefined8 *)(param_1 + 0x10);
    do {
      if (param_4 != 0) {
        uVar4 = 0;
        if (((7 < param_4) && (0x1f < (ulong)(param_1 - param_2))) &&
           (puVar2 = puVar14, puVar5 = (undefined8 *)(param_5 + 0x10), puVar7 = puVar13,
           uVar15 = uVar12, 0x1f < (ulong)((param_1 - param_5) + lVar1 * lVar10))) {
          do {
            uVar18 = puVar7[-2];
            uVar21 = puVar7[1];
            uVar20 = *puVar7;
            uVar15 = uVar15 - 8;
            uVar19 = puVar5[-2];
            uVar23 = puVar5[1];
            uVar22 = *puVar5;
            puVar2[-1] = CONCAT44((float)((ulong)puVar7[-1] >> 0x20) *
                                  (float)((ulong)puVar5[-1] >> 0x20),
                                  (float)puVar7[-1] * (float)puVar5[-1]);
            puVar2[-2] = CONCAT44((float)((ulong)uVar18 >> 0x20) * (float)((ulong)uVar19 >> 0x20),
                                  (float)uVar18 * (float)uVar19);
            puVar2[1] = CONCAT44((float)((ulong)uVar21 >> 0x20) * (float)((ulong)uVar23 >> 0x20),
                                 (float)uVar21 * (float)uVar23);
            *puVar2 = CONCAT44((float)((ulong)uVar20 >> 0x20) * (float)((ulong)uVar22 >> 0x20),
                               (float)uVar20 * (float)uVar22);
            puVar2 = puVar2 + 4;
            puVar5 = puVar5 + 4;
            puVar7 = puVar7 + 4;
          } while (uVar15 != 0);
          uVar4 = uVar12;
          if (uVar12 == uVar11) goto LAB_005c84b8;
        }
        lVar16 = (uVar4 + lVar9) * 4;
        lVar6 = uVar11 - uVar4;
        pfVar3 = (float *)(param_5 + uVar4 * 4);
        pfVar8 = (float *)(param_1 + lVar16);
        pfVar17 = (float *)(param_2 + lVar16);
        do {
          lVar6 = lVar6 + -1;
          *pfVar8 = *pfVar17 * *pfVar3;
          pfVar3 = pfVar3 + 1;
          pfVar8 = pfVar8 + 1;
          pfVar17 = pfVar17 + 1;
        } while (lVar6 != 0);
      }
LAB_005c84b8:
      lVar10 = lVar10 + 1;
      puVar13 = (undefined8 *)((long)puVar13 + lVar1);
      puVar14 = (undefined8 *)((long)puVar14 + lVar1);
      lVar9 = lVar9 + uVar11;
    } while (lVar10 != param_3);
  }
  return;
}


// ===== 005c8574  ma_copy_and_apply_volume_and_clip_samples_u8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ma_copy_and_apply_volume_and_clip_samples_u8
               (float param_1,ulong *param_2,short *param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  long lVar13;
  short *psVar14;
  ulong *puVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  auVar9 = _DAT_0024e360;
  if (param_4 == 0) {
    return;
  }
  iVar2 = (int)(param_1 * 256.0) * 0x100;
  if ((param_4 < 8) ||
     ((param_2 < param_3 + param_4 && (param_3 < (short *)((long)param_2 + param_4))))) {
    uVar10 = 0;
  }
  else {
    if (param_4 < 0x10) {
      uVar12 = 0;
    }
    else {
      uVar10 = param_4 & 0xfffffffffffffff0;
      psVar14 = param_3;
      puVar15 = param_2;
      uVar12 = uVar10;
      do {
        uVar12 = uVar12 - 0x10;
        auVar23._0_4_ = iVar2 * psVar14[4] >> 0x10;
        auVar23._4_4_ = iVar2 * psVar14[5] >> 0x10;
        auVar23._8_4_ = iVar2 * psVar14[6] >> 0x10;
        auVar23._12_4_ = iVar2 * psVar14[7] >> 0x10;
        auVar25._0_4_ = iVar2 * psVar14[0xc] >> 0x10;
        auVar25._4_4_ = iVar2 * psVar14[0xd] >> 0x10;
        auVar25._8_4_ = iVar2 * psVar14[0xe] >> 0x10;
        auVar25._12_4_ = iVar2 * psVar14[0xf] >> 0x10;
        auVar22._0_4_ = iVar2 * psVar14[8] >> 0x10;
        auVar22._4_4_ = iVar2 * psVar14[9] >> 0x10;
        auVar22._8_4_ = iVar2 * psVar14[10] >> 0x10;
        auVar22._12_4_ = iVar2 * psVar14[0xb] >> 0x10;
        auVar18._0_4_ = iVar2 * *psVar14 >> 0x10;
        auVar18._4_4_ = iVar2 * psVar14[1] >> 0x10;
        auVar18._8_4_ = iVar2 * psVar14[2] >> 0x10;
        auVar18._12_4_ = iVar2 * psVar14[3] >> 0x10;
        auVar17._8_4_ = 0x7f;
        auVar17._0_8_ = 0x7f0000007f;
        auVar17._12_4_ = 0x7f;
        auVar24 = NEON_smin(auVar23,auVar17,4);
        auVar21._8_4_ = 0x7f;
        auVar21._0_8_ = 0x7f0000007f;
        auVar21._12_4_ = 0x7f;
        auVar26 = NEON_smin(auVar25,auVar21,4);
        auVar27._8_4_ = 0x7f;
        auVar27._0_8_ = 0x7f0000007f;
        auVar27._12_4_ = 0x7f;
        auVar21 = NEON_smin(auVar22,auVar27,4);
        auVar28._8_4_ = 0x7f;
        auVar28._0_8_ = 0x7f0000007f;
        auVar28._12_4_ = 0x7f;
        auVar17 = NEON_smin(auVar18,auVar28,4);
        auVar7._8_4_ = 0xffffff80;
        auVar7._0_8_ = 0xffffff80ffffff80;
        auVar7._12_4_ = 0xffffff80;
        auVar27 = NEON_smax(auVar24,auVar7,4);
        auVar24._8_4_ = 0xffffff80;
        auVar24._0_8_ = 0xffffff80ffffff80;
        auVar24._12_4_ = 0xffffff80;
        auVar28 = NEON_smax(auVar26,auVar24,4);
        auVar26._8_4_ = 0xffffff80;
        auVar26._0_8_ = 0xffffff80ffffff80;
        auVar26._12_4_ = 0xffffff80;
        auVar21 = NEON_smax(auVar21,auVar26,4);
        auVar8._8_4_ = 0xffffff80;
        auVar8._0_8_ = 0xffffff80ffffff80;
        auVar8._12_4_ = 0xffffff80;
        auVar17 = NEON_smax(auVar17,auVar8,4);
        auVar17 = a64_TBL(ZEXT816(0),auVar17,auVar27,auVar21,auVar28,auVar9);
        auVar19._0_8_ = auVar17._0_8_ ^ 0x8080808080808080;
        auVar19[8] = auVar17[8] ^ 0x80;
        auVar19[9] = auVar17[9] ^ 0x80;
        auVar19[10] = auVar17[10] ^ 0x80;
        auVar19[0xb] = auVar17[0xb] ^ 0x80;
        auVar19[0xc] = auVar17[0xc] ^ 0x80;
        auVar19[0xd] = auVar17[0xd] ^ 0x80;
        auVar19[0xe] = auVar17[0xe] ^ 0x80;
        auVar19[0xf] = auVar17[0xf] ^ 0x80;
        puVar15[1] = auVar19._8_8_;
        *puVar15 = auVar19._0_8_;
        psVar14 = psVar14 + 0x10;
        puVar15 = puVar15 + 2;
      } while (uVar12 != 0);
      if (uVar10 == param_4) {
        return;
      }
      uVar12 = uVar10;
      if (((uint)param_4 >> 3 & 1) == 0) goto LAB_005c85a4;
    }
    auVar9 = _DAT_0024e040;
    uVar10 = param_4 & 0xfffffffffffffff8;
    lVar13 = uVar12 - uVar10;
    psVar14 = param_3 + uVar12;
    puVar15 = (ulong *)((long)param_2 + uVar12);
    do {
      lVar13 = lVar13 + 8;
      auVar20._0_4_ = iVar2 * psVar14[4] >> 0x10;
      auVar20._4_4_ = iVar2 * psVar14[5] >> 0x10;
      auVar20._8_4_ = iVar2 * psVar14[6] >> 0x10;
      auVar20._12_4_ = iVar2 * psVar14[7] >> 0x10;
      auVar16._0_4_ = iVar2 * *psVar14 >> 0x10;
      auVar16._4_4_ = iVar2 * psVar14[1] >> 0x10;
      auVar16._8_4_ = iVar2 * psVar14[2] >> 0x10;
      auVar16._12_4_ = iVar2 * psVar14[3] >> 0x10;
      auVar3._8_4_ = 0x7f;
      auVar3._0_8_ = 0x7f0000007f;
      auVar3._12_4_ = 0x7f;
      auVar21 = NEON_smin(auVar20,auVar3,4);
      auVar4._8_4_ = 0x7f;
      auVar4._0_8_ = 0x7f0000007f;
      auVar4._12_4_ = 0x7f;
      auVar17 = NEON_smin(auVar16,auVar4,4);
      auVar5._8_4_ = 0xffffff80;
      auVar5._0_8_ = 0xffffff80ffffff80;
      auVar5._12_4_ = 0xffffff80;
      auVar21 = NEON_smax(auVar21,auVar5,4);
      auVar6._8_4_ = 0xffffff80;
      auVar6._0_8_ = 0xffffff80ffffff80;
      auVar6._12_4_ = 0xffffff80;
      auVar17 = NEON_smax(auVar17,auVar6,4);
      auVar17 = a64_TBL(ZEXT816(0),auVar17,auVar21,auVar9);
      *puVar15 = auVar17._0_8_ ^ 0x8080808080808080;
      psVar14 = psVar14 + 8;
      puVar15 = puVar15 + 1;
    } while (lVar13 != 0);
    if (uVar10 == param_4) {
      return;
    }
  }
LAB_005c85a4:
  lVar13 = param_4 - uVar10;
  pbVar11 = (byte *)((long)param_2 + uVar10);
  psVar14 = param_3 + uVar10;
  do {
    iVar1 = iVar2 * *psVar14 >> 0x10;
    if (0x7e < iVar1) {
      iVar1 = 0x7f;
    }
    if (iVar1 == -0x80 || iVar1 + 0x80 < 0 != SCARRY4(iVar1,0x80)) {
      iVar1 = -0x80;
    }
    lVar13 = lVar13 + -1;
    *pbVar11 = (byte)iVar1 ^ 0x80;
    pbVar11 = pbVar11 + 1;
    psVar14 = psVar14 + 1;
  } while (lVar13 != 0);
  return;
}


// ===== 005c8708  ma_copy_and_apply_volume_and_clip_samples_s16 =====

void ma_copy_and_apply_volume_and_clip_samples_s16
               (float param_1,long param_2,long param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  int *piVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  if (param_4 != 0) {
    iVar2 = (int)(param_1 * 256.0);
    if (param_4 < 0x10) {
      uVar3 = 0;
    }
    else {
      uVar3 = param_4 & 0xfffffffffffffff0;
      puVar5 = (undefined8 *)(param_2 + 0x10);
      piVar7 = (int *)(param_3 + 0x20);
      uVar8 = uVar3;
      do {
        uVar8 = uVar8 - 0x10;
        auVar9._0_8_ = CONCAT44(piVar7[-7] * iVar2 >> 8,piVar7[-8] * iVar2 >> 8);
        auVar9._8_4_ = piVar7[-6] * iVar2 >> 8;
        auVar9._12_4_ = piVar7[-5] * iVar2 >> 8;
        auVar12._0_8_ = CONCAT44(piVar7[1] * iVar2 >> 8,*piVar7 * iVar2 >> 8);
        auVar12._8_4_ = piVar7[2] * iVar2 >> 8;
        auVar12._12_4_ = piVar7[3] * iVar2 >> 8;
        auVar10._8_8_ = auVar9._8_8_;
        auVar10._0_8_ = NEON_sqxtn(auVar9._0_8_,auVar9,4);
        auVar13._8_8_ = auVar12._8_8_;
        auVar13._0_8_ = NEON_sqxtn(auVar12._0_8_,auVar12,4);
        auVar11._4_4_ = (int)((ulong)*(undefined8 *)(piVar7 + -4) >> 0x20) * iVar2 >> 8;
        auVar11._0_4_ = (int)*(undefined8 *)(piVar7 + -4) * iVar2 >> 8;
        auVar11._8_4_ = (int)*(undefined8 *)(piVar7 + -2) * iVar2 >> 8;
        auVar11._12_4_ = (int)((ulong)*(undefined8 *)(piVar7 + -2) >> 0x20) * iVar2 >> 8;
        auVar11 = NEON_sqxtn2(auVar10,auVar11,4);
        auVar14._4_4_ = (int)((ulong)*(undefined8 *)(piVar7 + 4) >> 0x20) * iVar2 >> 8;
        auVar14._0_4_ = (int)*(undefined8 *)(piVar7 + 4) * iVar2 >> 8;
        auVar14._8_4_ = (int)*(undefined8 *)(piVar7 + 6) * iVar2 >> 8;
        auVar14._12_4_ = (int)((ulong)*(undefined8 *)(piVar7 + 6) >> 0x20) * iVar2 >> 8;
        auVar14 = NEON_sqxtn2(auVar13,auVar14,4);
        puVar5[-1] = auVar11._8_8_;
        puVar5[-2] = auVar11._0_8_;
        puVar5[1] = auVar14._8_8_;
        *puVar5 = auVar14._0_8_;
        puVar5 = puVar5 + 4;
        piVar7 = piVar7 + 0x10;
      } while (uVar8 != 0);
      if (uVar3 == param_4) {
        return;
      }
    }
    lVar4 = param_4 - uVar3;
    puVar6 = (undefined2 *)(param_2 + uVar3 * 2);
    piVar7 = (int *)(param_3 + uVar3 * 4);
    do {
      iVar1 = *piVar7 * iVar2 >> 8;
      if (0x7ffe < iVar1) {
        iVar1 = 0x7fff;
      }
      if (iVar1 == -0x8000 || iVar1 + 0x8000 < 0 != SCARRY4(iVar1,0x8000)) {
        iVar1 = -0x8000;
      }
      lVar4 = lVar4 + -1;
      *puVar6 = (short)iVar1;
      puVar6 = puVar6 + 1;
      piVar7 = piVar7 + 1;
    } while (lVar4 != 0);
  }
  return;
}


// ===== 005c87c4  ma_copy_and_apply_volume_and_clip_samples_s24 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ma_copy_and_apply_volume_and_clip_samples_s24
               (float param_1,long *param_2,long *param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
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
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  long *plVar45;
  long *plVar46;
  long *plVar47;
  long *plVar48;
  long *plVar49;
  long *plVar50;
  long *plVar51;
  long *plVar52;
  undefined1 auVar53 [16];
  undefined1 *puVar54;
  long lVar55;
  ulong uVar56;
  long *plVar57;
  ulong uVar58;
  long lVar59;
  long lVar60;
  long *plVar61;
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
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  
  auVar53 = _DAT_0024e420;
  if (param_4 == 0) {
    return;
  }
  lVar55 = (long)(int)(param_1 * 256.0);
  if (7 < param_4) {
    auVar72._8_8_ = 0;
    auVar72._0_8_ = param_4 - 1;
    lVar59 = (param_4 - 1) * 3;
    uVar56 = 0;
    if (((((long)param_2 + 2U + lVar59 < (long)param_2 + 2U) ||
         ((long)param_2 + 1U + lVar59 < (long)param_2 + 1U)) ||
        ((long *)((long)param_2 + lVar59) < param_2)) || (SUB168(auVar72 * ZEXT816(3),8) != 0))
    goto LAB_005c87f8;
    if ((param_3 + param_4 <= param_2) || ((long *)((long)param_2 + param_4 * 3) <= param_3)) {
      if (param_4 < 0x10) {
        uVar58 = 0;
      }
      else {
        uVar56 = param_4 & 0xfffffffffffffff0;
        plVar57 = param_3;
        plVar61 = param_2;
        uVar58 = uVar56;
        do {
          plVar2 = plVar57 + 4;
          plVar46 = plVar57 + 5;
          plVar5 = plVar57 + 6;
          plVar45 = plVar57 + 7;
          uVar58 = uVar58 - 0x10;
          lVar59 = *plVar57;
          plVar47 = plVar57 + 1;
          plVar3 = plVar57 + 0xc;
          plVar48 = plVar57 + 0xd;
          plVar6 = plVar57 + 0xe;
          plVar49 = plVar57 + 0xf;
          plVar1 = plVar57 + 2;
          plVar50 = plVar57 + 3;
          plVar4 = plVar57 + 8;
          plVar51 = plVar57 + 9;
          plVar7 = plVar57 + 10;
          plVar52 = plVar57 + 0xb;
          plVar57 = plVar57 + 0x10;
          auVar75._0_8_ = lVar59 * lVar55 >> 8;
          auVar75._8_8_ = *plVar47 * lVar55 >> 8;
          auVar71._0_8_ = *plVar1 * lVar55 >> 8;
          auVar71._8_8_ = *plVar50 * lVar55 >> 8;
          auVar77._8_8_ = 0x7fffff;
          auVar77._0_8_ = 0x7fffff;
          auVar77 = NEON_cmgt(auVar77,auVar75,8);
          auVar80._8_8_ = 0x7fffff;
          auVar80._0_8_ = 0x7fffff;
          auVar72 = NEON_cmgt(auVar80,auVar71,8);
          auVar83._8_8_ = 0x7fffff;
          auVar83._0_8_ = 0x7fffff;
          auVar83 = NEON_bif(auVar75,auVar83,auVar77,1);
          auVar73._8_8_ = 0x7fffff;
          auVar73._0_8_ = 0x7fffff;
          auVar80 = NEON_bif(auVar71,auVar73,auVar72,1);
          auVar65._0_8_ = *plVar5 * lVar55 >> 8;
          auVar65._8_8_ = *plVar45 * lVar55 >> 8;
          auVar100._8_8_ = 0xffffffffff800000;
          auVar100._0_8_ = 0xffffffffff800000;
          auVar100 = NEON_cmgt(auVar83,auVar100,8);
          auVar78._8_8_ = 0x7fffff;
          auVar78._0_8_ = 0x7fffff;
          auVar72 = NEON_cmgt(auVar78,auVar65,8);
          auVar84._0_8_ = *plVar3 * lVar55 >> 8;
          auVar84._8_8_ = *plVar48 * lVar55 >> 8;
          auVar68._0_8_ = *plVar2 * lVar55 >> 8;
          auVar68._8_8_ = *plVar46 * lVar55 >> 8;
          auVar81._8_8_ = 0x7fffff;
          auVar81._0_8_ = 0x7fffff;
          auVar72 = NEON_bif(auVar65,auVar81,auVar72,1);
          auVar87._8_8_ = 0x7fffff;
          auVar87._0_8_ = 0x7fffff;
          auVar73 = NEON_cmgt(auVar87,auVar84,8);
          auVar85._0_8_ = *plVar6 * lVar55 >> 8;
          auVar85._8_8_ = *plVar49 * lVar55 >> 8;
          auVar90._8_8_ = 0x7fffff;
          auVar90._0_8_ = 0x7fffff;
          auVar77 = NEON_cmgt(auVar90,auVar68,8);
          auVar79._0_8_ = *plVar4 * lVar55 >> 8;
          auVar79._8_8_ = *plVar51 * lVar55 >> 8;
          auVar94._8_8_ = 0x7fffff;
          auVar94._0_8_ = 0x7fffff;
          auVar78 = NEON_cmgt(auVar94,auVar85,8);
          auVar97._8_8_ = 0x7fffff;
          auVar97._0_8_ = 0x7fffff;
          auVar77 = NEON_bif(auVar68,auVar97,auVar77,1);
          auVar82._0_8_ = *plVar7 * lVar55 >> 8;
          auVar82._8_8_ = *plVar52 * lVar55 >> 8;
          auVar104._8_8_ = 0x7fffff;
          auVar104._0_8_ = 0x7fffff;
          auVar81 = NEON_cmgt(auVar104,auVar79,8);
          auVar106._8_8_ = 0x7fffff;
          auVar106._0_8_ = 0x7fffff;
          auVar94 = NEON_bsl(auVar73,auVar84,auVar106,1);
          auVar108._8_8_ = 0x7fffff;
          auVar108._0_8_ = 0x7fffff;
          auVar90 = NEON_cmgt(auVar108,auVar82,8);
          auVar27._8_8_ = 0xffffffffff800000;
          auVar27._0_8_ = 0xffffffffff800000;
          auVar104 = NEON_cmgt(auVar77,auVar27,8);
          auVar16._8_8_ = 0x7fffff;
          auVar16._0_8_ = 0x7fffff;
          auVar87 = NEON_bsl(auVar81,auVar79,auVar16,1);
          auVar28._8_8_ = 0xffffffffff800000;
          auVar28._0_8_ = 0xffffffffff800000;
          auVar73 = NEON_cmgt(auVar80,auVar28,8);
          auVar17._8_8_ = 0x7fffff;
          auVar17._0_8_ = 0x7fffff;
          auVar97 = NEON_bsl(auVar78,auVar85,auVar17,1);
          auVar29._8_8_ = 0xffffffffff800000;
          auVar29._0_8_ = 0xffffffffff800000;
          auVar106 = NEON_cmgt(auVar94,auVar29,8);
          auVar18._8_8_ = 0x7fffff;
          auVar18._0_8_ = 0x7fffff;
          auVar90 = NEON_bsl(auVar90,auVar82,auVar18,1);
          auVar30._8_8_ = 0xffffffffff800000;
          auVar30._0_8_ = 0xffffffffff800000;
          auVar81 = NEON_cmgt(auVar87,auVar30,8);
          auVar31._8_8_ = 0xffffffffff800000;
          auVar31._0_8_ = 0xffffffffff800000;
          auVar108 = NEON_cmgt(auVar97,auVar31,8);
          auVar32._8_8_ = 0xffffffffff800000;
          auVar32._0_8_ = 0xffffffffff800000;
          auVar78 = NEON_bsl(auVar104,auVar77,auVar32,1);
          auVar33._8_8_ = 0xffffffffff800000;
          auVar33._0_8_ = 0xffffffffff800000;
          auVar104 = NEON_cmgt(auVar90,auVar33,8);
          auVar34._8_8_ = 0xffffffffff800000;
          auVar34._0_8_ = 0xffffffffff800000;
          auVar73 = NEON_bsl(auVar73,auVar80,auVar34,1);
          auVar35._8_8_ = 0xffffffffff800000;
          auVar35._0_8_ = 0xffffffffff800000;
          auVar77 = NEON_cmgt(auVar72,auVar35,8);
          auVar36._8_8_ = 0xffffffffff800000;
          auVar36._0_8_ = 0xffffffffff800000;
          auVar87 = NEON_bsl(auVar81,auVar87,auVar36,1);
          auVar37._8_8_ = 0xffffffffff800000;
          auVar37._0_8_ = 0xffffffffff800000;
          auVar80 = NEON_bsl(auVar100,auVar83,auVar37,1);
          auVar38._8_8_ = 0xffffffffff800000;
          auVar38._0_8_ = 0xffffffffff800000;
          auVar94 = NEON_bsl(auVar106,auVar94,auVar38,1);
          auVar39._8_8_ = 0xffffffffff800000;
          auVar39._0_8_ = 0xffffffffff800000;
          auVar97 = NEON_bsl(auVar108,auVar97,auVar39,1);
          auVar103._0_8_ = auVar87._0_8_ >> 8;
          auVar103._8_8_ = auVar87._8_8_ >> 8;
          auVar40._8_8_ = 0xffffffffff800000;
          auVar40._0_8_ = 0xffffffffff800000;
          auVar90 = NEON_bsl(auVar104,auVar90,auVar40,1);
          auVar41._8_8_ = 0xffffffffff800000;
          auVar41._0_8_ = 0xffffffffff800000;
          auVar81 = NEON_bsl(auVar77,auVar72,auVar41,1);
          auVar95._0_8_ = auVar73._0_8_ >> 8;
          auVar95._8_8_ = auVar73._8_8_ >> 8;
          auVar91._0_8_ = auVar80._0_8_ >> 8;
          auVar91._8_8_ = auVar80._8_8_ >> 8;
          auVar98._0_8_ = auVar78._0_8_ >> 8;
          auVar98._8_8_ = auVar78._8_8_ >> 8;
          auVar72 = a64_TBL(ZEXT816(0),auVar80,auVar73,auVar78,auVar81,auVar53);
          auVar83 = a64_TBL(ZEXT816(0),auVar87,auVar90,auVar94,auVar97,auVar53);
          auVar105._0_8_ = auVar90._0_8_ >> 8;
          auVar105._8_8_ = auVar90._8_8_ >> 8;
          auVar107._0_8_ = auVar94._0_8_ >> 8;
          auVar107._8_8_ = auVar94._8_8_ >> 8;
          auVar101._0_8_ = auVar81._0_8_ >> 8;
          auVar101._8_8_ = auVar81._8_8_ >> 8;
          auVar109._0_8_ = auVar97._0_8_ >> 8;
          auVar109._8_8_ = auVar97._8_8_ >> 8;
          auVar76._0_8_ = auVar87._0_8_ >> 0x10;
          auVar76._8_8_ = auVar87._8_8_ >> 0x10;
          auVar77 = a64_TBL(ZEXT816(0),auVar91,auVar95,auVar98,auVar101,auVar53);
          auVar96._0_8_ = auVar73._0_8_ >> 0x10;
          auVar96._8_8_ = auVar73._8_8_ >> 0x10;
          auVar87 = a64_TBL(ZEXT816(0),auVar103,auVar105,auVar107,auVar109,auVar53);
          auVar92._0_8_ = auVar80._0_8_ >> 0x10;
          auVar92._8_8_ = auVar80._8_8_ >> 0x10;
          auVar99._0_8_ = auVar78._0_8_ >> 0x10;
          auVar99._8_8_ = auVar78._8_8_ >> 0x10;
          auVar102._0_8_ = auVar81._0_8_ >> 0x10;
          auVar102._8_8_ = auVar81._8_8_ >> 0x10;
          auVar80 = a64_TBL(ZEXT816(0),auVar92,auVar96,auVar99,auVar102,auVar53);
          auVar42._8_8_ = auVar90._8_8_ >> 0x10;
          auVar42._0_8_ = auVar90._0_8_ >> 0x10;
          auVar43._8_8_ = auVar94._8_8_ >> 0x10;
          auVar43._0_8_ = auVar94._0_8_ >> 0x10;
          auVar44._8_8_ = auVar97._8_8_ >> 0x10;
          auVar44._0_8_ = auVar97._0_8_ >> 0x10;
          auVar73 = a64_TBL(ZEXT816(0),auVar76,auVar42,auVar43,auVar44,auVar53);
          *(char *)plVar61 = auVar72[0];
          *(char *)((long)plVar61 + 1) = auVar77[0];
          *(char *)((long)plVar61 + 2) = auVar80[0];
          *(char *)((long)plVar61 + 3) = auVar72[1];
          *(char *)((long)plVar61 + 4) = auVar77[1];
          *(char *)((long)plVar61 + 5) = auVar80[1];
          *(char *)((long)plVar61 + 6) = auVar72[2];
          *(char *)((long)plVar61 + 7) = auVar77[2];
          *(char *)(plVar61 + 1) = auVar80[2];
          *(char *)((long)plVar61 + 9) = auVar72[3];
          *(char *)((long)plVar61 + 10) = auVar77[3];
          *(char *)((long)plVar61 + 0xb) = auVar80[3];
          *(char *)((long)plVar61 + 0xc) = auVar72[4];
          *(char *)((long)plVar61 + 0xd) = auVar77[4];
          *(char *)((long)plVar61 + 0xe) = auVar80[4];
          *(char *)((long)plVar61 + 0xf) = auVar72[5];
          *(char *)(plVar61 + 2) = auVar77[5];
          *(char *)((long)plVar61 + 0x11) = auVar80[5];
          *(char *)((long)plVar61 + 0x12) = auVar72[6];
          *(char *)((long)plVar61 + 0x13) = auVar77[6];
          *(char *)((long)plVar61 + 0x14) = auVar80[6];
          *(char *)((long)plVar61 + 0x15) = auVar72[7];
          *(char *)((long)plVar61 + 0x16) = auVar77[7];
          *(char *)((long)plVar61 + 0x17) = auVar80[7];
          *(char *)(plVar61 + 3) = auVar83[0];
          *(char *)((long)plVar61 + 0x19) = auVar87[0];
          *(char *)((long)plVar61 + 0x1a) = auVar73[0];
          *(char *)((long)plVar61 + 0x1b) = auVar83[1];
          *(char *)((long)plVar61 + 0x1c) = auVar87[1];
          *(char *)((long)plVar61 + 0x1d) = auVar73[1];
          *(char *)((long)plVar61 + 0x1e) = auVar83[2];
          *(char *)((long)plVar61 + 0x1f) = auVar87[2];
          *(char *)(plVar61 + 4) = auVar73[2];
          *(char *)((long)plVar61 + 0x21) = auVar83[3];
          *(char *)((long)plVar61 + 0x22) = auVar87[3];
          *(char *)((long)plVar61 + 0x23) = auVar73[3];
          *(char *)((long)plVar61 + 0x24) = auVar83[4];
          *(char *)((long)plVar61 + 0x25) = auVar87[4];
          *(char *)((long)plVar61 + 0x26) = auVar73[4];
          *(char *)((long)plVar61 + 0x27) = auVar83[5];
          *(char *)(plVar61 + 5) = auVar87[5];
          *(char *)((long)plVar61 + 0x29) = auVar73[5];
          *(char *)((long)plVar61 + 0x2a) = auVar83[6];
          *(char *)((long)plVar61 + 0x2b) = auVar87[6];
          *(char *)((long)plVar61 + 0x2c) = auVar73[6];
          *(char *)((long)plVar61 + 0x2d) = auVar83[7];
          *(char *)((long)plVar61 + 0x2e) = auVar87[7];
          *(char *)((long)plVar61 + 0x2f) = auVar73[7];
          plVar61 = plVar61 + 6;
        } while (uVar58 != 0);
        if (uVar56 == param_4) {
          return;
        }
        uVar58 = uVar56;
        if (((uint)param_4 >> 3 & 1) == 0) goto LAB_005c87f8;
      }
      auVar53 = _DAT_0024e460;
      uVar56 = param_4 & 0xfffffffffffffff8;
      puVar54 = (undefined1 *)((long)param_2 + uVar58 * 3);
      lVar59 = uVar58 - uVar56;
      plVar57 = param_3 + uVar58;
      do {
        lVar59 = lVar59 + 8;
        auVar62._0_8_ = plVar57[2] * lVar55 >> 8;
        auVar62._8_8_ = plVar57[3] * lVar55 >> 8;
        auVar8._8_8_ = 0x7fffff;
        auVar8._0_8_ = 0x7fffff;
        auVar72 = NEON_cmgt(auVar8,auVar62,8);
        auVar63._0_8_ = *plVar57 * lVar55 >> 8;
        auVar63._8_8_ = plVar57[1] * lVar55 >> 8;
        auVar66._0_8_ = plVar57[4] * lVar55 >> 8;
        auVar66._8_8_ = plVar57[5] * lVar55 >> 8;
        auVar9._8_8_ = 0x7fffff;
        auVar9._0_8_ = 0x7fffff;
        auVar72 = NEON_bif(auVar62,auVar9,auVar72,1);
        auVar69._0_8_ = plVar57[6] * lVar55 >> 8;
        auVar69._8_8_ = plVar57[7] * lVar55 >> 8;
        auVar10._8_8_ = 0x7fffff;
        auVar10._0_8_ = 0x7fffff;
        auVar77 = NEON_cmgt(auVar10,auVar63,8);
        auVar11._8_8_ = 0x7fffff;
        auVar11._0_8_ = 0x7fffff;
        auVar80 = NEON_cmgt(auVar11,auVar66,8);
        auVar12._8_8_ = 0x7fffff;
        auVar12._0_8_ = 0x7fffff;
        auVar83 = NEON_cmgt(auVar12,auVar69,8);
        auVar13._8_8_ = 0x7fffff;
        auVar13._0_8_ = 0x7fffff;
        auVar77 = NEON_bif(auVar63,auVar13,auVar77,1);
        auVar19._8_8_ = 0xffffffffff800000;
        auVar19._0_8_ = 0xffffffffff800000;
        auVar73 = NEON_cmgt(auVar72,auVar19,8);
        auVar14._8_8_ = 0x7fffff;
        auVar14._0_8_ = 0x7fffff;
        auVar80 = NEON_bif(auVar66,auVar14,auVar80,1);
        auVar15._8_8_ = 0x7fffff;
        auVar15._0_8_ = 0x7fffff;
        auVar83 = NEON_bif(auVar69,auVar15,auVar83,1);
        auVar20._8_8_ = 0xffffffffff800000;
        auVar20._0_8_ = 0xffffffffff800000;
        auVar78 = NEON_cmgt(auVar77,auVar20,8);
        auVar21._8_8_ = 0xffffffffff800000;
        auVar21._0_8_ = 0xffffffffff800000;
        auVar81 = NEON_cmgt(auVar80,auVar21,8);
        auVar22._8_8_ = 0xffffffffff800000;
        auVar22._0_8_ = 0xffffffffff800000;
        auVar73 = NEON_bsl(auVar73,auVar72,auVar22,1);
        auVar23._8_8_ = 0xffffffffff800000;
        auVar23._0_8_ = 0xffffffffff800000;
        auVar72 = NEON_cmgt(auVar83,auVar23,8);
        auVar24._8_8_ = 0xffffffffff800000;
        auVar24._0_8_ = 0xffffffffff800000;
        auVar77 = NEON_bsl(auVar78,auVar77,auVar24,1);
        auVar88._0_8_ = auVar73._0_8_ >> 0x10;
        auVar88._8_8_ = auVar73._8_8_ >> 0x10;
        auVar25._8_8_ = 0xffffffffff800000;
        auVar25._0_8_ = 0xffffffffff800000;
        auVar80 = NEON_bsl(auVar81,auVar80,auVar25,1);
        auVar26._8_8_ = 0xffffffffff800000;
        auVar26._0_8_ = 0xffffffffff800000;
        auVar72 = NEON_bsl(auVar72,auVar83,auVar26,1);
        auVar67._0_8_ = auVar73._0_8_ >> 8;
        auVar67._8_8_ = auVar73._8_8_ >> 8;
        auVar64._0_8_ = auVar77._0_8_ >> 8;
        auVar64._8_8_ = auVar77._8_8_ >> 8;
        auVar86._0_8_ = auVar77._0_8_ >> 0x10;
        auVar86._8_8_ = auVar77._8_8_ >> 0x10;
        auVar70._0_8_ = auVar80._0_8_ >> 8;
        auVar70._8_8_ = auVar80._8_8_ >> 8;
        auVar89._0_8_ = auVar80._0_8_ >> 0x10;
        auVar89._8_8_ = auVar80._8_8_ >> 0x10;
        auVar74._0_8_ = auVar72._0_8_ >> 8;
        auVar74._8_8_ = auVar72._8_8_ >> 8;
        auVar93._0_8_ = auVar72._0_8_ >> 0x10;
        auVar93._8_8_ = auVar72._8_8_ >> 0x10;
        auVar72 = a64_TBL(ZEXT816(0),auVar77,auVar73,auVar80,auVar72,auVar53);
        auVar77 = a64_TBL(ZEXT816(0),auVar64,auVar67,auVar70,auVar74,auVar53);
        auVar80 = a64_TBL(ZEXT816(0),auVar86,auVar88,auVar89,auVar93,auVar53);
        *puVar54 = auVar72[0];
        puVar54[1] = auVar77[0];
        puVar54[2] = auVar80[0];
        puVar54[3] = auVar72[1];
        puVar54[4] = auVar77[1];
        puVar54[5] = auVar80[1];
        puVar54[6] = auVar72[2];
        puVar54[7] = auVar77[2];
        puVar54[8] = auVar80[2];
        puVar54[9] = auVar72[3];
        puVar54[10] = auVar77[3];
        puVar54[0xb] = auVar80[3];
        puVar54[0xc] = auVar72[4];
        puVar54[0xd] = auVar77[4];
        puVar54[0xe] = auVar80[4];
        puVar54[0xf] = auVar72[5];
        puVar54[0x10] = auVar77[5];
        puVar54[0x11] = auVar80[5];
        puVar54[0x12] = auVar72[6];
        puVar54[0x13] = auVar77[6];
        puVar54[0x14] = auVar80[6];
        puVar54[0x15] = auVar72[7];
        puVar54[0x16] = auVar77[7];
        puVar54[0x17] = auVar80[7];
        puVar54 = puVar54 + 0x18;
        plVar57 = plVar57 + 8;
      } while (lVar59 != 0);
      if (uVar56 == param_4) {
        return;
      }
      goto LAB_005c87f8;
    }
  }
  uVar56 = 0;
LAB_005c87f8:
  lVar59 = param_4 - uVar56;
  plVar57 = param_3 + uVar56;
  puVar54 = (undefined1 *)((long)param_2 + uVar56 * 3 + 2);
  do {
    lVar60 = *plVar57 * lVar55 >> 8;
    if (0x7ffffe < lVar60) {
      lVar60 = 0x7fffff;
    }
    if (lVar60 == -0x800000 || lVar60 + 0x800000 < 0 != SCARRY8(lVar60,0x800000)) {
      lVar60 = -0x800000;
    }
    lVar59 = lVar59 + -1;
    puVar54[-2] = (char)lVar60;
    puVar54[-1] = (char)((ulong)lVar60 >> 8);
    *puVar54 = (char)((ulong)lVar60 >> 0x10);
    plVar57 = plVar57 + 1;
    puVar54 = puVar54 + 3;
  } while (lVar59 != 0);
  return;
}


// ===== 005c8c7c  ma_copy_and_apply_volume_and_clip_samples_s32 =====

void ma_copy_and_apply_volume_and_clip_samples_s32
               (float param_1,undefined4 *param_2,long *param_3,ulong param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  if (param_4 != 0) {
    lVar5 = (long)(int)(param_1 * 256.0);
    if (param_4 < 4) {
      uVar6 = 0;
    }
    else {
      uVar6 = param_4 & 0xfffffffffffffffc;
      plVar9 = param_3;
      puVar8 = param_2;
      uVar11 = uVar6;
      do {
        uVar11 = uVar11 - 4;
        auVar12._0_8_ = *plVar9 * lVar5 >> 8;
        auVar12._8_8_ = plVar9[1] * lVar5 >> 8;
        auVar13._0_8_ = plVar9[2] * lVar5 >> 8;
        auVar13._8_8_ = plVar9[3] * lVar5 >> 8;
        auVar14._8_8_ = 0x7fffffff;
        auVar14._0_8_ = 0x7fffffff;
        auVar14 = NEON_cmgt(auVar14,auVar12,8);
        auVar16._8_8_ = 0x7fffffff;
        auVar16._0_8_ = 0x7fffffff;
        auVar16 = NEON_cmgt(auVar16,auVar13,8);
        auVar15._8_8_ = 0x7fffffff;
        auVar15._0_8_ = 0x7fffffff;
        auVar14 = NEON_bif(auVar12,auVar15,auVar14,1);
        auVar17._8_8_ = 0x7fffffff;
        auVar17._0_8_ = 0x7fffffff;
        auVar16 = NEON_bif(auVar13,auVar17,auVar16,1);
        auVar1._8_8_ = 0xffffffff80000000;
        auVar1._0_8_ = 0xffffffff80000000;
        auVar17 = NEON_cmgt(auVar14,auVar1,8);
        auVar2._8_8_ = 0xffffffff80000000;
        auVar2._0_8_ = 0xffffffff80000000;
        auVar15 = NEON_cmgt(auVar16,auVar2,8);
        auVar3._8_8_ = 0xffffffff80000000;
        auVar3._0_8_ = 0xffffffff80000000;
        auVar14 = NEON_bif(auVar14,auVar3,auVar17,1);
        auVar4._8_8_ = 0xffffffff80000000;
        auVar4._0_8_ = 0xffffffff80000000;
        auVar16 = NEON_bif(auVar16,auVar4,auVar15,1);
        puVar8[4] = auVar16._0_4_;
        puVar8[5] = auVar16._8_4_;
        *puVar8 = auVar14._0_4_;
        puVar8[1] = auVar14._8_4_;
        plVar9 = plVar9 + 4;
        puVar8 = puVar8 + 4;
      } while (uVar11 != 0);
      if (uVar6 == param_4) {
        return;
      }
    }
    lVar7 = param_4 - uVar6;
    puVar8 = param_2 + uVar6;
    plVar9 = param_3 + uVar6;
    do {
      lVar10 = *plVar9 * lVar5 >> 8;
      if (0x7ffffffe < lVar10) {
        lVar10 = 0x7fffffff;
      }
      if (lVar10 < -0x7fffffff) {
        lVar10 = -0x80000000;
      }
      lVar7 = lVar7 + -1;
      *puVar8 = (int)lVar10;
      puVar8 = puVar8 + 1;
      plVar9 = plVar9 + 1;
    } while (lVar7 != 0);
  }
  return;
}


// ===== 005c8d7c  ma_copy_and_apply_volume_and_clip_samples_f32 =====

void ma_copy_and_apply_volume_and_clip_samples_f32
               (float param_1,long param_2,long param_3,ulong param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  float *pfVar10;
  float *pfVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  if (param_4 != 0) {
    uVar7 = 0;
    if ((7 < param_4) && (0x1f < (ulong)(param_2 - param_3))) {
      auVar13 = NEON_fmov(0xbf800000,4);
      auVar14 = NEON_fmov(0x3f800000,4);
      uVar7 = param_4 & 0xfffffffffffffff8;
      puVar9 = (undefined8 *)(param_2 + 0x10);
      pfVar10 = (float *)(param_3 + 0x10);
      uVar12 = uVar7;
      do {
        pfVar11 = pfVar10 + -4;
        pfVar1 = pfVar10 + -3;
        pfVar2 = pfVar10 + -2;
        pfVar3 = pfVar10 + -1;
        fVar18 = *pfVar10;
        pfVar4 = pfVar10 + 1;
        pfVar5 = pfVar10 + 2;
        pfVar6 = pfVar10 + 3;
        uVar12 = uVar12 - 8;
        pfVar10 = pfVar10 + 8;
        auVar17._0_4_ = *pfVar11 * param_1;
        auVar17._4_4_ = *pfVar1 * param_1;
        auVar17._8_4_ = *pfVar2 * param_1;
        auVar17._12_4_ = *pfVar3 * param_1;
        auVar19._0_4_ = fVar18 * param_1;
        auVar19._4_4_ = *pfVar4 * param_1;
        auVar19._8_4_ = *pfVar5 * param_1;
        auVar19._12_4_ = *pfVar6 * param_1;
        auVar20 = NEON_fcmgt(auVar17,auVar14,4);
        auVar21 = NEON_fcmgt(auVar19,auVar14,4);
        auVar22 = NEON_fcmgt(auVar13,auVar17,4);
        auVar17 = NEON_bit(auVar17,auVar14,auVar20,1);
        auVar20 = NEON_fcmgt(auVar13,auVar19,4);
        auVar19 = NEON_bit(auVar19,auVar14,auVar21,1);
        auVar17 = NEON_bit(auVar17,auVar13,auVar22,1);
        auVar19 = NEON_bit(auVar19,auVar13,auVar20,1);
        puVar9[-1] = auVar17._8_8_;
        puVar9[-2] = auVar17._0_8_;
        puVar9[1] = auVar19._8_8_;
        *puVar9 = auVar19._0_8_;
        puVar9 = puVar9 + 4;
      } while (uVar12 != 0);
      if (uVar7 == param_4) {
        return;
      }
    }
    lVar8 = param_4 - uVar7;
    pfVar10 = (float *)(param_2 + uVar7 * 4);
    pfVar11 = (float *)(param_3 + uVar7 * 4);
    do {
      fVar15 = *pfVar11 * param_1;
      fVar18 = 1.0;
      if (fVar15 == 1.0 || fVar15 < 1.0 != NAN(fVar15)) {
        fVar18 = fVar15;
      }
      fVar16 = -1.0;
      if (-1.0 <= fVar15) {
        fVar16 = fVar18;
      }
      lVar8 = lVar8 + -1;
      *pfVar10 = fVar16;
      pfVar10 = pfVar10 + 1;
      pfVar11 = pfVar11 + 1;
    } while (lVar8 != 0);
  }
  return;
}


// ===== 005c8e38  ma_copy_and_apply_volume_and_clip_pcm_frames =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ma_copy_and_apply_volume_and_clip_pcm_frames
               (float param_1,ulong *param_2,ulong *param_3,long param_4,uint param_5,uint param_6)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  int iVar5;
  size_t __n;
  undefined1 auVar6 [16];
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  ulong *puVar19;
  ulong *puVar20;
  ulong uVar21;
  ulong *puVar22;
  ulong *puVar23;
  ulong *puVar24;
  ulong *puVar25;
  ulong *puVar26;
  ulong *puVar27;
  undefined1 *puVar28;
  long lVar29;
  long lVar30;
  int iVar31;
  ulong uVar32;
  float *pfVar33;
  ulong *puVar34;
  float *pfVar35;
  ulong uVar36;
  byte *pbVar37;
  undefined4 *puVar38;
  undefined2 *puVar39;
  short *psVar40;
  int *piVar41;
  ulong *puVar42;
  long lVar43;
  ulong uVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar55;
  float fVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  undefined1 auVar60 [16];
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
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  
  auVar51 = _DAT_0024e420;
  auVar47 = _DAT_0024e360;
  if (param_1 == 1.0) {
    ma_clip_pcm_frames(param_2);
    return;
  }
  if (param_1 == 0.0) {
    if (param_5 != 1) {
      for (uVar44 = (ulong)(*(int *)(&DAT_00281c10 + (ulong)param_5 * 4) * param_6) * param_4;
          uVar44 != 0; uVar44 = uVar44 - __n) {
        __n = uVar44;
        if (0xfffffffe < uVar44) {
          __n = 0xffffffff;
        }
        if (param_2 != (ulong *)0x0) {
          memset(param_2,0,__n);
        }
        param_2 = (ulong *)((long)param_2 + __n);
      }
      return;
    }
    if ((ulong)param_6 * param_4 == 0) {
      return;
    }
    memset(param_2,0x80,(ulong)param_6 * param_4);
    return;
  }
  uVar44 = (ulong)param_6 * param_4;
  if ((int)param_5 < 3) {
    if (param_5 != 1) {
      if (param_5 != 2) {
        return;
      }
      if (uVar44 == 0) {
        return;
      }
      iVar31 = (int)(param_1 * 256.0);
      if (uVar44 < 0x10) {
        uVar36 = 0;
      }
      else {
        uVar36 = uVar44 & 0xfffffffffffffff0;
        puVar34 = param_2 + 2;
        puVar42 = param_3 + 4;
        uVar32 = uVar36;
        do {
          uVar32 = uVar32 - 0x10;
          auVar47._0_8_ =
               CONCAT44(*(int *)((long)puVar42 + -0x1c) * iVar31 >> 8,(int)puVar42[-4] * iVar31 >> 8
                       );
          auVar47._8_4_ = (int)puVar42[-3] * iVar31 >> 8;
          auVar47._12_4_ = *(int *)((long)puVar42 + -0x14) * iVar31 >> 8;
          auVar65._0_4_ = (int)puVar42[-2] * iVar31 >> 8;
          auVar65._4_4_ = *(int *)((long)puVar42 + -0xc) * iVar31 >> 8;
          auVar65._8_4_ = (int)puVar42[-1] * iVar31 >> 8;
          auVar65._12_4_ = *(int *)((long)puVar42 + -4) * iVar31 >> 8;
          auVar64._0_8_ =
               CONCAT44(*(int *)((long)puVar42 + 4) * iVar31 >> 8,(int)*puVar42 * iVar31 >> 8);
          auVar64._8_4_ = (int)puVar42[1] * iVar31 >> 8;
          auVar64._12_4_ = *(int *)((long)puVar42 + 0xc) * iVar31 >> 8;
          auVar74._0_4_ = (int)puVar42[2] * iVar31 >> 8;
          auVar74._4_4_ = *(int *)((long)puVar42 + 0x14) * iVar31 >> 8;
          auVar74._8_4_ = (int)puVar42[3] * iVar31 >> 8;
          auVar74._12_4_ = *(int *)((long)puVar42 + 0x1c) * iVar31 >> 8;
          auVar51._8_8_ = auVar47._8_8_;
          auVar51._0_8_ = NEON_sqxtn(auVar47._0_8_,auVar47,4);
          auVar69._8_8_ = auVar64._8_8_;
          auVar69._0_8_ = NEON_sqxtn(auVar64._0_8_,auVar64,4);
          auVar47 = NEON_sqxtn2(auVar51,auVar65,4);
          auVar51 = NEON_sqxtn2(auVar69,auVar74,4);
          puVar34[-1] = auVar47._8_8_;
          puVar34[-2] = auVar47._0_8_;
          puVar34[1] = auVar51._8_8_;
          *puVar34 = auVar51._0_8_;
          puVar34 = puVar34 + 4;
          puVar42 = puVar42 + 8;
        } while (uVar32 != 0);
        if (uVar44 - uVar36 == 0) {
          return;
        }
      }
      lVar29 = uVar44 - uVar36;
      puVar39 = (undefined2 *)((long)param_2 + uVar36 * 2);
      piVar41 = (int *)((long)param_3 + uVar36 * 4);
      do {
        iVar5 = *piVar41 * iVar31 >> 8;
        if (0x7ffe < iVar5) {
          iVar5 = 0x7fff;
        }
        if (iVar5 == -0x8000 || iVar5 + 0x8000 < 0 != SCARRY4(iVar5,0x8000)) {
          iVar5 = -0x8000;
        }
        lVar29 = lVar29 + -1;
        *puVar39 = (short)iVar5;
        puVar39 = puVar39 + 1;
        piVar41 = piVar41 + 1;
      } while (lVar29 != 0);
      return;
    }
    if (uVar44 == 0) {
      return;
    }
    iVar31 = (int)(param_1 * 256.0) * 0x100;
    if ((uVar44 < 8) ||
       ((param_2 < (ulong *)((long)param_3 + uVar44 * 2) &&
        (param_3 < (ulong *)((long)param_2 + uVar44))))) {
      uVar32 = 0;
    }
    else {
      if (uVar44 < 0x10) {
        uVar36 = 0;
      }
      else {
        auVar78._8_4_ = 0x7f;
        auVar78._0_8_ = 0x7f0000007f;
        auVar78._12_4_ = 0x7f;
        auVar80._8_4_ = 0xffffff80;
        auVar80._0_8_ = 0xffffff80ffffff80;
        auVar80._12_4_ = 0xffffff80;
        uVar32 = uVar44 & 0xfffffffffffffff0;
        puVar34 = param_3;
        puVar42 = param_2;
        uVar36 = uVar32;
        do {
          uVar36 = uVar36 - 0x10;
          auVar95._0_4_ = iVar31 * (short)puVar34[1] >> 0x10;
          auVar95._4_4_ = iVar31 * *(short *)((long)puVar34 + 10) >> 0x10;
          auVar95._8_4_ = iVar31 * *(short *)((long)puVar34 + 0xc) >> 0x10;
          auVar95._12_4_ = iVar31 * *(short *)((long)puVar34 + 0xe) >> 0x10;
          auVar98._0_4_ = iVar31 * (short)puVar34[3] >> 0x10;
          auVar98._4_4_ = iVar31 * *(short *)((long)puVar34 + 0x1a) >> 0x10;
          auVar98._8_4_ = iVar31 * *(short *)((long)puVar34 + 0x1c) >> 0x10;
          auVar98._12_4_ = iVar31 * *(short *)((long)puVar34 + 0x1e) >> 0x10;
          auVar92._0_4_ = iVar31 * (short)puVar34[2] >> 0x10;
          auVar92._4_4_ = iVar31 * *(short *)((long)puVar34 + 0x12) >> 0x10;
          auVar92._8_4_ = iVar31 * *(short *)((long)puVar34 + 0x14) >> 0x10;
          auVar92._12_4_ = iVar31 * *(short *)((long)puVar34 + 0x16) >> 0x10;
          auVar85._0_4_ = iVar31 * (short)*puVar34 >> 0x10;
          auVar85._4_4_ = iVar31 * *(short *)((long)puVar34 + 2) >> 0x10;
          auVar85._8_4_ = iVar31 * *(short *)((long)puVar34 + 4) >> 0x10;
          auVar85._12_4_ = iVar31 * *(short *)((long)puVar34 + 6) >> 0x10;
          auVar69 = NEON_smin(auVar95,auVar78,4);
          auVar65 = NEON_smin(auVar98,auVar78,4);
          auVar64 = NEON_smin(auVar92,auVar78,4);
          auVar51 = NEON_smin(auVar85,auVar78,4);
          auVar69 = NEON_smax(auVar69,auVar80,4);
          auVar65 = NEON_smax(auVar65,auVar80,4);
          auVar64 = NEON_smax(auVar64,auVar80,4);
          auVar51 = NEON_smax(auVar51,auVar80,4);
          auVar51 = a64_TBL(ZEXT816(0),auVar51,auVar69,auVar64,auVar65,auVar47);
          auVar88._0_8_ = auVar51._0_8_ ^ 0x8080808080808080;
          auVar88[8] = auVar51[8] ^ 0x80;
          auVar88[9] = auVar51[9] ^ 0x80;
          auVar88[10] = auVar51[10] ^ 0x80;
          auVar88[0xb] = auVar51[0xb] ^ 0x80;
          auVar88[0xc] = auVar51[0xc] ^ 0x80;
          auVar88[0xd] = auVar51[0xd] ^ 0x80;
          auVar88[0xe] = auVar51[0xe] ^ 0x80;
          auVar88[0xf] = auVar51[0xf] ^ 0x80;
          puVar42[1] = auVar88._8_8_;
          *puVar42 = auVar88._0_8_;
          puVar34 = puVar34 + 4;
          puVar42 = puVar42 + 2;
        } while (uVar36 != 0);
        if (uVar44 - uVar32 == 0) {
          return;
        }
        uVar36 = uVar32;
        if (((uint)uVar44 >> 3 & 1) == 0) goto LAB_005c90f0;
      }
      auVar47 = _DAT_0024e040;
      auVar102._8_4_ = 0x7f;
      auVar102._0_8_ = 0x7f0000007f;
      auVar102._12_4_ = 0x7f;
      auVar104._8_4_ = 0xffffff80;
      auVar104._0_8_ = 0xffffff80ffffff80;
      auVar104._12_4_ = 0xffffff80;
      uVar32 = uVar44 & 0xfffffffffffffff8;
      lVar29 = uVar36 - uVar32;
      psVar40 = (short *)((long)param_3 + uVar36 * 2);
      puVar34 = (ulong *)((long)param_2 + uVar36);
      do {
        lVar29 = lVar29 + 8;
        auVar72._0_4_ = iVar31 * psVar40[4] >> 0x10;
        auVar72._4_4_ = iVar31 * psVar40[5] >> 0x10;
        auVar72._8_4_ = iVar31 * psVar40[6] >> 0x10;
        auVar72._12_4_ = iVar31 * psVar40[7] >> 0x10;
        auVar106._0_4_ = iVar31 * *psVar40 >> 0x10;
        auVar106._4_4_ = iVar31 * psVar40[1] >> 0x10;
        auVar106._8_4_ = iVar31 * psVar40[2] >> 0x10;
        auVar106._12_4_ = iVar31 * psVar40[3] >> 0x10;
        auVar64 = NEON_smin(auVar72,auVar102,4);
        auVar51 = NEON_smin(auVar106,auVar102,4);
        auVar64 = NEON_smax(auVar64,auVar104,4);
        auVar51 = NEON_smax(auVar51,auVar104,4);
        auVar51 = a64_TBL(ZEXT816(0),auVar51,auVar64,auVar47);
        *puVar34 = auVar51._0_8_ ^ 0x8080808080808080;
        psVar40 = psVar40 + 8;
        puVar34 = puVar34 + 1;
      } while (lVar29 != 0);
      if (uVar44 - uVar32 == 0) {
        return;
      }
    }
LAB_005c90f0:
    lVar29 = uVar44 - uVar32;
    pbVar37 = (byte *)((long)param_2 + uVar32);
    psVar40 = (short *)((long)param_3 + uVar32 * 2);
    do {
      iVar5 = iVar31 * *psVar40 >> 0x10;
      if (0x7e < iVar5) {
        iVar5 = 0x7f;
      }
      if (iVar5 == -0x80 || iVar5 + 0x80 < 0 != SCARRY4(iVar5,0x80)) {
        iVar5 = -0x80;
      }
      lVar29 = lVar29 + -1;
      *pbVar37 = (byte)iVar5 ^ 0x80;
      pbVar37 = pbVar37 + 1;
      psVar40 = psVar40 + 1;
    } while (lVar29 != 0);
    return;
  }
  if (param_5 != 3) {
    if (param_5 == 4) {
      if (uVar44 == 0) {
        return;
      }
      lVar29 = (long)(int)(param_1 * 256.0);
      if (uVar44 < 4) {
        uVar36 = 0;
      }
      else {
        auVar46._8_8_ = 0x7fffffff;
        auVar46._0_8_ = 0x7fffffff;
        auVar49._8_8_ = 0xffffffff80000000;
        auVar49._0_8_ = 0xffffffff80000000;
        uVar36 = uVar44 & 0xfffffffffffffffc;
        puVar34 = param_3;
        puVar42 = param_2;
        uVar32 = uVar36;
        do {
          uVar32 = uVar32 - 4;
          auVar53._0_8_ = (long)(*puVar34 * lVar29) >> 8;
          auVar53._8_8_ = (long)(puVar34[1] * lVar29) >> 8;
          auVar58._0_8_ = (long)(puVar34[2] * lVar29) >> 8;
          auVar58._8_8_ = (long)(puVar34[3] * lVar29) >> 8;
          auVar47 = NEON_cmgt(auVar46,auVar53,8);
          auVar51 = NEON_cmgt(auVar46,auVar58,8);
          auVar47 = NEON_bif(auVar53,auVar46,auVar47,1);
          auVar51 = NEON_bif(auVar58,auVar46,auVar51,1);
          auVar69 = NEON_cmgt(auVar47,auVar49,8);
          auVar64 = NEON_cmgt(auVar51,auVar49,8);
          auVar47 = NEON_bif(auVar47,auVar49,auVar69,1);
          auVar51 = NEON_bif(auVar51,auVar49,auVar64,1);
          *(int *)(puVar42 + 2) = auVar51._0_4_;
          *(int *)((long)puVar42 + 0x14) = auVar51._8_4_;
          *(int *)puVar42 = auVar47._0_4_;
          *(int *)((long)puVar42 + 4) = auVar47._8_4_;
          puVar34 = puVar34 + 4;
          puVar42 = puVar42 + 2;
        } while (uVar32 != 0);
        if (uVar44 - uVar36 == 0) {
          return;
        }
      }
      lVar30 = uVar44 - uVar36;
      puVar38 = (undefined4 *)((long)param_2 + uVar36 * 4);
      puVar34 = param_3 + uVar36;
      do {
        lVar43 = (long)(*puVar34 * lVar29) >> 8;
        if (0x7ffffffe < lVar43) {
          lVar43 = 0x7fffffff;
        }
        if (lVar43 < -0x7fffffff) {
          lVar43 = -0x80000000;
        }
        lVar30 = lVar30 + -1;
        *puVar38 = (int)lVar43;
        puVar38 = puVar38 + 1;
        puVar34 = puVar34 + 1;
      } while (lVar30 != 0);
      return;
    }
    if (param_5 != 5) {
      return;
    }
    if (uVar44 == 0) {
      return;
    }
    uVar32 = 0;
    if ((7 < uVar44) && (0x1f < (ulong)((long)param_2 - (long)param_3))) {
      auVar47 = NEON_fmov(0xbf800000,4);
      auVar51 = NEON_fmov(0x3f800000,4);
      uVar32 = uVar44 & 0xfffffffffffffff8;
      puVar34 = param_2 + 2;
      pfVar33 = (float *)(param_3 + 2);
      uVar36 = uVar32;
      do {
        pfVar35 = pfVar33 + -4;
        pfVar13 = pfVar33 + -3;
        pfVar14 = pfVar33 + -2;
        pfVar15 = pfVar33 + -1;
        fVar59 = *pfVar33;
        pfVar16 = pfVar33 + 1;
        pfVar17 = pfVar33 + 2;
        pfVar18 = pfVar33 + 3;
        uVar36 = uVar36 - 8;
        pfVar33 = pfVar33 + 8;
        auVar57._0_4_ = *pfVar35 * param_1;
        auVar57._4_4_ = *pfVar13 * param_1;
        auVar57._8_4_ = *pfVar14 * param_1;
        auVar57._12_4_ = *pfVar15 * param_1;
        auVar60._0_4_ = fVar59 * param_1;
        auVar60._4_4_ = *pfVar16 * param_1;
        auVar60._8_4_ = *pfVar17 * param_1;
        auVar60._12_4_ = *pfVar18 * param_1;
        auVar64 = NEON_fcmgt(auVar57,auVar51,4);
        auVar69 = NEON_fcmgt(auVar60,auVar51,4);
        auVar74 = NEON_fcmgt(auVar47,auVar57,4);
        auVar64 = NEON_bit(auVar57,auVar51,auVar64,1);
        auVar65 = NEON_fcmgt(auVar47,auVar60,4);
        auVar69 = NEON_bit(auVar60,auVar51,auVar69,1);
        auVar64 = NEON_bit(auVar64,auVar47,auVar74,1);
        auVar69 = NEON_bit(auVar69,auVar47,auVar65,1);
        puVar34[-1] = auVar64._8_8_;
        puVar34[-2] = auVar64._0_8_;
        puVar34[1] = auVar69._8_8_;
        *puVar34 = auVar69._0_8_;
        puVar34 = puVar34 + 4;
      } while (uVar36 != 0);
      if (uVar44 - uVar32 == 0) {
        return;
      }
    }
    lVar29 = uVar44 - uVar32;
    pfVar33 = (float *)((long)param_2 + uVar32 * 4);
    pfVar35 = (float *)((long)param_3 + uVar32 * 4);
    do {
      fVar55 = *pfVar35 * param_1;
      fVar59 = 1.0;
      if (fVar55 == 1.0 || fVar55 < 1.0 != NAN(fVar55)) {
        fVar59 = fVar55;
      }
      fVar56 = -1.0;
      if (-1.0 <= fVar55) {
        fVar56 = fVar59;
      }
      lVar29 = lVar29 + -1;
      *pfVar33 = fVar56;
      pfVar33 = pfVar33 + 1;
      pfVar35 = pfVar35 + 1;
    } while (lVar29 != 0);
    return;
  }
  if (uVar44 == 0) {
    return;
  }
  lVar29 = (long)(int)(param_1 * 256.0);
  if (7 < uVar44) {
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar44 - 1;
    lVar30 = (uVar44 - 1) * 3;
    uVar32 = 0;
    if (((((long)param_2 + 2U + lVar30 < (long)param_2 + 2U) ||
         ((long)param_2 + 1U + lVar30 < (long)param_2 + 1U)) ||
        ((ulong *)((long)param_2 + lVar30) < param_2)) || (SUB168(auVar6 * ZEXT816(3),8) != 0))
    goto LAB_005c904c;
    if ((param_3 + uVar44 <= param_2) || ((ulong *)((long)param_2 + uVar44 * 3) <= param_3)) {
      if (uVar44 < 0x10) {
        uVar36 = 0;
      }
      else {
        auVar50._8_8_ = 0x7fffff;
        auVar50._0_8_ = 0x7fffff;
        auVar54._8_8_ = 0xffffffffff800000;
        auVar54._0_8_ = 0xffffffffff800000;
        uVar32 = uVar44 & 0xfffffffffffffff0;
        puVar34 = param_3;
        puVar42 = param_2;
        uVar36 = uVar32;
        do {
          puVar2 = puVar34 + 4;
          puVar20 = puVar34 + 5;
          puVar7 = puVar34 + 6;
          puVar19 = puVar34 + 7;
          uVar36 = uVar36 - 0x10;
          uVar21 = *puVar34;
          puVar22 = puVar34 + 1;
          puVar3 = puVar34 + 0xc;
          puVar23 = puVar34 + 0xd;
          puVar8 = puVar34 + 0xe;
          puVar24 = puVar34 + 0xf;
          puVar1 = puVar34 + 2;
          puVar25 = puVar34 + 3;
          puVar4 = puVar34 + 8;
          puVar26 = puVar34 + 9;
          puVar9 = puVar34 + 10;
          puVar27 = puVar34 + 0xb;
          puVar34 = puVar34 + 0x10;
          auVar76._0_8_ = (long)(uVar21 * lVar29) >> 8;
          auVar76._8_8_ = (long)(*puVar22 * lVar29) >> 8;
          auVar73._0_8_ = (long)(*puVar1 * lVar29) >> 8;
          auVar73._8_8_ = (long)(*puVar25 * lVar29) >> 8;
          auVar64 = NEON_cmgt(auVar50,auVar76,8);
          auVar47 = NEON_cmgt(auVar50,auVar73,8);
          auVar65 = NEON_bif(auVar76,auVar50,auVar64,1);
          auVar69 = NEON_bif(auVar73,auVar50,auVar47,1);
          auVar63._0_8_ = (long)(*puVar7 * lVar29) >> 8;
          auVar63._8_8_ = (long)(*puVar19 * lVar29) >> 8;
          auVar98 = NEON_cmgt(auVar65,auVar54,8);
          auVar47 = NEON_cmgt(auVar50,auVar63,8);
          auVar82._0_8_ = (long)(*puVar3 * lVar29) >> 8;
          auVar82._8_8_ = (long)(*puVar23 * lVar29) >> 8;
          auVar68._0_8_ = (long)(*puVar2 * lVar29) >> 8;
          auVar68._8_8_ = (long)(*puVar20 * lVar29) >> 8;
          auVar47 = NEON_bif(auVar63,auVar50,auVar47,1);
          auVar74 = NEON_cmgt(auVar50,auVar82,8);
          auVar83._0_8_ = (long)(*puVar8 * lVar29) >> 8;
          auVar83._8_8_ = (long)(*puVar24 * lVar29) >> 8;
          auVar64 = NEON_cmgt(auVar50,auVar68,8);
          auVar79._0_8_ = (long)(*puVar4 * lVar29) >> 8;
          auVar79._8_8_ = (long)(*puVar26 * lVar29) >> 8;
          auVar78 = NEON_cmgt(auVar50,auVar83,8);
          auVar64 = NEON_bif(auVar68,auVar50,auVar64,1);
          auVar81._0_8_ = (long)(*puVar9 * lVar29) >> 8;
          auVar81._8_8_ = (long)(*puVar27 * lVar29) >> 8;
          auVar80 = NEON_cmgt(auVar50,auVar79,8);
          auVar92 = NEON_bsl(auVar74,auVar82,auVar50,1);
          auVar88 = NEON_cmgt(auVar50,auVar81,8);
          auVar102 = NEON_cmgt(auVar64,auVar54,8);
          auVar85 = NEON_bsl(auVar80,auVar79,auVar50,1);
          auVar74 = NEON_cmgt(auVar69,auVar54,8);
          auVar95 = NEON_bsl(auVar78,auVar83,auVar50,1);
          auVar104 = NEON_cmgt(auVar92,auVar54,8);
          auVar88 = NEON_bsl(auVar88,auVar81,auVar50,1);
          auVar80 = NEON_cmgt(auVar85,auVar54,8);
          auVar106 = NEON_cmgt(auVar95,auVar54,8);
          auVar78 = NEON_bsl(auVar102,auVar64,auVar54,1);
          auVar102 = NEON_cmgt(auVar88,auVar54,8);
          auVar74 = NEON_bsl(auVar74,auVar69,auVar54,1);
          auVar64 = NEON_cmgt(auVar47,auVar54,8);
          auVar85 = NEON_bsl(auVar80,auVar85,auVar54,1);
          auVar69 = NEON_bsl(auVar98,auVar65,auVar54,1);
          auVar92 = NEON_bsl(auVar104,auVar92,auVar54,1);
          auVar95 = NEON_bsl(auVar106,auVar95,auVar54,1);
          auVar101._0_8_ = auVar85._0_8_ >> 8;
          auVar101._8_8_ = auVar85._8_8_ >> 8;
          auVar88 = NEON_bsl(auVar102,auVar88,auVar54,1);
          auVar80 = NEON_bsl(auVar64,auVar47,auVar54,1);
          auVar93._0_8_ = auVar74._0_8_ >> 8;
          auVar93._8_8_ = auVar74._8_8_ >> 8;
          auVar89._0_8_ = auVar69._0_8_ >> 8;
          auVar89._8_8_ = auVar69._8_8_ >> 8;
          auVar96._0_8_ = auVar78._0_8_ >> 8;
          auVar96._8_8_ = auVar78._8_8_ >> 8;
          auVar47 = a64_TBL(ZEXT816(0),auVar69,auVar74,auVar78,auVar80,auVar51);
          auVar65 = a64_TBL(ZEXT816(0),auVar85,auVar88,auVar92,auVar95,auVar51);
          auVar103._0_8_ = auVar88._0_8_ >> 8;
          auVar103._8_8_ = auVar88._8_8_ >> 8;
          auVar105._0_8_ = auVar92._0_8_ >> 8;
          auVar105._8_8_ = auVar92._8_8_ >> 8;
          auVar99._0_8_ = auVar80._0_8_ >> 8;
          auVar99._8_8_ = auVar80._8_8_ >> 8;
          auVar107._0_8_ = auVar95._0_8_ >> 8;
          auVar107._8_8_ = auVar95._8_8_ >> 8;
          auVar77._0_8_ = auVar85._0_8_ >> 0x10;
          auVar77._8_8_ = auVar85._8_8_ >> 0x10;
          auVar64 = a64_TBL(ZEXT816(0),auVar89,auVar93,auVar96,auVar99,auVar51);
          auVar94._0_8_ = auVar74._0_8_ >> 0x10;
          auVar94._8_8_ = auVar74._8_8_ >> 0x10;
          auVar85 = a64_TBL(ZEXT816(0),auVar101,auVar103,auVar105,auVar107,auVar51);
          auVar90._0_8_ = auVar69._0_8_ >> 0x10;
          auVar90._8_8_ = auVar69._8_8_ >> 0x10;
          auVar97._0_8_ = auVar78._0_8_ >> 0x10;
          auVar97._8_8_ = auVar78._8_8_ >> 0x10;
          auVar100._0_8_ = auVar80._0_8_ >> 0x10;
          auVar100._8_8_ = auVar80._8_8_ >> 0x10;
          auVar69 = a64_TBL(ZEXT816(0),auVar90,auVar94,auVar97,auVar100,auVar51);
          auVar10._8_8_ = auVar88._8_8_ >> 0x10;
          auVar10._0_8_ = auVar88._0_8_ >> 0x10;
          auVar11._8_8_ = auVar92._8_8_ >> 0x10;
          auVar11._0_8_ = auVar92._0_8_ >> 0x10;
          auVar12._8_8_ = auVar95._8_8_ >> 0x10;
          auVar12._0_8_ = auVar95._0_8_ >> 0x10;
          auVar74 = a64_TBL(ZEXT816(0),auVar77,auVar10,auVar11,auVar12,auVar51);
          *(char *)puVar42 = auVar47[0];
          *(char *)((long)puVar42 + 1) = auVar64[0];
          *(char *)((long)puVar42 + 2) = auVar69[0];
          *(char *)((long)puVar42 + 3) = auVar47[1];
          *(char *)((long)puVar42 + 4) = auVar64[1];
          *(char *)((long)puVar42 + 5) = auVar69[1];
          *(char *)((long)puVar42 + 6) = auVar47[2];
          *(char *)((long)puVar42 + 7) = auVar64[2];
          *(char *)(puVar42 + 1) = auVar69[2];
          *(char *)((long)puVar42 + 9) = auVar47[3];
          *(char *)((long)puVar42 + 10) = auVar64[3];
          *(char *)((long)puVar42 + 0xb) = auVar69[3];
          *(char *)((long)puVar42 + 0xc) = auVar47[4];
          *(char *)((long)puVar42 + 0xd) = auVar64[4];
          *(char *)((long)puVar42 + 0xe) = auVar69[4];
          *(char *)((long)puVar42 + 0xf) = auVar47[5];
          *(char *)(puVar42 + 2) = auVar64[5];
          *(char *)((long)puVar42 + 0x11) = auVar69[5];
          *(char *)((long)puVar42 + 0x12) = auVar47[6];
          *(char *)((long)puVar42 + 0x13) = auVar64[6];
          *(char *)((long)puVar42 + 0x14) = auVar69[6];
          *(char *)((long)puVar42 + 0x15) = auVar47[7];
          *(char *)((long)puVar42 + 0x16) = auVar64[7];
          *(char *)((long)puVar42 + 0x17) = auVar69[7];
          *(char *)(puVar42 + 3) = auVar65[0];
          *(char *)((long)puVar42 + 0x19) = auVar85[0];
          *(char *)((long)puVar42 + 0x1a) = auVar74[0];
          *(char *)((long)puVar42 + 0x1b) = auVar65[1];
          *(char *)((long)puVar42 + 0x1c) = auVar85[1];
          *(char *)((long)puVar42 + 0x1d) = auVar74[1];
          *(char *)((long)puVar42 + 0x1e) = auVar65[2];
          *(char *)((long)puVar42 + 0x1f) = auVar85[2];
          *(char *)(puVar42 + 4) = auVar74[2];
          *(char *)((long)puVar42 + 0x21) = auVar65[3];
          *(char *)((long)puVar42 + 0x22) = auVar85[3];
          *(char *)((long)puVar42 + 0x23) = auVar74[3];
          *(char *)((long)puVar42 + 0x24) = auVar65[4];
          *(char *)((long)puVar42 + 0x25) = auVar85[4];
          *(char *)((long)puVar42 + 0x26) = auVar74[4];
          *(char *)((long)puVar42 + 0x27) = auVar65[5];
          *(char *)(puVar42 + 5) = auVar85[5];
          *(char *)((long)puVar42 + 0x29) = auVar74[5];
          *(char *)((long)puVar42 + 0x2a) = auVar65[6];
          *(char *)((long)puVar42 + 0x2b) = auVar85[6];
          *(char *)((long)puVar42 + 0x2c) = auVar74[6];
          *(char *)((long)puVar42 + 0x2d) = auVar65[7];
          *(char *)((long)puVar42 + 0x2e) = auVar85[7];
          *(char *)((long)puVar42 + 0x2f) = auVar74[7];
          puVar42 = puVar42 + 6;
        } while (uVar36 != 0);
        if (uVar44 - uVar32 == 0) {
          return;
        }
        uVar36 = uVar32;
        if (((uint)uVar44 >> 3 & 1) == 0) goto LAB_005c904c;
      }
      auVar47 = _DAT_0024e460;
      auVar48._8_8_ = 0x7fffff;
      auVar48._0_8_ = 0x7fffff;
      auVar52._8_8_ = 0xffffffffff800000;
      auVar52._0_8_ = 0xffffffffff800000;
      uVar32 = uVar44 & 0xfffffffffffffff8;
      lVar30 = uVar36 - uVar32;
      puVar28 = (undefined1 *)((long)param_2 + uVar36 * 3);
      puVar34 = param_3 + uVar36;
      do {
        lVar30 = lVar30 + 8;
        auVar45._0_8_ = (long)(puVar34[2] * lVar29) >> 8;
        auVar45._8_8_ = (long)(puVar34[3] * lVar29) >> 8;
        auVar51 = NEON_cmgt(auVar48,auVar45,8);
        auVar61._0_8_ = (long)(*puVar34 * lVar29) >> 8;
        auVar61._8_8_ = (long)(puVar34[1] * lVar29) >> 8;
        auVar66._0_8_ = (long)(puVar34[4] * lVar29) >> 8;
        auVar66._8_8_ = (long)(puVar34[5] * lVar29) >> 8;
        auVar51 = NEON_bif(auVar45,auVar48,auVar51,1);
        auVar70._0_8_ = (long)(puVar34[6] * lVar29) >> 8;
        auVar70._8_8_ = (long)(puVar34[7] * lVar29) >> 8;
        auVar64 = NEON_cmgt(auVar48,auVar61,8);
        auVar69 = NEON_cmgt(auVar48,auVar66,8);
        auVar65 = NEON_cmgt(auVar48,auVar70,8);
        auVar64 = NEON_bif(auVar61,auVar48,auVar64,1);
        auVar74 = NEON_cmgt(auVar51,auVar52,8);
        auVar69 = NEON_bif(auVar66,auVar48,auVar69,1);
        auVar65 = NEON_bif(auVar70,auVar48,auVar65,1);
        auVar78 = NEON_cmgt(auVar64,auVar52,8);
        auVar80 = NEON_cmgt(auVar69,auVar52,8);
        auVar74 = NEON_bsl(auVar74,auVar51,auVar52,1);
        auVar51 = NEON_cmgt(auVar65,auVar52,8);
        auVar64 = NEON_bsl(auVar78,auVar64,auVar52,1);
        auVar86._0_8_ = auVar74._0_8_ >> 0x10;
        auVar86._8_8_ = auVar74._8_8_ >> 0x10;
        auVar69 = NEON_bsl(auVar80,auVar69,auVar52,1);
        auVar51 = NEON_bsl(auVar51,auVar65,auVar52,1);
        auVar67._0_8_ = auVar74._0_8_ >> 8;
        auVar67._8_8_ = auVar74._8_8_ >> 8;
        auVar62._0_8_ = auVar64._0_8_ >> 8;
        auVar62._8_8_ = auVar64._8_8_ >> 8;
        auVar84._0_8_ = auVar64._0_8_ >> 0x10;
        auVar84._8_8_ = auVar64._8_8_ >> 0x10;
        auVar71._0_8_ = auVar69._0_8_ >> 8;
        auVar71._8_8_ = auVar69._8_8_ >> 8;
        auVar87._0_8_ = auVar69._0_8_ >> 0x10;
        auVar87._8_8_ = auVar69._8_8_ >> 0x10;
        auVar75._0_8_ = auVar51._0_8_ >> 8;
        auVar75._8_8_ = auVar51._8_8_ >> 8;
        auVar91._0_8_ = auVar51._0_8_ >> 0x10;
        auVar91._8_8_ = auVar51._8_8_ >> 0x10;
        auVar51 = a64_TBL(ZEXT816(0),auVar64,auVar74,auVar69,auVar51,auVar47);
        auVar64 = a64_TBL(ZEXT816(0),auVar62,auVar67,auVar71,auVar75,auVar47);
        auVar69 = a64_TBL(ZEXT816(0),auVar84,auVar86,auVar87,auVar91,auVar47);
        *puVar28 = auVar51[0];
        puVar28[1] = auVar64[0];
        puVar28[2] = auVar69[0];
        puVar28[3] = auVar51[1];
        puVar28[4] = auVar64[1];
        puVar28[5] = auVar69[1];
        puVar28[6] = auVar51[2];
        puVar28[7] = auVar64[2];
        puVar28[8] = auVar69[2];
        puVar28[9] = auVar51[3];
        puVar28[10] = auVar64[3];
        puVar28[0xb] = auVar69[3];
        puVar28[0xc] = auVar51[4];
        puVar28[0xd] = auVar64[4];
        puVar28[0xe] = auVar69[4];
        puVar28[0xf] = auVar51[5];
        puVar28[0x10] = auVar64[5];
        puVar28[0x11] = auVar69[5];
        puVar28[0x12] = auVar51[6];
        puVar28[0x13] = auVar64[6];
        puVar28[0x14] = auVar69[6];
        puVar28[0x15] = auVar51[7];
        puVar28[0x16] = auVar64[7];
        puVar28[0x17] = auVar69[7];
        puVar28 = puVar28 + 0x18;
        puVar34 = puVar34 + 8;
      } while (lVar30 != 0);
      if (uVar44 - uVar32 == 0) {
        return;
      }
      goto LAB_005c904c;
    }
  }
  uVar32 = 0;
LAB_005c904c:
  lVar30 = uVar44 - uVar32;
  puVar34 = param_3 + uVar32;
  puVar28 = (undefined1 *)((long)param_2 + uVar32 * 3 + 2);
  do {
    lVar43 = (long)(*puVar34 * lVar29) >> 8;
    if (0x7ffffe < lVar43) {
      lVar43 = 0x7fffff;
    }
    if (lVar43 == -0x800000 || lVar43 + 0x800000 < 0 != SCARRY8(lVar43,0x800000)) {
      lVar43 = -0x800000;
    }
    lVar30 = lVar30 + -1;
    puVar28[-2] = (char)lVar43;
    puVar28[-1] = (char)((ulong)lVar43 >> 8);
    *puVar28 = (char)((ulong)lVar43 >> 0x10);
    puVar34 = puVar34 + 1;
    puVar28 = puVar28 + 3;
  } while (lVar30 != 0);
  return;
}


// ===== 005c980c  ma_mix_pcm_frames_f32 =====

ulong ma_mix_pcm_frames_f32(float param_1,ulong param_2,ulong param_3,long param_4,uint param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  float *pfVar5;
  float *pfVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar2 = 0xfffffffe;
  if (((param_2 == 0) || (param_3 == 0)) || (param_5 == 0)) goto LAB_005c9828;
  if (param_1 == 0.0) {
LAB_005c9824:
    uVar2 = 0;
  }
  else {
    uVar2 = (ulong)param_5 * param_4;
    if (param_1 != 1.0) {
      if (uVar2 == 0) goto LAB_005c9828;
      if ((uVar2 < 8) || ((param_2 < param_3 + uVar2 * 4 && (param_3 < param_2 + uVar2 * 4)))) {
        uVar4 = 0;
      }
      else {
        uVar4 = uVar2 & 0xfffffffffffffff8;
        puVar7 = (undefined8 *)(param_2 + 0x10);
        puVar8 = (undefined8 *)(param_3 + 0x10);
        uVar9 = uVar4;
        do {
          puVar1 = puVar8 + -1;
          uVar10 = puVar8[-2];
          uVar12 = puVar8[1];
          uVar11 = *puVar8;
          uVar9 = uVar9 - 8;
          puVar8 = puVar8 + 4;
          puVar7[-1] = CONCAT44((float)((ulong)puVar7[-1] >> 0x20) +
                                (float)((ulong)*puVar1 >> 0x20) * param_1,
                                (float)puVar7[-1] + (float)*puVar1 * param_1);
          puVar7[-2] = CONCAT44((float)((ulong)puVar7[-2] >> 0x20) +
                                (float)((ulong)uVar10 >> 0x20) * param_1,
                                (float)puVar7[-2] + (float)uVar10 * param_1);
          puVar7[1] = CONCAT44((float)((ulong)puVar7[1] >> 0x20) +
                               (float)((ulong)uVar12 >> 0x20) * param_1,
                               (float)puVar7[1] + (float)uVar12 * param_1);
          *puVar7 = CONCAT44((float)((ulong)*puVar7 >> 0x20) +
                             (float)((ulong)uVar11 >> 0x20) * param_1,
                             (float)*puVar7 + (float)uVar11 * param_1);
          puVar7 = puVar7 + 4;
        } while (uVar9 != 0);
        if (uVar2 - uVar4 == 0) goto LAB_005c9824;
      }
      lVar3 = uVar2 - uVar4;
      pfVar5 = (float *)(param_2 + uVar4 * 4);
      pfVar6 = (float *)(param_3 + uVar4 * 4);
      do {
        lVar3 = lVar3 + -1;
        *pfVar5 = *pfVar5 + *pfVar6 * param_1;
        pfVar5 = pfVar5 + 1;
        pfVar6 = pfVar6 + 1;
      } while (lVar3 != 0);
      uVar2 = 0;
      goto LAB_005c9828;
    }
    if (uVar2 == 0) goto LAB_005c9828;
    if ((uVar2 < 8) || ((param_2 < param_3 + uVar2 * 4 && (param_3 < param_2 + uVar2 * 4)))) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar2 & 0xfffffffffffffff8;
      puVar7 = (undefined8 *)(param_2 + 0x10);
      puVar8 = (undefined8 *)(param_3 + 0x10);
      uVar9 = uVar4;
      do {
        puVar1 = puVar8 + -1;
        uVar10 = puVar8[-2];
        uVar12 = puVar8[1];
        uVar11 = *puVar8;
        uVar9 = uVar9 - 8;
        puVar8 = puVar8 + 4;
        puVar7[-1] = CONCAT44((float)((ulong)*puVar1 >> 0x20) + (float)((ulong)puVar7[-1] >> 0x20),
                              (float)*puVar1 + (float)puVar7[-1]);
        puVar7[-2] = CONCAT44((float)((ulong)uVar10 >> 0x20) + (float)((ulong)puVar7[-2] >> 0x20),
                              (float)uVar10 + (float)puVar7[-2]);
        puVar7[1] = CONCAT44((float)((ulong)uVar12 >> 0x20) + (float)((ulong)puVar7[1] >> 0x20),
                             (float)uVar12 + (float)puVar7[1]);
        *puVar7 = CONCAT44((float)((ulong)uVar11 >> 0x20) + (float)((ulong)*puVar7 >> 0x20),
                           (float)uVar11 + (float)*puVar7);
        puVar7 = puVar7 + 4;
      } while (uVar9 != 0);
      if (uVar2 - uVar4 == 0) goto LAB_005c9824;
    }
    lVar3 = uVar2 - uVar4;
    pfVar5 = (float *)(param_2 + uVar4 * 4);
    pfVar6 = (float *)(param_3 + uVar4 * 4);
    do {
      lVar3 = lVar3 + -1;
      *pfVar5 = *pfVar6 + *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar6 = pfVar6 + 1;
    } while (lVar3 != 0);
    uVar2 = 0;
  }
LAB_005c9828:
  return uVar2 & 0xffffffff;
}


// ===== 005c9980  ma_pcm_u8_to_u8 =====

void ma_pcm_u8_to_u8(void *param_1,void *param_2,ulong param_3)

{
  size_t __n;
  
  if (param_3 != 0) {
    do {
      __n = param_3;
      if (0xfffffffe < param_3) {
        __n = 0xffffffff;
      }
      memcpy(param_1,param_2,__n);
      param_3 = param_3 - __n;
      param_1 = (void *)((long)param_1 + __n);
      param_2 = (void *)((long)param_2 + __n);
    } while (param_3 != 0);
  }
  return;
}


// ===== 005c99e4  ma_pcm_u8_to_s16 =====

void ma_pcm_u8_to_s16(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  byte *pbVar2;
  ulong uVar3;
  ushort *puVar4;
  ulong *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (param_3 == 0) {
    return;
  }
  if ((param_3 < 8) || ((param_1 < param_2 + param_3 && (param_2 < param_1 + param_3 * 2)))) {
    uVar1 = 0;
  }
  else {
    if (param_3 < 0x20) {
      uVar3 = 0;
    }
    else {
      uVar1 = param_3 & 0xffffffffffffffe0;
      puVar7 = (undefined8 *)(param_2 + 0x10);
      puVar5 = (ulong *)(param_1 + 0x20);
      uVar3 = uVar1;
      do {
        uVar9 = puVar7[-1];
        uVar8 = puVar7[-2];
        uVar11 = puVar7[1];
        uVar10 = *puVar7;
        uVar3 = uVar3 - 0x20;
        puVar7 = puVar7 + 4;
        puVar5[-3] = CONCAT17((char)((ulong)uVar8 >> 0x38),
                              (uint7)(CONCAT15((char)((ulong)uVar8 >> 0x30),
                                               (uint5)(CONCAT13((char)((ulong)uVar8 >> 0x28),
                                                                (uint3)(byte)((byte)((ulong)uVar8 >>
                                                                                    0x20) ^ 0x80) <<
                                                                8) ^ 0x80000000)) ^ 0x800000000000))
                     ^ 0x8000000000000000;
        puVar5[-4] = CONCAT17((char)((ulong)uVar8 >> 0x18),
                              (uint7)(CONCAT15((char)((ulong)uVar8 >> 0x10),
                                               (uint5)(CONCAT13((char)((ulong)uVar8 >> 8),
                                                                (uint3)(byte)((byte)uVar8 ^ 0x80) <<
                                                                8) ^ 0x80000000)) ^ 0x800000000000))
                     ^ 0x8000000000000000;
        puVar5[-1] = CONCAT17((char)((ulong)uVar9 >> 0x38),
                              (uint7)(CONCAT15((char)((ulong)uVar9 >> 0x30),
                                               (uint5)(CONCAT13((char)((ulong)uVar9 >> 0x28),
                                                                (uint3)(byte)((byte)((ulong)uVar9 >>
                                                                                    0x20) ^ 0x80) <<
                                                                8) ^ 0x80000000)) ^ 0x800000000000))
                     ^ 0x8000000000000000;
        puVar5[-2] = CONCAT17((char)((ulong)uVar9 >> 0x18),
                              (uint7)(CONCAT15((char)((ulong)uVar9 >> 0x10),
                                               (uint5)(CONCAT13((char)((ulong)uVar9 >> 8),
                                                                (uint3)(byte)((byte)uVar9 ^ 0x80) <<
                                                                8) ^ 0x80000000)) ^ 0x800000000000))
                     ^ 0x8000000000000000;
        puVar5[1] = CONCAT17((char)((ulong)uVar10 >> 0x38),
                             (uint7)(CONCAT15((char)((ulong)uVar10 >> 0x30),
                                              (uint5)(CONCAT13((char)((ulong)uVar10 >> 0x28),
                                                               (uint3)(byte)((byte)((ulong)uVar10 >>
                                                                                   0x20) ^ 0x80) <<
                                                               8) ^ 0x80000000)) ^ 0x800000000000))
                    ^ 0x8000000000000000;
        *puVar5 = CONCAT17((char)((ulong)uVar10 >> 0x18),
                           (uint7)(CONCAT15((char)((ulong)uVar10 >> 0x10),
                                            (uint5)(CONCAT13((char)((ulong)uVar10 >> 8),
                                                             (uint3)(byte)((byte)uVar10 ^ 0x80) << 8
                                                            ) ^ 0x80000000)) ^ 0x800000000000)) ^
                  0x8000000000000000;
        puVar5[3] = CONCAT17((char)((ulong)uVar11 >> 0x38),
                             (uint7)(CONCAT15((char)((ulong)uVar11 >> 0x30),
                                              (uint5)(CONCAT13((char)((ulong)uVar11 >> 0x28),
                                                               (uint3)(byte)((byte)((ulong)uVar11 >>
                                                                                   0x20) ^ 0x80) <<
                                                               8) ^ 0x80000000)) ^ 0x800000000000))
                    ^ 0x8000000000000000;
        puVar5[2] = CONCAT17((char)((ulong)uVar11 >> 0x18),
                             (uint7)(CONCAT15((char)((ulong)uVar11 >> 0x10),
                                              (uint5)(CONCAT13((char)((ulong)uVar11 >> 8),
                                                               (uint3)(byte)((byte)uVar11 ^ 0x80) <<
                                                               8) ^ 0x80000000)) ^ 0x800000000000))
                    ^ 0x8000000000000000;
        puVar5 = puVar5 + 8;
      } while (uVar3 != 0);
      if (uVar1 == param_3) {
        return;
      }
      uVar3 = uVar1;
      if ((param_3 & 0x18) == 0) goto LAB_005c9a0c;
    }
    uVar1 = param_3 & 0xfffffffffffffff8;
    lVar6 = uVar3 - uVar1;
    puVar5 = (ulong *)(param_1 + uVar3 * 2);
    puVar7 = (undefined8 *)(param_2 + uVar3);
    do {
      uVar8 = *puVar7;
      lVar6 = lVar6 + 8;
      puVar5[1] = CONCAT17((char)((ulong)uVar8 >> 0x38),
                           (uint7)(CONCAT15((char)((ulong)uVar8 >> 0x30),
                                            (uint5)(CONCAT13((char)((ulong)uVar8 >> 0x28),
                                                             (uint3)(byte)((byte)((ulong)uVar8 >>
                                                                                 0x20) ^ 0x80) << 8)
                                                   ^ 0x80000000)) ^ 0x800000000000)) ^
                  0x8000000000000000;
      *puVar5 = CONCAT17((char)((ulong)uVar8 >> 0x18),
                         (uint7)(CONCAT15((char)((ulong)uVar8 >> 0x10),
                                          (uint5)(CONCAT13((char)((ulong)uVar8 >> 8),
                                                           (uint3)(byte)((byte)uVar8 ^ 0x80) << 8) ^
                                                 0x80000000)) ^ 0x800000000000)) ^
                0x8000000000000000;
      puVar5 = puVar5 + 2;
      puVar7 = puVar7 + 1;
    } while (lVar6 != 0);
    if (uVar1 == param_3) {
      return;
    }
  }
LAB_005c9a0c:
  lVar6 = param_3 - uVar1;
  pbVar2 = (byte *)(param_2 + uVar1);
  puVar4 = (ushort *)(param_1 + uVar1 * 2);
  do {
    lVar6 = lVar6 + -1;
    *puVar4 = (ushort)*pbVar2 << 8 ^ 0x8000;
    pbVar2 = pbVar2 + 1;
    puVar4 = puVar4 + 1;
  } while (lVar6 != 0);
  return;
}


// ===== 005c9adc  ma_pcm_u8_to_s24 =====

void ma_pcm_u8_to_s24(undefined1 *param_1,undefined1 *param_2,ulong param_3)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if (param_3 == 0) {
    return;
  }
  if (7 < param_3) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_3 - 1;
    lVar7 = (param_3 - 1) * 3;
    uVar4 = 0;
    if ((((param_1 + 2 + lVar7 < param_1 + 2) || (param_1 + 1 + lVar7 < param_1 + 1)) ||
        (param_1 + lVar7 < param_1)) || (SUB168(auVar2 * ZEXT816(3),8) != 0)) goto LAB_005c9aec;
    if ((param_2 + param_3 <= param_1) || (param_1 + param_3 * 3 <= param_2)) {
      if (param_3 < 0x20) {
        uVar6 = 0;
      }
      else {
        uVar4 = param_3 & 0xffffffffffffffe0;
        puVar8 = (undefined8 *)(param_2 + 0x10);
        uVar6 = uVar4;
        puVar3 = param_1;
        do {
          uVar11 = puVar8[-1];
          uVar10 = puVar8[-2];
          uVar13 = puVar8[1];
          uVar12 = *puVar8;
          uVar6 = uVar6 - 0x20;
          puVar8 = puVar8 + 4;
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3[2] = (byte)uVar10 ^ 0x80;
          puVar3[3] = 0;
          puVar3[4] = 0;
          puVar3[5] = (byte)((ulong)uVar10 >> 8) ^ 0x80;
          puVar3[6] = 0;
          puVar3[7] = 0;
          puVar3[8] = (byte)((ulong)uVar10 >> 0x10) ^ 0x80;
          puVar3[9] = 0;
          puVar3[10] = 0;
          puVar3[0xb] = (byte)((ulong)uVar10 >> 0x18) ^ 0x80;
          puVar3[0xc] = 0;
          puVar3[0xd] = 0;
          puVar3[0xe] = (byte)((ulong)uVar10 >> 0x20) ^ 0x80;
          puVar3[0xf] = 0;
          puVar3[0x10] = 0;
          puVar3[0x11] = (byte)((ulong)uVar10 >> 0x28) ^ 0x80;
          puVar3[0x12] = 0;
          puVar3[0x13] = 0;
          puVar3[0x14] = (byte)((ulong)uVar10 >> 0x30) ^ 0x80;
          puVar3[0x15] = 0;
          puVar3[0x16] = 0;
          puVar3[0x17] = (byte)((ulong)uVar10 >> 0x38) ^ 0x80;
          puVar3[0x18] = 0;
          puVar3[0x19] = 0;
          puVar3[0x1a] = (byte)uVar11 ^ 0x80;
          puVar3[0x1b] = 0;
          puVar3[0x1c] = 0;
          puVar3[0x1d] = (byte)((ulong)uVar11 >> 8) ^ 0x80;
          puVar3[0x1e] = 0;
          puVar3[0x1f] = 0;
          puVar3[0x20] = (byte)((ulong)uVar11 >> 0x10) ^ 0x80;
          puVar3[0x21] = 0;
          puVar3[0x22] = 0;
          puVar3[0x23] = (byte)((ulong)uVar11 >> 0x18) ^ 0x80;
          puVar3[0x24] = 0;
          puVar3[0x25] = 0;
          puVar3[0x26] = (byte)((ulong)uVar11 >> 0x20) ^ 0x80;
          puVar3[0x27] = 0;
          puVar3[0x28] = 0;
          puVar3[0x29] = (byte)((ulong)uVar11 >> 0x28) ^ 0x80;
          puVar3[0x2a] = 0;
          puVar3[0x2b] = 0;
          puVar3[0x2c] = (byte)((ulong)uVar11 >> 0x30) ^ 0x80;
          puVar3[0x2d] = 0;
          puVar3[0x2e] = 0;
          puVar3[0x2f] = (byte)((ulong)uVar11 >> 0x38) ^ 0x80;
          puVar3[0x30] = 0;
          puVar3[0x31] = 0;
          puVar3[0x32] = (byte)uVar12 ^ 0x80;
          puVar3[0x33] = 0;
          puVar3[0x34] = 0;
          puVar3[0x35] = (byte)((ulong)uVar12 >> 8) ^ 0x80;
          puVar3[0x36] = 0;
          puVar3[0x37] = 0;
          puVar3[0x38] = (byte)((ulong)uVar12 >> 0x10) ^ 0x80;
          puVar3[0x39] = 0;
          puVar3[0x3a] = 0;
          puVar3[0x3b] = (byte)((ulong)uVar12 >> 0x18) ^ 0x80;
          puVar3[0x3c] = 0;
          puVar3[0x3d] = 0;
          puVar3[0x3e] = (byte)((ulong)uVar12 >> 0x20) ^ 0x80;
          puVar3[0x3f] = 0;
          puVar3[0x40] = 0;
          puVar3[0x41] = (byte)((ulong)uVar12 >> 0x28) ^ 0x80;
          puVar3[0x42] = 0;
          puVar3[0x43] = 0;
          puVar3[0x44] = (byte)((ulong)uVar12 >> 0x30) ^ 0x80;
          puVar3[0x45] = 0;
          puVar3[0x46] = 0;
          puVar3[0x47] = (byte)((ulong)uVar12 >> 0x38) ^ 0x80;
          puVar3[0x48] = 0;
          puVar3[0x49] = 0;
          puVar3[0x4a] = (byte)uVar13 ^ 0x80;
          puVar3[0x4b] = 0;
          puVar3[0x4c] = 0;
          puVar3[0x4d] = (byte)((ulong)uVar13 >> 8) ^ 0x80;
          puVar3[0x4e] = 0;
          puVar3[0x4f] = 0;
          puVar3[0x50] = (byte)((ulong)uVar13 >> 0x10) ^ 0x80;
          puVar3[0x51] = 0;
          puVar3[0x52] = 0;
          puVar3[0x53] = (byte)((ulong)uVar13 >> 0x18) ^ 0x80;
          puVar3[0x54] = 0;
          puVar3[0x55] = 0;
          puVar3[0x56] = (byte)((ulong)uVar13 >> 0x20) ^ 0x80;
          puVar3[0x57] = 0;
          puVar3[0x58] = 0;
          puVar3[0x59] = (byte)((ulong)uVar13 >> 0x28) ^ 0x80;
          puVar3[0x5a] = 0;
          puVar3[0x5b] = 0;
          puVar3[0x5c] = (byte)((ulong)uVar13 >> 0x30) ^ 0x80;
          puVar3[0x5d] = 0;
          puVar3[0x5e] = 0;
          puVar3[0x5f] = (byte)((ulong)uVar13 >> 0x38) ^ 0x80;
          puVar3 = puVar3 + 0x60;
        } while (uVar6 != 0);
        if (uVar4 == param_3) {
          return;
        }
        uVar6 = uVar4;
        if ((param_3 & 0x18) == 0) goto LAB_005c9aec;
      }
      uVar4 = param_3 & 0xfffffffffffffff8;
      lVar7 = uVar6 - uVar4;
      puVar3 = param_1 + uVar6 * 3;
      puVar8 = (undefined8 *)(param_2 + uVar6);
      do {
        uVar10 = *puVar8;
        lVar7 = lVar7 + 8;
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = (byte)uVar10 ^ 0x80;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = (byte)((ulong)uVar10 >> 8) ^ 0x80;
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3[8] = (byte)((ulong)uVar10 >> 0x10) ^ 0x80;
        puVar3[9] = 0;
        puVar3[10] = 0;
        puVar3[0xb] = (byte)((ulong)uVar10 >> 0x18) ^ 0x80;
        puVar3[0xc] = 0;
        puVar3[0xd] = 0;
        puVar3[0xe] = (byte)((ulong)uVar10 >> 0x20) ^ 0x80;
        puVar3[0xf] = 0;
        puVar3[0x10] = 0;
        puVar3[0x11] = (byte)((ulong)uVar10 >> 0x28) ^ 0x80;
        puVar3[0x12] = 0;
        puVar3[0x13] = 0;
        puVar3[0x14] = (byte)((ulong)uVar10 >> 0x30) ^ 0x80;
        puVar3[0x15] = 0;
        puVar3[0x16] = 0;
        puVar3[0x17] = (byte)((ulong)uVar10 >> 0x38) ^ 0x80;
        puVar3 = puVar3 + 0x18;
        puVar8 = puVar8 + 1;
      } while (lVar7 != 0);
      if (uVar4 == param_3) {
        return;
      }
      goto LAB_005c9aec;
    }
  }
  uVar4 = 0;
LAB_005c9aec:
  lVar7 = param_3 - uVar4;
  pbVar5 = param_2 + uVar4;
  pbVar9 = param_1 + uVar4 * 3 + 2;
  do {
    bVar1 = *pbVar5;
    lVar7 = lVar7 + -1;
    pbVar9[-2] = 0;
    pbVar9[-1] = 0;
    *pbVar9 = bVar1 ^ 0x80;
    pbVar5 = pbVar5 + 1;
    pbVar9 = pbVar9 + 3;
  } while (lVar7 != 0);
  return;
}


// ===== 005c9c34  ma_pcm_u8_to_s32 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ma_pcm_u8_to_s32(ulong *param_1,undefined1 (*param_2) [16],ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulong uVar3;
  byte *pbVar4;
  ulong uVar5;
  uint *puVar6;
  long lVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined1 (*pauVar10) [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  auVar12 = _DAT_0024e4f0;
  auVar11 = _DAT_0024e3a0;
  auVar2 = _DAT_0024e210;
  auVar1 = _DAT_0024de80;
  if (param_3 == 0) {
    return;
  }
  if ((param_3 < 8) ||
     ((param_1 < *param_2 + param_3 &&
      (param_2 < (undefined1 (*) [16])((long)param_1 + param_3 * 4))))) {
    uVar3 = 0;
  }
  else {
    if (param_3 < 0x10) {
      uVar5 = 0;
    }
    else {
      uVar3 = param_3 & 0xfffffffffffffff0;
      pauVar10 = param_2;
      puVar8 = param_1;
      uVar5 = uVar3;
      do {
        auVar13 = *pauVar10;
        uVar5 = uVar5 - 0x10;
        auVar14 = a64_TBL(ZEXT816(0),auVar13,auVar1);
        auVar16 = a64_TBL(ZEXT816(0),auVar13,auVar11);
        auVar18 = a64_TBL(ZEXT816(0),auVar13,auVar12);
        auVar13 = a64_TBL(ZEXT816(0),auVar13,auVar2);
        auVar15._0_8_ =
             CONCAT17(auVar14[4],(uint7)(uint)(auVar14._0_4_ << 0x18)) ^ 0x8000000080000000;
        auVar15._8_3_ = 0;
        auVar15[0xb] = auVar14[8] ^ 0x80;
        auVar15._12_3_ = 0;
        auVar15[0xf] = auVar14[0xc] ^ 0x80;
        auVar17._0_8_ =
             CONCAT17(auVar16[4],(uint7)(uint)(auVar16._0_4_ << 0x18)) ^ 0x8000000080000000;
        auVar17._8_3_ = 0;
        auVar17[0xb] = auVar16[8] ^ 0x80;
        auVar17._12_3_ = 0;
        auVar17[0xf] = auVar16[0xc] ^ 0x80;
        auVar16._0_8_ =
             CONCAT17(auVar18[4],(uint7)(uint)(auVar18._0_4_ << 0x18)) ^ 0x8000000080000000;
        auVar16._8_3_ = 0;
        auVar16[0xb] = auVar18[8] ^ 0x80;
        auVar16._12_3_ = 0;
        auVar16[0xf] = auVar18[0xc] ^ 0x80;
        auVar14._0_8_ =
             CONCAT17(auVar13[4],(uint7)(uint)(auVar13._0_4_ << 0x18)) ^ 0x8000000080000000;
        auVar14._8_3_ = 0;
        auVar14[0xb] = auVar13[8] ^ 0x80;
        auVar14._12_3_ = 0;
        auVar14[0xf] = auVar13[0xc] ^ 0x80;
        puVar8[5] = auVar17._8_8_;
        puVar8[4] = auVar17._0_8_;
        puVar8[7] = auVar15._8_8_;
        puVar8[6] = auVar15._0_8_;
        puVar8[1] = auVar14._8_8_;
        *puVar8 = auVar14._0_8_;
        puVar8[3] = auVar16._8_8_;
        puVar8[2] = auVar16._0_8_;
        pauVar10 = pauVar10 + 1;
        puVar8 = puVar8 + 8;
      } while (uVar5 != 0);
      if (uVar3 == param_3) {
        return;
      }
      uVar5 = uVar3;
      if (((uint)param_3 >> 3 & 1) == 0) goto LAB_005c9c5c;
    }
    auVar2 = _DAT_0024e4f0;
    auVar1 = _DAT_0024e210;
    uVar3 = param_3 & 0xfffffffffffffff8;
    lVar7 = uVar5 - uVar3;
    puVar8 = (ulong *)(*param_2 + uVar5);
    puVar9 = (ulong *)((long)param_1 + uVar5 * 4);
    do {
      auVar11._0_8_ = *puVar8;
      auVar11._8_8_ = 0;
      lVar7 = lVar7 + 8;
      auVar12 = a64_TBL(ZEXT816(0),auVar11,auVar2);
      auVar11 = a64_TBL(ZEXT816(0),auVar11,auVar1);
      auVar13._0_8_ = CONCAT17(auVar12[4],(uint7)(uint)(auVar12._0_4_ << 0x18)) ^ 0x8000000080000000
      ;
      auVar13._8_3_ = 0;
      auVar13[0xb] = auVar12[8] ^ 0x80;
      auVar13._12_3_ = 0;
      auVar13[0xf] = auVar12[0xc] ^ 0x80;
      auVar12._0_8_ = CONCAT17(auVar11[4],(uint7)(uint)(auVar11._0_4_ << 0x18)) ^ 0x8000000080000000
      ;
      auVar12._8_3_ = 0;
      auVar12[0xb] = auVar11[8] ^ 0x80;
      auVar12._12_3_ = 0;
      auVar12[0xf] = auVar11[0xc] ^ 0x80;
      puVar9[1] = auVar12._8_8_;
      *puVar9 = auVar12._0_8_;
      puVar9[3] = auVar13._8_8_;
      puVar9[2] = auVar13._0_8_;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 4;
    } while (lVar7 != 0);
    if (uVar3 == param_3) {
      return;
    }
  }
LAB_005c9c5c:
  lVar7 = param_3 - uVar3;
  pbVar4 = *param_2 + uVar3;
  puVar6 = (uint *)((long)param_1 + uVar3 * 4);
  do {
    lVar7 = lVar7 + -1;
    *puVar6 = (uint)*pbVar4 << 0x18 ^ 0x80000000;
    pbVar4 = pbVar4 + 1;
    puVar6 = puVar6 + 1;
  } while (lVar7 != 0);
  return;
}


// ===== 005c9d6c  ma_pcm_u8_to_f32 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ma_pcm_u8_to_f32(float *param_1,undefined1 (*param_2) [16],ulong param_3)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  float *pfVar7;
  long lVar8;
  ulong *puVar9;
  undefined1 (*pauVar10) [16];
  float fVar11;
  float fVar13;
  float fVar14;
  undefined1 auVar12 [16];
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  auVar3 = _DAT_0024e3a0;
  auVar1 = _DAT_0024e210;
  uVar2 = _UNK_0024de8c;
  if (param_3 == 0) {
    return;
  }
  if ((param_3 < 8) ||
     ((param_1 < *param_2 + param_3 && (param_2 < (undefined1 (*) [16])(param_1 + param_3))))) {
    uVar4 = 0;
  }
  else {
    auVar12 = NEON_fmov(0xbf800000,4);
    fVar11 = auVar12._0_4_;
    fVar13 = auVar12._4_4_;
    fVar14 = auVar12._8_4_;
    fVar15 = auVar12._12_4_;
    if (param_3 < 0x10) {
      uVar6 = 0;
    }
    else {
      uVar4 = param_3 & 0xfffffffffffffff0;
      auVar12._8_4_ = _UNK_0024de88;
      auVar12._0_8_ = _DAT_0024de80;
      auVar16._8_4_ = _UNK_0024e4f8;
      auVar16._0_8_ = _DAT_0024e4f0;
      auVar16._12_4_ = _UNK_0024e4fc;
      pauVar10 = param_2;
      pfVar7 = param_1;
      uVar6 = uVar4;
      do {
        auVar17 = *pauVar10;
        uVar6 = uVar6 - 0x10;
        auVar12._12_4_ = uVar2;
        auVar18 = a64_TBL(ZEXT816(0),auVar17,auVar12);
        auVar19 = a64_TBL(ZEXT816(0),auVar17,auVar3);
        auVar20 = a64_TBL(ZEXT816(0),auVar17,auVar16);
        auVar17 = a64_TBL(ZEXT816(0),auVar17,auVar1);
        auVar18 = NEON_ucvtf(auVar18,4);
        auVar19 = NEON_ucvtf(auVar19,4);
        auVar20 = NEON_ucvtf(auVar20,4);
        auVar17 = NEON_ucvtf(auVar17,4);
        pfVar7[0xc] = auVar19._8_4_ * 0.007843138 + fVar14;
        pfVar7[0xd] = auVar19._12_4_ * 0.007843138 + fVar15;
        pfVar7[8] = auVar19._0_4_ * 0.007843138 + fVar11;
        pfVar7[9] = auVar19._4_4_ * 0.007843138 + fVar13;
        pfVar7[0x10] = auVar18._8_4_ * 0.007843138 + fVar14;
        pfVar7[0x11] = auVar18._12_4_ * 0.007843138 + fVar15;
        pfVar7[0xc] = auVar18._0_4_ * 0.007843138 + fVar11;
        pfVar7[0xd] = auVar18._4_4_ * 0.007843138 + fVar13;
        pfVar7[4] = auVar17._8_4_ * 0.007843138 + fVar14;
        pfVar7[5] = auVar17._12_4_ * 0.007843138 + fVar15;
        *pfVar7 = auVar17._0_4_ * 0.007843138 + fVar11;
        pfVar7[1] = auVar17._4_4_ * 0.007843138 + fVar13;
        pfVar7[8] = auVar20._8_4_ * 0.007843138 + fVar14;
        pfVar7[9] = auVar20._12_4_ * 0.007843138 + fVar15;
        pfVar7[4] = auVar20._0_4_ * 0.007843138 + fVar11;
        pfVar7[5] = auVar20._4_4_ * 0.007843138 + fVar13;
        pauVar10 = pauVar10 + 1;
        pfVar7 = pfVar7 + 0x10;
      } while (uVar6 != 0);
      if (uVar4 == param_3) {
        return;
      }
      uVar6 = uVar4;
      if (((uint)param_3 >> 3 & 1) == 0) goto LAB_005c9d94;
    }
    uVar2 = _UNK_0024e4fc;
    auVar3 = _DAT_0024e210;
    uVar4 = param_3 & 0xfffffffffffffff8;
    auVar1._8_4_ = _UNK_0024e4f8;
    auVar1._0_8_ = _DAT_0024e4f0;
    lVar8 = uVar6 - uVar4;
    puVar9 = (ulong *)(*param_2 + uVar6);
    pfVar7 = param_1 + uVar6;
    do {
      auVar17._0_8_ = *puVar9;
      auVar17._8_8_ = 0;
      lVar8 = lVar8 + 8;
      auVar1._12_4_ = uVar2;
      auVar16 = a64_TBL(ZEXT816(0),auVar17,auVar1);
      auVar12 = a64_TBL(ZEXT816(0),auVar17,auVar3);
      auVar16 = NEON_ucvtf(auVar16,4);
      auVar12 = NEON_ucvtf(auVar12,4);
      pfVar7[4] = auVar12._8_4_ * 0.007843138 + fVar14;
      pfVar7[5] = auVar12._12_4_ * 0.007843138 + fVar15;
      *pfVar7 = auVar12._0_4_ * 0.007843138 + fVar11;
      pfVar7[1] = auVar12._4_4_ * 0.007843138 + fVar13;
      pfVar7[8] = auVar16._8_4_ * 0.007843138 + fVar14;
      pfVar7[9] = auVar16._12_4_ * 0.007843138 + fVar15;
      pfVar7[4] = auVar16._0_4_ * 0.007843138 + fVar11;
      pfVar7[5] = auVar16._4_4_ * 0.007843138 + fVar13;
      puVar9 = puVar9 + 1;
      pfVar7 = pfVar7 + 8;
    } while (lVar8 != 0);
    if (uVar4 == param_3) {
      return;
    }
  }
LAB_005c9d94:
  lVar8 = param_3 - uVar4;
  pbVar5 = *param_2 + uVar4;
  pfVar7 = param_1 + uVar4;
  do {
    lVar8 = lVar8 + -1;
    *pfVar7 = (float)*pbVar5 * 0.007843138 + -1.0;
    pbVar5 = pbVar5 + 1;
    pfVar7 = pfVar7 + 1;
  } while (lVar8 != 0);
  return;
}


// ===== 005c9ee4  ma_pcm_interleave_u8 =====

void ma_pcm_interleave_u8(undefined1 *param_1,long *param_2,ulong param_3,uint param_4)

{
  undefined1 *puVar1;
  size_t __n;
  ulong uVar2;
  undefined1 *puVar3;
  long *plVar4;
  ulong uVar5;
  void *__src;
  
  if (param_4 == 1) {
    if (param_3 != 0) {
      __src = (void *)*param_2;
      do {
        __n = param_3;
        if (0xfffffffe < param_3) {
          __n = 0xffffffff;
        }
        memcpy(param_1,__src,__n);
        param_3 = param_3 - __n;
        param_1 = param_1 + __n;
        __src = (void *)((long)__src + __n);
      } while (param_3 != 0);
    }
  }
  else if (param_4 == 2) {
    if (param_3 != 0) {
      uVar2 = 0;
      puVar3 = param_1 + 1;
      do {
        puVar3[-1] = *(undefined1 *)(*param_2 + uVar2);
        puVar1 = (undefined1 *)(param_2[1] + uVar2);
        uVar2 = uVar2 + 1;
        *puVar3 = *puVar1;
        puVar3 = puVar3 + 2;
      } while (param_3 != uVar2);
    }
  }
  else if (param_3 != 0) {
    uVar2 = 0;
    do {
      plVar4 = param_2;
      puVar3 = param_1;
      uVar5 = (ulong)param_4;
      if (param_4 != 0) {
        do {
          uVar5 = uVar5 - 1;
          *puVar3 = *(undefined1 *)(*plVar4 + uVar2);
          plVar4 = plVar4 + 1;
          puVar3 = puVar3 + 1;
        } while (uVar5 != 0);
      }
      uVar2 = uVar2 + 1;
      param_1 = param_1 + param_4;
    } while (uVar2 != param_3);
  }
  return;
}


// ===== 005c9fd8  ma_pcm_deinterleave_u8 =====

void ma_pcm_deinterleave_u8(long *param_1,undefined1 *param_2,long param_3,uint param_4)

{
  long lVar1;
  undefined1 *puVar2;
  long *plVar3;
  ulong uVar4;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      puVar2 = param_2;
      plVar3 = param_1;
      uVar4 = (ulong)param_4;
      if (param_4 != 0) {
        do {
          uVar4 = uVar4 - 1;
          *(undefined1 *)(*plVar3 + lVar1) = *puVar2;
          puVar2 = puVar2 + 1;
          plVar3 = plVar3 + 1;
        } while (uVar4 != 0);
      }
      lVar1 = lVar1 + 1;
      param_2 = param_2 + param_4;
    } while (lVar1 != param_3);
  }
  return;
}


// ===== 005ca024  ma_pcm_s16_to_s16 =====

void ma_pcm_s16_to_s16(void *param_1,void *param_2,long param_3)

{
  size_t __n;
  ulong uVar1;
  
  for (uVar1 = param_3 << 1; uVar1 != 0; uVar1 = uVar1 - __n) {
    __n = uVar1;
    if (0xfffffffe < uVar1) {
      __n = 0xffffffff;
    }
    memcpy(param_1,param_2,__n);
    param_1 = (void *)((long)param_1 + __n);
    param_2 = (void *)((long)param_2 + __n);
  }
  return;
}


// ===== 005ca088  ma_pcm_s16_to_s24 =====

void ma_pcm_s16_to_s24(undefined1 *param_1,undefined8 *param_2,ulong param_3)

{
  undefined1 *puVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  unkbyte9 Var4;
  unkbyte9 Var5;
  undefined1 *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if (param_3 == 0) {
    return;
  }
  if (7 < param_3) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_3 - 1;
    lVar8 = (param_3 - 1) * 3;
    uVar7 = 0;
    if ((((param_1 + 2 + lVar8 < param_1 + 2) || (param_1 + 1 + lVar8 < param_1 + 1)) ||
        (param_1 + lVar8 < param_1)) || (SUB168(auVar2 * ZEXT816(3),8) != 0)) goto LAB_005ca098;
    if (((undefined1 *)((long)param_2 + param_3 * 2) <= param_1) ||
       (param_1 + param_3 * 3 <= param_2)) {
      if (param_3 < 0x10) {
        uVar9 = 0;
      }
      else {
        uVar7 = param_3 & 0xfffffffffffffff0;
        puVar6 = param_1;
        puVar11 = param_2;
        uVar9 = uVar7;
        do {
          uVar13 = puVar11[1];
          uVar12 = *puVar11;
          uVar3 = puVar11[3];
          Var5 = *(unkbyte9 *)(puVar11 + 2);
          Var4 = *(unkbyte9 *)(puVar11 + 2);
          uVar9 = uVar9 - 0x10;
          *puVar6 = 0;
          puVar6[1] = (char)uVar12;
          puVar6[2] = (char)((ulong)uVar12 >> 8);
          puVar6[3] = 0;
          puVar6[4] = (char)((ulong)uVar12 >> 0x10);
          puVar6[5] = (char)((ulong)uVar12 >> 0x18);
          puVar6[6] = 0;
          puVar6[7] = (char)((ulong)uVar12 >> 0x20);
          puVar6[8] = (char)((ulong)uVar12 >> 0x28);
          puVar6[9] = 0;
          puVar6[10] = (char)((ulong)uVar12 >> 0x30);
          puVar6[0xb] = (char)((ulong)uVar12 >> 0x38);
          puVar6[0xc] = 0;
          puVar6[0xd] = (char)uVar13;
          puVar6[0xe] = (char)((ulong)uVar13 >> 8);
          puVar6[0xf] = 0;
          puVar6[0x10] = (char)((ulong)uVar13 >> 0x10);
          puVar6[0x11] = (char)((ulong)uVar13 >> 0x18);
          puVar6[0x12] = 0;
          puVar6[0x13] = (char)((ulong)uVar13 >> 0x20);
          puVar6[0x14] = (char)((ulong)uVar13 >> 0x28);
          puVar6[0x15] = 0;
          puVar6[0x16] = (char)((ulong)uVar13 >> 0x30);
          puVar6[0x17] = (char)((ulong)uVar13 >> 0x38);
          puVar6[0x18] = 0;
          puVar6[0x19] = (char)Var4;
          puVar6[0x1a] = (char)((unkuint9)Var5 >> 8);
          puVar6[0x1b] = 0;
          puVar6[0x1c] = (char)((unkuint9)Var4 >> 0x10);
          puVar6[0x1d] = (char)((unkuint9)Var5 >> 0x18);
          puVar6[0x1e] = 0;
          puVar6[0x1f] = (char)((unkuint9)Var4 >> 0x20);
          puVar6[0x20] = (char)((unkuint9)Var5 >> 0x28);
          puVar6[0x21] = 0;
          puVar6[0x22] = (char)((unkuint9)Var4 >> 0x30);
          puVar6[0x23] = (char)((unkuint9)Var5 >> 0x38);
          puVar6[0x24] = 0;
          puVar6[0x25] = (char)((unkuint9)Var4 >> 0x40);
          puVar6[0x26] = (char)((ulong)uVar3 >> 8);
          puVar6[0x27] = 0;
          puVar6[0x28] = (char)((ulong)uVar3 >> 0x10);
          puVar6[0x29] = (char)((ulong)uVar3 >> 0x18);
          puVar6[0x2a] = 0;
          puVar6[0x2b] = (char)((ulong)uVar3 >> 0x20);
          puVar6[0x2c] = (char)((ulong)uVar3 >> 0x28);
          puVar6[0x2d] = 0;
          puVar6[0x2e] = (char)((ulong)uVar3 >> 0x30);
          puVar6[0x2f] = (char)((ulong)uVar3 >> 0x38);
          puVar6 = puVar6 + 0x30;
          puVar11 = puVar11 + 4;
        } while (uVar9 != 0);
        if (uVar7 == param_3) {
          return;
        }
        uVar9 = uVar7;
        if (((uint)param_3 >> 3 & 1) == 0) goto LAB_005ca098;
      }
      uVar7 = param_3 & 0xfffffffffffffff8;
      puVar6 = param_1 + uVar9 * 3;
      lVar8 = uVar9 - uVar7;
      puVar11 = (undefined8 *)((long)param_2 + uVar9 * 2);
      do {
        uVar12 = puVar11[1];
        uVar3 = *puVar11;
        lVar8 = lVar8 + 8;
        *puVar6 = 0;
        puVar6[1] = (char)uVar3;
        puVar6[2] = (char)((ulong)uVar3 >> 8);
        puVar6[3] = 0;
        puVar6[4] = (char)((ulong)uVar3 >> 0x10);
        puVar6[5] = (char)((ulong)uVar3 >> 0x18);
        puVar6[6] = 0;
        puVar6[7] = (char)((ulong)uVar3 >> 0x20);
        puVar6[8] = (char)((ulong)uVar3 >> 0x28);
        puVar6[9] = 0;
        puVar6[10] = (char)((ulong)uVar3 >> 0x30);
        puVar6[0xb] = (char)((ulong)uVar3 >> 0x38);
        puVar6[0xc] = 0;
        puVar6[0xd] = (char)uVar12;
        puVar6[0xe] = (char)((ulong)uVar12 >> 8);
        puVar6[0xf] = 0;
        puVar6[0x10] = (char)((ulong)uVar12 >> 0x10);
        puVar6[0x11] = (char)((ulong)uVar12 >> 0x18);
        puVar6[0x12] = 0;
        puVar6[0x13] = (char)((ulong)uVar12 >> 0x20);
        puVar6[0x14] = (char)((ulong)uVar12 >> 0x28);
        puVar6[0x15] = 0;
        puVar6[0x16] = (char)((ulong)uVar12 >> 0x30);
        puVar6[0x17] = (char)((ulong)uVar12 >> 0x38);
        puVar6 = puVar6 + 0x18;
        puVar11 = puVar11 + 2;
      } while (lVar8 != 0);
      if (uVar7 == param_3) {
        return;
      }
      goto LAB_005ca098;
    }
  }
  uVar7 = 0;
LAB_005ca098:
  lVar8 = param_3 - uVar7;
  puVar6 = (undefined1 *)((long)param_2 + uVar7 * 2);
  puVar10 = param_1 + uVar7 * 3 + 2;
  do {
    puVar10[-2] = 0;
    lVar8 = lVar8 + -1;
    puVar10[-1] = *puVar6;
    puVar1 = puVar6 + 1;
    puVar6 = puVar6 + 2;
    *puVar10 = *puVar1;
    puVar10 = puVar10 + 3;
  } while (lVar8 != 0);
  return;
}


// ===== 005ca1cc  ma_pcm_s16_to_s32 =====

void ma_pcm_s16_to_s32(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 *puVar5;
  ushort *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (param_3 != 0) {
    if (param_3 < 0x10) {
      uVar1 = 0;
    }
    else {
      uVar1 = param_3 & 0xfffffffffffffff0;
      puVar5 = (undefined8 *)(param_2 + 0x10);
      puVar3 = (undefined8 *)(param_1 + 0x20);
      uVar7 = uVar1;
      do {
        uVar9 = puVar5[-1];
        uVar8 = puVar5[-2];
        uVar11 = puVar5[1];
        uVar10 = *puVar5;
        uVar7 = uVar7 - 0x10;
        puVar5 = puVar5 + 4;
        puVar3[-3] = CONCAT44((int)(short)((ulong)uVar8 >> 0x30) << 0x10,
                              (int)(short)((ulong)uVar8 >> 0x20) << 0x10);
        puVar3[-4] = CONCAT44((int)(short)((ulong)uVar8 >> 0x10) << 0x10,(int)(short)uVar8 << 0x10);
        puVar3[-1] = CONCAT44((int)(short)((ulong)uVar9 >> 0x30) << 0x10,
                              (int)(short)((ulong)uVar9 >> 0x20) << 0x10);
        puVar3[-2] = CONCAT44((int)(short)((ulong)uVar9 >> 0x10) << 0x10,(int)(short)uVar9 << 0x10);
        puVar3[1] = CONCAT44((int)(short)((ulong)uVar10 >> 0x30) << 0x10,
                             (int)(short)((ulong)uVar10 >> 0x20) << 0x10);
        *puVar3 = CONCAT44((int)(short)((ulong)uVar10 >> 0x10) << 0x10,(int)(short)uVar10 << 0x10);
        puVar3[3] = CONCAT44((int)(short)((ulong)uVar11 >> 0x30) << 0x10,
                             (int)(short)((ulong)uVar11 >> 0x20) << 0x10);
        puVar3[2] = CONCAT44((int)(short)((ulong)uVar11 >> 0x10) << 0x10,(int)(short)uVar11 << 0x10)
        ;
        puVar3 = puVar3 + 8;
      } while (uVar7 != 0);
      if (uVar1 == param_3) {
        return;
      }
    }
    lVar2 = param_3 - uVar1;
    piVar4 = (int *)(param_1 + uVar1 * 4);
    puVar6 = (ushort *)(param_2 + uVar1 * 2);
    do {
      lVar2 = lVar2 + -1;
      *piVar4 = (uint)*puVar6 << 0x10;
      piVar4 = piVar4 + 1;
      puVar6 = puVar6 + 1;
    } while (lVar2 != 0);
  }
  return;
}


// ===== 005ca244  ma_pcm_s16_to_f32 =====

void ma_pcm_s16_to_f32(long param_1,long param_2,ulong param_3)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  short sVar9;
  short *psVar10;
  short *psVar11;
  short *psVar12;
  short *psVar13;
  short *psVar14;
  short *psVar15;
  short *psVar16;
  ulong uVar17;
  long lVar18;
  float *pfVar19;
  short *psVar20;
  ulong uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  if (param_3 != 0) {
    if (param_3 < 0x10) {
      uVar17 = 0;
    }
    else {
      uVar17 = param_3 & 0xfffffffffffffff0;
      psVar20 = (short *)(param_2 + 0x10);
      pfVar19 = (float *)(param_1 + 0x20);
      uVar21 = uVar17;
      do {
        psVar1 = psVar20 + -8;
        psVar2 = psVar20 + -7;
        psVar3 = psVar20 + -6;
        psVar4 = psVar20 + -5;
        psVar5 = psVar20 + -4;
        psVar6 = psVar20 + -3;
        psVar7 = psVar20 + -2;
        psVar8 = psVar20 + -1;
        sVar9 = *psVar20;
        psVar10 = psVar20 + 1;
        psVar11 = psVar20 + 2;
        psVar12 = psVar20 + 3;
        psVar13 = psVar20 + 4;
        psVar14 = psVar20 + 5;
        psVar15 = psVar20 + 6;
        psVar16 = psVar20 + 7;
        uVar21 = uVar21 - 0x10;
        psVar20 = psVar20 + 0x10;
        auVar24._0_4_ = (int)*psVar5;
        auVar24._4_4_ = (int)*psVar6;
        auVar24._8_4_ = (int)*psVar7;
        auVar24._12_4_ = (int)*psVar8;
        auVar22._0_4_ = (int)*psVar1;
        auVar22._4_4_ = (int)*psVar2;
        auVar22._8_4_ = (int)*psVar3;
        auVar22._12_4_ = (int)*psVar4;
        auVar25._0_4_ = (int)*psVar13;
        auVar25._4_4_ = (int)*psVar14;
        auVar25._8_4_ = (int)*psVar15;
        auVar25._12_4_ = (int)*psVar16;
        auVar23._0_4_ = (int)sVar9;
        auVar23._4_4_ = (int)*psVar10;
        auVar23._8_4_ = (int)*psVar11;
        auVar23._12_4_ = (int)*psVar12;
        auVar24 = NEON_scvtf(auVar24,4);
        auVar22 = NEON_scvtf(auVar22,4);
        auVar25 = NEON_scvtf(auVar25,4);
        auVar23 = NEON_scvtf(auVar23,4);
        pfVar19[-4] = auVar22._8_4_ * 3.0517578e-05;
        pfVar19[-3] = auVar22._12_4_ * 3.0517578e-05;
        pfVar19[-8] = auVar22._0_4_ * 3.0517578e-05;
        pfVar19[-7] = auVar22._4_4_ * 3.0517578e-05;
        *pfVar19 = auVar24._8_4_ * 3.0517578e-05;
        pfVar19[1] = auVar24._12_4_ * 3.0517578e-05;
        pfVar19[-4] = auVar24._0_4_ * 3.0517578e-05;
        pfVar19[-3] = auVar24._4_4_ * 3.0517578e-05;
        pfVar19[4] = auVar23._8_4_ * 3.0517578e-05;
        pfVar19[5] = auVar23._12_4_ * 3.0517578e-05;
        *pfVar19 = auVar23._0_4_ * 3.0517578e-05;
        pfVar19[1] = auVar23._4_4_ * 3.0517578e-05;
        pfVar19[8] = auVar25._8_4_ * 3.0517578e-05;
        pfVar19[9] = auVar25._12_4_ * 3.0517578e-05;
        pfVar19[4] = auVar25._0_4_ * 3.0517578e-05;
        pfVar19[5] = auVar25._4_4_ * 3.0517578e-05;
        pfVar19 = pfVar19 + 0x10;
      } while (uVar21 != 0);
      if (uVar17 == param_3) {
        return;
      }
    }
    lVar18 = param_3 - uVar17;
    pfVar19 = (float *)(param_1 + uVar17 * 4);
    psVar20 = (short *)(param_2 + uVar17 * 2);
    do {
      lVar18 = lVar18 + -1;
      *pfVar19 = (float)(int)*psVar20 / 32768.0;
      pfVar19 = pfVar19 + 1;
      psVar20 = psVar20 + 1;
    } while (lVar18 != 0);
  }
  return;
}


// ===== 005ca2e0  ma_pcm_interleave_s16 =====

void ma_pcm_interleave_s16(undefined2 *param_1,long *param_2,long param_3,uint param_4)

{
  long lVar1;
  long *plVar2;
  undefined2 *puVar3;
  ulong uVar4;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      plVar2 = param_2;
      puVar3 = param_1;
      uVar4 = (ulong)param_4;
      if (param_4 != 0) {
        do {
          uVar4 = uVar4 - 1;
          *puVar3 = *(undefined2 *)(*plVar2 + lVar1 * 2);
          plVar2 = plVar2 + 1;
          puVar3 = puVar3 + 1;
        } while (uVar4 != 0);
      }
      lVar1 = lVar1 + 1;
      param_1 = param_1 + param_4;
    } while (lVar1 != param_3);
  }
  return;
}


// ===== 005ca330  ma_pcm_deinterleave_s16 =====

void ma_pcm_deinterleave_s16(long *param_1,undefined2 *param_2,long param_3,uint param_4)

{
  long lVar1;
  undefined2 *puVar2;
  long *plVar3;
  ulong uVar4;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      puVar2 = param_2;
      plVar3 = param_1;
      uVar4 = (ulong)param_4;
      if (param_4 != 0) {
        do {
          uVar4 = uVar4 - 1;
          *(undefined2 *)(*plVar3 + lVar1 * 2) = *puVar2;
          puVar2 = puVar2 + 1;
          plVar3 = plVar3 + 1;
        } while (uVar4 != 0);
      }
      lVar1 = lVar1 + 1;
      param_2 = param_2 + param_4;
    } while (lVar1 != param_3);
  }
  return;
}


// ===== 005ca380  ma_pcm_s24_to_s24 =====

void ma_pcm_s24_to_s24(void *param_1,void *param_2,long param_3)

{
  size_t __n;
  ulong uVar1;
  
  if (param_3 != 0) {
    uVar1 = param_3 * 3;
    do {
      __n = uVar1;
      if (0xfffffffe < uVar1) {
        __n = 0xffffffff;
      }
      memcpy(param_1,param_2,__n);
      uVar1 = uVar1 - __n;
      param_1 = (void *)((long)param_1 + __n);
      param_2 = (void *)((long)param_2 + __n);
    } while (uVar1 != 0);
  }
  return;
}


// ===== 005ca3e4  ma_pcm_s24_to_s32 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ma_pcm_s24_to_s32(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                      undefined1 param_4 [16],undefined1 param_5 [16],undefined1 *param_6,
                      undefined1 *param_7,ulong param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [13];
  undefined1 *puVar5;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  uint *puVar17;
  byte *pbVar18;
  ulong *puVar19;
  undefined1 auVar20 [16];
  undefined1 uVar21;
  undefined1 uVar22;
  byte bVar23;
  byte bVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  
  auVar36 = _DAT_0024e4f0;
  auVar3 = _DAT_0024e3a0;
  uVar21 = UNK_0024e218;
  auVar2 = _DAT_0024de80;
  bVar28 = param_4[0xf];
  bVar27 = param_4[0xe];
  uVar26 = param_4[0xd];
  uVar25 = param_4[0xc];
  bVar24 = param_4[0xb];
  bVar23 = param_4[10];
  uVar22 = param_4[9];
  if (param_8 == 0) {
    return;
  }
  if ((param_8 < 8) || ((param_6 < param_7 + param_8 * 3 && (param_7 < param_6 + param_8 * 4)))) {
    uVar14 = 0;
  }
  else {
    if (param_8 < 0x10) {
      uVar16 = 0;
      auVar36 = param_3;
      uVar21 = param_4[8];
    }
    else {
      uVar14 = param_8 & 0xfffffffffffffff0;
      uVar22 = (undefined1)_UNK_0024e219;
      bVar23 = (byte)((uint7)_UNK_0024e219 >> 8);
      bVar24 = (byte)((uint7)_UNK_0024e219 >> 0x10);
      uVar25 = (undefined1)((uint7)_UNK_0024e219 >> 0x18);
      uVar26 = (undefined1)((uint7)_UNK_0024e219 >> 0x20);
      bVar27 = (byte)((uint7)_UNK_0024e219 >> 0x28);
      bVar28 = (byte)((uint7)_UNK_0024e219 >> 0x30);
      auVar32[8] = UNK_0024e218;
      auVar32._0_8_ = _DAT_0024e210;
      auVar20[8] = UNK_0024e218;
      auVar20._0_8_ = _DAT_0024e210;
      auVar1[8] = UNK_0024e218;
      auVar1._0_8_ = _DAT_0024e210;
      puVar13 = param_7;
      puVar5 = param_6;
      uVar16 = uVar14;
      do {
        auVar33[0] = *puVar13;
        auVar34[0] = puVar13[1];
        auVar38[0] = puVar13[2];
        auVar33[1] = puVar13[3];
        auVar34[1] = puVar13[4];
        auVar38[1] = puVar13[5];
        auVar33[2] = puVar13[6];
        auVar34[2] = puVar13[7];
        auVar38[2] = puVar13[8];
        auVar33[3] = puVar13[9];
        auVar34[3] = puVar13[10];
        auVar38[3] = puVar13[0xb];
        auVar33[4] = puVar13[0xc];
        auVar34[4] = puVar13[0xd];
        auVar38[4] = puVar13[0xe];
        auVar33[5] = puVar13[0xf];
        auVar34[5] = puVar13[0x10];
        auVar38[5] = puVar13[0x11];
        auVar33[6] = puVar13[0x12];
        auVar34[6] = puVar13[0x13];
        auVar38[6] = puVar13[0x14];
        auVar33[7] = puVar13[0x15];
        auVar34[7] = puVar13[0x16];
        auVar38[7] = puVar13[0x17];
        auVar33[8] = puVar13[0x18];
        auVar34[8] = puVar13[0x19];
        auVar38[8] = puVar13[0x1a];
        auVar33[9] = puVar13[0x1b];
        auVar34[9] = puVar13[0x1c];
        auVar38[9] = puVar13[0x1d];
        auVar33[10] = puVar13[0x1e];
        auVar34[10] = puVar13[0x1f];
        auVar38[10] = puVar13[0x20];
        auVar33[0xb] = puVar13[0x21];
        auVar34[0xb] = puVar13[0x22];
        auVar38[0xb] = puVar13[0x23];
        auVar33[0xc] = puVar13[0x24];
        auVar34[0xc] = puVar13[0x25];
        auVar38[0xc] = puVar13[0x26];
        auVar33[0xd] = puVar13[0x27];
        auVar34[0xd] = puVar13[0x28];
        auVar38[0xd] = puVar13[0x29];
        auVar33[0xe] = puVar13[0x2a];
        auVar34[0xe] = puVar13[0x2b];
        auVar38[0xe] = puVar13[0x2c];
        auVar33[0xf] = puVar13[0x2d];
        auVar34[0xf] = puVar13[0x2e];
        auVar38[0xf] = puVar13[0x2f];
        puVar13 = puVar13 + 0x30;
        uVar16 = uVar16 - 0x10;
        auVar35 = a64_TBL(ZEXT816(0),auVar33,auVar2);
        auVar37 = a64_TBL(ZEXT816(0),auVar34,auVar2);
        auVar39 = a64_TBL(ZEXT816(0),auVar33,auVar3);
        auVar40 = a64_TBL(ZEXT816(0),auVar33,auVar36);
        auVar41 = a64_TBL(ZEXT816(0),auVar34,auVar3);
        auVar1[9] = uVar22;
        auVar1[10] = bVar23;
        auVar1[0xb] = bVar24;
        auVar1[0xc] = uVar25;
        auVar1[0xd] = uVar26;
        auVar1[0xe] = bVar27;
        auVar1[0xf] = bVar28;
        auVar42 = a64_TBL(ZEXT816(0),auVar33,auVar1);
        auVar43 = a64_TBL(ZEXT816(0),auVar34,auVar36);
        auVar20[9] = uVar22;
        auVar20[10] = bVar23;
        auVar20[0xb] = bVar24;
        auVar20[0xc] = uVar25;
        auVar20[0xd] = uVar26;
        auVar20[0xe] = bVar27;
        auVar20[0xf] = bVar28;
        auVar34 = a64_TBL(ZEXT816(0),auVar34,auVar20);
        auVar44 = a64_TBL(ZEXT816(0),auVar38,auVar2);
        auVar32[9] = uVar22;
        auVar32[10] = bVar23;
        auVar32[0xb] = bVar24;
        auVar32[0xc] = uVar25;
        auVar32[0xd] = uVar26;
        auVar32[0xe] = bVar27;
        auVar32[0xf] = bVar28;
        auVar45 = a64_TBL(ZEXT816(0),auVar38,auVar32);
        auVar46 = a64_TBL(ZEXT816(0),auVar38,auVar3);
        auVar33 = a64_TBL(ZEXT816(0),auVar38,auVar36);
        param_5._0_8_ =
             CONCAT17(auVar43[5] | auVar40[6] | auVar33[4],
                      CONCAT16(auVar43[4] | auVar40[5],
                               CONCAT15(auVar40[4],
                                        (uint5)CONCAT12(auVar43[1] | auVar40[2] | auVar33[0],
                                                        CONCAT11(auVar43[0] | auVar40[1],auVar40[0])
                                                       ) << 8)));
        param_5[8] = 0;
        param_5[9] = auVar40[8];
        param_5[10] = auVar43[8] | auVar40[9];
        param_5[0xb] = auVar43[9] | auVar40[10] | auVar33[8];
        param_5[0xc] = 0;
        param_5[0xd] = auVar40[0xc];
        param_5[0xe] = auVar43[0xc] | auVar40[0xd];
        param_5[0xf] = auVar43[0xd] | auVar40[0xe] | auVar33[0xc];
        puVar5[0x30] = 0;
        puVar5[0x31] = auVar39[8];
        puVar5[0x32] = auVar41[8] | auVar39[9];
        puVar5[0x33] = auVar41[9] | auVar39[10] | auVar46[8];
        puVar5[0x34] = 0;
        puVar5[0x35] = auVar39[0xc];
        puVar5[0x36] = auVar41[0xc] | auVar39[0xd];
        puVar5[0x37] = auVar41[0xd] | auVar39[0xe] | auVar46[0xc];
        puVar5[0x20] = 0;
        puVar5[0x21] = auVar39[0];
        puVar5[0x22] = auVar41[0] | auVar39[1];
        puVar5[0x23] = auVar41[1] | auVar39[2] | auVar46[0];
        puVar5[0x24] = 0;
        puVar5[0x25] = auVar39[4];
        puVar5[0x26] = auVar41[4] | auVar39[5];
        puVar5[0x27] = auVar41[5] | auVar39[6] | auVar46[4];
        puVar5[0x40] = 0;
        puVar5[0x41] = auVar35[8];
        puVar5[0x42] = auVar37[8] | auVar35[9];
        puVar5[0x43] = auVar37[9] | auVar35[10] | auVar44[8];
        puVar5[0x44] = 0;
        puVar5[0x45] = auVar35[0xc];
        puVar5[0x46] = auVar37[0xc] | auVar35[0xd];
        puVar5[0x47] = auVar37[0xd] | auVar35[0xe] | auVar44[0xc];
        puVar5[0x30] = 0;
        puVar5[0x31] = auVar35[0];
        puVar5[0x32] = auVar37[0] | auVar35[1];
        puVar5[0x33] = auVar37[1] | auVar35[2] | auVar44[0];
        puVar5[0x34] = 0;
        puVar5[0x35] = auVar35[4];
        puVar5[0x36] = auVar37[4] | auVar35[5];
        puVar5[0x37] = auVar37[5] | auVar35[6] | auVar44[4];
        puVar5[0x10] = 0;
        puVar5[0x11] = auVar42[8];
        puVar5[0x12] = auVar34[8] | auVar42[9];
        puVar5[0x13] = auVar34[9] | auVar42[10] | auVar45[8];
        puVar5[0x14] = 0;
        puVar5[0x15] = auVar42[0xc];
        puVar5[0x16] = auVar34[0xc] | auVar42[0xd];
        puVar5[0x17] = auVar34[0xd] | auVar42[0xe] | auVar45[0xc];
        *puVar5 = 0;
        puVar5[1] = auVar42[0];
        puVar5[2] = auVar34[0] | auVar42[1];
        puVar5[3] = auVar34[1] | auVar42[2] | auVar45[0];
        puVar5[4] = 0;
        puVar5[5] = auVar42[4];
        puVar5[6] = auVar34[4] | auVar42[5];
        puVar5[7] = auVar34[5] | auVar42[6] | auVar45[4];
        *(long *)(puVar5 + 0x18) = param_5._8_8_;
        *(ulong *)(puVar5 + 0x10) = param_5._0_8_;
        puVar5 = puVar5 + 0x40;
      } while (uVar16 != 0);
      if (uVar14 == param_8) {
        return;
      }
      uVar16 = uVar14;
      if (((uint)param_8 >> 3 & 1) == 0) goto LAB_005ca410;
    }
    auVar1 = _DAT_0024e4f0;
    uVar14 = param_8 & 0xfffffffffffffff8;
    auVar35[8] = UNK_0024e218;
    auVar35._0_8_ = _DAT_0024e210;
    auVar35._9_7_ = _UNK_0024e219;
    auVar3[8] = UNK_0024e218;
    auVar3._0_8_ = _DAT_0024e210;
    auVar3._9_7_ = _UNK_0024e219;
    auVar2[8] = UNK_0024e218;
    auVar2._0_8_ = _DAT_0024e210;
    auVar2._9_7_ = _UNK_0024e219;
    lVar15 = uVar16 - uVar14;
    puVar13 = param_7 + uVar16 * 3;
    puVar19 = (ulong *)(param_6 + uVar16 * 4);
    do {
      auVar40[0] = *puVar13;
      puVar5 = puVar13 + 1;
      auVar41[0] = puVar13[2];
      auVar40[1] = puVar13[3];
      puVar6 = puVar13 + 4;
      auVar41[1] = puVar13[5];
      auVar40[2] = puVar13[6];
      puVar7 = puVar13 + 7;
      auVar41[2] = puVar13[8];
      auVar40[3] = puVar13[9];
      puVar8 = puVar13 + 10;
      auVar41[3] = puVar13[0xb];
      auVar40[4] = puVar13[0xc];
      puVar9 = puVar13 + 0xd;
      auVar41[4] = puVar13[0xe];
      auVar40[5] = puVar13[0xf];
      puVar10 = puVar13 + 0x10;
      auVar41[5] = puVar13[0x11];
      auVar40[6] = puVar13[0x12];
      puVar11 = puVar13 + 0x13;
      auVar41[6] = puVar13[0x14];
      auVar40._8_8_ = auVar36._8_8_;
      auVar40[7] = puVar13[0x15];
      puVar12 = puVar13 + 0x16;
      auVar41._8_8_ = param_5._8_8_;
      auVar41[7] = puVar13[0x17];
      puVar13 = puVar13 + 0x18;
      lVar15 = lVar15 + 8;
      auVar32 = a64_TBL(ZEXT816(0),auVar40,auVar1);
      auVar37[1] = *puVar6;
      auVar37[0] = *puVar5;
      auVar37[2] = *puVar7;
      auVar37[3] = *puVar8;
      auVar37[4] = *puVar9;
      auVar37[5] = *puVar10;
      auVar37[6] = *puVar11;
      auVar37[7] = *puVar12;
      auVar37[8] = uVar21;
      auVar37[9] = uVar22;
      auVar37[10] = bVar23;
      auVar37[0xb] = bVar24;
      auVar37[0xc] = uVar25;
      auVar37[0xd] = uVar26;
      auVar37[0xe] = bVar27;
      auVar37[0xf] = bVar28;
      auVar33 = a64_TBL(ZEXT816(0),auVar37,auVar1);
      auVar34 = a64_TBL(ZEXT816(0),auVar40,auVar2);
      auVar39[1] = *puVar6;
      auVar39[0] = *puVar5;
      auVar39[2] = *puVar7;
      auVar39[3] = *puVar8;
      auVar39[4] = *puVar9;
      auVar39[5] = *puVar10;
      auVar39[6] = *puVar11;
      auVar39[7] = *puVar12;
      auVar39[8] = uVar21;
      auVar39[9] = uVar22;
      auVar39[10] = bVar23;
      auVar39[0xb] = bVar24;
      auVar39[0xc] = uVar25;
      auVar39[0xd] = uVar26;
      auVar39[0xe] = bVar27;
      auVar39[0xf] = bVar28;
      auVar36 = a64_TBL(ZEXT816(0),auVar39,auVar3);
      auVar38 = a64_TBL(ZEXT816(0),auVar41,auVar1);
      auVar20 = a64_TBL(ZEXT816(0),auVar41,auVar35);
      uVar22 = auVar32[8];
      uVar26 = auVar32[0xc];
      bVar23 = auVar33[8] | auVar32[9];
      bVar27 = auVar33[0xc] | auVar32[0xd];
      bVar29 = auVar36[5] | auVar34[6];
      auVar4[1] = 0;
      auVar4[0] = bVar29;
      auVar4[2] = auVar34[8];
      bVar30 = auVar36[8] | auVar34[9];
      auVar4[3] = bVar30;
      bVar31 = auVar36[9] | auVar34[10];
      auVar4[4] = bVar31;
      auVar4._5_8_ = 0;
      param_5._0_13_ = auVar4 << 0x38;
      param_5[0xd] = auVar34[0xc];
      param_5[0xe] = auVar36[0xc] | auVar34[0xd];
      param_5[0xf] = auVar36[0xd] | auVar34[0xe];
      uVar21 = 0;
      bVar24 = auVar33[9] | auVar32[10] | auVar38[8];
      uVar25 = 0;
      bVar28 = auVar33[0xd] | auVar32[0xe] | auVar38[0xc];
      auVar36._0_8_ =
           CONCAT17(bVar29 | auVar20[4],
                    CONCAT16(auVar36[4] | auVar34[5],
                             CONCAT15(auVar34[4],
                                      (uint5)CONCAT12(auVar36[1] | auVar34[2] | auVar20[0],
                                                      CONCAT11(auVar36[0] | auVar34[1],auVar34[0]))
                                      << 8)));
      auVar36[8] = 0;
      auVar36[9] = auVar34[8];
      auVar36[10] = bVar30;
      auVar36[0xb] = bVar31 | auVar20[8];
      auVar36[0xc] = 0;
      auVar36[0xd] = auVar34[0xc];
      auVar36[0xe] = param_5[0xe];
      auVar36[0xf] = param_5[0xf] | auVar20[0xc];
      puVar19[1] = auVar36._8_8_;
      *puVar19 = auVar36._0_8_;
      puVar19[3] = CONCAT17(bVar28,CONCAT16(bVar27,CONCAT15(uVar26,(uint5)CONCAT12(bVar24,CONCAT11(
                                                  bVar23,uVar22)) << 8)));
      puVar19[2] = CONCAT17(auVar33[5] | auVar32[6] | auVar38[4],
                            CONCAT16(auVar33[4] | auVar32[5],
                                     CONCAT15(auVar32[4],
                                              (uint5)CONCAT12(auVar33[1] | auVar32[2] | auVar38[0],
                                                              CONCAT11(auVar33[0] | auVar32[1],
                                                                       auVar32[0])) << 8)));
      puVar19 = puVar19 + 4;
    } while (lVar15 != 0);
    if (uVar14 == param_8) {
      return;
    }
  }
LAB_005ca410:
  lVar15 = param_8 - uVar14;
  puVar17 = (uint *)(param_6 + uVar14 * 4);
  pbVar18 = param_7 + uVar14 * 3 + 2;
  do {
    lVar15 = lVar15 + -1;
    *puVar17 = (uint)pbVar18[-2] << 8 | (uint)pbVar18[-1] << 0x10 | (uint)*pbVar18 << 0x18;
    puVar17 = puVar17 + 1;
    pbVar18 = pbVar18 + 3;
  } while (lVar15 != 0);
  return;
}


// ===== 005ca5a8  ma_pcm_s24_to_f32 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ma_pcm_s24_to_f32(undefined8 *param_1,undefined1 *param_2,ulong param_3)

{
  undefined1 auVar1 [13];
  uint3 uVar2;
  uint3 uVar3;
  uint3 uVar4;
  uint3 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  float *pfVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  undefined1 auVar15 [12];
  undefined1 in_q3 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [12];
  undefined1 in_q4 [16];
  byte bVar22;
  undefined1 auVar18 [12];
  byte bVar20;
  byte bVar21;
  undefined1 in_q5 [16];
  undefined1 auVar19 [16];
  undefined1 auVar23 [12];
  undefined1 auVar24 [16];
  undefined1 auVar26 [12];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar30 [12];
  undefined1 auVar31 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar25 [16];
  undefined1 auVar29 [16];
  undefined1 auVar32 [16];
  
  auVar7 = _DAT_0024e4f0;
  auVar24 = _DAT_0024e3a0;
  auVar6 = _DAT_0024e210;
  auVar16 = _DAT_0024de80;
  if (param_3 == 0) {
    return;
  }
  if ((param_3 < 8) ||
     ((param_1 < param_2 + param_3 * 3 && (param_2 < (undefined1 *)((long)param_1 + param_3 * 4)))))
  {
    uVar9 = 0;
  }
  else {
    if (param_3 < 0x10) {
      uVar11 = 0;
      auVar24 = in_q3;
      auVar16 = in_q4;
    }
    else {
      uVar9 = param_3 & 0xfffffffffffffff0;
      puVar8 = param_2;
      puVar14 = param_1;
      uVar11 = uVar9;
      do {
        auVar27[0] = *puVar8;
        auVar35[0] = puVar8[1];
        auVar28[0] = puVar8[2];
        auVar27[1] = puVar8[3];
        auVar35[1] = puVar8[4];
        auVar28[1] = puVar8[5];
        auVar27[2] = puVar8[6];
        auVar35[2] = puVar8[7];
        auVar28[2] = puVar8[8];
        auVar27[3] = puVar8[9];
        auVar35[3] = puVar8[10];
        auVar28[3] = puVar8[0xb];
        auVar27[4] = puVar8[0xc];
        auVar35[4] = puVar8[0xd];
        auVar28[4] = puVar8[0xe];
        auVar27[5] = puVar8[0xf];
        auVar35[5] = puVar8[0x10];
        auVar28[5] = puVar8[0x11];
        auVar27[6] = puVar8[0x12];
        auVar35[6] = puVar8[0x13];
        auVar28[6] = puVar8[0x14];
        auVar27[7] = puVar8[0x15];
        auVar35[7] = puVar8[0x16];
        auVar28[7] = puVar8[0x17];
        auVar27[8] = puVar8[0x18];
        auVar35[8] = puVar8[0x19];
        auVar28[8] = puVar8[0x1a];
        auVar27[9] = puVar8[0x1b];
        auVar35[9] = puVar8[0x1c];
        auVar28[9] = puVar8[0x1d];
        auVar27[10] = puVar8[0x1e];
        auVar35[10] = puVar8[0x1f];
        auVar28[10] = puVar8[0x20];
        auVar27[0xb] = puVar8[0x21];
        auVar35[0xb] = puVar8[0x22];
        auVar28[0xb] = puVar8[0x23];
        auVar27[0xc] = puVar8[0x24];
        auVar35[0xc] = puVar8[0x25];
        auVar28[0xc] = puVar8[0x26];
        auVar27[0xd] = puVar8[0x27];
        auVar35[0xd] = puVar8[0x28];
        auVar28[0xd] = puVar8[0x29];
        auVar27[0xe] = puVar8[0x2a];
        auVar35[0xe] = puVar8[0x2b];
        auVar28[0xe] = puVar8[0x2c];
        auVar27[0xf] = puVar8[0x2d];
        auVar35[0xf] = puVar8[0x2e];
        auVar28[0xf] = puVar8[0x2f];
        puVar8 = puVar8 + 0x30;
        uVar11 = uVar11 - 0x10;
        auVar33 = a64_TBL(ZEXT816(0),auVar27,auVar16);
        auVar34 = a64_TBL(ZEXT816(0),auVar35,auVar16);
        auVar36 = a64_TBL(ZEXT816(0),auVar27,auVar6);
        auVar37 = a64_TBL(ZEXT816(0),auVar27,auVar24);
        auVar38 = a64_TBL(ZEXT816(0),auVar35,auVar24);
        auVar39 = a64_TBL(ZEXT816(0),auVar27,auVar7);
        auVar40 = a64_TBL(ZEXT816(0),auVar35,auVar6);
        auVar35 = a64_TBL(ZEXT816(0),auVar35,auVar7);
        auVar41 = a64_TBL(ZEXT816(0),auVar28,auVar16);
        auVar42 = a64_TBL(ZEXT816(0),auVar28,auVar24);
        auVar43 = a64_TBL(ZEXT816(0),auVar28,auVar7);
        auVar27 = a64_TBL(ZEXT816(0),auVar28,auVar6);
        auVar30[9] = auVar33[8];
        auVar30[10] = auVar34[8] | auVar33[9];
        auVar32[0xd] = auVar33[0xc];
        auVar32[0xe] = auVar34[0xc] | auVar33[0xd];
        auVar23[9] = auVar37[8];
        auVar23[10] = auVar38[8] | auVar37[9];
        auVar25[0xd] = auVar37[0xc];
        auVar25[0xe] = auVar38[0xc] | auVar37[0xd];
        uVar2 = CONCAT12(auVar34[5] | auVar33[6] | auVar41[4],
                         CONCAT11(auVar34[4] | auVar33[5],auVar33[4]));
        auVar30._0_9_ = (unkuint9)uVar2 << 0x28;
        auVar30[0xb] = auVar34[9] | auVar33[10] | auVar41[8];
        auVar32[0xc] = 0;
        auVar32._0_12_ = auVar30;
        auVar32[0xf] = auVar34[0xd] | auVar33[0xe] | auVar41[0xc];
        uVar3 = CONCAT12(auVar38[5] | auVar37[6] | auVar42[4],
                         CONCAT11(auVar38[4] | auVar37[5],auVar37[4]));
        auVar23._0_9_ = (unkuint9)uVar3 << 0x28;
        auVar23[0xb] = auVar38[9] | auVar37[10] | auVar42[8];
        auVar25[0xc] = 0;
        auVar25._0_12_ = auVar23;
        auVar25[0xf] = auVar38[0xd] | auVar37[0xe] | auVar42[0xc];
        uVar4 = CONCAT12(auVar40[5] | auVar36[6] | auVar27[4],
                         CONCAT11(auVar40[4] | auVar36[5],auVar36[4]));
        auVar18._0_9_ = (unkuint9)uVar4 << 0x28;
        auVar18[9] = auVar36[8];
        auVar18[10] = auVar40[8] | auVar36[9];
        auVar18[0xb] = auVar40[9] | auVar36[10] | auVar27[8];
        auVar31[0xc] = 0;
        auVar31._0_12_ = auVar18;
        auVar31[0xd] = auVar36[0xc];
        auVar31[0xe] = auVar40[0xc] | auVar36[0xd];
        auVar31[0xf] = auVar40[0xd] | auVar36[0xe] | auVar27[0xc];
        uVar5 = CONCAT12(auVar35[5] | auVar39[6] | auVar43[4],
                         CONCAT11(auVar35[4] | auVar39[5],auVar39[4]));
        auVar26._0_9_ = (unkuint9)uVar5 << 0x28;
        auVar26[9] = auVar39[8];
        auVar26[10] = auVar35[8] | auVar39[9];
        auVar26[0xb] = auVar35[9] | auVar39[10] | auVar43[8];
        auVar29[0xc] = 0;
        auVar29._0_12_ = auVar26;
        auVar29[0xd] = auVar39[0xc];
        auVar29[0xe] = auVar35[0xc] | auVar39[0xd];
        auVar29[0xf] = auVar35[0xd] | auVar39[0xe] | auVar43[0xc];
        auVar41._0_4_ =
             (int)CONCAT12(auVar34[1] | auVar33[2] | auVar41[0],
                           CONCAT11(auVar34[0] | auVar33[1],auVar33[0]));
        auVar41._4_4_ = (int)((long)((ulong)uVar2 << 0x28) >> 0x28);
        auVar41._8_4_ = auVar30._8_4_ >> 8;
        auVar41._12_4_ = auVar32._12_4_ >> 8;
        auVar34._0_4_ =
             (int)CONCAT12(auVar38[1] | auVar37[2] | auVar42[0],
                           CONCAT11(auVar38[0] | auVar37[1],auVar37[0]));
        auVar34._4_4_ = (int)((long)((ulong)uVar3 << 0x28) >> 0x28);
        auVar34._8_4_ = auVar23._8_4_ >> 8;
        auVar34._12_4_ = auVar25._12_4_ >> 8;
        auVar33._0_4_ =
             (int)CONCAT12(auVar40[1] | auVar36[2] | auVar27[0],
                           CONCAT11(auVar40[0] | auVar36[1],auVar36[0]));
        auVar33._4_4_ = (int)((long)((ulong)uVar4 << 0x28) >> 0x28);
        auVar33._8_4_ = auVar18._8_4_ >> 8;
        auVar33._12_4_ = auVar31._12_4_ >> 8;
        auVar36._0_4_ =
             (int)CONCAT12(auVar35[1] | auVar39[2] | auVar43[0],
                           CONCAT11(auVar35[0] | auVar39[1],auVar39[0]));
        auVar36._4_4_ = (int)((long)((ulong)uVar5 << 0x28) >> 0x28);
        auVar36._8_4_ = auVar26._8_4_ >> 8;
        auVar36._12_4_ = auVar29._12_4_ >> 8;
        auVar35 = NEON_scvtf(auVar41,4);
        auVar31 = NEON_scvtf(auVar34,4);
        auVar27 = NEON_scvtf(auVar33,4);
        auVar33 = NEON_scvtf(auVar36,4);
        in_q5._0_8_ = CONCAT44(auVar27._4_4_ * 1.1920929e-07,auVar27._0_4_ * 1.1920929e-07);
        in_q5._8_4_ = auVar27._8_4_ * 1.1920929e-07;
        in_q5._12_4_ = auVar27._12_4_ * 1.1920929e-07;
        *(float *)(puVar14 + 6) = auVar31._8_4_ * 1.1920929e-07;
        *(float *)((long)puVar14 + 0x34) = auVar31._12_4_ * 1.1920929e-07;
        *(float *)(puVar14 + 4) = auVar31._0_4_ * 1.1920929e-07;
        *(float *)((long)puVar14 + 0x24) = auVar31._4_4_ * 1.1920929e-07;
        *(float *)(puVar14 + 8) = auVar35._8_4_ * 1.1920929e-07;
        *(float *)((long)puVar14 + 0x44) = auVar35._12_4_ * 1.1920929e-07;
        *(float *)(puVar14 + 6) = auVar35._0_4_ * 1.1920929e-07;
        *(float *)((long)puVar14 + 0x34) = auVar35._4_4_ * 1.1920929e-07;
        puVar14[1] = in_q5._8_8_;
        *puVar14 = in_q5._0_8_;
        *(float *)(puVar14 + 4) = auVar33._8_4_ * 1.1920929e-07;
        *(float *)((long)puVar14 + 0x24) = auVar33._12_4_ * 1.1920929e-07;
        *(float *)(puVar14 + 2) = auVar33._0_4_ * 1.1920929e-07;
        *(float *)((long)puVar14 + 0x14) = auVar33._4_4_ * 1.1920929e-07;
        puVar14 = puVar14 + 8;
      } while (uVar11 != 0);
      if (uVar9 == param_3) {
        return;
      }
      uVar11 = uVar9;
      if (((uint)param_3 >> 3 & 1) == 0) goto LAB_005ca5d4;
    }
    auVar7 = _DAT_0024e4f0;
    auVar6 = _DAT_0024e210;
    uVar9 = param_3 & 0xfffffffffffffff8;
    lVar10 = uVar11 - uVar9;
    puVar8 = param_2 + uVar11 * 3;
    puVar14 = (undefined8 *)((long)param_1 + uVar11 * 4);
    do {
      auVar37[0] = *puVar8;
      auVar40[0] = puVar8[1];
      auVar19[0] = puVar8[2];
      auVar37[1] = puVar8[3];
      auVar40[1] = puVar8[4];
      auVar19[1] = puVar8[5];
      auVar37[2] = puVar8[6];
      auVar40[2] = puVar8[7];
      auVar19[2] = puVar8[8];
      auVar37[3] = puVar8[9];
      auVar40[3] = puVar8[10];
      auVar19[3] = puVar8[0xb];
      auVar37[4] = puVar8[0xc];
      auVar40[4] = puVar8[0xd];
      auVar19[4] = puVar8[0xe];
      auVar37[5] = puVar8[0xf];
      auVar40[5] = puVar8[0x10];
      auVar19[5] = puVar8[0x11];
      auVar37[6] = puVar8[0x12];
      auVar40[6] = puVar8[0x13];
      auVar19[6] = puVar8[0x14];
      auVar37._8_8_ = auVar24._8_8_;
      auVar37[7] = puVar8[0x15];
      auVar40._8_8_ = auVar16._8_8_;
      auVar40[7] = puVar8[0x16];
      auVar19._8_8_ = in_q5._8_8_;
      auVar19[7] = puVar8[0x17];
      puVar8 = puVar8 + 0x18;
      lVar10 = lVar10 + 8;
      auVar24 = a64_TBL(ZEXT816(0),auVar37,auVar7);
      auVar27 = a64_TBL(ZEXT816(0),auVar40,auVar7);
      auVar31 = a64_TBL(ZEXT816(0),auVar37,auVar6);
      auVar33 = a64_TBL(ZEXT816(0),auVar40,auVar6);
      auVar35 = a64_TBL(ZEXT816(0),auVar19,auVar7);
      auVar16 = a64_TBL(ZEXT816(0),auVar19,auVar6);
      auVar17[9] = auVar24[8];
      auVar17[10] = auVar27[8] | auVar24[9];
      auVar42[0xd] = auVar24[0xc];
      auVar42[0xe] = auVar27[0xc] | auVar24[0xd];
      bVar20 = auVar33[5] | auVar31[6];
      auVar1[1] = 0;
      auVar1[0] = bVar20;
      auVar1[2] = auVar31[8];
      bVar21 = auVar33[8] | auVar31[9];
      auVar1[3] = bVar21;
      bVar22 = auVar33[9] | auVar31[10];
      auVar1[4] = bVar22;
      auVar1._5_8_ = 0;
      in_q5._0_13_ = auVar1 << 0x38;
      in_q5[0xd] = auVar31[0xc];
      in_q5[0xe] = auVar33[0xc] | auVar31[0xd];
      in_q5[0xf] = auVar33[0xd] | auVar31[0xe];
      uVar2 = CONCAT12(auVar27[5] | auVar24[6] | auVar35[4],
                       CONCAT11(auVar27[4] | auVar24[5],auVar24[4]));
      auVar17._0_9_ = (unkuint9)uVar2 << 0x28;
      auVar17[0xb] = auVar27[9] | auVar24[10] | auVar35[8];
      auVar42[0xc] = 0;
      auVar42._0_12_ = auVar17;
      auVar42[0xf] = auVar27[0xd] | auVar24[0xe] | auVar35[0xc];
      uVar3 = CONCAT12(bVar20 | auVar16[4],CONCAT11(auVar33[4] | auVar31[5],auVar31[4]));
      auVar15._0_9_ = (unkuint9)uVar3 << 0x28;
      auVar15[9] = auVar31[8];
      auVar15[10] = bVar21;
      auVar15[0xb] = bVar22 | auVar16[8];
      auVar38[0xc] = 0;
      auVar38._0_12_ = auVar15;
      auVar38[0xd] = auVar31[0xc];
      auVar38[0xe] = in_q5[0xe];
      auVar38[0xf] = in_q5[0xf] | auVar16[0xc];
      auVar43._0_4_ =
           (int)CONCAT12(auVar27[1] | auVar24[2] | auVar35[0],
                         CONCAT11(auVar27[0] | auVar24[1],auVar24[0]));
      auVar43._4_4_ = (int)((long)((ulong)uVar2 << 0x28) >> 0x28);
      auVar43._8_4_ = auVar17._8_4_ >> 8;
      auVar43._12_4_ = auVar42._12_4_ >> 8;
      auVar39._0_4_ =
           (int)CONCAT12(auVar33[1] | auVar31[2] | auVar16[0],
                         CONCAT11(auVar33[0] | auVar31[1],auVar31[0]));
      auVar39._4_4_ = (int)((long)((ulong)uVar3 << 0x28) >> 0x28);
      auVar39._8_4_ = auVar15._8_4_ >> 8;
      auVar39._12_4_ = auVar38._12_4_ >> 8;
      auVar24 = NEON_scvtf(auVar43,4);
      auVar27 = NEON_scvtf(auVar39,4);
      auVar16._0_8_ = CONCAT44(auVar24._4_4_ * 1.1920929e-07,auVar24._0_4_ * 1.1920929e-07);
      auVar16._8_4_ = auVar24._8_4_ * 1.1920929e-07;
      auVar16._12_4_ = auVar24._12_4_ * 1.1920929e-07;
      auVar24._0_8_ = CONCAT44(auVar27._4_4_ * 1.1920929e-07,auVar27._0_4_ * 1.1920929e-07);
      auVar24._8_4_ = auVar27._8_4_ * 1.1920929e-07;
      auVar24._12_4_ = auVar27._12_4_ * 1.1920929e-07;
      puVar14[1] = auVar24._8_8_;
      *puVar14 = auVar24._0_8_;
      puVar14[3] = auVar16._8_8_;
      puVar14[2] = auVar16._0_8_;
      puVar14 = puVar14 + 4;
    } while (lVar10 != 0);
    if (uVar9 == param_3) {
      return;
    }
  }
LAB_005ca5d4:
  lVar10 = param_3 - uVar9;
  pfVar12 = (float *)((long)param_1 + uVar9 * 4);
  pbVar13 = param_2 + uVar9 * 3 + 2;
  do {
    lVar10 = lVar10 + -1;
    *pfVar12 = (float)((int)((uint)pbVar13[-2] << 8 | (uint)pbVar13[-1] << 0x10 |
                            (uint)*pbVar13 << 0x18) >> 8) / 8388608.0;
    pfVar12 = pfVar12 + 1;
    pbVar13 = pbVar13 + 3;
  } while (lVar10 != 0);
  return;
}


// ===== 005ca7c4  ma_pcm_interleave_s24 =====

void ma_pcm_interleave_s24(long param_1,long *param_2,long param_3,uint param_4)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  
  if (param_3 != 0) {
    lVar3 = 0;
    do {
      if (param_4 != 0) {
        lVar2 = lVar3 * 3;
        uVar4 = 0;
        plVar5 = param_2;
        do {
          puVar1 = (undefined1 *)(param_1 + lVar2 * (ulong)param_4 + (uVar4 & 0xffffffff));
          uVar4 = uVar4 + 3;
          *puVar1 = *(undefined1 *)(*plVar5 + lVar2);
          puVar1[1] = *(undefined1 *)(*plVar5 + lVar2 + 1);
          puVar1[2] = *(undefined1 *)(*plVar5 + lVar2 + 2);
          plVar5 = plVar5 + 1;
        } while ((ulong)param_4 + (ulong)param_4 * 2 != uVar4);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != param_3);
  }
  return;
}


// ===== 005ca83c  ma_pcm_deinterleave_s24 =====

void ma_pcm_deinterleave_s24(long *param_1,long param_2,ulong param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  if (param_3 != 0) {
    uVar3 = 0;
    uVar4 = 2;
    do {
      if (param_4 != 0) {
        uVar2 = (int)uVar3 * 3;
        plVar6 = param_1;
        uVar7 = (ulong)param_4;
        uVar1 = uVar4;
        do {
          uVar5 = (ulong)uVar1;
          uVar7 = uVar7 - 1;
          *(undefined1 *)(*plVar6 + (ulong)uVar2) = *(undefined1 *)(param_2 + (ulong)(uVar1 - 2));
          *(undefined1 *)(*plVar6 + (ulong)(uVar2 + 1)) =
               *(undefined1 *)(param_2 + (ulong)(uVar1 - 1));
          uVar1 = uVar1 + 3;
          *(undefined1 *)(*plVar6 + (ulong)(uVar2 + 2)) = *(undefined1 *)(param_2 + uVar5);
          plVar6 = plVar6 + 1;
        } while (uVar7 != 0);
      }
      uVar3 = (ulong)((int)uVar3 + 1);
      uVar4 = uVar4 + param_4 * 3;
    } while (uVar3 < param_3);
  }
  return;
}


// ===== 005ca8c0  ma_pcm_s32_to_s24 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ma_pcm_s32_to_s24(undefined1 *param_1,undefined8 *param_2,ulong param_3)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  undefined1 auVar29 [16];
  undefined1 *puVar30;
  ulong uVar31;
  long lVar32;
  ulong uVar33;
  undefined4 *puVar34;
  uint *puVar35;
  undefined8 *puVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  
  auVar29 = _DAT_0024e360;
  if (param_3 == 0) {
    return;
  }
  if (7 < param_3) {
    auVar37._8_8_ = 0;
    auVar37._0_8_ = param_3 - 1;
    lVar32 = (param_3 - 1) * 3;
    uVar31 = 0;
    if ((((param_1 + 2 + lVar32 < param_1 + 2) || (param_1 + 1 + lVar32 < param_1 + 1)) ||
        (param_1 + lVar32 < param_1)) || (SUB168(auVar37 * ZEXT816(3),8) != 0)) goto LAB_005ca8d0;
    if (((undefined1 *)((long)param_2 + param_3 * 4) <= param_1) ||
       (param_1 + param_3 * 3 <= param_2)) {
      if (param_3 < 0x10) {
        uVar33 = 0;
      }
      else {
        uVar31 = param_3 & 0xfffffffffffffff0;
        puVar36 = param_2;
        puVar30 = param_1;
        uVar33 = uVar31;
        do {
          uVar21 = *(uint *)(puVar36 + 4);
          uVar22 = *(uint *)((long)puVar36 + 0x24);
          uVar23 = *(uint *)(puVar36 + 5);
          uVar24 = *(uint *)((long)puVar36 + 0x2c);
          uVar17 = *(uint *)(puVar36 + 6);
          uVar18 = *(uint *)((long)puVar36 + 0x34);
          uVar19 = *(uint *)(puVar36 + 7);
          uVar20 = *(uint *)((long)puVar36 + 0x3c);
          uVar33 = uVar33 - 0x10;
          uVar43 = (uint)puVar36[1];
          uVar44 = (uint)((ulong)puVar36[1] >> 0x20);
          uVar41 = (uint)*puVar36;
          uVar42 = (uint)((ulong)*puVar36 >> 0x20);
          uVar25 = *(uint *)(puVar36 + 2);
          uVar26 = *(uint *)((long)puVar36 + 0x14);
          uVar27 = *(uint *)(puVar36 + 3);
          uVar28 = *(uint *)((long)puVar36 + 0x1c);
          auVar38._4_4_ = uVar42 >> 8;
          auVar38._0_4_ = uVar41 >> 8;
          auVar38._8_4_ = uVar43 >> 8;
          auVar38._12_4_ = uVar44 >> 8;
          auVar40._4_4_ = uVar26 >> 8;
          auVar40._0_4_ = uVar25 >> 8;
          auVar40._8_4_ = uVar27 >> 8;
          auVar40._12_4_ = uVar28 >> 8;
          auVar5._4_4_ = uVar22 >> 8;
          auVar5._0_4_ = uVar21 >> 8;
          auVar5._8_4_ = uVar23 >> 8;
          auVar5._12_4_ = uVar24 >> 8;
          auVar6._4_4_ = uVar18 >> 8;
          auVar6._0_4_ = uVar17 >> 8;
          auVar6._8_4_ = uVar19 >> 8;
          auVar6._12_4_ = uVar20 >> 8;
          auVar37 = a64_TBL(ZEXT816(0),auVar38,auVar40,auVar5,auVar6,auVar29);
          auVar9._4_4_ = uVar42 >> 0x10;
          auVar9._0_4_ = uVar41 >> 0x10;
          auVar9._8_4_ = uVar43 >> 0x10;
          auVar9._12_4_ = uVar44 >> 0x10;
          auVar10._4_4_ = uVar26 >> 0x10;
          auVar10._0_4_ = uVar25 >> 0x10;
          auVar10._8_4_ = uVar27 >> 0x10;
          auVar10._12_4_ = uVar28 >> 0x10;
          auVar11._4_4_ = uVar22 >> 0x10;
          auVar11._0_4_ = uVar21 >> 0x10;
          auVar11._8_4_ = uVar23 >> 0x10;
          auVar11._12_4_ = uVar24 >> 0x10;
          auVar12._4_4_ = uVar18 >> 0x10;
          auVar12._0_4_ = uVar17 >> 0x10;
          auVar12._8_4_ = uVar19 >> 0x10;
          auVar12._12_4_ = uVar20 >> 0x10;
          auVar38 = a64_TBL(ZEXT816(0),auVar9,auVar10,auVar11,auVar12,auVar29);
          auVar13._4_4_ = uVar42 >> 0x18;
          auVar13._0_4_ = uVar41 >> 0x18;
          auVar13._8_4_ = uVar43 >> 0x18;
          auVar13._12_4_ = uVar44 >> 0x18;
          auVar14._4_4_ = uVar26 >> 0x18;
          auVar14._0_4_ = uVar25 >> 0x18;
          auVar14._8_4_ = uVar27 >> 0x18;
          auVar14._12_4_ = uVar28 >> 0x18;
          auVar15._4_4_ = uVar22 >> 0x18;
          auVar15._0_4_ = uVar21 >> 0x18;
          auVar15._8_4_ = uVar23 >> 0x18;
          auVar15._12_4_ = uVar24 >> 0x18;
          auVar16._4_4_ = uVar18 >> 0x18;
          auVar16._0_4_ = uVar17 >> 0x18;
          auVar16._8_4_ = uVar19 >> 0x18;
          auVar16._12_4_ = uVar20 >> 0x18;
          auVar40 = a64_TBL(ZEXT816(0),auVar13,auVar14,auVar15,auVar16,auVar29);
          *puVar30 = auVar37[0];
          puVar30[1] = auVar38[0];
          puVar30[2] = auVar40[0];
          puVar30[3] = auVar37[1];
          puVar30[4] = auVar38[1];
          puVar30[5] = auVar40[1];
          puVar30[6] = auVar37[2];
          puVar30[7] = auVar38[2];
          puVar30[8] = auVar40[2];
          puVar30[9] = auVar37[3];
          puVar30[10] = auVar38[3];
          puVar30[0xb] = auVar40[3];
          puVar30[0xc] = auVar37[4];
          puVar30[0xd] = auVar38[4];
          puVar30[0xe] = auVar40[4];
          puVar30[0xf] = auVar37[5];
          puVar30[0x10] = auVar38[5];
          puVar30[0x11] = auVar40[5];
          puVar30[0x12] = auVar37[6];
          puVar30[0x13] = auVar38[6];
          puVar30[0x14] = auVar40[6];
          puVar30[0x15] = auVar37[7];
          puVar30[0x16] = auVar38[7];
          puVar30[0x17] = auVar40[7];
          puVar30[0x18] = auVar37[8];
          puVar30[0x19] = auVar38[8];
          puVar30[0x1a] = auVar40[8];
          puVar30[0x1b] = auVar37[9];
          puVar30[0x1c] = auVar38[9];
          puVar30[0x1d] = auVar40[9];
          puVar30[0x1e] = auVar37[10];
          puVar30[0x1f] = auVar38[10];
          puVar30[0x20] = auVar40[10];
          puVar30[0x21] = auVar37[0xb];
          puVar30[0x22] = auVar38[0xb];
          puVar30[0x23] = auVar40[0xb];
          puVar30[0x24] = auVar37[0xc];
          puVar30[0x25] = auVar38[0xc];
          puVar30[0x26] = auVar40[0xc];
          puVar30[0x27] = auVar37[0xd];
          puVar30[0x28] = auVar38[0xd];
          puVar30[0x29] = auVar40[0xd];
          puVar30[0x2a] = auVar37[0xe];
          puVar30[0x2b] = auVar38[0xe];
          puVar30[0x2c] = auVar40[0xe];
          puVar30[0x2d] = auVar37[0xf];
          puVar30[0x2e] = auVar38[0xf];
          puVar30[0x2f] = auVar40[0xf];
          puVar30 = puVar30 + 0x30;
          puVar36 = puVar36 + 8;
        } while (uVar33 != 0);
        if (uVar31 == param_3) {
          return;
        }
        uVar33 = uVar31;
        if (((uint)param_3 >> 3 & 1) == 0) goto LAB_005ca8d0;
      }
      auVar29 = _DAT_0024e040;
      uVar31 = param_3 & 0xfffffffffffffff8;
      lVar32 = uVar33 - uVar31;
      puVar30 = param_1 + uVar33 * 3;
      puVar35 = (uint *)((long)param_2 + uVar33 * 4);
      do {
        uVar21 = *puVar35;
        uVar22 = puVar35[1];
        uVar23 = puVar35[2];
        uVar24 = puVar35[3];
        uVar17 = puVar35[4];
        uVar18 = puVar35[5];
        uVar19 = puVar35[6];
        uVar20 = puVar35[7];
        lVar32 = lVar32 + 8;
        auVar39._0_4_ = uVar21 >> 8;
        auVar39._4_4_ = uVar22 >> 8;
        auVar39._8_4_ = uVar23 >> 8;
        auVar39._12_4_ = uVar24 >> 8;
        auVar2._4_4_ = uVar18 >> 8;
        auVar2._0_4_ = uVar17 >> 8;
        auVar2._8_4_ = uVar19 >> 8;
        auVar2._12_4_ = uVar20 >> 8;
        auVar37 = a64_TBL(ZEXT816(0),auVar39,auVar2,auVar29);
        auVar3._4_4_ = uVar22 >> 0x10;
        auVar3._0_4_ = uVar21 >> 0x10;
        auVar3._8_4_ = uVar23 >> 0x10;
        auVar3._12_4_ = uVar24 >> 0x10;
        auVar4._4_4_ = uVar18 >> 0x10;
        auVar4._0_4_ = uVar17 >> 0x10;
        auVar4._8_4_ = uVar19 >> 0x10;
        auVar4._12_4_ = uVar20 >> 0x10;
        auVar38 = a64_TBL(ZEXT816(0),auVar3,auVar4,auVar29);
        auVar7._4_4_ = uVar22 >> 0x18;
        auVar7._0_4_ = uVar21 >> 0x18;
        auVar7._8_4_ = uVar23 >> 0x18;
        auVar7._12_4_ = uVar24 >> 0x18;
        auVar8._4_4_ = uVar18 >> 0x18;
        auVar8._0_4_ = uVar17 >> 0x18;
        auVar8._8_4_ = uVar19 >> 0x18;
        auVar8._12_4_ = uVar20 >> 0x18;
        auVar40 = a64_TBL(ZEXT816(0),auVar7,auVar8,auVar29);
        *puVar30 = auVar37[0];
        puVar30[1] = auVar38[0];
        puVar30[2] = auVar40[0];
        puVar30[3] = auVar37[1];
        puVar30[4] = auVar38[1];
        puVar30[5] = auVar40[1];
        puVar30[6] = auVar37[2];
        puVar30[7] = auVar38[2];
        puVar30[8] = auVar40[2];
        puVar30[9] = auVar37[3];
        puVar30[10] = auVar38[3];
        puVar30[0xb] = auVar40[3];
        puVar30[0xc] = auVar37[4];
        puVar30[0xd] = auVar38[4];
        puVar30[0xe] = auVar40[4];
        puVar30[0xf] = auVar37[5];
        puVar30[0x10] = auVar38[5];
        puVar30[0x11] = auVar40[5];
        puVar30[0x12] = auVar37[6];
        puVar30[0x13] = auVar38[6];
        puVar30[0x14] = auVar40[6];
        puVar30[0x15] = auVar37[7];
        puVar30[0x16] = auVar38[7];
        puVar30[0x17] = auVar40[7];
        puVar30 = puVar30 + 0x18;
        puVar35 = puVar35 + 8;
      } while (lVar32 != 0);
      if (uVar31 == param_3) {
        return;
      }
      goto LAB_005ca8d0;
    }
  }
  uVar31 = 0;
LAB_005ca8d0:
  lVar32 = param_3 - uVar31;
  puVar34 = (undefined4 *)((long)param_2 + uVar31 * 4);
  puVar30 = param_1 + uVar31 * 3 + 2;
  do {
    uVar1 = *puVar34;
    lVar32 = lVar32 + -1;
    puVar30[-2] = (char)((uint)uVar1 >> 8);
    puVar30[-1] = (char)((uint)uVar1 >> 0x10);
    *puVar30 = (char)((uint)uVar1 >> 0x18);
    puVar34 = puVar34 + 1;
    puVar30 = puVar30 + 3;
  } while (lVar32 != 0);
  return;
}


// ===== 005caa58  ma_pcm_s32_to_s32 =====

void ma_pcm_s32_to_s32(void *param_1,void *param_2,long param_3)

{
  size_t __n;
  ulong uVar1;
  
  for (uVar1 = param_3 << 2; uVar1 != 0; uVar1 = uVar1 - __n) {
    __n = uVar1;
    if (0xfffffffe < uVar1) {
      __n = 0xffffffff;
    }
    memcpy(param_1,param_2,__n);
    param_1 = (void *)((long)param_1 + __n);
    param_2 = (void *)((long)param_2 + __n);
  }
  return;
}


// ===== 005caabc  ma_pcm_s32_to_f32 =====

void ma_pcm_s32_to_f32(long param_1,long param_2,ulong param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  float *pfVar12;
  int *piVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  if (param_3 != 0) {
    if (param_3 < 8) {
      uVar9 = 0;
    }
    else {
      puVar11 = (undefined8 *)(param_1 + 0x10);
      piVar13 = (int *)(param_2 + 0x10);
      uVar9 = param_3 & 0xfffffffffffffff8;
      uVar14 = uVar9;
      do {
        piVar1 = piVar13 + -4;
        piVar2 = piVar13 + -3;
        piVar3 = piVar13 + -2;
        piVar4 = piVar13 + -1;
        iVar5 = *piVar13;
        piVar6 = piVar13 + 1;
        piVar7 = piVar13 + 2;
        piVar8 = piVar13 + 3;
        uVar14 = uVar14 - 8;
        piVar13 = piVar13 + 8;
        auVar17._0_8_ = (long)*piVar1;
        auVar17._8_8_ = (long)*piVar2;
        auVar18._0_8_ = (long)iVar5;
        auVar18._8_8_ = (long)*piVar6;
        auVar15._0_8_ = (long)*piVar3;
        auVar15._8_8_ = (long)*piVar4;
        auVar16._0_8_ = (long)*piVar7;
        auVar16._8_8_ = (long)*piVar8;
        auVar17 = NEON_scvtf(auVar17,8);
        auVar18 = NEON_scvtf(auVar18,8);
        auVar15 = NEON_scvtf(auVar15,8);
        auVar16 = NEON_scvtf(auVar16,8);
        puVar11[-1] = CONCAT44((float)(auVar15._8_8_ * 4.656612873077393e-10),
                               (float)(auVar15._0_8_ * 4.656612873077393e-10));
        puVar11[-2] = CONCAT44((float)(auVar17._8_8_ * 4.656612873077393e-10),
                               (float)(auVar17._0_8_ * 4.656612873077393e-10));
        puVar11[1] = CONCAT44((float)(auVar16._8_8_ * 4.656612873077393e-10),
                              (float)(auVar16._0_8_ * 4.656612873077393e-10));
        *puVar11 = CONCAT44((float)(auVar18._8_8_ * 4.656612873077393e-10),
                            (float)(auVar18._0_8_ * 4.656612873077393e-10));
        puVar11 = puVar11 + 4;
      } while (uVar14 != 0);
      if (uVar9 == param_3) {
        return;
      }
    }
    lVar10 = param_3 - uVar9;
    pfVar12 = (float *)(param_1 + uVar9 * 4);
    piVar13 = (int *)(param_2 + uVar9 * 4);
    do {
      lVar10 = lVar10 + -1;
      *pfVar12 = (float)*piVar13 / 2.1474836e+09;
      pfVar12 = pfVar12 + 1;
      piVar13 = piVar13 + 1;
    } while (lVar10 != 0);
  }
  return;
}


// ===== 005cab74  ma_pcm_interleave_s32 =====

void ma_pcm_interleave_s32(undefined4 *param_1,long *param_2,long param_3,uint param_4)

{
  long lVar1;
  long *plVar2;
  undefined4 *puVar3;
  ulong uVar4;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      plVar2 = param_2;
      puVar3 = param_1;
      uVar4 = (ulong)param_4;
      if (param_4 != 0) {
        do {
          uVar4 = uVar4 - 1;
          *puVar3 = *(undefined4 *)(*plVar2 + lVar1 * 4);
          plVar2 = plVar2 + 1;
          puVar3 = puVar3 + 1;
        } while (uVar4 != 0);
      }
      lVar1 = lVar1 + 1;
      param_1 = param_1 + param_4;
    } while (lVar1 != param_3);
  }
  return;
}


// ===== 005cabc4  ma_pcm_deinterleave_s32 =====

void ma_pcm_deinterleave_s32(long *param_1,undefined4 *param_2,long param_3,uint param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  ulong uVar4;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      puVar2 = param_2;
      plVar3 = param_1;
      uVar4 = (ulong)param_4;
      if (param_4 != 0) {
        do {
          uVar4 = uVar4 - 1;
          *(undefined4 *)(*plVar3 + lVar1 * 4) = *puVar2;
          puVar2 = puVar2 + 1;
          plVar3 = plVar3 + 1;
        } while (uVar4 != 0);
      }
      lVar1 = lVar1 + 1;
      param_2 = param_2 + param_4;
    } while (lVar1 != param_3);
  }
  return;
}


// ===== 005cac14  ma_pcm_f32_to_s24 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ma_pcm_f32_to_s24(undefined1 *param_1,undefined1 (*param_2) [16],ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 *puVar4;
  ulong uVar5;
  float *pfVar6;
  ulong uVar7;
  long lVar8;
  undefined1 (*pauVar9) [16];
  int iVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
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
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  
  auVar3 = _DAT_0024e360;
  if (param_3 == 0) {
    return;
  }
  if (7 < param_3) {
    auVar11._8_8_ = 0;
    auVar11._0_8_ = param_3 - 1;
    lVar8 = (param_3 - 1) * 3;
    uVar5 = 0;
    if ((((param_1 + 2 + lVar8 < param_1 + 2) || (param_1 + 1 + lVar8 < param_1 + 1)) ||
        (param_1 + lVar8 < param_1)) || (SUB168(auVar11 * ZEXT816(3),8) != 0)) goto LAB_005cac24;
    if ((*param_2 + param_3 * 4 <= param_1) ||
       ((undefined1 (*) [16])(param_1 + param_3 * 3) <= param_2)) {
      auVar11 = NEON_fmov(0xbf800000,4);
      auVar12 = NEON_fmov(0x3f800000,4);
      if (param_3 < 0x10) {
        uVar7 = 0;
      }
      else {
        uVar5 = param_3 & 0xfffffffffffffff0;
        pauVar9 = param_2;
        puVar4 = param_1;
        uVar7 = uVar5;
        do {
          auVar18 = pauVar9[2];
          auVar16 = pauVar9[3];
          uVar7 = uVar7 - 0x10;
          auVar22 = *pauVar9;
          auVar20 = pauVar9[1];
          auVar25 = NEON_fcmgt(auVar16,auVar12,4);
          auVar31 = NEON_fcmgt(auVar18,auVar12,4);
          auVar36 = NEON_fcmgt(auVar20,auVar12,4);
          auVar39 = NEON_fcmgt(auVar22,auVar12,4);
          auVar26 = NEON_bsl(auVar25,auVar12,auVar16,1);
          auVar32 = NEON_bsl(auVar31,auVar12,auVar18,1);
          auVar25 = NEON_fcmgt(auVar11,auVar16,4);
          auVar16 = NEON_bsl(auVar36,auVar12,auVar20,1);
          auVar39 = NEON_bsl(auVar39,auVar12,auVar22,1);
          auVar36 = NEON_fcmgt(auVar11,auVar22,4);
          auVar22 = NEON_fcmgt(auVar11,auVar18,4);
          auVar31 = NEON_fcmgt(auVar11,auVar20,4);
          auVar27._0_4_ = auVar26._0_4_ * 8388607.0;
          auVar27._4_4_ = auVar26._4_4_ * 8388607.0;
          auVar27._8_4_ = auVar26._8_4_ * 8388607.0;
          auVar27._12_4_ = auVar26._12_4_ * 8388607.0;
          auVar33._0_4_ = auVar32._0_4_ * 8388607.0;
          auVar33._4_4_ = auVar32._4_4_ * 8388607.0;
          auVar33._8_4_ = auVar32._8_4_ * 8388607.0;
          auVar33._12_4_ = auVar32._12_4_ * 8388607.0;
          auVar37._0_4_ = auVar16._0_4_ * 8388607.0;
          auVar37._4_4_ = auVar16._4_4_ * 8388607.0;
          auVar37._8_4_ = auVar16._8_4_ * 8388607.0;
          auVar37._12_4_ = auVar16._12_4_ * 8388607.0;
          auVar40._0_4_ = auVar39._0_4_ * 8388607.0;
          auVar40._4_4_ = auVar39._4_4_ * 8388607.0;
          auVar40._8_4_ = auVar39._8_4_ * 8388607.0;
          auVar40._12_4_ = auVar39._12_4_ * 8388607.0;
          auVar16._8_4_ = 0xcafffffe;
          auVar16._0_8_ = 0xcafffffecafffffe;
          auVar16._12_4_ = 0xcafffffe;
          auVar16 = NEON_bsl(auVar25,auVar16,auVar27,1);
          auVar18._8_4_ = 0xcafffffe;
          auVar18._0_8_ = 0xcafffffecafffffe;
          auVar18._12_4_ = 0xcafffffe;
          auVar18 = NEON_bsl(auVar22,auVar18,auVar33,1);
          auVar20._8_4_ = 0xcafffffe;
          auVar20._0_8_ = 0xcafffffecafffffe;
          auVar20._12_4_ = 0xcafffffe;
          auVar20 = NEON_bsl(auVar31,auVar20,auVar37,1);
          auVar22._8_4_ = 0xcafffffe;
          auVar22._0_8_ = 0xcafffffecafffffe;
          auVar22._12_4_ = 0xcafffffe;
          auVar22 = NEON_bsl(auVar36,auVar22,auVar40,1);
          auVar41._0_4_ = (uint)auVar16._0_4_;
          auVar41._4_4_ = (uint)auVar16._4_4_;
          auVar41._8_4_ = (uint)auVar16._8_4_;
          auVar41._12_4_ = (uint)auVar16._12_4_;
          auVar38._0_4_ = (uint)auVar18._0_4_;
          auVar38._4_4_ = (uint)auVar18._4_4_;
          auVar38._8_4_ = (uint)auVar18._8_4_;
          auVar38._12_4_ = (uint)auVar18._12_4_;
          auVar34._0_4_ = (uint)auVar20._0_4_;
          auVar34._4_4_ = (uint)auVar20._4_4_;
          auVar34._8_4_ = (uint)auVar20._8_4_;
          auVar34._12_4_ = (uint)auVar20._12_4_;
          auVar29._0_4_ = (uint)auVar22._0_4_;
          auVar29._4_4_ = (uint)auVar22._4_4_;
          auVar29._8_4_ = (uint)auVar22._8_4_;
          auVar29._12_4_ = (uint)auVar22._12_4_;
          auVar43._0_4_ = auVar34._0_4_ >> 8;
          auVar43._4_4_ = auVar34._4_4_ >> 8;
          auVar43._8_4_ = auVar34._8_4_ >> 8;
          auVar43._12_4_ = auVar34._12_4_ >> 8;
          auVar42._0_4_ = auVar29._0_4_ >> 8;
          auVar42._4_4_ = auVar29._4_4_ >> 8;
          auVar42._8_4_ = auVar29._8_4_ >> 8;
          auVar42._12_4_ = auVar29._12_4_ >> 8;
          auVar16 = a64_TBL(ZEXT816(0),auVar29,auVar34,auVar38,auVar41,auVar3);
          auVar25._4_4_ = auVar38._4_4_ >> 8;
          auVar25._0_4_ = auVar38._0_4_ >> 8;
          auVar25._8_4_ = auVar38._8_4_ >> 8;
          auVar25._12_4_ = auVar38._12_4_ >> 8;
          auVar31._4_4_ = auVar41._4_4_ >> 8;
          auVar31._0_4_ = auVar41._0_4_ >> 8;
          auVar31._8_4_ = auVar41._8_4_ >> 8;
          auVar31._12_4_ = auVar41._12_4_ >> 8;
          auVar18 = a64_TBL(ZEXT816(0),auVar42,auVar43,auVar25,auVar31,auVar3);
          auVar26._4_4_ = auVar29._4_4_ >> 0x10;
          auVar26._0_4_ = auVar29._0_4_ >> 0x10;
          auVar26._8_4_ = auVar29._8_4_ >> 0x10;
          auVar26._12_4_ = auVar29._12_4_ >> 0x10;
          auVar36._4_4_ = auVar34._4_4_ >> 0x10;
          auVar36._0_4_ = auVar34._0_4_ >> 0x10;
          auVar36._8_4_ = auVar34._8_4_ >> 0x10;
          auVar36._12_4_ = auVar34._12_4_ >> 0x10;
          auVar32._4_4_ = auVar38._4_4_ >> 0x10;
          auVar32._0_4_ = auVar38._0_4_ >> 0x10;
          auVar32._8_4_ = auVar38._8_4_ >> 0x10;
          auVar32._12_4_ = auVar38._12_4_ >> 0x10;
          auVar39._4_4_ = auVar41._4_4_ >> 0x10;
          auVar39._0_4_ = auVar41._0_4_ >> 0x10;
          auVar39._8_4_ = auVar41._8_4_ >> 0x10;
          auVar39._12_4_ = auVar41._12_4_ >> 0x10;
          auVar20 = a64_TBL(ZEXT816(0),auVar26,auVar36,auVar32,auVar39,auVar3);
          *puVar4 = auVar16[0];
          puVar4[1] = auVar18[0];
          puVar4[2] = auVar20[0];
          puVar4[3] = auVar16[1];
          puVar4[4] = auVar18[1];
          puVar4[5] = auVar20[1];
          puVar4[6] = auVar16[2];
          puVar4[7] = auVar18[2];
          puVar4[8] = auVar20[2];
          puVar4[9] = auVar16[3];
          puVar4[10] = auVar18[3];
          puVar4[0xb] = auVar20[3];
          puVar4[0xc] = auVar16[4];
          puVar4[0xd] = auVar18[4];
          puVar4[0xe] = auVar20[4];
          puVar4[0xf] = auVar16[5];
          puVar4[0x10] = auVar18[5];
          puVar4[0x11] = auVar20[5];
          puVar4[0x12] = auVar16[6];
          puVar4[0x13] = auVar18[6];
          puVar4[0x14] = auVar20[6];
          puVar4[0x15] = auVar16[7];
          puVar4[0x16] = auVar18[7];
          puVar4[0x17] = auVar20[7];
          puVar4[0x18] = auVar16[8];
          puVar4[0x19] = auVar18[8];
          puVar4[0x1a] = auVar20[8];
          puVar4[0x1b] = auVar16[9];
          puVar4[0x1c] = auVar18[9];
          puVar4[0x1d] = auVar20[9];
          puVar4[0x1e] = auVar16[10];
          puVar4[0x1f] = auVar18[10];
          puVar4[0x20] = auVar20[10];
          puVar4[0x21] = auVar16[0xb];
          puVar4[0x22] = auVar18[0xb];
          puVar4[0x23] = auVar20[0xb];
          puVar4[0x24] = auVar16[0xc];
          puVar4[0x25] = auVar18[0xc];
          puVar4[0x26] = auVar20[0xc];
          puVar4[0x27] = auVar16[0xd];
          puVar4[0x28] = auVar18[0xd];
          puVar4[0x29] = auVar20[0xd];
          puVar4[0x2a] = auVar16[0xe];
          puVar4[0x2b] = auVar18[0xe];
          puVar4[0x2c] = auVar20[0xe];
          puVar4[0x2d] = auVar16[0xf];
          puVar4[0x2e] = auVar18[0xf];
          puVar4[0x2f] = auVar20[0xf];
          puVar4 = puVar4 + 0x30;
          pauVar9 = pauVar9 + 4;
        } while (uVar7 != 0);
        if (uVar5 == param_3) {
          return;
        }
        uVar7 = uVar5;
        if (((uint)param_3 >> 3 & 1) == 0) goto LAB_005cac24;
      }
      auVar3 = _DAT_0024e040;
      uVar5 = param_3 & 0xfffffffffffffff8;
      lVar8 = uVar7 - uVar5;
      puVar4 = param_1 + uVar7 * 3;
      pauVar9 = (undefined1 (*) [16])(*param_2 + uVar7 * 4);
      do {
        auVar18 = *pauVar9;
        auVar16 = pauVar9[1];
        lVar8 = lVar8 + 8;
        auVar20 = NEON_fcmgt(auVar16,auVar12,4);
        auVar22 = NEON_fcmgt(auVar18,auVar12,4);
        auVar20 = NEON_bsl(auVar20,auVar12,auVar16,1);
        auVar22 = NEON_bsl(auVar22,auVar12,auVar18,1);
        auVar16 = NEON_fcmgt(auVar11,auVar16,4);
        auVar18 = NEON_fcmgt(auVar11,auVar18,4);
        auVar21._0_4_ = auVar20._0_4_ * 8388607.0;
        auVar21._4_4_ = auVar20._4_4_ * 8388607.0;
        auVar21._8_4_ = auVar20._8_4_ * 8388607.0;
        auVar21._12_4_ = auVar20._12_4_ * 8388607.0;
        auVar23._0_4_ = auVar22._0_4_ * 8388607.0;
        auVar23._4_4_ = auVar22._4_4_ * 8388607.0;
        auVar23._8_4_ = auVar22._8_4_ * 8388607.0;
        auVar23._12_4_ = auVar22._12_4_ * 8388607.0;
        auVar1._8_4_ = 0xcafffffe;
        auVar1._0_8_ = 0xcafffffecafffffe;
        auVar1._12_4_ = 0xcafffffe;
        auVar16 = NEON_bsl(auVar16,auVar1,auVar21,1);
        auVar2._8_4_ = 0xcafffffe;
        auVar2._0_8_ = 0xcafffffecafffffe;
        auVar2._12_4_ = 0xcafffffe;
        auVar18 = NEON_bsl(auVar18,auVar2,auVar23,1);
        auVar28._0_4_ = (uint)auVar16._0_4_;
        auVar28._4_4_ = (uint)auVar16._4_4_;
        auVar28._8_4_ = (uint)auVar16._8_4_;
        auVar28._12_4_ = (uint)auVar16._12_4_;
        auVar24._0_4_ = (uint)auVar18._0_4_;
        auVar24._4_4_ = (uint)auVar18._4_4_;
        auVar24._8_4_ = (uint)auVar18._8_4_;
        auVar24._12_4_ = (uint)auVar18._12_4_;
        auVar19._0_4_ = auVar28._0_4_ >> 8;
        auVar19._4_4_ = auVar28._4_4_ >> 8;
        auVar19._8_4_ = auVar28._8_4_ >> 8;
        auVar19._12_4_ = auVar28._12_4_ >> 8;
        auVar35._0_4_ = auVar28._0_4_ >> 0x10;
        auVar35._4_4_ = auVar28._4_4_ >> 0x10;
        auVar35._8_4_ = auVar28._8_4_ >> 0x10;
        auVar35._12_4_ = auVar28._12_4_ >> 0x10;
        auVar17._0_4_ = auVar24._0_4_ >> 8;
        auVar17._4_4_ = auVar24._4_4_ >> 8;
        auVar17._8_4_ = auVar24._8_4_ >> 8;
        auVar17._12_4_ = auVar24._12_4_ >> 8;
        auVar30._0_4_ = auVar24._0_4_ >> 0x10;
        auVar30._4_4_ = auVar24._4_4_ >> 0x10;
        auVar30._8_4_ = auVar24._8_4_ >> 0x10;
        auVar30._12_4_ = auVar24._12_4_ >> 0x10;
        auVar16 = a64_TBL(ZEXT816(0),auVar24,auVar28,auVar3);
        auVar18 = a64_TBL(ZEXT816(0),auVar17,auVar19,auVar3);
        auVar20 = a64_TBL(ZEXT816(0),auVar30,auVar35,auVar3);
        *puVar4 = auVar16[0];
        puVar4[1] = auVar18[0];
        puVar4[2] = auVar20[0];
        puVar4[3] = auVar16[1];
        puVar4[4] = auVar18[1];
        puVar4[5] = auVar20[1];
        puVar4[6] = auVar16[2];
        puVar4[7] = auVar18[2];
        puVar4[8] = auVar20[2];
        puVar4[9] = auVar16[3];
        puVar4[10] = auVar18[3];
        puVar4[0xb] = auVar20[3];
        puVar4[0xc] = auVar16[4];
        puVar4[0xd] = auVar18[4];
        puVar4[0xe] = auVar20[4];
        puVar4[0xf] = auVar16[5];
        puVar4[0x10] = auVar18[5];
        puVar4[0x11] = auVar20[5];
        puVar4[0x12] = auVar16[6];
        puVar4[0x13] = auVar18[6];
        puVar4[0x14] = auVar20[6];
        puVar4[0x15] = auVar16[7];
        puVar4[0x16] = auVar18[7];
        puVar4[0x17] = auVar20[7];
        puVar4 = puVar4 + 0x18;
        pauVar9 = pauVar9 + 2;
      } while (lVar8 != 0);
      if (uVar5 == param_3) {
        return;
      }
      goto LAB_005cac24;
    }
  }
  uVar5 = 0;
LAB_005cac24:
  lVar8 = param_3 - uVar5;
  pfVar6 = (float *)(*param_2 + uVar5 * 4);
  puVar4 = param_1 + uVar5 * 3 + 2;
  do {
    fVar13 = *pfVar6;
    fVar15 = 1.0;
    if (fVar13 == 1.0 || fVar13 < 1.0 != NAN(fVar13)) {
      fVar15 = fVar13;
    }
    fVar14 = -8388607.0;
    if (-1.0 <= fVar13) {
      fVar14 = fVar15 * 8388607.0;
    }
    lVar8 = lVar8 + -1;
    iVar10 = (int)fVar14;
    puVar4[-2] = (char)iVar10;
    puVar4[-1] = (char)((uint)iVar10 >> 8);
    *puVar4 = (char)((uint)iVar10 >> 0x10);
    pfVar6 = pfVar6 + 1;
    puVar4 = puVar4 + 3;
  } while (lVar8 != 0);
  return;
}


// ===== 005cae94  ma_pcm_f32_to_s32 =====

void ma_pcm_f32_to_s32(undefined8 *param_1,undefined1 (*param_2) [16],ulong param_3)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  undefined1 (*pauVar4) [16];
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  if (param_3 != 0) {
    if (param_3 < 4) {
      uVar2 = 0;
      uVar3 = 0;
    }
    else {
      uVar2 = 0;
      uVar3 = 0;
      if (((int)(param_3 - 1) != -1) && (uVar3 = 0, param_3 - 1 >> 0x20 == 0)) {
        auVar8 = NEON_fmov(0xbf800000,4);
        auVar9 = NEON_fmov(0x3ff0000000000000,8);
        uVar2 = param_3 & 0xfffffffffffffffc;
        pauVar4 = param_2;
        puVar5 = param_1;
        uVar7 = uVar2;
        do {
          auVar16 = *pauVar4;
          uVar7 = uVar7 - 4;
          auVar14._0_8_ = (double)auVar16._8_4_;
          auVar14._8_8_ = (double)auVar16._12_4_;
          auVar13._0_8_ = (double)auVar16._0_4_;
          auVar13._8_8_ = (double)auVar16._4_4_;
          auVar12 = NEON_fcmgt(auVar8,auVar16,4);
          auVar15 = NEON_fcmgt(auVar13,auVar9,8);
          auVar16 = NEON_fcmgt(auVar14,auVar9,8);
          auVar16 = NEON_bit(auVar14,auVar9,auVar16,1);
          auVar14 = NEON_bit(auVar13,auVar9,auVar15,1);
          auVar15._4_4_ = (int)(long)(auVar14._8_8_ * 2147483647.0);
          auVar15._0_4_ = (int)(long)(auVar14._0_8_ * 2147483647.0);
          auVar15._8_4_ = (int)(long)(auVar16._0_8_ * 2147483647.0);
          auVar15._12_4_ = (int)(long)(auVar16._8_8_ * 2147483647.0);
          auVar16._8_4_ = 0x80000001;
          auVar16._0_8_ = 0x8000000180000001;
          auVar16._12_4_ = 0x80000001;
          auVar16 = NEON_bsl(auVar12,auVar16,auVar15,1);
          puVar5[1] = auVar16._8_8_;
          *puVar5 = auVar16._0_8_;
          pauVar4 = pauVar4 + 1;
          puVar5 = puVar5 + 2;
        } while (uVar7 != 0);
        uVar3 = (uint)uVar2;
        if (uVar2 == param_3) {
          return;
        }
      }
    }
    do {
      uVar3 = uVar3 + 1;
      lVar6 = uVar2 * 4;
      uVar2 = (ulong)uVar3;
      dVar10 = (double)*(float *)(*param_2 + lVar6);
      dVar11 = 1.0;
      if (dVar10 == 1.0 || dVar10 < 1.0 != NAN(dVar10)) {
        dVar11 = dVar10;
      }
      iVar1 = -0x7fffffff;
      if (-1.0 <= *(float *)(*param_2 + lVar6)) {
        iVar1 = (int)(dVar11 * 2147483647.0);
      }
      *(int *)((long)param_1 + lVar6) = iVar1;
    } while (uVar2 < param_3);
  }
  return;
}


// ===== 005caf9c  ma_pcm_f32_to_f32 =====

void ma_pcm_f32_to_f32(void *param_1,void *param_2,long param_3)

{
  size_t __n;
  ulong uVar1;
  
  for (uVar1 = param_3 << 2; uVar1 != 0; uVar1 = uVar1 - __n) {
    __n = uVar1;
    if (0xfffffffe < uVar1) {
      __n = 0xffffffff;
    }
    memcpy(param_1,param_2,__n);
    param_1 = (void *)((long)param_1 + __n);
    param_2 = (void *)((long)param_2 + __n);
  }
  return;
}


// ===== 005cb000  ma_pcm_interleave_f32 =====

void ma_pcm_interleave_f32(undefined4 *param_1,long *param_2,long param_3,uint param_4)

{
  long lVar1;
  long *plVar2;
  undefined4 *puVar3;
  ulong uVar4;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      plVar2 = param_2;
      puVar3 = param_1;
      uVar4 = (ulong)param_4;
      if (param_4 != 0) {
        do {
          uVar4 = uVar4 - 1;
          *puVar3 = *(undefined4 *)(*plVar2 + lVar1 * 4);
          plVar2 = plVar2 + 1;
          puVar3 = puVar3 + 1;
        } while (uVar4 != 0);
      }
      lVar1 = lVar1 + 1;
      param_1 = param_1 + param_4;
    } while (lVar1 != param_3);
  }
  return;
}


// ===== 005cb050  ma_pcm_deinterleave_f32 =====

void ma_pcm_deinterleave_f32(long *param_1,undefined4 *param_2,long param_3,uint param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  ulong uVar4;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      puVar2 = param_2;
      plVar3 = param_1;
      uVar4 = (ulong)param_4;
      if (param_4 != 0) {
        do {
          uVar4 = uVar4 - 1;
          *(undefined4 *)(*plVar3 + lVar1 * 4) = *puVar2;
          puVar2 = puVar2 + 1;
          plVar3 = plVar3 + 1;
        } while (uVar4 != 0);
      }
      lVar1 = lVar1 + 1;
      param_2 = param_2 + param_4;
    } while (lVar1 != param_3);
  }
  return;
}


// ===== 005cb0a0  ma_get_bytes_per_sample =====

undefined4 ma_get_bytes_per_sample(ulong param_1)

{
  return *(undefined4 *)(&DAT_00281c10 + (param_1 & 0xffffffff) * 4);
}


// ===== 005cb0b0  ma_convert_pcm_frames_format =====

void ma_convert_pcm_frames_format(void)

{
  ma_pcm_convert();
  return;
}


// ===== 005cb0c0  ma_deinterleave_pcm_frames =====

void ma_deinterleave_pcm_frames
               (uint param_1,uint param_2,long param_3,undefined4 *param_4,long *param_5)

{
  long lVar1;
  long *plVar2;
  undefined4 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if ((param_4 != (undefined4 *)0x0) && (param_5 != (long *)0x0)) {
    uVar4 = (ulong)param_2;
    if (param_1 == 2) {
      if (param_3 != 0) {
        lVar1 = 0;
        do {
          plVar2 = param_5;
          puVar3 = param_4;
          uVar5 = uVar4;
          if (param_2 != 0) {
            do {
              uVar5 = uVar5 - 1;
              *(undefined2 *)(*plVar2 + lVar1 * 2) = *(undefined2 *)puVar3;
              plVar2 = plVar2 + 1;
              puVar3 = (undefined4 *)((long)puVar3 + 2);
            } while (uVar5 != 0);
          }
          lVar1 = lVar1 + 1;
          param_4 = (undefined4 *)((long)param_4 + uVar4 * 2);
        } while (lVar1 != param_3);
      }
    }
    else if (param_1 == 5) {
      if (param_3 != 0) {
        lVar1 = 0;
        do {
          plVar2 = param_5;
          puVar3 = param_4;
          uVar5 = uVar4;
          if (param_2 != 0) {
            do {
              uVar5 = uVar5 - 1;
              *(undefined4 *)(*plVar2 + lVar1 * 4) = *puVar3;
              plVar2 = plVar2 + 1;
              puVar3 = puVar3 + 1;
            } while (uVar5 != 0);
          }
          lVar1 = lVar1 + 1;
          param_4 = param_4 + uVar4;
        } while (lVar1 != param_3);
      }
    }
    else if (param_3 != 0) {
      lVar1 = 0;
      uVar5 = (ulong)*(uint *)(&DAT_00281c10 + (ulong)param_1 * 4);
      do {
        if (param_2 != 0) {
          plVar2 = param_5;
          puVar3 = param_4;
          uVar6 = uVar4;
          do {
            memcpy((void *)(*plVar2 + lVar1 * uVar5),puVar3,uVar5);
            uVar6 = uVar6 - 1;
            puVar3 = (undefined4 *)((long)puVar3 + uVar5);
            plVar2 = plVar2 + 1;
          } while (uVar6 != 0);
        }
        lVar1 = lVar1 + 1;
        param_4 = (undefined4 *)((long)param_4 + uVar5 * uVar4);
      } while (lVar1 != param_3);
    }
  }
  return;
}


// ===== 005cb230  ma_interleave_pcm_frames =====

void ma_interleave_pcm_frames
               (uint param_1,uint param_2,long param_3,long *param_4,undefined4 *param_5)

{
  long lVar1;
  long *plVar2;
  undefined4 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar4 = (ulong)param_2;
  if (param_1 == 2) {
    if (param_3 != 0) {
      lVar1 = 0;
      do {
        plVar2 = param_4;
        puVar3 = param_5;
        uVar5 = uVar4;
        if (param_2 != 0) {
          do {
            uVar5 = uVar5 - 1;
            *(undefined2 *)puVar3 = *(undefined2 *)(*plVar2 + lVar1 * 2);
            plVar2 = plVar2 + 1;
            puVar3 = (undefined4 *)((long)puVar3 + 2);
          } while (uVar5 != 0);
        }
        lVar1 = lVar1 + 1;
        param_5 = (undefined4 *)((long)param_5 + uVar4 * 2);
      } while (lVar1 != param_3);
    }
  }
  else if (param_1 == 5) {
    if (param_3 != 0) {
      lVar1 = 0;
      do {
        plVar2 = param_4;
        puVar3 = param_5;
        uVar5 = uVar4;
        if (param_2 != 0) {
          do {
            uVar5 = uVar5 - 1;
            *puVar3 = *(undefined4 *)(*plVar2 + lVar1 * 4);
            plVar2 = plVar2 + 1;
            puVar3 = puVar3 + 1;
          } while (uVar5 != 0);
        }
        lVar1 = lVar1 + 1;
        param_5 = param_5 + uVar4;
      } while (lVar1 != param_3);
    }
  }
  else if (param_3 != 0) {
    lVar1 = 0;
    uVar5 = (ulong)*(uint *)(&DAT_00281c10 + (ulong)param_1 * 4);
    do {
      if (param_2 != 0) {
        plVar2 = param_4;
        puVar3 = param_5;
        uVar6 = uVar4;
        do {
          memcpy(puVar3,(void *)(*plVar2 + lVar1 * uVar5),uVar5);
          uVar6 = uVar6 - 1;
          puVar3 = (undefined4 *)((long)puVar3 + uVar5);
          plVar2 = plVar2 + 1;
        } while (uVar6 != 0);
      }
      lVar1 = lVar1 + 1;
      param_5 = (undefined4 *)((long)param_5 + uVar5 * uVar4);
    } while (lVar1 != param_3);
  }
  return;
}


// ===== 005cb394  ma_biquad_config_init =====

void ma_biquad_config_init
               (undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
               undefined4 param_9)

{
  *param_1 = param_8;
  param_1[1] = param_9;
  *(undefined8 *)(param_1 + 2) = param_2;
  *(undefined8 *)(param_1 + 4) = param_3;
  *(undefined8 *)(param_1 + 6) = param_4;
  *(undefined8 *)(param_1 + 8) = param_5;
  *(undefined8 *)(param_1 + 10) = param_6;
  *(undefined8 *)(param_1 + 0xc) = param_7;
  return;
}


// ===== 005cb3a8  ma_biquad_get_heap_size =====

undefined8 ma_biquad_get_heap_size(long param_1,long *param_2)

{
  if (((param_2 != (long *)0x0) && (*param_2 = 0, param_1 != 0)) && (*(uint *)(param_1 + 4) != 0)) {
    *param_2 = (ulong)*(uint *)(param_1 + 4) << 3;
    return 0;
  }
  return 0xfffffffe;
}


// ===== 005cb3d4  ma_biquad_init_preallocated =====

undefined8 ma_biquad_init_preallocated(long param_1,void *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (param_3 != (undefined8 *)0x0) {
    param_3[1] = 0;
    *param_3 = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    param_3[5] = 0;
    param_3[4] = 0;
    param_3[7] = 0;
    param_3[6] = 0;
    if ((param_1 != 0) && (uVar1 = *(uint *)(param_1 + 4), uVar1 != 0)) {
      param_3[6] = param_2;
      if (param_2 != (void *)0x0) {
        memset(param_2,0,(ulong)uVar1 << 3);
      }
      param_3[4] = param_2;
      param_3[5] = (void *)((long)param_2 + (ulong)uVar1 * 4);
      uVar2 = ma_biquad_reinit(param_1,param_3);
      return uVar2;
    }
  }
  return 0xfffffffe;
}


// ===== 005cb45c  ma_biquad_init =====

ulong ma_biquad_init(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  void *__s;
  ulong uVar2;
  size_t __size;
  
  if ((param_1 == 0) || (*(uint *)(param_1 + 4) == 0)) {
    return 0xfffffffe;
  }
  __size = (ulong)*(uint *)(param_1 + 4) << 3;
  if (param_2 == (undefined8 *)0x0) {
    __s = malloc(__size);
  }
  else {
    if ((code *)param_2[1] == (code *)0x0) {
      return 0xfffffffc;
    }
    __s = (void *)(*(code *)param_2[1])(__size,*param_2);
  }
  if (__s == (void *)0x0) {
    return 0xfffffffc;
  }
  if (param_3 == (undefined8 *)0x0) {
    uVar2 = 0xfffffffe;
  }
  else {
    param_3[1] = 0;
    *param_3 = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    param_3[5] = 0;
    param_3[4] = 0;
    param_3[7] = 0;
    param_3[6] = 0;
    uVar1 = *(uint *)(param_1 + 4);
    if (uVar1 == 0) {
      uVar2 = 0xfffffffe;
    }
    else {
      param_3[6] = __s;
      memset(__s,0,(ulong)uVar1 << 3);
      param_3[4] = __s;
      param_3[5] = (void *)((long)__s + (ulong)uVar1 * 4);
      uVar2 = ma_biquad_reinit(param_1,param_3);
      if ((int)uVar2 == 0) {
        *(undefined4 *)(param_3 + 7) = 1;
        return uVar2;
      }
    }
  }
  if (param_2 == (undefined8 *)0x0) {
    free(__s);
  }
  else {
    if ((code *)param_2[3] == (code *)0x0) {
      return uVar2;
    }
    (*(code *)param_2[3])(__s,*param_2);
  }
  return uVar2 & 0xffffffff;
}


// ===== 005cb57c  ma_biquad_uninit =====

void ma_biquad_uninit(long param_1,undefined8 *param_2)

{
  void *__ptr;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x38) != 0)) &&
     (__ptr = *(void **)(param_1 + 0x30), __ptr != (void *)0x0)) {
    if (param_2 == (undefined8 *)0x0) {
      free(__ptr);
      return;
    }
    if ((code *)param_2[3] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005cb5a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_2[3])(__ptr,*param_2);
      return;
    }
  }
  return;
}


// ===== 005cb5ac  ma_biquad_clear_cache =====

undefined8 ma_biquad_clear_cache(long param_1)

{
  if (param_1 != 0) {
    **(undefined4 **)(param_1 + 0x20) = 0;
    **(undefined4 **)(param_1 + 0x28) = 0;
    return 0;
  }
  return 0xfffffffe;
}


// ===== 005cb5dc  ma_biquad_process_pcm_frames =====

undefined4 ma_biquad_process_pcm_frames(int *param_1,long param_2,long param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  
  uVar19 = 0xfffffffe;
  if (((param_1 != (int *)0x0) && (param_2 != 0)) && (param_3 != 0)) {
    if (*param_1 == 5) {
      if (param_4 != 0) {
        uVar10 = (ulong)(uint)param_1[1];
        uVar9 = 0;
        do {
          fVar13 = (float)param_1[5];
          fVar14 = (float)param_1[6];
          iVar17 = param_1[3];
          iVar15 = param_1[4];
          lVar11 = 0;
          iVar16 = param_1[2];
          do {
            lVar7 = *(long *)(param_1 + 8);
            uVar19 = *(undefined4 *)(param_3 + lVar11);
            fVar21 = *(float *)(*(long *)(param_1 + 10) + lVar11);
            fVar18 = (float)NEON_fmadd(iVar16,uVar19,*(undefined4 *)(lVar7 + lVar11));
            *(float *)(param_2 + lVar11) = fVar18;
            fVar20 = (float)NEON_fmadd(iVar17,uVar19,fVar18 * -fVar13);
            uVar19 = NEON_fmadd(iVar15,uVar19,fVar18 * -fVar14);
            *(float *)(lVar7 + lVar11) = fVar21 + fVar20;
            *(undefined4 *)(*(long *)(param_1 + 10) + lVar11) = uVar19;
            lVar11 = lVar11 + 4;
          } while (uVar10 * 4 - lVar11 != 0);
          uVar10 = (ulong)(uint)param_1[1];
          uVar9 = (ulong)((int)uVar9 + 1);
          param_2 = param_2 + uVar10 * 4;
          param_3 = param_3 + uVar10 * 4;
        } while (uVar9 < param_4);
      }
    }
    else {
      if (*param_1 != 2) {
        return 0xfffffffe;
      }
      if (param_4 != 0) {
        uVar10 = (ulong)(uint)param_1[1];
        uVar9 = 0;
        do {
          iVar15 = param_1[2];
          iVar17 = param_1[3];
          iVar16 = param_1[4];
          iVar3 = param_1[5];
          iVar4 = param_1[6];
          uVar12 = 0;
          do {
            lVar7 = uVar12 * 2;
            lVar11 = *(long *)(param_1 + 8);
            lVar8 = uVar12 * 4;
            uVar12 = uVar12 + 1;
            sVar6 = *(short *)(param_3 + lVar7);
            iVar5 = *(int *)(*(long *)(param_1 + 10) + lVar8);
            iVar1 = *(int *)(lVar11 + lVar8) + iVar15 * sVar6 >> 0xe;
            iVar2 = iVar1;
            if (0x7ffe < iVar1) {
              iVar2 = 0x7fff;
            }
            if (iVar2 == -0x8000 || iVar2 + 0x8000 < 0 != SCARRY4(iVar2,0x8000)) {
              iVar2 = -0x8000;
            }
            *(short *)(param_2 + lVar7) = (short)iVar2;
            *(int *)(lVar11 + lVar8) = (iVar5 + iVar17 * sVar6) - iVar1 * iVar3;
            *(int *)(*(long *)(param_1 + 10) + lVar8) = iVar16 * sVar6 - iVar1 * iVar4;
          } while (uVar10 != uVar12);
          uVar10 = (ulong)(uint)param_1[1];
          uVar9 = (ulong)((int)uVar9 + 1);
          param_2 = param_2 + uVar10 * 2;
          param_3 = param_3 + uVar10 * 2;
        } while (uVar9 < param_4);
      }
    }
    uVar19 = 0;
  }
  return uVar19;
}


// ===== 005cb750  ma_biquad_get_latency =====

long ma_biquad_get_latency(long param_1)

{
  return (ulong)(param_1 != 0) << 1;
}


// ===== 005cb760  ma_lpf1_config_init =====

void ma_lpf1_config_init(undefined4 *param_1,undefined8 param_2,undefined4 param_3,
                        undefined4 param_4,undefined4 param_5)

{
  if (param_1 != (undefined4 *)0x0) {
    *(undefined8 *)(param_1 + 2) = 0;
  }
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = param_5;
  *(undefined8 *)(param_1 + 4) = param_2;
  *(undefined8 *)(param_1 + 6) = 0x3fe0000000000000;
  return;
}


// ===== 005cb780  ma_lpf2_config_init =====

void ma_lpf2_config_init(undefined4 *param_1,undefined8 param_2,double param_3,undefined4 param_4,
                        undefined4 param_5,undefined4 param_6)

{
  double dVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    *(undefined8 *)(param_1 + 2) = 0;
  }
  *param_1 = param_4;
  param_1[1] = param_5;
  dVar1 = DAT_0024e8c0;
  param_1[2] = param_6;
  if (param_3 != 0.0) {
    dVar1 = param_3;
  }
  *(undefined8 *)(param_1 + 4) = param_2;
  *(double *)(param_1 + 6) = dVar1;
  return;
}


// ===== 005cb7a8  ma_lpf1_get_heap_size =====

undefined8 ma_lpf1_get_heap_size(long param_1,ulong *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffe;
  if (((param_1 != 0) && (param_2 != (ulong *)0x0)) && (*(uint *)(param_1 + 4) != 0)) {
    uVar1 = 0;
    *param_2 = (ulong)*(uint *)(param_1 + 4) * 4 + 7 & 0x7fffffff8;
  }
  return uVar1;
}


// ===== 005cb7d8  ma_lpf1_init_preallocated =====

undefined8 ma_lpf1_init_preallocated(int *param_1,void *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  int iVar5;
  ulong __n;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  
  if (param_3 != (int *)0x0) {
    param_3[8] = 0;
    param_3[9] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[0] = 0;
    param_3[1] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    if ((param_1 != (int *)0x0) && (uVar9 = param_1[1], uVar9 != 0)) {
      *(void **)(param_3 + 6) = param_2;
      if ((param_2 != (void *)0x0) && (__n = (ulong)uVar9 * 4 + 7 & 0x7fffffff8, __n != 0)) {
        memset(param_2,0,__n);
      }
      iVar1 = *param_1;
      *(void **)(param_3 + 4) = param_2;
      dVar7 = DAT_0024e678;
      if ((iVar1 == 5) || (iVar1 == 2)) {
        if ((*param_3 == 0) || (*param_3 == iVar1)) {
          iVar2 = param_3[1];
          iVar5 = param_1[1];
          if ((iVar2 == 0) || (bVar3 = iVar2 == iVar5, iVar5 = iVar2, bVar3)) {
            dVar6 = *(double *)(param_1 + 4);
            uVar9 = param_1[2];
            *param_3 = iVar1;
            param_3[1] = iVar5;
            dVar8 = (double)NEON_ucvtf((ulong)uVar9);
            dVar7 = exp((dVar6 * dVar7) / dVar8);
            if (iVar1 == 5) {
              param_3[2] = (int)(float)dVar7;
              return 0;
            }
            param_3[2] = (int)(dVar7 * 16384.0);
            return 0;
          }
        }
        uVar4 = 0xfffffffd;
      }
      else {
        uVar4 = 0xfffffffe;
      }
      return uVar4;
    }
  }
  return 0xfffffffe;
}


// ===== 005cb8f8  ma_lpf1_reinit =====

undefined4 ma_lpf1_reinit(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  
  dVar7 = DAT_0024e678;
  uVar5 = 0xfffffffe;
  if ((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) {
    iVar1 = *param_1;
    if ((iVar1 == 5) || (iVar1 == 2)) {
      if ((*param_2 == 0) || (*param_2 == iVar1)) {
        iVar2 = param_2[1];
        iVar4 = param_1[1];
        if ((iVar2 == 0) || (bVar3 = iVar2 == iVar4, iVar4 = iVar2, bVar3)) {
          dVar6 = *(double *)(param_1 + 4);
          uVar9 = param_1[2];
          *param_2 = iVar1;
          param_2[1] = iVar4;
          dVar8 = (double)NEON_ucvtf((ulong)uVar9);
          dVar7 = exp((dVar6 * dVar7) / dVar8);
          if (iVar1 == 5) {
            param_2[2] = (int)(float)dVar7;
            return 0;
          }
          param_2[2] = (int)(dVar7 * 16384.0);
          return 0;
        }
      }
      uVar5 = 0xfffffffd;
    }
    else {
      uVar5 = 0xfffffffe;
    }
  }
  return uVar5;
}


// ===== 005cb9b8  ma_lpf1_init =====

undefined8 ma_lpf1_init(int *param_1,undefined8 *param_2,int *param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  void *__s;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  uint uVar11;
  
  if ((param_1 == (int *)0x0) || (param_1[1] == 0)) {
    return 0xfffffffe;
  }
  uVar6 = (ulong)(uint)param_1[1] * 4 + 7 & 0x7fffffff8;
  if (uVar6 == 0) {
    __s = (void *)0x0;
  }
  else {
    if (param_2 == (undefined8 *)0x0) {
      __s = malloc(uVar6);
    }
    else {
      if ((code *)param_2[1] == (code *)0x0) {
        return 0xfffffffc;
      }
      __s = (void *)(*(code *)param_2[1])(uVar6,*param_2);
    }
    if (__s == (void *)0x0) {
      return 0xfffffffc;
    }
  }
  if (param_3 != (int *)0x0) {
    param_3[8] = 0;
    param_3[9] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[0] = 0;
    param_3[1] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    uVar11 = param_1[1];
    if (uVar11 != 0) {
      *(void **)(param_3 + 6) = __s;
      if ((__s != (void *)0x0) && (uVar6 = (ulong)uVar11 * 4 + 7 & 0x7fffffff8, uVar6 != 0)) {
        memset(__s,0,uVar6);
      }
      iVar2 = *param_1;
      *(void **)(param_3 + 4) = __s;
      dVar9 = DAT_0024e678;
      if ((iVar2 == 5) || (iVar2 == 2)) {
        if ((*param_3 == 0) || (*param_3 == iVar2)) {
          iVar3 = param_3[1];
          iVar5 = param_1[1];
          if ((iVar3 == 0) || (bVar4 = iVar3 == iVar5, iVar5 = iVar3, bVar4)) {
            dVar8 = *(double *)(param_1 + 4);
            uVar11 = param_1[2];
            *param_3 = iVar2;
            param_3[1] = iVar5;
            dVar10 = (double)NEON_ucvtf((ulong)uVar11);
            dVar9 = exp((dVar8 * dVar9) / dVar10);
            fVar1 = (float)dVar9;
            if (iVar2 != 5) {
              fVar1 = (float)(int)(dVar9 * 16384.0);
            }
            param_3[2] = (int)fVar1;
            param_3[8] = 1;
            return 0;
          }
        }
        uVar7 = 0xfffffffd;
        goto joined_r0x005cbad8;
      }
    }
  }
  uVar7 = 0xfffffffe;
joined_r0x005cbad8:
  if (__s != (void *)0x0) {
    if (param_2 == (undefined8 *)0x0) {
      free(__s);
    }
    else if ((code *)param_2[3] != (code *)0x0) {
      (*(code *)param_2[3])(__s,*param_2);
    }
  }
  return uVar7;
}


// ===== 005cbb68  ma_lpf1_uninit =====

void ma_lpf1_uninit(long param_1,undefined8 *param_2)

{
  void *__ptr;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x20) != 0)) &&
     (__ptr = *(void **)(param_1 + 0x18), __ptr != (void *)0x0)) {
    if (param_2 == (undefined8 *)0x0) {
      free(__ptr);
      return;
    }
    if ((code *)param_2[3] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005cbb8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_2[3])(__ptr,*param_2);
      return;
    }
  }
  return;
}


// ===== 005cbb98  ma_lpf1_clear_cache =====

undefined8 ma_lpf1_clear_cache(long param_1)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    return 0;
  }
  return 0xfffffffe;
}


// ===== 005cbbbc  ma_lpf1_process_pcm_frames =====

undefined4 ma_lpf1_process_pcm_frames(int *param_1,long param_2,long param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  undefined4 uVar10;
  
  uVar10 = 0xfffffffe;
  if (((param_1 != (int *)0x0) && (param_2 != 0)) && (param_3 != 0)) {
    if (*param_1 == 5) {
      if (param_4 != 0) {
        uVar4 = (ulong)(uint)param_1[1];
        uVar3 = 0;
        do {
          fVar9 = (float)param_1[2];
          lVar6 = 0;
          do {
            lVar7 = *(long *)(param_1 + 4);
            uVar10 = NEON_fmadd(1.0 - fVar9,*(undefined4 *)(param_3 + lVar6),
                                fVar9 * *(float *)(lVar7 + lVar6));
            *(undefined4 *)(param_2 + lVar6) = uVar10;
            *(undefined4 *)(lVar7 + lVar6) = uVar10;
            lVar6 = lVar6 + 4;
          } while (uVar4 * 4 - lVar6 != 0);
          uVar4 = (ulong)(uint)param_1[1];
          uVar3 = (ulong)((int)uVar3 + 1);
          param_2 = param_2 + uVar4 * 4;
          param_3 = param_3 + uVar4 * 4;
        } while (uVar3 < param_4);
      }
    }
    else {
      if (*param_1 != 2) {
        return 0xfffffffe;
      }
      if (param_4 != 0) {
        uVar4 = (ulong)(uint)param_1[1];
        uVar3 = 0;
        do {
          iVar2 = param_1[2];
          uVar5 = 0;
          do {
            lVar6 = *(long *)(param_1 + 4);
            lVar7 = uVar5 * 4;
            lVar8 = uVar5 * 2;
            uVar5 = uVar5 + 1;
            iVar1 = *(int *)(lVar6 + lVar7) * iVar2 +
                    (0x4000 - iVar2) * (int)*(short *)(param_3 + lVar8) >> 0xe;
            *(short *)(param_2 + lVar8) = (short)iVar1;
            *(int *)(lVar6 + lVar7) = iVar1;
          } while (uVar4 != uVar5);
          uVar4 = (ulong)(uint)param_1[1];
          uVar3 = (ulong)((int)uVar3 + 1);
          param_2 = param_2 + uVar4 * 2;
          param_3 = param_3 + uVar4 * 2;
        } while (uVar3 < param_4);
      }
    }
    uVar10 = 0;
  }
  return uVar10;
}


// ===== 005cbcc8  ma_lpf1_get_latency =====

bool ma_lpf1_get_latency(long param_1)

{
  return param_1 != 0;
}


// ===== 005cbcd4  ma_lpf2_get_heap_size =====

undefined8 ma_lpf2_get_heap_size(long param_1,long *param_2)

{
  uint uVar1;
  
  if (param_2 != (long *)0x0) {
    uVar1 = *(uint *)(param_1 + 4);
    *param_2 = 0;
    if (uVar1 != 0) {
      *param_2 = (ulong)uVar1 << 3;
      return 0;
    }
  }
  return 0xfffffffe;
}


// ===== 005cbcfc  ma_lpf2_init_preallocated =====

void ma_lpf2_init_preallocated(undefined4 *param_1,void *param_2,undefined8 *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 local_80;
  uint uStack_7c;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_3 != (undefined8 *)0x0) {
    param_3[1] = 0;
    *param_3 = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    param_3[5] = 0;
    param_3[4] = 0;
    param_3[7] = 0;
    param_3[6] = 0;
    if (param_1 != (undefined4 *)0x0) {
      dVar6 = *(double *)(param_1 + 6);
      dVar5 = (double)NEON_ucvtf((ulong)(uint)param_1[2]);
      dVar5 = (*(double *)(param_1 + 4) * DAT_0024e878) / dVar5;
      dVar4 = sin(dVar5);
      local_58 = sin(DAT_0024e8b8 - dVar5);
      local_80 = *param_1;
      uStack_7c = param_1[1];
      uVar1 = (ulong)uStack_7c;
      dStack_70 = 1.0 - local_58;
      dVar4 = dVar4 / (dVar6 + dVar6);
      param_3[1] = 0;
      *param_3 = 0;
      param_3[3] = 0;
      param_3[2] = 0;
      local_58 = local_58 * -2.0;
      param_3[5] = 0;
      param_3[4] = 0;
      param_3[7] = 0;
      param_3[6] = 0;
      local_78 = dStack_70 * 0.5;
      dStack_60 = dVar4 + 1.0;
      dStack_50 = 1.0 - dVar4;
      local_68 = local_78;
      if (uStack_7c != 0) {
        param_3[6] = param_2;
        if (param_2 != (void *)0x0) {
          memset(param_2,0,uVar1 << 3);
        }
        param_3[4] = param_2;
        param_3[5] = (void *)((long)param_2 + uVar1 * 4);
        uVar3 = ma_biquad_reinit(&local_80,param_3);
        goto LAB_005cbe04;
      }
    }
  }
  uVar3 = 0xfffffffe;
LAB_005cbe04:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 005cbe30  ma_lpf2_init =====

void ma_lpf2_init(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  size_t __size;
  void *__s;
  ulong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 local_90;
  uint uStack_8c;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_1[1] == 0) {
    uVar2 = 0xfffffffe;
    goto LAB_005cbfb4;
  }
  __size = (ulong)(uint)param_1[1] << 3;
  if (param_2 == (undefined8 *)0x0) {
    __s = malloc(__size);
    dVar3 = DAT_0024e878;
joined_r0x005cbf74:
    DAT_0024e878 = dVar3;
    if (__s != (void *)0x0) {
      if (param_3 == (undefined8 *)0x0) {
LAB_005cbf80:
        uVar2 = 0xfffffffe;
      }
      else {
        param_3[1] = 0;
        *param_3 = 0;
        param_3[3] = 0;
        param_3[2] = 0;
        param_3[5] = 0;
        param_3[4] = 0;
        param_3[7] = 0;
        param_3[6] = 0;
        dVar5 = *(double *)(param_1 + 6);
        dVar4 = (double)NEON_ucvtf((ulong)(uint)param_1[2]);
        dVar4 = (*(double *)(param_1 + 4) * dVar3) / dVar4;
        dVar3 = sin(dVar4);
        local_68 = sin(DAT_0024e8b8 - dVar4);
        local_90 = *param_1;
        uStack_8c = param_1[1];
        uVar2 = (ulong)uStack_8c;
        dStack_80 = 1.0 - local_68;
        dVar3 = dVar3 / (dVar5 + dVar5);
        param_3[1] = 0;
        *param_3 = 0;
        param_3[3] = 0;
        param_3[2] = 0;
        local_68 = local_68 * -2.0;
        param_3[5] = 0;
        param_3[4] = 0;
        param_3[7] = 0;
        param_3[6] = 0;
        local_88 = dStack_80 * 0.5;
        dStack_70 = dVar3 + 1.0;
        dStack_60 = 1.0 - dVar3;
        local_78 = local_88;
        if (uStack_8c == 0) goto LAB_005cbf80;
        param_3[6] = __s;
        memset(__s,0,uVar2 << 3);
        param_3[4] = __s;
        param_3[5] = (void *)((long)__s + uVar2 * 4);
        uVar2 = ma_biquad_reinit(&local_90,param_3);
        if ((int)uVar2 == 0) {
          *(undefined4 *)(param_3 + 7) = 1;
          goto LAB_005cbfb4;
        }
      }
      if (param_2 == (undefined8 *)0x0) {
        free(__s);
      }
      else {
        if ((code *)param_2[3] == (code *)0x0) goto LAB_005cbfb4;
        (*(code *)param_2[3])(__s,*param_2);
      }
      uVar2 = uVar2 & 0xffffffff;
      goto LAB_005cbfb4;
    }
  }
  else if ((code *)param_2[1] != (code *)0x0) {
    __s = (void *)(*(code *)param_2[1])(__size,*param_2);
    dVar3 = DAT_0024e878;
    goto joined_r0x005cbf74;
  }
  uVar2 = 0xfffffffc;
LAB_005cbfb4:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


// ===== 005cbfe4  ma_lpf2_uninit =====

void ma_lpf2_uninit(long param_1,undefined8 *param_2)

{
  void *__ptr;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x38) != 0)) &&
     (__ptr = *(void **)(param_1 + 0x30), __ptr != (void *)0x0)) {
    if (param_2 == (undefined8 *)0x0) {
      free(__ptr);
      return;
    }
    if ((code *)param_2[3] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005cc008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_2[3])(__ptr,*param_2);
      return;
    }
  }
  return;
}


// ===== 005cc014  ma_lpf2_reinit =====

undefined4 ma_lpf2_reinit(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 local_80;
  double dStack_78;
  double local_70;
  double dStack_68;
  double local_60;
  double dStack_58;
  double local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = 0xfffffffe;
  if ((param_1 != (undefined8 *)0x0) && (param_2 != 0)) {
    dVar5 = (double)param_1[3];
    dVar4 = (double)NEON_ucvtf((ulong)*(uint *)(param_1 + 1));
    dVar4 = ((double)param_1[2] * DAT_0024e878) / dVar4;
    dVar3 = sin(dVar4);
    dStack_58 = sin(DAT_0024e8b8 - dVar4);
    local_80 = *param_1;
    local_70 = 1.0 - dStack_58;
    dVar3 = dVar3 / (dVar5 + dVar5);
    dStack_58 = dStack_58 * -2.0;
    dStack_78 = local_70 * 0.5;
    local_60 = dVar3 + 1.0;
    local_50 = 1.0 - dVar3;
    dStack_68 = dStack_78;
    uVar2 = ma_biquad_reinit(&local_80,param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005cc104  ma_lpf2_clear_cache =====

undefined8 ma_lpf2_clear_cache(long param_1)

{
  if (param_1 != 0) {
    **(undefined4 **)(param_1 + 0x20) = 0;
    **(undefined4 **)(param_1 + 0x28) = 0;
    return 0;
  }
  return 0xfffffffe;
}


// ===== 005cc134  ma_lpf2_process_pcm_frames =====

undefined8 ma_lpf2_process_pcm_frames(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = ma_biquad_process_pcm_frames();
    return uVar1;
  }
  return 0xfffffffe;
}


// ===== 005cc144  ma_lpf2_get_latency =====

long ma_lpf2_get_latency(long param_1)

{
  return (ulong)(param_1 != 0) << 1;
}


// ===== 005cc154  ma_lpf_config_init =====

void ma_lpf_config_init(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5,uint param_6)

{
  if (param_1 != (undefined4 *)0x0) {
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
  }
  *param_1 = param_3;
  param_1[1] = param_4;
  if (7 < param_6) {
    param_6 = 8;
  }
  param_1[2] = param_5;
  *(undefined8 *)(param_1 + 4) = param_2;
  param_1[6] = param_6;
  return;
}


// ===== 005cc180  ma_lpf_get_heap_size =====

undefined8 ma_lpf_get_heap_size(long param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  if ((((param_2 != (long *)0x0) && (*param_2 = 0, param_1 != 0)) &&
      (uVar2 = *(uint *)(param_1 + 4), uVar2 != 0)) &&
     (uVar3 = *(uint *)(param_1 + 0x18), uVar3 < 9)) {
    lVar4 = 0;
    if ((uVar3 & 1) != 0) {
      lVar4 = ((ulong)uVar2 * 4 + 7 & 0x7fffffff8) + 0x28;
    }
    if (1 < uVar3) {
      lVar1 = (ulong)uVar2 * 8 + 0x40;
      lVar4 = lVar1 + lVar4 + lVar1 * (ulong)((uVar3 >> 1) - 1);
    }
    *param_2 = lVar4;
    return 0;
  }
  return 0xfffffffe;
}


// ===== 005cc1f4  ma_lpf_init_preallocated =====

undefined8 ma_lpf_init_preallocated(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (param_3 != (undefined8 *)0x0) {
    param_3[6] = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    param_3[5] = 0;
    param_3[4] = 0;
    param_3[1] = 0;
    *param_3 = 0;
    uVar1 = FUN_005b4524();
    return uVar1;
  }
  return 0xfffffffe;
}


// ===== 005cc218  ma_lpf_init =====

ulong ma_lpf_init(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  void *__ptr;
  ulong uVar4;
  size_t __size;
  
  if (((param_1 == 0) || (uVar2 = *(uint *)(param_1 + 4), uVar2 == 0)) ||
     (uVar3 = *(uint *)(param_1 + 0x18), 8 < uVar3)) {
    return 0xfffffffe;
  }
  __size = 0;
  if ((uVar3 & 1) != 0) {
    __size = ((ulong)uVar2 * 4 + 7 & 0x7fffffff8) + 0x28;
  }
  if (1 < uVar3) {
    lVar1 = (ulong)uVar2 * 8 + 0x40;
    __size = __size + lVar1 + lVar1 * (ulong)((uVar3 >> 1) - 1);
  }
  if (__size == 0) {
    __ptr = (void *)0x0;
LAB_005cc2f0:
    if (param_3 == (undefined8 *)0x0) {
      uVar4 = 0xfffffffe;
    }
    else {
      param_3[6] = 0;
      param_3[3] = 0;
      param_3[2] = 0;
      param_3[5] = 0;
      param_3[4] = 0;
      param_3[1] = 0;
      *param_3 = 0;
      uVar4 = FUN_005b4524(param_1,__ptr,param_3,1);
      if ((int)uVar4 == 0) {
        *(undefined4 *)(param_3 + 6) = 1;
        return uVar4;
      }
    }
    if (__ptr != (void *)0x0) {
      if (param_2 == (undefined8 *)0x0) {
        uVar4 = uVar4 & 0xffffffff;
        free(__ptr);
      }
      else if ((code *)param_2[3] != (code *)0x0) {
        uVar4 = uVar4 & 0xffffffff;
        (*(code *)param_2[3])(__ptr,*param_2);
      }
    }
  }
  else {
    if (param_2 == (undefined8 *)0x0) {
      __ptr = malloc(__size);
LAB_005cc2e0:
      if (__ptr != (void *)0x0) goto LAB_005cc2f0;
    }
    else if ((code *)param_2[1] != (code *)0x0) {
      __ptr = (void *)(*(code *)param_2[1])(__size,*param_2);
      goto LAB_005cc2e0;
    }
    uVar4 = 0xfffffffc;
  }
  return uVar4;
}


// ===== 005cc36c  ma_lpf_reinit =====

void ma_lpf_reinit(undefined8 param_1,undefined8 param_2)

{
  FUN_005b4524(param_1,0,param_2,0);
  return;
}


// ===== 005cc37c  ma_lpf_clear_cache =====

undefined8 ma_lpf_clear_cache(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0xc) != 0) {
      lVar2 = 0;
      uVar3 = 0;
      do {
        if (*(long *)(param_1 + 0x18) != 0) {
          *(undefined4 *)(*(long *)(param_1 + 0x18) + lVar2 + 8) = 0;
        }
        uVar3 = uVar3 + 1;
        lVar2 = lVar2 + 0x28;
      } while (uVar3 < *(uint *)(param_1 + 0xc));
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      lVar2 = 0;
      uVar3 = 0;
      do {
        if (*(long *)(param_1 + 0x20) != 0) {
          lVar1 = *(long *)(param_1 + 0x20) + lVar2;
          **(undefined4 **)(lVar1 + 0x20) = 0;
          **(undefined4 **)(lVar1 + 0x28) = 0;
        }
        uVar3 = uVar3 + 1;
        lVar2 = lVar2 + 0x40;
      } while (uVar3 < *(uint *)(param_1 + 0x10));
    }
    return 0;
  }
  return 0xfffffffe;
}


// ===== 005cc424  ma_lpf_process_pcm_frames =====

undefined8 ma_lpf_process_pcm_frames(uint *param_1,void *param_2,void *param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short sVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  void *pvVar16;
  long lVar17;
  void *pvVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  
  if (param_1 == (uint *)0x0) {
    return 0xfffffffe;
  }
  if (param_2 == param_3) {
    if (param_1[3] != 0) {
      if (param_2 == (void *)0x0) {
        return 0xfffffffe;
      }
      uVar12 = 0;
      do {
        lVar14 = *(long *)(param_1 + 6);
        if (lVar14 == 0) {
          return 0xfffffffe;
        }
        iVar5 = *(int *)(lVar14 + uVar12 * 0x28);
        if (iVar5 == 5) {
          if (param_4 != 0) {
            lVar14 = lVar14 + uVar12 * 0x28;
            uVar21 = 0;
            uVar13 = (ulong)*(uint *)(lVar14 + 4);
            pvVar16 = param_2;
            pvVar18 = param_2;
            do {
              fVar22 = *(float *)(lVar14 + 8);
              lVar15 = 0;
              do {
                lVar17 = *(long *)(lVar14 + 0x10);
                uVar24 = NEON_fmadd(1.0 - fVar22,*(undefined4 *)((long)pvVar16 + lVar15),
                                    fVar22 * *(float *)(lVar17 + lVar15));
                *(undefined4 *)((long)pvVar18 + lVar15) = uVar24;
                *(undefined4 *)(lVar17 + lVar15) = uVar24;
                lVar15 = lVar15 + 4;
              } while (uVar13 * 4 - lVar15 != 0);
              uVar13 = (ulong)*(uint *)(lVar14 + 4);
              uVar21 = (ulong)((int)uVar21 + 1);
              pvVar18 = (void *)((long)pvVar18 + uVar13 * 4);
              pvVar16 = (void *)((long)pvVar16 + uVar13 * 4);
            } while (uVar21 < param_4);
          }
        }
        else {
          if (iVar5 != 2) {
            return 0xfffffffe;
          }
          if (param_4 != 0) {
            lVar14 = lVar14 + uVar12 * 0x28;
            uVar21 = 0;
            uVar13 = (ulong)*(uint *)(lVar14 + 4);
            pvVar16 = param_2;
            pvVar18 = param_2;
            do {
              iVar5 = *(int *)(lVar14 + 8);
              uVar20 = 0;
              do {
                lVar15 = *(long *)(lVar14 + 0x10);
                lVar17 = uVar20 * 4;
                lVar19 = uVar20 * 2;
                uVar20 = uVar20 + 1;
                iVar1 = *(int *)(lVar15 + lVar17) * iVar5 +
                        (0x4000 - iVar5) * (int)*(short *)((long)pvVar16 + lVar19) >> 0xe;
                *(short *)((long)pvVar18 + lVar19) = (short)iVar1;
                *(int *)(lVar15 + lVar17) = iVar1;
              } while (uVar13 != uVar20);
              uVar13 = (ulong)*(uint *)(lVar14 + 4);
              uVar21 = (ulong)((int)uVar21 + 1);
              pvVar18 = (void *)((long)pvVar18 + uVar13 * 2);
              pvVar16 = (void *)((long)pvVar16 + uVar13 * 2);
            } while (uVar21 < param_4);
          }
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < param_1[3]);
    }
    if (param_1[4] != 0) {
      lVar14 = 0;
      uVar12 = 0;
      while( true ) {
        if (*(long *)(param_1 + 8) == 0) {
          return 0xfffffffe;
        }
        uVar11 = ma_biquad_process_pcm_frames
                           (*(long *)(param_1 + 8) + lVar14,param_2,param_2,param_4);
        if ((int)uVar11 != 0) break;
        uVar12 = uVar12 + 1;
        lVar14 = lVar14 + 0x40;
        if (param_1[4] <= uVar12) {
          return uVar11;
        }
      }
      return uVar11;
    }
  }
  else if (*param_1 == 5) {
    if (param_4 != 0) {
      uVar12 = (ulong)param_1[1];
      uVar21 = 0;
      do {
        memmove(param_2,param_3,
                (ulong)(uint)(*(int *)(&DAT_00281c10 + (ulong)*param_1 * 4) * (int)uVar12));
        if (param_1[3] != 0) {
          uVar12 = 0;
          do {
            lVar14 = 0;
            lVar15 = *(long *)(param_1 + 6) + uVar12 * 0x28;
            fVar22 = *(float *)(lVar15 + 8);
            uVar4 = *(uint *)(lVar15 + 4);
            do {
              lVar17 = *(long *)(lVar15 + 0x10);
              uVar24 = NEON_fmadd(1.0 - fVar22,*(undefined4 *)((long)param_2 + lVar14),
                                  fVar22 * *(float *)(lVar17 + lVar14));
              *(undefined4 *)((long)param_2 + lVar14) = uVar24;
              *(undefined4 *)(lVar17 + lVar14) = uVar24;
              lVar14 = lVar14 + 4;
            } while ((ulong)uVar4 * 4 - lVar14 != 0);
            uVar12 = uVar12 + 1;
          } while (uVar12 < param_1[3]);
        }
        if (param_1[4] != 0) {
          uVar12 = 0;
          do {
            lVar14 = 0;
            lVar15 = *(long *)(param_1 + 8) + uVar12 * 0x40;
            fVar22 = *(float *)(lVar15 + 0x14);
            fVar23 = *(float *)(lVar15 + 0x18);
            uVar4 = *(uint *)(lVar15 + 4);
            uVar26 = *(undefined4 *)(lVar15 + 0xc);
            uVar24 = *(undefined4 *)(lVar15 + 0x10);
            uVar25 = *(undefined4 *)(lVar15 + 8);
            do {
              lVar17 = *(long *)(lVar15 + 0x20);
              uVar28 = *(undefined4 *)((long)param_2 + lVar14);
              fVar30 = *(float *)(*(long *)(lVar15 + 0x28) + lVar14);
              fVar27 = (float)NEON_fmadd(uVar25,uVar28,*(undefined4 *)(lVar17 + lVar14));
              *(float *)((long)param_2 + lVar14) = fVar27;
              fVar29 = (float)NEON_fmadd(uVar26,uVar28,fVar27 * -fVar22);
              uVar28 = NEON_fmadd(uVar24,uVar28,fVar27 * -fVar23);
              *(float *)(lVar17 + lVar14) = fVar30 + fVar29;
              *(undefined4 *)(*(long *)(lVar15 + 0x28) + lVar14) = uVar28;
              lVar14 = lVar14 + 4;
            } while ((ulong)uVar4 * 4 - lVar14 != 0);
            uVar12 = uVar12 + 1;
          } while (uVar12 < param_1[4]);
        }
        uVar12 = (ulong)param_1[1];
        uVar21 = (ulong)((int)uVar21 + 1);
        param_2 = (void *)((long)param_2 + uVar12 * 4);
        param_3 = (void *)((long)param_3 + uVar12 * 4);
      } while (uVar21 < param_4);
    }
  }
  else {
    if (*param_1 != 2) {
      return 0xfffffffd;
    }
    if (param_4 != 0) {
      uVar12 = (ulong)param_1[1];
      uVar21 = 0;
      do {
        memmove(param_2,param_3,
                (ulong)(uint)(*(int *)(&DAT_00281c10 + (ulong)*param_1 * 4) * (int)uVar12));
        if (param_1[3] != 0) {
          uVar12 = 0;
          do {
            uVar13 = 0;
            lVar14 = *(long *)(param_1 + 6) + uVar12 * 0x28;
            uVar4 = *(uint *)(lVar14 + 4);
            iVar5 = *(int *)(lVar14 + 8);
            do {
              lVar15 = *(long *)(lVar14 + 0x10);
              lVar17 = uVar13 * 4;
              lVar19 = uVar13 * 2;
              uVar13 = uVar13 + 1;
              iVar1 = *(int *)(lVar15 + lVar17) * iVar5 +
                      (0x4000 - iVar5) * (int)*(short *)((long)param_2 + lVar19) >> 0xe;
              *(short *)((long)param_2 + lVar19) = (short)iVar1;
              *(int *)(lVar15 + lVar17) = iVar1;
            } while (uVar4 != uVar13);
            uVar12 = uVar12 + 1;
          } while (uVar12 < param_1[3]);
        }
        if (param_1[4] != 0) {
          uVar12 = 0;
          do {
            uVar13 = 0;
            lVar14 = *(long *)(param_1 + 8) + uVar12 * 0x40;
            uVar4 = *(uint *)(lVar14 + 4);
            iVar6 = *(int *)(lVar14 + 8);
            iVar5 = *(int *)(lVar14 + 0xc);
            iVar7 = *(int *)(lVar14 + 0x10);
            iVar1 = *(int *)(lVar14 + 0x14);
            iVar8 = *(int *)(lVar14 + 0x18);
            do {
              lVar19 = uVar13 * 2;
              lVar15 = *(long *)(lVar14 + 0x20);
              lVar17 = uVar13 * 4;
              uVar13 = uVar13 + 1;
              sVar10 = *(short *)((long)param_2 + lVar19);
              iVar9 = *(int *)(*(long *)(lVar14 + 0x28) + lVar17);
              iVar2 = *(int *)(lVar15 + lVar17) + iVar6 * sVar10 >> 0xe;
              iVar3 = iVar2;
              if (0x7ffe < iVar2) {
                iVar3 = 0x7fff;
              }
              if (iVar3 == -0x8000 || iVar3 + 0x8000 < 0 != SCARRY4(iVar3,0x8000)) {
                iVar3 = -0x8000;
              }
              *(short *)((long)param_2 + lVar19) = (short)iVar3;
              *(int *)(lVar15 + lVar17) = (iVar9 + iVar5 * sVar10) - iVar2 * iVar1;
              *(int *)(*(long *)(lVar14 + 0x28) + lVar17) = iVar7 * sVar10 - iVar2 * iVar8;
            } while (uVar4 != uVar13);
            uVar12 = uVar12 + 1;
          } while (uVar12 < param_1[4]);
        }
        uVar12 = (ulong)param_1[1];
        uVar21 = (ulong)((int)uVar21 + 1);
        param_2 = (void *)((long)param_2 + uVar12 * 2);
        param_3 = (void *)((long)param_3 + uVar12 * 2);
      } while (uVar21 < param_4);
    }
  }
  return 0;
}


// ===== 005cc8cc  ma_lpf_get_latency =====

ulong ma_lpf_get_latency(ulong param_1)

{
  if (param_1 != 0) {
    param_1 = (ulong)(uint)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10) * 2);
  }
  return param_1;
}


// ===== 005cc8dc  ma_hpf1_config_init =====

void ma_hpf1_config_init(undefined4 *param_1,undefined8 param_2,undefined4 param_3,
                        undefined4 param_4,undefined4 param_5)

{
  if (param_1 != (undefined4 *)0x0) {
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
  }
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = param_5;
  *(undefined8 *)(param_1 + 4) = param_2;
  return;
}


// ===== 005cc8f8  ma_hpf2_config_init =====

void ma_hpf2_config_init(undefined4 *param_1,undefined8 param_2,double param_3,undefined4 param_4,
                        undefined4 param_5,undefined4 param_6)

{
  double dVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    *(undefined8 *)(param_1 + 2) = 0;
  }
  *param_1 = param_4;
  param_1[1] = param_5;
  dVar1 = DAT_0024e8c0;
  param_1[2] = param_6;
  if (param_3 != 0.0) {
    dVar1 = param_3;
  }
  *(undefined8 *)(param_1 + 4) = param_2;
  *(double *)(param_1 + 6) = dVar1;
  return;
}


// ===== 005cc920  ma_hpf1_get_heap_size =====

undefined8 ma_hpf1_get_heap_size(long param_1,ulong *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffe;
  if (((param_1 != 0) && (param_2 != (ulong *)0x0)) && (*(uint *)(param_1 + 4) != 0)) {
    uVar1 = 0;
    *param_2 = (ulong)*(uint *)(param_1 + 4) * 4 + 7 & 0x7fffffff8;
  }
  return uVar1;
}


// ===== 005cc950  ma_hpf1_init_preallocated =====

undefined8 ma_hpf1_init_preallocated(int *param_1,void *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  int iVar5;
  ulong __n;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  
  if (param_3 != (int *)0x0) {
    param_3[8] = 0;
    param_3[9] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[0] = 0;
    param_3[1] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    if ((param_1 != (int *)0x0) && (uVar9 = param_1[1], uVar9 != 0)) {
      *(void **)(param_3 + 6) = param_2;
      if ((param_2 != (void *)0x0) && (__n = (ulong)uVar9 * 4 + 7 & 0x7fffffff8, __n != 0)) {
        memset(param_2,0,__n);
      }
      iVar1 = *param_1;
      *(void **)(param_3 + 4) = param_2;
      dVar7 = DAT_0024e678;
      if ((iVar1 == 5) || (iVar1 == 2)) {
        if ((*param_3 == 0) || (*param_3 == iVar1)) {
          iVar2 = param_3[1];
          iVar5 = param_1[1];
          if ((iVar2 == 0) || (bVar3 = iVar2 == iVar5, iVar5 = iVar2, bVar3)) {
            dVar6 = *(double *)(param_1 + 4);
            uVar9 = param_1[2];
            *param_3 = iVar1;
            param_3[1] = iVar5;
            dVar8 = (double)NEON_ucvtf((ulong)uVar9);
            dVar7 = exp((dVar6 * dVar7) / dVar8);
            if (iVar1 == 5) {
              param_3[2] = (int)(float)dVar7;
              return 0;
            }
            param_3[2] = (int)(dVar7 * 16384.0);
            return 0;
          }
        }
        uVar4 = 0xfffffffd;
      }
      else {
        uVar4 = 0xfffffffe;
      }
      return uVar4;
    }
  }
  return 0xfffffffe;
}


// ===== 005cca70  ma_hpf1_reinit =====

undefined4 ma_hpf1_reinit(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  
  dVar7 = DAT_0024e678;
  uVar5 = 0xfffffffe;
  if ((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) {
    iVar1 = *param_1;
    if ((iVar1 == 5) || (iVar1 == 2)) {
      if ((*param_2 == 0) || (*param_2 == iVar1)) {
        iVar2 = param_2[1];
        iVar4 = param_1[1];
        if ((iVar2 == 0) || (bVar3 = iVar2 == iVar4, iVar4 = iVar2, bVar3)) {
          dVar6 = *(double *)(param_1 + 4);
          uVar9 = param_1[2];
          *param_2 = iVar1;
          param_2[1] = iVar4;
          dVar8 = (double)NEON_ucvtf((ulong)uVar9);
          dVar7 = exp((dVar6 * dVar7) / dVar8);
          if (iVar1 == 5) {
            param_2[2] = (int)(float)dVar7;
            return 0;
          }
          param_2[2] = (int)(dVar7 * 16384.0);
          return 0;
        }
      }
      uVar5 = 0xfffffffd;
    }
    else {
      uVar5 = 0xfffffffe;
    }
  }
  return uVar5;
}


// ===== 005ccb30  ma_hpf1_init =====

undefined8 ma_hpf1_init(int *param_1,undefined8 *param_2,int *param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  void *__s;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  uint uVar11;
  
  if ((param_1 == (int *)0x0) || (param_1[1] == 0)) {
    return 0xfffffffe;
  }
  uVar6 = (ulong)(uint)param_1[1] * 4 + 7 & 0x7fffffff8;
  if (uVar6 == 0) {
    __s = (void *)0x0;
  }
  else {
    if (param_2 == (undefined8 *)0x0) {
      __s = malloc(uVar6);
    }
    else {
      if ((code *)param_2[1] == (code *)0x0) {
        return 0xfffffffc;
      }
      __s = (void *)(*(code *)param_2[1])(uVar6,*param_2);
    }
    if (__s == (void *)0x0) {
      return 0xfffffffc;
    }
  }
  if (param_3 != (int *)0x0) {
    param_3[8] = 0;
    param_3[9] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[0] = 0;
    param_3[1] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    uVar11 = param_1[1];
    if (uVar11 != 0) {
      *(void **)(param_3 + 6) = __s;
      if ((__s != (void *)0x0) && (uVar6 = (ulong)uVar11 * 4 + 7 & 0x7fffffff8, uVar6 != 0)) {
        memset(__s,0,uVar6);
      }
      iVar2 = *param_1;
      *(void **)(param_3 + 4) = __s;
      dVar9 = DAT_0024e678;
      if ((iVar2 == 5) || (iVar2 == 2)) {
        if ((*param_3 == 0) || (*param_3 == iVar2)) {
          iVar3 = param_3[1];
          iVar5 = param_1[1];
          if ((iVar3 == 0) || (bVar4 = iVar3 == iVar5, iVar5 = iVar3, bVar4)) {
            dVar8 = *(double *)(param_1 + 4);
            uVar11 = param_1[2];
            *param_3 = iVar2;
            param_3[1] = iVar5;
            dVar10 = (double)NEON_ucvtf((ulong)uVar11);
            dVar9 = exp((dVar8 * dVar9) / dVar10);
            fVar1 = (float)dVar9;
            if (iVar2 != 5) {
              fVar1 = (float)(int)(dVar9 * 16384.0);
            }
            param_3[2] = (int)fVar1;
            param_3[8] = 1;
            return 0;
          }
        }
        uVar7 = 0xfffffffd;
        goto joined_r0x005ccc50;
      }
    }
  }
  uVar7 = 0xfffffffe;
joined_r0x005ccc50:
  if (__s != (void *)0x0) {
    if (param_2 == (undefined8 *)0x0) {
      free(__s);
    }
    else if ((code *)param_2[3] != (code *)0x0) {
      (*(code *)param_2[3])(__s,*param_2);
    }
  }
  return uVar7;
}


// ===== 005ccce0  ma_hpf1_uninit =====

void ma_hpf1_uninit(long param_1,undefined8 *param_2)

{
  void *__ptr;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x20) != 0)) &&
     (__ptr = *(void **)(param_1 + 0x18), __ptr != (void *)0x0)) {
    if (param_2 == (undefined8 *)0x0) {
      free(__ptr);
      return;
    }
    if ((code *)param_2[3] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005ccd04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_2[3])(__ptr,*param_2);
      return;
    }
  }
  return;
}


// ===== 005ccd10  ma_hpf1_process_pcm_frames =====

undefined4 ma_hpf1_process_pcm_frames(int *param_1,long param_2,long param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  undefined4 uVar10;
  
  uVar10 = 0xfffffffe;
  if (((param_1 != (int *)0x0) && (param_2 != 0)) && (param_3 != 0)) {
    if (*param_1 == 5) {
      if (param_4 != 0) {
        uVar4 = (ulong)(uint)param_1[1];
        uVar3 = 0;
        do {
          fVar9 = (float)param_1[2];
          lVar6 = 0;
          do {
            lVar7 = *(long *)(param_1 + 4);
            uVar10 = NEON_fmadd(1.0 - (1.0 - fVar9),*(undefined4 *)(param_3 + lVar6),
                                *(float *)(lVar7 + lVar6) * -(1.0 - fVar9));
            *(undefined4 *)(param_2 + lVar6) = uVar10;
            *(undefined4 *)(lVar7 + lVar6) = uVar10;
            lVar6 = lVar6 + 4;
          } while (uVar4 * 4 - lVar6 != 0);
          uVar4 = (ulong)(uint)param_1[1];
          uVar3 = (ulong)((int)uVar3 + 1);
          param_2 = param_2 + uVar4 * 4;
          param_3 = param_3 + uVar4 * 4;
        } while (uVar3 < param_4);
      }
    }
    else {
      if (*param_1 != 2) {
        return 0xfffffffe;
      }
      if (param_4 != 0) {
        uVar3 = (ulong)(uint)param_1[1];
        uVar4 = 0;
        do {
          iVar2 = param_1[2];
          uVar5 = 0;
          do {
            lVar6 = *(long *)(param_1 + 4);
            lVar7 = uVar5 * 4;
            lVar8 = uVar5 * 2;
            uVar5 = uVar5 + 1;
            iVar1 = *(int *)(lVar6 + lVar7) * (iVar2 + -0x4000) +
                    iVar2 * *(short *)(param_3 + lVar8) >> 0xe;
            *(short *)(param_2 + lVar8) = (short)iVar1;
            *(int *)(lVar6 + lVar7) = iVar1;
          } while (uVar3 != uVar5);
          uVar3 = (ulong)(uint)param_1[1];
          uVar4 = (ulong)((int)uVar4 + 1);
          param_2 = param_2 + uVar3 * 2;
          param_3 = param_3 + uVar3 * 2;
        } while (uVar4 < param_4);
      }
    }
    uVar10 = 0;
  }
  return uVar10;
}


// ===== 005cce20  ma_hpf1_get_latency =====

bool ma_hpf1_get_latency(long param_1)

{
  return param_1 != 0;
}


// ===== 005cce2c  ma_hpf2_get_heap_size =====

undefined8 ma_hpf2_get_heap_size(long param_1,long *param_2)

{
  uint uVar1;
  
  if (param_2 != (long *)0x0) {
    uVar1 = *(uint *)(param_1 + 4);
    *param_2 = 0;
    if (uVar1 != 0) {
      *param_2 = (ulong)uVar1 << 3;
      return 0;
    }
  }
  return 0xfffffffe;
}


// ===== 005cce54  ma_hpf2_init_preallocated =====

void ma_hpf2_init_preallocated(undefined4 *param_1,void *param_2,undefined8 *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 local_80;
  uint uStack_7c;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_3 != (undefined8 *)0x0) {
    param_3[1] = 0;
    *param_3 = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    param_3[5] = 0;
    param_3[4] = 0;
    param_3[7] = 0;
    param_3[6] = 0;
    if (param_1 != (undefined4 *)0x0) {
      dVar6 = *(double *)(param_1 + 6);
      dVar5 = (double)NEON_ucvtf((ulong)(uint)param_1[2]);
      dVar5 = (*(double *)(param_1 + 4) * DAT_0024e878) / dVar5;
      dVar4 = sin(dVar5);
      dVar5 = sin(DAT_0024e8b8 - dVar5);
      local_80 = *param_1;
      uStack_7c = param_1[1];
      uVar1 = (ulong)uStack_7c;
      dVar4 = dVar4 / (dVar6 + dVar6);
      param_3[1] = 0;
      *param_3 = 0;
      param_3[3] = 0;
      param_3[2] = 0;
      local_58 = dVar5 * -2.0;
      param_3[5] = 0;
      param_3[4] = 0;
      param_3[7] = 0;
      param_3[6] = 0;
      local_78 = (dVar5 + 1.0) * 0.5;
      dStack_70 = -(dVar5 + 1.0);
      dStack_60 = dVar4 + 1.0;
      dStack_50 = 1.0 - dVar4;
      local_68 = local_78;
      if (uStack_7c != 0) {
        param_3[6] = param_2;
        if (param_2 != (void *)0x0) {
          memset(param_2,0,uVar1 << 3);
        }
        param_3[4] = param_2;
        param_3[5] = (void *)((long)param_2 + uVar1 * 4);
        uVar3 = ma_biquad_reinit(&local_80,param_3);
        goto LAB_005ccf60;
      }
    }
  }
  uVar3 = 0xfffffffe;
LAB_005ccf60:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 005ccf8c  ma_hpf2_init =====

void ma_hpf2_init(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  size_t __size;
  void *__s;
  ulong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 local_90;
  uint uStack_8c;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_1[1] == 0) {
    uVar2 = 0xfffffffe;
    goto LAB_005cd114;
  }
  __size = (ulong)(uint)param_1[1] << 3;
  if (param_2 == (undefined8 *)0x0) {
    __s = malloc(__size);
    dVar3 = DAT_0024e878;
joined_r0x005cd0d4:
    DAT_0024e878 = dVar3;
    if (__s != (void *)0x0) {
      if (param_3 == (undefined8 *)0x0) {
LAB_005cd0e0:
        uVar2 = 0xfffffffe;
      }
      else {
        param_3[1] = 0;
        *param_3 = 0;
        param_3[3] = 0;
        param_3[2] = 0;
        param_3[5] = 0;
        param_3[4] = 0;
        param_3[7] = 0;
        param_3[6] = 0;
        dVar5 = *(double *)(param_1 + 6);
        dVar4 = (double)NEON_ucvtf((ulong)(uint)param_1[2]);
        dVar4 = (*(double *)(param_1 + 4) * dVar3) / dVar4;
        dVar3 = sin(dVar4);
        dVar4 = sin(DAT_0024e8b8 - dVar4);
        local_90 = *param_1;
        uStack_8c = param_1[1];
        uVar2 = (ulong)uStack_8c;
        dVar3 = dVar3 / (dVar5 + dVar5);
        param_3[1] = 0;
        *param_3 = 0;
        param_3[3] = 0;
        param_3[2] = 0;
        local_68 = dVar4 * -2.0;
        param_3[5] = 0;
        param_3[4] = 0;
        param_3[7] = 0;
        param_3[6] = 0;
        local_88 = (dVar4 + 1.0) * 0.5;
        dStack_80 = -(dVar4 + 1.0);
        dStack_70 = dVar3 + 1.0;
        dStack_60 = 1.0 - dVar3;
        local_78 = local_88;
        if (uStack_8c == 0) goto LAB_005cd0e0;
        param_3[6] = __s;
        memset(__s,0,uVar2 << 3);
        param_3[4] = __s;
        param_3[5] = (void *)((long)__s + uVar2 * 4);
        uVar2 = ma_biquad_reinit(&local_90,param_3);
        if ((int)uVar2 == 0) {
          *(undefined4 *)(param_3 + 7) = 1;
          goto LAB_005cd114;
        }
      }
      if (param_2 == (undefined8 *)0x0) {
        free(__s);
      }
      else {
        if ((code *)param_2[3] == (code *)0x0) goto LAB_005cd114;
        (*(code *)param_2[3])(__s,*param_2);
      }
      uVar2 = uVar2 & 0xffffffff;
      goto LAB_005cd114;
    }
  }
  else if ((code *)param_2[1] != (code *)0x0) {
    __s = (void *)(*(code *)param_2[1])(__size,*param_2);
    dVar3 = DAT_0024e878;
    goto joined_r0x005cd0d4;
  }
  uVar2 = 0xfffffffc;
LAB_005cd114:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


// ===== 005cd144  ma_hpf2_uninit =====

void ma_hpf2_uninit(long param_1,undefined8 *param_2)

{
  void *__ptr;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x38) != 0)) &&
     (__ptr = *(void **)(param_1 + 0x30), __ptr != (void *)0x0)) {
    if (param_2 == (undefined8 *)0x0) {
      free(__ptr);
      return;
    }
    if ((code *)param_2[3] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005cd168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_2[3])(__ptr,*param_2);
      return;
    }
  }
  return;
}


// ===== 005cd174  ma_hpf2_reinit =====

undefined4 ma_hpf2_reinit(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 local_80;
  double dStack_78;
  double local_70;
  double dStack_68;
  double local_60;
  double dStack_58;
  double local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = 0xfffffffe;
  if ((param_1 != (undefined8 *)0x0) && (param_2 != 0)) {
    dVar5 = (double)param_1[3];
    dVar4 = (double)NEON_ucvtf((ulong)*(uint *)(param_1 + 1));
    dVar4 = ((double)param_1[2] * DAT_0024e878) / dVar4;
    dVar3 = sin(dVar4);
    dVar4 = sin(DAT_0024e8b8 - dVar4);
    local_80 = *param_1;
    dVar3 = dVar3 / (dVar5 + dVar5);
    dStack_58 = dVar4 * -2.0;
    dStack_78 = (dVar4 + 1.0) * 0.5;
    local_70 = -(dVar4 + 1.0);
    local_60 = dVar3 + 1.0;
    local_50 = 1.0 - dVar3;
    dStack_68 = dStack_78;
    uVar2 = ma_biquad_reinit(&local_80,param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005cd268  ma_hpf2_process_pcm_frames =====

undefined8 ma_hpf2_process_pcm_frames(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = ma_biquad_process_pcm_frames();
    return uVar1;
  }
  return 0xfffffffe;
}


// ===== 005cd278  ma_hpf2_get_latency =====

long ma_hpf2_get_latency(long param_1)

{
  return (ulong)(param_1 != 0) << 1;
}


// ===== 005cd288  ma_hpf_config_init =====

void ma_hpf_config_init(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5,uint param_6)

{
  if (param_1 != (undefined4 *)0x0) {
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
  }
  *param_1 = param_3;
  param_1[1] = param_4;
  if (7 < param_6) {
    param_6 = 8;
  }
  param_1[2] = param_5;
  *(undefined8 *)(param_1 + 4) = param_2;
  param_1[6] = param_6;
  return;
}


// ===== 005cd2b4  ma_hpf_get_heap_size =====

undefined8 ma_hpf_get_heap_size(long param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  if ((((param_2 != (long *)0x0) && (*param_2 = 0, param_1 != 0)) &&
      (uVar2 = *(uint *)(param_1 + 4), uVar2 != 0)) &&
     (uVar3 = *(uint *)(param_1 + 0x18), uVar3 < 9)) {
    lVar4 = 0;
    if ((uVar3 & 1) != 0) {
      lVar4 = ((ulong)uVar2 * 4 + 7 & 0x7fffffff8) + 0x28;
    }
    if (1 < uVar3) {
      lVar1 = (ulong)uVar2 * 8 + 0x40;
      lVar4 = lVar1 + lVar4 + lVar1 * (ulong)((uVar3 >> 1) - 1);
    }
    *param_2 = lVar4;
    return 0;
  }
  return 0xfffffffe;
}


// ===== 005cd328  ma_hpf_init_preallocated =====

undefined8 ma_hpf_init_preallocated(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (param_3 != (undefined8 *)0x0) {
    param_3[6] = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    param_3[5] = 0;
    param_3[4] = 0;
    param_3[1] = 0;
    *param_3 = 0;
    uVar1 = FUN_005cd34c();
    return uVar1;
  }
  return 0xfffffffe;
}


// ===== 005cd34c  FUN_005cd34c =====

int FUN_005cd34c(int *param_1,int *param_2,int *param_3,int param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  bool bVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  size_t __n;
  void *pvVar13;
  int *piVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  size_t sVar18;
  ulong uVar19;
  uint uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  int local_e8;
  uint uStack_e4;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double dStack_b8;
  long local_b0;
  
  dVar25 = DAT_0024e678;
  lVar5 = tpidr_el0;
  iVar10 = -2;
  local_b0 = *(long *)(lVar5 + 0x28);
  if ((param_1 == (int *)0x0) || (param_3 == (int *)0x0)) goto LAB_005cd800;
  iVar10 = *param_1;
  if ((iVar10 == 5) || (iVar10 == 2)) {
    if (((*param_3 != 0) && (*param_3 != iVar10)) ||
       ((param_3[1] != 0 && (param_3[1] != param_1[1])))) {
LAB_005cd7fc:
      iVar10 = -3;
      goto LAB_005cd800;
    }
    uVar20 = param_1[6];
    if (uVar20 < 9) {
      uVar6 = uVar20 >> 1;
      uVar2 = uVar20 & 1;
      if (param_4 == 0) {
        if ((param_3[3] != uVar2) || (param_3[4] != uVar6)) goto LAB_005cd7fc;
        if (uVar2 == 0) {
          sVar18 = 0;
          goto LAB_005cd470;
        }
        piVar14 = *(int **)(param_3 + 6);
        if (piVar14 != (int *)0x0) {
          iVar3 = param_1[1];
          uVar12 = param_1[2];
          dVar23 = *(double *)(param_1 + 4);
          if ((iVar10 == 5) || (iVar10 == 2)) {
            if (((*piVar14 == 0) || (*piVar14 == iVar10)) &&
               ((piVar14[1] == 0 || (piVar14[1] == iVar3)))) {
              *piVar14 = iVar10;
              piVar14[1] = iVar3;
              dVar25 = exp((dVar23 * dVar25) / (double)uVar12);
              if (iVar10 == 5) {
                piVar14[2] = (int)(float)dVar25;
              }
              else {
                piVar14[2] = (int)(dVar25 * 16384.0);
              }
              bVar7 = false;
              sVar18 = 0;
              goto LAB_005cd480;
            }
            goto LAB_005cd7fc;
          }
        }
      }
      else {
        uVar12 = param_1[1];
        if (uVar12 != 0) {
          sVar18 = 0;
          if (uVar2 != 0) {
            sVar18 = ((ulong)uVar12 * 4 + 7 & 0x7fffffff8) + 0x28;
          }
          __n = sVar18;
          if (1 < uVar20) {
            lVar16 = (ulong)uVar12 * 8 + 0x40;
            __n = lVar16 + lVar16 * (ulong)(uVar6 - 1) + sVar18;
          }
          *(int **)(param_3 + 10) = param_2;
          if ((param_2 != (int *)0x0) && (__n != 0)) {
            memset(param_2,0,__n);
          }
          *(int **)(param_3 + 6) = param_2;
          *(size_t *)(param_3 + 8) = (long)param_2 + sVar18;
          if (uVar2 == 0) {
LAB_005cd470:
            bVar7 = true;
          }
          else {
            uVar12 = param_1[1];
            iVar10 = -2;
            if ((uVar12 == 0) || (param_2 == (int *)0x0)) goto LAB_005cd800;
            iVar10 = *param_1;
            uVar11 = param_1[2];
            dVar25 = *(double *)(param_1 + 4);
            uVar19 = (ulong)uVar12 * 4 + 7 & 0x7fffffff8;
            pvVar13 = (void *)((long)param_2 + (ulong)(uVar2 << 3 | uVar2 << 5));
            param_2[2] = 0;
            param_2[3] = 0;
            param_2[0] = 0;
            param_2[1] = 0;
            param_2[6] = 0;
            param_2[7] = 0;
            param_2[4] = 0;
            param_2[5] = 0;
            *(void **)(param_2 + 6) = pvVar13;
            param_2[8] = 0;
            param_2[9] = 0;
            if ((uVar19 != 0) && (pvVar13 != (void *)0x0)) {
              memset(pvVar13,0,uVar19);
            }
            *(void **)(param_2 + 4) = pvVar13;
            dVar23 = DAT_0024e678;
            if ((iVar10 != 5) && (iVar10 != 2)) goto LAB_005cd3d8;
            if (((*param_2 != 0) && (*param_2 != iVar10)) ||
               ((param_2[1] != 0 && (param_2[1] != uVar12)))) goto LAB_005cd7fc;
            *param_2 = iVar10;
            param_2[1] = uVar12;
            dVar25 = exp((dVar25 * dVar23) / (double)uVar11);
            if (iVar10 == 5) {
              param_2[2] = (int)(float)dVar25;
            }
            else {
              param_2[2] = (int)(dVar25 * 16384.0);
            }
            bVar7 = false;
          }
LAB_005cd480:
          dVar9 = DAT_0024e8c0;
          dVar8 = DAT_0024e8b8;
          dVar23 = DAT_0024e878;
          dVar25 = DAT_0024e718;
          if (1 < uVar20) {
            lVar15 = 0;
            lVar16 = 0;
            uVar19 = 0;
            uVar20 = 1;
            do {
              if (bVar7) {
                uVar11 = param_1[6] << 1;
                uVar12 = uVar20;
              }
              else {
                uVar11 = param_1[6];
                uVar12 = (int)uVar19 + 1;
              }
              dVar21 = sin((dVar25 / (double)uVar11) * (double)uVar12 + dVar8);
              iVar10 = *param_1;
              uVar12 = param_1[1];
              uVar4 = (ulong)uVar12;
              dVar22 = 1.0 / (dVar21 + dVar21);
              dVar21 = dVar9;
              if (dVar22 != 0.0) {
                dVar21 = dVar22;
              }
              if (param_4 != 0) {
                if (uVar12 != 0) {
                  lVar17 = *(long *)(param_3 + 8);
                  if (lVar17 == 0) goto LAB_005cd67c;
                  pvVar13 = (void *)((long)param_2 + lVar15 * uVar4 + (ulong)uVar6 * 0x40 + sVar18);
                  puVar1 = (undefined8 *)(lVar17 + lVar16);
                  dVar24 = (*(double *)(param_1 + 4) * dVar23) / (double)(uint)param_1[2];
                  dVar22 = sin(dVar24);
                  dVar24 = sin(dVar8 - dVar24);
                  local_c0 = dVar24 * -2.0;
                  dVar22 = dVar22 / (dVar21 + dVar21);
                  local_e0 = (dVar24 + 1.0) * 0.5;
                  dStack_d8 = -(dVar24 + 1.0);
                  dStack_c8 = dVar22 + 1.0;
                  dStack_b8 = 1.0 - dVar22;
                  puVar1[1] = 0;
                  *puVar1 = 0;
                  puVar1[3] = 0;
                  puVar1[2] = 0;
                  puVar1[5] = 0;
                  puVar1[4] = 0;
                  puVar1[7] = 0;
                  puVar1[6] = 0;
                  puVar1[6] = pvVar13;
                  local_e8 = iVar10;
                  uStack_e4 = uVar12;
                  local_d0 = local_e0;
                  if (pvVar13 != (void *)0x0) {
                    memset(pvVar13,0,uVar4 << 3);
                  }
                  *(void **)(lVar17 + lVar16 + 0x20) = pvVar13;
                  *(void **)(lVar17 + lVar16 + 0x28) = (void *)((long)pvVar13 + uVar4 * 4);
                  iVar10 = ma_biquad_reinit(&local_e8,puVar1);
                  goto LAB_005cd680;
                }
                iVar10 = -2;
LAB_005cd848:
                if ((((!bVar7) && (lVar16 = *(long *)(param_3 + 6), lVar16 != 0)) &&
                    (*(int *)(lVar16 + 0x20) != 0)) && (*(void **)(lVar16 + 0x18) != (void *)0x0)) {
                  free(*(void **)(lVar16 + 0x18));
                }
                if ((int)uVar19 != 0) {
                  lVar16 = 0;
                  do {
                    if (((*(long *)(param_3 + 8) != 0) &&
                        (lVar15 = *(long *)(param_3 + 8) + lVar16, *(int *)(lVar15 + 0x38) != 0)) &&
                       (pvVar13 = *(void **)(lVar15 + 0x30), pvVar13 != (void *)0x0)) {
                      free(pvVar13);
                    }
                    uVar19 = uVar19 - 1;
                    lVar16 = lVar16 + 0x40;
                  } while (uVar19 != 0);
                }
                goto LAB_005cd800;
              }
              lVar17 = *(long *)(param_3 + 8);
              if (lVar17 == 0) {
LAB_005cd67c:
                iVar10 = -2;
              }
              else {
                dVar24 = (*(double *)(param_1 + 4) * dVar23) / (double)(uint)param_1[2];
                dVar22 = sin(dVar24);
                dVar24 = sin(dVar8 - dVar24);
                local_c0 = dVar24 * -2.0;
                dVar22 = dVar22 / (dVar21 + dVar21);
                local_e0 = (dVar24 + 1.0) * 0.5;
                dStack_d8 = -(dVar24 + 1.0);
                dStack_c8 = dVar22 + 1.0;
                dStack_b8 = 1.0 - dVar22;
                local_e8 = iVar10;
                uStack_e4 = uVar12;
                local_d0 = local_e0;
                iVar10 = ma_biquad_reinit(&local_e8,lVar17 + lVar16);
              }
LAB_005cd680:
              if (iVar10 != 0) goto LAB_005cd848;
              uVar19 = uVar19 + 1;
              lVar16 = lVar16 + 0x40;
              uVar20 = uVar20 + 2;
              lVar15 = lVar15 + 8;
            } while (uVar6 != uVar19);
          }
          iVar10 = 0;
          param_3[3] = uVar2;
          param_3[4] = uVar6;
          *(undefined8 *)param_3 = *(undefined8 *)param_1;
          param_3[2] = param_1[2];
          goto LAB_005cd800;
        }
      }
    }
  }
LAB_005cd3d8:
  iVar10 = -2;
LAB_005cd800:
  if (*(long *)(lVar5 + 0x28) == local_b0) {
    return iVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005cd928  ma_hpf_init =====

ulong ma_hpf_init(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  void *__ptr;
  ulong uVar4;
  size_t __size;
  
  if (((param_1 == 0) || (uVar2 = *(uint *)(param_1 + 4), uVar2 == 0)) ||
     (uVar3 = *(uint *)(param_1 + 0x18), 8 < uVar3)) {
    return 0xfffffffe;
  }
  __size = 0;
  if ((uVar3 & 1) != 0) {
    __size = ((ulong)uVar2 * 4 + 7 & 0x7fffffff8) + 0x28;
  }
  if (1 < uVar3) {
    lVar1 = (ulong)uVar2 * 8 + 0x40;
    __size = __size + lVar1 + lVar1 * (ulong)((uVar3 >> 1) - 1);
  }
  if (__size == 0) {
    __ptr = (void *)0x0;
LAB_005cda00:
    if (param_3 == (undefined8 *)0x0) {
      uVar4 = 0xfffffffe;
    }
    else {
      param_3[6] = 0;
      param_3[3] = 0;
      param_3[2] = 0;
      param_3[5] = 0;
      param_3[4] = 0;
      param_3[1] = 0;
      *param_3 = 0;
      uVar4 = FUN_005cd34c(param_1,__ptr,param_3,1);
      if ((int)uVar4 == 0) {
        *(undefined4 *)(param_3 + 6) = 1;
        return uVar4;
      }
    }
    if (__ptr != (void *)0x0) {
      if (param_2 == (undefined8 *)0x0) {
        uVar4 = uVar4 & 0xffffffff;
        free(__ptr);
      }
      else if ((code *)param_2[3] != (code *)0x0) {
        uVar4 = uVar4 & 0xffffffff;
        (*(code *)param_2[3])(__ptr,*param_2);
      }
    }
  }
  else {
    if (param_2 == (undefined8 *)0x0) {
      __ptr = malloc(__size);
LAB_005cd9f0:
      if (__ptr != (void *)0x0) goto LAB_005cda00;
    }
    else if ((code *)param_2[1] != (code *)0x0) {
      __ptr = (void *)(*(code *)param_2[1])(__size,*param_2);
      goto LAB_005cd9f0;
    }
    uVar4 = 0xfffffffc;
  }
  return uVar4;
}


// ===== 005cda7c  ma_hpf_uninit =====

void ma_hpf_uninit(long param_1,undefined8 *param_2)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0xc) != 0) {
      lVar3 = 0;
      uVar4 = 0;
      do {
        if (((*(long *)(param_1 + 0x18) != 0) &&
            (lVar1 = *(long *)(param_1 + 0x18) + lVar3, *(int *)(lVar1 + 0x20) != 0)) &&
           (pvVar2 = *(void **)(lVar1 + 0x18), pvVar2 != (void *)0x0)) {
          if (param_2 == (undefined8 *)0x0) {
            free(pvVar2);
          }
          else if ((code *)param_2[3] != (code *)0x0) {
            (*(code *)param_2[3])(pvVar2,*param_2);
          }
        }
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + 0x28;
      } while (uVar4 < *(uint *)(param_1 + 0xc));
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      lVar3 = 0;
      uVar4 = 0;
      do {
        if (((*(long *)(param_1 + 0x20) != 0) &&
            (lVar1 = *(long *)(param_1 + 0x20) + lVar3, *(int *)(lVar1 + 0x38) != 0)) &&
           (pvVar2 = *(void **)(lVar1 + 0x30), pvVar2 != (void *)0x0)) {
          if (param_2 == (undefined8 *)0x0) {
            free(pvVar2);
          }
          else if ((code *)param_2[3] != (code *)0x0) {
            (*(code *)param_2[3])(pvVar2,*param_2);
          }
        }
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + 0x40;
      } while (uVar4 < *(uint *)(param_1 + 0x10));
    }
    if ((*(int *)(param_1 + 0x30) != 0) &&
       (pvVar2 = *(void **)(param_1 + 0x28), pvVar2 != (void *)0x0)) {
      if (param_2 == (undefined8 *)0x0) {
        free(pvVar2);
        return;
      }
      if ((code *)param_2[3] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005cdb84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)param_2[3])(pvVar2,*param_2);
        return;
      }
    }
  }
  return;
}


// ===== 005cdba8  ma_hpf_reinit =====

void ma_hpf_reinit(undefined8 param_1,undefined8 param_2)

{
  FUN_005cd34c(param_1,0,param_2,0);
  return;
}


// ===== 005cdbb8  ma_hpf_process_pcm_frames =====

undefined8 ma_hpf_process_pcm_frames(uint *param_1,void *param_2,void *param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short sVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  void *pvVar15;
  long lVar16;
  void *pvVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  
  if (param_1 == (uint *)0x0) {
    return 0xfffffffe;
  }
  if (param_2 == param_3) {
    if (param_1[3] != 0) {
      if (param_2 == (void *)0x0) {
        return 0xfffffffe;
      }
      uVar12 = 0;
      do {
        lVar14 = *(long *)(param_1 + 6);
        if (lVar14 == 0) {
          return 0xfffffffe;
        }
        iVar5 = *(int *)(lVar14 + uVar12 * 0x28);
        if (iVar5 == 5) {
          if (param_4 != 0) {
            lVar14 = lVar14 + uVar12 * 0x28;
            uVar21 = 0;
            uVar13 = (ulong)*(uint *)(lVar14 + 4);
            pvVar15 = param_2;
            pvVar17 = param_2;
            do {
              lVar16 = 0;
              fVar22 = 1.0 - *(float *)(lVar14 + 8);
              do {
                lVar18 = *(long *)(lVar14 + 0x10);
                uVar24 = NEON_fmadd(1.0 - fVar22,*(undefined4 *)((long)pvVar15 + lVar16),
                                    *(float *)(lVar18 + lVar16) * -fVar22);
                *(undefined4 *)((long)pvVar17 + lVar16) = uVar24;
                *(undefined4 *)(lVar18 + lVar16) = uVar24;
                lVar16 = lVar16 + 4;
              } while (uVar13 * 4 - lVar16 != 0);
              uVar13 = (ulong)*(uint *)(lVar14 + 4);
              uVar21 = (ulong)((int)uVar21 + 1);
              pvVar17 = (void *)((long)pvVar17 + uVar13 * 4);
              pvVar15 = (void *)((long)pvVar15 + uVar13 * 4);
            } while (uVar21 < param_4);
          }
        }
        else {
          if (iVar5 != 2) {
            return 0xfffffffe;
          }
          if (param_4 != 0) {
            lVar14 = lVar14 + uVar12 * 0x28;
            uVar21 = 0;
            uVar13 = (ulong)*(uint *)(lVar14 + 4);
            pvVar15 = param_2;
            pvVar17 = param_2;
            do {
              iVar5 = *(int *)(lVar14 + 8);
              uVar19 = 0;
              do {
                lVar16 = *(long *)(lVar14 + 0x10);
                lVar18 = uVar19 * 4;
                lVar20 = uVar19 * 2;
                uVar19 = uVar19 + 1;
                iVar1 = *(int *)(lVar16 + lVar18) * (iVar5 + -0x4000) +
                        iVar5 * *(short *)((long)pvVar15 + lVar20) >> 0xe;
                *(short *)((long)pvVar17 + lVar20) = (short)iVar1;
                *(int *)(lVar16 + lVar18) = iVar1;
              } while (uVar13 != uVar19);
              uVar13 = (ulong)*(uint *)(lVar14 + 4);
              uVar21 = (ulong)((int)uVar21 + 1);
              pvVar17 = (void *)((long)pvVar17 + uVar13 * 2);
              pvVar15 = (void *)((long)pvVar15 + uVar13 * 2);
            } while (uVar21 < param_4);
          }
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < param_1[3]);
    }
    if (param_1[4] != 0) {
      lVar14 = 0;
      uVar12 = 0;
      while( true ) {
        if (*(long *)(param_1 + 8) == 0) {
          return 0xfffffffe;
        }
        uVar11 = ma_biquad_process_pcm_frames
                           (*(long *)(param_1 + 8) + lVar14,param_2,param_2,param_4);
        if ((int)uVar11 != 0) break;
        uVar12 = uVar12 + 1;
        lVar14 = lVar14 + 0x40;
        if (param_1[4] <= uVar12) {
          return uVar11;
        }
      }
      return uVar11;
    }
  }
  else if (*param_1 == 5) {
    if (param_4 != 0) {
      uVar12 = (ulong)param_1[1];
      uVar21 = 0;
      do {
        memcpy(param_2,param_3,
               (ulong)(uint)(*(int *)(&DAT_00281c10 + (ulong)*param_1 * 4) * (int)uVar12));
        if (param_1[3] != 0) {
          uVar12 = 0;
          do {
            lVar14 = 0;
            lVar16 = *(long *)(param_1 + 6) + uVar12 * 0x28;
            uVar4 = *(uint *)(lVar16 + 4);
            fVar22 = 1.0 - *(float *)(lVar16 + 8);
            do {
              lVar18 = *(long *)(lVar16 + 0x10);
              uVar24 = NEON_fmadd(1.0 - fVar22,*(undefined4 *)((long)param_2 + lVar14),
                                  *(float *)(lVar18 + lVar14) * -fVar22);
              *(undefined4 *)((long)param_2 + lVar14) = uVar24;
              *(undefined4 *)(lVar18 + lVar14) = uVar24;
              lVar14 = lVar14 + 4;
            } while ((ulong)uVar4 * 4 - lVar14 != 0);
            uVar12 = uVar12 + 1;
          } while (uVar12 < param_1[3]);
        }
        if (param_1[4] != 0) {
          uVar12 = 0;
          do {
            lVar14 = 0;
            lVar16 = *(long *)(param_1 + 8) + uVar12 * 0x40;
            fVar22 = *(float *)(lVar16 + 0x14);
            fVar23 = *(float *)(lVar16 + 0x18);
            uVar4 = *(uint *)(lVar16 + 4);
            uVar26 = *(undefined4 *)(lVar16 + 0xc);
            uVar24 = *(undefined4 *)(lVar16 + 0x10);
            uVar25 = *(undefined4 *)(lVar16 + 8);
            do {
              lVar18 = *(long *)(lVar16 + 0x20);
              uVar28 = *(undefined4 *)((long)param_2 + lVar14);
              fVar30 = *(float *)(*(long *)(lVar16 + 0x28) + lVar14);
              fVar27 = (float)NEON_fmadd(uVar25,uVar28,*(undefined4 *)(lVar18 + lVar14));
              *(float *)((long)param_2 + lVar14) = fVar27;
              fVar29 = (float)NEON_fmadd(uVar26,uVar28,fVar27 * -fVar22);
              uVar28 = NEON_fmadd(uVar24,uVar28,fVar27 * -fVar23);
              *(float *)(lVar18 + lVar14) = fVar30 + fVar29;
              *(undefined4 *)(*(long *)(lVar16 + 0x28) + lVar14) = uVar28;
              lVar14 = lVar14 + 4;
            } while ((ulong)uVar4 * 4 - lVar14 != 0);
            uVar12 = uVar12 + 1;
          } while (uVar12 < param_1[4]);
        }
        uVar12 = (ulong)param_1[1];
        uVar21 = (ulong)((int)uVar21 + 1);
        param_2 = (void *)((long)param_2 + uVar12 * 4);
        param_3 = (void *)((long)param_3 + uVar12 * 4);
      } while (uVar21 < param_4);
    }
  }
  else {
    if (*param_1 != 2) {
      return 0xfffffffd;
    }
    if (param_4 != 0) {
      uVar12 = (ulong)param_1[1];
      uVar21 = 0;
      do {
        memcpy(param_2,param_3,
               (ulong)(uint)(*(int *)(&DAT_00281c10 + (ulong)*param_1 * 4) * (int)uVar12));
        if (param_1[3] != 0) {
          uVar12 = 0;
          do {
            uVar13 = 0;
            lVar14 = *(long *)(param_1 + 6) + uVar12 * 0x28;
            uVar4 = *(uint *)(lVar14 + 4);
            iVar5 = *(int *)(lVar14 + 8);
            do {
              lVar16 = *(long *)(lVar14 + 0x10);
              lVar18 = uVar13 * 4;
              lVar20 = uVar13 * 2;
              uVar13 = uVar13 + 1;
              iVar1 = *(int *)(lVar16 + lVar18) * (iVar5 + -0x4000) +
                      iVar5 * *(short *)((long)param_2 + lVar20) >> 0xe;
              *(short *)((long)param_2 + lVar20) = (short)iVar1;
              *(int *)(lVar16 + lVar18) = iVar1;
            } while (uVar4 != uVar13);
            uVar12 = uVar12 + 1;
          } while (uVar12 < param_1[3]);
        }
        if (param_1[4] != 0) {
          uVar12 = 0;
          do {
            uVar13 = 0;
            lVar14 = *(long *)(param_1 + 8) + uVar12 * 0x40;
            uVar4 = *(uint *)(lVar14 + 4);
            iVar6 = *(int *)(lVar14 + 8);
            iVar5 = *(int *)(lVar14 + 0xc);
            iVar7 = *(int *)(lVar14 + 0x10);
            iVar1 = *(int *)(lVar14 + 0x14);
            iVar8 = *(int *)(lVar14 + 0x18);
            do {
              lVar20 = uVar13 * 2;
              lVar16 = *(long *)(lVar14 + 0x20);
              lVar18 = uVar13 * 4;
              uVar13 = uVar13 + 1;
              sVar10 = *(short *)((long)param_2 + lVar20);
              iVar9 = *(int *)(*(long *)(lVar14 + 0x28) + lVar18);
              iVar2 = *(int *)(lVar16 + lVar18) + iVar6 * sVar10 >> 0xe;
              iVar3 = iVar2;
              if (0x7ffe < iVar2) {
                iVar3 = 0x7fff;
              }
              if (iVar3 == -0x8000 || iVar3 + 0x8000 < 0 != SCARRY4(iVar3,0x8000)) {
                iVar3 = -0x8000;
              }
              *(short *)((long)param_2 + lVar20) = (short)iVar3;
              *(int *)(lVar16 + lVar18) = (iVar9 + iVar5 * sVar10) - iVar2 * iVar1;
              *(int *)(*(long *)(lVar14 + 0x28) + lVar18) = iVar7 * sVar10 - iVar2 * iVar8;
            } while (uVar4 != uVar13);
            uVar12 = uVar12 + 1;
          } while (uVar12 < param_1[4]);
        }
        uVar12 = (ulong)param_1[1];
        uVar21 = (ulong)((int)uVar21 + 1);
        param_2 = (void *)((long)param_2 + uVar12 * 2);
        param_3 = (void *)((long)param_3 + uVar12 * 2);
      } while (uVar21 < param_4);
    }
  }
  return 0;
}


// ===== 005ce068  ma_hpf_get_latency =====

ulong ma_hpf_get_latency(ulong param_1)

{
  if (param_1 != 0) {
    param_1 = (ulong)(uint)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10) * 2);
  }
  return param_1;
}


// ===== 005ce078  ma_bpf2_config_init =====

void ma_bpf2_config_init(undefined4 *param_1,undefined8 param_2,double param_3,undefined4 param_4,
                        undefined4 param_5,undefined4 param_6)

{
  double dVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    *(undefined8 *)(param_1 + 2) = 0;
  }
  *param_1 = param_4;
  param_1[1] = param_5;
  dVar1 = DAT_0024e8c0;
  param_1[2] = param_6;
  if (param_3 != 0.0) {
    dVar1 = param_3;
  }
  *(undefined8 *)(param_1 + 4) = param_2;
  *(double *)(param_1 + 6) = dVar1;
  return;
}


// ===== 005ce0a0  ma_bpf2_get_heap_size =====

undefined8 ma_bpf2_get_heap_size(long param_1,long *param_2)

{
  uint uVar1;
  
  if (param_2 != (long *)0x0) {
    uVar1 = *(uint *)(param_1 + 4);
    *param_2 = 0;
    if (uVar1 != 0) {
      *param_2 = (ulong)uVar1 << 3;
      return 0;
    }
  }
  return 0xfffffffe;
}


// ===== 005ce0c8  ma_bpf2_init_preallocated =====

void ma_bpf2_init_preallocated(undefined4 *param_1,void *param_2,undefined8 *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 local_80;
  uint uStack_7c;
  double local_78;
  undefined8 local_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_3 != (undefined8 *)0x0) {
    param_3[1] = 0;
    *param_3 = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    param_3[5] = 0;
    param_3[4] = 0;
    param_3[7] = 0;
    param_3[6] = 0;
    if (param_1 != (undefined4 *)0x0) {
      dVar6 = *(double *)(param_1 + 6);
      dVar5 = (double)NEON_ucvtf((ulong)(uint)param_1[2]);
      dVar5 = (*(double *)(param_1 + 4) * DAT_0024e878) / dVar5;
      dVar4 = sin(dVar5);
      local_58 = sin(DAT_0024e8b8 - dVar5);
      local_70 = 0;
      local_80 = *param_1;
      uStack_7c = param_1[1];
      uVar1 = (ulong)uStack_7c;
      dVar4 = dVar4 / (dVar6 + dVar6);
      param_3[1] = 0;
      *param_3 = 0;
      param_3[3] = 0;
      param_3[2] = 0;
      local_58 = local_58 * -2.0;
      param_3[5] = 0;
      param_3[4] = 0;
      param_3[7] = 0;
      param_3[6] = 0;
      local_78 = dVar6 * dVar4;
      local_68 = -(dVar6 * dVar4);
      dStack_60 = dVar4 + 1.0;
      dStack_50 = 1.0 - dVar4;
      if (uStack_7c != 0) {
        param_3[6] = param_2;
        if (param_2 != (void *)0x0) {
          memset(param_2,0,uVar1 << 3);
        }
        param_3[4] = param_2;
        param_3[5] = (void *)((long)param_2 + uVar1 * 4);
        uVar3 = ma_biquad_reinit(&local_80,param_3);
        goto LAB_005ce1d0;
      }
    }
  }
  uVar3 = 0xfffffffe;
LAB_005ce1d0:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 005ce1fc  ma_bpf2_init =====

void ma_bpf2_init(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  size_t __size;
  void *__s;
  ulong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 local_90;
  uint uStack_8c;
  double local_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_1[1] == 0) {
    uVar2 = 0xfffffffe;
    goto LAB_005ce380;
  }
  __size = (ulong)(uint)param_1[1] << 3;
  if (param_2 == (undefined8 *)0x0) {
    __s = malloc(__size);
    dVar3 = DAT_0024e878;
joined_r0x005ce340:
    DAT_0024e878 = dVar3;
    if (__s != (void *)0x0) {
      if (param_3 == (undefined8 *)0x0) {
LAB_005ce34c:
        uVar2 = 0xfffffffe;
      }
      else {
        param_3[1] = 0;
        *param_3 = 0;
        param_3[3] = 0;
        param_3[2] = 0;
        param_3[5] = 0;
        param_3[4] = 0;
        param_3[7] = 0;
        param_3[6] = 0;
        dVar5 = *(double *)(param_1 + 6);
        dVar4 = (double)NEON_ucvtf((ulong)(uint)param_1[2]);
        dVar4 = (*(double *)(param_1 + 4) * dVar3) / dVar4;
        dVar3 = sin(dVar4);
        local_68 = sin(DAT_0024e8b8 - dVar4);
        local_80 = 0;
        local_90 = *param_1;
        uStack_8c = param_1[1];
        uVar2 = (ulong)uStack_8c;
        dVar3 = dVar3 / (dVar5 + dVar5);
        param_3[1] = 0;
        *param_3 = 0;
        param_3[3] = 0;
        param_3[2] = 0;
        local_68 = local_68 * -2.0;
        param_3[5] = 0;
        param_3[4] = 0;
        param_3[7] = 0;
        param_3[6] = 0;
        local_88 = dVar5 * dVar3;
        local_78 = -(dVar5 * dVar3);
        dStack_70 = dVar3 + 1.0;
        dStack_60 = 1.0 - dVar3;
        if (uStack_8c == 0) goto LAB_005ce34c;
        param_3[6] = __s;
        memset(__s,0,uVar2 << 3);
        param_3[4] = __s;
        param_3[5] = (void *)((long)__s + uVar2 * 4);
        uVar2 = ma_biquad_reinit(&local_90,param_3);
        if ((int)uVar2 == 0) {
          *(undefined4 *)(param_3 + 7) = 1;
          goto LAB_005ce380;
        }
      }
      if (param_2 == (undefined8 *)0x0) {
        free(__s);
      }
      else {
        if ((code *)param_2[3] == (code *)0x0) goto LAB_005ce380;
        (*(code *)param_2[3])(__s,*param_2);
      }
      uVar2 = uVar2 & 0xffffffff;
      goto LAB_005ce380;
    }
  }
  else if ((code *)param_2[1] != (code *)0x0) {
    __s = (void *)(*(code *)param_2[1])(__size,*param_2);
    dVar3 = DAT_0024e878;
    goto joined_r0x005ce340;
  }
  uVar2 = 0xfffffffc;
LAB_005ce380:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


// ===== 005ce3b0  ma_bpf2_uninit =====

void ma_bpf2_uninit(long param_1,undefined8 *param_2)

{
  void *__ptr;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x38) != 0)) &&
     (__ptr = *(void **)(param_1 + 0x30), __ptr != (void *)0x0)) {
    if (param_2 == (undefined8 *)0x0) {
      free(__ptr);
      return;
    }
    if ((code *)param_2[3] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005ce3d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_2[3])(__ptr,*param_2);
      return;
    }
  }
  return;
}


// ===== 005ce3e0  ma_bpf2_reinit =====

undefined4 ma_bpf2_reinit(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 local_80;
  double dStack_78;
  undefined8 local_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = 0xfffffffe;
  if ((param_1 != (undefined8 *)0x0) && (param_2 != 0)) {
    dVar5 = (double)param_1[3];
    dVar4 = (double)NEON_ucvtf((ulong)*(uint *)(param_1 + 1));
    dVar4 = ((double)param_1[2] * DAT_0024e878) / dVar4;
    dVar3 = sin(dVar4);
    local_58 = sin(DAT_0024e8b8 - dVar4);
    local_80 = *param_1;
    local_70 = 0;
    dVar3 = dVar3 / (dVar5 + dVar5);
    local_58 = local_58 * -2.0;
    dStack_78 = dVar5 * dVar3;
    local_68 = -(dVar5 * dVar3);
    dStack_60 = dVar3 + 1.0;
    dStack_50 = 1.0 - dVar3;
    uVar2 = ma_biquad_reinit(&local_80,param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005ce4cc  ma_bpf2_process_pcm_frames =====

undefined8 ma_bpf2_process_pcm_frames(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = ma_biquad_process_pcm_frames();
    return uVar1;
  }
  return 0xfffffffe;
}


// ===== 005ce4dc  ma_bpf2_get_latency =====

long ma_bpf2_get_latency(long param_1)

{
  return (ulong)(param_1 != 0) << 1;
}


// ===== 005ce4ec  ma_bpf_config_init =====

void ma_bpf_config_init(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5,uint param_6)

{
  if (param_1 != (undefined4 *)0x0) {
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
  }
  *param_1 = param_3;
  param_1[1] = param_4;
  if (7 < param_6) {
    param_6 = 8;
  }
  param_1[2] = param_5;
  *(undefined8 *)(param_1 + 4) = param_2;
  param_1[6] = param_6;
  return;
}


// ===== 005ce518  ma_bpf_get_heap_size =====

undefined8 ma_bpf_get_heap_size(long param_1,long *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((param_2 != (long *)0x0) && (*param_2 = 0, param_1 != 0)) {
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar2 = 0xfffffffe;
    if ((uVar1 < 9) && ((uVar1 & 1) == 0)) {
      if (uVar1 == 0) {
        lVar3 = 0;
      }
      else {
        if (*(uint *)(param_1 + 4) == 0) {
          return 0xfffffffe;
        }
        lVar3 = (ulong)*(uint *)(param_1 + 4) * 8;
        lVar3 = lVar3 + (lVar3 + 0x40) * (ulong)((uVar1 >> 1) - 1) + 0x40;
      }
      uVar2 = 0;
      *param_2 = lVar3;
    }
    return uVar2;
  }
  return 0xfffffffe;
}


// ===== 005ce580  ma_bpf_init_preallocated =====

undefined8 ma_bpf_init_preallocated(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (param_3 != (undefined8 *)0x0) {
    param_3[4] = 0;
    param_3[1] = 0;
    *param_3 = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    uVar1 = FUN_005ce5a0();
    return uVar1;
  }
  return 0xfffffffe;
}


// ===== 005ce5a0  FUN_005ce5a0 =====

int FUN_005ce5a0(int *param_1,void *param_2,int *param_3,int param_4)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  int iVar11;
  undefined8 *puVar12;
  long lVar13;
  size_t __n;
  void *__s;
  long lVar14;
  long lVar15;
  double dVar16;
  double dVar17;
  int local_e0;
  uint uStack_dc;
  double local_d8;
  undefined8 local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  long local_a8;
  
  lVar4 = tpidr_el0;
  local_a8 = *(long *)(lVar4 + 0x28);
  iVar11 = -2;
  if ((param_1 == (int *)0x0) || (param_3 == (int *)0x0)) goto LAB_005ce878;
  iVar11 = *param_1;
  if ((iVar11 != 5) && (iVar11 != 2)) {
LAB_005ce874:
    iVar11 = -2;
    goto LAB_005ce878;
  }
  if (((*param_3 == 0) || (*param_3 == iVar11)) && ((param_3[1] == 0 || (param_3[1] == param_1[1])))
     ) {
    uVar2 = param_1[6];
    iVar11 = -2;
    if ((8 < uVar2) || ((uVar2 & 1) != 0)) goto LAB_005ce878;
    uVar5 = uVar2 >> 1;
    if (param_4 == 0) {
      if (param_3[2] != uVar5) goto LAB_005ce6a4;
    }
    else {
      if (uVar2 == 0) {
        *(void **)(param_3 + 6) = param_2;
      }
      else {
        uVar3 = param_1[1];
        if (uVar3 == 0) goto LAB_005ce874;
        *(void **)(param_3 + 6) = param_2;
        if ((param_2 != (void *)0x0) &&
           (lVar13 = (ulong)uVar3 * 8, __n = lVar13 + (lVar13 + 0x40) * (ulong)(uVar5 - 1) + 0x40,
           __n != 0)) {
          memset(param_2,0,__n);
        }
      }
      *(void **)(param_3 + 4) = param_2;
    }
    dVar10 = DAT_0024e8c0;
    dVar9 = DAT_0024e8b8;
    dVar8 = DAT_0024e878;
    dVar7 = DAT_0024e838;
    dVar6 = DAT_0024e6d8;
    if (1 < uVar2) {
      lVar13 = 0;
      lVar14 = 6;
      do {
        iVar11 = *param_1;
        uVar3 = param_1[1];
        uVar1 = (ulong)uVar3;
        if (param_4 == 0) {
          lVar15 = *(long *)(param_3 + 4);
          if (lVar15 == 0) goto LAB_005ce724;
          dVar17 = (*(double *)(param_1 + 4) * dVar8) / (double)(uint)param_1[2];
          dVar16 = sin(dVar17);
          local_b8 = sin(dVar9 - dVar17);
          dVar16 = dVar16 / dVar6;
          local_b8 = local_b8 * -2.0;
          puVar12 = (undefined8 *)(lVar15 + lVar13);
          local_d0 = 0;
          local_d8 = dVar16 * dVar10;
          local_c8 = dVar16 * dVar7;
          dStack_c0 = dVar16 + 1.0;
          dStack_b0 = 1.0 - dVar16;
          local_e0 = iVar11;
          uStack_dc = uVar3;
        }
        else {
          if (uVar3 == 0) goto LAB_005ce874;
          lVar15 = *(long *)(param_3 + 4);
          if (lVar15 == 0) {
LAB_005ce724:
            iVar11 = -2;
            goto LAB_005ce878;
          }
          __s = (void *)((long)param_2 + (lVar14 + -6) * uVar1 + (ulong)uVar2 * 0x20);
          puVar12 = (undefined8 *)(lVar15 + lVar13);
          dVar17 = (*(double *)(param_1 + 4) * dVar8) / (double)(uint)param_1[2];
          dVar16 = sin(dVar17);
          local_b8 = sin(dVar9 - dVar17);
          dVar16 = dVar16 / dVar6;
          local_b8 = local_b8 * -2.0;
          local_d0 = 0;
          local_d8 = dVar16 * dVar10;
          local_c8 = dVar16 * dVar7;
          dStack_c0 = dVar16 + 1.0;
          dStack_b0 = 1.0 - dVar16;
          puVar12[1] = 0;
          *puVar12 = 0;
          puVar12[3] = 0;
          puVar12[2] = 0;
          puVar12[5] = 0;
          puVar12[4] = 0;
          puVar12[7] = 0;
          puVar12[6] = 0;
          puVar12[6] = __s;
          local_e0 = iVar11;
          uStack_dc = uVar3;
          if (__s != (void *)0x0) {
            memset(__s,0,uVar1 << 3);
          }
          *(void **)(lVar15 + lVar13 + 0x20) = __s;
          *(void **)(lVar15 + lVar13 + 0x28) = (void *)((long)__s + uVar1 * 4);
        }
        iVar11 = ma_biquad_reinit(&local_e0,puVar12);
        if (iVar11 != 0) goto LAB_005ce878;
        lVar13 = lVar13 + 0x40;
        lVar14 = lVar14 + 8;
      } while ((ulong)uVar5 << 6 != lVar13);
    }
    iVar11 = 0;
    param_3[2] = uVar5;
    *(undefined8 *)param_3 = *(undefined8 *)param_1;
  }
  else {
LAB_005ce6a4:
    iVar11 = -3;
  }
LAB_005ce878:
  if (*(long *)(lVar4 + 0x28) == local_a8) {
    return iVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005ce8c0  ma_bpf_init =====

ulong ma_bpf_init(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  size_t __size;
  uint uVar1;
  void *__ptr;
  ulong uVar2;
  long lVar3;
  
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  if (8 < uVar1) {
    return 0xfffffffe;
  }
  if ((uVar1 & 1) != 0) {
    return 0xfffffffe;
  }
  if (uVar1 != 0) {
    if (*(uint *)(param_1 + 4) == 0) {
      return 0xfffffffe;
    }
    lVar3 = (ulong)*(uint *)(param_1 + 4) * 8;
    __size = lVar3 + (lVar3 + 0x40) * (ulong)((uVar1 >> 1) - 1) + 0x40;
    if (__size != 0) {
      if (param_2 == (undefined8 *)0x0) {
        __ptr = malloc(__size);
      }
      else {
        if ((code *)param_2[1] == (code *)0x0) {
          return 0xfffffffc;
        }
        __ptr = (void *)(*(code *)param_2[1])(__size,*param_2);
      }
      if (__ptr == (void *)0x0) {
        return 0xfffffffc;
      }
      goto LAB_005ce954;
    }
  }
  __ptr = (void *)0x0;
LAB_005ce954:
  if (param_3 == (undefined8 *)0x0) {
    uVar2 = 0xfffffffe;
  }
  else {
    param_3[4] = 0;
    param_3[1] = 0;
    *param_3 = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    uVar2 = FUN_005ce5a0(param_1,__ptr,param_3,1);
    if ((int)uVar2 == 0) {
      *(undefined4 *)(param_3 + 4) = 1;
      return uVar2;
    }
  }
  if (__ptr != (void *)0x0) {
    if (param_2 == (undefined8 *)0x0) {
      uVar2 = uVar2 & 0xffffffff;
      free(__ptr);
    }
    else if ((code *)param_2[3] != (code *)0x0) {
      uVar2 = uVar2 & 0xffffffff;
      (*(code *)param_2[3])(__ptr,*param_2);
    }
  }
  return uVar2;
}


// ===== 005ce9fc  ma_bpf_uninit =====

void ma_bpf_uninit(long param_1,undefined8 *param_2)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 8) != 0) {
      lVar3 = 0;
      uVar4 = 0;
      do {
        if (((*(long *)(param_1 + 0x10) != 0) &&
            (lVar1 = *(long *)(param_1 + 0x10) + lVar3, *(int *)(lVar1 + 0x38) != 0)) &&
           (pvVar2 = *(void **)(lVar1 + 0x30), pvVar2 != (void *)0x0)) {
          if (param_2 == (undefined8 *)0x0) {
            free(pvVar2);
          }
          else if ((code *)param_2[3] != (code *)0x0) {
            (*(code *)param_2[3])(pvVar2,*param_2);
          }
        }
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + 0x40;
      } while (uVar4 < *(uint *)(param_1 + 8));
    }
    if ((*(int *)(param_1 + 0x20) != 0) &&
       (pvVar2 = *(void **)(param_1 + 0x18), pvVar2 != (void *)0x0)) {
      if (param_2 == (undefined8 *)0x0) {
        free(pvVar2);
        return;
      }
      if ((code *)param_2[3] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005ceaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)param_2[3])(pvVar2,*param_2);
        return;
      }
    }
  }
  return;
}


// ===== 005ceac8  ma_bpf_reinit =====

void ma_bpf_reinit(undefined8 param_1,undefined8 param_2)

{
  FUN_005ce5a0(param_1,0,param_2,0);
  return;
}


// ===== 005cead8  ma_bpf_process_pcm_frames =====

undefined8 ma_bpf_process_pcm_frames(uint *param_1,void *param_2,void *param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  short sVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  
  if (param_1 == (uint *)0x0) {
    return 0xfffffffe;
  }
  if (param_2 == param_3) {
    if (param_1[2] != 0) {
      lVar15 = 0;
      uVar14 = 0;
      do {
        if (*(long *)(param_1 + 4) == 0) {
          return 0xfffffffe;
        }
        uVar13 = ma_biquad_process_pcm_frames
                           (*(long *)(param_1 + 4) + lVar15,param_2,param_2,param_4);
        if ((int)uVar13 != 0) {
          return uVar13;
        }
        uVar14 = uVar14 + 1;
        lVar15 = lVar15 + 0x40;
      } while (uVar14 < param_1[2]);
    }
  }
  else if (*param_1 == 5) {
    if (param_4 != 0) {
      uVar14 = (ulong)param_1[1];
      uVar18 = 0;
      do {
        memcpy(param_2,param_3,
               (ulong)(uint)(*(int *)(&DAT_00281c10 + (ulong)*param_1 * 4) * (int)uVar14));
        if (param_1[2] != 0) {
          uVar14 = 0;
          do {
            lVar15 = 0;
            lVar9 = *(long *)(param_1 + 4) + uVar14 * 0x40;
            fVar19 = *(float *)(lVar9 + 0x14);
            fVar20 = *(float *)(lVar9 + 0x18);
            uVar3 = *(uint *)(lVar9 + 4);
            uVar23 = *(undefined4 *)(lVar9 + 0xc);
            uVar21 = *(undefined4 *)(lVar9 + 0x10);
            uVar22 = *(undefined4 *)(lVar9 + 8);
            do {
              lVar12 = *(long *)(lVar9 + 0x20);
              uVar25 = *(undefined4 *)((long)param_2 + lVar15);
              fVar27 = *(float *)(*(long *)(lVar9 + 0x28) + lVar15);
              fVar24 = (float)NEON_fmadd(uVar22,uVar25,*(undefined4 *)(lVar12 + lVar15));
              *(float *)((long)param_2 + lVar15) = fVar24;
              fVar26 = (float)NEON_fmadd(uVar23,uVar25,fVar24 * -fVar19);
              uVar25 = NEON_fmadd(uVar21,uVar25,fVar24 * -fVar20);
              *(float *)(lVar12 + lVar15) = fVar27 + fVar26;
              *(undefined4 *)(*(long *)(lVar9 + 0x28) + lVar15) = uVar25;
              lVar15 = lVar15 + 4;
            } while ((ulong)uVar3 * 4 - lVar15 != 0);
            uVar14 = uVar14 + 1;
          } while (uVar14 < param_1[2]);
        }
        uVar14 = (ulong)param_1[1];
        uVar18 = (ulong)((int)uVar18 + 1);
        param_2 = (void *)((long)param_2 + uVar14 * 4);
        param_3 = (void *)((long)param_3 + uVar14 * 4);
      } while (uVar18 < param_4);
    }
  }
  else {
    if (*param_1 != 2) {
      return 0xfffffffd;
    }
    if (param_4 != 0) {
      uVar14 = (ulong)param_1[1];
      uVar18 = 0;
      do {
        memcpy(param_2,param_3,
               (ulong)(uint)(*(int *)(&DAT_00281c10 + (ulong)*param_1 * 4) * (int)uVar14));
        if (param_1[2] != 0) {
          uVar14 = 0;
          do {
            uVar16 = 0;
            lVar15 = *(long *)(param_1 + 4) + uVar14 * 0x40;
            uVar3 = *(uint *)(lVar15 + 4);
            iVar6 = *(int *)(lVar15 + 8);
            iVar4 = *(int *)(lVar15 + 0xc);
            iVar7 = *(int *)(lVar15 + 0x10);
            iVar5 = *(int *)(lVar15 + 0x14);
            iVar8 = *(int *)(lVar15 + 0x18);
            do {
              lVar17 = uVar16 * 2;
              lVar9 = *(long *)(lVar15 + 0x20);
              lVar12 = uVar16 * 4;
              uVar16 = uVar16 + 1;
              sVar11 = *(short *)((long)param_2 + lVar17);
              iVar10 = *(int *)(*(long *)(lVar15 + 0x28) + lVar12);
              iVar1 = *(int *)(lVar9 + lVar12) + iVar6 * sVar11 >> 0xe;
              iVar2 = iVar1;
              if (0x7ffe < iVar1) {
                iVar2 = 0x7fff;
              }
              if (iVar2 == -0x8000 || iVar2 + 0x8000 < 0 != SCARRY4(iVar2,0x8000)) {
                iVar2 = -0x8000;
              }
              *(short *)((long)param_2 + lVar17) = (short)iVar2;
              *(int *)(lVar9 + lVar12) = (iVar10 + iVar4 * sVar11) - iVar1 * iVar5;
              *(int *)(*(long *)(lVar15 + 0x28) + lVar12) = iVar7 * sVar11 - iVar1 * iVar8;
            } while (uVar3 != uVar16);
            uVar14 = uVar14 + 1;
          } while (uVar14 < param_1[2]);
        }
        uVar14 = (ulong)param_1[1];
        uVar18 = (ulong)((int)uVar18 + 1);
        param_2 = (void *)((long)param_2 + uVar14 * 2);
        param_3 = (void *)((long)param_3 + uVar14 * 2);
      } while (uVar18 < param_4);
    }
  }
  return 0;
}


// ===== 005ced60  ma_bpf_get_latency =====

ulong ma_bpf_get_latency(ulong param_1)

{
  if (param_1 != 0) {
    param_1 = (ulong)(uint)(*(int *)(param_1 + 8) << 1);
  }
  return param_1;
}


// ===== 005ced70  ma_notch2_config_init =====

void ma_notch2_config_init
               (undefined4 *param_1,double param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  if (param_1 != (undefined4 *)0x0) {
    *(undefined8 *)(param_1 + 2) = 0;
  }
  *param_1 = param_4;
  param_1[1] = param_5;
  param_1[2] = param_6;
  *(double *)(param_1 + 4) = param_2;
  *(undefined8 *)(param_1 + 6) = param_3;
  if (param_2 == 0.0) {
    *(undefined8 *)(param_1 + 4) = 0x3fe6a09edbf8b9bb;
  }
  return;
}


// ===== 005ceda4  ma_notch2_get_heap_size =====

undefined8 ma_notch2_get_heap_size(long param_1,long *param_2)

{
  uint uVar1;
  
  if (param_2 != (long *)0x0) {
    uVar1 = *(uint *)(param_1 + 4);
    *param_2 = 0;
    if (uVar1 != 0) {
      *param_2 = (ulong)uVar1 << 3;
      return 0;
    }
  }
  return 0xfffffffe;
}


// ===== 005cedcc  ma_notch2_init_preallocated =====

void ma_notch2_init_preallocated(undefined4 *param_1,void *param_2,undefined8 *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 local_80;
  uint uStack_7c;
  undefined8 local_78;
  double local_70;
  undefined8 local_68;
  double local_60;
  double dStack_58;
  double local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_3 != (undefined8 *)0x0) {
    param_3[1] = 0;
    *param_3 = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    param_3[5] = 0;
    param_3[4] = 0;
    param_3[7] = 0;
    param_3[6] = 0;
    if (param_1 != (undefined4 *)0x0) {
      dVar6 = *(double *)(param_1 + 4);
      dVar5 = (double)NEON_ucvtf((ulong)(uint)param_1[2]);
      dVar5 = (*(double *)(param_1 + 6) * DAT_0024e878) / dVar5;
      dVar4 = sin(dVar5);
      local_70 = sin(DAT_0024e8b8 - dVar5);
      local_78 = 0x3ff0000000000000;
      local_68 = 0x3ff0000000000000;
      local_70 = local_70 * -2.0;
      dVar4 = dVar4 / (dVar6 + dVar6);
      local_80 = *param_1;
      uStack_7c = param_1[1];
      uVar1 = (ulong)uStack_7c;
      param_3[5] = 0;
      param_3[4] = 0;
      param_3[7] = 0;
      param_3[6] = 0;
      param_3[1] = 0;
      *param_3 = 0;
      param_3[3] = 0;
      param_3[2] = 0;
      local_60 = dVar4 + 1.0;
      local_50 = 1.0 - dVar4;
      dStack_58 = local_70;
      if (uStack_7c != 0) {
        param_3[6] = param_2;
        if (param_2 != (void *)0x0) {
          memset(param_2,0,uVar1 << 3);
        }
        param_3[4] = param_2;
        param_3[5] = (void *)((long)param_2 + uVar1 * 4);
        uVar3 = ma_biquad_reinit(&local_80,param_3);
        goto LAB_005ceed4;
      }
    }
  }
  uVar3 = 0xfffffffe;
LAB_005ceed4:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 005cef00  ma_notch2_init =====

void ma_notch2_init(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  size_t __size;
  void *__s;
  ulong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 local_90;
  uint uStack_8c;
  undefined8 local_88;
  double local_80;
  undefined8 local_78;
  double local_70;
  double dStack_68;
  double local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_1[1] == 0) {
    uVar2 = 0xfffffffe;
    goto LAB_005cf084;
  }
  __size = (ulong)(uint)param_1[1] << 3;
  if (param_2 == (undefined8 *)0x0) {
    __s = malloc(__size);
    dVar3 = DAT_0024e878;
joined_r0x005cf044:
    DAT_0024e878 = dVar3;
    if (__s != (void *)0x0) {
      if (param_3 == (undefined8 *)0x0) {
LAB_005cf050:
        uVar2 = 0xfffffffe;
      }
      else {
        param_3[1] = 0;
        *param_3 = 0;
        param_3[3] = 0;
        param_3[2] = 0;
        param_3[5] = 0;
        param_3[4] = 0;
        param_3[7] = 0;
        param_3[6] = 0;
        dVar5 = *(double *)(param_1 + 4);
        dVar4 = (double)NEON_ucvtf((ulong)(uint)param_1[2]);
        dVar4 = (*(double *)(param_1 + 6) * dVar3) / dVar4;
        dVar3 = sin(dVar4);
        local_80 = sin(DAT_0024e8b8 - dVar4);
        local_88 = 0x3ff0000000000000;
        local_78 = 0x3ff0000000000000;
        local_80 = local_80 * -2.0;
        dVar3 = dVar3 / (dVar5 + dVar5);
        local_90 = *param_1;
        uStack_8c = param_1[1];
        uVar2 = (ulong)uStack_8c;
        param_3[5] = 0;
        param_3[4] = 0;
        param_3[7] = 0;
        param_3[6] = 0;
        param_3[1] = 0;
        *param_3 = 0;
        param_3[3] = 0;
        param_3[2] = 0;
        local_70 = dVar3 + 1.0;
        local_60 = 1.0 - dVar3;
        dStack_68 = local_80;
        if (uStack_8c == 0) goto LAB_005cf050;
        param_3[6] = __s;
        memset(__s,0,uVar2 << 3);
        param_3[4] = __s;
        param_3[5] = (void *)((long)__s + uVar2 * 4);
        uVar2 = ma_biquad_reinit(&local_90,param_3);
        if ((int)uVar2 == 0) {
          *(undefined4 *)(param_3 + 7) = 1;
          goto LAB_005cf084;
        }
      }
      if (param_2 == (undefined8 *)0x0) {
        free(__s);
      }
      else {
        if ((code *)param_2[3] == (code *)0x0) goto LAB_005cf084;
        (*(code *)param_2[3])(__s,*param_2);
      }
      uVar2 = uVar2 & 0xffffffff;
      goto LAB_005cf084;
    }
  }
  else if ((code *)param_2[1] != (code *)0x0) {
    __s = (void *)(*(code *)param_2[1])(__size,*param_2);
    dVar3 = DAT_0024e878;
    goto joined_r0x005cf044;
  }
  uVar2 = 0xfffffffc;
LAB_005cf084:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


// ===== 005cf0b4  ma_notch2_uninit =====

void ma_notch2_uninit(long param_1,undefined8 *param_2)

{
  void *__ptr;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x38) != 0)) &&
     (__ptr = *(void **)(param_1 + 0x30), __ptr != (void *)0x0)) {
    if (param_2 == (undefined8 *)0x0) {
      free(__ptr);
      return;
    }
    if ((code *)param_2[3] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005cf0d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_2[3])(__ptr,*param_2);
      return;
    }
  }
  return;
}


// ===== 005cf0e4  ma_notch2_reinit =====

undefined4 ma_notch2_reinit(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 local_80;
  undefined8 local_78;
  double local_70;
  undefined8 local_68;
  double local_60;
  double dStack_58;
  double local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = 0xfffffffe;
  if ((param_1 != (undefined8 *)0x0) && (param_2 != 0)) {
    dVar5 = (double)param_1[2];
    dVar4 = (double)NEON_ucvtf((ulong)*(uint *)(param_1 + 1));
    dVar4 = ((double)param_1[3] * DAT_0024e878) / dVar4;
    dVar3 = sin(dVar4);
    local_70 = sin(DAT_0024e8b8 - dVar4);
    local_80 = *param_1;
    local_70 = local_70 * -2.0;
    local_78 = 0x3ff0000000000000;
    dVar3 = dVar3 / (dVar5 + dVar5);
    local_68 = 0x3ff0000000000000;
    local_60 = dVar3 + 1.0;
    local_50 = 1.0 - dVar3;
    dStack_58 = local_70;
    uVar2 = ma_biquad_reinit(&local_80,param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005cf1d4  ma_notch2_process_pcm_frames =====

undefined8 ma_notch2_process_pcm_frames(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = ma_biquad_process_pcm_frames();
    return uVar1;
  }
  return 0xfffffffe;
}


// ===== 005cf1e4  ma_notch2_get_latency =====

long ma_notch2_get_latency(long param_1)

{
  return (ulong)(param_1 != 0) << 1;
}


// ===== 005cf1f4  ma_peak2_config_init =====

void ma_peak2_config_init
               (undefined4 *param_1,undefined8 param_2,double param_3,undefined8 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  if (param_1 != (undefined4 *)0x0) {
    *(undefined8 *)(param_1 + 2) = 0;
  }
  *param_1 = param_5;
  param_1[1] = param_6;
  param_1[2] = param_7;
  *(undefined8 *)(param_1 + 4) = param_2;
  *(double *)(param_1 + 6) = param_3;
  *(undefined8 *)(param_1 + 8) = param_4;
  if (param_3 == 0.0) {
    *(undefined8 *)(param_1 + 6) = 0x3fe6a09edbf8b9bb;
  }
  return;
}


// ===== 005cf22c  ma_peak2_get_heap_size =====

undefined8 ma_peak2_get_heap_size(long param_1,long *param_2)

{
  uint uVar1;
  
  if (param_2 != (long *)0x0) {
    uVar1 = *(uint *)(param_1 + 4);
    *param_2 = 0;
    if (uVar1 != 0) {
      *param_2 = (ulong)uVar1 << 3;
      return 0;
    }
  }
  return 0xfffffffe;
}


// ===== 005cf254  ma_peak2_init_preallocated =====

void ma_peak2_init_preallocated(undefined4 *param_1,void *param_2,undefined8 *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 local_80;
  uint uStack_7c;
  undefined8 local_78;
  double dStack_70;
  undefined8 local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_3 != (undefined8 *)0x0) {
    param_3[1] = 0;
    *param_3 = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    param_3[5] = 0;
    param_3[4] = 0;
    param_3[7] = 0;
    param_3[6] = 0;
    if (param_1 != (undefined4 *)0x0) {
      dVar6 = *(double *)(param_1 + 6);
      dVar5 = (double)NEON_ucvtf((ulong)(uint)param_1[2]);
      dVar5 = (*(double *)(param_1 + 8) * DAT_0024e878) / dVar5;
      dVar4 = sin(dVar5);
      dVar5 = sin(DAT_0024e8b8 - dVar5);
      dVar4 = dVar4 / (dVar6 + dVar6);
      dVar6 = pow(10.0,*(double *)(param_1 + 4) / 40.0);
      local_80 = *param_1;
      uStack_7c = param_1[1];
      uVar1 = (ulong)uStack_7c;
      local_78 = NEON_fmadd(dVar4,dVar6,0x3ff0000000000000);
      local_68 = NEON_fmsub(dVar4,dVar6,0x3ff0000000000000);
      param_3[1] = 0;
      *param_3 = 0;
      param_3[3] = 0;
      param_3[2] = 0;
      dStack_70 = dVar5 * -2.0;
      param_3[5] = 0;
      param_3[4] = 0;
      param_3[7] = 0;
      param_3[6] = 0;
      dStack_60 = dVar4 / dVar6 + 1.0;
      dStack_50 = 1.0 - dVar4 / dVar6;
      local_58 = dStack_70;
      if (uStack_7c != 0) {
        param_3[6] = param_2;
        if (param_2 != (void *)0x0) {
          memset(param_2,0,uVar1 << 3);
        }
        param_3[4] = param_2;
        param_3[5] = (void *)((long)param_2 + uVar1 * 4);
        uVar3 = ma_biquad_reinit(&local_80,param_3);
        goto LAB_005cf378;
      }
    }
  }
  uVar3 = 0xfffffffe;
LAB_005cf378:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 005cf3a4  ma_peak2_init =====

void ma_peak2_init(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  size_t __size;
  void *__s;
  ulong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 local_90;
  uint uStack_8c;
  undefined8 local_88;
  double dStack_80;
  undefined8 local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_1[1] == 0) {
    uVar2 = 0xfffffffe;
    goto LAB_005cf544;
  }
  __size = (ulong)(uint)param_1[1] << 3;
  if (param_2 == (undefined8 *)0x0) {
    __s = malloc(__size);
    dVar3 = DAT_0024e878;
joined_r0x005cf504:
    DAT_0024e878 = dVar3;
    if (__s != (void *)0x0) {
      if (param_3 == (undefined8 *)0x0) {
LAB_005cf510:
        uVar2 = 0xfffffffe;
      }
      else {
        param_3[1] = 0;
        *param_3 = 0;
        param_3[3] = 0;
        param_3[2] = 0;
        param_3[5] = 0;
        param_3[4] = 0;
        param_3[7] = 0;
        param_3[6] = 0;
        dVar5 = *(double *)(param_1 + 6);
        dVar4 = (double)NEON_ucvtf((ulong)(uint)param_1[2]);
        dVar4 = (*(double *)(param_1 + 8) * dVar3) / dVar4;
        dVar3 = sin(dVar4);
        dVar4 = sin(DAT_0024e8b8 - dVar4);
        dVar3 = dVar3 / (dVar5 + dVar5);
        dVar5 = pow(10.0,*(double *)(param_1 + 4) / 40.0);
        local_90 = *param_1;
        uStack_8c = param_1[1];
        uVar2 = (ulong)uStack_8c;
        local_88 = NEON_fmadd(dVar3,dVar5,0x3ff0000000000000);
        local_78 = NEON_fmsub(dVar3,dVar5,0x3ff0000000000000);
        param_3[1] = 0;
        *param_3 = 0;
        param_3[3] = 0;
        param_3[2] = 0;
        dStack_80 = dVar4 * -2.0;
        param_3[5] = 0;
        param_3[4] = 0;
        param_3[7] = 0;
        param_3[6] = 0;
        dStack_70 = dVar3 / dVar5 + 1.0;
        dStack_60 = 1.0 - dVar3 / dVar5;
        local_68 = dStack_80;
        if (uStack_8c == 0) goto LAB_005cf510;
        param_3[6] = __s;
        memset(__s,0,uVar2 << 3);
        param_3[4] = __s;
        param_3[5] = (void *)((long)__s + uVar2 * 4);
        uVar2 = ma_biquad_reinit(&local_90,param_3);
        if ((int)uVar2 == 0) {
          *(undefined4 *)(param_3 + 7) = 1;
          goto LAB_005cf544;
        }
      }
      if (param_2 == (undefined8 *)0x0) {
        free(__s);
      }
      else {
        if ((code *)param_2[3] == (code *)0x0) goto LAB_005cf544;
        (*(code *)param_2[3])(__s,*param_2);
      }
      uVar2 = uVar2 & 0xffffffff;
      goto LAB_005cf544;
    }
  }
  else if ((code *)param_2[1] != (code *)0x0) {
    __s = (void *)(*(code *)param_2[1])(__size,*param_2);
    dVar3 = DAT_0024e878;
    goto joined_r0x005cf504;
  }
  uVar2 = 0xfffffffc;
LAB_005cf544:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


// ===== 005cf574  ma_peak2_uninit =====

void ma_peak2_uninit(long param_1,undefined8 *param_2)

{
  void *__ptr;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x38) != 0)) &&
     (__ptr = *(void **)(param_1 + 0x30), __ptr != (void *)0x0)) {
    if (param_2 == (undefined8 *)0x0) {
      free(__ptr);
      return;
    }
    if ((code *)param_2[3] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005cf598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_2[3])(__ptr,*param_2);
      return;
    }
  }
  return;
}


// ===== 005cf5a4  ma_peak2_reinit =====

undefined4 ma_peak2_reinit(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 local_80;
  undefined8 uStack_78;
  double local_70;
  undefined8 uStack_68;
  double local_60;
  double dStack_58;
  double local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = 0xfffffffe;
  if ((param_1 != (undefined8 *)0x0) && (param_2 != 0)) {
    dVar5 = (double)param_1[3];
    dVar4 = (double)NEON_ucvtf((ulong)*(uint *)(param_1 + 1));
    dVar4 = ((double)param_1[4] * DAT_0024e878) / dVar4;
    dVar3 = sin(dVar4);
    dVar4 = sin(DAT_0024e8b8 - dVar4);
    dVar3 = dVar3 / (dVar5 + dVar5);
    dVar5 = pow(10.0,(double)param_1[2] / 40.0);
    local_80 = *param_1;
    uStack_78 = NEON_fmadd(dVar3,dVar5,0x3ff0000000000000);
    local_70 = dVar4 * -2.0;
    uStack_68 = NEON_fmsub(dVar3,dVar5,0x3ff0000000000000);
    local_60 = dVar3 / dVar5 + 1.0;
    local_50 = 1.0 - dVar3 / dVar5;
    dStack_58 = local_70;
    uVar2 = ma_biquad_reinit(&local_80,param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005cf6b0  ma_peak2_process_pcm_frames =====

undefined8 ma_peak2_process_pcm_frames(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = ma_biquad_process_pcm_frames();
    return uVar1;
  }
  return 0xfffffffe;
}


// ===== 005cf6c0  ma_peak2_get_latency =====

long ma_peak2_get_latency(long param_1)

{
  return (ulong)(param_1 != 0) << 1;
}


// ===== 005cf6d0  ma_loshelf2_config_init =====

void ma_loshelf2_config_init
               (undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  if (param_1 != (undefined4 *)0x0) {
    *(undefined8 *)(param_1 + 2) = 0;
  }
  *param_1 = param_5;
  param_1[1] = param_6;
  param_1[2] = param_7;
  *(undefined8 *)(param_1 + 4) = param_2;
  *(undefined8 *)(param_1 + 6) = param_3;
  *(undefined8 *)(param_1 + 8) = param_4;
  return;
}


// ===== 005cf6ec  ma_loshelf2_get_heap_size =====

undefined8 ma_loshelf2_get_heap_size(long param_1,long *param_2)

{
  uint uVar1;
  
  if (param_2 != (long *)0x0) {
    uVar1 = *(uint *)(param_1 + 4);
    *param_2 = 0;
    if (uVar1 != 0) {
      *param_2 = (ulong)uVar1 << 3;
      return 0;
    }
  }
  return 0xfffffffe;
}


// ===== 005cf714  ma_loshelf2_init_preallocated =====

void ma_loshelf2_init_preallocated(undefined4 *param_1,void *param_2,undefined8 *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 local_80;
  uint uStack_7c;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_3 != (undefined8 *)0x0) {
    param_3[1] = 0;
    *param_3 = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    param_3[5] = 0;
    param_3[4] = 0;
    param_3[7] = 0;
    param_3[6] = 0;
    if (param_1 != (undefined4 *)0x0) {
      dVar6 = (double)NEON_ucvtf((ulong)(uint)param_1[2]);
      dVar6 = (*(double *)(param_1 + 8) * DAT_0024e878) / dVar6;
      dVar4 = sin(dVar6);
      dVar6 = sin(DAT_0024e8b8 - dVar6);
      dVar5 = pow(10.0,*(double *)(param_1 + 4) / 40.0);
      local_80 = *param_1;
      uStack_7c = param_1[1];
      uVar1 = (ulong)uStack_7c;
      dVar7 = dVar5 + 1.0;
      dVar9 = dVar5 + -1.0;
      dVar8 = (double)NEON_fmadd(dVar5 + 1.0 / dVar5,1.0 / *(double *)(param_1 + 6) + -1.0,
                                 0x4000000000000000);
      dStack_50 = (double)NEON_fmadd(dVar9,dVar6,dVar7);
      dStack_70 = (double)NEON_fmsub(dVar7,dVar6,dVar9);
      dVar4 = (SQRT(dVar5) + SQRT(dVar5)) * dVar4 * 0.5 * SQRT(dVar8);
      dVar8 = (double)NEON_fmsub(dVar9,dVar6,dVar7);
      local_58 = (double)NEON_fmadd(dVar7,dVar6,dVar9);
      local_78 = dVar5 * (dVar8 + dVar4);
      local_68 = dVar5 * (dVar8 - dVar4);
      dStack_60 = dStack_50 + dVar4;
      dStack_70 = (dVar5 + dVar5) * dStack_70;
      dStack_50 = dStack_50 - dVar4;
      local_58 = local_58 * -2.0;
      param_3[1] = 0;
      *param_3 = 0;
      param_3[3] = 0;
      param_3[2] = 0;
      param_3[5] = 0;
      param_3[4] = 0;
      param_3[7] = 0;
      param_3[6] = 0;
      if (uStack_7c != 0) {
        param_3[6] = param_2;
        if (param_2 != (void *)0x0) {
          memset(param_2,0,uVar1 << 3);
        }
        param_3[4] = param_2;
        param_3[5] = (void *)((long)param_2 + uVar1 * 4);
        uVar3 = ma_biquad_reinit(&local_80,param_3);
        goto LAB_005cf88c;
      }
    }
  }
  uVar3 = 0xfffffffe;
LAB_005cf88c:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 005cf8b8  ma_loshelf2_init =====

ulong ma_loshelf2_init(long param_1,undefined8 *param_2,long param_3)

{
  void *__ptr;
  ulong uVar1;
  size_t __size;
  
  if (*(uint *)(param_1 + 4) == 0) {
    return 0xfffffffe;
  }
  __size = (ulong)*(uint *)(param_1 + 4) << 3;
  if (param_2 == (undefined8 *)0x0) {
    __ptr = malloc(__size);
  }
  else {
    if ((code *)param_2[1] == (code *)0x0) {
      return 0xfffffffc;
    }
    __ptr = (void *)(*(code *)param_2[1])(__size,*param_2);
  }
  if (__ptr == (void *)0x0) {
    return 0xfffffffc;
  }
  uVar1 = ma_loshelf2_init_preallocated(param_1,__ptr,param_3);
  if ((int)uVar1 == 0) {
    *(undefined4 *)(param_3 + 0x38) = 1;
    return uVar1;
  }
  if (param_2 == (undefined8 *)0x0) {
    free(__ptr);
  }
  else {
    if ((code *)param_2[3] == (code *)0x0) {
      return uVar1;
    }
    (*(code *)param_2[3])(__ptr,*param_2);
  }
  return uVar1 & 0xffffffff;
}


// ===== 005cf988  ma_loshelf2_uninit =====

void ma_loshelf2_uninit(long param_1,undefined8 *param_2)

{
  void *__ptr;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x38) != 0)) &&
     (__ptr = *(void **)(param_1 + 0x30), __ptr != (void *)0x0)) {
    if (param_2 == (undefined8 *)0x0) {
      free(__ptr);
      return;
    }
    if ((code *)param_2[3] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005cf9ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_2[3])(__ptr,*param_2);
      return;
    }
  }
  return;
}


// ===== 005cf9b8  ma_loshelf2_reinit =====

undefined4 ma_loshelf2_reinit(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 local_80;
  double dStack_78;
  double local_70;
  double dStack_68;
  double local_60;
  double dStack_58;
  double local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = 0xfffffffe;
  if ((param_1 != (undefined8 *)0x0) && (param_2 != 0)) {
    dVar4 = (double)NEON_ucvtf((ulong)*(uint *)(param_1 + 1));
    dVar4 = ((double)param_1[4] * DAT_0024e878) / dVar4;
    dVar3 = sin(dVar4);
    dVar4 = sin(DAT_0024e8b8 - dVar4);
    dStack_68 = pow(10.0,(double)param_1[2] / 40.0);
    dVar5 = dStack_68 + 1.0;
    dVar7 = dStack_68 + -1.0;
    dVar6 = (double)NEON_fmadd(dStack_68 + 1.0 / dStack_68,1.0 / (double)param_1[3] + -1.0,
                               0x4000000000000000);
    local_70 = (double)NEON_fmsub(dVar5,dVar4,dVar7);
    local_50 = (double)NEON_fmadd(dVar7,dVar4,dVar5);
    dVar3 = (SQRT(dStack_68) + SQRT(dStack_68)) * dVar3 * 0.5 * SQRT(dVar6);
    dVar6 = (double)NEON_fmsub(dVar7,dVar4,dVar5);
    dStack_58 = (double)NEON_fmadd(dVar5,dVar4,dVar7);
    dStack_78 = dStack_68 * (dVar6 + dVar3);
    local_70 = (dStack_68 + dStack_68) * local_70;
    dStack_68 = dStack_68 * (dVar6 - dVar3);
    local_60 = local_50 + dVar3;
    local_50 = local_50 - dVar3;
    local_80 = *param_1;
    dStack_58 = dStack_58 * -2.0;
    uVar2 = ma_biquad_reinit(&local_80,param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005cfb1c  ma_loshelf2_process_pcm_frames =====

undefined8 ma_loshelf2_process_pcm_frames(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = ma_biquad_process_pcm_frames();
    return uVar1;
  }
  return 0xfffffffe;
}


// ===== 005cfb2c  ma_loshelf2_get_latency =====

long ma_loshelf2_get_latency(long param_1)

{
  return (ulong)(param_1 != 0) << 1;
}


// ===== 005cfb3c  ma_hishelf2_config_init =====

void ma_hishelf2_config_init
               (undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  if (param_1 != (undefined4 *)0x0) {
    *(undefined8 *)(param_1 + 2) = 0;
  }
  *param_1 = param_5;
  param_1[1] = param_6;
  param_1[2] = param_7;
  *(undefined8 *)(param_1 + 4) = param_2;
  *(undefined8 *)(param_1 + 6) = param_3;
  *(undefined8 *)(param_1 + 8) = param_4;
  return;
}


// ===== 005cfb58  ma_hishelf2_get_heap_size =====

undefined8 ma_hishelf2_get_heap_size(long param_1,long *param_2)

{
  uint uVar1;
  
  if (param_2 != (long *)0x0) {
    uVar1 = *(uint *)(param_1 + 4);
    *param_2 = 0;
    if (uVar1 != 0) {
      *param_2 = (ulong)uVar1 << 3;
      return 0;
    }
  }
  return 0xfffffffe;
}


// ===== 005cfb80  ma_hishelf2_init_preallocated =====

void ma_hishelf2_init_preallocated(undefined4 *param_1,void *param_2,undefined8 *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 local_80;
  uint uStack_7c;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_3 != (undefined8 *)0x0) {
    param_3[1] = 0;
    *param_3 = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    param_3[5] = 0;
    param_3[4] = 0;
    param_3[7] = 0;
    param_3[6] = 0;
    if (param_1 != (undefined4 *)0x0) {
      dVar5 = (double)NEON_ucvtf((ulong)(uint)param_1[2]);
      dVar5 = (*(double *)(param_1 + 8) * DAT_0024e878) / dVar5;
      dVar4 = sin(dVar5);
      dVar5 = sin(DAT_0024e8b8 - dVar5);
      local_68 = pow(10.0,*(double *)(param_1 + 4) / 40.0);
      local_80 = *param_1;
      uStack_7c = param_1[1];
      uVar1 = (ulong)uStack_7c;
      dVar6 = local_68 + 1.0;
      dVar8 = local_68 + -1.0;
      dVar7 = (double)NEON_fmadd(local_68 + 1.0 / local_68,1.0 / *(double *)(param_1 + 6) + -1.0,
                                 0x4000000000000000);
      dStack_50 = (double)NEON_fmsub(dVar8,dVar5,dVar6);
      dStack_70 = (double)NEON_fmadd(dVar6,dVar5,dVar8);
      dVar4 = (SQRT(local_68) + SQRT(local_68)) * dVar4 * 0.5 * SQRT(dVar7);
      dVar7 = (double)NEON_fmadd(dVar8,dVar5,dVar6);
      local_58 = (double)NEON_fmsub(dVar6,dVar5,dVar8);
      dStack_70 = local_68 * -2.0 * dStack_70;
      local_58 = local_58 + local_58;
      local_78 = local_68 * (dVar7 + dVar4);
      local_68 = local_68 * (dVar7 - dVar4);
      dStack_60 = dStack_50 + dVar4;
      dStack_50 = dStack_50 - dVar4;
      param_3[1] = 0;
      *param_3 = 0;
      param_3[3] = 0;
      param_3[2] = 0;
      param_3[5] = 0;
      param_3[4] = 0;
      param_3[7] = 0;
      param_3[6] = 0;
      if (uStack_7c != 0) {
        param_3[6] = param_2;
        if (param_2 != (void *)0x0) {
          memset(param_2,0,uVar1 << 3);
        }
        param_3[4] = param_2;
        param_3[5] = (void *)((long)param_2 + uVar1 * 4);
        uVar3 = ma_biquad_reinit(&local_80,param_3);
        goto LAB_005cfcf8;
      }
    }
  }
  uVar3 = 0xfffffffe;
LAB_005cfcf8:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 005cfd24  ma_hishelf2_init =====

ulong ma_hishelf2_init(long param_1,undefined8 *param_2,long param_3)

{
  void *__ptr;
  ulong uVar1;
  size_t __size;
  
  if (*(uint *)(param_1 + 4) == 0) {
    return 0xfffffffe;
  }
  __size = (ulong)*(uint *)(param_1 + 4) << 3;
  if (param_2 == (undefined8 *)0x0) {
    __ptr = malloc(__size);
  }
  else {
    if ((code *)param_2[1] == (code *)0x0) {
      return 0xfffffffc;
    }
    __ptr = (void *)(*(code *)param_2[1])(__size,*param_2);
  }
  if (__ptr == (void *)0x0) {
    return 0xfffffffc;
  }
  uVar1 = ma_hishelf2_init_preallocated(param_1,__ptr,param_3);
  if ((int)uVar1 == 0) {
    *(undefined4 *)(param_3 + 0x38) = 1;
    return uVar1;
  }
  if (param_2 == (undefined8 *)0x0) {
    free(__ptr);
  }
  else {
    if ((code *)param_2[3] == (code *)0x0) {
      return uVar1;
    }
    (*(code *)param_2[3])(__ptr,*param_2);
  }
  return uVar1 & 0xffffffff;
}


// ===== 005cfdf4  ma_hishelf2_uninit =====

void ma_hishelf2_uninit(long param_1,undefined8 *param_2)

{
  void *__ptr;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x38) != 0)) &&
     (__ptr = *(void **)(param_1 + 0x30), __ptr != (void *)0x0)) {
    if (param_2 == (undefined8 *)0x0) {
      free(__ptr);
      return;
    }
    if ((code *)param_2[3] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005cfe18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_2[3])(__ptr,*param_2);
      return;
    }
  }
  return;
}


// ===== 005cfe24  ma_hishelf2_reinit =====

undefined4 ma_hishelf2_reinit(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 local_80;
  double dStack_78;
  double local_70;
  double dStack_68;
  double local_60;
  double dStack_58;
  double local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = 0xfffffffe;
  if ((param_1 != (undefined8 *)0x0) && (param_2 != 0)) {
    dVar4 = (double)NEON_ucvtf((ulong)*(uint *)(param_1 + 1));
    dVar4 = ((double)param_1[4] * DAT_0024e878) / dVar4;
    dVar3 = sin(dVar4);
    dVar4 = sin(DAT_0024e8b8 - dVar4);
    dStack_68 = pow(10.0,(double)param_1[2] / 40.0);
    dVar5 = dStack_68 + 1.0;
    dVar7 = dStack_68 + -1.0;
    dVar6 = (double)NEON_fmadd(dStack_68 + 1.0 / dStack_68,1.0 / (double)param_1[3] + -1.0,
                               0x4000000000000000);
    local_70 = (double)NEON_fmadd(dVar5,dVar4,dVar7);
    local_50 = (double)NEON_fmsub(dVar7,dVar4,dVar5);
    dVar3 = (SQRT(dStack_68) + SQRT(dStack_68)) * dVar3 * 0.5 * SQRT(dVar6);
    dVar6 = (double)NEON_fmadd(dVar7,dVar4,dVar5);
    dStack_58 = (double)NEON_fmsub(dVar5,dVar4,dVar7);
    local_70 = dStack_68 * -2.0 * local_70;
    dStack_58 = dStack_58 + dStack_58;
    dStack_78 = dStack_68 * (dVar6 + dVar3);
    dStack_68 = dStack_68 * (dVar6 - dVar3);
    local_60 = local_50 + dVar3;
    local_50 = local_50 - dVar3;
    local_80 = *param_1;
    uVar2 = ma_biquad_reinit(&local_80,param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005cff88  ma_hishelf2_process_pcm_frames =====

undefined8 ma_hishelf2_process_pcm_frames(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = ma_biquad_process_pcm_frames();
    return uVar1;
  }
  return 0xfffffffe;
}


// ===== 005cff98  ma_hishelf2_get_latency =====

long ma_hishelf2_get_latency(long param_1)

{
  return (ulong)(param_1 != 0) << 1;
}


// ===== 005cffa8  ma_delay_config_init =====

void ma_delay_config_init
               (undefined4 *param_1,float param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[6] = param_2;
  *(undefined8 *)(param_1 + 4) = uVar1;
  param_1[2] = param_5;
  param_1[3] = (uint)(param_2 == 0.0);
  return;
}


// ===== 005cffc8  ma_delay_init =====

undefined8 ma_delay_init(int *param_1,undefined8 *param_2,undefined8 *param_3)

{
  size_t __n;
  int iVar1;
  int iVar2;
  void *__s;
  ulong uVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (param_3 == (undefined8 *)0x0) {
    return 0xfffffffe;
  }
  param_3[3] = 0;
  param_3[2] = 0;
  param_3[5] = 0;
  param_3[4] = 0;
  param_3[1] = 0;
  *param_3 = 0;
  if (param_1 == (int *)0x0) {
    return 0xfffffffe;
  }
  fVar4 = (float)param_1[6];
  if (fVar4 < 0.0) {
    return 0xfffffffe;
  }
  if (fVar4 == 1.0 || fVar4 < 1.0 != NAN(fVar4)) {
    uVar5 = *(undefined8 *)(param_1 + 3);
    uVar7 = *(undefined8 *)(param_1 + 2);
    uVar6 = *(undefined8 *)param_1;
    *(undefined8 *)((long)param_3 + 0x14) = *(undefined8 *)(param_1 + 5);
    *(undefined8 *)((long)param_3 + 0xc) = uVar5;
    param_3[1] = uVar7;
    *param_3 = uVar6;
    iVar1 = param_1[2];
    iVar2 = *param_1;
    *(undefined4 *)((long)param_3 + 0x1c) = 0;
    *(int *)(param_3 + 4) = iVar1;
    uVar3 = (ulong)(uint)(iVar1 * iVar2 * 4);
    if (param_2 == (undefined8 *)0x0) {
      __s = malloc(uVar3);
    }
    else {
      if ((code *)param_2[1] == (code *)0x0) {
        param_3[5] = 0;
        return 0xfffffffc;
      }
      __s = (void *)(*(code *)param_2[1])(uVar3,*param_2);
    }
    param_3[5] = __s;
    if (__s == (void *)0x0) {
      return 0xfffffffc;
    }
    for (uVar3 = (ulong)*(uint *)(param_3 + 4) * (ulong)(uint)(*param_1 << 2); uVar3 != 0;
        uVar3 = uVar3 - __n) {
      __n = uVar3;
      if (0xfffffffe < uVar3) {
        __n = 0xffffffff;
      }
      memset(__s,0,__n);
      __s = (void *)((long)__s + __n);
    }
    return 0;
  }
  return 0xfffffffe;
}


// ===== 005d00d4  ma_delay_uninit =====

void ma_delay_uninit(long param_1,undefined8 *param_2)

{
  void *__ptr;
  
  if ((param_1 != 0) && (__ptr = *(void **)(param_1 + 0x28), __ptr != (void *)0x0)) {
    if (param_2 == (undefined8 *)0x0) {
      free(__ptr);
      return;
    }
    if ((code *)param_2[3] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005d00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_2[3])(__ptr,*param_2);
      return;
    }
  }
  return;
}


// ===== 005d00fc  ma_delay_process_pcm_frames =====

undefined4 ma_delay_process_pcm_frames(uint *param_1,long param_2,long param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  undefined4 uVar12;
  
  uVar12 = 0xfffffffe;
  if (((param_1 != (uint *)0x0) && (param_2 != 0)) && (param_3 != 0)) {
    if (param_4 == 0) {
      return 0;
    }
    uVar2 = *param_1;
    iVar7 = 0;
    uVar5 = param_1[7];
    uVar1 = param_1[8];
    lVar6 = (ulong)uVar2 * 4;
    do {
      if (uVar2 != 0) {
        uVar3 = param_1[3];
        lVar8 = *(long *)(param_1 + 10);
        uVar9 = 0;
        do {
          uVar10 = (ulong)(uVar5 * uVar2 + (int)uVar9);
          lVar4 = uVar9 * 4;
          fVar11 = *(float *)(lVar8 + uVar10 * 4);
          if (uVar3 == 0) {
            fVar11 = (float)NEON_fmadd(fVar11,param_1[6],
                                       *(float *)(param_3 + lVar4) * (float)param_1[5]);
            *(float *)(lVar8 + uVar10 * 4) = fVar11;
            *(float *)(param_2 + lVar4) = fVar11 * (float)param_1[4];
          }
          else {
            *(float *)(param_2 + lVar4) = fVar11 * (float)param_1[4];
            uVar12 = NEON_fmadd(*(undefined4 *)(lVar8 + uVar10 * 4),param_1[6],
                                *(float *)(param_3 + lVar4) * (float)param_1[5]);
            *(undefined4 *)(lVar8 + uVar10 * 4) = uVar12;
          }
          uVar9 = uVar9 + 1;
        } while (uVar2 != uVar9);
      }
      iVar7 = iVar7 + 1;
      param_2 = param_2 + lVar6;
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = (uVar5 + 1) / uVar1;
      }
      param_3 = param_3 + lVar6;
      uVar5 = (uVar5 + 1) - uVar3 * uVar1;
    } while (iVar7 != param_4);
    uVar12 = 0;
    param_1[7] = uVar5;
  }
  return uVar12;
}


// ===== 005d01dc  ma_delay_set_wet =====

void ma_delay_set_wet(undefined4 param_1,long param_2)

{
  if (param_2 != 0) {
    *(undefined4 *)(param_2 + 0x10) = param_1;
  }
  return;
}


// ===== 005d01e8  ma_delay_get_wet =====

undefined4 ma_delay_get_wet(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x10);
  }
  return 0;
}


// ===== 005d01fc  ma_delay_set_dry =====

void ma_delay_set_dry(undefined4 param_1,long param_2)

{
  if (param_2 != 0) {
    *(undefined4 *)(param_2 + 0x14) = param_1;
  }
  return;
}


// ===== 005d0208  ma_delay_get_dry =====

undefined4 ma_delay_get_dry(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x14);
  }
  return 0;
}


// ===== 005d021c  ma_delay_set_decay =====

void ma_delay_set_decay(undefined4 param_1,long param_2)

{
  if (param_2 != 0) {
    *(undefined4 *)(param_2 + 0x18) = param_1;
  }
  return;
}


// ===== 005d0228  ma_delay_get_decay =====

undefined4 ma_delay_get_decay(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x18);
  }
  return 0;
}


// ===== 005d023c  ma_gainer_config_init =====

ulong ma_gainer_config_init(ulong param_1,long param_2)

{
  return param_1 & 0xffffffff | param_2 << 0x20;
}


// ===== 005d0248  ma_gainer_get_heap_size =====

undefined8 ma_gainer_get_heap_size(uint *param_1,long *param_2)

{
  if (((param_2 != (long *)0x0) && (*param_2 = 0, param_1 != (uint *)0x0)) && (*param_1 != 0)) {
    *param_2 = (ulong)*param_1 << 3;
    return 0;
  }
  return 0xfffffffe;
}


// ===== 005d0274  ma_gainer_init_preallocated =====

undefined4 ma_gainer_init_preallocated(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined8 uVar13;
  
  if (param_3 == (undefined8 *)0x0) {
    return 0xfffffffe;
  }
  param_3[3] = 0;
  param_3[2] = 0;
  param_3[5] = 0;
  param_3[4] = 0;
  param_3[1] = 0;
  *param_3 = 0;
  if (param_1 == (uint *)0x0) {
    return 0xfffffffe;
  }
  if (param_2 == (undefined8 *)0x0) {
    return 0xfffffffe;
  }
  uVar2 = *param_1;
  uVar11 = (ulong)uVar2;
  if (uVar2 != 0) {
    param_3[4] = param_2;
    memset(param_2,0,uVar11 << 3);
    param_3[2] = param_2;
    param_3[3] = (void *)((long)param_2 + uVar11 * 4);
    *(undefined4 *)((long)param_3 + 0xc) = 0x3f800000;
    uVar5 = *(undefined8 *)param_1;
    *(undefined4 *)(param_3 + 1) = 0xffffffff;
    *param_3 = uVar5;
    uVar3 = *param_1;
    uVar6 = (ulong)uVar3;
    if (uVar3 != 0) {
      uVar8 = 0;
      if ((7 < uVar3) && (7 < uVar2)) {
        auVar12 = NEON_fmov(0x3f800000,4);
        uVar8 = uVar6 & 0xfffffff8;
        puVar9 = param_2;
        uVar10 = uVar8;
        do {
          uVar13 = auVar12._8_8_;
          puVar9[1] = uVar13;
          uVar5 = auVar12._0_8_;
          *puVar9 = uVar5;
          puVar9[3] = uVar13;
          puVar9[2] = uVar5;
          puVar1 = (undefined8 *)((long)puVar9 + uVar11 * 4);
          uVar10 = uVar10 - 8;
          puVar9 = puVar9 + 4;
          puVar1[1] = uVar13;
          *puVar1 = uVar5;
          puVar1[3] = uVar13;
          puVar1[2] = uVar5;
        } while (uVar10 != 0);
        if (uVar8 == uVar6) {
          return 0;
        }
      }
      puVar4 = (undefined4 *)((long)param_2 + uVar8 * 4);
      lVar7 = uVar6 - uVar8;
      do {
        *puVar4 = 0x3f800000;
        lVar7 = lVar7 + -1;
        puVar4[uVar11] = 0x3f800000;
        puVar4 = puVar4 + 1;
      } while (lVar7 != 0);
    }
    return 0;
  }
  return 0xfffffffe;
}


// ===== 005d0394  ma_gainer_init =====

undefined8 ma_gainer_init(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *__ptr;
  size_t __size;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined8 uVar13;
  
  if ((param_1 == (uint *)0x0) || (*param_1 == 0)) {
LAB_005d04fc:
    uVar4 = 0xfffffffe;
  }
  else {
    __size = (ulong)*param_1 << 3;
    if (param_2 == (undefined8 *)0x0) {
      __ptr = (undefined8 *)malloc(__size);
joined_r0x005d04d4:
      if (__ptr != (undefined8 *)0x0) {
        if (param_3 != (undefined8 *)0x0) {
          param_3[3] = 0;
          param_3[2] = 0;
          param_3[5] = 0;
          param_3[4] = 0;
          param_3[1] = 0;
          *param_3 = 0;
          uVar2 = *param_1;
          uVar11 = (ulong)uVar2;
          if (uVar2 != 0) {
            param_3[4] = __ptr;
            memset(__ptr,0,uVar11 << 3);
            param_3[2] = __ptr;
            param_3[3] = (void *)((long)__ptr + uVar11 * 4);
            *(undefined4 *)((long)param_3 + 0xc) = 0x3f800000;
            uVar4 = *(undefined8 *)param_1;
            *(undefined4 *)(param_3 + 1) = 0xffffffff;
            *param_3 = uVar4;
            uVar3 = *param_1;
            uVar5 = (ulong)uVar3;
            if (uVar3 != 0) {
              uVar7 = 0;
              if ((7 < uVar3) && (7 < uVar2)) {
                auVar12 = NEON_fmov(0x3f800000,4);
                uVar7 = uVar5 & 0xfffffff8;
                puVar8 = __ptr;
                uVar10 = uVar7;
                do {
                  uVar13 = auVar12._8_8_;
                  puVar8[1] = uVar13;
                  uVar4 = auVar12._0_8_;
                  *puVar8 = uVar4;
                  puVar8[3] = uVar13;
                  puVar8[2] = uVar4;
                  puVar1 = (undefined8 *)((long)puVar8 + uVar11 * 4);
                  uVar10 = uVar10 - 8;
                  puVar8 = puVar8 + 4;
                  puVar1[1] = uVar13;
                  *puVar1 = uVar4;
                  puVar1[3] = uVar13;
                  puVar1[2] = uVar4;
                } while (uVar10 != 0);
                if (uVar7 == uVar5) goto LAB_005d04b0;
              }
              puVar9 = (undefined4 *)((long)__ptr + uVar7 * 4);
              lVar6 = uVar5 - uVar7;
              do {
                *puVar9 = 0x3f800000;
                lVar6 = lVar6 + -1;
                puVar9[uVar11] = 0x3f800000;
                puVar9 = puVar9 + 1;
              } while (lVar6 != 0);
            }
LAB_005d04b0:
            *(undefined4 *)(param_3 + 5) = 1;
            return 0;
          }
        }
        if (param_2 == (undefined8 *)0x0) {
          free(__ptr);
        }
        else if ((code *)param_2[3] != (code *)0x0) {
          (*(code *)param_2[3])(__ptr,*param_2);
        }
        goto LAB_005d04fc;
      }
    }
    else if ((code *)param_2[1] != (code *)0x0) {
      __ptr = (undefined8 *)(*(code *)param_2[1])(__size,*param_2);
      goto joined_r0x005d04d4;
    }
    uVar4 = 0xfffffffc;
  }
  return uVar4;
}


// ===== 005d0514  ma_gainer_uninit =====

void ma_gainer_uninit(long param_1,undefined8 *param_2)

{
  void *__ptr;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x28) != 0)) &&
     (__ptr = *(void **)(param_1 + 0x20), __ptr != (void *)0x0)) {
    if (param_2 == (undefined8 *)0x0) {
      free(__ptr);
      return;
    }
    if ((code *)param_2[3] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005d0538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_2[3])(__ptr,*param_2);
      return;
    }
  }
  return;
}


// ===== 005d0544  ma_gainer_process_pcm_frames =====

void ma_gainer_process_pcm_frames
               (uint *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  float *pfVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  float *pfVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  undefined4 *puVar19;
  float *pfVar20;
  undefined8 *puVar21;
  long lVar22;
  long lVar23;
  undefined8 *puVar24;
  long lVar25;
  ulong uVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  ulong uVar29;
  float *pfVar30;
  float fVar31;
  float fVar32;
  undefined8 uVar33;
  float fVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  float fVar37;
  float fVar39;
  undefined8 uVar38;
  float fVar40;
  float fVar42;
  undefined8 uVar41;
  undefined4 uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined8 local_170 [5];
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
  undefined8 local_f0 [7];
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  if (param_1 == (uint *)0x0) {
    uVar4 = 0xfffffffe;
    goto LAB_005d0d54;
  }
  uVar5 = param_1[1];
  uVar1 = (ulong)uVar5;
  uVar11 = param_1[2];
  uVar12 = (ulong)(uVar11 - uVar5);
  if (param_4 <= uVar11 - uVar5) {
    uVar12 = param_4;
  }
  if ((uVar11 < uVar5) && (uVar12 != 0)) {
    if ((param_2 != (undefined8 *)0x0) && (param_3 != (undefined8 *)0x0)) {
      uVar2 = *param_1;
      uVar13 = (ulong)uVar2;
      fVar31 = (float)uVar11 / (float)uVar1;
      fVar32 = 1.0 / (float)uVar1;
      if (uVar2 < 0x21) {
        if (uVar2 == 0) {
          uVar13 = 0;
LAB_005d0930:
          uVar16 = 0;
          uVar18 = uVar13 & 0x7ffffffc;
          puVar7 = param_3;
          puVar14 = param_2;
          do {
            if (uVar2 != 0) {
              if (uVar13 < 4) {
                uVar26 = 0;
              }
              else {
                puVar8 = local_170;
                puVar10 = local_f0;
                puVar21 = puVar7;
                puVar24 = puVar14;
                uVar26 = uVar18;
                do {
                  uVar4 = *puVar21;
                  uVar35 = puVar8[1];
                  uVar33 = *puVar8;
                  uVar26 = uVar26 - 4;
                  fVar31 = (float)*puVar10;
                  fVar32 = (float)((ulong)*puVar10 >> 0x20);
                  fVar34 = (float)puVar10[1];
                  fVar37 = (float)((ulong)puVar10[1] >> 0x20);
                  puVar24[1] = CONCAT44((float)((ulong)puVar21[1] >> 0x20) * fVar37,
                                        (float)puVar21[1] * fVar34);
                  *puVar24 = CONCAT44((float)((ulong)uVar4 >> 0x20) * fVar32,(float)uVar4 * fVar31);
                  puVar10[1] = CONCAT44(fVar37 + (float)((ulong)uVar35 >> 0x20),
                                        fVar34 + (float)uVar35);
                  *puVar10 = CONCAT44(fVar32 + (float)((ulong)uVar33 >> 0x20),fVar31 + (float)uVar33
                                     );
                  puVar8 = puVar8 + 2;
                  puVar10 = puVar10 + 2;
                  puVar21 = puVar21 + 2;
                  puVar24 = puVar24 + 2;
                } while (uVar26 != 0);
                uVar26 = uVar18;
                if (uVar13 == uVar18) goto LAB_005d0950;
              }
              do {
                lVar17 = uVar26 * 4;
                uVar26 = uVar26 + 1;
                fVar31 = *(float *)((long)local_f0 + lVar17);
                fVar32 = *(float *)((long)local_170 + lVar17);
                *(float *)((long)puVar14 + lVar17) = *(float *)((long)puVar7 + lVar17) * fVar31;
                *(float *)((long)local_f0 + lVar17) = fVar31 + fVar32;
              } while (uVar13 != uVar26);
            }
LAB_005d0950:
            uVar16 = uVar16 + 1;
            puVar14 = (undefined8 *)((long)puVar14 + uVar13 * 4);
            puVar7 = (undefined8 *)((long)puVar7 + uVar13 * 4);
          } while (uVar16 != uVar12);
        }
        else {
          puVar14 = *(undefined8 **)(param_1 + 4);
          puVar7 = *(undefined8 **)(param_1 + 6);
          fVar34 = (float)param_1[3];
          if (uVar2 < 4) {
            uVar16 = 0;
LAB_005d0888:
            lVar6 = uVar16 * 4;
            lVar17 = uVar13 - uVar16;
            pfVar9 = (float *)((long)puVar7 + lVar6);
            pfVar15 = (float *)((long)puVar14 + lVar6);
            puVar19 = (undefined4 *)((long)local_f0 + lVar6);
            pfVar20 = (float *)((long)local_170 + lVar6);
            do {
              lVar17 = lVar17 + -1;
              fVar37 = fVar34 * (*pfVar9 - *pfVar15);
              uVar43 = NEON_fmadd(*pfVar15,fVar34,fVar31 * fVar37);
              *pfVar20 = fVar32 * fVar37;
              *puVar19 = uVar43;
              pfVar9 = pfVar9 + 1;
              pfVar15 = pfVar15 + 1;
              puVar19 = puVar19 + 1;
              pfVar20 = pfVar20 + 1;
            } while (lVar17 != 0);
          }
          else {
            uVar16 = uVar13 & 0x3c;
            fVar44 = (float)*puVar14;
            fVar45 = (float)((ulong)*puVar14 >> 0x20);
            fVar46 = (float)puVar14[1];
            fVar47 = (float)((ulong)puVar14[1] >> 0x20);
            fVar37 = ((float)*puVar7 - fVar44) * fVar34;
            fVar39 = ((float)((ulong)*puVar7 >> 0x20) - fVar45) * fVar34;
            fVar40 = ((float)puVar7[1] - fVar46) * fVar34;
            fVar42 = ((float)((ulong)puVar7[1] >> 0x20) - fVar47) * fVar34;
            local_170[1] = CONCAT44(fVar42 * fVar32,fVar40 * fVar32);
            local_170[0] = CONCAT44(fVar39 * fVar32,fVar37 * fVar32);
            local_f0[1] = CONCAT44(fVar42 * fVar31 + fVar47 * fVar34,
                                   fVar40 * fVar31 + fVar46 * fVar34);
            local_f0[0] = CONCAT44(fVar39 * fVar31 + fVar45 * fVar34,
                                   fVar37 * fVar31 + fVar44 * fVar34);
            if (uVar16 != 4) {
              fVar37 = (float)puVar14[2];
              fVar39 = (float)((ulong)puVar14[2] >> 0x20);
              fVar40 = (float)puVar14[3];
              fVar42 = (float)((ulong)puVar14[3] >> 0x20);
              fVar44 = ((float)puVar7[2] - fVar37) * fVar34;
              fVar45 = ((float)((ulong)puVar7[2] >> 0x20) - fVar39) * fVar34;
              fVar46 = ((float)puVar7[3] - fVar40) * fVar34;
              fVar47 = ((float)((ulong)puVar7[3] >> 0x20) - fVar42) * fVar34;
              local_170[3] = CONCAT44(fVar47 * fVar32,fVar46 * fVar32);
              local_170[2] = CONCAT44(fVar45 * fVar32,fVar44 * fVar32);
              local_f0[3] = CONCAT44(fVar47 * fVar31 + fVar34 * fVar42,
                                     fVar46 * fVar31 + fVar34 * fVar40);
              local_f0[2] = CONCAT44(fVar45 * fVar31 + fVar34 * fVar39,
                                     fVar44 * fVar31 + fVar34 * fVar37);
              if (uVar16 != 8) {
                fVar44 = (float)puVar14[4];
                fVar45 = (float)((ulong)puVar14[4] >> 0x20);
                fVar46 = (float)puVar14[5];
                fVar47 = (float)((ulong)puVar14[5] >> 0x20);
                fVar37 = ((float)puVar7[4] - fVar44) * fVar34;
                fVar39 = ((float)((ulong)puVar7[4] >> 0x20) - fVar45) * fVar34;
                fVar40 = ((float)puVar7[5] - fVar46) * fVar34;
                fVar42 = ((float)((ulong)puVar7[5] >> 0x20) - fVar47) * fVar34;
                uStack_148 = CONCAT44(fVar42 * fVar32,fVar40 * fVar32);
                local_170[4] = CONCAT44(fVar39 * fVar32,fVar37 * fVar32);
                local_f0[5] = CONCAT44(fVar42 * fVar31 + fVar34 * fVar47,
                                       fVar40 * fVar31 + fVar34 * fVar46);
                local_f0[4] = CONCAT44(fVar39 * fVar31 + fVar34 * fVar45,
                                       fVar37 * fVar31 + fVar34 * fVar44);
                if (uVar16 != 0xc) {
                  fVar44 = (float)puVar14[6];
                  fVar45 = (float)((ulong)puVar14[6] >> 0x20);
                  fVar46 = (float)puVar14[7];
                  fVar47 = (float)((ulong)puVar14[7] >> 0x20);
                  fVar37 = ((float)puVar7[6] - fVar44) * fVar34;
                  fVar39 = ((float)((ulong)puVar7[6] >> 0x20) - fVar45) * fVar34;
                  fVar40 = ((float)puVar7[7] - fVar46) * fVar34;
                  fVar42 = ((float)((ulong)puVar7[7] >> 0x20) - fVar47) * fVar34;
                  uStack_138 = CONCAT44(fVar42 * fVar32,fVar40 * fVar32);
                  local_140 = CONCAT44(fVar39 * fVar32,fVar37 * fVar32);
                  uStack_b8 = CONCAT44(fVar42 * fVar31 + fVar34 * fVar47,
                                       fVar40 * fVar31 + fVar34 * fVar46);
                  local_f0[6] = CONCAT44(fVar39 * fVar31 + fVar34 * fVar45,
                                         fVar37 * fVar31 + fVar34 * fVar44);
                  if (uVar16 != 0x10) {
                    fVar44 = (float)puVar14[8];
                    fVar45 = (float)((ulong)puVar14[8] >> 0x20);
                    fVar46 = (float)puVar14[9];
                    fVar47 = (float)((ulong)puVar14[9] >> 0x20);
                    fVar37 = ((float)puVar7[8] - fVar44) * fVar34;
                    fVar39 = ((float)((ulong)puVar7[8] >> 0x20) - fVar45) * fVar34;
                    fVar40 = ((float)puVar7[9] - fVar46) * fVar34;
                    fVar42 = ((float)((ulong)puVar7[9] >> 0x20) - fVar47) * fVar34;
                    uStack_128 = CONCAT44(fVar42 * fVar32,fVar40 * fVar32);
                    local_130 = CONCAT44(fVar39 * fVar32,fVar37 * fVar32);
                    uStack_a8 = CONCAT44(fVar42 * fVar31 + fVar34 * fVar47,
                                         fVar40 * fVar31 + fVar34 * fVar46);
                    local_b0 = CONCAT44(fVar39 * fVar31 + fVar34 * fVar45,
                                        fVar37 * fVar31 + fVar34 * fVar44);
                    if (uVar16 != 0x14) {
                      fVar44 = (float)puVar14[10];
                      fVar45 = (float)((ulong)puVar14[10] >> 0x20);
                      fVar46 = (float)puVar14[0xb];
                      fVar47 = (float)((ulong)puVar14[0xb] >> 0x20);
                      fVar37 = ((float)puVar7[10] - fVar44) * fVar34;
                      fVar39 = ((float)((ulong)puVar7[10] >> 0x20) - fVar45) * fVar34;
                      fVar40 = ((float)puVar7[0xb] - fVar46) * fVar34;
                      fVar42 = ((float)((ulong)puVar7[0xb] >> 0x20) - fVar47) * fVar34;
                      uStack_118 = CONCAT44(fVar42 * fVar32,fVar40 * fVar32);
                      local_120 = CONCAT44(fVar39 * fVar32,fVar37 * fVar32);
                      uStack_98 = CONCAT44(fVar42 * fVar31 + fVar34 * fVar47,
                                           fVar40 * fVar31 + fVar34 * fVar46);
                      local_a0 = CONCAT44(fVar39 * fVar31 + fVar34 * fVar45,
                                          fVar37 * fVar31 + fVar34 * fVar44);
                      if (uVar16 != 0x18) {
                        fVar44 = (float)puVar14[0xc];
                        fVar45 = (float)((ulong)puVar14[0xc] >> 0x20);
                        fVar46 = (float)puVar14[0xd];
                        fVar47 = (float)((ulong)puVar14[0xd] >> 0x20);
                        fVar37 = ((float)puVar7[0xc] - fVar44) * fVar34;
                        fVar39 = ((float)((ulong)puVar7[0xc] >> 0x20) - fVar45) * fVar34;
                        fVar40 = ((float)puVar7[0xd] - fVar46) * fVar34;
                        fVar42 = ((float)((ulong)puVar7[0xd] >> 0x20) - fVar47) * fVar34;
                        uStack_108 = CONCAT44(fVar42 * fVar32,fVar40 * fVar32);
                        local_110 = CONCAT44(fVar39 * fVar32,fVar37 * fVar32);
                        uStack_88 = CONCAT44(fVar42 * fVar31 + fVar34 * fVar47,
                                             fVar40 * fVar31 + fVar34 * fVar46);
                        local_90 = CONCAT44(fVar39 * fVar31 + fVar34 * fVar45,
                                            fVar37 * fVar31 + fVar34 * fVar44);
                        if (uVar16 != 0x1c) {
                          fVar44 = (float)puVar14[0xe];
                          fVar45 = (float)((ulong)puVar14[0xe] >> 0x20);
                          fVar46 = (float)puVar14[0xf];
                          fVar47 = (float)((ulong)puVar14[0xf] >> 0x20);
                          fVar37 = ((float)puVar7[0xe] - fVar44) * fVar34;
                          fVar39 = ((float)((ulong)puVar7[0xe] >> 0x20) - fVar45) * fVar34;
                          fVar40 = ((float)puVar7[0xf] - fVar46) * fVar34;
                          fVar42 = ((float)((ulong)puVar7[0xf] >> 0x20) - fVar47) * fVar34;
                          uStack_f8 = CONCAT44(fVar42 * fVar32,fVar40 * fVar32);
                          local_100 = CONCAT44(fVar39 * fVar32,fVar37 * fVar32);
                          uStack_78 = CONCAT44(fVar42 * fVar31 + fVar34 * fVar47,
                                               fVar40 * fVar31 + fVar34 * fVar46);
                          local_80 = CONCAT44(fVar39 * fVar31 + fVar34 * fVar45,
                                              fVar37 * fVar31 + fVar34 * fVar44);
                        }
                      }
                    }
                  }
                }
              }
            }
            if (uVar16 != uVar13) goto LAB_005d0888;
          }
          fVar31 = (float)local_170[0];
          fVar32 = (float)((ulong)local_170[0] >> 0x20);
          puVar14 = param_3;
          puVar7 = param_2;
          uVar16 = uVar12;
          uVar4 = local_f0[0];
          if (uVar2 == 2) {
            do {
              uVar16 = uVar16 - 1;
              fVar34 = (float)((ulong)uVar4 >> 0x20);
              *puVar7 = CONCAT44(fVar34 * (float)((ulong)*puVar14 >> 0x20),
                                 (float)uVar4 * (float)*puVar14);
              puVar14 = puVar14 + 1;
              puVar7 = puVar7 + 1;
              uVar4 = CONCAT44(fVar32 + fVar34,fVar31 + (float)uVar4);
            } while (uVar16 != 0);
          }
          else {
            fVar34 = (float)((ulong)local_170[1] >> 0x20);
            fVar37 = (float)((ulong)local_170[2] >> 0x20);
            if (uVar2 == 6) {
              puVar14 = param_2 + 2;
              puVar7 = param_3 + 2;
              uVar13 = uVar12;
              uVar33 = local_f0[1];
              uVar35 = local_f0[2];
              do {
                uVar36 = puVar7[-2];
                uVar13 = uVar13 - 1;
                fVar39 = (float)uVar4;
                fVar40 = (float)((ulong)uVar4 >> 0x20);
                fVar42 = (float)uVar33;
                fVar44 = (float)((ulong)uVar33 >> 0x20);
                uVar4 = CONCAT44(fVar32 + fVar40,fVar31 + fVar39);
                uVar33 = CONCAT44(fVar34 + fVar44,(float)local_170[1] + fVar42);
                puVar14[-1] = CONCAT44(fVar44 * (float)((ulong)puVar7[-1] >> 0x20),
                                       fVar42 * (float)puVar7[-1]);
                puVar14[-2] = CONCAT44(fVar40 * (float)((ulong)uVar36 >> 0x20),
                                       fVar39 * (float)uVar36);
                fVar39 = (float)uVar35;
                fVar40 = (float)((ulong)uVar35 >> 0x20);
                uVar35 = CONCAT44(fVar37 + fVar40,(float)local_170[2] + fVar39);
                *puVar14 = CONCAT44(fVar40 * (float)((ulong)*puVar7 >> 0x20),fVar39 * (float)*puVar7
                                   );
                puVar14 = puVar14 + 3;
                puVar7 = puVar7 + 3;
              } while (uVar13 != 0);
            }
            else {
              if (uVar2 != 8) goto LAB_005d0930;
              puVar14 = param_2 + 2;
              puVar7 = param_3 + 2;
              uVar13 = uVar12;
              uVar33 = local_f0[1];
              uVar35 = local_f0[2];
              uVar36 = local_f0[3];
              do {
                uVar38 = puVar7[-2];
                uVar13 = uVar13 - 1;
                fVar39 = (float)uVar4;
                fVar40 = (float)((ulong)uVar4 >> 0x20);
                fVar42 = (float)uVar33;
                fVar44 = (float)((ulong)uVar33 >> 0x20);
                uVar4 = CONCAT44(fVar32 + fVar40,fVar31 + fVar39);
                uVar33 = CONCAT44(fVar34 + fVar44,(float)local_170[1] + fVar42);
                puVar14[-1] = CONCAT44(fVar44 * (float)((ulong)puVar7[-1] >> 0x20),
                                       fVar42 * (float)puVar7[-1]);
                puVar14[-2] = CONCAT44(fVar40 * (float)((ulong)uVar38 >> 0x20),
                                       fVar39 * (float)uVar38);
                uVar38 = *puVar7;
                fVar39 = (float)uVar35;
                fVar40 = (float)((ulong)uVar35 >> 0x20);
                fVar42 = (float)uVar36;
                fVar44 = (float)((ulong)uVar36 >> 0x20);
                uVar35 = CONCAT44(fVar37 + fVar40,(float)local_170[2] + fVar39);
                uVar36 = CONCAT44((float)((ulong)local_170[3] >> 0x20) + fVar44,
                                  (float)local_170[3] + fVar42);
                puVar14[1] = CONCAT44(fVar44 * (float)((ulong)puVar7[1] >> 0x20),
                                      fVar42 * (float)puVar7[1]);
                *puVar14 = CONCAT44(fVar40 * (float)((ulong)uVar38 >> 0x20),fVar39 * (float)uVar38);
                puVar14 = puVar14 + 4;
                puVar7 = puVar7 + 4;
              } while (uVar13 != 0);
            }
          }
        }
      }
      else {
        lVar17 = *(long *)(param_1 + 4);
        lVar6 = *(long *)(param_1 + 6);
        lVar23 = uVar13 * 4;
        fVar34 = (float)param_1[3];
        uVar16 = 0;
        uVar18 = uVar13 & 0xfffffff8;
        puVar14 = param_3 + 2;
        puVar7 = param_2 + 2;
        puVar10 = param_3;
        puVar8 = param_2;
        do {
          uVar26 = 0;
          if ((((ulong)((long)param_2 - (long)param_3) < 0x20) ||
              ((long)param_2 + (lVar23 * uVar16 - lVar17) < 0x20)) ||
             (puVar21 = (undefined8 *)(lVar6 + 0x10), puVar24 = (undefined8 *)(lVar17 + 0x10),
             puVar27 = puVar7, puVar28 = puVar14, uVar29 = uVar18,
             (long)param_2 + (lVar23 * uVar16 - lVar6) < 0x20)) {
LAB_005d06d0:
            lVar25 = uVar26 * 4;
            lVar22 = uVar13 - uVar26;
            pfVar9 = (float *)((long)puVar8 + lVar25);
            pfVar15 = (float *)(lVar6 + lVar25);
            pfVar20 = (float *)(lVar17 + lVar25);
            pfVar30 = (float *)((long)puVar10 + lVar25);
            do {
              lVar22 = lVar22 + -1;
              *pfVar9 = fVar34 * *pfVar30 * (*pfVar20 + fVar31 * (*pfVar15 - *pfVar20));
              pfVar9 = pfVar9 + 1;
              pfVar15 = pfVar15 + 1;
              pfVar20 = pfVar20 + 1;
              pfVar30 = pfVar30 + 1;
            } while (lVar22 != 0);
          }
          else {
            do {
              uVar29 = uVar29 - 8;
              uVar4 = puVar21[-2];
              uVar38 = puVar21[1];
              uVar35 = *puVar21;
              fVar37 = (float)puVar24[-2];
              fVar39 = (float)((ulong)puVar24[-2] >> 0x20);
              fVar40 = (float)puVar24[-1];
              fVar42 = (float)((ulong)puVar24[-1] >> 0x20);
              fVar44 = (float)*puVar24;
              fVar45 = (float)((ulong)*puVar24 >> 0x20);
              fVar46 = (float)puVar24[1];
              fVar47 = (float)((ulong)puVar24[1] >> 0x20);
              uVar33 = puVar28[-2];
              uVar41 = puVar28[1];
              uVar36 = *puVar28;
              puVar27[-1] = CONCAT44((float)((ulong)puVar28[-1] >> 0x20) *
                                     (fVar42 + ((float)((ulong)puVar21[-1] >> 0x20) - fVar42) *
                                               fVar31) * fVar34,
                                     (float)puVar28[-1] *
                                     (fVar40 + ((float)puVar21[-1] - fVar40) * fVar31) * fVar34);
              puVar27[-2] = CONCAT44((float)((ulong)uVar33 >> 0x20) *
                                     (fVar39 + ((float)((ulong)uVar4 >> 0x20) - fVar39) * fVar31) *
                                     fVar34,(float)uVar33 *
                                            (fVar37 + ((float)uVar4 - fVar37) * fVar31) * fVar34);
              puVar27[1] = CONCAT44((float)((ulong)uVar41 >> 0x20) *
                                    (fVar47 + ((float)((ulong)uVar38 >> 0x20) - fVar47) * fVar31) *
                                    fVar34,(float)uVar41 *
                                           (fVar46 + ((float)uVar38 - fVar46) * fVar31) * fVar34);
              *puVar27 = CONCAT44((float)((ulong)uVar36 >> 0x20) *
                                  (fVar45 + ((float)((ulong)uVar35 >> 0x20) - fVar45) * fVar31) *
                                  fVar34,(float)uVar36 *
                                         (fVar44 + ((float)uVar35 - fVar44) * fVar31) * fVar34);
              puVar21 = puVar21 + 4;
              puVar24 = puVar24 + 4;
              puVar27 = puVar27 + 4;
              puVar28 = puVar28 + 4;
            } while (uVar29 != 0);
            uVar26 = uVar18;
            if (uVar18 != uVar13) goto LAB_005d06d0;
          }
          fVar31 = fVar32 + fVar31;
          uVar16 = uVar16 + 1;
          puVar14 = (undefined8 *)((long)puVar14 + lVar23);
          puVar7 = (undefined8 *)((long)puVar7 + lVar23);
          puVar8 = (undefined8 *)((long)puVar8 + lVar23);
          puVar10 = (undefined8 *)((long)puVar10 + lVar23);
        } while (uVar16 != uVar12);
      }
    }
    uVar13 = uVar12 + uVar11;
    param_4 = param_4 - uVar12;
    uVar11 = (uint)uVar13;
    if (uVar1 <= uVar13) {
      uVar11 = uVar5;
    }
    param_2 = (undefined8 *)((long)param_2 + uVar12 * 4);
    param_3 = (undefined8 *)((long)param_3 + uVar12 * 4);
    param_1[2] = uVar11;
  }
  if ((param_2 != (undefined8 *)0x0) && (param_3 != (undefined8 *)0x0)) {
    uVar2 = *param_1;
    uVar12 = (ulong)uVar2;
    if (uVar2 < 0x21) {
      if (uVar2 != 0) {
        puVar14 = *(undefined8 **)(param_1 + 6);
        fVar31 = (float)param_1[3];
        if (uVar2 < 4) {
          uVar13 = 0;
        }
        else {
          uVar13 = uVar12 & 0x3c;
          local_f0[1] = CONCAT44((float)((ulong)puVar14[1] >> 0x20) * fVar31,
                                 (float)puVar14[1] * fVar31);
          local_f0[0] = CONCAT44((float)((ulong)*puVar14 >> 0x20) * fVar31,(float)*puVar14 * fVar31)
          ;
          if (uVar13 != 4) {
            local_f0[3] = CONCAT44((float)((ulong)puVar14[3] >> 0x20) * fVar31,
                                   (float)puVar14[3] * fVar31);
            local_f0[2] = CONCAT44((float)((ulong)puVar14[2] >> 0x20) * fVar31,
                                   (float)puVar14[2] * fVar31);
            if (uVar13 != 8) {
              local_f0[5] = CONCAT44((float)((ulong)puVar14[5] >> 0x20) * fVar31,
                                     (float)puVar14[5] * fVar31);
              local_f0[4] = CONCAT44((float)((ulong)puVar14[4] >> 0x20) * fVar31,
                                     (float)puVar14[4] * fVar31);
              if (uVar13 != 0xc) {
                uStack_b8 = CONCAT44((float)((ulong)puVar14[7] >> 0x20) * fVar31,
                                     (float)puVar14[7] * fVar31);
                local_f0[6] = CONCAT44((float)((ulong)puVar14[6] >> 0x20) * fVar31,
                                       (float)puVar14[6] * fVar31);
                if (uVar13 != 0x10) {
                  uStack_a8 = CONCAT44((float)((ulong)puVar14[9] >> 0x20) * fVar31,
                                       (float)puVar14[9] * fVar31);
                  local_b0 = CONCAT44((float)((ulong)puVar14[8] >> 0x20) * fVar31,
                                      (float)puVar14[8] * fVar31);
                  if (uVar13 != 0x14) {
                    uStack_98 = CONCAT44((float)((ulong)puVar14[0xb] >> 0x20) * fVar31,
                                         (float)puVar14[0xb] * fVar31);
                    local_a0 = CONCAT44((float)((ulong)puVar14[10] >> 0x20) * fVar31,
                                        (float)puVar14[10] * fVar31);
                    if (uVar13 != 0x18) {
                      uStack_88 = CONCAT44((float)((ulong)puVar14[0xd] >> 0x20) * fVar31,
                                           (float)puVar14[0xd] * fVar31);
                      local_90 = CONCAT44((float)((ulong)puVar14[0xc] >> 0x20) * fVar31,
                                          (float)puVar14[0xc] * fVar31);
                      if (uVar13 != 0x1c) {
                        uStack_78 = CONCAT44((float)((ulong)puVar14[0xf] >> 0x20) * fVar31,
                                             (float)puVar14[0xf] * fVar31);
                        local_80 = CONCAT44((float)((ulong)puVar14[0xe] >> 0x20) * fVar31,
                                            (float)puVar14[0xe] * fVar31);
                      }
                    }
                  }
                }
              }
            }
          }
          if (uVar13 == uVar12) goto LAB_005d0c64;
        }
        lVar17 = uVar12 - uVar13;
        pfVar9 = (float *)((long)puVar14 + uVar13 * 4);
        pfVar15 = (float *)((long)local_f0 + uVar13 * 4);
        do {
          lVar17 = lVar17 + -1;
          *pfVar15 = fVar31 * *pfVar9;
          pfVar9 = pfVar9 + 1;
          pfVar15 = pfVar15 + 1;
        } while (lVar17 != 0);
      }
LAB_005d0c64:
      if (param_4 != 0) {
        lVar17 = 0;
        uVar13 = 0;
        uVar16 = uVar12 & 0x38;
        puVar14 = param_3 + 2;
        puVar7 = param_2 + 2;
        do {
          if (uVar2 != 0) {
            puVar8 = puVar7;
            puVar10 = local_f0 + 2;
            puVar21 = puVar14;
            uVar18 = uVar16;
            if (uVar2 < 8) {
              uVar18 = 0;
            }
            else {
              do {
                uVar4 = puVar21[-2];
                uVar36 = puVar21[1];
                uVar35 = *puVar21;
                uVar18 = uVar18 - 8;
                uVar33 = puVar10[-2];
                uVar41 = puVar10[1];
                uVar38 = *puVar10;
                puVar8[-1] = CONCAT44((float)((ulong)puVar21[-1] >> 0x20) *
                                      (float)((ulong)puVar10[-1] >> 0x20),
                                      (float)puVar21[-1] * (float)puVar10[-1]);
                puVar8[-2] = CONCAT44((float)((ulong)uVar4 >> 0x20) * (float)((ulong)uVar33 >> 0x20)
                                      ,(float)uVar4 * (float)uVar33);
                puVar8[1] = CONCAT44((float)((ulong)uVar36 >> 0x20) * (float)((ulong)uVar41 >> 0x20)
                                     ,(float)uVar36 * (float)uVar41);
                *puVar8 = CONCAT44((float)((ulong)uVar35 >> 0x20) * (float)((ulong)uVar38 >> 0x20),
                                   (float)uVar35 * (float)uVar38);
                puVar8 = puVar8 + 4;
                puVar10 = puVar10 + 4;
                puVar21 = puVar21 + 4;
              } while (uVar18 != 0);
              uVar18 = uVar16;
              if (uVar16 == uVar12) goto LAB_005d0c8c;
            }
            lVar23 = (uVar18 + lVar17) * 4;
            lVar6 = uVar12 - uVar18;
            pfVar9 = (float *)((long)local_f0 + uVar18 * 4);
            pfVar15 = (float *)((long)param_2 + lVar23);
            pfVar20 = (float *)((long)param_3 + lVar23);
            do {
              lVar6 = lVar6 + -1;
              *pfVar15 = *pfVar20 * *pfVar9;
              pfVar9 = pfVar9 + 1;
              pfVar15 = pfVar15 + 1;
              pfVar20 = pfVar20 + 1;
            } while (lVar6 != 0);
          }
LAB_005d0c8c:
          uVar13 = uVar13 + 1;
          puVar14 = (undefined8 *)((long)puVar14 + uVar12 * 4);
          puVar7 = (undefined8 *)((long)puVar7 + uVar12 * 4);
          lVar17 = lVar17 + uVar12;
        } while (uVar13 != param_4);
      }
    }
    else if (param_4 != 0) {
      lVar6 = *(long *)(param_1 + 6);
      fVar31 = (float)param_1[3];
      lVar23 = uVar12 * 4;
      lVar17 = 0;
      uVar13 = 0;
      uVar16 = uVar12 & 0xfffffff8;
      puVar14 = param_3 + 2;
      puVar7 = param_2 + 2;
      do {
        uVar18 = 0;
        if (((ulong)((long)param_2 - (long)param_3) < 0x20) ||
           (puVar8 = puVar7, puVar10 = (undefined8 *)(lVar6 + 0x10), puVar21 = puVar14,
           uVar26 = uVar16, (long)param_2 + (lVar23 * uVar13 - lVar6) < 0x20)) {
LAB_005d0b60:
          lVar25 = (uVar18 + lVar17) * 4;
          lVar22 = uVar12 - uVar18;
          pfVar9 = (float *)(lVar6 + uVar18 * 4);
          pfVar15 = (float *)((long)param_2 + lVar25);
          pfVar20 = (float *)((long)param_3 + lVar25);
          do {
            lVar22 = lVar22 + -1;
            *pfVar15 = fVar31 * *pfVar20 * *pfVar9;
            pfVar9 = pfVar9 + 1;
            pfVar15 = pfVar15 + 1;
            pfVar20 = pfVar20 + 1;
          } while (lVar22 != 0);
        }
        else {
          do {
            uVar4 = puVar21[-2];
            uVar36 = puVar21[1];
            uVar35 = *puVar21;
            uVar26 = uVar26 - 8;
            uVar33 = puVar10[-2];
            uVar41 = puVar10[1];
            uVar38 = *puVar10;
            puVar8[-1] = CONCAT44((float)((ulong)puVar21[-1] >> 0x20) *
                                  (float)((ulong)puVar10[-1] >> 0x20) * fVar31,
                                  (float)puVar21[-1] * (float)puVar10[-1] * fVar31);
            puVar8[-2] = CONCAT44((float)((ulong)uVar4 >> 0x20) * (float)((ulong)uVar33 >> 0x20) *
                                  fVar31,(float)uVar4 * (float)uVar33 * fVar31);
            puVar8[1] = CONCAT44((float)((ulong)uVar36 >> 0x20) * (float)((ulong)uVar41 >> 0x20) *
                                 fVar31,(float)uVar36 * (float)uVar41 * fVar31);
            *puVar8 = CONCAT44((float)((ulong)uVar35 >> 0x20) * (float)((ulong)uVar38 >> 0x20) *
                               fVar31,(float)uVar35 * (float)uVar38 * fVar31);
            puVar8 = puVar8 + 4;
            puVar10 = puVar10 + 4;
            puVar21 = puVar21 + 4;
          } while (uVar26 != 0);
          uVar18 = uVar16;
          if (uVar16 != uVar12) goto LAB_005d0b60;
        }
        uVar13 = uVar13 + 1;
        puVar14 = (undefined8 *)((long)puVar14 + lVar23);
        puVar7 = (undefined8 *)((long)puVar7 + lVar23);
        lVar17 = lVar17 + uVar12;
      } while (uVar13 != param_4);
    }
  }
  if (uVar11 == 0xffffffff) {
    if (param_4 <= uVar1) {
      uVar5 = (uint)param_4;
    }
    param_1[2] = uVar5;
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
  }
LAB_005d0d54:
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


// ===== 005d0d88  ma_gainer_set_gain =====

undefined8 ma_gainer_set_gain(float param_1,uint *param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  float *pfVar7;
  float *pfVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  
  if (param_2 == (uint *)0x0) {
    return 0xfffffffe;
  }
  uVar4 = *param_2;
  uVar5 = (ulong)uVar4;
  uVar3 = param_2[2];
  if (uVar4 != 0) {
    uVar1 = *(ulong *)(param_2 + 4);
    uVar2 = *(ulong *)(param_2 + 6);
    fVar13 = (float)NEON_ucvtf(param_2[1]);
    fVar13 = (float)uVar3 / fVar13;
    if ((uVar4 < 8) || ((uVar1 < uVar2 + uVar5 * 4 && (uVar2 < uVar1 + uVar5 * 4)))) {
      uVar9 = 0;
    }
    else {
      uVar9 = uVar5 & 0xfffffff8;
      puVar11 = (undefined8 *)(uVar1 + 0x10);
      puVar10 = (undefined8 *)(uVar2 + 0x10);
      uVar12 = uVar9;
      do {
        uVar18 = puVar11[-1];
        uVar15 = puVar11[-2];
        uVar26 = puVar11[1];
        uVar23 = *puVar11;
        uVar12 = uVar12 - 8;
        uVar21 = puVar10[-1];
        uVar20 = puVar10[-2];
        uVar29 = puVar10[1];
        uVar28 = *puVar10;
        puVar10[-1] = CONCAT44(param_1,param_1);
        puVar10[-2] = CONCAT44(param_1,param_1);
        puVar10[1] = CONCAT44(param_1,param_1);
        *puVar10 = CONCAT44(param_1,param_1);
        fVar14 = (float)uVar15;
        fVar16 = (float)((ulong)uVar15 >> 0x20);
        fVar17 = (float)uVar18;
        fVar19 = (float)((ulong)uVar18 >> 0x20);
        fVar22 = (float)uVar23;
        fVar24 = (float)((ulong)uVar23 >> 0x20);
        fVar25 = (float)uVar26;
        fVar27 = (float)((ulong)uVar26 >> 0x20);
        puVar11[-1] = CONCAT44(fVar19 + ((float)((ulong)uVar21 >> 0x20) - fVar19) * fVar13,
                               fVar17 + ((float)uVar21 - fVar17) * fVar13);
        puVar11[-2] = CONCAT44(fVar16 + ((float)((ulong)uVar20 >> 0x20) - fVar16) * fVar13,
                               fVar14 + ((float)uVar20 - fVar14) * fVar13);
        puVar11[1] = CONCAT44(fVar27 + ((float)((ulong)uVar29 >> 0x20) - fVar27) * fVar13,
                              fVar25 + ((float)uVar29 - fVar25) * fVar13);
        *puVar11 = CONCAT44(fVar24 + ((float)((ulong)uVar28 >> 0x20) - fVar24) * fVar13,
                            fVar22 + ((float)uVar28 - fVar22) * fVar13);
        puVar11 = puVar11 + 4;
        puVar10 = puVar10 + 4;
      } while (uVar12 != 0);
      if (uVar9 == uVar5) goto LAB_005d0e08;
    }
    lVar6 = uVar5 - uVar9;
    pfVar7 = (float *)(uVar1 + uVar9 * 4);
    pfVar8 = (float *)(uVar2 + uVar9 * 4);
    do {
      lVar6 = lVar6 + -1;
      *pfVar7 = *pfVar7 + fVar13 * (*pfVar8 - *pfVar7);
      *pfVar8 = param_1;
      pfVar7 = pfVar7 + 1;
      pfVar8 = pfVar8 + 1;
    } while (lVar6 != 0);
  }
LAB_005d0e08:
  if (uVar3 == 0xffffffff) {
    uVar4 = param_2[1];
  }
  else {
    uVar4 = 0;
  }
  param_2[2] = uVar4;
  return 0;
}


// ===== 005d0e88  ma_gainer_set_gains =====

undefined4 ma_gainer_set_gains(uint *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  float *pfVar7;
  float *pfVar8;
  ulong uVar9;
  float *pfVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  if (param_1 == (uint *)0x0) {
    return 0xfffffffe;
  }
  if (param_2 == (undefined8 *)0x0) {
    return 0xfffffffe;
  }
  uVar4 = *param_1;
  uVar5 = (ulong)uVar4;
  uVar3 = param_1[2];
  if (uVar4 != 0) {
    puVar1 = *(undefined8 **)(param_1 + 4);
    puVar2 = *(undefined8 **)(param_1 + 6);
    fVar16 = (float)NEON_ucvtf(param_1[1]);
    fVar16 = (float)uVar3 / fVar16;
    if (uVar4 < 8) {
      uVar9 = 0;
    }
    else {
      lVar6 = uVar5 * 4;
      uVar9 = 0;
      if ((((undefined8 *)((long)puVar1 + lVar6) <= puVar2 ||
            (undefined8 *)((long)puVar2 + lVar6) <= puVar1) &&
          ((undefined8 *)((long)param_2 + lVar6) <= puVar1 ||
           (undefined8 *)((long)puVar1 + lVar6) <= param_2)) &&
         ((undefined8 *)((long)param_2 + lVar6) <= puVar2 ||
          (undefined8 *)((long)puVar2 + lVar6) <= param_2)) {
        uVar9 = uVar5 & 0xfffffffc;
        puVar12 = param_2;
        puVar13 = puVar1;
        puVar14 = puVar2;
        uVar15 = uVar9;
        do {
          uVar23 = puVar14[1];
          uVar21 = *puVar14;
          uVar15 = uVar15 - 4;
          fVar20 = (float)*puVar13;
          fVar17 = (float)((ulong)*puVar13 >> 0x20);
          fVar18 = (float)puVar13[1];
          fVar19 = (float)((ulong)puVar13[1] >> 0x20);
          uVar22 = *puVar12;
          puVar14[1] = puVar12[1];
          *puVar14 = uVar22;
          puVar13[1] = CONCAT44(fVar19 + ((float)((ulong)uVar23 >> 0x20) - fVar19) * fVar16,
                                fVar18 + ((float)uVar23 - fVar18) * fVar16);
          *puVar13 = CONCAT44(fVar17 + ((float)((ulong)uVar21 >> 0x20) - fVar17) * fVar16,
                              fVar20 + ((float)uVar21 - fVar20) * fVar16);
          puVar12 = puVar12 + 2;
          puVar13 = puVar13 + 2;
          puVar14 = puVar14 + 2;
        } while (uVar15 != 0);
        if (uVar9 == uVar5) goto LAB_005d0efc;
      }
    }
    lVar11 = uVar9 * 4;
    lVar6 = uVar5 - uVar9;
    pfVar7 = (float *)((long)puVar1 + lVar11);
    pfVar8 = (float *)((long)puVar2 + lVar11);
    pfVar10 = (float *)((long)param_2 + lVar11);
    do {
      lVar6 = lVar6 + -1;
      fVar20 = *pfVar10;
      *pfVar7 = *pfVar7 + fVar16 * (*pfVar8 - *pfVar7);
      *pfVar8 = fVar20;
      pfVar7 = pfVar7 + 1;
      pfVar8 = pfVar8 + 1;
      pfVar10 = pfVar10 + 1;
    } while (lVar6 != 0);
  }
LAB_005d0efc:
  if (uVar3 == 0xffffffff) {
    uVar4 = param_1[1];
  }
  else {
    uVar4 = 0;
  }
  param_1[2] = uVar4;
  return 0;
}


// ===== 005d0fa8  ma_gainer_set_master_volume =====

undefined8 ma_gainer_set_master_volume(undefined4 param_1,long param_2)

{
  if (param_2 != 0) {
    *(undefined4 *)(param_2 + 0xc) = param_1;
    return 0;
  }
  return 0xfffffffe;
}


// ===== 005d0fc4  ma_gainer_get_master_volume =====

undefined8 ma_gainer_get_master_volume(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffe;
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    uVar1 = 0;
    *param_2 = *(undefined4 *)(param_1 + 0xc);
  }
  return uVar1;
}


// ===== 005d0fe4  ma_panner_config_init =====

undefined1  [16] ma_panner_config_init(ulong param_1,long param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = param_1 & 0xffffffff | param_2 << 0x20;
  auVar1._8_8_ = 0;
  return auVar1;
}


// ===== 005d0ff4  ma_panner_init =====

undefined8 ma_panner_init(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
    if (param_1 != (undefined8 *)0x0) {
      *param_2 = *param_1;
      uVar1 = *(undefined4 *)(param_1 + 1);
      *(undefined4 *)((long)param_2 + 0xc) = *(undefined4 *)((long)param_1 + 0xc);
      *(undefined4 *)(param_2 + 1) = uVar1;
      return 0;
    }
  }
  return 0xfffffffe;
}


// ===== 005d102c  ma_panner_process_pcm_frames =====

undefined8 ma_panner_process_pcm_frames(uint *param_1,float *param_2,float *param_3,ulong param_4)

{
  size_t sVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float *pfVar7;
  ulong uVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  if (param_1 == (uint *)0x0) {
    return 0xfffffffe;
  }
  if (param_2 == (float *)0x0) {
    return 0xfffffffe;
  }
  if (param_3 == (float *)0x0) {
    return 0xfffffffe;
  }
  uVar2 = param_1[1];
  if (uVar2 == 1) {
    if (param_2 != param_3) {
      for (param_4 = *(uint *)(&DAT_00281c10 + (ulong)*param_1 * 4) * param_4; param_4 != 0;
          param_4 = param_4 - sVar1) {
        sVar1 = param_4;
        if (0xfffffffe < param_4) {
          sVar1 = 0xffffffff;
        }
        memcpy(param_2,param_3,sVar1);
        param_2 = (float *)((long)param_2 + sVar1);
        param_3 = (float *)((long)param_3 + sVar1);
      }
    }
    return 0;
  }
  if (uVar2 != 2) {
    if (param_2 == param_3) {
      return 0;
    }
    for (param_4 = (*(int *)(&DAT_00281c10 + (ulong)*param_1 * 4) * uVar2) * param_4; param_4 != 0;
        param_4 = param_4 - sVar1) {
      sVar1 = param_4;
      if (0xfffffffe < param_4) {
        sVar1 = 0xffffffff;
      }
      memcpy(param_2,param_3,sVar1);
      param_2 = (float *)((long)param_2 + sVar1);
      param_3 = (float *)((long)param_3 + sVar1);
    }
    return 0;
  }
  fVar11 = (float)param_1[3];
  uVar2 = *param_1;
  uVar4 = (ulong)uVar2;
  if (param_1[2] == 0) {
    if (fVar11 == 0.0) {
      if (param_2 == param_3) {
        return 0;
      }
      param_4 = (uint)(*(int *)(&DAT_00281c10 + uVar4 * 4) << 1) * param_4;
      if (param_4 == 0) {
        return 0;
      }
      do {
        sVar1 = param_4;
        if (0xfffffffe < param_4) {
          sVar1 = 0xffffffff;
        }
        memcpy(param_2,param_3,sVar1);
        param_4 = param_4 - sVar1;
        param_2 = (float *)((long)param_2 + sVar1);
        param_3 = (float *)((long)param_3 + sVar1);
      } while (param_4 != 0);
      return 0;
    }
    if (uVar2 != 5) {
      if (param_2 == param_3) {
        return 0;
      }
      param_4 = (uint)(*(int *)(&DAT_00281c10 + uVar4 * 4) << 1) * param_4;
      if (param_4 == 0) {
        return 0;
      }
      do {
        sVar1 = param_4;
        if (0xfffffffe < param_4) {
          sVar1 = 0xffffffff;
        }
        memcpy(param_2,param_3,sVar1);
        param_4 = param_4 - sVar1;
        param_2 = (float *)((long)param_2 + sVar1);
        param_3 = (float *)((long)param_3 + sVar1);
      } while (param_4 != 0);
      return 0;
    }
    if (fVar11 == 0.0 || fVar11 < 0.0 != NAN(fVar11)) {
      fVar11 = fVar11 + 1.0;
      if (param_2 == param_3) {
        if (param_4 == 0) {
          return 0;
        }
        uVar4 = param_4 - 1;
        if (uVar4 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = 0;
          if ((param_2 + 1 <= param_2 + 1 + uVar4 * 2) && (uVar4 >> 0x3d == 0)) {
            uVar8 = param_4 & 0xfffffffffffffffe;
            pfVar7 = param_2 + 3;
            uVar4 = uVar8;
            do {
              uVar4 = uVar4 - 2;
              pfVar7[-2] = fVar11 * pfVar7[-2];
              *pfVar7 = fVar11 * *pfVar7;
              pfVar7 = pfVar7 + 4;
            } while (uVar4 != 0);
            if (uVar8 == param_4) {
              return 0;
            }
          }
        }
        lVar3 = param_4 - uVar8;
        pfVar7 = param_2 + uVar8 * 2 + 1;
        do {
          lVar3 = lVar3 + -1;
          *pfVar7 = fVar11 * *pfVar7;
          pfVar7 = pfVar7 + 2;
        } while (lVar3 != 0);
        return 0;
      }
      if (param_4 == 0) {
        return 0;
      }
      if (0xf < param_4) {
        uVar8 = param_4 - 1;
        uVar4 = 0;
        if (((param_2 + uVar8 * 2 < param_2) || (param_2 + 1 + uVar8 * 2 < param_2 + 1)) ||
           (uVar8 >> 0x3d != 0)) goto LAB_005d13e0;
        if ((param_3 + param_4 * 2 <= param_2) || (param_2 + param_4 * 2 <= param_3)) {
          uVar4 = param_4 & 0xfffffffffffffff8;
          pfVar7 = param_3 + 8;
          pfVar9 = param_2 + 8;
          uVar8 = uVar4;
          do {
            fVar20 = pfVar7[1];
            fVar25 = pfVar7[2];
            fVar22 = pfVar7[3];
            fVar16 = pfVar7[4];
            fVar24 = pfVar7[5];
            fVar18 = pfVar7[6];
            fVar26 = pfVar7[7];
            uVar8 = uVar8 - 8;
            fVar10 = pfVar7[-8];
            fVar17 = pfVar7[-7];
            fVar13 = pfVar7[-6];
            fVar19 = pfVar7[-5];
            fVar14 = pfVar7[-4];
            fVar21 = pfVar7[-3];
            fVar15 = pfVar7[-2];
            fVar23 = pfVar7[-1];
            *pfVar9 = *pfVar7;
            pfVar9[1] = fVar20 * fVar11;
            pfVar9[2] = fVar25;
            pfVar9[3] = fVar22 * fVar11;
            pfVar9[4] = fVar16;
            pfVar9[5] = fVar24 * fVar11;
            pfVar9[6] = fVar18;
            pfVar9[7] = fVar26 * fVar11;
            pfVar9[-8] = fVar10;
            pfVar9[-7] = fVar17 * fVar11;
            pfVar9[-6] = fVar13;
            pfVar9[-5] = fVar19 * fVar11;
            pfVar9[-4] = fVar14;
            pfVar9[-3] = fVar21 * fVar11;
            pfVar9[-2] = fVar15;
            pfVar9[-1] = fVar23 * fVar11;
            pfVar7 = pfVar7 + 0x10;
            pfVar9 = pfVar9 + 0x10;
          } while (uVar8 != 0);
          if (uVar4 == param_4) {
            return 0;
          }
          goto LAB_005d13e0;
        }
      }
      uVar4 = 0;
LAB_005d13e0:
      uVar8 = uVar4 << 3 | 4;
      lVar3 = param_4 - uVar4;
      pfVar7 = (float *)((long)param_2 + uVar8);
      pfVar9 = (float *)((long)param_3 + uVar8);
      do {
        lVar3 = lVar3 + -1;
        pfVar7[-1] = pfVar9[-1];
        *pfVar7 = fVar11 * *pfVar9;
        pfVar7 = pfVar7 + 2;
        pfVar9 = pfVar9 + 2;
      } while (lVar3 != 0);
      return 0;
    }
    fVar11 = 1.0 - fVar11;
    if (param_2 == param_3) {
      if (param_4 == 0) {
        return 0;
      }
      uVar4 = param_4 - 1;
      if (uVar4 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        if ((param_2 <= param_2 + uVar4 * 2) && (uVar4 >> 0x3d == 0)) {
          uVar8 = param_4 & 0xfffffffffffffffe;
          pfVar7 = param_2 + 2;
          uVar4 = uVar8;
          do {
            uVar4 = uVar4 - 2;
            pfVar7[-2] = fVar11 * pfVar7[-2];
            *pfVar7 = fVar11 * *pfVar7;
            pfVar7 = pfVar7 + 4;
          } while (uVar4 != 0);
          if (uVar8 == param_4) {
            return 0;
          }
        }
      }
      lVar3 = param_4 - uVar8;
      pfVar7 = param_2 + uVar8 * 2;
      do {
        lVar3 = lVar3 + -1;
        *pfVar7 = fVar11 * *pfVar7;
        pfVar7 = pfVar7 + 2;
      } while (lVar3 != 0);
      return 0;
    }
    if (param_4 == 0) {
      return 0;
    }
    if (0xf < param_4) {
      uVar8 = param_4 - 1;
      uVar4 = 0;
      if (((param_2 + uVar8 * 2 < param_2) || (param_2 + 1 + uVar8 * 2 < param_2 + 1)) ||
         (uVar8 >> 0x3d != 0)) goto LAB_005d1288;
      if ((param_3 + param_4 * 2 <= param_2) || (param_2 + param_4 * 2 <= param_3)) {
        uVar4 = param_4 & 0xfffffffffffffff8;
        pfVar7 = param_3 + 8;
        pfVar9 = param_2 + 8;
        uVar8 = uVar4;
        do {
          fVar20 = pfVar7[1];
          fVar25 = pfVar7[2];
          fVar22 = pfVar7[3];
          fVar16 = pfVar7[4];
          fVar24 = pfVar7[5];
          fVar18 = pfVar7[6];
          fVar26 = pfVar7[7];
          uVar8 = uVar8 - 8;
          fVar10 = pfVar7[-8];
          fVar17 = pfVar7[-7];
          fVar13 = pfVar7[-6];
          fVar19 = pfVar7[-5];
          fVar14 = pfVar7[-4];
          fVar21 = pfVar7[-3];
          fVar15 = pfVar7[-2];
          fVar23 = pfVar7[-1];
          *pfVar9 = *pfVar7 * fVar11;
          pfVar9[1] = fVar20;
          pfVar9[2] = fVar25 * fVar11;
          pfVar9[3] = fVar22;
          pfVar9[4] = fVar16 * fVar11;
          pfVar9[5] = fVar24;
          pfVar9[6] = fVar18 * fVar11;
          pfVar9[7] = fVar26;
          pfVar9[-8] = fVar10 * fVar11;
          pfVar9[-7] = fVar17;
          pfVar9[-6] = fVar13 * fVar11;
          pfVar9[-5] = fVar19;
          pfVar9[-4] = fVar14 * fVar11;
          pfVar9[-3] = fVar21;
          pfVar9[-2] = fVar15 * fVar11;
          pfVar9[-1] = fVar23;
          pfVar7 = pfVar7 + 0x10;
          pfVar9 = pfVar9 + 0x10;
        } while (uVar8 != 0);
        if (uVar4 == param_4) {
          return 0;
        }
        goto LAB_005d1288;
      }
    }
    uVar4 = 0;
LAB_005d1288:
    uVar8 = uVar4 << 3 | 4;
    lVar3 = param_4 - uVar4;
    puVar6 = (undefined4 *)((long)param_2 + uVar8);
    puVar5 = (undefined4 *)((long)param_3 + uVar8);
    do {
      lVar3 = lVar3 + -1;
      puVar6[-1] = fVar11 * (float)puVar5[-1];
      *puVar6 = *puVar5;
      puVar6 = puVar6 + 2;
      puVar5 = puVar5 + 2;
    } while (lVar3 != 0);
    return 0;
  }
  if (fVar11 == 0.0) {
    if (param_2 == param_3) {
      return 0;
    }
    param_4 = (uint)(*(int *)(&DAT_00281c10 + uVar4 * 4) << 1) * param_4;
    if (param_4 == 0) {
      return 0;
    }
    do {
      sVar1 = param_4;
      if (0xfffffffe < param_4) {
        sVar1 = 0xffffffff;
      }
      memcpy(param_2,param_3,sVar1);
      param_4 = param_4 - sVar1;
      param_2 = (float *)((long)param_2 + sVar1);
      param_3 = (float *)((long)param_3 + sVar1);
    } while (param_4 != 0);
    return 0;
  }
  if (uVar2 != 5) {
    if (param_2 == param_3) {
      return 0;
    }
    param_4 = (uint)(*(int *)(&DAT_00281c10 + uVar4 * 4) << 1) * param_4;
    if (param_4 == 0) {
      return 0;
    }
    do {
      sVar1 = param_4;
      if (0xfffffffe < param_4) {
        sVar1 = 0xffffffff;
      }
      memcpy(param_2,param_3,sVar1);
      param_4 = param_4 - sVar1;
      param_2 = (float *)((long)param_2 + sVar1);
      param_3 = (float *)((long)param_3 + sVar1);
    } while (param_4 != 0);
    return 0;
  }
  if (fVar11 == 0.0 || fVar11 < 0.0 != NAN(fVar11)) {
    if (param_4 == 0) {
      return 0;
    }
    fVar10 = 0.0 - fVar11;
    fVar11 = fVar11 + 1.0;
    if (0xb < param_4) {
      uVar8 = param_4 - 1;
      uVar4 = 0;
      if (((param_2 + uVar8 * 2 < param_2) || (param_2 + 1 + uVar8 * 2 < param_2 + 1)) ||
         (uVar8 >> 0x3d != 0)) goto LAB_005d1388;
      if ((param_3 + param_4 * 2 <= param_2) || (param_2 + param_4 * 2 <= param_3)) {
        uVar4 = param_4 & 0xfffffffffffffffc;
        pfVar7 = param_3;
        pfVar9 = param_2;
        uVar8 = uVar4;
        do {
          fVar13 = *pfVar7;
          fVar19 = pfVar7[1];
          fVar14 = pfVar7[2];
          fVar21 = pfVar7[3];
          fVar15 = pfVar7[4];
          fVar23 = pfVar7[5];
          fVar17 = pfVar7[6];
          fVar25 = pfVar7[7];
          pfVar7 = pfVar7 + 8;
          uVar8 = uVar8 - 4;
          *pfVar9 = fVar13 + fVar10 * fVar19;
          pfVar9[1] = fVar19 * fVar11;
          pfVar9[2] = fVar14 + fVar10 * fVar21;
          pfVar9[3] = fVar21 * fVar11;
          pfVar9[4] = fVar15 + fVar10 * fVar23;
          pfVar9[5] = fVar23 * fVar11;
          pfVar9[6] = fVar17 + fVar10 * fVar25;
          pfVar9[7] = fVar25 * fVar11;
          pfVar9 = pfVar9 + 8;
        } while (uVar8 != 0);
        if (uVar4 == param_4) {
          return 0;
        }
        goto LAB_005d1388;
      }
    }
    uVar4 = 0;
LAB_005d1388:
    uVar8 = uVar4 << 3 | 4;
    lVar3 = param_4 - uVar4;
    param_2 = (float *)((long)param_2 + uVar8);
    param_3 = (float *)((long)param_3 + uVar8);
    do {
      pfVar7 = param_3 + -1;
      fVar14 = *param_3;
      lVar3 = lVar3 + -1;
      param_3 = param_3 + 2;
      fVar13 = (float)NEON_fmadd(fVar14,fVar10,*pfVar7);
      param_2[-1] = fVar13;
      *param_2 = fVar11 * fVar14;
      param_2 = param_2 + 2;
    } while (lVar3 != 0);
    return 0;
  }
  if (param_4 == 0) {
    return 0;
  }
  fVar10 = 1.0 - fVar11;
  fVar11 = fVar11 + 0.0;
  if (0xb < param_4) {
    uVar8 = param_4 - 1;
    uVar4 = 0;
    if (((param_2 + uVar8 * 2 < param_2) || (param_2 + 1 + uVar8 * 2 < param_2 + 1)) ||
       (uVar8 >> 0x3d != 0)) goto LAB_005d121c;
    if ((param_3 + param_4 * 2 <= param_2) || (param_2 + param_4 * 2 <= param_3)) {
      uVar4 = param_4 & 0xfffffffffffffffc;
      pfVar7 = param_3;
      pfVar9 = param_2;
      uVar8 = uVar4;
      do {
        fVar13 = *pfVar7;
        fVar19 = pfVar7[1];
        fVar14 = pfVar7[2];
        fVar21 = pfVar7[3];
        fVar15 = pfVar7[4];
        fVar23 = pfVar7[5];
        fVar17 = pfVar7[6];
        fVar25 = pfVar7[7];
        pfVar7 = pfVar7 + 8;
        uVar8 = uVar8 - 4;
        *pfVar9 = fVar13 * fVar10;
        pfVar9[1] = fVar19 + fVar11 * fVar13;
        pfVar9[2] = fVar14 * fVar10;
        pfVar9[3] = fVar21 + fVar11 * fVar14;
        pfVar9[4] = fVar15 * fVar10;
        pfVar9[5] = fVar23 + fVar11 * fVar15;
        pfVar9[6] = fVar17 * fVar10;
        pfVar9[7] = fVar25 + fVar11 * fVar17;
        pfVar9 = pfVar9 + 8;
      } while (uVar8 != 0);
      if (uVar4 == param_4) {
        return 0;
      }
      goto LAB_005d121c;
    }
  }
  uVar4 = 0;
LAB_005d121c:
  uVar8 = uVar4 << 3 | 4;
  lVar3 = param_4 - uVar4;
  puVar5 = (undefined4 *)((long)param_2 + uVar8);
  puVar6 = (undefined4 *)((long)param_3 + uVar8);
  do {
    pfVar7 = (float *)(puVar6 + -1);
    uVar12 = *puVar6;
    lVar3 = lVar3 + -1;
    puVar6 = puVar6 + 2;
    uVar12 = NEON_fmadd(*pfVar7,fVar11,uVar12);
    puVar5[-1] = fVar10 * *pfVar7;
    *puVar5 = uVar12;
    puVar5 = puVar5 + 2;
  } while (lVar3 != 0);
  return 0;
}


// ===== 005d1764  ma_panner_set_mode =====

void ma_panner_set_mode(long param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 8) = param_2;
  }
  return;
}


// ===== 005d1770  ma_panner_get_mode =====

ulong ma_panner_get_mode(ulong param_1)

{
  if (param_1 != 0) {
    param_1 = (ulong)*(uint *)(param_1 + 8);
  }
  return param_1;
}


// ===== 005d177c  ma_panner_set_pan =====

void ma_panner_set_pan(undefined4 param_1,long param_2)

{
  float fVar1;
  float fVar2;
  
  if (param_2 != 0) {
    fVar1 = (float)NEON_fminnm(param_1,0x3f800000);
    fVar2 = -1.0;
    if (-1.0 <= fVar1) {
      fVar2 = fVar1;
    }
    *(float *)(param_2 + 0xc) = fVar2;
  }
  return;
}


// ===== 005d179c  ma_panner_get_pan =====

undefined4 ma_panner_get_pan(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0xc);
  }
  return 0;
}


// ===== 005d17b0  ma_fader_config_init =====

undefined1  [16] ma_fader_config_init(ulong param_1,long param_2,undefined4 param_3)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = param_1 & 0xffffffff | param_2 << 0x20;
  auVar1._8_4_ = param_3;
  auVar1._12_4_ = 0;
  return auVar1;
}


// ===== 005d17c0  ma_fader_init =====

undefined8 ma_fader_init(int *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_2 != (undefined8 *)0x0) {
    param_2[4] = 0;
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    if ((param_1 != (int *)0x0) && (*param_1 == 5)) {
      uVar3 = NEON_fmov(0x3f800000,4);
      iVar1 = param_1[2];
      uVar2 = *(undefined8 *)param_1;
      param_2[3] = 0;
      param_2[4] = 0;
      *(int *)(param_2 + 1) = iVar1;
      *param_2 = uVar2;
      *(undefined8 *)((long)param_2 + 0xc) = uVar3;
      return 0;
    }
  }
  return 0xfffffffe;
}


// ===== 005d1810  ma_fader_process_pcm_frames =====

undefined8 ma_fader_process_pcm_frames(uint *param_1,void *param_2,void *param_3,ulong param_4)

{
  size_t sVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  float *pfVar6;
  long lVar7;
  float *pfVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  void *__dest;
  void *__src;
  ulong uVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  if (param_1 == (uint *)0x0) {
    return 0xfffffffe;
  }
  uVar9 = *(ulong *)(param_1 + 8);
  if ((long)uVar9 < 0) {
    uVar10 = *param_1;
    uVar13 = param_1[1];
    uVar12 = param_4;
    if (-uVar9 < param_4) {
      uVar12 = -uVar9;
    }
    if ((param_2 != param_3) &&
       (uVar19 = uVar12 * (*(int *)(&DAT_00281c10 + (ulong)uVar10 * 4) * uVar13), __dest = param_2,
       __src = param_3, uVar19 != 0)) {
      do {
        sVar1 = uVar19;
        if (0xfffffffe < uVar19) {
          sVar1 = 0xffffffff;
        }
        memcpy(__dest,__src,sVar1);
        uVar19 = uVar19 - sVar1;
        __dest = (void *)((long)__dest + sVar1);
        __src = (void *)((long)__src + sVar1);
      } while (uVar19 != 0);
      uVar10 = *param_1;
      uVar13 = param_1[1];
      uVar9 = *(ulong *)(param_1 + 8);
    }
    uVar9 = uVar9 + uVar12;
    uVar19 = param_4 - uVar12;
    *(ulong *)(param_1 + 8) = uVar9;
    if ((long)uVar9 < 0) goto LAB_005d1a90;
    lVar11 = uVar12 * (*(int *)(&DAT_00281c10 + (ulong)uVar10 * 4) * uVar13);
    param_2 = (void *)((long)param_2 + lVar11);
    param_3 = (void *)((long)param_3 + lVar11);
    param_4 = uVar19;
  }
  fVar20 = (float)param_1[3];
  fVar21 = (float)param_1[4];
  uVar19 = 0xffffffff - uVar9;
  if (uVar9 + param_4 >> 0x20 == 0) {
    uVar19 = param_4;
  }
  if (fVar20 == fVar21) {
    if (fVar20 == 1.0) {
      if (param_2 != param_3) {
        for (uVar9 = uVar19 * (*(int *)(&DAT_00281c10 + (ulong)*param_1 * 4) * param_1[1]);
            uVar9 != 0; uVar9 = uVar9 - sVar1) {
          sVar1 = uVar9;
          if (0xfffffffe < uVar9) {
            sVar1 = 0xffffffff;
          }
          memcpy(param_2,param_3,sVar1);
          param_2 = (void *)((long)param_2 + sVar1);
          param_3 = (void *)((long)param_3 + sVar1);
        }
      }
      goto LAB_005d1a90;
    }
    uVar10 = *param_1;
    uVar13 = param_1[1];
    fVar21 = fVar20;
  }
  else {
    uVar12 = *(ulong *)(param_1 + 6);
    uVar10 = *param_1;
    if (uVar9 < uVar12) {
      if (uVar10 != 5) {
        return 0xffffffe3;
      }
      if (uVar19 != 0) {
        uVar10 = param_1[1];
        uVar15 = (ulong)uVar10;
        lVar11 = 0;
        uVar14 = 0;
        uVar16 = uVar15 & 0xfffffff8;
        puVar17 = (undefined8 *)((long)param_2 + 0x10);
        puVar18 = (undefined8 *)((long)param_3 + 0x10);
        do {
          uVar3 = uVar14 + uVar9;
          if (uVar12 <= uVar14 + uVar9) {
            uVar3 = uVar12;
          }
          if (uVar10 != 0) {
            fVar21 = (float)param_1[3] +
                     ((float)(uVar3 & 0xffffffff) / (float)(uVar12 & 0xffffffff)) *
                     ((float)param_1[4] - (float)param_1[3]);
            puVar2 = puVar18;
            puVar5 = puVar17;
            uVar3 = uVar16;
            if (uVar15 < 8 || (ulong)((long)param_2 - (long)param_3) < 0x20) {
              uVar3 = 0;
            }
            else {
              do {
                uVar22 = puVar2[-2];
                uVar24 = puVar2[1];
                uVar23 = *puVar2;
                uVar3 = uVar3 - 8;
                puVar5[-1] = CONCAT44((float)((ulong)puVar2[-1] >> 0x20) * fVar21,
                                      (float)puVar2[-1] * fVar21);
                puVar5[-2] = CONCAT44((float)((ulong)uVar22 >> 0x20) * fVar21,(float)uVar22 * fVar21
                                     );
                puVar5[1] = CONCAT44((float)((ulong)uVar24 >> 0x20) * fVar21,(float)uVar24 * fVar21)
                ;
                *puVar5 = CONCAT44((float)((ulong)uVar23 >> 0x20) * fVar21,(float)uVar23 * fVar21);
                puVar2 = puVar2 + 4;
                puVar5 = puVar5 + 4;
              } while (uVar3 != 0);
              uVar3 = uVar16;
              if (uVar16 == uVar15) goto LAB_005d19c0;
            }
            lVar4 = uVar15 - uVar3;
            lVar7 = (uVar3 + lVar11) * 4;
            pfVar6 = (float *)((long)param_2 + lVar7);
            pfVar8 = (float *)((long)param_3 + lVar7);
            do {
              lVar4 = lVar4 + -1;
              *pfVar6 = fVar21 * *pfVar8;
              pfVar6 = pfVar6 + 1;
              pfVar8 = pfVar8 + 1;
            } while (lVar4 != 0);
          }
LAB_005d19c0:
          uVar14 = uVar14 + 1;
          puVar17 = (undefined8 *)((long)puVar17 + uVar15 * 4);
          puVar18 = (undefined8 *)((long)puVar18 + uVar15 * 4);
          lVar11 = lVar11 + uVar15;
        } while (uVar14 < uVar19);
      }
      goto LAB_005d1a90;
    }
    uVar13 = param_1[1];
  }
  ma_copy_and_apply_volume_and_clip_pcm_frames(fVar21,param_2,param_3,uVar19,uVar10,uVar13);
LAB_005d1a90:
  *(ulong *)(param_1 + 8) = *(long *)(param_1 + 8) + uVar19;
  return 0;
}


// ===== 005d1ac4  ma_fader_get_data_format =====

void ma_fader_get_data_format
               (undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  if (param_1 != (undefined4 *)0x0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *param_1;
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = param_1[1];
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = param_1[2];
    }
  }
  return;
}


// ===== 005d1af0  ma_fader_set_fade =====

void ma_fader_set_fade(float param_1,undefined4 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  
  if (param_3 != 0) {
    if (param_1 < 0.0) {
      uVar1 = *(ulong *)(param_3 + 0x20);
      if ((long)uVar1 < 0) {
        param_1 = 1.0;
      }
      else if (uVar1 == 0) {
        param_1 = *(float *)(param_3 + 0xc);
      }
      else if (uVar1 < *(ulong *)(param_3 + 0x18)) {
        param_1 = *(float *)(param_3 + 0xc) +
                  ((float)(uVar1 & 0xffffffff) / (float)(*(ulong *)(param_3 + 0x18) & 0xffffffff)) *
                  (*(float *)(param_3 + 0x10) - *(float *)(param_3 + 0xc));
      }
      else {
        param_1 = *(float *)(param_3 + 0x10);
      }
    }
    *(float *)(param_3 + 0xc) = param_1;
    *(undefined4 *)(param_3 + 0x10) = param_2;
    if (0xfffffffe < param_4) {
      param_4 = 0xffffffff;
    }
    *(ulong *)(param_3 + 0x18) = param_4;
    *(undefined8 *)(param_3 + 0x20) = 0;
  }
  return;
}


// ===== 005d1b60  ma_fader_set_fade_ex =====

void ma_fader_set_fade_ex(float param_1,undefined4 param_2,long param_3,ulong param_4,long param_5)

{
  ulong uVar1;
  
  if (param_3 != 0) {
    if (param_1 < 0.0) {
      uVar1 = *(ulong *)(param_3 + 0x20);
      if ((long)uVar1 < 0) {
        param_1 = 1.0;
      }
      else if (uVar1 == 0) {
        param_1 = *(float *)(param_3 + 0xc);
      }
      else if (uVar1 < *(ulong *)(param_3 + 0x18)) {
        param_1 = *(float *)(param_3 + 0xc) +
                  ((float)(uVar1 & 0xffffffff) / (float)(*(ulong *)(param_3 + 0x18) & 0xffffffff)) *
                  (*(float *)(param_3 + 0x10) - *(float *)(param_3 + 0xc));
      }
      else {
        param_1 = *(float *)(param_3 + 0x10);
      }
    }
    *(float *)(param_3 + 0xc) = param_1;
    *(undefined4 *)(param_3 + 0x10) = param_2;
    if (0xfffffffe < param_4) {
      param_4 = 0xffffffff;
    }
    if (0x7ffffffe < param_5) {
      param_5 = 0x7fffffff;
    }
    *(ulong *)(param_3 + 0x18) = param_4;
    *(long *)(param_3 + 0x20) = -param_5;
  }
  return;
}


// ===== 005d1be0  ma_fader_get_current_volume =====

float ma_fader_get_current_volume(long param_1)

{
  ulong uVar1;
  
  if (param_1 == 0) {
    return 0.0;
  }
  uVar1 = *(ulong *)(param_1 + 0x20);
  if ((long)uVar1 < 0) {
    return 1.0;
  }
  if (uVar1 == 0) {
    return *(float *)(param_1 + 0xc);
  }
  if (uVar1 < *(ulong *)(param_1 + 0x18)) {
    return *(float *)(param_1 + 0xc) +
           ((float)(uVar1 & 0xffffffff) / (float)(*(ulong *)(param_1 + 0x18) & 0xffffffff)) *
           (*(float *)(param_1 + 0x10) - *(float *)(param_1 + 0xc));
  }
  return *(float *)(param_1 + 0x10);
}


// ===== 005d1c3c  ma_vec3f_init_3f =====

void ma_vec3f_init_3f(void)

{
  return;
}


// ===== 005d1c40  ma_vec3f_sub =====

float ma_vec3f_sub(float param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4)

{
  return param_1 - param_4;
}


// ===== 005d1c50  ma_vec3f_neg =====

float ma_vec3f_neg(float param_1)

{
  return -param_1;
}


// ===== 005d1c60  ma_vec3f_dot =====

undefined4
ma_vec3f_dot(undefined4 param_1,float param_2,undefined4 param_3,undefined4 param_4,float param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  
  uVar1 = NEON_fmadd(param_1,param_4,param_2 * param_5);
  uVar1 = NEON_fmadd(param_3,param_6,uVar1);
  return uVar1;
}


// ===== 005d1c70  ma_vec3f_len2 =====

undefined4 ma_vec3f_len2(undefined4 param_1,float param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = NEON_fmadd(param_1,param_1,param_2 * param_2);
  uVar1 = NEON_fmadd(param_3,param_3,uVar1);
  return uVar1;
}


// ===== 005d1c80  ma_vec3f_len =====

float ma_vec3f_len(undefined4 param_1,float param_2,undefined4 param_3)

{
  undefined4 uVar1;
  float fVar2;
  
  uVar1 = NEON_fmadd(param_1,param_1,param_2 * param_2);
  fVar2 = (float)NEON_fmadd(param_3,param_3,uVar1);
  return SQRT(fVar2);
}


// ===== 005d1c94  ma_vec3f_dist =====

float ma_vec3f_dist(float param_1,float param_2,float param_3,float param_4,float param_5,
                   float param_6)

{
  undefined4 uVar1;
  float fVar2;
  
  uVar1 = NEON_fmadd(param_1 - param_4,param_1 - param_4,(param_2 - param_5) * (param_2 - param_5));
  fVar2 = (float)NEON_fmadd(param_3 - param_6,param_3 - param_6,uVar1);
  return SQRT(fVar2);
}


// ===== 005d1cb4  ma_vec3f_normalize =====

float ma_vec3f_normalize(float param_1,float param_2,undefined4 param_3)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = NEON_fmadd(param_1,param_1,param_2 * param_2);
  fVar3 = (float)NEON_fmadd(param_3,param_3,uVar1);
  fVar2 = 0.0;
  if (fVar3 != 0.0) {
    fVar2 = param_1 * (1.0 / SQRT(fVar3));
  }
  return fVar2;
}


// ===== 005d1cfc  ma_vec3f_cross =====

undefined4
ma_vec3f_cross(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6)

{
  undefined4 uVar1;
  
  uVar1 = NEON_fmadd(param_2,param_6,-(param_3 * param_5));
  NEON_fmadd(param_3,param_4,-(param_1 * param_6));
  NEON_fmadd(param_1,param_5,-(param_2 * param_4));
  return uVar1;
}


// ===== 005d1d1c  ma_atomic_vec3f_init =====

void ma_atomic_vec3f_init
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_4 = param_1;
  param_4[1] = param_2;
  param_4[2] = param_3;
  param_4[3] = 0;
  return;
}


// ===== 005d1d2c  ma_atomic_vec3f_set =====

void ma_atomic_vec3f_set(undefined4 param_1,undefined4 param_2,undefined4 param_3,
                        undefined4 *param_4)

{
  int iVar1;
  
  iVar1 = FUN_00341150(1,param_4 + 3);
  while (iVar1 != 0) {
    do {
    } while (param_4[3] == 1);
    iVar1 = FUN_00341150(1,param_4 + 3);
  }
  *param_4 = param_1;
  param_4[1] = param_2;
  param_4[2] = param_3;
  param_4[3] = 0;
  return;
}


// ===== 005d1da0  ma_atomic_vec3f_get =====

undefined4 ma_atomic_vec3f_get(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00341150(1,param_1 + 3);
  while (iVar1 != 0) {
    do {
    } while (param_1[3] == 1);
    iVar1 = FUN_00341150(1,param_1 + 3);
  }
  param_1[3] = 0;
  return *param_1;
}


// ===== 005d1df8  ma_spatializer_listener_config_init =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ma_spatializer_listener_config_init(undefined8 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = 0;
  }
  *(undefined4 *)param_1 = param_2;
  uVar3 = DAT_0024e658;
  param_1[1] = 0;
  uVar2 = _UNK_0024e288;
  uVar1 = _DAT_0024e280;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = uVar3;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = uVar2;
  *(undefined8 *)((long)param_1 + 0x14) = uVar1;
  return;
}


// ===== 005d1e2c  ma_spatializer_listener_get_heap_size =====

undefined8 ma_spatializer_listener_get_heap_size(uint *param_1,ulong *param_2)

{
  if (((param_2 != (ulong *)0x0) && (*param_2 = 0, param_1 != (uint *)0x0)) && (*param_1 != 0)) {
    *param_2 = (ulong)*param_1 + 7 & 0x1fffffff8;
    return 0;
  }
  return 0xfffffffe;
}


// ===== 005d1e5c  ma_spatializer_listener_init_preallocated =====

undefined8
ma_spatializer_listener_init_preallocated(uint *param_1,undefined2 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined1 uVar8;
  char cVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  if (param_3 != (undefined8 *)0x0) {
    param_3[3] = 0;
    param_3[2] = 0;
    param_3[5] = 0;
    param_3[4] = 0;
    param_3[7] = 0;
    param_3[6] = 0;
    param_3[9] = 0;
    param_3[8] = 0;
    param_3[0xb] = 0;
    param_3[10] = 0;
    param_3[0xd] = 0;
    param_3[0xc] = 0;
    param_3[1] = 0;
    *param_3 = 0;
    if ((param_1 != (uint *)0x0) && (uVar4 = *param_1, uVar4 != 0)) {
      param_3[0xd] = param_2;
      if ((param_2 != (undefined2 *)0x0) && (uVar6 = (ulong)uVar4 + 7 & 0x1fffffff8, uVar6 != 0)) {
        memset(param_2,0,uVar6);
      }
      uVar15 = *(undefined8 *)(param_1 + 6);
      uVar14 = *(undefined8 *)(param_1 + 4);
      uVar12 = *(undefined8 *)(param_1 + 10);
      uVar11 = *(undefined8 *)(param_1 + 8);
      uVar17 = *(undefined8 *)(param_1 + 2);
      uVar16 = *(undefined8 *)param_1;
      *(undefined4 *)(param_3 + 9) = 0xbf800000;
      param_3[7] = 0;
      param_3[8] = 0;
      param_3[3] = uVar15;
      param_3[2] = uVar14;
      param_3[5] = uVar12;
      param_3[4] = uVar11;
      iVar5 = *(int *)(param_3 + 2);
      param_3[1] = uVar17;
      *param_3 = uVar16;
      param_3[6] = 0;
      *(undefined8 *)((long)param_3 + 0x54) = 0;
      piVar10 = (int *)((long)param_3 + 0x4c);
      piVar10[0] = 0;
      piVar10[1] = 0;
      *(undefined8 *)((long)param_3 + 0x5c) = 0x100000000;
      if (iVar5 == 1) {
        while (iVar5 = FUN_00341150(1,piVar10), iVar5 != 0) {
          do {
          } while (*piVar10 == 1);
        }
        uVar11 = param_3[8];
        fVar13 = *(float *)(param_3 + 9);
        puVar1 = (undefined4 *)((long)param_3 + 0x4c);
        *puVar1 = 0;
        iVar5 = FUN_00341150(1,puVar1);
        while (iVar5 != 0) {
          do {
          } while (*piVar10 == 1);
          iVar5 = FUN_00341150(1,piVar10);
        }
        param_3[8] = CONCAT44(-(float)((ulong)uVar11 >> 0x20),-(float)uVar11);
        *(float *)(param_3 + 9) = -fVar13;
        *puVar1 = 0;
      }
      param_3[1] = param_2;
      uVar4 = *param_1;
      uVar6 = (ulong)uVar4;
      if (*(void **)(param_1 + 2) == (void *)0x0) {
        if (uVar4 == 2) {
          *param_2 = 0xc0b;
        }
        else if ((param_2 != (undefined2 *)0x0) && (uVar4 != 0)) {
          uVar3 = uVar6 - 1;
          if ((ulong)(uVar4 - 1) <= uVar6 - 1) {
            uVar3 = (ulong)(uVar4 - 1);
          }
          uVar8 = (undefined1)(0x202020202020102 >> ((uVar6 & 7) << 3));
          if (7 < uVar4) {
            uVar8 = 2;
          }
          *(undefined1 *)param_2 = uVar8;
          if (uVar3 != 0) {
            uVar8 = (undefined1)(0x3030303030301 >> (((ulong)(uVar4 - 1) & 7) << 3));
            if (6 < uVar4 - 1) {
              uVar8 = 3;
            }
            *(undefined1 *)((long)param_2 + 1) = uVar8;
            if (uVar3 != 1) {
              lVar7 = 0;
              uVar6 = 0x10;
              do {
                uVar2 = lVar7 + 2;
                if ((int)uVar4 < 4) {
                  if (uVar4 == 1) {
                    cVar9 = '\x01';
                  }
                  else if (uVar4 == 2) {
LAB_005d2170:
                    cVar9 = '\0';
                  }
                  else {
                    if (uVar4 != 3) goto LAB_005d2148;
                    cVar9 = (char)uVar2 + '\x02';
                  }
                }
                else if ((int)uVar4 < 6) {
                  if (uVar4 == 4) {
                    cVar9 = (char)(0xa040302 >> (ulong)((uint)uVar6 & 0x1f));
                  }
                  else if (uVar4 == 5) {
                    cVar9 = (char)(0x706040302 >> (uVar6 & 0x3f));
                  }
                  else {
LAB_005d2148:
                    if (uVar2 < 8) {
                      cVar9 = (char)(0xc0b070605040302 >> (uVar6 & 0x3f));
                    }
                    else {
                      if (0x1f < uVar2) goto LAB_005d2170;
                      cVar9 = (char)uVar2 + '\f';
                    }
                  }
                }
                else if (uVar4 == 6) {
                  cVar9 = (char)(0xc0b05040302 >> (uVar6 & 0x3f));
                }
                else {
                  if (uVar4 != 7) goto LAB_005d2148;
                  cVar9 = (char)(0xc0b0a05040302 >> (uVar6 & 0x3f));
                }
                *(char *)((long)param_2 + lVar7 + 2) = cVar9;
                lVar7 = lVar7 + 1;
                uVar6 = uVar6 + 8;
              } while (uVar3 - 1 != lVar7);
            }
          }
        }
      }
      else if ((param_2 != (undefined2 *)0x0) && (uVar4 != 0)) {
        memcpy(param_2,*(void **)(param_1 + 2),uVar6);
      }
      return 0;
    }
  }
  return 0xfffffffe;
}


// ===== 005d2178  ma_spatializer_listener_get_direction =====

undefined4 ma_spatializer_listener_get_direction(long param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = FUN_00341150(1,(undefined4 *)(param_1 + 0x4c));
  while (iVar1 != 0) {
    do {
    } while (*(int *)(param_1 + 0x4c) == 1);
    iVar1 = FUN_00341150(1,param_1 + 0x4c);
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return *(undefined4 *)(param_1 + 0x40);
}


// ===== 005d21e4  ma_spatializer_listener_set_direction =====

void ma_spatializer_listener_set_direction
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  
  if (param_4 != 0) {
    iVar1 = FUN_00341150(1,(undefined4 *)(param_4 + 0x4c));
    while (iVar1 != 0) {
      do {
      } while (*(int *)(param_4 + 0x4c) == 1);
      iVar1 = FUN_00341150(1,param_4 + 0x4c);
    }
    *(undefined4 *)(param_4 + 0x40) = param_1;
    *(undefined4 *)(param_4 + 0x44) = param_2;
    *(undefined4 *)(param_4 + 0x48) = param_3;
    *(undefined4 *)(param_4 + 0x4c) = 0;
  }
  return;
}


// ===== 005d225c  ma_spatializer_listener_init =====

ulong ma_spatializer_listener_init(uint *param_1,undefined8 *param_2,long param_3)

{
  void *__ptr;
  ulong uVar1;
  
  if ((param_1 == (uint *)0x0) || (*param_1 == 0)) {
    return 0xfffffffe;
  }
  uVar1 = (ulong)*param_1 + 7 & 0x1fffffff8;
  if (uVar1 == 0) {
    uVar1 = ma_spatializer_listener_init_preallocated(param_1,0);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
LAB_005d230c:
    uVar1 = 0;
    *(undefined4 *)(param_3 + 100) = 1;
  }
  else {
    if (param_2 == (undefined8 *)0x0) {
      __ptr = malloc(uVar1);
joined_r0x005d2334:
      if (__ptr != (void *)0x0) {
        uVar1 = ma_spatializer_listener_init_preallocated(param_1,__ptr,param_3);
        if ((int)uVar1 != 0) {
          if (param_2 == (undefined8 *)0x0) {
            free(__ptr);
          }
          else {
            if ((code *)param_2[3] == (code *)0x0) {
              return uVar1;
            }
            (*(code *)param_2[3])(__ptr,*param_2);
          }
          return uVar1 & 0xffffffff;
        }
        goto LAB_005d230c;
      }
    }
    else if ((code *)param_2[1] != (code *)0x0) {
      __ptr = (void *)(*(code *)param_2[1])(uVar1,*param_2);
      goto joined_r0x005d2334;
    }
    uVar1 = 0xfffffffc;
  }
  return uVar1;
}


// ===== 005d2354  ma_spatializer_listener_uninit =====

void ma_spatializer_listener_uninit(long param_1,undefined8 *param_2)

{
  void *__ptr;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 100) != 0)) &&
     (__ptr = *(void **)(param_1 + 0x68), __ptr != (void *)0x0)) {
    if (param_2 == (undefined8 *)0x0) {
      free(__ptr);
      return;
    }
    if ((code *)param_2[3] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005d2378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_2[3])(__ptr,*param_2);
      return;
    }
  }
  return;
}


// ===== 005d2384  ma_spatializer_listener_get_channel_map =====

long ma_spatializer_listener_get_channel_map(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 8);
  }
  return param_1;
}


// ===== 005d2390  ma_spatializer_listener_set_cone =====

void ma_spatializer_listener_set_cone
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  if (param_4 != 0) {
    *(undefined4 *)(param_4 + 0x14) = param_1;
    *(undefined4 *)(param_4 + 0x18) = param_2;
    *(undefined4 *)(param_4 + 0x1c) = param_3;
  }
  return;
}


// ===== 005d23a0  ma_spatializer_listener_get_cone =====

void ma_spatializer_listener_get_cone
               (long param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  if (param_1 != 0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(param_1 + 0x14);
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(param_1 + 0x18);
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = *(undefined4 *)(param_1 + 0x1c);
    }
  }
  return;
}


// ===== 005d23cc  ma_spatializer_listener_set_position =====

void ma_spatializer_listener_set_position
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  
  if (param_4 != 0) {
    iVar1 = FUN_00341150(1,(undefined4 *)(param_4 + 0x3c));
    while (iVar1 != 0) {
      do {
      } while (*(int *)(param_4 + 0x3c) == 1);
      iVar1 = FUN_00341150(1,param_4 + 0x3c);
    }
    *(undefined4 *)(param_4 + 0x30) = param_1;
    *(undefined4 *)(param_4 + 0x34) = param_2;
    *(undefined4 *)(param_4 + 0x38) = param_3;
    *(undefined4 *)(param_4 + 0x3c) = 0;
  }
  return;
}


// ===== 005d2444  ma_spatializer_listener_get_position =====

undefined4 ma_spatializer_listener_get_position(long param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = FUN_00341150(1,(undefined4 *)(param_1 + 0x3c));
  while (iVar1 != 0) {
    do {
    } while (*(int *)(param_1 + 0x3c) == 1);
    iVar1 = FUN_00341150(1,param_1 + 0x3c);
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return *(undefined4 *)(param_1 + 0x30);
}


// ===== 005d24b0  ma_spatializer_listener_set_velocity =====

void ma_spatializer_listener_set_velocity
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  
  if (param_4 != 0) {
    iVar1 = FUN_00341150(1,(undefined4 *)(param_4 + 0x5c));
    while (iVar1 != 0) {
      do {
      } while (*(int *)(param_4 + 0x5c) == 1);
      iVar1 = FUN_00341150(1,param_4 + 0x5c);
    }
    *(undefined4 *)(param_4 + 0x50) = param_1;
    *(undefined4 *)(param_4 + 0x54) = param_2;
    *(undefined4 *)(param_4 + 0x58) = param_3;
    *(undefined4 *)(param_4 + 0x5c) = 0;
  }
  return;
}


// ===== 005d2528  ma_spatializer_listener_get_velocity =====

undefined4 ma_spatializer_listener_get_velocity(long param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = FUN_00341150(1,(undefined4 *)(param_1 + 0x5c));
  while (iVar1 != 0) {
    do {
    } while (*(int *)(param_1 + 0x5c) == 1);
    iVar1 = FUN_00341150(1,param_1 + 0x5c);
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  return *(undefined4 *)(param_1 + 0x50);
}


// ===== 005d2594  ma_spatializer_listener_set_speed_of_sound =====

void ma_spatializer_listener_set_speed_of_sound(undefined4 param_1,long param_2)

{
  if (param_2 != 0) {
    *(undefined4 *)(param_2 + 0x20) = param_1;
  }
  return;
}


// ===== 005d25a0  ma_spatializer_listener_get_speed_of_sound =====

undefined4 ma_spatializer_listener_get_speed_of_sound(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x20);
  }
  return 0;
}


// ===== 005d25b4  ma_spatializer_listener_set_world_up =====

void ma_spatializer_listener_set_world_up
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  if (param_4 != 0) {
    *(undefined4 *)(param_4 + 0x24) = param_1;
    *(undefined4 *)(param_4 + 0x28) = param_2;
    *(undefined4 *)(param_4 + 0x2c) = param_3;
  }
  return;
}


// ===== 005d25c4  ma_spatializer_listener_get_world_up =====

undefined4 ma_spatializer_listener_get_world_up(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x24);
  }
  return 0;
}


// ===== 005d25e4  ma_spatializer_listener_set_enabled =====

void ma_spatializer_listener_set_enabled(long param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x60) = param_2;
  }
  return;
}


// ===== 005d25f0  ma_spatializer_listener_is_enabled =====

ulong ma_spatializer_listener_is_enabled(ulong param_1)

{
  if (param_1 != 0) {
    param_1 = (ulong)*(uint *)(param_1 + 0x60);
  }
  return param_1;
}


// ===== 005d25fc  ma_spatializer_config_init =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ma_spatializer_config_init(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1 != (undefined4 *)0x0) {
    *(undefined8 *)(param_1 + 0x12) = 0;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  uVar2 = DAT_0024e700;
  *(undefined8 *)(param_1 + 2) = 0;
  uVar1 = _UNK_0024e018;
  uVar4 = _DAT_0024e010;
  param_1[6] = 0;
  *(undefined8 *)(param_1 + 4) = uVar2;
  uVar3 = _UNK_0024e388;
  uVar2 = _DAT_0024e380;
  *(undefined8 *)(param_1 + 9) = uVar1;
  *(undefined8 *)(param_1 + 7) = uVar4;
  *(undefined8 *)(param_1 + 0xd) = uVar3;
  *(undefined8 *)(param_1 + 0xb) = uVar2;
  uVar4 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(param_1 + 0x11) = 0x1683e4ccccd;
  *(undefined8 *)(param_1 + 0xf) = uVar4;
  return;
}


// ===== 005d2650  ma_spatializer_get_heap_size =====

undefined8 ma_spatializer_get_heap_size(uint *param_1,long *param_2)

{
  ulong uVar1;
  uint uVar2;
  
  if ((((param_2 != (long *)0x0) && (*param_2 = 0, param_1 != (uint *)0x0)) && (*param_1 != 0)) &&
     (uVar2 = param_1[1], uVar2 != 0)) {
    uVar1 = 0;
    if (*(long *)(param_1 + 2) != 0) {
      uVar1 = (ulong)*param_1 + 7 & 0x1fffffff8;
    }
    *param_2 = ((ulong)uVar2 * 4 + 7 & 0x7fffffff8) + (ulong)uVar2 * 8 + uVar1;
    return 0;
  }
  return 0xfffffffe;
}


// ===== 005d26ac  ma_spatializer_init_preallocated =====

ulong ma_spatializer_init_preallocated(uint *param_1,void *param_2,uint *param_3)

{
  uint *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  void *__src;
  ulong uVar9;
  ulong uVar10;
  undefined4 *puVar11;
  long lVar12;
  uint *puVar13;
  undefined8 *__s;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined8 uVar19;
  float fVar20;
  undefined8 uVar21;
  
  if (param_3 != (uint *)0x0) {
    param_3[0x30] = 0;
    param_3[0x31] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[0] = 0;
    param_3[1] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[10] = 0;
    param_3[0xb] = 0;
    param_3[8] = 0;
    param_3[9] = 0;
    param_3[0xe] = 0;
    param_3[0xf] = 0;
    param_3[0xc] = 0;
    param_3[0xd] = 0;
    param_3[0x12] = 0;
    param_3[0x13] = 0;
    param_3[0x10] = 0;
    param_3[0x11] = 0;
    param_3[0x16] = 0;
    param_3[0x17] = 0;
    param_3[0x14] = 0;
    param_3[0x15] = 0;
    param_3[0x1a] = 0;
    param_3[0x1b] = 0;
    param_3[0x18] = 0;
    param_3[0x19] = 0;
    param_3[0x1e] = 0;
    param_3[0x1f] = 0;
    param_3[0x1c] = 0;
    param_3[0x1d] = 0;
    param_3[0x22] = 0;
    param_3[0x23] = 0;
    param_3[0x20] = 0;
    param_3[0x21] = 0;
    param_3[0x26] = 0;
    param_3[0x27] = 0;
    param_3[0x24] = 0;
    param_3[0x25] = 0;
    param_3[0x2a] = 0;
    param_3[0x2b] = 0;
    param_3[0x28] = 0;
    param_3[0x29] = 0;
    param_3[0x2e] = 0;
    param_3[0x2f] = 0;
    param_3[0x2c] = 0;
    param_3[0x2d] = 0;
    if ((((param_1 != (uint *)0x0) && (param_2 != (void *)0x0)) && (uVar6 = *param_1, uVar6 != 0))
       && (uVar7 = param_1[1], uVar7 != 0)) {
      lVar12 = *(long *)(param_1 + 2);
      *(void **)(param_3 + 0x2e) = param_2;
      uVar4 = 0;
      if (lVar12 != 0) {
        uVar4 = (ulong)uVar6 + 7 & 0x1fffffff8;
      }
      uVar14 = (ulong)uVar7 * 4 + 7 & 0x7fffffff8;
      lVar2 = uVar4 + uVar14;
      lVar5 = 0xffffffff;
      if (lVar12 != 0) {
        lVar5 = 0;
      }
      memset(param_2,0,lVar2 + (ulong)uVar7 * 8);
      uVar17 = *(undefined8 *)(param_1 + 7);
      uVar21 = *(undefined8 *)param_1;
      *(undefined8 *)(param_3 + 9) = *(undefined8 *)(param_1 + 9);
      *(undefined8 *)(param_3 + 7) = uVar17;
      uVar17 = *(undefined8 *)(param_1 + 0xb);
      uVar19 = *(undefined8 *)(param_1 + 0xd);
      *(undefined8 *)param_3 = uVar21;
      uVar21 = *(undefined8 *)(param_1 + 4);
      *(undefined8 *)(param_3 + 0xd) = uVar19;
      *(undefined8 *)(param_3 + 0xb) = uVar17;
      uVar16 = param_1[0x11];
      *(undefined8 *)(param_3 + 4) = uVar21;
      uVar6 = param_1[0x12];
      uVar7 = param_1[6];
      param_3[0x1f] = uVar16;
      uVar17 = *(undefined8 *)(param_1 + 0xf);
      puVar13 = param_3 + 0x19;
      puVar13[0] = 0;
      puVar13[1] = 0;
      param_3[0x11] = uVar6;
      param_3[0x18] = 0xbf800000;
      param_3[6] = uVar7;
      param_3[0x14] = 0;
      param_3[0x15] = 0;
      param_3[0x16] = 0;
      param_3[0x17] = 0;
      param_3[0x12] = 0;
      param_3[0x13] = 0;
      *(undefined8 *)(param_3 + 0xf) = uVar17;
      param_3[0x1b] = 0;
      param_3[0x1c] = 0;
      param_3[0x1d] = 0;
      param_3[0x1e] = 0x3f800000;
      if (uVar7 == 1) {
        while (iVar8 = FUN_00341150(1,puVar13), iVar8 != 0) {
          do {
          } while (*puVar13 == 1);
        }
        uVar17 = *(undefined8 *)(param_3 + 0x16);
        fVar20 = (float)param_3[0x18];
        puVar1 = param_3 + 0x19;
        *puVar1 = 0;
        iVar8 = FUN_00341150(1,puVar1);
        while (iVar8 != 0) {
          do {
          } while (*puVar13 == 1);
          iVar8 = FUN_00341150(1,puVar13);
        }
        *(ulong *)(param_3 + 0x16) = CONCAT44(-(float)((ulong)uVar17 >> 0x20),-(float)uVar17);
        param_3[0x18] = (uint)-fVar20;
        *puVar1 = 0;
      }
      __src = *(void **)(param_1 + 2);
      if (__src != (void *)0x0) {
        *(void **)(param_3 + 2) = (void *)((long)param_2 + lVar5);
        if (*param_3 != 0) {
          memcpy((void *)((long)param_2 + lVar5),__src,(ulong)*param_3);
        }
      }
      uVar6 = param_1[1];
      uVar15 = (ulong)uVar6;
      uVar7 = param_1[0x12];
      *(ulong *)(param_3 + 0x2c) = (long)param_2 + uVar4;
      param_3[0x26] = 0;
      param_3[0x27] = 0;
      param_3[0x24] = 0;
      param_3[0x25] = 0;
      param_3[0x2a] = 0;
      param_3[0x2b] = 0;
      param_3[0x28] = 0;
      param_3[0x29] = 0;
      param_3[0x22] = 0;
      param_3[0x23] = 0;
      param_3[0x20] = 0;
      param_3[0x21] = 0;
      if (uVar6 == 0) {
        uVar10 = 0xfffffffe;
      }
      else {
        __s = (undefined8 *)((long)param_2 + lVar2);
        *(undefined8 **)(param_3 + 0x28) = __s;
        memset(__s,0,uVar15 << 3);
        *(undefined8 **)(param_3 + 0x24) = __s;
        *(void **)(param_3 + 0x26) = (void *)((long)__s + uVar15 * 4);
        *(ulong *)(param_3 + 0x20) = CONCAT44(uVar7,uVar6);
        param_3[0x22] = 0xffffffff;
        param_3[0x23] = 0x3f800000;
        if (uVar6 < 8) {
          uVar9 = 0;
        }
        else {
          auVar18 = NEON_fmov(0x3f800000,4);
          uVar9 = uVar15 & 0xfffffff8;
          uVar10 = uVar9;
          do {
            uVar19 = auVar18._8_8_;
            __s[1] = uVar19;
            uVar17 = auVar18._0_8_;
            *__s = uVar17;
            __s[3] = uVar19;
            __s[2] = uVar17;
            puVar3 = (undefined8 *)((long)__s + uVar15 * 4);
            uVar10 = uVar10 - 8;
            __s = __s + 4;
            puVar3[1] = uVar19;
            *puVar3 = uVar17;
            puVar3[3] = uVar19;
            puVar3[2] = uVar17;
          } while (uVar10 != 0);
          if (uVar9 == uVar15) {
            uVar10 = 0;
            goto LAB_005d2950;
          }
        }
        uVar10 = uVar15 - uVar9;
        puVar11 = (undefined4 *)((long)param_2 + uVar4 + uVar14 + uVar9 * 4);
        do {
          *puVar11 = 0x3f800000;
          uVar10 = uVar10 - 1;
          puVar11[uVar15] = 0x3f800000;
          puVar11 = puVar11 + 1;
        } while (uVar10 != 0);
      }
LAB_005d2950:
      return uVar10 & 0xffffffff;
    }
  }
  return 0xfffffffe;
}


// ===== 005d2974  ma_spatializer_get_direction =====

undefined4 ma_spatializer_get_direction(long param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = FUN_00341150(1,(undefined4 *)(param_1 + 100));
  while (iVar1 != 0) {
    do {
    } while (*(int *)(param_1 + 100) == 1);
    iVar1 = FUN_00341150(1,param_1 + 100);
  }
  *(undefined4 *)(param_1 + 100) = 0;
  return *(undefined4 *)(param_1 + 0x58);
}


// ===== 005d29e0  ma_spatializer_set_direction =====

void ma_spatializer_set_direction
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  
  if (param_4 != 0) {
    iVar1 = FUN_00341150(1,(undefined4 *)(param_4 + 100));
    while (iVar1 != 0) {
      do {
      } while (*(int *)(param_4 + 100) == 1);
      iVar1 = FUN_00341150(1,param_4 + 100);
    }
    *(undefined4 *)(param_4 + 0x58) = param_1;
    *(undefined4 *)(param_4 + 0x5c) = param_2;
    *(undefined4 *)(param_4 + 0x60) = param_3;
    *(undefined4 *)(param_4 + 100) = 0;
  }
  return;
}


// ===== 005d2a58  ma_spatializer_init =====

ulong ma_spatializer_init(uint *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  void *__ptr;
  ulong uVar3;
  
  if (((param_1 == (uint *)0x0) || (*param_1 == 0)) || (uVar2 = param_1[1], uVar2 == 0)) {
    return 0xfffffffe;
  }
  lVar1 = ((ulong)uVar2 * 4 + 7 & 0x7fffffff8) + (ulong)uVar2 * 8;
  uVar3 = 0;
  if (*(long *)(param_1 + 2) != 0) {
    uVar3 = (ulong)*param_1 + 7 & 0x1fffffff8;
  }
  if (param_2 == (undefined8 *)0x0) {
    __ptr = malloc(lVar1 + uVar3);
  }
  else {
    if ((code *)param_2[1] == (code *)0x0) {
      return 0xfffffffc;
    }
    __ptr = (void *)(*(code *)param_2[1])(lVar1 + uVar3,*param_2);
  }
  if (__ptr == (void *)0x0) {
    return 0xfffffffc;
  }
  uVar3 = ma_spatializer_init_preallocated(param_1,__ptr,param_3);
  if ((int)uVar3 == 0) {
    *(undefined4 *)(param_3 + 0xc0) = 1;
    return uVar3;
  }
  if (param_2 == (undefined8 *)0x0) {
    free(__ptr);
  }
  else {
    if ((code *)param_2[3] == (code *)0x0) {
      return uVar3;
    }
    (*(code *)param_2[3])(__ptr,*param_2);
  }
  return uVar3 & 0xffffffff;
}


// ===== 005d2b58  ma_spatializer_uninit =====

void ma_spatializer_uninit(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  
  if (param_1 != 0) {
    if ((*(int *)(param_1 + 0xa8) != 0) &&
       (pvVar1 = *(void **)(param_1 + 0xa0), pvVar1 != (void *)0x0)) {
      if (param_2 == (undefined8 *)0x0) {
        free(pvVar1);
      }
      else if ((code *)param_2[3] != (code *)0x0) {
        (*(code *)param_2[3])(pvVar1,*param_2);
      }
    }
    if ((*(int *)(param_1 + 0xc0) != 0) &&
       (pvVar1 = *(void **)(param_1 + 0xb8), pvVar1 != (void *)0x0)) {
      if (param_2 == (undefined8 *)0x0) {
        free(pvVar1);
        return;
      }
      if ((code *)param_2[3] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005d2be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)param_2[3])(pvVar1,*param_2);
        return;
      }
    }
  }
  return;
}


// ===== 005d2bec  ma_spatializer_process_pcm_frames =====

undefined8
ma_spatializer_process_pcm_frames
          (int *param_1,long param_2,void *param_3,void *param_4,long param_5)

{
  int *piVar1;
  void *__s;
  size_t sVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  int *piVar12;
  long lVar13;
  float *pfVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 *puVar19;
  ulong uVar20;
  float *pfVar21;
  float *pfVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  double dVar34;
  double dVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined4 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined4 uVar45;
  float fVar46;
  undefined4 uVar47;
  undefined8 local_d0;
  int local_c8;
  undefined8 local_c0;
  float local_b8;
  long local_b0;
  
  lVar6 = tpidr_el0;
  local_b0 = *(long *)(lVar6 + 0x28);
  uVar11 = *(undefined8 *)(param_1 + 2);
  lVar27 = *(long *)(param_2 + 8);
  if ((int)*(undefined8 *)(param_1 + 4) == 0) {
    if (*(int *)(param_2 + 0x60) == 0) {
      for (uVar20 = (ulong)(uint)(param_1[1] << 2) * param_5; uVar20 != 0; uVar20 = uVar20 - sVar2)
      {
        sVar2 = uVar20;
        if (0xfffffffe < uVar20) {
          sVar2 = 0xffffffff;
        }
        if (param_3 != (void *)0x0) {
          memset(param_3,0,sVar2);
        }
        param_3 = (void *)((long)param_3 + sVar2);
      }
    }
    else if (*param_1 == param_1[1]) {
      if (param_3 != param_4) {
        for (uVar20 = (ulong)(uint)(*param_1 << 2) * param_5; uVar20 != 0; uVar20 = uVar20 - sVar2)
        {
          sVar2 = uVar20;
          if (0xfffffffe < uVar20) {
            sVar2 = 0xffffffff;
          }
          memcpy(param_3,param_4,sVar2);
          param_3 = (void *)((long)param_3 + sVar2);
          param_4 = (void *)((long)param_4 + sVar2);
        }
      }
    }
    else {
      FUN_005d3758(param_3,lVar27,param_1[1],param_4);
    }
    param_1[0x1e] = 0x3f800000;
    goto LAB_005d36e8;
  }
  iVar9 = *param_1;
  uVar3 = param_1[1];
  uVar20 = (ulong)uVar3;
  uVar29 = *(undefined8 *)(param_1 + 9);
  uVar26 = *(undefined8 *)(param_1 + 10);
  uVar28 = *(undefined8 *)(param_1 + 0xb);
  fVar33 = (float)*(undefined8 *)(param_1 + 0xf);
  iVar8 = FUN_00341150(1,(undefined4 *)(param_2 + 0x5c));
  while (iVar8 != 0) {
    do {
    } while (*(int *)(param_2 + 0x5c) == 1);
    iVar8 = FUN_00341150(1,param_2 + 0x5c);
  }
  uVar45 = *(undefined4 *)(param_2 + 0x50);
  fVar43 = *(float *)(param_2 + 0x54);
  uVar47 = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_2 + 0x5c) = 0;
  fVar42 = *(float *)(param_2 + 0x20);
  if ((int)*(undefined8 *)(param_1 + 5) == 1) {
    iVar8 = FUN_00341150(1,param_1 + 0x15);
    while (iVar8 != 0) {
      do {
      } while (param_1[0x15] == 1);
      iVar8 = FUN_00341150(1,param_1 + 0x15);
    }
    local_c0 = *(undefined8 *)(param_1 + 0x12);
    local_b8 = (float)param_1[0x14];
    param_1[0x15] = 0;
    iVar8 = FUN_00341150(1,param_1 + 0x19);
    while (iVar8 != 0) {
      do {
      } while (param_1[0x19] == 1);
      iVar8 = FUN_00341150(1,param_1 + 0x19);
    }
    local_d0 = *(undefined8 *)(param_1 + 0x16);
    local_c8 = param_1[0x18];
    param_1[0x19] = 0;
  }
  else {
    ma_spatializer_get_relative_position_and_direction(param_1,param_2,&local_c0,&local_d0);
  }
  fVar36 = 1.0;
  fVar44 = (float)uVar26;
  uVar30 = NEON_fmadd((float)local_c0,(float)local_c0,local_c0._4_4_ * local_c0._4_4_);
  iVar8 = (int)*(undefined8 *)(param_1 + 4);
  fVar31 = (float)NEON_fmadd(local_b8,local_b8,uVar30);
  fVar37 = (float)uVar28;
  fVar31 = SQRT(fVar31);
  fVar40 = (float)uVar29;
  if (iVar8 == 3) {
    if (fVar40 < fVar44 != (NAN(fVar40) || NAN(fVar44))) {
      fVar36 = fVar31;
      if (fVar44 <= fVar31) {
        fVar36 = fVar44;
      }
      fVar44 = fVar40;
      if (fVar40 <= fVar36) {
        fVar44 = fVar36;
      }
      dVar35 = pow((double)(fVar44 / fVar40),(double)-fVar37);
      fVar36 = (float)dVar35;
    }
  }
  else if (iVar8 == 2) {
    if (fVar40 < fVar44 != (NAN(fVar40) || NAN(fVar44))) {
      fVar36 = fVar31;
      if (fVar44 <= fVar31) {
        fVar36 = fVar44;
      }
      fVar41 = fVar40;
      if (fVar40 <= fVar36) {
        fVar41 = fVar36;
      }
      fVar36 = 1.0 - ((fVar41 - fVar40) * fVar37) / (fVar44 - fVar40);
    }
  }
  else if ((iVar8 == 1) && (fVar40 < fVar44 != (NAN(fVar40) || NAN(fVar44)))) {
    fVar36 = fVar31;
    if (fVar44 <= fVar31) {
      fVar36 = fVar44;
    }
    fVar44 = fVar40;
    if (fVar40 <= fVar36) {
      fVar44 = fVar36;
    }
    fVar36 = (float)NEON_fmadd(fVar37,fVar44 - fVar40,fVar40);
    fVar36 = fVar40 / fVar36;
  }
  iVar8 = local_c8;
  dVar35 = DAT_0024e8b8;
  if (fVar31 == 0.001 || fVar31 < 0.001 != NAN(fVar31)) {
    fVar31 = 0.0;
LAB_005d3090:
    bVar7 = false;
  }
  else {
    if (fVar31 == 0.0 || fVar31 < 0.0 != NAN(fVar31)) goto LAB_005d3090;
    fVar37 = 1.0 / fVar31;
    uVar26 = *(undefined8 *)(param_1 + 0xd);
    uVar28 = *(undefined8 *)(param_1 + 0xe);
    fVar40 = fVar37 * (float)local_c0;
    fVar41 = fVar37 * local_c0._4_4_;
    fVar37 = fVar37 * local_b8;
    fVar44 = 1.0;
    if ((float)*(undefined8 *)(param_1 + 0xc) < 6.283185) {
      fVar44 = local_d0._4_4_;
      uVar30 = (undefined4)local_d0;
      dVar34 = sin(DAT_0024e8b8 - (double)((float)*(undefined8 *)(param_1 + 0xc) * 0.5));
      fVar46 = (float)dVar34;
      dVar35 = sin(dVar35 - (double)((float)uVar26 * 0.5));
      uVar30 = NEON_fmsub(uVar30,fVar40,-(fVar41 * fVar44));
      fVar38 = (float)NEON_fmsub(iVar8,fVar37,uVar30);
      fVar44 = 1.0;
      if (fVar38 == fVar46 || fVar38 < fVar46 != (NAN(fVar38) || NAN(fVar46))) {
        fVar32 = (float)dVar35;
        fVar44 = (float)uVar28;
        if (fVar38 != fVar32 && fVar38 < fVar32 == (NAN(fVar38) || NAN(fVar32))) {
          fVar38 = (fVar38 - fVar32) / (fVar46 - fVar32);
          fVar44 = (float)NEON_fmadd(fVar44,1.0 - fVar38,fVar38);
        }
      }
    }
    dVar35 = DAT_0024e8b8;
    fVar36 = fVar36 * fVar44;
    if (6.283185 <= *(float *)(param_2 + 0x14)) {
      bVar7 = true;
    }
    else {
      uVar30 = 0xbf800000;
      if (*(int *)(param_2 + 0x10) != 0) {
        uVar30 = 0x3f800000;
      }
      fVar44 = *(float *)(param_2 + 0x18);
      fVar38 = *(float *)(param_2 + 0x1c);
      dVar34 = sin(DAT_0024e8b8 - (double)(*(float *)(param_2 + 0x14) * 0.5));
      fVar46 = (float)dVar34;
      dVar35 = sin(dVar35 - (double)(fVar44 * 0.5));
      uVar39 = NEON_fmadd(fVar40,0,fVar41 * 0.0);
      fVar37 = (float)NEON_fmadd(uVar30,fVar37,uVar39);
      fVar44 = 1.0;
      if ((fVar37 == fVar46 || fVar37 < fVar46 != (NAN(fVar37) || NAN(fVar46))) &&
         (fVar40 = (float)dVar35, fVar44 = fVar38,
         fVar37 != fVar40 && fVar37 < fVar40 == (NAN(fVar37) || NAN(fVar40)))) {
        fVar44 = (fVar37 - fVar40) / (fVar46 - fVar40);
        fVar44 = (float)NEON_fmadd(fVar38,1.0 - fVar44,fVar44);
      }
      fVar36 = fVar36 * fVar44;
      bVar7 = true;
    }
  }
  piVar1 = param_1 + 8;
  fVar44 = fVar36;
  if ((float)*(undefined8 *)piVar1 <= fVar36) {
    fVar44 = (float)*(undefined8 *)piVar1;
  }
  piVar12 = param_1 + 7;
  if ((fVar44 < (float)*(undefined8 *)(param_1 + 7)) ||
     (piVar12 = piVar1, (float)*(undefined8 *)piVar1 <= fVar36)) {
    fVar36 = (float)*(undefined8 *)piVar12;
  }
  if (uVar3 != 0) {
    lVar13 = *(long *)(param_1 + 0x2c);
    if (uVar3 < 8) {
      uVar17 = 0;
    }
    else {
      uVar17 = uVar20 & 0xfffffff8;
      puVar19 = (undefined8 *)(lVar13 + 0x10);
      uVar15 = uVar17;
      do {
        puVar19[-1] = CONCAT44(fVar36,fVar36);
        puVar19[-2] = CONCAT44(fVar36,fVar36);
        puVar19[1] = CONCAT44(fVar36,fVar36);
        *puVar19 = CONCAT44(fVar36,fVar36);
        uVar15 = uVar15 - 8;
        puVar19 = puVar19 + 4;
      } while (uVar15 != 0);
      if (uVar17 == uVar20) goto LAB_005d3138;
    }
    lVar18 = uVar20 - uVar17;
    pfVar14 = (float *)(lVar13 + uVar17 * 4);
    do {
      lVar18 = lVar18 + -1;
      *pfVar14 = fVar36;
      pfVar14 = pfVar14 + 1;
    } while (lVar18 != 0);
  }
LAB_005d3138:
  if (*(int *)(param_2 + 0x60) == 0) {
    __s = param_3;
    for (uVar15 = (ulong)(uint)(param_1[1] << 2) * param_5; uVar15 != 0; uVar15 = uVar15 - sVar2) {
      sVar2 = uVar15;
      if (0xfffffffe < uVar15) {
        sVar2 = 0xffffffff;
      }
      if (__s != (void *)0x0) {
        memset(__s,0,sVar2);
      }
      __s = (void *)((long)__s + sVar2);
    }
  }
  else {
    FUN_005d3758(param_3,lVar27,uVar3,param_4,uVar11,iVar9,param_5,0,0);
  }
  if ((bVar7) && (uVar3 != 0)) {
    fVar31 = 1.0 / fVar31;
    uVar15 = 0;
    do {
      if (lVar27 != 0) {
        uVar17 = (ulong)*(byte *)(lVar27 + uVar15);
        goto LAB_005d326c;
      }
      fVar44 = 1.0;
      uVar10 = (uint)uVar15;
      if (uVar10 < uVar3) {
        if (3 < (int)uVar3) {
          if ((int)uVar3 < 6) {
            if (uVar3 == 4) {
              uVar17 = (ulong)(0xa040302 >> (ulong)((uVar10 & 3) << 3));
            }
            else if (uVar3 == 5) {
              uVar17 = 0x706040302 >> ((ulong)(uVar10 << 3) & 0x3f);
            }
            else {
LAB_005d3378:
              if (uVar10 < 8) {
                uVar17 = 0xc0b070605040302 >> ((ulong)(uVar10 << 3) & 0x3f);
              }
              else {
                if (0x1f < uVar10) goto LAB_005d3230;
                uVar17 = (ulong)(uVar10 + 0xc);
              }
            }
          }
          else if (uVar3 == 6) {
            uVar17 = 0xc0b05040302 >> ((ulong)(uVar10 << 3) & 0x3f);
          }
          else {
            if (uVar3 != 7) goto LAB_005d3378;
            uVar17 = 0xc0b0a05040302 >> ((ulong)(uVar10 << 3) & 0x3f);
          }
          goto LAB_005d326c;
        }
        if (uVar3 == 1) goto LAB_005d3230;
        if (uVar3 == 2) {
          uVar16 = 3;
          if (uVar10 != 1) {
            uVar16 = 0;
          }
          uVar17 = (ulong)uVar16;
          if (uVar10 != 0) goto LAB_005d326c;
          uVar17 = 2;
        }
        else {
          if (uVar3 != 3) goto LAB_005d3378;
          uVar17 = (ulong)(uVar10 + 2);
LAB_005d326c:
          uVar10 = (uint)uVar17;
          fVar44 = 1.0;
          if (((uVar10 & 0xff) < 6 && (1 << (ulong)(uVar10 & 0x1f) & 0x23U) != 0) ||
             ((uVar10 - 0x14 & 0xff) < 0x20)) goto LAB_005d3230;
        }
        uVar17 = uVar17 & 0xff;
        if ((((float)(&DAT_00281ed0)[uVar17 * 6] == 0.0) &&
            ((((float)(&DAT_00281ed4)[uVar17 * 6] == 0.0 &&
              ((float)(&DAT_00281ed8)[uVar17 * 6] == 0.0)) &&
             ((float)(&DAT_00281edc)[uVar17 * 6] == 0.0)))) &&
           ((float)(&DAT_00281ee4)[uVar17 * 6] == 0.0)) {
          fVar44 = 1.0;
        }
        else {
          if ((uint)uVar17 < 0x34) {
            lVar13 = uVar17 * 0xc;
            uVar30 = *(undefined4 *)(&DAT_00281c60 + lVar13);
            fVar44 = *(float *)(&DAT_00281c64 + lVar13);
            uVar39 = *(undefined4 *)(&DAT_00281c68 + lVar13);
          }
          else {
            fVar44 = 0.0;
            uVar30 = 0;
            uVar39 = 0xbf800000;
          }
          uVar30 = NEON_fmadd(fVar31 * (float)local_c0,uVar30,fVar31 * local_c0._4_4_ * fVar44);
          fVar44 = (float)NEON_fmadd(fVar31 * local_b8,uVar39,uVar30);
          fVar44 = (fVar44 + -1.0) * (float)*(undefined8 *)(param_1 + 0x10) + 1.0;
        }
      }
LAB_005d3230:
      fVar37 = (float)param_1[0x1f];
      lVar13 = uVar15 * 4;
      uVar15 = uVar15 + 1;
      fVar44 = (fVar44 + 1.0) * 0.5;
      if (fVar44 == fVar37 || fVar44 < fVar37 != (NAN(fVar44) || NAN(fVar37))) {
        fVar44 = fVar37;
      }
      *(float *)(*(long *)(param_1 + 0x2c) + lVar13) =
           *(float *)(*(long *)(param_1 + 0x2c) + lVar13) * fVar44;
    } while (uVar15 != uVar20);
  }
  puVar19 = *(undefined8 **)(param_1 + 0x2c);
  if (puVar19 != (undefined8 *)0x0) {
    uVar3 = param_1[0x20];
    uVar20 = (ulong)uVar3;
    uVar10 = param_1[0x22];
    if (uVar3 != 0) {
      puVar4 = *(undefined8 **)(param_1 + 0x24);
      puVar5 = *(undefined8 **)(param_1 + 0x26);
      fVar44 = (float)NEON_ucvtf(param_1[0x21]);
      fVar44 = (float)uVar10 / fVar44;
      if (uVar3 < 8) {
        uVar15 = 0;
      }
      else {
        lVar27 = uVar20 * 4;
        uVar15 = 0;
        if ((((undefined8 *)((long)puVar4 + lVar27) <= puVar5 ||
              (undefined8 *)((long)puVar5 + lVar27) <= puVar4) &&
            ((undefined8 *)((long)puVar19 + lVar27) <= puVar4 ||
             (undefined8 *)((long)puVar4 + lVar27) <= puVar19)) &&
           ((undefined8 *)((long)puVar19 + lVar27) <= puVar5 ||
            (undefined8 *)((long)puVar5 + lVar27) <= puVar19)) {
          uVar15 = uVar20 & 0xfffffffc;
          puVar23 = puVar19;
          puVar24 = puVar4;
          puVar25 = puVar5;
          uVar17 = uVar15;
          do {
            uVar28 = puVar25[1];
            uVar11 = *puVar25;
            uVar17 = uVar17 - 4;
            fVar37 = (float)*puVar24;
            fVar40 = (float)((ulong)*puVar24 >> 0x20);
            fVar31 = (float)puVar24[1];
            fVar36 = (float)((ulong)puVar24[1] >> 0x20);
            uVar26 = *puVar23;
            puVar25[1] = puVar23[1];
            *puVar25 = uVar26;
            puVar24[1] = CONCAT44(fVar36 + ((float)((ulong)uVar28 >> 0x20) - fVar36) * fVar44,
                                  fVar31 + ((float)uVar28 - fVar31) * fVar44);
            *puVar24 = CONCAT44(fVar40 + ((float)((ulong)uVar11 >> 0x20) - fVar40) * fVar44,
                                fVar37 + ((float)uVar11 - fVar37) * fVar44);
            puVar23 = puVar23 + 2;
            puVar24 = puVar24 + 2;
            puVar25 = puVar25 + 2;
          } while (uVar17 != 0);
          if (uVar15 == uVar20) goto LAB_005d3448;
        }
      }
      lVar13 = uVar15 * 4;
      lVar27 = uVar20 - uVar15;
      pfVar14 = (float *)((long)puVar19 + lVar13);
      pfVar21 = (float *)((long)puVar4 + lVar13);
      pfVar22 = (float *)((long)puVar5 + lVar13);
      do {
        lVar27 = lVar27 + -1;
        fVar37 = *pfVar14;
        *pfVar21 = *pfVar21 + fVar44 * (*pfVar22 - *pfVar21);
        *pfVar22 = fVar37;
        pfVar14 = pfVar14 + 1;
        pfVar21 = pfVar21 + 1;
        pfVar22 = pfVar22 + 1;
      } while (lVar27 != 0);
    }
LAB_005d3448:
    if (uVar10 == 0xffffffff) {
      iVar9 = param_1[0x21];
    }
    else {
      iVar9 = 0;
    }
    param_1[0x22] = iVar9;
  }
  ma_gainer_process_pcm_frames(param_1 + 0x20,param_3,param_3,param_5);
  fVar44 = 1.0;
  if (fVar33 != 0.0 && fVar33 < 0.0 == NAN(fVar33)) {
    iVar9 = FUN_00341150(1,(undefined4 *)(param_2 + 0x3c));
    while (iVar9 != 0) {
      do {
      } while (*(int *)(param_2 + 0x3c) == 1);
      iVar9 = FUN_00341150(1,param_2 + 0x3c);
    }
    fVar37 = *(float *)(param_2 + 0x30);
    fVar31 = *(float *)(param_2 + 0x34);
    fVar40 = *(float *)(param_2 + 0x38);
    *(undefined4 *)(param_2 + 0x3c) = 0;
    iVar9 = FUN_00341150(1,param_1 + 0x15);
    while (iVar9 != 0) {
      do {
      } while (param_1[0x15] == 1);
      iVar9 = FUN_00341150(1,param_1 + 0x15);
    }
    param_1[0x15] = 0;
    fVar37 = fVar37 - (float)param_1[0x12];
    fVar31 = fVar31 - (float)param_1[0x13];
    fVar40 = fVar40 - (float)param_1[0x14];
    iVar9 = FUN_00341150(1,param_1 + 0x1d);
    while (iVar9 != 0) {
      do {
      } while (param_1[0x1d] == 1);
      iVar9 = FUN_00341150(1,param_1 + 0x1d);
    }
    param_1[0x1d] = 0;
    uVar30 = NEON_fmadd(fVar37,fVar37,fVar31 * fVar31);
    fVar36 = (float)NEON_fmadd(fVar40,fVar40,uVar30);
    fVar36 = SQRT(fVar36);
    fVar44 = 1.0;
    if (fVar36 != 0.0) {
      uVar30 = NEON_fmadd(fVar37,uVar45,fVar43 * fVar31);
      fVar41 = fVar42 / fVar33;
      uVar45 = NEON_fmadd(fVar37,param_1[0x1a],fVar31 * (float)param_1[0x1b]);
      fVar44 = (float)NEON_fmadd(fVar40,uVar47,uVar30);
      fVar37 = (float)NEON_fmadd(fVar40,param_1[0x1c],uVar45);
      fVar43 = fVar44 / fVar36;
      if (fVar41 <= fVar44 / fVar36) {
        fVar43 = fVar41;
      }
      fVar44 = (float)NEON_fmsub(fVar33,fVar43,fVar42);
      fVar43 = fVar37 / fVar36;
      if (fVar41 <= fVar37 / fVar36) {
        fVar43 = fVar41;
      }
      fVar33 = (float)NEON_fmsub(fVar33,fVar43,fVar42);
      fVar44 = fVar44 / fVar33;
    }
  }
  param_1[0x1e] = (int)fVar44;
LAB_005d36e8:
  if (*(long *)(lVar6 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


// ===== 005d3758  FUN_005d3758 =====

void FUN_005d3758(float *param_1,char *param_2,uint param_3,float *param_4,byte *param_5,
                 ulong param_6,ulong param_7,int param_8,int param_9)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  size_t sVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  bool bVar14;
  int iVar15;
  float *pfVar16;
  undefined8 *puVar17;
  float *pfVar18;
  undefined8 *puVar19;
  long lVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  ulong uVar25;
  uint uVar26;
  ulong uVar27;
  ulong uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  ulong uVar33;
  ulong uVar34;
  float fVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined4 uVar43;
  undefined4 uVar44;
  float fVar45;
  undefined4 uVar46;
  float fVar47;
  undefined4 uVar48;
  float fVar49;
  float fVar50;
  undefined4 uVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  float fVar67;
  undefined4 uVar68;
  float fVar70;
  undefined1 auVar69 [16];
  float fStack_11a8;
  float fStack_11a4;
  float fStack_1188;
  float fStack_1184;
  float fStack_1168;
  float fStack_1164;
  float fStack_1148;
  float fStack_1144;
  float fStack_1128;
  float fStack_1124;
  float fStack_1108;
  float fStack_1104;
  float fStack_10e8;
  float fStack_10e4;
  float fStack_10c8;
  float fStack_10c4;
  float local_10b0 [4];
  undefined8 auStack_10a0 [14];
  float local_1030 [32];
  float local_fb0 [32];
  float local_f30 [32];
  float local_eb0 [32];
  float local_e30 [32];
  float local_db0 [32];
  float local_d30 [800];
  long local_b0;
  
  lVar10 = tpidr_el0;
  uVar33 = (ulong)param_3;
  local_b0 = *(long *)(lVar10 + 0x28);
  uVar34 = param_6 & 0xffffffff;
  iVar15 = FUN_005b5df0(param_5,param_6 & 0xffffffff,param_2,uVar33,param_8);
  if (iVar15 != 3) {
    uVar23 = (uint)param_6;
    if (iVar15 == 2) {
      if (((param_1 == (float *)0x0) || (param_4 == (float *)0x0)) || (uVar23 == 0))
      goto LAB_005d53d0;
      if (param_5 == (byte *)0x0) {
        if (uVar23 < 8) {
          uVar22 = (uint)(0x101010101010100 >> ((ulong)(uVar23 << 3) & 0x3f)) & 1;
          if (uVar23 != 1) {
            uVar26 = *(uint *)(&DAT_002534e4 + uVar34 * 4);
            goto LAB_005d3d2c;
          }
        }
        else {
          uVar22 = 2;
LAB_005d438c:
          uVar33 = 2;
          uVar25 = 0x10;
          do {
            if (param_5 == (byte *)0x0) {
              uVar26 = (uint)uVar33;
              if (uVar26 < uVar23) {
                if ((int)uVar23 < 4) {
                  uVar27 = 1;
                  if (uVar23 != 1) {
                    if (uVar23 == 2) {
                      uVar27 = (ulong)(uVar26 == 0) << 1;
                    }
                    else if (uVar23 != 3) goto LAB_005d4468;
                  }
                }
                else if ((int)uVar23 < 6) {
                  if (uVar23 == 4) {
                    uVar27 = (ulong)(0xa040302 >> (ulong)((uint)uVar25 & 0x1f));
                  }
                  else if (uVar23 == 5) {
                    uVar27 = 0x706040302 >> (uVar25 & 0x3f);
                  }
                  else {
LAB_005d4468:
                    if (uVar26 < 8) {
                      uVar27 = 0xc0b070605040302 >> (uVar25 & 0x38);
                    }
                    else {
                      uVar27 = (ulong)(uVar26 < 0x20);
                    }
                  }
                }
                else if (uVar23 == 6) {
                  uVar27 = 0xc0b05040302 >> (uVar25 & 0x3f);
                }
                else {
                  if (uVar23 != 7) goto LAB_005d4468;
                  uVar27 = 0xc0b0a05040302 >> (uVar25 & 0x3f);
                }
              }
              else {
                uVar27 = 0;
              }
            }
            else {
              uVar27 = (ulong)param_5[uVar33];
            }
            uVar33 = uVar33 + 1;
            uVar25 = uVar25 + 8;
            if ((uVar27 & 0xff) != 0) {
              uVar22 = uVar22 + 1;
            }
          } while (uVar34 != uVar33);
        }
      }
      else {
        uVar22 = (uint)(*param_5 != 0);
        if (uVar23 != 1) {
          uVar26 = (uint)(param_5[1] != 0);
LAB_005d3d2c:
          uVar22 = uVar26 + uVar22;
          if (uVar23 != 2) goto LAB_005d438c;
        }
      }
      if (uVar22 == 0) {
        for (param_7 = param_7 << 2; param_7 != 0; param_7 = param_7 - sVar7) {
          sVar7 = param_7;
          if (0xfffffffe < param_7) {
            sVar7 = 0xffffffff;
          }
          if (param_1 != (float *)0x0) {
            memset(param_1,0,sVar7);
          }
          param_1 = (float *)((long)param_1 + sVar7);
        }
      }
      else if (param_7 != 0) {
        uVar33 = 0;
        do {
          fVar35 = 0.0;
          uVar27 = 0;
          uVar25 = 0;
          do {
            if (param_5 == (byte *)0x0) {
              uVar26 = (uint)uVar25;
              if (uVar26 < uVar23) {
                if (3 < (int)uVar23) {
                  if ((int)uVar23 < 6) {
                    if (uVar23 == 4) {
                      uVar21 = (ulong)(0xa040302 >> (ulong)((uint)uVar27 & 0x1f));
                    }
                    else if (uVar23 == 5) {
                      uVar21 = 0x706040302 >> (uVar27 & 0x3f);
                    }
                    else {
LAB_005d3e4c:
                      if (7 < uVar26) {
                        if (0x1f < uVar26) goto LAB_005d3dc4;
                        goto LAB_005d3dbc;
                      }
                      uVar21 = 0xc0b070605040302 >> (uVar27 & 0x38);
                    }
                  }
                  else if (uVar23 == 6) {
                    uVar21 = 0xc0b05040302 >> (uVar27 & 0x3f);
                  }
                  else {
                    if (uVar23 != 7) goto LAB_005d3e4c;
                    uVar21 = 0xc0b0a05040302 >> (uVar27 & 0x3f);
                  }
                  goto LAB_005d3ddc;
                }
                if (uVar23 != 1) {
                  if (uVar23 == 2) {
                    uVar30 = 3;
                    if (uVar26 != 1) {
                      uVar30 = 0;
                    }
                    uVar21 = (ulong)uVar30;
                    if (uVar26 != 0) goto LAB_005d3ddc;
                  }
                  else if (uVar23 != 3) goto LAB_005d3e4c;
                }
                goto LAB_005d3dbc;
              }
            }
            else {
              uVar21 = (ulong)param_5[uVar25];
LAB_005d3ddc:
              if ((uVar21 & 0xff) != 0) {
LAB_005d3dbc:
                fVar35 = fVar35 + param_4[uVar25];
              }
            }
LAB_005d3dc4:
            uVar25 = uVar25 + 1;
            uVar27 = uVar27 + 8;
          } while (uVar34 != uVar25);
          uVar33 = uVar33 + 1;
          param_4 = param_4 + uVar34;
          *param_1 = fVar35 / (float)uVar22;
          param_1 = param_1 + 1;
        } while (uVar33 != param_7);
      }
      goto LAB_005d53d0;
    }
    if (iVar15 == 1) {
      if (param_1 != param_4) {
        for (param_7 = (param_3 << 2) * param_7; param_7 != 0; param_7 = param_7 - sVar7) {
          sVar7 = param_7;
          if (0xfffffffe < param_7) {
            sVar7 = 0xffffffff;
          }
          memcpy(param_1,param_4,sVar7);
          param_1 = (float *)((long)param_1 + sVar7);
          param_4 = (float *)((long)param_4 + sVar7);
        }
      }
      goto LAB_005d53d0;
    }
    if (0xfe < param_3) {
      for (param_7 = (param_3 << 2) * param_7; param_7 != 0; param_7 = param_7 - sVar7) {
        sVar7 = param_7;
        if (0xfffffffe < param_7) {
          sVar7 = 0xffffffff;
        }
        if (param_1 != (float *)0x0) {
          memset(param_1,0,sVar7);
        }
        param_1 = (float *)((long)param_1 + sVar7);
      }
      goto LAB_005d53d0;
    }
    if (param_8 == 1) {
      iVar15 = FUN_005b6420(param_5,uVar34,param_2,uVar33,local_10b0);
      if (((iVar15 == 0) && (param_3 != 0)) &&
         ((param_1 != (float *)0x0 && ((param_4 != (float *)0x0 && (param_7 != 0)))))) {
        uVar25 = 0;
        do {
          uVar27 = 0;
          do {
            fVar35 = 0.0;
            if (*(byte *)((long)local_10b0 + uVar27) < uVar23) {
              fVar35 = param_4[*(byte *)((long)local_10b0 + uVar27)];
            }
            param_1[uVar27] = fVar35;
            uVar27 = uVar27 + 1;
          } while (uVar33 != uVar27);
          uVar25 = uVar25 + 1;
          param_4 = param_4 + uVar34;
          param_1 = param_1 + uVar33;
        } while (uVar25 != param_7);
      }
      goto LAB_005d53d0;
    }
    if ((0x20 < param_3) || (0x20 < uVar23)) {
      if (param_7 != 0) {
        uVar22 = uVar23 - 1;
        uVar25 = 0;
        do {
          iVar15 = (int)uVar25;
          if (param_3 != 0) {
            uVar26 = iVar15 * uVar23;
            uVar25 = 0;
            do {
              uVar30 = (uint)uVar25;
              if (param_2 == (char *)0x0) {
                if (param_3 <= uVar30) goto LAB_005d419c;
                uVar29 = param_3 & 0xff;
                if (uVar29 < 4) {
                  uVar27 = uVar33;
                  if (uVar29 != 1) {
                    if (uVar29 == 2) {
                      uVar29 = 3;
                      if (uVar30 != 1) {
                        uVar29 = 0;
                      }
                      uVar31 = 2;
                      if (uVar30 != 0) {
                        uVar31 = uVar29;
                      }
                      uVar27 = (ulong)uVar31;
                    }
                    else {
                      if (uVar29 != 3) goto LAB_005d412c;
                      if (2 < uVar30) goto LAB_005d419c;
                      uVar27 = (ulong)(uVar30 + 2);
                    }
                  }
                }
                else if (uVar29 < 6) {
                  if (uVar29 == 4) {
                    if (uVar30 < 4) {
                      uVar27 = (ulong)(0xa040302 >> (ulong)((uVar30 & 3) << 3));
                    }
                    else {
LAB_005d419c:
                      uVar27 = 0;
                    }
                  }
                  else if (uVar29 == 5) {
                    if (4 < uVar30) goto LAB_005d419c;
                    uVar27 = 0x706040302 >> ((ulong)(uVar30 << 3) & 0x3f);
                  }
                  else {
LAB_005d412c:
                    if (uVar30 < 8) {
                      uVar27 = 0xc0b070605040302 >> ((uVar25 & 7) << 3);
                    }
                    else {
                      if (0x1f < uVar30) goto LAB_005d419c;
                      uVar27 = (ulong)(uVar30 + 0xc);
                    }
                  }
                }
                else if (uVar29 == 6) {
                  if (5 < uVar30) goto LAB_005d419c;
                  uVar27 = 0xc0b05040302 >> ((ulong)(uVar30 << 3) & 0x3f);
                }
                else {
                  if (uVar29 != 7) goto LAB_005d412c;
                  if (6 < uVar30) goto LAB_005d419c;
                  uVar27 = 0xc0b0a05040302 >> ((ulong)(uVar30 << 3) & 0x3f);
                }
              }
              else {
                uVar27 = (ulong)(byte)param_2[uVar25];
              }
              if (uVar23 == 0) {
                fVar35 = 0.0;
              }
              else {
                if (param_5 == (byte *)0x0) {
                  uVar29 = (uint)(0x2020202020201 >> ((ulong)(uVar22 * 8) & 0x3f));
                  if (6 < uVar22) {
                    uVar29 = 2;
                  }
                }
                else {
                  uVar29 = (uint)*param_5;
                }
                uVar27 = uVar27 & 0xff;
                uVar21 = (ulong)(uVar29 & 0xff);
                uVar44 = (&DAT_00281ed0)[uVar27 * 6];
                fVar49 = (float)(&DAT_00281ed4)[uVar27 * 6];
                uVar43 = NEON_fmadd(uVar44,(&DAT_00281ed0)[uVar21 * 6],
                                    fVar49 * (float)(&DAT_00281ed4)[uVar21 * 6]);
                uVar46 = (&DAT_00281ed8)[uVar27 * 6];
                uVar48 = (&DAT_00281edc)[uVar27 * 6];
                uVar43 = NEON_fmadd(uVar46,(&DAT_00281ed8)[uVar21 * 6],uVar43);
                uVar51 = (&DAT_00281ee4)[uVar27 * 6];
                fVar35 = (float)NEON_fmadd(uVar48,(&DAT_00281edc)[uVar21 * 6],uVar43);
                uVar43 = NEON_fmadd(uVar51,(&DAT_00281ee4)[uVar21 * 6],fVar35 + 0.0);
                fVar35 = (float)NEON_fmadd(param_4[uVar26],uVar43,0);
                if (uVar23 != 1) {
                  if (param_5 == (byte *)0x0) {
                    uVar29 = (uint)(0x3030303030301 >> ((ulong)(uVar22 * 8) & 0x3f));
                    if (6 < uVar22) {
                      uVar29 = 3;
                    }
                  }
                  else {
                    uVar29 = (uint)param_5[1];
                  }
                  uVar27 = (ulong)(uVar29 & 0xff);
                  uVar43 = NEON_fmadd(uVar44,(&DAT_00281ed0)[uVar27 * 6],
                                      fVar49 * (float)(&DAT_00281ed4)[uVar27 * 6]);
                  uVar43 = NEON_fmadd(uVar46,(&DAT_00281ed8)[uVar27 * 6],uVar43);
                  fVar45 = (float)NEON_fmadd(uVar48,(&DAT_00281edc)[uVar27 * 6],uVar43);
                  uVar43 = NEON_fmadd(uVar51,(&DAT_00281ee4)[uVar27 * 6],fVar45 + 0.0);
                  fVar35 = (float)NEON_fmadd(param_4[uVar26 + 1],uVar43,fVar35);
                  if (uVar23 != 2) {
                    uVar27 = 0x10;
                    uVar21 = 2;
                    do {
                      uVar29 = (uint)uVar21;
                      if (param_5 == (byte *)0x0) {
                        if (uVar29 < uVar23) {
                          if ((int)uVar23 < 4) {
                            uVar28 = uVar34;
                            if (uVar23 != 1) {
                              if (uVar23 == 2) goto LAB_005d430c;
                              if (uVar23 != 3) goto LAB_005d4338;
                              uVar28 = (uVar21 & 0xff) + 2;
                            }
                          }
                          else if ((int)uVar23 < 6) {
                            if (uVar23 == 4) {
                              uVar28 = (ulong)(0xa040302 >> (ulong)((uint)uVar27 & 0x1f)) & 0xff;
                            }
                            else if (uVar23 == 5) {
                              uVar28 = 0x706040302U >> (uVar27 & 0x3f) & 0xff;
                            }
                            else {
LAB_005d4338:
                              uVar8 = 0;
                              if (uVar29 < 0x20) {
                                uVar8 = (uVar21 & 0xff) + 0xc;
                              }
                              uVar28 = 0xc0b070605040302U >> (uVar27 & 0x38) & 0xff;
                              if (7 < uVar29) {
                                uVar28 = uVar8;
                              }
                            }
                          }
                          else if (uVar23 == 6) {
                            uVar28 = 0xc0b05040302U >> (uVar27 & 0x3f) & 0xff;
                          }
                          else {
                            if (uVar23 != 7) goto LAB_005d4338;
                            uVar28 = 0xc0b0a05040302U >> (uVar27 & 0x3f) & 0xff;
                          }
                        }
                        else {
LAB_005d430c:
                          uVar28 = 0;
                        }
                      }
                      else {
                        uVar28 = (ulong)param_5[uVar21];
                      }
                      uVar27 = uVar27 + 8;
                      uVar43 = NEON_fmadd(uVar44,(&DAT_00281ed0)[uVar28 * 6],
                                          fVar49 * (float)(&DAT_00281ed4)[uVar28 * 6]);
                      uVar43 = NEON_fmadd(uVar46,(&DAT_00281ed8)[uVar28 * 6],uVar43);
                      uVar21 = uVar21 + 1;
                      fVar45 = (float)NEON_fmadd(uVar48,(&DAT_00281edc)[uVar28 * 6],uVar43);
                      uVar43 = NEON_fmadd(uVar51,(&DAT_00281ee4)[uVar28 * 6],fVar45 + 0.0);
                      fVar35 = (float)NEON_fmadd(param_4[uVar29 + uVar26],uVar43,fVar35);
                    } while (uVar34 != uVar21);
                  }
                }
              }
              uVar25 = uVar25 + 1;
              param_1[iVar15 * param_3 + uVar30] = fVar35;
            } while (uVar25 != uVar33);
          }
          uVar25 = (ulong)(iVar15 + 1);
        } while (uVar25 < param_7);
      }
      goto LAB_005d53d0;
    }
    if (param_3 == 0) {
LAB_005d507c:
      uVar25 = 0;
    }
    else {
      uVar22 = uVar23 - 1;
      uVar25 = 0;
      pfVar16 = local_10b0;
      do {
        if (param_2 == (char *)0x0) {
          uVar26 = (uint)uVar25;
          if (param_3 <= uVar26) goto LAB_005d3b14;
          uVar30 = param_3 & 0xff;
          if (uVar30 < 4) {
            uVar27 = uVar33;
            if (uVar30 != 1) {
              if (uVar30 == 2) {
                uVar30 = 3;
                if (uVar26 != 1) {
                  uVar30 = 0;
                }
                uVar29 = 2;
                if (uVar26 != 0) {
                  uVar29 = uVar30;
                }
                uVar27 = (ulong)uVar29;
              }
              else {
                if (uVar30 != 3) goto LAB_005d3ad8;
                if (2 < uVar26) goto LAB_005d3b14;
                uVar27 = (ulong)(uVar26 + 2);
              }
            }
          }
          else if (uVar30 < 6) {
            if (uVar30 == 4) {
              if (uVar26 < 4) {
                uVar27 = (ulong)(0xa040302 >> (ulong)((uVar26 & 3) << 3));
              }
              else {
LAB_005d3b14:
                uVar27 = 0;
              }
            }
            else if (uVar30 == 5) {
              if (4 < uVar26) goto LAB_005d3b14;
              uVar27 = 0x706040302 >> ((ulong)(uVar26 << 3) & 0x3f);
            }
            else {
LAB_005d3ad8:
              if (uVar26 < 8) {
                uVar27 = 0xc0b070605040302 >> ((uVar25 & 7) << 3);
              }
              else {
                uVar27 = (ulong)(uVar26 + 0xc);
              }
            }
          }
          else if (uVar30 == 6) {
            if (5 < uVar26) goto LAB_005d3b14;
            uVar27 = 0xc0b05040302 >> ((ulong)(uVar26 << 3) & 0x3f);
          }
          else {
            if (uVar30 != 7) goto LAB_005d3ad8;
            if (6 < uVar26) goto LAB_005d3b14;
            uVar27 = 0xc0b0a05040302 >> ((ulong)(uVar26 << 3) & 0x3f);
          }
        }
        else {
          uVar27 = (ulong)(byte)param_2[uVar25];
        }
        if (uVar23 != 0) {
          if (param_5 == (byte *)0x0) {
            uVar26 = (uint)(0x2020202020201 >> ((ulong)(uVar22 * 8) & 0x3f));
            if (6 < uVar22) {
              uVar26 = 2;
            }
          }
          else {
            uVar26 = (uint)*param_5;
          }
          uVar27 = uVar27 & 0xff;
          uVar21 = (ulong)(uVar26 & 0xff);
          fVar35 = (float)(&DAT_00281ed4)[uVar27 * 6];
          uVar43 = (&DAT_00281ed0)[uVar27 * 6];
          uVar48 = NEON_fmadd(uVar43,(&DAT_00281ed0)[uVar21 * 6],
                              fVar35 * (float)(&DAT_00281ed4)[uVar21 * 6]);
          uVar44 = (&DAT_00281ed8)[uVar27 * 6];
          uVar46 = (&DAT_00281edc)[uVar27 * 6];
          uVar48 = NEON_fmadd(uVar44,(&DAT_00281ed8)[uVar21 * 6],uVar48);
          fVar49 = (float)NEON_fmadd(uVar46,(&DAT_00281edc)[uVar21 * 6],uVar48);
          uVar48 = (&DAT_00281ee4)[uVar27 * 6];
          fVar49 = (float)NEON_fmadd(uVar48,(&DAT_00281ee4)[uVar21 * 6],fVar49 + 0.0);
          local_10b0[uVar25 * 0x20] = fVar49;
          if (uVar23 != 1) {
            if (param_5 == (byte *)0x0) {
              uVar26 = (uint)(0x3030303030301 >> ((ulong)(uVar22 * 8) & 0x3f));
              if (6 < uVar22) {
                uVar26 = 3;
              }
            }
            else {
              uVar26 = (uint)param_5[1];
            }
            uVar27 = (ulong)(uVar26 & 0xff);
            uVar51 = NEON_fmadd(uVar43,(&DAT_00281ed0)[uVar27 * 6],
                                fVar35 * (float)(&DAT_00281ed4)[uVar27 * 6]);
            uVar51 = NEON_fmadd(uVar44,(&DAT_00281ed8)[uVar27 * 6],uVar51);
            fVar49 = (float)NEON_fmadd(uVar46,(&DAT_00281edc)[uVar27 * 6],uVar51);
            fVar49 = (float)NEON_fmadd(uVar48,(&DAT_00281ee4)[uVar27 * 6],fVar49 + 0.0);
            local_10b0[uVar25 * 0x20 + 1] = fVar49;
            if (uVar23 != 2) {
              uVar27 = 0x10;
              uVar21 = 2;
              do {
                if (param_5 == (byte *)0x0) {
                  if ((uint)uVar21 < uVar23) {
                    if ((int)uVar23 < 4) {
                      uVar28 = uVar34;
                      if (uVar23 != 1) {
                        if (uVar23 == 2) goto LAB_005d3c80;
                        if (uVar23 != 3) goto LAB_005d3cac;
                        uVar28 = (uVar21 & 0xff) + 2;
                      }
                    }
                    else if ((int)uVar23 < 6) {
                      if (uVar23 == 4) {
                        uVar28 = (ulong)(0xa040302 >> (ulong)((uint)uVar27 & 0x1f)) & 0xff;
                      }
                      else if (uVar23 == 5) {
                        uVar28 = 0x706040302U >> (uVar27 & 0x3f) & 0xff;
                      }
                      else {
LAB_005d3cac:
                        uVar28 = 0xc0b070605040302U >> (uVar27 & 0x3f) & 0xff;
                        if (7 < (uint)uVar21) {
                          uVar28 = (uVar21 & 0xff) + 0xc;
                        }
                      }
                    }
                    else if (uVar23 == 6) {
                      uVar28 = 0xc0b05040302U >> (uVar27 & 0x3f) & 0xff;
                    }
                    else {
                      if (uVar23 != 7) goto LAB_005d3cac;
                      uVar28 = 0xc0b0a05040302U >> (uVar27 & 0x3f) & 0xff;
                    }
                  }
                  else {
LAB_005d3c80:
                    uVar28 = 0;
                  }
                }
                else {
                  uVar28 = (ulong)param_5[uVar21];
                }
                uVar27 = uVar27 + 8;
                uVar51 = NEON_fmadd(uVar43,(&DAT_00281ed0)[uVar28 * 6],
                                    fVar35 * (float)(&DAT_00281ed4)[uVar28 * 6]);
                uVar51 = NEON_fmadd(uVar44,(&DAT_00281ed8)[uVar28 * 6],uVar51);
                fVar49 = (float)NEON_fmadd(uVar46,(&DAT_00281edc)[uVar28 * 6],uVar51);
                fVar49 = (float)NEON_fmadd(uVar48,(&DAT_00281ee4)[uVar28 * 6],fVar49 + 0.0);
                pfVar16[uVar21] = fVar49;
                uVar21 = uVar21 + 1;
              } while (uVar34 != uVar21);
            }
          }
        }
        uVar25 = uVar25 + 1;
        pfVar16 = pfVar16 + 0x20;
      } while (uVar25 != uVar33);
      if ((param_3 & 0xff) == 8) {
        if (uVar23 == 2) {
          if (param_7 != 0) {
            uVar22 = (uint)param_7;
            if (uVar22 < 0x10) {
LAB_005d4e18:
              uVar26 = 0;
            }
            else {
              uVar25 = param_7 - 1;
              uVar26 = 0;
              if ((((((param_1 <= param_1 + uVar25 * 8) && (param_1 + 1 <= param_1 + 1 + uVar25 * 8)
                     ) && (param_1 + 2 <= param_1 + 2 + uVar25 * 8)) &&
                   ((param_1 + 3 <= param_1 + 3 + uVar25 * 8 &&
                    (param_1 + 4 <= param_1 + 4 + uVar25 * 8)))) &&
                  (param_1 + 5 <= param_1 + 5 + uVar25 * 8)) &&
                 (((param_1 + 7 <= param_1 + 7 + uVar25 * 8 &&
                   (param_1 + 6 <= param_1 + 6 + uVar25 * 8)) &&
                  (((uVar25 & 0xffffffff) != 0xffffffff && (uVar25 >> 0x20 == 0)))))) {
                if ((param_1 < param_4 + param_7 * 2) && (param_4 < param_1 + param_7 * 8))
                goto LAB_005d4e18;
                uVar27 = 0;
                uVar25 = 0;
                uVar26 = uVar22 & 0xfffffffc;
                uVar21 = param_7 & 0xfffffffc;
                do {
                  pfVar16 = param_4 + (uVar27 & 0xfffffff8);
                  fVar35 = *pfVar16;
                  fVar50 = pfVar16[1];
                  fVar49 = pfVar16[2];
                  fVar52 = pfVar16[3];
                  fVar45 = pfVar16[4];
                  fVar53 = pfVar16[5];
                  fVar47 = pfVar16[6];
                  fVar54 = pfVar16[7];
                  uVar28 = uVar25 & 0xffffffe0;
                  uVar21 = uVar21 - 4;
                  uVar25 = uVar25 + 0x20;
                  uVar27 = uVar27 + 8;
                  fVar55 = local_db0[0] * fVar35 + 0.0 + local_db0[1] * fVar50;
                  fVar56 = local_db0[0] * fVar49 + 0.0 + local_db0[1] * fVar52;
                  fVar57 = fStack_1128 * fVar45 + 0.0 + fStack_11a8 * fVar53;
                  fVar58 = fStack_1124 * fVar47 + 0.0 + fStack_11a4 * fVar54;
                  fVar70 = local_10b0[1] * fVar49 + 0.0 + local_d30[1] * fVar52;
                  fVar59 = local_fb0[0] * fVar35 + 0.0 + local_fb0[1] * fVar50;
                  fVar60 = local_fb0[0] * fVar49 + 0.0 + local_fb0[1] * fVar52;
                  fVar61 = fStack_10e8 * fVar45 + 0.0 + fStack_1168 * fVar53;
                  fVar62 = fStack_10e4 * fVar47 + 0.0 + fStack_1164 * fVar54;
                  fVar67 = local_eb0[0] * fVar49 + 0.0 + local_eb0[1] * fVar52;
                  fVar64 = fStack_1104 * fVar47 + 0.0 + fStack_1184 * fVar54;
                  fVar63 = fStack_10c4 * fVar47 + 0.0 + fStack_1144 * fVar54;
                  auVar69._4_4_ = local_10b0[1] * fVar35 + 0.0 + local_d30[1] * fVar50;
                  auVar69._0_4_ = fVar55;
                  auVar69._8_4_ = fVar56;
                  auVar69._12_4_ = fVar70;
                  auVar12._4_4_ = fVar56;
                  auVar12._0_4_ = fVar55;
                  auVar12._8_4_ = fVar57;
                  auVar12._12_4_ = fVar58;
                  auVar42 = NEON_ext(auVar12,auVar69,8,1);
                  auVar11._4_4_ = local_eb0[0] * fVar35 + 0.0 + local_eb0[1] * fVar50;
                  auVar11._0_4_ = fVar59;
                  auVar11._8_4_ = fVar60;
                  auVar11._12_4_ = fVar67;
                  auVar13._4_4_ = fVar60;
                  auVar13._0_4_ = fVar59;
                  auVar13._8_4_ = fVar61;
                  auVar13._12_4_ = fVar62;
                  auVar69 = NEON_ext(auVar13,auVar11,8,1);
                  *(ulong *)(param_1 + uVar28 + 0xe) = CONCAT44(fVar70,fVar56);
                  *(ulong *)(param_1 + uVar28 + 0xc) =
                       CONCAT44(local_db0[0] * fVar49 + 0.0 + local_db0[1] * fVar52,
                                local_eb0[0] * fVar49 + 0.0 + local_eb0[1] * fVar52);
                  *(ulong *)(param_1 + uVar28 + 10) = CONCAT44(fVar67,fVar60);
                  *(ulong *)(param_1 + uVar28 + 8) =
                       CONCAT44(local_fb0[0] * fVar49 + 0.0 + local_fb0[1] * fVar52,
                                local_10b0[0] * fVar49 + 0.0 + local_10b0[1] * fVar52);
                  *(ulong *)(param_1 + uVar28 + 0x16) =
                       CONCAT44(local_d30[0] * fVar45 + 0.0 + local_d30[1] * fVar53,fVar57);
                  *(ulong *)(param_1 + uVar28 + 0x14) =
                       CONCAT44(local_e30[0] * fVar45 + 0.0 + local_e30[1] * fVar53,
                                fStack_1108 * fVar45 + 0.0 + fStack_1188 * fVar53);
                  *(ulong *)(param_1 + uVar28 + 0x12) =
                       CONCAT44(local_f30[0] * fVar45 + 0.0 + local_f30[1] * fVar53,fVar61);
                  *(ulong *)(param_1 + uVar28 + 0x10) =
                       CONCAT44(local_1030[0] * fVar45 + 0.0 + local_1030[1] * fVar53,
                                fStack_10c8 * fVar45 + 0.0 + fStack_1148 * fVar53);
                  *(ulong *)(param_1 + uVar28 + 0x1e) =
                       CONCAT44(local_d30[0] * fVar47 + 0.0 + local_d30[1] * fVar54,fVar58);
                  *(ulong *)(param_1 + uVar28 + 0x1c) = CONCAT44(fVar64,fVar64);
                  *(ulong *)(param_1 + uVar28 + 0x1a) =
                       CONCAT44(local_f30[0] * fVar47 + 0.0 + local_f30[1] * fVar54,fVar62);
                  *(ulong *)(param_1 + uVar28 + 0x18) = CONCAT44(fVar63,fVar63);
                  *(long *)(param_1 + uVar28 + 6) = auVar42._8_8_;
                  *(ulong *)(param_1 + uVar28 + 4) =
                       CONCAT44(local_db0[0] * fVar35 + 0.0 + local_db0[1] * fVar50,
                                local_eb0[0] * fVar35 + 0.0 + local_eb0[1] * fVar50);
                  *(long *)(param_1 + uVar28 + 2) = auVar69._8_8_;
                  *(ulong *)(param_1 + uVar28) =
                       CONCAT44(local_fb0[0] * fVar35 + 0.0 + local_fb0[1] * fVar50,
                                local_10b0[0] * fVar35 + 0.0 + local_10b0[1] * fVar50);
                } while (uVar21 != 0);
                uVar25 = param_7 & 0xffffffff;
                if (uVar26 == uVar22) goto LAB_005d5080;
              }
            }
            uVar22 = uVar26 << 1;
            uVar30 = uVar26 << 3 | 7;
            uVar25 = (ulong)uVar26;
            do {
              fVar35 = param_4[uVar22];
              uVar25 = (ulong)((int)uVar25 + 1);
              fVar45 = param_4[uVar22 + 1];
              uVar44 = NEON_fmadd(fVar35,local_10b0[0],0);
              uVar46 = NEON_fmadd(fVar35,local_1030[0],0);
              uVar22 = uVar22 + 2;
              uVar48 = NEON_fmadd(fVar35,local_fb0[0],0);
              uVar51 = NEON_fmadd(fVar35,local_f30[0],0);
              uVar65 = NEON_fmadd(fVar35,local_eb0[0],0);
              uVar66 = NEON_fmadd(fVar35,local_e30[0],0);
              uVar68 = NEON_fmadd(fVar35,local_db0[0],0);
              uVar43 = NEON_fmadd(fVar35,local_d30[0],0);
              fVar35 = (float)NEON_fmadd(fVar45,local_10b0[1],uVar44);
              fVar47 = (float)NEON_fmadd(fVar45,local_1030[1],uVar46);
              fVar50 = (float)NEON_fmadd(fVar45,local_fb0[1],uVar48);
              param_1[uVar30 - 7] = fVar35;
              fVar49 = (float)NEON_fmadd(fVar45,local_f30[1],uVar51);
              param_1[uVar30 - 6] = fVar47;
              fVar47 = (float)NEON_fmadd(fVar45,local_eb0[1],uVar65);
              param_1[uVar30 - 5] = fVar50;
              fVar50 = (float)NEON_fmadd(fVar45,local_e30[1],uVar66);
              fVar35 = (float)NEON_fmadd(fVar45,local_d30[1],uVar43);
              param_1[uVar30 - 4] = fVar49;
              fVar49 = (float)NEON_fmadd(fVar45,local_db0[1],uVar68);
              param_1[uVar30 - 3] = fVar47;
              param_1[uVar30 - 2] = fVar50;
              uVar26 = uVar30 - 1;
              param_1[uVar30] = fVar35;
              uVar30 = uVar30 + 8;
              param_1[uVar26] = fVar49;
            } while (uVar25 < param_7);
            goto LAB_005d5080;
          }
        }
        else if (param_7 != 0) {
          uVar22 = 0;
          uVar25 = 0;
          do {
            uVar36 = 0;
            uVar38 = 0;
            auVar42 = ZEXT816(0);
            uVar37 = 0;
            uVar39 = 0;
            if (uVar23 != 0) {
              pfVar16 = local_10b0;
              uVar27 = uVar34;
              auVar69 = auVar42;
              uVar26 = uVar22;
              do {
                fVar35 = *pfVar16;
                pfVar18 = pfVar16 + 0x80;
                pfVar1 = pfVar16 + 0x20;
                pfVar2 = pfVar16 + 0xa0;
                fVar49 = param_4[uVar26];
                uVar27 = uVar27 - 1;
                pfVar3 = pfVar16 + 0x40;
                pfVar4 = pfVar16 + 0xc0;
                uVar26 = uVar26 + 1;
                pfVar5 = pfVar16 + 0x60;
                pfVar6 = pfVar16 + 0xe0;
                pfVar16 = pfVar16 + 1;
                uVar36 = CONCAT44((float)((ulong)uVar36 >> 0x20) + *pfVar1 * fVar49,
                                  (float)uVar36 + fVar35 * fVar49);
                uVar38 = CONCAT44((float)((ulong)uVar38 >> 0x20) + *pfVar5 * fVar49,
                                  (float)uVar38 + *pfVar3 * fVar49);
                auVar42._0_4_ = auVar69._0_4_ + *pfVar18 * fVar49;
                auVar42._4_4_ = auVar69._4_4_ + *pfVar2 * fVar49;
                auVar42._8_4_ = auVar69._8_4_ + *pfVar4 * fVar49;
                auVar42._12_4_ = auVar69._12_4_ + *pfVar6 * fVar49;
                uVar37 = uVar36;
                uVar39 = uVar38;
                auVar69 = auVar42;
              } while (uVar27 != 0);
            }
            iVar15 = (int)uVar25;
            uVar22 = uVar22 + uVar23;
            uVar25 = (ulong)(iVar15 + 1);
            *(undefined8 *)(param_1 + (uint)(iVar15 << 3) + 2) = uVar39;
            *(undefined8 *)(param_1 + (uint)(iVar15 << 3)) = uVar37;
            *(long *)(param_1 + (iVar15 << 3 | 4) + 2) = auVar42._8_8_;
            *(long *)(param_1 + (iVar15 << 3 | 4)) = auVar42._0_8_;
          } while (uVar25 < param_7);
          goto LAB_005d5080;
        }
        goto LAB_005d507c;
      }
      if (((param_3 & 0xff) != 6) || (param_7 == 0)) goto LAB_005d507c;
      uVar22 = 0;
      uVar25 = 0;
      do {
        if (uVar23 == 0) {
          fVar47 = 0.0;
          fVar50 = 0.0;
          fVar45 = 0.0;
          fVar49 = 0.0;
          auVar40 = ZEXT816(0);
          fVar35 = 0.0;
        }
        else {
          fVar35 = 0.0;
          auVar40 = ZEXT816(0);
          pfVar16 = local_10b0;
          fVar49 = 0.0;
          fVar45 = 0.0;
          fVar50 = 0.0;
          fVar47 = 0.0;
          uVar27 = uVar34;
          uVar26 = uVar22;
          do {
            fVar52 = param_4[uVar26];
            uVar27 = uVar27 - 1;
            uVar26 = uVar26 + 1;
            fVar47 = (float)NEON_fmadd(fVar52,*pfVar16,fVar47);
            fVar50 = (float)NEON_fmadd(fVar52,pfVar16[0x20],fVar50);
            pfVar18 = pfVar16 + 0xa0;
            fVar45 = (float)NEON_fmadd(fVar52,pfVar16[0x40],fVar45);
            fVar49 = (float)NEON_fmadd(fVar52,pfVar16[0x60],fVar49);
            auVar40._0_4_ = NEON_fmadd(fVar52,pfVar16[0x80],auVar40._0_4_);
            pfVar16 = pfVar16 + 1;
            fVar35 = (float)NEON_fmadd(fVar52,*pfVar18,fVar35);
          } while (uVar27 != 0);
        }
        iVar15 = (int)uVar25;
        uVar25 = (ulong)(iVar15 + 1);
        uVar22 = uVar22 + uVar23;
        uVar26 = iVar15 * 6;
        param_1[iVar15 * 6 | 1] = fVar50;
        param_1[uVar26 + 2] = fVar45;
        param_1[uVar26 + 3] = fVar49;
        param_1[uVar26 + 4] = auVar40._0_4_;
        param_1[uVar26] = fVar47;
        param_1[uVar26 + 5] = fVar35;
      } while (uVar25 < param_7);
    }
LAB_005d5080:
    if (uVar25 < param_7) {
      iVar24 = (int)uVar25;
      uVar22 = iVar24 * uVar23;
      iVar15 = 0;
      param_6 = param_6 & 0x7ffffff8;
      do {
        if (param_3 != 0) {
          uVar27 = 0;
          pfVar16 = local_10b0;
          puVar17 = auStack_10a0;
          do {
            fVar35 = 0.0;
            fVar49 = 0.0;
            if (uVar23 != 0) {
              puVar19 = puVar17;
              uVar21 = param_6;
              uVar26 = uVar22;
              if ((CARRY4((iVar24 + iVar15) * uVar23,(uint)(uVar34 - 1)) || uVar34 - 1 >> 0x20 != 0)
                  || uVar23 < 8) {
                uVar21 = 0;
                fVar49 = fVar35;
              }
              else {
                do {
                  pfVar18 = param_4 + uVar26;
                  uVar21 = uVar21 - 8;
                  fVar49 = fVar35 + (float)*(undefined8 *)pfVar18 * *(float *)(puVar19 + -2) +
                           (float)((ulong)*(undefined8 *)pfVar18 >> 0x20) *
                           *(float *)((long)puVar19 + -0xc) +
                           (float)*(undefined8 *)(pfVar18 + 2) * *(float *)(puVar19 + -1) +
                           (float)((ulong)*(undefined8 *)(pfVar18 + 2) >> 0x20) *
                           *(float *)((long)puVar19 + -4) +
                           (float)*(undefined8 *)(pfVar18 + 4) * (float)*puVar19 +
                           (float)((ulong)*(undefined8 *)(pfVar18 + 4) >> 0x20) *
                           (float)((ulong)*puVar19 >> 0x20) +
                           (float)*(undefined8 *)(pfVar18 + 6) * (float)puVar19[1] +
                           (float)((ulong)*(undefined8 *)(pfVar18 + 6) >> 0x20) *
                           (float)((ulong)puVar19[1] >> 0x20);
                  puVar19 = puVar19 + 4;
                  uVar26 = uVar26 + 8;
                  fVar35 = fVar49;
                } while (uVar21 != 0);
                uVar21 = param_6;
                if (param_6 == uVar34) goto LAB_005d50f4;
              }
              lVar20 = uVar34 - uVar21;
              uVar26 = uVar22 + (int)uVar21;
              pfVar18 = pfVar16 + uVar21;
              do {
                uVar21 = (ulong)uVar26;
                lVar20 = lVar20 + -1;
                uVar26 = uVar26 + 1;
                fVar49 = (float)NEON_fmadd(param_4[uVar21],*pfVar18,fVar49);
                pfVar18 = pfVar18 + 1;
              } while (lVar20 != 0);
            }
LAB_005d50f4:
            iVar32 = (int)uVar27;
            uVar27 = uVar27 + 1;
            puVar17 = puVar17 + 0x10;
            pfVar16 = pfVar16 + 0x20;
            param_1[(int)uVar25 * param_3 + iVar32] = fVar49;
          } while (uVar27 != uVar33);
        }
        uVar25 = (ulong)((int)uVar25 + 1);
        iVar15 = iVar15 + 1;
        uVar22 = uVar22 + uVar23;
      } while (uVar25 < param_7);
    }
    goto LAB_005d53d0;
  }
  if (((param_1 == (float *)0x0) || (param_3 == 0)) || (param_4 == (float *)0x0)) goto LAB_005d53d0;
  if (param_9 == 2) {
    if (1 < param_3) {
      uVar34 = 0;
      uVar23 = 0xffffffff;
      uVar22 = 0xffffffff;
      do {
        uVar29 = (uint)uVar34;
        uVar26 = uVar23;
        uVar30 = uVar22;
        if (param_2 != (char *)0x0) {
          uVar31 = (uint)(byte)param_2[uVar34];
          goto LAB_005d3f1c;
        }
        if (uVar29 < param_3) {
          if ((int)param_3 < 5) {
            if (1 < param_3 - 1) {
              if (param_3 == 3) {
                uVar31 = uVar29 + 2;
LAB_005d3f1c:
                uVar26 = uVar29;
                if ((uVar31 & 0xff) != 0xb) {
                  uVar26 = uVar23;
                }
              }
              else {
                if (param_3 == 4) {
                  uVar31 = 0xa040302 >> (ulong)((uVar29 & 3) << 3);
                  goto LAB_005d3f1c;
                }
LAB_005d3f9c:
                if (uVar29 < 8) {
                  uVar31 = (uint)(0xc0b070605040302 >> ((ulong)(uVar29 << 3) & 0x3f));
                  goto LAB_005d3f1c;
                }
                if (0x1f < uVar29) goto LAB_005d3f34;
                uVar31 = uVar29 + 0xc;
              }
              uVar30 = uVar29;
              if ((uVar31 & 0xff) != 0xc) {
                uVar30 = uVar22;
              }
            }
          }
          else if (param_3 != 5) {
            if (param_3 == 6) {
              uVar31 = (uint)(0xc0b05040302 >> ((ulong)(uVar29 << 3) & 0x3f));
            }
            else {
              if (param_3 != 7) goto LAB_005d3f9c;
              uVar31 = (uint)(0xc0b0a05040302 >> ((ulong)(uVar29 << 3) & 0x3f));
            }
            goto LAB_005d3f1c;
          }
        }
LAB_005d3f34:
        uVar34 = uVar34 + 1;
        uVar23 = uVar26;
        uVar22 = uVar30;
      } while (uVar34 != uVar33);
      if (param_2 == (char *)0x0) {
        if (param_3 != 1) {
          if (param_3 == 2) {
            uVar23 = 0;
            uVar22 = 1;
            goto LAB_005d48a0;
          }
          uVar23 = 0;
          uVar22 = 1;
        }
LAB_005d51c8:
        uVar34 = 2;
        uVar25 = 0x10;
        do {
          uVar29 = (uint)uVar34;
          uVar26 = uVar23;
          uVar30 = uVar22;
          if (param_2 == (char *)0x0) {
            if (uVar29 < param_3) {
              if (3 < (int)param_3) {
                if ((int)param_3 < 6) {
                  if (param_3 == 4) {
                    uVar31 = 0xa040302 >> (ulong)((uint)uVar25 & 0x1f);
                  }
                  else if (param_3 == 5) {
                    uVar31 = (uint)(0x706040302 >> (uVar25 & 0x3f));
                  }
                  else {
LAB_005d5274:
                    if (7 < uVar29) goto LAB_005d51f8;
                    uVar31 = (uint)(0xc0b070605040302 >> (uVar25 & 0x38));
                  }
                }
                else if (param_3 == 6) {
                  uVar31 = (uint)(0xc0b05040302 >> (uVar25 & 0x3f));
                }
                else {
                  if (param_3 != 7) goto LAB_005d5274;
                  uVar31 = (uint)(0xc0b0a05040302 >> (uVar25 & 0x3f));
                }
                goto LAB_005d51e4;
              }
              if (param_3 != 1) {
                if (param_3 != 2) {
                  if (param_3 != 3) goto LAB_005d5274;
                  uVar31 = uVar29 + 2;
                  goto LAB_005d51e4;
                }
                uVar26 = 0;
                if (uVar29 != 0) {
                  uVar26 = uVar23;
                }
              }
            }
          }
          else {
            uVar31 = (uint)(byte)param_2[uVar34];
LAB_005d51e4:
            uVar26 = uVar29;
            if ((uVar31 & 0xff) != 2) {
              uVar26 = uVar23;
            }
            uVar30 = uVar29;
            if ((uVar31 & 0xff) != 3) {
              uVar30 = uVar22;
            }
          }
LAB_005d51f8:
          uVar22 = uVar30;
          uVar23 = uVar26;
          uVar34 = uVar34 + 1;
          uVar25 = uVar25 + 8;
        } while (uVar33 != uVar34);
      }
      else {
        uVar23 = 0;
        if (*param_2 != '\x02') {
          uVar23 = uVar26;
        }
        uVar22 = 0;
        if (*param_2 != '\x03') {
          uVar22 = uVar30;
        }
        if (param_2[1] == '\x02') {
          uVar23 = 1;
        }
        if (param_2[1] == '\x03') {
          uVar22 = 1;
        }
        if (param_3 != 2) goto LAB_005d51c8;
      }
LAB_005d48a0:
      if ((uVar23 != 0xffffffff) && (uVar22 != 0xffffffff)) {
        if (param_7 != 0) {
          uVar34 = 0;
          do {
            uVar27 = 0;
            uVar25 = 0;
            do {
              if (param_2 == (char *)0x0) {
                uVar26 = (uint)uVar25;
                if (uVar26 < param_3) {
                  if (3 < (int)param_3) {
                    if ((int)param_3 < 6) {
                      if (param_3 == 4) {
                        uVar21 = (ulong)(0xa040302 >> (ulong)((uint)uVar27 & 0x1f));
                      }
                      else if (param_3 == 5) {
                        uVar21 = 0x706040302 >> (uVar27 & 0x3f);
                      }
                      else {
LAB_005d49ac:
                        if (7 < uVar26) {
                          if (0x1f < uVar26) goto LAB_005d4910;
                          goto LAB_005d4930;
                        }
                        uVar21 = 0xc0b070605040302 >> (uVar27 & 0x38);
                      }
                    }
                    else if (param_3 == 6) {
                      uVar21 = 0xc0b05040302 >> (uVar27 & 0x3f);
                    }
                    else {
                      if (param_3 != 7) goto LAB_005d49ac;
                      uVar21 = 0xc0b0a05040302 >> (uVar27 & 0x3f);
                    }
                    goto LAB_005d4928;
                  }
                  if (param_3 != 1) {
                    if (param_3 == 2) {
                      uVar30 = 3;
                      if (uVar26 != 1) {
                        uVar30 = 0;
                      }
                      uVar21 = (ulong)uVar30;
                      if (uVar26 != 0) goto LAB_005d4928;
                    }
                    else if (param_3 != 3) goto LAB_005d49ac;
                  }
                  goto LAB_005d4930;
                }
              }
              else {
                uVar21 = (ulong)(byte)param_2[uVar25];
LAB_005d4928:
                if ((uVar21 & 0xff) != 0) {
LAB_005d4930:
                  if ((uVar23 == uVar25) || (fVar35 = 0.0, uVar22 == uVar25)) {
                    fVar35 = *param_4;
                  }
                  param_1[uVar25] = fVar35;
                }
              }
LAB_005d4910:
              uVar25 = uVar25 + 1;
              uVar27 = uVar27 + 8;
            } while (uVar33 != uVar25);
            uVar34 = uVar34 + 1;
            param_4 = param_4 + 1;
            param_1 = param_1 + uVar33;
          } while (uVar34 != param_7);
        }
        goto LAB_005d53d0;
      }
      goto LAB_005d49ec;
    }
  }
  else {
    if (param_9 == 1) {
      if (param_2 == (char *)0x0) {
        if (param_3 < 8) {
          uVar23 = *(uint *)(&DAT_002534e4 + uVar33 * 4);
          if (param_3 != 1) {
            uVar22 = *(uint *)(&DAT_002534e4 + uVar33 * 4);
            goto LAB_005d4608;
          }
        }
        else {
          uVar23 = 2;
LAB_005d476c:
          uVar34 = 2;
          uVar25 = 0x10;
          do {
            if (param_2 == (char *)0x0) {
              uVar22 = (uint)uVar34;
              if (uVar22 < param_3) {
                if ((int)param_3 < 4) {
                  uVar27 = 1;
                  if (param_3 != 1) {
                    if (param_3 == 2) {
                      uVar27 = (ulong)(uVar22 == 0) << 1;
                    }
                    else if (param_3 != 3) goto LAB_005d4848;
                  }
                }
                else if ((int)param_3 < 6) {
                  if (param_3 == 4) {
                    uVar27 = (ulong)(0xa040302 >> (ulong)((uint)uVar25 & 0x1f));
                  }
                  else if (param_3 == 5) {
                    uVar27 = 0x706040302 >> (uVar25 & 0x3f);
                  }
                  else {
LAB_005d4848:
                    if (uVar22 < 8) {
                      uVar27 = 0xc0b070605040302 >> (uVar25 & 0x38);
                    }
                    else {
                      uVar27 = (ulong)(uVar22 < 0x20);
                    }
                  }
                }
                else if (param_3 == 6) {
                  uVar27 = 0xc0b05040302 >> (uVar25 & 0x3f);
                }
                else {
                  if (param_3 != 7) goto LAB_005d4848;
                  uVar27 = 0xc0b0a05040302 >> (uVar25 & 0x3f);
                }
              }
              else {
                uVar27 = 0;
              }
            }
            else {
              uVar27 = (ulong)(byte)param_2[uVar34];
            }
            uVar34 = uVar34 + 1;
            uVar25 = uVar25 + 8;
            if ((uVar27 & 0xff) != 0) {
              uVar23 = uVar23 + 1;
            }
          } while (uVar33 != uVar34);
        }
      }
      else {
        uVar23 = (uint)(*param_2 != '\0');
        if (param_3 != 1) {
          uVar22 = (uint)(param_2[1] != '\0');
LAB_005d4608:
          uVar23 = uVar23 + uVar22;
          if (param_3 != 2) goto LAB_005d476c;
        }
      }
      if (param_7 != 0) {
        uVar34 = 0;
        do {
          uVar27 = 0;
          uVar25 = 0;
          do {
            if (param_2 == (char *)0x0) {
              uVar22 = (uint)uVar25;
              if (uVar22 < param_3) {
                if (3 < (int)param_3) {
                  if ((int)param_3 < 6) {
                    if (param_3 == 4) {
                      uVar21 = (ulong)(0xa040302 >> (ulong)((uint)uVar27 & 0x1f));
                    }
                    else if (param_3 == 5) {
                      uVar21 = 0x706040302 >> (uVar27 & 0x3f);
                    }
                    else {
LAB_005d4728:
                      if (7 < uVar22) {
                        if (0x1f < uVar22) goto LAB_005d46a0;
                        goto LAB_005d4694;
                      }
                      uVar21 = 0xc0b070605040302 >> (uVar27 & 0x38);
                    }
                  }
                  else if (param_3 == 6) {
                    uVar21 = 0xc0b05040302 >> (uVar27 & 0x3f);
                  }
                  else {
                    if (param_3 != 7) goto LAB_005d4728;
                    uVar21 = 0xc0b0a05040302 >> (uVar27 & 0x3f);
                  }
                  goto LAB_005d46b8;
                }
                if (param_3 != 1) {
                  if (param_3 == 2) {
                    uVar26 = 3;
                    if (uVar22 != 1) {
                      uVar26 = 0;
                    }
                    uVar21 = (ulong)uVar26;
                    if (uVar22 != 0) goto LAB_005d46b8;
                  }
                  else if (param_3 != 3) goto LAB_005d4728;
                }
                goto LAB_005d4694;
              }
            }
            else {
              uVar21 = (ulong)(byte)param_2[uVar25];
LAB_005d46b8:
              if ((uVar21 & 0xff) != 0) {
LAB_005d4694:
                param_1[uVar25] = (1.0 / (float)uVar23) * *param_4;
              }
            }
LAB_005d46a0:
            uVar25 = uVar25 + 1;
            uVar27 = uVar27 + 8;
          } while (uVar33 != uVar25);
          uVar34 = uVar34 + 1;
          param_4 = param_4 + 1;
          param_1 = param_1 + uVar33;
        } while (uVar34 != param_7);
      }
      goto LAB_005d53d0;
    }
LAB_005d49ec:
    if (0xfe < param_3) {
      if (param_7 != 0) {
        uVar34 = 0;
        do {
          uVar25 = 0;
          lVar20 = 0;
          do {
            if (param_2 == (char *)0x0) {
              uVar23 = (uint)lVar20;
              if (uVar23 < param_3) {
                if (3 < (int)param_3) {
                  if ((int)param_3 < 6) {
                    if (param_3 == 4) {
                      uVar23 = 0xa040302U >> (ulong)((uint)uVar25 & 0x1f) & 0xff;
                    }
                    else {
                      if (param_3 != 5) goto LAB_005d4c98;
                      uVar23 = (uint)(0x706040302 >> (uVar25 & 0x3f)) & 0xff;
                    }
                  }
                  else if (param_3 == 6) {
                    uVar23 = (uint)(0xc0b05040302 >> (uVar25 & 0x3f)) & 0xff;
                  }
                  else {
                    if (param_3 != 7) goto LAB_005d4c98;
                    uVar23 = (uint)(0xc0b0a05040302 >> (uVar25 & 0x3f)) & 0xff;
                  }
                  goto LAB_005d4c28;
                }
                if (2 < param_3 - 1) {
LAB_005d4c98:
                  if (uVar23 < 8) {
                    uVar23 = (uint)(0xc0b070605040302 >> (uVar25 & 0x38)) & 0xff;
                    goto LAB_005d4c28;
                  }
                  if (0x1f < uVar23) goto LAB_005d4c10;
                }
                goto LAB_005d4c08;
              }
            }
            else {
              uVar23 = (uint)(byte)param_2[lVar20];
LAB_005d4c28:
              if (uVar23 != 0) {
LAB_005d4c08:
                param_1[lVar20] = param_4[uVar34];
              }
            }
LAB_005d4c10:
            uVar25 = uVar25 + 8;
            lVar20 = lVar20 + 1;
          } while (uVar33 << 3 != uVar25);
          uVar34 = uVar34 + 1;
          param_1 = param_1 + uVar33;
        } while (uVar34 != param_7);
      }
      goto LAB_005d53d0;
    }
  }
  uVar34 = 0;
  bVar14 = true;
  do {
    uVar25 = uVar34 << 3;
LAB_005d4a6c:
    if (param_2 != (char *)0x0) {
      uVar27 = (ulong)(byte)param_2[uVar34];
LAB_005d4a50:
      *(char *)((long)local_10b0 + uVar34) = (char)uVar27;
      if ((uVar27 & 0xff) == 0) goto LAB_005d4b3c;
LAB_005d4a5c:
      uVar34 = uVar34 + 1;
      uVar25 = uVar25 + 8;
      if (uVar33 != uVar34) goto LAB_005d4a6c;
      if (!bVar14) break;
      if (param_3 == 2) {
        if (param_7 != 0) {
          if (param_7 < 0x10) {
            uVar33 = 0;
          }
          else {
            uVar34 = param_7 - 1;
            uVar33 = 0;
            if (((param_1 <= param_1 + uVar34 * 2) && (param_1 + 1 <= param_1 + 1 + uVar34 * 2)) &&
               (uVar34 >> 0x3d == 0)) {
              uVar33 = param_7 & 0xfffffffffffffff8;
              pfVar16 = param_4 + 4;
              pfVar18 = param_1 + 8;
              uVar34 = uVar33;
              do {
                uVar38 = *(undefined8 *)(pfVar16 + -2);
                uVar36 = *(undefined8 *)(pfVar16 + -4);
                uVar39 = *(undefined8 *)(pfVar16 + 2);
                uVar37 = *(undefined8 *)pfVar16;
                uVar34 = uVar34 - 8;
                pfVar16 = pfVar16 + 8;
                fVar35 = (float)uVar37;
                *pfVar18 = fVar35;
                pfVar18[1] = fVar35;
                fVar35 = (float)((ulong)uVar37 >> 0x20);
                pfVar18[2] = fVar35;
                pfVar18[3] = fVar35;
                fVar35 = (float)uVar39;
                pfVar18[4] = fVar35;
                pfVar18[5] = fVar35;
                fVar35 = (float)((ulong)uVar39 >> 0x20);
                pfVar18[6] = fVar35;
                pfVar18[7] = fVar35;
                fVar35 = (float)uVar36;
                pfVar18[-8] = fVar35;
                pfVar18[-7] = fVar35;
                fVar35 = (float)((ulong)uVar36 >> 0x20);
                pfVar18[-6] = fVar35;
                pfVar18[-5] = fVar35;
                fVar35 = (float)uVar38;
                pfVar18[-4] = fVar35;
                pfVar18[-3] = fVar35;
                fVar35 = (float)((ulong)uVar38 >> 0x20);
                pfVar18[-2] = fVar35;
                pfVar18[-1] = fVar35;
                pfVar18 = pfVar18 + 0x10;
              } while (uVar34 != 0);
              if (uVar33 == param_7) goto LAB_005d53d0;
            }
          }
          lVar20 = param_7 - uVar33;
          param_1 = param_1 + uVar33 * 2 + 1;
          pfVar16 = param_4 + uVar33;
          do {
            fVar35 = *pfVar16;
            lVar20 = lVar20 + -1;
            param_1[-1] = fVar35;
            *param_1 = fVar35;
            param_1 = param_1 + 2;
            pfVar16 = pfVar16 + 1;
          } while (lVar20 != 0);
        }
        goto LAB_005d53d0;
      }
      if (param_3 != 6) {
        if (param_3 == 8) {
          if (param_7 != 0) {
            param_1 = param_1 + 4;
            do {
              fVar35 = *param_4;
              param_4 = param_4 + 1;
              param_7 = param_7 - 1;
              *(ulong *)(param_1 + -2) = CONCAT44(fVar35,fVar35);
              *(ulong *)(param_1 + -4) = CONCAT44(fVar35,fVar35);
              *(ulong *)(param_1 + 2) = CONCAT44(fVar35,fVar35);
              *(ulong *)param_1 = CONCAT44(fVar35,fVar35);
              param_1 = param_1 + 8;
            } while (param_7 != 0);
          }
          goto LAB_005d53d0;
        }
        if (param_7 == 0) goto LAB_005d53d0;
        uVar34 = 0;
        uVar25 = uVar33 & 0xfffffff8;
        pfVar16 = param_1 + 4;
        goto LAB_005d4f78;
      }
      if (param_7 == 0) goto LAB_005d53d0;
      uVar33 = param_7 - 1;
      if (uVar33 == 0) {
        uVar34 = 0;
        goto LAB_005d4ee0;
      }
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar33;
      uVar34 = 0;
      if ((((SUB168(auVar9 * ZEXT816(0x18),8) != 0) || (param_1 + uVar33 * 6 < param_1)) ||
          (param_1 + 3 + uVar33 * 6 < param_1 + 3)) ||
         (((param_1 + 4 + uVar33 * 6 < param_1 + 4 || (param_1 + 5 + uVar33 * 6 < param_1 + 5)) ||
          ((param_1 + 2 + uVar33 * 6 < param_1 + 2 || (param_1 + 1 + uVar33 * 6 < param_1 + 1))))))
      goto LAB_005d4ee0;
      uVar34 = param_7 & 0xfffffffffffffffe;
      pfVar16 = param_1 + 8;
      pfVar18 = param_4;
      uVar33 = uVar34;
      do {
        uVar37 = *(undefined8 *)pfVar18;
        uVar33 = uVar33 - 2;
        fVar35 = (float)uVar37;
        *(ulong *)(pfVar16 + -6) = CONCAT44(fVar35,fVar35);
        *(ulong *)(pfVar16 + -8) = CONCAT44(fVar35,fVar35);
        pfVar16[-4] = fVar35;
        pfVar16[-3] = fVar35;
        fVar35 = (float)((ulong)uVar37 >> 0x20);
        pfVar16[-2] = fVar35;
        pfVar16[-1] = fVar35;
        *(ulong *)(pfVar16 + 2) = CONCAT44(fVar35,fVar35);
        *(ulong *)pfVar16 = CONCAT44(fVar35,fVar35);
        pfVar16 = pfVar16 + 0xc;
        pfVar18 = pfVar18 + 2;
      } while (uVar33 != 0);
      if (uVar34 != param_7) {
LAB_005d4ee0:
        lVar20 = param_7 - uVar34;
        param_1 = param_1 + uVar34 * 6 + 5;
        pfVar16 = param_4 + uVar34;
        do {
          fVar35 = *pfVar16;
          lVar20 = lVar20 + -1;
          param_1[-1] = fVar35;
          *param_1 = fVar35;
          param_1[-1] = fVar35;
          *param_1 = fVar35;
          param_1[-5] = fVar35;
          param_1[-4] = fVar35;
          param_1 = param_1 + 6;
          pfVar16 = pfVar16 + 1;
        } while (lVar20 != 0);
      }
      goto LAB_005d53d0;
    }
    uVar23 = (uint)uVar34;
    if (uVar23 < param_3) {
      if (3 < (int)param_3) {
        if ((int)param_3 < 6) {
          if (param_3 == 4) {
            uVar27 = (ulong)(0xa040302 >> (ulong)((uint)uVar25 & 0x1f));
          }
          else if (param_3 == 5) {
            uVar27 = 0x706040302 >> (uVar25 & 0x3f);
          }
          else {
LAB_005d4ae8:
            if (7 < uVar23) {
              if (0x1f < uVar23) goto LAB_005d4b38;
              *(char *)((long)local_10b0 + uVar34) = (char)uVar34 + '\f';
              goto LAB_005d4a5c;
            }
            uVar27 = 0xc0b070605040302 >> (uVar25 & 0x38);
          }
        }
        else if (param_3 == 6) {
          uVar27 = 0xc0b05040302 >> (uVar25 & 0x3f);
        }
        else {
          if (param_3 != 7) goto LAB_005d4ae8;
          uVar27 = 0xc0b0a05040302 >> (uVar25 & 0x3f);
        }
        goto LAB_005d4a50;
      }
      if (param_3 == 1) {
        *(undefined1 *)((long)local_10b0 + uVar34) = 1;
      }
      else if (param_3 == 2) {
        uVar22 = 3;
        if (uVar23 != 1) {
          uVar22 = 0;
        }
        uVar27 = (ulong)uVar22;
        if (uVar23 != 0) goto LAB_005d4a50;
        *(undefined1 *)((long)local_10b0 + uVar34) = 2;
      }
      else {
        if (param_3 != 3) goto LAB_005d4ae8;
        *(char *)((long)local_10b0 + uVar34) = (char)uVar34 + '\x02';
      }
      goto LAB_005d4a5c;
    }
LAB_005d4b38:
    *(undefined1 *)((long)local_10b0 + uVar34) = 0;
LAB_005d4b3c:
    uVar34 = uVar34 + 1;
    bVar14 = false;
  } while (uVar34 != uVar33);
  if (param_7 != 0) {
    uVar34 = 0;
    do {
      pfVar18 = local_10b0;
      pfVar16 = param_1;
      uVar25 = uVar33;
      do {
        if (*(char *)pfVar18 != '\0') {
          *pfVar16 = param_4[uVar34];
        }
        uVar25 = uVar25 - 1;
        pfVar16 = pfVar16 + 1;
        pfVar18 = (float *)((long)pfVar18 + 1);
      } while (uVar25 != 0);
      uVar34 = uVar34 + 1;
      param_1 = param_1 + uVar33;
    } while (uVar34 != param_7);
  }
LAB_005d53d0:
  if (*(long *)(lVar10 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_005d4f78:
  do {
    fVar35 = param_4[uVar34];
    if (param_3 < 8) {
      uVar27 = 0;
LAB_005d4fb4:
      lVar20 = uVar33 - uVar27;
      pfVar18 = param_1 + uVar27;
      do {
        lVar20 = lVar20 + -1;
        *pfVar18 = fVar35;
        pfVar18 = pfVar18 + 1;
      } while (lVar20 != 0);
    }
    else {
      auVar41._0_8_ = CONCAT44(fVar35,fVar35);
      auVar41._8_4_ = fVar35;
      auVar41._12_4_ = fVar35;
      pfVar18 = pfVar16;
      uVar27 = uVar25;
      do {
        *(long *)(pfVar18 + -2) = auVar41._8_8_;
        *(undefined8 *)(pfVar18 + -4) = auVar41._0_8_;
        *(long *)(pfVar18 + 2) = auVar41._8_8_;
        *(undefined8 *)pfVar18 = auVar41._0_8_;
        uVar27 = uVar27 - 8;
        pfVar18 = pfVar18 + 8;
      } while (uVar27 != 0);
      uVar27 = uVar25;
      if (uVar25 != uVar33) goto LAB_005d4fb4;
    }
    uVar34 = uVar34 + 1;
    pfVar16 = pfVar16 + uVar33;
    param_1 = param_1 + uVar33;
  } while (uVar34 != param_7);
  goto LAB_005d53d0;
}


// ===== 005d55d4  ma_spatializer_get_relative_position_and_direction =====

void ma_spatializer_get_relative_position_and_direction
               (long param_1,long param_2,float *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  
  if (param_3 != (float *)0x0) {
    param_3[0] = 0.0;
    param_3[1] = 0.0;
    param_3[2] = 0.0;
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = 0;
    *(undefined4 *)(param_4 + 1) = 0xbf800000;
  }
  if (param_1 != 0) {
    if ((param_2 == 0) || ((int)*(undefined8 *)(param_1 + 0x14) == 1)) {
      if (param_3 != (float *)0x0) {
        iVar1 = FUN_00341150(1,(undefined4 *)(param_1 + 0x54));
        while (iVar1 != 0) {
          do {
          } while (*(int *)(param_1 + 0x54) == 1);
          iVar1 = FUN_00341150(1,param_1 + 0x54);
        }
        fVar4 = *(float *)(param_1 + 0x50);
        *(undefined4 *)(param_1 + 0x54) = 0;
        *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 0x48);
        param_3[2] = fVar4;
      }
      if (param_4 == (undefined8 *)0x0) {
        return;
      }
      iVar1 = FUN_00341150(1,(undefined4 *)(param_1 + 100));
      while (iVar1 != 0) {
        do {
        } while (*(int *)(param_1 + 100) == 1);
        iVar1 = FUN_00341150(1,param_1 + 100);
      }
      uVar5 = *(undefined4 *)(param_1 + 0x60);
      *(undefined4 *)(param_1 + 100) = 0;
      *param_4 = *(undefined8 *)(param_1 + 0x58);
    }
    else {
      iVar1 = FUN_00341150(1,(undefined4 *)(param_1 + 0x54));
      while (iVar1 != 0) {
        do {
        } while (*(int *)(param_1 + 0x54) == 1);
        iVar1 = FUN_00341150(1,param_1 + 0x54);
      }
      uVar15 = *(undefined4 *)(param_1 + 0x48);
      fVar4 = *(float *)(param_1 + 0x4c);
      uVar5 = *(undefined4 *)(param_1 + 0x50);
      *(undefined4 *)(param_1 + 0x54) = 0;
      iVar1 = FUN_00341150(1,(undefined4 *)(param_1 + 100));
      while (iVar1 != 0) {
        do {
        } while (*(int *)(param_1 + 100) == 1);
        iVar1 = FUN_00341150(1,param_1 + 100);
      }
      uVar17 = *(undefined4 *)(param_1 + 0x58);
      fVar18 = *(float *)(param_1 + 0x5c);
      uVar16 = *(undefined4 *)(param_1 + 0x60);
      *(undefined4 *)(param_1 + 100) = 0;
      iVar1 = FUN_00341150(1,(undefined4 *)(param_2 + 0x3c));
      while (iVar1 != 0) {
        do {
        } while (*(int *)(param_2 + 0x3c) == 1);
        iVar1 = FUN_00341150(1,param_2 + 0x3c);
      }
      uVar20 = *(undefined4 *)(param_2 + 0x30);
      fVar14 = *(float *)(param_2 + 0x34);
      uVar19 = *(undefined4 *)(param_2 + 0x38);
      *(undefined4 *)(param_2 + 0x3c) = 0;
      iVar1 = FUN_00341150(1,(undefined4 *)(param_2 + 0x4c));
      while (iVar1 != 0) {
        do {
        } while (*(int *)(param_2 + 0x4c) == 1);
        iVar1 = FUN_00341150(1,param_2 + 0x4c);
      }
      fVar11 = *(float *)(param_2 + 0x40);
      fVar9 = *(float *)(param_2 + 0x44);
      fVar8 = 0.0;
      fVar12 = *(float *)(param_2 + 0x48);
      fVar6 = 0.0;
      fVar7 = 0.0;
      *(undefined4 *)(param_2 + 0x4c) = 0;
      uVar2 = NEON_fmadd(fVar11,fVar11,fVar9 * fVar9);
      fVar13 = (float)NEON_fmadd(fVar12,fVar12,uVar2);
      fVar3 = 0.0;
      if (fVar13 != 0.0) {
        fVar7 = 1.0 / SQRT(fVar13);
        fVar6 = fVar11 * fVar7;
        fVar3 = fVar9 * fVar7;
        fVar7 = fVar12 * fVar7;
      }
      fVar12 = (float)NEON_fmadd(fVar7,*(float *)(param_2 + 0x24),
                                 -(fVar6 * *(float *)(param_2 + 0x2c)));
      fVar13 = (float)NEON_fmadd(fVar3,*(float *)(param_2 + 0x2c),
                                 -(fVar7 * *(float *)(param_2 + 0x28)));
      fVar21 = (float)NEON_fmadd(fVar6,*(float *)(param_2 + 0x28),
                                 -(fVar3 * *(float *)(param_2 + 0x24)));
      uVar2 = NEON_fmadd(fVar13,fVar13,fVar12 * fVar12);
      fVar11 = 0.0;
      fVar22 = (float)NEON_fmadd(fVar21,fVar21,uVar2);
      fVar9 = 0.0;
      if (fVar22 != 0.0) {
        fVar11 = 1.0 / SQRT(fVar22);
        fVar8 = fVar13 * fVar11;
        fVar9 = fVar12 * fVar11;
        fVar11 = fVar21 * fVar11;
      }
      uVar2 = NEON_fmadd(fVar8,fVar8,fVar9 * fVar9);
      fVar13 = (float)NEON_fmadd(fVar11,fVar11,uVar2);
      fVar12 = 1.0;
      if (fVar13 != 0.0) {
        fVar12 = fVar8;
      }
      fVar21 = 0.0;
      fVar8 = 0.0;
      if (fVar13 != 0.0) {
        fVar21 = fVar9;
        fVar8 = fVar11;
      }
      fVar13 = -fVar7;
      uVar10 = NEON_fmadd(fVar21,fVar7,-(fVar8 * fVar3));
      fVar11 = -fVar6;
      fVar22 = (float)NEON_fmadd(fVar8,fVar6,-(fVar12 * fVar7));
      fVar9 = -fVar3;
      uVar2 = NEON_fmadd(fVar12,fVar3,-(fVar21 * fVar6));
      fVar7 = -fVar8;
      fVar3 = -fVar12;
      fVar6 = -fVar21;
      if (*(int *)(param_2 + 0x10) != 1) {
        fVar7 = fVar8;
        fVar3 = fVar12;
        fVar6 = fVar21;
      }
      if (param_3 != (float *)0x0) {
        uVar23 = NEON_fmadd(fVar3,uVar20,fVar14 * fVar6);
        uVar24 = NEON_fmadd(fVar3,uVar15,fVar4 * fVar6);
        uVar25 = NEON_fmadd(uVar10,uVar20,fVar14 * fVar22);
        uVar26 = NEON_fmadd(uVar10,uVar15,fVar4 * fVar22);
        uVar20 = NEON_fmadd(fVar11,uVar20,fVar14 * fVar9);
        uVar15 = NEON_fmadd(fVar11,uVar15,fVar4 * fVar9);
        fVar4 = (float)NEON_fmadd(fVar7,uVar19,uVar23);
        fVar14 = (float)NEON_fmadd(fVar7,uVar5,uVar24);
        fVar8 = (float)NEON_fmadd(uVar2,uVar19,uVar25);
        fVar12 = (float)NEON_fmadd(uVar2,uVar5,uVar26);
        fVar21 = (float)NEON_fmadd(fVar13,uVar19,uVar20);
        fVar27 = (float)NEON_fmadd(fVar13,uVar5,uVar15);
        *param_3 = fVar14 - fVar4;
        param_3[1] = fVar12 - fVar8;
        param_3[2] = fVar27 - fVar21;
      }
      if (param_4 == (undefined8 *)0x0) {
        return;
      }
      uVar19 = NEON_fmadd(fVar3,uVar17,fVar18 * fVar6);
      uVar15 = NEON_fmadd(uVar10,uVar17,fVar18 * fVar22);
      uVar5 = NEON_fmadd(fVar11,uVar17,fVar18 * fVar9);
      uVar17 = NEON_fmadd(fVar7,uVar16,uVar19);
      uVar15 = NEON_fmadd(uVar2,uVar16,uVar15);
      uVar5 = NEON_fmadd(fVar13,uVar16,uVar5);
      *(undefined4 *)param_4 = uVar17;
      *(undefined4 *)((long)param_4 + 4) = uVar15;
    }
    *(undefined4 *)(param_4 + 1) = uVar5;
  }
  return;
}


// ===== 005d5978  ma_spatializer_get_min_distance =====

undefined4 ma_spatializer_get_min_distance(long param_1)

{
  if (param_1 != 0) {
    return (int)*(undefined8 *)(param_1 + 0x24);
  }
  return 0;
}


// ===== 005d5994  ma_spatializer_get_max_distance =====

undefined4 ma_spatializer_get_max_distance(long param_1)

{
  if (param_1 != 0) {
    return (int)*(undefined8 *)(param_1 + 0x28);
  }
  return 0;
}


// ===== 005d59b0  ma_spatializer_get_rolloff =====

undefined4 ma_spatializer_get_rolloff(long param_1)

{
  if (param_1 != 0) {
    return (int)*(undefined8 *)(param_1 + 0x2c);
  }
  return 0;
}


// ===== 005d59cc  ma_spatializer_get_doppler_factor =====

undefined1  [16] ma_spatializer_get_doppler_factor(long param_1)

{
  undefined1 auVar1 [16];
  
  if (param_1 != 0) {
    auVar1._0_8_ = *(ulong *)(param_1 + 0x3c) & 0xffffffff;
    auVar1._8_8_ = 0;
    return auVar1;
  }
  return ZEXT816(0x3f800000);
}


// ===== 005d59e8  ma_spatializer_get_positioning =====

long ma_spatializer_get_positioning(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0x14);
  }
  return param_1;
}


// ===== 005d59f8  ma_spatializer_get_position =====

undefined4 ma_spatializer_get_position(long param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = FUN_00341150(1,(undefined4 *)(param_1 + 0x54));
  while (iVar1 != 0) {
    do {
    } while (*(int *)(param_1 + 0x54) == 1);
    iVar1 = FUN_00341150(1,param_1 + 0x54);
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  return *(undefined4 *)(param_1 + 0x48);
}


// ===== 005d5a64  ma_spatializer_get_attenuation_model =====

long ma_spatializer_get_attenuation_model(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0x10);
  }
  return param_1;
}


// ===== 005d5a74  ma_spatializer_get_cone =====

void ma_spatializer_get_cone
               (long param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  if (param_1 != 0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = (int)*(undefined8 *)(param_1 + 0x30);
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = (int)*(undefined8 *)(param_1 + 0x34);
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = (int)*(undefined8 *)(param_1 + 0x38);
    }
  }
  return;
}


// ===== 005d5aac  ma_spatializer_get_min_gain =====

undefined4 ma_spatializer_get_min_gain(long param_1)

{
  if (param_1 != 0) {
    return (int)*(undefined8 *)(param_1 + 0x1c);
  }
  return 0;
}


// ===== 005d5ac8  ma_spatializer_get_max_gain =====

undefined4 ma_spatializer_get_max_gain(long param_1)

{
  if (param_1 != 0) {
    return (int)*(undefined8 *)(param_1 + 0x20);
  }
  return 0;
}


// ===== 005d5ae4  ma_channel_map_get_channel =====

ulong ma_channel_map_get_channel(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    if (param_3 < param_2) {
      if ((int)param_2 < 4) {
        if (param_2 == 1) {
          return 1;
        }
        if (param_2 == 2) {
          uVar2 = 3;
          if (param_3 != 1) {
            uVar2 = 0;
          }
          uVar1 = 2;
          if (param_3 != 0) {
            uVar1 = uVar2;
          }
          return (ulong)uVar1;
        }
        if (param_2 == 3) {
          return (ulong)(param_3 + 2);
        }
      }
      else if ((int)param_2 < 6) {
        if (param_2 == 4) {
          return (ulong)(0xa040302 >> (ulong)((param_3 & 3) << 3));
        }
        if (param_2 == 5) {
          return 0x706040302 >> ((ulong)(param_3 << 3) & 0x3f);
        }
      }
      else {
        if (param_2 == 6) {
          return 0xc0b05040302 >> ((ulong)(param_3 << 3) & 0x3f);
        }
        if (param_2 == 7) {
          return 0xc0b0a05040302 >> ((ulong)(param_3 << 3) & 0x3f);
        }
      }
      if (param_3 < 8) {
        return 0xc0b070605040302 >> ((ulong)(param_3 << 3) & 0x3f);
      }
      if (param_3 < 0x20) {
        return (ulong)(param_3 + 0xc);
      }
    }
  }
  else if (param_3 < param_2) {
    return (ulong)*(byte *)(param_1 + (ulong)param_3);
  }
  return 0;
}


// ===== 005d5c10  ma_spatializer_get_directional_attenuation_factor =====

undefined1  [16] ma_spatializer_get_directional_attenuation_factor(long param_1)

{
  undefined1 auVar1 [16];
  
  if (param_1 != 0) {
    auVar1._0_8_ = *(ulong *)(param_1 + 0x40) & 0xffffffff;
    auVar1._8_8_ = 0;
    return auVar1;
  }
  return ZEXT816(0x3f800000);
}


// ===== 005d5c2c  ma_spatializer_get_velocity =====

undefined4 ma_spatializer_get_velocity(long param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = FUN_00341150(1,(undefined4 *)(param_1 + 0x74));
  while (iVar1 != 0) {
    do {
    } while (*(int *)(param_1 + 0x74) == 1);
    iVar1 = FUN_00341150(1,param_1 + 0x74);
  }
  *(undefined4 *)(param_1 + 0x74) = 0;
  return *(undefined4 *)(param_1 + 0x68);
}


// ===== 005d5c98  ma_spatializer_set_master_volume =====

undefined8 ma_spatializer_set_master_volume(undefined4 param_1,long param_2)

{
  if (param_2 != 0) {
    *(undefined4 *)(param_2 + 0x8c) = param_1;
    return 0;
  }
  return 0xfffffffe;
}


// ===== 005d5cb4  ma_spatializer_get_master_volume =====

undefined8 ma_spatializer_get_master_volume(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffe;
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    uVar1 = 0;
    *param_2 = *(undefined4 *)(param_1 + 0x8c);
  }
  return uVar1;
}


// ===== 005d5cd4  ma_spatializer_get_input_channels =====

uint * ma_spatializer_get_input_channels(uint *param_1)

{
  if (param_1 != (uint *)0x0) {
    param_1 = (uint *)(ulong)*param_1;
  }
  return param_1;
}


// ===== 005d5ce0  ma_spatializer_get_output_channels =====

ulong ma_spatializer_get_output_channels(ulong param_1)

{
  if (param_1 != 0) {
    param_1 = (ulong)*(uint *)(param_1 + 4);
  }
  return param_1;
}


// ===== 005d5cec  ma_spatializer_set_attenuation_model =====

void ma_spatializer_set_attenuation_model(long param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    FUN_003410a0(param_2,param_1 + 0x10);
  }
  return;
}


// ===== 005d5d10  ma_spatializer_set_positioning =====

void ma_spatializer_set_positioning(long param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    FUN_003410a0(param_2,param_1 + 0x14);
  }
  return;
}


// ===== 005d5d34  ma_spatializer_set_rolloff =====

void ma_spatializer_set_rolloff(undefined4 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_003410a0(param_1,param_2 + 0x2c);
  }
  return;
}


// ===== 005d5d58  ma_spatializer_set_min_gain =====

void ma_spatializer_set_min_gain(undefined4 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_003410a0(param_1,param_2 + 0x1c);
  }
  return;
}


// ===== 005d5d7c  ma_spatializer_set_max_gain =====

void ma_spatializer_set_max_gain(undefined4 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_003410a0(param_1,param_2 + 0x20);
  }
  return;
}


// ===== 005d5da0  ma_spatializer_set_min_distance =====

void ma_spatializer_set_min_distance(undefined4 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_003410a0(param_1,param_2 + 0x24);
  }
  return;
}


// ===== 005d5dc4  ma_spatializer_set_max_distance =====

void ma_spatializer_set_max_distance(undefined4 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_003410a0(param_1,param_2 + 0x28);
  }
  return;
}


// ===== 005d5de8  ma_spatializer_set_cone =====

void ma_spatializer_set_cone(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  if (param_4 != 0) {
    FUN_003410a0(param_1,param_4 + 0x30);
    FUN_003410a0(param_2,param_4 + 0x34);
    FUN_003410a0(param_3,param_4 + 0x38);
  }
  return;
}


// ===== 005d5e40  ma_spatializer_set_doppler_factor =====

void ma_spatializer_set_doppler_factor(undefined4 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_003410a0(param_1,param_2 + 0x3c);
  }
  return;
}


// ===== 005d5e64  ma_spatializer_set_directional_attenuation_factor =====

void ma_spatializer_set_directional_attenuation_factor(undefined4 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_003410a0(param_1,param_2 + 0x40);
  }
  return;
}


// ===== 005d5e88  ma_spatializer_set_position =====

void ma_spatializer_set_position
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  
  if (param_4 != 0) {
    iVar1 = FUN_00341150(1,(undefined4 *)(param_4 + 0x54));
    while (iVar1 != 0) {
      do {
      } while (*(int *)(param_4 + 0x54) == 1);
      iVar1 = FUN_00341150(1,param_4 + 0x54);
    }
    *(undefined4 *)(param_4 + 0x48) = param_1;
    *(undefined4 *)(param_4 + 0x4c) = param_2;
    *(undefined4 *)(param_4 + 0x50) = param_3;
    *(undefined4 *)(param_4 + 0x54) = 0;
  }
  return;
}


// ===== 005d5f00  ma_spatializer_set_velocity =====

void ma_spatializer_set_velocity
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  
  if (param_4 != 0) {
    iVar1 = FUN_00341150(1,(undefined4 *)(param_4 + 0x74));
    while (iVar1 != 0) {
      do {
      } while (*(int *)(param_4 + 0x74) == 1);
      iVar1 = FUN_00341150(1,param_4 + 0x74);
    }
    *(undefined4 *)(param_4 + 0x68) = param_1;
    *(undefined4 *)(param_4 + 0x6c) = param_2;
    *(undefined4 *)(param_4 + 0x70) = param_3;
    *(undefined4 *)(param_4 + 0x74) = 0;
  }
  return;
}


// ===== 005d5f78  ma_linear_resampler_config_init =====

void ma_linear_resampler_config_init
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  if (param_1 != (undefined4 *)0x0) {
    *(undefined8 *)(param_1 + 4) = 0;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[4] = 4;
  param_1[2] = param_4;
  param_1[3] = param_5;
  *(undefined8 *)(param_1 + 6) = 0x3ff0000000000000;
  return;
}


// ===== 005d5f9c  ma_linear_resampler_get_heap_size =====

undefined8 ma_linear_resampler_get_heap_size(int *param_1,ulong *param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((((param_2 != (ulong *)0x0) && (*param_2 = 0, param_1 != (int *)0x0)) &&
      ((iVar3 = *param_1, iVar3 == 5 || (iVar3 == 2)))) && (uVar4 = param_1[1], uVar4 != 0)) {
    lVar6 = (ulong)uVar4 * 4;
    lVar5 = (ulong)uVar4 * 8;
    uVar4 = param_1[4];
    lVar2 = lVar5;
    if (iVar3 != 5) {
      lVar2 = lVar6;
    }
    uVar1 = uVar4;
    if (7 < uVar4) {
      uVar1 = 8;
    }
    lVar7 = 0;
    if ((uVar1 & 1) != 0) {
      lVar7 = (lVar6 + 7U & 0x7fffffff8) + 0x28;
    }
    if (1 < uVar4) {
      lVar5 = lVar5 + 0x40;
      lVar7 = lVar7 + lVar5 + lVar5 * (ulong)((uVar1 >> 1) - 1);
    }
    *param_2 = lVar2 + 7 + lVar7 & 0xfffffffffffffff8;
    return 0;
  }
  return 0xfffffffe;
}


// ===== 005d603c  ma_linear_resampler_init =====

ulong ma_linear_resampler_init(int *param_1,undefined8 *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  void *__ptr;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if ((param_1 == (int *)0x0) ||
     (((iVar3 = *param_1, iVar3 != 5 && (iVar3 != 2)) || (uVar4 = param_1[1], uVar4 == 0)))) {
    return 0xfffffffe;
  }
  lVar7 = (ulong)uVar4 * 4;
  lVar6 = (ulong)uVar4 * 8;
  uVar4 = param_1[4];
  lVar2 = lVar6;
  if (iVar3 != 5) {
    lVar2 = lVar7;
  }
  uVar1 = uVar4;
  if (7 < uVar4) {
    uVar1 = 8;
  }
  lVar8 = 0;
  if ((uVar1 & 1) != 0) {
    lVar8 = (lVar7 + 7U & 0x7fffffff8) + 0x28;
  }
  if (1 < uVar4) {
    lVar6 = lVar6 + 0x40;
    lVar8 = lVar8 + lVar6 + lVar6 * (ulong)((uVar1 >> 1) - 1);
  }
  uVar5 = lVar2 + 7 + lVar8 & 0xfffffffffffffff8;
  if (uVar5 == 0) {
    uVar5 = ma_linear_resampler_init_preallocated(param_1,0);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
LAB_005d615c:
    uVar5 = 0;
    *(undefined4 *)(param_3 + 0x80) = 1;
  }
  else {
    if (param_2 == (undefined8 *)0x0) {
      __ptr = malloc(uVar5);
joined_r0x005d6184:
      if (__ptr != (void *)0x0) {
        uVar5 = ma_linear_resampler_init_preallocated(param_1,__ptr,param_3);
        if ((int)uVar5 != 0) {
          if (param_2 == (undefined8 *)0x0) {
            free(__ptr);
          }
          else {
            if ((code *)param_2[3] == (code *)0x0) {
              return uVar5;
            }
            (*(code *)param_2[3])(__ptr,*param_2);
          }
          return uVar5 & 0xffffffff;
        }
        goto LAB_005d615c;
      }
    }
    else if ((code *)param_2[1] != (code *)0x0) {
      __ptr = (void *)(*(code *)param_2[1])(uVar5,*param_2);
      goto joined_r0x005d6184;
    }
    uVar5 = 0xfffffffc;
  }
  return uVar5;
}


// ===== 005d61a4  ma_linear_resampler_uninit =====

void ma_linear_resampler_uninit(long param_1,undefined8 *param_2)

{
  void *__ptr;
  
  if (param_1 != 0) {
    ma_lpf_uninit(param_1 + 0x40);
    if ((*(int *)(param_1 + 0x80) != 0) &&
       (__ptr = *(void **)(param_1 + 0x78), __ptr != (void *)0x0)) {
      if (param_2 == (undefined8 *)0x0) {
        free(__ptr);
        return;
      }
      if ((code *)param_2[3] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005d61ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)param_2[3])(__ptr,*param_2);
        return;
      }
    }
  }
  return;
}


// ===== 005d6208  ma_linear_resampler_set_rate =====

void ma_linear_resampler_set_rate(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_005b43cc(param_1,0,0,param_2,param_3,1);
  return;
}


// ===== 005d6220  ma_linear_resampler_set_rate_ratio =====

undefined8 ma_linear_resampler_set_rate_ratio(float param_1,long param_2)

{
  undefined8 uVar1;
  
  if (((param_2 != 0) && (0.0 < param_1)) && ((int)(param_1 * 1e+06) != 0)) {
    uVar1 = FUN_005b43cc(param_2,0,0,(int)(param_1 * 1e+06),1000000,1);
    return uVar1;
  }
  return 0xfffffffe;
}


// ===== 005d6264  ma_linear_resampler_get_input_latency =====

ulong ma_linear_resampler_get_input_latency(ulong param_1)

{
  if (param_1 != 0) {
    param_1 = (ulong)(*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x50) * 2 + 1);
  }
  return param_1;
}


// ===== 005d6278  ma_linear_resampler_get_output_latency =====

ulong ma_linear_resampler_get_output_latency(ulong param_1)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  uint *puVar4;
  
  if (param_1 != 0) {
    piVar1 = (int *)(param_1 + 0x4c);
    piVar3 = (int *)(param_1 + 0x50);
    puVar2 = (uint *)(param_1 + 8);
    puVar4 = (uint *)(param_1 + 0xc);
    param_1 = 0;
    if ((ulong)*puVar2 != 0) {
      param_1 = ((ulong)*puVar4 * (ulong)(*piVar1 + *piVar3 * 2 + 1)) / (ulong)*puVar2;
    }
  }
  return param_1;
}


// ===== 005d6298  ma_linear_resampler_get_required_input_frame_count =====

undefined8
ma_linear_resampler_get_required_input_frame_count(long param_1,long param_2,long *param_3)

{
  ulong uVar1;
  
  if ((param_3 != (long *)0x0) && (*param_3 = 0, param_1 != 0)) {
    if (param_2 != 0) {
      uVar1 = 0;
      if ((ulong)*(uint *)(param_1 + 0xc) != 0) {
        uVar1 = ((ulong)*(uint *)(param_1 + 0x2c) +
                (param_2 + -1) * (ulong)*(uint *)(param_1 + 0x24)) / (ulong)*(uint *)(param_1 + 0xc)
        ;
      }
      *param_3 = (ulong)*(uint *)(param_1 + 0x28) +
                 (param_2 + -1) * (ulong)*(uint *)(param_1 + 0x20) + uVar1;
      return 0;
    }
    return 0;
  }
  return 0xfffffffe;
}


// ===== 005d62f8  ma_linear_resampler_get_expected_output_frame_count =====

undefined8
ma_linear_resampler_get_expected_output_frame_count(long param_1,ulong param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((param_3 != (ulong *)0x0) && (*param_3 = 0, param_1 != 0)) {
    uVar1 = (ulong)*(uint *)(param_1 + 0xc);
    uVar2 = 0;
    if ((ulong)*(uint *)(param_1 + 8) != 0) {
      uVar2 = (uVar1 * param_2) / (ulong)*(uint *)(param_1 + 8);
    }
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = ((ulong)*(uint *)(param_1 + 0x2c) + uVar2 * *(uint *)(param_1 + 0x24)) / uVar1;
    }
    if (uVar3 + *(uint *)(param_1 + 0x28) + uVar2 * *(uint *)(param_1 + 0x20) <= param_2) {
      uVar2 = uVar2 + 1;
    }
    *param_3 = uVar2;
    return 0;
  }
  return 0xfffffffe;
}


// ===== 005d6350  ma_resampler_get_heap_size =====

undefined8 ma_resampler_get_heap_size(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((param_2 == (undefined8 *)0x0) || (*param_2 = 0, param_1 == 0)) {
    return 0xfffffffe;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = 0;
    UNRECOVERED_JUMPTABLE = (code *)PTR_FUN_00686ab0;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 1) {
      return 0xfffffffe;
    }
    if (*(undefined8 **)(param_1 + 0x18) == (undefined8 *)0x0) {
      return 0xffffffe3;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(param_1 + 0x18);
  }
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return 0xffffffe3;
  }
                    /* WARNING: Could not recover jumptable at 0x005d63ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(uVar1);
  return uVar1;
}


// ===== 005d63b0  ma_resampler_init_preallocated =====

undefined8
ma_resampler_init_preallocated(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  
  if (param_3 == (undefined8 *)0x0) {
    return 0xfffffffe;
  }
  param_3[1] = 0;
  *param_3 = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  param_3[5] = 0;
  param_3[4] = 0;
  param_3[7] = 0;
  param_3[6] = 0;
  param_3[9] = 0;
  param_3[8] = 0;
  param_3[0xb] = 0;
  param_3[10] = 0;
  param_3[0xd] = 0;
  param_3[0xc] = 0;
  param_3[0xf] = 0;
  param_3[0xe] = 0;
  param_3[0x11] = 0;
  param_3[0x10] = 0;
  param_3[0x13] = 0;
  param_3[0x12] = 0;
  param_3[0x15] = 0;
  param_3[0x14] = 0;
  param_3[0x17] = 0;
  param_3[0x16] = 0;
  if (param_1 == (undefined8 *)0x0) {
    return 0xfffffffe;
  }
  uVar4 = param_1[1];
  uVar2 = *param_1;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[0x16] = param_2;
  param_3[4] = uVar4;
  param_3[3] = uVar2;
  if (*(int *)(param_1 + 2) == 1) {
    ppuVar3 = (undefined **)param_1[3];
    param_3[1] = ppuVar3;
    puVar1 = (undefined8 *)param_1[4];
    param_3[2] = puVar1;
    if (ppuVar3 == (undefined **)0x0) {
      return 0xffffffe3;
    }
  }
  else {
    if (*(int *)(param_1 + 2) != 0) {
      return 0xfffffffe;
    }
    ppuVar3 = &PTR_FUN_00686ab0;
    param_3[1] = &PTR_FUN_00686ab0;
    param_3[2] = param_3;
    puVar1 = param_3;
  }
  if ((code *)ppuVar3[1] == (code *)0x0) {
    return 0xffffffe3;
  }
                    /* WARNING: Could not recover jumptable at 0x005d6438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)ppuVar3[1])(puVar1);
  return uVar2;
}


// ===== 005d6444  ma_resampler_init =====

void ma_resampler_init(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  void *__ptr;
  undefined8 uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  size_t local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = 0;
  if (param_1 == (undefined8 *)0x0) {
LAB_005d64a4:
    uVar3 = 0xfffffffe;
    goto LAB_005d64a8;
  }
  ppuVar7 = &PTR_FUN_00686ab0;
  if (*(int *)(param_1 + 2) == 0) {
    uVar4 = 0;
    pcVar6 = (code *)PTR_FUN_00686ab0;
    if (PTR_FUN_00686ab0 != (undefined *)0x0) {
LAB_005d64e0:
      uVar3 = (*pcVar6)(uVar4,param_1,&local_50);
      if ((int)uVar3 != 0) goto LAB_005d64a8;
      if (local_50 != 0) {
        if (param_2 == (undefined8 *)0x0) {
          __ptr = malloc(local_50);
LAB_005d6534:
          if (__ptr != (void *)0x0) goto LAB_005d6540;
        }
        else if ((code *)param_2[1] != (code *)0x0) {
          __ptr = (void *)(*(code *)param_2[1])(local_50,*param_2);
          goto LAB_005d6534;
        }
        uVar3 = 0xfffffffc;
        goto LAB_005d64a8;
      }
      __ptr = (void *)0x0;
LAB_005d6540:
      if (param_3 == (undefined8 *)0x0) {
        uVar3 = 0xfffffffe;
      }
      else {
        param_3[1] = 0;
        *param_3 = 0;
        param_3[3] = 0;
        param_3[2] = 0;
        param_3[5] = 0;
        param_3[4] = 0;
        param_3[7] = 0;
        param_3[6] = 0;
        param_3[9] = 0;
        param_3[8] = 0;
        param_3[0xb] = 0;
        param_3[10] = 0;
        param_3[0xd] = 0;
        param_3[0xc] = 0;
        param_3[0xf] = 0;
        param_3[0xe] = 0;
        param_3[0x11] = 0;
        param_3[0x10] = 0;
        param_3[0x13] = 0;
        param_3[0x12] = 0;
        param_3[0x15] = 0;
        param_3[0x14] = 0;
        param_3[0x17] = 0;
        param_3[0x16] = 0;
        uVar8 = param_1[1];
        uVar4 = *param_1;
        param_3[1] = 0;
        param_3[2] = 0;
        param_3[0x16] = __ptr;
        param_3[4] = uVar8;
        param_3[3] = uVar4;
        if (*(int *)(param_1 + 2) == 1) {
          ppuVar7 = (undefined **)param_1[3];
          param_3[1] = ppuVar7;
          puVar5 = (undefined8 *)param_1[4];
          param_3[2] = puVar5;
          if (ppuVar7 != (undefined **)0x0) goto LAB_005d65bc;
LAB_005d6600:
          uVar3 = 0xffffffe3;
        }
        else if (*(int *)(param_1 + 2) == 0) {
          param_3[1] = &PTR_FUN_00686ab0;
          param_3[2] = param_3;
          puVar5 = param_3;
LAB_005d65bc:
          if ((code *)ppuVar7[1] == (code *)0x0) goto LAB_005d6600;
          uVar2 = (*(code *)ppuVar7[1])(puVar5,param_1,__ptr);
          uVar3 = (ulong)uVar2;
          if (uVar2 == 0) {
            uVar3 = 0;
            *(undefined4 *)(param_3 + 0x17) = 1;
            goto LAB_005d64a8;
          }
        }
        else {
          uVar3 = 0xfffffffe;
        }
      }
      if (__ptr != (void *)0x0) {
        if (param_2 == (undefined8 *)0x0) {
          free(__ptr);
        }
        else if ((code *)param_2[3] != (code *)0x0) {
          (*(code *)param_2[3])(__ptr,*param_2);
        }
      }
      goto LAB_005d64a8;
    }
  }
  else {
    if (*(int *)(param_1 + 2) != 1) goto LAB_005d64a4;
    if ((long *)param_1[3] != (long *)0x0) {
      uVar4 = param_1[4];
      pcVar6 = *(code **)param_1[3];
      if (pcVar6 != (code *)0x0) goto LAB_005d64e0;
    }
  }
  uVar3 = 0xffffffe3;
LAB_005d64a8:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


// ===== 005d6630  ma_resampler_uninit =====

void ma_resampler_uninit(undefined8 *param_1,undefined8 *param_2)

{
  void *__ptr;
  code *pcVar1;
  
  if ((((param_1 != (undefined8 *)0x0) && (param_1[1] != 0)) &&
      (pcVar1 = *(code **)(param_1[1] + 0x10), pcVar1 != (code *)0x0)) &&
     (((*pcVar1)(param_1[2],*param_1,param_2), *(int *)(param_1 + 0x17) != 0 &&
      (__ptr = (void *)param_1[0x16], __ptr != (void *)0x0)))) {
    if (param_2 == (undefined8 *)0x0) {
      free(__ptr);
      return;
    }
    if ((code *)param_2[3] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005d6698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_2[3])(param_1,__ptr,*param_2);
      return;
    }
  }
  return;
}


// ===== 005d66b4  ma_resampler_process_pcm_frames =====

undefined8
ma_resampler_process_pcm_frames
          (undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((param_1 == (undefined8 *)0x0) || (param_3 == 0 && param_5 == 0)) {
    return 0xfffffffe;
  }
  if ((param_1[1] != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(param_1[1] + 0x18), UNRECOVERED_JUMPTABLE != (code *)0x0))
  {
                    /* WARNING: Could not recover jumptable at 0x005d66f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1[2],*param_1,param_2,param_3,param_4);
    return uVar1;
  }
  return 0xffffffe3;
}


// ===== 005d6704  ma_resampler_set_rate =====

undefined8 ma_resampler_set_rate(undefined8 *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  
  if (((param_1 != (undefined8 *)0x0) && (param_2 != 0)) && (param_3 != 0)) {
    if (param_1[1] == 0) {
      return 0xffffffe3;
    }
    pcVar2 = *(code **)(param_1[1] + 0x20);
    if (pcVar2 == (code *)0x0) {
      uVar1 = 0xffffffe3;
    }
    else {
      uVar1 = (*pcVar2)(param_1[2],*param_1,param_2,param_3);
      if ((int)uVar1 == 0) {
        *(int *)(param_1 + 4) = param_2;
        *(int *)((long)param_1 + 0x24) = param_3;
      }
    }
    return uVar1;
  }
  return 0xfffffffe;
}


// ===== 005d678c  ma_resampler_set_rate_ratio =====

undefined8 ma_resampler_set_rate_ratio(float param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  
  uVar1 = 0xfffffffe;
  if ((param_2 != (undefined8 *)0x0) && (0.0 < param_1)) {
    iVar3 = (int)(param_1 * 1000.0);
    if (iVar3 == 0) {
      uVar1 = 0xfffffffe;
    }
    else if ((param_2[1] == 0) || (pcVar2 = *(code **)(param_2[1] + 0x20), pcVar2 == (code *)0x0)) {
      uVar1 = 0xffffffe3;
    }
    else {
      uVar1 = (*pcVar2)(param_2[2],*param_2,iVar3,1000);
      if ((int)uVar1 == 0) {
        *(int *)(param_2 + 4) = iVar3;
        *(undefined4 *)((long)param_2 + 0x24) = 1000;
      }
    }
  }
  return uVar1;
}


// ===== 005d6818  ma_resampler_get_input_latency =====

undefined8 ma_resampler_get_input_latency(undefined8 *param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (((param_1 != (undefined8 *)0x0) && (param_1[1] != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(param_1[1] + 0x28), UNRECOVERED_JUMPTABLE != (code *)0x0))
  {
                    /* WARNING: Could not recover jumptable at 0x005d6838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1[2],*param_1);
    return uVar1;
  }
  return 0;
}


// ===== 005d6844  ma_resampler_get_output_latency =====

undefined8 ma_resampler_get_output_latency(undefined8 *param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (((param_1 != (undefined8 *)0x0) && (param_1[1] != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(param_1[1] + 0x30), UNRECOVERED_JUMPTABLE != (code *)0x0))
  {
                    /* WARNING: Could not recover jumptable at 0x005d6864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1[2],*param_1);
    return uVar1;
  }
  return 0;
}


// ===== 005d6870  ma_resampler_get_required_input_frame_count =====

undefined8
ma_resampler_get_required_input_frame_count
          (undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((param_3 == (undefined8 *)0x0) || (*param_3 = 0, param_1 == (undefined8 *)0x0)) {
    return 0xfffffffe;
  }
  if ((param_1[1] != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(param_1[1] + 0x38), UNRECOVERED_JUMPTABLE != (code *)0x0))
  {
                    /* WARNING: Could not recover jumptable at 0x005d68a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1[2],*param_1,param_2);
    return uVar1;
  }
  return 0xffffffe3;
}


// ===== 005d68b4  ma_resampler_get_expected_output_frame_count =====

undefined8
ma_resampler_get_expected_output_frame_count
          (undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((param_3 == (undefined8 *)0x0) || (*param_3 = 0, param_1 == (undefined8 *)0x0)) {
    return 0xfffffffe;
  }
  if ((param_1[1] != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(param_1[1] + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0))
  {
                    /* WARNING: Could not recover jumptable at 0x005d68e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1[2],*param_1,param_2);
    return uVar1;
  }
  return 0xffffffe3;
}


// ===== 005d68f8  ma_resampler_reset =====

undefined8 ma_resampler_reset(undefined8 *param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0xfffffffe;
  }
  if ((param_1[1] != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(param_1[1] + 0x48), UNRECOVERED_JUMPTABLE != (code *)0x0))
  {
                    /* WARNING: Could not recover jumptable at 0x005d6918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1[2],*param_1);
    return uVar1;
  }
  return 0xffffffe3;
}


// ===== 005d692c  ma_channel_converter_config_init =====

void ma_channel_converter_config_init
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
               undefined4 param_5,undefined8 param_6,undefined4 param_7)

{
  if (param_1 != (undefined4 *)0x0) {
    *(undefined8 *)(param_1 + 10) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 2) = 0;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_5;
  *(undefined8 *)(param_1 + 4) = param_4;
  *(undefined8 *)(param_1 + 6) = param_6;
  param_1[8] = param_7;
  return;
}


// ===== 005d6954  ma_channel_converter_get_heap_size =====

void ma_channel_converter_get_heap_size(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_50 [5];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_2 == (undefined8 *)0x0) {
    uVar2 = 0xfffffffe;
  }
  else {
    *param_2 = 0;
    uVar2 = FUN_005b5b14(param_1,local_50);
    if ((int)uVar2 == 0) {
      *param_2 = local_50[0];
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 005d69bc  ma_channel_map_contains_channel_position =====

ulong ma_channel_map_contains_channel_position(uint param_1,byte *param_2,byte param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == (byte *)0x0) {
    if (param_1 < 8) {
      uVar1 = (uint)(0x2020202020201 >> (((ulong)(param_1 - 1) & 7) << 3));
    }
    else {
      uVar1 = 2;
    }
  }
  else {
    uVar1 = (uint)*param_2;
  }
  if ((uVar1 & 0xff) == (uint)param_3) {
    return 1;
  }
  uVar2 = (ulong)(param_1 - 1);
  if (param_1 - 1 != 0) {
    if (param_2 == (byte *)0x0) {
      if (param_1 < 8) {
        uVar1 = (uint)(0x3030303030301 >> ((uVar2 & 7) << 3));
      }
      else {
        uVar1 = 3;
      }
    }
    else {
      uVar1 = (uint)param_2[1];
    }
    if ((uVar1 & 0xff) == (uint)param_3) {
      return 1;
    }
    if (param_1 == 2) {
      return 0;
    }
    uVar3 = 2;
    uVar4 = 0x10;
    do {
      if (param_2 == (byte *)0x0) {
        uVar1 = (uint)uVar3;
        if (uVar1 < param_1) {
          if ((int)param_1 < 4) {
            if (param_1 == 1) {
              uVar1 = 1;
            }
            else if (param_1 == 2) {
              uVar1 = (uint)(uVar1 == 0) << 1;
            }
            else {
              if (param_1 != 3) goto LAB_005d6b2c;
              uVar1 = uVar1 + 2;
            }
          }
          else if ((int)param_1 < 6) {
            if (param_1 == 4) {
              uVar1 = 0xa040302 >> (ulong)((uint)uVar4 & 0x1f);
            }
            else if (param_1 == 5) {
              uVar1 = (uint)(0x706040302 >> (uVar4 & 0x3f));
            }
            else {
LAB_005d6b2c:
              if (uVar1 < 8) {
                uVar1 = (uint)(0xc0b070605040302 >> (uVar4 & 0x38));
              }
              else {
                if (0x1f < uVar1) goto LAB_005d6b70;
                uVar1 = uVar1 + 0xc;
              }
            }
          }
          else if (param_1 == 6) {
            uVar1 = (uint)(0xc0b05040302 >> (uVar4 & 0x3f));
          }
          else {
            if (param_1 != 7) goto LAB_005d6b2c;
            uVar1 = (uint)(0xc0b0a05040302 >> (uVar4 & 0x3f));
          }
        }
        else {
LAB_005d6b70:
          uVar1 = 0;
        }
      }
      else {
        uVar1 = (uint)param_2[uVar3];
      }
      if ((uVar1 & 0xff) == (uint)param_3) {
        return 1;
      }
      uVar3 = uVar3 + 1;
      uVar2 = 0;
      uVar4 = uVar4 + 8;
    } while (param_1 != uVar3);
  }
  return uVar2;
}


// ===== 005d6b98  ma_channel_converter_init =====

void ma_channel_converter_init(undefined8 param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  void *__ptr;
  size_t local_70 [5];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_005b5b14(param_1,local_70);
  if ((int)uVar2 != 0) goto LAB_005d6bd4;
  if (local_70[0] == 0) {
    uVar2 = ma_channel_converter_init_preallocated(param_1,0,param_3);
    if ((int)uVar2 != 0) goto LAB_005d6bd4;
LAB_005d6c6c:
    uVar2 = 0;
    *(undefined4 *)(param_3 + 0x40) = 1;
  }
  else {
    if (param_2 == (undefined8 *)0x0) {
      __ptr = malloc(local_70[0]);
joined_r0x005d6c84:
      if (__ptr != (void *)0x0) {
        uVar2 = ma_channel_converter_init_preallocated(param_1,__ptr,param_3);
        if ((int)uVar2 != 0) {
          if (param_2 == (undefined8 *)0x0) {
            uVar2 = uVar2 & 0xffffffff;
            free(__ptr);
          }
          else if ((code *)param_2[3] != (code *)0x0) {
            uVar2 = uVar2 & 0xffffffff;
            (*(code *)param_2[3])(__ptr,*param_2);
          }
          goto LAB_005d6bd4;
        }
        goto LAB_005d6c6c;
      }
    }
    else if ((code *)param_2[1] != (code *)0x0) {
      __ptr = (void *)(*(code *)param_2[1])(local_70[0],*param_2);
      goto joined_r0x005d6c84;
    }
    uVar2 = 0xfffffffc;
  }
LAB_005d6bd4:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


// ===== 005d6ca8  ma_channel_converter_uninit =====

void ma_channel_converter_uninit(long param_1,undefined8 *param_2)

{
  void *__ptr;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x40) != 0)) &&
     (__ptr = *(void **)(param_1 + 0x38), __ptr != (void *)0x0)) {
    if (param_2 == (undefined8 *)0x0) {
      free(__ptr);
      return;
    }
    if ((code *)param_2[3] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005d6ccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_2[3])(__ptr,*param_2);
      return;
    }
  }
  return;
}


// ===== 005d6cd8  ma_channel_converter_get_input_channel_map =====

undefined8 ma_channel_converter_get_input_channel_map(long param_1,undefined1 *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  undefined1 uVar4;
  long lVar5;
  ulong uVar6;
  char cVar7;
  
  if ((param_1 == 0) || (param_2 == (undefined1 *)0x0)) {
    return 0xfffffffe;
  }
  uVar3 = *(uint *)(param_1 + 4);
  if (uVar3 != 0) {
    if (*(void **)(param_1 + 0x18) != (void *)0x0) {
      memcpy(param_2,*(void **)(param_1 + 0x18),(ulong)uVar3);
      return 0;
    }
    if (param_3 != 0) {
      uVar2 = param_3 - 1U;
      if ((ulong)(uVar3 - 1) <= param_3 - 1U) {
        uVar2 = (ulong)(uVar3 - 1);
      }
      uVar4 = (undefined1)(0x202020202020102 >> (((ulong)uVar3 & 7) << 3));
      if (7 < uVar3) {
        uVar4 = 2;
      }
      *param_2 = uVar4;
      if (uVar2 != 0) {
        uVar4 = (undefined1)(0x3030303030301 >> (((ulong)(uVar3 - 1) & 7) << 3));
        if (7 < uVar3) {
          uVar4 = 3;
        }
        param_2[1] = uVar4;
        if (uVar2 != 1) {
          lVar5 = 0;
          uVar6 = 0x10;
          do {
            uVar1 = lVar5 + 2;
            if ((int)uVar3 < 4) {
              if (uVar3 == 1) {
                cVar7 = '\x01';
              }
              else if (uVar3 == 2) {
LAB_005d6e8c:
                cVar7 = '\0';
              }
              else {
                if (uVar3 != 3) goto LAB_005d6e64;
                cVar7 = (char)uVar1 + '\x02';
              }
            }
            else if ((int)uVar3 < 6) {
              if (uVar3 == 4) {
                cVar7 = (char)(0xa040302 >> (ulong)((uint)uVar6 & 0x1f));
              }
              else if (uVar3 == 5) {
                cVar7 = (char)(0x706040302 >> (uVar6 & 0x3f));
              }
              else {
LAB_005d6e64:
                if (uVar1 < 8) {
                  cVar7 = (char)(0xc0b070605040302 >> (uVar6 & 0x3f));
                }
                else {
                  if (0x1f < uVar1) goto LAB_005d6e8c;
                  cVar7 = (char)uVar1 + '\f';
                }
              }
            }
            else if (uVar3 == 6) {
              cVar7 = (char)(0xc0b05040302 >> (uVar6 & 0x3f));
            }
            else {
              if (uVar3 != 7) goto LAB_005d6e64;
              cVar7 = (char)(0xc0b0a05040302 >> (uVar6 & 0x3f));
            }
            param_2[lVar5 + 2] = cVar7;
            lVar5 = lVar5 + 1;
            uVar6 = uVar6 + 8;
            if (uVar2 - 1 == lVar5) {
              return 0;
            }
          } while( true );
        }
      }
    }
  }
  return 0;
}


// ===== 005d6e98  ma_channel_converter_get_output_channel_map =====

undefined8
ma_channel_converter_get_output_channel_map(long param_1,undefined1 *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  undefined1 uVar4;
  long lVar5;
  ulong uVar6;
  char cVar7;
  
  if ((param_1 == 0) || (param_2 == (undefined1 *)0x0)) {
    return 0xfffffffe;
  }
  uVar3 = *(uint *)(param_1 + 8);
  if (uVar3 != 0) {
    if (*(void **)(param_1 + 0x20) != (void *)0x0) {
      memcpy(param_2,*(void **)(param_1 + 0x20),(ulong)uVar3);
      return 0;
    }
    if (param_3 != 0) {
      uVar2 = param_3 - 1U;
      if ((ulong)(uVar3 - 1) <= param_3 - 1U) {
        uVar2 = (ulong)(uVar3 - 1);
      }
      uVar4 = (undefined1)(0x202020202020102 >> (((ulong)uVar3 & 7) << 3));
      if (7 < uVar3) {
        uVar4 = 2;
      }
      *param_2 = uVar4;
      if (uVar2 != 0) {
        uVar4 = (undefined1)(0x3030303030301 >> (((ulong)(uVar3 - 1) & 7) << 3));
        if (7 < uVar3) {
          uVar4 = 3;
        }
        param_2[1] = uVar4;
        if (uVar2 != 1) {
          lVar5 = 0;
          uVar6 = 0x10;
          do {
            uVar1 = lVar5 + 2;
            if ((int)uVar3 < 4) {
              if (uVar3 == 1) {
                cVar7 = '\x01';
              }
              else if (uVar3 == 2) {
LAB_005d704c:
                cVar7 = '\0';
              }
              else {
                if (uVar3 != 3) goto LAB_005d7024;
                cVar7 = (char)uVar1 + '\x02';
              }
            }
            else if ((int)uVar3 < 6) {
              if (uVar3 == 4) {
                cVar7 = (char)(0xa040302 >> (ulong)((uint)uVar6 & 0x1f));
              }
              else if (uVar3 == 5) {
                cVar7 = (char)(0x706040302 >> (uVar6 & 0x3f));
              }
              else {
LAB_005d7024:
                if (uVar1 < 8) {
                  cVar7 = (char)(0xc0b070605040302 >> (uVar6 & 0x3f));
                }
                else {
                  if (0x1f < uVar1) goto LAB_005d704c;
                  cVar7 = (char)uVar1 + '\f';
                }
              }
            }
            else if (uVar3 == 6) {
              cVar7 = (char)(0xc0b05040302 >> (uVar6 & 0x3f));
            }
            else {
              if (uVar3 != 7) goto LAB_005d7024;
              cVar7 = (char)(0xc0b0a05040302 >> (uVar6 & 0x3f));
            }
            param_2[lVar5 + 2] = cVar7;
            lVar5 = lVar5 + 1;
            uVar6 = uVar6 + 8;
            if (uVar2 - 1 == lVar5) {
              return 0;
            }
          } while( true );
        }
      }
    }
  }
  return 0;
}


// ===== 005d7058  ma_data_converter_config_init_default =====

void ma_data_converter_config_init_default(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    param_1[0xe] = 0;
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
    param_1[1] = 0;
    *param_1 = 0;
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xe) = 1;
  return;
}


// ===== 005d708c  ma_data_converter_config_init =====

void ma_data_converter_config_init
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  if (param_1 != (undefined4 *)0x0) {
    *(undefined8 *)(param_1 + 0x1c) = 0;
    *(undefined8 *)(param_1 + 0x1a) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x16) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0x12) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 10) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
  }
  param_1[10] = 0;
  param_1[0x16] = 0;
  param_1[0x10] = 0;
  param_1[0x1c] = 1;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[5] = param_7;
  return;
}


// ===== 005d70d0  ma_data_converter_get_heap_size =====

void ma_data_converter_get_heap_size(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_40 [3];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_2 == (undefined8 *)0x0) {
    uVar2 = 0xfffffffe;
  }
  else {
    *param_2 = 0;
    uVar2 = FUN_005b26b8(param_1,local_40);
    if ((int)uVar2 == 0) {
      *param_2 = local_40[0];
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 005d7138  ma_data_converter_init =====

void ma_data_converter_init(undefined8 param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  void *__ptr;
  size_t local_60 [3];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_005b26b8(param_1,local_60);
  if ((int)uVar2 != 0) goto LAB_005d7174;
  if (local_60[0] == 0) {
    uVar2 = ma_data_converter_init_preallocated(param_1,0,param_3);
    if ((int)uVar2 != 0) goto LAB_005d7174;
LAB_005d720c:
    uVar2 = 0;
    *(undefined1 *)(param_3 + 0x12d) = 1;
  }
  else {
    if (param_2 == (undefined8 *)0x0) {
      __ptr = malloc(local_60[0]);
joined_r0x005d7224:
      if (__ptr != (void *)0x0) {
        uVar2 = ma_data_converter_init_preallocated(param_1,__ptr,param_3);
        if ((int)uVar2 != 0) {
          if (param_2 == (undefined8 *)0x0) {
            uVar2 = uVar2 & 0xffffffff;
            free(__ptr);
          }
          else if ((code *)param_2[3] != (code *)0x0) {
            uVar2 = uVar2 & 0xffffffff;
            (*(code *)param_2[3])(__ptr,*param_2);
          }
          goto LAB_005d7174;
        }
        goto LAB_005d720c;
      }
    }
    else if ((code *)param_2[1] != (code *)0x0) {
      __ptr = (void *)(*(code *)param_2[1])(local_60[0],*param_2);
      goto joined_r0x005d7224;
    }
    uVar2 = 0xfffffffc;
  }
LAB_005d7174:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


// ===== 005d7248  ma_data_converter_set_rate =====

undefined8 ma_data_converter_set_rate(long param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  
  if (param_1 != 0) {
    if (*(char *)(param_1 + 299) == '\0') {
      return 0xfffffffd;
    }
    if ((param_2 != 0) && (param_3 != 0)) {
      if (*(long *)(param_1 + 0x70) == 0) {
        return 0xffffffe3;
      }
      pcVar2 = *(code **)(*(long *)(param_1 + 0x70) + 0x20);
      if (pcVar2 == (code *)0x0) {
        uVar1 = 0xffffffe3;
      }
      else {
        uVar1 = (*pcVar2)(*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x68),param_2,
                          param_3);
        if ((int)uVar1 == 0) {
          *(int *)(param_1 + 0x88) = param_2;
          *(int *)(param_1 + 0x8c) = param_3;
        }
      }
      return uVar1;
    }
  }
  return 0xfffffffe;
}


// ===== 005d72e0  ma_data_converter_set_rate_ratio =====

undefined8 ma_data_converter_set_rate_ratio(float param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  
  if (param_2 != 0) {
    if (*(char *)(param_2 + 299) == '\0') {
      return 0xfffffffd;
    }
    if (0.0 < param_1) {
      iVar3 = (int)(param_1 * 1000.0);
      if (iVar3 == 0) {
        uVar1 = 0xfffffffe;
      }
      else if ((*(long *)(param_2 + 0x70) == 0) ||
              (pcVar2 = *(code **)(*(long *)(param_2 + 0x70) + 0x20), pcVar2 == (code *)0x0)) {
        uVar1 = 0xffffffe3;
      }
      else {
        uVar1 = (*pcVar2)(*(undefined8 *)(param_2 + 0x78),*(undefined8 *)(param_2 + 0x68),iVar3,1000
                         );
        if ((int)uVar1 == 0) {
          *(int *)(param_2 + 0x88) = iVar3;
          *(undefined4 *)(param_2 + 0x8c) = 1000;
        }
      }
      return uVar1;
    }
  }
  return 0xfffffffe;
}


// ===== 005d7380  ma_data_converter_get_input_latency =====

undefined8 ma_data_converter_get_input_latency(long param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((((param_1 != 0) && (*(char *)(param_1 + 299) != '\0')) && (*(long *)(param_1 + 0x70) != 0))
     && (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x70) + 0x28),
        UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x005d73a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)
                      (*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x68));
    return uVar1;
  }
  return 0;
}


// ===== 005d73b4  ma_data_converter_get_output_latency =====

undefined8 ma_data_converter_get_output_latency(long param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((((param_1 != 0) && (*(char *)(param_1 + 299) != '\0')) && (*(long *)(param_1 + 0x70) != 0))
     && (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x70) + 0x30),
        UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x005d73dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)
                      (*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x68));
    return uVar1;
  }
  return 0;
}


// ===== 005d73e8  ma_data_converter_get_required_input_frame_count =====

undefined8
ma_data_converter_get_required_input_frame_count
          (long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((param_3 == (undefined8 *)0x0) || (*param_3 = 0, param_1 == 0)) {
    return 0xfffffffe;
  }
  if (*(char *)(param_1 + 299) == '\0') {
    *param_3 = param_2;
    return 0;
  }
  if ((*(long *)(param_1 + 0x70) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x70) + 0x38),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x005d7420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)
                      (*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x68));
    return uVar1;
  }
  return 0xffffffe3;
}


// ===== 005d7440  ma_data_converter_get_expected_output_frame_count =====

undefined8
ma_data_converter_get_expected_output_frame_count
          (long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((param_3 == (undefined8 *)0x0) || (*param_3 = 0, param_1 == 0)) {
    return 0xfffffffe;
  }
  if (*(char *)(param_1 + 299) == '\0') {
    *param_3 = param_2;
    return 0;
  }
  if ((*(long *)(param_1 + 0x70) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x70) + 0x40),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x005d7478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)
                      (*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x68));
    return uVar1;
  }
  return 0xffffffe3;
}


// ===== 005d7498  ma_data_converter_get_input_channel_map =====

undefined8 ma_data_converter_get_input_channel_map(long param_1,undefined1 *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 uVar4;
  char cVar5;
  long lVar6;
  undefined1 uVar7;
  ulong uVar8;
  
  uVar4 = 0xfffffffe;
  if ((param_1 != 0) && (param_2 != (undefined1 *)0x0)) {
    if (*(char *)(param_1 + 0x12a) != '\0') {
      uVar3 = *(uint *)(param_1 + 0x28);
      if (uVar3 == 0) {
        return 0;
      }
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        memcpy(param_2,*(void **)(param_1 + 0x40),(ulong)uVar3);
        return 0;
      }
      if (param_3 == 0) {
        return 0;
      }
      uVar2 = param_3 - 1U;
      if ((ulong)(uVar3 - 1) <= param_3 - 1U) {
        uVar2 = (ulong)(uVar3 - 1);
      }
      uVar7 = (undefined1)(0x202020202020102 >> (((ulong)uVar3 & 7) << 3));
      if (7 < uVar3) {
        uVar7 = 2;
      }
      *param_2 = uVar7;
      if (uVar2 == 0) {
        return 0;
      }
      uVar7 = (undefined1)(0x3030303030301 >> (((ulong)(uVar3 - 1) & 7) << 3));
      if (7 < uVar3) {
        uVar7 = 3;
      }
      param_2[1] = uVar7;
      if (uVar2 == 1) {
        return 0;
      }
      lVar6 = 0;
      uVar8 = 0x10;
      do {
        uVar1 = lVar6 + 2;
        if ((int)uVar3 < 4) {
          if (uVar3 == 1) {
            cVar5 = '\x01';
          }
          else if (uVar3 == 2) {
LAB_005d77d8:
            cVar5 = '\0';
          }
          else {
            if (uVar3 != 3) goto LAB_005d77b0;
            cVar5 = (char)uVar1 + '\x02';
          }
        }
        else if ((int)uVar3 < 6) {
          if (uVar3 == 4) {
            cVar5 = (char)(0xa040302 >> (ulong)((uint)uVar8 & 0x1f));
          }
          else if (uVar3 == 5) {
            cVar5 = (char)(0x706040302 >> (uVar8 & 0x3f));
          }
          else {
LAB_005d77b0:
            if (uVar1 < 8) {
              cVar5 = (char)(0xc0b070605040302 >> (uVar8 & 0x3f));
            }
            else {
              if (0x1f < uVar1) goto LAB_005d77d8;
              cVar5 = (char)uVar1 + '\f';
            }
          }
        }
        else if (uVar3 == 6) {
          cVar5 = (char)(0xc0b05040302 >> (uVar8 & 0x3f));
        }
        else {
          if (uVar3 != 7) goto LAB_005d77b0;
          cVar5 = (char)(0xc0b0a05040302 >> (uVar8 & 0x3f));
        }
        param_2[lVar6 + 2] = cVar5;
        lVar6 = lVar6 + 1;
        uVar8 = uVar8 + 8;
        if (uVar2 - 1 == lVar6) {
          return 0;
        }
      } while( true );
    }
    uVar4 = 0;
    if (param_3 != 0) {
      uVar3 = *(uint *)(param_1 + 0xc);
      if (uVar3 != 0) {
        uVar2 = param_3 - 1U;
        if ((ulong)(uVar3 - 1) <= param_3 - 1U) {
          uVar2 = (ulong)(uVar3 - 1);
        }
        uVar7 = (undefined1)(0x202020202020102 >> (((ulong)uVar3 & 7) << 3));
        if (7 < uVar3) {
          uVar7 = 2;
        }
        *param_2 = uVar7;
        if (uVar2 != 0) {
          uVar7 = (undefined1)(0x3030303030301 >> (((ulong)(uVar3 - 1) & 7) << 3));
          if (6 < uVar3 - 1) {
            uVar7 = 3;
          }
          param_2[1] = uVar7;
          if (uVar2 != 1) {
            lVar6 = 0;
            uVar8 = 0x10;
            do {
              uVar1 = lVar6 + 2;
              if ((int)uVar3 < 4) {
                if (uVar3 == 1) {
                  cVar5 = '\x01';
                }
                else if (uVar3 == 2) {
LAB_005d7658:
                  cVar5 = '\0';
                }
                else {
                  if (uVar3 != 3) goto LAB_005d7630;
                  cVar5 = (char)uVar1 + '\x02';
                }
              }
              else if ((int)uVar3 < 6) {
                if (uVar3 == 4) {
                  cVar5 = (char)(0xa040302 >> (ulong)((uint)uVar8 & 0x1f));
                }
                else if (uVar3 == 5) {
                  cVar5 = (char)(0x706040302 >> (uVar8 & 0x3f));
                }
                else {
LAB_005d7630:
                  if (uVar1 < 8) {
                    cVar5 = (char)(0xc0b070605040302 >> (uVar8 & 0x3f));
                  }
                  else {
                    if (0x1f < uVar1) goto LAB_005d7658;
                    cVar5 = (char)uVar1 + '\f';
                  }
                }
              }
              else if (uVar3 == 6) {
                cVar5 = (char)(0xc0b05040302 >> (uVar8 & 0x3f));
              }
              else {
                if (uVar3 != 7) goto LAB_005d7630;
                cVar5 = (char)(0xc0b0a05040302 >> (uVar8 & 0x3f));
              }
              param_2[lVar6 + 2] = cVar5;
              lVar6 = lVar6 + 1;
              uVar8 = uVar8 + 8;
              if (uVar2 - 1 == lVar6) {
                return 0;
              }
            } while( true );
          }
        }
        return 0;
      }
    }
  }
  return uVar4;
}


// ===== 005d77e4  ma_channel_map_init_standard =====

void ma_channel_map_init_standard(undefined4 param_1,long param_2,long param_3,uint param_4)

{
  bool bVar1;
  undefined1 uVar2;
  ulong uVar3;
  
  if (((param_2 != 0) && (param_3 != 0)) && (param_4 != 0)) {
    uVar3 = 0;
    do {
      uVar2 = FUN_005b21c0(param_1,param_4,uVar3 & 0xffffffff);
      *(undefined1 *)(param_2 + uVar3) = uVar2;
      if (param_4 <= (uint)(uVar3 + 1)) {
        return;
      }
      bVar1 = param_3 - 1U != uVar3;
      uVar3 = uVar3 + 1;
    } while (bVar1);
  }
  return;
}


// ===== 005d7858  ma_data_converter_get_output_channel_map =====

undefined8 ma_data_converter_get_output_channel_map(long param_1,undefined1 *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 uVar4;
  char cVar5;
  long lVar6;
  undefined1 uVar7;
  ulong uVar8;
  
  uVar4 = 0xfffffffe;
  if ((param_1 != 0) && (param_2 != (undefined1 *)0x0)) {
    if (*(char *)(param_1 + 0x12a) != '\0') {
      uVar3 = *(uint *)(param_1 + 0x24);
      if (uVar3 == 0) {
        return 0;
      }
      if (*(void **)(param_1 + 0x38) != (void *)0x0) {
        memcpy(param_2,*(void **)(param_1 + 0x38),(ulong)uVar3);
        return 0;
      }
      if (param_3 == 0) {
        return 0;
      }
      uVar2 = param_3 - 1U;
      if ((ulong)(uVar3 - 1) <= param_3 - 1U) {
        uVar2 = (ulong)(uVar3 - 1);
      }
      uVar7 = (undefined1)(0x202020202020102 >> (((ulong)uVar3 & 7) << 3));
      if (7 < uVar3) {
        uVar7 = 2;
      }
      *param_2 = uVar7;
      if (uVar2 == 0) {
        return 0;
      }
      uVar7 = (undefined1)(0x3030303030301 >> (((ulong)(uVar3 - 1) & 7) << 3));
      if (7 < uVar3) {
        uVar7 = 3;
      }
      param_2[1] = uVar7;
      if (uVar2 == 1) {
        return 0;
      }
      lVar6 = 0;
      uVar8 = 0x10;
      do {
        uVar1 = lVar6 + 2;
        if ((int)uVar3 < 4) {
          if (uVar3 == 1) {
            cVar5 = '\x01';
          }
          else if (uVar3 == 2) {
LAB_005d7b98:
            cVar5 = '\0';
          }
          else {
            if (uVar3 != 3) goto LAB_005d7b70;
            cVar5 = (char)uVar1 + '\x02';
          }
        }
        else if ((int)uVar3 < 6) {
          if (uVar3 == 4) {
            cVar5 = (char)(0xa040302 >> (ulong)((uint)uVar8 & 0x1f));
          }
          else if (uVar3 == 5) {
            cVar5 = (char)(0x706040302 >> (uVar8 & 0x3f));
          }
          else {
LAB_005d7b70:
            if (uVar1 < 8) {
              cVar5 = (char)(0xc0b070605040302 >> (uVar8 & 0x3f));
            }
            else {
              if (0x1f < uVar1) goto LAB_005d7b98;
              cVar5 = (char)uVar1 + '\f';
            }
          }
        }
        else if (uVar3 == 6) {
          cVar5 = (char)(0xc0b05040302 >> (uVar8 & 0x3f));
        }
        else {
          if (uVar3 != 7) goto LAB_005d7b70;
          cVar5 = (char)(0xc0b0a05040302 >> (uVar8 & 0x3f));
        }
        param_2[lVar6 + 2] = cVar5;
        lVar6 = lVar6 + 1;
        uVar8 = uVar8 + 8;
        if (uVar2 - 1 == lVar6) {
          return 0;
        }
      } while( true );
    }
    uVar4 = 0;
    if (param_3 != 0) {
      uVar3 = *(uint *)(param_1 + 8);
      if (uVar3 != 0) {
        uVar2 = param_3 - 1U;
        if ((ulong)(uVar3 - 1) <= param_3 - 1U) {
          uVar2 = (ulong)(uVar3 - 1);
        }
        uVar7 = (undefined1)(0x202020202020102 >> (((ulong)uVar3 & 7) << 3));
        if (7 < uVar3) {
          uVar7 = 2;
        }
        *param_2 = uVar7;
        if (uVar2 != 0) {
          uVar7 = (undefined1)(0x3030303030301 >> (((ulong)(uVar3 - 1) & 7) << 3));
          if (6 < uVar3 - 1) {
            uVar7 = 3;
          }
          param_2[1] = uVar7;
          if (uVar2 != 1) {
            lVar6 = 0;
            uVar8 = 0x10;
            do {
              uVar1 = lVar6 + 2;
              if ((int)uVar3 < 4) {
                if (uVar3 == 1) {
                  cVar5 = '\x01';
                }
                else if (uVar3 == 2) {
LAB_005d7a18:
                  cVar5 = '\0';
                }
                else {
                  if (uVar3 != 3) goto LAB_005d79f0;
                  cVar5 = (char)uVar1 + '\x02';
                }
              }
              else if ((int)uVar3 < 6) {
                if (uVar3 == 4) {
                  cVar5 = (char)(0xa040302 >> (ulong)((uint)uVar8 & 0x1f));
                }
                else if (uVar3 == 5) {
                  cVar5 = (char)(0x706040302 >> (uVar8 & 0x3f));
                }
                else {
LAB_005d79f0:
                  if (uVar1 < 8) {
                    cVar5 = (char)(0xc0b070605040302 >> (uVar8 & 0x3f));
                  }
                  else {
                    if (0x1f < uVar1) goto LAB_005d7a18;
                    cVar5 = (char)uVar1 + '\f';
                  }
                }
              }
              else if (uVar3 == 6) {
                cVar5 = (char)(0xc0b05040302 >> (uVar8 & 0x3f));
              }
              else {
                if (uVar3 != 7) goto LAB_005d79f0;
                cVar5 = (char)(0xc0b0a05040302 >> (uVar8 & 0x3f));
              }
              param_2[lVar6 + 2] = cVar5;
              lVar6 = lVar6 + 1;
              uVar8 = uVar8 + 8;
              if (uVar2 - 1 == lVar6) {
                return 0;
              }
            } while( true );
          }
        }
        return 0;
      }
    }
  }
  return uVar4;
}


// ===== 005d7ba4  ma_data_converter_reset =====

undefined8 ma_data_converter_reset(long param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  if (*(char *)(param_1 + 299) != '\0') {
    if ((*(long *)(param_1 + 0x70) != 0) &&
       (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x70) + 0x48),
       UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x005d7bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)
                        (*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x68));
      return uVar1;
    }
    return 0xffffffe3;
  }
  return 0;
}


// ===== 005d7be8  ma_channel_map_init_blank =====

void ma_channel_map_init_blank(void *param_1,uint param_2)

{
  if ((param_1 != (void *)0x0) && (param_2 != 0)) {
    memset(param_1,0,(ulong)param_2);
    return;
  }
  return;
}


// ===== 005d7c00  ma_channel_map_copy =====

void ma_channel_map_copy(void *param_1,void *param_2,uint param_3)

{
  if (((param_1 != (void *)0x0) && (param_2 != (void *)0x0)) && (param_3 != 0)) {
    memcpy(param_1,param_2,(ulong)param_3);
    return;
  }
  return;
}


// ===== 005d7c18  ma_channel_map_is_valid =====

uint ma_channel_map_is_valid(long param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    if (param_2 != 1) {
      uVar1 = 0;
      uVar2 = 0;
      do {
        if (param_1 == 0) {
          if ((uint)uVar2 < param_2) {
            if ((int)param_2 < 5) {
              if (param_2 - 2 < 2) goto LAB_005d7c90;
              if (param_2 == 4) {
                uVar3 = 0xa040302U >> (ulong)((uint)uVar1 & 0x1f) & 0xff;
              }
              else {
                if (param_2 == 1) {
                  return 0;
                }
LAB_005d7d14:
                if (7 < (uint)uVar2) goto LAB_005d7c90;
                uVar3 = (uint)(0xc0b070605040302 >> (uVar1 & 0x38)) & 0xf;
              }
            }
            else if (param_2 == 5) {
              uVar3 = (uint)(0x706040302 >> (uVar1 & 0x3f)) & 0xff;
            }
            else if (param_2 == 6) {
              uVar3 = (uint)(0xc0b05040302 >> (uVar1 & 0x3f)) & 0xff;
            }
            else {
              if (param_2 != 7) goto LAB_005d7d14;
              uVar3 = (uint)(0xc0b0a05040302 >> (uVar1 & 0x3f)) & 0xff;
            }
            goto LAB_005d7c88;
          }
        }
        else {
          uVar3 = (uint)*(byte *)(param_1 + uVar2);
LAB_005d7c88:
          if (uVar3 == 1) {
            return 0;
          }
        }
LAB_005d7c90:
        uVar2 = uVar2 + 1;
        uVar1 = uVar1 + 8;
      } while (param_2 != uVar2);
    }
    param_2 = 1;
  }
  return param_2;
}


// ===== 005d7d34  ma_channel_map_is_equal =====

undefined4 ma_channel_map_is_equal(byte *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_1 == param_2) {
    return 1;
  }
  if (param_3 == 0) {
    return 1;
  }
  if (param_1 == (byte *)0x0) {
    if (7 < param_3) {
      uVar1 = 2;
      goto joined_r0x005d7d90;
    }
    uVar1 = (uint)(0x2020202020201 >> (((ulong)(param_3 - 1) & 7) << 3)) & 3;
    if (param_2 == (byte *)0x0) goto LAB_005d7d94;
LAB_005d7d50:
    if (uVar1 != *param_2) {
      return 0;
    }
  }
  else {
    uVar1 = (uint)*param_1;
joined_r0x005d7d90:
    if (param_2 != (byte *)0x0) goto LAB_005d7d50;
LAB_005d7d94:
    if (param_3 < 8) {
      if (uVar1 != ((uint)(0x2020202020201 >> (((ulong)(param_3 - 1) & 7) << 3)) & 3)) {
        return 0;
      }
    }
    else if (uVar1 != 2) {
      return 0;
    }
  }
  uVar1 = param_3 - 1;
  if (uVar1 == 0) {
    return 1;
  }
  if (param_1 == (byte *)0x0) {
    if (param_3 < 8) {
      uVar2 = (uint)(0x3030303030301 >> (((ulong)uVar1 & 7) << 3)) & 3;
    }
    else {
      uVar2 = 3;
    }
  }
  else {
    uVar2 = (uint)param_1[1];
  }
  if (param_2 == (byte *)0x0) {
    if (7 < param_3) {
      if (uVar2 != 3) {
        return 0;
      }
      goto LAB_005d7e60;
    }
    uVar1 = (uint)(0x3030303030301 >> (((ulong)uVar1 & 7) << 3)) & 3;
  }
  else {
    uVar1 = (uint)param_2[1];
  }
  if (uVar2 != uVar1) {
    return 0;
  }
LAB_005d7e60:
  if (param_3 == 2) {
    return 1;
  }
  uVar3 = 2;
  uVar4 = 0x10;
  do {
    uVar1 = (uint)uVar3;
    if (param_1 == (byte *)0x0) {
      if (uVar1 < param_3) {
        if ((int)param_3 < 4) {
          uVar2 = param_3;
          if (param_3 != 1) {
            if (param_3 == 2) goto LAB_005d7f7c;
            if (param_3 != 3) goto LAB_005d7f38;
            uVar2 = (uVar1 & 0xff) + 2;
          }
        }
        else if ((int)param_3 < 6) {
          if (param_3 == 4) {
            uVar2 = 0xa040302U >> (ulong)((uint)uVar4 & 0x1f) & 0xff;
          }
          else if (param_3 == 5) {
            uVar2 = (uint)(0x706040302 >> (uVar4 & 0x3f)) & 0xff;
          }
          else {
LAB_005d7f38:
            if (uVar1 < 8) {
              uVar2 = (uint)(0xc0b070605040302 >> (uVar4 & 0x38)) & 0xf;
            }
            else {
              if (0x1f < uVar1) goto LAB_005d7f7c;
              uVar2 = (uVar1 & 0xff) + 0xc;
            }
          }
        }
        else if (param_3 == 6) {
          uVar2 = (uint)(0xc0b05040302 >> (uVar4 & 0x3f)) & 0xff;
        }
        else {
          if (param_3 != 7) goto LAB_005d7f38;
          uVar2 = (uint)(0xc0b0a05040302 >> (uVar4 & 0x3f)) & 0xff;
        }
      }
      else {
LAB_005d7f7c:
        uVar2 = 0;
      }
    }
    else {
      uVar2 = (uint)param_1[uVar3];
    }
    if (param_2 == (byte *)0x0) {
      if (uVar1 < param_3) {
        if ((int)param_3 < 4) {
          if (param_3 == 1) {
            uVar1 = 1;
          }
          else {
            if (param_3 == 2) goto LAB_005d804c;
            if (param_3 != 3) goto LAB_005d8008;
            uVar1 = (uVar1 & 0xff) + 2;
          }
        }
        else if ((int)param_3 < 6) {
          if (param_3 == 4) {
            uVar1 = 0xa040302U >> (ulong)((uint)uVar4 & 0x1f) & 0xff;
          }
          else if (param_3 == 5) {
            uVar1 = (uint)(0x706040302 >> (uVar4 & 0x3f)) & 0xff;
          }
          else {
LAB_005d8008:
            if (uVar1 < 8) {
              uVar1 = (uint)(0xc0b070605040302 >> (uVar4 & 0x38)) & 0xf;
            }
            else {
              if (0x1f < uVar1) goto LAB_005d804c;
              uVar1 = (uVar1 & 0xff) + 0xc;
            }
          }
        }
        else if (param_3 == 6) {
          uVar1 = (uint)(0xc0b05040302 >> (uVar4 & 0x3f)) & 0xff;
        }
        else {
          if (param_3 != 7) goto LAB_005d8008;
          uVar1 = (uint)(0xc0b0a05040302 >> (uVar4 & 0x3f)) & 0xff;
        }
      }
      else {
LAB_005d804c:
        uVar1 = 0;
      }
    }
    else {
      uVar1 = (uint)param_2[uVar3];
    }
    if (uVar2 != uVar1) {
      return 0;
    }
    uVar3 = uVar3 + 1;
    uVar4 = uVar4 + 8;
    if (param_3 == uVar3) {
      return 1;
    }
  } while( true );
}


// ===== 005d807c  ma_channel_map_is_blank =====

char * ma_channel_map_is_blank(char *param_1,uint param_2)

{
  ulong uVar1;
  
  if (param_1 != (char *)0x0) {
    if (param_2 != 0) {
      uVar1 = (ulong)param_2;
      do {
        if (*param_1 != '\0') {
          return (char *)0x0;
        }
        uVar1 = uVar1 - 1;
        param_1 = param_1 + 1;
      } while (uVar1 != 0);
    }
    param_1 = (char *)0x1;
  }
  return param_1;
}


// ===== 005d80a8  ma_convert_frames =====

void ma_convert_frames(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                      undefined4 param_9,undefined4 param_10)

{
  long lVar1;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined4 local_34;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_98 = param_9;
  local_90 = param_10;
  uStack_80 = 0;
  local_88 = 0;
  uStack_6c = 0;
  local_74 = 0;
  uStack_3c = 0;
  local_44 = 0;
  local_5c = 0;
  local_64 = 0;
  local_4c = 0;
  local_54 = 0;
  local_34 = 0;
  local_78 = 0;
  local_30 = DAT_0024e8e0;
  local_a0 = param_8;
  uStack_9c = param_3;
  uStack_94 = param_4;
  uStack_8c = param_5;
  ma_convert_frames_ex(param_1,param_2,param_6,param_7,&local_a0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005d8144  ma_convert_frames_ex =====

void ma_convert_frames_ex(long param_1,void *param_2,undefined8 param_3,void *param_4,long param_5)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  undefined8 local_1b0;
  void *local_1a8;
  size_t local_1a0 [11];
  void *local_148;
  int local_140;
  undefined8 local_138;
  long local_130;
  undefined8 local_128;
  void *local_88;
  int local_80;
  char local_75;
  char local_73;
  void *local_70;
  void *local_68;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pvVar3 = (void *)0x0;
  local_68 = param_4;
  local_60 = param_2;
  if ((param_4 == (void *)0x0) || (param_5 == 0)) goto LAB_005d81a4;
  iVar2 = FUN_005b26b8(param_5,local_1a0);
  if (iVar2 == 0) {
    if (local_1a0[0] == 0) {
      iVar2 = ma_data_converter_init_preallocated(param_5,0,local_1a0);
      pvVar3 = (void *)0x0;
      if (iVar2 != 0) goto LAB_005d81a4;
    }
    else {
      pvVar3 = malloc(local_1a0[0]);
      if (pvVar3 == (void *)0x0) goto LAB_005d81a4;
      iVar2 = ma_data_converter_init_preallocated(param_5,pvVar3,local_1a0);
      if (iVar2 != 0) {
        free(pvVar3);
        goto LAB_005d81a0;
      }
    }
    local_73 = '\x01';
    if (param_1 == 0) {
      local_60 = (void *)0x0;
      pvVar3 = param_4;
      if ((local_75 != '\0') &&
         (((local_130 == 0 || (*(code **)(local_130 + 0x40) == (code *)0x0)) ||
          (iVar2 = (**(code **)(local_130 + 0x40))(local_128,local_138,param_4,&local_60),
          pvVar3 = local_60, iVar2 == -0x1d)))) {
        local_60 = (void *)0x0;
        do {
          local_1b0 = 0xffffffff;
          local_1a8 = param_4;
          iVar2 = ma_data_converter_process_pcm_frames(local_1a0,param_3,&local_1a8,0,&local_1b0);
          pvVar3 = local_60;
          if (iVar2 != 0) break;
          param_4 = (void *)((long)param_4 - (long)local_1a8);
          local_68 = param_4;
        } while (param_4 != (void *)0x0);
      }
    }
    else {
      iVar2 = ma_data_converter_process_pcm_frames(local_1a0,param_3,&local_68,param_1,&local_60);
      pvVar3 = local_60;
      if (iVar2 != 0) {
        local_60 = (void *)0x0;
        pvVar3 = local_60;
      }
    }
    local_60 = pvVar3;
    if (((local_75 != '\0') && (local_130 != 0)) &&
       ((*(code **)(local_130 + 0x10) != (code *)0x0 &&
        (((**(code **)(local_130 + 0x10))(local_128,local_138,0), local_80 != 0 &&
         (local_88 != (void *)0x0)))))) {
      free(local_88);
    }
    if ((local_140 != 0) && (local_148 != (void *)0x0)) {
      free(local_148);
    }
    pvVar3 = local_60;
    if ((local_73 != '\0') && (local_70 != (void *)0x0)) {
      free(local_70);
      pvVar3 = local_60;
    }
  }
  else {
LAB_005d81a0:
    pvVar3 = (void *)0x0;
  }
LAB_005d81a4:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pvVar3);
  }
  return;
}


// ===== 005d8338  ma_aligned_malloc =====

ulong ma_aligned_malloc(long param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  void *pvVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar1 = param_2 + 7;
  if (param_3 == (undefined8 *)0x0) {
    pvVar2 = malloc(lVar1 + param_1);
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
  }
  else {
    if ((code *)param_3[1] == (code *)0x0) {
      return 0;
    }
    pvVar2 = (void *)(*(code *)param_3[1])(lVar1 + param_1,*param_3);
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
  }
  uVar3 = lVar1 + (long)pvVar2 & -param_2;
  *(void **)(uVar3 - 8) = pvVar2;
  return uVar3;
}


// ===== 005d83ac  ma_rb_init =====

void ma_rb_init(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ma_rb_init_ex(param_1,1,0,param_2,param_3,param_4);
  return;
}


// ===== 005d83c4  ma_rb_uninit =====

void ma_rb_uninit(long *param_1)

{
  if ((((param_1 != (long *)0x0) && (*(char *)((long)param_1 + 0x1c) != '\0')) &&
      (*(long *)(*param_1 + -8) != 0)) && ((code *)param_1[7] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x005d83ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_1[7])(*(long *)(*param_1 + -8),param_1[4]);
    return;
  }
  return;
}


// ===== 005d83f4  ma_aligned_free =====

void ma_aligned_free(long param_1,undefined8 *param_2)

{
  void *__ptr;
  
  __ptr = *(void **)(param_1 + -8);
  if (__ptr != (void *)0x0) {
    if (param_2 == (undefined8 *)0x0) {
      free(__ptr);
      return;
    }
    if ((code *)param_2[3] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005d840c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_2[3])(__ptr,*param_2);
      return;
    }
  }
  return;
}


// ===== 005d8418  ma_rb_reset =====

void ma_rb_reset(long param_1)

{
  if (param_1 != 0) {
    FUN_003410a0(0,param_1 + 0x14);
    FUN_003410a0(0,param_1 + 0x18);
  }
  return;
}


// ===== 005d8450  ma_rb_acquire_read =====

undefined4 ma_rb_acquire_read(long *param_1,ulong *param_2,long *param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar2 = 0xfffffffe;
  if (((param_1 != (long *)0x0) && (param_2 != (ulong *)0x0)) && (param_3 != (long *)0x0)) {
    uVar3 = (uint)*(undefined8 *)((long)param_1 + 0x14);
    if ((int)(uVar3 ^ (uint)param_1[3]) < 0) {
      uVar5 = *(uint *)(param_1 + 1);
    }
    else {
      uVar5 = (uint)param_1[3] & 0x7fffffff;
    }
    uVar4 = (ulong)(uVar5 - (uVar3 & 0x7fffffff));
    uVar2 = 0;
    uVar1 = *param_2;
    if (uVar4 <= *param_2) {
      uVar1 = uVar4;
    }
    *param_2 = uVar1;
    *param_3 = *param_1 + (*(ulong *)((long)param_1 + 0x14) & 0x7fffffff);
  }
  return uVar2;
}


// ===== 005d84bc  ma_rb_commit_read =====

undefined8 ma_rb_commit_read(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 != 0) {
    uVar3 = (uint)*(undefined8 *)(param_1 + 0x14);
    uVar1 = (uVar3 & 0x7fffffff) + param_2;
    if (uVar1 <= *(uint *)(param_1 + 8)) {
      uVar3 = uVar3 & 0x80000000;
      uVar2 = uVar3 ^ 0x80000000;
      if (uVar1 != *(uint *)(param_1 + 8)) {
        uVar2 = uVar1 | uVar3;
      }
      FUN_003410a0(uVar2);
      return 0;
    }
  }
  return 0xfffffffe;
}


// ===== 005d8514  ma_rb_acquire_write =====

undefined4 ma_rb_acquire_write(long *param_1,size_t *param_2,undefined8 *param_3)

{
  void *__s;
  size_t sVar1;
  char cVar2;
  undefined4 uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  
  uVar3 = 0xfffffffe;
  if (((param_1 != (long *)0x0) && (param_2 != (size_t *)0x0)) && (param_3 != (undefined8 *)0x0)) {
    uVar5 = (uint)*(undefined8 *)((long)param_1 + 0x14);
    if ((int)((uint)param_1[3] ^ uVar5) < 0) {
      uVar5 = uVar5 & 0x7fffffff;
    }
    else {
      uVar5 = *(uint *)(param_1 + 1);
    }
    uVar4 = (ulong)(uVar5 - ((uint)param_1[3] & 0x7fffffff));
    lVar6 = *param_1;
    sVar1 = *param_2;
    if (uVar4 <= *param_2) {
      sVar1 = uVar4;
    }
    *param_2 = sVar1;
    cVar2 = *(char *)((long)param_1 + 0x1d);
    __s = (void *)(lVar6 + (param_1[3] & 0x7fffffffU));
    uVar3 = 0;
    *param_3 = __s;
    if (((cVar2 != '\0') && (lVar6 != 0)) && (*param_2 != 0)) {
      memset(__s,0,*param_2);
      uVar3 = 0;
    }
  }
  return uVar3;
}


// ===== 005d85b0  ma_rb_commit_write =====

undefined8 ma_rb_commit_write(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 != 0) {
    uVar3 = (uint)*(undefined8 *)(param_1 + 0x18);
    uVar1 = (uVar3 & 0x7fffffff) + param_2;
    if (uVar1 <= *(uint *)(param_1 + 8)) {
      uVar3 = uVar3 & 0x80000000;
      uVar2 = uVar3 ^ 0x80000000;
      if (uVar1 != *(uint *)(param_1 + 8)) {
        uVar2 = uVar1 | uVar3;
      }
      FUN_003410a0(uVar2);
      return 0;
    }
  }
  return 0xfffffffe;
}


