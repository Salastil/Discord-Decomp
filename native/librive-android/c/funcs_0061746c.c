// ===== 0061746c  ma_dr_mp3_bind_seek_table =====

long ma_dr_mp3_bind_seek_table(long param_1,int param_2,long param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_1 != 0) {
    iVar1 = 0;
    if (param_2 != 0 && param_3 != 0) {
      iVar1 = param_2;
    }
    lVar2 = 0;
    if (param_2 != 0 && param_3 != 0) {
      lVar2 = param_3;
    }
    *(int *)(param_1 + 0x3e78) = iVar1;
    *(long *)(param_1 + 0x3e70) = lVar2;
    param_1 = 1;
  }
  return param_1;
}


// ===== 00617490  ma_dr_mp3_open_and_read_pcm_frames_f32 =====

void ma_dr_mp3_open_and_read_pcm_frames_f32
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 *param_6)

{
  long lVar1;
  int iVar2;
  undefined1 auStack_3f18 [6668];
  undefined8 uStack_250c;
  long local_2500;
  undefined8 local_24f8;
  undefined8 local_24f0;
  undefined8 local_24e8;
  code *local_24e0;
  code *local_24d8;
  code *local_24d0;
  undefined8 local_24c8;
  undefined1 auStack_24b8 [9272];
  long local_80;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_1 == 0) goto LAB_00617598;
  memset(auStack_3f18,0,0x3ec0);
  local_2500 = param_1;
  local_24f8 = param_2;
  local_24f0 = param_3;
  if (param_6 == (undefined8 *)0x0) {
    local_24e0 = malloc;
    local_24d8 = realloc;
    local_24d0 = free;
LAB_00617544:
    iVar2 = FUN_005f95d0(auStack_3f18,auStack_24b8);
    if (iVar2 != 0) {
      uStack_250c = local_24c8;
      param_1 = FUN_006175cc(auStack_3f18,param_4,param_5);
      goto LAB_00617598;
    }
    param_1 = local_80;
    if (local_80 == 0) goto LAB_00617598;
    if (local_24d0 != (code *)0x0) {
      (*local_24d0)(local_80,local_24e8);
    }
  }
  else {
    local_24e8 = *param_6;
    local_24e0 = (code *)param_6[1];
    local_24d8 = (code *)param_6[2];
    local_24d0 = (code *)param_6[3];
    if ((local_24d0 != (code *)0x0) && (local_24e0 != (code *)0x0 || local_24d8 != (code *)0x0))
    goto LAB_00617544;
  }
  param_1 = 0;
LAB_00617598:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


// ===== 006175cc  FUN_006175cc =====

void * FUN_006175cc(long param_1,undefined8 *param_2,ulong *param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  void *__dest;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  void *__src;
  undefined1 auStack_4070 [16384];
  long local_70;
  
  lVar4 = tpidr_el0;
  uVar10 = 0;
  local_70 = *(long *)(lVar4 + 0x28);
  __src = (void *)0x0;
  uVar9 = 0;
  do {
    uVar3 = 0;
    if (*(uint *)(param_1 + 0x1a0c) != 0) {
      uVar3 = 0x1000 / *(uint *)(param_1 + 0x1a0c);
    }
    uVar5 = ma_dr_mp3_read_pcm_frames_f32(param_1,(ulong)uVar3,auStack_4070);
    if (uVar5 == 0) break;
    uVar1 = uVar5 + uVar9;
    __dest = __src;
    uVar7 = uVar10;
    if (uVar10 < uVar1) {
      uVar7 = uVar10 * 2;
      uVar2 = *(uint *)(param_1 + 0x1a0c);
      if (uVar7 < uVar1 || uVar7 - uVar1 == 0) {
        uVar7 = uVar1;
      }
      uVar8 = uVar7 * uVar2;
      if ((uVar8 >> 0x1e & 0xffffffff) != 0) break;
      lVar6 = uVar8 * 4;
      if (*(code **)(param_1 + 0x1a40) == (code *)0x0) {
        if (((*(code **)(param_1 + 0x1a38) == (code *)0x0) || (*(long *)(param_1 + 0x1a48) == 0)) ||
           (__dest = (void *)(**(code **)(param_1 + 0x1a38))
                                       (lVar6,*(undefined8 *)(param_1 + 0x1a30)),
           __dest == (void *)0x0)) goto LAB_0061771c;
        if (__src != (void *)0x0) {
          memcpy(__dest,__src,uVar10 * uVar2 * 4);
          (**(code **)(param_1 + 0x1a48))(__src,*(undefined8 *)(param_1 + 0x1a30));
        }
      }
      else {
        __dest = (void *)(**(code **)(param_1 + 0x1a40))
                                   (__src,lVar6,*(undefined8 *)(param_1 + 0x1a30));
        if (__dest == (void *)0x0) {
LAB_0061771c:
          if (__src == (void *)0x0) {
            __src = (void *)0x0;
            if (param_2 == (undefined8 *)0x0) goto LAB_00617750;
            goto LAB_00617744;
          }
          if (*(code **)(param_1 + 0x1a48) != (code *)0x0) {
            (**(code **)(param_1 + 0x1a48))(__src,*(undefined8 *)(param_1 + 0x1a30));
          }
          break;
        }
      }
    }
    uVar10 = uVar7;
    memcpy((void *)((long)__dest + uVar9 * *(uint *)(param_1 + 0x1a0c) * 4),auStack_4070,
           uVar5 * *(uint *)(param_1 + 0x1a0c) * 4);
    uVar9 = uVar1;
    __src = __dest;
  } while (uVar5 == uVar3);
  if (param_2 != (undefined8 *)0x0) {
LAB_00617744:
    *param_2 = *(undefined8 *)(param_1 + 0x1a0c);
  }
LAB_00617750:
  if ((*(code **)(param_1 + 0x1a18) == FUN_005ffde8) &&
     (*(FILE **)(param_1 + 0x1a28) != (FILE *)0x0)) {
    fclose(*(FILE **)(param_1 + 0x1a28));
    *(undefined8 *)(param_1 + 0x1a28) = 0;
  }
  if ((*(long *)(param_1 + 0x3e98) != 0) && (*(code **)(param_1 + 0x1a48) != (code *)0x0)) {
    (**(code **)(param_1 + 0x1a48))(*(long *)(param_1 + 0x3e98),*(undefined8 *)(param_1 + 0x1a30));
  }
  if (param_3 != (ulong *)0x0) {
    *param_3 = uVar9;
  }
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return __src;
}


// ===== 006177ec  ma_dr_mp3_open_and_read_pcm_frames_s16 =====

void ma_dr_mp3_open_and_read_pcm_frames_s16
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 *param_6)

{
  long lVar1;
  int iVar2;
  undefined1 auStack_3f18 [6668];
  undefined8 uStack_250c;
  long local_2500;
  undefined8 local_24f8;
  undefined8 local_24f0;
  undefined8 local_24e8;
  code *local_24e0;
  code *local_24d8;
  code *local_24d0;
  undefined8 local_24c8;
  undefined1 auStack_24b8 [9272];
  long local_80;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_1 == 0) goto LAB_006178f4;
  memset(auStack_3f18,0,0x3ec0);
  local_2500 = param_1;
  local_24f8 = param_2;
  local_24f0 = param_3;
  if (param_6 == (undefined8 *)0x0) {
    local_24e0 = malloc;
    local_24d8 = realloc;
    local_24d0 = free;
LAB_006178a0:
    iVar2 = FUN_005f95d0(auStack_3f18,auStack_24b8);
    if (iVar2 != 0) {
      uStack_250c = local_24c8;
      param_1 = FUN_00617928(auStack_3f18,param_4,param_5);
      goto LAB_006178f4;
    }
    param_1 = local_80;
    if (local_80 == 0) goto LAB_006178f4;
    if (local_24d0 != (code *)0x0) {
      (*local_24d0)(local_80,local_24e8);
    }
  }
  else {
    local_24e8 = *param_6;
    local_24e0 = (code *)param_6[1];
    local_24d8 = (code *)param_6[2];
    local_24d0 = (code *)param_6[3];
    if ((local_24d0 != (code *)0x0) && (local_24e0 != (code *)0x0 || local_24d8 != (code *)0x0))
    goto LAB_006178a0;
  }
  param_1 = 0;
LAB_006178f4:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


// ===== 00617928  FUN_00617928 =====

void * FUN_00617928(long param_1,undefined8 *param_2,ulong *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  void *__dest;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  void *__src;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong local_2080;
  undefined1 auStack_2070 [8192];
  long local_70;
  
  local_2080 = 0;
  lVar4 = tpidr_el0;
  __src = (void *)0x0;
  local_70 = *(long *)(lVar4 + 0x28);
  uVar11 = 0;
  while (*(long *)(param_1 + 0x1a18) != 0) {
    uVar10 = 0;
    uVar3 = 0;
    if (*(uint *)(param_1 + 0x1a0c) != 0) {
      uVar3 = 0x1000 / *(uint *)(param_1 + 0x1a0c);
    }
    uVar9 = (ulong)uVar3;
    while (uVar9 != 0) {
      uVar1 = *(uint *)(param_1 + 0x1a5c);
      uVar2 = *(uint *)(param_1 + 0x1a58);
      uVar8 = uVar9;
      if (uVar1 <= uVar9) {
        uVar8 = (ulong)uVar1;
      }
      memcpy(auStack_2070 + uVar10 * *(uint *)(param_1 + 0x1a0c) * 2,
             (void *)(param_1 + 0x1a60 + (ulong)uVar2 * (ulong)*(uint *)(param_1 + 0x1a50) * 2),
             uVar8 * *(uint *)(param_1 + 0x1a0c) * 2);
      uVar9 = uVar9 - uVar8;
      *(uint *)(param_1 + 0x1a58) = uVar2 + (int)uVar8;
      uVar10 = uVar8 + uVar10;
      *(uint *)(param_1 + 0x1a5c) = uVar1 - (int)uVar8;
      *(ulong *)(param_1 + 0x3e60) = *(long *)(param_1 + 0x3e60) + uVar8;
      if ((uVar9 == 0) || (iVar5 = FUN_005f95d0(param_1,param_1 + 0x1a60), iVar5 == 0)) break;
    }
    if (uVar10 == 0) break;
    uVar9 = uVar10 + uVar11;
    __dest = __src;
    if (local_2080 < uVar9) {
      uVar8 = local_2080 * 2;
      uVar1 = *(uint *)(param_1 + 0x1a0c);
      local_2080 = uVar8;
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        local_2080 = uVar9;
      }
      uVar7 = local_2080 * uVar1;
      if ((uVar7 >> 0x1f & 0xffffffff) != 0) break;
      lVar6 = uVar7 * 2;
      if (*(code **)(param_1 + 0x1a40) == (code *)0x0) {
        if (((*(code **)(param_1 + 0x1a38) == (code *)0x0) || (*(long *)(param_1 + 0x1a48) == 0)) ||
           (__dest = (void *)(**(code **)(param_1 + 0x1a38))
                                       (lVar6,*(undefined8 *)(param_1 + 0x1a30)),
           __dest == (void *)0x0)) goto LAB_00617aec;
        if (__src != (void *)0x0) {
          memcpy(__dest,__src,uVar8 * uVar1);
          (**(code **)(param_1 + 0x1a48))(__src,*(undefined8 *)(param_1 + 0x1a30));
        }
      }
      else {
        __dest = (void *)(**(code **)(param_1 + 0x1a40))
                                   (__src,lVar6,*(undefined8 *)(param_1 + 0x1a30));
        if (__dest == (void *)0x0) {
LAB_00617aec:
          if (__src == (void *)0x0) {
            __src = (void *)0x0;
            if (param_2 == (undefined8 *)0x0) goto LAB_00617b20;
            goto LAB_00617b14;
          }
          if (*(code **)(param_1 + 0x1a48) != (code *)0x0) {
            (**(code **)(param_1 + 0x1a48))(__src,*(undefined8 *)(param_1 + 0x1a30));
          }
          break;
        }
      }
    }
    __src = __dest;
    memcpy((void *)((long)__src + uVar11 * *(uint *)(param_1 + 0x1a0c) * 2),auStack_2070,
           uVar10 * *(uint *)(param_1 + 0x1a0c) * 2);
    uVar11 = uVar9;
    if (uVar10 != uVar3) break;
  }
  if (param_2 != (undefined8 *)0x0) {
LAB_00617b14:
    *param_2 = *(undefined8 *)(param_1 + 0x1a0c);
  }
LAB_00617b20:
  if ((*(code **)(param_1 + 0x1a18) == FUN_005ffde8) &&
     (*(FILE **)(param_1 + 0x1a28) != (FILE *)0x0)) {
    fclose(*(FILE **)(param_1 + 0x1a28));
    *(undefined8 *)(param_1 + 0x1a28) = 0;
  }
  if ((*(long *)(param_1 + 0x3e98) != 0) && (*(code **)(param_1 + 0x1a48) != (code *)0x0)) {
    (**(code **)(param_1 + 0x1a48))(*(long *)(param_1 + 0x3e98),*(undefined8 *)(param_1 + 0x1a30));
  }
  if (param_3 != (ulong *)0x0) {
    *param_3 = uVar11;
  }
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return __src;
}


// ===== 00617bbc  ma_dr_mp3_open_memory_and_read_pcm_frames_f32 =====

void ma_dr_mp3_open_memory_and_read_pcm_frames_f32
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined1 auStack_3f18 [6668];
  undefined8 uStack_250c;
  code *local_2500;
  code *local_24f8;
  undefined1 *local_24f0;
  undefined8 local_24e8;
  code *local_24e0;
  code *local_24d8;
  code *local_24d0;
  undefined8 local_24c8;
  undefined1 auStack_24b8 [9272];
  long local_80;
  long local_70;
  long local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  memset(auStack_3f18,0,0x3ec0);
  lVar3 = 0;
  if ((param_1 == 0) || (param_2 == 0)) goto LAB_00617ce4;
  local_2500 = FUN_006001dc;
  local_24f8 = FUN_00600238;
  local_24f0 = auStack_3f18;
  local_70 = param_1;
  local_68 = param_2;
  if (param_5 == (undefined8 *)0x0) {
    local_24e0 = malloc;
    local_24d8 = realloc;
    local_24d0 = free;
LAB_00617c90:
    iVar2 = FUN_005f95d0(auStack_3f18,auStack_24b8);
    if (iVar2 != 0) {
      uStack_250c = local_24c8;
      lVar3 = FUN_006175cc(auStack_3f18,param_3,param_4);
      goto LAB_00617ce4;
    }
    lVar3 = local_80;
    if (local_80 == 0) goto LAB_00617ce4;
    if (local_24d0 != (code *)0x0) {
      (*local_24d0)(local_80,local_24e8);
    }
  }
  else {
    local_24e8 = *param_5;
    local_24e0 = (code *)param_5[1];
    local_24d8 = (code *)param_5[2];
    local_24d0 = (code *)param_5[3];
    if ((local_24d0 != (code *)0x0) && (local_24e0 != (code *)0x0 || local_24d8 != (code *)0x0))
    goto LAB_00617c90;
  }
  lVar3 = 0;
LAB_00617ce4:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar3);
  }
  return;
}


// ===== 00617d18  ma_dr_mp3_open_memory_and_read_pcm_frames_s16 =====

void ma_dr_mp3_open_memory_and_read_pcm_frames_s16
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined1 auStack_3f18 [6668];
  undefined8 uStack_250c;
  code *local_2500;
  code *local_24f8;
  undefined1 *local_24f0;
  undefined8 local_24e8;
  code *local_24e0;
  code *local_24d8;
  code *local_24d0;
  undefined8 local_24c8;
  undefined1 auStack_24b8 [9272];
  long local_80;
  long local_70;
  long local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  memset(auStack_3f18,0,0x3ec0);
  lVar3 = 0;
  if ((param_1 == 0) || (param_2 == 0)) goto LAB_00617e40;
  local_2500 = FUN_006001dc;
  local_24f8 = FUN_00600238;
  local_24f0 = auStack_3f18;
  local_70 = param_1;
  local_68 = param_2;
  if (param_5 == (undefined8 *)0x0) {
    local_24e0 = malloc;
    local_24d8 = realloc;
    local_24d0 = free;
LAB_00617dec:
    iVar2 = FUN_005f95d0(auStack_3f18,auStack_24b8);
    if (iVar2 != 0) {
      uStack_250c = local_24c8;
      lVar3 = FUN_00617928(auStack_3f18,param_3,param_4);
      goto LAB_00617e40;
    }
    lVar3 = local_80;
    if (local_80 == 0) goto LAB_00617e40;
    if (local_24d0 != (code *)0x0) {
      (*local_24d0)(local_80,local_24e8);
    }
  }
  else {
    local_24e8 = *param_5;
    local_24e0 = (code *)param_5[1];
    local_24d8 = (code *)param_5[2];
    local_24d0 = (code *)param_5[3];
    if ((local_24d0 != (code *)0x0) && (local_24e0 != (code *)0x0 || local_24d8 != (code *)0x0))
    goto LAB_00617dec;
  }
  lVar3 = 0;
LAB_00617e40:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar3);
  }
  return;
}


// ===== 00617e74  ma_dr_mp3_open_file_and_read_pcm_frames_f32 =====

void ma_dr_mp3_open_file_and_read_pcm_frames_f32
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_3ef8 [16064];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = ma_dr_mp3_init_file(auStack_3ef8,param_1,param_4);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_006175cc(auStack_3ef8,param_2,param_3);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 00617ef8  ma_dr_mp3_open_file_and_read_pcm_frames_s16 =====

void ma_dr_mp3_open_file_and_read_pcm_frames_s16
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_3ef8 [16064];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = ma_dr_mp3_init_file(auStack_3ef8,param_1,param_4);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00617928(auStack_3ef8,param_2,param_3);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 00617f7c  ma_dr_mp3_malloc =====

void * ma_dr_mp3_malloc(size_t param_1,undefined8 *param_2)

{
  void *pvVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    pvVar1 = malloc(param_1);
    return pvVar1;
  }
  if ((code *)param_2[1] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00617f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = (void *)(*(code *)param_2[1])(param_1,*param_2);
    return pvVar1;
  }
  if ((code *)param_2[2] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00617fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = (void *)(*(code *)param_2[2])(0,param_1,*param_2);
    return pvVar1;
  }
  return (void *)0x0;
}


// ===== 00617fb4  ma_dr_mp3_free =====

void ma_dr_mp3_free(void *param_1,undefined8 *param_2)

{
  if (param_2 == (undefined8 *)0x0) {
    free(param_1);
    return;
  }
  if ((param_1 != (void *)0x0) && ((code *)param_2[3] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00617fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_2[3])(param_1,*param_2);
    return;
  }
  return;
}


// ===== 00617fd4  FUN_00617fd4 =====

undefined8 * FUN_00617fd4(long param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if ((int)param_2 < 1) {
    if ((int)param_2 < -9999) {
      puVar2 = (undefined8 *)FUN_00618038();
    }
    else {
      puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + (long)(int)param_2 * 0x10);
    }
  }
  else {
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)param_2 * 0x10 + -0x10);
    if (*(undefined8 **)(param_1 + 8) <= puVar2) {
      puVar2 = &DAT_00285948;
    }
  }
  puVar1 = (undefined8 *)0x0;
  if (puVar2 != &DAT_00285948) {
    puVar1 = puVar2;
  }
  return puVar1;
}


// ===== 00618038  FUN_00618038 =====

undefined8 * FUN_00618038(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar4;
  undefined8 *puVar3;
  
  if (param_2 == -0x2712) {
    lVar1 = *(long *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x58);
  }
  else {
    if (param_2 != -0x2711) {
      if (param_2 == -10000) {
        return (undefined8 *)(*(long *)(param_1 + 0x18) + 0x4c0);
      }
      lVar1 = **(long **)(*(long *)(param_1 + 0x20) + 8);
      puVar3 = &DAT_00285948;
      if (-0x2712 - param_2 <= (int)(uint)*(byte *)(lVar1 + 4)) {
        puVar3 = (undefined8 *)(lVar1 + (-0x2713 - (long)param_2) * 0x10 + 0x38);
      }
      return puVar3;
    }
    lVar1 = *(long *)(param_1 + 0x18);
    if (*(long *)(param_1 + 0x20) == *(long *)(param_1 + 0x40)) {
      puVar3 = (undefined8 *)(param_1 + 0x58);
    }
    else {
      puVar3 = (undefined8 *)(**(long **)(*(long *)(param_1 + 0x20) + 8) + 0x18);
    }
    uVar2 = *puVar3;
  }
  *(undefined8 *)(lVar1 + 0x4b0) = uVar2;
  lVar4 = *(long *)(param_1 + 0x18);
  *(undefined4 *)(lVar1 + 0x4bc) = 7;
  return (undefined8 *)(lVar4 + 0x4b0);
}


// ===== 006180f0  lua_checkstack =====

/* lua_checkstack(lua_State*, int) */

void lua_checkstack(lua_State *param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  int local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((param_2 < 0x1f41) &&
     (lVar5 = *(long *)(param_1 + 8),
     (lVar5 - *(long *)(param_1 + 0x10) >> 4) + (long)param_2 < 0x1f41)) {
    if (0 < param_2) {
      if (*(long *)(param_1 + 0x28) - lVar5 <= (long)(ulong)(uint)(param_2 << 4)) {
        local_3c = param_2;
        iVar3 = FUN_00622224(param_1,FUN_006181cc,&local_3c);
        if (iVar3 != 0) goto LAB_00618140;
        lVar5 = *(long *)(param_1 + 8);
      }
      uVar1 = lVar5 + (long)param_2 * 0x10;
      if (*(ulong *)(*(long *)(param_1 + 0x20) + 0x10) < uVar1) {
        *(ulong *)(*(long *)(param_1 + 0x20) + 0x10) = uVar1;
      }
    }
    uVar4 = 1;
  }
  else {
LAB_00618140:
    uVar4 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 006181cc  FUN_006181cc =====

void FUN_006181cc(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x48);
  iVar1 = iVar2 + *param_2;
  if (*param_2 <= iVar2) {
    iVar1 = iVar2 << 1;
  }
  FUN_006222f4(param_1,iVar1,0);
  return;
}


// ===== 006181ec  lua_rawcheckstack =====

/* lua_rawcheckstack(lua_State*, int) */

void lua_rawcheckstack(lua_State *param_1,int param_2)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 8);
  if (*(long *)(param_1 + 0x28) - lVar4 <= (long)(param_2 << 4)) {
    iVar3 = *(int *)(param_1 + 0x48);
    iVar2 = iVar3 + param_2;
    if (param_2 <= iVar3) {
      iVar2 = iVar3 << 1;
    }
    FUN_006222f4(param_1,iVar2,0);
    lVar4 = *(long *)(param_1 + 8);
  }
  uVar1 = lVar4 + (long)param_2 * 0x10;
  if (*(ulong *)(*(long *)(param_1 + 0x20) + 0x10) < uVar1) {
    *(ulong *)(*(long *)(param_1 + 0x20) + 0x10) = uVar1;
  }
  return;
}


// ===== 00618260  lua_xmove =====

/* lua_xmove(lua_State*, lua_State*, int) */

void lua_xmove(lua_State *param_1,lua_State *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if (param_1 != param_2) {
    if (((byte)param_2[1] >> 2 & 1) != 0) {
      param_2[1] = (lua_State)((byte)param_2[1] & 0xfb);
      *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x30);
      *(lua_State **)(*(long *)(param_2 + 0x18) + 0x30) = param_2;
    }
    puVar1 = *(undefined8 **)(param_2 + 8);
    puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + (long)param_3 * -0x10);
    if (0 < param_3) {
      uVar3 = (ulong)(uint)param_3;
      puVar4 = puVar2;
      puVar5 = puVar1;
      do {
        uVar6 = *puVar4;
        uVar3 = uVar3 - 1;
        puVar5[1] = puVar4[1];
        *puVar5 = uVar6;
        puVar4 = puVar4 + 2;
        puVar5 = puVar5 + 2;
      } while (uVar3 != 0);
    }
    *(undefined8 **)(param_1 + 8) = puVar2;
    *(undefined8 **)(param_2 + 8) = puVar1 + (long)param_3 * 2;
  }
  return;
}


// ===== 006182cc  lua_xpush =====

/* lua_xpush(lua_State*, lua_State*, int) */

void lua_xpush(lua_State *param_1,lua_State *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (((byte)param_2[1] >> 2 & 1) != 0) {
    param_2[1] = (lua_State)((byte)param_2[1] & 0xfb);
    *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x30);
    *(lua_State **)(*(long *)(param_2 + 0x18) + 0x30) = param_2;
  }
  if (param_3 < 1) {
    if (param_3 < -9999) {
      puVar1 = (undefined8 *)FUN_00618038(param_1,param_3);
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + (long)param_3 * 0x10);
    }
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_3 * 0x10 + -0x10);
    if (*(undefined8 **)(param_1 + 8) <= puVar1) {
      puVar1 = &DAT_00285948;
    }
  }
  puVar2 = *(undefined8 **)(param_2 + 8);
  uVar3 = *puVar1;
  puVar2[1] = puVar1[1];
  *puVar2 = uVar3;
  *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 0x10;
  return;
}


// ===== 00618368  lua_newthread =====

/* lua_newthread(lua_State*) */

undefined1 * lua_newthread(lua_State *param_1)

{
  byte bVar1;
  lua_State lVar2;
  undefined1 *puVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  undefined8 *puVar7;
  
  if (*(ulong *)(*(long *)(param_1 + 0x18) + 0x40) <= *(ulong *)(*(long *)(param_1 + 0x18) + 0x48))
  {
    FUN_006239a4(param_1);
  }
  if (((byte)param_1[1] >> 2 & 1) != 0) {
    param_1[1] = (lua_State)((byte)param_1[1] & 0xfb);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
    *(lua_State **)(*(long *)(param_1 + 0x18) + 0x30) = param_1;
  }
  puVar3 = (undefined1 *)FUN_00628d60(param_1,0x80,param_1[4]);
  lVar4 = *(long *)(param_1 + 0x18);
  *(lua_State *)(puVar3 + 2) = param_1[4];
  bVar1 = *(byte *)(lVar4 + 0x20);
  *(undefined4 *)(puVar3 + 3) = 0;
  *(undefined8 *)(puVar3 + 0x48) = 0;
  *(undefined8 *)(puVar3 + 0x40) = 0;
  *(undefined8 *)(puVar3 + 0x58) = 0;
  *(undefined8 *)(puVar3 + 0x50) = 0;
  *(undefined8 *)(puVar3 + 0x60) = 0;
  *(undefined8 *)(puVar3 + 0x70) = 0;
  *(undefined8 *)(puVar3 + 0x78) = 0;
  puVar3[1] = bVar1 & 3;
  lVar2 = param_1[4];
  *puVar3 = 10;
  *(undefined8 *)(puVar3 + 0x30) = 0;
  *(long *)(puVar3 + 0x18) = lVar4;
  *(undefined8 *)(puVar3 + 0x20) = 0;
  *(lua_State *)(puVar3 + 4) = lVar2;
  FUN_0062a70c(puVar3,param_1);
  lVar2 = param_1[6];
  puVar7 = *(undefined8 **)(param_1 + 8);
  *(undefined8 *)(puVar3 + 0x58) = *(undefined8 *)(param_1 + 0x58);
  *(lua_State *)(puVar3 + 6) = lVar2;
  *puVar7 = puVar3;
  lVar4 = *(long *)(param_1 + 0x18);
  lVar6 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)puVar7 + 0xc) = 10;
  pcVar5 = *(code **)(lVar4 + 0x520);
  *(long *)(param_1 + 8) = lVar6 + 0x10;
  if (pcVar5 != (code *)0x0) {
    (*pcVar5)(param_1,puVar3);
  }
  return puVar3;
}


// ===== 00618468  lua_mainthread =====

/* lua_mainthread(lua_State*) */

undefined8 lua_mainthread(lua_State *param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x2f8);
}


// ===== 00618474  lua_absindex =====

/* lua_absindex(lua_State*, int) */

int lua_absindex(lua_State *param_1,int param_2)

{
  if (0xffffd8ef < param_2 - 1U) {
    param_2 = param_2 + (int)((ulong)(*(long *)(param_1 + 8) - *(long *)(param_1 + 0x10)) >> 4) + 1;
  }
  return param_2;
}


// ===== 006184a0  lua_gettop =====

/* lua_gettop(lua_State*) */

ulong lua_gettop(lua_State *param_1)

{
  return (ulong)(*(long *)(param_1 + 8) - *(long *)(param_1 + 0x10)) >> 4;
}


// ===== 006184b0  lua_settop =====

/* lua_settop(lua_State*, int) */

void lua_settop(lua_State *param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_2 < 0) {
    uVar2 = *(long *)(param_1 + 8) + (long)param_2 * 0x10 + 0x10;
  }
  else {
    uVar2 = *(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10;
    for (uVar1 = *(ulong *)(param_1 + 8); uVar1 < uVar2; uVar1 = uVar1 + 0x10) {
      *(undefined4 *)(uVar1 + 0xc) = 0;
    }
  }
  *(ulong *)(param_1 + 8) = uVar2;
  return;
}


// ===== 006184f0  lua_remove =====

/* lua_remove(lua_State*, int) */

void lua_remove(lua_State *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      puVar2 = (undefined8 *)FUN_00618038(param_1);
      puVar1 = *(undefined8 **)(param_1 + 8);
    }
    else {
      puVar1 = *(undefined8 **)(param_1 + 8);
      puVar2 = puVar1 + (long)param_2 * 2;
    }
  }
  else {
    puVar1 = *(undefined8 **)(param_1 + 8);
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (puVar1 <= puVar2) {
      puVar2 = &DAT_00285948;
    }
  }
  while (puVar3 = puVar2 + 2, puVar3 < puVar1) {
    puVar2[1] = puVar2[3];
    *puVar2 = *puVar3;
    puVar2 = puVar3;
    puVar1 = *(undefined8 **)(param_1 + 8);
  }
  *(undefined8 **)(param_1 + 8) = puVar1 + -2;
  return;
}


// ===== 00618580  lua_insert =====

/* lua_insert(lua_State*, int) */

void lua_insert(lua_State *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if (((byte)param_1[1] >> 2 & 1) != 0) {
    param_1[1] = (lua_State)((byte)param_1[1] & 0xfb);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
    *(lua_State **)(*(long *)(param_1 + 0x18) + 0x30) = param_1;
  }
  if (param_2 < 1) {
    if (param_2 < -9999) {
      puVar2 = (undefined8 *)FUN_00618038(param_1);
      puVar1 = *(undefined8 **)(param_1 + 8);
    }
    else {
      puVar1 = *(undefined8 **)(param_1 + 8);
      puVar2 = puVar1 + (long)param_2 * 2;
    }
  }
  else {
    puVar1 = *(undefined8 **)(param_1 + 8);
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (puVar1 <= puVar2) {
      puVar2 = &DAT_00285948;
    }
  }
  if (puVar2 < puVar1) {
    do {
      puVar3 = puVar1 + -2;
      puVar1[1] = puVar1[-1];
      *puVar1 = puVar1[-2];
      puVar1 = puVar3;
    } while (puVar2 < puVar3);
    puVar1 = *(undefined8 **)(param_1 + 8);
  }
  uVar4 = *puVar1;
  puVar2[1] = puVar1[1];
  *puVar2 = uVar4;
  return;
}


// ===== 00618634  lua_replace =====

/* lua_replace(lua_State*, int) */

void lua_replace(lua_State *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (((byte)param_1[1] >> 2 & 1) != 0) {
    param_1[1] = (lua_State)((byte)param_1[1] & 0xfb);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
    *(lua_State **)(*(long *)(param_1 + 0x18) + 0x30) = param_1;
  }
  if (param_2 < 1) {
    if (param_2 < -9999) {
      puVar4 = (undefined8 *)FUN_00618038(param_1,param_2);
    }
    else {
      puVar4 = (undefined8 *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    puVar4 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (*(undefined8 **)(param_1 + 8) <= puVar4) {
      puVar4 = &DAT_00285948;
    }
  }
  if (param_2 == -0x2712) {
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(*(long *)(param_1 + 8) + -0x10);
  }
  else {
    if (param_2 == -0x2711) {
      iVar1 = *(int *)(*(long *)(param_1 + 8) + -4);
      lVar3 = *(long *)(*(long *)(param_1 + 8) + -0x10);
      lVar2 = **(long **)(*(long *)(param_1 + 0x20) + 8);
      *(long *)(lVar2 + 0x18) = lVar3;
      if ((iVar1 < 6) || ((*(byte *)(lVar2 + 1) >> 2 & 1) == 0)) goto LAB_00618760;
    }
    else {
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 8) + -0x10);
      puVar4[1] = *(undefined8 *)(*(long *)(param_1 + 8) + -8);
      *puVar4 = uVar5;
      if (((-0x2713 < param_2) || (*(int *)(*(long *)(param_1 + 8) + -4) < 6)) ||
         ((*(byte *)(**(long **)(*(long *)(param_1 + 0x20) + 8) + 1) >> 2 & 1) == 0))
      goto LAB_00618760;
      lVar3 = *(long *)(*(long *)(param_1 + 8) + -0x10);
    }
    if ((*(byte *)(lVar3 + 1) & 3) != 0) {
      FUN_00624e24(*(undefined8 *)(param_1 + 0x18));
    }
  }
LAB_00618760:
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -0x10;
  return;
}


// ===== 00618778  lua_pushvalue =====

/* lua_pushvalue(lua_State*, int) */

void lua_pushvalue(lua_State *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (((byte)param_1[1] >> 2 & 1) != 0) {
    param_1[1] = (lua_State)((byte)param_1[1] & 0xfb);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
    *(lua_State **)(*(long *)(param_1 + 0x18) + 0x30) = param_1;
  }
  if (param_2 < 1) {
    if (param_2 < -9999) {
      puVar2 = (undefined8 *)FUN_00618038(param_1);
      puVar1 = *(undefined8 **)(param_1 + 8);
    }
    else {
      puVar1 = *(undefined8 **)(param_1 + 8);
      puVar2 = puVar1 + (long)param_2 * 2;
    }
  }
  else {
    puVar1 = *(undefined8 **)(param_1 + 8);
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (puVar1 <= puVar2) {
      puVar2 = &DAT_00285948;
    }
  }
  uVar3 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar3;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  return;
}


// ===== 00618814  lua_type =====

/* lua_type(lua_State*, int) */

undefined4 lua_type(lua_State *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      puVar1 = (undefined8 *)FUN_00618038();
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (*(undefined8 **)(param_1 + 8) <= puVar1) {
      return 0xffffffff;
    }
  }
  if (puVar1 == &DAT_00285948) {
    return 0xffffffff;
  }
  return *(undefined4 *)((long)puVar1 + 0xc);
}


// ===== 0061887c  lua_typename =====

/* lua_typename(lua_State*, int) */

char * lua_typename(lua_State *param_1,int param_2)

{
  if (param_2 != -1) {
    return (&PTR_DAT_0067ad68)[param_2];
  }
  return "no value";
}


// ===== 006188a0  lua_iscfunction =====

/* lua_iscfunction(lua_State*, int) */

bool lua_iscfunction(lua_State *param_1,int param_2)

{
  bool bVar1;
  long *plVar2;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      plVar2 = (long *)FUN_00618038();
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar2 = (long *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (*(long **)(param_1 + 8) <= plVar2) {
      plVar2 = &DAT_00285948;
    }
  }
  if (*(int *)((long)plVar2 + 0xc) == 8) {
    bVar1 = *(char *)(*plVar2 + 3) != '\0';
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


// ===== 00618918  lua_isLfunction =====

/* lua_isLfunction(lua_State*, int) */

bool lua_isLfunction(lua_State *param_1,int param_2)

{
  bool bVar1;
  long *plVar2;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      plVar2 = (long *)FUN_00618038();
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar2 = (long *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (*(long **)(param_1 + 8) <= plVar2) {
      plVar2 = &DAT_00285948;
    }
  }
  if (*(int *)((long)plVar2 + 0xc) == 8) {
    bVar1 = *(char *)(*plVar2 + 3) == '\0';
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


// ===== 00618990  lua_isnumber =====

/* lua_isnumber(lua_State*, int) */

void lua_isnumber(lua_State *param_1,int param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_2 < 1) {
    if (param_2 < -9999) {
      puVar4 = (undefined8 *)FUN_00618038();
    }
    else {
      puVar4 = (undefined8 *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    puVar4 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (*(undefined8 **)(param_1 + 8) <= puVar4) {
      puVar4 = &DAT_00285948;
    }
  }
  if (*(int *)((long)puVar4 + 0xc) == 3) {
    bVar2 = true;
  }
  else {
    lVar3 = FUN_00642b68(puVar4,auStack_38);
    bVar2 = lVar3 != 0;
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}


// ===== 00618a38  lua_isstring =====

/* lua_isstring(lua_State*, int) */

bool lua_isstring(lua_State *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = lua_type(param_1,param_2);
  return iVar1 == 6 || iVar1 == 3;
}


// ===== 00618a58  lua_isuserdata =====

/* lua_isuserdata(lua_State*, int) */

bool lua_isuserdata(lua_State *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      puVar1 = (undefined8 *)FUN_00618038();
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (*(undefined8 **)(param_1 + 8) <= puVar1) {
      puVar1 = &DAT_00285948;
    }
  }
  return *(int *)((long)puVar1 + 0xc) == 9 || *(int *)((long)puVar1 + 0xc) == 2;
}


// ===== 00618abc  lua_rawequal =====

/* lua_rawequal(lua_State*, int, int) */

undefined8 lua_rawequal(lua_State *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      puVar2 = (undefined8 *)FUN_00618038(param_1);
    }
    else {
      puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (*(undefined8 **)(param_1 + 8) <= puVar2) {
      puVar2 = &DAT_00285948;
    }
  }
  if (param_3 < 1) {
    if (param_3 < -9999) {
      puVar3 = (undefined8 *)FUN_00618038(param_1,param_3);
    }
    else {
      puVar3 = (undefined8 *)(*(long *)(param_1 + 8) + (long)param_3 * 0x10);
    }
  }
  else {
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_3 * 0x10 + -0x10);
    if (*(undefined8 **)(param_1 + 8) <= puVar3) {
      puVar3 = &DAT_00285948;
    }
  }
  if ((puVar2 != &DAT_00285948) && (puVar3 != &DAT_00285948)) {
    uVar1 = FUN_0062987c(puVar2);
    return uVar1;
  }
  return 0;
}


// ===== 00618ba0  lua_equal =====

/* lua_equal(lua_State*, int, int) */

undefined8 lua_equal(lua_State *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      puVar2 = (undefined8 *)FUN_00618038(param_1);
    }
    else {
      puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (*(undefined8 **)(param_1 + 8) <= puVar2) {
      puVar2 = &DAT_00285948;
    }
  }
  if (param_3 < 1) {
    if (param_3 < -9999) {
      puVar3 = (undefined8 *)FUN_00618038(param_1,param_3);
    }
    else {
      puVar3 = (undefined8 *)(*(long *)(param_1 + 8) + (long)param_3 * 0x10);
    }
  }
  else {
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_3 * 0x10 + -0x10);
    if (*(undefined8 **)(param_1 + 8) <= puVar3) {
      puVar3 = &DAT_00285948;
    }
  }
  if (((puVar2 != &DAT_00285948) && (puVar3 != &DAT_00285948)) &&
     (*(int *)((long)puVar2 + 0xc) == *(int *)((long)puVar3 + 0xc))) {
    uVar1 = FUN_00643514(param_1,puVar2);
    return uVar1;
  }
  return 0;
}


// ===== 00618c98  lua_lessthan =====

/* lua_lessthan(lua_State*, int, int) */

undefined8 lua_lessthan(lua_State *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      puVar2 = (undefined8 *)FUN_00618038(param_1);
    }
    else {
      puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (*(undefined8 **)(param_1 + 8) <= puVar2) {
      puVar2 = &DAT_00285948;
    }
  }
  if (param_3 < 1) {
    if (param_3 < -9999) {
      puVar3 = (undefined8 *)FUN_00618038(param_1,param_3);
    }
    else {
      puVar3 = (undefined8 *)(*(long *)(param_1 + 8) + (long)param_3 * 0x10);
    }
  }
  else {
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_3 * 0x10 + -0x10);
    if (*(undefined8 **)(param_1 + 8) <= puVar3) {
      puVar3 = &DAT_00285948;
    }
  }
  if ((puVar2 != &DAT_00285948) && (puVar3 != &DAT_00285948)) {
    uVar1 = FUN_00643304(param_1,puVar2);
    return uVar1;
  }
  return 0;
}


// ===== 00618d80  lua_tonumberx =====

/* lua_tonumberx(lua_State*, int, int*) */

void lua_tonumberx(lua_State *param_1,int param_2,int *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_2 < 1) {
    if (param_2 < -9999) {
      puVar2 = (undefined8 *)FUN_00618038();
    }
    else {
      puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (*(undefined8 **)(param_1 + 8) <= puVar2) {
      puVar2 = &DAT_00285948;
    }
  }
  if ((*(int *)((long)puVar2 + 0xc) == 3) ||
     (puVar2 = (undefined8 *)FUN_00642b68(puVar2,auStack_38), puVar2 != (undefined8 *)0x0)) {
    if (param_3 != (int *)0x0) {
      *param_3 = 1;
    }
    uVar3 = *puVar2;
  }
  else {
    uVar3 = 0;
    if (param_3 != (int *)0x0) {
      *param_3 = 0;
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


// ===== 00618e40  lua_tointegerx =====

/* lua_tointegerx(lua_State*, int, int*) */

void lua_tointegerx(lua_State *param_1,int param_2,int *param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  double *pdVar4;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_2 < 1) {
    if (param_2 < -9999) {
      pdVar4 = (double *)FUN_00618038();
    }
    else {
      pdVar4 = (double *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    pdVar4 = (double *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (*(double **)(param_1 + 8) <= pdVar4) {
      pdVar4 = (double *)&DAT_00285948;
    }
  }
  if ((*(int *)((long)pdVar4 + 0xc) == 3) ||
     (pdVar4 = (double *)FUN_00642b68(pdVar4,auStack_38), pdVar4 != (double *)0x0)) {
    iVar2 = (int)*pdVar4;
    if (param_3 == (int *)0x0) goto LAB_00618ed0;
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
    iVar2 = 0;
    if (param_3 == (int *)0x0) goto LAB_00618ed0;
  }
  *param_3 = iVar3;
LAB_00618ed0:
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}


// ===== 00618f00  lua_tounsignedx =====

/* lua_tounsignedx(lua_State*, int, int*) */

void lua_tounsignedx(lua_State *param_1,int param_2,int *param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  double *pdVar4;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_2 < 1) {
    if (param_2 < -9999) {
      pdVar4 = (double *)FUN_00618038();
    }
    else {
      pdVar4 = (double *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    pdVar4 = (double *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (*(double **)(param_1 + 8) <= pdVar4) {
      pdVar4 = (double *)&DAT_00285948;
    }
  }
  if ((*(int *)((long)pdVar4 + 0xc) == 3) ||
     (pdVar4 = (double *)FUN_00642b68(pdVar4,auStack_38), pdVar4 != (double *)0x0)) {
    lVar2 = (long)*pdVar4;
    if (param_3 == (int *)0x0) goto LAB_00618f90;
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
    lVar2 = 0;
    if (param_3 == (int *)0x0) goto LAB_00618f90;
  }
  *param_3 = iVar3;
LAB_00618f90:
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar2);
  }
  return;
}


// ===== 00618fc0  lua_toboolean =====

/* lua_toboolean(lua_State*, int) */

uint lua_toboolean(lua_State *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      piVar2 = (int *)FUN_00618038();
    }
    else {
      piVar2 = (int *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    piVar2 = (int *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (*(int **)(param_1 + 8) <= piVar2) {
      piVar2 = (int *)&DAT_00285948;
    }
  }
  uVar1 = piVar2[3];
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      uVar1 = (uint)(*piVar2 != 0);
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}


// ===== 0061903c  lua_tointeger64 =====

/* lua_tointeger64(lua_State*, int, int*) */

undefined8 lua_tointeger64(lua_State *param_1,int param_2,int *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      puVar2 = (undefined8 *)FUN_00618038();
    }
    else {
      puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (*(undefined8 **)(param_1 + 8) <= puVar2) {
      puVar2 = &DAT_00285948;
    }
  }
  if (*(int *)((long)puVar2 + 0xc) == 4) {
    if (param_3 != (int *)0x0) {
      *param_3 = 1;
    }
    uVar1 = *puVar2;
  }
  else {
    uVar1 = 0;
    if (param_3 != (int *)0x0) {
      *param_3 = 0;
    }
  }
  return uVar1;
}


// ===== 006190c8  lua_tolstring =====

/* lua_tolstring(lua_State*, int, unsigned long*) */

long lua_tolstring(lua_State *param_1,int param_2,ulong *param_3)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  
  uVar3 = (ulong)(uint)param_2;
  if (param_2 < 1) {
    if (param_2 < -9999) {
      plVar2 = (long *)FUN_00618038(param_1,uVar3);
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar2 = (long *)(*(long *)(param_1 + 0x10) + uVar3 * 0x10 + -0x10);
    if (*(long **)(param_1 + 8) <= plVar2) {
      plVar2 = &DAT_00285948;
    }
  }
  if (*(int *)((long)plVar2 + 0xc) != 6) {
    if (((byte)param_1[1] >> 2 & 1) != 0) {
      param_1[1] = (lua_State)((byte)param_1[1] & 0xfb);
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
      *(lua_State **)(*(long *)(param_1 + 0x18) + 0x30) = param_1;
    }
    iVar1 = FUN_00642bf8(param_1);
    if (iVar1 == 0) {
      if (param_3 == (ulong *)0x0) {
        return 0;
      }
      *param_3 = 0;
      return 0;
    }
    if (*(ulong *)(*(long *)(param_1 + 0x18) + 0x40) <= *(ulong *)(*(long *)(param_1 + 0x18) + 0x48)
       ) {
      FUN_006239a4(param_1);
    }
    if (param_2 < 1) {
      if (param_2 < -9999) {
        plVar2 = (long *)FUN_00618038(param_1,param_2);
      }
      else {
        plVar2 = (long *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 0x10) + uVar3 * 0x10 + -0x10);
      if (*(long **)(param_1 + 8) <= plVar2) {
        plVar2 = &DAT_00285948;
      }
    }
  }
  if (param_3 != (ulong *)0x0) {
    *param_3 = (ulong)*(uint *)(*plVar2 + 0x14);
  }
  return *plVar2 + 0x18;
}


// ===== 00619214  lua_tostringatom =====

/* lua_tostringatom(lua_State*, int, int*) */

long lua_tostringatom(lua_State *param_1,int param_2,int *param_3)

{
  short sVar1;
  long *plVar2;
  long lVar3;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      plVar2 = (long *)FUN_00618038(param_1);
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar2 = (long *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (*(long **)(param_1 + 8) <= plVar2) {
      plVar2 = &DAT_00285948;
    }
  }
  if (*(int *)((long)plVar2 + 0xc) == 6) {
    lVar3 = *plVar2;
    if (param_3 != (int *)0x0) {
      sVar1 = *(short *)(lVar3 + 4);
      if (sVar1 == -0x8000) {
        if (*(code **)(*(long *)(param_1 + 0x18) + 0x528) == (code *)0x0) {
          sVar1 = -1;
        }
        else {
          sVar1 = (**(code **)(*(long *)(param_1 + 0x18) + 0x528))
                            (param_1,lVar3 + 0x18,*(undefined4 *)(lVar3 + 0x14));
        }
        *(short *)(lVar3 + 4) = sVar1;
      }
      *param_3 = (int)sVar1;
    }
    lVar3 = lVar3 + 0x18;
  }
  else {
    lVar3 = 0;
  }
  return lVar3;
}


// ===== 006192e0  lua_tolstringatom =====

/* lua_tolstringatom(lua_State*, int, unsigned long*, int*) */

long lua_tolstringatom(lua_State *param_1,int param_2,ulong *param_3,int *param_4)

{
  short sVar1;
  long *plVar2;
  long lVar3;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      plVar2 = (long *)FUN_00618038(param_1);
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar2 = (long *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (*(long **)(param_1 + 8) <= plVar2) {
      plVar2 = &DAT_00285948;
    }
  }
  if (*(int *)((long)plVar2 + 0xc) == 6) {
    lVar3 = *plVar2;
    if (param_3 != (ulong *)0x0) {
      *param_3 = (ulong)*(uint *)(lVar3 + 0x14);
    }
    if (param_4 != (int *)0x0) {
      sVar1 = *(short *)(lVar3 + 4);
      if (sVar1 == -0x8000) {
        if (*(code **)(*(long *)(param_1 + 0x18) + 0x528) == (code *)0x0) {
          sVar1 = -1;
        }
        else {
          sVar1 = (**(code **)(*(long *)(param_1 + 0x18) + 0x528))
                            (param_1,lVar3 + 0x18,*(undefined4 *)(lVar3 + 0x14));
        }
        *(short *)(lVar3 + 4) = sVar1;
      }
      *param_4 = (int)sVar1;
    }
    lVar3 = lVar3 + 0x18;
  }
  else {
    lVar3 = 0;
    if (param_3 != (ulong *)0x0) {
      *param_3 = 0;
    }
  }
  return lVar3;
}


// ===== 006193c4  lua_namecallatom =====

/* lua_namecallatom(lua_State*, int*) */

long lua_namecallatom(lua_State *param_1,int *param_2)

{
  short sVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x70);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    if (param_2 != (int *)0x0) {
      sVar1 = *(short *)(lVar2 + 4);
      if (sVar1 == -0x8000) {
        if (*(code **)(*(long *)(param_1 + 0x18) + 0x528) == (code *)0x0) {
          sVar1 = -1;
        }
        else {
          sVar1 = (**(code **)(*(long *)(param_1 + 0x18) + 0x528))
                            (param_1,lVar2 + 0x18,*(undefined4 *)(lVar2 + 0x14));
        }
        *(short *)(lVar2 + 4) = sVar1;
      }
      *param_2 = (int)sVar1;
    }
    lVar2 = lVar2 + 0x18;
  }
  return lVar2;
}


// ===== 00619434  lua_tovector =====

/* lua_tovector(lua_State*, int) */

undefined8 * lua_tovector(lua_State *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      puVar1 = (undefined8 *)FUN_00618038();
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (*(undefined8 **)(param_1 + 8) <= puVar1) {
      puVar1 = &DAT_00285948;
    }
  }
  if (*(int *)((long)puVar1 + 0xc) != 5) {
    puVar1 = (undefined8 *)0x0;
  }
  return puVar1;
}


// ===== 00619494  lua_objlen =====

/* lua_objlen(lua_State*, int) */

ulong lua_objlen(lua_State *param_1,int param_2)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      plVar2 = (long *)FUN_00618038();
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar2 = (long *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (*(long **)(param_1 + 8) <= plVar2) {
      plVar2 = &DAT_00285948;
    }
  }
  iVar1 = *(int *)((long)plVar2 + 0xc);
  uVar3 = 0;
  if (iVar1 < 9) {
    if (iVar1 == 6) {
      uVar3 = (ulong)*(uint *)(*plVar2 + 0x14);
    }
    else if (iVar1 == 7) {
      uVar3 = FUN_0062f6fc(*plVar2);
      return uVar3;
    }
  }
  else if ((iVar1 == 9) || (iVar1 == 0xb)) {
    uVar3 = (ulong)*(uint *)(*plVar2 + 4);
  }
  return uVar3;
}


// ===== 0061953c  lua_tocfunction =====

/* lua_tocfunction(lua_State*, int) */

undefined8 lua_tocfunction(lua_State *param_1,int param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      plVar2 = (long *)FUN_00618038();
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar2 = (long *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (*(long **)(param_1 + 8) <= plVar2) {
      plVar2 = &DAT_00285948;
    }
  }
  if ((*(int *)((long)plVar2 + 0xc) == 8) && (*(char *)(*plVar2 + 3) != '\0')) {
    uVar1 = *(undefined8 *)(*plVar2 + 0x20);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 006195b4  lua_tolightuserdata =====

/* lua_tolightuserdata(lua_State*, int) */

undefined8 lua_tolightuserdata(lua_State *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      puVar2 = (undefined8 *)FUN_00618038();
    }
    else {
      puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (*(undefined8 **)(param_1 + 8) <= puVar2) {
      puVar2 = &DAT_00285948;
    }
  }
  if (*(int *)((long)puVar2 + 0xc) == 2) {
    uVar1 = *puVar2;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 00619620  lua_tolightuserdatatagged =====

/* lua_tolightuserdatatagged(lua_State*, int, int) */

undefined8 lua_tolightuserdatatagged(lua_State *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      puVar2 = (undefined8 *)FUN_00618038();
    }
    else {
      puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (*(undefined8 **)(param_1 + 8) <= puVar2) {
      puVar2 = &DAT_00285948;
    }
  }
  if ((*(int *)((long)puVar2 + 0xc) == 2) && (*(int *)(puVar2 + 1) == param_3)) {
    uVar1 = *puVar2;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 006196a4  lua_touserdata =====

/* lua_touserdata(lua_State*, int) */

long lua_touserdata(lua_State *param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      plVar2 = (long *)FUN_00618038();
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar2 = (long *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (*(long **)(param_1 + 8) <= plVar2) {
      plVar2 = &DAT_00285948;
    }
  }
  if (*(int *)((long)plVar2 + 0xc) == 2) {
    lVar1 = *plVar2;
  }
  else if (*(int *)((long)plVar2 + 0xc) == 9) {
    lVar1 = *plVar2 + 0x10;
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}


// ===== 00619724  lua_touserdatatagged =====

/* lua_touserdatatagged(lua_State*, int, int) */

long lua_touserdatatagged(lua_State *param_1,int param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      plVar2 = (long *)FUN_00618038();
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar2 = (long *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (*(long **)(param_1 + 8) <= plVar2) {
      plVar2 = &DAT_00285948;
    }
  }
  if (*(int *)((long)plVar2 + 0xc) == 9) {
    lVar1 = *plVar2 + 0x10;
    if ((uint)*(byte *)(*plVar2 + 3) != param_3) {
      lVar1 = 0;
    }
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}


// ===== 006197ac  lua_userdatatag =====

/* lua_userdatatag(lua_State*, int) */

ulong lua_userdatatag(lua_State *param_1,int param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      plVar2 = (long *)FUN_00618038();
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar2 = (long *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (*(long **)(param_1 + 8) <= plVar2) {
      plVar2 = &DAT_00285948;
    }
  }
  if (*(int *)((long)plVar2 + 0xc) == 9) {
    uVar1 = (ulong)*(byte *)(*plVar2 + 3);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


// ===== 0061981c  lua_lightuserdatatag =====

/* lua_lightuserdatatag(lua_State*, int) */

undefined4 lua_lightuserdatatag(lua_State *param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      puVar2 = (undefined8 *)FUN_00618038();
    }
    else {
      puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (*(undefined8 **)(param_1 + 8) <= puVar2) {
      puVar2 = &DAT_00285948;
    }
  }
  if (*(int *)((long)puVar2 + 0xc) == 2) {
    uVar1 = *(undefined4 *)(puVar2 + 1);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


// ===== 00619888  lua_tothread =====

/* lua_tothread(lua_State*, int) */

undefined8 lua_tothread(lua_State *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      puVar2 = (undefined8 *)FUN_00618038();
    }
    else {
      puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (*(undefined8 **)(param_1 + 8) <= puVar2) {
      puVar2 = &DAT_00285948;
    }
  }
  if (*(int *)((long)puVar2 + 0xc) == 10) {
    uVar1 = *puVar2;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 006198f4  lua_tobuffer =====

/* lua_tobuffer(lua_State*, int, unsigned long*) */

long lua_tobuffer(lua_State *param_1,int param_2,ulong *param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      plVar1 = (long *)FUN_00618038();
    }
    else {
      plVar1 = (long *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar1 = (long *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (*(long **)(param_1 + 8) <= plVar1) {
      plVar1 = &DAT_00285948;
    }
  }
  if (*(int *)((long)plVar1 + 0xc) == 0xb) {
    lVar2 = *plVar1;
    if (param_3 != (ulong *)0x0) {
      *param_3 = (ulong)*(uint *)(lVar2 + 4);
    }
    lVar2 = lVar2 + 8;
  }
  else {
    lVar2 = 0;
  }
  return lVar2;
}


// ===== 0061997c  lua_topointer =====

/* lua_topointer(lua_State*, int) */

long lua_topointer(lua_State *param_1,int param_2)

{
  int iVar1;
  long *plVar2;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      plVar2 = (long *)FUN_00618038();
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar2 = (long *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (*(long **)(param_1 + 8) <= plVar2) {
      plVar2 = &DAT_00285948;
    }
  }
  iVar1 = *(int *)((long)plVar2 + 0xc);
  if (iVar1 != 2) {
    if (iVar1 == 9) {
      return *plVar2 + 0x10;
    }
    if (iVar1 < 6) {
      return 0;
    }
  }
  return *plVar2;
}


// ===== 00619a04  lua_pushnil =====

/* lua_pushnil(lua_State*) */

void lua_pushnil(lua_State *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  *(undefined4 *)(lVar1 + 0xc) = 0;
  *(long *)(param_1 + 8) = lVar1 + 0x10;
  return;
}


// ===== 00619a18  lua_pushnumber =====

/* lua_pushnumber(lua_State*, double) */

void lua_pushnumber(lua_State *param_1,double param_2)

{
  double *pdVar1;
  long lVar2;
  
  pdVar1 = *(double **)(param_1 + 8);
  *pdVar1 = param_2;
  lVar2 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)pdVar1 + 0xc) = 3;
  *(long *)(param_1 + 8) = lVar2 + 0x10;
  return;
}


// ===== 00619a38  lua_pushinteger =====

/* lua_pushinteger(lua_State*, int) */

void lua_pushinteger(lua_State *param_1,int param_2)

{
  double *pdVar1;
  
  pdVar1 = *(double **)(param_1 + 8);
  *(undefined4 *)((long)pdVar1 + 0xc) = 3;
  *pdVar1 = (double)param_2;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  return;
}


// ===== 00619a5c  lua_pushinteger64 =====

/* lua_pushinteger64(lua_State*, long) */

void lua_pushinteger64(lua_State *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 8);
  *plVar1 = param_2;
  lVar2 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)plVar1 + 0xc) = 4;
  *(long *)(param_1 + 8) = lVar2 + 0x10;
  return;
}


// ===== 00619a7c  lua_pushunsigned =====

/* lua_pushunsigned(lua_State*, unsigned int) */

void lua_pushunsigned(lua_State *param_1,uint param_2)

{
  double *pdVar1;
  
  pdVar1 = *(double **)(param_1 + 8);
  *(undefined4 *)((long)pdVar1 + 0xc) = 3;
  *pdVar1 = (double)param_2;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  return;
}


// ===== 00619aa0  lua_pushvector =====

/* lua_pushvector(lua_State*, float, float, float) */

void lua_pushvector(lua_State *param_1,float param_2,float param_3,float param_4)

{
  float *pfVar1;
  
  pfVar1 = *(float **)(param_1 + 8);
  pfVar1[3] = 7.00649e-45;
  *pfVar1 = param_2;
  pfVar1[1] = param_3;
  pfVar1[2] = param_4;
  *(float **)(param_1 + 8) = pfVar1 + 4;
  return;
}


// ===== 00619ac0  lua_pushvector2 =====

/* lua_pushvector2(lua_State*, float, float) */

void lua_pushvector2(lua_State *param_1,float param_2,float param_3)

{
  float *pfVar1;
  
  pfVar1 = *(float **)(param_1 + 8);
  *pfVar1 = param_2;
  pfVar1[1] = param_3;
  pfVar1[3] = 7.00649e-45;
  *(float **)(param_1 + 8) = pfVar1 + 4;
  return;
}


// ===== 00619adc  lua_pushlstring =====

/* lua_pushlstring(lua_State*, char const*, unsigned long) */

void lua_pushlstring(lua_State *param_1,char *param_2,ulong param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if (*(ulong *)(*(long *)(param_1 + 0x18) + 0x40) <= *(ulong *)(*(long *)(param_1 + 0x18) + 0x48))
  {
    FUN_006239a4(param_1);
  }
  if (((byte)param_1[1] >> 2 & 1) != 0) {
    param_1[1] = (lua_State)((byte)param_1[1] & 0xfb);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
    *(lua_State **)(*(long *)(param_1 + 0x18) + 0x30) = param_1;
  }
  puVar3 = *(undefined8 **)(param_1 + 8);
  uVar1 = FUN_0062b178(param_1,param_2,param_3);
  *puVar3 = uVar1;
  lVar2 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)puVar3 + 0xc) = 6;
  *(long *)(param_1 + 8) = lVar2 + 0x10;
  return;
}


// ===== 00619b6c  lua_pushstring =====

/* lua_pushstring(lua_State*, char const*) */

void lua_pushstring(lua_State *param_1,char *param_2)

{
  size_t sVar1;
  long lVar2;
  
  if (param_2 != (char *)0x0) {
    sVar1 = strlen(param_2);
    lua_pushlstring(param_1,param_2,sVar1);
    return;
  }
  lVar2 = *(long *)(param_1 + 8);
  *(undefined4 *)(lVar2 + 0xc) = 0;
  *(long *)(param_1 + 8) = lVar2 + 0x10;
  return;
}


// ===== 00619bc0  lua_pushvfstring =====

/* lua_pushvfstring(lua_State*, char const*, std::__va_list) */

void lua_pushvfstring(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(ulong *)(*(long *)(param_1 + 0x18) + 0x40) <= *(ulong *)(*(long *)(param_1 + 0x18) + 0x48))
  {
    FUN_006239a4(param_1);
  }
  if ((*(byte *)(param_1 + 1) >> 2 & 1) != 0) {
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xfb;
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
    *(long *)(*(long *)(param_1 + 0x18) + 0x30) = param_1;
  }
  uStack_58 = param_3[1];
  local_60 = *param_3;
  uStack_48 = param_3[3];
  uStack_50 = param_3[2];
  FUN_00629af4(param_1,param_2,&local_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00619c64  lua_pushfstringL =====

/* lua_pushfstringL(lua_State*, char const*, ...) */

void lua_pushfstringL(lua_State *param_1,char *param_2,...)

{
  long lVar1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar2;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  undefined1 **ppuStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  local_b0 = in_x2;
  uStack_a8 = in_x3;
  local_a0 = in_x4;
  uStack_98 = in_x5;
  local_90 = in_x6;
  uStack_88 = in_x7;
  if (*(ulong *)(*(long *)(param_1 + 0x18) + 0x40) <= *(ulong *)(*(long *)(param_1 + 0x18) + 0x48))
  {
    FUN_006239a4(param_1);
  }
  if (((byte)param_1[1] >> 2 & 1) != 0) {
    param_1[1] = (lua_State)((byte)param_1[1] & 0xfb);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
    *(lua_State **)(*(long *)(param_1 + 0x18) + 0x30) = param_1;
  }
  puStack_70 = &local_b0;
  ppuStack_78 = &local_80;
  uStack_68 = 0xffffff80ffffffd0;
  local_80 = (undefined1 *)register0x00000008;
  FUN_00629af4(param_1,param_2,&local_80);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00619d48  lua_pushcclosurek =====

/* lua_pushcclosurek(lua_State*, int (*)(lua_State*), char const*, int, int (*)(lua_State*, int)) */

void lua_pushcclosurek(lua_State *param_1,_func_int_lua_State_ptr *param_2,char *param_3,int param_4
                      ,_func_int_lua_State_ptr_int *param_5)

{
  undefined8 *puVar1;
  long lVar2;
  lua_State *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  if (*(ulong *)(*(long *)(param_1 + 0x18) + 0x40) <= *(ulong *)(*(long *)(param_1 + 0x18) + 0x48))
  {
    FUN_006239a4(param_1);
  }
  if (((byte)param_1[1] >> 2 & 1) != 0) {
    param_1[1] = (lua_State)((byte)param_1[1] & 0xfb);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
    *(lua_State **)(*(long *)(param_1 + 0x18) + 0x30) = param_1;
  }
  if (*(long *)(param_1 + 0x20) == *(long *)(param_1 + 0x40)) {
    plVar3 = param_1 + 0x58;
  }
  else {
    plVar3 = (lua_State *)(**(long **)(*(long *)(param_1 + 0x20) + 8) + 0x18);
  }
  lVar2 = FUN_00623310(param_1,param_4,*(undefined8 *)plVar3);
  *(_func_int_lua_State_ptr **)(lVar2 + 0x20) = param_2;
  *(_func_int_lua_State_ptr_int **)(lVar2 + 0x28) = param_5;
  *(char **)(lVar2 + 0x30) = param_3;
  plVar4 = (long *)(*(long *)(param_1 + 8) + (long)param_4 * -0x10);
  *(long **)(param_1 + 8) = plVar4;
  if (param_4 != 0) {
    lVar6 = (long)param_4;
    lVar5 = lVar6 << 4;
    do {
      lVar6 = lVar6 + -1;
      uVar7 = *(undefined8 *)(*(long *)(param_1 + 8) + lVar5 + -0x10);
      puVar1 = (undefined8 *)(lVar2 + 0x28 + lVar5);
      puVar1[1] = *(undefined8 *)(*(long *)(param_1 + 8) + lVar5 + -8);
      *puVar1 = uVar7;
      lVar5 = lVar5 + -0x10;
    } while ((int)lVar6 != 0);
    plVar4 = *(long **)(param_1 + 8);
  }
  *plVar4 = lVar2;
  lVar2 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)plVar4 + 0xc) = 8;
  *(long *)(param_1 + 8) = lVar2 + 0x10;
  return;
}


// ===== 00619e54  lua_pushboolean =====

/* lua_pushboolean(lua_State*, int) */

void lua_pushboolean(lua_State *param_1,int param_2)

{
  uint *puVar1;
  long lVar2;
  
  puVar1 = *(uint **)(param_1 + 8);
  *puVar1 = (uint)(param_2 != 0);
  lVar2 = *(long *)(param_1 + 8);
  puVar1[3] = 1;
  *(long *)(param_1 + 8) = lVar2 + 0x10;
  return;
}


// ===== 00619e7c  lua_pushlightuserdatatagged =====

/* lua_pushlightuserdatatagged(lua_State*, void*, int) */

void lua_pushlightuserdatatagged(lua_State *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  *puVar1 = param_2;
  lVar2 = *(long *)(param_1 + 8);
  *(int *)(puVar1 + 1) = param_3;
  *(undefined4 *)((long)puVar1 + 0xc) = 2;
  *(long *)(param_1 + 8) = lVar2 + 0x10;
  return;
}


// ===== 00619e9c  lua_pushthread =====

/* lua_pushthread(lua_State*) */

bool lua_pushthread(lua_State *param_1)

{
  undefined8 *puVar1;
  lua_State *plVar2;
  long lVar3;
  
  if (((byte)param_1[1] >> 2 & 1) != 0) {
    param_1[1] = (lua_State)((byte)param_1[1] & 0xfb);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
    *(lua_State **)(*(long *)(param_1 + 0x18) + 0x30) = param_1;
  }
  puVar1 = *(undefined8 **)(param_1 + 8);
  *puVar1 = param_1;
  lVar3 = *(long *)(param_1 + 8);
  plVar2 = *(lua_State **)(*(long *)(param_1 + 0x18) + 0x2f8);
  *(undefined4 *)((long)puVar1 + 0xc) = 10;
  *(long *)(param_1 + 8) = lVar3 + 0x10;
  return plVar2 == param_1;
}


// ===== 00619ef0  lua_gettable =====

/* lua_gettable(lua_State*, int) */

undefined4 lua_gettable(lua_State *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (((byte)param_1[1] >> 2 & 1) != 0) {
    param_1[1] = (lua_State)((byte)param_1[1] & 0xfb);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
    *(lua_State **)(*(long *)(param_1 + 0x18) + 0x30) = param_1;
  }
  if (param_2 < 1) {
    if (param_2 < -9999) {
      puVar2 = (undefined8 *)FUN_00618038(param_1);
      puVar1 = *(undefined8 **)(param_1 + 8);
    }
    else {
      puVar1 = *(undefined8 **)(param_1 + 8);
      puVar2 = puVar1 + (long)param_2 * 2;
    }
  }
  else {
    puVar1 = *(undefined8 **)(param_1 + 8);
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (puVar1 <= puVar2) {
      puVar2 = &DAT_00285948;
    }
  }
  FUN_00642c8c(param_1,puVar2,puVar1 + -2,puVar1 + -2);
  return *(undefined4 *)(*(long *)(param_1 + 8) + -4);
}


// ===== 00619f94  lua_getfield =====

/* lua_getfield(lua_State*, int, char const*) */

void lua_getfield(lua_State *param_1,int param_2,char *param_3)

{
  undefined4 uVar1;
  long lVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 local_48;
  undefined4 local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (((byte)param_1[1] >> 2 & 1) != 0) {
    param_1[1] = (lua_State)((byte)param_1[1] & 0xfb);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
    *(lua_State **)(*(long *)(param_1 + 0x18) + 0x30) = param_1;
  }
  if (param_2 < 1) {
    if (param_2 < -9999) {
      puVar4 = (undefined8 *)FUN_00618038(param_1);
    }
    else {
      puVar4 = (undefined8 *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    puVar4 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (*(undefined8 **)(param_1 + 8) <= puVar4) {
      puVar4 = &DAT_00285948;
    }
  }
  sVar3 = strlen(param_3);
  local_48 = FUN_0062b178(param_1,param_3,sVar3);
  local_3c = 6;
  FUN_00642c8c(param_1,puVar4,&local_48,*(undefined8 *)(param_1 + 8));
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 8) + 0xc);
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1);
  }
  return;
}


// ===== 0061a098  lua_rawgetfield =====

/* lua_rawgetfield(lua_State*, int, char const*) */

undefined4 lua_rawgetfield(lua_State *param_1,int param_2,char *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  size_t sVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  if (((byte)param_1[1] >> 2 & 1) != 0) {
    param_1[1] = (lua_State)((byte)param_1[1] & 0xfb);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
    *(lua_State **)(*(long *)(param_1 + 0x18) + 0x30) = param_1;
  }
  if (param_2 < 1) {
    if (param_2 < -9999) {
      plVar5 = (long *)FUN_00618038(param_1);
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar5 = (long *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (*(long **)(param_1 + 8) <= plVar5) {
      plVar5 = &DAT_00285948;
    }
  }
  sVar3 = strlen(param_3);
  lVar4 = FUN_0062b178(param_1,param_3,sVar3);
  puVar7 = (undefined8 *)
           (*(long *)(*plVar5 + 0x20) +
           (ulong)(*(uint *)(lVar4 + 0x10) & ~(-1 << (ulong)(*(byte *)(*plVar5 + 6) & 0x1f))) * 0x20
           );
  while( true ) {
    uVar1 = *(uint *)((long)puVar7 + 0x1c);
    if ((((uVar1 & 0xf) == 6) && (puVar6 = puVar7, puVar7[2] == lVar4)) ||
       (puVar6 = &DAT_00285948, uVar1 < 0x10)) break;
    puVar7 = puVar7 + ((long)((ulong)uVar1 << 0x20) >> 0x24) * 4;
  }
  puVar7 = *(undefined8 **)(param_1 + 8);
  uVar8 = *puVar6;
  puVar7[1] = puVar6[1];
  *puVar7 = uVar8;
  uVar2 = *(undefined4 *)(*(long *)(param_1 + 8) + 0xc);
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  return uVar2;
}


// ===== 0061a1c0  lua_rawget =====

/* lua_rawget(lua_State*, int) */

undefined4 lua_rawget(lua_State *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (((byte)param_1[1] >> 2 & 1) != 0) {
    param_1[1] = (lua_State)((byte)param_1[1] & 0xfb);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
    *(lua_State **)(*(long *)(param_1 + 0x18) + 0x30) = param_1;
  }
  if (param_2 < 1) {
    if (param_2 < -9999) {
      puVar1 = (undefined8 *)FUN_00618038(param_1);
      puVar2 = *(undefined8 **)(param_1 + 8);
    }
    else {
      puVar2 = *(undefined8 **)(param_1 + 8);
      puVar1 = puVar2 + (long)param_2 * 2;
    }
  }
  else {
    puVar2 = *(undefined8 **)(param_1 + 8);
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (puVar2 <= puVar1) {
      puVar1 = &DAT_00285948;
    }
  }
  puVar1 = (undefined8 *)FUN_0062f390(*puVar1,puVar2 + -2);
  uVar3 = *puVar1;
  puVar2[-1] = puVar1[1];
  puVar2[-2] = uVar3;
  return *(undefined4 *)(*(long *)(param_1 + 8) + -4);
}


// ===== 0061a264  lua_rawgeti =====

/* lua_rawgeti(lua_State*, int, int) */

undefined4 lua_rawgeti(lua_State *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if (((byte)param_1[1] >> 2 & 1) != 0) {
    param_1[1] = (lua_State)((byte)param_1[1] & 0xfb);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
    *(lua_State **)(*(long *)(param_1 + 0x18) + 0x30) = param_1;
  }
  if (param_2 < 1) {
    if (param_2 < -9999) {
      puVar2 = (undefined8 *)FUN_00618038(param_1);
      puVar3 = *(undefined8 **)(param_1 + 8);
    }
    else {
      puVar3 = *(undefined8 **)(param_1 + 8);
      puVar2 = puVar3 + (long)param_2 * 2;
    }
  }
  else {
    puVar3 = *(undefined8 **)(param_1 + 8);
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (puVar3 <= puVar2) {
      puVar2 = &DAT_00285948;
    }
  }
  puVar2 = (undefined8 *)FUN_0062f140(*puVar2,param_3);
  uVar4 = *puVar2;
  puVar3[1] = puVar2[1];
  *puVar3 = uVar4;
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 8) + 0xc);
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  return uVar1;
}


// ===== 0061a31c  lua_rawgetptagged =====

/* lua_rawgetptagged(lua_State*, int, void*, int) */

undefined4 lua_rawgetptagged(lua_State *param_1,int param_2,void *param_3,int param_4)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  if (((byte)param_1[1] >> 2 & 1) != 0) {
    param_1[1] = (lua_State)((byte)param_1[1] & 0xfb);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
    *(lua_State **)(*(long *)(param_1 + 0x18) + 0x30) = param_1;
  }
  if (param_2 < 1) {
    if (param_2 < -9999) {
      plVar2 = (long *)FUN_00618038(param_1,param_2,param_3,param_4);
      plVar3 = *(long **)(param_1 + 8);
    }
    else {
      plVar3 = *(long **)(param_1 + 8);
      plVar2 = plVar3 + (long)param_2 * 2;
    }
  }
  else {
    plVar3 = *(long **)(param_1 + 8);
    plVar2 = (long *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (plVar3 <= plVar2) {
      plVar2 = &DAT_00285948;
    }
  }
  plVar2 = (long *)FUN_0062f310(*(undefined1 *)(*plVar2 + 6),*(undefined8 *)(*plVar2 + 0x20),param_3
                                ,param_4);
  lVar4 = *plVar2;
  plVar3[1] = plVar2[1];
  *plVar3 = lVar4;
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 8) + 0xc);
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  return uVar1;
}


// ===== 0061a3e4  lua_createtable =====

/* lua_createtable(lua_State*, int, int) */

void lua_createtable(lua_State *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if (*(ulong *)(*(long *)(param_1 + 0x18) + 0x40) <= *(ulong *)(*(long *)(param_1 + 0x18) + 0x48))
  {
    FUN_006239a4(param_1,param_2,param_3);
  }
  if (((byte)param_1[1] >> 2 & 1) != 0) {
    param_1[1] = (lua_State)((byte)param_1[1] & 0xfb);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
    *(lua_State **)(*(long *)(param_1 + 0x18) + 0x30) = param_1;
  }
  puVar3 = *(undefined8 **)(param_1 + 8);
  uVar1 = FUN_0062f204(param_1,param_2,param_3);
  *puVar3 = uVar1;
  lVar2 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)puVar3 + 0xc) = 7;
  *(long *)(param_1 + 8) = lVar2 + 0x10;
  return;
}


// ===== 0061a474  lua_setreadonly =====

/* lua_setreadonly(lua_State*, int, int) */

void lua_setreadonly(lua_State *param_1,int param_2,int param_3)

{
  long *plVar1;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      plVar1 = (long *)FUN_00618038();
    }
    else {
      plVar1 = (long *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar1 = (long *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (*(long **)(param_1 + 8) <= plVar1) {
      plVar1 = &DAT_00285948;
    }
  }
  *(bool *)(*plVar1 + 4) = param_3 != 0;
  return;
}


// ===== 0061a4e4  lua_getreadonly =====

/* lua_getreadonly(lua_State*, int) */

undefined1 lua_getreadonly(lua_State *param_1,int param_2)

{
  long *plVar1;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      plVar1 = (long *)FUN_00618038();
    }
    else {
      plVar1 = (long *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar1 = (long *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (*(long **)(param_1 + 8) <= plVar1) {
      plVar1 = &DAT_00285948;
    }
  }
  return *(undefined1 *)(*plVar1 + 4);
}


// ===== 0061a540  lua_setsafeenv =====

/* lua_setsafeenv(lua_State*, int, int) */

void lua_setsafeenv(lua_State *param_1,int param_2,int param_3)

{
  long *plVar1;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      plVar1 = (long *)FUN_00618038();
    }
    else {
      plVar1 = (long *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar1 = (long *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (*(long **)(param_1 + 8) <= plVar1) {
      plVar1 = &DAT_00285948;
    }
  }
  *(bool *)(*plVar1 + 5) = param_3 != 0;
  return;
}


// ===== 0061a5b0  lua_getmetatable =====

/* lua_getmetatable(lua_State*, int) */

bool lua_getmetatable(lua_State *param_1,int param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if (((byte)param_1[1] >> 2 & 1) != 0) {
    param_1[1] = (lua_State)((byte)param_1[1] & 0xfb);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
    *(lua_State **)(*(long *)(param_1 + 0x18) + 0x30) = param_1;
  }
  if (param_2 < 1) {
    if (param_2 < -9999) {
      plVar2 = (long *)FUN_00618038(param_1);
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar2 = (long *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (*(long **)(param_1 + 8) <= plVar2) {
      plVar2 = &DAT_00285948;
    }
  }
  iVar1 = *(int *)((long)plVar2 + 0xc);
  if (iVar1 == 9) {
    plVar2 = (long *)(*plVar2 + 8);
  }
  else if (iVar1 == 7) {
    plVar2 = (long *)(*plVar2 + 0x10);
  }
  else {
    plVar2 = (long *)(*(long *)(param_1 + 0x18) + (long)iVar1 * 8 + 0x328);
  }
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    plVar2 = *(long **)(param_1 + 8);
    *plVar2 = lVar3;
    lVar4 = *(long *)(param_1 + 8);
    *(undefined4 *)((long)plVar2 + 0xc) = 7;
    *(long *)(param_1 + 8) = lVar4 + 0x10;
  }
  return lVar3 != 0;
}


// ===== 0061a69c  lua_getfenv =====

/* lua_getfenv(lua_State*, int) */

void lua_getfenv(lua_State *param_1,int param_2)

{
  long *plVar1;
  undefined4 uVar2;
  long *plVar3;
  
  if (((byte)param_1[1] >> 2 & 1) != 0) {
    param_1[1] = (lua_State)((byte)param_1[1] & 0xfb);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
    *(lua_State **)(*(long *)(param_1 + 0x18) + 0x30) = param_1;
  }
  if (param_2 < 1) {
    if (param_2 < -9999) {
      plVar3 = (long *)FUN_00618038(param_1);
      plVar1 = *(long **)(param_1 + 8);
    }
    else {
      plVar1 = *(long **)(param_1 + 8);
      plVar3 = plVar1 + (long)param_2 * 2;
    }
  }
  else {
    plVar1 = *(long **)(param_1 + 8);
    plVar3 = (long *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (plVar1 <= plVar3) {
      plVar3 = &DAT_00285948;
    }
  }
  if (*(int *)((long)plVar3 + 0xc) == 10) {
    plVar3 = (long *)(*plVar3 + 0x58);
  }
  else {
    if (*(int *)((long)plVar3 + 0xc) != 8) {
      uVar2 = 0;
      plVar3 = plVar1;
      goto LAB_0061a75c;
    }
    plVar3 = (long *)(*plVar3 + 0x18);
  }
  *plVar1 = *plVar3;
  uVar2 = 7;
  plVar3 = *(long **)(param_1 + 8);
LAB_0061a75c:
  *(undefined4 *)((long)plVar1 + 0xc) = uVar2;
  *(long **)(param_1 + 8) = plVar3 + 2;
  return;
}


// ===== 0061a774  lua_settable =====

/* lua_settable(lua_State*, int) */

void lua_settable(lua_State *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      puVar2 = (undefined8 *)FUN_00618038(param_1);
      puVar1 = *(undefined8 **)(param_1 + 8);
    }
    else {
      puVar1 = *(undefined8 **)(param_1 + 8);
      puVar2 = puVar1 + (long)param_2 * 2;
    }
  }
  else {
    puVar1 = *(undefined8 **)(param_1 + 8);
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (puVar1 <= puVar2) {
      puVar2 = &DAT_00285948;
    }
  }
  FUN_00642f48(param_1,puVar2,puVar1 + -4,puVar1 + -2);
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -0x20;
  return;
}


// ===== 0061a7fc  lua_setfield =====

/* lua_setfield(lua_State*, int, char const*) */

void lua_setfield(lua_State *param_1,int param_2,char *param_3)

{
  long lVar1;
  size_t sVar2;
  undefined8 *puVar3;
  undefined8 local_48;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2 < 1) {
    if (param_2 < -9999) {
      puVar3 = (undefined8 *)FUN_00618038(param_1);
    }
    else {
      puVar3 = (undefined8 *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (*(undefined8 **)(param_1 + 8) <= puVar3) {
      puVar3 = &DAT_00285948;
    }
  }
  sVar2 = strlen(param_3);
  local_48 = FUN_0062b178(param_1,param_3,sVar2);
  local_3c = 6;
  FUN_00642f48(param_1,puVar3,&local_48,*(long *)(param_1 + 8) + -0x10);
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -0x10;
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0061a8e0  lua_rawsetfield =====

/* lua_rawsetfield(lua_State*, int, char const*) */

void lua_rawsetfield(lua_State *param_1,int param_2,char *param_3)

{
  size_t sVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      plVar4 = (long *)FUN_00618038(param_1);
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar4 = (long *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (*(long **)(param_1 + 8) <= plVar4) {
      plVar4 = &DAT_00285948;
    }
  }
  lVar5 = *plVar4;
  if (*(char *)(lVar5 + 4) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_00621894(param_1);
  }
  lVar6 = *(long *)(param_1 + 8);
  sVar1 = strlen(param_3);
  uVar2 = FUN_0062b178(param_1,param_3,sVar1);
  puVar3 = (undefined8 *)FUN_0062f634(param_1,lVar5,uVar2);
  uVar2 = *(undefined8 *)(lVar6 + -0x10);
  puVar3[1] = *(undefined8 *)(lVar6 + -8);
  *puVar3 = uVar2;
  lVar5 = *(long *)(param_1 + 8);
  if (5 < *(int *)(lVar5 + -4)) {
    lVar6 = *plVar4;
    if (((*(byte *)(lVar6 + 1) >> 2 & 1) != 0) &&
       ((*(byte *)(*(long *)(lVar5 + -0x10) + 1) & 3) != 0)) {
      lVar5 = *(long *)(param_1 + 0x18);
      if (*(char *)(lVar5 + 0x21) == '\x02') {
        FUN_00624a78();
      }
      else {
        *(byte *)(lVar6 + 1) = *(byte *)(lVar6 + 1) & 0xfb;
        uVar2 = *(undefined8 *)(lVar5 + 0x30);
        *(long *)(lVar5 + 0x30) = lVar6;
        *(undefined8 *)(lVar6 + 0x28) = uVar2;
      }
      lVar5 = *(long *)(param_1 + 8);
    }
  }
  *(long *)(param_1 + 8) = lVar5 + -0x10;
  return;
}


// ===== 0061aa08  lua_rawset =====

/* lua_rawset(lua_State*, int) */

void lua_rawset(lua_State *param_1,int param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      plVar2 = (long *)FUN_00618038(param_1);
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar2 = (long *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (*(long **)(param_1 + 8) <= plVar2) {
      plVar2 = &DAT_00285948;
    }
  }
  if (*(char *)(*plVar2 + 4) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_00621894(param_1);
  }
  lVar5 = *(long *)(param_1 + 8);
  puVar1 = (undefined8 *)FUN_0062f4a4(param_1,*plVar2,lVar5 + -0x20);
  uVar3 = *(undefined8 *)(lVar5 + -0x10);
  puVar1[1] = *(undefined8 *)(lVar5 + -8);
  *puVar1 = uVar3;
  lVar5 = *(long *)(param_1 + 8);
  if (5 < *(int *)(lVar5 + -4)) {
    lVar4 = *plVar2;
    if (((*(byte *)(lVar4 + 1) >> 2 & 1) != 0) &&
       ((*(byte *)(*(long *)(lVar5 + -0x10) + 1) & 3) != 0)) {
      lVar5 = *(long *)(param_1 + 0x18);
      if (*(char *)(lVar5 + 0x21) == '\x02') {
        FUN_00624a78();
      }
      else {
        *(byte *)(lVar4 + 1) = *(byte *)(lVar4 + 1) & 0xfb;
        uVar3 = *(undefined8 *)(lVar5 + 0x30);
        *(long *)(lVar5 + 0x30) = lVar4;
        *(undefined8 *)(lVar4 + 0x28) = uVar3;
      }
      lVar5 = *(long *)(param_1 + 8);
    }
  }
  *(long *)(param_1 + 8) = lVar5 + -0x20;
  return;
}


// ===== 0061ab08  lua_rawseti =====

/* lua_rawseti(lua_State*, int, int) */

void lua_rawseti(lua_State *param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      plVar2 = (long *)FUN_00618038(param_1,param_2,param_3);
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar2 = (long *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (*(long **)(param_1 + 8) <= plVar2) {
      plVar2 = &DAT_00285948;
    }
  }
  if (*(char *)(*plVar2 + 4) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_00621894(param_1);
  }
  lVar5 = *(long *)(param_1 + 8);
  puVar1 = (undefined8 *)FUN_0062f588(param_1,*plVar2,param_3);
  uVar3 = *(undefined8 *)(lVar5 + -0x10);
  puVar1[1] = *(undefined8 *)(lVar5 + -8);
  *puVar1 = uVar3;
  lVar5 = *(long *)(param_1 + 8);
  if (5 < *(int *)(lVar5 + -4)) {
    lVar4 = *plVar2;
    if (((*(byte *)(lVar4 + 1) >> 2 & 1) != 0) &&
       ((*(byte *)(*(long *)(lVar5 + -0x10) + 1) & 3) != 0)) {
      lVar5 = *(long *)(param_1 + 0x18);
      if (*(char *)(lVar5 + 0x21) == '\x02') {
        FUN_00624a78();
      }
      else {
        *(byte *)(lVar4 + 1) = *(byte *)(lVar4 + 1) & 0xfb;
        uVar3 = *(undefined8 *)(lVar5 + 0x30);
        *(long *)(lVar5 + 0x30) = lVar4;
        *(undefined8 *)(lVar4 + 0x28) = uVar3;
      }
      lVar5 = *(long *)(param_1 + 8);
    }
  }
  *(long *)(param_1 + 8) = lVar5 + -0x10;
  return;
}


// ===== 0061ac0c  lua_rawsetptagged =====

/* lua_rawsetptagged(lua_State*, int, void*, int) */

void lua_rawsetptagged(lua_State *param_1,int param_2,void *param_3,int param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  void *local_68;
  int local_60;
  undefined4 uStack_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_2 < 1) {
    if (param_2 < -9999) {
      plVar3 = (long *)FUN_00618038(param_1);
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar3 = (long *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (*(long **)(param_1 + 8) <= plVar3) {
      plVar3 = &DAT_00285948;
    }
  }
  lVar6 = *plVar3;
  if (*(char *)(lVar6 + 4) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_00621894(param_1);
  }
  lVar4 = *(long *)(param_1 + 8);
  puVar2 = (undefined8 *)
           FUN_0062f310(*(undefined1 *)(lVar6 + 6),*(undefined8 *)(lVar6 + 0x20),param_3,param_4);
  if (puVar2 == &DAT_00285948) {
    uStack_5c = 2;
    local_68 = param_3;
    local_60 = param_4;
    puVar2 = (undefined8 *)FUN_0062eb84(param_1,lVar6,&local_68);
  }
  uVar5 = *(undefined8 *)(lVar4 + -0x10);
  puVar2[1] = *(undefined8 *)(lVar4 + -8);
  *puVar2 = uVar5;
  lVar6 = *(long *)(param_1 + 8);
  if (5 < *(int *)(lVar6 + -4)) {
    lVar4 = *plVar3;
    if (((*(byte *)(lVar4 + 1) >> 2 & 1) != 0) &&
       ((*(byte *)(*(long *)(lVar6 + -0x10) + 1) & 3) != 0)) {
      lVar6 = *(long *)(param_1 + 0x18);
      if (*(char *)(lVar6 + 0x21) == '\x02') {
        FUN_00624a78();
      }
      else {
        *(byte *)(lVar4 + 1) = *(byte *)(lVar4 + 1) & 0xfb;
        uVar5 = *(undefined8 *)(lVar6 + 0x30);
        *(long *)(lVar6 + 0x30) = lVar4;
        *(undefined8 *)(lVar4 + 0x28) = uVar5;
      }
      lVar6 = *(long *)(param_1 + 8);
    }
  }
  *(long *)(param_1 + 8) = lVar6 + -0x10;
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0061ad7c  lua_setmetatable =====

/* lua_setmetatable(lua_State*, int) */

undefined8 lua_setmetatable(lua_State *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      plVar4 = (long *)FUN_00618038(param_1);
      plVar3 = *(long **)(param_1 + 8);
    }
    else {
      plVar3 = *(long **)(param_1 + 8);
      plVar4 = plVar3 + (long)param_2 * 2;
    }
  }
  else {
    plVar3 = *(long **)(param_1 + 8);
    plVar4 = (long *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (plVar3 <= plVar4) {
      plVar4 = &DAT_00285948;
    }
  }
  if (*(int *)((long)plVar3 + -4) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = plVar3[-2];
  }
  iVar1 = *(int *)((long)plVar4 + 0xc);
  if (iVar1 == 9) {
    *(long *)(*plVar4 + 8) = lVar2;
  }
  else {
    if (iVar1 != 7) {
      *(long *)(*(long *)(param_1 + 0x18) + (long)iVar1 * 8 + 0x328) = lVar2;
      goto LAB_0061ae58;
    }
    if (*(char *)(*plVar4 + 4) != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_00621894(param_1);
    }
    *(long *)(*plVar4 + 0x10) = lVar2;
  }
  if (((lVar2 != 0) && ((*(byte *)(*plVar4 + 1) >> 2 & 1) != 0)) &&
     ((*(byte *)(lVar2 + 1) & 3) != 0)) {
    FUN_00624e24(*(undefined8 *)(param_1 + 0x18));
  }
LAB_0061ae58:
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -0x10;
  return 1;
}


// ===== 0061ae7c  lua_setfenv =====

/* lua_setfenv(lua_State*, int) */

undefined8 lua_setfenv(lua_State *param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      plVar3 = (long *)FUN_00618038(param_1);
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar3 = (long *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (*(long **)(param_1 + 8) <= plVar3) {
      plVar3 = &DAT_00285948;
    }
  }
  if (*(int *)((long)plVar3 + 0xc) == 10) {
    lVar2 = *(long *)(*(long *)(param_1 + 8) + -0x10);
    *(long *)(*plVar3 + 0x58) = lVar2;
  }
  else {
    if (*(int *)((long)plVar3 + 0xc) != 8) {
      uVar1 = 0;
      goto LAB_0061af38;
    }
    lVar2 = *(long *)(*(long *)(param_1 + 8) + -0x10);
    *(long *)(*plVar3 + 0x18) = lVar2;
  }
  if (((*(byte *)(*plVar3 + 1) >> 2 & 1) != 0) && ((*(byte *)(lVar2 + 1) & 3) != 0)) {
    FUN_00624e24(*(undefined8 *)(param_1 + 0x18));
  }
  uVar1 = 1;
LAB_0061af38:
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -0x10;
  return uVar1;
}


// ===== 0061af50  lua_call =====

/* lua_call(lua_State*, int, int) */

void lua_call(lua_State *param_1,int param_2,int param_3)

{
  FUN_00622574(param_1,*(long *)(param_1 + 8) + (long)~param_2 * 0x10,param_3,0);
  if (param_3 == -1) {
    if (*(ulong *)(*(long *)(param_1 + 0x20) + 0x10) <= *(ulong *)(param_1 + 8)) {
      *(ulong *)(*(long *)(param_1 + 0x20) + 0x10) = *(ulong *)(param_1 + 8);
    }
  }
  return;
}


// ===== 0061afa4  lua_pcall =====

/* lua_pcall(lua_State*, int, int, int) */

void lua_pcall(lua_State *param_1,int param_2,int param_3,int param_4)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long local_48;
  int local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_4 == 0) {
    lVar4 = *(long *)(param_1 + 0x30);
    lVar2 = 0;
  }
  else {
    if (param_4 < 1) {
      if ((uint)param_4 < 0xffffd8f1) {
        puVar3 = (undefined8 *)FUN_00618038(param_1,param_4);
      }
      else {
        puVar3 = (undefined8 *)(*(long *)(param_1 + 8) + (long)param_4 * 0x10);
      }
    }
    else {
      puVar3 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_4 * 0x10 + -0x10);
      if (*(undefined8 **)(param_1 + 8) <= puVar3) {
        puVar3 = &DAT_00285948;
      }
    }
    lVar4 = *(long *)(param_1 + 0x30);
    lVar2 = (long)puVar3 - lVar4;
  }
  local_48 = *(long *)(param_1 + 8) + (long)~param_2 * 0x10;
  local_40 = param_3;
  FUN_00622fe0(param_1,FUN_0061b0a8,&local_48,local_48 - lVar4,lVar2);
  if (param_3 == -1) {
    if (*(ulong *)(*(long *)(param_1 + 0x20) + 0x10) <= *(ulong *)(param_1 + 8)) {
      *(ulong *)(*(long *)(param_1 + 0x20) + 0x10) = *(ulong *)(param_1 + 8);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0061b0a8  FUN_0061b0a8 =====

void FUN_0061b0a8(undefined8 param_1,undefined8 *param_2)

{
  FUN_00622574(param_1,*param_2,*(undefined4 *)(param_2 + 1),0);
  return;
}


// ===== 0061b0bc  lua_cpcall =====

/* lua_cpcall(lua_State*, int (*)(lua_State*), void*) */

void lua_cpcall(lua_State *param_1,_func_int_lua_State_ptr *param_2,void *param_3)

{
  long lVar1;
  _func_int_lua_State_ptr *local_38;
  void *pvStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = param_2;
  pvStack_30 = param_3;
  FUN_00622fe0(param_1,FUN_0061b120,&local_38,*(long *)(param_1 + 8) - *(long *)(param_1 + 0x30),0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0061b120  FUN_0061b120 =====

void FUN_0061b120(lua_State *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  
  iVar1 = lua_checkstack(param_1,2);
  if (iVar1 != 0) {
    lua_pushcclosurek(param_1,(_func_int_lua_State_ptr *)*param_2,(char *)0x0,0,
                      (_func_int_lua_State_ptr_int *)0x0);
    puVar3 = *(undefined8 **)(param_1 + 8);
    *puVar3 = param_2[1];
    lVar2 = *(long *)(param_1 + 8);
    puVar3[1] = DAT_0024e7c8;
    *(long *)(param_1 + 8) = lVar2 + 0x10;
    FUN_00622574(param_1,lVar2 + -0x10,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_006214f8(param_1,"stack limit");
}


// ===== 0061b1a8  lua_status =====

/* lua_status(lua_State*) */

lua_State lua_status(lua_State *param_1)

{
  return param_1[3];
}


// ===== 0061b1b0  lua_costatus =====

/* lua_costatus(lua_State*, lua_State*) */

undefined1 lua_costatus(lua_State *param_1,lua_State *param_2)

{
  lua_State lVar1;
  
  if (param_2 == param_1) {
    return 0;
  }
  lVar1 = param_2[3];
  if (lVar1 == (lua_State)0x0) {
    if (*(long *)(param_2 + 0x20) == *(long *)(param_2 + 0x40)) {
      if (*(long *)(param_2 + 8) == *(long *)(param_2 + 0x10)) {
        return 3;
      }
      return 1;
    }
  }
  else {
    if (lVar1 == (lua_State)0x1) {
      return 1;
    }
    if (lVar1 != (lua_State)0x6) {
      return 4;
    }
  }
  return 2;
}


// ===== 0061b20c  lua_getthreaddata =====

/* lua_getthreaddata(lua_State*) */

undefined8 lua_getthreaddata(lua_State *param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}


// ===== 0061b214  lua_setthreaddata =====

/* lua_setthreaddata(lua_State*, void*) */

void lua_setthreaddata(lua_State *param_1,void *param_2)

{
  *(void **)(param_1 + 0x78) = param_2;
  return;
}


// ===== 0061b21c  lua_gc =====

/* lua_gc(lua_State*, int, int) */

void lua_gc(lua_State *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  uint local_4c;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  lVar12 = *(long *)(param_1 + 0x18);
  uVar6 = 0xffffffff;
  if (param_2 < 5) {
    if (1 < param_2) {
      if (param_2 != 2) {
        if (param_2 == 3) {
          uVar6 = *(ulong *)(lVar12 + 0x48) >> 10;
        }
        else if (param_2 == 4) {
          uVar6 = (ulong)(*(uint *)(lVar12 + 0x48) & 0x3ff);
        }
        goto LAB_0061b4c4;
      }
      if (*(byte *)(lVar12 + 0x21) - 1 < 3) {
        *(undefined8 *)(lVar12 + 0x30) = 0;
        *(undefined8 *)(lVar12 + 0x38) = 0;
        *(undefined8 *)(lVar12 + 0x28) = 0;
        *(undefined8 *)(lVar12 + 0x2f0) = *(undefined8 *)(lVar12 + 0x2e8);
        *(undefined1 *)(lVar12 + 0x21) = 4;
LAB_0061b364:
        do {
          FUN_00623b8c(param_1,0xffffffffffffffff);
        } while (*(char *)(lVar12 + 0x21) != '\0');
      }
      else if (*(byte *)(lVar12 + 0x21) != 0) goto LAB_0061b364;
      for (lVar9 = *(long *)(lVar12 + 0x318); lVar9 != lVar12 + 0x300;
          lVar9 = *(long *)(lVar9 + 0x18)) {
        *(undefined1 *)(lVar9 + 3) = 0;
      }
      FUN_00624224(param_1);
      while (*(char *)(lVar12 + 0x21) != '\0') {
        FUN_00623b8c(param_1,0xffffffffffffffff);
      }
      uVar2 = *(uint *)(*(long *)(param_1 + 0x18) + 0xc);
      uVar5 = uVar2;
      do {
        uVar10 = uVar5;
        uVar1 = uVar10 + 3;
        if (-1 < (int)uVar10) {
          uVar1 = uVar10;
        }
      } while ((0x40 < (int)uVar10) &&
              (uVar5 = uVar10 >> 1,
              *(uint *)(*(long *)(param_1 + 0x18) + 8) < (uint)((int)uVar1 >> 2)));
      if (uVar10 != uVar2) {
        local_4c = uVar10;
        FUN_00622224(param_1,FUN_00624c70,&local_4c);
      }
      iVar3 = *(int *)(lVar12 + 0x58);
      uVar6 = 0;
      uVar11 = *(ulong *)(lVar12 + 0x48);
      uVar8 = 0;
      if ((long)iVar3 != 0) {
        uVar8 = (uVar11 * (long)((iVar3 * *(int *)(lVar12 + 0x50)) / 100 + -100)) /
                (ulong)(long)iVar3;
      }
      *(ulong *)(lVar12 + 0x44d8) = (uVar11 / 100) * (long)*(int *)(lVar12 + 0x50);
      if (uVar8 <= uVar11) {
        uVar8 = uVar11;
      }
      *(ulong *)(lVar12 + 0x40) = uVar8;
      goto LAB_0061b4c4;
    }
    if (param_2 == 0) {
      uVar8 = 0xffffffffffffffff;
    }
    else {
      if (param_2 != 1) goto LAB_0061b4c4;
      uVar8 = *(ulong *)(lVar12 + 0x48);
    }
  }
  else {
    if (6 < param_2) {
      if (param_2 == 7) {
        uVar6 = (ulong)*(uint *)(lVar12 + 0x50);
        *(int *)(lVar12 + 0x50) = param_3;
      }
      else if (param_2 == 8) {
        uVar6 = (ulong)*(uint *)(lVar12 + 0x54);
        *(int *)(lVar12 + 0x54) = param_3;
      }
      else if (param_2 == 9) {
        uVar6 = (ulong)(uint)(*(int *)(lVar12 + 0x58) >> 10);
        *(int *)(lVar12 + 0x58) = param_3 << 10;
      }
      goto LAB_0061b4c4;
    }
    if (param_2 == 5) {
      uVar6 = (ulong)(*(long *)(lVar12 + 0x40) != -1);
      goto LAB_0061b4c4;
    }
    if (param_2 != 6) goto LAB_0061b4c4;
    uVar6 = -(ulong)((uint)param_3 >> 0x1f) & 0xfffffc0000000000 | (ulong)(uint)param_3 << 10;
    if (*(char *)(lVar12 + 0x21) == '\0') {
      uVar8 = *(ulong *)(lVar12 + 0x48);
      lVar9 = 0;
    }
    else {
      uVar8 = *(ulong *)(lVar12 + 0x48);
      lVar9 = *(long *)(lVar12 + 0x40) - uVar8;
    }
    lVar13 = 0;
    lVar7 = 0;
    if (uVar6 <= uVar8) {
      lVar7 = uVar8 - uVar6;
    }
    *(long *)(lVar12 + 0x40) = lVar7;
    do {
      lVar7 = FUN_006239a4(param_1);
      if (*(char *)(lVar12 + 0x21) == '\0') {
        uVar6 = 1;
        goto LAB_0061b4c4;
      }
      lVar13 = lVar7 + lVar13;
    } while (*(ulong *)(lVar12 + 0x40) <= *(ulong *)(lVar12 + 0x48));
    uVar8 = lVar13 + lVar9 + *(ulong *)(lVar12 + 0x48);
    uVar8 = uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU);
  }
  uVar6 = 0;
  *(ulong *)(lVar12 + 0x40) = uVar8;
LAB_0061b4c4:
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}


// ===== 0061b4f0  lua_error =====

/* lua_error(lua_State*) */

void lua_error(lua_State *param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_006222c0(param_1,2);
}


// ===== 0061b500  lua_next =====

/* lua_next(lua_State*, int) */

undefined8 lua_next(lua_State *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  double *pdVar13;
  long *plVar14;
  
  if (((byte)param_1[1] >> 2 & 1) != 0) {
    param_1[1] = (lua_State)((byte)param_1[1] & 0xfb);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
    *(lua_State **)(*(long *)(param_1 + 0x18) + 0x30) = param_1;
  }
  if (param_2 < 1) {
    if (param_2 < -9999) {
      plVar4 = (long *)FUN_00618038(param_1);
      plVar14 = *(long **)(param_1 + 8);
    }
    else {
      plVar14 = *(long **)(param_1 + 8);
      plVar4 = plVar14 + (long)param_2 * 2;
    }
  }
  else {
    plVar14 = *(long **)(param_1 + 8);
    plVar4 = (long *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (plVar14 <= plVar4) {
      plVar4 = &DAT_00285948;
    }
  }
  iVar2 = *(int *)((long)plVar14 + -4);
  lVar12 = *plVar4;
  pdVar13 = (double *)(plVar14 + -2);
  if (iVar2 == 3) {
    iVar7 = (int)*pdVar13;
    uVar8 = (ulong)(iVar7 - 1);
    if (((iVar7 < 1) || (*pdVar13 != (double)iVar7)) ||
       (iVar9 = *(int *)(lVar12 + 8), iVar9 < iVar7)) goto LAB_0061b5d0;
  }
  else if (iVar2 == 0) {
    iVar9 = *(int *)(lVar12 + 8);
    uVar8 = 0xffffffff;
  }
  else {
LAB_0061b5d0:
    lVar5 = FUN_0062e5a8(lVar12,pdVar13);
    while (iVar7 = FUN_00629950(lVar5 + 0x10,pdVar13), iVar7 == 0) {
      uVar1 = *(uint *)(lVar5 + 0x1c);
      if ((((uVar1 & 0xf) == 0xe) && (5 < iVar2)) && (*(double *)(lVar5 + 0x10) == *pdVar13)) break;
      if (uVar1 < 0x10) {
                    /* WARNING: Subroutine does not return */
        FUN_006214f8(param_1,"invalid key to \'next\'");
      }
      lVar5 = lVar5 + ((long)((ulong)uVar1 << 0x20) >> 0x24) * 0x20;
    }
    iVar9 = *(int *)(lVar12 + 8);
    uVar8 = (ulong)(uint)(iVar9 + (int)((ulong)(lVar5 - *(long *)(lVar12 + 0x20)) >> 5));
  }
  iVar6 = (int)uVar8;
  lVar5 = (long)iVar6;
  iVar7 = iVar6 - iVar9;
  lVar11 = (-(uVar8 >> 0x1f) & 0xfffffff000000000 | uVar8 << 4) + 0x1c;
  iVar2 = iVar9;
  if ((long)iVar9 < lVar5 + 1) {
    iVar2 = iVar6 + 1;
  }
  do {
    iVar7 = iVar7 + 1;
    lVar5 = lVar5 + 1;
    if (iVar9 <= lVar5) {
      iVar6 = 1 << (ulong)(*(byte *)(lVar12 + 6) & 0x1f);
      if (iVar6 <= iVar2 - iVar9) goto LAB_0061b6e8;
      lVar5 = (long)iVar7;
      piVar10 = (int *)(*(long *)(lVar12 + 0x20) + lVar5 * 0x20 + 0xc);
      goto LAB_0061b6d4;
    }
    piVar10 = (int *)(*(long *)(lVar12 + 0x18) + lVar11);
    lVar11 = lVar11 + 0x10;
  } while (*piVar10 == 0);
  *(undefined4 *)((long)plVar14 + -4) = 3;
  plVar14[-2] = (long)(double)((int)lVar5 + 1);
  plVar4 = (long *)(*(long *)(lVar12 + 0x18) + lVar5 * 0x10);
LAB_0061b71c:
  lVar5 = *plVar4;
  lVar12 = 1;
  uVar3 = 1;
  plVar14[1] = plVar4[1];
  *plVar14 = lVar5;
  plVar14 = *(long **)(param_1 + 8);
LAB_0061b730:
  *(long **)(param_1 + 8) = plVar14 + lVar12 * 2;
  return uVar3;
  while (lVar5 = lVar5 + 1, piVar10 = piVar10 + 8, lVar5 < iVar6) {
LAB_0061b6d4:
    if (*piVar10 != 0) {
      lVar11 = *(long *)(lVar12 + 0x20) + lVar5 * 0x20;
      plVar14[-2] = *(long *)(lVar11 + 0x10);
      *(undefined4 *)(plVar14 + -1) = *(undefined4 *)(lVar11 + 0x18);
      plVar4 = (long *)(*(long *)(lVar12 + 0x20) + lVar5 * 0x20);
      *(uint *)((long)plVar14 + -4) = *(uint *)(lVar11 + 0x1c) & 0xf;
      goto LAB_0061b71c;
    }
  }
LAB_0061b6e8:
  uVar3 = 0;
  lVar12 = -1;
  goto LAB_0061b730;
}


// ===== 0061b75c  lua_rawiter =====

/* lua_rawiter(lua_State*, int, int) */

int lua_rawiter(lua_State *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  double *pdVar4;
  long *plVar5;
  double *pdVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  int *piVar12;
  double dVar13;
  undefined8 uVar14;
  
  if (((byte)param_1[1] >> 2 & 1) != 0) {
    param_1[1] = (lua_State)((byte)param_1[1] & 0xfb);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
    *(lua_State **)(*(long *)(param_1 + 0x18) + 0x30) = param_1;
  }
  if (param_2 < 1) {
    if (param_2 < -9999) {
      plVar5 = (long *)FUN_00618038(param_1);
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar5 = (long *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (*(long **)(param_1 + 8) <= plVar5) {
      plVar5 = &DAT_00285948;
    }
  }
  lVar8 = *plVar5;
  uVar3 = *(uint *)(lVar8 + 8);
  if ((uint)param_3 < uVar3) {
    lVar9 = *(long *)(lVar8 + 0x18);
    lVar10 = (long)param_3;
    piVar12 = (int *)(lVar9 + (long)param_3 * 0x10 + 0xc);
    do {
      if (*piVar12 != 0) {
        iVar1 = (int)lVar10 + 1;
        pdVar6 = *(double **)(param_1 + 8);
        *(undefined4 *)((long)pdVar6 + 0xc) = 3;
        *pdVar6 = (double)iVar1;
        pdVar4 = (double *)(lVar9 + lVar10 * 0x10);
        dVar13 = *pdVar4;
        pdVar6[3] = pdVar4[1];
        pdVar6[2] = dVar13;
        *(double **)(param_1 + 8) = pdVar6 + 4;
        return iVar1;
      }
      lVar10 = lVar10 + 1;
      piVar12 = piVar12 + 4;
      param_3 = uVar3;
    } while ((uint)lVar10 < uVar3);
  }
  uVar11 = param_3 - uVar3;
  if (uVar11 >> (ulong)(*(byte *)(lVar8 + 6) & 0x1f) == 0) {
    do {
      puVar2 = (undefined8 *)(*(long *)(lVar8 + 0x20) + (long)(int)uVar11 * 0x20);
      if (*(int *)((long)puVar2 + 0xc) != 0) {
        puVar7 = *(undefined8 **)(param_1 + 8);
        *puVar7 = puVar2[2];
        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar2 + 3);
        *(uint *)((long)puVar7 + 0xc) = *(uint *)((long)puVar2 + 0x1c) & 0xf;
        uVar14 = *puVar2;
        puVar7[3] = puVar2[1];
        puVar7[2] = uVar14;
        *(undefined8 **)(param_1 + 8) = puVar7 + 4;
        return param_3 + 1;
      }
      uVar11 = (1 - uVar3) + param_3;
      param_3 = param_3 + 1;
    } while (uVar11 >> (ulong)(*(byte *)(lVar8 + 6) & 0x1f) == 0);
  }
  return -1;
}


// ===== 0061b8c4  lua_concat =====

/* lua_concat(lua_State*, int) */

void lua_concat(lua_State *param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if (param_2 < 2) {
    if (param_2 != 0) {
      return;
    }
    if (((byte)param_1[1] >> 2 & 1) != 0) {
      param_1[1] = (lua_State)((byte)param_1[1] & 0xfb);
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
      *(lua_State **)(*(long *)(param_1 + 0x18) + 0x30) = param_1;
    }
    puVar3 = *(undefined8 **)(param_1 + 8);
    uVar1 = FUN_0062b178(param_1,&DAT_00243399,0);
    *puVar3 = uVar1;
    lVar2 = *(long *)(param_1 + 8);
    *(undefined4 *)((long)puVar3 + 0xc) = 6;
    lVar2 = lVar2 + 0x10;
  }
  else {
    if (*(ulong *)(*(long *)(param_1 + 0x18) + 0x40) <= *(ulong *)(*(long *)(param_1 + 0x18) + 0x48)
       ) {
      FUN_006239a4(param_1);
    }
    if (((byte)param_1[1] >> 2 & 1) != 0) {
      param_1[1] = (lua_State)((byte)param_1[1] & 0xfb);
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
      *(lua_State **)(*(long *)(param_1 + 0x18) + 0x30) = param_1;
    }
    FUN_00643784(param_1,param_2,
                 (int)((ulong)(*(long *)(param_1 + 8) - *(long *)(param_1 + 0x10)) >> 4) + -1);
    lVar2 = *(long *)(param_1 + 8) + (ulong)(param_2 - 1) * -0x10;
  }
  *(long *)(param_1 + 8) = lVar2;
  return;
}


// ===== 0061b9a4  lua_newuserdatatagged =====

/* lua_newuserdatatagged(lua_State*, unsigned long, int) */

long lua_newuserdatatagged(lua_State *param_1,ulong param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  if (*(ulong *)(*(long *)(param_1 + 0x18) + 0x40) <= *(ulong *)(*(long *)(param_1 + 0x18) + 0x48))
  {
    FUN_006239a4(param_1,param_2,param_3);
  }
  if (((byte)param_1[1] >> 2 & 1) != 0) {
    param_1[1] = (lua_State)((byte)param_1[1] & 0xfb);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
    *(lua_State **)(*(long *)(param_1 + 0x18) + 0x30) = param_1;
  }
  lVar1 = FUN_00631578(param_1,param_2,param_3);
  plVar2 = *(long **)(param_1 + 8);
  *plVar2 = lVar1;
  lVar3 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)plVar2 + 0xc) = 9;
  *(long *)(param_1 + 8) = lVar3 + 0x10;
  return lVar1 + 0x10;
}


// ===== 0061ba38  lua_newuserdatataggedwithmetatable =====

/* lua_newuserdatataggedwithmetatable(lua_State*, unsigned long, int) */

long lua_newuserdatataggedwithmetatable(lua_State *param_1,ulong param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  if (*(ulong *)(*(long *)(param_1 + 0x18) + 0x40) <= *(ulong *)(*(long *)(param_1 + 0x18) + 0x48))
  {
    FUN_006239a4(param_1);
  }
  if (((byte)param_1[1] >> 2 & 1) != 0) {
    param_1[1] = (lua_State)((byte)param_1[1] & 0xfb);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
    *(lua_State **)(*(long *)(param_1 + 0x18) + 0x30) = param_1;
  }
  lVar1 = FUN_00631578(param_1,param_2,param_3);
  lVar2 = *(long *)(param_1 + 0x18);
  plVar3 = *(long **)(param_1 + 8);
  *(undefined4 *)((long)plVar3 + 0xc) = 9;
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(lVar2 + (long)param_3 * 8 + 0x3830);
  *plVar3 = lVar1;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  return lVar1 + 0x10;
}


// ===== 0061badc  lua_newuserdatadtor =====

/* lua_newuserdatadtor(lua_State*, unsigned long, void (*)(void*)) */

long lua_newuserdatadtor(lua_State *param_1,ulong param_2,_func_void_void_ptr *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  if (*(ulong *)(*(long *)(param_1 + 0x18) + 0x40) <= *(ulong *)(*(long *)(param_1 + 0x18) + 0x48))
  {
    FUN_006239a4(param_1);
  }
  if (((byte)param_1[1] >> 2 & 1) != 0) {
    param_1[1] = (lua_State)((byte)param_1[1] & 0xfb);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
    *(lua_State **)(*(long *)(param_1 + 0x18) + 0x30) = param_1;
  }
  lVar1 = param_2 + 8;
  if (0xfffffffffffffff7 < param_2) {
    lVar1 = -1;
  }
  lVar1 = FUN_00631578(param_1,lVar1,0x80);
  *(_func_void_void_ptr **)(lVar1 + 0x10 + param_2) = param_3;
  plVar2 = *(long **)(param_1 + 8);
  *plVar2 = lVar1;
  lVar3 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)plVar2 + 0xc) = 9;
  *(long *)(param_1 + 8) = lVar3 + 0x10;
  return lVar1 + 0x10;
}


// ===== 0061bb7c  lua_newbuffer =====

/* lua_newbuffer(lua_State*, unsigned long) */

undefined1 * lua_newbuffer(lua_State *param_1,ulong param_2)

{
  ulong uVar1;
  lua_State lVar2;
  byte bVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  
  if (*(ulong *)(*(long *)(param_1 + 0x18) + 0x40) <= *(ulong *)(*(long *)(param_1 + 0x18) + 0x48))
  {
    FUN_006239a4(param_1);
  }
  if (((byte)param_1[1] >> 2 & 1) != 0) {
    param_1[1] = (lua_State)((byte)param_1[1] & 0xfb);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
    *(lua_State **)(*(long *)(param_1 + 0x18) + 0x30) = param_1;
  }
  if (param_2 < 0x40000001) {
    uVar1 = param_2;
    if (param_2 < 9) {
      uVar1 = 8;
    }
    puVar4 = (undefined1 *)FUN_00628d60(param_1,uVar1 + 8,param_1[4]);
    lVar5 = *(long *)(param_1 + 0x18);
    lVar2 = param_1[4];
    *puVar4 = 0xb;
    bVar3 = *(byte *)(lVar5 + 0x20);
    *(lua_State *)(puVar4 + 2) = lVar2;
    *(int *)(puVar4 + 4) = (int)param_2;
    puVar4[1] = bVar3 & 3;
    memset(puVar4 + 8,0,param_2);
    puVar6 = *(undefined8 **)(param_1 + 8);
    *puVar6 = puVar4;
    lVar5 = *(long *)(param_1 + 8);
    *(undefined4 *)((long)puVar6 + 0xc) = 0xb;
    *(long *)(param_1 + 8) = lVar5 + 0x10;
    return puVar4 + 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00628ac4(param_1);
}


// ===== 0061bc64  lua_getupvalue =====

/* lua_getupvalue(lua_State*, int, int) */

void lua_getupvalue(lua_State *param_1,int param_2,int param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((byte)param_1[1] >> 2 & 1) != 0) {
    param_1[1] = (lua_State)((byte)param_1[1] & 0xfb);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
    *(lua_State **)(*(long *)(param_1 + 0x18) + 0x30) = param_1;
  }
  if (param_2 < 1) {
    if (param_2 < -9999) {
      puVar3 = (undefined8 *)FUN_00618038(param_1);
    }
    else {
      puVar3 = (undefined8 *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (*(undefined8 **)(param_1 + 8) <= puVar3) {
      puVar3 = &DAT_00285948;
    }
  }
  lVar2 = FUN_0061bd48(puVar3,param_3,&local_40);
  if (lVar2 != 0) {
    puVar3 = *(undefined8 **)(param_1 + 8);
    uVar4 = *local_40;
    puVar3[1] = local_40[1];
    *puVar3 = uVar4;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0061bd48  FUN_0061bd48 =====

undefined1 * FUN_0061bd48(long *param_1,uint param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  if (*(int *)((long)param_1 + 0xc) != 8) {
    return (undefined1 *)0x0;
  }
  lVar3 = *param_1;
  if (*(char *)(lVar3 + 3) == '\0') {
    if ((int)param_2 < 1) {
      return (undefined1 *)0x0;
    }
    lVar2 = *(long *)(lVar3 + 0x20);
    if (*(byte *)(lVar2 + 3) < param_2) {
      return (undefined1 *)0x0;
    }
    lVar3 = lVar3 + (ulong)(param_2 - 1) * 0x10;
    plVar4 = (long *)(lVar3 + 0x28);
    if (*(int *)(lVar3 + 0x34) == 0x10) {
      plVar4 = *(long **)(*plVar4 + 8);
    }
    iVar1 = *(int *)(lVar2 + 0x94);
    *param_3 = (long)plVar4;
    if ((int)param_2 <= iVar1) {
      return (undefined1 *)(*(long *)(*(long *)(lVar2 + 0x50) + (ulong)(param_2 - 1) * 8) + 0x18);
    }
  }
  else {
    if ((int)param_2 < 1) {
      return (undefined1 *)0x0;
    }
    if (*(byte *)(lVar3 + 4) < param_2) {
      return (undefined1 *)0x0;
    }
    *param_3 = lVar3 + (ulong)(param_2 - 1) * 0x10 + 0x38;
  }
  return &DAT_00243399;
}


// ===== 0061bdec  lua_setupvalue =====

/* lua_setupvalue(lua_State*, int, int) */

long lua_setupvalue(lua_State *param_1,int param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2 < 1) {
    if (param_2 < -9999) {
      plVar3 = (long *)FUN_00618038(param_1);
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar3 = (long *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (*(long **)(param_1 + 8) <= plVar3) {
      plVar3 = &DAT_00285948;
    }
  }
  lVar2 = FUN_0061bd48(plVar3,param_3,&local_40);
  if (lVar2 != 0) {
    lVar4 = *(long *)(param_1 + 8);
    *(long *)(param_1 + 8) = lVar4 + -0x10;
    uVar5 = *(undefined8 *)(lVar4 + -0x10);
    local_40[1] = *(undefined8 *)(lVar4 + -8);
    *local_40 = uVar5;
    if (((5 < *(int *)((long)*(long **)(param_1 + 8) + 0xc)) &&
        ((*(byte *)(*plVar3 + 1) >> 2 & 1) != 0)) &&
       ((*(byte *)(**(long **)(param_1 + 8) + 1) & 3) != 0)) {
      FUN_00624e24(*(undefined8 *)(param_1 + 0x18));
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar2;
}


// ===== 0061bef0  lua_encodepointer =====

/* lua_encodepointer(lua_State*, unsigned long) */

ulong lua_encodepointer(lua_State *param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  return *(long *)(lVar1 + 0x500) + *(long *)(lVar1 + 0x4f0) * param_2 ^
         *(long *)(lVar1 + 0x4f8) + *(long *)(lVar1 + 0x4e8) * param_2;
}


// ===== 0061bf18  lua_ref =====

/* lua_ref(lua_State*, int) */

int lua_ref(lua_State *param_1,int param_2)

{
  int iVar1;
  double *pdVar2;
  double *pdVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  
  lVar6 = *(long *)(param_1 + 0x18);
  if (param_2 < 1) {
    if (param_2 < -9999) {
      pdVar3 = (double *)FUN_00618038(param_1);
    }
    else {
      pdVar3 = (double *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    pdVar3 = (double *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (*(double **)(param_1 + 8) <= pdVar3) {
      pdVar3 = (double *)&DAT_00285948;
    }
  }
  if (*(int *)((long)pdVar3 + 0xc) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(lVar6 + 0x4d0);
    lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 0x4c0);
    if (iVar1 == 0) {
      iVar1 = FUN_0062f6fc(lVar5);
      iVar1 = iVar1 + 1;
    }
    pdVar2 = (double *)FUN_0062f588(param_1,lVar5,iVar1);
    if (*(int *)(lVar6 + 0x4d0) != 0) {
      *(int *)(lVar6 + 0x4d0) = (int)*pdVar2;
    }
    dVar7 = *pdVar3;
    pdVar2[1] = pdVar3[1];
    *pdVar2 = dVar7;
    if (((5 < *(int *)((long)pdVar3 + 0xc)) && ((*(byte *)(lVar5 + 1) >> 2 & 1) != 0)) &&
       ((*(byte *)((long)*pdVar3 + 1) & 3) != 0)) {
      lVar6 = *(long *)(param_1 + 0x18);
      if (*(char *)(lVar6 + 0x21) == '\x02') {
        FUN_00624a78();
      }
      else {
        *(byte *)(lVar5 + 1) = *(byte *)(lVar5 + 1) & 0xfb;
        uVar4 = *(undefined8 *)(lVar6 + 0x30);
        *(long *)(lVar6 + 0x30) = lVar5;
        *(undefined8 *)(lVar5 + 0x28) = uVar4;
      }
    }
  }
  return iVar1;
}


// ===== 0061c040  lua_unref =====

/* lua_unref(lua_State*, int) */

void lua_unref(lua_State *param_1,int param_2)

{
  int iVar1;
  double *pdVar2;
  long lVar3;
  
  if (0 < param_2) {
    lVar3 = *(long *)(param_1 + 0x18);
    pdVar2 = (double *)FUN_0062f140(*(undefined8 *)(lVar3 + 0x4c0));
    iVar1 = *(int *)(lVar3 + 0x4d0);
    *(undefined4 *)((long)pdVar2 + 0xc) = 3;
    *pdVar2 = (double)iVar1;
    *(int *)(lVar3 + 0x4d0) = param_2;
  }
  return;
}


// ===== 0061c088  lua_setuserdatatag =====

/* lua_setuserdatatag(lua_State*, int, int) */

void lua_setuserdatatag(lua_State *param_1,int param_2,int param_3)

{
  long *plVar1;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      plVar1 = (long *)FUN_00618038();
    }
    else {
      plVar1 = (long *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar1 = (long *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (*(long **)(param_1 + 8) <= plVar1) {
      plVar1 = &DAT_00285948;
    }
  }
  *(char *)(*plVar1 + 3) = (char)param_3;
  return;
}


// ===== 0061c0f0  lua_setuserdatadtor =====

/* lua_setuserdatadtor(lua_State*, int, void (*)(lua_State*, void*)) */

void lua_setuserdatadtor(lua_State *param_1,int param_2,_func_void_lua_State_ptr_void_ptr *param_3)

{
  *(_func_void_lua_State_ptr_void_ptr **)(*(long *)(param_1 + 0x18) + (long)param_2 * 8 + 0x3430) =
       param_3;
  return;
}


// ===== 0061c100  lua_getuserdatadtor =====

/* lua_getuserdatadtor(lua_State*, int) */

undefined8 lua_getuserdatadtor(lua_State *param_1,int param_2)

{
  return *(undefined8 *)(*(long *)(param_1 + 0x18) + (long)param_2 * 8 + 0x3430);
}


// ===== 0061c110  lua_setuserdatametatable =====

/* lua_setuserdatametatable(lua_State*, int) */

void lua_setuserdatametatable(lua_State *param_1,int param_2)

{
  *(undefined8 *)(*(long *)(param_1 + 0x18) + (long)param_2 * 8 + 0x3830) =
       *(undefined8 *)(*(long *)(param_1 + 8) + -0x10);
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -0x10;
  return;
}


// ===== 0061c134  lua_getuserdatametatable =====

/* lua_getuserdatametatable(lua_State*, int) */

void lua_getuserdatametatable(lua_State *param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined4 uVar4;
  
  if (((byte)param_1[1] >> 2 & 1) == 0) {
    lVar1 = *(long *)(param_1 + 0x18);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x18);
    param_1[1] = (lua_State)((byte)param_1[1] & 0xfb);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(lVar1 + 0x30);
    *(lua_State **)(lVar1 + 0x30) = param_1;
  }
  lVar1 = *(long *)(lVar1 + (long)param_2 * 8 + 0x3830);
  plVar2 = *(long **)(param_1 + 8);
  if (lVar1 == 0) {
    uVar4 = 0;
    plVar3 = plVar2;
  }
  else {
    *plVar2 = lVar1;
    uVar4 = 7;
    plVar3 = *(long **)(param_1 + 8);
  }
  *(undefined4 *)((long)plVar2 + 0xc) = uVar4;
  *(long **)(param_1 + 8) = plVar3 + 2;
  return;
}


// ===== 0061c194  lua_registeruserdatadirectaccess =====

/* lua_registeruserdatadirectaccess(lua_State*, int, void (*)(lua_State*, void*, int, unsigned
   short*, int), void (*)(lua_State*, void*, int, unsigned short*, int), int (*)(lua_State*, void*,
   int, unsigned short*, int)) */

bool lua_registeruserdatadirectaccess
               (lua_State *param_1,int param_2,
               _func_void_lua_State_ptr_void_ptr_int_ushort_ptr_int *param_3,
               _func_void_lua_State_ptr_void_ptr_int_ushort_ptr_int *param_4,
               _func_int_lua_State_ptr_void_ptr_int_ushort_ptr_int *param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (((byte)param_1[1] >> 2 & 1) == 0) {
    lVar4 = *(long *)(param_1 + 0x18);
  }
  else {
    lVar4 = *(long *)(param_1 + 0x18);
    param_1[1] = (lua_State)((byte)param_1[1] & 0xfb);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(lVar4 + 0x30);
    *(lua_State **)(lVar4 + 0x30) = param_1;
  }
  lVar3 = *(long *)(lVar4 + (long)param_2 * 8 + 0x3830);
  if (lVar3 != 0) {
    if (((*(byte *)(lVar3 + 3) & 1) == 0) &&
       (puVar1 = (undefined8 *)FUN_00631210(lVar3,0,*(undefined8 *)(lVar4 + 0x408)),
       puVar1 != (undefined8 *)0x0)) {
      uVar5 = *puVar1;
      lVar2 = lVar4 + (long)param_2 * 0x48;
      *(undefined8 *)(lVar2 + 0x7a8) = puVar1[1];
      *(undefined8 *)(lVar2 + 0x7a0) = uVar5;
      *(_func_void_lua_State_ptr_void_ptr_int_ushort_ptr_int **)
       (lVar4 + (long)param_2 * 0x48 + 2000) = param_3;
    }
    if (((*(byte *)(lVar3 + 3) >> 1 & 1) == 0) &&
       (puVar1 = (undefined8 *)
                 FUN_00631210(lVar3,1,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x410)),
       puVar1 != (undefined8 *)0x0)) {
      uVar5 = *puVar1;
      lVar2 = lVar4 + (long)param_2 * 0x48;
      *(undefined8 *)(lVar2 + 0x7b8) = puVar1[1];
      *(undefined8 *)(lVar2 + 0x7b0) = uVar5;
      *(_func_void_lua_State_ptr_void_ptr_int_ushort_ptr_int **)(lVar2 + 0x7d8) = param_4;
    }
    if (((*(byte *)(lVar3 + 3) >> 3 & 1) == 0) &&
       (puVar1 = (undefined8 *)
                 FUN_00631210(lVar3,3,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x420)),
       puVar1 != (undefined8 *)0x0)) {
      uVar5 = *puVar1;
      lVar4 = lVar4 + (long)param_2 * 0x48;
      *(undefined8 *)(lVar4 + 0x7c8) = puVar1[1];
      *(undefined8 *)(lVar4 + 0x7c0) = uVar5;
      *(_func_int_lua_State_ptr_void_ptr_int_ushort_ptr_int **)(lVar4 + 0x7e0) = param_5;
    }
  }
  return lVar3 != 0;
}


// ===== 0061c2c4  lua_setlightuserdataname =====

/* lua_setlightuserdataname(lua_State*, int, char const*) */

void lua_setlightuserdataname(lua_State *param_1,int param_2,char *param_3)

{
  size_t sVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(long *)(*(long *)(param_1 + 0x18) + (long)param_2 * 8 + 0x3c30) != 0) {
    return;
  }
  sVar1 = strlen(param_3);
  uVar2 = FUN_0062b178(param_1,param_3,sVar1);
  *(undefined8 *)(*(long *)(param_1 + 0x18) + (long)param_2 * 8 + 0x3c30) = uVar2;
  lVar3 = *(long *)(*(long *)(param_1 + 0x18) + (long)param_2 * 8 + 0x3c30);
  *(byte *)(lVar3 + 1) = *(byte *)(lVar3 + 1) | 8;
  return;
}


// ===== 0061c340  lua_getlightuserdataname =====

/* lua_getlightuserdataname(lua_State*, int) */

long lua_getlightuserdataname(lua_State *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x18) + (long)param_2 * 8 + 0x3c30);
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + 0x18;
  }
  return lVar1;
}


// ===== 0061c35c  lua_clonefunction =====

/* lua_clonefunction(lua_State*, int) */

void lua_clonefunction(lua_State *param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  if (*(ulong *)(*(long *)(param_1 + 0x18) + 0x40) <= *(ulong *)(*(long *)(param_1 + 0x18) + 0x48))
  {
    FUN_006239a4(param_1);
  }
  if (((byte)param_1[1] >> 2 & 1) != 0) {
    param_1[1] = (lua_State)((byte)param_1[1] & 0xfb);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
    *(lua_State **)(*(long *)(param_1 + 0x18) + 0x30) = param_1;
  }
  if (param_2 < 1) {
    if (param_2 < -9999) {
      plVar2 = (long *)FUN_00618038(param_1,param_2);
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar2 = (long *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (*(long **)(param_1 + 8) <= plVar2) {
      plVar2 = &DAT_00285948;
    }
  }
  lVar6 = *plVar2;
  lVar1 = FUN_006231f0(param_1,*(undefined1 *)(lVar6 + 4),*(undefined8 *)(param_1 + 0x58),
                       *(undefined8 *)(lVar6 + 0x20));
  if (*(char *)(lVar6 + 4) != '\0') {
    uVar3 = 0;
    puVar4 = (undefined8 *)(lVar6 + 0x28);
    puVar5 = (undefined8 *)(lVar1 + 0x28);
    do {
      uVar7 = *puVar4;
      uVar3 = uVar3 + 1;
      puVar5[1] = puVar4[1];
      *puVar5 = uVar7;
      puVar4 = puVar4 + 2;
      puVar5 = puVar5 + 2;
    } while (uVar3 < *(byte *)(lVar6 + 4));
  }
  plVar2 = *(long **)(param_1 + 8);
  *plVar2 = lVar1;
  lVar1 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)plVar2 + 0xc) = 8;
  *(long *)(param_1 + 8) = lVar1 + 0x10;
  return;
}


// ===== 0061c460  lua_cleartable =====

/* lua_cleartable(lua_State*, int) */

void lua_cleartable(lua_State *param_1,int param_2)

{
  long *plVar1;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      plVar1 = (long *)FUN_00618038(param_1);
    }
    else {
      plVar1 = (long *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar1 = (long *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (*(long **)(param_1 + 8) <= plVar1) {
      plVar1 = &DAT_00285948;
    }
  }
  if (*(char *)(*plVar1 + 4) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_00621894(param_1);
  }
  FUN_0062f984();
  return;
}


// ===== 0061c4d8  lua_clonetable =====

/* lua_clonetable(lua_State*, int) */

void lua_clonetable(lua_State *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      puVar2 = (undefined8 *)FUN_00618038(param_1);
    }
    else {
      puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10 + -0x10);
    if (*(undefined8 **)(param_1 + 8) <= puVar2) {
      puVar2 = &DAT_00285948;
    }
  }
  uVar1 = FUN_0062f850(param_1,*puVar2);
  puVar2 = *(undefined8 **)(param_1 + 8);
  *puVar2 = uVar1;
  lVar3 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)puVar2 + 0xc) = 7;
  *(long *)(param_1 + 8) = lVar3 + 0x10;
  return;
}


// ===== 0061c564  lua_callbacks =====

/* lua_callbacks(lua_State*) */

long lua_callbacks(lua_State *param_1)

{
  return *(long *)(param_1 + 0x18) + 0x508;
}


// ===== 0061c570  lua_setmemcat =====

/* lua_setmemcat(lua_State*, int) */

void lua_setmemcat(lua_State *param_1,int param_2)

{
  param_1[4] = SUB41(param_2,0);
  return;
}


// ===== 0061c578  lua_totalbytes =====

/* lua_totalbytes(lua_State*, int) */

undefined8 lua_totalbytes(lua_State *param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x48);
  if (-1 < param_2) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)(uint)param_2 * 8 + 0x2c30);
  }
  return *puVar1;
}


// ===== 0061c59c  lua_getallocf =====

/* lua_getallocf(lua_State*, void**) */

undefined8 lua_getallocf(lua_State *param_1,void **param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
  if (param_2 != (void **)0x0) {
    *param_2 = *(void **)(*(long *)(param_1 + 0x18) + 0x18);
  }
  return uVar1;
}


// ===== 0061c5b4  lua_registeruserdatadirectfieldget =====

/* lua_registeruserdatadirectfieldget(lua_State*, int, char const*, void (*)(void*, void*)) */

void lua_registeruserdatadirectfieldget
               (lua_State *param_1,int param_2,char *param_3,_func_void_void_ptr_void_ptr *param_4)

{
  long lVar1;
  undefined8 uVar2;
  size_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (*PTR_LuauDirectFieldGet_0067db78 != '\0') {
    lVar1 = *(long *)(param_1 + 0x18) + (long)param_2 * 8;
    if (*(long *)(lVar1 + 0x4030) == 0) {
      uVar2 = FUN_0062f204(param_1,0,1);
      *(undefined8 *)(lVar1 + 0x4030) = uVar2;
    }
    sVar3 = strlen(param_3);
    lVar4 = FUN_0062b178(param_1,param_3,sVar3);
    uVar2 = *(undefined8 *)(lVar1 + 0x4030);
    *(byte *)(lVar4 + 1) = *(byte *)(lVar4 + 1) | 8;
    puVar5 = (undefined8 *)FUN_0062f634(param_1,uVar2,lVar4);
    *puVar5 = param_4;
    puVar5[1] = DAT_0024e7c8;
  }
  return;
}


// ===== 0061c664  lua_userdatadirectfield_setnumber =====

/* lua_userdatadirectfield_setnumber(void*, double) */

void lua_userdatadirectfield_setnumber(void *param_1,double param_2)

{
  *(double *)param_1 = param_2;
  *(undefined4 *)((long)param_1 + 0xc) = 3;
  return;
}


// ===== 0061c674  lua_userdatadirectfield_setvector =====

/* lua_userdatadirectfield_setvector(void*, float, float, float) */

void lua_userdatadirectfield_setvector(void *param_1,float param_2,float param_3,float param_4)

{
  *(float *)param_1 = param_2;
  *(float *)((long)param_1 + 4) = param_3;
  *(float *)((long)param_1 + 8) = param_4;
  *(undefined4 *)((long)param_1 + 0xc) = 5;
  return;
}


// ===== 0061c688  lua_userdatadirectfield_setboolean =====

/* lua_userdatadirectfield_setboolean(void*, int) */

void lua_userdatadirectfield_setboolean(void *param_1,int param_2)

{
  *(int *)param_1 = param_2;
  *(undefined4 *)((long)param_1 + 0xc) = 1;
  return;
}


// ===== 0061c698  lua_userdatadirectfield_setinteger64 =====

/* lua_userdatadirectfield_setinteger64(void*, long) */

void lua_userdatadirectfield_setinteger64(void *param_1,long param_2)

{
  *(long *)param_1 = param_2;
  *(undefined4 *)((long)param_1 + 0xc) = 4;
  return;
}


// ===== 0061c6a8  lua_userdatadirectfield_setnil =====

/* lua_userdatadirectfield_setnil(void*) */

void lua_userdatadirectfield_setnil(void *param_1)

{
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  return;
}


// ===== 0061c6b0  luaL_argerrorL =====

/* luaL_argerrorL(lua_State*, int, char const*) */

void luaL_argerrorL(lua_State *param_1,int param_2,char *param_3)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = (ulong)(uint)param_2;
  lVar1 = FUN_0061c708(param_1,uVar2);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    luaL_errorL(param_1,"invalid argument #%d (%s)",uVar2,param_3);
  }
                    /* WARNING: Subroutine does not return */
  luaL_errorL(param_1,"invalid argument #%d to \'%s\' (%s)",uVar2,lVar1,param_3);
}


// ===== 0061c708  FUN_0061c708 =====

char * FUN_0061c708(long param_1)

{
  int iVar1;
  long lVar2;
  char *__s1;
  
  if (((*(ulong *)(param_1 + 0x40) < *(ulong *)(param_1 + 0x20)) &&
      (lVar2 = **(long **)(*(ulong *)(param_1 + 0x20) + 8), lVar2 != 0)) &&
     (*(char *)(lVar2 + 3) != '\0')) {
    __s1 = *(char **)(lVar2 + 0x30);
    if ((__s1 != (char *)0x0) && (iVar1 = strcmp(__s1,"__namecall"), iVar1 == 0)) {
      __s1 = (char *)0x0;
      if (*(long *)(param_1 + 0x70) != 0) {
        __s1 = (char *)(*(long *)(param_1 + 0x70) + 0x18);
      }
    }
  }
  else {
    __s1 = (char *)0x0;
  }
  return __s1;
}


// ===== 0061c780  luaL_errorL =====

/* luaL_errorL(lua_State*, char const*, ...) */

void luaL_errorL(lua_State *param_1,char *param_2,...)

{
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  local_a0 = in_x2;
  uStack_98 = in_x3;
  local_90 = in_x4;
  uStack_88 = in_x5;
  local_80 = in_x6;
  uStack_78 = in_x7;
  luaL_where(param_1,1);
  uStack_58 = 0xffffff80ffffffd0;
  local_70 = (undefined1 *)register0x00000008;
  ppuStack_68 = &local_70;
  puStack_60 = &local_a0;
  lua_pushvfstring(param_1,param_2,&local_70);
  lua_concat(param_1,2);
                    /* WARNING: Subroutine does not return */
  lua_error(param_1);
}


// ===== 0061c810  luaL_where =====

/* luaL_where(lua_State*, int) */

void luaL_where(lua_State *param_1,int param_2)

{
  long lVar1;
  int iVar2;
  lua_Debug alStack_170 [16];
  undefined8 local_160;
  int local_14c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_getinfo(param_1,param_2,"sl",alStack_170);
  if (((iVar2 == 0) || (local_14c < 1)) &&
     ((iVar2 = lua_getinfo(param_1,0,"sl",alStack_170), iVar2 == 0 || (local_14c < 1)))) {
    lua_rawcheckstack(param_1,1);
    lua_pushlstring(param_1,":: ",3);
  }
  else {
    lua_pushfstringL(param_1,"%s:%d: ",local_160);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0061c8dc  luaL_typeerrorL =====

/* luaL_typeerrorL(lua_State*, int, char const*) */

void luaL_typeerrorL(lua_State *param_1,int param_2,char *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = (ulong)(uint)param_2;
  lVar1 = FUN_0061c708();
  lVar2 = FUN_00617fd4(param_1,uVar3);
  if (lVar2 != 0) {
    lVar2 = FUN_00631410(param_1,lVar2);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      luaL_errorL(param_1,"invalid argument #%d (%s expected, got %s)",uVar3,param_3,lVar2 + 0x18);
    }
                    /* WARNING: Subroutine does not return */
    luaL_errorL(param_1,"invalid argument #%d to \'%s\' (%s expected, got %s)",uVar3,lVar1,param_3,
                lVar2 + 0x18);
  }
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    luaL_errorL(param_1,"missing argument #%d (%s expected)",uVar3,param_3);
  }
                    /* WARNING: Subroutine does not return */
  luaL_errorL(param_1,"missing argument #%d to \'%s\' (%s expected)",uVar3,lVar1,param_3);
}


// ===== 0061c994  luaL_checkoption =====

/* luaL_checkoption(lua_State*, int, char const*, char const* const*) */

ulong luaL_checkoption(lua_State *param_1,int param_2,char *param_3,char **param_4)

{
  int iVar1;
  char *pcVar2;
  ulong uVar3;
  
  if ((param_3 == (char *)0x0) || (iVar1 = lua_type(param_1,param_2), 0 < iVar1)) {
    param_3 = (char *)luaL_checklstring(param_1,param_2,(ulong *)0x0);
  }
  pcVar2 = *param_4;
  if (pcVar2 != (char *)0x0) {
    uVar3 = 0;
    do {
      iVar1 = strcmp(pcVar2,param_3);
      if (iVar1 == 0) {
        return uVar3 & 0xffffffff;
      }
      pcVar2 = param_4[uVar3 + 1];
      uVar3 = uVar3 + 1;
    } while (pcVar2 != (char *)0x0);
  }
  pcVar2 = (char *)lua_pushfstringL(param_1,"invalid option \'%s\'",param_3);
                    /* WARNING: Subroutine does not return */
  luaL_argerrorL(param_1,param_2,pcVar2);
}


// ===== 0061ca48  luaL_checklstring =====

/* luaL_checklstring(lua_State*, int, unsigned long*) */

void luaL_checklstring(lua_State *param_1,int param_2,ulong *param_3)

{
  long lVar1;
  
  lVar1 = lua_tolstring(param_1,param_2,param_3);
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061ca80(param_1,param_2,6);
}


// ===== 0061ca80  FUN_0061ca80 =====

void FUN_0061ca80(lua_State *param_1,int param_2,int param_3)

{
  char *pcVar1;
  
  if (param_3 == -1) {
    pcVar1 = "no value";
  }
  else {
    pcVar1 = (&PTR_DAT_0067ad68)[param_3];
  }
                    /* WARNING: Subroutine does not return */
  luaL_typeerrorL(param_1,param_2,pcVar1);
}


// ===== 0061caac  luaL_optlstring =====

/* luaL_optlstring(lua_State*, int, char const*, unsigned long*) */

char * luaL_optlstring(lua_State *param_1,int param_2,char *param_3,ulong *param_4)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  
  iVar1 = lua_type(param_1,param_2);
  if (0 < iVar1) {
    pcVar2 = (char *)luaL_checklstring(param_1,param_2,param_4);
    return pcVar2;
  }
  if (param_4 != (ulong *)0x0) {
    if (param_3 == (char *)0x0) {
      sVar3 = 0;
    }
    else {
      sVar3 = strlen(param_3);
    }
    *param_4 = sVar3;
  }
  return param_3;
}


// ===== 0061cb24  luaL_newmetatable =====

/* luaL_newmetatable(lua_State*, char const*) */

undefined8 luaL_newmetatable(lua_State *param_1,char *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  lua_getfield(param_1,-10000,param_2);
  puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + -0x10);
  if ((puVar2 == &DAT_00285948) || (*(int *)(*(long *)(param_1 + 8) + -4) != 0)) {
    uVar1 = 0;
  }
  else {
    *(undefined8 **)(param_1 + 8) = puVar2;
    lua_createtable(param_1,0,0);
    if (((byte)param_1[1] >> 2 & 1) != 0) {
      param_1[1] = (lua_State)((byte)param_1[1] & 0xfb);
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
      *(lua_State **)(*(long *)(param_1 + 0x18) + 0x30) = param_1;
    }
    puVar2 = *(undefined8 **)(param_1 + 8);
    puVar2[1] = puVar2[-1];
    *puVar2 = puVar2[-2];
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
    lua_setfield(param_1,-10000,param_2);
    uVar1 = 1;
  }
  return uVar1;
}


// ===== 0061cbd8  luaL_checkudata =====

/* luaL_checkudata(lua_State*, int, char const*) */

long luaL_checkudata(lua_State *param_1,int param_2,char *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  lVar2 = lua_touserdata(param_1,param_2);
  if ((lVar2 != 0) && (iVar1 = lua_getmetatable(param_1,param_2), iVar1 != 0)) {
    lua_getfield(param_1,-10000,param_3);
    puVar3 = (undefined8 *)(*(long *)(param_1 + 8) + -0x10);
    if ((puVar3 != &DAT_00285948) &&
       ((puVar4 = (undefined8 *)(*(long *)(param_1 + 8) + -0x20), puVar4 != &DAT_00285948 &&
        (iVar1 = FUN_0062987c(puVar3,puVar4), iVar1 != 0)))) {
      *(undefined8 **)(param_1 + 8) = puVar4;
      return lVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  luaL_typeerrorL(param_1,param_2,param_3);
}


// ===== 0061cc80  luaL_checkbuffer =====

/* luaL_checkbuffer(lua_State*, int, unsigned long*) */

void luaL_checkbuffer(lua_State *param_1,int param_2,ulong *param_3)

{
  long lVar1;
  
  lVar1 = lua_tobuffer(param_1,param_2,param_3);
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061ca80(param_1,param_2,0xb);
}


// ===== 0061ccb8  luaL_checkstack =====

/* luaL_checkstack(lua_State*, int, char const*) */

void luaL_checkstack(lua_State *param_1,int param_2,char *param_3)

{
  int iVar1;
  
  iVar1 = lua_checkstack(param_1,param_2);
  if (iVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  luaL_errorL(param_1,"stack overflow (%s)",param_3);
}


// ===== 0061ccf4  luaL_checktype =====

/* luaL_checktype(lua_State*, int, int) */

void luaL_checktype(lua_State *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = lua_type(param_1,param_2);
  if (iVar1 == param_3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061ca80(param_1,param_2,param_3);
}


// ===== 0061cd3c  luaL_checkany =====

/* luaL_checkany(lua_State*, int) */

void luaL_checkany(lua_State *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = lua_type(param_1,param_2);
  if (iVar1 != -1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  luaL_errorL(param_1,"missing argument #%d",(ulong)(uint)param_2);
}


// ===== 0061cd7c  luaL_checknumber =====

/* luaL_checknumber(lua_State*, int) */

void luaL_checknumber(lua_State *param_1,int param_2)

{
  long lVar1;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lua_tonumberx(param_1,param_2,&local_3c);
  if (local_3c == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061ca80(param_1,param_2,3);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0061cdec  luaL_optnumber =====

/* luaL_optnumber(lua_State*, int, double) */

undefined1  [16] luaL_optnumber(lua_State *param_1,int param_2,double param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  
  iVar1 = lua_type(param_1,param_2);
  if (0 < iVar1) {
    auVar2 = luaL_checknumber(param_1,param_2);
    return auVar2;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_3;
  return auVar2;
}


// ===== 0061ce40  luaL_checkboolean =====

/* luaL_checkboolean(lua_State*, int) */

void luaL_checkboolean(lua_State *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = lua_type(param_1,param_2);
  if (iVar1 == 1) {
    lua_toboolean(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061ca80(param_1,param_2,1);
}


// ===== 0061ce84  luaL_optboolean =====

/* luaL_optboolean(lua_State*, int, int) */

ulong luaL_optboolean(lua_State *param_1,int param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = lua_type(param_1,param_2);
  if (0 < iVar1) {
    uVar2 = luaL_checkboolean(param_1,param_2);
    return uVar2;
  }
  return (ulong)(uint)param_3;
}


// ===== 0061ced8  luaL_checkinteger =====

/* luaL_checkinteger(lua_State*, int) */

void luaL_checkinteger(lua_State *param_1,int param_2)

{
  long lVar1;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lua_tointegerx(param_1,param_2,&local_3c);
  if (local_3c == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061ca80(param_1,param_2,3);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0061cf48  luaL_checkinteger64 =====

/* luaL_checkinteger64(lua_State*, int) */

void luaL_checkinteger64(lua_State *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = lua_type(param_1,param_2);
  if (iVar1 == 4) {
    lua_tointeger64(param_1,param_2,(int *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061ca80(param_1,param_2,4);
}


// ===== 0061cf90  luaL_optinteger =====

/* luaL_optinteger(lua_State*, int, int) */

ulong luaL_optinteger(lua_State *param_1,int param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = lua_type(param_1,param_2);
  if (0 < iVar1) {
    uVar2 = luaL_checkinteger(param_1,param_2);
    return uVar2;
  }
  return (ulong)(uint)param_3;
}


// ===== 0061cfe4  luaL_optinteger64 =====

/* luaL_optinteger64(lua_State*, int, long) */

long luaL_optinteger64(lua_State *param_1,int param_2,long param_3)

{
  int iVar1;
  long lVar2;
  
  iVar1 = lua_type(param_1,param_2);
  if (0 < iVar1) {
    lVar2 = luaL_checkinteger64(param_1,param_2);
    return lVar2;
  }
  return param_3;
}


// ===== 0061d038  luaL_checkunsigned =====

/* luaL_checkunsigned(lua_State*, int) */

void luaL_checkunsigned(lua_State *param_1,int param_2)

{
  long lVar1;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lua_tounsignedx(param_1,param_2,&local_3c);
  if (local_3c == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061ca80(param_1,param_2,3);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0061d0a8  luaL_optunsigned =====

/* luaL_optunsigned(lua_State*, int, unsigned int) */

ulong luaL_optunsigned(lua_State *param_1,int param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = lua_type(param_1,param_2);
  if (0 < iVar1) {
    uVar2 = luaL_checkunsigned(param_1,param_2);
    return uVar2;
  }
  return (ulong)param_3;
}


// ===== 0061d0fc  luaL_checkvector =====

/* luaL_checkvector(lua_State*, int) */

void luaL_checkvector(lua_State *param_1,int param_2)

{
  long lVar1;
  
  lVar1 = lua_tovector(param_1,param_2);
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061ca80(param_1,param_2,5);
}


// ===== 0061d134  luaL_optvector =====

/* luaL_optvector(lua_State*, int, float const*) */

float * luaL_optvector(lua_State *param_1,int param_2,float *param_3)

{
  int iVar1;
  float *pfVar2;
  
  iVar1 = lua_type(param_1,param_2);
  if (0 < iVar1) {
    pfVar2 = (float *)luaL_checkvector(param_1,param_2);
    return pfVar2;
  }
  return param_3;
}


// ===== 0061d188  luaL_getmetafield =====

/* luaL_getmetafield(lua_State*, int, char const*) */

undefined8 luaL_getmetafield(lua_State *param_1,int param_2,char *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  uVar1 = lua_getmetatable(param_1,param_2);
  if ((int)uVar1 != 0) {
    lua_pushstring(param_1,param_3);
    lua_rawget(param_1,-2);
    lVar3 = *(long *)(param_1 + 8);
    puVar2 = (undefined8 *)(lVar3 + -0x10);
    if ((puVar2 == &DAT_00285948) || (*(int *)(lVar3 + -4) != 0)) {
      do {
        puVar2[-1] = puVar2[1];
        puVar2[-2] = *puVar2;
        puVar2 = puVar2 + 2;
      } while (puVar2 < *(undefined8 **)(param_1 + 8));
      puVar2 = *(undefined8 **)(param_1 + 8) + -2;
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
      puVar2 = (undefined8 *)(lVar3 + -0x20);
    }
    *(undefined8 **)(param_1 + 8) = puVar2;
  }
  return uVar1;
}


// ===== 0061d218  luaL_callmeta =====

/* luaL_callmeta(lua_State*, int, char const*) */

bool luaL_callmeta(lua_State *param_1,int param_2,char *param_3)

{
  int iVar1;
  
  if (0xffffd8ef < param_2 - 1U) {
    param_2 = param_2 + (int)((ulong)(*(long *)(param_1 + 8) - *(long *)(param_1 + 0x10)) >> 4) + 1;
  }
  iVar1 = luaL_getmetafield(param_1,param_2,param_3);
  if (iVar1 != 0) {
    lua_pushvalue(param_1,param_2);
    FUN_00622574(param_1,*(long *)(param_1 + 8) + -0x20,1,0);
  }
  return iVar1 != 0;
}


// ===== 0061d2a0  luaL_register =====

/* luaL_register(lua_State*, char const*, luaL_Reg const*) */

void luaL_register(lua_State *param_1,char *param_2,luaL_Reg *param_3)

{
  char *pcVar1;
  luaL_Reg *plVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  
  if (param_2 != (char *)0x0) {
    if (*(long *)param_3 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = 0;
      plVar2 = param_3 + 0x10;
      do {
        lVar4 = *(long *)plVar2;
        iVar5 = iVar5 + 1;
        plVar2 = plVar2 + 0x10;
      } while (lVar4 != 0);
    }
    luaL_findtable(param_1,-10000,"_LOADED",1);
    lua_getfield(param_1,-1,param_2);
    lVar4 = *(long *)(param_1 + 8);
    if (((undefined8 *)(lVar4 + -0x10) == &DAT_00285948) || (*(int *)(lVar4 + -4) != 7)) {
      *(undefined8 **)(param_1 + 8) = (undefined8 *)(lVar4 + -0x10);
      lVar4 = luaL_findtable(param_1,-0x2712,param_2,iVar5);
      if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        luaL_errorL(param_1,"name conflict for module \'%s\'",param_2);
      }
      if (((byte)param_1[1] >> 2 & 1) != 0) {
        param_1[1] = (lua_State)((byte)param_1[1] & 0xfb);
        *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
        *(lua_State **)(*(long *)(param_1 + 0x18) + 0x30) = param_1;
      }
      puVar3 = *(undefined8 **)(param_1 + 8);
      puVar3[1] = puVar3[-1];
      *puVar3 = puVar3[-2];
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
      lua_setfield(param_1,-3,param_2);
      lVar4 = *(long *)(param_1 + 8);
    }
    puVar3 = (undefined8 *)(lVar4 - 0x10);
    do {
      puVar3[-1] = puVar3[1];
      puVar3[-2] = *puVar3;
      puVar3 = puVar3 + 2;
    } while (puVar3 < *(undefined8 **)(param_1 + 8));
    *(undefined8 **)(param_1 + 8) = *(undefined8 **)(param_1 + 8) + -2;
  }
  pcVar1 = *(char **)param_3;
  if (pcVar1 != (char *)0x0) {
    plVar2 = param_3 + 0x10;
    do {
      lua_pushcclosurek(param_1,*(_func_int_lua_State_ptr **)(plVar2 + -8),pcVar1,0,
                        (_func_int_lua_State_ptr_int *)0x0);
      lua_setfield(param_1,-2,*(char **)(plVar2 + -0x10));
      pcVar1 = *(char **)plVar2;
      plVar2 = plVar2 + 0x10;
    } while (pcVar1 != (char *)0x0);
  }
  return;
}


// ===== 0061d418  luaL_findtable =====

/* luaL_findtable(lua_State*, int, char const*, int) */

char * luaL_findtable(lua_State *param_1,int param_2,char *param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lua_pushvalue(param_1,param_2);
  while( true ) {
    pcVar2 = strchr(param_3,0x2e);
    if (pcVar2 == (char *)0x0) {
      sVar3 = strlen(param_3);
      pcVar2 = param_3 + sVar3;
    }
    lua_pushlstring(param_1,param_3,(long)pcVar2 - (long)param_3);
    lua_rawget(param_1,-2);
    lVar4 = *(long *)(param_1 + 8);
    if ((undefined8 *)(lVar4 + -0x10) == &DAT_00285948) break;
    if (*(int *)(lVar4 + -4) == 0) {
      *(undefined8 **)(param_1 + 8) = (undefined8 *)(lVar4 + -0x10);
      iVar1 = param_4;
      if (*pcVar2 == '.') {
        iVar1 = 1;
      }
      lua_createtable(param_1,0,iVar1);
      lua_pushlstring(param_1,param_3,(long)pcVar2 - (long)param_3);
      if (((byte)param_1[1] >> 2 & 1) != 0) {
        param_1[1] = (lua_State)((byte)param_1[1] & 0xfb);
        *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
        *(lua_State **)(*(long *)(param_1 + 0x18) + 0x30) = param_1;
      }
      puVar5 = *(undefined8 **)(param_1 + 8);
      puVar5[1] = puVar5[-3];
      *puVar5 = puVar5[-4];
      lVar4 = *(long *)(param_1 + 8);
      *(long *)(param_1 + 8) = lVar4 + 0x10;
      FUN_00642f48(param_1,lVar4 + -0x30,lVar4 + -0x10);
      lVar4 = *(long *)(param_1 + 8) + -0x20;
      *(long *)(param_1 + 8) = lVar4;
    }
    else if (*(int *)(lVar4 + -4) != 7) break;
    puVar5 = (undefined8 *)(lVar4 - 0x10);
    do {
      puVar5[-1] = puVar5[1];
      puVar5[-2] = *puVar5;
      puVar5 = puVar5 + 2;
    } while (puVar5 < *(undefined8 **)(param_1 + 8));
    *(undefined8 **)(param_1 + 8) = *(undefined8 **)(param_1 + 8) + -2;
    param_3 = pcVar2 + 1;
    if (*pcVar2 != '.') {
      return (char *)0x0;
    }
  }
  *(long *)(param_1 + 8) = lVar4 + -0x20;
  return param_3;
}


// ===== 0061d588  luaL_typename =====

/* luaL_typename(lua_State*, int) */

char * luaL_typename(lua_State *param_1,int param_2)

{
  long lVar1;
  char *pcVar2;
  
  lVar1 = FUN_00617fd4(param_1,param_2);
  if (lVar1 == 0) {
    pcVar2 = "no value";
  }
  else {
    lVar1 = FUN_00631410(param_1,lVar1);
    pcVar2 = (char *)(lVar1 + 0x18);
  }
  return pcVar2;
}


// ===== 0061d5c8  luaL_callyieldable =====

/* luaL_callyieldable(lua_State*, int, int) */

undefined8 luaL_callyieldable(lua_State *param_1,int param_2,int param_3)

{
  lua_State lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = **(long **)(*(long *)(param_1 + 0x20) + 8);
  lua_call(param_1,param_2,param_3);
  lVar1 = param_1[3];
  if (*PTR_LuauStacklessPcall_0067db80 == '\0') {
    if (lVar1 == (lua_State)0x1) {
      return 0xffffffff;
    }
    if (lVar1 == (lua_State)0x6) {
      return 0xffffffff;
    }
  }
  else if (((lVar1 == (lua_State)0x1) || (lVar1 == (lua_State)0x6)) || (lVar1 == (lua_State)0x7f)) {
    return 0xffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x0061d648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(lVar3 + 0x28))(param_1,0);
  return uVar2;
}


// ===== 0061d64c  luaL_traceback =====

/* luaL_traceback(lua_State*, lua_State*, char const*, int) */

void luaL_traceback(lua_State *param_1,lua_State *param_2,char *param_3,int param_4)

{
  long lVar1;
  char *pcVar2;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  uint uVar6;
  char **ppcVar7;
  lua_Debug local_3c9;
  char *local_3c8 [2];
  long local_3b8;
  char *local_3b0;
  uint local_3a4;
  long *local_290;
  long *plStack_288;
  lua_State *local_280;
  undefined8 uStack_278;
  long local_270 [64];
  long local_70 [2];
  
  lVar1 = tpidr_el0;
  local_290 = local_270;
  local_70[0] = *(long *)(lVar1 + 0x28);
  plStack_288 = local_70;
  uStack_278 = 0;
  local_280 = param_1;
  if (param_3 != (char *)0x0) {
    sVar5 = strlen(param_3);
    luaL_addlstring((luaL_Strbuf *)&local_290,param_3,sVar5);
    luaL_addlstring((luaL_Strbuf *)&local_290,"\n",1);
  }
  while (iVar4 = lua_getinfo(param_2,param_4,"sln",(lua_Debug *)local_3c8), iVar4 != 0) {
    iVar4 = strcmp(local_3c8[1],"C");
    pcVar2 = local_3b0;
    if (iVar4 != 0) {
      if (local_3b8 != 0) {
        sVar5 = strlen(local_3b0);
        luaL_addlstring((luaL_Strbuf *)&local_290,pcVar2,sVar5);
      }
      ppcVar7 = local_3c8;
      uVar6 = local_3a4;
      if (0 < (int)local_3a4) {
        do {
          bVar3 = 9 < uVar6;
          ppcVar7 = (char **)((long)ppcVar7 + -1);
          *(byte *)ppcVar7 = (char)uVar6 + (char)(uVar6 / 10) * -10 | 0x30;
          uVar6 = uVar6 / 10;
        } while (bVar3);
        if (plStack_288 == local_290) {
          FUN_0061d968(&local_290,1,0xffffffff);
        }
        *(undefined1 *)local_290 = 0x3a;
        local_290 = (long *)((long)local_290 + 1);
        luaL_addlstring((luaL_Strbuf *)&local_290,(char *)ppcVar7,(long)local_3c8 - (long)ppcVar7);
      }
      if (local_3c8[0] != (char *)0x0) {
        luaL_addlstring((luaL_Strbuf *)&local_290," function ",10);
        pcVar2 = local_3c8[0];
        sVar5 = strlen(local_3c8[0]);
        luaL_addlstring((luaL_Strbuf *)&local_290,pcVar2,sVar5);
      }
      if (plStack_288 == local_290) {
        FUN_0061d968(&local_290,1,0xffffffff);
      }
      *(undefined1 *)local_290 = 10;
      local_290 = (long *)((long)local_290 + 1);
    }
    param_4 = param_4 + 1;
  }
  luaL_pushresult((luaL_Strbuf *)&local_290);
  if (*(long *)(lVar1 + 0x28) != local_70[0]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0061d860  luaL_addlstring =====

/* luaL_addlstring(luaL_Strbuf*, char const*, unsigned long) */

void luaL_addlstring(luaL_Strbuf *param_1,char *param_2,ulong param_3)

{
  long lVar1;
  void *__dest;
  
  __dest = *(void **)param_1;
  lVar1 = param_3 - (*(long *)(param_1 + 8) - (long)__dest);
  if ((ulong)(*(long *)(param_1 + 8) - (long)__dest) <= param_3 && lVar1 != 0) {
    FUN_0061d968(param_1,lVar1,0xffffffff);
    __dest = *(void **)param_1;
  }
  memcpy(__dest,param_2,param_3);
  *(ulong *)param_1 = *(long *)param_1 + param_3;
  return;
}


// ===== 0061d8c8  luaL_pushresult =====

/* luaL_pushresult(luaL_Strbuf*) */

void luaL_pushresult(luaL_Strbuf *param_1)

{
  lua_State *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  plVar1 = *(lua_State **)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    if (*(ulong *)(*(long *)(plVar1 + 0x18) + 0x40) <= *(ulong *)(*(long *)(plVar1 + 0x18) + 0x48))
    {
      FUN_006239a4(plVar1);
    }
    lVar4 = *(long *)(plVar1 + 8);
    if (*(long *)param_1 == *(long *)(param_1 + 8)) {
      uVar3 = FUN_0062b060(plVar1,lVar2);
    }
    else {
      uVar3 = FUN_0062b178(plVar1,lVar2 + 0x18,*(long *)param_1 - (lVar2 + 0x18));
    }
    *(undefined8 *)(lVar4 + -0x10) = uVar3;
    *(undefined4 *)(lVar4 + -4) = 6;
    return;
  }
  lua_pushlstring(plVar1,(char *)(param_1 + 0x20),*(long *)param_1 - (long)(param_1 + 0x20));
  return;
}


// ===== 0061d968  FUN_0061d968 =====

void FUN_0061d968(long *param_1,long param_2,int param_3)

{
  long *plVar1;
  void *__dest;
  ulong uVar2;
  long *__src;
  lua_State *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  plVar3 = (lua_State *)param_1[2];
  __src = param_1 + 4;
  if (param_1[3] != 0) {
    __src = (long *)(param_1[3] + 0x18);
  }
  uVar6 = param_1[1] - (long)__src;
  uVar2 = uVar6 + param_2;
  if (!CARRY8(uVar2,uVar6)) {
    uVar6 = uVar6 + (uVar6 >> 1);
    if (uVar6 <= uVar2) {
      uVar6 = uVar2;
    }
    lVar4 = FUN_0062afe8(plVar3,uVar6);
    __dest = (void *)(lVar4 + 0x18);
    memcpy(__dest,__src,*param_1 - (long)__src);
    if (__src == param_1 + 4) {
      lVar5 = *(long *)(plVar3 + 8);
      *(undefined4 *)(lVar5 + 0xc) = 0;
      *(long *)(plVar3 + 8) = lVar5 + 0x10;
      lua_insert(plVar3,param_3);
    }
    plVar1 = (long *)(*(long *)(plVar3 + 8) + (long)param_3 * 0x10);
    *plVar1 = lVar4;
    lVar5 = *param_1;
    *(undefined4 *)((long)plVar1 + 0xc) = 6;
    *param_1 = (long)__dest + (lVar5 - (long)__src);
    param_1[1] = (long)__dest + uVar6;
    param_1[3] = lVar4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  luaL_errorL(plVar3,"buffer too large");
}


// ===== 0061da5c  luaL_buffinit =====

/* luaL_buffinit(lua_State*, luaL_Strbuf*) */

void luaL_buffinit(lua_State *param_1,luaL_Strbuf *param_2)

{
  *(lua_State **)(param_2 + 0x10) = param_1;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(luaL_Strbuf **)param_2 = param_2 + 0x20;
  *(luaL_Strbuf **)(param_2 + 8) = param_2 + 0x220;
  return;
}


// ===== 0061da70  luaL_prepbuffsize =====

/* luaL_prepbuffsize(luaL_Strbuf*, unsigned long) */

long luaL_prepbuffsize(luaL_Strbuf *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = *(long *)(param_1 + 8) - *(long *)param_1;
  lVar1 = param_2 - uVar2;
  if (uVar2 <= param_2 && lVar1 != 0) {
    lVar1 = FUN_0061d968(param_1,lVar1,0xffffffff);
    return lVar1;
  }
  return *(long *)param_1;
}


// ===== 0061da90  luaL_buffinitsize =====

/* luaL_buffinitsize(lua_State*, luaL_Strbuf*, unsigned long) */

void luaL_buffinitsize(lua_State *param_1,luaL_Strbuf *param_2,ulong param_3)

{
  *(luaL_Strbuf **)param_2 = param_2 + 0x20;
  *(luaL_Strbuf **)(param_2 + 8) = param_2 + 0x220;
  *(lua_State **)(param_2 + 0x10) = param_1;
  *(undefined8 *)(param_2 + 0x18) = 0;
  if (0x200 < param_3) {
    FUN_0061d968(param_2,param_3 - 0x200,0xffffffff);
    return;
  }
  return;
}


// ===== 0061dac4  luaL_addvalue =====

/* luaL_addvalue(luaL_Strbuf*) */

void luaL_addvalue(luaL_Strbuf *param_1)

{
  long lVar1;
  void *__src;
  void *__dest;
  long lVar2;
  lua_State *plVar3;
  ulong local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = *(lua_State **)(param_1 + 0x10);
  __src = (void *)lua_tolstring(plVar3,-1,&local_40);
  if (__src != (void *)0x0) {
    __dest = *(void **)param_1;
    lVar2 = local_40 - (*(long *)(param_1 + 8) - (long)__dest);
    if ((ulong)(*(long *)(param_1 + 8) - (long)__dest) <= local_40 && lVar2 != 0) {
      FUN_0061d968(param_1,lVar2,0xfffffffe);
      __dest = *(void **)param_1;
    }
    memcpy(__dest,__src,local_40);
    lVar2 = *(long *)(plVar3 + 8);
    *(ulong *)param_1 = *(long *)param_1 + local_40;
    *(long *)(plVar3 + 8) = lVar2 + -0x10;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0061db78  luaL_addvalueany =====

/* luaL_addvalueany(luaL_Strbuf*, int) */

void luaL_addvalueany(luaL_Strbuf *param_1,int param_2)

{
  long lVar1;
  int iVar2;
  ulong *puVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  ulong uVar7;
  lua_State *plVar8;
  ulong local_68 [6];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar8 = *(lua_State **)(param_1 + 0x10);
  iVar2 = lua_type(plVar8,param_2);
  if (iVar2 < 3) {
    if (iVar2 != -1) {
      if (iVar2 == 0) {
        if (*(long *)(lVar1 + 0x28) != local_38) goto LAB_0061dd18;
        pcVar6 = "nil";
        uVar7 = 3;
        goto LAB_0061dd04;
      }
      if (iVar2 == 1) {
        iVar2 = lua_toboolean(plVar8,param_2);
        if (iVar2 == 0) {
          if (*(long *)(lVar1 + 0x28) != local_38) goto LAB_0061dd18;
          pcVar6 = "false";
          uVar7 = 5;
LAB_0061dd04:
          luaL_addlstring(param_1,pcVar6,uVar7);
          return;
        }
        if (*(long *)(lVar1 + 0x28) == local_38) {
          pcVar6 = "true";
          uVar7 = 4;
          goto LAB_0061dd04;
        }
        goto LAB_0061dd18;
      }
LAB_0061dc50:
      luaL_tolstring(plVar8,param_2,local_68);
      luaL_addvalue(param_1);
    }
  }
  else {
    if (iVar2 == 3) {
      lua_tonumberx(plVar8,param_2,(int *)0x0);
      lVar5 = FUN_006292c0(local_68);
LAB_0061dcb0:
      local_68[0] = lVar5 - (long)local_68;
      puVar3 = local_68;
    }
    else {
      if (iVar2 == 4) {
        uVar4 = lua_tointeger64(plVar8,param_2,(int *)0x0);
        lVar5 = FUN_006297e4(local_68,uVar4);
        goto LAB_0061dcb0;
      }
      if (iVar2 != 6) goto LAB_0061dc50;
      puVar3 = (ulong *)lua_tolstring(plVar8,param_2,local_68);
    }
    luaL_addlstring(param_1,(char *)puVar3,local_68[0]);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_0061dd18:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0061dd1c  luaL_tolstring =====

/* luaL_tolstring(lua_State*, int, unsigned long*) */

void luaL_tolstring(lua_State *param_1,int param_2,ulong *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  char acStack_d8 [144];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = luaL_callmeta(param_1,param_2,"__tostring");
  if (iVar2 != 0) {
    lVar3 = lua_tolstring(param_1,-1,param_3);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      luaL_errorL(param_1,"\'__tostring\' must return a string");
    }
    goto LAB_0061df10;
  }
  iVar2 = lua_type(param_1,param_2);
  if (iVar2 < 4) {
    if (iVar2 == 0) {
      pcVar6 = "nil";
      uVar7 = 3;
    }
    else {
      if (iVar2 != 1) {
        if (iVar2 != 3) {
LAB_0061de2c:
          lVar3 = lua_topointer(param_1,param_2);
          lVar8 = *(long *)(param_1 + 0x18);
          lVar9 = *(long *)(lVar8 + 0x4e8);
          lVar11 = *(long *)(lVar8 + 0x4f0);
          lVar10 = *(long *)(lVar8 + 0x4f8);
          lVar8 = *(long *)(lVar8 + 0x500);
          uVar4 = luaL_typename(param_1,param_2);
          lua_pushfstringL(param_1,"%s: 0x%016llx",uVar4,
                           lVar8 + lVar11 * lVar3 ^ lVar10 + lVar9 * lVar3);
          goto LAB_0061df00;
        }
        lua_tonumberx(param_1,param_2,(int *)0x0);
        lVar3 = FUN_006292c0(acStack_d8);
        goto LAB_0061de24;
      }
      iVar2 = lua_toboolean(param_1,param_2);
      pcVar6 = "false";
      if (iVar2 != 0) {
        pcVar6 = "true";
      }
      uVar7 = 4;
      if (iVar2 == 0) {
        uVar7 = 5;
      }
    }
LAB_0061defc:
    lua_pushlstring(param_1,pcVar6,uVar7);
  }
  else {
    if (iVar2 == 4) {
      uVar4 = lua_tointeger64(param_1,param_2,(int *)0x0);
      lVar3 = FUN_006297e4(acStack_d8,uVar4);
LAB_0061de24:
      uVar7 = lVar3 - (long)acStack_d8;
LAB_0061def4:
      pcVar6 = acStack_d8;
      goto LAB_0061defc;
    }
    if (iVar2 == 5) {
      lVar8 = lua_tovector(param_1,param_2);
      lVar3 = 0;
      pcVar6 = acStack_d8;
      do {
        pcVar5 = pcVar6;
        if (lVar3 != 0) {
          pcVar5 = pcVar6 + 2;
          pcVar6[0] = ',';
          pcVar6[1] = ' ';
        }
        pcVar6 = (char *)FUN_006292c0((double)*(float *)(lVar8 + lVar3),pcVar5);
        lVar3 = lVar3 + 4;
      } while (lVar3 != 0xc);
      uVar7 = (long)pcVar6 - (long)acStack_d8;
      goto LAB_0061def4;
    }
    if (iVar2 != 6) goto LAB_0061de2c;
    lua_pushvalue(param_1,param_2);
  }
LAB_0061df00:
  lua_tolstring(param_1,-1,param_3);
LAB_0061df10:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0061df3c  luaL_pushresultsize =====

/* luaL_pushresultsize(luaL_Strbuf*, unsigned long) */

void luaL_pushresultsize(luaL_Strbuf *param_1,ulong param_2)

{
  *(ulong *)param_1 = *(long *)param_1 + param_2;
  luaL_pushresult(param_1);
  return;
}


// ===== 0061df4c  luaB_next =====

/* luaB_next(lua_State*) */

undefined8 luaB_next(lua_State *param_1)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  luaL_checktype(param_1,1,7);
  lVar4 = *(long *)(param_1 + 0x10);
  for (uVar1 = *(ulong *)(param_1 + 8); uVar1 < lVar4 + 0x20U; uVar1 = uVar1 + 0x10) {
    *(undefined4 *)(uVar1 + 0xc) = 0;
  }
  *(ulong *)(param_1 + 8) = lVar4 + 0x20U;
  iVar2 = lua_next(param_1,1);
  if (iVar2 == 0) {
    lVar4 = *(long *)(param_1 + 8);
    uVar3 = 1;
    *(undefined4 *)(lVar4 + 0xc) = 0;
    *(long *)(param_1 + 8) = lVar4 + 0x10;
  }
  else {
    uVar3 = 2;
  }
  return uVar3;
}


// ===== 0061dfc8  luaB_inext =====

/* luaB_inext(lua_State*) */

int luaB_inext(lua_State *param_1)

{
  int iVar1;
  double *pdVar2;
  int iVar3;
  
  iVar3 = 2;
  iVar1 = luaL_checkinteger(param_1,2);
  luaL_checktype(param_1,1,7);
  pdVar2 = *(double **)(param_1 + 8);
  *(undefined4 *)((long)pdVar2 + 0xc) = 3;
  *pdVar2 = (double)(iVar1 + 1);
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  lua_rawgeti(param_1,1,iVar1 + 1);
  if (*(eh_frame_hdr **)(param_1 + 8) != &eh_frame_hdr_00285958) {
    iVar3 = (uint)((*(eh_frame_hdr **)(param_1 + 8))[-1] != (eh_frame_hdr)0x0) << 1;
  }
  return iVar3;
}


// ===== 0061e068  luaopen_base =====

/* luaopen_base(lua_State*) */

undefined8 luaopen_base(lua_State *param_1)

{
  lua_pushvalue(param_1,-0x2712);
  lua_setfield(param_1,-0x2712,"_G");
  luaL_register(param_1,"_G",(luaL_Reg *)&PTR_s_assert_00679df0);
  lua_pushlstring(param_1,"Luau",4);
  lua_setfield(param_1,-0x2712,"_VERSION");
  FUN_0061e1f4(param_1,"ipairs",FUN_0061e194,PTR_luaB_inext_0067db90);
  FUN_0061e1f4(param_1,"pairs",FUN_0061e258,PTR_luaB_next_0067db88);
  lua_pushcclosurek(param_1,FUN_0061e2ac,"pcall",0,FUN_0061e3c4);
  lua_setfield(param_1,-2,"pcall");
  lua_pushcclosurek(param_1,FUN_0061e454,"xpcall",0,FUN_0061e5a4);
  lua_setfield(param_1,-2,"xpcall");
  return 1;
}


// ===== 0061e194  FUN_0061e194 =====

undefined8 FUN_0061e194(lua_State *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  luaL_checktype(param_1,1,7);
  lua_pushvalue(param_1,-0x2713);
  lua_pushvalue(param_1,1);
  puVar1 = *(undefined8 **)(param_1 + 8);
  *puVar1 = 0;
  lVar2 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)puVar1 + 0xc) = 3;
  *(long *)(param_1 + 8) = lVar2 + 0x10;
  return 3;
}


// ===== 0061e1f4  FUN_0061e1f4 =====

void FUN_0061e1f4(lua_State *param_1,char *param_2,_func_int_lua_State_ptr *param_3,
                 _func_int_lua_State_ptr *param_4)

{
  lua_pushcclosurek(param_1,param_4,(char *)0x0,0,(_func_int_lua_State_ptr_int *)0x0);
  lua_pushcclosurek(param_1,param_3,param_2,1,(_func_int_lua_State_ptr_int *)0x0);
  lua_setfield(param_1,-2,param_2);
  return;
}


// ===== 0061e258  FUN_0061e258 =====

undefined8 FUN_0061e258(lua_State *param_1)

{
  long lVar1;
  
  luaL_checktype(param_1,1,7);
  lua_pushvalue(param_1,-0x2713);
  lua_pushvalue(param_1,1);
  lVar1 = *(long *)(param_1 + 8);
  *(undefined4 *)(lVar1 + 0xc) = 0;
  *(long *)(param_1 + 8) = lVar1 + 0x10;
  return 3;
}


// ===== 0061e2ac  FUN_0061e2ac =====

ulong FUN_0061e2ac(lua_State *param_1)

{
  lua_State lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  uint *puVar5;
  long lVar6;
  
  luaL_checkany(param_1,1);
  lVar3 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(param_1 + 0x30);
  *(uint *)(*(long *)(param_1 + 0x20) + 0x24) = *(uint *)(*(long *)(param_1 + 0x20) + 0x24) | 2;
  iVar2 = FUN_00622fe0(param_1,FUN_0061e6d0,lVar3,lVar3 - lVar6,0);
  if (*(ulong *)(*(long *)(param_1 + 0x20) + 0x10) < *(ulong *)(param_1 + 8)) {
    *(ulong *)(*(long *)(param_1 + 0x20) + 0x10) = *(ulong *)(param_1 + 8);
  }
  if (*PTR_LuauStacklessPcall_0067db80 == '\0') {
    if (iVar2 == 0) {
      uVar4 = 0xffffffff;
      if ((param_1[3] == (lua_State)0x1) || (param_1[3] == (lua_State)0x6)) goto LAB_0061e394;
    }
  }
  else if (iVar2 == 0) {
    lVar1 = param_1[3];
    uVar4 = 0xffffffff;
    if (((lVar1 == (lua_State)0x1) || (lVar1 == (lua_State)0x6)) || (lVar1 == (lua_State)0x7f))
    goto LAB_0061e394;
  }
  lua_rawcheckstack(param_1,1);
  puVar5 = *(uint **)(param_1 + 8);
  *puVar5 = (uint)(iVar2 == 0);
  lVar3 = *(long *)(param_1 + 8);
  puVar5[3] = 1;
  *(long *)(param_1 + 8) = lVar3 + 0x10;
  lua_insert(param_1,1);
  uVar4 = (ulong)(*(long *)(param_1 + 8) - *(long *)(param_1 + 0x10)) >> 4;
LAB_0061e394:
  return uVar4 & 0xffffffff;
}


// ===== 0061e3c4  FUN_0061e3c4 =====

ulong FUN_0061e3c4(lua_State *param_1,int param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  long lVar3;
  
  lua_rawcheckstack(param_1,1);
  puVar2 = *(undefined4 **)(param_1 + 8);
  if (param_2 == 0) {
    *puVar2 = 1;
    lVar3 = *(long *)(param_1 + 8);
    puVar2[3] = 1;
    *(long *)(param_1 + 8) = lVar3 + 0x10;
    lua_insert(param_1,1);
    uVar1 = (ulong)(*(long *)(param_1 + 8) - *(long *)(param_1 + 0x10)) >> 4;
  }
  else {
    *puVar2 = 0;
    lVar3 = *(long *)(param_1 + 8);
    puVar2[3] = 1;
    *(long *)(param_1 + 8) = lVar3 + 0x10;
    lua_insert(param_1,-2);
    uVar1 = 2;
  }
  return uVar1;
}


// ===== 0061e454  FUN_0061e454 =====

ulong FUN_0061e454(lua_State *param_1)

{
  lua_State lVar1;
  int iVar2;
  ulong uVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  luaL_checktype(param_1,2,8);
  lua_pushvalue(param_1,1);
  lua_pushvalue(param_1,2);
  lua_replace(param_1,1);
  lua_replace(param_1,2);
  lVar6 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(param_1 + 0x30);
  lVar5 = lVar6 + 0x10;
  *(uint *)(*(long *)(param_1 + 0x20) + 0x24) = *(uint *)(*(long *)(param_1 + 0x20) + 0x24) | 2;
  iVar2 = FUN_00622fe0(param_1,FUN_0061e6d0,lVar5,lVar5 - lVar7,lVar6 - lVar7);
  if (*(ulong *)(*(long *)(param_1 + 0x20) + 0x10) < *(ulong *)(param_1 + 8)) {
    *(ulong *)(*(long *)(param_1 + 0x20) + 0x10) = *(ulong *)(param_1 + 8);
  }
  if (*PTR_LuauStacklessPcall_0067db80 == '\0') {
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
      if ((param_1[3] == (lua_State)0x1) || (param_1[3] == (lua_State)0x6)) goto LAB_0061e574;
    }
  }
  else if (iVar2 == 0) {
    lVar1 = param_1[3];
    uVar3 = 0xffffffff;
    if (((lVar1 == (lua_State)0x1) || (lVar1 == (lua_State)0x6)) || (lVar1 == (lua_State)0x7f))
    goto LAB_0061e574;
  }
  lua_rawcheckstack(param_1,1);
  puVar4 = *(uint **)(param_1 + 8);
  *puVar4 = (uint)(iVar2 == 0);
  lVar5 = *(long *)(param_1 + 8);
  puVar4[3] = 1;
  *(long *)(param_1 + 8) = lVar5 + 0x10;
  lua_replace(param_1,1);
  uVar3 = (ulong)(*(long *)(param_1 + 8) - *(long *)(param_1 + 0x10)) >> 4;
LAB_0061e574:
  return uVar3 & 0xffffffff;
}


// ===== 0061e5a4  FUN_0061e5a4 =====

ulong FUN_0061e5a4(lua_State *param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  
  if (param_2 == 0) {
    lua_rawcheckstack(param_1,1);
    puVar4 = *(undefined4 **)(param_1 + 8);
    *puVar4 = 1;
    lVar6 = *(long *)(param_1 + 8);
    puVar4[3] = 1;
    *(long *)(param_1 + 8) = lVar6 + 0x10;
    lua_replace(param_1,1);
    uVar2 = (ulong)(*(long *)(param_1 + 8) - *(long *)(param_1 + 0x10)) >> 4;
  }
  else {
    lua_rawcheckstack(param_1,3);
    puVar4 = *(undefined4 **)(param_1 + 8);
    *puVar4 = 0;
    lVar6 = *(long *)(param_1 + 8);
    puVar4[3] = 1;
    *(long *)(param_1 + 8) = lVar6 + 0x10;
    lua_pushvalue(param_1,1);
    if (((byte)param_1[1] >> 2 & 1) != 0) {
      param_1[1] = (lua_State)((byte)param_1[1] & 0xfb);
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
      *(lua_State **)(*(long *)(param_1 + 0x18) + 0x30) = param_1;
    }
    puVar5 = *(undefined8 **)(param_1 + 8);
    puVar5[1] = puVar5[-5];
    *puVar5 = puVar5[-6];
    lVar6 = *(long *)(param_1 + 8) + -0x10;
    lVar7 = lVar6 - *(long *)(param_1 + 0x30);
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
    iVar1 = FUN_00622fe0(param_1,thunk_FUN_006227ac,lVar6,lVar7,0);
    if (iVar1 != 0) {
      uVar3 = 4;
      if (iVar1 != 4 || param_2 != 4) {
        uVar3 = 5;
      }
      FUN_00622850(param_1,uVar3,*(long *)(param_1 + 0x30) + lVar7);
    }
    uVar2 = 2;
  }
  return uVar2;
}


// ===== 0061e6cc  thunk_FUN_006227ac =====

void thunk_FUN_006227ac(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  short sVar3;
  long lVar4;
  
  sVar3 = *(short *)(param_1 + 0x50);
  *(short *)(param_1 + 0x50) = sVar3 + 1;
  if (199 < (ushort)(sVar3 + 1U)) {
    FUN_0062253c(param_1);
  }
  lVar4 = *(long *)(param_1 + 0x30);
  FUN_0062270c(param_1,param_2,1,0);
  uVar1 = *(ulong *)(*(long *)(param_1 + 0x18) + 0x40);
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x18) + 0x48);
  *(long *)(param_1 + 8) = *(long *)(param_1 + 0x30) + (param_2 - lVar4) + 0x10;
  *(short *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) + -1;
  if (uVar2 < uVar1) {
    return;
  }
  FUN_006239a4(param_1);
  return;
}


// ===== 0061e6d0  FUN_0061e6d0 =====

void FUN_0061e6d0(long param_1,undefined8 param_2)

{
  if (*PTR_LuauStacklessPcall_0067db80 != '\0') {
    FUN_00622574(param_1,param_2,0xffffffff,
                 *(ushort *)(param_1 + 0x50) <= *(ushort *)(param_1 + 0x52));
    return;
  }
  FUN_00622574(param_1,param_2,0xffffffff,0);
  return;
}


// ===== 0061e704  FUN_0061e704 =====

ulong FUN_0061e704(lua_State *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  
  luaL_checkany(param_1,1);
  piVar2 = *(int **)(param_1 + 0x10);
  piVar1 = piVar2;
  if (*(int **)(param_1 + 8) <= piVar2) {
    piVar1 = (int *)&DAT_00285948;
  }
  iVar3 = piVar1[3];
  if (iVar3 == 1) {
    iVar3 = *piVar1;
  }
  if (iVar3 == 0) {
    uVar4 = luaL_optlstring(param_1,2,"assertion failed!",(ulong *)0x0);
                    /* WARNING: Subroutine does not return */
    luaL_errorL(param_1,"%s",uVar4);
  }
  return (ulong)((long)*(int **)(param_1 + 8) - (long)piVar2) >> 4;
}


// ===== 0061e788  FUN_0061e788 =====

void FUN_0061e788(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(param_1 + 8);
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  if ((puVar3 + 2 < puVar4 && puVar3 + 2 != &DAT_00285948) && (0 < *(int *)((long)puVar3 + 0x1c))) {
    iVar1 = luaL_checkinteger(param_1,2);
    puVar4 = *(undefined8 **)(param_1 + 8);
    puVar3 = *(undefined8 **)(param_1 + 0x10);
  }
  else {
    iVar1 = 1;
  }
  if (puVar4 < puVar3 + 2) {
    puVar4 = puVar4 + -2;
    do {
      *(undefined4 *)((long)puVar4 + 0x1c) = 0;
      puVar4 = puVar4 + 2;
    } while (puVar4 < puVar3);
  }
  *(undefined8 **)(param_1 + 8) = puVar3 + 2;
  if (puVar3 == &DAT_00285948) {
    iVar2 = -1;
  }
  else {
    iVar2 = *(int *)((long)puVar3 + 0xc);
  }
  if ((0 < iVar1) && (iVar2 == 6 || iVar2 == 3)) {
    luaL_where(param_1,iVar1);
    lua_pushvalue(param_1,1);
    lua_concat(param_1,2);
  }
                    /* WARNING: Subroutine does not return */
  lua_error(param_1);
}


// ===== 0061e854  FUN_0061e854 =====

undefined8 FUN_0061e854(long param_1)

{
  ulong uVar1;
  double *pdVar2;
  
  uVar1 = *(ulong *)(*(long *)(param_1 + 0x18) + 0x48);
  pdVar2 = *(double **)(param_1 + 8);
  *(undefined4 *)((long)pdVar2 + 0xc) = 3;
  *pdVar2 = (double)(int)(uVar1 >> 10);
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  return 1;
}


// ===== 0061e88c  FUN_0061e88c =====

undefined8 FUN_0061e88c(lua_State *param_1)

{
  FUN_0061eff4(param_1,1);
  if ((*(int *)(*(long *)(param_1 + 8) + -4) == 8) &&
     (*(char *)(*(long *)(*(long *)(param_1 + 8) + -0x10) + 3) != '\0')) {
    lua_pushvalue(param_1,-0x2712);
  }
  else {
    lua_getfenv(param_1,-1);
  }
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 8) + -0x10) + 5) = 0;
  return 1;
}


// ===== 0061e8f8  FUN_0061e8f8 =====

undefined8 FUN_0061e8f8(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  
  luaL_checkany(param_1,1);
  iVar1 = lua_getmetatable(param_1,1);
  if (iVar1 == 0) {
    lVar2 = *(long *)(param_1 + 8);
    *(undefined4 *)(lVar2 + 0xc) = 0;
    *(long *)(param_1 + 8) = lVar2 + 0x10;
  }
  else {
    luaL_getmetafield(param_1,1,"__metatable");
  }
  return 1;
}


// ===== 0061e958  FUN_0061e958 =====

undefined8 FUN_0061e958(lua_State *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  long lVar3;
  
  luaL_checkany(param_1,1);
  luaL_checkany(param_1,2);
  uVar1 = lua_rawequal(param_1,1,2);
  puVar2 = *(undefined4 **)(param_1 + 8);
  *puVar2 = uVar1;
  lVar3 = *(long *)(param_1 + 8);
  puVar2[3] = 1;
  *(long *)(param_1 + 8) = lVar3 + 0x10;
  return 1;
}


// ===== 0061e9b8  FUN_0061e9b8 =====

undefined8 FUN_0061e9b8(lua_State *param_1)

{
  ulong uVar1;
  long lVar2;
  
  luaL_checktype(param_1,1,7);
  luaL_checkany(param_1,2);
  lVar2 = *(long *)(param_1 + 0x10);
  for (uVar1 = *(ulong *)(param_1 + 8); uVar1 < lVar2 + 0x20U; uVar1 = uVar1 + 0x10) {
    *(undefined4 *)(uVar1 + 0xc) = 0;
  }
  *(ulong *)(param_1 + 8) = lVar2 + 0x20U;
  lua_rawget(param_1,1);
  return 1;
}


// ===== 0061ea24  FUN_0061ea24 =====

undefined8 FUN_0061ea24(lua_State *param_1)

{
  ulong uVar1;
  long lVar2;
  
  luaL_checktype(param_1,1,7);
  luaL_checkany(param_1,2);
  luaL_checkany(param_1,3);
  lVar2 = *(long *)(param_1 + 0x10);
  for (uVar1 = *(ulong *)(param_1 + 8); uVar1 < lVar2 + 0x30U; uVar1 = uVar1 + 0x10) {
    *(undefined4 *)(uVar1 + 0xc) = 0;
  }
  *(ulong *)(param_1 + 8) = lVar2 + 0x30U;
  lua_rawset(param_1,1);
  return 1;
}


// ===== 0061ea9c  FUN_0061ea9c =====

undefined8 FUN_0061ea9c(lua_State *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  double *pdVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (((puVar1 < *(undefined8 **)(param_1 + 8)) && (puVar1 != &DAT_00285948)) &&
     ((*(uint *)((long)puVar1 + 0xc) & 0xfffffffe) == 6)) {
    iVar2 = lua_objlen(param_1,1);
    pdVar3 = *(double **)(param_1 + 8);
    *(undefined4 *)((long)pdVar3 + 0xc) = 3;
    *pdVar3 = (double)iVar2;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  luaL_argerrorL(param_1,1,"table or string expected");
}


// ===== 0061eb28  FUN_0061eb28 =====

int FUN_0061eb28(lua_State *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  double *pdVar7;
  int iVar8;
  
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  uVar3 = (long)*(undefined8 **)(param_1 + 8) - (long)puVar2;
  iVar8 = (int)(uVar3 >> 4);
  if ((((*(undefined8 **)(param_1 + 8) < puVar2 || uVar3 == 0) || (puVar2 == &DAT_00285948)) ||
      (*(int *)((long)puVar2 + 0xc) != 6)) ||
     (pcVar6 = (char *)lua_tolstring(param_1,1,(ulong *)0x0), *pcVar6 != '#')) {
    iVar4 = luaL_checkinteger(param_1,1);
    iVar1 = iVar4;
    if (iVar8 <= iVar4) {
      iVar1 = iVar8;
    }
    iVar5 = iVar4 + iVar8;
    if (-1 < iVar4) {
      iVar5 = iVar1;
    }
    if (iVar5 < 1) {
                    /* WARNING: Subroutine does not return */
      luaL_argerrorL(param_1,1,"index out of range");
    }
    iVar5 = iVar8 - iVar5;
  }
  else {
    iVar5 = 1;
    pdVar7 = *(double **)(param_1 + 8);
    *(undefined4 *)((long)pdVar7 + 0xc) = 3;
    *pdVar7 = (double)(iVar8 + -1);
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  }
  return iVar5;
}


// ===== 0061ebf8  FUN_0061ebf8 =====

undefined8 FUN_0061ebf8(lua_State *param_1)

{
  int iVar1;
  undefined8 uVar2;
  double dVar3;
  
  luaL_checktype(param_1,2,7);
  FUN_0061eff4(param_1,0);
  lua_pushvalue(param_1,2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 8) + -0x10) + 5) = 0;
  iVar1 = lua_isnumber(param_1,1);
  if ((iVar1 == 0) || (dVar3 = (double)lua_tonumberx(param_1,1,(int *)0x0), dVar3 != 0.0)) {
    if (((*(int *)(*(long *)(param_1 + 8) + -0x14) == 8) &&
        (*(char *)(*(long *)(*(long *)(param_1 + 8) + -0x20) + 3) != '\0')) ||
       (iVar1 = lua_setfenv(param_1,-2), iVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
      luaL_errorL(param_1,"\'setfenv\' cannot change environment of given object");
    }
    uVar2 = 1;
  }
  else {
    lua_pushthread(param_1);
    lua_insert(param_1,-2);
    lua_setfenv(param_1,-2);
    uVar2 = 0;
  }
  return uVar2;
}


// ===== 0061ecd4  FUN_0061ecd4 =====

undefined8 FUN_0061ecd4(lua_State *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  if (puVar1 < *(undefined8 **)(param_1 + 8) && puVar1 != &DAT_00285948) {
    iVar4 = *(int *)(*(long *)(param_1 + 0x10) + 0x1c);
    luaL_checktype(param_1,1,7);
    if ((iVar4 == 0) || (iVar4 == 7)) {
      iVar4 = luaL_getmetafield(param_1,1,"__metatable");
      if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        luaL_errorL(param_1,"cannot change a protected metatable");
      }
      lVar3 = *(long *)(param_1 + 0x10);
      for (uVar2 = *(ulong *)(param_1 + 8); uVar2 < lVar3 + 0x20U; uVar2 = uVar2 + 0x10) {
        *(undefined4 *)(uVar2 + 0xc) = 0;
      }
      *(ulong *)(param_1 + 8) = lVar3 + 0x20U;
      lua_setmetatable(param_1,1);
      return 1;
    }
  }
  else {
    luaL_checktype(param_1,1,7);
  }
                    /* WARNING: Subroutine does not return */
  luaL_typeerrorL(param_1,2,"nil or table");
}


// ===== 0061edb0  FUN_0061edb0 =====

undefined8 FUN_0061edb0(lua_State *param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  long lVar3;
  int __base;
  byte *pbVar4;
  ulonglong uVar5;
  double *pdVar6;
  long lVar7;
  byte *pbVar8;
  double dVar9;
  undefined8 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  if ((((puVar1 < *(undefined8 **)(param_1 + 8)) && (puVar1 != &DAT_00285948)) &&
      (0 < *(int *)(*(long *)(param_1 + 0x10) + 0x1c))) &&
     (__base = luaL_checkinteger(param_1,2), __base != 10)) {
    pbVar4 = (byte *)luaL_checklstring(param_1,1,(ulong *)0x0);
    if (0x22 < __base - 2U) {
                    /* WARNING: Subroutine does not return */
      luaL_argerrorL(param_1,2,"base out of range");
    }
    uVar5 = strtoull((char *)pbVar4,(char **)&local_40,__base);
    pbVar8 = (byte *)CONCAT44(local_40._4_4_,(int)local_40);
    if (pbVar4 != (byte *)CONCAT44(local_40._4_4_,(int)local_40)) {
      do {
        do {
          pbVar4 = pbVar8 + 1;
          bVar2 = *pbVar8;
          pbVar8 = pbVar4;
        } while (bVar2 == 0x20);
      } while (0xfffffffa < bVar2 - 0xe);
      if (bVar2 == 0) {
        dVar9 = (double)uVar5;
        goto LAB_0061ee30;
      }
    }
  }
  else {
    local_40._0_4_ = 0;
    dVar9 = (double)lua_tonumberx(param_1,1,(int *)&local_40);
    if ((int)local_40 != 0) {
LAB_0061ee30:
      pdVar6 = *(double **)(param_1 + 8);
      *pdVar6 = dVar9;
      *(undefined4 *)((long)pdVar6 + 0xc) = 3;
      lVar7 = *(long *)(param_1 + 8);
      goto LAB_0061ee5c;
    }
    luaL_checkany(param_1,1);
  }
  lVar7 = *(long *)(param_1 + 8);
  *(undefined4 *)(lVar7 + 0xc) = 0;
LAB_0061ee5c:
  *(long *)(param_1 + 8) = lVar7 + 0x10;
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0061ef04  FUN_0061ef04 =====

undefined8 FUN_0061ef04(lua_State *param_1)

{
  luaL_checkany(param_1,1);
  luaL_tolstring(param_1,1,(ulong *)0x0);
  return 1;
}


// ===== 0061ef3c  FUN_0061ef3c =====

undefined8 FUN_0061ef3c(lua_State *param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  
  luaL_checkany(param_1,1);
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  pcVar2 = "no value";
  if (((puVar1 < *(undefined8 **)(param_1 + 8)) && (puVar1 != &DAT_00285948)) &&
     (pcVar2 = "no value", *(int *)((long)puVar1 + 0xc) != -1)) {
    pcVar2 = (&PTR_DAT_0067ad68)[*(int *)((long)puVar1 + 0xc)];
  }
  lua_pushstring(param_1,pcVar2);
  return 1;
}


// ===== 0061efa8  FUN_0061efa8 =====

undefined8 FUN_0061efa8(lua_State *param_1)

{
  char *__s;
  size_t sVar1;
  
  luaL_checkany(param_1,1);
  __s = (char *)luaL_typename(param_1,1);
  sVar1 = strlen(__s);
  lua_pushlstring(param_1,__s,sVar1);
  return 1;
}


// ===== 0061eff4  FUN_0061eff4 =====

void FUN_0061eff4(lua_State *param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  ulong uVar6;
  lua_Debug alStack_180 [312];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (((puVar1 < *(undefined8 **)(param_1 + 8)) && (puVar1 != &DAT_00285948)) &&
     (*(int *)((long)puVar1 + 0xc) == 8)) {
    if (*(long *)(lVar2 + 0x28) == local_48) {
      lua_pushvalue(param_1,1);
      return;
    }
  }
  else {
    if ((param_2 == 0) ||
       (((uVar6 = 1, puVar1 < *(undefined8 **)(param_1 + 8) && (puVar1 != &DAT_00285948)) &&
        (0 < *(int *)((long)puVar1 + 0xc))))) {
      uVar3 = luaL_checkinteger(param_1,1);
      uVar6 = (ulong)uVar3;
      if ((int)uVar3 < 0) {
        pcVar5 = "level must be non-negative";
        goto LAB_0061f134;
      }
    }
    iVar4 = lua_getinfo(param_1,(int)uVar6,"f",alStack_180);
    if (iVar4 == 0) {
      pcVar5 = "invalid level";
LAB_0061f134:
                    /* WARNING: Subroutine does not return */
      luaL_argerrorL(param_1,1,pcVar5);
    }
    if ((*(eh_frame_hdr **)(param_1 + 8) != &eh_frame_hdr_00285958) &&
       ((*(eh_frame_hdr **)(param_1 + 8))[-1] == (eh_frame_hdr)0x0)) {
                    /* WARNING: Subroutine does not return */
      luaL_errorL(param_1,"no function environment for tail call at level %d",uVar6);
    }
    if (*(long *)(lVar2 + 0x28) == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0061f140  luaopen_bit32 =====

/* luaopen_bit32(lua_State*) */

undefined8 luaopen_bit32(lua_State *param_1)

{
  luaL_register(param_1,"bit32",(luaL_Reg *)&PTR_s_arshift_00679f10);
  return 1;
}


// ===== 0061f168  FUN_0061f168 =====

undefined8 FUN_0061f168(lua_State *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  double *pdVar6;
  
  uVar3 = luaL_checkunsigned(param_1,1);
  uVar4 = luaL_checkinteger(param_1,2);
  if (((int)uVar3 < 0) && (-1 < (int)uVar4)) {
    uVar5 = uVar3 >> (ulong)(uVar4 & 0x1f) | 0xffffffffU >> (ulong)(uVar4 & 0x1f) ^ 0xffffffff;
    if (0x1f < uVar4) {
      uVar5 = 0xffffffff;
    }
  }
  else {
    uVar2 = -uVar4;
    uVar5 = 0;
    if (uVar2 < 0x20) {
      uVar5 = uVar3 << (ulong)(uVar2 & 0x1f);
    }
    uVar1 = 0;
    if (0xffffffe0 < uVar2) {
      uVar1 = uVar3 >> (ulong)(uVar4 & 0x1f);
    }
    if (0 < (int)uVar4) {
      uVar5 = uVar1;
    }
  }
  pdVar6 = *(double **)(param_1 + 8);
  *(undefined4 *)((long)pdVar6 + 0xc) = 3;
  *pdVar6 = (double)uVar5;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  return 1;
}


// ===== 0061f208  FUN_0061f208 =====

undefined8 FUN_0061f208(long param_1)

{
  uint uVar1;
  double *pdVar2;
  
  uVar1 = FUN_0061f8dc();
  pdVar2 = *(double **)(param_1 + 8);
  *(undefined4 *)((long)pdVar2 + 0xc) = 3;
  *pdVar2 = (double)uVar1;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  return 1;
}


// ===== 0061f24c  FUN_0061f24c =====

undefined8 FUN_0061f24c(lua_State *param_1)

{
  uint uVar1;
  double *pdVar2;
  
  uVar1 = luaL_checkunsigned(param_1,1);
  pdVar2 = *(double **)(param_1 + 8);
  *(undefined4 *)((long)pdVar2 + 0xc) = 3;
  *pdVar2 = (double)~uVar1;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  return 1;
}


// ===== 0061f298  FUN_0061f298 =====

undefined8 FUN_0061f298(lua_State *param_1)

{
  uint uVar1;
  double *pdVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  double dVar7;
  
  pdVar2 = *(double **)(param_1 + 8);
  iVar5 = (int)((ulong)((long)pdVar2 - *(long *)(param_1 + 0x10)) >> 4);
  if (iVar5 < 1) {
    dVar7 = 0.0;
  }
  else {
    iVar4 = 0;
    uVar6 = 0;
    do {
      iVar4 = iVar4 + 1;
      uVar1 = luaL_checkunsigned(param_1,iVar4);
      uVar6 = uVar1 | uVar6;
    } while (iVar5 != iVar4);
    dVar7 = (double)uVar6;
    pdVar2 = *(double **)(param_1 + 8);
  }
  *pdVar2 = dVar7;
  lVar3 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)pdVar2 + 0xc) = 3;
  *(long *)(param_1 + 8) = lVar3 + 0x10;
  return 1;
}


// ===== 0061f320  FUN_0061f320 =====

undefined8 FUN_0061f320(lua_State *param_1)

{
  uint uVar1;
  double *pdVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  double dVar7;
  
  pdVar2 = *(double **)(param_1 + 8);
  iVar5 = (int)((ulong)((long)pdVar2 - *(long *)(param_1 + 0x10)) >> 4);
  if (iVar5 < 1) {
    dVar7 = 0.0;
  }
  else {
    iVar4 = 0;
    uVar6 = 0;
    do {
      iVar4 = iVar4 + 1;
      uVar1 = luaL_checkunsigned(param_1,iVar4);
      uVar6 = uVar1 ^ uVar6;
    } while (iVar5 != iVar4);
    dVar7 = (double)uVar6;
    pdVar2 = *(double **)(param_1 + 8);
  }
  *pdVar2 = dVar7;
  lVar3 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)pdVar2 + 0xc) = 3;
  *(long *)(param_1 + 8) = lVar3 + 0x10;
  return 1;
}


// ===== 0061f3a8  FUN_0061f3a8 =====

undefined8 FUN_0061f3a8(long param_1)

{
  int iVar1;
  uint *puVar2;
  long lVar3;
  
  iVar1 = FUN_0061f8dc();
  puVar2 = *(uint **)(param_1 + 8);
  *puVar2 = (uint)(iVar1 != 0);
  lVar3 = *(long *)(param_1 + 8);
  puVar2[3] = 1;
  *(long *)(param_1 + 8) = lVar3 + 0x10;
  return 1;
}


// ===== 0061f3f0  FUN_0061f3f0 =====

undefined8 FUN_0061f3f0(lua_State *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  double *pdVar4;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = luaL_checkunsigned(param_1,1);
  uVar3 = FUN_0061f824(param_1,2,&local_3c);
  pdVar4 = *(double **)(param_1 + 8);
  *(undefined4 *)((long)pdVar4 + 0xc) = 3;
  *pdVar4 = (double)(uVar2 >> (ulong)(uVar3 & 0x1f) &
                    (-2 << (ulong)(local_3c - 1U & 0x1f) ^ 0xffffffffU));
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0061f494  FUN_0061f494 =====

undefined8 FUN_0061f494(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  double *pdVar3;
  
  iVar1 = luaL_checkinteger(param_1,2);
  uVar2 = luaL_checkunsigned(param_1,1);
  pdVar3 = *(double **)(param_1 + 8);
  *(undefined4 *)((long)pdVar3 + 0xc) = 3;
  *pdVar3 = (double)(uVar2 >> (-iVar1 & 0x1fU) | uVar2 << 0x20 - (-iVar1 & 0x1fU));
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  return 1;
}


// ===== 0061f4f4  FUN_0061f4f4 =====

undefined8 FUN_0061f4f4(lua_State *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  double *pdVar5;
  
  uVar3 = luaL_checkunsigned(param_1,1);
  uVar4 = luaL_checkinteger(param_1,2);
  uVar2 = 0;
  if (uVar4 < 0x20) {
    uVar2 = uVar3 << (ulong)(uVar4 & 0x1f);
  }
  uVar1 = 0;
  if (0xffffffe0 < uVar4) {
    uVar1 = uVar3 >> (ulong)(-uVar4 & 0x1f);
  }
  if ((uVar4 & 0x80000000) != 0) {
    uVar2 = uVar1;
  }
  pdVar5 = *(double **)(param_1 + 8);
  *(undefined4 *)((long)pdVar5 + 0xc) = 3;
  *pdVar5 = (double)uVar2;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  return 1;
}


// ===== 0061f570  FUN_0061f570 =====

undefined8 FUN_0061f570(lua_State *param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  double *pdVar6;
  int local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar3 = luaL_checkunsigned(param_1,1);
  uVar4 = luaL_checkunsigned(param_1,2);
  uVar5 = FUN_0061f824(param_1,3,&local_4c);
  uVar1 = -2 << (ulong)(local_4c - 1U & 0x1f);
  pdVar6 = *(double **)(param_1 + 8);
  *(undefined4 *)((long)pdVar6 + 0xc) = 3;
  *pdVar6 = (double)(uVar3 & (~uVar1 << (ulong)(uVar5 & 0x1f) ^ 0xffffffff) |
                    (uVar4 & (uVar1 ^ 0xffffffff)) << (ulong)(uVar5 & 0x1f));
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0061f63c  FUN_0061f63c =====

undefined8 FUN_0061f63c(lua_State *param_1)

{
  uint uVar1;
  uint uVar2;
  double *pdVar3;
  
  uVar1 = luaL_checkinteger(param_1,2);
  uVar2 = luaL_checkunsigned(param_1,1);
  pdVar3 = *(double **)(param_1 + 8);
  *(undefined4 *)((long)pdVar3 + 0xc) = 3;
  *pdVar3 = (double)(uVar2 >> (uVar1 & 0x1f) | uVar2 << 0x20 - (uVar1 & 0x1f));
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  return 1;
}


// ===== 0061f698  FUN_0061f698 =====

undefined8 FUN_0061f698(lua_State *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  double *pdVar6;
  
  uVar4 = luaL_checkunsigned(param_1,1);
  uVar5 = luaL_checkinteger(param_1,2);
  uVar3 = -uVar5;
  uVar2 = 0;
  if (uVar3 < 0x20) {
    uVar2 = uVar4 << (ulong)(uVar3 & 0x1f);
  }
  uVar1 = 0;
  if (0xffffffe0 < uVar3) {
    uVar1 = uVar4 >> (ulong)(uVar5 & 0x1f);
  }
  if (0 < (int)uVar5) {
    uVar2 = uVar1;
  }
  pdVar6 = *(double **)(param_1 + 8);
  *(undefined4 *)((long)pdVar6 + 0xc) = 3;
  *pdVar6 = (double)uVar2;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  return 1;
}


// ===== 0061f714  FUN_0061f714 =====

undefined8 FUN_0061f714(lua_State *param_1)

{
  uint uVar1;
  uint uVar2;
  double *pdVar3;
  
  uVar1 = luaL_checkunsigned(param_1,1);
  uVar2 = 0;
  do {
    if ((uVar1 >> (ulong)((uVar2 ^ 0x1f) & 0x1f) & 1) != 0) break;
    uVar2 = uVar2 + 1;
  } while (uVar2 != 0x20);
  pdVar3 = *(double **)(param_1 + 8);
  *(undefined4 *)((long)pdVar3 + 0xc) = 3;
  *pdVar3 = (double)uVar2;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  return 1;
}


// ===== 0061f778  FUN_0061f778 =====

undefined8 FUN_0061f778(lua_State *param_1)

{
  uint uVar1;
  uint uVar2;
  double *pdVar3;
  
  uVar1 = luaL_checkunsigned(param_1,1);
  uVar2 = 0;
  do {
    if ((uVar1 >> (ulong)(uVar2 & 0x1f) & 1) != 0) break;
    uVar2 = uVar2 + 1;
  } while (uVar2 != 0x20);
  pdVar3 = *(double **)(param_1 + 8);
  *(undefined4 *)((long)pdVar3 + 0xc) = 3;
  *pdVar3 = (double)uVar2;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  return 1;
}


// ===== 0061f7d8  FUN_0061f7d8 =====

undefined8 FUN_0061f7d8(lua_State *param_1)

{
  uint uVar1;
  double *pdVar2;
  
  uVar1 = luaL_checkunsigned(param_1,1);
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  pdVar2 = *(double **)(param_1 + 8);
  *(undefined4 *)((long)pdVar2 + 0xc) = 3;
  *pdVar2 = (double)(uVar1 >> 0x10 | uVar1 << 0x10);
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  return 1;
}


// ===== 0061f824  FUN_0061f824 =====

int FUN_0061f824(lua_State *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = luaL_checkinteger(param_1,param_2);
  iVar2 = lua_type(param_1,param_2 + 1);
  if (iVar2 < 1) {
    if (iVar1 < 0) goto LAB_0061f8b8;
    iVar2 = 1;
  }
  else {
    iVar2 = luaL_checkinteger(param_1,param_2 + 1);
    if (iVar1 < 0) {
LAB_0061f8b8:
                    /* WARNING: Subroutine does not return */
      luaL_argerrorL(param_1,param_2,"field cannot be negative");
    }
    if (iVar2 < 1) {
                    /* WARNING: Subroutine does not return */
      luaL_argerrorL(param_1,param_2 + 1,"width must be positive");
    }
  }
  if ((uint)(iVar2 + iVar1) < 0x21) {
    *param_3 = iVar2;
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  luaL_errorL(param_1,"trying to access non-existent bits");
}


// ===== 0061f8dc  FUN_0061f8dc =====

uint FUN_0061f8dc(lua_State *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)((ulong)(*(long *)(param_1 + 8) - *(long *)(param_1 + 0x10)) >> 4);
  if (iVar4 < 1) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = 0;
    uVar2 = 0xffffffff;
    do {
      iVar3 = iVar3 + 1;
      uVar1 = luaL_checkunsigned(param_1,iVar3);
      uVar2 = uVar1 & uVar2;
    } while (iVar4 != iVar3);
  }
  return uVar2;
}


// ===== 0061f944  luaopen_buffer =====

/* luaopen_buffer(lua_State*) */

undefined8 luaopen_buffer(lua_State *param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR_s_create_0067a1e0;
  if (*PTR_LuauIntegerLibrary_0067db98 != '\0') {
    ppuVar1 = &PTR_s_create_0067a010;
  }
  luaL_register(param_1,"buffer",(luaL_Reg *)ppuVar1);
  return 1;
}


// ===== 0061f988  FUN_0061f988 =====

undefined8 FUN_0061f988(lua_State *param_1)

{
  uint uVar1;
  
  uVar1 = luaL_checkinteger(param_1,1);
  if (-1 < (int)uVar1) {
    lua_newbuffer(param_1,(ulong)uVar1);
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  luaL_argerrorL(param_1,1,"size");
}


// ===== 0061f9d4  FUN_0061f9d4 =====

undefined8 FUN_0061f9d4(lua_State *param_1)

{
  long lVar1;
  void *__src;
  void *__dest;
  ulong local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  __src = (void *)luaL_checklstring(param_1,1,&local_40);
  __dest = (void *)lua_newbuffer(param_1,local_40);
  memcpy(__dest,__src,local_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0061fa50  FUN_0061fa50 =====

undefined8 FUN_0061fa50(lua_State *param_1)

{
  long lVar1;
  char *pcVar2;
  ulong local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0;
  pcVar2 = (char *)luaL_checkbuffer(param_1,1,&local_30);
  lua_pushlstring(param_1,pcVar2,local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0061fab8  FUN_0061fab8 =====

undefined8 FUN_0061fab8(lua_State *param_1)

{
  char cVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  double *pdVar5;
  ulong local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_40 = 0;
  lVar4 = luaL_checkbuffer(param_1,1,&local_40);
  uVar3 = luaL_checkinteger(param_1,2);
  if (local_40 <= uVar3) {
                    /* WARNING: Subroutine does not return */
    luaL_errorL(param_1,"buffer access out of bounds");
  }
  cVar1 = *(char *)(lVar4 + (int)uVar3);
  pdVar5 = *(double **)(param_1 + 8);
  *(undefined4 *)((long)pdVar5 + 0xc) = 3;
  *pdVar5 = (double)(int)cVar1;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0061fb68  FUN_0061fb68 =====

undefined8 FUN_0061fb68(lua_State *param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  lVar3 = luaL_checkbuffer(param_1,1,&local_40);
  uVar2 = luaL_checkinteger(param_1,2);
  if (local_40 <= uVar2) {
                    /* WARNING: Subroutine does not return */
    luaL_errorL(param_1,"buffer access out of bounds");
  }
  puVar4 = *(undefined8 **)(param_1 + 8);
  uVar5 = NEON_ucvtf((ulong)*(byte *)(lVar3 + (int)uVar2));
  *(undefined4 *)((long)puVar4 + 0xc) = 3;
  *puVar4 = uVar5;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0061fc18  FUN_0061fc18 =====

undefined8 FUN_0061fc18(lua_State *param_1)

{
  short sVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  double *pdVar5;
  ulong local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_40 = 0;
  lVar4 = luaL_checkbuffer(param_1,1,&local_40);
  uVar3 = luaL_checkinteger(param_1,2);
  if (local_40 < (ulong)uVar3 + 2) {
                    /* WARNING: Subroutine does not return */
    luaL_errorL(param_1,"buffer access out of bounds");
  }
  sVar1 = *(short *)(lVar4 + (int)uVar3);
  pdVar5 = *(double **)(param_1 + 8);
  *(undefined4 *)((long)pdVar5 + 0xc) = 3;
  *pdVar5 = (double)(int)sVar1;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0061fcd0  FUN_0061fcd0 =====

undefined8 FUN_0061fcd0(lua_State *param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  lVar3 = luaL_checkbuffer(param_1,1,&local_40);
  uVar2 = luaL_checkinteger(param_1,2);
  if (local_40 < (ulong)uVar2 + 2) {
                    /* WARNING: Subroutine does not return */
    luaL_errorL(param_1,"buffer access out of bounds");
  }
  puVar4 = *(undefined8 **)(param_1 + 8);
  uVar5 = NEON_ucvtf((ulong)*(ushort *)(lVar3 + (int)uVar2));
  *(undefined4 *)((long)puVar4 + 0xc) = 3;
  *puVar4 = uVar5;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0061fd88  FUN_0061fd88 =====

undefined8 FUN_0061fd88(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  double *pdVar5;
  ulong local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_40 = 0;
  lVar4 = luaL_checkbuffer(param_1,1,&local_40);
  uVar3 = luaL_checkinteger(param_1,2);
  if (local_40 < (ulong)uVar3 + 4) {
                    /* WARNING: Subroutine does not return */
    luaL_errorL(param_1,"buffer access out of bounds");
  }
  iVar1 = *(int *)(lVar4 + (int)uVar3);
  pdVar5 = *(double **)(param_1 + 8);
  *(undefined4 *)((long)pdVar5 + 0xc) = 3;
  *pdVar5 = (double)iVar1;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0061fe40  FUN_0061fe40 =====

undefined8 FUN_0061fe40(lua_State *param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  lVar3 = luaL_checkbuffer(param_1,1,&local_40);
  uVar2 = luaL_checkinteger(param_1,2);
  if (local_40 < (ulong)uVar2 + 4) {
                    /* WARNING: Subroutine does not return */
    luaL_errorL(param_1,"buffer access out of bounds");
  }
  puVar4 = *(undefined8 **)(param_1 + 8);
  uVar5 = NEON_ucvtf((ulong)*(uint *)(lVar3 + (int)uVar2));
  *(undefined4 *)((long)puVar4 + 0xc) = 3;
  *puVar4 = uVar5;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0061fef8  FUN_0061fef8 =====

undefined8 FUN_0061fef8(lua_State *param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  double *pdVar4;
  float fVar5;
  ulong local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  lVar3 = luaL_checkbuffer(param_1,1,&local_40);
  uVar2 = luaL_checkinteger(param_1,2);
  if (local_40 < (ulong)uVar2 + 4) {
                    /* WARNING: Subroutine does not return */
    luaL_errorL(param_1,"buffer access out of bounds");
  }
  fVar5 = *(float *)(lVar3 + (int)uVar2);
  pdVar4 = *(double **)(param_1 + 8);
  *(undefined4 *)((long)pdVar4 + 0xc) = 3;
  *pdVar4 = (double)fVar5;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0061ffb0  FUN_0061ffb0 =====

undefined8 FUN_0061ffb0(lua_State *param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  lVar3 = luaL_checkbuffer(param_1,1,&local_40);
  uVar2 = luaL_checkinteger(param_1,2);
  if (local_40 < (ulong)uVar2 + 8) {
                    /* WARNING: Subroutine does not return */
    luaL_errorL(param_1,"buffer access out of bounds");
  }
  puVar4 = *(undefined8 **)(param_1 + 8);
  *puVar4 = *(undefined8 *)(lVar3 + (int)uVar2);
  lVar3 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)puVar4 + 0xc) = 3;
  *(long *)(param_1 + 8) = lVar3 + 0x10;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00620064  FUN_00620064 =====

undefined8 FUN_00620064(lua_State *param_1)

{
  long lVar1;
  undefined1 uVar2;
  uint uVar3;
  long lVar4;
  ulong local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  lVar4 = luaL_checkbuffer(param_1,1,&local_40);
  uVar3 = luaL_checkinteger(param_1,2);
  uVar2 = luaL_checkunsigned(param_1,3);
  if (local_40 <= uVar3) {
                    /* WARNING: Subroutine does not return */
    luaL_errorL(param_1,"buffer access out of bounds");
  }
  *(undefined1 *)(lVar4 + (int)uVar3) = uVar2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00620104  FUN_00620104 =====

undefined8 FUN_00620104(lua_State *param_1)

{
  long lVar1;
  undefined1 uVar2;
  uint uVar3;
  long lVar4;
  ulong local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  lVar4 = luaL_checkbuffer(param_1,1,&local_40);
  uVar3 = luaL_checkinteger(param_1,2);
  uVar2 = luaL_checkunsigned(param_1,3);
  if (local_40 <= uVar3) {
                    /* WARNING: Subroutine does not return */
    luaL_errorL(param_1,"buffer access out of bounds");
  }
  *(undefined1 *)(lVar4 + (int)uVar3) = uVar2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006201a4  FUN_006201a4 =====

undefined8 FUN_006201a4(lua_State *param_1)

{
  long lVar1;
  undefined2 uVar2;
  uint uVar3;
  long lVar4;
  ulong local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  lVar4 = luaL_checkbuffer(param_1,1,&local_40);
  uVar3 = luaL_checkinteger(param_1,2);
  uVar2 = luaL_checkunsigned(param_1,3);
  if (local_40 < (ulong)uVar3 + 2) {
                    /* WARNING: Subroutine does not return */
    luaL_errorL(param_1,"buffer access out of bounds");
  }
  *(undefined2 *)(lVar4 + (int)uVar3) = uVar2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0062024c  FUN_0062024c =====

undefined8 FUN_0062024c(lua_State *param_1)

{
  long lVar1;
  undefined2 uVar2;
  uint uVar3;
  long lVar4;
  ulong local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  lVar4 = luaL_checkbuffer(param_1,1,&local_40);
  uVar3 = luaL_checkinteger(param_1,2);
  uVar2 = luaL_checkunsigned(param_1,3);
  if (local_40 < (ulong)uVar3 + 2) {
                    /* WARNING: Subroutine does not return */
    luaL_errorL(param_1,"buffer access out of bounds");
  }
  *(undefined2 *)(lVar4 + (int)uVar3) = uVar2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006202f4  FUN_006202f4 =====

undefined8 FUN_006202f4(lua_State *param_1)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  ulong local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  lVar4 = luaL_checkbuffer(param_1,1,&local_40);
  uVar2 = luaL_checkinteger(param_1,2);
  uVar3 = luaL_checkunsigned(param_1,3);
  if (local_40 < (ulong)uVar2 + 4) {
                    /* WARNING: Subroutine does not return */
    luaL_errorL(param_1,"buffer access out of bounds");
  }
  *(undefined4 *)(lVar4 + (int)uVar2) = uVar3;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0062039c  FUN_0062039c =====

undefined8 FUN_0062039c(lua_State *param_1)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  ulong local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  lVar4 = luaL_checkbuffer(param_1,1,&local_40);
  uVar2 = luaL_checkinteger(param_1,2);
  uVar3 = luaL_checkunsigned(param_1,3);
  if (local_40 < (ulong)uVar2 + 4) {
                    /* WARNING: Subroutine does not return */
    luaL_errorL(param_1,"buffer access out of bounds");
  }
  *(undefined4 *)(lVar4 + (int)uVar2) = uVar3;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00620444  FUN_00620444 =====

undefined8 FUN_00620444(lua_State *param_1)

{
  long lVar1;
  double dVar2;
  uint uVar3;
  long lVar4;
  ulong local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  lVar4 = luaL_checkbuffer(param_1,1,&local_40);
  uVar3 = luaL_checkinteger(param_1,2);
  dVar2 = (double)luaL_checknumber(param_1,3);
  if (local_40 < (ulong)uVar3 + 4) {
                    /* WARNING: Subroutine does not return */
    luaL_errorL(param_1,"buffer access out of bounds");
  }
  *(float *)(lVar4 + (int)uVar3) = (float)dVar2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006204f0  FUN_006204f0 =====

undefined8 FUN_006204f0(lua_State *param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  lVar3 = luaL_checkbuffer(param_1,1,&local_40);
  uVar2 = luaL_checkinteger(param_1,2);
  uVar4 = luaL_checknumber(param_1,3);
  if (local_40 < (ulong)uVar2 + 8) {
                    /* WARNING: Subroutine does not return */
    luaL_errorL(param_1,"buffer access out of bounds");
  }
  *(undefined8 *)(lVar3 + (int)uVar2) = uVar4;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00620598  FUN_00620598 =====

undefined8 FUN_00620598(lua_State *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  lVar4 = luaL_checkbuffer(param_1,1,&local_40);
  uVar2 = luaL_checkinteger(param_1,2);
  uVar3 = luaL_checkinteger(param_1,3);
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    luaL_argerrorL(param_1,3,"size");
  }
  if ((ulong)uVar3 + (ulong)uVar2 <= local_40) {
    lua_pushlstring(param_1,(char *)(lVar4 + (int)uVar2),(ulong)uVar3);
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  luaL_errorL(param_1,"buffer access out of bounds");
}


// ===== 00620660  FUN_00620660 =====

undefined8 FUN_00620660(lua_State *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  void *__src;
  char *pcVar5;
  ulong uVar6;
  ulong local_58;
  ulong local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_50 = 0;
  lVar4 = luaL_checkbuffer(param_1,1,&local_50);
  uVar3 = luaL_checkinteger(param_1,2);
  local_58 = 0;
  __src = (void *)luaL_checklstring(param_1,3,&local_58);
  uVar6 = local_58 & 0xffffffff;
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x30);
  if (((puVar1 < *(undefined8 **)(param_1 + 8)) && (puVar1 != &DAT_00285948)) &&
     (0 < *(int *)(*(long *)(param_1 + 0x10) + 0x3c))) {
    uVar6 = luaL_checkinteger(param_1,4);
    uVar6 = uVar6 & 0xffffffff;
  }
  if (-1 < (int)uVar6) {
    if (local_58 < uVar6) {
      pcVar5 = "string length overflow";
    }
    else {
      if (uVar6 + uVar3 <= local_50) {
        memcpy((void *)(lVar4 + (int)uVar3),__src,uVar6);
        if (*(long *)(lVar2 + 0x28) == local_48) {
          return 0;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      pcVar5 = "buffer access out of bounds";
    }
                    /* WARNING: Subroutine does not return */
    luaL_errorL(param_1,pcVar5);
  }
                    /* WARNING: Subroutine does not return */
  luaL_argerrorL(param_1,4,"count");
}


// ===== 00620794  FUN_00620794 =====

undefined8 FUN_00620794(lua_State *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0;
  luaL_checkbuffer(param_1,1,&local_30);
  puVar2 = *(undefined8 **)(param_1 + 8);
  uVar3 = NEON_ucvtf(local_30 & 0xffffffff);
  *(undefined4 *)((long)puVar2 + 0xc) = 3;
  *puVar2 = uVar3;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00620810  FUN_00620810 =====

undefined8 FUN_00620810(lua_State *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong __n;
  long lVar7;
  undefined8 *puVar8;
  ulong local_68;
  ulong local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_60 = 0;
  lVar5 = luaL_checkbuffer(param_1,1,&local_60);
  uVar2 = luaL_checkinteger(param_1,2);
  local_68 = 0;
  lVar6 = luaL_checkbuffer(param_1,3,&local_68);
  puVar8 = *(undefined8 **)(param_1 + 8);
  lVar7 = *(long *)(param_1 + 0x10);
  uVar3 = 0;
  if (((undefined8 *)(lVar7 + 0x30) < puVar8) && ((undefined8 *)(lVar7 + 0x30) != &DAT_00285948)) {
    if (*(int *)(lVar7 + 0x3c) < 1) {
      uVar3 = 0;
    }
    else {
      uVar3 = luaL_checkinteger(param_1,4);
      puVar8 = *(undefined8 **)(param_1 + 8);
      lVar7 = *(long *)(param_1 + 0x10);
    }
  }
  uVar4 = (int)local_68 - uVar3;
  if ((((undefined8 *)(lVar7 + 0x40) < puVar8) && ((undefined8 *)(lVar7 + 0x40) != &DAT_00285948))
     && (0 < *(int *)(lVar7 + 0x4c))) {
    uVar4 = luaL_checkinteger(param_1,5);
  }
  if (((-1 < (int)uVar4) && (__n = (ulong)uVar4, __n + uVar3 <= local_68)) &&
     (__n + uVar2 <= local_60)) {
    memmove((void *)(lVar5 + (int)uVar2),(void *)(lVar6 + (int)uVar3),__n);
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  luaL_errorL(param_1,"buffer access out of bounds");
}


// ===== 00620970  FUN_00620970 =====

undefined8 FUN_00620970(lua_State *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  int __c;
  uint uVar4;
  long lVar5;
  ulong local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_50 = 0;
  lVar5 = luaL_checkbuffer(param_1,1,&local_50);
  uVar3 = luaL_checkinteger(param_1,2);
  __c = luaL_checkunsigned(param_1,3);
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x30);
  uVar4 = (int)local_50 - uVar3;
  if (((puVar1 < *(undefined8 **)(param_1 + 8)) && (puVar1 != &DAT_00285948)) &&
     (0 < *(int *)(*(long *)(param_1 + 0x10) + 0x3c))) {
    uVar4 = luaL_checkinteger(param_1,4);
  }
  if ((-1 < (int)uVar4) && ((ulong)uVar4 + (ulong)uVar3 <= local_50)) {
    memset((void *)(lVar5 + (int)uVar3),__c,(ulong)uVar4);
    if (*(long *)(lVar2 + 0x28) == local_48) {
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  luaL_errorL(param_1,"buffer access out of bounds");
}


// ===== 00620a70  FUN_00620a70 =====

undefined8 FUN_00620a70(lua_State *param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  double *pdVar5;
  ulong uVar6;
  double dVar7;
  ulong local_48;
  ulong local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  lVar3 = luaL_checkbuffer(param_1,1,&local_40);
  dVar7 = (double)luaL_checknumber(param_1,2);
  uVar6 = (ulong)dVar7;
  uVar2 = luaL_checkinteger(param_1,3);
  if (-1 < (long)uVar6) {
    if (0x20 < uVar2) {
      pcVar4 = "bit count is out of range of [0; 32]";
      goto LAB_00620b78;
    }
    if (uVar6 + uVar2 <= local_40 * 8) {
      local_48 = 0;
      memcpy(&local_48,(void *)(lVar3 + (uVar6 >> 3 & 0xffffffff)),
             (ulong)(uint)((int)(uVar6 + uVar2 + 7 >> 3) - (int)(uVar6 >> 3)));
      pdVar5 = *(double **)(param_1 + 8);
      *(undefined4 *)((long)pdVar5 + 0xc) = 3;
      *pdVar5 = (double)((uint)(local_48 >> (uVar6 & 7)) &
                        ((uint)(-1L << ((ulong)uVar2 & 0x3f)) ^ 0xffffffff));
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  pcVar4 = "buffer access out of bounds";
LAB_00620b78:
                    /* WARNING: Subroutine does not return */
  luaL_errorL(param_1,pcVar4);
}


// ===== 00620b84  FUN_00620b84 =====

undefined8 FUN_00620b84(lua_State *param_1)

{
  void *__src;
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  ulong uVar6;
  ulong uVar7;
  double dVar8;
  ulong local_58;
  ulong local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = 0;
  lVar2 = luaL_checkbuffer(param_1,1,&local_50);
  dVar8 = (double)luaL_checknumber(param_1,2);
  uVar7 = (ulong)dVar8;
  uVar3 = luaL_checkinteger(param_1,3);
  uVar4 = luaL_checkunsigned(param_1,4);
  if (-1 < (long)uVar7) {
    if (0x20 < (uint)uVar3) {
      pcVar5 = "bit count is out of range of [0; 32]";
      goto LAB_00620cb8;
    }
    uVar6 = uVar7 + (uVar3 & 0xffffffff);
    if (uVar6 <= local_50 * 8) {
      __src = (void *)(lVar2 + (uVar7 >> 3 & 0xffffffff));
      local_58 = 0;
      uVar6 = (ulong)(uint)((int)(uVar6 + 7 >> 3) - (int)(uVar7 >> 3));
      memcpy(&local_58,__src,uVar6);
      uVar3 = -1L << (uVar3 & 0x3f);
      local_58 = local_58 & (~uVar3 << (uVar7 & 7) ^ 0xffffffffffffffff) |
                 (uVar4 & 0xffffffff & (uVar3 ^ 0xffffffffffffffff)) << (uVar7 & 7);
      memcpy(__src,&local_58,uVar6);
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  pcVar5 = "buffer access out of bounds";
LAB_00620cb8:
                    /* WARNING: Subroutine does not return */
  luaL_errorL(param_1,pcVar5);
}


// ===== 00620cc4  FUN_00620cc4 =====

undefined8 FUN_00620cc4(lua_State *param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  lVar3 = luaL_checkbuffer(param_1,1,&local_40);
  uVar2 = luaL_checkinteger(param_1,2);
  if (local_40 < (ulong)uVar2 + 8) {
                    /* WARNING: Subroutine does not return */
    luaL_errorL(param_1,"buffer access out of bounds");
  }
  puVar4 = *(undefined8 **)(param_1 + 8);
  *puVar4 = *(undefined8 *)(lVar3 + (int)uVar2);
  lVar3 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)puVar4 + 0xc) = 4;
  *(long *)(param_1 + 8) = lVar3 + 0x10;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00620d78  FUN_00620d78 =====

undefined8 FUN_00620d78(lua_State *param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  lVar3 = luaL_checkbuffer(param_1,1,&local_40);
  uVar2 = luaL_checkinteger(param_1,2);
  uVar4 = luaL_checkinteger64(param_1,3);
  if (local_40 < (ulong)uVar2 + 8) {
                    /* WARNING: Subroutine does not return */
    luaL_errorL(param_1,"buffer access out of bounds");
  }
  *(undefined8 *)(lVar3 + (int)uVar2) = uVar4;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00620e20  lua_getargument =====

/* lua_getargument(lua_State*, int, int) */

undefined1 lua_getargument(lua_State *param_1,int param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (((uint)param_2 < (uint)((int)((ulong)(lVar1 - *(long *)(param_1 + 0x40)) >> 3) * -0x33333333))
     && (plVar2 = (long *)(lVar1 + (long)param_2 * -0x28),
        (*(byte *)((long)plVar2 + 0x24) >> 2 & 1) == 0)) {
    plVar3 = (long *)(lVar1 + (long)param_2 * -0x28 + 8);
    plVar4 = (long *)*plVar3;
    if ((*(int *)((long)plVar4 + 0xc) == 8) && (*(char *)(*plVar4 + 3) == '\0')) {
      if (param_3 < 1) {
        return 0;
      }
      lVar1 = *(long *)(*plVar4 + 0x20);
      if (lVar1 == 0) {
        return 0;
      }
      if ((uint)*(byte *)(lVar1 + 4) < (uint)param_3) {
        if (*(char *)(lVar1 + 5) == '\0') {
          return 0;
        }
        if (*plVar2 - (long)plVar4 >> 4 <= (long)(ulong)(uint)param_3) {
          return 0;
        }
        if (((byte)param_1[1] >> 2 & 1) != 0) {
          param_1[1] = (lua_State)((byte)param_1[1] & 0xfb);
          *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
          plVar4 = (long *)*plVar3;
          *(lua_State **)(*(long *)(param_1 + 0x18) + 0x30) = param_1;
        }
        plVar4 = plVar4 + (ulong)(uint)param_3 * 2;
      }
      else {
        if (((byte)param_1[1] >> 2 & 1) != 0) {
          param_1[1] = (lua_State)((byte)param_1[1] & 0xfb);
          *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
          *(lua_State **)(*(long *)(param_1 + 0x18) + 0x30) = param_1;
        }
        plVar4 = (long *)(*plVar2 + (ulong)(uint)param_3 * 0x10 + -0x10);
      }
      plVar2 = *(long **)(param_1 + 8);
      lVar1 = *plVar4;
      plVar2[1] = plVar4[1];
      *plVar2 = lVar1;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
      return 1;
    }
  }
  return 0;
}


// ===== 00620f44  lua_getlocal =====

/* lua_getlocal(lua_State*, int, int) */

long * lua_getlocal(lua_State *param_1,int param_2,int param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  lVar4 = *(long *)(param_1 + 0x20);
  if ((uint)param_2 < (uint)((int)((ulong)(lVar4 - *(long *)(param_1 + 0x40)) >> 3) * -0x33333333))
  {
    plVar3 = (long *)0x0;
    plVar1 = (long *)(lVar4 + (long)param_2 * -0x28);
    if ((*(byte *)((long)plVar1 + 0x24) >> 2 & 1) == 0) {
      plVar3 = *(long **)(lVar4 + (long)param_2 * -0x28 + 8);
      if ((*(int *)((long)plVar3 + 0xc) == 8) && (lVar6 = *plVar3, *(char *)(lVar6 + 3) == '\0')) {
        plVar3 = *(long **)(lVar6 + 0x20);
        if (plVar3 != (long *)0x0) {
          uVar5 = *(ulong *)(lVar4 + (long)param_2 * -0x28 + 0x18);
          if ((uVar5 != 0) && (uVar5 = uVar5 - plVar3[2], uVar5 != 0)) {
            uVar5 = (ulong)((int)(uVar5 >> 2) - 1);
          }
          plVar3 = (long *)FUN_006234cc(plVar3,param_3,uVar5 & 0xffffffff);
          if (plVar3 != (long *)0x0) {
            if (((byte)param_1[1] >> 2 & 1) != 0) {
              param_1[1] = (lua_State)((byte)param_1[1] & 0xfb);
              *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
              *(lua_State **)(*(long *)(param_1 + 0x18) + 0x30) = param_1;
            }
            puVar7 = *(undefined8 **)(param_1 + 8);
            puVar2 = (undefined8 *)(*plVar1 + (ulong)*(byte *)(plVar3 + 2) * 0x10);
            uVar8 = *puVar2;
            puVar7[1] = puVar2[1];
            *puVar7 = uVar8;
            plVar3 = (long *)(*plVar3 + 0x18);
            *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
          }
        }
      }
      else {
        plVar3 = (long *)0x0;
      }
    }
    return plVar3;
  }
  return (long *)0x0;
}


// ===== 0062105c  lua_setlocal =====

/* lua_setlocal(lua_State*, int, int) */

long lua_setlocal(lua_State *param_1,int param_2,int param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar3 = *(long *)(param_1 + 0x20);
  if ((uint)((int)((ulong)(lVar3 - *(long *)(param_1 + 0x40)) >> 3) * -0x33333333) <= (uint)param_2)
  {
    return 0;
  }
  plVar1 = (long *)(lVar3 + (long)param_2 * -0x28);
  if ((*(byte *)((long)plVar1 + 0x24) >> 2 & 1) != 0) {
    return 0;
  }
  plVar5 = *(long **)(lVar3 + (long)param_2 * -0x28 + 8);
  if (((*(int *)((long)plVar5 + 0xc) == 8) && (lVar6 = *plVar5, *(char *)(lVar6 + 3) == '\0')) &&
     (lVar6 = *(long *)(lVar6 + 0x20), lVar6 != 0)) {
    uVar4 = *(ulong *)(lVar3 + (long)param_2 * -0x28 + 0x18);
    if ((uVar4 != 0) && (uVar4 = uVar4 - *(long *)(lVar6 + 0x10), uVar4 != 0)) {
      uVar4 = (ulong)((int)(uVar4 >> 2) - 1);
    }
    plVar5 = (long *)FUN_006234cc(lVar6,param_3,uVar4 & 0xffffffff);
    if (plVar5 != (long *)0x0) {
      uVar7 = *(undefined8 *)(*(long *)(param_1 + 8) + -0x10);
      puVar2 = (undefined8 *)(*plVar1 + (ulong)*(byte *)(plVar5 + 2) * 0x10);
      puVar2[1] = *(undefined8 *)(*(long *)(param_1 + 8) + -8);
      *puVar2 = uVar7;
      lVar6 = *(long *)(param_1 + 8);
      lVar3 = *plVar5 + 0x18;
      goto LAB_006210e0;
    }
  }
  lVar6 = *(long *)(param_1 + 8);
  lVar3 = 0;
LAB_006210e0:
  *(long *)(param_1 + 8) = lVar6 + -0x10;
  return lVar3;
}


// ===== 0062115c  lua_stackdepth =====

/* lua_stackdepth(lua_State*) */

int lua_stackdepth(lua_State *param_1)

{
  return (int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x40)) >> 3) * -0x33333333;
}


// ===== 0062117c  lua_getinfo =====

/* lua_getinfo(lua_State*, int, char const*, lua_Debug*) */

undefined8 lua_getinfo(lua_State *param_1,int param_2,char *param_3,lua_Debug *param_4)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  if (param_2 < 0) {
    lVar11 = *(long *)(param_1 + 8);
    if (lVar11 - *(long *)(param_1 + 0x10) >> 4 < (long)(ulong)(uint)-param_2) {
      return 0;
    }
    if (*(int *)(lVar11 + (long)param_2 * 0x10 + 0xc) != 8) {
      return 0;
    }
    lVar10 = 0;
    plVar6 = (long *)(lVar11 + (long)param_2 * 0x10);
  }
  else {
    if ((uint)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x40)) >> 3) *
              -0x33333333) <= (uint)param_2) {
      return 0;
    }
    lVar10 = *(long *)(param_1 + 0x20) + (ulong)(uint)param_2 * -0x28;
    plVar6 = *(long **)(lVar10 + 8);
  }
  lVar11 = *plVar6;
  if (lVar11 == 0) {
    return 0;
  }
  lVar8 = 0;
  do {
    bVar2 = *param_3;
    lVar7 = lVar8;
    if (bVar2 < 0x6e) {
      if (bVar2 < 0x66) {
        if (bVar2 == 0x61) {
          if (*(char *)(lVar11 + 3) == '\0') {
            param_4[0x2a] = *(lua_Debug *)(*(long *)(lVar11 + 0x20) + 5);
            param_4[0x29] = *(lua_Debug *)(*(long *)(lVar11 + 0x20) + 4);
          }
          else {
            *(undefined2 *)(param_4 + 0x29) = 0x100;
          }
        }
        else if (bVar2 == 0) {
          if (lVar8 != 0) {
            if (((byte)param_1[1] >> 2 & 1) != 0) {
              param_1[1] = (lua_State)((byte)param_1[1] & 0xfb);
              *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
              *(lua_State **)(*(long *)(param_1 + 0x18) + 0x30) = param_1;
            }
            plVar6 = *(long **)(param_1 + 8);
            *plVar6 = lVar8;
            lVar10 = *(long *)(param_1 + 0x28);
            lVar11 = *(long *)(param_1 + 8);
            *(undefined4 *)((long)plVar6 + 0xc) = 8;
            if (lVar10 - lVar11 < 0x11) {
              iVar1 = *(int *)(param_1 + 0x48);
              iVar3 = iVar1 << 1;
              if (iVar1 < 1) {
                iVar3 = iVar1 + 1;
              }
              FUN_006222f4(param_1,iVar3,0);
              lVar11 = *(long *)(param_1 + 8);
            }
            *(long *)(param_1 + 8) = lVar11 + 0x10;
          }
          return 1;
        }
      }
      else {
        lVar7 = lVar11;
        if ((bVar2 != 0x66) && (lVar7 = lVar8, bVar2 == 0x6c)) {
          if (lVar10 == 0) {
            if (*(char *)(lVar11 + 3) == '\0') {
              uVar4 = *(undefined4 *)(*(long *)(lVar11 + 0x20) + 0xa4);
            }
            else {
              uVar4 = 0xffffffff;
            }
            *(undefined4 *)(param_4 + 0x24) = uVar4;
          }
          else {
            if ((*(int *)((long)*(long **)(lVar10 + 8) + 0xc) == 8) &&
               (lVar7 = **(long **)(lVar10 + 8), *(char *)(lVar7 + 3) == '\0')) {
              uVar4 = FUN_00621478(*(undefined8 *)(lVar7 + 0x20),*(undefined8 *)(lVar10 + 0x18));
            }
            else {
              uVar4 = 0xffffffff;
            }
            *(undefined4 *)(param_4 + 0x24) = uVar4;
            lVar7 = lVar8;
          }
        }
      }
    }
    else if (bVar2 == 0x6e) {
      if (lVar10 == 0) {
        if (*(char *)(lVar11 + 3) == '\0') {
          lVar8 = *(long *)(lVar11 + 0x20);
          goto LAB_006213b0;
        }
        lVar8 = *(long *)(lVar11 + 0x30);
        if (lVar8 == 0) goto LAB_006213c0;
      }
      else {
        lVar8 = **(long **)(lVar10 + 8);
        if (*(char *)(lVar8 + 3) == '\0') {
          lVar8 = *(long *)(lVar8 + 0x20);
LAB_006213b0:
          if (*(long *)(lVar8 + 0x60) != 0) {
            lVar8 = *(long *)(lVar8 + 0x60) + 0x18;
            goto LAB_006213c4;
          }
        }
        else {
          lVar8 = *(long *)(lVar8 + 0x30);
          if (lVar8 != 0) goto LAB_006213c4;
        }
LAB_006213c0:
        lVar8 = 0;
      }
LAB_006213c4:
      *(long *)param_4 = lVar8;
    }
    else if (bVar2 == 0x75) {
      param_4[0x28] = *(lua_Debug *)(lVar11 + 4);
    }
    else if (bVar2 == 0x73) {
      if (*(char *)(lVar11 + 3) == '\0') {
        lVar8 = *(long *)(lVar11 + 0x20);
        *(undefined **)(param_4 + 8) = &DAT_0024bdda;
        lVar9 = *(long *)(lVar8 + 0x58);
        lVar8 = lVar9 + 0x18;
        uVar4 = *(undefined4 *)(lVar9 + 0x14);
        *(long *)(param_4 + 0x10) = lVar8;
        *(undefined4 *)(param_4 + 0x20) = *(undefined4 *)(*(long *)(lVar11 + 0x20) + 0xa4);
        uVar5 = FUN_00629c60(param_4 + 0x38,lVar8,uVar4);
        *(undefined8 *)(param_4 + 0x18) = uVar5;
      }
      else {
        *(undefined4 *)(param_4 + 0x20) = 0xffffffff;
        *(undefined **)(param_4 + 8) = &DAT_00249bdf;
        *(undefined **)(param_4 + 0x10) = &DAT_0024d566;
        *(undefined **)(param_4 + 0x18) = &DAT_0024800e;
      }
    }
    param_3 = (char *)((byte *)param_3 + 1);
    lVar8 = lVar7;
  } while( true );
}


// ===== 00621478  FUN_00621478 =====

int FUN_00621478(long param_1,long param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    if (*(long *)(param_1 + 0x10) != param_2) {
      iVar1 = (int)((ulong)(param_2 - *(long *)(param_1 + 0x10)) >> 2) + -1;
    }
  }
  if (*(long *)(param_1 + 0x38) == 0) {
    return 0;
  }
  return *(int *)(*(long *)(param_1 + 0x40) +
                 (long)(iVar1 >> (*(uint *)(param_1 + 0xa0) & 0x1f)) * 4) +
         (uint)*(byte *)(*(long *)(param_1 + 0x38) + (long)iVar1);
}


// ===== 006214c8  FUN_006214c8 =====

void FUN_006214c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00631560();
                    /* WARNING: Subroutine does not return */
  FUN_006214f8(param_1,"attempt to %s a %s value",param_3,uVar1);
}


// ===== 006214f8  FUN_006214f8 =====

void FUN_006214f8(lua_State *param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined1 *local_260;
  undefined1 **ppuStack_258;
  undefined8 *puStack_250;
  undefined8 uStack_248;
  char acStack_240 [512];
  
  puStack_250 = &local_290;
  ppuStack_258 = &local_260;
  uStack_248 = 0xffffff80ffffffd0;
  local_290 = param_3;
  uStack_288 = param_4;
  local_280 = param_5;
  uStack_278 = param_6;
  local_270 = param_7;
  uStack_268 = param_8;
  local_260 = (undefined1 *)register0x00000008;
  vsnprintf(acStack_240,0x200,param_2,&local_260);
  lua_rawcheckstack(param_1,1);
  FUN_00621594(param_1,acStack_240);
                    /* WARNING: Subroutine does not return */
  FUN_006222c0(param_1,2);
}


// ===== 00621594  FUN_00621594 =====

void FUN_00621594(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = *(long **)(*(long *)(param_1 + 0x20) + 8);
  if ((*(int *)((long)plVar2 + 0xc) == 8) && (lVar3 = *plVar2, *(char *)(lVar3 + 3) == '\0')) {
    lVar3 = *(long *)(lVar3 + 0x20);
    lVar4 = *(long *)(lVar3 + 0x58);
    uVar1 = FUN_00621478(lVar3,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
    FUN_00629bcc(param_1,"%s:%d: %s",lVar4 + 0x18,uVar1,param_2);
    return;
  }
  FUN_00629bcc(param_1,":: %s",param_2);
  return;
}


// ===== 00621624  FUN_00621624 =====

void FUN_00621624(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00631560();
                    /* WARNING: Subroutine does not return */
  FUN_006214f8(param_1,"invalid \'for\' %s (number expected, got %s)",param_3,uVar1);
}


// ===== 00621654  FUN_00621654 =====

void FUN_00621654(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00631560();
  uVar2 = FUN_00631560(param_1,param_3);
                    /* WARNING: Subroutine does not return */
  FUN_006214f8(param_1,"attempt to concatenate %s with %s",uVar1,uVar2);
}


// ===== 00621698  FUN_00621698 =====

void FUN_00621698(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_00631410();
  lVar2 = FUN_00631410(param_1,param_3);
  if (lVar1 == lVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_006214f8(param_1,"attempt to perform arithmetic (%s) on %s",
                 (&PTR_s___index_0067add8)[param_4 & 0xffffffff] + 2,lVar1 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_006214f8(param_1,"attempt to perform arithmetic (%s) on %s and %s",
               (&PTR_s___index_0067add8)[param_4 & 0xffffffff] + 2,lVar1 + 0x18,lVar2 + 0x18);
}


// ===== 00621710  FUN_00621710 =====

void FUN_00621710(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_00631560();
  uVar4 = FUN_00631560(param_1,param_3);
  puVar1 = &UNK_0024c409;
  if (param_4 != 0x11) {
    puVar1 = &DAT_002416d0;
  }
  puVar2 = &UNK_00245b9f;
  if (param_4 != 0x10) {
    puVar2 = puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_006214f8(param_1,"attempt to compare %s %s %s",uVar3,puVar2,uVar4);
}


// ===== 00621780  FUN_00621780 =====

void FUN_00621780(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  
  lVar1 = FUN_00631410();
  lVar2 = FUN_00631410(param_1,param_3);
  if (((*(int *)((long)param_3 + 0xc) == 6) && (lVar4 = *param_3, lVar4 != 0)) &&
     (*(uint *)(lVar4 + 0x14) < 0x41)) {
    pcVar3 = "attempt to index %s with \'%s\'";
    lVar2 = lVar4;
  }
  else {
    pcVar3 = "attempt to index %s with %s";
  }
                    /* WARNING: Subroutine does not return */
  FUN_006214f8(param_1,pcVar3,lVar1 + 0x18,lVar2 + 0x18);
}


// ===== 006217f8  FUN_006217f8 =====

void FUN_006217f8(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)((long)param_3 + 0xc);
  lVar2 = FUN_00631410();
  if (iVar1 == 6) {
                    /* WARNING: Subroutine does not return */
    FUN_006214f8(param_1,"this %s does not have a key named \'%s\'",lVar2 + 0x18,*param_3 + 0x18);
  }
  uVar3 = FUN_00631560(param_1,param_3);
                    /* WARNING: Subroutine does not return */
  FUN_006214f8(param_1,"cannot index %s with a %s",lVar2 + 0x18,uVar3);
}


// ===== 00621864  FUN_00621864 =====

void FUN_00621864(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00631560();
                    /* WARNING: Subroutine does not return */
  FUN_006214f8(param_1,"attempt to call missing method \'%s\' of %s",param_3 + 0x18,uVar1);
}


// ===== 00621894  FUN_00621894 =====

void FUN_00621894(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_006214f8(param_1,"attempt to modify a readonly table");
}


// ===== 006218a8  FUN_006218a8 =====

void FUN_006218a8(long param_1,long param_2,int param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  
  if ((*(long *)(param_2 + 0x38) != 0) &&
     (((pcVar4 = *(code **)(*(long *)(param_1 + 0x18) + 0x578), pcVar4 != (code *)0x0 ||
       (*(long *)(param_2 + 0x28) == 0)) && (uVar1 = *(uint *)(param_2 + 0x88), 0 < (int)uVar1)))) {
    uVar5 = 0;
    do {
      lVar6 = uVar5 * 4;
      if ((*(char *)(*(long *)(param_2 + 0x10) + lVar6) != 'A') &&
         (*(int *)(*(long *)(param_2 + 0x40) +
                  ((uVar5 & 0xffffffff) >> ((ulong)*(uint *)(param_2 + 0xa0) & 0x3f)) * 4) +
          (uint)*(byte *)(*(long *)(param_2 + 0x38) + uVar5) == param_3)) {
        if (*(long *)(param_2 + 0x68) == 0) {
          uVar2 = FUN_00628ad8(param_1,(ulong)uVar1,*(undefined1 *)(param_2 + 2));
          *(undefined8 *)(param_2 + 0x68) = uVar2;
          if (0 < *(int *)(param_2 + 0x88)) {
            lVar3 = 0;
            do {
              *(char *)(*(long *)(param_2 + 0x68) + lVar3) =
                   (char)*(undefined4 *)(*(long *)(param_2 + 0x10) + lVar3 * 4);
              lVar3 = lVar3 + 1;
            } while (lVar3 < *(int *)(param_2 + 0x88));
          }
        }
        if ((param_4 & 1) == 0) {
          *(undefined1 *)(*(long *)(param_2 + 0x10) + lVar6) =
               *(undefined1 *)(*(long *)(param_2 + 0x68) + uVar5);
        }
        else {
          *(undefined1 *)(*(long *)(param_2 + 0x10) + lVar6) = 1;
          if ((pcVar4 != (code *)0x0) && (*(long *)(param_2 + 0x28) != 0)) {
            (*pcVar4)(param_1,param_2);
          }
        }
        break;
      }
      uVar5 = uVar5 + 1;
    } while (uVar1 != uVar5);
  }
  if (0 < *(int *)(param_2 + 0x8c)) {
    lVar6 = 0;
    do {
      FUN_006218a8(param_1,*(undefined8 *)(*(long *)(param_2 + 0x18) + lVar6 * 8),param_3,
                   param_4 & 1);
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_2 + 0x8c));
  }
  return;
}


// ===== 00621a1c  lua_singlestep =====

/* lua_singlestep(lua_State*, int) */

void lua_singlestep(lua_State *param_1,int param_2)

{
  param_1[6] = (lua_State)(param_2 != 0);
  return;
}


// ===== 00621a2c  lua_breakpoint =====

/* lua_breakpoint(lua_State*, int, int, int) */

int lua_breakpoint(lua_State *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = (long *)FUN_00617fd4(param_1,param_2);
  uVar3 = *(undefined8 *)(*plVar2 + 0x20);
  iVar1 = FUN_00621a98(uVar3,param_3);
  if (iVar1 != -1) {
    FUN_006218a8(param_1,uVar3,iVar1,param_4 != 0);
  }
  return iVar1;
}


// ===== 00621a98  FUN_00621a98 =====

int FUN_00621a98(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  undefined8 *puVar5;
  
  if ((*(long *)(param_1 + 0x38) == 0) || ((int)*(uint *)(param_1 + 0x88) < 1)) {
    iVar2 = -1;
  }
  else {
    uVar3 = 0;
    iVar2 = -1;
    do {
      iVar4 = iVar2;
      if (*(char *)(*(long *)(param_1 + 0x10) + uVar3 * 4) != 'A') {
        iVar1 = *(int *)(*(long *)(param_1 + 0x40) +
                        ((uVar3 & 0xffffffff) >> ((ulong)*(uint *)(param_1 + 0xa0) & 0x3f)) * 4) +
                (uint)*(byte *)(*(long *)(param_1 + 0x38) + uVar3);
        if (iVar1 == param_2) {
          return param_2;
        }
        if ((param_2 < iVar1) && (iVar4 = iVar1, iVar2 <= iVar1 && iVar2 != -1)) {
          iVar4 = iVar2;
        }
      }
      iVar2 = iVar4;
      uVar3 = uVar3 + 1;
    } while (*(uint *)(param_1 + 0x88) != uVar3);
  }
  uVar3 = (ulong)*(uint *)(param_1 + 0x8c);
  if (0 < (int)*(uint *)(param_1 + 0x8c)) {
    puVar5 = *(undefined8 **)(param_1 + 0x18);
    iVar4 = iVar2;
    do {
      iVar2 = FUN_00621a98(*puVar5,param_2);
      if (iVar2 == param_2) {
        return param_2;
      }
      puVar5 = puVar5 + 1;
      if (iVar4 <= iVar2 && iVar4 != -1 || iVar2 <= param_2) {
        iVar2 = iVar4;
      }
      uVar3 = uVar3 - 1;
      iVar4 = iVar2;
    } while (uVar3 != 0);
  }
  return iVar2;
}


// ===== 00621b90  lua_getcoverage =====

/* lua_getcoverage(lua_State*, int, void*, void (*)(void*, char const*, int, int, int const*,
   unsigned long)) */

void lua_getcoverage(lua_State *param_1,int param_2,void *param_3,
                    _func_void_void_ptr_char_ptr_int_int_int_ptr_ulong *param_4)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  plVar3 = (long *)FUN_00617fd4(param_1,param_2);
  uVar5 = *(undefined8 *)(*plVar3 + 0x20);
  iVar2 = FUN_00621c48(uVar5);
  uVar1 = iVar2 + 1;
  if (iVar2 == -1) {
    return;
  }
  uVar6 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
  uVar4 = FUN_00628ad8(param_1,uVar6,0);
  FUN_00621cf0(uVar5,0,uVar4,(long)(int)uVar1,param_3,param_4);
  FUN_00628eb0(param_1,uVar4,uVar6,0);
  return;
}


// ===== 00621c48  FUN_00621c48 =====

int FUN_00621c48(long param_1)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  undefined8 *puVar4;
  
  if ((int)*(uint *)(param_1 + 0x88) < 1) {
    iVar3 = -1;
  }
  else {
    uVar2 = 0;
    iVar3 = -1;
    do {
      if (*(long *)(param_1 + 0x38) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(long *)(param_1 + 0x40) +
                        ((uVar2 & 0xffffffff) >> ((ulong)*(uint *)(param_1 + 0xa0) & 0x3f)) * 4) +
                (uint)*(byte *)(*(long *)(param_1 + 0x38) + uVar2);
      }
      uVar2 = uVar2 + 1;
      if (iVar3 <= iVar1) {
        iVar3 = iVar1;
      }
    } while (*(uint *)(param_1 + 0x88) != uVar2);
  }
  uVar2 = (ulong)*(uint *)(param_1 + 0x8c);
  if (0 < (int)*(uint *)(param_1 + 0x8c)) {
    puVar4 = *(undefined8 **)(param_1 + 0x18);
    do {
      iVar1 = FUN_00621c48(*puVar4);
      if (iVar3 <= iVar1) {
        iVar3 = iVar1;
      }
      uVar2 = uVar2 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}


// ===== 00621cf0  FUN_00621cf0 =====

void FUN_00621cf0(long param_1,int param_2,void *param_3,long param_4,undefined8 param_5,
                 code *param_6)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  
  memset(param_3,0xff,param_4 << 2);
  iVar5 = *(int *)(param_1 + 0x88);
  if (0 < iVar5) {
    lVar3 = *(long *)(param_1 + 0x10);
    uVar4 = 0;
    do {
      uVar1 = *(uint *)(lVar3 + uVar4 * 4);
      if ((uVar1 & 0xff) == 0x45) {
        uVar6 = *(ulong *)(param_1 + 0x38);
        if (uVar6 != 0) {
          uVar6 = (ulong)(*(int *)(*(long *)(param_1 + 0x40) +
                                  ((uVar4 & 0xffffffff) >> ((ulong)*(uint *)(param_1 + 0xa0) & 0x3f)
                                  ) * 4) + (uint)*(byte *)(uVar6 + uVar4));
        }
        iVar2 = *(int *)((long)param_3 + (long)(int)uVar6 * 4);
        iVar5 = (int)uVar1 >> 8;
        if (iVar2 <= iVar5) {
          iVar2 = iVar5;
        }
        *(int *)((long)param_3 + (long)(int)uVar6 * 4) = iVar2;
        iVar5 = *(int *)(param_1 + 0x88);
      }
      uVar4 = uVar4 + 1;
    } while ((long)uVar4 < (long)iVar5);
  }
  lVar3 = 0;
  if (*(long *)(param_1 + 0x60) != 0) {
    lVar3 = *(long *)(param_1 + 0x60) + 0x18;
  }
  (*param_6)(param_5,lVar3,*(undefined4 *)(param_1 + 0xa4),param_2,param_3,param_4);
  if (0 < *(int *)(param_1 + 0x8c)) {
    lVar3 = 0;
    do {
      FUN_00621cf0(*(undefined8 *)(*(long *)(param_1 + 0x18) + lVar3 * 8),param_2 + 1,param_3,
                   param_4,param_5,param_6);
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x8c));
  }
  return;
}


// ===== 00621e1c  lua_getcounters =====

/* lua_getcounters(lua_State*, int, void*, void (*)(void*, char const*, int), void (*)(void*, int,
   int, unsigned long)) */

void lua_getcounters(lua_State *param_1,int param_2,void *param_3,
                    _func_void_void_ptr_char_ptr_int *param_4,
                    _func_void_void_ptr_int_int_ulong *param_5)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_00617fd4(param_1,param_2);
  if (*(long *)(*(long *)(param_1 + 0x18) + 0x590) != 0) {
    FUN_00621e84(param_1,*(undefined8 *)(*plVar1 + 0x20),param_3,param_4,param_5);
    return;
  }
  return;
}


// ===== 00621e84  FUN_00621e84 =====

void FUN_00621e84(long param_1,long param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  undefined4 *puVar2;
  int iVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((*(long *)(param_2 + 0x28) != 0) &&
     (pcVar4 = *(code **)(*(long *)(param_1 + 0x18) + 0x590), pcVar4 != (code *)0x0)) {
    local_60 = 0;
    puVar2 = (undefined4 *)(*pcVar4)(param_1,param_2,&local_60);
    if ((puVar2 != (undefined4 *)0x0) && (local_60 != 0)) {
      lVar5 = 0;
      if (*(long *)(param_2 + 0x60) != 0) {
        lVar5 = *(long *)(param_2 + 0x60) + 0x18;
      }
      (*param_4)(param_3,lVar5,*(undefined4 *)(param_2 + 0xa4));
      if (local_60 != 0) {
        uVar6 = 0;
        do {
          iVar3 = puVar2[1];
          if (iVar3 == -1) {
            iVar3 = *(int *)(param_2 + 0xa4);
          }
          else if (*(long *)(param_2 + 0x38) == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(*(long *)(param_2 + 0x40) +
                            (long)(iVar3 >> (*(uint *)(param_2 + 0xa0) & 0x1f)) * 4) +
                    (uint)*(byte *)(*(long *)(param_2 + 0x38) + (long)iVar3);
          }
          (*param_5)(param_3,*puVar2,iVar3,*(undefined8 *)(puVar2 + 2));
          uVar6 = uVar6 + 1;
          puVar2 = puVar2 + 4;
        } while (uVar6 < local_60);
      }
    }
  }
  if (0 < *(int *)(param_2 + 0x8c)) {
    lVar5 = 0;
    do {
      FUN_00621e84(param_1,*(undefined8 *)(*(long *)(param_2 + 0x18) + lVar5 * 8),param_3,param_4,
                   param_5);
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_2 + 0x8c));
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00621fec  lua_debugtrace =====

/* lua_debugtrace(lua_State*) */

undefined1 * lua_debugtrace(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  size_t sVar5;
  size_t sVar6;
  int iVar7;
  long lVar8;
  char acStack_1c8 [32];
  char *local_1a8 [2];
  long local_198;
  char *local_190;
  int local_184;
  long local_70;
  
  lVar2 = tpidr_el0;
  lVar8 = 0;
  iVar7 = 0;
  local_70 = *(long *)(lVar2 + 0x28);
  iVar1 = (int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x40)) >> 3) * -0x33333333;
  while (iVar4 = lua_getinfo(param_1,iVar7,"sln",(lua_Debug *)local_1a8), pcVar3 = local_190,
        iVar4 != 0) {
    if (local_198 != 0) {
      sVar5 = strlen(local_190);
      sVar6 = 0xfff - lVar8;
      if (sVar5 + lVar8 < 0x1000) {
        sVar6 = sVar5;
      }
      memcpy(&DAT_00687409 + lVar8,pcVar3,sVar6);
      lVar8 = sVar6 + lVar8;
    }
    if (0 < local_184) {
      snprintf(acStack_1c8,0x20,":%d");
      sVar5 = strlen(acStack_1c8);
      sVar6 = 0xfff - lVar8;
      if (sVar5 + lVar8 < 0x1000) {
        sVar6 = sVar5;
      }
      memcpy(&DAT_00687409 + lVar8,acStack_1c8,sVar6);
      lVar8 = sVar6 + lVar8;
    }
    pcVar3 = local_1a8[0];
    if (local_1a8[0] != (char *)0x0) {
      sVar6 = 0xfff - lVar8;
      if (0xffffffffffffefff < lVar8 - 0xff6U) {
        sVar6 = 10;
      }
      memcpy(&DAT_00687409 + lVar8," function ",sVar6);
      lVar8 = sVar6 + lVar8;
      sVar5 = strlen(pcVar3);
      sVar6 = 0xfff - lVar8;
      if (sVar5 + lVar8 < 0x1000) {
        sVar6 = sVar5;
      }
      memcpy(&DAT_00687409 + lVar8,pcVar3,sVar6);
      lVar8 = sVar6 + lVar8;
    }
    sVar6 = 0xfff - lVar8;
    if (0xffffffffffffefff < lVar8 - 0xfffU) {
      sVar6 = 1;
    }
    memcpy(&DAT_00687409 + lVar8,&DAT_0024901f,sVar6);
    lVar8 = sVar6 + lVar8;
    if ((0x14 < iVar1) && (iVar7 == 9)) {
      snprintf(acStack_1c8,0x20,"... (+%d frames)\n",(ulong)(iVar1 - 0x14));
      sVar5 = strlen(acStack_1c8);
      sVar6 = 0xfff - lVar8;
      if (sVar5 + lVar8 < 0x1000) {
        sVar6 = sVar5;
      }
      memcpy(&DAT_00687409 + lVar8,acStack_1c8,sVar6);
      lVar8 = sVar6 + lVar8;
      iVar7 = iVar1 + -0xb;
    }
    iVar7 = iVar7 + 1;
  }
  (&DAT_00687409)[lVar8] = 0;
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return &DAT_00687409;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00622224  FUN_00622224 =====

void FUN_00622224(long param_1,code *param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_158;
  undefined4 local_150;
  __jmp_buf_tag _Stack_148;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_158 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x4d8);
  local_150 = 0;
  *(undefined8 **)(*(long *)(param_1 + 0x18) + 0x4d8) = &local_158;
  iVar2 = _setjmp(&_Stack_148);
  if (iVar2 == 0) {
    (*param_2)(param_1,param_3);
  }
  *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x4d8) = local_158;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_150);
}


// ===== 006222c0  FUN_006222c0 =====

void FUN_006222c0(long param_1,undefined4 param_2)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x4d8);
  if (lVar1 == 0) {
    pcVar2 = *(code **)(*(long *)(param_1 + 0x18) + 0x518);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
    }
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)(lVar1 + 8) = param_2;
                    /* WARNING: Subroutine does not return */
  _longjmp((__jmp_buf_tag *)(lVar1 + 0x10),1);
}


// ===== 006222f4  FUN_006222f4 =====

void FUN_006222f4(long param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  
  if (0x4000000 < param_2) {
    if (param_3 != 0) {
      lVar3 = *(long *)(param_1 + 0x20);
      puVar6 = (undefined8 *)(lVar3 + -0x28);
      uVar9 = *puVar6;
      *(undefined8 **)(param_1 + 0x20) = puVar6;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar3 + -0x18);
      *(undefined8 *)(param_1 + 0x10) = uVar9;
    }
                    /* WARNING: Subroutine does not return */
    FUN_006222c0(param_1,4);
  }
  if (param_2 + 5 < 0 != SCARRY4(param_2,5)) {
                    /* WARNING: Subroutine does not return */
    FUN_00628ac4(param_1);
  }
  lVar10 = *(long *)(param_1 + 0x30);
  uVar1 = param_2 + 5;
  lVar3 = FUN_00629130(param_1,lVar10,(long)*(int *)(param_1 + 0x48) << 4,(ulong)uVar1 << 4,
                       *(undefined1 *)(param_1 + 2));
  iVar2 = *(int *)(param_1 + 0x48);
  *(long *)(param_1 + 0x30) = lVar3;
  if (iVar2 < (int)uVar1) {
    lVar4 = (ulong)uVar1 - (long)iVar2;
    puVar7 = (undefined4 *)(lVar3 + (long)iVar2 * 0x10 + 0xc);
    do {
      lVar4 = lVar4 + -1;
      *puVar7 = 0;
      puVar7 = puVar7 + 4;
    } while (lVar4 != 0);
  }
  *(uint *)(param_1 + 0x48) = uVar1;
  lVar4 = *(long *)(param_1 + 0x60);
  *(long *)(param_1 + 0x28) = lVar3 + (long)param_2 * 0x10;
  *(long *)(param_1 + 8) = lVar3 + (*(long *)(param_1 + 8) - lVar10);
  for (; lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x20)) {
    *(long *)(lVar4 + 8) = lVar3 + (*(long *)(lVar4 + 8) - lVar10);
  }
  plVar8 = *(long **)(param_1 + 0x20);
  for (plVar5 = *(long **)(param_1 + 0x40); plVar5 <= plVar8; plVar5 = plVar5 + 5) {
    plVar5[2] = lVar3 + (plVar5[2] - lVar10);
    *plVar5 = lVar3 + (*plVar5 - lVar10);
    plVar5[1] = lVar3 + (plVar5[1] - lVar10);
  }
  *(long *)(param_1 + 0x10) = lVar3 + (*(long *)(param_1 + 0x10) - lVar10);
  return;
}


// ===== 00622434  FUN_00622434 =====

void FUN_00622434(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  if (-1 < (int)param_2) {
    lVar2 = *(long *)(param_1 + 0x40);
    lVar1 = FUN_00629130(param_1,lVar2,(long)*(int *)(param_1 + 0x4c) * 0x28,(ulong)param_2 * 0x28,
                         *(undefined1 *)(param_1 + 2));
    *(uint *)(param_1 + 0x4c) = param_2;
    *(long *)(param_1 + 0x20) = lVar1 + (*(long *)(param_1 + 0x20) - lVar2);
    *(ulong *)(param_1 + 0x38) = lVar1 + (ulong)param_2 * 0x28 + -0x28;
    *(long *)(param_1 + 0x40) = lVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00628ac4(param_1);
}


// ===== 006224b4  FUN_006224b4 =====

void FUN_006224b4(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x4c);
  if (0x57e3 < iVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_006222c0(param_1,5);
  }
  iVar3 = iVar2 * 2;
  if (19999 < iVar3) {
    iVar3 = 20000;
  }
  iVar1 = 0x57e4;
  if (iVar2 < 20000) {
    iVar1 = iVar3;
  }
  FUN_00622434(param_1,iVar1);
  if (*(int *)(param_1 + 0x4c) < 0x4e21) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 0x28;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_006214f8(param_1,"stack overflow");
}


// ===== 0062253c  FUN_0062253c =====

void FUN_0062253c(long param_1)

{
  if (*(ushort *)(param_1 + 0x50) == 200) {
                    /* WARNING: Subroutine does not return */
    FUN_006214f8(param_1,"C stack overflow");
  }
  if (*(ushort *)(param_1 + 0x50) < 0xe1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_006222c0(param_1,5);
}


// ===== 00622574  FUN_00622574 =====

void FUN_00622574(long param_1,long param_2,int param_3,uint param_4)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  short sVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  long lVar9;
  
  sVar5 = *(short *)(param_1 + 0x50);
  *(short *)(param_1 + 0x50) = sVar5 + 1;
  if (199 < (ushort)(sVar5 + 1U)) {
    FUN_0062253c(param_1);
  }
  lVar6 = *(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x40);
  if (((lVar6 == 0) ||
      (lVar9 = **(long **)(*(long *)(param_1 + 0x20) + 8), *(char *)(lVar9 + 3) == '\0')) ||
     (*(long *)(lVar9 + 0x28) == 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
    *(short *)(param_1 + 0x52) = *(short *)(param_1 + 0x52) + 1;
  }
  lVar9 = param_2 - *(long *)(param_1 + 0x30);
  FUN_0062270c(param_1,param_2,param_3,param_4 & 1);
  cVar4 = *(char *)(param_1 + 3);
  if (*PTR_LuauStacklessPcall_0067db80 == '\0') {
    bVar8 = cVar4 == '\x01' || cVar4 == '\x06';
LAB_00622668:
    if ((bVar7) && (*(short *)(param_1 + 0x52) = *(short *)(param_1 + 0x52) + -1, bVar8)) {
      iVar1 = 0;
      if (param_3 != -1) {
        iVar1 = param_3;
      }
      *(long *)(*(long *)(param_1 + 0x40) + lVar6 + 0x10) =
           *(long *)(param_1 + 0x30) + lVar9 + (long)iVar1 * 0x10;
      goto LAB_006226bc;
    }
  }
  else {
    bVar8 = true;
    if (((cVar4 == '\x01') || (cVar4 == '\x06')) || (cVar4 == '\x7f')) goto LAB_00622668;
    bVar8 = false;
    if (bVar7) {
      *(short *)(param_1 + 0x52) = *(short *)(param_1 + 0x52) + -1;
    }
  }
  if ((param_3 != -1) && (!bVar8)) {
    *(long *)(param_1 + 8) = *(long *)(param_1 + 0x30) + lVar9 + (long)param_3 * 0x10;
  }
LAB_006226bc:
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x18) + 0x40);
  uVar3 = *(ulong *)(*(long *)(param_1 + 0x18) + 0x48);
  *(short *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) + -1;
  if (uVar3 < uVar2) {
    return;
  }
  FUN_006239a4(param_1);
  return;
}


// ===== 0062270c  FUN_0062270c =====

void FUN_0062270c(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_0063d344();
  if (iVar2 == 0) {
    cVar1 = *(char *)(param_1 + 5);
    *(uint *)(*(long *)(param_1 + 0x20) + 0x24) = *(uint *)(*(long *)(param_1 + 0x20) + 0x24) | 1;
    *(undefined1 *)(param_1 + 5) = 1;
    if ((*(byte *)(param_1 + 1) >> 2 & 1) != 0) {
      *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xfb;
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
      *(long *)(*(long *)(param_1 + 0x18) + 0x30) = param_1;
    }
    if ((*PTR_LuauStacklessPcall_0067db80 == '\0') || ((param_4 & 1) == 0)) {
      FUN_00632c7c(param_1);
    }
    else {
      *(undefined1 *)(param_1 + 3) = 0x7f;
    }
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 5) = 0;
    }
  }
  return;
}


// ===== 006227ac  FUN_006227ac =====

void FUN_006227ac(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  short sVar3;
  long lVar4;
  
  sVar3 = *(short *)(param_1 + 0x50);
  *(short *)(param_1 + 0x50) = sVar3 + 1;
  if (199 < (ushort)(sVar3 + 1U)) {
    FUN_0062253c(param_1);
  }
  lVar4 = *(long *)(param_1 + 0x30);
  FUN_0062270c(param_1,param_2,1,0);
  uVar1 = *(ulong *)(*(long *)(param_1 + 0x18) + 0x40);
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x18) + 0x48);
  *(long *)(param_1 + 8) = *(long *)(param_1 + 0x30) + (param_2 - lVar4) + 0x10;
  *(short *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) + -1;
  if (uVar2 < uVar1) {
    return;
  }
  FUN_006239a4(param_1);
  return;
}


// ===== 00622850  FUN_00622850 =====

void FUN_00622850(long param_1,int param_2,undefined8 *param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  
  if (param_2 - 2U < 2) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 8) + -0x10);
    param_3[1] = *(undefined8 *)(*(long *)(param_1 + 8) + -8);
    *param_3 = uVar2;
  }
  else {
    if (param_2 == 5) {
      pcVar1 = "error in error handling";
      uVar2 = 0x17;
    }
    else {
      if (param_2 != 4) goto LAB_006228c4;
      pcVar1 = "not enough memory";
      uVar2 = 0x11;
    }
    uVar2 = FUN_0062b178(param_1,pcVar1,uVar2);
    *param_3 = uVar2;
    *(undefined4 *)((long)param_3 + 0xc) = 6;
  }
LAB_006228c4:
  *(undefined8 **)(param_1 + 8) = param_3 + 2;
  return;
}


// ===== 006228d8  lua_resume =====

/* lua_resume(lua_State*, lua_State*, int) */

void lua_resume(lua_State *param_1,lua_State *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0062292c();
  if (iVar1 != 0) {
    return;
  }
  uVar2 = FUN_00622224(param_1,FUN_006229d8,*(long *)(param_1 + 8) + (long)param_3 * -0x10);
  FUN_00622aec(param_1,uVar2);
  return;
}


// ===== 0062292c  FUN_0062292c =====

undefined4 FUN_0062292c(long param_1,long param_2)

{
  char cVar1;
  char *pcVar2;
  ushort uVar3;
  undefined4 uVar4;
  
  cVar1 = *(char *)(param_1 + 3);
  if (((cVar1 == '\x06') || (cVar1 == '\x01')) ||
     ((cVar1 == '\0' && (*(long *)(param_1 + 0x20) == *(long *)(param_1 + 0x40))))) {
    if (param_2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(ushort *)(param_2 + 0x50);
      *(ushort *)(param_1 + 0x50) = uVar3;
      if (199 < uVar3) {
        pcVar2 = "C stack overflow";
        goto LAB_00622984;
      }
    }
    *(ushort *)(param_1 + 0x50) = uVar3 + 1;
    *(ushort *)(param_1 + 0x52) = uVar3 + 1;
    *(undefined1 *)(param_1 + 5) = 1;
    uVar4 = 0;
    if ((*(byte *)(param_1 + 1) >> 2 & 1) != 0) {
      *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xfb;
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
      *(long *)(*(long *)(param_1 + 0x18) + 0x30) = param_1;
    }
  }
  else {
    pcVar2 = "cannot resume non-suspended coroutine";
LAB_00622984:
    FUN_00622e38(param_1,pcVar2);
    uVar4 = 2;
  }
  return uVar4;
}


// ===== 006229d8  FUN_006229d8 =====

void FUN_006229d8(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  
  if (*PTR_LuauStacklessPcall_0067db80 == '\0') {
    if (*(char *)(param_1 + 3) == '\0') {
      if (*(long *)(param_1 + 0x10) == param_2) goto LAB_00622adc;
      iVar2 = FUN_0063d344(param_1,param_2 + -0x10,0xffffffff);
      if (iVar2 != 0) {
        return;
      }
      *(uint *)(*(long *)(param_1 + 0x20) + 0x24) = *(uint *)(*(long *)(param_1 + 0x20) + 0x24) | 1;
      goto LAB_00622acc;
    }
  }
  else if (*(char *)(param_1 + 3) == '\0') {
    if (*(long *)(param_1 + 0x10) == param_2) {
LAB_00622adc:
                    /* WARNING: Subroutine does not return */
      FUN_006214f8(param_1,"cannot resume dead coroutine");
    }
    iVar2 = FUN_0063d344(param_1,param_2 + -0x10,0xffffffff);
    cVar1 = *(char *)(param_1 + 3);
    if (cVar1 == '\x7f') {
      param_2 = *(long *)(param_1 + 0x10);
    }
    else {
      if (iVar2 != 0) {
        return;
      }
      *(uint *)(*(long *)(param_1 + 0x20) + 0x24) = *(uint *)(*(long *)(param_1 + 0x20) + 0x24) | 1;
      if (cVar1 == '\0') goto LAB_00622acc;
    }
  }
  *(undefined1 *)(param_1 + 3) = 0;
  lVar3 = *(long *)(*(undefined8 **)(param_1 + 0x20))[1];
  if ((*(char *)(lVar3 + 3) == '\0') || (*(long *)(lVar3 + 0x28) != 0)) {
    *(undefined8 *)(param_1 + 0x10) = **(undefined8 **)(param_1 + 0x20);
  }
  else {
    FUN_0063d548(param_1,param_2);
  }
LAB_00622acc:
  FUN_00622d7c(param_1);
  return;
}


// ===== 00622aec  FUN_00622aec =====

char FUN_00622aec(long param_1,int param_2)

{
  short sVar1;
  undefined *puVar2;
  char cVar3;
  code *pcVar4;
  ulong uVar5;
  
  puVar2 = PTR_LuauStacklessPcall_0067db80;
  if (param_2 != 0) {
    do {
      uVar5 = *(ulong *)(param_1 + 0x20);
      while( true ) {
        if (uVar5 <= *(ulong *)(param_1 + 0x40)) {
          *(undefined1 *)(param_1 + 5) = 0;
          sVar1 = *(short *)(param_1 + 0x52) + -1;
          *(char *)(param_1 + 3) = (char)param_2;
          *(short *)(param_1 + 0x50) = sVar1;
          *(short *)(param_1 + 0x52) = sVar1;
          FUN_00622850(param_1,param_2,*(undefined8 *)(param_1 + 8));
          cVar3 = *(char *)(param_1 + 3);
          *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10) = *(undefined8 *)(param_1 + 8);
          return cVar3;
        }
        if ((*(byte *)(uVar5 + 0x24) >> 1 & 1) != 0) break;
        uVar5 = uVar5 - 0x28;
      }
      if ((((*puVar2 != '\0') && (*(ushort *)(param_1 + 0x50) <= *(ushort *)(param_1 + 0x52))) &&
          (pcVar4 = *(code **)(*(long *)(param_1 + 0x18) + 0x548), pcVar4 != (code *)0x0)) &&
         ((*pcVar4)(param_1), *(char *)(param_1 + 3) == '\x06')) break;
      *(char *)(param_1 + 3) = (char)param_2;
      param_2 = FUN_00622224(param_1,FUN_00622c20,uVar5);
    } while (param_2 != 0);
  }
  cVar3 = *(char *)(param_1 + 3);
  *(undefined1 *)(param_1 + 5) = 0;
  sVar1 = *(short *)(param_1 + 0x52) + -1;
  *(short *)(param_1 + 0x50) = sVar1;
  *(short *)(param_1 + 0x52) = sVar1;
  if (cVar3 == '\0') {
    if (*(ulong *)(*(long *)(param_1 + 0x20) + 0x10) < *(ulong *)(param_1 + 8)) {
      cVar3 = '\0';
      *(ulong *)(*(long *)(param_1 + 0x20) + 0x10) = *(ulong *)(param_1 + 8);
    }
    else {
      cVar3 = '\0';
    }
  }
  return cVar3;
}


// ===== 00622c20  FUN_00622c20 =====

void FUN_00622c20(long param_1,undefined8 *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = *(uint *)((long)param_2 + 0x24);
  cVar2 = *(char *)(param_1 + 3);
  lVar6 = *(long *)param_2[1];
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_1 + 0x52);
  *(uint *)((long)param_2 + 0x24) = uVar1 & 0xfffffffd;
  if (cVar2 != '\x02') {
    FUN_00622850(param_1,cVar2,*(undefined8 *)(param_1 + 8));
  }
  *(undefined8 *)(param_1 + 0x10) = *param_2;
  lVar5 = *(long *)(param_1 + 0x40);
  param_2[2] = *(undefined8 *)(param_1 + 8);
  iVar3 = (**(code **)(lVar6 + 0x28))(param_1,cVar2);
  uVar4 = *(undefined8 *)((long)param_2 + (*(long *)(param_1 + 0x40) - lVar5));
  *(long *)(param_1 + 0x20) = (long)param_2 + (*(long *)(param_1 + 0x40) - lVar5);
  FUN_00623454(param_1,uVar4);
  FUN_00622ce4(param_1);
  FUN_0063d548(param_1,*(long *)(param_1 + 8) + (long)iVar3 * -0x10);
  FUN_00622d7c(param_1);
  return;
}


// ===== 00622ce4  FUN_00622ce4 =====

void FUN_00622ce4(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((20000 < (int)*(uint *)(param_1 + 0x4c)) &&
     (lVar2 = *(long *)(param_1 + 0x40),
     (int)((ulong)(*(long *)(param_1 + 0x20) - lVar2) >> 3) * -0x33333333 < 19999)) {
    lVar1 = FUN_00629130(param_1,lVar2,(ulong)*(uint *)(param_1 + 0x4c) * 0x28,800000,
                         *(undefined1 *)(param_1 + 2));
    *(undefined4 *)(param_1 + 0x4c) = 20000;
    *(long *)(param_1 + 0x20) = lVar1 + (*(long *)(param_1 + 0x20) - lVar2);
    *(long *)(param_1 + 0x38) = lVar1 + 0xc34d8;
    *(long *)(param_1 + 0x40) = lVar1;
  }
  return;
}


// ===== 00622d7c  FUN_00622d7c =====

void FUN_00622d7c(long param_1)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  
  puVar2 = PTR_LuauStacklessPcall_0067db80;
  while( true ) {
    while( true ) {
      cVar1 = *(char *)(param_1 + 3);
      if (*puVar2 == '\0') {
        if (cVar1 != '\0') {
          return;
        }
        uVar4 = *(ulong *)(param_1 + 0x20);
        if (uVar4 <= *(ulong *)(param_1 + 0x40)) {
          return;
        }
      }
      else {
        if (((cVar1 != '\0') && (cVar1 != '\x7f')) ||
           (uVar4 = *(ulong *)(param_1 + 0x20), uVar4 <= *(ulong *)(param_1 + 0x40))) {
          return;
        }
        *(undefined1 *)(param_1 + 3) = 0;
      }
      if (*(char *)(**(long **)(uVar4 + 8) + 3) != '\0') break;
      FUN_00632c7c(param_1);
    }
    iVar3 = (**(code **)(**(long **)(uVar4 + 8) + 0x28))(param_1,0);
    if (*(char *)(param_1 + 3) == '\x01') {
      return;
    }
    if (*(char *)(param_1 + 3) == '\x06') break;
    FUN_0063d548(param_1,*(long *)(param_1 + 8) + (long)iVar3 * -0x10);
  }
  return;
}


// ===== 00622e38  FUN_00622e38 =====

void FUN_00622e38(long param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)(*(long *)(param_1 + 8) + (long)param_3 * -0x10);
  *(undefined8 **)(param_1 + 8) = puVar7;
  sVar3 = strlen(param_2);
  uVar4 = FUN_0062b178(param_1,param_2,sVar3);
  *puVar7 = uVar4;
  lVar6 = *(long *)(param_1 + 0x28);
  lVar5 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)puVar7 + 0xc) = 6;
  if (lVar6 - lVar5 < 0x11) {
    iVar1 = *(int *)(param_1 + 0x48);
    iVar2 = iVar1 << 1;
    if (iVar1 < 1) {
      iVar2 = iVar1 + 1;
    }
    FUN_006222f4(param_1,iVar2,0);
    lVar5 = *(long *)(param_1 + 8);
  }
  *(long *)(param_1 + 8) = lVar5 + 0x10;
  return;
}


// ===== 00622ecc  lua_resumeerror =====

/* lua_resumeerror(lua_State*, lua_State*) */

void lua_resumeerror(lua_State *param_1,lua_State *param_2)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  
  iVar1 = FUN_0062292c(param_1,param_2,1);
  if (iVar1 != 0) {
    return;
  }
  uVar3 = *(ulong *)(param_1 + 0x20);
  do {
    if (uVar3 <= *(ulong *)(param_1 + 0x40)) {
      uVar2 = 2;
LAB_00622f38:
      FUN_00622aec(param_1,uVar2);
      return;
    }
    if ((*(byte *)(uVar3 + 0x24) >> 1 & 1) != 0) {
      param_1[3] = (lua_State)0x2;
      uVar2 = FUN_00622224(param_1,FUN_00622c20);
      goto LAB_00622f38;
    }
    uVar3 = uVar3 - 0x28;
  } while( true );
}


// ===== 00622f48  lua_yield =====

/* lua_yield(lua_State*, int) */

undefined8 lua_yield(lua_State *param_1,int param_2)

{
  if (*(ushort *)(param_1 + 0x50) <= *(ushort *)(param_1 + 0x52)) {
    param_1[3] = (lua_State)0x1;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8) + (long)param_2 * -0x10;
    return 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_006214f8(param_1,"attempt to yield across metamethod/C-call boundary");
}


// ===== 00622f90  lua_break =====

/* lua_break(lua_State*) */

undefined8 lua_break(lua_State *param_1)

{
  if (*(ushort *)(param_1 + 0x50) <= *(ushort *)(param_1 + 0x52)) {
    param_1[3] = (lua_State)0x6;
    return 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_006214f8(param_1,"attempt to break across metamethod/C-call boundary");
}


// ===== 00622fcc  lua_isyieldable =====

/* lua_isyieldable(lua_State*) */

bool lua_isyieldable(lua_State *param_1)

{
  return *(ushort *)(param_1 + 0x50) <= *(ushort *)(param_1 + 0x52);
}


// ===== 00622fe0  FUN_00622fe0 =====

int FUN_00622fe0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  code *pcVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  uVar2 = *(undefined2 *)(param_1 + 0x50);
  uVar3 = *(undefined2 *)(param_1 + 0x52);
  lVar13 = *(long *)(param_1 + 0x20);
  lVar14 = *(long *)(param_1 + 0x40);
  cVar1 = *(char *)(param_1 + 5);
  iVar7 = FUN_00622224();
  if (iVar7 != 0) {
    lVar13 = lVar13 - lVar14;
    if (*PTR_LuauClosureUsageCounter_0067dbb0 != '\0') {
      lVar12 = *(long *)(param_1 + 0x40);
      for (lVar14 = *(long *)(param_1 + 0x20); lVar14 != lVar12 + lVar13; lVar14 = lVar14 + -0x28) {
        *(long *)(**(long **)(lVar14 + 8) + 8) = *(long *)(**(long **)(lVar14 + 8) + 8) + -1;
      }
    }
    iVar6 = iVar7;
    if (param_5 != 0) {
      if (iVar7 != 2) {
        FUN_00622850(param_1,iVar7,*(undefined8 *)(param_1 + 8));
      }
      iVar8 = FUN_00622224(param_1,FUN_00623178,*(long *)(param_1 + 0x30) + param_5);
      iVar9 = 4;
      if (iVar8 != 4 || iVar7 != 4) {
        iVar9 = 5;
      }
      iVar6 = 2;
      if (iVar8 != 0) {
        iVar7 = iVar9;
        iVar6 = iVar9;
      }
    }
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 5) = 0;
    }
    uVar4 = *(ushort *)(param_1 + 0x50);
    uVar5 = *(ushort *)(param_1 + 0x52);
    *(undefined2 *)(param_1 + 0x50) = uVar2;
    *(undefined2 *)(param_1 + 0x52) = uVar3;
    if (((uVar5 < uVar4) ||
        (pcVar10 = *(code **)(*(long *)(param_1 + 0x18) + 0x548), pcVar10 == (code *)0x0)) ||
       ((*pcVar10)(param_1), *(char *)(param_1 + 3) != '\x06')) {
      lVar14 = *(long *)(param_1 + 0x30);
      FUN_00623454(param_1,lVar14 + param_4);
      FUN_00622850(param_1,iVar6,lVar14 + param_4);
      uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x40) + lVar13);
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x40) + lVar13;
      *(undefined8 *)(param_1 + 0x10) = uVar11;
      FUN_00622ce4(param_1);
      return iVar7;
    }
  }
  return 0;
}


// ===== 00623178  FUN_00623178 =====

void FUN_00623178(long param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  puVar3[1] = puVar3[-1];
  *puVar3 = puVar3[-2];
  lVar4 = *(long *)(param_1 + 8);
  uVar5 = *param_2;
  *(undefined8 *)(lVar4 + -8) = param_2[1];
  *(undefined8 *)(lVar4 + -0x10) = uVar5;
  lVar4 = *(long *)(param_1 + 8);
  if (*(long *)(param_1 + 0x28) - lVar4 < 0x11) {
    iVar1 = *(int *)(param_1 + 0x48);
    iVar2 = iVar1 << 1;
    if (iVar1 < 1) {
      iVar2 = iVar1 + 1;
    }
    FUN_006222f4(param_1,iVar2,0);
    lVar4 = *(long *)(param_1 + 8);
  }
  *(long *)(param_1 + 8) = lVar4 + 0x10;
  FUN_006227ac(param_1,lVar4 + -0x10);
  return;
}


// ===== 006231f0  FUN_006231f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006231f0(long param_1,uint param_2,undefined8 param_3,long param_4)

{
  undefined1 uVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined4 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  
  puVar6 = (undefined1 *)
           FUN_00628d60(param_1,(ulong)param_2 * 0x10 + 0x28,*(undefined1 *)(param_1 + 4));
  uVar1 = *(undefined1 *)(param_1 + 4);
  *puVar6 = 8;
  lVar7 = *(long *)(param_1 + 0x18);
  puVar6[2] = uVar1;
  uVar1 = *(undefined1 *)(param_4 + 6);
  bVar2 = *(byte *)(lVar7 + 0x20);
  puVar6[3] = 0;
  puVar6[4] = (char)param_2;
  puVar6[5] = uVar1;
  puVar6[1] = bVar2 & 3;
  puVar6[6] = 0;
  *(undefined8 *)(puVar6 + 8) = 0;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(long *)(puVar6 + 0x20) = param_4;
  if (0 < (int)param_2) {
    lVar9 = (ulong)param_2 - 1;
    uVar8 = (ulong)(param_2 + 3) & 0xfffffffc;
    puVar10 = (undefined4 *)(puVar6 + 100);
    lVar7 = _DAT_0024e340;
    lVar11 = _UNK_0024e348;
    lVar12 = _DAT_0024e100;
    lVar13 = _UNK_0024e108;
    do {
      auVar14._8_8_ = lVar9;
      auVar14._0_8_ = lVar9;
      auVar5._8_8_ = lVar13;
      auVar5._0_8_ = lVar12;
      auVar14 = NEON_cmhs(auVar14,auVar5,8);
      if ((auVar14 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        puVar10[-0xc] = 0;
      }
      if ((auVar14 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        puVar10[-8] = 0;
      }
      auVar3._8_8_ = lVar9;
      auVar3._0_8_ = lVar9;
      auVar4._8_8_ = lVar11;
      auVar4._0_8_ = lVar7;
      auVar14 = NEON_cmhs(auVar3,auVar4,8);
      if ((auVar14 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        puVar10[-4] = 0;
      }
      if ((auVar14 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        *puVar10 = 0;
      }
      lVar7 = lVar7 + 4;
      lVar11 = lVar11 + 4;
      lVar12 = lVar12 + 4;
      lVar13 = lVar13 + 4;
      uVar8 = uVar8 - 4;
      puVar10 = puVar10 + 0x10;
    } while (uVar8 != 0);
  }
  return;
}


// ===== 00623310  FUN_00623310 =====

void FUN_00623310(long param_1,uint param_2,undefined8 param_3)

{
  undefined1 uVar1;
  byte bVar2;
  undefined1 *puVar3;
  long lVar4;
  
  puVar3 = (undefined1 *)
           FUN_00628d60(param_1,(-(ulong)(param_2 >> 0x1f) & 0xfffffff000000000 |
                                (ulong)param_2 << 4) + 0x38,*(undefined1 *)(param_1 + 4));
  lVar4 = *(long *)(param_1 + 0x18);
  *puVar3 = 8;
  puVar3[3] = 1;
  uVar1 = *(undefined1 *)(param_1 + 4);
  bVar2 = *(byte *)(lVar4 + 0x20);
  puVar3[4] = (char)param_2;
  puVar3[2] = uVar1;
  *(undefined2 *)(puVar3 + 5) = 0x14;
  puVar3[1] = bVar2 & 3;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined8 *)(puVar3 + 0x28) = 0;
  *(undefined8 *)(puVar3 + 0x30) = 0;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = 0;
  return;
}


// ===== 00623390  FUN_00623390 =====

void FUN_00623390(long param_1,ulong param_2)

{
  undefined1 uVar1;
  byte bVar2;
  undefined1 *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  plVar8 = (long *)(param_1 + 0x60);
  lVar4 = *plVar8;
  lVar7 = *(long *)(param_1 + 0x18);
  if ((lVar4 != 0) && (uVar5 = *(ulong *)(lVar4 + 8), param_2 <= uVar5)) {
    do {
      lVar6 = lVar4;
      if (uVar5 == param_2) {
        return;
      }
      lVar4 = *(long *)(lVar6 + 0x20);
    } while ((lVar4 != 0) && (uVar5 = *(ulong *)(lVar4 + 8), param_2 <= uVar5));
    plVar8 = (long *)(lVar6 + 0x20);
  }
  puVar3 = (undefined1 *)FUN_00628d60(param_1,0x28,*(undefined1 *)(param_1 + 4));
  *(ulong *)(puVar3 + 8) = param_2;
  uVar1 = *(undefined1 *)(param_1 + 4);
  *puVar3 = 0x10;
  lVar4 = *(long *)(param_1 + 0x18);
  lVar6 = *plVar8;
  puVar3[3] = 0;
  bVar2 = *(byte *)(lVar4 + 0x20);
  puVar3[2] = uVar1;
  *(long *)(puVar3 + 0x20) = lVar6;
  *plVar8 = (long)puVar3;
  puVar3[1] = bVar2 & 3;
  *(long *)(puVar3 + 0x10) = lVar7 + 0x300;
  lVar4 = *(long *)(lVar7 + 0x318);
  *(long *)(puVar3 + 0x18) = lVar4;
  *(undefined1 **)(lVar4 + 0x10) = puVar3;
  *(undefined1 **)(lVar7 + 0x318) = puVar3;
  return;
}


// ===== 00623454  FUN_00623454 =====

void FUN_00623454(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x60);
  while ((lVar1 != 0 && (param_2 <= *(ulong *)(lVar1 + 8)))) {
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(lVar1 + 0x20);
    plVar3 = (long *)(lVar1 + 0x10);
    lVar2 = *plVar3;
    *(long *)(*(long *)(lVar1 + 0x18) + 0x10) = lVar2;
    *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar1 + 0x18);
    lVar4 = (*(long **)(lVar1 + 8))[1];
    lVar2 = **(long **)(lVar1 + 8);
    *(long **)(lVar1 + 8) = plVar3;
    *(long *)(lVar1 + 0x18) = lVar4;
    *plVar3 = lVar2;
    FUN_00624e84(param_1,lVar1);
    lVar1 = *(long *)(param_1 + 0x60);
  }
  return;
}


// ===== 006234cc  FUN_006234cc =====

long FUN_006234cc(long param_1,int param_2,int param_3)

{
  ulong uVar1;
  int *piVar2;
  
  if (0 < (int)*(uint *)(param_1 + 0x90)) {
    uVar1 = 0;
    piVar2 = (int *)(*(long *)(param_1 + 0x48) + 0xc);
    do {
      if ((piVar2[-1] <= param_3) && (param_3 < *piVar2)) {
        param_2 = param_2 + -1;
        if (param_2 == 0) {
          return *(long *)(param_1 + 0x48) + uVar1 * 0x18;
        }
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 6;
    } while (*(uint *)(param_1 + 0x90) != uVar1);
  }
  return 0;
}


// ===== 00623528  FUN_00623528 =====

undefined8 FUN_00623528(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  
  if ((*(long *)(*(long *)(param_1 + 0x18) + 0x598) == 0) || (*(char *)(param_3 + 3) != '\0')) {
    return 0;
  }
  iVar2 = *(int *)(*(long *)(param_3 + 0x20) + 0xbc);
  lVar1 = *(long *)(*(long *)(param_2 + 0x20) + 0xb0) + (param_4 & 0xffffffff) * 0x10;
  if (*(int *)(lVar1 + 8) == 0) {
    *(int *)(lVar1 + 8) = iVar2;
  }
  else if (*(int *)(lVar1 + 8) != iVar2) {
    return 0;
  }
  puVar3 = PTR_LuauInlineHitsThreshold_0067dbb8;
  iVar2 = *(int *)(lVar1 + 0xc) + 1;
  *(int *)(lVar1 + 0xc) = iVar2;
  if (iVar2 < *(int *)puVar3) {
    return 1;
  }
  (**(code **)(*(long *)(param_1 + 0x18) + 0x598))();
  return 0;
}


// ===== 006235bc  FUN_006235bc =====

void FUN_006235bc(long param_1,byte *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  byte bVar4;
  code *pcVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  bVar4 = *param_2;
  if (bVar4 < 0xb) {
    if (bVar4 < 8) {
      if (bVar4 == 6) {
        pbVar7 = (byte *)(**(long **)(param_1 + 0x18) +
                         (long)(int)(*(int *)((long)*(long **)(param_1 + 0x18) + 0xc) - 1U &
                                    *(uint *)(param_2 + 0x10)) * 8);
        pbVar6 = *(byte **)pbVar7;
        if (pbVar6 != (byte *)0x0) {
          if (pbVar6 != param_2) {
            do {
              pbVar7 = pbVar6;
              pbVar6 = *(byte **)(pbVar7 + 8);
              if (pbVar6 == (byte *)0x0) goto LAB_00623890;
            } while (pbVar6 != param_2);
            pbVar7 = pbVar7 + 8;
          }
          *(undefined8 *)pbVar7 = *(undefined8 *)(param_2 + 8);
          *(int *)(*(long *)(param_1 + 0x18) + 8) = *(int *)(*(long *)(param_1 + 0x18) + 8) + -1;
        }
LAB_00623890:
        bVar4 = param_2[2];
        lVar3 = (ulong)*(uint *)(param_2 + 0x14) + 0x19;
      }
      else {
        if (bVar4 != 7) {
          return;
        }
        if (*(undefined **)(param_2 + 0x20) != PTR_luaH_dummynode_0067dbd8) {
          uVar2 = 1 << (ulong)(param_2[6] & 0x1f);
          FUN_00628eb0(param_1,*(undefined **)(param_2 + 0x20),
                       -(ulong)(uVar2 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar2 << 5,param_2[2]);
        }
        if (*(long *)(param_2 + 0x18) != 0) {
          FUN_00628eb0(param_1,*(long *)(param_2 + 0x18),(long)*(int *)(param_2 + 8) << 4,param_2[2]
                      );
        }
        bVar4 = param_2[2];
        lVar3 = 0x30;
      }
    }
    else if (bVar4 == 8) {
      bVar4 = param_2[2];
      lVar3 = 0x28;
      if (param_2[3] != 0) {
        lVar3 = 0x38;
      }
      lVar3 = lVar3 + (ulong)param_2[4] * 0x10;
    }
    else if (bVar4 == 9) {
      bVar4 = param_2[3];
      if ((char)bVar4 < '\0') {
        if ((bVar4 == 0x80) &&
           (*(code **)(param_2 + (long)*(int *)(param_2 + 4) + 8) != (code *)0x0)) {
          (**(code **)(param_2 + (long)*(int *)(param_2 + 4) + 8))();
        }
      }
      else {
        pcVar5 = *(code **)(*(long *)(param_1 + 0x18) + (ulong)bVar4 * 8 + 0x3430);
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(param_1,param_2 + 0x10);
        }
      }
      uVar1 = *(uint *)(param_2 + 4);
      bVar4 = param_2[2];
      uVar2 = uVar1 + 0xf & 0x7ffffff0;
      if ((int)uVar1 < 0x11) {
        uVar2 = uVar1;
      }
      lVar3 = (long)(int)uVar2 + 0x10;
    }
    else {
      if (bVar4 != 10) {
        return;
      }
      pcVar5 = *(code **)(*(long *)(param_1 + 0x18) + 0x520);
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(0,param_2);
      }
      FUN_0062a7a4(param_1,param_2);
      bVar4 = param_2[2];
      lVar3 = 0x80;
    }
  }
  else if (bVar4 < 0xd) {
    if (bVar4 == 0xb) {
      bVar4 = param_2[2];
      lVar3 = 0x10;
      if (7 < *(uint *)(param_2 + 4)) {
        lVar3 = (ulong)*(uint *)(param_2 + 4) + 8;
      }
    }
    else {
      if (bVar4 != 0xc) {
        return;
      }
      FUN_00628eb0(param_1,*(undefined8 *)(param_2 + 0x18),
                   -(ulong)((uint)(*(int *)(param_2 + 0x3c) - *(int *)(param_2 + 0x38)) >> 0x1f) &
                   0xfffffff000000000 |
                   (ulong)(uint)(*(int *)(param_2 + 0x3c) - *(int *)(param_2 + 0x38)) << 4,
                   param_2[2]);
      FUN_00628eb0(param_1,*(undefined8 *)(param_2 + 0x28),(long)*(int *)(param_2 + 0x3c) << 3,
                   param_2[2]);
      bVar4 = param_2[2];
      lVar3 = 0x40;
    }
  }
  else {
    if (bVar4 == 0xd) {
      FUN_00628eb0(param_1,*(undefined8 *)(param_2 + 0x20),(long)*(int *)(param_2 + 0x18) << 4,
                   param_2[2]);
    }
    else if (bVar4 != 0x10) {
      if (bVar4 != 0xf) {
        return;
      }
      FUN_00628eb0(param_1,*(undefined8 *)(param_2 + 0x10),(long)*(int *)(param_2 + 0x88) << 2,
                   param_2[2]);
      FUN_00628eb0(param_1,*(undefined8 *)(param_2 + 0x18),(long)*(int *)(param_2 + 0x8c) << 3,
                   param_2[2]);
      FUN_00628eb0(param_1,*(undefined8 *)(param_2 + 8),(long)*(int *)(param_2 + 0x98) << 4,
                   param_2[2]);
      if (*(long *)(param_2 + 0x38) != 0) {
        FUN_00628eb0(param_1,*(long *)(param_2 + 0x38),(long)*(int *)(param_2 + 0x9c),param_2[2]);
      }
      FUN_00628eb0(param_1,*(undefined8 *)(param_2 + 0x48),(long)*(int *)(param_2 + 0x90) * 0x18,
                   param_2[2]);
      FUN_00628eb0(param_1,*(undefined8 *)(param_2 + 0x50),(long)*(int *)(param_2 + 0x94) << 3,
                   param_2[2]);
      if (*(long *)(param_2 + 0x68) != 0) {
        FUN_00628eb0(param_1,*(long *)(param_2 + 0x68),(long)*(int *)(param_2 + 0x88),param_2[2]);
      }
      if (*(long *)(param_2 + 0x28) != 0) {
        (**(code **)(*(long *)(param_1 + 0x18) + 0x568))(param_1,param_2);
      }
      if (*(long *)(param_2 + 0x70) != 0) {
        FUN_00628eb0(param_1,*(long *)(param_2 + 0x70),(long)*(int *)(param_2 + 0xac),param_2[2]);
      }
      if (*(long *)(param_2 + 0xb0) != 0) {
        FUN_00628eb0(param_1,*(long *)(param_2 + 0xb0),(ulong)*(uint *)(param_2 + 0xb8) << 4,
                     param_2[2]);
      }
      bVar4 = param_2[2];
      lVar3 = 0xc0;
      goto LAB_00623990;
    }
    bVar4 = param_2[2];
    lVar3 = 0x28;
  }
LAB_00623990:
  FUN_00628fe0(param_1,param_2,lVar3,bVar4,param_3);
  return;
}


// ===== 006239a4  FUN_006239a4 =====

ulong FUN_006239a4(long param_1)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  char cVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  lVar16 = *(long *)(param_1 + 0x18);
  iVar2 = *(int *)(lVar16 + 0x54);
  iVar3 = *(int *)(lVar16 + 0x58);
  lVar4 = *(long *)(lVar16 + 0x40);
  lVar14 = *(long *)(lVar16 + 0x48);
  if (*(code **)(lVar16 + 0x510) != (code *)0x0) {
    (**(code **)(lVar16 + 0x510))(param_1,0);
  }
  cVar5 = *(char *)(lVar16 + 0x21);
  if (cVar5 == '\0') {
    uVar17 = lua_clock();
    cVar5 = *(char *)(lVar16 + 0x21);
    *(undefined8 *)(lVar16 + 0x44e0) = uVar17;
  }
  lVar9 = FUN_00623b8c(param_1,(long)((iVar2 * iVar3) / 100));
  dVar8 = DAT_0024e940;
  uVar6 = 0;
  if ((long)*(int *)(lVar16 + 0x54) != 0) {
    uVar6 = (ulong)(lVar9 * 100) / (ulong)(long)*(int *)(lVar16 + 0x54);
  }
  uVar10 = *(ulong *)(lVar16 + 0x48);
  if (*(char *)(lVar16 + 0x21) == '\0') {
    dVar18 = *(double *)(lVar16 + 0x44e8);
    dVar19 = dVar18 - *(double *)(lVar16 + 0x44f0);
    uVar12 = (uVar10 / 100) * (long)*(int *)(lVar16 + 0x50);
    uVar11 = uVar12;
    if (DAT_0024e920 <= dVar19) {
      lVar14 = *(long *)(lVar16 + 0x44c8);
      lVar9 = *(long *)(lVar16 + 0x44d0);
      dVar20 = *(double *)(lVar16 + 0x44e0);
      iVar2 = *(int *)(lVar16 + 0x44c4);
      lVar4 = lVar16 + ((ulong)*(uint *)(lVar16 + 0x44c0) & 0x1f) * 4;
      iVar13 = (int)((ulong)(lVar14 - *(long *)(lVar16 + 0x44d8)) >> 10);
      *(uint *)(lVar16 + 0x44c0) = *(uint *)(lVar16 + 0x44c0) + 1;
      iVar3 = *(int *)(lVar4 + 0x4440);
      *(int *)(lVar4 + 0x4440) = iVar13;
      dVar7 = DAT_0024e608;
      iVar2 = iVar2 + (iVar13 - iVar3);
      *(int *)(lVar16 + 0x44c4) = iVar2;
      uVar15 = (uVar12 - (long)(((double)iVar13 * dVar7 + (double)iVar2 * dVar8) * 1024.0)) -
               (long)((dVar18 - dVar20) * ((double)(ulong)(lVar14 - lVar9) / dVar19));
      uVar1 = uVar15;
      if ((long)uVar12 <= (long)uVar15) {
        uVar1 = uVar12;
      }
      uVar11 = uVar10;
      if ((long)uVar10 <= (long)uVar15) {
        uVar11 = uVar1;
      }
    }
    *(ulong *)(lVar16 + 0x40) = uVar11;
    *(ulong *)(lVar16 + 0x44d8) = uVar12;
    uVar17 = lua_clock();
    *(undefined8 *)(lVar16 + 0x44f0) = uVar17;
    *(undefined8 *)(lVar16 + 0x44d0) = *(undefined8 *)(lVar16 + 0x48);
  }
  else {
    uVar11 = lVar14 - lVar4;
    uVar10 = uVar10 + uVar6;
    *(ulong *)(lVar16 + 0x40) = uVar10;
    if (uVar11 <= uVar10) {
      *(ulong *)(lVar16 + 0x40) = uVar10 - uVar11;
    }
  }
  if (*(code **)(lVar16 + 0x510) != (code *)0x0) {
    (**(code **)(lVar16 + 0x510))(param_1,cVar5);
  }
  return uVar6;
}


// ===== 00623b8c  FUN_00623b8c =====

ulong FUN_00623b8c(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  uint uVar4;
  byte bVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  undefined1 uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  char *pcVar18;
  int iVar19;
  long lVar20;
  int iVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  long lVar28;
  long local_78;
  int local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  uVar22 = 0;
  lVar20 = *(long *)(param_1 + 0x18);
  bVar5 = *(byte *)(lVar20 + 0x21);
  if (bVar5 < 2) {
    if (bVar5 == 0) {
      FUN_00624224(param_1);
      uVar22 = 0;
      goto LAB_006241ec;
    }
    if (bVar5 != 1) goto LAB_006241ec;
    uVar22 = 0;
    bVar7 = *(long *)(lVar20 + 0x28) != 0;
    if ((*(long *)(lVar20 + 0x28) != 0) && (param_2 != 0)) {
      uVar22 = 0;
      do {
        lVar24 = FUN_0062439c(lVar20);
        uVar22 = lVar24 + uVar22;
        bVar7 = *(long *)(lVar20 + 0x28) != 0;
        if (*(long *)(lVar20 + 0x28) == 0) break;
      } while (uVar22 < param_2);
    }
    if (bVar7) goto LAB_006241ec;
    *(undefined8 *)(lVar20 + 0x28) = *(undefined8 *)(lVar20 + 0x30);
    *(undefined8 *)(lVar20 + 0x30) = 0;
    uVar9 = 2;
  }
  else {
    if (bVar5 != 2) {
      if (bVar5 == 3) {
        uVar27 = lua_clock();
        *(undefined8 *)(lVar20 + 0x44e8) = uVar27;
        *(undefined8 *)(lVar20 + 0x44c8) = *(undefined8 *)(lVar20 + 0x48);
        lVar24 = *(long *)(param_1 + 0x18);
        lVar20 = *(long *)(lVar24 + 0x318);
        if (lVar20 == lVar24 + 0x300) {
          lVar23 = 0;
        }
        else {
          lVar23 = 0;
          do {
            if ((((*(byte *)(lVar20 + 1) & 7) == 0) &&
                (5 < *(int *)((long)*(long **)(lVar20 + 8) + 0xc))) &&
               ((*(byte *)(**(long **)(lVar20 + 8) + 1) & 3) != 0)) {
              FUN_00624a78(lVar24);
            }
            lVar20 = *(long *)(lVar20 + 0x18);
            lVar23 = lVar23 + 0x28;
          } while (lVar20 != lVar24 + 0x300);
        }
        if (*(long *)(lVar24 + 0x28) == 0) {
          lVar20 = 0;
        }
        else {
          lVar20 = 0;
          do {
            lVar8 = FUN_0062439c(lVar24);
            lVar20 = lVar8 + lVar20;
          } while (*(long *)(lVar24 + 0x28) != 0);
        }
        uVar27 = *(undefined8 *)(lVar24 + 0x38);
        *(undefined8 *)(lVar24 + 0x38) = 0;
        *(undefined8 *)(lVar24 + 0x28) = uVar27;
        if ((*(byte *)(param_1 + 1) & 3) != 0) {
          FUN_00624a78(lVar24,param_1);
        }
        FUN_00624bc0(lVar24);
        if (*(long *)(lVar24 + 0x28) == 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = 0;
          do {
            lVar26 = FUN_0062439c(lVar24);
            lVar8 = lVar26 + lVar8;
          } while (*(long *)(lVar24 + 0x28) != 0);
        }
        lVar11 = *(long *)(lVar24 + 0x30);
        lVar26 = 0;
        *(long *)(lVar24 + 0x28) = lVar11;
        *(undefined8 *)(lVar24 + 0x30) = 0;
        while (lVar11 != 0) {
          lVar11 = FUN_0062439c(lVar24);
          lVar26 = lVar11 + lVar26;
          lVar11 = *(long *)(lVar24 + 0x28);
        }
        lVar11 = *(long *)(lVar24 + 0x38);
        if (lVar11 == 0) {
          lVar25 = 0;
        }
        else {
          lVar25 = 0;
          do {
            bVar5 = *(byte *)(lVar11 + 6);
            lVar12 = (long)*(int *)(lVar11 + 8);
            uVar15 = (uint)bVar5;
            if (*(int *)(lVar11 + 8) != 0) {
              lVar16 = lVar12 << 4;
              lVar17 = lVar12;
              do {
                lVar17 = lVar17 + -1;
                lVar1 = *(long *)(lVar11 + 0x18) + lVar16;
                if (5 < *(int *)(lVar1 + -4)) {
                  pcVar18 = *(char **)(lVar1 + -0x10);
                  if (*pcVar18 == '\x06') {
                    pcVar18[1] = pcVar18[1] & 0xfc;
                  }
                  else if ((pcVar18[1] & 3U) != 0) {
                    *(undefined4 *)(lVar1 + -4) = 0;
                  }
                }
                lVar16 = lVar16 + -0x10;
              } while ((int)lVar17 != 0);
              uVar15 = (uint)*(byte *)(lVar11 + 6);
            }
            iVar21 = 0;
            lVar17 = (ulong)(uint)~(-1 << (ulong)(uVar15 & 0x1f)) << 5;
            lVar25 = lVar25 + lVar12 * 0x10 + (long)(1 << (ulong)(bVar5 & 0x1f)) * 0x20 + 0x30;
            do {
              puVar2 = (undefined8 *)(*(long *)(lVar11 + 0x20) + lVar17);
              iVar19 = *(int *)((long)puVar2 + 0xc);
              if (iVar19 != 0) {
                uVar15 = *(uint *)((long)puVar2 + 0x1c);
                if ((uVar15 & 0xe) < 6) {
LAB_00624068:
                  if (5 < iVar19) {
                    pcVar18 = (char *)*puVar2;
                    if (*pcVar18 == '\x06') {
                      pcVar18[1] = pcVar18[1] & 0xfc;
                    }
                    else if ((pcVar18[1] & 3U) != 0) {
                      uVar15 = *(uint *)((long)puVar2 + 0x1c);
                      *(undefined4 *)((long)puVar2 + 0xc) = 0;
                      if ((uVar15 & 0xe) < 6) goto LAB_006240c4;
                      goto LAB_006240b0;
                    }
                  }
                  iVar21 = iVar21 + 1;
                }
                else {
                  pcVar18 = *(char **)(*(long *)(lVar11 + 0x20) + lVar17 + 0x10);
                  if (*pcVar18 == '\x06') {
                    pcVar18[1] = pcVar18[1] & 0xfc;
                    iVar19 = *(int *)((long)puVar2 + 0xc);
                    goto LAB_00624068;
                  }
                  if ((pcVar18[1] & 3U) == 0) goto LAB_00624068;
                  *(undefined4 *)((long)puVar2 + 0xc) = 0;
LAB_006240b0:
                  *(uint *)((long)puVar2 + 0x1c) = uVar15 & 0xfffffff0 | 0xe;
                }
              }
LAB_006240c4:
              lVar17 = lVar17 + -0x20;
            } while (lVar17 != -0x20);
            pcVar18 = (char *)FUN_00624c08(*(undefined8 *)(param_1 + 0x18),
                                           *(undefined8 *)(lVar11 + 0x10));
            if ((pcVar18 != (char *)0x0) && (pcVar18 = strchr(pcVar18,0x73), pcVar18 != (char *)0x0)
               ) {
              iVar14 = 3 << (ulong)(*(byte *)(lVar11 + 6) & 0x1f);
              iVar19 = iVar14 + 7;
              if (-1 < iVar14) {
                iVar19 = iVar14;
              }
              if (iVar21 < iVar19 >> 3) {
                local_78 = lVar11;
                local_70 = iVar21;
                FUN_00622224(param_1,FUN_00624c5c,&local_78);
              }
            }
            lVar11 = *(long *)(lVar11 + 0x28);
          } while (lVar11 != 0);
        }
        *(undefined8 *)(lVar24 + 0x38) = 0;
        lVar12 = *(long *)(*(long *)(param_1 + 0x18) + 0x318);
        lVar11 = *(long *)(param_1 + 0x18) + 0x300;
        if (lVar12 == lVar11) {
          lVar17 = 0;
        }
        else {
          lVar17 = 0;
          do {
            if (*(char *)(lVar12 + 3) == '\0') {
              plVar13 = (long *)(lVar12 + 0x10);
              lVar16 = *plVar13;
              lVar1 = *(long *)(lVar12 + 0x18);
              bVar5 = *(byte *)(lVar12 + 1);
              *(long *)(lVar1 + 0x10) = lVar16;
              *(undefined8 *)(lVar16 + 0x18) = *(undefined8 *)(lVar12 + 0x18);
              if ((bVar5 & 3) == 0) {
                lVar28 = (*(long **)(lVar12 + 8))[1];
                lVar16 = **(long **)(lVar12 + 8);
                *(long **)(lVar12 + 8) = plVar13;
                *(long *)(lVar12 + 0x18) = lVar28;
                *plVar13 = lVar16;
                FUN_00624e84(param_1);
              }
            }
            else {
              *(undefined1 *)(lVar12 + 3) = 0;
              lVar1 = *(long *)(lVar12 + 0x18);
            }
            lVar12 = lVar1;
            lVar17 = lVar17 + 0x28;
          } while (lVar12 != lVar11);
        }
        *(undefined8 *)(lVar24 + 0x2f0) = *(undefined8 *)(lVar24 + 0x2e8);
        *(byte *)(lVar24 + 0x20) = *(byte *)(lVar24 + 0x20) ^ 3;
        uVar22 = lVar20 + lVar23 + lVar8 + lVar26 + lVar25 + lVar17;
        *(undefined1 *)(lVar24 + 0x21) = 4;
      }
      else if (bVar5 == 4) {
        lVar24 = *(long *)(lVar20 + 0x2f0);
        uVar22 = 0;
        if ((lVar24 != 0) && (param_2 != 0)) {
          uVar22 = 0;
          lVar23 = lVar24;
          do {
            iVar21 = *(int *)(lVar23 + 0x28);
            uVar3 = (ulong)iVar21;
            iVar19 = 0;
            if (uVar3 != 0) {
              iVar19 = (int)(((long)*(int *)(lVar23 + 0x20) - 0x40U) / uVar3);
            }
            lVar26 = lVar23 + 0x40 + (long)iVar21 * (long)iVar19;
            lVar24 = *(long *)(lVar23 + 0x18);
            lVar8 = lVar23 + 0x40 + (long)*(int *)(lVar23 + 0x30) + uVar3;
            iVar14 = (int)lVar8;
            iVar19 = iVar14;
            if (lVar8 != lVar26) {
              iVar19 = *(int *)(lVar23 + 0x34);
              lVar8 = lVar23 + *(int *)(lVar23 + 0x30);
              bVar5 = *(byte *)(*(long *)(param_1 + 0x18) + 0x20);
              do {
                pcVar18 = (char *)(lVar8 + uVar3 + 0x40);
                if (*pcVar18 != '\0') {
                  if ((byte)((pcVar18[1] ^ 3U) & (bVar5 ^ 3)) == 0) {
                    FUN_006235bc(param_1,pcVar18,lVar23);
                    iVar19 = iVar19 + -1;
                    if (iVar19 == 0) {
                      iVar10 = 0;
                      if (iVar21 != 0) {
                        iVar10 = ((int)pcVar18 - iVar14) / iVar21;
                      }
                      iVar10 = iVar10 + 1;
                      goto LAB_00623cd0;
                    }
                  }
                  else {
                    pcVar18[1] = pcVar18[1] & 0xf8U | bVar5 & 3;
                  }
                }
                lVar8 = lVar8 + uVar3;
              } while (lVar8 + uVar3 + 0x40 != lVar26);
              iVar19 = (int)lVar26;
            }
            iVar10 = 0;
            if (iVar21 != 0) {
              iVar10 = (iVar19 - iVar14) / iVar21;
            }
LAB_00623cd0:
            *(long *)(lVar20 + 0x2f0) = lVar24;
            uVar22 = uVar22 + (long)(iVar10 << 4);
          } while ((lVar24 != 0) && (lVar23 = lVar24, uVar22 < param_2));
        }
        if (lVar24 == 0) {
          *(byte *)(*(long *)(lVar20 + 0x2f8) + 1) =
               *(byte *)(*(long *)(lVar20 + 0x2f8) + 1) & 0xf8 | *(byte *)(lVar20 + 0x20) & 3;
          uVar4 = *(uint *)(*(long *)(param_1 + 0x18) + 0xc);
          uVar15 = uVar4 + 3;
          if (-1 < (int)uVar4) {
            uVar15 = uVar4;
          }
          if ((0x40 < (int)uVar4) &&
             (*(uint *)(*(long *)(param_1 + 0x18) + 8) < (uint)((int)uVar15 >> 2))) {
            local_78 = CONCAT44(local_78._4_4_,uVar4 >> 1);
            FUN_00622224(param_1,FUN_00624c70,&local_78);
          }
          *(undefined1 *)(lVar20 + 0x21) = 0;
        }
      }
      goto LAB_006241ec;
    }
    uVar22 = 0;
    bVar7 = *(long *)(lVar20 + 0x28) != 0;
    if ((*(long *)(lVar20 + 0x28) != 0) && (param_2 != 0)) {
      uVar22 = 0;
      do {
        lVar24 = FUN_0062439c(lVar20);
        uVar22 = lVar24 + uVar22;
        bVar7 = *(long *)(lVar20 + 0x28) != 0;
        if (*(long *)(lVar20 + 0x28) == 0) break;
      } while (uVar22 < param_2);
    }
    if (bVar7) goto LAB_006241ec;
    uVar9 = 3;
  }
  *(undefined1 *)(lVar20 + 0x21) = uVar9;
LAB_006241ec:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return uVar22;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00624224  FUN_00624224 =====

void FUN_00624224(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x18);
  lVar1 = *(long *)(lVar3 + 0x2f8);
  *(undefined8 *)(lVar3 + 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  *(undefined8 *)(lVar3 + 0x38) = 0;
  if ((*(byte *)(lVar1 + 1) & 3) != 0) {
    FUN_00624a78(lVar3);
    lVar1 = *(long *)(lVar3 + 0x2f8);
  }
  if ((*(byte *)(*(long *)(lVar1 + 0x58) + 1) & 3) != 0) {
    FUN_00624a78(lVar3);
  }
  if (5 < *(int *)(*(long *)(param_1 + 0x18) + 0x4cc)) {
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0x4c0) + 1) & 3) != 0) {
      FUN_00624a78(lVar3);
    }
  }
  if (*PTR_LuauUdataDirectAccess4_0067dbc8 != '\0') {
    lVar1 = -0x2490;
    do {
      lVar4 = *(long *)(param_1 + 0x18);
      lVar2 = lVar4 + lVar1;
      if (5 < *(int *)(lVar2 + 0x2c3c)) {
        if ((*(byte *)(*(long *)(lVar2 + 0x2c30) + 1) & 3) != 0) {
          FUN_00624a78(lVar3);
        }
      }
      if (5 < *(int *)(lVar2 + 0x2c4c)) {
        if ((*(byte *)(*(long *)(lVar4 + lVar1 + 0x2c40) + 1) & 3) != 0) {
          FUN_00624a78(lVar3);
        }
      }
      if (5 < *(int *)(lVar4 + lVar1 + 0x2c5c)) {
        if ((*(byte *)(*(long *)(lVar4 + lVar1 + 0x2c50) + 1) & 3) != 0) {
          FUN_00624a78(lVar3);
        }
      }
      lVar1 = lVar1 + 0x48;
    } while (lVar1 != 0);
  }
  if (*PTR_LuauDirectFieldGet_0067db78 != '\0') {
    lVar1 = 0x806;
    do {
      lVar2 = *(long *)(lVar3 + lVar1 * 8);
      if ((lVar2 != 0) && ((*(byte *)(lVar2 + 1) & 3) != 0)) {
        FUN_00624a78(lVar3);
      }
      lVar1 = lVar1 + 1;
    } while (lVar1 != 0x888);
  }
  FUN_00624bc0(lVar3);
  *(undefined1 *)(lVar3 + 0x21) = 1;
  return;
}


// ===== 0062439c  FUN_0062439c =====

void FUN_0062439c(long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  char *__s;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  byte *pbVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  undefined1 uStack_59;
  long local_58;
  
  lVar2 = tpidr_el0;
  lVar3 = 0;
  local_58 = *(long *)(lVar2 + 0x28);
  pbVar10 = *(byte **)(param_1 + 0x28);
  bVar1 = *pbVar10;
  pbVar10[1] = pbVar10[1] | 4;
  if (0xb < bVar1) {
    if (bVar1 == 0xc) {
      lVar3 = *(long *)(pbVar10 + 0x10);
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(pbVar10 + 8);
      if ((*(byte *)(lVar3 + 1) & 3) != 0) {
        FUN_00624a78(param_1);
      }
      if ((*(byte *)(*(long *)(pbVar10 + 0x20) + 1) & 3) != 0) {
        FUN_00624a78(param_1);
      }
      uVar9 = (ulong)*(uint *)(pbVar10 + 0x3c);
      if (0 < (int)*(uint *)(pbVar10 + 0x3c)) {
        lVar3 = 0;
        do {
          if ((*(byte *)(*(long *)(*(long *)(pbVar10 + 0x28) + lVar3 * 8) + 1) & 3) != 0) {
            FUN_00624a78(param_1);
            uVar9 = (ulong)*(uint *)(pbVar10 + 0x3c);
          }
          lVar3 = lVar3 + 1;
        } while (lVar3 < (int)uVar9);
      }
      iVar7 = *(int *)(pbVar10 + 0x38);
      if (iVar7 < (int)uVar9) {
        lVar14 = 0;
        lVar3 = 0;
        do {
          if ((5 < *(int *)(*(long *)(pbVar10 + 0x18) + lVar14 + 0xc)) &&
             ((*(byte *)(*(long *)(*(long *)(pbVar10 + 0x18) + lVar14) + 1) & 3) != 0)) {
            FUN_00624a78(param_1);
            iVar7 = *(int *)(pbVar10 + 0x38);
            uVar9 = (ulong)*(uint *)(pbVar10 + 0x3c);
          }
          lVar3 = lVar3 + 1;
          lVar14 = lVar14 + 0x10;
        } while (lVar3 < (int)uVar9 - iVar7);
      }
      if ((*(byte *)(*(long *)(pbVar10 + 0x30) + 1) & 3) != 0) {
        FUN_00624a78(param_1);
        iVar7 = *(int *)(pbVar10 + 0x38);
        uVar9 = (ulong)*(uint *)(pbVar10 + 0x3c);
      }
      lVar3 = (-(uVar9 >> 0x1f) & 0xfffffff800000000 | uVar9 << 3) +
              (long)((int)uVar9 - iVar7) * 0x10 + 0x40;
      goto LAB_00624a48;
    }
    if (bVar1 != 0xd) {
      if (bVar1 == 0xf) {
        lVar3 = *(long *)(pbVar10 + 0x58);
        *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(pbVar10 + 0x80);
        if (lVar3 != 0) {
          *(byte *)(lVar3 + 1) = *(byte *)(lVar3 + 1) & 0xfc;
        }
        lVar3 = *(long *)(pbVar10 + 0x60);
        if (lVar3 != 0) {
          *(byte *)(lVar3 + 1) = *(byte *)(lVar3 + 1) & 0xfc;
        }
        iVar7 = *(int *)(pbVar10 + 0x98);
        if (0 < iVar7) {
          lVar14 = 0;
          lVar3 = 0;
          do {
            if ((5 < *(int *)(*(long *)(pbVar10 + 8) + lVar14 + 0xc)) &&
               ((*(byte *)(*(long *)(*(long *)(pbVar10 + 8) + lVar14) + 1) & 3) != 0)) {
              FUN_00624a78(param_1);
              iVar7 = *(int *)(pbVar10 + 0x98);
            }
            lVar3 = lVar3 + 1;
            lVar14 = lVar14 + 0x10;
          } while (lVar3 < iVar7);
        }
        uVar9 = (ulong)*(uint *)(pbVar10 + 0x94);
        if (0 < (int)*(uint *)(pbVar10 + 0x94)) {
          plVar8 = *(long **)(pbVar10 + 0x50);
          do {
            lVar3 = *plVar8;
            if (lVar3 != 0) {
              *(byte *)(lVar3 + 1) = *(byte *)(lVar3 + 1) & 0xfc;
            }
            uVar9 = uVar9 - 1;
            plVar8 = plVar8 + 1;
          } while (uVar9 != 0);
        }
        iVar7 = *(int *)(pbVar10 + 0x8c);
        if (0 < iVar7) {
          lVar3 = 0;
          do {
            lVar14 = *(long *)(*(long *)(pbVar10 + 0x18) + lVar3 * 8);
            if ((lVar14 != 0) && ((*(byte *)(lVar14 + 1) & 3) != 0)) {
              FUN_00624a78(param_1);
              iVar7 = *(int *)(pbVar10 + 0x8c);
            }
            lVar3 = lVar3 + 1;
          } while (lVar3 < iVar7);
        }
        uVar11 = *(uint *)(pbVar10 + 0x90);
        uVar9 = (ulong)uVar11;
        if (0 < (int)uVar11) {
          plVar8 = *(long **)(pbVar10 + 0x48);
          do {
            lVar3 = *plVar8;
            if (lVar3 != 0) {
              *(byte *)(lVar3 + 1) = *(byte *)(lVar3 + 1) & 0xfc;
            }
            uVar9 = uVar9 - 1;
            plVar8 = plVar8 + 3;
          } while (uVar9 != 0);
        }
        lVar3 = (long)*(int *)(pbVar10 + 0x88) * 4 + (long)(int)uVar11 * 0x18 +
                (long)*(int *)(pbVar10 + 0x98) * 0x10 +
                (long)*(int *)(pbVar10 + 0xa0) + (long)*(int *)(pbVar10 + 0xac) +
                ((long)*(int *)(pbVar10 + 0x94) + (long)iVar7) * 8 + 0xc0;
      }
      goto LAB_00624a48;
    }
    lVar3 = *(long *)(pbVar10 + 0x10);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(pbVar10 + 8);
    if ((*(byte *)(lVar3 + 1) & 3) != 0) {
      FUN_00624a78(param_1);
    }
    iVar7 = *(int *)(pbVar10 + 0x18);
    if (0 < iVar7) {
      lVar14 = 0;
      lVar3 = 0;
      do {
        if ((5 < *(int *)(*(long *)(pbVar10 + 0x20) + lVar14 + 0xc)) &&
           ((*(byte *)(*(long *)(*(long *)(pbVar10 + 0x20) + lVar14) + 1) & 3) != 0)) {
          FUN_00624a78(param_1);
          iVar7 = *(int *)(pbVar10 + 0x18);
        }
        lVar3 = lVar3 + 1;
        lVar14 = lVar14 + 0x10;
      } while (lVar3 < iVar7);
    }
    lVar3 = (long)iVar7 << 4;
LAB_00624910:
    lVar3 = lVar3 + 0x28;
    goto LAB_00624a48;
  }
  if (bVar1 != 7) {
    if (bVar1 == 8) {
      lVar3 = *(long *)(pbVar10 + 0x18);
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(pbVar10 + 0x10);
      if ((*(byte *)(lVar3 + 1) & 3) != 0) {
        FUN_00624a78(param_1);
      }
      if (pbVar10[3] == 0) {
        if ((*(byte *)(*(long *)(pbVar10 + 0x20) + 1) & 3) != 0) {
          FUN_00624a78(param_1);
        }
        uVar9 = (ulong)pbVar10[4];
        if (pbVar10[4] != 0) {
          uVar12 = 0;
          pbVar13 = pbVar10 + 0x28;
          do {
            if ((5 < *(int *)(pbVar13 + 0xc)) && ((*(byte *)(*(long *)pbVar13 + 1) & 3) != 0)) {
              FUN_00624a78(param_1);
              uVar9 = (ulong)pbVar10[4];
            }
            uVar12 = uVar12 + 1;
            pbVar13 = pbVar13 + 0x10;
          } while (uVar12 < uVar9);
        }
      }
      else {
        uVar9 = (ulong)pbVar10[4];
        if (pbVar10[4] != 0) {
          uVar12 = 0;
          pbVar13 = pbVar10 + 0x38;
          do {
            if ((5 < *(int *)(pbVar13 + 0xc)) && ((*(byte *)(*(long *)pbVar13 + 1) & 3) != 0)) {
              FUN_00624a78(param_1);
              uVar9 = (ulong)pbVar10[4];
            }
            uVar12 = uVar12 + 1;
            pbVar13 = pbVar13 + 0x10;
          } while (uVar12 < uVar9);
        }
      }
      lVar3 = uVar9 * 0x10;
      if (pbVar10[3] != 0) {
        lVar3 = lVar3 + 0x38;
        goto LAB_00624a48;
      }
      goto LAB_00624910;
    }
    if (bVar1 != 10) goto LAB_00624a48;
    bVar1 = pbVar10[5];
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(pbVar10 + 0x68);
    if (bVar1 == 0) {
      pbVar13 = *(byte **)(*(long *)(pbVar10 + 0x18) + 0x2f8);
      FUN_00624c78(param_1,pbVar10);
      if (pbVar10 == pbVar13) goto LAB_0062441c;
LAB_00624878:
      lVar3 = *(long *)(pbVar10 + 0x30);
      iVar7 = *(int *)(pbVar10 + 0x48);
      for (uVar9 = *(ulong *)(pbVar10 + 8); uVar9 < (ulong)(lVar3 + (long)iVar7 * 0x10);
          uVar9 = uVar9 + 0x10) {
        *(undefined4 *)(uVar9 + 0xc) = 0;
      }
    }
    else {
      FUN_00624c78(param_1,pbVar10);
LAB_0062441c:
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      *(byte **)(param_1 + 0x30) = pbVar10;
      *(undefined8 *)(pbVar10 + 0x68) = uVar6;
      pbVar10[1] = pbVar10[1] & 0xfb;
      if (*(char *)(param_1 + 0x21) == '\x03') goto LAB_00624878;
    }
    if (*(char *)(param_1 + 0x21) == '\x01') {
      FUN_00622224(pbVar10,FUN_00624d3c,&uStack_59);
    }
    lVar3 = (long)*(int *)(pbVar10 + 0x4c) * 0x28 + (long)*(int *)(pbVar10 + 0x48) * 0x10 + 0x80;
    goto LAB_00624a48;
  }
  lVar3 = *(long *)(pbVar10 + 0x10);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(pbVar10 + 0x28);
  if ((lVar3 != 0) && ((*(byte *)(lVar3 + 1) & 3) != 0)) {
    FUN_00624a78(param_1);
    lVar3 = *(long *)(pbVar10 + 0x10);
  }
  __s = (char *)FUN_00624c08(param_1,lVar3);
  if (__s == (char *)0x0) {
LAB_0062491c:
    lVar3 = (long)*(int *)(pbVar10 + 8);
    if (*(int *)(pbVar10 + 8) != 0) {
      lVar14 = lVar3 << 4;
      do {
        lVar3 = lVar3 + -1;
        if ((5 < *(int *)(*(long *)(pbVar10 + 0x18) + lVar14 + -4)) &&
           ((*(byte *)(*(long *)(*(long *)(pbVar10 + 0x18) + lVar14 + -0x10) + 1) & 3) != 0)) {
          FUN_00624a78(param_1);
        }
        lVar14 = lVar14 + -0x10;
      } while ((int)lVar3 != 0);
    }
    uVar11 = 0;
LAB_0062496c:
    lVar3 = (ulong)(uint)~(-1 << (ulong)(pbVar10[6] & 0x1f)) << 5;
    do {
      plVar8 = (long *)(*(long *)(pbVar10 + 0x20) + lVar3);
      if (*(int *)((long)plVar8 + 0xc) == 0) {
        if (5 < (*(uint *)((long)plVar8 + 0x1c) & 0xe)) {
          *(uint *)((long)plVar8 + 0x1c) = *(uint *)((long)plVar8 + 0x1c) & 0xfffffff0 | 0xe;
        }
      }
      else {
        if (((((ulong)__s & 1) == 0) &&
            (lVar14 = *(long *)(pbVar10 + 0x20) + lVar3, 5 < (*(uint *)(lVar14 + 0x1c) & 0xe))) &&
           ((*(byte *)(*(long *)(lVar14 + 0x10) + 1) & 3) != 0)) {
          FUN_00624a78(param_1);
        }
        if (((uVar11 == 0) && (5 < *(int *)((long)plVar8 + 0xc))) &&
           ((*(byte *)(*plVar8 + 1) & 3) != 0)) {
          FUN_00624a78(param_1);
        }
      }
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != -0x20);
    if (((uint)__s | uVar11) == 1) goto LAB_00624a20;
  }
  else {
    pcVar4 = strchr(__s,0x6b);
    pcVar5 = strchr(__s,0x76);
    __s = (char *)(ulong)(pcVar4 != (char *)0x0);
    if (pcVar4 == (char *)0x0 && pcVar5 == (char *)0x0) {
      __s = (char *)0x0;
      goto LAB_0062491c;
    }
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    *(byte **)(param_1 + 0x38) = pbVar10;
    *(undefined8 *)(pbVar10 + 0x28) = uVar6;
    if ((pcVar4 == (char *)0x0) || (pcVar5 == (char *)0x0)) {
      if (pcVar5 == (char *)0x0) goto LAB_0062491c;
      uVar11 = 1;
      goto LAB_0062496c;
    }
LAB_00624a20:
    pbVar10[1] = pbVar10[1] & 0xfb;
  }
  uVar11 = 1 << (ulong)(pbVar10[6] & 0x1f);
  lVar3 = (-(ulong)(uVar11 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar11 << 5) +
          (long)*(int *)(pbVar10 + 8) * 0x10 + 0x30;
LAB_00624a48:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar3);
  }
  return;
}


// ===== 00624a78  FUN_00624a78 =====

void FUN_00624a78(long param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined8 uVar4;
  
  bVar1 = param_2[1];
  while( true ) {
    bVar2 = *param_2;
    bVar1 = bVar1 & 0xfc;
    param_2[1] = bVar1;
    if (bVar2 != 9) break;
    pbVar3 = *(byte **)(param_2 + 8);
    param_2[1] = bVar1 | 4;
    if (pbVar3 == (byte *)0x0) {
      return;
    }
    bVar1 = pbVar3[1];
    param_2 = pbVar3;
    if ((bVar1 & 3) == 0) {
      return;
    }
  }
  if (bVar2 < 0xc) {
    if (bVar2 < 10) {
      if (bVar2 == 7) {
        uVar4 = *(undefined8 *)(param_1 + 0x28);
        *(byte **)(param_1 + 0x28) = param_2;
        *(undefined8 *)(param_2 + 0x28) = uVar4;
        return;
      }
      if (bVar2 != 8) {
        return;
      }
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      *(byte **)(param_1 + 0x28) = param_2;
      *(undefined8 *)(param_2 + 0x10) = uVar4;
      return;
    }
    if (bVar2 == 10) {
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      *(byte **)(param_1 + 0x28) = param_2;
      *(undefined8 *)(param_2 + 0x68) = uVar4;
      return;
    }
    if (bVar2 != 0xb) {
      return;
    }
  }
  else {
    if (bVar2 < 0xf) {
      if ((bVar2 != 0xc) && (bVar2 != 0xd)) {
        return;
      }
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      *(byte **)(param_1 + 0x28) = param_2;
      *(undefined8 *)(param_2 + 8) = uVar4;
      return;
    }
    if (bVar2 == 0xf) {
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      *(byte **)(param_1 + 0x28) = param_2;
      *(undefined8 *)(param_2 + 0x80) = uVar4;
      return;
    }
    if (bVar2 != 0x10) {
      return;
    }
    pbVar3 = *(byte **)(param_2 + 8);
    if ((5 < *(int *)(pbVar3 + 0xc)) && ((*(byte *)(*(long *)pbVar3 + 1) & 3) != 0)) {
      FUN_00624a78();
      pbVar3 = *(byte **)(param_2 + 8);
    }
    if (pbVar3 != param_2 + 0x10) {
      return;
    }
    bVar1 = param_2[1];
  }
  param_2[1] = bVar1 | 4;
  return;
}


// ===== 00624bc0  FUN_00624bc0 =====

void FUN_00624bc0(long param_1)

{
  long lVar1;
  
  lVar1 = 0x328;
  do {
    if ((*(long *)(param_1 + lVar1) != 0) && ((*(byte *)(*(long *)(param_1 + lVar1) + 1) & 3) != 0))
    {
      FUN_00624a78(param_1);
    }
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x398);
  return;
}


// ===== 00624c08  FUN_00624c08 =====

long * FUN_00624c08(long param_1,long param_2)

{
  long *plVar1;
  
  if ((param_2 != 0) && ((*(byte *)(param_2 + 3) >> 2 & 1) == 0)) {
    plVar1 = (long *)FUN_00631210(param_2,2,*(undefined8 *)(param_1 + 0x418));
    if (plVar1 != (long *)0x0) {
      if (*(int *)((long)plVar1 + 0xc) == 6) {
        plVar1 = (long *)(*plVar1 + 0x18);
      }
      else {
        plVar1 = (long *)0x0;
      }
    }
    return plVar1;
  }
  return (long *)0x0;
}


// ===== 00624c5c  FUN_00624c5c =====

void FUN_00624c5c(undefined8 param_1,long *param_2)

{
  FUN_0062e818(param_1,*param_2,*(undefined4 *)(*param_2 + 8),(int)param_2[1]);
  return;
}


// ===== 00624c70  FUN_00624c70 =====

void FUN_00624c70(undefined8 param_1,undefined4 *param_2)

{
  FUN_0062af10(param_1,*param_2);
  return;
}


// ===== 00624c78  FUN_00624c78 =====

void FUN_00624c78(undefined8 param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  if ((*(byte *)(*(long *)(param_2 + 0x58) + 1) & 3) != 0) {
    FUN_00624a78(param_1);
  }
  lVar1 = *(long *)(param_2 + 0x70);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 1) = *(byte *)(lVar1 + 1) & 0xfc;
  }
  plVar2 = *(long **)(param_2 + 8);
  for (plVar3 = *(long **)(param_2 + 0x30); plVar3 < plVar2; plVar3 = plVar3 + 2) {
    if ((5 < *(int *)((long)plVar3 + 0xc)) && ((*(byte *)(*plVar3 + 1) & 3) != 0)) {
      FUN_00624a78(param_1);
      plVar2 = *(long **)(param_2 + 8);
    }
  }
  for (lVar1 = *(long *)(param_2 + 0x60); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x20)) {
    *(undefined1 *)(lVar1 + 3) = 1;
    if ((*(byte *)(lVar1 + 1) & 3) != 0) {
      FUN_00624a78(param_1,lVar1);
    }
  }
  return;
}


// ===== 00624d3c  FUN_00624d3c =====

void FUN_00624d3c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar2 = *(ulong *)(param_1 + 0x40);
  uVar5 = *(ulong *)(param_1 + 8);
  while (uVar6 = uVar5, uVar2 <= *(ulong *)(param_1 + 0x20)) {
    puVar1 = (ulong *)(uVar2 + 0x10);
    uVar2 = uVar2 + 0x28;
    uVar5 = *puVar1;
    if (*puVar1 <= uVar6) {
      uVar5 = uVar6;
    }
  }
  iVar3 = *(int *)(param_1 + 0x4c);
  if (iVar3 < 0x4e21) {
    lVar7 = *(long *)(param_1 + 0x30);
    if ((0x10 < iVar3) &&
       (uVar4 = (int)(*(ulong *)(param_1 + 0x20) - *(ulong *)(param_1 + 0x40) >> 3) * -0x33333333,
       (-(ulong)(uVar4 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar4 << 1) + (long)(int)uVar4 <
       (ulong)(long)iVar3)) {
      FUN_00622434(param_1,(ulong)(long)iVar3 >> 1 & 0x7fffffff);
    }
    uVar4 = *(uint *)(param_1 + 0x48);
    if ((0x5a < (int)uVar4) &&
       (uVar6 = uVar6 - lVar7,
       (ulong)(((long)(uVar6 * 0x10000000) >> 0x20) * 2 + (long)(int)(uVar6 >> 4)) <
       (ulong)(long)(int)uVar4)) {
      FUN_006222f4(param_1,uVar4 >> 1,0);
      return;
    }
  }
  return;
}


// ===== 00624e24  FUN_00624e24 =====

void FUN_00624e24(long param_1,long param_2,undefined8 param_3)

{
  if (*(byte *)(param_1 + 0x21) - 1 < 3) {
    FUN_00624a78(param_1,param_3);
    return;
  }
  *(byte *)(param_2 + 1) = *(byte *)(param_2 + 1) & 0xf8 | *(byte *)(param_1 + 0x20) & 3;
  return;
}


// ===== 00624e54  FUN_00624e54 =====

void FUN_00624e54(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x21) == '\x02') {
    FUN_00624a78(param_1,param_3);
    return;
  }
  *(byte *)(param_2 + 1) = *(byte *)(param_2 + 1) & 0xfb;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(long *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_2 + 0x28) = uVar1;
  return;
}


// ===== 00624e84  FUN_00624e84 =====

void FUN_00624e84(long param_1,long param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 1);
  if ((bVar1 & 7) == 0) {
    if (2 < *(byte *)(*(long *)(param_1 + 0x18) + 0x21) - 1) {
      *(byte *)(param_2 + 1) = *(byte *)(*(long *)(param_1 + 0x18) + 0x20) & 3 | bVar1;
      return;
    }
    *(byte *)(param_2 + 1) = bVar1 | 4;
    if (5 < *(int *)((long)*(long **)(param_2 + 8) + 0xc)) {
      if ((*(byte *)(**(long **)(param_2 + 8) + 1) & 3) != 0) {
        FUN_00624e24(*(undefined8 *)(param_1 + 0x18));
        return;
      }
    }
  }
  return;
}


// ===== 00624eec  FUN_00624eec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00624eec(lua_State *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  lua_State lVar3;
  byte bVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  undefined4 *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined1 auVar20 [16];
  undefined8 local_68;
  undefined4 local_5c;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  luaL_checktype(param_1,1,0xc);
  lVar16 = **(long **)(param_1 + 0x10);
  puVar9 = (undefined1 *)FUN_00628d60(param_1,0x28,param_1[4]);
  lVar11 = *(long *)(param_1 + 0x18);
  lVar3 = param_1[4];
  *puVar9 = 0xd;
  bVar4 = *(byte *)(lVar11 + 0x20);
  uVar2 = *(uint *)(lVar16 + 0x38);
  *(long *)(puVar9 + 0x10) = lVar16;
  *(lua_State *)(puVar9 + 2) = lVar3;
  *(uint *)(puVar9 + 0x18) = uVar2;
  puVar9[1] = bVar4 & 3;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00628ac4(param_1);
  }
  lVar10 = FUN_00628ad8(param_1,(ulong)uVar2 << 4);
  puVar1 = *(undefined8 **)(param_1 + 8);
  lVar11 = *(long *)(param_1 + 0x10);
  uVar2 = *(uint *)(lVar16 + 0x38);
  *(long *)(puVar9 + 0x20) = lVar10;
  if (0 < (int)uVar2) {
    lVar14 = (ulong)uVar2 - 1;
    uVar13 = (ulong)(uVar2 + 3) & 0xfffffffc;
    puVar15 = (undefined4 *)(lVar10 + 0x2c);
    lVar10 = _DAT_0024e340;
    lVar17 = _UNK_0024e348;
    lVar18 = _DAT_0024e100;
    lVar19 = _UNK_0024e108;
    do {
      auVar20._8_8_ = lVar14;
      auVar20._0_8_ = lVar14;
      auVar8._8_8_ = lVar19;
      auVar8._0_8_ = lVar18;
      auVar20 = NEON_cmhs(auVar20,auVar8,8);
      if ((auVar20 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        puVar15[-8] = 0;
      }
      if ((auVar20 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        puVar15[-4] = 0;
      }
      auVar6._8_8_ = lVar14;
      auVar6._0_8_ = lVar14;
      auVar7._8_8_ = lVar17;
      auVar7._0_8_ = lVar10;
      auVar20 = NEON_cmhs(auVar6,auVar7,8);
      if ((auVar20 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        *puVar15 = 0;
      }
      if ((auVar20 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        puVar15[4] = 0;
      }
      lVar10 = lVar10 + 4;
      lVar17 = lVar17 + 4;
      lVar18 = lVar18 + 4;
      lVar19 = lVar19 + 4;
      uVar13 = uVar13 - 4;
      puVar15 = puVar15 + 0x10;
    } while (uVar13 != 0);
  }
  *puVar1 = puVar9;
  iVar12 = (int)((ulong)((long)puVar1 - lVar11) >> 4);
  lVar11 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)puVar1 + 0xc) = 0xd;
  *(long *)(param_1 + 8) = lVar11 + 0x10;
  if (iVar12 != 1) {
    if (iVar12 != 2) {
                    /* WARNING: Subroutine does not return */
      luaL_errorL(param_1,"wrong number of arguments for constructing a \'%s\'",
                  *(long *)(lVar16 + 0x10) + 0x18);
    }
    if (0 < *(int *)(lVar16 + 0x38)) {
      lVar10 = 0;
      lVar11 = 0;
      do {
        local_5c = 6;
        local_68 = *(undefined8 *)(*(long *)(lVar16 + 0x28) + lVar11 * 8);
        FUN_00642c8c(param_1,*(long *)(param_1 + 0x10) + 0x10,&local_68,
                     *(long *)(puVar9 + 0x20) + lVar10);
        lVar11 = lVar11 + 1;
        lVar10 = lVar10 + 0x10;
      } while (lVar11 < *(int *)(lVar16 + 0x38));
    }
  }
  if (((byte)puVar9[1] >> 2 & 1) != 0) {
    lVar11 = *(long *)(param_1 + 0x18);
    puVar9[1] = puVar9[1] & 0xfb;
    *(undefined8 *)(puVar9 + 8) = *(undefined8 *)(lVar11 + 0x30);
    *(undefined1 **)(lVar11 + 0x30) = puVar9;
  }
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00625120  FUN_00625120 =====

void FUN_00625120(long param_1,long param_2,double param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  double *pdVar3;
  double *pdVar4;
  long lVar5;
  
  pdVar3 = (double *)
           (*(long *)(*(long *)(param_2 + 0x20) + 0x20) +
           (ulong)(*(uint *)((long)param_3 + 0x10) &
                  ~(-1 << (ulong)(*(byte *)(*(long *)(param_2 + 0x20) + 6) & 0x1f))) * 0x20);
  while( true ) {
    uVar1 = *(uint *)((long)pdVar3 + 0x1c);
    if ((((uVar1 & 0xf) == 6) && (pdVar4 = pdVar3, pdVar3[2] == param_3)) ||
       (pdVar4 = (double *)&DAT_00285948, uVar1 < 0x10)) break;
    pdVar3 = pdVar3 + ((long)((ulong)uVar1 << 0x20) >> 0x24) * 4;
  }
  lVar5 = *param_4;
  plVar2 = (long *)(*(long *)(param_2 + 0x18) +
                   (long)((int)*pdVar4 - *(int *)(param_2 + 0x38)) * 0x10);
  plVar2[1] = param_4[1];
  *plVar2 = lVar5;
  if (((5 < *(int *)((long)param_4 + 0xc)) && ((*(byte *)(param_2 + 1) >> 2 & 1) != 0)) &&
     ((*(byte *)(*param_4 + 1) & 3) != 0)) {
    FUN_00624e24(*(undefined8 *)(param_1 + 0x18));
    return;
  }
  return;
}


// ===== 006251cc  luaL_openlibs =====

/* luaL_openlibs(lua_State*) */

void luaL_openlibs(lua_State *param_1)

{
  undefined **ppuVar1;
  _func_int_lua_State_ptr *p_Var2;
  undefined **ppuVar3;
  
  ppuVar3 = &PTR_DAT_0067a460;
  p_Var2 = (_func_int_lua_State_ptr *)PTR_luaopen_base_0067d6b0;
  if (*PTR_LuauIntegerLibrary_0067db98 != '\0') {
    ppuVar3 = &PTR_DAT_0067a390;
  }
  do {
    lua_pushcclosurek(param_1,p_Var2,(char *)0x0,0,(_func_int_lua_State_ptr_int *)0x0);
    lua_pushstring(param_1,*ppuVar3);
    FUN_00622574(param_1,*(long *)(param_1 + 8) + -0x20,0,0);
    ppuVar1 = ppuVar3 + 3;
    ppuVar3 = ppuVar3 + 2;
    p_Var2 = (_func_int_lua_State_ptr *)*ppuVar1;
  } while ((_func_int_lua_State_ptr *)*ppuVar1 != (_func_int_lua_State_ptr *)0x0);
  return;
}


// ===== 00625258  luaL_sandbox =====

/* luaL_sandbox(lua_State*) */

void luaL_sandbox(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = *(long *)(param_1 + 8);
  *(undefined4 *)(lVar3 + 0xc) = 0;
  plVar4 = (long *)(lVar3 + 0x10);
  while( true ) {
    *(long **)(param_1 + 8) = plVar4;
    iVar2 = lua_next(param_1,-0x2712);
    if (iVar2 == 0) break;
    plVar4 = (long *)(*(long *)(param_1 + 8) + -0x10);
    if ((plVar4 != &DAT_00285948) && (*(int *)(*(long *)(param_1 + 8) + -4) == 7)) {
      *(undefined1 *)(*plVar4 + 4) = 1;
    }
  }
  lua_pushlstring(param_1,"",0);
  iVar2 = lua_getmetatable(param_1,-1);
  lVar3 = *(long *)(param_1 + 8);
  if (iVar2 == 0) {
    lVar1 = -0x10;
  }
  else {
    lVar1 = -0x20;
    *(undefined1 *)(*(long *)(lVar3 + -0x10) + 4) = 1;
  }
  *(long *)(param_1 + 8) = lVar3 + lVar1;
  plVar4 = (long *)FUN_00618038(param_1,0xffffd8ee);
  *(undefined1 *)(*plVar4 + 4) = 1;
  plVar4 = (long *)FUN_00618038(param_1,0xffffd8ee);
  *(undefined1 *)(*plVar4 + 5) = 1;
  return;
}


// ===== 00625340  luaL_sandboxthread =====

/* luaL_sandboxthread(lua_State*) */

void luaL_sandboxthread(lua_State *param_1)

{
  long *plVar1;
  
  lua_createtable(param_1,0,0);
  lua_createtable(param_1,0,0);
  lua_pushvalue(param_1,-0x2712);
  lua_setfield(param_1,-2,"__index");
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 8) + -0x10) + 4) = 1;
  lua_setmetatable(param_1,-2);
  lua_replace(param_1,-0x2712);
  plVar1 = (long *)FUN_00618038(param_1,0xffffd8ee);
  *(undefined1 *)(*plVar1 + 5) = 1;
  return;
}


// ===== 006253d4  luaL_newstate =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* luaL_newstate() */

void luaL_newstate(void)

{
  lua_newstate(FUN_006253e4,(void *)0x0);
  return;
}


// ===== 006253e4  FUN_006253e4 =====

void * FUN_006253e4(undefined8 param_1,void *param_2,undefined8 param_3,size_t param_4)

{
  void *pvVar1;
  
  if (param_4 != 0) {
    pvVar1 = realloc(param_2,param_4);
    return pvVar1;
  }
  free(param_2);
  return (void *)0x0;
}


// ===== 0062540c  luaopen_coroutine =====

/* luaopen_coroutine(lua_State*) */

undefined8 luaopen_coroutine(lua_State *param_1)

{
  luaL_register(param_1,"coroutine",(luaL_Reg *)&PTR_s_create_0067a520);
  lua_pushcclosurek(param_1,FUN_00625478,"resume",0,FUN_00625514);
  lua_setfield(param_1,-2,"resume");
  return 1;
}


// ===== 00625478  FUN_00625478 =====

undefined8 FUN_00625478(lua_State *param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  
  plVar2 = *(long **)(param_1 + 0x10);
  plVar1 = plVar2;
  if (*(long **)(param_1 + 8) <= plVar2) {
    plVar1 = &DAT_00285948;
  }
  if ((*(int *)((long)plVar1 + 0xc) == 10) && (lVar5 = *plVar1, lVar5 != 0)) {
    iVar3 = FUN_006256f4(param_1,lVar5,
                         (int)((ulong)((long)*(long **)(param_1 + 8) - (long)plVar2) >> 4) + -1);
    if (iVar3 == -2) {
      FUN_006255a0(param_1,lVar5);
      return 0xffffffff;
    }
    uVar4 = FUN_0062568c(param_1,iVar3);
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  luaL_typeerrorL(param_1,1,"thread");
}


// ===== 00625514  FUN_00625514 =====

undefined8 FUN_00625514(lua_State *param_1)

{
  long *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x10);
  if (*(long **)(param_1 + 8) <= *(long **)(param_1 + 0x10)) {
    plVar1 = &DAT_00285948;
  }
  if ((*(int *)((long)plVar1 + 0xc) == 10) && (*plVar1 != 0)) {
    if (*(char *)(*plVar1 + 3) == '\x06') {
      FUN_006255a0(param_1);
      return 0xffffffff;
    }
    uVar2 = FUN_00625600(param_1);
    uVar3 = FUN_0062568c(param_1,uVar2);
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  luaL_typeerrorL(param_1,1,"thread");
}


// ===== 006255a0  FUN_006255a0 =====

void FUN_006255a0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x540);
  if (lVar1 != 0) {
    FUN_00632aa8(param_1,lVar1,param_2);
  }
  if (*(ushort *)(param_1 + 0x50) <= *(ushort *)(param_1 + 0x52)) {
    *(undefined1 *)(param_1 + 3) = 6;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_006214f8(param_1,"attempt to break across metamethod/C-call boundary");
}


// ===== 00625600  FUN_00625600 =====

ulong FUN_00625600(lua_State *param_1,lua_State *param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  if ((byte)param_2[3] < 2) {
    uVar3 = (ulong)(*(long *)(param_2 + 8) - *(long *)(param_2 + 0x10)) >> 4;
    iVar2 = (int)uVar3;
    iVar1 = lua_checkstack(param_1,iVar2 + 1);
    uVar3 = uVar3 & 0xffffffff;
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      luaL_errorL(param_1,"too many results to resume");
    }
  }
  else {
    lua_rawcheckstack(param_1,2);
    uVar3 = 0xffffffff;
    iVar2 = 1;
  }
  lua_xmove(param_2,param_1,iVar2);
  return uVar3;
}


// ===== 0062568c  FUN_0062568c =====

int FUN_0062568c(lua_State *param_1,uint param_2)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  if ((int)param_2 < 0) {
    *puVar1 = 0;
    iVar3 = 2;
    lVar2 = *(long *)(param_1 + 8);
    puVar1[3] = 1;
    param_2 = 0xfffffffe;
  }
  else {
    iVar3 = param_2 + 1;
    param_2 = ~param_2;
    *puVar1 = 1;
    lVar2 = *(long *)(param_1 + 8);
    puVar1[3] = 1;
  }
  *(long *)(param_1 + 8) = lVar2 + 0x10;
  lua_insert(param_1,param_2);
  return iVar3;
}


// ===== 006256f4  FUN_006256f4 =====

ulong FUN_006256f4(lua_State *param_1,lua_State *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  ulong uVar5;
  
  if ((param_2[3] == (lua_State)0x1) || (uVar1 = lua_costatus(param_1,param_2), uVar1 == 1)) {
    if (param_3 == 0) {
      if (0x1f400 < *(long *)(param_2 + 8) - *(long *)(param_2 + 0x10)) goto LAB_00625828;
      param_3 = 0;
    }
    else {
      iVar2 = lua_checkstack(param_2,param_3);
      if (iVar2 == 0) {
LAB_00625828:
        pcVar4 = "too many arguments to resume";
        goto LAB_00625830;
      }
      lua_xmove(param_1,param_2,param_3);
    }
    param_2[6] = param_1[6];
    uVar1 = lua_resume(param_2,param_1,param_3);
    if (uVar1 < 2) {
      uVar5 = (ulong)(*(long *)(param_2 + 8) - *(long *)(param_2 + 0x10)) >> 4;
      iVar2 = (int)uVar5;
      if (iVar2 != 0) {
        if ((0x13 < iVar2) && (iVar3 = lua_checkstack(param_1,iVar2 + 1), iVar3 == 0)) {
          pcVar4 = "too many results to resume";
LAB_00625830:
                    /* WARNING: Subroutine does not return */
          luaL_errorL(param_1,pcVar4);
        }
        lua_xmove(param_2,param_1,iVar2);
      }
      goto LAB_00625814;
    }
    if (uVar1 == 6) {
      uVar5 = 0xfffffffe;
      goto LAB_00625814;
    }
    lua_xmove(param_2,param_1,1);
  }
  else {
    lua_pushfstringL(param_1,"cannot resume %s coroutine",(&PTR_s_running_0067a5a0)[uVar1]);
  }
  uVar5 = 0xffffffff;
LAB_00625814:
  return uVar5 & 0xffffffff;
}


// ===== 00625844  FUN_00625844 =====

undefined8 FUN_00625844(lua_State *param_1)

{
  lua_State *plVar1;
  
  luaL_checktype(param_1,1,8);
  plVar1 = (lua_State *)lua_newthread(param_1);
  lua_xpush(param_1,plVar1,1);
  return 1;
}


// ===== 00625888  FUN_00625888 =====

undefined8 FUN_00625888(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = lua_pushthread(param_1);
  if (iVar1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    *(undefined4 *)(lVar2 + 0xc) = 0;
    *(long *)(param_1 + 8) = lVar2 + 0x10;
  }
  return 1;
}


// ===== 006258c0  FUN_006258c0 =====

undefined8 FUN_006258c0(lua_State *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (*(undefined8 **)(param_1 + 8) <= *(undefined8 **)(param_1 + 0x10)) {
    puVar1 = &DAT_00285948;
  }
  if ((*(int *)((long)puVar1 + 0xc) == 10) && ((lua_State *)*puVar1 != (lua_State *)0x0)) {
    uVar2 = lua_costatus(param_1,(lua_State *)*puVar1);
    lua_pushstring(param_1,(&PTR_s_running_0067a5a0)[uVar2 & 0xffffffff]);
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  luaL_typeerrorL(param_1,1,"thread");
}


// ===== 00625938  FUN_00625938 =====

undefined8 FUN_00625938(lua_State *param_1)

{
  FUN_00625844();
  lua_pushcclosurek(param_1,FUN_00625b20,(char *)0x0,1,FUN_00625bac);
  return 1;
}


// ===== 0062597c  FUN_0062597c =====

undefined8 FUN_0062597c(lua_State *param_1)

{
  lua_yield(param_1,(int)((ulong)(*(long *)(param_1 + 8) - *(long *)(param_1 + 0x10)) >> 4));
  return 0xffffffff;
}


// ===== 006259a0  FUN_006259a0 =====

undefined8 FUN_006259a0(long param_1)

{
  uint *puVar1;
  long lVar2;
  
  puVar1 = *(uint **)(param_1 + 8);
  *puVar1 = (uint)(*(ushort *)(param_1 + 0x50) <= *(ushort *)(param_1 + 0x52));
  lVar2 = *(long *)(param_1 + 8);
  puVar1[3] = 1;
  *(long *)(param_1 + 8) = lVar2 + 0x10;
  return 1;
}


// ===== 006259d8  FUN_006259d8 =====

undefined8 FUN_006259d8(lua_State *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  lua_State lVar3;
  uint uVar4;
  char *pcVar5;
  ulong uVar6;
  long lVar7;
  lua_State *plVar8;
  undefined8 uVar9;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar2 <= *(undefined8 **)(param_1 + 0x10)) {
    puVar1 = &DAT_00285948;
  }
  if ((*(int *)((long)puVar1 + 0xc) != 10) ||
     (plVar8 = (lua_State *)*puVar1, plVar8 == (lua_State *)0x0)) {
                    /* WARNING: Subroutine does not return */
    luaL_typeerrorL(param_1,1,"thread");
  }
  uVar4 = lua_costatus(param_1,plVar8);
  if (1 < uVar4 - 3 && uVar4 != 1) {
                    /* WARNING: Subroutine does not return */
    luaL_errorL(param_1,"cannot close %s coroutine",(&PTR_s_running_0067a5a0)[uVar4]);
  }
  if ((byte)plVar8[3] < 2) {
    uVar9 = 1;
    *(undefined4 *)puVar2 = 1;
    lVar7 = *(long *)(param_1 + 8);
    *(undefined4 *)((long)puVar2 + 0xc) = 1;
    *(long *)(param_1 + 8) = lVar7 + 0x10;
    goto LAB_00625ad4;
  }
  *(undefined4 *)puVar2 = 0;
  lVar7 = *(long *)(param_1 + 8);
  lVar3 = plVar8[3];
  *(undefined4 *)((long)puVar2 + 0xc) = 1;
  *(long *)(param_1 + 8) = lVar7 + 0x10;
  if (lVar3 == (lua_State)0x5) {
    pcVar5 = "error in error handling";
    uVar6 = 0x17;
LAB_00625aa8:
    lua_pushlstring(param_1,pcVar5,uVar6);
  }
  else {
    if (lVar3 == (lua_State)0x4) {
      pcVar5 = "not enough memory";
      uVar6 = 0x11;
      goto LAB_00625aa8;
    }
    if ((*(long *)(plVar8 + 8) - *(long *)(plVar8 + 0x10) & 0xffffffff0U) != 0) {
      lua_xmove(plVar8,param_1,1);
    }
  }
  uVar9 = 2;
LAB_00625ad4:
  lua_resetthread(plVar8);
  return uVar9;
}


// ===== 00625b20  FUN_00625b20 =====

int FUN_00625b20(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_00618038(param_1,0xffffd8ed);
  if (*(int *)((long)puVar2 + 0xc) == 10) {
    uVar3 = *puVar2;
  }
  else {
    uVar3 = 0;
  }
  iVar1 = FUN_006256f4(param_1,uVar3,
                       (ulong)(*(long *)(param_1 + 8) - *(long *)(param_1 + 0x10)) >> 4);
  if (iVar1 == -2) {
    FUN_006255a0(param_1,uVar3);
    iVar1 = -1;
  }
  else {
    FUN_00625c0c(param_1,iVar1);
  }
  return iVar1;
}


// ===== 00625bac  FUN_00625bac =====

undefined4 FUN_00625bac(undefined8 param_1)

{
  undefined4 uVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00618038(param_1,0xffffd8ed);
  if (*(char *)(*plVar2 + 3) == '\x06') {
    FUN_006255a0(param_1);
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = FUN_00625600(param_1);
    FUN_00625c0c(param_1,uVar1);
  }
  return uVar1;
}


// ===== 00625c0c  FUN_00625c0c =====

int FUN_00625c0c(lua_State *param_1,int param_2)

{
  eh_frame_hdr eVar1;
  
  if (-1 < param_2) {
    return param_2;
  }
  if ((*(eh_frame_hdr **)(param_1 + 8) != &eh_frame_hdr_00285958) &&
     ((eVar1 = (*(eh_frame_hdr **)(param_1 + 8))[-1], eVar1 == (eh_frame_hdr)0x6 ||
      (eVar1 == (eh_frame_hdr)0x3)))) {
    luaL_where(param_1,1);
    lua_insert(param_1,-2);
    lua_concat(param_1,2);
  }
                    /* WARNING: Subroutine does not return */
  lua_error(param_1);
}


// ===== 00625c84  luaopen_debug =====

/* luaopen_debug(lua_State*) */

undefined8 luaopen_debug(lua_State *param_1)

{
  luaL_register(param_1,"debug",(luaL_Reg *)&PTR_DAT_0067a5c8);
  return 1;
}


// ===== 00625cac  FUN_00625cac =====

uint FUN_00625cac(lua_State *param_1)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  byte *pbVar7;
  size_t sVar8;
  char *pcVar9;
  uint uVar10;
  double *pdVar11;
  undefined8 *puVar12;
  long lVar13;
  lua_State *plVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 uVar18;
  char acStack_1c8 [32];
  char *local_1a8 [3];
  char *local_190;
  int local_184;
  byte local_17f;
  char local_17e;
  long local_70;
  
  lVar3 = tpidr_el0;
  uVar16 = 0;
  local_70 = *(long *)(lVar3 + 0x28);
  bVar4 = true;
  puVar12 = *(undefined8 **)(param_1 + 0x10);
  plVar14 = param_1;
  if (puVar12 < *(undefined8 **)(param_1 + 8)) {
    bVar5 = true;
    uVar17 = 0;
    if (puVar12 != &DAT_00285948) {
      if (*(int *)((long)puVar12 + 0xc) == 10) {
        plVar14 = (lua_State *)*puVar12;
        bVar5 = plVar14 == param_1;
        if (bVar5) {
          bVar4 = false;
          uVar17 = 0;
          uVar16 = 1;
        }
        else {
          uVar16 = 1;
          lua_rawcheckstack(plVar14,1);
          bVar4 = false;
          uVar17 = (ulong)(*(long *)(plVar14 + 8) - *(long *)(plVar14 + 0x10)) >> 4;
        }
      }
      else {
        uVar16 = 0;
        uVar17 = 0;
      }
    }
  }
  else {
    bVar5 = true;
    uVar17 = 0;
  }
  iVar6 = lua_isnumber(param_1,uVar16 + 1);
  if (iVar6 == 0) {
    if (bVar4) {
      puVar12 = *(undefined8 **)(param_1 + 0x10);
      if (((puVar12 < *(undefined8 **)(param_1 + 8)) && (puVar12 != &DAT_00285948)) &&
         (*(int *)((long)puVar12 + 0xc) == 8)) {
        iVar6 = -(int)((ulong)((long)*(undefined8 **)(param_1 + 8) - (long)puVar12) >> 4);
        goto LAB_00625ddc;
      }
    }
    pcVar9 = "function or level expected";
  }
  else {
    iVar6 = lua_tointegerx(param_1,uVar16 + 1,(int *)0x0);
    if (-1 < iVar6) {
LAB_00625ddc:
      pbVar7 = (byte *)luaL_checklstring(param_1,uVar16 | 2,(ulong *)0x0);
      iVar6 = lua_getinfo(plVar14,iVar6,(char *)pbVar7,(lua_Debug *)local_1a8);
      if (iVar6 == 0) {
        uVar15 = 0;
      }
      else {
        uVar10 = (uint)*pbVar7;
        acStack_1c8[0] = '\0';
        acStack_1c8[1] = '\0';
        acStack_1c8[2] = '\0';
        acStack_1c8[3] = '\0';
        acStack_1c8[4] = '\0';
        acStack_1c8[5] = '\0';
        acStack_1c8[6] = '\0';
        acStack_1c8[7] = '\0';
        acStack_1c8[8] = '\0';
        acStack_1c8[9] = '\0';
        acStack_1c8[10] = '\0';
        acStack_1c8[0xb] = '\0';
        acStack_1c8[0xc] = '\0';
        acStack_1c8[0xd] = '\0';
        acStack_1c8[0xe] = '\0';
        acStack_1c8[0xf] = '\0';
        acStack_1c8[0x10] = '\0';
        acStack_1c8[0x11] = '\0';
        acStack_1c8[0x12] = '\0';
        acStack_1c8[0x13] = '\0';
        acStack_1c8[0x14] = '\0';
        acStack_1c8[0x15] = '\0';
        acStack_1c8[0x16] = '\0';
        acStack_1c8[0x17] = '\0';
        acStack_1c8[0x18] = '\0';
        acStack_1c8[0x19] = '\0';
        if (*pbVar7 == 0) {
          uVar15 = 0;
        }
        else {
          uVar15 = 0;
          do {
            pbVar7 = pbVar7 + 1;
            uVar2 = uVar10 - 0x61;
            iVar6 = (int)uVar17;
            if (uVar2 < 0x1a) {
              if (acStack_1c8[uVar2] == '\0') {
                acStack_1c8[uVar2] = '\x01';
                goto LAB_00625e4c;
              }
              if (!bVar5) {
                if (iVar6 < 0) {
                  uVar17 = *(long *)(plVar14 + 8) + (long)iVar6 * 0x10 + 0x10;
                }
                else {
                  uVar17 = *(long *)(plVar14 + 0x10) + (uVar17 & 0xffffffff) * 0x10;
                  for (uVar1 = *(ulong *)(plVar14 + 8); uVar1 < uVar17; uVar1 = uVar1 + 0x10) {
                    *(undefined4 *)(uVar1 + 0xc) = 0;
                  }
                }
                *(ulong *)(plVar14 + 8) = uVar17;
              }
              pcVar9 = "duplicate option";
LAB_00626068:
              uVar16 = uVar16 | 2;
              goto LAB_0062606c;
            }
LAB_00625e4c:
            if (uVar10 < 0x6c) {
              if (uVar10 == 0x61) {
                puVar12 = *(undefined8 **)(param_1 + 8);
                iVar6 = 2;
                uVar18 = NEON_ucvtf((ulong)local_17f);
                *(undefined4 *)((long)puVar12 + 0xc) = 3;
                *puVar12 = uVar18;
                lVar13 = *(long *)(param_1 + 8);
                *(undefined4 *)(lVar13 + 0x1c) = 1;
                *(long *)(param_1 + 8) = lVar13 + 0x10;
                *(uint *)(lVar13 + 0x10) = (uint)(local_17e != '\0');
                *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
              }
              else {
                if (uVar10 != 0x66) {
LAB_00625fe0:
                  if (!bVar5) {
                    if (iVar6 < 0) {
                      uVar17 = *(long *)(plVar14 + 8) + (long)iVar6 * 0x10 + 0x10;
                    }
                    else {
                      uVar17 = *(long *)(plVar14 + 0x10) + (uVar17 & 0xffffffff) * 0x10;
                      for (uVar1 = *(ulong *)(plVar14 + 8); uVar1 < uVar17; uVar1 = uVar1 + 0x10) {
                        *(undefined4 *)(uVar1 + 0xc) = 0;
                      }
                    }
                    *(ulong *)(plVar14 + 8) = uVar17;
                  }
                  pcVar9 = "invalid option";
                  goto LAB_00626068;
                }
                if (bVar5) {
                  lua_pushvalue(param_1,~uVar15);
                  goto LAB_00625ef0;
                }
                iVar6 = 1;
                lua_xmove(plVar14,param_1,1);
              }
            }
            else {
              if (uVar10 == 0x6c) {
                pdVar11 = *(double **)(param_1 + 8);
                *(undefined4 *)((long)pdVar11 + 0xc) = 3;
                *pdVar11 = (double)local_184;
                *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
              }
              else if (uVar10 == 0x6e) {
                pcVar9 = "";
                if (local_1a8[0] != (char *)0x0) {
                  pcVar9 = local_1a8[0];
                }
                sVar8 = strlen(pcVar9);
                lua_pushlstring(param_1,pcVar9,sVar8);
              }
              else {
                if (uVar10 != 0x73) goto LAB_00625fe0;
                lua_pushstring(param_1,local_190);
              }
LAB_00625ef0:
              iVar6 = 1;
            }
            uVar10 = (uint)*pbVar7;
            uVar15 = uVar15 + iVar6;
          } while (uVar10 != 0);
        }
      }
      if (*(long *)(lVar3 + 0x28) == local_70) {
        return uVar15;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pcVar9 = "level can\'t be negative";
  }
  uVar16 = uVar16 + 1;
LAB_0062606c:
                    /* WARNING: Subroutine does not return */
  luaL_argerrorL(param_1,uVar16,pcVar9);
}


// ===== 00626074  FUN_00626074 =====

undefined8 FUN_00626074(lua_State *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  lua_State *plVar5;
  uint uVar6;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  uVar6 = 0;
  plVar5 = param_1;
  if (puVar1 < *(undefined8 **)(param_1 + 8)) {
    if (puVar1 == &DAT_00285948) goto LAB_006260d0;
    if (*(int *)((long)puVar1 + 0xc) == 10) {
      uVar6 = 1;
      plVar5 = (lua_State *)*puVar1;
      goto LAB_006260d0;
    }
  }
  uVar6 = 0;
LAB_006260d0:
  iVar2 = lua_type(param_1,uVar6 + 1);
  if (iVar2 < 1) {
    pcVar4 = (char *)0x0;
  }
  else {
    pcVar4 = (char *)luaL_checklstring(param_1,uVar6 + 1,(ulong *)0x0);
  }
  uVar3 = (uint)(plVar5 == param_1);
  iVar2 = lua_type(param_1,uVar6 | 2);
  if ((0 < iVar2) && (uVar3 = luaL_checkinteger(param_1,uVar6 | 2), (int)uVar3 < 0)) {
                    /* WARNING: Subroutine does not return */
    luaL_argerrorL(param_1,uVar6 | 2,"level can\'t be negative");
  }
  luaL_traceback(param_1,plVar5,pcVar4,uVar3);
  return 1;
}


// ===== 00626170  luaopen_integer =====

/* luaopen_integer(lua_State*) */

undefined8 luaopen_integer(lua_State *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  luaL_register(param_1,"integer",(luaL_Reg *)&PTR_s_create_0067a5f8);
  puVar1 = *(undefined8 **)(param_1 + 8);
  *puVar1 = 0x7fffffffffffffff;
  lVar2 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)puVar1 + 0xc) = 4;
  *(long *)(param_1 + 8) = lVar2 + 0x10;
  lua_setfield(param_1,-2,"maxsigned");
  puVar1 = *(undefined8 **)(param_1 + 8);
  *puVar1 = 0x8000000000000000;
  lVar2 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)puVar1 + 0xc) = 4;
  *(long *)(param_1 + 8) = lVar2 + 0x10;
  lua_setfield(param_1,-2,"minsigned");
  return 1;
}


// ===== 00626208  FUN_00626208 =====

undefined8 FUN_00626208(lua_State *param_1)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  double dVar5;
  
  dVar5 = (double)luaL_checknumber(param_1,1);
  bVar1 = false;
  if ((dVar5 < -9.223372036854776e+18 == NAN(dVar5)) && (bVar1 = false, !NAN(dVar5))) {
    bVar1 = dVar5 < 9.223372036854776e+18;
  }
  bVar2 = false;
  if ((bVar1) && (bVar2 = false, !NAN(dVar5) && !NAN((double)(long)dVar5))) {
    bVar2 = dVar5 == (double)(long)dVar5;
  }
  if (bVar2) {
    plVar4 = *(long **)(param_1 + 8);
    *(undefined4 *)((long)plVar4 + 0xc) = 4;
    *plVar4 = (long)dVar5;
    lVar3 = *(long *)(param_1 + 8);
  }
  else {
    lVar3 = *(long *)(param_1 + 8);
    *(undefined4 *)(lVar3 + 0xc) = 0;
  }
  *(long *)(param_1 + 8) = lVar3 + 0x10;
  return 1;
}


// ===== 00626284  FUN_00626284 =====

undefined8 FUN_00626284(lua_State *param_1)

{
  long lVar1;
  double *pdVar2;
  
  lVar1 = luaL_checkinteger64(param_1,1);
  pdVar2 = *(double **)(param_1 + 8);
  *(undefined4 *)((long)pdVar2 + 0xc) = 3;
  *pdVar2 = (double)lVar1;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  return 1;
}


// ===== 006262cc  FUN_006262cc =====

undefined8 FUN_006262cc(lua_State *param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = luaL_checkinteger64(param_1,1);
  plVar2 = *(long **)(param_1 + 8);
  *plVar2 = -lVar1;
  lVar1 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)plVar2 + 0xc) = 4;
  *(long *)(param_1 + 8) = lVar1 + 0x10;
  return 1;
}


// ===== 00626314  FUN_00626314 =====

undefined8 FUN_00626314(lua_State *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = luaL_checkinteger64(param_1,1);
  lVar2 = luaL_checkinteger64(param_1,2);
  plVar3 = *(long **)(param_1 + 8);
  *plVar3 = lVar2 + lVar1;
  lVar1 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)plVar3 + 0xc) = 4;
  *(long *)(param_1 + 8) = lVar1 + 0x10;
  return 1;
}


// ===== 0062636c  FUN_0062636c =====

undefined8 FUN_0062636c(lua_State *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = luaL_checkinteger64(param_1,1);
  lVar2 = luaL_checkinteger64(param_1,2);
  plVar3 = *(long **)(param_1 + 8);
  *plVar3 = lVar1 - lVar2;
  lVar1 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)plVar3 + 0xc) = 4;
  *(long *)(param_1 + 8) = lVar1 + 0x10;
  return 1;
}


// ===== 006263c4  FUN_006263c4 =====

undefined8 FUN_006263c4(lua_State *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = luaL_checkinteger64(param_1,1);
  lVar2 = luaL_checkinteger64(param_1,2);
  plVar3 = *(long **)(param_1 + 8);
  *(undefined4 *)((long)plVar3 + 0xc) = 4;
  *plVar3 = lVar2 * lVar1;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  return 1;
}


// ===== 0062641c  FUN_0062641c =====

undefined8 FUN_0062641c(lua_State *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long *plVar5;
  
  lVar2 = luaL_checkinteger64(param_1,1);
  lVar3 = luaL_checkinteger64(param_1,2);
  if (lVar3 == 0) {
    pcVar4 = "division by zero";
  }
  else {
    if ((lVar2 != -0x8000000000000000) || (lVar3 != -1)) {
      lVar1 = 0;
      if (lVar3 != 0) {
        lVar1 = lVar2 / lVar3;
      }
      plVar5 = *(long **)(param_1 + 8);
      *(undefined4 *)((long)plVar5 + 0xc) = 4;
      *plVar5 = lVar1;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
      return 1;
    }
    pcVar4 = "integer overflow";
  }
                    /* WARNING: Subroutine does not return */
  luaL_errorL(param_1,pcVar4);
}


// ===== 006264a8  FUN_006264a8 =====

undefined8 FUN_006264a8(lua_State *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  
  lVar1 = luaL_checkinteger64(param_1,1);
  plVar2 = *(long **)(param_1 + 8);
  iVar5 = (int)((ulong)((long)plVar2 - *(long *)(param_1 + 0x10)) >> 4);
  if (1 < iVar5) {
    iVar4 = 1;
    lVar3 = lVar1;
    do {
      iVar4 = iVar4 + 1;
      lVar1 = luaL_checkinteger64(param_1,iVar4);
      if (lVar3 <= lVar1) {
        lVar1 = lVar3;
      }
      lVar3 = lVar1;
    } while (iVar5 != iVar4);
    plVar2 = *(long **)(param_1 + 8);
  }
  *plVar2 = lVar1;
  lVar1 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)plVar2 + 0xc) = 4;
  *(long *)(param_1 + 8) = lVar1 + 0x10;
  return 1;
}


// ===== 00626530  FUN_00626530 =====

undefined8 FUN_00626530(lua_State *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  
  lVar1 = luaL_checkinteger64(param_1,1);
  plVar2 = *(long **)(param_1 + 8);
  iVar5 = (int)((ulong)((long)plVar2 - *(long *)(param_1 + 0x10)) >> 4);
  if (1 < iVar5) {
    iVar4 = 1;
    lVar3 = lVar1;
    do {
      iVar4 = iVar4 + 1;
      lVar1 = luaL_checkinteger64(param_1,iVar4);
      if (lVar1 <= lVar3) {
        lVar1 = lVar3;
      }
      lVar3 = lVar1;
    } while (iVar5 != iVar4);
    plVar2 = *(long **)(param_1 + 8);
  }
  *plVar2 = lVar1;
  lVar1 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)plVar2 + 0xc) = 4;
  *(long *)(param_1 + 8) = lVar1 + 0x10;
  return 1;
}


// ===== 006265b8  FUN_006265b8 =====

undefined8 FUN_006265b8(lua_State *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar2 = luaL_checkinteger64(param_1,1);
  lVar3 = luaL_checkinteger64(param_1,2);
  if (lVar3 != 0) {
    if ((lVar2 == -0x8000000000000000) && (lVar3 == -1)) {
      lVar2 = 0;
    }
    else {
      lVar1 = 0;
      if (lVar3 != 0) {
        lVar1 = lVar2 / lVar3;
      }
      lVar2 = lVar2 - lVar1 * lVar3;
    }
    plVar4 = *(long **)(param_1 + 8);
    *plVar4 = lVar2;
    lVar2 = *(long *)(param_1 + 8);
    *(undefined4 *)((long)plVar4 + 0xc) = 4;
    *(long *)(param_1 + 8) = lVar2 + 0x10;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  luaL_errorL(param_1,"division by zero");
}


// ===== 00626644  FUN_00626644 =====

undefined8 FUN_00626644(lua_State *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long *plVar5;
  
  lVar2 = luaL_checkinteger64(param_1,1);
  lVar3 = luaL_checkinteger64(param_1,2);
  if (lVar3 == 0) {
    pcVar4 = "division by zero";
  }
  else {
    if ((lVar2 != -0x8000000000000000) || (lVar3 != -1)) {
      lVar1 = 0;
      if (lVar3 != 0) {
        lVar1 = lVar2 / lVar3;
      }
      plVar5 = *(long **)(param_1 + 8);
      *plVar5 = lVar1 - (ulong)(lVar1 < 0 && lVar2 != lVar1 * lVar3);
      lVar2 = *(long *)(param_1 + 8);
      *(undefined4 *)((long)plVar5 + 0xc) = 4;
      *(long *)(param_1 + 8) = lVar2 + 0x10;
      return 1;
    }
    pcVar4 = "integer overflow";
  }
                    /* WARNING: Subroutine does not return */
  luaL_errorL(param_1,pcVar4);
}


// ===== 006266e4  FUN_006266e4 =====

undefined8 FUN_006266e4(lua_State *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  
  uVar2 = luaL_checkinteger64(param_1,1);
  uVar3 = luaL_checkinteger64(param_1,2);
  if (uVar3 != 0) {
    uVar1 = 0;
    if (uVar3 != 0) {
      uVar1 = uVar2 / uVar3;
    }
    puVar4 = *(ulong **)(param_1 + 8);
    *(undefined4 *)((long)puVar4 + 0xc) = 4;
    *puVar4 = uVar1;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  luaL_errorL(param_1,"division by zero");
}


// ===== 00626750  FUN_00626750 =====

undefined8 FUN_00626750(lua_State *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  
  uVar2 = luaL_checkinteger64(param_1,1);
  uVar3 = luaL_checkinteger64(param_1,2);
  if (uVar3 != 0) {
    uVar1 = 0;
    if (uVar3 != 0) {
      uVar1 = uVar2 / uVar3;
    }
    plVar4 = *(long **)(param_1 + 8);
    *(undefined4 *)((long)plVar4 + 0xc) = 4;
    *plVar4 = uVar2 - uVar1 * uVar3;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  luaL_errorL(param_1,"division by zero");
}


// ===== 006267c4  FUN_006267c4 =====

undefined8 FUN_006267c4(lua_State *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  uVar1 = luaL_checkinteger64(param_1,1);
  uVar2 = luaL_checkinteger64(param_1,2);
  if (uVar2 != 0) {
    if ((uVar1 == 0x8000000000000000) && (uVar2 == 0xffffffffffffffff)) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0;
      if (uVar2 != 0) {
        lVar3 = (long)uVar1 / (long)uVar2;
      }
      lVar3 = uVar1 - lVar3 * uVar2;
      if (lVar3 != 0) {
        lVar3 = lVar3 + (uVar2 & (long)(uVar2 ^ uVar1) >> 0x3f);
      }
    }
    plVar4 = *(long **)(param_1 + 8);
    *plVar4 = lVar3;
    lVar3 = *(long *)(param_1 + 8);
    *(undefined4 *)((long)plVar4 + 0xc) = 4;
    *(long *)(param_1 + 8) = lVar3 + 0x10;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  luaL_errorL(param_1,"division by zero");
}


// ===== 00626860  FUN_00626860 =====

undefined8 FUN_00626860(lua_State *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar2 = luaL_checkinteger64(param_1,1);
  lVar3 = luaL_checkinteger64(param_1,2);
  lVar4 = luaL_checkinteger64(param_1,3);
  if (lVar3 <= lVar4) {
    plVar5 = *(long **)(param_1 + 8);
    lVar1 = lVar2;
    if (lVar4 <= lVar2) {
      lVar1 = lVar4;
    }
    if (lVar3 <= lVar2) {
      lVar3 = lVar1;
    }
    *(undefined4 *)((long)plVar5 + 0xc) = 4;
    *plVar5 = lVar3;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  luaL_argerrorL(param_1,3,"max must be greater than or equal to min");
}


// ===== 006268f8  FUN_006268f8 =====

undefined8 FUN_006268f8(lua_State *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  
  puVar2 = *(ulong **)(param_1 + 8);
  iVar6 = (int)((ulong)((long)puVar2 - *(long *)(param_1 + 0x10)) >> 4);
  if (iVar6 < 1) {
    uVar5 = 0xffffffffffffffff;
  }
  else {
    iVar4 = 0;
    uVar5 = 0xffffffffffffffff;
    do {
      iVar4 = iVar4 + 1;
      uVar1 = luaL_checkinteger64(param_1,iVar4);
      uVar5 = uVar1 & uVar5;
    } while (iVar6 != iVar4);
    puVar2 = *(ulong **)(param_1 + 8);
  }
  *puVar2 = uVar5;
  lVar3 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)puVar2 + 0xc) = 4;
  *(long *)(param_1 + 8) = lVar3 + 0x10;
  return 1;
}


// ===== 0062697c  FUN_0062697c =====

undefined8 FUN_0062697c(lua_State *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  
  puVar2 = *(ulong **)(param_1 + 8);
  iVar5 = (int)((ulong)((long)puVar2 - *(long *)(param_1 + 0x10)) >> 4);
  if (iVar5 < 1) {
    uVar6 = 0;
  }
  else {
    iVar4 = 0;
    uVar6 = 0;
    do {
      iVar4 = iVar4 + 1;
      uVar1 = luaL_checkinteger64(param_1,iVar4);
      uVar6 = uVar1 | uVar6;
    } while (iVar5 != iVar4);
    puVar2 = *(ulong **)(param_1 + 8);
  }
  *puVar2 = uVar6;
  lVar3 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)puVar2 + 0xc) = 4;
  *(long *)(param_1 + 8) = lVar3 + 0x10;
  return 1;
}


// ===== 00626a00  FUN_00626a00 =====

undefined8 FUN_00626a00(lua_State *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  long lVar3;
  
  uVar1 = luaL_checkinteger64(param_1,1);
  puVar2 = *(ulong **)(param_1 + 8);
  *puVar2 = ~uVar1;
  lVar3 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)puVar2 + 0xc) = 4;
  *(long *)(param_1 + 8) = lVar3 + 0x10;
  return 1;
}


// ===== 00626a48  FUN_00626a48 =====

undefined8 FUN_00626a48(lua_State *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  
  puVar2 = *(ulong **)(param_1 + 8);
  iVar5 = (int)((ulong)((long)puVar2 - *(long *)(param_1 + 0x10)) >> 4);
  if (iVar5 < 1) {
    uVar6 = 0;
  }
  else {
    iVar4 = 0;
    uVar6 = 0;
    do {
      iVar4 = iVar4 + 1;
      uVar1 = luaL_checkinteger64(param_1,iVar4);
      uVar6 = uVar1 ^ uVar6;
    } while (iVar5 != iVar4);
    puVar2 = *(ulong **)(param_1 + 8);
  }
  *puVar2 = uVar6;
  lVar3 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)puVar2 + 0xc) = 4;
  *(long *)(param_1 + 8) = lVar3 + 0x10;
  return 1;
}


// ===== 00626acc  FUN_00626acc =====

undefined8 FUN_00626acc(lua_State *param_1)

{
  long lVar1;
  long lVar2;
  uint *puVar3;
  
  lVar1 = luaL_checkinteger64(param_1,1);
  lVar2 = luaL_checkinteger64(param_1,2);
  puVar3 = *(uint **)(param_1 + 8);
  *puVar3 = (uint)(lVar1 < lVar2);
  lVar1 = *(long *)(param_1 + 8);
  puVar3[3] = 1;
  *(long *)(param_1 + 8) = lVar1 + 0x10;
  return 1;
}


// ===== 00626b30  FUN_00626b30 =====

undefined8 FUN_00626b30(lua_State *param_1)

{
  long lVar1;
  long lVar2;
  uint *puVar3;
  
  lVar1 = luaL_checkinteger64(param_1,1);
  lVar2 = luaL_checkinteger64(param_1,2);
  puVar3 = *(uint **)(param_1 + 8);
  *puVar3 = (uint)(lVar1 <= lVar2);
  lVar1 = *(long *)(param_1 + 8);
  puVar3[3] = 1;
  *(long *)(param_1 + 8) = lVar1 + 0x10;
  return 1;
}


// ===== 00626b94  FUN_00626b94 =====

undefined8 FUN_00626b94(lua_State *param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint *puVar3;
  long lVar4;
  
  uVar1 = luaL_checkinteger64(param_1,1);
  uVar2 = luaL_checkinteger64(param_1,2);
  puVar3 = *(uint **)(param_1 + 8);
  *puVar3 = (uint)(uVar1 < uVar2);
  lVar4 = *(long *)(param_1 + 8);
  puVar3[3] = 1;
  *(long *)(param_1 + 8) = lVar4 + 0x10;
  return 1;
}


// ===== 00626bf8  FUN_00626bf8 =====

undefined8 FUN_00626bf8(lua_State *param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint *puVar3;
  long lVar4;
  
  uVar1 = luaL_checkinteger64(param_1,1);
  uVar2 = luaL_checkinteger64(param_1,2);
  puVar3 = *(uint **)(param_1 + 8);
  *puVar3 = (uint)(uVar1 <= uVar2);
  lVar4 = *(long *)(param_1 + 8);
  puVar3[3] = 1;
  *(long *)(param_1 + 8) = lVar4 + 0x10;
  return 1;
}


// ===== 00626c5c  FUN_00626c5c =====

undefined8 FUN_00626c5c(lua_State *param_1)

{
  long lVar1;
  long lVar2;
  uint *puVar3;
  
  lVar1 = luaL_checkinteger64(param_1,1);
  lVar2 = luaL_checkinteger64(param_1,2);
  puVar3 = *(uint **)(param_1 + 8);
  *puVar3 = (uint)(lVar2 < lVar1);
  lVar1 = *(long *)(param_1 + 8);
  puVar3[3] = 1;
  *(long *)(param_1 + 8) = lVar1 + 0x10;
  return 1;
}


// ===== 00626cc0  FUN_00626cc0 =====

undefined8 FUN_00626cc0(lua_State *param_1)

{
  long lVar1;
  long lVar2;
  uint *puVar3;
  
  lVar1 = luaL_checkinteger64(param_1,1);
  lVar2 = luaL_checkinteger64(param_1,2);
  puVar3 = *(uint **)(param_1 + 8);
  *puVar3 = (uint)(lVar2 <= lVar1);
  lVar1 = *(long *)(param_1 + 8);
  puVar3[3] = 1;
  *(long *)(param_1 + 8) = lVar1 + 0x10;
  return 1;
}


// ===== 00626d24  FUN_00626d24 =====

undefined8 FUN_00626d24(lua_State *param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint *puVar3;
  long lVar4;
  
  uVar1 = luaL_checkinteger64(param_1,1);
  uVar2 = luaL_checkinteger64(param_1,2);
  puVar3 = *(uint **)(param_1 + 8);
  *puVar3 = (uint)(uVar2 < uVar1);
  lVar4 = *(long *)(param_1 + 8);
  puVar3[3] = 1;
  *(long *)(param_1 + 8) = lVar4 + 0x10;
  return 1;
}


// ===== 00626d88  FUN_00626d88 =====

undefined8 FUN_00626d88(lua_State *param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint *puVar3;
  long lVar4;
  
  uVar1 = luaL_checkinteger64(param_1,1);
  uVar2 = luaL_checkinteger64(param_1,2);
  puVar3 = *(uint **)(param_1 + 8);
  *puVar3 = (uint)(uVar2 <= uVar1);
  lVar4 = *(long *)(param_1 + 8);
  puVar3[3] = 1;
  *(long *)(param_1 + 8) = lVar4 + 0x10;
  return 1;
}


// ===== 00626dec  FUN_00626dec =====

undefined8 FUN_00626dec(lua_State *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  
  uVar2 = luaL_checkinteger64(param_1,1);
  uVar3 = luaL_checkinteger64(param_1,2);
  puVar4 = *(ulong **)(param_1 + 8);
  uVar1 = uVar2 >> (-uVar3 & 0x3f);
  if (-1 < (long)uVar3) {
    uVar1 = uVar2 << (uVar3 & 0x3f);
  }
  uVar2 = 0;
  if (uVar3 + 0x3f < 0x7f) {
    uVar2 = uVar1;
  }
  *(undefined4 *)((long)puVar4 + 0xc) = 4;
  *puVar4 = uVar2;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  return 1;
}


// ===== 00626e60  FUN_00626e60 =====

undefined8 FUN_00626e60(lua_State *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  
  uVar2 = luaL_checkinteger64(param_1,1);
  uVar3 = luaL_checkinteger64(param_1,2);
  puVar4 = *(ulong **)(param_1 + 8);
  uVar1 = uVar2 << (-uVar3 & 0x3f);
  if (-1 < (long)uVar3) {
    uVar1 = uVar2 >> (uVar3 & 0x3f);
  }
  uVar2 = 0;
  if (uVar3 + 0x3f < 0x7f) {
    uVar2 = uVar1;
  }
  *(undefined4 *)((long)puVar4 + 0xc) = 4;
  *puVar4 = uVar2;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  return 1;
}


// ===== 00626ed4  FUN_00626ed4 =====

undefined8 FUN_00626ed4(lua_State *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  lVar2 = luaL_checkinteger64(param_1,1);
  uVar3 = luaL_checkinteger64(param_1,2);
  lVar4 = 0;
  if ((long)(uVar3 + 0x3f) < 0 == SCARRY8(uVar3,0x3f)) {
    lVar4 = lVar2 >> 0x3f;
  }
  lVar1 = lVar2 << (-uVar3 & 0x3f);
  if (-1 < (long)uVar3) {
    lVar1 = lVar2 >> (uVar3 & 0x3f);
  }
  plVar5 = *(long **)(param_1 + 8);
  if (uVar3 + 0x3f < 0x7f) {
    lVar4 = lVar1;
  }
  *plVar5 = lVar4;
  lVar4 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)plVar5 + 0xc) = 4;
  *(long *)(param_1 + 8) = lVar4 + 0x10;
  return 1;
}


// ===== 00626f54  FUN_00626f54 =====

undefined8 FUN_00626f54(lua_State *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  
  uVar1 = luaL_checkinteger64(param_1,1);
  uVar2 = luaL_checkinteger64(param_1,2);
  puVar3 = *(ulong **)(param_1 + 8);
  if ((uVar2 & 0x3f) != 0) {
    uVar1 = uVar1 >> ((ulong)-((uint)uVar2 & 0x3f) & 0x3f) | uVar1 << (uVar2 & 0x3f);
  }
  *(undefined4 *)((long)puVar3 + 0xc) = 4;
  *puVar3 = uVar1;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  return 1;
}


// ===== 00626fc0  FUN_00626fc0 =====

undefined8 FUN_00626fc0(lua_State *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  
  uVar1 = luaL_checkinteger64(param_1,1);
  uVar2 = luaL_checkinteger64(param_1,2);
  puVar3 = *(ulong **)(param_1 + 8);
  if ((uVar2 & 0x3f) != 0) {
    uVar1 = uVar1 << ((ulong)-((uint)uVar2 & 0x3f) & 0x3f) | uVar1 >> (uVar2 & 0x3f);
  }
  *(undefined4 *)((long)puVar3 + 0xc) = 4;
  *puVar3 = uVar1;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  return 1;
}


// ===== 0062702c  FUN_0062702c =====

undefined8 FUN_0062702c(lua_State *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  
  lVar5 = 1;
  uVar2 = luaL_checkinteger64(param_1,1);
  uVar3 = luaL_checkinteger64(param_1,2);
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x20);
  if ((puVar1 < *(undefined8 **)(param_1 + 8)) && (puVar1 != &DAT_00285948)) {
    if (*(int *)(*(long *)(param_1 + 0x10) + 0x2c) < 1) {
      lVar5 = 1;
    }
    else {
      lVar5 = luaL_checkinteger64(param_1,3);
    }
  }
  if (0x3f < uVar3) {
                    /* WARNING: Subroutine does not return */
    luaL_argerrorL(param_1,2,"field cannot be negative");
  }
  if (lVar5 < 1) {
                    /* WARNING: Subroutine does not return */
    luaL_argerrorL(param_1,3,"width must be positive");
  }
  if (lVar5 + uVar3 < 0x41) {
    puVar4 = *(ulong **)(param_1 + 8);
    *puVar4 = 0xffffffffffffffffU >> (-lVar5 & 0x3fU) & uVar2 >> (uVar3 & 0x3f);
    lVar5 = *(long *)(param_1 + 8);
    *(undefined4 *)((long)puVar4 + 0xc) = 4;
    *(long *)(param_1 + 8) = lVar5 + 0x10;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  luaL_errorL(param_1,"trying to access non-existent bits");
}


// ===== 0062713c  FUN_0062713c =====

undefined8 FUN_0062713c(lua_State *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  
  lVar7 = 1;
  uVar2 = luaL_checkinteger64(param_1,1);
  uVar3 = luaL_checkinteger64(param_1,2);
  uVar4 = luaL_checkinteger64(param_1,3);
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x30);
  if ((puVar1 < *(undefined8 **)(param_1 + 8)) && (puVar1 != &DAT_00285948)) {
    if (*(int *)(*(long *)(param_1 + 0x10) + 0x3c) < 1) {
      lVar7 = 1;
    }
    else {
      lVar7 = luaL_checkinteger64(param_1,4);
    }
  }
  if (0x3f < uVar4) {
                    /* WARNING: Subroutine does not return */
    luaL_argerrorL(param_1,3,"field cannot be negative");
  }
  if (lVar7 < 1) {
                    /* WARNING: Subroutine does not return */
    luaL_argerrorL(param_1,4,"width must be positive");
  }
  if (lVar7 + uVar4 < 0x41) {
    puVar6 = *(ulong **)(param_1 + 8);
    uVar5 = 0xffffffffffffffff >> (-lVar7 & 0x3fU);
    *puVar6 = uVar2 & (uVar5 << (uVar4 & 0x3f) ^ 0xffffffffffffffff) |
              (uVar5 & uVar3) << (uVar4 & 0x3f);
    lVar7 = *(long *)(param_1 + 8);
    *(undefined4 *)((long)puVar6 + 0xc) = 4;
    *(long *)(param_1 + 8) = lVar7 + 0x10;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  luaL_errorL(param_1,"trying to access non-existent bits");
}


// ===== 00627270  FUN_00627270 =====

undefined8 FUN_00627270(lua_State *param_1)

{
  ulong uVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  puVar2 = *(uint **)(param_1 + 8);
  iVar6 = (int)((ulong)((long)puVar2 - *(long *)(param_1 + 0x10)) >> 4);
  if (iVar6 < 1) {
    uVar3 = 1;
  }
  else {
    iVar5 = 0;
    uVar7 = 0xffffffffffffffff;
    do {
      iVar5 = iVar5 + 1;
      uVar1 = luaL_checkinteger64(param_1,iVar5);
      uVar7 = uVar1 & uVar7;
    } while (iVar6 != iVar5);
    puVar2 = *(uint **)(param_1 + 8);
    uVar3 = (uint)(uVar7 != 0);
  }
  *puVar2 = uVar3;
  lVar4 = *(long *)(param_1 + 8);
  puVar2[3] = 1;
  *(long *)(param_1 + 8) = lVar4 + 0x10;
  return 1;
}


// ===== 00627304  FUN_00627304 =====

undefined8 FUN_00627304(lua_State *param_1)

{
  ulong uVar1;
  long *plVar2;
  
  uVar1 = luaL_checkinteger64(param_1,1);
  uVar1 = (uVar1 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar1 & 0x5555555555555555) << 1;
  uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
  uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  plVar2 = *(long **)(param_1 + 8);
  *(undefined4 *)((long)plVar2 + 0xc) = 4;
  *plVar2 = LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20);
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  return 1;
}


// ===== 00627350  FUN_00627350 =====

undefined8 FUN_00627350(lua_State *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = luaL_checkinteger64(param_1,1);
  plVar2 = *(long **)(param_1 + 8);
  *plVar2 = LZCOUNT(uVar1);
  lVar3 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)plVar2 + 0xc) = 4;
  *(long *)(param_1 + 8) = lVar3 + 0x10;
  return 1;
}


// ===== 00627398  FUN_00627398 =====

undefined8 FUN_00627398(lua_State *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  long lVar3;
  
  uVar1 = luaL_checkinteger64(param_1,1);
  puVar2 = *(ulong **)(param_1 + 8);
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  *puVar2 = uVar1 >> 0x20 | uVar1 << 0x20;
  lVar3 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)puVar2 + 0xc) = 4;
  *(long *)(param_1 + 8) = lVar3 + 0x10;
  return 1;
}


// ===== 006273e0  FUN_006273e0 =====

undefined8 FUN_006273e0(lua_State *param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  long lVar3;
  int __base;
  byte *pbVar4;
  ulonglong uVar5;
  byte *pbVar6;
  long lVar7;
  ulonglong *puVar8;
  byte *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  pbVar4 = (byte *)luaL_checklstring(param_1,1,(ulong *)0x0);
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  if (((puVar1 < *(undefined8 **)(param_1 + 8)) && (puVar1 != &DAT_00285948)) &&
     (0 < *(int *)(*(long *)(param_1 + 0x10) + 0x1c))) {
    __base = luaL_checkinteger(param_1,2);
    if (0x22 < __base - 2U) {
                    /* WARNING: Subroutine does not return */
      luaL_argerrorL(param_1,2,"base out of range");
    }
    local_40 = (byte *)0x0;
    if (__base == 10) goto LAB_00627488;
    uVar5 = strtoull((char *)pbVar4,(char **)&local_40,__base);
    if (local_40 != pbVar4) {
LAB_006274c8:
      bVar2 = *local_40;
      goto LAB_006274cc;
    }
  }
  else {
LAB_00627488:
    local_40 = (byte *)0x0;
    uVar5 = strtoll((char *)pbVar4,(char **)&local_40,10);
    if (local_40 != pbVar4) {
      bVar2 = *local_40;
      if ((bVar2 | 0x20) == 0x78) {
        uVar5 = strtoull((char *)pbVar4,(char **)&local_40,0x10);
        goto LAB_006274c8;
      }
LAB_006274cc:
      pbVar4 = local_40;
      if (bVar2 != 0) {
        do {
          do {
            pbVar6 = pbVar4 + 1;
            bVar2 = *pbVar4;
            pbVar4 = pbVar6;
          } while (bVar2 == 0x20);
        } while (0xfffffffa < bVar2 - 0xe);
        if (bVar2 != 0) goto LAB_006274ec;
      }
      puVar8 = *(ulonglong **)(param_1 + 8);
      *puVar8 = uVar5;
      lVar7 = *(long *)(param_1 + 8);
      *(undefined4 *)((long)puVar8 + 0xc) = 4;
      goto LAB_0062750c;
    }
  }
LAB_006274ec:
  lVar7 = *(long *)(param_1 + 8);
  *(undefined4 *)(lVar7 + 0xc) = 0;
LAB_0062750c:
  *(long *)(param_1 + 8) = lVar7 + 0x10;
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


// ===== 00627554  luaopen_math =====

/* luaopen_math(lua_State*) */

undefined8 luaopen_math(lua_State *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = *(long *)(param_1 + 0x18);
  lVar5 = *(long *)(lVar3 + 0x4e8);
  lVar7 = *(long *)(lVar3 + 0x4f0);
  lVar6 = *(long *)(lVar3 + 0x4f8);
  lVar3 = *(long *)(lVar3 + 0x500);
  uVar1 = time((time_t *)0x0);
  uVar2 = clock();
  *(ulong *)(*(long *)(param_1 + 0x18) + 0x4e0) =
       (uVar1 ^ uVar2 ^ lVar3 + lVar7 * (long)param_1 ^ lVar6 + lVar5 * (long)param_1) *
       0x5851f42d4c957f2d + 0x399d2694695129de;
  luaL_register(param_1,"math",(luaL_Reg *)&PTR_DAT_0067a878);
  puVar4 = *(undefined8 **)(param_1 + 8);
  *(undefined4 *)((long)puVar4 + 0xc) = 3;
  *puVar4 = 0x400921fb54442d18;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  lua_setfield(param_1,-2,"pi");
  puVar4 = *(undefined8 **)(param_1 + 8);
  *puVar4 = 0x7ff0000000000000;
  lVar3 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)puVar4 + 0xc) = 3;
  *(long *)(param_1 + 8) = lVar3 + 0x10;
  lua_setfield(param_1,-2,"huge");
  puVar4 = *(undefined8 **)(param_1 + 8);
  *puVar4 = 0x7ff8000000000000;
  lVar3 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)puVar4 + 0xc) = 3;
  *(long *)(param_1 + 8) = lVar3 + 0x10;
  lua_setfield(param_1,-2,"nan");
  puVar4 = *(undefined8 **)(param_1 + 8);
  *(undefined4 *)((long)puVar4 + 0xc) = 3;
  *puVar4 = 0x4005bf0a8b145769;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  lua_setfield(param_1,-2,"e");
  puVar4 = *(undefined8 **)(param_1 + 8);
  *(undefined4 *)((long)puVar4 + 0xc) = 3;
  *puVar4 = 0x3ff9e3779b97f4a8;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  lua_setfield(param_1,-2,"phi");
  puVar4 = *(undefined8 **)(param_1 + 8);
  *(undefined4 *)((long)puVar4 + 0xc) = 3;
  *puVar4 = 0x3ff6a09e667f3bcd;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  lua_setfield(param_1,-2,"sqrt2");
  puVar4 = *(undefined8 **)(param_1 + 8);
  *(undefined4 *)((long)puVar4 + 0xc) = 3;
  *puVar4 = 0x401921fb54442d18;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  lua_setfield(param_1,-2,"tau");
  return 1;
}


// ===== 0062778c  FUN_0062778c =====

undefined8 FUN_0062778c(lua_State *param_1)

{
  double *pdVar1;
  double dVar2;
  
  dVar2 = (double)luaL_checknumber(param_1,1);
  pdVar1 = *(double **)(param_1 + 8);
  *(undefined4 *)((long)pdVar1 + 0xc) = 3;
  *pdVar1 = ABS(dVar2);
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  return 1;
}


// ===== 006277d4  FUN_006277d4 =====

undefined8 FUN_006277d4(lua_State *param_1)

{
  double *pdVar1;
  long lVar2;
  double dVar3;
  
  dVar3 = (double)luaL_checknumber(param_1,1);
  dVar3 = acos(dVar3);
  pdVar1 = *(double **)(param_1 + 8);
  *pdVar1 = dVar3;
  lVar2 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)pdVar1 + 0xc) = 3;
  *(long *)(param_1 + 8) = lVar2 + 0x10;
  return 1;
}


