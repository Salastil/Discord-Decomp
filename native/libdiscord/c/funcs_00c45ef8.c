// ===== 00c45ef8  FUN_00c45ef8 =====

void FUN_00c45ef8(long param_1,undefined8 *param_2)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined1 *local_18;
  
  local_18 = (undefined1 *)&local_40;
  uStack_38 = param_2[1];
  local_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  local_20 = param_2[4];
  FUN_007b6160(param_1 + 0x70,&local_18,FUN_00bc8a60);
  return;
}


// ===== 00c45f44  FUN_00c45f44 =====

void FUN_00c45f44(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  byte local_2c [4];
  byte *local_28;
  
  if ((*(byte *)(param_1 + 0xd8) & 1) == 0) {
    plVar3 = *(long **)(param_1 + 0xe8);
    plVar1 = *(long **)(param_1 + 0xe0);
    if (plVar1 == (long *)0x0) goto LAB_00c45fb4;
  }
  else {
    plVar3 = (long *)0x0;
    plVar1 = *(long **)(param_1 + 0xe0);
    if (plVar1 == (long *)0x0) {
      plVar1 = (long *)0x0;
      goto LAB_00c45fb4;
    }
  }
  uVar2 = (**(code **)(*plVar1 + 8))();
  if ((uVar2 & 1) == 0) {
    plVar1 = (long *)0x0;
  }
  else if (plVar3 == (long *)0x0) {
    plVar1 = (long *)0x1;
  }
  else {
    plVar1 = (long *)(**(code **)(*plVar3 + 8))(plVar3);
  }
LAB_00c45fb4:
  local_2c[0] = (byte)plVar1 & 1;
  local_28 = local_2c;
  FUN_007b6160(param_1 + 0x90,&local_28,FUN_0046bccc);
  return;
}


// ===== 00c45fec  FUN_00c45fec =====

void FUN_00c45fec(undefined8 param_1,undefined8 *param_2)

{
  void *__src;
  undefined1 *__n;
  undefined8 uVar1;
  undefined1 auStack_68 [24];
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  __src = (void *)*param_2;
  __n = (undefined1 *)param_2[1];
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007b54d0(&local_50,__n,__n);
  if (local_50 != (undefined1 *)0x0) {
    memcpy(*(void **)(local_50 + 0x10),__src,(size_t)__n);
    puStack_48 = (undefined1 *)0x0;
    local_40 = __n;
  }
  FUN_007b53e4(auStack_68,&local_50);
  uVar1 = param_2[2];
  if ((*(uint *)(param_2 + 3) & 1) == 0) {
    uVar1 = 0x8000000000000000;
  }
  FUN_00c45d80(param_1,auStack_68,uVar1,*(undefined1 *)(param_2 + 5));
  FUN_007b5554(auStack_68);
  FUN_007b5554(&local_50);
  return;
}


// ===== 00c460a0  FUN_00c460a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c460a0(long param_1,undefined8 *param_2)

{
  void *__src;
  size_t __n;
  undefined8 uVar1;
  undefined8 uVar2;
  long local_88 [3];
  undefined8 local_70;
  undefined8 uStack_68;
  long *local_58;
  undefined8 *puStack_50;
  undefined1 *local_48;
  undefined1 local_24 [4];
  
  __src = (void *)*param_2;
  __n = param_2[1];
  FUN_007b54d0(local_88,__n,__n);
  if (local_88[0] != 0) {
    memcpy(*(void **)(local_88[0] + 0x10),__src,__n);
    local_88[1] = 0;
    local_88[2] = __n;
  }
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  puStack_50 = &local_70;
  local_24[0] = *(undefined1 *)(param_2 + 5);
  local_70 = CONCAT17((byte)((ulong)uVar1 >> 0x38) & (byte)((ulong)_DAT_001f4c50 >> 0x38),
                      CONCAT16((byte)((ulong)uVar1 >> 0x30) & (byte)((ulong)_DAT_001f4c50 >> 0x30),
                               CONCAT15((byte)((ulong)uVar1 >> 0x28) &
                                        (byte)((ulong)_DAT_001f4c50 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar1 >> 0x20) &
                                                 (byte)((ulong)_DAT_001f4c50 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar1 >> 0x18) &
                                                          (byte)((ulong)_DAT_001f4c50 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar1 >> 0x10) &
                                                                   (byte)((ulong)_DAT_001f4c50 >>
                                                                         0x10),
                                                                   CONCAT11((byte)((ulong)uVar1 >> 8
                                                                                  ) & (byte)((ulong)
                                                  _DAT_001f4c50 >> 8),
                                                  (byte)uVar1 & (byte)_DAT_001f4c50)))))));
  uStack_68 = CONCAT17((byte)((ulong)uVar2 >> 0x38) & (byte)((ulong)_UNK_001f4c58 >> 0x38),
                       CONCAT16((byte)((ulong)uVar2 >> 0x30) & (byte)((ulong)_UNK_001f4c58 >> 0x30),
                                CONCAT15((byte)((ulong)uVar2 >> 0x28) &
                                         (byte)((ulong)_UNK_001f4c58 >> 0x28),
                                         CONCAT14((byte)((ulong)uVar2 >> 0x20) &
                                                  (byte)((ulong)_UNK_001f4c58 >> 0x20),
                                                  CONCAT13((byte)((ulong)uVar2 >> 0x18) &
                                                           (byte)((ulong)_UNK_001f4c58 >> 0x18),
                                                           CONCAT12((byte)((ulong)uVar2 >> 0x10) &
                                                                    (byte)((ulong)_UNK_001f4c58 >>
                                                                          0x10),
                                                                    CONCAT11((byte)((ulong)uVar2 >>
                                                                                   8) &
                                                                             (byte)((ulong)
                                                  _UNK_001f4c58 >> 8),
                                                  (byte)uVar2 & (byte)_UNK_001f4c58)))))));
  local_48 = local_24;
  local_58 = local_88;
  FUN_007b6160(param_1 + 0x28,&local_58,FUN_00c453ac);
  FUN_007b5554(local_88);
  return;
}


// ===== 00c4615c  FUN_00c4615c =====

void FUN_00c4615c(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined1 local_80 [16];
  char *local_70;
  ulong local_68;
  undefined1 *local_60;
  char **local_58;
  char *local_50;
  char *pcStack_48;
  undefined1 uStack_21;
  
  if (((DAT_00dbb0e0 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00dbb0e0), iVar1 != 0)) {
    DAT_00dbb0d8 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbb0e0);
  }
  local_58 = (char **)0x0;
  pcStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbb0d8 != '\0') {
    FUN_0066d348(0x42,DAT_00dbb0d8,"RtpTransport::OnReadPacket",0,0,0,0,0,0);
    local_50 = DAT_00dbb0d8;
    pcStack_48 = "RtpTransport::OnReadPacket";
    local_58 = &local_50;
  }
  uVar2 = FUN_00b1d0dc(*param_3,param_3[1]);
  if ((int)uVar2 != 2) {
    uVar3 = FUN_00b1d07c(uVar2,param_3[1]);
    if ((uVar3 & 1) == 0) {
      uVar3 = FUN_004249b0();
      if ((uVar3 & 1) == 0) {
        local_70 = "../../pc/rtp_transport.cc";
        local_68 = 0x933;
        local_60 = &uStack_21;
        local_80 = FUN_00b1d0a0(uVar2 & 0xffffffff);
        FUN_00623bb0(&DAT_0025924c,local_70,local_68 & 0xffffffff,"Dropping incoming ",local_80,
                     " packet: wrong size=",param_3[1]);
      }
    }
    else {
      if ((int)uVar2 == 1) {
        pcVar4 = *(code **)(*param_1 + 0x90);
      }
      else {
        pcVar4 = *(code **)(*param_1 + 0x88);
      }
      (*pcVar4)(param_1,param_3);
    }
  }
  if ((local_58 != (char **)0x0) && (**local_58 != '\0')) {
    FUN_0066d348(0x45,*local_58,local_58[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 00c46314  FUN_00c46314 =====

void FUN_00c46314(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  void *pvVar3;
  
  *param_1 = &PTR_FUN_00d4d580;
  FUN_007ebdcc(param_1[0x3e]);
  pvVar3 = (void *)param_1[0x3e];
  if ((pvVar3 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar3), iVar1 == 1)) {
    operator_delete(pvVar3);
  }
  FUN_00899588(param_1 + 0x21);
  plVar2 = (long *)param_1[0x1f];
  param_1[0x1f] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x48))();
  }
  plVar2 = (long *)param_1[0x1e];
  param_1[0x1e] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x48))();
  }
  FUN_00c39fec(param_1);
  return;
}


// ===== 00c463b0  FUN_00c463b0 =====

void FUN_00c463b0(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  void *pvVar3;
  
  *param_1 = &PTR_FUN_00d4d580;
  FUN_007ebdcc(param_1[0x3e]);
  pvVar3 = (void *)param_1[0x3e];
  if ((pvVar3 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar3), iVar1 == 1)) {
    operator_delete(pvVar3);
  }
  FUN_00899588(param_1 + 0x21);
  plVar2 = (long *)param_1[0x1f];
  param_1[0x1f] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x48))();
  }
  plVar2 = (long *)param_1[0x1e];
  param_1[0x1e] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x48))();
  }
  FUN_00c39fec(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00c46458  FUN_00c46458 =====

undefined8 FUN_00c46458(void)

{
  return 0;
}


// ===== 00c46464  FUN_00c46464 =====

void FUN_00c46464(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c46470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}


// ===== 00c46474  FUN_00c46474 =====

void FUN_00c46474(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  (**(code **)((long)pvVar1 + 0x10))(0,pvVar1,pvVar1);
  operator_delete(pvVar1);
  return;
}


// ===== 00c464b4  FUN_00c464b4 =====

void FUN_00c464b4(undefined8 *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00c464c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x20))(param_2,*param_1);
  return;
}


// ===== 00c464cc  FUN_00c464cc =====

void FUN_00c464cc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (param_2 != *(long *)(lVar1 + 0xe8)) {
    *(undefined1 *)(lVar1 + 0x102) = 1;
    FUN_00c4541c();
    return;
  }
  *(undefined1 *)(lVar1 + 0x103) = 1;
  FUN_00c4541c();
  return;
}


// ===== 00c464f8  FUN_00c464f8 =====

void FUN_00c464f8(undefined8 *param_1)

{
  FUN_00c4615c(*param_1);
  return;
}


// ===== 00c46504  FUN_00c46504 =====

void FUN_00c46504(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  uStack_38 = param_2[1];
  local_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  local_20 = param_2[4];
  (**(code **)(*(long *)*param_1 + 0x80))((long *)*param_1,&local_40);
  return;
}


// ===== 00c46548  FUN_00c46548 =====

void FUN_00c46548(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c46558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x98))();
  return;
}


// ===== 00c4655c  FUN_00c4655c =====

void FUN_00c4655c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_28;
  
  lVar1 = *param_1;
  uVar2 = FUN_007ebde8(param_1[1]);
  if ((uVar2 & 1) != 0) {
    local_28 = param_3;
    FUN_007b6160(lVar1 + 0xb0,&local_28,FUN_00c464b4);
  }
  return;
}


// ===== 00c465ac  FUN_00c465ac =====

void FUN_00c465ac(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
    uVar3 = param_2[1];
    param_2[1] = 0;
    param_3[1] = uVar3;
  }
  else if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xc46630);
    (*pcVar1)();
  }
  pvVar4 = (void *)param_2[1];
  if ((pvVar4 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,pvVar4), iVar2 == 1)) {
    operator_delete(pvVar4);
    return;
  }
  return;
}


// ===== 00c46630  FUN_00c46630 =====

void FUN_00c46630(undefined8 *param_1)

{
  FUN_00c4541c(*param_1);
  return;
}


// ===== 00c4663c  FUN_00c4663c =====

void FUN_00c4663c(long param_1,long *param_2)

{
  int ****ppppiVar1;
  bool bVar2;
  int ***local_48;
  ulong local_40;
  byte bStack_31;
  
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  (**(code **)(*param_2 + 0x10))(&local_48,param_2,"WebRTC-Debugging-RtpDump",0x18);
  bVar2 = false;
  if (-1 < (char)bStack_31) {
    local_40 = (ulong)bStack_31;
  }
  if (6 < local_40) {
    ppppiVar1 = (int ****)local_48;
    if (-1 < (char)bStack_31) {
      ppppiVar1 = &local_48;
    }
    bVar2 = *(int *)ppppiVar1 == 0x62616e45 && *(int *)((long)ppppiVar1 + 3) == 0x64656c62;
  }
  if ((char)bStack_31 < '\0') {
    operator_delete(local_48);
  }
  *(bool *)(param_1 + 0x28) = bVar2;
  return;
}


// ===== 00c4671c  FUN_00c4671c =====

ulong FUN_00c4671c(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  pthread_mutex_t *ppVar4;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if (uVar3 != 0) {
    FUN_00c4c2e8(uVar3,0);
    uVar3 = FUN_00c4a884(*(undefined8 *)(param_1 + 8));
  }
  if (*(char *)(param_1 + 0x18) == '\x01') {
    if (((DAT_00dbb0f0 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00dbb0f0), iVar2 != 0)) {
      ppVar4 = (pthread_mutex_t *)operator_new(0x2c);
      *(int *)((long)ppVar4 + 8) = 0;
      *(uint *)((long)ppVar4 + 0xc) = 0;
      ppVar4->__align = 0;
      (ppVar4->__data).__list.__prev = (__pthread_internal_list *)0x0;
      *(int *)((long)ppVar4 + 0x10) = 0;
      *(int *)((long)ppVar4 + 0x14) = 0;
      *(undefined8 *)((long)&(ppVar4->__data).__list.__next + 4) = 0;
      *(undefined8 *)((long)&(ppVar4->__data).__list.__prev + 4) = 0;
      FUN_00c47cf4();
      ppVar4[1].__data.__lock = 0;
      DAT_00dbb0e8 = ppVar4;
      FUN_0054ff1c(&DAT_00dbb0f0);
    }
    ppVar4 = DAT_00dbb0e8;
    pthread_mutex_lock(DAT_00dbb0e8);
    iVar2 = ppVar4[1].__data.__lock + -1;
    ppVar4[1].__data.__lock = iVar2;
    if (iVar2 == 0) {
      iVar2 = FUN_00c4c400(0,0);
      if (iVar2 != 0) {
        uVar3 = FUN_004249b0();
        if ((uVar3 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e94,"../../pc/srtp_session.cc",0x46b,
                       "Failed to uninstall libsrtp log handler, err=",iVar2);
        }
      }
      iVar2 = thunk_FUN_00c4e690();
      if (iVar2 != 0) {
        uVar3 = FUN_004249b0();
        if ((uVar3 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e94,"../../pc/srtp_session.cc",0x493,"srtp_shutdown failed. err=",
                       iVar2);
        }
      }
    }
    uVar1 = pthread_mutex_unlock(ppVar4);
    return (ulong)uVar1;
  }
  return uVar3;
}


// ===== 00c46868  FUN_00c46868 =====

void FUN_00c46868(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00c46880(param_1,3,param_2,param_3,param_4);
  return;
}


// ===== 00c46880  FUN_00c46880 =====

undefined8
FUN_00c46880(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  pthread_mutex_t *ppVar4;
  char *pcVar5;
  
  if (*(long *)(param_1 + 8) != 0) {
    uVar2 = FUN_004249b0();
    if ((uVar2 & 1) != 0) {
      return 0;
    }
    FUN_00623bb0(&DAT_001f4e98,"../../pc/srtp_session.cc",0x12b3,
                 "Failed to create SRTP session: SRTP session already created");
    return 0;
  }
  if (((DAT_00dbb0f0 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00dbb0f0), iVar1 != 0)) {
    ppVar4 = (pthread_mutex_t *)operator_new(0x2c);
    *(int *)((long)ppVar4 + 8) = 0;
    *(uint *)((long)ppVar4 + 0xc) = 0;
    ppVar4->__align = 0;
    (ppVar4->__data).__list.__prev = (__pthread_internal_list *)0x0;
    *(int *)((long)ppVar4 + 0x10) = 0;
    *(int *)((long)ppVar4 + 0x14) = 0;
    *(undefined8 *)((long)&(ppVar4->__data).__list.__next + 4) = 0;
    *(undefined8 *)((long)&(ppVar4->__data).__list.__prev + 4) = 0;
    FUN_00c47cf4();
    ppVar4[1].__data.__lock = 0;
    DAT_00dbb0e8 = ppVar4;
    FUN_0054ff1c(&DAT_00dbb0f0);
  }
  ppVar4 = DAT_00dbb0e8;
  pthread_mutex_lock(DAT_00dbb0e8);
  iVar1 = ppVar4[1].__data.__lock;
  if (iVar1 != 0) {
LAB_00c4690c:
    ppVar4[1].__data.__lock = iVar1 + 1;
    pthread_mutex_unlock(ppVar4);
    *(undefined1 *)(param_1 + 0x18) = 1;
    uVar3 = FUN_00c4793c(param_1,param_2,param_3,param_4,param_5);
    return uVar3;
  }
  iVar1 = FUN_00c4c400(FUN_00c47d3c,0);
  if (iVar1 == 0) {
    iVar1 = FUN_00c4a848();
    if (iVar1 == 0) {
      iVar1 = FUN_00c48c5c(FUN_00c47b90);
      if (iVar1 == 0) {
        iVar1 = FUN_00c501b0();
        if (iVar1 == 0) {
          iVar1 = ppVar4[1].__data.__lock;
          goto LAB_00c4690c;
        }
        uVar2 = FUN_004249b0();
        if ((uVar2 & 1) != 0) goto LAB_00c46a3c;
        pcVar5 = "Failed to initialize fake auth, err=";
        uVar3 = 0x3f3;
      }
      else {
        uVar2 = FUN_004249b0();
        if ((uVar2 & 1) != 0) goto LAB_00c46a3c;
        pcVar5 = "Failed to install SRTP event handler, err=";
        uVar3 = 0x3c3;
      }
    }
    else {
      uVar2 = FUN_004249b0();
      if ((uVar2 & 1) != 0) goto LAB_00c46a3c;
      pcVar5 = "Failed to init SRTP, err=";
      uVar3 = 0x393;
    }
  }
  else {
    uVar2 = FUN_004249b0();
    if ((uVar2 & 1) != 0) goto LAB_00c46a3c;
    pcVar5 = "Failed to install libsrtp log handler, err=";
    uVar3 = 0x36b;
  }
  FUN_00623bb0(&DAT_001f4e94,"../../pc/srtp_session.cc",uVar3,pcVar5,iVar1);
LAB_00c46a3c:
  pthread_mutex_unlock(ppVar4);
  return 0;
}


// ===== 00c46ab0  FUN_00c46ab0 =====

undefined8 FUN_00c46ab0(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 8) != 0) {
    uVar1 = FUN_00c4793c(param_1,3,param_2,param_3,param_4);
    return uVar1;
  }
  uVar2 = FUN_004249b0();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../pc/srtp_session.cc",0x136b,
                 "Failed to update non-existing SRTP session");
  }
  return 0;
}


// ===== 00c46b14  FUN_00c46b14 =====

void FUN_00c46b14(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00c46880(param_1,2,param_2,param_3,param_4);
  return;
}


// ===== 00c46b2c  FUN_00c46b2c =====

undefined8 FUN_00c46b2c(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 8) != 0) {
    uVar1 = FUN_00c4793c(param_1,2,param_2,param_3,param_4);
    return uVar1;
  }
  uVar2 = FUN_004249b0();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../pc/srtp_session.cc",0x136b,
                 "Failed to update non-existing SRTP session");
  }
  return 0;
}


// ===== 00c46b90  FUN_00c46b90 =====

bool FUN_00c46b90(long param_1,long *param_2)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  char *local_68;
  undefined8 uStack_60;
  undefined1 *local_58;
  char *local_50;
  char **ppcStack_48;
  undefined1 uStack_25;
  int local_24;
  
  lVar8 = *(long *)(param_1 + 8);
  if (lVar8 == 0) {
    uVar5 = FUN_004022fc();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../pc/srtp_session.cc",0x64a,
                   "Failed to protect SRTP packet: no SRTP Session");
    }
  }
  else {
    lVar6 = param_2[2];
    lVar7 = *param_2;
    uVar5 = lVar6 + *(int *)(param_1 + 0x10);
    if (lVar7 == 0) {
      if (uVar5 == 0) goto LAB_00c46c3c;
    }
    else if (uVar5 <= (ulong)(*(long *)(lVar7 + 8) - param_2[1])) {
LAB_00c46c3c:
      if (*(char *)(param_1 + 0x28) == '\x01') {
        FUN_00c46da4(param_1,param_2,1);
        lVar6 = param_2[2];
        lVar8 = *(long *)(param_1 + 8);
        lVar7 = *param_2;
      }
      local_24 = (int)lVar6;
      if (lVar7 == 0) {
        lVar6 = 0;
      }
      else {
        FUN_007b5788(param_2,*(long *)(lVar7 + 8) - param_2[1]);
        lVar6 = *(long *)(*param_2 + 0x10) + param_2[1];
      }
      iVar3 = FUN_00c48c74(lVar8,lVar6,&local_24);
      lVar8 = *param_2;
      if (lVar8 != 0) {
        lVar8 = *(long *)(lVar8 + 0x10) + param_2[1];
      }
      lVar6 = 0;
      if (param_2[2] != 0) {
        lVar6 = lVar8;
      }
      uVar2 = FUN_00b1d194(lVar6);
      bVar1 = iVar3 == 0;
      if (iVar3 != 0) {
        uVar5 = FUN_004022fc();
        if ((uVar5 & 1) != 0) {
          return bVar1;
        }
        local_58 = &uStack_25;
        local_68 = "../../pc/srtp_session.cc";
        uStack_60 = 0x702;
        ppcStack_48 = &local_68;
        local_50 = "Failed to protect SRTP packet, seqnum=";
        FUN_00623bb0(&DAT_001f707a,"../../pc/srtp_session.cc",0x702,
                     "Failed to protect SRTP packet, seqnum=",uVar2,", err=",iVar3,", last seqnum=",
                     *(undefined4 *)(param_1 + 0x1c));
        return bVar1;
      }
      FUN_007b5678(param_2,(long)local_24);
      *(uint *)(param_1 + 0x1c) = (uint)uVar2;
      return bVar1;
    }
    uVar4 = FUN_004022fc();
    if ((uVar4 & 1) == 0) {
      if (*param_2 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = *(long *)(*param_2 + 8) - param_2[1];
      }
      FUN_00623bb0(&DAT_001fd8a8,"../../pc/srtp_session.cc",0x69a,
                   "Failed to protect SRTP packet: The buffer length ",lVar8,
                   " is less than the needed ",uVar5);
    }
  }
  return false;
}


// ===== 00c46da4  FUN_00c46da4 =====

/* WARNING: Removing unreachable block (ram,0x00c473ec) */
/* WARNING: Removing unreachable block (ram,0x00c473d4) */
/* WARNING: Removing unreachable block (ram,0x00c473bc) */
/* WARNING: Removing unreachable block (ram,0x00c473a4) */
/* WARNING: Removing unreachable block (ram,0x00c47234) */
/* WARNING: Removing unreachable block (ram,0x00c471d0) */
/* WARNING: Removing unreachable block (ram,0x00c47158) */
/* WARNING: Removing unreachable block (ram,0x00c470f0) */
/* WARNING: Removing unreachable block (ram,0x00c4707c) */
/* WARNING: Removing unreachable block (ram,0x00c47014) */
/* WARNING: Removing unreachable block (ram,0x00c46f98) */
/* WARNING: Removing unreachable block (ram,0x00c46f2c) */
/* WARNING: Removing unreachable block (ram,0x00c46f10) */
/* WARNING: Removing unreachable block (ram,0x00c46f7c) */
/* WARNING: Removing unreachable block (ram,0x00c46ff8) */
/* WARNING: Removing unreachable block (ram,0x00c47060) */
/* WARNING: Removing unreachable block (ram,0x00c470d4) */
/* WARNING: Removing unreachable block (ram,0x00c4713c) */
/* WARNING: Removing unreachable block (ram,0x00c471b4) */
/* WARNING: Removing unreachable block (ram,0x00c47218) */
/* WARNING: Removing unreachable block (ram,0x00c47404) */

void FUN_00c46da4(undefined8 param_1,long *param_2,ulong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  int iVar20;
  int iVar21;
  undefined4 local_268;
  undefined1 local_264 [4];
  undefined4 local_260;
  undefined1 local_25c [4];
  undefined4 local_258;
  undefined1 local_254 [4];
  undefined4 local_250;
  undefined1 local_24c [3];
  undefined1 uStack_249;
  char *local_248;
  undefined8 local_240;
  undefined1 *local_238;
  undefined *local_230;
  char **local_228;
  undefined *local_220;
  undefined **ppuStack_218;
  undefined1 *local_210;
  undefined **ppuStack_208;
  void *local_200;
  undefined8 uStack_1f8;
  long local_1f0;
  undefined1 **local_1e8;
  void *local_1e0;
  undefined8 uStack_1d8;
  long local_1d0;
  void **local_1c8;
  long local_1c0;
  void **ppvStack_1b8;
  undefined *local_1b0;
  long *plStack_1a8;
  void *local_1a0;
  undefined8 uStack_198;
  long local_190;
  undefined **local_188;
  void *local_180;
  undefined8 uStack_178;
  long local_170;
  void **local_168;
  long local_160;
  void **ppvStack_158;
  undefined *local_150;
  long *plStack_148;
  void *local_140;
  undefined8 uStack_138;
  long local_130;
  undefined **local_128;
  void *local_120;
  undefined8 uStack_118;
  long local_110;
  void **local_108;
  long local_100;
  void **ppvStack_f8;
  undefined *local_f0;
  long *plStack_e8;
  void *local_e0;
  undefined8 uStack_d8;
  long local_d0;
  undefined **local_c8;
  void *local_c0;
  undefined8 uStack_b8;
  long local_b0;
  void **local_a8;
  long local_98;
  void **ppvStack_90;
  void *local_88;
  undefined8 uStack_80;
  
  lVar8 = FUN_00625b64();
  uVar9 = FUN_0044075c();
  if ((uVar9 & 1) == 0) {
    local_248 = "../../pc/srtp_session.cc";
    local_240 = 0x1528;
    local_238 = &uStack_249;
    ppuStack_218 = &local_230;
    lVar8 = lVar8 % 86400000;
    iVar20 = (int)((ulong)(lVar8 * 0x45e7b273) >> 0x20);
    iVar21 = (iVar20 >> 0xe) - (iVar20 >> 0x1f);
    local_230 = &DAT_001ded1c;
    local_228 = &local_248;
    iVar20 = (int)((ulong)(lVar8 * 0x10624dd3) >> 0x20);
    iVar15 = (int)((ulong)(lVar8 * 0x4a90be59) >> 0x20);
    uVar1 = iVar21 + ((uint)(iVar21 * -0x7777) >> 0x10);
    iVar20 = (iVar20 >> 6) - (iVar20 >> 0x1f);
    ppuStack_208 = &local_220;
    local_210 = &DAT_001d5e07;
    local_220 = &DAT_001dc4ca;
    if ((param_3 & 1) == 0) {
      local_220 = &DAT_0019fcd7;
    }
    local_24c[0] = 0x30;
    FUN_00c47e04(&local_c0,local_24c);
    local_1e8 = &local_210;
    uStack_1f8 = uStack_b8;
    local_200 = local_c0;
    local_1f0 = local_b0;
    local_250 = 2;
    FUN_00c48000(&local_c0,&local_250);
    local_1c8 = &local_200;
    uStack_1d8 = uStack_b8;
    local_1e0 = local_c0;
    local_1d0 = local_b0;
    ppvStack_1b8 = &local_1e0;
    plStack_1a8 = &local_1c0;
    local_1b0 = &DAT_001ca603;
    local_254[0] = 0x30;
    local_1c0 = (long)((iVar15 >> 0x14) - (iVar15 >> 0x1f));
    FUN_00c47e04(&local_c0,local_254);
    local_188 = &local_1b0;
    uStack_198 = uStack_b8;
    local_1a0 = local_c0;
    local_190 = local_b0;
    local_258 = 2;
    FUN_00c48000(&local_c0,&local_258);
    local_168 = &local_1a0;
    uStack_178 = uStack_b8;
    local_180 = local_c0;
    local_170 = local_b0;
    ppvStack_158 = &local_180;
    plStack_148 = &local_160;
    local_150 = &DAT_001ca603;
    local_25c[0] = 0x30;
    local_160 = (long)(short)((short)iVar21 +
                             ((short)((uint)(int)(short)uVar1 >> 5) +
                             (short)((uVar1 & 0x8000) >> 0xf)) * -0x3c);
    FUN_00c47e04(&local_c0,local_25c);
    local_128 = &local_150;
    uStack_138 = uStack_b8;
    local_140 = local_c0;
    local_130 = local_b0;
    local_260 = 2;
    FUN_00c48000(&local_c0,&local_260);
    local_108 = &local_140;
    uStack_118 = uStack_b8;
    local_120 = local_c0;
    local_110 = local_b0;
    ppvStack_f8 = &local_120;
    plStack_e8 = &local_100;
    local_f0 = &DAT_001ea377;
    local_264[0] = 0x30;
    local_100 = (long)(iVar20 % 0x3c);
    FUN_00c47e04(&local_c0,local_264);
    local_c8 = &local_f0;
    uStack_d8 = uStack_b8;
    local_e0 = local_c0;
    local_d0 = local_b0;
    lVar8 = (long)((int)lVar8 + iVar20 * -1000);
    local_268 = 3;
    FUN_00c48000(&local_88,&local_268);
    local_a8 = &local_e0;
    uStack_b8 = uStack_80;
    local_c0 = local_88;
    ppvStack_90 = &local_c0;
    if (*param_2 == 0) {
      lVar12 = 0;
      lVar13 = param_2[2];
    }
    else {
      lVar12 = *(long *)(*param_2 + 0x10) + param_2[1];
      lVar13 = param_2[2];
    }
    local_98 = lVar8;
    if (lVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string_view:331: libc++ Hardening assertion __len <= static_cast<size_type>(numeric_limits<difference_type>::max()) failed: string_view::string_view(_CharT *, size_t): length does not fit in difference_type\n"
                );
    }
    if ((lVar12 == 0) && (lVar13 != 0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
                );
    }
    FUN_00624c40(&local_88,lVar12,lVar13,0x20);
    puVar16 = *(undefined8 **)((long)ppvStack_90[3] + 0x18);
    puVar2 = (undefined8 *)puVar16[1];
    lVar8 = puVar2[1];
    lVar17 = *(long *)(lVar8 + 0x18);
    puVar18 = *(undefined8 **)(lVar17 + 0x18);
    puVar3 = (undefined8 *)puVar18[1];
    lVar12 = puVar3[1];
    lVar19 = *(long *)(lVar12 + 0x18);
    puVar10 = *(undefined8 **)(lVar19 + 0x18);
    puVar4 = (undefined8 *)puVar10[1];
    lVar13 = puVar4[1];
    lVar14 = *(long *)(lVar13 + 0x18);
    puVar11 = *(undefined8 **)(lVar14 + 0x18);
    puVar5 = (undefined8 *)puVar11[1];
    puVar6 = (undefined8 *)puVar5[1];
    puVar7 = (undefined8 *)puVar6[1];
    FUN_00623bb0(&DAT_00259252,*puVar7,*(undefined4 *)(puVar7 + 1),*puVar6,*puVar5,*puVar11,lVar14,
                 lVar13,*puVar4,*puVar10,lVar19,lVar12,*puVar3,*puVar18,lVar17,lVar8,*puVar2,
                 *puVar16,ppvStack_90[3],ppvStack_90,local_98,&DAT_001d5e07,"000000 ",&local_88,
                 " # RTP_DUMP");
    if (local_170 < 0) {
      operator_delete(local_180);
    }
    if (local_190 < 0) {
      operator_delete(local_1a0);
    }
    if (local_1d0 < 0) {
      operator_delete(local_1e0);
    }
    if (local_1f0 < 0) {
      operator_delete(local_200);
    }
  }
  return;
}


// ===== 00c4748c  FUN_00c4748c =====

bool FUN_00c4748c(long param_1,long *param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int local_34;
  
  lVar7 = *(long *)(param_1 + 8);
  if (lVar7 == 0) {
    uVar4 = FUN_004022fc();
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../pc/srtp_session.cc",0x922,
                   "Failed to protect SRTCP packet: no SRTP Session");
    }
  }
  else {
    lVar5 = param_2[2];
    lVar6 = *param_2;
    uVar4 = lVar5 + *(int *)(param_1 + 0x14) + 4;
    if (lVar6 == 0) {
      if (uVar4 == 0) goto LAB_00c47538;
    }
    else if (uVar4 <= (ulong)(*(long *)(lVar6 + 8) - param_2[1])) {
LAB_00c47538:
      if (*(char *)(param_1 + 0x28) == '\x01') {
        FUN_00c46da4(param_1,param_2,1);
        lVar5 = param_2[2];
        lVar7 = *(long *)(param_1 + 8);
        lVar6 = *param_2;
      }
      local_34 = (int)lVar5;
      if (lVar6 == 0) {
        lVar5 = 0;
      }
      else {
        FUN_007b5788(param_2,*(long *)(lVar6 + 8) - param_2[1]);
        lVar5 = *(long *)(*param_2 + 0x10) + param_2[1];
      }
      iVar2 = FUN_00c4b674(lVar7,lVar5,&local_34);
      bVar1 = iVar2 == 0;
      if (iVar2 != 0) {
        uVar4 = FUN_004022fc();
        if ((uVar4 & 1) != 0) {
          return bVar1;
        }
        FUN_00623bb0(&DAT_001f4e94,"../../pc/srtp_session.cc",0x9da,
                     "Failed to protect SRTCP packet, err=",iVar2);
        return bVar1;
      }
      FUN_007b5678(param_2,(long)local_34);
      return bVar1;
    }
    uVar3 = FUN_004022fc();
    if ((uVar3 & 1) == 0) {
      if (*param_2 == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = *(long *)(*param_2 + 8) - param_2[1];
      }
      FUN_00623bb0(&DAT_001fd8a8,"../../pc/srtp_session.cc",0x97a,
                   "Failed to protect SRTCP packet: The buffer capacity ",lVar7,
                   " is less than the needed ",uVar4);
    }
  }
  return false;
}


// ===== 00c47638  FUN_00c47638 =====

bool FUN_00c47638(long param_1,long *param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  int local_34;
  
  lVar7 = *(long *)(param_1 + 8);
  if (lVar7 == 0) {
    uVar3 = FUN_004022fc();
    if ((uVar3 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../pc/srtp_session.cc",0xb1a,
                   "Failed to unprotect SRTP packet: no SRTP Session");
    }
    bVar1 = false;
  }
  else {
    local_34 = (int)param_2[2];
    if (*param_2 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_007b5788(param_2,*(long *)(*param_2 + 8) - param_2[1]);
      lVar5 = *(long *)(*param_2 + 0x10) + param_2[1];
    }
    iVar2 = FUN_00c49de8(lVar7,lVar5,&local_34);
    bVar1 = iVar2 == 0;
    if (iVar2 == 0) {
      uVar4 = FUN_007b5678(param_2,(long)local_34);
      if (*(char *)(param_1 + 0x28) == '\x01') {
        FUN_00c46da4(uVar4,param_2,0);
      }
    }
    else {
      iVar6 = *(int *)(param_1 + 0x24);
      if ((iVar6 * -0x3d70a3d7 + 0x51eb850U >> 2 | iVar6 * 0x40000000) < 0x28f5c29) {
        uVar3 = FUN_004022fc();
        if ((uVar3 & 1) == 0) {
          FUN_00623bb0(&DAT_001f6148,"../../pc/srtp_session.cc",0xb72,
                       "Failed to unprotect SRTP packet, err=",iVar2,", previous failure count: ",
                       *(undefined4 *)(param_1 + 0x24));
        }
        iVar6 = *(int *)(param_1 + 0x24);
      }
      *(int *)(param_1 + 0x24) = iVar6 + 1;
      lVar7 = FUN_0066631c("WebRTC.PeerConnection.SrtpUnprotectError",0x28,0x1c);
      if (lVar7 != 0) {
        FUN_00666568(lVar7,iVar2);
      }
    }
  }
  return bVar1;
}


// ===== 00c477b8  FUN_00c477b8 =====

bool FUN_00c477b8(long param_1,long *param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int local_34;
  
  lVar6 = *(long *)(param_1 + 8);
  if (lVar6 == 0) {
    uVar3 = FUN_004022fc();
    if ((uVar3 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../pc/srtp_session.cc",0xcf2,
                   "Failed to unprotect SRTCP packet: no SRTP Session");
    }
    bVar1 = false;
  }
  else {
    local_34 = (int)param_2[2];
    if (*param_2 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_007b5788(param_2,*(long *)(*param_2 + 8) - param_2[1]);
      lVar5 = *(long *)(*param_2 + 0x10) + param_2[1];
    }
    iVar2 = FUN_00c4bbe0(lVar6,lVar5,&local_34);
    bVar1 = iVar2 == 0;
    if (iVar2 == 0) {
      uVar4 = FUN_007b5678(param_2,(long)local_34);
      if (*(char *)(param_1 + 0x28) == '\x01') {
        FUN_00c46da4(uVar4,param_2,0);
      }
    }
    else {
      uVar3 = FUN_004022fc();
      if ((uVar3 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e94,"../../pc/srtp_session.cc",0xd2a,
                     "Failed to unprotect SRTCP packet, err=",iVar2);
      }
      lVar6 = FUN_0066631c("WebRTC.PeerConnection.SrtcpUnprotectError",0x29,0x1c);
      if (lVar6 != 0) {
        FUN_00666568(lVar6,iVar2);
      }
    }
  }
  return bVar1;
}


// ===== 00c478f4  FUN_00c478f4 =====

undefined4 FUN_00c478f4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}


// ===== 00c47900  FUN_00c47900 =====

void FUN_00c47900(long param_1)

{
  *(undefined1 *)(param_1 + 0x21) = 1;
  return;
}


// ===== 00c47910  FUN_00c47910 =====

bool FUN_00c47910(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  iVar2 = FUN_00c4b1ec(*(undefined8 *)(param_1 + 8),uVar1 >> 0x10 | uVar1 << 0x10);
  return iVar2 == 0;
}


// ===== 00c4793c  FUN_00c4793c =====

undefined8 FUN_00c4793c(long param_1,uint param_2,undefined4 param_3,long *param_4,long *param_5)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  long *plVar6;
  ulong local_c0;
  undefined8 uStack_b8;
  int iStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 local_48;
  
  uStack_b8 = 0;
  local_c0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  local_68 = 0;
  uStack_70 = 0;
  lStack_58 = 0;
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  iVar2 = FUN_00c4c300((ulong)&local_c0 | 8,param_3);
  if ((iVar2 == 0) && (iVar2 = FUN_00c4c380(&local_a0,param_3), iVar2 == 0)) {
    if (*param_4 == (long)iStack_b4) {
      local_88 = param_4[2];
      local_c0 = (ulong)param_2;
      local_68 = 0x400;
      local_60 = CONCAT44(local_60._4_4_,1);
      if (((param_2 == 3) && (*(char *)(param_1 + 0x21) == '\x01')) &&
         (uVar3 = FUN_0083e2bc(param_3), (uVar3 & 1) == 0)) {
        local_b0 = CONCAT44(local_b0._4_4_,4);
      }
      lVar1 = *param_5;
      if (lVar1 != param_5[1]) {
        local_50 = CONCAT44(local_50._4_4_,(int)((ulong)(param_5[1] - lVar1) >> 2));
        lStack_58 = lVar1;
      }
      local_48 = 0;
      plVar6 = (long *)(param_1 + 8);
      if (*plVar6 == 0) {
        iVar2 = FUN_00c4b120(plVar6,&local_c0);
        if (iVar2 == 0) {
          FUN_00c4c2e8(*(undefined8 *)(param_1 + 8),param_1);
          goto LAB_00c47b6c;
        }
        *plVar6 = 0;
        uVar3 = FUN_004249b0();
        if ((uVar3 & 1) != 0) {
          return 0;
        }
        pcVar5 = "Failed to create SRTP session, err=";
        uVar4 = 0x11f3;
      }
      else {
        iVar2 = FUN_00c4b23c();
        if (iVar2 == 0) {
LAB_00c47b6c:
          *(undefined4 *)(param_1 + 0x10) = (undefined4)local_a8;
          *(undefined4 *)(param_1 + 0x14) = (undefined4)local_90;
          *(bool *)(param_1 + 0x20) = (int)local_b0 == 4;
          return 1;
        }
        uVar3 = FUN_004249b0();
        if ((uVar3 & 1) != 0) {
          return 0;
        }
        pcVar5 = "Failed to update SRTP session, err=";
        uVar4 = 0x122b;
      }
      FUN_00623bb0(&DAT_001f4e94,"../../pc/srtp_session.cc",uVar4,pcVar5,iVar2);
    }
    else {
      uVar3 = FUN_004249b0();
      if ((uVar3 & 1) == 0) {
        pcVar5 = "create";
        if (*(long *)(param_1 + 8) != 0) {
          pcVar5 = "update";
        }
        FUN_00623bb0(&DAT_001f4ead,"../../pc/srtp_session.cc",0x10fb,"Failed to ",pcVar5,
                     " SRTP session: invalid key");
      }
    }
  }
  else {
    uVar3 = FUN_004249b0();
    if ((uVar3 & 1) == 0) {
      pcVar5 = "create";
      if (*(long *)(param_1 + 8) != 0) {
        pcVar5 = "update";
      }
      FUN_00623bb0(&DAT_0021573b,"../../pc/srtp_session.cc",0x10c3,"Failed to ",pcVar5,
                   " SRTP session: unsupported cipher_suite ",param_3);
    }
  }
  return 0;
}


// ===== 00c47b90  FUN_00c47b90 =====

void FUN_00c47b90(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = FUN_00c4c2f4(*param_1);
  if (lVar1 != 0) {
    FUN_00c47bd4(lVar1,param_1);
    return;
  }
  return;
}


// ===== 00c47bd4  FUN_00c47bd4 =====

void FUN_00c47bd4(undefined8 param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  iVar1 = *(int *)(param_2 + 0xc);
  uVar2 = FUN_00417e08();
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      if ((uVar2 & 1) != 0) {
        return;
      }
      pcVar4 = "SRTP event: SSRC collision";
      uVar3 = 0x13e1;
    }
    else {
      if (iVar1 != 1) {
LAB_00c47c5c:
        if ((uVar2 & 1) != 0) {
          return;
        }
        FUN_00623bb0(&DAT_001f6220,"../../pc/srtp_session.cc",0x1449,"SRTP event: unknown ",
                     *(undefined4 *)(param_2 + 0xc));
        return;
      }
      if ((uVar2 & 1) != 0) {
        return;
      }
      pcVar4 = "SRTP event: reached soft key usage limit";
      uVar3 = 0x13f9;
    }
  }
  else if (iVar1 == 2) {
    if ((uVar2 & 1) != 0) {
      return;
    }
    pcVar4 = "SRTP event: reached hard key usage limit";
    uVar3 = 0x1411;
  }
  else {
    if (iVar1 != 3) goto LAB_00c47c5c;
    if ((uVar2 & 1) != 0) {
      return;
    }
    pcVar4 = "SRTP event: reached hard packet limit (2^48 packets)";
    uVar3 = 0x1429;
  }
  FUN_00623bb0(&DAT_001f4e98,"../../pc/srtp_session.cc",uVar3,pcVar4);
  return;
}


// ===== 00c47cf4  FUN_00c47cf4 =====

int FUN_00c47cf4(pthread_mutex_t *param_1)

{
  int iVar1;
  undefined1 *local_8;
  
  local_8 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_8);
  pthread_mutex_init(param_1,(pthread_mutexattr_t *)&local_8);
  iVar1 = pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_8);
  return iVar1;
}


// ===== 00c47d3c  FUN_00c47d3c =====

void FUN_00c47d3c(int param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (param_1 < 2) {
    if (param_1 == 0) {
      uVar1 = FUN_004249b0();
      if ((uVar1 & 1) != 0) {
        return;
      }
      uVar2 = 0x293;
    }
    else {
      if ((param_1 != 1) || (uVar1 = FUN_004022fc(), (uVar1 & 1) != 0)) {
        return;
      }
      uVar2 = 0x2a2;
    }
  }
  else if (param_1 == 2) {
    uVar1 = FUN_00417e08();
    if ((uVar1 & 1) != 0) {
      return;
    }
    uVar2 = 0x2b1;
  }
  else {
    if (param_1 != 3) {
      return;
    }
    uVar1 = FUN_0044075c();
    if ((uVar1 & 1) != 0) {
      return;
    }
    uVar2 = 0x2c0;
  }
  FUN_00623bb0(&DAT_001f4ed3,"../../pc/srtp_session.cc",uVar2,"SRTP log: ",param_2);
  return;
}


// ===== 00c47e04  FUN_00c47e04 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00c47e04(undefined8 param_1,byte *param_2)

{
  undefined *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  void *local_170 [11];
  long local_118;
  undefined1 *puStack_110;
  undefined1 *local_108;
  undefined *puStack_100;
  undefined1 *local_f8;
  undefined1 *puStack_f0;
  undefined1 *local_e8;
  undefined8 uStack_e0;
  undefined1 *local_d8;
  undefined8 uStack_d0;
  undefined1 *local_c8;
  undefined1 *puStack_c0;
  undefined1 *local_b8;
  undefined1 *puStack_b0;
  undefined1 *local_a8;
  undefined1 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 auStack_68 [8];
  
  puVar4 = PTR_PTR_00d51b50;
  puVar3 = PTR_DAT_00d51b48;
  local_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_108 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
  local_b8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
  local_c8 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_e0 = &DAT_aaaaaaaaaaaaaaaa;
  local_e8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f0 = &DAT_aaaaaaaaaaaaaaaa;
  local_f8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_110 = &DAT_aaaaaaaaaaaaaaaa;
  local_118 = (long)&DAT_aaaaaaaaaaaaaaaa;
  local_170[10] = &DAT_aaaaaaaaaaaaaaaa;
  local_170[9] = &DAT_aaaaaaaaaaaaaaaa;
  local_170[8] = &DAT_aaaaaaaaaaaaaaaa;
  local_170[7] = &DAT_aaaaaaaaaaaaaaaa;
  local_170[6] = &DAT_aaaaaaaaaaaaaaaa;
  local_170[5] = &DAT_aaaaaaaaaaaaaaaa;
  local_170[4] = &DAT_aaaaaaaaaaaaaaaa;
  local_170[3] = &DAT_aaaaaaaaaaaaaaaa;
  local_170[2] = &DAT_aaaaaaaaaaaaaaaa;
  local_170[1] = &DAT_aaaaaaaaaaaaaaaa;
  local_170[0] = *(void **)(PTR_PTR_00d51b50 + 8);
  puVar1 = PTR_DAT_00d51b48 + 0x40;
  uStack_d0 = 0;
  puStack_100 = puVar1;
  *(undefined8 *)((long)local_170 + *(long *)((long)local_170[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_00d51b50 + 0x10);
  lVar7 = *(long *)((long)local_170[0] + -0x18);
  FUN_00520e8c((long)local_170 + lVar7,local_170 + 1);
  puVar5 = PTR_DAT_00d51e20;
  *(undefined8 *)((long)&local_e8 + lVar7) = 0;
  *(undefined1 *)((long)&uStack_e0 + lVar7 + 4) = 0;
  *(undefined4 *)((long)&uStack_e0 + lVar7) = 0xffffffff;
  local_170[0] = puVar3 + 0x18;
  local_170[1] = PTR_DAT_00d51e20 + 0x10;
  puStack_100 = puVar1;
  FUN_0053ce34(local_170 + 2);
  puVar1 = PTR_DAT_00d51b20 + 0x10;
  local_170[8] = (void *)0x0;
  local_170[7] = (void *)0x0;
  local_170[6] = (void *)0x0;
  local_170[5] = (void *)0x0;
  local_170[4] = (void *)0x0;
  local_170[3] = (void *)0x0;
  local_170[10] = (void *)0x0;
  local_170[9] = (void *)0x0;
  puStack_110 = (undefined1 *)0x0;
  local_118 = 0;
  local_108 = (undefined1 *)CONCAT44(local_108._4_4_,0x10);
  local_170[1] = puVar1;
  FUN_006e2de0(local_170 + 1);
  bVar2 = *param_2;
  lVar7 = *(long *)((long)local_170[0] + -0x18);
  if ((*(byte *)((long)&uStack_e0 + lVar7 + 4) & 1) == 0) {
    FUN_00520ce8(auStack_68,(long)local_170 + lVar7);
    plVar6 = (long *)FUN_0053cfd4(auStack_68,PTR_DAT_00d51b28);
    (**(code **)(*plVar6 + 0x38))(plVar6,0x20);
    FUN_0053ceec(auStack_68);
  }
  *(uint *)((long)&uStack_e0 + lVar7) = (uint)bVar2;
  *(undefined1 *)((long)&uStack_e0 + lVar7 + 4) = 1;
  FUN_0054d504(param_1,local_170 + 1);
  local_170[0] = *(void **)puVar4;
  *(undefined8 *)((long)local_170 + *(long *)((long)local_170[0] + -0x18)) =
       *(undefined8 *)(puVar4 + 0x18);
  if (local_118 < 0) {
    local_170[1] = puVar1;
    operator_delete(local_170[9]);
  }
  local_170[1] = puVar5 + 0x10;
  FUN_0053ceec(local_170 + 2);
  FUN_0054b3d4(local_170,puVar4 + 8);
  thunk_FUN_00520cf4(&puStack_100);
  return;
}


// ===== 00c48000  FUN_00c48000 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00c48000(undefined8 param_1,int *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  void *local_158 [3];
  long local_140;
  undefined1 *puStack_138;
  undefined1 *local_130;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  undefined1 *puStack_118;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 *local_f0;
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
  undefined8 uStack_c8;
  undefined1 *local_c0;
  undefined8 uStack_b8;
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
  
  puVar3 = PTR_PTR_00d51b50;
  puVar2 = PTR_DAT_00d51b48;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  local_f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
  local_130 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_120 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
  local_110 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
  local_100 = &DAT_aaaaaaaaaaaaaaaa;
  local_158[2] = &DAT_aaaaaaaaaaaaaaaa;
  local_158[1] = &DAT_aaaaaaaaaaaaaaaa;
  puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
  local_140 = (long)&DAT_aaaaaaaaaaaaaaaa;
  uStack_b8 = 0;
  local_158[0] = *(void **)(PTR_PTR_00d51b50 + 8);
  puVar1 = PTR_DAT_00d51b48 + 0x40;
  puStack_e8 = puVar1;
  *(undefined8 *)((long)local_158 + *(long *)((long)local_158[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_00d51b50 + 0x10);
  lVar4 = *(long *)((long)local_158[0] + -0x18);
  FUN_00520e8c((long)local_158 + lVar4,local_158 + 1);
  *(undefined8 *)((long)&local_d0 + lVar4) = 0;
  local_158[0] = puVar2 + 0x18;
  *(undefined1 *)((long)&uStack_c8 + lVar4 + 4) = 0;
  *(undefined4 *)((long)&uStack_c8 + lVar4) = 0xffffffff;
  puVar2 = PTR_DAT_00d51e20 + 0x10;
  local_158[1] = puVar2;
  puStack_e8 = puVar1;
  FUN_0053ce34(local_158 + 2);
  puVar1 = PTR_DAT_00d51b20 + 0x10;
  puStack_128 = (undefined1 *)0x0;
  local_130 = (undefined1 *)0x0;
  puStack_118 = (undefined1 *)0x0;
  puStack_120 = (undefined1 *)0x0;
  puStack_138 = (undefined1 *)0x0;
  local_140 = 0;
  puStack_108 = (undefined1 *)0x0;
  local_110 = (undefined1 *)0x0;
  puStack_f8 = (undefined1 *)0x0;
  local_100 = (undefined1 *)0x0;
  local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x10);
  local_158[1] = puVar1;
  FUN_006e2de0(local_158 + 1);
  *(long *)((long)&local_140 + *(long *)((long)local_158[0] + -0x18)) = (long)*param_2;
  FUN_0054d504(param_1,local_158 + 1);
  local_158[0] = *(void **)puVar3;
  *(undefined8 *)((long)local_158 + *(long *)((long)local_158[0] + -0x18)) =
       *(undefined8 *)(puVar3 + 0x18);
  if ((long)local_100 < 0) {
    local_158[1] = puVar1;
    operator_delete(local_110);
  }
  local_158[1] = puVar2;
  FUN_0053ceec(local_158 + 2);
  FUN_0054b3d4(local_158,puVar3 + 8);
  thunk_FUN_00520cf4(&puStack_e8);
  return;
}


// ===== 00c48194  FUN_00c48194 =====

undefined8 FUN_00c48194(long param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  void *__dest;
  long *plVar14;
  undefined8 uVar15;
  void *__src;
  undefined1 **ppuVar16;
  uint uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined1 *local_280;
  undefined1 *local_278;
  undefined1 *local_270;
  undefined1 *puStack_268;
  undefined1 *puStack_260;
  undefined1 *puStack_258;
  undefined1 *local_250;
  undefined1 *puStack_248;
  undefined1 *puStack_240;
  undefined1 *puStack_238;
  undefined1 *local_230;
  undefined1 *puStack_228;
  undefined1 *puStack_220;
  undefined1 *puStack_218;
  undefined1 *local_210;
  undefined1 *puStack_208;
  undefined1 *puStack_200;
  undefined1 *puStack_1f8;
  undefined1 *local_1f0;
  undefined1 *puStack_1e8;
  undefined1 *puStack_1e0;
  undefined1 *puStack_1d8;
  undefined1 *local_1d0;
  undefined1 *puStack_1c8;
  undefined1 *puStack_1c0;
  undefined1 *puStack_1b8;
  undefined1 *local_1b0;
  undefined1 *puStack_1a8;
  undefined1 *puStack_1a0;
  undefined1 *puStack_198;
  undefined1 *local_190;
  undefined1 *puStack_188;
  undefined1 *puStack_180;
  undefined1 *puStack_178;
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
  long local_70;
  
  ppuVar16 = &local_280;
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  local_278 = &DAT_aaaaaaaaaaaaaaaa;
  puVar19 = (undefined8 *)(*(long *)(param_1 + 8) + (param_3 & 0xffffffff) * 0x58);
  puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
  local_170 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_160 = &DAT_aaaaaaaaaaaaaaaa;
  __src = (void *)*param_2;
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
  FUN_00c4c6d8(puVar19[10],0xffffffffffff);
  if (*(int *)(param_2 + 2) == 0) {
    puVar19[8] = 0;
LAB_00c4823c:
    *(undefined4 *)(puVar19 + 9) = *(undefined4 *)(param_2 + 2);
    if (*(uint *)(*(long *)*puVar19 + 0x50) < 8) {
      uVar13 = *(uint *)(&DAT_001f8b48 + (ulong)*(uint *)(*(long *)*puVar19 + 0x50) * 4);
    }
    else {
      uVar13 = 0;
    }
    uVar17 = uVar13;
    if ((*(uint *)(*(long *)puVar19[3] + 0x50) < 8) &&
       (uVar17 = *(uint *)(&DAT_001f8b48 + (ulong)*(uint *)(*(long *)puVar19[3] + 0x50) * 4),
       *(uint *)(&DAT_001f8b48 + (ulong)*(uint *)(*(long *)puVar19[3] + 0x50) * 4) <= uVar13)) {
      uVar17 = uVar13;
    }
    uVar6 = FUN_00c4d318();
    iVar7 = FUN_00c4d318(puVar19[3]);
    uVar13 = *(uint *)(*(long *)*puVar19 + 0x50);
    if ((int)uVar13 < 4) {
      uVar10 = uVar13;
      if ((uVar13 != 0) && (uVar10 = uVar6, uVar13 == 1)) goto LAB_00c482f0;
    }
    else if (uVar13 - 4 < 2) {
LAB_00c482f0:
      uVar10 = uVar6 - 0xe;
    }
    else if ((uVar13 == 6) || (uVar10 = uVar6, uVar13 == 7)) {
      uVar10 = uVar6 - 0xc;
    }
    if (((int)uVar6 < (int)uVar17) && (iVar7 < (int)uVar17)) {
      uVar15 = 2;
      goto LAB_00c484cc;
    }
    uVar13 = 0x2e;
    if ((int)uVar6 < 0x1f) {
      uVar13 = 0x1e;
    }
    iVar11 = uVar6 - uVar10;
    uVar2 = 0x2e;
    if (iVar7 <= (int)uVar13) {
      uVar2 = uVar13;
    }
    uVar13 = 0x2e;
    if (uVar17 <= uVar2) {
      uVar13 = uVar2;
    }
    if (((((DAT_00d60140 != 0) &&
          (FUN_00c4c870(3,"%s: input key len: %d\n",PTR_DAT_00d60148,uVar17), DAT_00d60140 != 0)) &&
         (FUN_00c4c870(3,"%s: srtp key len: %d\n",PTR_DAT_00d60148,uVar6), DAT_00d60140 != 0)) &&
        ((FUN_00c4c870(3,"%s: srtcp key len: %d\n",PTR_DAT_00d60148,iVar7), DAT_00d60140 != 0 &&
         (FUN_00c4c870(3,"%s: base key len: %d\n",PTR_DAT_00d60148,uVar10), DAT_00d60140 != 0)))) &&
       (FUN_00c4c870(3,"%s: kdf key len: %d\n",PTR_DAT_00d60148,uVar13), DAT_00d60140 != 0)) {
      FUN_00c4c870(3,"%s: rtp salt len: %d\n",PTR_DAT_00d60148,iVar11);
    }
    puStack_168 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    puStack_160 = (undefined1 *)0x0;
    puStack_148 = (undefined1 *)0x0;
    local_150 = (undefined1 *)0x0;
    puStack_138 = (undefined1 *)0x0;
    puStack_140 = (undefined1 *)0x0;
    puStack_128 = (undefined1 *)0x0;
    local_130 = (undefined1 *)0x0;
    puStack_118 = (undefined1 *)0x0;
    puStack_120 = (undefined1 *)0x0;
    puStack_108 = (undefined1 *)0x0;
    local_110 = (undefined1 *)0x0;
    puStack_f8 = (undefined1 *)0x0;
    puStack_100 = (undefined1 *)0x0;
    puStack_e8 = (undefined1 *)0x0;
    local_f0 = (undefined1 *)0x0;
    puStack_d8 = (undefined1 *)0x0;
    puStack_e0 = (undefined1 *)0x0;
    puStack_c8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
    puStack_b8 = (undefined1 *)0x0;
    puStack_c0 = (undefined1 *)0x0;
    puStack_a8 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    puStack_98 = (undefined1 *)0x0;
    puStack_a0 = (undefined1 *)0x0;
    puStack_88 = (undefined1 *)0x0;
    local_90 = (undefined1 *)0x0;
    puStack_78 = (undefined1 *)0x0;
    puStack_80 = (undefined1 *)0x0;
    memcpy(&local_170,__src,(ulong)uVar17);
    uVar12 = 5;
    if (uVar13 != 0x2e) {
      uVar12 = 1;
    }
    iVar8 = FUN_00c4e8b0(uVar12,&local_278,uVar13,0);
    if (iVar8 == 0) {
      iVar8 = FUN_00c4d1c0(local_278,&local_170);
      if (iVar8 == 0) {
        local_280 = (undefined1 *)CONCAT44(local_280._4_4_,uVar10);
        local_270 = (undefined1 *)0x0;
        puStack_268 = (undefined1 *)0x0;
        iVar8 = FUN_00c4d1e8(local_278,&local_270,0);
        if (iVar8 == 0) {
          uVar18 = (ulong)uVar10;
          thunk_FUN_0078cba8(&local_170,uVar18);
          iVar8 = FUN_00c4d260(local_278,&local_170,&local_280);
          puVar4 = PTR_DAT_00d60148;
          if (iVar8 == 0) {
            if (DAT_00d60140 != 0) {
              uVar15 = FUN_00c4c9cc(&local_170,uVar10);
              FUN_00c4c870(3,"%s: cipher key: %s\n",puVar4,uVar15);
            }
            if (iVar11 < 1) {
LAB_00c48604:
              iVar8 = FUN_00c4d1c0(*puVar19,&local_170);
              if (iVar8 == 0) {
                if ((long *)puVar19[1] == (long *)0x0) goto LAB_00c48820;
                local_280 = &DAT_aaaaaaaaaaaaaaaa;
                if (*(long *)puVar19[1] != *(long *)*puVar19) {
                  puStack_268 = &DAT_aaaaaaaaaaaaaaaa;
                  local_270 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_258 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_260 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_248 = &DAT_aaaaaaaaaaaaaaaa;
                  local_250 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_238 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_240 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_228 = &DAT_aaaaaaaaaaaaaaaa;
                  local_230 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_218 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_220 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_208 = &DAT_aaaaaaaaaaaaaaaa;
                  local_210 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_1f8 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_200 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_1e8 = &DAT_aaaaaaaaaaaaaaaa;
                  local_1f0 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_1d8 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_1e0 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_1c8 = &DAT_aaaaaaaaaaaaaaaa;
                  local_1d0 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_1b8 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_1c0 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_1a8 = &DAT_aaaaaaaaaaaaaaaa;
                  local_1b0 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_198 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_1a0 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
                  local_190 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_180 = &DAT_aaaaaaaaaaaaaaaa;
                  iVar9 = FUN_00c4d318();
                  uVar10 = FUN_00c48a9c(*(undefined8 *)puVar19[1],iVar9);
                  iVar8 = iVar9 - uVar10;
                  if ((iVar11 < (int)(iVar9 - uVar10)) &&
                     (iVar8 = iVar11, (*(uint *)(*(long *)*puVar19 + 0x50) & 0xfffffffe) != 6)) {
                    uVar15 = 2;
                  }
                  else {
                    puStack_268 = (undefined1 *)0x0;
                    local_270 = (undefined1 *)0x0;
                    puStack_258 = (undefined1 *)0x0;
                    puStack_260 = (undefined1 *)0x0;
                    puStack_248 = (undefined1 *)0x0;
                    local_250 = (undefined1 *)0x0;
                    puStack_238 = (undefined1 *)0x0;
                    puStack_240 = (undefined1 *)0x0;
                    puStack_228 = (undefined1 *)0x0;
                    local_230 = (undefined1 *)0x0;
                    puStack_218 = (undefined1 *)0x0;
                    puStack_220 = (undefined1 *)0x0;
                    puStack_208 = (undefined1 *)0x0;
                    local_210 = (undefined1 *)0x0;
                    puStack_1f8 = (undefined1 *)0x0;
                    puStack_200 = (undefined1 *)0x0;
                    puStack_1e8 = (undefined1 *)0x0;
                    local_1f0 = (undefined1 *)0x0;
                    puStack_1d8 = (undefined1 *)0x0;
                    puStack_1e0 = (undefined1 *)0x0;
                    puStack_1c8 = (undefined1 *)0x0;
                    local_1d0 = (undefined1 *)0x0;
                    puStack_1b8 = (undefined1 *)0x0;
                    puStack_1c0 = (undefined1 *)0x0;
                    puStack_1a8 = (undefined1 *)0x0;
                    local_1b0 = (undefined1 *)0x0;
                    puStack_198 = (undefined1 *)0x0;
                    puStack_1a0 = (undefined1 *)0x0;
                    puStack_188 = (undefined1 *)0x0;
                    local_190 = (undefined1 *)0x0;
                    puStack_178 = (undefined1 *)0x0;
                    puStack_180 = (undefined1 *)0x0;
                    memcpy(&local_270,__src,(long)(int)(iVar8 + uVar10));
                    iVar11 = FUN_00c48ae8(&local_280,&local_270,uVar13);
                    thunk_FUN_0078cba8(&local_270,0x100);
                    if (iVar11 == 0) goto LAB_00c48718;
LAB_00c48700:
                    uVar15 = 5;
                  }
LAB_00c48a84:
                  thunk_FUN_0078cba8(&local_170,0x100);
                  goto LAB_00c484cc;
                }
                ppuVar16 = &local_278;
                iVar8 = iVar11;
LAB_00c48718:
                iVar11 = FUN_00c48b80(ppuVar16,6,&local_170,uVar10);
                puVar4 = PTR_DAT_00d60148;
                if (iVar11 == 0) {
                  if (DAT_00d60140 != 0) {
                    uVar15 = FUN_00c4c9cc(&local_170,uVar10);
                    FUN_00c4c870(3,"%s: extensions cipher key: %s\n",puVar4,uVar15);
                  }
                  if (0 < iVar8) {
                    if (DAT_00d60140 != 0) {
                      FUN_00c4c870(3,"%s: found rtp_xtn_hdr_salt_len > 0, generating salt\n",
                                   PTR_DAT_00d60148);
                    }
                    if (0x100 < uVar10) goto LAB_00c48a98;
                    iVar11 = FUN_00c48b80(ppuVar16,7,(long)&local_170 + (ulong)uVar10,iVar8);
                    puVar4 = PTR_DAT_00d60148;
                    if (iVar11 != 0) goto LAB_00c484bc;
                    if (DAT_00d60140 != 0) {
                      uVar15 = FUN_00c4c9cc((long)&local_170 + (ulong)uVar10,iVar8);
                      FUN_00c4c870(3,"%s: extensions cipher salt: %s\n",puVar4,uVar15);
                    }
                  }
                  iVar11 = FUN_00c4d1c0(puVar19[1],&local_170);
                  if (iVar11 == 0) {
                    if (ppuVar16 != &local_278) {
                      iVar11 = FUN_00c4d1a0(*ppuVar16);
                      if (iVar11 != 0) goto LAB_00c484bc;
                      *ppuVar16 = (undefined1 *)0x0;
                    }
LAB_00c48820:
                    uVar12 = FUN_00c4e978(puVar19[2]);
                    iVar11 = FUN_00c48b80(&local_278,1,&local_170,uVar12);
                    puVar4 = PTR_DAT_00d60148;
                    if (iVar11 == 0) {
                      if (DAT_00d60140 != 0) {
                        uVar12 = FUN_00c4e978(puVar19[2]);
                        uVar15 = FUN_00c4c9cc(&local_170,uVar12);
                        FUN_00c4c870(3,"%s: auth key:   %s\n",puVar4,uVar15);
                      }
                      plVar14 = (long *)puVar19[2];
                      iVar11 = (**(code **)(*plVar14 + 0x10))
                                         (plVar14[1],&local_170,
                                          *(undefined4 *)((long)plVar14 + 0x14));
                      if (iVar11 == 0) {
                        uVar13 = FUN_00c48a9c(*(undefined8 *)puVar19[3],iVar7);
                        uVar18 = (ulong)uVar13;
                        iVar7 = iVar7 - uVar13;
                        if (DAT_00d60140 != 0) {
                          FUN_00c4c870(3,"%s: rtcp salt len: %d\n",PTR_DAT_00d60148,iVar7);
                        }
                        iVar11 = FUN_00c48b80(&local_278,3,&local_170,uVar18);
                        if (iVar11 == 0) {
                          if (0 < iVar7) {
                            if (DAT_00d60140 != 0) {
                              FUN_00c4c870(3,"%s: found rtcp_salt_len > 0, generating rtcp salt\n",
                                           PTR_DAT_00d60148);
                            }
                            if (0x100 < uVar13) goto LAB_00c48a98;
                            iVar11 = FUN_00c48b80(&local_278,5,
                                                  (undefined8 *)((long)&local_170 + uVar18),iVar7);
                            if (iVar11 != 0) goto LAB_00c484bc;
                            uVar15 = *(undefined8 *)((long)&local_170 + uVar18);
                            *(undefined4 *)((long)puVar19 + 0x3c) =
                                 *(undefined4 *)((long)&puStack_168 + uVar18);
                            *(undefined8 *)((long)puVar19 + 0x34) = uVar15;
                          }
                          puVar4 = PTR_DAT_00d60148;
                          if (DAT_00d60140 != 0) {
                            uVar15 = FUN_00c4c9cc(&local_170,uVar18);
                            FUN_00c4c870(3,"%s: rtcp cipher key: %s\n",puVar4,uVar15);
                            puVar4 = PTR_DAT_00d60148;
                            if ((0 < iVar7) && (DAT_00d60140 != 0)) {
                              if (0x100 < uVar13) {
LAB_00c48a98:
                    /* WARNING: Does not return */
                                pcVar5 = (code *)SoftwareBreakpoint(0x5512,0xc48a9c);
                                (*pcVar5)();
                              }
                              uVar15 = FUN_00c4c9cc((long)&local_170 + (ulong)uVar13,iVar7);
                              FUN_00c4c870(3,"%s: rtcp cipher salt: %s\n",puVar4,uVar15);
                            }
                          }
                          iVar7 = FUN_00c4d1c0(puVar19[3],&local_170);
                          if (iVar7 == 0) {
                            uVar12 = FUN_00c4e978(puVar19[4]);
                            iVar7 = FUN_00c48b80(&local_278,4,&local_170,uVar12);
                            puVar4 = PTR_DAT_00d60148;
                            if (iVar7 == 0) {
                              if (DAT_00d60140 != 0) {
                                uVar12 = FUN_00c4e978(puVar19[4]);
                                uVar15 = FUN_00c4c9cc(&local_170,uVar12);
                                FUN_00c4c870(3,"%s: rtcp auth key:   %s\n",puVar4,uVar15);
                              }
                              plVar14 = (long *)puVar19[4];
                              iVar7 = (**(code **)(*plVar14 + 0x10))
                                                (plVar14[1],&local_170,
                                                 *(undefined4 *)((long)plVar14 + 0x14));
                              if (iVar7 == 0) {
                                iVar7 = FUN_00c4d1a0(local_278);
                                if (iVar7 != 0) goto LAB_00c48700;
                                uVar15 = 0;
                                local_278 = (undefined1 *)0x0;
                                goto LAB_00c48a84;
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
              if (DAT_00d60140 != 0) {
                FUN_00c4c870(3,"%s: found rtp_salt_len > 0, generating salt\n",PTR_DAT_00d60148);
              }
              if (0x100 < uVar10) goto LAB_00c48a98;
              local_280 = (undefined1 *)CONCAT44(local_280._4_4_,iVar11);
              puStack_268 = (undefined1 *)0x0;
              local_270 = (undefined1 *)0x200000000000000;
              iVar8 = FUN_00c4d1e8(local_278,&local_270,0);
              if (iVar8 == 0) {
                puVar1 = (undefined8 *)((long)&local_170 + uVar18);
                thunk_FUN_0078cba8(puVar1,iVar11);
                iVar8 = FUN_00c4d260(local_278,puVar1,&local_280);
                if (iVar8 == 0) {
                  uVar15 = *puVar1;
                  *(undefined4 *)(puVar19 + 6) = *(undefined4 *)((long)&puStack_168 + uVar18);
                  puVar19[5] = uVar15;
                  puVar4 = PTR_DAT_00d60148;
                  if (DAT_00d60140 != 0) {
                    uVar15 = FUN_00c4c9cc(puVar1,iVar11);
                    FUN_00c4c870(3,"%s: cipher salt: %s\n",puVar4,uVar15);
                  }
                  goto LAB_00c48604;
                }
              }
            }
          }
        }
      }
      else {
        FUN_00c4d1a0(local_278);
      }
    }
LAB_00c484bc:
    thunk_FUN_0078cba8(&local_170,0x100);
  }
  else {
    __dest = (void *)FUN_00c4c76c();
    puVar19[8] = __dest;
    if (__dest != (void *)0x0) {
      memcpy(__dest,(void *)param_2[1],(ulong)*(uint *)(param_2 + 2));
      goto LAB_00c4823c;
    }
  }
  uVar15 = 5;
LAB_00c484cc:
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00c48a9c  FUN_00c48a9c =====

int FUN_00c48a9c(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 < 4) {
    iVar2 = iVar1;
    if ((iVar1 != 0) && (iVar2 = param_2, iVar1 == 1)) goto LAB_00c48ad8;
  }
  else {
    if (iVar1 - 4U < 2) {
LAB_00c48ad8:
      return param_2 + -0xe;
    }
    if ((iVar1 == 6) || (iVar2 = param_2, iVar1 == 7)) {
      return param_2 + -0xc;
    }
  }
  return iVar2;
}


// ===== 00c48ae8  FUN_00c48ae8 =====

int FUN_00c48ae8(undefined8 *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_3 == 0x1e) {
    uVar2 = 1;
  }
  else if (param_3 == 0x2e) {
    uVar2 = 5;
  }
  else {
    if (param_3 != 0x26) {
      return 2;
    }
    uVar2 = 4;
  }
  iVar1 = FUN_00c4e8b0(uVar2,param_1,param_3,0);
  if (iVar1 == 0) {
    iVar1 = FUN_00c4d1c0(*param_1,param_2);
    if (iVar1 != 0) {
      FUN_00c4d1a0(*param_1);
    }
  }
  return iVar1;
}


// ===== 00c48b80  FUN_00c48b80 =====

void FUN_00c48b80(undefined8 *param_1,byte param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  long local_40 [2];
  undefined4 local_14;
  
  local_40[1] = 0;
  local_40[0] = (ulong)param_2 << 0x38;
  local_14 = param_4;
  iVar1 = FUN_00c4d1e8(*param_1,local_40,0);
  if (iVar1 == 0) {
    thunk_FUN_0078cba8(param_3,param_4);
    FUN_00c4d260(*param_1,param_3,&local_14);
  }
  return;
}


// ===== 00c48bf8  FUN_00c48bf8 =====

void FUN_00c48bf8(long param_1)

{
  char *pcVar1;
  
  FUN_00c4c870(1,"srtp: in stream 0x%x: ",*(undefined4 *)(param_1 + 8));
  if (*(uint *)(param_1 + 0xc) < 4) {
    pcVar1 = &DAT_002592d8 + *(int *)(&DAT_002592d8 + (ulong)*(uint *)(param_1 + 0xc) * 4);
  }
  else {
    pcVar1 = "\tunknown event reported to handler\n";
  }
  FUN_00c4c870(1,pcVar1);
  return;
}


// ===== 00c48c5c  FUN_00c48c5c =====

undefined8 FUN_00c48c5c(undefined *param_1)

{
  PTR_FUN_00d60150 = param_1;
  return 0;
}


// ===== 00c48c74  FUN_00c48c74 =====

void FUN_00c48c74(void)

{
  FUN_00c48c84();
  return;
}


// ===== 00c48c84  FUN_00c48c84 =====

ulong FUN_00c48c84(uint *param_1,ushort *param_2,uint *param_3,uint param_4,uint param_5)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint **ppuVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  long *plVar12;
  uint *puVar13;
  ushort *puVar14;
  ulong uVar15;
  ushort *puVar16;
  ulong uVar17;
  long local_b8;
  ushort *local_b0;
  int local_a8;
  undefined4 local_a4;
  undefined1 *local_a0;
  int local_94;
  uint *local_90;
  uint local_88;
  undefined4 uStack_84;
  uint *local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  int local_64;
  
  local_94 = 0;
  local_a4 = 0xaaaaaaaa;
  if (DAT_00d60140 != 0) {
    FUN_00c4c870(3,"%s: function srtp_protect\n",PTR_DAT_00d60148);
  }
  uVar5 = *param_3;
  if (uVar5 < 0xc) {
    return 2;
  }
  uVar17 = (ulong)*param_2 & 0xf;
  iVar6 = (int)uVar17 * 4;
  if (uVar5 < iVar6 + 0xcU) {
    return 2;
  }
  if ((*param_2 >> 4 & 1) == 0) {
    if ((int)uVar5 < 0xc) {
      return 2;
    }
  }
  else {
    uVar1 = iVar6 + 0x10;
    if (uVar5 < uVar1) {
      return 2;
    }
    if ((int)uVar5 < 0xc) {
      return 2;
    }
    if (uVar5 < uVar1 + ((uint)(param_2[uVar17 * 2 + 7] >> 8) |
                        (param_2[uVar17 * 2 + 7] & 0xff00ff) << 8) * 4) {
      return 2;
    }
  }
  puVar13 = *(uint **)param_1;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_a8 = -0x55555556;
  do {
    puVar13 = *(uint **)(puVar13 + 0x1c);
    if (puVar13 == (uint *)0x0) {
      if (*(long *)(param_1 + 2) == 0) {
        return 0xd;
      }
      local_80 = (uint *)&DAT_aaaaaaaaaaaaaaaa;
      uVar5 = FUN_00c4957c(*(long *)(param_1 + 2),*(uint *)(param_2 + 4),&local_80);
      if (uVar5 != 0) goto LAB_00c48e00;
      lVar10 = *(long *)param_1;
      lVar9 = *(long *)(lVar10 + 0x70);
      *(long *)(local_80 + 0x1c) = lVar9;
      if (lVar9 != 0) {
        *(uint **)(lVar9 + 0x78) = local_80;
      }
      *(uint **)(lVar10 + 0x70) = local_80;
      *(long *)(local_80 + 0x1e) = lVar10;
      puVar13 = local_80;
      goto LAB_00c48e30;
    }
  } while (*puVar13 != *(uint *)(param_2 + 4));
  if (puVar13[0x15] != 1) {
    if (puVar13[0x15] == 0) {
LAB_00c48e30:
      puVar13[0x15] = 1;
    }
    else if (PTR_FUN_00d60150 != (undefined *)0x0) {
      uVar5 = (*puVar13 & 0xff00ff00) >> 8 | (*puVar13 & 0xff00ff) << 8;
      uStack_78 = (undefined1 *)(ulong)(uVar5 >> 0x10 | uVar5 << 0x10);
      local_80 = param_1;
      (*(code *)PTR_FUN_00d60150)(&local_80);
    }
  }
  if (param_4 == 0) {
    plVar12 = *(long **)(puVar13 + 2);
  }
  else {
    if (puVar13[4] <= param_5) {
      return 0x19;
    }
    plVar12 = (long *)(*(long *)(puVar13 + 2) + (ulong)param_5 * 0x58);
  }
  if (plVar12 == (long *)0x0) {
    return 0x19;
  }
  iVar6 = (int)param_2;
  if ((*(uint *)(*plVar12 + 0x14) & 0xfffffffe) != 6) {
    iVar3 = FUN_00c4c720(plVar12[10]);
    if (iVar3 == 2) {
      if (PTR_FUN_00d60150 == (undefined *)0x0) {
        return 0xf;
      }
      ppuVar7 = &local_80;
      uVar5 = (*puVar13 & 0xff00ff00) >> 8 | (*puVar13 & 0xff00ff) << 8;
      uStack_78 = (undefined1 *)CONCAT44(2,uVar5 >> 0x10 | uVar5 << 0x10);
      local_80 = param_1;
LAB_00c48f7c:
      (*(code *)PTR_FUN_00d60150)(ppuVar7);
      return 0xf;
    }
    if ((iVar3 == 1) && (PTR_FUN_00d60150 != (undefined *)0x0)) {
      uVar5 = (*puVar13 & 0xff00ff00) >> 8 | (*puVar13 & 0xff00ff) << 8;
      uStack_78 = (undefined1 *)CONCAT44(1,uVar5 >> 0x10 | uVar5 << 0x10);
      local_80 = param_1;
      (*(code *)PTR_FUN_00d60150)(&local_80);
    }
    iVar3 = FUN_00c4e984(plVar12[2]);
    uVar5 = puVar13[0xc];
    if ((uVar5 & 1) == 0) {
      lVar10 = (long)(int)*param_3;
      puVar14 = (ushort *)0x0;
      puVar16 = (ushort *)0x0;
    }
    else {
      uVar17 = (ulong)*param_2 & 0xf;
      puVar16 = param_2 + uVar17 * 2 + 6;
      if ((*param_2 >> 4 & 1) == 0) {
        puVar14 = puVar16;
        puVar16 = (ushort *)0x0;
      }
      else {
        puVar14 = puVar16 + (ulong)((uint)(param_2[uVar17 * 2 + 7] >> 8) |
                                   (param_2[uVar17 * 2 + 7] & 0xff00ff) << 8) * 2 + 2;
      }
      lVar10 = (long)(int)*param_3;
      if ((ushort *)((long)param_2 + lVar10) < puVar14) {
        return 0x15;
      }
      local_94 = *param_3 + (iVar6 - (int)puVar14);
      if (local_94 < 0) {
        return 0x15;
      }
    }
    if (param_4 == 0) {
      uVar17 = 0;
    }
    else {
      uVar17 = (ulong)*(uint *)(plVar12 + 9);
      if (*(uint *)(plVar12 + 9) != 0) {
        memcpy((void *)((long)param_2 + lVar10),(void *)plVar12[8],uVar17);
        uVar5 = puVar13[0xc];
      }
    }
    if ((uVar5 >> 1 & 1) == 0) {
      local_b8 = 0;
      local_b0 = (ushort *)0x0;
    }
    else {
      local_b8 = (long)param_2 + uVar17 + (long)(int)*param_3;
      local_b0 = param_2;
    }
    uVar5 = FUN_00c49794(param_2,puVar13,&local_a0,&local_a4);
    if (uVar5 == 0) {
      uVar5 = FUN_00c4fd98(puVar13 + 6,local_a4);
      uVar4 = local_a4;
      if (uVar5 != 0) {
        if (uVar5 != 9) {
          return (ulong)uVar5;
        }
        if (puVar13[0x16] == 0) {
          return 9;
        }
      }
    }
    else {
      if (uVar5 != 0x1b) {
        return (ulong)uVar5;
      }
      FUN_00c4fee8(puVar13 + 6,(ulong)local_a0 >> 0x10);
      puVar13[0x1b] = 0;
      uVar4 = 0;
    }
    FUN_00c4fde4(puVar13 + 6,uVar4);
    if (DAT_00d60140 != 0) {
      FUN_00c4c870(3,"%s: estimated packet index: %016lx\n",PTR_DAT_00d60148,local_a0);
    }
    uVar5 = *(uint *)(*(long *)*plVar12 + 0x50);
    if ((uVar5 < 6) && ((0x32U >> (ulong)(uVar5 & 0x1f) & 1) != 0)) {
      uVar15 = ((ulong)local_a0 & 0xff00ff00ff00ff00) >> 8 |
               ((ulong)local_a0 & 0xff00ff00ff00ff) << 8;
      uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
      local_80 = (uint *)((ulong)*(uint *)(param_2 + 4) << 0x20);
      uStack_78 = (undefined1 *)((uVar15 >> 0x20 | uVar15 << 0x20) >> 0x10);
    }
    else {
      local_80 = (uint *)0x0;
      uVar15 = ((ulong)local_a0 & 0xff00ff00ff00ff00) >> 8 |
               ((ulong)local_a0 & 0xff00ff00ff00ff) << 8;
      uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
      uStack_78 = (undefined1 *)(uVar15 >> 0x20 | uVar15 << 0x20);
    }
    lVar10 = FUN_00c4d1e8((long *)*plVar12,&local_80,0);
    if (((int)lVar10 == 0) && (lVar10 = plVar12[1], lVar10 != 0)) {
      lVar10 = FUN_00c4d1e8(lVar10,&local_80,0);
    }
    if ((int)lVar10 != 0) {
      return 8;
    }
    uVar15 = ((ulong)local_a0 & 0xff00ff00ff00ff00) >> 8 | ((ulong)local_a0 & 0xff00ff00ff00ff) << 8
    ;
    uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
    local_a0 = (undefined1 *)((uVar15 >> 0x20 | uVar15 << 0x20) >> 0x10);
    if ((local_b0 != (ushort *)0x0) && (local_a8 = FUN_00c4e990(plVar12[2]), local_a8 != 0)) {
      iVar6 = FUN_00c4d210(*plVar12,local_b8,&local_a8);
      puVar2 = PTR_DAT_00d60148;
      if (iVar6 != 0) {
        return 8;
      }
      if (DAT_00d60140 != 0) {
        uVar8 = FUN_00c4c9cc(local_b8,local_a8);
        FUN_00c4c870(3,"%s: keystream prefix: %s\n",puVar2,uVar8);
      }
    }
    if (((puVar16 == (ushort *)0x0) || (plVar12[1] == 0)) ||
       (uVar5 = FUN_00c49874(puVar13,puVar16,plVar12), uVar5 == 0)) {
      if ((puVar14 != (ushort *)0x0) &&
         (iVar6 = FUN_00c4d260(*plVar12,puVar14,&local_94), iVar6 != 0)) {
        return 8;
      }
      if (local_b0 != (ushort *)0x0) {
        uVar5 = (**(code **)(*(long *)plVar12[2] + 0x28))(((long *)plVar12[2])[1]);
        if ((uVar5 != 0) ||
           (uVar5 = (**(code **)(*(long *)plVar12[2] + 0x20))
                              (((long *)plVar12[2])[1],local_b0,*param_3), uVar5 != 0))
        goto LAB_00c48e00;
        if (DAT_00d60140 != 0) {
          FUN_00c4c870(3,"%s: estimated packet index: %016lx\n",PTR_DAT_00d60148,local_a0);
        }
        plVar12 = (long *)plVar12[2];
        iVar6 = (**(code **)(*plVar12 + 0x18))(plVar12[1],&local_a0,4,(int)plVar12[2],local_b8);
        puVar2 = PTR_DAT_00d60148;
        if (DAT_00d60140 != 0) {
          uVar8 = FUN_00c4c9cc(local_b8,iVar3);
          FUN_00c4c870(3,"%s: srtp auth tag:    %s\n",puVar2,uVar8);
        }
        if (iVar6 != 0) {
          return 7;
        }
      }
      if (local_b8 != 0) {
        *param_3 = *param_3 + iVar3;
      }
      if (param_4 != 0) {
        *param_3 = *param_3 + (int)uVar17;
        return 0;
      }
      return 0;
    }
    goto LAB_00c48e00;
  }
  local_64 = 0;
  uStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = (uint *)&DAT_aaaaaaaaaaaaaaaa;
  if (DAT_00d60140 != 0) {
    FUN_00c4c870(3,"%s: function srtp_protect_aead\n",PTR_DAT_00d60148);
  }
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  iVar3 = FUN_00c4c720(plVar12[10]);
  if (iVar3 != 0) {
    if (iVar3 == 2) {
      if (PTR_FUN_00d60150 == (undefined *)0x0) {
        return 0xf;
      }
      ppuVar7 = &local_90;
      uVar5 = (*puVar13 & 0xff00ff00) >> 8 | (*puVar13 & 0xff00ff) << 8;
      local_88 = uVar5 >> 0x10 | uVar5 << 0x10;
      uStack_84 = 2;
      local_90 = param_1;
      goto LAB_00c48f7c;
    }
    if (PTR_FUN_00d60150 != (undefined *)0x0) {
      uVar5 = (*puVar13 & 0xff00ff00) >> 8 | (*puVar13 & 0xff00ff) << 8;
      local_88 = uVar5 >> 0x10 | uVar5 << 0x10;
      uStack_84 = 1;
      local_90 = param_1;
      (*(code *)PTR_FUN_00d60150)(&local_90);
    }
  }
  uVar4 = FUN_00c4e984(plVar12[2]);
  local_90 = (uint *)CONCAT44(local_90._4_4_,uVar4);
  uVar17 = (ulong)*param_2 & 0xf;
  puVar16 = param_2 + uVar17 * 2 + 6;
  if ((*param_2 >> 4 & 1) == 0) {
    puVar14 = puVar16;
    puVar16 = (ushort *)0x0;
  }
  else {
    puVar14 = puVar16 + (ulong)((uint)(param_2[uVar17 * 2 + 7] >> 8) |
                               (param_2[uVar17 * 2 + 7] & 0xff00ff) << 8) * 2 + 2;
  }
  if ((ushort *)((long)param_2 + (ulong)*param_3) < puVar14) {
    return 0x15;
  }
  local_64 = *param_3 - ((int)puVar14 - iVar6);
  if (local_64 < 0) {
    return 0x15;
  }
  if (puVar13[0x1b] == 0) {
    uVar17 = FUN_00c4fe5c(puVar13 + 6,&local_70);
    uVar17 = uVar17 & 0xffffffff;
    uVar5 = 0;
LAB_00c491f4:
    uVar15 = (ulong)uVar5;
  }
  else {
    local_70 = (undefined1 *)
               ((ulong)((uint)(param_2[1] >> 8) | (param_2[1] & 0xff00ff) << 8) |
               (ulong)puVar13[0x1b] << 0x10);
    puVar11 = *(undefined1 **)(puVar13 + 6);
    uVar17 = (long)local_70 - (long)puVar11;
    if (local_70 < puVar11 || uVar17 == 0) {
      uVar15 = 0;
      if ((local_70 < puVar11) && (0x8000 < (ulong)((long)puVar11 - (long)local_70))) {
        uVar5 = 0x1a;
        uVar17 = uVar15;
        goto LAB_00c491f4;
      }
    }
    else {
      uVar15 = 0;
      if (0x8000 < uVar17) {
        uVar5 = 0x1b;
        uVar17 = uVar15;
        goto LAB_00c491f4;
      }
    }
  }
  if (DAT_00d60140 != 0) {
    FUN_00c4c870(3,"%s: estimated u_packet index: %016lx\n",PTR_DAT_00d60148,local_70);
  }
  if ((int)uVar15 == 0) {
    uVar5 = FUN_00c4fd98(puVar13 + 6,uVar17 & 0xffffffff);
    if (uVar5 != 0) {
      if (uVar5 != 9) {
        return (ulong)uVar5;
      }
      if (puVar13[0x16] == 0) {
        return 9;
      }
    }
  }
  else {
    if ((int)uVar15 != 0x1b) {
      return uVar15;
    }
    FUN_00c4fee8(puVar13 + 6,(ulong)local_70 >> 0x10);
    uVar17 = 0;
    puVar13[0x1b] = 0;
  }
  FUN_00c4fde4(puVar13 + 6,uVar17 & 0xffffffff);
  if (DAT_00d60140 != 0) {
    FUN_00c4c870(3,"%s: estimated packet index: %016lx\n",PTR_DAT_00d60148,local_70);
  }
  FUN_00c4c490(plVar12,&local_80,&local_70,param_2);
  uVar17 = ((ulong)local_70 & 0xff00ff00ff00ff00) >> 8 | ((ulong)local_70 & 0xff00ff00ff00ff) << 8;
  uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
  local_70 = (undefined1 *)((uVar17 >> 0x20 | uVar17 << 0x20) >> 0x10);
  iVar3 = FUN_00c4d1e8(*plVar12,&local_80,0);
  if (iVar3 == 0) {
    if (plVar12[1] != 0) {
      local_80 = (uint *)((ulong)*(uint *)(param_2 + 4) << 0x20);
      uStack_78 = local_70;
      iVar3 = FUN_00c4d1e8(plVar12[1],&local_80,0);
      if (iVar3 != 0) {
        return 8;
      }
    }
    if (((puVar16 != (ushort *)0x0) && (plVar12[1] != 0)) &&
       (uVar5 = FUN_00c49874(puVar13,puVar16,plVar12), uVar5 != 0)) {
LAB_00c48e00:
      return (ulong)uVar5;
    }
    iVar6 = FUN_00c4d2e4(*plVar12,param_2,(int)puVar14 - iVar6);
    if (((iVar6 == 0) && (iVar6 = FUN_00c4d260(*plVar12,puVar14,&local_64), iVar6 == 0)) &&
       (iVar6 = FUN_00c4d2b0(*plVar12,(long)puVar14 + (long)local_64,&local_90), iVar6 == 0)) {
      uVar5 = *param_3;
      iVar6 = (int)local_90;
      if (param_4 != 0) {
        param_4 = *(uint *)(plVar12 + 9);
        if (param_4 != 0) {
          memcpy((void *)((long)param_2 + ((ulong)local_90 & 0xffffffff) + (ulong)uVar5),
                 (void *)plVar12[8],(ulong)param_4);
          uVar5 = *param_3;
        }
      }
      *param_3 = uVar5 + iVar6 + param_4;
      return 0;
    }
  }
  return 8;
}


// ===== 00c4957c  FUN_00c4957c =====

int FUN_00c4957c(long param_1,uint param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  long lVar7;
  void *__dest;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  if (DAT_00d60140 != 0) {
    uVar4 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
    FUN_00c4c870(3,"%s: cloning stream (SSRC: 0x%08x)\n",PTR_DAT_00d60148,
                 uVar4 >> 0x10 | uVar4 << 0x10);
  }
  puVar6 = (uint *)FUN_00c4c76c(0x80);
  if (puVar6 == (uint *)0x0) {
    iVar5 = 3;
  }
  else {
    *param_3 = (long)puVar6;
    uVar4 = *(uint *)(param_1 + 0x10);
    puVar6[4] = uVar4;
    lVar7 = FUN_00c4c76c((ulong)uVar4 * 0x58);
    *(long *)(puVar6 + 2) = lVar7;
    if (lVar7 == 0) {
      FUN_00c4a99c(*param_3,param_1);
      *param_3 = 0;
      iVar5 = 3;
    }
    else {
      if (*(int *)(param_1 + 0x10) != 0) {
        uVar10 = 0;
        lVar7 = 0x50;
        do {
          lVar11 = *(long *)(param_1 + 8);
          lVar9 = *(long *)(puVar6 + 2);
          lVar1 = lVar11 + lVar7;
          lVar2 = lVar9 + lVar7;
          *(undefined8 *)(lVar2 + -0x50) = *(undefined8 *)(lVar1 + -0x50);
          *(undefined8 *)(lVar2 + -0x40) = *(undefined8 *)(lVar1 + -0x40);
          *(undefined8 *)(lVar2 + -0x48) = *(undefined8 *)(lVar1 + -0x48);
          *(undefined8 *)(lVar2 + -0x38) = *(undefined8 *)(lVar1 + -0x38);
          *(undefined8 *)(lVar2 + -0x30) = *(undefined8 *)(lVar1 + -0x30);
          iVar5 = *(int *)(lVar1 + -8);
          *(int *)(lVar2 + -8) = iVar5;
          if (iVar5 == 0) {
            *(undefined8 *)(lVar2 + -0x10) = 0;
          }
          else {
            __dest = (void *)FUN_00c4c76c();
            *(void **)(lVar2 + -0x10) = __dest;
            if (__dest == (void *)0x0) {
              FUN_00c4a99c(*param_3,param_1);
              *param_3 = 0;
              return 5;
            }
            memcpy(__dest,*(void **)(lVar11 + lVar7 + -0x10),(ulong)*(uint *)(lVar2 + -8));
          }
          puVar3 = (undefined8 *)(lVar11 + lVar7);
          lVar9 = lVar9 + lVar7;
          uVar8 = puVar3[-5];
          *(undefined4 *)(lVar9 + -0x20) = *(undefined4 *)(puVar3 + -4);
          *(undefined8 *)(lVar9 + -0x28) = uVar8;
          uVar8 = *(undefined8 *)((long)puVar3 + -0x1c);
          *(undefined4 *)(lVar9 + -0x14) = *(undefined4 *)((long)puVar3 + -0x14);
          *(undefined8 *)(lVar9 + -0x1c) = uVar8;
          iVar5 = FUN_00c4c700(*puVar3);
          if (iVar5 != 0) goto LAB_00c49748;
          uVar10 = uVar10 + 1;
          lVar7 = lVar7 + 0x58;
        } while (uVar10 < *(uint *)(param_1 + 0x10));
      }
      uVar8 = FUN_00c4fd8c(param_1 + 0x18);
      iVar5 = FUN_00c4fd1c(puVar6 + 6,uVar8);
      if (iVar5 == 0) {
        FUN_00c4ff30(puVar6 + 0xe);
        uVar4 = *(uint *)(param_1 + 0x58);
        *puVar6 = param_2;
        puVar6[0x1b] = 0;
        puVar6[0x16] = uVar4;
        puVar6[0x15] = *(uint *)(param_1 + 0x54);
        puVar6[0xc] = *(uint *)(param_1 + 0x30);
        puVar6[0x14] = *(uint *)(param_1 + 0x50);
        *(undefined8 *)(puVar6 + 0x18) = *(undefined8 *)(param_1 + 0x60);
        uVar4 = *(uint *)(param_1 + 0x68);
        puVar6[0x1c] = 0;
        puVar6[0x1d] = 0;
        puVar6[0x1e] = 0;
        puVar6[0x1f] = 0;
        puVar6[0x1a] = uVar4;
      }
      else {
LAB_00c49748:
        FUN_00c4a99c(*param_3,param_1);
        *param_3 = 0;
      }
    }
  }
  return iVar5;
}


// ===== 00c49794  FUN_00c49794 =====

int FUN_00c49794(long param_1,long param_2,ulong *param_3,int *param_4)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  
  if (*(uint *)(param_2 + 0x6c) == 0) {
    iVar1 = FUN_00c4fe5c(param_2 + 0x18,param_3);
    iVar4 = 0;
  }
  else {
    uVar2 = (ulong)((uint)(*(ushort *)(param_1 + 2) >> 8) |
                   (*(ushort *)(param_1 + 2) & 0xff00ff) << 8) |
            (ulong)*(uint *)(param_2 + 0x6c) << 0x10;
    *param_3 = uVar2;
    *param_4 = (int)uVar2 - *(int *)(param_2 + 0x18);
    uVar2 = *param_3;
    uVar3 = *(ulong *)(param_2 + 0x18);
    if (uVar3 < uVar2) {
      iVar4 = 0;
      if (uVar2 - uVar3 < 0x8001) goto LAB_00c49834;
      iVar1 = iVar4;
      iVar4 = 0x1b;
    }
    else {
      iVar4 = 0;
      if ((uVar3 <= uVar2) || (uVar3 - uVar2 < 0x8001)) goto LAB_00c49834;
      iVar1 = iVar4;
      iVar4 = 0x1a;
    }
  }
  *param_4 = iVar1;
LAB_00c49834:
  if (DAT_00d60140 != 0) {
    FUN_00c4c870(3,"%s: estimated u_packet index: %016lx\n",PTR_DAT_00d60148,*param_3);
  }
  return iVar4;
}


// ===== 00c49874  FUN_00c49874 =====

void FUN_00c49874(long param_1,ushort *param_2,long param_3)

{
  ushort *puVar1;
  byte bVar2;
  long lVar3;
  ushort uVar4;
  int iVar5;
  undefined8 uVar6;
  ushort *puVar7;
  uint *puVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  ushort *puVar12;
  ulong uVar13;
  ushort *puVar14;
  ulong uVar15;
  uint uVar16;
  ushort *puVar17;
  ushort *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  int local_184;
  byte local_180 [17];
  undefined1 auStack_16f [7];
  undefined2 uStack_168;
  undefined6 uStack_166;
  undefined2 local_160;
  undefined6 uStack_15e;
  undefined2 uStack_158;
  undefined6 uStack_156;
  undefined2 uStack_150;
  undefined6 uStack_14e;
  undefined2 uStack_148;
  undefined6 uStack_146;
  undefined2 local_140;
  undefined6 uStack_13e;
  undefined2 uStack_138;
  undefined6 uStack_136;
  undefined2 uStack_130;
  undefined6 uStack_12e;
  undefined2 uStack_128;
  undefined6 uStack_126;
  undefined2 local_120;
  undefined6 uStack_11e;
  undefined2 uStack_118;
  undefined6 uStack_116;
  undefined2 uStack_110;
  undefined6 uStack_10e;
  undefined2 uStack_108;
  undefined6 uStack_106;
  undefined2 local_100;
  undefined6 uStack_fe;
  undefined2 uStack_f8;
  undefined6 uStack_f6;
  undefined2 uStack_f0;
  undefined6 uStack_ee;
  undefined2 uStack_e8;
  undefined6 uStack_e6;
  undefined2 local_e0;
  undefined6 uStack_de;
  undefined2 uStack_d8;
  undefined6 uStack_d6;
  undefined2 uStack_d0;
  undefined6 uStack_ce;
  undefined2 uStack_c8;
  undefined6 uStack_c6;
  undefined2 local_c0;
  undefined6 uStack_be;
  undefined2 uStack_b8;
  undefined6 uStack_b6;
  undefined2 uStack_b0;
  undefined6 uStack_ae;
  undefined2 uStack_a8;
  undefined6 uStack_a6;
  undefined2 local_a0;
  undefined6 uStack_9e;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 local_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  puVar14 = param_2 + 2;
  local_78 = *(long *)(lVar3 + 0x28);
  local_80 = 0xaa;
  uStack_f8 = 0xaaaa;
  uStack_f6 = 0xaaaaaaaaaaaa;
  local_100 = 0xaaaa;
  uStack_fe = 0xaaaaaaaaaaaa;
  uStack_e8 = 0xaaaa;
  uStack_e6 = 0xaaaaaaaaaaaa;
  uStack_f0 = 0xaaaa;
  uStack_ee = 0xaaaaaaaaaaaa;
  uStack_d8 = 0xaaaa;
  uStack_d6 = 0xaaaaaaaaaaaa;
  local_e0 = 0xaaaa;
  uStack_de = 0xaaaaaaaaaaaa;
  uStack_c8 = 0xaaaa;
  uStack_c6 = 0xaaaaaaaaaaaa;
  uStack_d0 = 0xaaaa;
  uStack_ce = 0xaaaaaaaaaaaa;
  uVar11 = (ulong)((uint)(param_2[1] >> 8) | (param_2[1] & 0xff00ff) << 8);
  uStack_b8 = 0xaaaa;
  uStack_b6 = 0xaaaaaaaaaaaa;
  local_c0 = 0xaaaa;
  uStack_be = 0xaaaaaaaaaaaa;
  uStack_a8 = 0xaaaa;
  uStack_a6 = 0xaaaaaaaaaaaa;
  uStack_b0 = 0xaaaa;
  uStack_ae = 0xaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = 0xaaaa;
  uStack_9e = 0xaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_180[8] = 0xaa;
  local_180[9] = 0xaa;
  local_180[10] = 0xaa;
  local_180[0xb] = 0xaa;
  local_180[0xc] = 0xaa;
  local_180[0xd] = 0xaa;
  local_180[0xe] = 0xaa;
  local_180[0xf] = 0xaa;
  local_180[0] = 0xaa;
  local_180[1] = 0xaa;
  local_180[2] = 0xaa;
  local_180[3] = 0xaa;
  local_180[4] = 0xaa;
  local_180[5] = 0xaa;
  local_180[6] = 0xaa;
  local_180[7] = 0xaa;
  uStack_168 = 0xaaaa;
  uStack_166 = 0xaaaaaaaaaaaa;
  local_180[0x10] = 0xaa;
  auStack_16f[0] = 0xaa;
  auStack_16f._1_6_ = 0xaaaaaaaaaaaa;
  uStack_158 = 0xaaaa;
  uStack_156 = 0xaaaaaaaaaaaa;
  local_160 = 0xaaaa;
  uStack_15e = 0xaaaaaaaaaaaa;
  uStack_148 = 0xaaaa;
  uStack_146 = 0xaaaaaaaaaaaa;
  uStack_150 = 0xaaaa;
  uStack_14e = 0xaaaaaaaaaaaa;
  puVar1 = puVar14 + uVar11 * 2;
  uStack_138 = 0xaaaa;
  uStack_136 = 0xaaaaaaaaaaaa;
  local_140 = 0xaaaa;
  uStack_13e = 0xaaaaaaaaaaaa;
  uStack_128 = 0xaaaa;
  uStack_126 = 0xaaaaaaaaaaaa;
  uStack_130 = 0xaaaa;
  uStack_12e = 0xaaaaaaaaaaaa;
  uStack_118 = 0xaaaa;
  uStack_116 = 0xaaaaaaaaaaaa;
  local_120 = 0xaaaa;
  uStack_11e = 0xaaaaaaaaaaaa;
  uStack_108 = 0xaaaa;
  uStack_106 = 0xaaaaaaaaaaaa;
  uStack_110 = 0xaaaa;
  uStack_10e = 0xaaaaaaaaaaaa;
  if (*param_2 == 0xdebe) {
    if (puVar14 < puVar1) {
      puVar12 = (ushort *)((ulong)local_180 | 1);
      do {
        puVar17 = (ushort *)((long)puVar14 + 1);
        uVar15 = (ulong)(byte)*puVar14 & 0xf;
        uVar13 = uVar15 + 1;
        puVar18 = (ushort *)((long)puVar17 + uVar13);
        local_184 = (int)uVar13 + 1;
        if (puVar1 < puVar18) goto LAB_00c49da0;
        uVar16 = (uint)(byte)((byte)*puVar14 >> 4);
        if (uVar16 == 0xf) break;
        iVar5 = FUN_00c4d210(*(undefined8 *)(param_3 + 8),local_180,&local_184);
        if (iVar5 != 0) goto LAB_00c49da8;
        if ((*(uint **)(param_1 + 0x60) != (uint *)0x0) && (0 < *(int *)(param_1 + 0x68))) {
          iVar5 = *(int *)(param_1 + 0x68) + 1;
          puVar8 = *(uint **)(param_1 + 0x60);
          do {
            if (*puVar8 == uVar16) {
              puVar7 = puVar12;
              if (((int)uVar15 == 0xf) && ((auStack_16f <= puVar17 || (puVar18 <= puVar12)))) {
                uVar19 = *(undefined8 *)((long)puVar14 + 9);
                uVar6 = *(undefined8 *)puVar17;
                puVar18 = (ushort *)((long)puVar17 + uVar13);
                *(ulong *)((long)puVar14 + 9) =
                     CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ local_180[0x10],
                              CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ SUB61(local_180._10_6_,5),
                                       CONCAT15((byte)((ulong)uVar19 >> 0x28) ^
                                                SUB61(local_180._10_6_,4),
                                                CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                                         SUB61(local_180._10_6_,3),
                                                         CONCAT13((byte)((ulong)uVar19 >> 0x18) ^
                                                                  SUB61(local_180._10_6_,2),
                                                                  CONCAT12((byte)((ulong)uVar19 >>
                                                                                 0x10) ^
                                                                           SUB61(local_180._10_6_,1)
                                                                           ,CONCAT11((byte)((ulong)
                                                  uVar19 >> 8) ^ (byte)local_180._10_6_,
                                                  (byte)uVar19 ^ local_180[9])))))));
                *(ulong *)puVar17 =
                     CONCAT17((byte)((ulong)uVar6 >> 0x38) ^ local_180[8],
                              CONCAT16((byte)((ulong)uVar6 >> 0x30) ^ SUB61(local_180._2_6_,5),
                                       CONCAT15((byte)((ulong)uVar6 >> 0x28) ^
                                                SUB61(local_180._2_6_,4),
                                                CONCAT14((byte)((ulong)uVar6 >> 0x20) ^
                                                         SUB61(local_180._2_6_,3),
                                                         CONCAT13((byte)((ulong)uVar6 >> 0x18) ^
                                                                  SUB61(local_180._2_6_,2),
                                                                  CONCAT12((byte)((ulong)uVar6 >>
                                                                                 0x10) ^
                                                                           SUB61(local_180._2_6_,1),
                                                                           CONCAT11((byte)((ulong)
                                                  uVar6 >> 8) ^ (byte)local_180._2_6_,
                                                  (byte)uVar6 ^ local_180[1])))))));
              }
              else {
                do {
                  uVar16 = (int)uVar13 - 1;
                  uVar13 = (ulong)uVar16;
                  puVar18 = (ushort *)((long)puVar17 + 1);
                  *(byte *)puVar17 = (byte)*puVar17 ^ (byte)*puVar7;
                  puVar7 = (ushort *)((long)puVar7 + 1);
                  puVar17 = puVar18;
                } while (uVar16 != 0);
              }
              break;
            }
            iVar5 = iVar5 + -1;
            puVar8 = puVar8 + 1;
          } while (1 < iVar5);
        }
        puVar14 = puVar18;
        if (puVar18 < puVar1) {
          uVar15 = (long)param_2 + ((uVar11 * 4 + 4) - (long)puVar18);
          for (uVar13 = uVar15 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
            puVar14 = puVar18;
            if ((byte)*puVar18 != 0) goto LAB_00c49978;
            puVar18 = (ushort *)((long)puVar18 + 1);
          }
          puVar17 = param_2 + uVar11 * 2 + 2;
          puVar14 = puVar17;
          if (2 < uVar15 - 1) {
            puVar18 = (ushort *)((long)puVar18 + 3);
            while( true ) {
              if (*(byte *)((long)puVar18 + -3) != 0) {
                puVar14 = (ushort *)((long)puVar18 + -3);
                goto LAB_00c49978;
              }
              if ((byte)puVar18[-1] != 0) break;
              if (*(byte *)((long)puVar18 + -1) != 0) {
                puVar14 = (ushort *)((long)puVar18 + -1);
                goto LAB_00c49978;
              }
              puVar14 = puVar18;
              if (((byte)*puVar18 != 0) ||
                 (puVar7 = (ushort *)((long)puVar18 + 1), puVar18 = puVar18 + 2, puVar14 = puVar17,
                 puVar7 == puVar17)) goto LAB_00c49978;
            }
            puVar14 = puVar18 + -1;
          }
        }
LAB_00c49978:
      } while (puVar14 < puVar1);
    }
  }
  else {
    if ((*param_2 & 0xf0ff) != 0x10) {
LAB_00c49da0:
      uVar6 = 0x15;
      goto LAB_00c49dac;
    }
    puVar12 = (ushort *)((long)param_2 + 5);
    if (puVar12 < puVar1) {
      do {
        bVar2 = (byte)*puVar12;
        uVar13 = (ulong)bVar2;
        puVar18 = puVar14 + 1;
        uVar4 = *puVar14;
        puVar12 = (ushort *)((long)puVar18 + uVar13);
        local_184 = bVar2 + 2;
        if (puVar1 < puVar12) goto LAB_00c49da0;
        iVar5 = FUN_00c4d210(*(undefined8 *)(param_3 + 8),local_180,&local_184);
        if (iVar5 != 0) goto LAB_00c49da8;
        if (((bVar2 != 0) && (*(uint **)(param_1 + 0x60) != (uint *)0x0)) &&
           (0 < *(int *)(param_1 + 0x68))) {
          iVar5 = *(int *)(param_1 + 0x68) + 1;
          puVar8 = *(uint **)(param_1 + 0x60);
LAB_00c49b54:
          if (*puVar8 != (uint)(byte)uVar4) goto code_r0x00c49b60;
          uVar16 = (uint)bVar2;
          if ((uVar16 < 0x20) ||
             ((puVar18 < (ushort *)(((ulong)local_180 | 3) + (ulong)(uVar16 - 1)) &&
              ((byte *)((ulong)local_180 | 2) < (byte *)((long)puVar14 + (ulong)(uVar16 - 1) + 3))))
             ) {
            uVar15 = 2;
          }
          else {
            uVar19 = *(undefined8 *)(puVar14 + 5);
            uVar6 = *(undefined8 *)(puVar14 + 1);
            uVar10 = uVar13 & 0xe0;
            uVar21 = *(undefined8 *)(puVar14 + 0xd);
            uVar20 = *(undefined8 *)(puVar14 + 9);
            *(ulong *)(puVar14 + 5) =
                 CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ auStack_16f[0],
                          CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ local_180[0x10],
                                   CONCAT15((byte)((ulong)uVar19 >> 0x28) ^
                                            SUB61(local_180._10_6_,5),
                                            CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                                     SUB61(local_180._10_6_,4),
                                                     CONCAT13((byte)((ulong)uVar19 >> 0x18) ^
                                                              SUB61(local_180._10_6_,3),
                                                              CONCAT12((byte)((ulong)uVar19 >> 0x10)
                                                                       ^ SUB61(local_180._10_6_,2),
                                                                       CONCAT11((byte)((ulong)uVar19
                                                                                      >> 8) ^
                                                                                SUB61(local_180.
                                                                                      _10_6_,1),
                                                                                (byte)uVar19 ^
                                                                                (byte)local_180.
                                                                                      _10_6_)))))));
            *(ulong *)(puVar14 + 1) =
                 CONCAT17((byte)((ulong)uVar6 >> 0x38) ^ local_180[9],
                          CONCAT16((byte)((ulong)uVar6 >> 0x30) ^ local_180[8],
                                   CONCAT15((byte)((ulong)uVar6 >> 0x28) ^ SUB61(local_180._2_6_,5),
                                            CONCAT14((byte)((ulong)uVar6 >> 0x20) ^
                                                     SUB61(local_180._2_6_,4),
                                                     CONCAT13((byte)((ulong)uVar6 >> 0x18) ^
                                                              SUB61(local_180._2_6_,3),
                                                              CONCAT12((byte)((ulong)uVar6 >> 0x10)
                                                                       ^ SUB61(local_180._2_6_,2),
                                                                       CONCAT11((byte)((ulong)uVar6
                                                                                      >> 8) ^
                                                                                SUB61(local_180.
                                                                                      _2_6_,1),
                                                                                (byte)uVar6 ^
                                                                                (byte)local_180.
                                                                                      _2_6_)))))));
            *(ulong *)(puVar14 + 0xd) =
                 CONCAT17((byte)((ulong)uVar21 >> 0x38) ^ (byte)((ushort)local_160 >> 8),
                          CONCAT16((byte)((ulong)uVar21 >> 0x30) ^ (byte)local_160,
                                   CONCAT15((byte)((ulong)uVar21 >> 0x28) ^
                                            (byte)((uint6)uStack_166 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar21 >> 0x20) ^
                                                     (byte)((uint6)uStack_166 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar21 >> 0x18) ^
                                                              (byte)((uint6)uStack_166 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar21 >> 0x10)
                                                                       ^ (byte)((uint6)uStack_166 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar21
                                                                                      >> 8) ^
                                                                                (byte)((uint6)
                                                  uStack_166 >> 8),(byte)uVar21 ^ (byte)uStack_166))
                                                  )))));
            *(ulong *)(puVar14 + 9) =
                 CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)((ushort)uStack_168 >> 8),
                          CONCAT16((byte)((ulong)uVar20 >> 0x30) ^ (byte)uStack_168,
                                   CONCAT15((byte)((ulong)uVar20 >> 0x28) ^
                                            SUB61(auStack_16f._1_6_,5),
                                            CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                                     SUB61(auStack_16f._1_6_,4),
                                                     CONCAT13((byte)((ulong)uVar20 >> 0x18) ^
                                                              SUB61(auStack_16f._1_6_,3),
                                                              CONCAT12((byte)((ulong)uVar20 >> 0x10)
                                                                       ^ SUB61(auStack_16f._1_6_,2),
                                                                       CONCAT11((byte)((ulong)uVar20
                                                                                      >> 8) ^
                                                                                SUB61(auStack_16f.
                                                                                      _1_6_,1),
                                                                                (byte)uVar20 ^
                                                                                (byte)auStack_16f.
                                                                                      _1_6_)))))));
            if (uVar10 != 0x20) {
              uVar19 = *(undefined8 *)(puVar14 + 0x15);
              uVar6 = *(undefined8 *)(puVar14 + 0x11);
              uVar21 = *(undefined8 *)(puVar14 + 0x1d);
              uVar20 = *(undefined8 *)(puVar14 + 0x19);
              *(ulong *)(puVar14 + 0x15) =
                   CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ushort)uStack_150 >> 8),
                            CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ (byte)uStack_150,
                                     CONCAT15((byte)((ulong)uVar19 >> 0x28) ^
                                              (byte)((uint6)uStack_156 >> 0x28),
                                              CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                                       (byte)((uint6)uStack_156 >> 0x20),
                                                       CONCAT13((byte)((ulong)uVar19 >> 0x18) ^
                                                                (byte)((uint6)uStack_156 >> 0x18),
                                                                CONCAT12((byte)((ulong)uVar19 >>
                                                                               0x10) ^
                                                                         (byte)((uint6)uStack_156 >>
                                                                               0x10),
                                                                         CONCAT11((byte)((ulong)
                                                  uVar19 >> 8) ^ (byte)((uint6)uStack_156 >> 8),
                                                  (byte)uVar19 ^ (byte)uStack_156)))))));
              *(ulong *)(puVar14 + 0x11) =
                   CONCAT17((byte)((ulong)uVar6 >> 0x38) ^ (byte)((ushort)uStack_158 >> 8),
                            CONCAT16((byte)((ulong)uVar6 >> 0x30) ^ (byte)uStack_158,
                                     CONCAT15((byte)((ulong)uVar6 >> 0x28) ^
                                              (byte)((uint6)uStack_15e >> 0x28),
                                              CONCAT14((byte)((ulong)uVar6 >> 0x20) ^
                                                       (byte)((uint6)uStack_15e >> 0x20),
                                                       CONCAT13((byte)((ulong)uVar6 >> 0x18) ^
                                                                (byte)((uint6)uStack_15e >> 0x18),
                                                                CONCAT12((byte)((ulong)uVar6 >> 0x10
                                                                               ) ^ (byte)((uint6)
                                                  uStack_15e >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar6 >> 8) ^
                                                           (byte)((uint6)uStack_15e >> 8),
                                                           (byte)uVar6 ^ (byte)uStack_15e)))))));
              *(ulong *)(puVar14 + 0x1d) =
                   CONCAT17((byte)((ulong)uVar21 >> 0x38) ^ (byte)((ushort)local_140 >> 8),
                            CONCAT16((byte)((ulong)uVar21 >> 0x30) ^ (byte)local_140,
                                     CONCAT15((byte)((ulong)uVar21 >> 0x28) ^
                                              (byte)((uint6)uStack_146 >> 0x28),
                                              CONCAT14((byte)((ulong)uVar21 >> 0x20) ^
                                                       (byte)((uint6)uStack_146 >> 0x20),
                                                       CONCAT13((byte)((ulong)uVar21 >> 0x18) ^
                                                                (byte)((uint6)uStack_146 >> 0x18),
                                                                CONCAT12((byte)((ulong)uVar21 >>
                                                                               0x10) ^
                                                                         (byte)((uint6)uStack_146 >>
                                                                               0x10),
                                                                         CONCAT11((byte)((ulong)
                                                  uVar21 >> 8) ^ (byte)((uint6)uStack_146 >> 8),
                                                  (byte)uVar21 ^ (byte)uStack_146)))))));
              *(ulong *)(puVar14 + 0x19) =
                   CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)((ushort)uStack_148 >> 8),
                            CONCAT16((byte)((ulong)uVar20 >> 0x30) ^ (byte)uStack_148,
                                     CONCAT15((byte)((ulong)uVar20 >> 0x28) ^
                                              (byte)((uint6)uStack_14e >> 0x28),
                                              CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                                       (byte)((uint6)uStack_14e >> 0x20),
                                                       CONCAT13((byte)((ulong)uVar20 >> 0x18) ^
                                                                (byte)((uint6)uStack_14e >> 0x18),
                                                                CONCAT12((byte)((ulong)uVar20 >>
                                                                               0x10) ^
                                                                         (byte)((uint6)uStack_14e >>
                                                                               0x10),
                                                                         CONCAT11((byte)((ulong)
                                                  uVar20 >> 8) ^ (byte)((uint6)uStack_14e >> 8),
                                                  (byte)uVar20 ^ (byte)uStack_14e)))))));
              if (uVar10 != 0x40) {
                uVar19 = *(undefined8 *)(puVar14 + 0x25);
                uVar6 = *(undefined8 *)(puVar14 + 0x21);
                uVar21 = *(undefined8 *)(puVar14 + 0x2d);
                uVar20 = *(undefined8 *)(puVar14 + 0x29);
                *(ulong *)(puVar14 + 0x25) =
                     CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ushort)uStack_130 >> 8),
                              CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ (byte)uStack_130,
                                       CONCAT15((byte)((ulong)uVar19 >> 0x28) ^
                                                (byte)((uint6)uStack_136 >> 0x28),
                                                CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                                         (byte)((uint6)uStack_136 >> 0x20),
                                                         CONCAT13((byte)((ulong)uVar19 >> 0x18) ^
                                                                  (byte)((uint6)uStack_136 >> 0x18),
                                                                  CONCAT12((byte)((ulong)uVar19 >>
                                                                                 0x10) ^
                                                                           (byte)((uint6)uStack_136
                                                                                 >> 0x10),
                                                                           CONCAT11((byte)((ulong)
                                                  uVar19 >> 8) ^ (byte)((uint6)uStack_136 >> 8),
                                                  (byte)uVar19 ^ (byte)uStack_136)))))));
                *(ulong *)(puVar14 + 0x21) =
                     CONCAT17((byte)((ulong)uVar6 >> 0x38) ^ (byte)((ushort)uStack_138 >> 8),
                              CONCAT16((byte)((ulong)uVar6 >> 0x30) ^ (byte)uStack_138,
                                       CONCAT15((byte)((ulong)uVar6 >> 0x28) ^
                                                (byte)((uint6)uStack_13e >> 0x28),
                                                CONCAT14((byte)((ulong)uVar6 >> 0x20) ^
                                                         (byte)((uint6)uStack_13e >> 0x20),
                                                         CONCAT13((byte)((ulong)uVar6 >> 0x18) ^
                                                                  (byte)((uint6)uStack_13e >> 0x18),
                                                                  CONCAT12((byte)((ulong)uVar6 >>
                                                                                 0x10) ^
                                                                           (byte)((uint6)uStack_13e
                                                                                 >> 0x10),
                                                                           CONCAT11((byte)((ulong)
                                                  uVar6 >> 8) ^ (byte)((uint6)uStack_13e >> 8),
                                                  (byte)uVar6 ^ (byte)uStack_13e)))))));
                *(ulong *)(puVar14 + 0x2d) =
                     CONCAT17((byte)((ulong)uVar21 >> 0x38) ^ (byte)((ushort)local_120 >> 8),
                              CONCAT16((byte)((ulong)uVar21 >> 0x30) ^ (byte)local_120,
                                       CONCAT15((byte)((ulong)uVar21 >> 0x28) ^
                                                (byte)((uint6)uStack_126 >> 0x28),
                                                CONCAT14((byte)((ulong)uVar21 >> 0x20) ^
                                                         (byte)((uint6)uStack_126 >> 0x20),
                                                         CONCAT13((byte)((ulong)uVar21 >> 0x18) ^
                                                                  (byte)((uint6)uStack_126 >> 0x18),
                                                                  CONCAT12((byte)((ulong)uVar21 >>
                                                                                 0x10) ^
                                                                           (byte)((uint6)uStack_126
                                                                                 >> 0x10),
                                                                           CONCAT11((byte)((ulong)
                                                  uVar21 >> 8) ^ (byte)((uint6)uStack_126 >> 8),
                                                  (byte)uVar21 ^ (byte)uStack_126)))))));
                *(ulong *)(puVar14 + 0x29) =
                     CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)((ushort)uStack_128 >> 8),
                              CONCAT16((byte)((ulong)uVar20 >> 0x30) ^ (byte)uStack_128,
                                       CONCAT15((byte)((ulong)uVar20 >> 0x28) ^
                                                (byte)((uint6)uStack_12e >> 0x28),
                                                CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                                         (byte)((uint6)uStack_12e >> 0x20),
                                                         CONCAT13((byte)((ulong)uVar20 >> 0x18) ^
                                                                  (byte)((uint6)uStack_12e >> 0x18),
                                                                  CONCAT12((byte)((ulong)uVar20 >>
                                                                                 0x10) ^
                                                                           (byte)((uint6)uStack_12e
                                                                                 >> 0x10),
                                                                           CONCAT11((byte)((ulong)
                                                  uVar20 >> 8) ^ (byte)((uint6)uStack_12e >> 8),
                                                  (byte)uVar20 ^ (byte)uStack_12e)))))));
                if (uVar10 != 0x60) {
                  uVar19 = *(undefined8 *)(puVar14 + 0x35);
                  uVar6 = *(undefined8 *)(puVar14 + 0x31);
                  uVar21 = *(undefined8 *)(puVar14 + 0x3d);
                  uVar20 = *(undefined8 *)(puVar14 + 0x39);
                  *(ulong *)(puVar14 + 0x35) =
                       CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ushort)uStack_110 >> 8),
                                CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ (byte)uStack_110,
                                         CONCAT15((byte)((ulong)uVar19 >> 0x28) ^
                                                  (byte)((uint6)uStack_116 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                                           (byte)((uint6)uStack_116 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar19 >> 0x18) ^
                                                                    (byte)((uint6)uStack_116 >> 0x18
                                                                          ),CONCAT12((byte)((ulong)
                                                  uVar19 >> 0x10) ^
                                                  (byte)((uint6)uStack_116 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar19 >> 8) ^
                                                           (byte)((uint6)uStack_116 >> 8),
                                                           (byte)uVar19 ^ (byte)uStack_116)))))));
                  *(ulong *)(puVar14 + 0x31) =
                       CONCAT17((byte)((ulong)uVar6 >> 0x38) ^ (byte)((ushort)uStack_118 >> 8),
                                CONCAT16((byte)((ulong)uVar6 >> 0x30) ^ (byte)uStack_118,
                                         CONCAT15((byte)((ulong)uVar6 >> 0x28) ^
                                                  (byte)((uint6)uStack_11e >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar6 >> 0x20) ^
                                                           (byte)((uint6)uStack_11e >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar6 >> 0x18) ^
                                                                    (byte)((uint6)uStack_11e >> 0x18
                                                                          ),CONCAT12((byte)((ulong)
                                                  uVar6 >> 0x10) ^ (byte)((uint6)uStack_11e >> 0x10)
                                                  ,CONCAT11((byte)((ulong)uVar6 >> 8) ^
                                                            (byte)((uint6)uStack_11e >> 8),
                                                            (byte)uVar6 ^ (byte)uStack_11e)))))));
                  *(ulong *)(puVar14 + 0x3d) =
                       CONCAT17((byte)((ulong)uVar21 >> 0x38) ^ (byte)((ushort)local_100 >> 8),
                                CONCAT16((byte)((ulong)uVar21 >> 0x30) ^ (byte)local_100,
                                         CONCAT15((byte)((ulong)uVar21 >> 0x28) ^
                                                  (byte)((uint6)uStack_106 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar21 >> 0x20) ^
                                                           (byte)((uint6)uStack_106 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar21 >> 0x18) ^
                                                                    (byte)((uint6)uStack_106 >> 0x18
                                                                          ),CONCAT12((byte)((ulong)
                                                  uVar21 >> 0x10) ^
                                                  (byte)((uint6)uStack_106 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar21 >> 8) ^
                                                           (byte)((uint6)uStack_106 >> 8),
                                                           (byte)uVar21 ^ (byte)uStack_106)))))));
                  *(ulong *)(puVar14 + 0x39) =
                       CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)((ushort)uStack_108 >> 8),
                                CONCAT16((byte)((ulong)uVar20 >> 0x30) ^ (byte)uStack_108,
                                         CONCAT15((byte)((ulong)uVar20 >> 0x28) ^
                                                  (byte)((uint6)uStack_10e >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                                           (byte)((uint6)uStack_10e >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar20 >> 0x18) ^
                                                                    (byte)((uint6)uStack_10e >> 0x18
                                                                          ),CONCAT12((byte)((ulong)
                                                  uVar20 >> 0x10) ^
                                                  (byte)((uint6)uStack_10e >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar20 >> 8) ^
                                                           (byte)((uint6)uStack_10e >> 8),
                                                           (byte)uVar20 ^ (byte)uStack_10e)))))));
                  if (uVar10 != 0x80) {
                    uVar19 = *(undefined8 *)(puVar14 + 0x45);
                    uVar6 = *(undefined8 *)(puVar14 + 0x41);
                    uVar21 = *(undefined8 *)(puVar14 + 0x4d);
                    uVar20 = *(undefined8 *)(puVar14 + 0x49);
                    *(ulong *)(puVar14 + 0x45) =
                         CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ushort)uStack_f0 >> 8),
                                  CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ (byte)uStack_f0,
                                           CONCAT15((byte)((ulong)uVar19 >> 0x28) ^
                                                    (byte)((uint6)uStack_f6 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                                             (byte)((uint6)uStack_f6 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar19 >> 0x18)
                                                                      ^ (byte)((uint6)uStack_f6 >>
                                                                              0x18),
                                                                      CONCAT12((byte)((ulong)uVar19
                                                                                     >> 0x10) ^
                                                                               (byte)((uint6)
                                                  uStack_f6 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar19 >> 8) ^
                                                           (byte)((uint6)uStack_f6 >> 8),
                                                           (byte)uVar19 ^ (byte)uStack_f6)))))));
                    *(ulong *)(puVar14 + 0x41) =
                         CONCAT17((byte)((ulong)uVar6 >> 0x38) ^ (byte)((ushort)uStack_f8 >> 8),
                                  CONCAT16((byte)((ulong)uVar6 >> 0x30) ^ (byte)uStack_f8,
                                           CONCAT15((byte)((ulong)uVar6 >> 0x28) ^
                                                    (byte)((uint6)uStack_fe >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar6 >> 0x20) ^
                                                             (byte)((uint6)uStack_fe >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar6 >> 0x18) ^
                                                                      (byte)((uint6)uStack_fe >>
                                                                            0x18),
                                                                      CONCAT12((byte)((ulong)uVar6
                                                                                     >> 0x10) ^
                                                                               (byte)((uint6)
                                                  uStack_fe >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar6 >> 8) ^
                                                           (byte)((uint6)uStack_fe >> 8),
                                                           (byte)uVar6 ^ (byte)uStack_fe)))))));
                    *(ulong *)(puVar14 + 0x4d) =
                         CONCAT17((byte)((ulong)uVar21 >> 0x38) ^ (byte)((ushort)local_e0 >> 8),
                                  CONCAT16((byte)((ulong)uVar21 >> 0x30) ^ (byte)local_e0,
                                           CONCAT15((byte)((ulong)uVar21 >> 0x28) ^
                                                    (byte)((uint6)uStack_e6 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar21 >> 0x20) ^
                                                             (byte)((uint6)uStack_e6 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar21 >> 0x18)
                                                                      ^ (byte)((uint6)uStack_e6 >>
                                                                              0x18),
                                                                      CONCAT12((byte)((ulong)uVar21
                                                                                     >> 0x10) ^
                                                                               (byte)((uint6)
                                                  uStack_e6 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar21 >> 8) ^
                                                           (byte)((uint6)uStack_e6 >> 8),
                                                           (byte)uVar21 ^ (byte)uStack_e6)))))));
                    *(ulong *)(puVar14 + 0x49) =
                         CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)((ushort)uStack_e8 >> 8),
                                  CONCAT16((byte)((ulong)uVar20 >> 0x30) ^ (byte)uStack_e8,
                                           CONCAT15((byte)((ulong)uVar20 >> 0x28) ^
                                                    (byte)((uint6)uStack_ee >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                                             (byte)((uint6)uStack_ee >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar20 >> 0x18)
                                                                      ^ (byte)((uint6)uStack_ee >>
                                                                              0x18),
                                                                      CONCAT12((byte)((ulong)uVar20
                                                                                     >> 0x10) ^
                                                                               (byte)((uint6)
                                                  uStack_ee >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar20 >> 8) ^
                                                           (byte)((uint6)uStack_ee >> 8),
                                                           (byte)uVar20 ^ (byte)uStack_ee)))))));
                    if (uVar10 != 0xa0) {
                      uVar19 = *(undefined8 *)(puVar14 + 0x55);
                      uVar6 = *(undefined8 *)(puVar14 + 0x51);
                      uVar21 = *(undefined8 *)(puVar14 + 0x5d);
                      uVar20 = *(undefined8 *)(puVar14 + 0x59);
                      *(ulong *)(puVar14 + 0x55) =
                           CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ushort)uStack_d0 >> 8),
                                    CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ (byte)uStack_d0,
                                             CONCAT15((byte)((ulong)uVar19 >> 0x28) ^
                                                      (byte)((uint6)uStack_d6 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                                               (byte)((uint6)uStack_d6 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar19 >> 0x18
                                                                              ) ^ (byte)((uint6)
                                                  uStack_d6 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar19 >> 0x10) ^
                                                           (byte)((uint6)uStack_d6 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar19 >> 8) ^
                                                                    (byte)((uint6)uStack_d6 >> 8),
                                                                    (byte)uVar19 ^ (byte)uStack_d6))
                                                  )))));
                      *(ulong *)(puVar14 + 0x51) =
                           CONCAT17((byte)((ulong)uVar6 >> 0x38) ^ (byte)((ushort)uStack_d8 >> 8),
                                    CONCAT16((byte)((ulong)uVar6 >> 0x30) ^ (byte)uStack_d8,
                                             CONCAT15((byte)((ulong)uVar6 >> 0x28) ^
                                                      (byte)((uint6)uStack_de >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar6 >> 0x20) ^
                                                               (byte)((uint6)uStack_de >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar6 >> 0x18)
                                                                        ^ (byte)((uint6)uStack_de >>
                                                                                0x18),
                                                                        CONCAT12((byte)((ulong)uVar6
                                                                                       >> 0x10) ^
                                                                                 (byte)((uint6)
                                                  uStack_de >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar6 >> 8) ^
                                                           (byte)((uint6)uStack_de >> 8),
                                                           (byte)uVar6 ^ (byte)uStack_de)))))));
                      *(ulong *)(puVar14 + 0x5d) =
                           CONCAT17((byte)((ulong)uVar21 >> 0x38) ^ (byte)((ushort)local_c0 >> 8),
                                    CONCAT16((byte)((ulong)uVar21 >> 0x30) ^ (byte)local_c0,
                                             CONCAT15((byte)((ulong)uVar21 >> 0x28) ^
                                                      (byte)((uint6)uStack_c6 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar21 >> 0x20) ^
                                                               (byte)((uint6)uStack_c6 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar21 >> 0x18
                                                                              ) ^ (byte)((uint6)
                                                  uStack_c6 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar21 >> 0x10) ^
                                                           (byte)((uint6)uStack_c6 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar21 >> 8) ^
                                                                    (byte)((uint6)uStack_c6 >> 8),
                                                                    (byte)uVar21 ^ (byte)uStack_c6))
                                                  )))));
                      *(ulong *)(puVar14 + 0x59) =
                           CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)((ushort)uStack_c8 >> 8),
                                    CONCAT16((byte)((ulong)uVar20 >> 0x30) ^ (byte)uStack_c8,
                                             CONCAT15((byte)((ulong)uVar20 >> 0x28) ^
                                                      (byte)((uint6)uStack_ce >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                                               (byte)((uint6)uStack_ce >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar20 >> 0x18
                                                                              ) ^ (byte)((uint6)
                                                  uStack_ce >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar20 >> 0x10) ^
                                                           (byte)((uint6)uStack_ce >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar20 >> 8) ^
                                                                    (byte)((uint6)uStack_ce >> 8),
                                                                    (byte)uVar20 ^ (byte)uStack_ce))
                                                  )))));
                      if (uVar10 != 0xc0) {
                        uVar19 = *(undefined8 *)(puVar14 + 0x65);
                        uVar6 = *(undefined8 *)(puVar14 + 0x61);
                        uVar21 = *(undefined8 *)(puVar14 + 0x6d);
                        uVar20 = *(undefined8 *)(puVar14 + 0x69);
                        *(ulong *)(puVar14 + 0x65) =
                             CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ushort)uStack_b0 >> 8)
                                      ,CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ (byte)uStack_b0,
                                                CONCAT15((byte)((ulong)uVar19 >> 0x28) ^
                                                         (byte)((uint6)uStack_b6 >> 0x28),
                                                         CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                                                  (byte)((uint6)uStack_b6 >> 0x20),
                                                                  CONCAT13((byte)((ulong)uVar19 >>
                                                                                 0x18) ^
                                                                           (byte)((uint6)uStack_b6
                                                                                 >> 0x18),
                                                                           CONCAT12((byte)((ulong)
                                                  uVar19 >> 0x10) ^ (byte)((uint6)uStack_b6 >> 0x10)
                                                  ,CONCAT11((byte)((ulong)uVar19 >> 8) ^
                                                            (byte)((uint6)uStack_b6 >> 8),
                                                            (byte)uVar19 ^ (byte)uStack_b6)))))));
                        *(ulong *)(puVar14 + 0x61) =
                             CONCAT17((byte)((ulong)uVar6 >> 0x38) ^ (byte)((ushort)uStack_b8 >> 8),
                                      CONCAT16((byte)((ulong)uVar6 >> 0x30) ^ (byte)uStack_b8,
                                               CONCAT15((byte)((ulong)uVar6 >> 0x28) ^
                                                        (byte)((uint6)uStack_be >> 0x28),
                                                        CONCAT14((byte)((ulong)uVar6 >> 0x20) ^
                                                                 (byte)((uint6)uStack_be >> 0x20),
                                                                 CONCAT13((byte)((ulong)uVar6 >>
                                                                                0x18) ^
                                                                          (byte)((uint6)uStack_be >>
                                                                                0x18),
                                                                          CONCAT12((byte)((ulong)
                                                  uVar6 >> 0x10) ^ (byte)((uint6)uStack_be >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar6 >> 8) ^
                                                           (byte)((uint6)uStack_be >> 8),
                                                           (byte)uVar6 ^ (byte)uStack_be)))))));
                        *(ulong *)(puVar14 + 0x6d) =
                             CONCAT17((byte)((ulong)uVar21 >> 0x38) ^ (byte)((ushort)local_a0 >> 8),
                                      CONCAT16((byte)((ulong)uVar21 >> 0x30) ^ (byte)local_a0,
                                               CONCAT15((byte)((ulong)uVar21 >> 0x28) ^
                                                        (byte)((uint6)uStack_a6 >> 0x28),
                                                        CONCAT14((byte)((ulong)uVar21 >> 0x20) ^
                                                                 (byte)((uint6)uStack_a6 >> 0x20),
                                                                 CONCAT13((byte)((ulong)uVar21 >>
                                                                                0x18) ^
                                                                          (byte)((uint6)uStack_a6 >>
                                                                                0x18),
                                                                          CONCAT12((byte)((ulong)
                                                  uVar21 >> 0x10) ^ (byte)((uint6)uStack_a6 >> 0x10)
                                                  ,CONCAT11((byte)((ulong)uVar21 >> 8) ^
                                                            (byte)((uint6)uStack_a6 >> 8),
                                                            (byte)uVar21 ^ (byte)uStack_a6)))))));
                        *(ulong *)(puVar14 + 0x69) =
                             CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)((ushort)uStack_a8 >> 8)
                                      ,CONCAT16((byte)((ulong)uVar20 >> 0x30) ^ (byte)uStack_a8,
                                                CONCAT15((byte)((ulong)uVar20 >> 0x28) ^
                                                         (byte)((uint6)uStack_ae >> 0x28),
                                                         CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                                                  (byte)((uint6)uStack_ae >> 0x20),
                                                                  CONCAT13((byte)((ulong)uVar20 >>
                                                                                 0x18) ^
                                                                           (byte)((uint6)uStack_ae
                                                                                 >> 0x18),
                                                                           CONCAT12((byte)((ulong)
                                                  uVar20 >> 0x10) ^ (byte)((uint6)uStack_ae >> 0x10)
                                                  ,CONCAT11((byte)((ulong)uVar20 >> 8) ^
                                                            (byte)((uint6)uStack_ae >> 8),
                                                            (byte)uVar20 ^ (byte)uStack_ae)))))));
                      }
                    }
                  }
                }
              }
            }
            puVar18 = (ushort *)((long)puVar18 + uVar10);
            puVar12 = puVar18;
            if (uVar10 == uVar13) goto joined_r0x00c49d6c;
            uVar15 = uVar10 | 2;
            uVar13 = (ulong)(uVar16 - (int)uVar10);
          }
          pbVar9 = local_180 + uVar15;
          do {
            uVar16 = (int)uVar13 - 1;
            uVar13 = (ulong)uVar16;
            puVar12 = (ushort *)((long)puVar18 + 1);
            *(byte *)puVar18 = (byte)*puVar18 ^ *pbVar9;
            pbVar9 = pbVar9 + 1;
            puVar18 = puVar12;
          } while (uVar16 != 0);
        }
joined_r0x00c49d6c:
        puVar14 = puVar12;
        if (puVar12 < puVar1) {
          uVar15 = (long)param_2 + ((uVar11 * 4 + 4) - (long)puVar12);
          for (uVar13 = uVar15 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
            puVar14 = puVar12;
            if ((byte)*puVar12 != 0) goto LAB_00c49af4;
            puVar12 = (ushort *)((long)puVar12 + 1);
          }
          puVar18 = param_2 + uVar11 * 2 + 2;
          puVar14 = puVar18;
          if (2 < uVar15 - 1) {
            puVar12 = (ushort *)((long)puVar12 + 3);
            while( true ) {
              if (*(byte *)((long)puVar12 - 3) != 0) {
                puVar14 = (ushort *)((long)puVar12 - 3);
                goto LAB_00c49af4;
              }
              if ((byte)puVar12[-1] != 0) break;
              if (*(byte *)((long)puVar12 - 1) != 0) {
                puVar14 = (ushort *)((long)puVar12 - 1);
                goto LAB_00c49af4;
              }
              puVar14 = puVar12;
              if (((byte)*puVar12 != 0) ||
                 (puVar17 = (ushort *)((long)puVar12 + 1), puVar12 = puVar12 + 2, puVar14 = puVar18,
                 puVar17 == puVar18)) goto LAB_00c49af4;
            }
            puVar14 = puVar12 + -1;
          }
        }
LAB_00c49af4:
        puVar12 = (ushort *)((long)puVar14 + 1);
      } while (puVar12 < puVar1);
    }
  }
  uVar6 = 0;
  goto LAB_00c49dac;
code_r0x00c49b60:
  iVar5 = iVar5 + -1;
  puVar8 = puVar8 + 1;
  if (iVar5 < 2) goto joined_r0x00c49d6c;
  goto LAB_00c49b54;
LAB_00c49da8:
  uVar6 = 8;
LAB_00c49dac:
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


// ===== 00c49de8  FUN_00c49de8 =====

void FUN_00c49de8(void)

{
  FUN_00c49df4();
  return;
}


// ===== 00c49df4  FUN_00c49df4 =====

undefined1 * FUN_00c49df4(uint *param_1,ushort *param_2,uint *param_3,int param_4)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined1 *puVar13;
  long lVar14;
  ushort *puVar15;
  ushort *puVar16;
  ushort *puVar17;
  uint *puVar18;
  ulong uVar19;
  long *plVar20;
  undefined1 *puVar21;
  ulong local_e8;
  undefined4 local_d4;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  int local_b4;
  uint *local_b0;
  uint local_a8;
  undefined4 uStack_a4;
  uint *local_a0;
  undefined8 local_98;
  uint local_8c;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  local_b4 = 0;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  if (DAT_00d60140 != 0) {
    FUN_00c4c870(3,"%s: function srtp_unprotect\n",PTR_DAT_00d60148);
  }
  uVar7 = *param_3;
  if (0xb < uVar7) {
    uVar19 = (ulong)*param_2 & 0xf;
    iVar8 = (int)uVar19 * 4;
    if (iVar8 + 0xcU <= uVar7) {
      if ((*param_2 >> 4 & 1) == 0) {
        if (0xb < (int)uVar7) {
LAB_00c49f10:
          uVar7 = *(uint *)(param_2 + 4);
          local_c0 = &DAT_aaaaaaaaaaaaaaaa;
          puVar18 = *(uint **)param_1;
          local_d4 = 0xaaaaaaaa;
          do {
            puVar18 = *(uint **)(puVar18 + 0x1c);
            if (puVar18 == (uint *)0x0) {
              puVar18 = *(uint **)(param_1 + 2);
              if (puVar18 == (uint *)0x0) {
                puVar21 = (undefined1 *)0xd;
                goto LAB_00c49e8c;
              }
              if (DAT_00d60140 != 0) {
                uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
                FUN_00c4c870(3,"%s: using provisional stream (SSRC: 0x%08x)\n",PTR_DAT_00d60148,
                             uVar7 >> 0x10 | uVar7 << 0x10);
              }
              local_e8 = 0;
              puVar13 = (undefined1 *)0x0;
              bVar3 = true;
              puVar11 = (undefined1 *)
                        (ulong)((uint)(param_2[1] >> 8) | (param_2[1] & 0xff00ff) << 8);
              local_c0 = puVar11;
              goto LAB_00c4a078;
            }
          } while (*puVar18 != uVar7);
          if (puVar18[0x1b] == 0) {
            uVar19 = FUN_00c4fe5c(puVar18 + 6,&local_c0);
            puVar11 = (undefined1 *)(uVar19 & 0xffffffff);
            uVar7 = 0;
LAB_00c4a000:
            puVar21 = (undefined1 *)(ulong)uVar7;
          }
          else {
            local_c0 = (undefined1 *)
                       ((ulong)((uint)(param_2[1] >> 8) | (param_2[1] & 0xff00ff) << 8) |
                       (ulong)puVar18[0x1b] << 0x10);
            puVar13 = *(undefined1 **)(puVar18 + 6);
            puVar11 = local_c0 + -(long)puVar13;
            if (local_c0 < puVar13 || puVar11 == (undefined1 *)0x0) {
              puVar21 = (undefined1 *)0x0;
              if ((local_c0 < puVar13) && (0x8000 < (ulong)((long)puVar13 - (long)local_c0))) {
                uVar7 = 0x1a;
                puVar11 = puVar21;
                goto LAB_00c4a000;
              }
            }
            else {
              puVar21 = (undefined1 *)0x0;
              if ((undefined1 *)0x8000 < puVar11) {
                uVar7 = 0x1b;
                puVar11 = puVar21;
                goto LAB_00c4a000;
              }
            }
          }
          if (DAT_00d60140 != 0) {
            FUN_00c4c870(3,"%s: estimated u_packet index: %016lx\n",PTR_DAT_00d60148,local_c0);
          }
          if ((int)puVar21 - 1U < 0x1a) goto LAB_00c49e8c;
          if ((int)puVar21 != 0x1b) {
            uVar19 = FUN_00c4fd98(puVar18 + 6,(ulong)puVar11 & 0xffffffff);
            if ((int)uVar19 == 0) {
              puVar13 = (undefined1 *)0x0;
              bVar3 = true;
              local_e8 = 0;
              goto LAB_00c4a078;
            }
            goto LAB_00c4a064;
          }
          bVar3 = false;
          local_e8 = (ulong)local_c0 >> 0x10;
          puVar13 = local_c0;
LAB_00c4a078:
          if (DAT_00d60140 != 0) {
            FUN_00c4c870(3,"%s: estimated u_packet index: %016lx\n",PTR_DAT_00d60148,local_c0);
          }
          if (param_4 == 0) {
            plVar20 = *(long **)(puVar18 + 2);
            uVar7 = 0;
LAB_00c4a0d0:
            puVar21 = local_c0;
            iVar8 = (int)param_2;
            if ((*(uint *)(*plVar20 + 0x14) & 0xfffffffe) == 6) {
              local_88 = local_c0;
              if ((DAT_00d60140 != 0) &&
                 (FUN_00c4c870(3,"%s: function srtp_unprotect_aead\n",PTR_DAT_00d60148),
                 DAT_00d60140 != 0)) {
                FUN_00c4c870(3,"%s: estimated u_packet index: %016lx\n",PTR_DAT_00d60148,puVar21);
              }
              uVar5 = FUN_00c4e984(plVar20[2]);
              FUN_00c4c490(plVar20,&local_a0,&local_88,param_2);
              iVar6 = FUN_00c4d1e8(*plVar20,&local_a0,1);
              if (iVar6 == 0) {
                if (plVar20[1] != 0) {
                  uVar19 = ((ulong)puVar21 & 0xff00ff00ff00ff00) >> 8 |
                           ((ulong)puVar21 & 0xff00ff00ff00ff) << 8;
                  uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10
                  ;
                  local_98 = (uVar19 >> 0x20 | uVar19 << 0x20) >> 0x10;
                  local_a0 = (uint *)((ulong)*(uint *)(param_2 + 4) << 0x20);
                  iVar6 = FUN_00c4d1e8(plVar20[1],&local_a0,0);
                  if (iVar6 != 0) goto LAB_00c4a2ac;
                }
                uVar19 = (ulong)*param_2 & 0xf;
                puVar17 = param_2 + uVar19 * 2 + 6;
                if ((*param_2 >> 4 & 1) == 0) {
                  puVar15 = (ushort *)0x0;
                  puVar16 = puVar17;
                }
                else {
                  puVar16 = puVar17 + (ulong)((uint)(param_2[uVar19 * 2 + 7] >> 8) |
                                             (param_2[uVar19 * 2 + 7] & 0xff00ff) << 8) * 2 + 2;
                  puVar15 = puVar17;
                }
                if ((ushort *)((long)param_2 + (ulong)(*param_3 - (uVar5 + uVar7))) < puVar16) {
LAB_00c4a434:
                  puVar21 = (undefined1 *)0x15;
                  goto LAB_00c49e8c;
                }
                local_8c = (*param_3 - uVar7) - ((int)puVar16 - iVar8);
                if (uVar5 <= local_8c) {
                  iVar6 = FUN_00c4c720(plVar20[10]);
                  if (iVar6 == 2) {
                    if (PTR_FUN_00d60150 != (undefined *)0x0) {
                      lVar12 = -0x50;
                      uVar7 = (*puVar18 & 0xff00ff00) >> 8 | (*puVar18 & 0xff00ff) << 8;
                      local_a8 = uVar7 >> 0x10 | uVar7 << 0x10;
                      uStack_a4 = 2;
                      local_b0 = param_1;
                      goto LAB_00c4a6c4;
                    }
                    goto LAB_00c4a6c8;
                  }
                  if ((iVar6 == 1) && (PTR_FUN_00d60150 != (undefined *)0x0)) {
                    uVar1 = (*puVar18 & 0xff00ff00) >> 8 | (*puVar18 & 0xff00ff) << 8;
                    local_a8 = uVar1 >> 0x10 | uVar1 << 0x10;
                    uStack_a4 = 1;
                    local_b0 = param_1;
                    (*(code *)PTR_FUN_00d60150)(&local_b0);
                  }
                  iVar8 = FUN_00c4d2e4(*plVar20,param_2,(int)puVar16 - iVar8);
                  if (iVar8 == 0) {
                    uVar19 = FUN_00c4d288(*plVar20,puVar16,&local_8c);
                    if (((int)uVar19 != 0) ||
                       (((puVar15 != (ushort *)0x0 && (plVar20[1] != 0)) &&
                        (uVar19 = FUN_00c49874(puVar18,puVar15,plVar20), (int)uVar19 != 0)))) {
LAB_00c4a064:
                      puVar21 = (undefined1 *)(uVar19 & 0xffffffff);
                      goto LAB_00c49e8c;
                    }
                    if (puVar18[0x15] != 2) {
                      if (puVar18[0x15] == 0) {
                        puVar18[0x15] = 2;
                      }
                      else if (PTR_FUN_00d60150 != (undefined *)0x0) {
                        uVar1 = (*puVar18 & 0xff00ff00) >> 8 | (*puVar18 & 0xff00ff) << 8;
                        local_a8 = uVar1 >> 0x10 | uVar1 << 0x10;
                        uStack_a4 = 0;
                        local_b0 = param_1;
                        (*(code *)PTR_FUN_00d60150)(&local_b0);
                      }
                    }
                    if (puVar18 == *(uint **)(param_1 + 2)) {
                      local_b0 = (uint *)&DAT_aaaaaaaaaaaaaaaa;
                      uVar19 = FUN_00c4957c(*(uint **)(param_1 + 2),*(undefined4 *)(param_2 + 4),
                                            &local_b0);
                      if ((int)uVar19 != 0) goto LAB_00c4a064;
                      lVar12 = *(long *)param_1;
                      lVar14 = *(long *)(lVar12 + 0x70);
                      *(long *)(local_b0 + 0x1c) = lVar14;
                      if (lVar14 != 0) {
                        *(uint **)(lVar14 + 0x78) = local_b0;
                      }
                      *(uint **)(lVar12 + 0x70) = local_b0;
                      *(long *)(local_b0 + 0x1e) = lVar12;
                      puVar18 = local_b0;
                    }
                    if (!bVar3) {
                      FUN_00c4fee8(puVar18 + 6,(ulong)puVar21 >> 0x10,puVar21);
                      puVar18[0x1b] = 0;
                      puVar11 = (undefined1 *)0x0;
                    }
                    FUN_00c4fde4(puVar18 + 6,puVar11);
                    uVar5 = *param_3 - (uVar5 + uVar7);
                    goto LAB_00c4a738;
                  }
                }
              }
            }
            else {
              uVar5 = FUN_00c4e984(plVar20[2]);
              if ((*(uint *)(*(long *)*plVar20 + 0x50) < 6) &&
                 ((0x32U >> (ulong)(*(uint *)(*(long *)*plVar20 + 0x50) & 0x1f) & 1) != 0)) {
                uVar19 = ((ulong)local_c0 & 0xff00ff00ff00ff00) >> 8 |
                         ((ulong)local_c0 & 0xff00ff00ff00ff) << 8;
                uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
                local_d0 = (undefined1 *)((ulong)*(uint *)(param_2 + 4) << 0x20);
                puStack_c8 = (undefined1 *)((uVar19 >> 0x20 | uVar19 << 0x20) >> 0x10);
              }
              else {
                uVar19 = ((ulong)local_c0 & 0xff00ff00ff00ff00) >> 8 |
                         ((ulong)local_c0 & 0xff00ff00ff00ff) << 8;
                uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
                puStack_c8 = (undefined1 *)(uVar19 >> 0x20 | uVar19 << 0x20);
                local_d0 = (undefined1 *)0x0;
              }
              iVar6 = FUN_00c4d1e8(*plVar20,&local_d0,1);
              if ((iVar6 == 0) &&
                 ((plVar20[1] == 0 || (iVar6 = FUN_00c4d1e8(plVar20[1],&local_d0,1), iVar6 == 0))))
              {
                uVar19 = ((ulong)local_c0 & 0xff00ff00ff00ff00) >> 8 |
                         ((ulong)local_c0 & 0xff00ff00ff00ff) << 8;
                uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
                local_c0 = (undefined1 *)((uVar19 >> 0x20 | uVar19 << 0x20) >> 0x10);
                if ((puVar18[0xc] & 1) == 0) {
                  puVar16 = (ushort *)0x0;
                  puVar17 = (ushort *)0x0;
                }
                else {
                  uVar19 = (ulong)*param_2 & 0xf;
                  puVar17 = param_2 + uVar19 * 2 + 6;
                  if ((*param_2 >> 4 & 1) == 0) {
                    puVar16 = puVar17;
                    puVar17 = (ushort *)0x0;
                  }
                  else {
                    puVar16 = puVar17 + (ulong)((uint)(param_2[uVar19 * 2 + 7] >> 8) |
                                               (param_2[uVar19 * 2 + 7] & 0xff00ff) << 8) * 2 + 2;
                  }
                  uVar1 = (*param_3 - uVar7) - uVar5;
                  if ((ushort *)((long)param_2 + (ulong)uVar1) < puVar16) goto LAB_00c4a434;
                  local_b4 = uVar1 + (iVar8 - (int)puVar16);
                }
                if (((puVar18[0xc] >> 1 & 1) != 0) && (param_2 != (ushort *)0x0)) {
                  plVar9 = (long *)plVar20[2];
                  uVar1 = *param_3;
                  if ((int)plVar9[3] != 0) {
                    local_d4 = FUN_00c4e990();
                    iVar8 = FUN_00c4d210(*plVar20,&local_80,&local_d4);
                    puVar4 = PTR_DAT_00d60148;
                    if (DAT_00d60140 != 0) {
                      uVar10 = FUN_00c4c9cc(&local_80,local_d4);
                      FUN_00c4c870(3,"%s: keystream prefix: %s\n",puVar4,uVar10);
                    }
                    if (iVar8 != 0) goto LAB_00c4a2ac;
                    plVar9 = (long *)plVar20[2];
                  }
                  uVar19 = (**(code **)(*plVar9 + 0x28))(plVar9[1]);
                  if (((int)uVar19 != 0) ||
                     (uVar19 = (**(code **)(*(long *)plVar20[2] + 0x20))
                                         (((long *)plVar20[2])[1],param_2,(*param_3 - uVar7) - uVar5
                                         ), (int)uVar19 != 0)) goto LAB_00c4a064;
                  plVar9 = (long *)plVar20[2];
                  lVar12 = (long)param_2 + ((long)(int)uVar1 - (ulong)uVar5);
                  iVar8 = (**(code **)(*plVar9 + 0x18))
                                    (plVar9[1],&local_c0,4,(int)plVar9[2],&local_80);
                  puVar4 = PTR_DAT_00d60148;
                  if (DAT_00d60140 != 0) {
                    uVar10 = FUN_00c4c9cc(&local_80,uVar5);
                    FUN_00c4c870(3,"%s: computed auth tag:    %s\n",puVar4,uVar10);
                    puVar4 = PTR_DAT_00d60148;
                    if (DAT_00d60140 != 0) {
                      uVar10 = FUN_00c4c9cc(lVar12,uVar5);
                      FUN_00c4c870(3,"%s: packet auth tag:      %s\n",puVar4,uVar10);
                    }
                  }
                  if ((iVar8 != 0) || (iVar8 = FUN_00c4ce90(&local_80,lVar12,uVar5), iVar8 != 0)) {
                    puVar21 = (undefined1 *)0x7;
                    goto LAB_00c49e8c;
                  }
                }
                iVar8 = FUN_00c4c720(plVar20[10]);
                if (iVar8 == 2) {
                  if (PTR_FUN_00d60150 != (undefined *)0x0) {
                    lVar12 = -0x40;
                    uVar7 = (*puVar18 & 0xff00ff00) >> 8 | (*puVar18 & 0xff00ff) << 8;
                    local_98 = CONCAT44(2,uVar7 >> 0x10 | uVar7 << 0x10);
                    local_a0 = param_1;
LAB_00c4a6c4:
                    (*(code *)PTR_FUN_00d60150)(&stack0xffffffffffffffa0 + lVar12);
                  }
LAB_00c4a6c8:
                  puVar21 = (undefined1 *)0xf;
                  goto LAB_00c49e8c;
                }
                if ((iVar8 == 1) && (PTR_FUN_00d60150 != (undefined *)0x0)) {
                  uVar1 = (*puVar18 & 0xff00ff00) >> 8 | (*puVar18 & 0xff00ff) << 8;
                  local_98 = CONCAT44(1,uVar1 >> 0x10 | uVar1 << 0x10);
                  local_a0 = param_1;
                  (*(code *)PTR_FUN_00d60150)(&local_a0);
                }
                if (((puVar17 != (ushort *)0x0) && (plVar20[1] != 0)) &&
                   (uVar19 = FUN_00c49874(puVar18,puVar17,plVar20), (int)uVar19 != 0))
                goto LAB_00c4a064;
                if ((puVar16 != (ushort *)0x0) &&
                   (iVar8 = FUN_00c4d288(*plVar20,puVar16,&local_b4), iVar8 != 0))
                goto LAB_00c4a2ac;
                if (puVar18[0x15] != 2) {
                  if (puVar18[0x15] == 0) {
                    puVar18[0x15] = 2;
                  }
                  else if (PTR_FUN_00d60150 != (undefined *)0x0) {
                    uVar1 = (*puVar18 & 0xff00ff00) >> 8 | (*puVar18 & 0xff00ff) << 8;
                    local_98 = (ulong)(uVar1 >> 0x10 | uVar1 << 0x10);
                    local_a0 = param_1;
                    (*(code *)PTR_FUN_00d60150)(&local_a0);
                  }
                }
                if (puVar18 == *(uint **)(param_1 + 2)) {
                  local_a0 = (uint *)&DAT_aaaaaaaaaaaaaaaa;
                  uVar19 = FUN_00c4957c(*(uint **)(param_1 + 2),*(undefined4 *)(param_2 + 4),
                                        &local_a0);
                  if ((int)uVar19 != 0) goto LAB_00c4a064;
                  lVar12 = *(long *)param_1;
                  lVar14 = *(long *)(lVar12 + 0x70);
                  *(long *)(local_a0 + 0x1c) = lVar14;
                  if (lVar14 != 0) {
                    *(uint **)(lVar14 + 0x78) = local_a0;
                  }
                  *(uint **)(lVar12 + 0x70) = local_a0;
                  *(long *)(local_a0 + 0x1e) = lVar12;
                  puVar18 = local_a0;
                }
                if (!bVar3) {
                  FUN_00c4fee8(puVar18 + 6,local_e8,puVar13);
                  puVar11 = (undefined1 *)0x0;
                  puVar18[0x1b] = 0;
                }
                FUN_00c4fde4(puVar18 + 6,(ulong)puVar11 & 0xffffffff);
                uVar5 = (*param_3 - uVar7) - uVar5;
LAB_00c4a738:
                puVar21 = (undefined1 *)0x0;
                *param_3 = uVar5;
                goto LAB_00c49e8c;
              }
            }
LAB_00c4a2ac:
            puVar21 = (undefined1 *)0x8;
            goto LAB_00c49e8c;
          }
          uVar5 = *param_3;
          if ((*(uint *)(**(long **)(puVar18 + 2) + 0x14) & 0xfffffffe) == 6) {
            uVar7 = 0;
LAB_00c4a1d0:
            uVar19 = (ulong)puVar18[4];
            if (puVar18[4] != 0) {
              plVar20 = *(long **)(puVar18 + 2);
              uVar5 = uVar5 - uVar7;
              puVar21 = (undefined1 *)0x19;
              do {
                uVar7 = *(uint *)(plVar20 + 9);
                if ((uVar7 - 1 < uVar5) &&
                   (iVar8 = memcmp((void *)((long)param_2 + (ulong)(uVar5 - uVar7)),
                                   (void *)plVar20[8],(ulong)uVar7), iVar8 == 0)) {
                  if (plVar20 == (long *)0x0) goto LAB_00c4a234;
                  goto LAB_00c4a0d0;
                }
                uVar19 = uVar19 - 1;
                plVar20 = plVar20 + 0xb;
              } while (uVar19 != 0);
              goto LAB_00c49e8c;
            }
          }
          else {
            uVar7 = FUN_00c4e984((*(long **)(puVar18 + 2))[2]);
            if (uVar7 <= uVar5) goto LAB_00c4a1d0;
          }
LAB_00c4a234:
          puVar21 = (undefined1 *)0x19;
          goto LAB_00c49e8c;
        }
      }
      else {
        uVar5 = iVar8 + 0x10;
        if (uVar5 <= uVar7) {
          puVar21 = (undefined1 *)0x2;
          if (((int)uVar7 < 0xc) ||
             (uVar7 < uVar5 + ((uint)(param_2[uVar19 * 2 + 7] >> 8) |
                              (param_2[uVar19 * 2 + 7] & 0xff00ff) << 8) * 4)) goto LAB_00c49e8c;
          goto LAB_00c49f10;
        }
      }
    }
  }
  puVar21 = (undefined1 *)0x2;
LAB_00c49e8c:
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return puVar21;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00c4a848  FUN_00c4a848 =====

void FUN_00c4a848(void)

{
  int iVar1;
  
  iVar1 = FUN_00c4e0a4();
  if (iVar1 != 0) {
    return;
  }
  FUN_00c4e474(&DAT_00d60140);
  return;
}


// ===== 00c4a87c  thunk_FUN_00c4e690 =====

void thunk_FUN_00c4e690(void)

{
  FUN_00c4e690();
  return;
}


// ===== 00c4a884  FUN_00c4a884 =====

undefined8 FUN_00c4a884(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = param_1[1];
  lVar3 = *(long *)(*param_1 + 0x70);
  if (*(long *)(*param_1 + 0x70) == 0) {
LAB_00c4a8e8:
    if ((lVar4 == 0) || (uVar2 = FUN_00c4a99c(lVar4,0), (int)uVar2 == 0)) {
      if (*(long *)(*param_1 + 0x70) == 0) {
        FUN_00c4c7fc();
        FUN_00c4c7fc(param_1);
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
  }
  else {
    do {
      lVar1 = *(long *)(lVar3 + 0x70);
      *(long *)(*(long *)(lVar3 + 0x78) + 0x70) = lVar1;
      if (lVar1 == 0) {
        uVar2 = FUN_00c4a99c(lVar3,lVar4);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        lVar4 = param_1[1];
        goto LAB_00c4a8e8;
      }
      *(undefined8 *)(lVar1 + 0x78) = *(undefined8 *)(lVar3 + 0x78);
      uVar2 = FUN_00c4a99c(lVar3,lVar4);
      lVar3 = lVar1;
    } while ((int)uVar2 == 0);
  }
  return uVar2;
}


// ===== 00c4a934  FUN_00c4a934 =====

void FUN_00c4a934(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x70);
  if (lVar3 != 0) {
    do {
      lVar1 = *(long *)(lVar3 + 0x70);
      *(long *)(*(long *)(lVar3 + 0x78) + 0x70) = lVar1;
      if (lVar1 == 0) {
        FUN_00c4a99c(lVar3,param_2);
        return;
      }
      *(undefined8 *)(lVar1 + 0x78) = *(undefined8 *)(lVar3 + 0x78);
      iVar2 = FUN_00c4a99c(lVar3,param_2);
      lVar3 = lVar1;
    } while (iVar2 == 0);
  }
  return;
}


// ===== 00c4a99c  FUN_00c4a99c =====

undefined8 FUN_00c4a99c(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 != 0) {
    uVar6 = (ulong)*(uint *)(param_1 + 0x10);
    if (*(uint *)(param_1 + 0x10) != 0) {
      uVar7 = 0;
      lVar2 = 0x50;
      do {
        lVar8 = *(long *)(param_1 + 8);
        if (((param_2 == 0) || ((int)uVar6 != *(int *)(param_2 + 0x10))) ||
           (plVar9 = (long *)(*(long *)(param_2 + 8) + lVar2 + -0x50), plVar9 == (long *)0x0)) {
          lVar3 = *(long *)(lVar8 + lVar2 + -0x50);
          plVar9 = (long *)0x0;
          bVar1 = true;
joined_r0x00c4aa40:
          if ((lVar3 != 0) && (uVar5 = FUN_00c4d1a0(), (int)uVar5 != 0)) {
            return uVar5;
          }
          if (!bVar1) goto LAB_00c4aa64;
          bVar1 = true;
          plVar4 = *(long **)(lVar8 + lVar2 + -0x40);
joined_r0x00c4aa5c:
          if ((plVar4 != (long *)0x0) && (uVar5 = (**(code **)(*plVar4 + 8))(), (int)uVar5 != 0)) {
            return uVar5;
          }
          if (!bVar1) goto LAB_00c4aaa8;
          bVar1 = true;
          lVar3 = *(long *)(lVar8 + lVar2 + -0x48);
joined_r0x00c4aaa0:
          if ((lVar3 != 0) && (uVar5 = FUN_00c4d1a0(), (int)uVar5 != 0)) {
            return uVar5;
          }
          if (!bVar1) goto LAB_00c4aae4;
          bVar1 = true;
          lVar3 = *(long *)(lVar8 + lVar2 + -0x38);
joined_r0x00c4aadc:
          if ((lVar3 != 0) && (uVar5 = FUN_00c4d1a0(), (int)uVar5 != 0)) {
            return uVar5;
          }
          if (!bVar1) goto LAB_00c4ab1c;
          bVar1 = true;
          plVar4 = *(long **)(lVar8 + lVar2 + -0x30);
LAB_00c4ab34:
          if ((plVar4 != (long *)0x0) && (uVar5 = (**(code **)(*plVar4 + 8))(), (int)uVar5 != 0)) {
            return uVar5;
          }
        }
        else {
          lVar3 = *(long *)(lVar8 + lVar2 + -0x50);
          if (lVar3 != *plVar9) {
            bVar1 = false;
            goto joined_r0x00c4aa40;
          }
LAB_00c4aa64:
          plVar4 = *(long **)(lVar8 + lVar2 + -0x40);
          if (plVar4 != (long *)plVar9[2]) {
            bVar1 = false;
            goto joined_r0x00c4aa5c;
          }
LAB_00c4aaa8:
          lVar3 = *(long *)(lVar8 + lVar2 + -0x48);
          if (lVar3 != plVar9[1]) {
            bVar1 = false;
            goto joined_r0x00c4aaa0;
          }
LAB_00c4aae4:
          lVar3 = *(long *)(lVar8 + lVar2 + -0x38);
          if (lVar3 != plVar9[3]) {
            bVar1 = false;
            goto joined_r0x00c4aadc;
          }
LAB_00c4ab1c:
          bVar1 = false;
          plVar4 = *(long **)(lVar8 + lVar2 + -0x30);
          if (plVar4 != (long *)plVar9[4]) goto LAB_00c4ab34;
        }
        lVar3 = lVar8 + lVar2;
        thunk_FUN_0078cba8(lVar3 + -0x28,0xc);
        thunk_FUN_0078cba8(lVar3 + -0x1c,0xc);
        if (*(long *)(lVar3 + -0x10) != 0) {
          thunk_FUN_0078cba8(*(long *)(lVar3 + -0x10),*(undefined4 *)(lVar3 + -8));
          FUN_00c4c7fc(*(undefined8 *)(lVar3 + -0x10));
          *(undefined8 *)(lVar3 + -0x10) = 0;
        }
        if (((bVar1) || (*(long *)(lVar8 + lVar2) != plVar9[10])) && (*(long *)(lVar8 + lVar2) != 0)
           ) {
          FUN_00c4c7fc();
        }
        uVar6 = (ulong)*(uint *)(param_1 + 0x10);
        uVar7 = uVar7 + 1;
        lVar2 = lVar2 + 0x58;
      } while (uVar7 < uVar6);
      lVar2 = *(long *)(param_1 + 8);
    }
    FUN_00c4c7fc(lVar2);
  }
  uVar5 = FUN_00c4fd68(param_1 + 0x18);
  if ((int)uVar5 == 0) {
    if (((param_2 == 0) || (*(long *)(param_1 + 0x60) != *(long *)(param_2 + 0x60))) &&
       (*(long *)(param_1 + 0x60) != 0)) {
      FUN_00c4c7fc();
    }
    FUN_00c4c7fc(param_1);
    uVar5 = 0;
  }
  return uVar5;
}


// ===== 00c4abf8  FUN_00c4abf8 =====

int FUN_00c4abf8(long *param_1,int *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined1 *local_38;
  
  if (param_2 == (int *)0x0) {
LAB_00c4acf0:
    iVar2 = 2;
  }
  else {
    if (param_1 == (long *)0x0) {
      return 2;
    }
    if (*(long *)(param_2 + 0x14) != 0) {
      return 2;
    }
    if (*(long *)(param_2 + 0xe) == 0) {
      lVar4 = *(long *)(param_2 + 0x12);
      if (lVar4 - 0x11U < 0xfffffffffffffff0) {
        return 2;
      }
      plVar5 = *(long **)(param_2 + 0x10);
      do {
        if ((*(long *)*plVar5 == 0) || (0x80 < *(uint *)((long *)*plVar5 + 2))) goto LAB_00c4acf0;
        lVar4 = lVar4 + -1;
        plVar5 = plVar5 + 1;
      } while (lVar4 != 0);
    }
    local_38 = &DAT_aaaaaaaaaaaaaaaa;
    iVar2 = FUN_00c4ad48(&local_38,param_2);
    puVar1 = local_38;
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_00c4afa4(local_38,param_2);
    if (iVar2 != 0) {
      FUN_00c4a99c(puVar1,0);
      return iVar2;
    }
    iVar2 = *param_2;
    if (iVar2 == 1) {
      lVar4 = *param_1;
      lVar6 = *(long *)(lVar4 + 0x70);
      *(long *)(puVar1 + 0x70) = lVar6;
      if (lVar6 != 0) {
        *(undefined1 **)(lVar6 + 0x78) = puVar1;
      }
      *(undefined1 **)(lVar4 + 0x70) = puVar1;
      *(long *)(puVar1 + 0x78) = lVar4;
      return 0;
    }
    if (iVar2 == 2) {
      if (param_1[1] != 0) goto LAB_00c4ace4;
      uVar3 = 2;
    }
    else {
      if ((iVar2 != 3) || (param_1[1] != 0)) {
LAB_00c4ace4:
        FUN_00c4a99c(puVar1,0);
        goto LAB_00c4acf0;
      }
      uVar3 = 1;
    }
    iVar2 = 0;
    param_1[1] = (long)puVar1;
    *(undefined4 *)(puVar1 + 0x54) = uVar3;
  }
  return iVar2;
}


// ===== 00c4ad48  FUN_00c4ad48 =====

int FUN_00c4ad48(long *param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  void *__dest;
  ulong uVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  
  if (*(long *)(param_2 + 0x50) != 0) {
    return 2;
  }
  lVar3 = FUN_00c4c76c(0x80);
  if (lVar3 == 0) {
    return 3;
  }
  *param_1 = lVar3;
  if (*(long *)(param_2 + 0x38) == 0) {
    uVar6 = (ulong)*(uint *)(param_2 + 0x48);
  }
  else {
    uVar6 = 1;
  }
  *(int *)(lVar3 + 0x10) = (int)uVar6;
  lVar4 = FUN_00c4c76c(uVar6 * 0x58);
  *(long *)(lVar3 + 8) = lVar4;
  if (lVar4 != 0) {
    if (*(int *)(lVar3 + 0x10) == 0) {
      bVar1 = true;
    }
    else {
      lVar4 = 0;
      uVar6 = 0;
      do {
        lVar9 = *(long *)(lVar3 + 8);
        iVar2 = FUN_00c4e8b0(*(undefined4 *)(param_2 + 8),lVar9 + lVar4,
                             *(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x18));
        if ((iVar2 != 0) ||
           (iVar2 = FUN_00c4e914(*(undefined4 *)(param_2 + 0x10),lVar9 + lVar4 + 0x10,
                                 *(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x18)),
           iVar2 != 0)) goto LAB_00c4ae88;
        iVar2 = FUN_00c4e8b0(*(undefined4 *)(param_2 + 0x20),lVar9 + lVar4 + 0x18,
                             *(undefined4 *)(param_2 + 0x24),*(undefined4 *)(param_2 + 0x30));
        if ((iVar2 != 0) ||
           (iVar2 = FUN_00c4e914(*(undefined4 *)(param_2 + 0x28),lVar9 + lVar4 + 0x20,
                                 *(undefined4 *)(param_2 + 0x2c),*(undefined4 *)(param_2 + 0x30)),
           iVar2 != 0)) goto LAB_00c4ae88;
        *(undefined8 *)(lVar9 + lVar4 + 0x40) = 0;
        lVar5 = FUN_00c4c76c(0x10);
        *(long *)(lVar9 + lVar4 + 0x50) = lVar5;
        if (lVar5 == 0) goto LAB_00c4aef8;
        uVar6 = uVar6 + 1;
        lVar4 = lVar4 + 0x58;
      } while (uVar6 < *(uint *)(lVar3 + 0x10));
      bVar1 = *(uint *)(lVar3 + 0x10) == 0;
    }
    if ((*(long *)(param_2 + 0x68) == 0) || ((int)*(uint *)(param_2 + 0x70) < 1)) {
      if (!bVar1) {
        uVar6 = 0;
        lVar4 = 8;
        do {
          uVar6 = uVar6 + 1;
          *(undefined8 *)(*(long *)(lVar3 + 8) + lVar4) = 0;
          lVar4 = lVar4 + 0x58;
        } while (uVar6 < *(uint *)(lVar3 + 0x10));
      }
      *(undefined8 *)(lVar3 + 0x60) = 0;
      *(undefined4 *)(lVar3 + 0x68) = 0;
      return 0;
    }
    __dest = (void *)FUN_00c4c76c((ulong)*(uint *)(param_2 + 0x70) << 2);
    *(void **)(lVar3 + 0x60) = __dest;
    if (__dest != (void *)0x0) {
      memcpy(__dest,*(void **)(param_2 + 0x68),(long)*(int *)(param_2 + 0x70) << 2);
      *(undefined4 *)(lVar3 + 0x68) = *(undefined4 *)(param_2 + 0x70);
      iVar8 = *(int *)(param_2 + 8);
      if (iVar8 == 6) {
        uVar7 = 0x1e;
        iVar8 = 1;
      }
      else if (iVar8 == 7) {
        uVar7 = 0x2e;
        iVar8 = 5;
      }
      else {
        uVar7 = *(undefined4 *)(param_2 + 0xc);
      }
      if (*(int *)(lVar3 + 0x10) == 0) {
        return 0;
      }
      uVar6 = 0;
      lVar4 = 8;
      while (iVar2 = FUN_00c4e8b0(iVar8,*(long *)(lVar3 + 8) + lVar4,uVar7,0), iVar2 == 0) {
        uVar6 = uVar6 + 1;
        lVar4 = lVar4 + 0x58;
        if (*(uint *)(lVar3 + 0x10) <= uVar6) {
          return 0;
        }
      }
LAB_00c4ae88:
      FUN_00c4a99c(lVar3,0);
      return iVar2;
    }
  }
LAB_00c4aef8:
  FUN_00c4a99c(lVar3,0);
  return 3;
}


// ===== 00c4afa4  FUN_00c4afa4 =====

int FUN_00c4afa4(uint *param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long local_48 [3];
  
  if (*(long *)(param_2 + 0x50) == 0) {
    if (DAT_00d60140 != 0) {
      FUN_00c4c870(3,"%s: initializing stream (SSRC: 0x%08x)\n",PTR_DAT_00d60148,
                   *(undefined4 *)(param_2 + 4));
    }
    lVar4 = *(long *)(param_2 + 0x58);
    if (lVar4 == 0) {
      lVar4 = 0x80;
    }
    else if (lVar4 - 0x8000U < 0xffffffffffff8040) goto LAB_00c4afc4;
    iVar3 = FUN_00c4fd1c(param_1 + 6,lVar4);
    if (iVar3 == 0) {
      uVar5 = *(uint *)(param_2 + 4);
      param_1[0x1b] = 0;
      uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      *param_1 = uVar5 >> 0x10 | uVar5 << 0x10;
      param_1[0xc] = *(uint *)(param_2 + 0x1c);
      param_1[0x14] = *(uint *)(param_2 + 0x34);
      param_1[0x15] = 0;
      FUN_00c4ff30(param_1 + 0xe);
      if (*(uint *)(param_2 + 0x60) < 2) {
        param_1[0x16] = *(uint *)(param_2 + 0x60);
        lVar4 = *(long *)(param_2 + 0x38);
        lVar2 = *(long *)(param_2 + 0x40);
        local_48[2] = 0xaaaaaaaa00000000;
        if (lVar4 == 0) {
          uVar5 = (uint)*(undefined8 *)(param_2 + 0x48);
          param_1[4] = uVar5;
          if (uVar5 != 0) {
            uVar6 = 0;
            do {
              iVar3 = FUN_00c48194(param_1,*(undefined8 *)(lVar2 + uVar6 * 8),uVar6 & 0xffffffff);
              if (iVar3 != 0) goto LAB_00c4b114;
            } while ((uVar6 + 1 < (ulong)param_1[4]) &&
                    (bVar1 = uVar6 < 0xf, uVar6 = uVar6 + 1, bVar1));
          }
          iVar3 = 0;
        }
        else {
          param_1[4] = 1;
          local_48[1] = 0;
          local_48[0] = lVar4;
          iVar3 = FUN_00c48194(param_1,local_48,0);
          if (iVar3 != 0) {
LAB_00c4b114:
            FUN_00c4fd68(param_1 + 6);
          }
        }
      }
      else {
        FUN_00c4fd68(param_1 + 6);
        iVar3 = 2;
      }
    }
  }
  else {
LAB_00c4afc4:
    iVar3 = 2;
  }
  return iVar3;
}


// ===== 00c4b120  FUN_00c4b120 =====

int FUN_00c4b120(undefined8 *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if (param_2 == 0) {
    if (param_1 == (undefined8 *)0x0) {
      return 2;
    }
  }
  else {
    if (param_1 == (undefined8 *)0x0) {
      return 2;
    }
    if (*(long *)(param_2 + 0x50) != 0) {
      return 2;
    }
  }
  plVar2 = (long *)FUN_00c4c76c(0x18);
  if (plVar2 == (long *)0x0) {
    iVar1 = 3;
  }
  else {
    *param_1 = plVar2;
    *plVar2 = 0;
    plVar2[1] = 0;
    plVar2[2] = 0;
    lVar3 = FUN_00c4c76c(0x80);
    if (lVar3 == 0) {
      iVar1 = 3;
LAB_00c4b1c8:
      FUN_00c4a884(*param_1);
      *param_1 = 0;
    }
    else {
      *(undefined8 *)(lVar3 + 0x70) = 0;
      *(undefined8 *)(lVar3 + 0x78) = 0;
      *plVar2 = lVar3;
      if (param_2 != 0) {
        do {
          iVar1 = FUN_00c4abf8(plVar2,param_2);
          if (iVar1 != 0) goto LAB_00c4b1c8;
          param_2 = *(long *)(param_2 + 0x78);
        } while (param_2 != 0);
      }
      iVar1 = 0;
    }
  }
  return iVar1;
}


// ===== 00c4b1ec  FUN_00c4b1ec =====

undefined8 FUN_00c4b1ec(undefined8 *param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  int *piVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    return 2;
  }
  piVar3 = (int *)*param_1;
  do {
    piVar3 = *(int **)(piVar3 + 0x1c);
    if (piVar3 == (int *)0x0) {
      return 0xd;
    }
  } while (*piVar3 != param_2);
  lVar1 = *(long *)(piVar3 + 0x1c);
  *(long *)(*(long *)(piVar3 + 0x1e) + 0x70) = lVar1;
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x78) = *(undefined8 *)(piVar3 + 0x1e);
  }
  uVar2 = FUN_00c4a99c(piVar3,param_1[1]);
  return uVar2;
}


// ===== 00c4b23c  FUN_00c4b23c =====

undefined8 FUN_00c4b23c(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  if (param_2 == 0) {
    return 2;
  }
  uVar1 = 2;
  if ((param_1 != 0) && (*(long *)(param_2 + 0x50) == 0)) {
    if (*(long *)(param_2 + 0x38) == 0) {
      lVar2 = *(long *)(param_2 + 0x48);
      if (lVar2 - 0x11U < 0xfffffffffffffff0) {
        return 2;
      }
      plVar3 = *(long **)(param_2 + 0x40);
      do {
        if ((*(long *)*plVar3 == 0) || (0x80 < *(uint *)((long *)*plVar3 + 2))) {
          return 2;
        }
        lVar2 = lVar2 + -1;
        plVar3 = plVar3 + 1;
      } while (lVar2 != 0);
    }
    do {
      uVar1 = FUN_00c4b2e8(param_1,param_2);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      param_2 = *(long *)(param_2 + 0x78);
    } while (param_2 != 0);
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 00c4b2e8  FUN_00c4b2e8 =====

int FUN_00c4b2e8(long *param_1,int *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  uint *puVar13;
  undefined8 uVar14;
  long *plVar15;
  int *piVar16;
  uint uVar17;
  int iVar18;
  undefined1 *local_70;
  int *local_68;
  
  if (param_2 != (int *)0x0) {
    if (param_1 == (long *)0x0) {
      return 2;
    }
    if (*(long *)(param_2 + 0x14) != 0) {
      return 2;
    }
    if (*(long *)(param_2 + 0xe) == 0) {
      lVar10 = *(long *)(param_2 + 0x12);
      if (lVar10 - 0x11U < 0xfffffffffffffff0) {
        return 2;
      }
      plVar15 = *(long **)(param_2 + 0x10);
      do {
        if (*(long *)*plVar15 == 0) {
          return 2;
        }
        if (0x80 < *(uint *)((long *)*plVar15 + 2)) {
          return 2;
        }
        lVar10 = lVar10 + -1;
        plVar15 = plVar15 + 1;
      } while (lVar10 != 0);
    }
    if (*param_2 - 2U < 2) {
      if (param_1[1] != 0) {
        local_70 = &DAT_aaaaaaaaaaaaaaaa;
        iVar7 = FUN_00c4ad48(&local_70,param_2);
        puVar6 = local_70;
        if (iVar7 != 0) {
          return iVar7;
        }
        iVar7 = FUN_00c4afa4(local_70,param_2);
        if (iVar7 != 0) {
          FUN_00c4c7fc(puVar6);
          return iVar7;
        }
        lVar10 = FUN_00c4c76c(0x80);
        if (lVar10 == 0) {
          FUN_00c4c7fc(puVar6);
          return 3;
        }
        plVar15 = (long *)(lVar10 + 0x70);
        *plVar15 = 0;
        *(undefined8 *)(lVar10 + 0x78) = 0;
        lVar11 = *param_1;
        piVar16 = *(int **)(lVar11 + 0x70);
        if (*(int **)(lVar11 + 0x70) != (int *)0x0) {
          do {
            while (local_68 = piVar16, piVar16 = *(int **)(local_68 + 0x1c),
                  *(long *)(*(long *)(local_68 + 2) + 0x10) ==
                  *(long *)(*(long *)(param_1[1] + 8) + 0x10)) {
              iVar18 = local_68[0xf];
              uVar1 = *(undefined8 *)(local_68 + 0x10);
              uVar2 = *(undefined8 *)(local_68 + 0x12);
              iVar7 = *local_68;
              uVar14 = *(undefined8 *)(local_68 + 6);
              iVar4 = local_68[0xe];
              piVar12 = (int *)*param_1;
              do {
                piVar12 = *(int **)(piVar12 + 0x1c);
                if (piVar12 == (int *)0x0) {
                  iVar8 = 0xd;
                  goto LAB_00c4b5f8;
                }
              } while (*piVar12 != iVar7);
              lVar11 = *(long *)(piVar12 + 0x1c);
              *(long *)(*(long *)(piVar12 + 0x1e) + 0x70) = lVar11;
              if (lVar11 != 0) {
                *(undefined8 *)(lVar11 + 0x78) = *(undefined8 *)(piVar12 + 0x1e);
              }
              iVar8 = FUN_00c4a99c(piVar12,param_1[1]);
              if ((iVar8 != 0) || (iVar8 = FUN_00c4957c(puVar6,iVar7,&local_68), iVar8 != 0)) {
LAB_00c4b5f8:
                FUN_00c4a934(lVar10,puVar6);
                if (*(long *)(lVar10 + 0x70) == 0) {
                  FUN_00c4c7fc(lVar10);
                }
                FUN_00c4a99c(puVar6,0);
                return iVar8;
              }
              lVar11 = *plVar15;
              *(long *)(local_68 + 0x1c) = lVar11;
              if (lVar11 != 0) {
                *(int **)(lVar11 + 0x78) = local_68;
              }
              *(int **)(lVar10 + 0x70) = local_68;
              *(long *)(local_68 + 0x1e) = lVar10;
              *(undefined8 *)(local_68 + 6) = uVar14;
              local_68[0xe] = iVar4;
              local_68[0xf] = iVar18;
              *(undefined8 *)(local_68 + 0x10) = uVar1;
              *(undefined8 *)(local_68 + 0x12) = uVar2;
              if (piVar16 == (int *)0x0) goto LAB_00c4b5b0;
            }
            *(int **)(*(long *)(local_68 + 0x1e) + 0x70) = piVar16;
            if (piVar16 != (int *)0x0) {
              *(undefined8 *)(piVar16 + 0x1e) = *(undefined8 *)(local_68 + 0x1e);
            }
            lVar11 = *plVar15;
            *(long *)(local_68 + 0x1c) = lVar11;
            if (lVar11 != 0) {
              *(int **)(lVar11 + 0x78) = local_68;
            }
            *(int **)(lVar10 + 0x70) = local_68;
            *(long *)(local_68 + 0x1e) = lVar10;
          } while (piVar16 != (int *)0x0);
LAB_00c4b5b0:
          lVar11 = *param_1;
        }
        FUN_00c4a934(lVar11,param_1[1]);
        if (*(long *)(*param_1 + 0x70) == 0) {
          FUN_00c4c7fc();
        }
        FUN_00c4a99c(param_1[1],0);
        *param_1 = lVar10;
        param_1[1] = (long)puVar6;
        return 0;
      }
    }
    else if (*param_2 == 1) {
      puVar9 = (uint *)*param_1;
      uVar5 = (param_2[1] & 0xff00ff00U) >> 8 | (param_2[1] & 0xff00ffU) << 8;
      uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
      puVar13 = puVar9;
      while (puVar13 = *(uint **)(puVar13 + 0x1c), puVar13 != (uint *)0x0) {
        if (*puVar13 == uVar5) {
          uVar17 = puVar13[0xf];
          uVar1 = *(undefined8 *)(puVar13 + 0x10);
          uVar2 = *(undefined8 *)(puVar13 + 0x12);
          uVar14 = *(undefined8 *)(puVar13 + 6);
          uVar3 = puVar13[0xe];
          do {
            puVar9 = *(uint **)(puVar9 + 0x1c);
            if (puVar9 == (uint *)0x0) {
              return 0xd;
            }
          } while (*puVar9 != uVar5);
          lVar10 = *(long *)(puVar9 + 0x1c);
          *(long *)(*(long *)(puVar9 + 0x1e) + 0x70) = lVar10;
          if (lVar10 != 0) {
            *(undefined8 *)(lVar10 + 0x78) = *(undefined8 *)(puVar9 + 0x1e);
          }
          iVar7 = FUN_00c4a99c(puVar9,param_1[1]);
          if (iVar7 == 0) {
            iVar7 = FUN_00c4abf8(param_1,param_2);
            if (iVar7 != 0) {
              return iVar7;
            }
            puVar13 = (uint *)*param_1;
            uVar5 = (param_2[1] & 0xff00ff00U) >> 8 | (param_2[1] & 0xff00ffU) << 8;
            do {
              puVar13 = *(uint **)(puVar13 + 0x1c);
              if (puVar13 == (uint *)0x0) {
                return 1;
              }
            } while (*puVar13 != (uVar5 >> 0x10 | uVar5 << 0x10));
            *(undefined8 *)(puVar13 + 6) = uVar14;
            puVar13[0xe] = uVar3;
            *(undefined8 *)(puVar13 + 0x10) = uVar1;
            *(undefined8 *)(puVar13 + 0x12) = uVar2;
            puVar13[0xf] = uVar17;
            return 0;
          }
          return iVar7;
        }
      }
    }
  }
  return 2;
}


// ===== 00c4b674  FUN_00c4b674 =====

void FUN_00c4b674(void)

{
  FUN_00c4b684();
  return;
}


// ===== 00c4b684  FUN_00c4b684 =====

int FUN_00c4b684(uint *param_1,long param_2,uint *param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  uint *puVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  ulong local_a0;
  long local_98;
  undefined4 local_90;
  uint local_8c;
  undefined4 local_88;
  uint local_84;
  uint *local_80;
  undefined1 *puStack_78;
  uint local_68;
  uint local_64;
  
  local_8c = 0;
  if ((int)*param_3 < 8) {
    return 2;
  }
  puVar12 = *(uint **)param_1;
  uVar11 = (ulong)param_4;
  local_90 = 0xaaaaaaaa;
  do {
    puVar12 = *(uint **)(puVar12 + 0x1c);
    if (puVar12 == (uint *)0x0) {
      if (*(long *)(param_1 + 2) == 0) {
        return 0xd;
      }
      local_80 = (uint *)&DAT_aaaaaaaaaaaaaaaa;
      iVar4 = FUN_00c4957c(*(long *)(param_1 + 2),*(uint *)(param_2 + 4),&local_80);
      if (iVar4 != 0) {
        return iVar4;
      }
      lVar13 = *(long *)param_1;
      lVar9 = *(long *)(lVar13 + 0x70);
      *(long *)(local_80 + 0x1c) = lVar9;
      if (lVar9 != 0) {
        *(uint **)(lVar9 + 0x78) = local_80;
      }
      *(uint **)(lVar13 + 0x70) = local_80;
      *(long *)(local_80 + 0x1e) = lVar13;
      puVar12 = local_80;
      break;
    }
  } while (*puVar12 != *(uint *)(param_2 + 4));
  if (puVar12[0x15] != 1) {
    if (puVar12[0x15] == 0) {
      puVar12[0x15] = 1;
    }
    else if (PTR_FUN_00d60150 != (undefined *)0x0) {
      uVar14 = (*puVar12 & 0xff00ff00) >> 8 | (*puVar12 & 0xff00ff) << 8;
      puStack_78 = (undefined1 *)(ulong)(uVar14 >> 0x10 | uVar14 << 0x10);
      local_80 = param_1;
      (*(code *)PTR_FUN_00d60150)(&local_80);
    }
  }
  if (param_4 == 0) {
    plVar10 = *(long **)(puVar12 + 2);
  }
  else {
    if (puVar12[4] <= param_5) {
      return 0x19;
    }
    plVar10 = (long *)(*(long *)(puVar12 + 2) + (ulong)param_5 * 0x58);
  }
  if (plVar10 == (long *)0x0) {
    return 0x19;
  }
  if ((*(uint *)(*plVar10 + 0x14) & 0xfffffffe) != 6) {
    iVar4 = FUN_00c4e984(plVar10[4]);
    uVar14 = puVar12[0x14];
    lVar13 = (long)(int)*param_3;
    uVar1 = *param_3 - 8;
    local_8c = -(uVar14 & 1) & uVar1;
    if ((param_4 != 0) && (uVar11 = (ulong)*(uint *)(plVar10 + 9), *(uint *)(plVar10 + 9) != 0)) {
      memcpy((void *)(param_2 + lVar13 + 4),(void *)plVar10[8],uVar11);
      lVar13 = (long)(int)*param_3;
    }
    iVar5 = FUN_00c50024(puVar12 + 0xe);
    if (iVar5 != 0) {
      return iVar5;
    }
    uVar14 = uVar14 & 1;
    uVar7 = FUN_00c50054(puVar12 + 0xe);
    uVar6 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
    uVar2 = uVar6 >> 0x10 | uVar6 << 0x10;
    if (DAT_00d60140 != 0) {
      FUN_00c4c870(3,"%s: srtcp index: %x\n",PTR_DAT_00d60148,uVar7);
    }
    *(uint *)(param_2 + 8 + (ulong)uVar1) = uVar2 | uVar14 << 7;
    uVar1 = *(uint *)(*(long *)plVar10[3] + 0x50);
    if ((uVar1 < 6) && ((0x32U >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
      local_80 = (uint *)((ulong)*(uint *)(param_2 + 4) << 0x20);
      puStack_78 = (undefined1 *)(CONCAT44(uVar6,(uVar6 >> 0x10) << 0x10) & 0xffffffffffff);
    }
    else {
      local_80 = (uint *)0x0;
      puStack_78 = (undefined1 *)((ulong)uVar2 << 0x20);
    }
    iVar5 = FUN_00c4d1e8((long *)plVar10[3],&local_80,0);
    if (iVar5 == 0) {
      lVar13 = param_2 + lVar13 + uVar11;
      if (param_2 != 0) {
        local_90 = FUN_00c4e990(plVar10[4]);
        iVar5 = FUN_00c4d210(plVar10[3],lVar13 + 4,&local_90);
        puVar3 = PTR_DAT_00d60148;
        if (DAT_00d60140 != 0) {
          uVar8 = FUN_00c4c9cc(lVar13 + 4,local_90);
          FUN_00c4c870(3,"%s: keystream prefix: %s\n",puVar3,uVar8);
        }
        if (iVar5 != 0) {
          return 8;
        }
      }
      if (((param_2 != -8) && (uVar14 != 0)) &&
         (iVar5 = FUN_00c4d260(plVar10[3],param_2 + 8,&local_8c), iVar5 != 0)) {
        return 8;
      }
      iVar5 = (**(code **)(*(long *)plVar10[4] + 0x28))(((long *)plVar10[4])[1]);
      if (iVar5 != 0) {
        return iVar5;
      }
      plVar10 = (long *)plVar10[4];
      iVar5 = (**(code **)(*plVar10 + 0x18))
                        (plVar10[1],param_2,*param_3 + 4,(int)plVar10[2],lVar13 + 4);
      puVar3 = PTR_DAT_00d60148;
      if (DAT_00d60140 != 0) {
        uVar8 = FUN_00c4c9cc(lVar13 + 4,iVar4);
        FUN_00c4c870(3,"%s: srtcp auth tag:    %s\n",puVar3,uVar8);
      }
      if (iVar5 != 0) {
        return 7;
      }
      *param_3 = iVar4 + (int)uVar11 + *param_3 + 4;
      return 0;
    }
    return 8;
  }
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = (uint *)&DAT_aaaaaaaaaaaaaaaa;
  local_68 = FUN_00c4e984(plVar10[4]);
  local_a0 = (ulong)*param_3;
  uVar15 = (ulong)local_68;
  local_64 = *param_3 - 8;
  uVar11 = (ulong)local_64;
  if ((puVar12[0x14] & 1) == 0) {
    uVar14 = 0;
    local_98 = 0;
    local_64 = 0;
  }
  else {
    local_98 = param_2 + 8;
    uVar14 = 0x80;
  }
  if (param_4 != 0) {
    uVar1 = *(uint *)(plVar10 + 9);
    if (uVar1 != 0) {
      memcpy((void *)(param_2 + local_a0 + uVar15 + 4),(void *)plVar10[8],(ulong)uVar1);
      local_a0 = (ulong)*param_3;
      iVar4 = uVar1 + 4;
      goto LAB_00c4b8b4;
    }
  }
  iVar4 = 4;
LAB_00c4b8b4:
  iVar5 = FUN_00c50024(puVar12 + 0xe);
  if (iVar5 != 0) {
    return iVar5;
  }
  uVar6 = FUN_00c50054(puVar12 + 0xe);
  uVar1 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
  uVar14 = uVar1 >> 0x10 | uVar1 << 0x10 | uVar14;
  if (DAT_00d60140 != 0) {
    FUN_00c4c870(3,"%s: srtcp index: %x\n",PTR_DAT_00d60148,uVar6);
  }
  *(uint *)(param_2 + 8 + uVar11 + uVar15) = uVar14;
  iVar5 = FUN_00c4c5b4(plVar10,&local_80,uVar6,param_2);
  if ((iVar5 == 0) && (iVar5 = FUN_00c4d1e8(plVar10[3],&local_80,0), iVar5 == 0)) {
    if (local_98 == 0) {
      iVar5 = FUN_00c4d2e4(plVar10[3],param_2,*param_3);
      if (iVar5 != 0) {
        return 8;
      }
    }
    else {
      iVar5 = FUN_00c4d2e4(plVar10[3],param_2,8);
      if (iVar5 != 0) {
        return 8;
      }
    }
    local_84 = uVar14;
    iVar5 = FUN_00c4d2e4(plVar10[3],&local_84,4);
    if (iVar5 == 0) {
      if (local_98 == 0) {
        local_88 = 0;
        iVar5 = FUN_00c4d260(plVar10[3],0,&local_88);
      }
      else {
        iVar5 = FUN_00c4d260(plVar10[3],local_98,&local_64);
      }
      if ((iVar5 == 0) &&
         (iVar5 = FUN_00c4d2b0(plVar10[3],param_2 + local_a0,&local_68), iVar5 == 0)) {
        *param_3 = local_68 + iVar4 + *param_3;
        return 0;
      }
    }
  }
  return 8;
}


// ===== 00c4bbe0  FUN_00c4bbe0 =====

void FUN_00c4bbe0(void)

{
  FUN_00c4bbec();
  return;
}


// ===== 00c4bbec  FUN_00c4bbec =====

int FUN_00c4bbec(uint *param_1,long param_2,uint *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  int iVar16;
  long *plVar17;
  uint *puVar18;
  ulong uVar19;
  long local_d8;
  int local_c0;
  int local_bc;
  uint *local_b8;
  uint local_b0;
  undefined4 uStack_ac;
  uint local_a4;
  uint *local_a0;
  undefined8 uStack_98;
  int local_88;
  int local_84;
  undefined1 *local_80;
  undefined1 *puStack_78;
  long local_68;
  uint uVar4;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  local_bc = 0;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  if (0xb < (int)*param_3) {
    uVar1 = *(uint *)(param_2 + 4);
    puVar18 = *(uint **)param_1;
    local_c0 = -0x55555556;
    do {
      puVar18 = *(uint **)(puVar18 + 0x1c);
      if (puVar18 == (uint *)0x0) {
        puVar18 = *(uint **)(param_1 + 2);
        if (puVar18 == (uint *)0x0) {
          iVar9 = 0xd;
          goto LAB_00c4bf84;
        }
        if (DAT_00d60140 != 0) {
          uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
          FUN_00c4c870(3,"%s: srtcp using provisional stream (SSRC: 0x%08x)\n",PTR_DAT_00d60148,
                       uVar1 >> 0x10 | uVar1 << 0x10);
        }
        break;
      }
    } while (*puVar18 != uVar1);
    if (param_4 != 0) {
      uVar1 = *param_3;
      if ((*(uint *)(**(long **)(puVar18 + 2) + 0x14) & 0xfffffffe) == 6) {
        uVar8 = 0;
LAB_00c4bd34:
        uVar19 = (ulong)puVar18[4];
        if (puVar18[4] != 0) {
          plVar17 = *(long **)(puVar18 + 2);
          uVar1 = uVar1 - uVar8;
          do {
            uVar8 = *(uint *)(plVar17 + 9);
            if ((uVar8 - 1 < uVar1) &&
               (iVar9 = memcmp((void *)(param_2 + (ulong)(uVar1 - uVar8)),(void *)plVar17[8],
                               (ulong)uVar8), iVar9 == 0)) {
              if (plVar17 != (long *)0x0) goto LAB_00c4bcd4;
              break;
            }
            uVar19 = uVar19 - 1;
            plVar17 = plVar17 + 0xb;
          } while (uVar19 != 0);
        }
      }
      else {
        uVar8 = FUN_00c4e984((*(long **)(puVar18 + 2))[2]);
        if (uVar8 <= uVar1) goto LAB_00c4bd34;
      }
      iVar9 = 0x19;
      goto LAB_00c4bf84;
    }
    plVar17 = *(long **)(puVar18 + 2);
    uVar8 = 0;
LAB_00c4bcd4:
    iVar7 = FUN_00c4e984(plVar17[4]);
    uVar1 = *param_3;
    iVar9 = iVar7 + uVar8 + 0xc;
    if (iVar9 <= (int)uVar1) {
      if ((*(uint *)(*plVar17 + 0x14) & 0xfffffffe) == 6) {
        uStack_98 = &DAT_aaaaaaaaaaaaaaaa;
        local_a0 = (uint *)&DAT_aaaaaaaaaaaaaaaa;
        iVar7 = FUN_00c4e984(plVar17[4]);
        if (uVar8 == 0) {
          uVar19 = 0;
        }
        else {
          uVar19 = (ulong)*(uint *)(plVar17 + 9);
        }
        uVar1 = *param_3;
        iVar16 = (int)uVar19;
        local_84 = (uVar1 - iVar16) + -0xc;
        uVar8 = *(uint *)(((param_2 + (ulong)uVar1) - uVar19) + -4);
        if ((uVar8 >> 7 & 1) == 0) {
          lVar13 = 0;
          local_84 = 0;
        }
        else {
          lVar13 = param_2 + 8;
        }
        uVar3 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff007f) << 8;
        uVar4 = uVar3 >> 0x10 | uVar3 << 0x10;
        if (DAT_00d60140 != 0) {
          FUN_00c4c870(3,"%s: srtcp index: %x\n",PTR_DAT_00d60148,uVar4);
        }
        iVar9 = FUN_00c4ff48(puVar18 + 0xe,uVar4);
        if (iVar9 != 0) goto LAB_00c4bf84;
        local_88 = -0x55555556;
        iVar9 = FUN_00c4c5b4(plVar17,&local_a0,uVar4,param_2);
        if ((iVar9 == 0) && (iVar9 = FUN_00c4d1e8(plVar17[3],&local_a0,1), iVar9 == 0)) {
          if (lVar13 == 0) {
            iVar9 = FUN_00c4d2e4(plVar17[3],param_2,((*param_3 - iVar16) - iVar7) + -4);
            if (iVar9 != 0) goto LAB_00c4bf80;
          }
          else {
            iVar9 = 8;
            iVar10 = FUN_00c4d2e4(plVar17[3],param_2,8);
            if (iVar10 != 0) goto LAB_00c4bf84;
          }
          local_a4 = uVar8;
          iVar9 = FUN_00c4d2e4(plVar17[3],&local_a4,4);
          if (iVar9 == 0) {
            if (lVar13 == 0) {
              lVar15 = -0x28;
              lVar12 = plVar17[3];
              lVar13 = (((param_2 + (ulong)uVar1) - (long)iVar7) - uVar19) + -4;
              local_88 = iVar7;
            }
            else {
              lVar12 = plVar17[3];
              lVar15 = -0x24;
            }
            iVar9 = FUN_00c4d288(lVar12,lVar13,&stack0xffffffffffffffa0 + lVar15);
            if (iVar9 != 0) goto LAB_00c4bf84;
            *param_3 = ((*param_3 - iVar16) - iVar7) - 4;
            if (puVar18[0x15] != 2) {
              if (puVar18[0x15] == 0) {
                puVar18[0x15] = 2;
              }
              else if (PTR_FUN_00d60150 != (undefined *)0x0) {
                uVar1 = (*puVar18 & 0xff00ff00) >> 8 | (*puVar18 & 0xff00ff) << 8;
                local_b0 = uVar1 >> 0x10 | uVar1 << 0x10;
                uStack_ac = 0;
                local_b8 = param_1;
                (*(code *)PTR_FUN_00d60150)(&local_b8);
              }
            }
            if (puVar18 == *(uint **)(param_1 + 2)) {
              local_b8 = (uint *)&DAT_aaaaaaaaaaaaaaaa;
              iVar9 = FUN_00c4957c(*(uint **)(param_1 + 2),*(undefined4 *)(param_2 + 4),&local_b8);
              if (iVar9 != 0) goto LAB_00c4bf84;
              lVar13 = *(long *)param_1;
              lVar15 = *(long *)(lVar13 + 0x70);
              *(long *)(local_b8 + 0x1c) = lVar15;
              if (lVar15 != 0) {
                *(uint **)(lVar15 + 0x78) = local_b8;
              }
              *(uint **)(lVar13 + 0x70) = local_b8;
              *(long *)(local_b8 + 0x1e) = lVar13;
              puVar18 = local_b8;
            }
LAB_00c4c29c:
            FUN_00c4ff94(puVar18 + 0xe,uVar4);
            iVar9 = 0;
            goto LAB_00c4bf84;
          }
        }
LAB_00c4bf80:
        iVar9 = 8;
      }
      else {
        local_bc = uVar1 - iVar9;
        uVar3 = *(uint *)(((param_2 + (int)uVar1) - (ulong)(iVar7 + uVar8)) + -4);
        if (((puVar18[0x14] & 0xfffffffd) == 1) == ((uVar3 & 0x80) == 0)) {
          iVar9 = 0xe;
          goto LAB_00c4bf84;
        }
        if ((puVar18[0x14] | 2) == 3) {
          local_d8 = param_2 + 8;
        }
        else {
          local_d8 = 0;
          local_bc = 0;
        }
        uVar4 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff007f) << 8;
        uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
        if (DAT_00d60140 != 0) {
          FUN_00c4c870(3,"%s: srtcp index: %x\n",PTR_DAT_00d60148,uVar4);
        }
        iVar9 = FUN_00c4ff48(puVar18 + 0xe,uVar4);
        if (iVar9 != 0) goto LAB_00c4bf84;
        uVar2 = *(uint *)(*(long *)plVar17[3] + 0x50);
        if ((uVar2 < 6) && ((0x32U >> (ulong)(uVar2 & 0x1f) & 1) != 0)) {
          local_a0 = (uint *)((ulong)*(uint *)(param_2 + 4) << 0x20);
          uStack_98 = (undefined1 *)CONCAT44(uVar3 >> 0x10,(uVar3 & 0xffffff7f) << 0x10);
        }
        else {
          local_a0 = (uint *)0x0;
          uStack_98 = (undefined1 *)(((ulong)uVar3 & 0xffffff7f) << 0x20);
        }
        iVar9 = FUN_00c4d1e8((long *)plVar17[3],&local_a0,1);
        if (iVar9 != 0) goto LAB_00c4bf80;
        iVar9 = (**(code **)(*(long *)plVar17[4] + 0x28))(((long *)plVar17[4])[1]);
        if (iVar9 != 0) goto LAB_00c4bf84;
        plVar14 = (long *)plVar17[4];
        uVar19 = (ulong)(uVar1 - (iVar7 + uVar8));
        iVar9 = (**(code **)(*plVar14 + 0x18))(plVar14[1],param_2,uVar19,(int)plVar14[2],&local_80);
        puVar6 = PTR_DAT_00d60148;
        if (DAT_00d60140 != 0) {
          uVar11 = FUN_00c4c9cc(&local_80,iVar7);
          FUN_00c4c870(3,"%s: srtcp computed tag:       %s\n",puVar6,uVar11);
        }
        puVar6 = PTR_DAT_00d60148;
        if (iVar9 == 0) {
          lVar13 = param_2 + uVar19 + (ulong)uVar8;
          if (DAT_00d60140 != 0) {
            uVar11 = FUN_00c4c9cc(lVar13,iVar7);
            FUN_00c4c870(3,"%s: srtcp tag from packet:    %s\n",puVar6,uVar11);
          }
          iVar9 = FUN_00c4ce90(&local_80,lVar13,iVar7);
          if (iVar9 == 0) {
            local_c0 = FUN_00c4e990(plVar17[4]);
            if (local_c0 != 0) {
              iVar9 = FUN_00c4d210(plVar17[3],lVar13,&local_c0);
              puVar6 = PTR_DAT_00d60148;
              if (DAT_00d60140 != 0) {
                uVar11 = FUN_00c4c9cc(lVar13,local_c0);
                FUN_00c4c870(3,"%s: keystream prefix: %s\n",puVar6,uVar11);
              }
              if (iVar9 != 0) goto LAB_00c4bf80;
            }
            if ((local_d8 != 0) && (iVar9 = FUN_00c4d288(plVar17[3],local_d8,&local_bc), iVar9 != 0)
               ) goto LAB_00c4bf80;
            *param_3 = (*param_3 - (iVar7 + uVar8)) - 4;
            if (puVar18[0x15] != 2) {
              if (puVar18[0x15] == 0) {
                puVar18[0x15] = 2;
              }
              else if (PTR_FUN_00d60150 != (undefined *)0x0) {
                uVar1 = (*puVar18 & 0xff00ff00) >> 8 | (*puVar18 & 0xff00ff) << 8;
                uStack_98 = (undefined1 *)(ulong)(uVar1 >> 0x10 | uVar1 << 0x10);
                local_a0 = param_1;
                (*(code *)PTR_FUN_00d60150)(&local_a0);
              }
            }
            if (puVar18 == *(uint **)(param_1 + 2)) {
              local_a0 = (uint *)&DAT_aaaaaaaaaaaaaaaa;
              iVar9 = FUN_00c4957c(*(uint **)(param_1 + 2),*(undefined4 *)(param_2 + 4),&local_a0);
              if (iVar9 != 0) goto LAB_00c4bf84;
              lVar13 = *(long *)param_1;
              lVar15 = *(long *)(lVar13 + 0x70);
              *(long *)(local_a0 + 0x1c) = lVar15;
              if (lVar15 != 0) {
                *(uint **)(lVar15 + 0x78) = local_a0;
              }
              *(uint **)(lVar13 + 0x70) = local_a0;
              *(long *)(local_a0 + 0x1e) = lVar13;
              puVar18 = local_a0;
            }
            goto LAB_00c4c29c;
          }
        }
        iVar9 = 7;
      }
      goto LAB_00c4bf84;
    }
  }
  iVar9 = 2;
LAB_00c4bf84:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return iVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00c4c2e8  FUN_00c4c2e8 =====

void FUN_00c4c2e8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}


// ===== 00c4c2f4  FUN_00c4c2f4 =====

undefined8 FUN_00c4c2f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


// ===== 00c4c300  FUN_00c4c300 =====

undefined8 FUN_00c4c300(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  uVar6 = param_2 - 1;
  uVar7 = 2;
  if ((uVar6 < 8) && ((0xd3U >> (ulong)(uVar6 & 0x1f) & 1) != 0)) {
    uVar1 = *(undefined4 *)(&DAT_001f8d48 + (ulong)uVar6 * 4);
    uVar2 = *(undefined4 *)(&DAT_001f8c08 + (ulong)uVar6 * 4);
    uVar3 = *(undefined4 *)(&DAT_001f8c48 + (ulong)uVar6 * 4);
    uVar4 = *(undefined4 *)(&DAT_001f8de8 + (ulong)uVar6 * 4);
    uVar5 = *(undefined4 *)(&DAT_001f8ce8 + (ulong)uVar6 * 4);
    uVar7 = 0;
    *param_1 = *(undefined4 *)(&DAT_001f8968 + (ulong)uVar6 * 4);
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    param_1[4] = uVar4;
    param_1[5] = uVar5;
  }
  return uVar7;
}


// ===== 00c4c380  FUN_00c4c380 =====

undefined8 FUN_00c4c380(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  uVar6 = param_2 - 1;
  uVar7 = 2;
  if ((uVar6 < 8) && ((0xd3U >> (ulong)(uVar6 & 0x1f) & 1) != 0)) {
    uVar1 = *(undefined4 *)(&DAT_001f8d48 + (ulong)uVar6 * 4);
    uVar2 = *(undefined4 *)(&DAT_001f8c08 + (ulong)uVar6 * 4);
    uVar3 = *(undefined4 *)(&DAT_001f8c48 + (ulong)uVar6 * 4);
    uVar4 = *(undefined4 *)(&DAT_001f8c68 + (ulong)uVar6 * 4);
    uVar5 = *(undefined4 *)(&DAT_001f8ce8 + (ulong)uVar6 * 4);
    uVar7 = 0;
    *param_1 = *(undefined4 *)(&DAT_001f8968 + (ulong)uVar6 * 4);
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    param_1[4] = uVar4;
    param_1[5] = uVar5;
  }
  return uVar7;
}


// ===== 00c4c400  FUN_00c4c400 =====

undefined8 FUN_00c4c400(long param_1,undefined8 param_2)

{
  if (DAT_00dbb0f8 != 0) {
    FUN_00c4c858(0);
  }
  DAT_00dbb0f8 = param_1;
  DAT_00dbb100 = param_2;
  if (param_1 != 0) {
    FUN_00c4c858(FUN_00c4c464);
  }
  return 0;
}


// ===== 00c4c464  FUN_00c4c464 =====

void FUN_00c4c464(int param_1,undefined8 param_2)

{
  if (DAT_00dbb0f8 != (code *)0x0) {
    if (2 < param_1 - 1U) {
      param_1 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x00c4c488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_00dbb0f8)(param_1,param_2,DAT_00dbb100);
    return;
  }
  return;
}


// ===== 00c4c490  FUN_00c4c490 =====

void FUN_00c4c490(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined2 local_40;
  undefined4 uStack_3e;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  ushort uStack_36;
  undefined4 uStack_34;
  
  puVar1 = PTR_DAT_00d60148;
  uVar3 = *param_3;
  local_40 = 0;
  uStack_34 = 0;
  uStack_3e = *(undefined4 *)(param_4 + 8);
  local_50 = 0;
  uStack_48 = 0;
  uStack_36 = (ushort)((ulong)uVar3 >> 8) & 0xff | (ushort)(((uint)uVar3 & 0xff00ff) << 8);
  uVar2 = (uint)((ulong)uVar3 >> 0x10);
  uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  uStack_3a = (undefined2)(uVar2 >> 0x10);
  uStack_38 = (undefined2)uVar2;
  if (DAT_00d60140 == 0) {
    local_50 = *(undefined8 *)(param_1 + 0x28);
    uStack_48._4_4_ = 0;
  }
  else {
    uVar3 = FUN_00c4ca54(&local_40);
    FUN_00c4c870(3,"%s: Pre-salted RTP IV = %s\n\n",puVar1,uVar3);
    puVar1 = PTR_DAT_00d60148;
    local_50 = *(undefined8 *)(param_1 + 0x28);
    if (DAT_00d60140 == 0) {
      uStack_48._4_4_ = 0;
    }
    else {
      uStack_48._0_4_ = *(undefined4 *)(param_1 + 0x30);
      uVar3 = FUN_00c4ca54(&local_50);
      FUN_00c4c870(3,"%s: RTP SALT = %s\n\n",puVar1,uVar3);
    }
  }
  uVar4 = *(undefined4 *)((ulong)&local_50 | 8);
  param_2[1] = CONCAT17((byte)((uint)uStack_48._4_4_ >> 0x18) ^ (byte)((uint)uStack_34 >> 0x18),
                        CONCAT16((byte)((uint)uStack_48._4_4_ >> 0x10) ^
                                 (byte)((uint)uStack_34 >> 0x10),
                                 CONCAT15((byte)((uint)uStack_48._4_4_ >> 8) ^
                                          (byte)((uint)uStack_34 >> 8),
                                          CONCAT14((byte)uStack_48._4_4_ ^ (byte)uStack_34,
                                                   CONCAT13((byte)((uint)uVar4 >> 0x18) ^
                                                            (byte)(uStack_36 >> 8),
                                                            CONCAT12((byte)((uint)uVar4 >> 0x10) ^
                                                                     (byte)uStack_36,
                                                                     CONCAT11((byte)((uint)uVar4 >>
                                                                                    8) ^
                                                                              (byte)((ushort)
                                                  uStack_38 >> 8),(byte)uVar4 ^ (byte)uStack_38)))))
                                ));
  *param_2 = CONCAT17((byte)((ulong)local_50 >> 0x38) ^ (byte)((ushort)uStack_3a >> 8),
                      CONCAT16((byte)((ulong)local_50 >> 0x30) ^ (byte)uStack_3a,
                               CONCAT15((byte)((ulong)local_50 >> 0x28) ^
                                        (byte)((uint)uStack_3e >> 0x18),
                                        CONCAT14((byte)((ulong)local_50 >> 0x20) ^
                                                 (byte)((uint)uStack_3e >> 0x10),
                                                 CONCAT13((byte)((ulong)local_50 >> 0x18) ^
                                                          (byte)((uint)uStack_3e >> 8),
                                                          CONCAT12((byte)((ulong)local_50 >> 0x10) ^
                                                                   (byte)uStack_3e,
                                                                   CONCAT11((byte)((ulong)local_50
                                                                                  >> 8) ^
                                                                            (byte)((ushort)local_40
                                                                                  >> 8),
                                                                            (byte)local_50 ^
                                                                            (byte)local_40)))))));
  return;
}


// ===== 00c4c5b4  FUN_00c4c5b4 =====

undefined8 FUN_00c4c5b4(long param_1,undefined8 *param_2,uint param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined2 local_40;
  undefined4 uStack_3e;
  undefined2 uStack_3a;
  ulong uStack_38;
  
  puVar2 = PTR_DAT_00d60148;
  uStack_3e = *(undefined4 *)(param_4 + 4);
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_3a = 0;
  if ((int)param_3 < 0) {
    uVar3 = 2;
  }
  else {
    uVar1 = (param_3 & 0xff00ff00) >> 8 | (param_3 & 0xff00ff) << 8;
    uStack_38 = (ulong)(uVar1 >> 0x10 | uVar1 << 0x10);
    if (DAT_00d60140 == 0) {
      local_50 = *(undefined8 *)(param_1 + 0x34);
      uStack_48._4_4_ = 0;
    }
    else {
      uVar3 = FUN_00c4ca54(&local_40);
      FUN_00c4c870(3,"%s: Pre-salted RTCP IV = %s\n\n",puVar2,uVar3);
      puVar2 = PTR_DAT_00d60148;
      local_50 = *(undefined8 *)(param_1 + 0x34);
      if (DAT_00d60140 == 0) {
        uStack_48._4_4_ = 0;
      }
      else {
        uStack_48._0_4_ = *(undefined4 *)(param_1 + 0x3c);
        uVar3 = FUN_00c4ca54(&local_50);
        FUN_00c4c870(3,"%s: RTCP SALT = %s\n\n",puVar2,uVar3);
      }
    }
    uVar3 = 0;
    uVar4 = *(undefined4 *)((ulong)&local_50 | 8);
    param_2[1] = CONCAT17((byte)((uint)uStack_48._4_4_ >> 0x18) ^ (byte)(uStack_38 >> 0x38),
                          CONCAT16((byte)((uint)uStack_48._4_4_ >> 0x10) ^ (byte)(uStack_38 >> 0x30)
                                   ,CONCAT15((byte)((uint)uStack_48._4_4_ >> 8) ^
                                             (byte)(uStack_38 >> 0x28),
                                             CONCAT14((byte)uStack_48._4_4_ ^
                                                      (byte)(uStack_38 >> 0x20),
                                                      CONCAT13((byte)((uint)uVar4 >> 0x18) ^
                                                               (byte)(uStack_38 >> 0x18),
                                                               CONCAT12((byte)((uint)uVar4 >> 0x10)
                                                                        ^ (byte)(uStack_38 >> 0x10),
                                                                        CONCAT11((byte)((uint)uVar4
                                                                                       >> 8) ^
                                                                                 (byte)(uStack_38 >>
                                                                                       8),(byte)
                                                  uVar4 ^ (byte)uStack_38)))))));
    *param_2 = CONCAT17((byte)((ulong)local_50 >> 0x38) ^ (byte)((ushort)uStack_3a >> 8),
                        CONCAT16((byte)((ulong)local_50 >> 0x30) ^ (byte)uStack_3a,
                                 CONCAT15((byte)((ulong)local_50 >> 0x28) ^
                                          (byte)((uint)uStack_3e >> 0x18),
                                          CONCAT14((byte)((ulong)local_50 >> 0x20) ^
                                                   (byte)((uint)uStack_3e >> 0x10),
                                                   CONCAT13((byte)((ulong)local_50 >> 0x18) ^
                                                            (byte)((uint)uStack_3e >> 8),
                                                            CONCAT12((byte)((ulong)local_50 >> 0x10)
                                                                     ^ (byte)uStack_3e,
                                                                     CONCAT11((byte)((ulong)local_50
                                                                                    >> 8) ^
                                                                              (byte)((ushort)
                                                  local_40 >> 8),(byte)local_50 ^ (byte)local_40))))
                                         )));
  }
  return uVar3;
}


// ===== 00c4c6d8  FUN_00c4c6d8 =====

undefined8 FUN_00c4c6d8(ulong *param_1,ulong param_2)

{
  if (param_2 < 0x10000) {
    return 2;
  }
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  return 0;
}


// ===== 00c4c700  FUN_00c4c700 =====

undefined8 FUN_00c4c700(long param_1,long *param_2)

{
  if (param_1 != 0) {
    *param_2 = param_1;
    return 0;
  }
  return 2;
}


// ===== 00c4c720  FUN_00c4c720 =====

undefined4 FUN_00c4c720(ulong *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar2 = *param_1 - 1;
  *param_1 = uVar2;
  if (uVar2 >> 0x10 != 0) {
    return 0;
  }
  uVar1 = 1;
  if (uVar2 == 0) {
    uVar1 = 2;
  }
  else if ((int)param_1[1] != 0) {
    return 1;
  }
  *(undefined4 *)(param_1 + 1) = uVar1;
  return uVar1;
}


// ===== 00c4c76c  FUN_00c4c76c =====

void * FUN_00c4c76c(size_t param_1)

{
  void *pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = calloc(1,param_1);
    if (pvVar1 != (void *)0x0) {
      if (DAT_00d60158 == 0) {
        return pvVar1;
      }
      FUN_00c4c870(3,"%s: (location: %p) allocated\n",PTR_s_alloc_00d60160,pvVar1);
      return pvVar1;
    }
    if (DAT_00d60158 != 0) {
      FUN_00c4c870(3,"%s: allocation failed (asked for %zu bytes)\n\n",PTR_s_alloc_00d60160,param_1)
      ;
    }
  }
  return (void *)0x0;
}


// ===== 00c4c7fc  FUN_00c4c7fc =====

void FUN_00c4c7fc(void *param_1)

{
  if (DAT_00d60158 != 0) {
    FUN_00c4c870(3,"%s: (location: %p) freed\n",PTR_s_alloc_00d60160,param_1);
  }
  free(param_1);
  return;
}


// ===== 00c4c84c  FUN_00c4c84c =====

undefined8 FUN_00c4c84c(void)

{
  return 0;
}


// ===== 00c4c858  FUN_00c4c858 =====

undefined8 FUN_00c4c858(undefined8 param_1)

{
  DAT_00dbb108 = param_1;
  return 0;
}


// ===== 00c4c870  FUN_00c4c870 =====

void FUN_00c4c870(undefined4 param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  size_t sVar4;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined1 *local_280;
  undefined1 **ppuStack_278;
  undefined8 *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_248;
  undefined1 *local_240;
  undefined1 *puStack_238;
  undefined1 *puStack_230;
  undefined1 *puStack_228;
  undefined1 *local_220;
  undefined1 *puStack_218;
  undefined1 *puStack_210;
  undefined1 *puStack_208;
  undefined1 *local_200;
  undefined1 *puStack_1f8;
  undefined1 *puStack_1f0;
  undefined1 *puStack_1e8;
  undefined1 *local_1e0;
  undefined1 *puStack_1d8;
  undefined1 *puStack_1d0;
  undefined1 *puStack_1c8;
  undefined1 *local_1c0;
  undefined1 *puStack_1b8;
  undefined1 *puStack_1b0;
  undefined1 *puStack_1a8;
  undefined1 *local_1a0;
  undefined1 *puStack_198;
  undefined1 *puStack_190;
  undefined1 *puStack_188;
  undefined1 *local_180;
  undefined1 *puStack_178;
  undefined1 *puStack_170;
  undefined1 *puStack_168;
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
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uStack_248 = &DAT_aaaaaaaaaaaaaaaa;
  local_2b0 = param_3;
  uStack_2a8 = param_4;
  local_2a0 = param_5;
  uStack_298 = param_6;
  local_290 = param_7;
  uStack_288 = param_8;
  if (DAT_00dbb108 != (code *)0x0) {
    puStack_270 = &local_2b0;
    puStack_238 = &DAT_aaaaaaaaaaaaaaaa;
    local_240 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_228 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_230 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_248 = (undefined1 *)0xffffff80ffffffd0;
    ppuStack_278 = &local_280;
    puStack_218 = &DAT_aaaaaaaaaaaaaaaa;
    local_220 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_208 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_210 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1f8 = &DAT_aaaaaaaaaaaaaaaa;
    local_200 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1e8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1f0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1d8 = &DAT_aaaaaaaaaaaaaaaa;
    local_1e0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1c8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1d0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_1c0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1a8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1b0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_198 = &DAT_aaaaaaaaaaaaaaaa;
    local_1a0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_190 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
    local_180 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_170 = &DAT_aaaaaaaaaaaaaaaa;
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
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_268 = 0xffffff80ffffffd0;
    local_280 = (undefined1 *)register0x00000008;
    iVar3 = vsnprintf((char *)&local_240,0x200,param_2,&local_280);
    if (0 < iVar3) {
      sVar4 = strlen((char *)&local_240);
      if (sVar4 != 0) {
        if (0x200 < sVar4) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(0x5512,0xc4c9cc);
          (*pcVar2)();
        }
        if (*(char *)((long)&uStack_248 + sVar4 + 7) == '\n') {
          *(undefined1 *)((long)&uStack_248 + sVar4 + 7) = 0;
        }
      }
      (*DAT_00dbb108)(param_1,&local_240);
      thunk_FUN_0078cba8(&local_240,0x200);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00c4c9cc  FUN_00c4c9cc =====

void FUN_00c4c9cc(byte *param_1,int param_2)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = 0x3fe;
  if (param_2 * 2 < 0x401) {
    uVar1 = param_2 * 2;
  }
  uVar3 = 0;
  if (0 < (int)uVar1) {
    do {
      uVar4 = uVar3;
      (&DAT_00dbb110)[uVar4] = (&DAT_001f2a40)[*param_1 >> 4];
      if (0x400 < uVar4 + 1) goto LAB_00c4ca50;
      uVar3 = uVar4 + 2;
      (&DAT_00dbb111)[uVar4] = (&DAT_001f2a40)[(ulong)*param_1 & 0xf];
      param_1 = param_1 + 1;
    } while (uVar3 < uVar1);
    if (0x3fe < uVar4) {
LAB_00c4ca50:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(0x5512,0xc4ca54);
      (*pcVar2)();
    }
  }
  (&DAT_00dbb110)[uVar3 & 0xffffffff] = 0;
  return;
}


// ===== 00c4ca54  FUN_00c4ca54 =====

void FUN_00c4ca54(long param_1)

{
  byte *pbVar1;
  long lVar2;
  undefined1 *puVar3;
  
  lVar2 = 0;
  puVar3 = &DAT_00dbb111;
  do {
    puVar3[-1] = (&DAT_001f2a40)[*(byte *)(param_1 + lVar2) >> 4];
    pbVar1 = (byte *)(param_1 + lVar2);
    lVar2 = lVar2 + 1;
    *puVar3 = (&DAT_001f2a40)[(ulong)*pbVar1 & 0xf];
    puVar3 = puVar3 + 2;
  } while (lVar2 != 0x10);
  DAT_00dbb130 = 0;
  return;
}


// ===== 00c4caa8  FUN_00c4caa8 =====

void FUN_00c4caa8(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  return;
}


// ===== 00c4cb30  FUN_00c4cb30 =====

void FUN_00c4cb30(uint *param_1,uint param_2)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint *puVar8;
  
  if (0x7f < (int)param_2) {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
  uVar1 = (int)param_2 >> 5;
  param_2 = param_2 & 0x1f;
  if (param_2 == 0) {
    uVar3 = 4 - uVar1;
    if ((int)uVar1 < 4) {
      if (3 < uVar1) goto LAB_00c4ccc4;
      *param_1 = param_1[uVar1];
      if ((uVar1 != 3) && (param_1[1] = param_1[(ulong)uVar1 + 1], uVar1 != 2)) {
        if (1 < uVar1) goto LAB_00c4ccc4;
        param_1[2] = param_1[(ulong)uVar1 + 2];
        if (uVar1 != 1) {
          if (uVar1 != 0) goto LAB_00c4ccc4;
          param_1[3] = param_1[(ulong)uVar1 + 3];
        }
      }
      goto LAB_00c4cbe0;
    }
  }
  else {
    if ((int)uVar1 < 3) {
      if (2 < uVar1) goto LAB_00c4ccc4;
      puVar8 = param_1 + uVar1;
      uVar3 = 0x20 - param_2;
      *param_1 = puVar8[1] << (ulong)(uVar3 & 0x1f) ^ *puVar8 >> (ulong)param_2;
      if ((uVar1 != 2) &&
         (param_1[1] = puVar8[2] << (ulong)(uVar3 & 0x1f) ^ puVar8[1] >> (ulong)param_2, uVar1 != 1)
         ) {
        if (uVar1 != 0) goto LAB_00c4ccc4;
        param_1[2] = puVar8[3] << (ulong)(uVar3 & 0x1f) ^ puVar8[2] >> (ulong)param_2;
      }
    }
    if (3 < 3 - uVar1) goto LAB_00c4ccc4;
    param_1[3 - uVar1] = param_1[3] >> (ulong)param_2;
    uVar3 = 4 - uVar1;
LAB_00c4cbe0:
    if ((int)uVar1 < 1) {
      return;
    }
  }
  uVar5 = (ulong)uVar3;
  if (uVar3 < 5) {
    uVar3 = 4;
  }
  uVar7 = uVar3 - uVar5;
  if (3 - uVar5 <= uVar7) {
    uVar7 = 3 - uVar5;
  }
  uVar7 = uVar7 + 1;
  uVar6 = uVar5;
  if (8 < uVar7) {
    uVar6 = 8;
    if ((uVar7 & 7) != 0) {
      uVar6 = uVar7 & 7;
    }
    lVar4 = uVar7 - uVar6;
    uVar6 = lVar4 + uVar5;
    puVar8 = param_1 + uVar5 + 4;
    do {
      lVar4 = lVar4 + -8;
      puVar8[-2] = 0;
      puVar8[-1] = 0;
      puVar8[-4] = 0;
      puVar8[-3] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar8[0] = 0;
      puVar8[1] = 0;
      puVar8 = puVar8 + 8;
    } while (lVar4 != 0);
  }
  while (uVar3 != uVar6) {
    param_1[uVar6] = 0;
    uVar6 = uVar6 + 1;
    if (uVar6 == 4) {
      return;
    }
  }
LAB_00c4ccc4:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(0x5512,0xc4ccc8);
  (*pcVar2)();
}


// ===== 00c4ccc8  FUN_00c4ccc8 =====

undefined8 FUN_00c4ccc8(uint *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  void *__s;
  undefined8 uVar3;
  
  uVar2 = (param_2 + 0x1fU >> 3 & 0x1ffffffffffffffc) + 0xf & 0x3ffffffffffffff0;
  if (uVar2 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    uVar3 = 0xffffffff;
    *param_1 = 0;
  }
  else {
    __s = (void *)FUN_00c4c76c(uVar2);
    *(void **)(param_1 + 2) = __s;
    if (__s == (void *)0x0) {
      *param_1 = 0;
      uVar3 = 0xffffffff;
    }
    else {
      uVar1 = (uint)(param_2 + 0x1fU) & 0xffffffe0;
      *param_1 = uVar1;
      memset(__s,0,(ulong)(uVar1 >> 3));
      uVar3 = 0;
    }
  }
  return uVar3;
}


// ===== 00c4cd48  FUN_00c4cd48 =====

void FUN_00c4cd48(uint *param_1)

{
  memset(*(void **)(param_1 + 2),0,(ulong)(*param_1 >> 3));
  return;
}


// ===== 00c4cd60  FUN_00c4cd60 =====

void FUN_00c4cd60(undefined4 *param_1)

{
  if (*(long *)(param_1 + 2) != 0) {
    FUN_00c4c7fc();
  }
  *(undefined8 *)(param_1 + 2) = 0;
  *param_1 = 0;
  return;
}


// ===== 00c4cd98  FUN_00c4cd98 =====

void FUN_00c4cd98(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  
  uVar5 = *param_1;
  if ((int)param_2 < (int)uVar5) {
    uVar4 = (int)param_2 >> 5;
    uVar5 = uVar5 >> 5;
    param_2 = param_2 & 0x1f;
    if (param_2 == 0) {
      if (0 < (int)(uVar5 - uVar4)) {
        uVar7 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
        lVar6 = 0;
        do {
          puVar1 = (undefined4 *)(*(long *)(param_1 + 2) + uVar7);
          uVar7 = uVar7 + 4;
          *(undefined4 *)(*(long *)(param_1 + 2) + lVar6) = *puVar1;
          lVar6 = lVar6 + 4;
        } while ((ulong)(uVar5 - uVar4) << 2 != lVar6);
      }
    }
    else {
      uVar2 = uVar5 + ~uVar4;
      if (0 < (int)uVar2) {
        uVar7 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
        lVar6 = 0;
        do {
          puVar3 = (uint *)(*(long *)(param_1 + 2) + uVar7);
          uVar7 = uVar7 + 4;
          *(uint *)(*(long *)(param_1 + 2) + lVar6) =
               puVar3[1] << (ulong)(0x20 - param_2 & 0x1f) ^ *puVar3 >> (ulong)param_2;
          lVar6 = lVar6 + 4;
        } while ((ulong)uVar2 << 2 != lVar6);
      }
      *(uint *)(*(long *)(param_1 + 2) + (long)(int)uVar2 * 4) =
           *(uint *)(*(long *)(param_1 + 2) + (ulong)uVar5 * 4 + -4) >> (ulong)param_2;
    }
    if (0 < (int)uVar4) {
      lVar6 = (long)(int)(uVar5 - uVar4);
      do {
        *(undefined4 *)(*(long *)(param_1 + 2) + lVar6 * 4) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < (long)(ulong)uVar5);
    }
    return;
  }
  memset(*(void **)(param_1 + 2),0,(ulong)(uVar5 >> 3));
  return;
}


// ===== 00c4ce90  FUN_00c4ce90 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00c4ce90(uint *param_1,uint *param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  byte *pbVar27;
  byte *pbVar28;
  byte *pbVar29;
  uint *puVar30;
  byte *pbVar31;
  byte *pbVar32;
  byte *pbVar33;
  uint *puVar34;
  byte *pbVar35;
  byte *pbVar36;
  byte *pbVar37;
  uint *puVar38;
  byte *pbVar39;
  byte *pbVar40;
  byte *pbVar41;
  byte *pbVar42;
  byte *pbVar43;
  byte *pbVar44;
  uint *puVar45;
  byte *pbVar46;
  byte *pbVar47;
  byte *pbVar48;
  uint *puVar49;
  byte *pbVar50;
  byte *pbVar51;
  byte *pbVar52;
  uint *puVar53;
  byte *pbVar54;
  byte *pbVar55;
  byte *pbVar56;
  byte *pbVar57;
  byte *pbVar58;
  byte *pbVar59;
  uint *puVar60;
  byte *pbVar61;
  byte *pbVar62;
  byte *pbVar63;
  uint *puVar64;
  byte *pbVar65;
  byte *pbVar66;
  byte *pbVar67;
  uint *puVar68;
  byte *pbVar69;
  byte *pbVar70;
  byte *pbVar71;
  byte *pbVar72;
  byte *pbVar73;
  byte *pbVar74;
  uint *puVar75;
  byte *pbVar76;
  byte *pbVar77;
  byte *pbVar78;
  uint *puVar79;
  byte *pbVar80;
  byte *pbVar81;
  byte *pbVar82;
  uint *puVar83;
  byte *pbVar84;
  byte *pbVar85;
  byte *pbVar86;
  uint *puVar87;
  uint *puVar88;
  undefined4 *puVar89;
  uint *puVar90;
  ulong uVar91;
  int iVar92;
  ulong uVar93;
  uint *puVar94;
  ulong uVar95;
  long lVar96;
  undefined4 *puVar97;
  uint uVar98;
  uint *puVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  byte bVar119;
  byte bVar120;
  uint uVar117;
  byte bVar121;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  byte bVar125;
  byte bVar126;
  byte bVar127;
  byte bVar128;
  byte bVar129;
  byte bVar130;
  byte bVar131;
  byte bVar132;
  byte bVar133;
  undefined1 auVar118 [16];
  byte bVar134;
  byte bVar135;
  byte bVar136;
  byte bVar137;
  byte bVar138;
  byte bVar139;
  byte bVar140;
  byte bVar141;
  byte bVar142;
  byte bVar143;
  byte bVar144;
  byte bVar145;
  byte bVar146;
  byte bVar147;
  byte bVar148;
  byte bVar149;
  byte bVar150;
  byte bVar152;
  byte bVar153;
  byte bVar154;
  undefined4 uVar151;
  byte bVar155;
  byte bVar156;
  byte bVar157;
  byte bVar158;
  byte bVar159;
  byte bVar160;
  byte bVar161;
  byte bVar162;
  byte bVar163;
  byte bVar164;
  byte bVar165;
  byte bVar166;
  byte bVar167;
  byte bVar170;
  byte bVar171;
  uint uVar168;
  byte bVar172;
  byte bVar173;
  byte bVar175;
  byte bVar176;
  uint uVar174;
  undefined8 uVar169;
  byte bVar177;
  byte bVar178;
  byte bVar181;
  byte bVar182;
  uint uVar179;
  byte bVar183;
  byte bVar184;
  byte bVar186;
  byte bVar187;
  uint uVar185;
  undefined8 uVar180;
  byte bVar188;
  byte bVar189;
  byte bVar192;
  byte bVar193;
  uint uVar190;
  byte bVar194;
  byte bVar195;
  byte bVar197;
  byte bVar198;
  uint uVar196;
  undefined8 uVar191;
  byte bVar199;
  byte bVar200;
  byte bVar203;
  byte bVar204;
  uint uVar201;
  byte bVar205;
  byte bVar206;
  byte bVar208;
  byte bVar209;
  uint uVar207;
  undefined8 uVar202;
  byte bVar210;
  undefined1 uVar211;
  undefined1 uVar212;
  undefined1 uVar213;
  undefined1 uVar214;
  undefined1 uVar215;
  undefined1 uVar216;
  byte bVar217;
  byte bVar220;
  byte bVar221;
  uint uVar218;
  byte bVar222;
  byte bVar223;
  byte bVar225;
  byte bVar226;
  uint uVar224;
  undefined8 uVar219;
  byte bVar227;
  byte bVar228;
  byte bVar231;
  byte bVar232;
  uint uVar229;
  byte bVar233;
  byte bVar234;
  byte bVar236;
  byte bVar237;
  uint uVar235;
  undefined8 uVar230;
  byte bVar238;
  byte bVar239;
  byte bVar242;
  byte bVar243;
  uint uVar240;
  byte bVar244;
  byte bVar245;
  byte bVar247;
  byte bVar248;
  uint uVar246;
  undefined8 uVar241;
  byte bVar249;
  byte bVar250;
  byte bVar253;
  byte bVar254;
  uint uVar251;
  byte bVar255;
  byte bVar256;
  byte bVar258;
  byte bVar259;
  uint uVar257;
  undefined8 uVar252;
  byte bVar260;
  undefined1 uVar261;
  undefined1 uVar262;
  undefined1 uVar263;
  undefined1 uVar264;
  undefined1 uVar265;
  undefined1 uVar266;
  undefined1 uVar267;
  undefined1 uVar268;
  undefined1 uVar269;
  undefined1 uVar270;
  undefined1 uVar271;
  undefined1 uVar272;
  undefined1 uVar273;
  undefined1 uVar274;
  undefined1 uVar275;
  undefined1 uVar276;
  undefined1 uVar277;
  undefined1 uVar278;
  undefined1 auVar279 [16];
  undefined1 auVar280 [16];
  undefined1 auVar281 [16];
  undefined1 auVar282 [16];
  undefined1 auVar283 [16];
  undefined1 auVar284 [16];
  undefined1 auVar285 [16];
  undefined1 auVar286 [16];
  
  uVar2 = param_3 >> 3;
  uVar93 = (ulong)uVar2;
  puVar90 = (uint *)((long)param_2 + (long)param_3);
  if ((int)uVar2 < 1) {
    uVar117 = 0;
    puVar94 = param_2;
  }
  else {
    if (uVar2 < 8) {
      uVar117 = 0;
      uVar98 = 0;
      uVar95 = 0;
      puVar87 = param_1;
      puVar88 = param_2;
LAB_00c4cf80:
      iVar92 = uVar2 - (int)uVar95;
      do {
        iVar92 = iVar92 + -1;
        uVar117 = *puVar88 ^ *puVar87 | uVar117;
        uVar98 = puVar88[1] ^ puVar87[1] | uVar98;
        puVar87 = puVar87 + 2;
        puVar88 = puVar88 + 2;
      } while (iVar92 != 0);
    }
    else {
      uVar95 = uVar93 & 0x7ffffff8;
      bVar134 = 0;
      bVar136 = 0;
      bVar138 = 0;
      bVar140 = 0;
      bVar142 = 0;
      bVar144 = 0;
      bVar146 = 0;
      bVar148 = 0;
      bVar150 = 0;
      bVar152 = 0;
      bVar153 = 0;
      bVar154 = 0;
      bVar155 = 0;
      bVar156 = 0;
      bVar157 = 0;
      bVar158 = 0;
      bVar135 = 0;
      bVar137 = 0;
      bVar139 = 0;
      bVar141 = 0;
      bVar143 = 0;
      bVar145 = 0;
      bVar147 = 0;
      bVar149 = 0;
      bVar159 = 0;
      bVar160 = 0;
      bVar161 = 0;
      bVar162 = 0;
      bVar163 = 0;
      bVar164 = 0;
      bVar165 = 0;
      bVar166 = 0;
      bVar100 = 0;
      bVar102 = 0;
      bVar104 = 0;
      bVar112 = 0;
      bVar106 = 0;
      bVar109 = 0;
      bVar111 = 0;
      bVar114 = 0;
      bVar116 = 0;
      bVar119 = 0;
      bVar120 = 0;
      bVar121 = 0;
      bVar122 = 0;
      bVar123 = 0;
      bVar124 = 0;
      bVar125 = 0;
      bVar101 = 0;
      bVar103 = 0;
      bVar107 = 0;
      bVar105 = 0;
      bVar108 = 0;
      bVar110 = 0;
      bVar113 = 0;
      bVar115 = 0;
      bVar126 = 0;
      bVar127 = 0;
      bVar128 = 0;
      bVar129 = 0;
      bVar130 = 0;
      bVar131 = 0;
      bVar132 = 0;
      bVar133 = 0;
      puVar94 = param_2 + 8;
      uVar91 = uVar93 & 0x7ffffff8;
      puVar87 = param_1 + uVar95 * 2;
      puVar88 = param_2 + uVar95 * 2;
      puVar99 = param_1 + 8;
      do {
        uVar240 = *puVar99;
        uVar11 = puVar99[1];
        uVar246 = puVar99[2];
        uVar12 = puVar99[3];
        uVar251 = puVar99[4];
        uVar13 = puVar99[5];
        uVar257 = puVar99[6];
        uVar14 = puVar99[7];
        uVar91 = uVar91 - 8;
        uVar168 = puVar99[-8];
        uVar190 = puVar99[-7];
        uVar174 = puVar99[-6];
        uVar196 = puVar99[-5];
        uVar179 = puVar99[-4];
        uVar201 = puVar99[-3];
        uVar185 = puVar99[-2];
        uVar207 = puVar99[-1];
        uVar117 = puVar94[-8];
        uVar218 = puVar94[-7];
        uVar98 = puVar94[-6];
        uVar224 = puVar94[-5];
        uVar7 = puVar94[-4];
        uVar229 = puVar94[-3];
        uVar8 = puVar94[-2];
        uVar235 = puVar94[-1];
        uVar17 = *puVar94;
        uVar23 = puVar94[1];
        uVar18 = puVar94[2];
        uVar24 = puVar94[3];
        uVar19 = puVar94[4];
        uVar25 = puVar94[5];
        uVar20 = puVar94[6];
        uVar26 = puVar94[7];
        puVar94 = puVar94 + 0x10;
        bVar134 = (byte)uVar117 ^ (byte)uVar168 | bVar134;
        bVar136 = (byte)(uVar117 >> 8) ^ (byte)(uVar168 >> 8) | bVar136;
        bVar138 = (byte)(uVar117 >> 0x10) ^ (byte)(uVar168 >> 0x10) | bVar138;
        bVar140 = (byte)(uVar117 >> 0x18) ^ (byte)(uVar168 >> 0x18) | bVar140;
        bVar142 = (byte)uVar98 ^ (byte)uVar174 | bVar142;
        bVar144 = (byte)(uVar98 >> 8) ^ (byte)(uVar174 >> 8) | bVar144;
        bVar146 = (byte)(uVar98 >> 0x10) ^ (byte)(uVar174 >> 0x10) | bVar146;
        bVar148 = (byte)(uVar98 >> 0x18) ^ (byte)(uVar174 >> 0x18) | bVar148;
        bVar150 = (byte)uVar7 ^ (byte)uVar179 | bVar150;
        bVar152 = (byte)(uVar7 >> 8) ^ (byte)(uVar179 >> 8) | bVar152;
        bVar153 = (byte)(uVar7 >> 0x10) ^ (byte)(uVar179 >> 0x10) | bVar153;
        bVar154 = (byte)(uVar7 >> 0x18) ^ (byte)(uVar179 >> 0x18) | bVar154;
        bVar155 = (byte)uVar8 ^ (byte)uVar185 | bVar155;
        bVar156 = (byte)(uVar8 >> 8) ^ (byte)(uVar185 >> 8) | bVar156;
        bVar157 = (byte)(uVar8 >> 0x10) ^ (byte)(uVar185 >> 0x10) | bVar157;
        bVar158 = (byte)(uVar8 >> 0x18) ^ (byte)(uVar185 >> 0x18) | bVar158;
        bVar135 = (byte)uVar17 ^ (byte)uVar240 | bVar135;
        bVar137 = (byte)(uVar17 >> 8) ^ (byte)(uVar240 >> 8) | bVar137;
        bVar139 = (byte)(uVar17 >> 0x10) ^ (byte)(uVar240 >> 0x10) | bVar139;
        bVar141 = (byte)(uVar17 >> 0x18) ^ (byte)(uVar240 >> 0x18) | bVar141;
        bVar143 = (byte)uVar18 ^ (byte)uVar246 | bVar143;
        bVar145 = (byte)(uVar18 >> 8) ^ (byte)(uVar246 >> 8) | bVar145;
        bVar147 = (byte)(uVar18 >> 0x10) ^ (byte)(uVar246 >> 0x10) | bVar147;
        bVar149 = (byte)(uVar18 >> 0x18) ^ (byte)(uVar246 >> 0x18) | bVar149;
        bVar159 = (byte)uVar19 ^ (byte)uVar251 | bVar159;
        bVar160 = (byte)(uVar19 >> 8) ^ (byte)(uVar251 >> 8) | bVar160;
        bVar161 = (byte)(uVar19 >> 0x10) ^ (byte)(uVar251 >> 0x10) | bVar161;
        bVar162 = (byte)(uVar19 >> 0x18) ^ (byte)(uVar251 >> 0x18) | bVar162;
        bVar163 = (byte)uVar20 ^ (byte)uVar257 | bVar163;
        bVar164 = (byte)(uVar20 >> 8) ^ (byte)(uVar257 >> 8) | bVar164;
        bVar165 = (byte)(uVar20 >> 0x10) ^ (byte)(uVar257 >> 0x10) | bVar165;
        bVar166 = (byte)(uVar20 >> 0x18) ^ (byte)(uVar257 >> 0x18) | bVar166;
        bVar101 = (byte)uVar23 ^ (byte)uVar11 | bVar101;
        bVar103 = (byte)(uVar23 >> 8) ^ (byte)(uVar11 >> 8) | bVar103;
        bVar107 = (byte)(uVar23 >> 0x10) ^ (byte)(uVar11 >> 0x10) | bVar107;
        bVar105 = (byte)(uVar23 >> 0x18) ^ (byte)(uVar11 >> 0x18) | bVar105;
        bVar108 = (byte)uVar24 ^ (byte)uVar12 | bVar108;
        bVar110 = (byte)(uVar24 >> 8) ^ (byte)(uVar12 >> 8) | bVar110;
        bVar113 = (byte)(uVar24 >> 0x10) ^ (byte)(uVar12 >> 0x10) | bVar113;
        bVar115 = (byte)(uVar24 >> 0x18) ^ (byte)(uVar12 >> 0x18) | bVar115;
        bVar126 = (byte)uVar25 ^ (byte)uVar13 | bVar126;
        bVar127 = (byte)(uVar25 >> 8) ^ (byte)(uVar13 >> 8) | bVar127;
        bVar128 = (byte)(uVar25 >> 0x10) ^ (byte)(uVar13 >> 0x10) | bVar128;
        bVar129 = (byte)(uVar25 >> 0x18) ^ (byte)(uVar13 >> 0x18) | bVar129;
        bVar130 = (byte)uVar26 ^ (byte)uVar14 | bVar130;
        bVar131 = (byte)(uVar26 >> 8) ^ (byte)(uVar14 >> 8) | bVar131;
        bVar132 = (byte)(uVar26 >> 0x10) ^ (byte)(uVar14 >> 0x10) | bVar132;
        bVar133 = (byte)(uVar26 >> 0x18) ^ (byte)(uVar14 >> 0x18) | bVar133;
        bVar100 = (byte)uVar218 ^ (byte)uVar190 | bVar100;
        bVar102 = (byte)(uVar218 >> 8) ^ (byte)(uVar190 >> 8) | bVar102;
        bVar104 = (byte)(uVar218 >> 0x10) ^ (byte)(uVar190 >> 0x10) | bVar104;
        bVar112 = (byte)(uVar218 >> 0x18) ^ (byte)(uVar190 >> 0x18) | bVar112;
        bVar106 = (byte)uVar224 ^ (byte)uVar196 | bVar106;
        bVar109 = (byte)(uVar224 >> 8) ^ (byte)(uVar196 >> 8) | bVar109;
        bVar111 = (byte)(uVar224 >> 0x10) ^ (byte)(uVar196 >> 0x10) | bVar111;
        bVar114 = (byte)(uVar224 >> 0x18) ^ (byte)(uVar196 >> 0x18) | bVar114;
        bVar116 = (byte)uVar229 ^ (byte)uVar201 | bVar116;
        bVar119 = (byte)(uVar229 >> 8) ^ (byte)(uVar201 >> 8) | bVar119;
        bVar120 = (byte)(uVar229 >> 0x10) ^ (byte)(uVar201 >> 0x10) | bVar120;
        bVar121 = (byte)(uVar229 >> 0x18) ^ (byte)(uVar201 >> 0x18) | bVar121;
        bVar122 = (byte)uVar235 ^ (byte)uVar207 | bVar122;
        bVar123 = (byte)(uVar235 >> 8) ^ (byte)(uVar207 >> 8) | bVar123;
        bVar124 = (byte)(uVar235 >> 0x10) ^ (byte)(uVar207 >> 0x10) | bVar124;
        bVar125 = (byte)(uVar235 >> 0x18) ^ (byte)(uVar207 >> 0x18) | bVar125;
        puVar99 = puVar99 + 0x10;
      } while (uVar91 != 0);
      bVar135 = bVar135 | bVar134;
      bVar137 = bVar137 | bVar136;
      bVar139 = bVar139 | bVar138;
      bVar141 = bVar141 | bVar140;
      bVar143 = bVar143 | bVar142;
      bVar145 = bVar145 | bVar144;
      bVar147 = bVar147 | bVar146;
      bVar149 = bVar149 | bVar148;
      bVar101 = bVar101 | bVar100;
      bVar103 = bVar103 | bVar102;
      bVar107 = bVar107 | bVar104;
      bVar105 = bVar105 | bVar112;
      bVar108 = bVar108 | bVar106;
      bVar110 = bVar110 | bVar109;
      bVar113 = bVar113 | bVar111;
      bVar115 = bVar115 | bVar114;
      auVar281[1] = bVar137;
      auVar281[0] = bVar135;
      auVar281[2] = bVar139;
      auVar281[3] = bVar141;
      auVar281[4] = bVar143;
      auVar281[5] = bVar145;
      auVar281[6] = bVar147;
      auVar281[7] = bVar149;
      auVar281[8] = bVar159 | bVar150;
      auVar281[9] = bVar160 | bVar152;
      auVar281[10] = bVar161 | bVar153;
      auVar281[0xb] = bVar162 | bVar154;
      auVar281[0xc] = bVar163 | bVar155;
      auVar281[0xd] = bVar164 | bVar156;
      auVar281[0xe] = bVar165 | bVar157;
      auVar281[0xf] = bVar166 | bVar158;
      auVar282[1] = bVar137;
      auVar282[0] = bVar135;
      auVar282[2] = bVar139;
      auVar282[3] = bVar141;
      auVar282[4] = bVar143;
      auVar282[5] = bVar145;
      auVar282[6] = bVar147;
      auVar282[7] = bVar149;
      auVar282[8] = bVar159 | bVar150;
      auVar282[9] = bVar160 | bVar152;
      auVar282[10] = bVar161 | bVar153;
      auVar282[0xb] = bVar162 | bVar154;
      auVar282[0xc] = bVar163 | bVar155;
      auVar282[0xd] = bVar164 | bVar156;
      auVar282[0xe] = bVar165 | bVar157;
      auVar282[0xf] = bVar166 | bVar158;
      auVar281 = NEON_ext(auVar281,auVar282,8,1);
      auVar118[1] = bVar103;
      auVar118[0] = bVar101;
      auVar118[2] = bVar107;
      auVar118[3] = bVar105;
      auVar118[4] = bVar108;
      auVar118[5] = bVar110;
      auVar118[6] = bVar113;
      auVar118[7] = bVar115;
      auVar118[8] = bVar126 | bVar116;
      auVar118[9] = bVar127 | bVar119;
      auVar118[10] = bVar128 | bVar120;
      auVar118[0xb] = bVar129 | bVar121;
      auVar118[0xc] = bVar130 | bVar122;
      auVar118[0xd] = bVar131 | bVar123;
      auVar118[0xe] = bVar132 | bVar124;
      auVar118[0xf] = bVar133 | bVar125;
      auVar280[1] = bVar103;
      auVar280[0] = bVar101;
      auVar280[2] = bVar107;
      auVar280[3] = bVar105;
      auVar280[4] = bVar108;
      auVar280[5] = bVar110;
      auVar280[6] = bVar113;
      auVar280[7] = bVar115;
      auVar280[8] = bVar126 | bVar116;
      auVar280[9] = bVar127 | bVar119;
      auVar280[10] = bVar128 | bVar120;
      auVar280[0xb] = bVar129 | bVar121;
      auVar280[0xc] = bVar130 | bVar122;
      auVar280[0xd] = bVar131 | bVar123;
      auVar280[0xe] = bVar132 | bVar124;
      auVar280[0xf] = bVar133 | bVar125;
      auVar118 = NEON_ext(auVar118,auVar280,8,1);
      uVar117 = CONCAT13(bVar141 | auVar281[3],
                         CONCAT12(bVar139 | auVar281[2],
                                  CONCAT11(bVar137 | auVar281[1],bVar135 | auVar281[0])));
      uVar98 = CONCAT13(bVar105 | auVar118[3],
                        CONCAT12(bVar107 | auVar118[2],
                                 CONCAT11(bVar103 | auVar118[1],bVar101 | auVar118[0])));
      uVar117 = uVar117 | (uint)(CONCAT17(bVar149 | auVar281[7],
                                          CONCAT16(bVar147 | auVar281[6],
                                                   CONCAT15(bVar145 | auVar281[5],
                                                            CONCAT14(bVar143 | auVar281[4],uVar117))
                                                  )) >> 0x20);
      uVar98 = uVar98 | (uint)(CONCAT17(bVar115 | auVar118[7],
                                        CONCAT16(bVar113 | auVar118[6],
                                                 CONCAT15(bVar110 | auVar118[5],
                                                          CONCAT14(bVar108 | auVar118[4],uVar98))))
                              >> 0x20);
      if (uVar95 != uVar93) goto LAB_00c4cf80;
    }
    uVar117 = uVar117 | uVar98;
    param_1 = param_1 + (ulong)(uVar2 - 1) * 2 + 2;
    puVar94 = param_2 + (ulong)(uVar2 - 1) * 2 + 2;
  }
  puVar87 = param_1;
  puVar88 = puVar94;
  if (3 < (long)puVar90 - (long)puVar94) {
    puVar87 = param_1 + 1;
    puVar88 = puVar94 + 1;
    uVar117 = *puVar94 ^ *param_1 | uVar117;
  }
  if (puVar90 <= puVar88) goto LAB_00c4d180;
  uVar93 = (long)param_2 + ((long)param_3 - (long)puVar88);
  puVar90 = puVar88;
  if (3 < uVar93) {
    if (uVar93 < 0x20) {
      uVar95 = 0;
    }
    else {
      bVar104 = 0;
      bVar107 = 0;
      bVar112 = 0;
      bVar105 = 0;
      bVar106 = 0;
      bVar108 = 0;
      bVar109 = 0;
      bVar110 = 0;
      bVar111 = 0;
      bVar113 = 0;
      bVar114 = 0;
      bVar115 = 0;
      bVar116 = 0;
      bVar119 = 0;
      bVar120 = 0;
      bVar121 = 0;
      bVar122 = 0;
      bVar123 = 0;
      bVar124 = 0;
      bVar125 = 0;
      bVar126 = 0;
      bVar127 = 0;
      bVar128 = 0;
      bVar129 = 0;
      bVar130 = 0;
      bVar131 = 0;
      bVar132 = 0;
      bVar133 = 0;
      bVar134 = 0;
      bVar135 = 0;
      bVar136 = 0;
      bVar137 = 0;
      bVar138 = 0;
      bVar139 = 0;
      bVar140 = 0;
      bVar141 = 0;
      bVar142 = 0;
      bVar143 = 0;
      bVar144 = 0;
      bVar145 = 0;
      bVar146 = 0;
      bVar147 = 0;
      bVar148 = 0;
      bVar149 = 0;
      bVar150 = 0;
      bVar152 = 0;
      bVar153 = 0;
      bVar154 = 0;
      bVar155 = 0;
      bVar156 = 0;
      bVar157 = 0;
      bVar158 = 0;
      bVar159 = 0;
      bVar160 = 0;
      bVar161 = 0;
      bVar162 = 0;
      bVar163 = 0;
      bVar164 = 0;
      bVar165 = 0;
      bVar166 = 0;
      uVar211 = (undefined1)((uint7)_UNK_001f45d9 >> 8);
      uVar212 = (undefined1)((uint7)_UNK_001f45d9 >> 0x10);
      uVar213 = (undefined1)((uint7)_UNK_001f45d9 >> 0x18);
      uVar214 = (undefined1)((uint7)_UNK_001f45d9 >> 0x20);
      uVar215 = (undefined1)((uint7)_UNK_001f45d9 >> 0x28);
      uVar216 = (undefined1)((uint7)_UNK_001f45d9 >> 0x30);
      auVar6[8] = UNK_001f45d8;
      auVar6._0_8_ = _DAT_001f45d0;
      auVar5[8] = UNK_001f45d8;
      auVar5._0_8_ = _DAT_001f45d0;
      uVar169 = 0;
      uVar180 = 0;
      uVar219 = 0;
      uVar230 = 0;
      uVar191 = 0;
      uVar202 = 0;
      uVar241 = 0;
      uVar252 = 0;
      bVar100 = (byte)uVar117;
      bVar101 = (byte)(uVar117 >> 8);
      bVar102 = (byte)(uVar117 >> 0x10);
      bVar103 = (byte)(uVar117 >> 0x18);
      uVar267 = (undefined1)((uint7)_UNK_001f2b39 >> 8);
      uVar268 = (undefined1)((uint7)_UNK_001f2b39 >> 0x10);
      uVar269 = (undefined1)((uint7)_UNK_001f2b39 >> 0x18);
      uVar270 = (undefined1)((uint7)_UNK_001f2b39 >> 0x20);
      uVar271 = (undefined1)((uint7)_UNK_001f2b39 >> 0x28);
      uVar272 = (undefined1)((uint7)_UNK_001f2b39 >> 0x30);
      auVar16[8] = UNK_001f2b38;
      auVar16._0_8_ = _DAT_001f2b30;
      auVar15[8] = UNK_001f2b38;
      auVar15._0_8_ = _DAT_001f2b30;
      uVar261 = (undefined1)((uint7)_UNK_001f3049 >> 8);
      uVar262 = (undefined1)((uint7)_UNK_001f3049 >> 0x10);
      uVar263 = (undefined1)((uint7)_UNK_001f3049 >> 0x18);
      uVar264 = (undefined1)((uint7)_UNK_001f3049 >> 0x20);
      uVar265 = (undefined1)((uint7)_UNK_001f3049 >> 0x28);
      uVar266 = (undefined1)((uint7)_UNK_001f3049 >> 0x30);
      auVar10[8] = UNK_001f3048;
      auVar10._0_8_ = _DAT_001f3040;
      auVar9[8] = UNK_001f3048;
      auVar9._0_8_ = _DAT_001f3040;
      uVar273 = (undefined1)((uint7)_UNK_001f25a9 >> 8);
      uVar274 = (undefined1)((uint7)_UNK_001f25a9 >> 0x10);
      uVar275 = (undefined1)((uint7)_UNK_001f25a9 >> 0x18);
      uVar276 = (undefined1)((uint7)_UNK_001f25a9 >> 0x20);
      uVar277 = (undefined1)((uint7)_UNK_001f25a9 >> 0x28);
      uVar278 = (undefined1)((uint7)_UNK_001f25a9 >> 0x30);
      auVar22[8] = UNK_001f25a8;
      auVar22._0_8_ = _DAT_001f25a0;
      auVar21[8] = UNK_001f25a8;
      auVar21._0_8_ = _DAT_001f25a0;
      uVar95 = uVar93 & 0xffffffffffffffe0;
      puVar90 = puVar88 + 4;
      puVar94 = puVar87 + 4;
      uVar91 = uVar93 & 0xffffffffffffffe0;
      do {
        puVar99 = puVar90 + -4;
        pbVar27 = (byte *)((long)puVar90 + -0xf);
        pbVar28 = (byte *)((long)puVar90 + -0xe);
        pbVar29 = (byte *)((long)puVar90 + -0xd);
        puVar30 = puVar90 + -3;
        pbVar31 = (byte *)((long)puVar90 + -0xb);
        pbVar32 = (byte *)((long)puVar90 + -10);
        pbVar33 = (byte *)((long)puVar90 + -9);
        puVar34 = puVar90 + -2;
        pbVar35 = (byte *)((long)puVar90 + -7);
        pbVar36 = (byte *)((long)puVar90 + -6);
        pbVar37 = (byte *)((long)puVar90 + -5);
        puVar38 = puVar90 + -1;
        pbVar39 = (byte *)((long)puVar90 + -3);
        pbVar40 = (byte *)((long)puVar90 + -2);
        pbVar41 = (byte *)((long)puVar90 + -1);
        uVar2 = *puVar90;
        pbVar42 = (byte *)((long)puVar90 + 1);
        pbVar43 = (byte *)((long)puVar90 + 2);
        pbVar44 = (byte *)((long)puVar90 + 3);
        puVar45 = puVar90 + 1;
        pbVar46 = (byte *)((long)puVar90 + 5);
        pbVar47 = (byte *)((long)puVar90 + 6);
        pbVar48 = (byte *)((long)puVar90 + 7);
        puVar49 = puVar90 + 2;
        pbVar50 = (byte *)((long)puVar90 + 9);
        pbVar51 = (byte *)((long)puVar90 + 10);
        pbVar52 = (byte *)((long)puVar90 + 0xb);
        puVar53 = puVar90 + 3;
        pbVar54 = (byte *)((long)puVar90 + 0xd);
        pbVar55 = (byte *)((long)puVar90 + 0xe);
        pbVar56 = (byte *)((long)puVar90 + 0xf);
        uVar91 = uVar91 - 0x20;
        puVar1 = puVar94 + -4;
        pbVar57 = (byte *)((long)puVar94 + -0xf);
        pbVar58 = (byte *)((long)puVar94 + -0xe);
        pbVar59 = (byte *)((long)puVar94 + -0xd);
        puVar60 = puVar94 + -3;
        pbVar61 = (byte *)((long)puVar94 + -0xb);
        pbVar62 = (byte *)((long)puVar94 + -10);
        pbVar63 = (byte *)((long)puVar94 + -9);
        puVar64 = puVar94 + -2;
        pbVar65 = (byte *)((long)puVar94 + -7);
        pbVar66 = (byte *)((long)puVar94 + -6);
        pbVar67 = (byte *)((long)puVar94 + -5);
        puVar68 = puVar94 + -1;
        pbVar69 = (byte *)((long)puVar94 + -3);
        pbVar70 = (byte *)((long)puVar94 + -2);
        pbVar71 = (byte *)((long)puVar94 + -1);
        uVar117 = *puVar94;
        pbVar72 = (byte *)((long)puVar94 + 1);
        pbVar73 = (byte *)((long)puVar94 + 2);
        pbVar74 = (byte *)((long)puVar94 + 3);
        puVar75 = puVar94 + 1;
        pbVar76 = (byte *)((long)puVar94 + 5);
        pbVar77 = (byte *)((long)puVar94 + 6);
        pbVar78 = (byte *)((long)puVar94 + 7);
        puVar79 = puVar94 + 2;
        pbVar80 = (byte *)((long)puVar94 + 9);
        pbVar81 = (byte *)((long)puVar94 + 10);
        pbVar82 = (byte *)((long)puVar94 + 0xb);
        puVar83 = puVar94 + 3;
        pbVar84 = (byte *)((long)puVar94 + 0xd);
        pbVar85 = (byte *)((long)puVar94 + 0xe);
        pbVar86 = (byte *)((long)puVar94 + 0xf);
        puVar90 = puVar90 + 8;
        puVar94 = puVar94 + 8;
        auVar284[0] = (byte)*puVar99 ^ (byte)*puVar1;
        auVar284[1] = *pbVar27 ^ *pbVar57;
        auVar284[2] = *pbVar28 ^ *pbVar58;
        auVar284[3] = *pbVar29 ^ *pbVar59;
        auVar284[4] = (byte)*puVar30 ^ (byte)*puVar60;
        auVar284[5] = *pbVar31 ^ *pbVar61;
        auVar284[6] = *pbVar32 ^ *pbVar62;
        auVar284[7] = *pbVar33 ^ *pbVar63;
        auVar284[8] = (byte)*puVar34 ^ (byte)*puVar64;
        auVar284[9] = *pbVar35 ^ *pbVar65;
        auVar284[10] = *pbVar36 ^ *pbVar66;
        auVar284[0xb] = *pbVar37 ^ *pbVar67;
        auVar284[0xc] = (byte)*puVar38 ^ (byte)*puVar68;
        auVar284[0xd] = *pbVar39 ^ *pbVar69;
        auVar284[0xe] = *pbVar40 ^ *pbVar70;
        auVar284[0xf] = *pbVar41 ^ *pbVar71;
        auVar279[0] = (byte)uVar2 ^ (byte)uVar117;
        auVar279[1] = *pbVar42 ^ *pbVar72;
        auVar279[2] = *pbVar43 ^ *pbVar73;
        auVar279[3] = *pbVar44 ^ *pbVar74;
        auVar279[4] = (byte)*puVar45 ^ (byte)*puVar75;
        auVar279[5] = *pbVar46 ^ *pbVar76;
        auVar279[6] = *pbVar47 ^ *pbVar77;
        auVar279[7] = *pbVar48 ^ *pbVar78;
        auVar279[8] = (byte)*puVar49 ^ (byte)*puVar79;
        auVar279[9] = *pbVar50 ^ *pbVar80;
        auVar279[10] = *pbVar51 ^ *pbVar81;
        auVar279[0xb] = *pbVar52 ^ *pbVar82;
        auVar279[0xc] = (byte)*puVar53 ^ (byte)*puVar83;
        auVar279[0xd] = *pbVar54 ^ *pbVar84;
        auVar279[0xe] = *pbVar55 ^ *pbVar85;
        auVar279[0xf] = *pbVar56 ^ *pbVar86;
        auVar15[9] = (char)_UNK_001f2b39;
        auVar15[10] = uVar267;
        auVar15[0xb] = uVar268;
        auVar15[0xc] = uVar269;
        auVar15[0xd] = uVar270;
        auVar15[0xe] = uVar271;
        auVar15[0xf] = uVar272;
        auVar281 = a64_TBL(ZEXT816(0),auVar284,auVar15);
        auVar21[9] = (char)_UNK_001f25a9;
        auVar21[10] = uVar273;
        auVar21[0xb] = uVar274;
        auVar21[0xc] = uVar275;
        auVar21[0xd] = uVar276;
        auVar21[0xe] = uVar277;
        auVar21[0xf] = uVar278;
        auVar282 = a64_TBL(ZEXT816(0),auVar284,auVar21);
        auVar5[9] = (char)_UNK_001f45d9;
        auVar5[10] = uVar211;
        auVar5[0xb] = uVar212;
        auVar5[0xc] = uVar213;
        auVar5[0xd] = uVar214;
        auVar5[0xe] = uVar215;
        auVar5[0xf] = uVar216;
        auVar283 = a64_TBL(ZEXT816(0),auVar284,auVar5);
        auVar9[9] = (char)_UNK_001f3049;
        auVar9[10] = uVar261;
        auVar9[0xb] = uVar262;
        auVar9[0xc] = uVar263;
        auVar9[0xd] = uVar264;
        auVar9[0xe] = uVar265;
        auVar9[0xf] = uVar266;
        auVar118 = a64_TBL(ZEXT816(0),auVar284,auVar9);
        auVar22[9] = (char)_UNK_001f25a9;
        auVar22[10] = uVar273;
        auVar22[0xb] = uVar274;
        auVar22[0xc] = uVar275;
        auVar22[0xd] = uVar276;
        auVar22[0xe] = uVar277;
        auVar22[0xf] = uVar278;
        auVar284 = a64_TBL(ZEXT816(0),auVar279,auVar22);
        auVar6[9] = (char)_UNK_001f45d9;
        auVar6[10] = uVar211;
        auVar6[0xb] = uVar212;
        auVar6[0xc] = uVar213;
        auVar6[0xd] = uVar214;
        auVar6[0xe] = uVar215;
        auVar6[0xf] = uVar216;
        auVar285 = a64_TBL(ZEXT816(0),auVar279,auVar6);
        auVar10[9] = (char)_UNK_001f3049;
        auVar10[10] = uVar261;
        auVar10[0xb] = uVar262;
        auVar10[0xc] = uVar263;
        auVar10[0xd] = uVar264;
        auVar10[0xe] = uVar265;
        auVar10[0xf] = uVar266;
        auVar286 = a64_TBL(ZEXT816(0),auVar279,auVar10);
        auVar16[9] = (char)_UNK_001f2b39;
        auVar16[10] = uVar267;
        auVar16[0xb] = uVar268;
        auVar16[0xc] = uVar269;
        auVar16[0xd] = uVar270;
        auVar16[0xe] = uVar271;
        auVar16[0xf] = uVar272;
        auVar280 = a64_TBL(ZEXT816(0),auVar279,auVar16);
        bVar150 = bVar150 | auVar282[0];
        bVar152 = bVar152 | auVar282[1];
        bVar153 = bVar153 | auVar282[2];
        bVar154 = bVar154 | auVar282[3];
        bVar155 = bVar155 | auVar282[4];
        bVar156 = bVar156 | auVar282[5];
        bVar157 = bVar157 | auVar282[6];
        bVar158 = bVar158 | auVar282[7];
        bVar159 = bVar159 | auVar282[8];
        bVar160 = bVar160 | auVar282[9];
        bVar161 = bVar161 | auVar282[10];
        bVar162 = bVar162 | auVar282[0xb];
        bVar163 = bVar163 | auVar282[0xc];
        bVar164 = bVar164 | auVar282[0xd];
        bVar165 = bVar165 | auVar282[0xe];
        bVar166 = bVar166 | auVar282[0xf];
        bVar116 = bVar116 | auVar281[0];
        bVar119 = bVar119 | auVar281[1];
        bVar120 = bVar120 | auVar281[2];
        bVar121 = bVar121 | auVar281[3];
        bVar122 = bVar122 | auVar281[4];
        bVar123 = bVar123 | auVar281[5];
        bVar124 = bVar124 | auVar281[6];
        bVar125 = bVar125 | auVar281[7];
        bVar126 = bVar126 | auVar281[8];
        bVar127 = bVar127 | auVar281[9];
        bVar128 = bVar128 | auVar281[10];
        bVar129 = bVar129 | auVar281[0xb];
        bVar130 = bVar130 | auVar281[0xc];
        bVar131 = bVar131 | auVar281[0xd];
        bVar132 = bVar132 | auVar281[0xe];
        bVar133 = bVar133 | auVar281[0xf];
        bVar100 = bVar100 | auVar283[0];
        bVar101 = bVar101 | auVar283[1];
        bVar102 = bVar102 | auVar283[2];
        bVar103 = bVar103 | auVar283[3];
        bVar104 = bVar104 | auVar283[4];
        bVar107 = bVar107 | auVar283[5];
        bVar112 = bVar112 | auVar283[6];
        bVar105 = bVar105 | auVar283[7];
        bVar106 = bVar106 | auVar283[8];
        bVar108 = bVar108 | auVar283[9];
        bVar109 = bVar109 | auVar283[10];
        bVar110 = bVar110 | auVar283[0xb];
        bVar111 = bVar111 | auVar283[0xc];
        bVar113 = bVar113 | auVar283[0xd];
        bVar114 = bVar114 | auVar283[0xe];
        bVar115 = bVar115 | auVar283[0xf];
        bVar134 = bVar134 | auVar118[0];
        bVar135 = bVar135 | auVar118[1];
        bVar136 = bVar136 | auVar118[2];
        bVar137 = bVar137 | auVar118[3];
        bVar138 = bVar138 | auVar118[4];
        bVar139 = bVar139 | auVar118[5];
        bVar140 = bVar140 | auVar118[6];
        bVar141 = bVar141 | auVar118[7];
        bVar142 = bVar142 | auVar118[8];
        bVar143 = bVar143 | auVar118[9];
        bVar144 = bVar144 | auVar118[10];
        bVar145 = bVar145 | auVar118[0xb];
        bVar146 = bVar146 | auVar118[0xc];
        bVar147 = bVar147 | auVar118[0xd];
        bVar148 = bVar148 | auVar118[0xe];
        bVar149 = bVar149 | auVar118[0xf];
        bVar239 = (byte)uVar241 | auVar284[0];
        bVar242 = (byte)((ulong)uVar241 >> 8) | auVar284[1];
        bVar243 = (byte)((ulong)uVar241 >> 0x10) | auVar284[2];
        bVar244 = (byte)((ulong)uVar241 >> 0x18) | auVar284[3];
        bVar245 = (byte)((ulong)uVar241 >> 0x20) | auVar284[4];
        bVar247 = (byte)((ulong)uVar241 >> 0x28) | auVar284[5];
        bVar248 = (byte)((ulong)uVar241 >> 0x30) | auVar284[6];
        bVar249 = (byte)((ulong)uVar241 >> 0x38) | auVar284[7];
        uVar241 = CONCAT17(bVar249,CONCAT16(bVar248,CONCAT15(bVar247,CONCAT14(bVar245,CONCAT13(
                                                  bVar244,CONCAT12(bVar243,CONCAT11(bVar242,bVar239)
                                                                  ))))));
        bVar250 = (byte)uVar252 | auVar284[8];
        bVar253 = (byte)((ulong)uVar252 >> 8) | auVar284[9];
        bVar254 = (byte)((ulong)uVar252 >> 0x10) | auVar284[10];
        bVar255 = (byte)((ulong)uVar252 >> 0x18) | auVar284[0xb];
        bVar256 = (byte)((ulong)uVar252 >> 0x20) | auVar284[0xc];
        bVar258 = (byte)((ulong)uVar252 >> 0x28) | auVar284[0xd];
        bVar259 = (byte)((ulong)uVar252 >> 0x30) | auVar284[0xe];
        bVar260 = (byte)((ulong)uVar252 >> 0x38) | auVar284[0xf];
        uVar252 = CONCAT17(bVar260,CONCAT16(bVar259,CONCAT15(bVar258,CONCAT14(bVar256,CONCAT13(
                                                  bVar255,CONCAT12(bVar254,CONCAT11(bVar253,bVar250)
                                                                  ))))));
        bVar167 = (byte)uVar169 | auVar285[0];
        bVar170 = (byte)((ulong)uVar169 >> 8) | auVar285[1];
        bVar171 = (byte)((ulong)uVar169 >> 0x10) | auVar285[2];
        bVar172 = (byte)((ulong)uVar169 >> 0x18) | auVar285[3];
        bVar173 = (byte)((ulong)uVar169 >> 0x20) | auVar285[4];
        bVar175 = (byte)((ulong)uVar169 >> 0x28) | auVar285[5];
        bVar176 = (byte)((ulong)uVar169 >> 0x30) | auVar285[6];
        bVar177 = (byte)((ulong)uVar169 >> 0x38) | auVar285[7];
        uVar169 = CONCAT17(bVar177,CONCAT16(bVar176,CONCAT15(bVar175,CONCAT14(bVar173,CONCAT13(
                                                  bVar172,CONCAT12(bVar171,CONCAT11(bVar170,bVar167)
                                                                  ))))));
        bVar178 = (byte)uVar180 | auVar285[8];
        bVar181 = (byte)((ulong)uVar180 >> 8) | auVar285[9];
        bVar182 = (byte)((ulong)uVar180 >> 0x10) | auVar285[10];
        bVar183 = (byte)((ulong)uVar180 >> 0x18) | auVar285[0xb];
        bVar184 = (byte)((ulong)uVar180 >> 0x20) | auVar285[0xc];
        bVar186 = (byte)((ulong)uVar180 >> 0x28) | auVar285[0xd];
        bVar187 = (byte)((ulong)uVar180 >> 0x30) | auVar285[0xe];
        bVar188 = (byte)((ulong)uVar180 >> 0x38) | auVar285[0xf];
        uVar180 = CONCAT17(bVar188,CONCAT16(bVar187,CONCAT15(bVar186,CONCAT14(bVar184,CONCAT13(
                                                  bVar183,CONCAT12(bVar182,CONCAT11(bVar181,bVar178)
                                                                  ))))));
        bVar189 = (byte)uVar191 | auVar280[0];
        bVar192 = (byte)((ulong)uVar191 >> 8) | auVar280[1];
        bVar193 = (byte)((ulong)uVar191 >> 0x10) | auVar280[2];
        bVar194 = (byte)((ulong)uVar191 >> 0x18) | auVar280[3];
        bVar195 = (byte)((ulong)uVar191 >> 0x20) | auVar280[4];
        bVar197 = (byte)((ulong)uVar191 >> 0x28) | auVar280[5];
        bVar198 = (byte)((ulong)uVar191 >> 0x30) | auVar280[6];
        bVar199 = (byte)((ulong)uVar191 >> 0x38) | auVar280[7];
        uVar191 = CONCAT17(bVar199,CONCAT16(bVar198,CONCAT15(bVar197,CONCAT14(bVar195,CONCAT13(
                                                  bVar194,CONCAT12(bVar193,CONCAT11(bVar192,bVar189)
                                                                  ))))));
        bVar200 = (byte)uVar202 | auVar280[8];
        bVar203 = (byte)((ulong)uVar202 >> 8) | auVar280[9];
        bVar204 = (byte)((ulong)uVar202 >> 0x10) | auVar280[10];
        bVar205 = (byte)((ulong)uVar202 >> 0x18) | auVar280[0xb];
        bVar206 = (byte)((ulong)uVar202 >> 0x20) | auVar280[0xc];
        bVar208 = (byte)((ulong)uVar202 >> 0x28) | auVar280[0xd];
        bVar209 = (byte)((ulong)uVar202 >> 0x30) | auVar280[0xe];
        bVar210 = (byte)((ulong)uVar202 >> 0x38) | auVar280[0xf];
        uVar202 = CONCAT17(bVar210,CONCAT16(bVar209,CONCAT15(bVar208,CONCAT14(bVar206,CONCAT13(
                                                  bVar205,CONCAT12(bVar204,CONCAT11(bVar203,bVar200)
                                                                  ))))));
        bVar217 = (byte)uVar219 | auVar286[0];
        bVar220 = (byte)((ulong)uVar219 >> 8) | auVar286[1];
        bVar221 = (byte)((ulong)uVar219 >> 0x10) | auVar286[2];
        bVar222 = (byte)((ulong)uVar219 >> 0x18) | auVar286[3];
        bVar223 = (byte)((ulong)uVar219 >> 0x20) | auVar286[4];
        bVar225 = (byte)((ulong)uVar219 >> 0x28) | auVar286[5];
        bVar226 = (byte)((ulong)uVar219 >> 0x30) | auVar286[6];
        bVar227 = (byte)((ulong)uVar219 >> 0x38) | auVar286[7];
        uVar219 = CONCAT17(bVar227,CONCAT16(bVar226,CONCAT15(bVar225,CONCAT14(bVar223,CONCAT13(
                                                  bVar222,CONCAT12(bVar221,CONCAT11(bVar220,bVar217)
                                                                  ))))));
        bVar228 = (byte)uVar230 | auVar286[8];
        bVar231 = (byte)((ulong)uVar230 >> 8) | auVar286[9];
        bVar232 = (byte)((ulong)uVar230 >> 0x10) | auVar286[10];
        bVar233 = (byte)((ulong)uVar230 >> 0x18) | auVar286[0xb];
        bVar234 = (byte)((ulong)uVar230 >> 0x20) | auVar286[0xc];
        bVar236 = (byte)((ulong)uVar230 >> 0x28) | auVar286[0xd];
        bVar237 = (byte)((ulong)uVar230 >> 0x30) | auVar286[0xe];
        bVar238 = (byte)((ulong)uVar230 >> 0x38) | auVar286[0xf];
        uVar230 = CONCAT17(bVar238,CONCAT16(bVar237,CONCAT15(bVar236,CONCAT14(bVar234,CONCAT13(
                                                  bVar233,CONCAT12(bVar232,CONCAT11(bVar231,bVar228)
                                                                  ))))));
      } while (uVar91 != 0);
      bVar100 = bVar167 | bVar100 | bVar189 | bVar116 | bVar217 | bVar134 | bVar239 | bVar150;
      bVar101 = bVar170 | bVar101 | bVar192 | bVar119 | bVar220 | bVar135 | bVar242 | bVar152;
      bVar102 = bVar171 | bVar102 | bVar193 | bVar120 | bVar221 | bVar136 | bVar243 | bVar153;
      bVar103 = bVar172 | bVar103 | bVar194 | bVar121 | bVar222 | bVar137 | bVar244 | bVar154;
      bVar104 = bVar173 | bVar104 | bVar195 | bVar122 | bVar223 | bVar138 | bVar245 | bVar155;
      bVar107 = bVar175 | bVar107 | bVar197 | bVar123 | bVar225 | bVar139 | bVar247 | bVar156;
      bVar112 = bVar176 | bVar112 | bVar198 | bVar124 | bVar226 | bVar140 | bVar248 | bVar157;
      bVar105 = bVar177 | bVar105 | bVar199 | bVar125 | bVar227 | bVar141 | bVar249 | bVar158;
      bVar106 = bVar178 | bVar106 | bVar200 | bVar126 | bVar228 | bVar142 | bVar250 | bVar159;
      bVar108 = bVar181 | bVar108 | bVar203 | bVar127 | bVar231 | bVar143 | bVar253 | bVar160;
      bVar109 = bVar182 | bVar109 | bVar204 | bVar128 | bVar232 | bVar144 | bVar254 | bVar161;
      bVar110 = bVar183 | bVar110 | bVar205 | bVar129 | bVar233 | bVar145 | bVar255 | bVar162;
      bVar111 = bVar184 | bVar111 | bVar206 | bVar130 | bVar234 | bVar146 | bVar256 | bVar163;
      bVar113 = bVar186 | bVar113 | bVar208 | bVar131 | bVar236 | bVar147 | bVar258 | bVar164;
      bVar114 = bVar187 | bVar114 | bVar209 | bVar132 | bVar237 | bVar148 | bVar259 | bVar165;
      bVar115 = bVar188 | bVar115 | bVar210 | bVar133 | bVar238 | bVar149 | bVar260 | bVar166;
      auVar283[1] = bVar101;
      auVar283[0] = bVar100;
      auVar283[2] = bVar102;
      auVar283[3] = bVar103;
      auVar283[4] = bVar104;
      auVar283[5] = bVar107;
      auVar283[6] = bVar112;
      auVar283[7] = bVar105;
      auVar283[8] = bVar106;
      auVar283[9] = bVar108;
      auVar283[10] = bVar109;
      auVar283[0xb] = bVar110;
      auVar283[0xc] = bVar111;
      auVar283[0xd] = bVar113;
      auVar283[0xe] = bVar114;
      auVar283[0xf] = bVar115;
      auVar285[1] = bVar101;
      auVar285[0] = bVar100;
      auVar285[2] = bVar102;
      auVar285[3] = bVar103;
      auVar285[4] = bVar104;
      auVar285[5] = bVar107;
      auVar285[6] = bVar112;
      auVar285[7] = bVar105;
      auVar285[8] = bVar106;
      auVar285[9] = bVar108;
      auVar285[10] = bVar109;
      auVar285[0xb] = bVar110;
      auVar285[0xc] = bVar111;
      auVar285[0xd] = bVar113;
      auVar285[0xe] = bVar114;
      auVar285[0xf] = bVar115;
      auVar118 = NEON_ext(auVar283,auVar285,8,1);
      uVar117 = CONCAT13(bVar103 | auVar118[3],
                         CONCAT12(bVar102 | auVar118[2],
                                  CONCAT11(bVar101 | auVar118[1],bVar100 | auVar118[0])));
      uVar117 = uVar117 | (uint)(CONCAT17(bVar105 | auVar118[7],
                                          CONCAT16(bVar112 | auVar118[6],
                                                   CONCAT15(bVar107 | auVar118[5],
                                                            CONCAT14(bVar104 | auVar118[4],uVar117))
                                                  )) >> 0x20);
      if (uVar93 == uVar95) goto LAB_00c4d180;
      if ((uVar93 & 0x1c) == 0) {
        puVar87 = (uint *)((long)puVar87 + uVar95);
        puVar90 = (uint *)((long)puVar88 + uVar95);
        goto LAB_00c4d164;
      }
    }
    bVar104 = 0;
    bVar107 = 0;
    bVar112 = 0;
    bVar100 = (byte)uVar117;
    bVar101 = (byte)(uVar117 >> 8);
    bVar102 = (byte)(uVar117 >> 0x10);
    bVar103 = (byte)(uVar117 >> 0x18);
    uVar91 = uVar93 & 0xfffffffffffffffc;
    lVar96 = uVar95 - uVar91;
    puVar89 = (undefined4 *)((long)puVar87 + uVar95);
    puVar97 = (undefined4 *)((long)puVar88 + uVar95);
    do {
      uVar4 = *puVar89;
      lVar96 = lVar96 + 4;
      uVar151 = *puVar97;
      bVar100 = bVar100 | (byte)uVar151 ^ (byte)uVar4;
      bVar104 = bVar104 | (byte)((uint)uVar151 >> 8) ^ (byte)((uint)uVar4 >> 8);
      bVar107 = bVar107 | (byte)((uint)uVar151 >> 0x10) ^ (byte)((uint)uVar4 >> 0x10);
      bVar112 = bVar112 | (byte)((uint)uVar151 >> 0x18) ^ (byte)((uint)uVar4 >> 0x18);
      puVar89 = puVar89 + 1;
      puVar97 = puVar97 + 1;
    } while (lVar96 != 0);
    auVar286[1] = bVar101;
    auVar286[0] = bVar100;
    auVar286[2] = bVar102;
    auVar286[3] = bVar103;
    auVar286[4] = bVar104;
    auVar286._5_3_ = 0;
    auVar286[8] = bVar107;
    auVar286._9_3_ = 0;
    auVar286[0xc] = bVar112;
    auVar286._13_3_ = 0;
    auVar3[1] = bVar101;
    auVar3[0] = bVar100;
    auVar3[2] = bVar102;
    auVar3[3] = bVar103;
    auVar3[4] = bVar104;
    auVar3._5_3_ = 0;
    auVar3[8] = bVar107;
    auVar3._9_3_ = 0;
    auVar3[0xc] = bVar112;
    auVar3._13_3_ = 0;
    auVar118 = NEON_ext(auVar286,auVar3,8,1);
    uVar117 = CONCAT13(bVar103 | auVar118[3],
                       CONCAT12(bVar102 | auVar118[2],
                                CONCAT11(bVar101 | auVar118[1],bVar100 | auVar118[0])));
    uVar117 = uVar117 | (uint)(CONCAT17(auVar118[7],
                                        CONCAT16(auVar118[6],
                                                 CONCAT15(auVar118[5],
                                                          CONCAT14(bVar104 | auVar118[4],uVar117))))
                              >> 0x20);
    puVar87 = (uint *)((long)puVar87 + uVar91);
    puVar90 = (uint *)((long)puVar88 + uVar91);
    if (uVar93 == uVar91) goto LAB_00c4d180;
  }
LAB_00c4d164:
  do {
    puVar94 = (uint *)((long)puVar90 + 1);
    uVar117 = uVar117 | (byte)((byte)*puVar90 ^ (byte)*puVar87);
    puVar87 = (uint *)((long)puVar87 + 1);
    puVar90 = puVar94;
  } while (puVar94 != (uint *)((long)puVar88 + uVar93));
LAB_00c4d180:
  return uVar117 != 0;
}


// ===== 00c4d198  thunk_FUN_0078cba8 =====

void thunk_FUN_0078cba8(void)

{
  FUN_0078cba8();
  return;
}


// ===== 00c4d1a0  FUN_00c4d1a0 =====

undefined8 FUN_00c4d1a0(long *param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00c4d1b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 8))();
    return uVar1;
  }
  return 2;
}


// ===== 00c4d1c0  FUN_00c4d1c0 =====

undefined8 FUN_00c4d1c0(long *param_1)

{
  undefined8 uVar1;
  
  if (((param_1 != (long *)0x0) && (*param_1 != 0)) && (param_1[1] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00c4d1dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x10))();
    return uVar1;
  }
  return 2;
}


// ===== 00c4d1e8  FUN_00c4d1e8 =====

undefined8 FUN_00c4d1e8(long *param_1)

{
  undefined8 uVar1;
  
  if (((param_1 != (long *)0x0) && (*param_1 != 0)) && (param_1[1] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00c4d204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x30))();
    return uVar1;
  }
  return 2;
}


// ===== 00c4d210  FUN_00c4d210 =====

void FUN_00c4d210(long *param_1,undefined8 param_2,undefined4 *param_3)

{
  thunk_FUN_0078cba8(param_2,*param_3);
                    /* WARNING: Could not recover jumptable at 0x00c4d25c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1[1],param_2,param_3);
  return;
}


// ===== 00c4d260  FUN_00c4d260 =====

undefined8 FUN_00c4d260(long *param_1)

{
  undefined8 uVar1;
  
  if (((param_1 != (long *)0x0) && (*param_1 != 0)) && (param_1[1] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00c4d27c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x20))();
    return uVar1;
  }
  return 2;
}


// ===== 00c4d288  FUN_00c4d288 =====

undefined8 FUN_00c4d288(long *param_1)

{
  undefined8 uVar1;
  
  if (((param_1 != (long *)0x0) && (*param_1 != 0)) && (param_1[1] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00c4d2a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x28))();
    return uVar1;
  }
  return 2;
}


// ===== 00c4d2b0  FUN_00c4d2b0 =====

undefined8 FUN_00c4d2b0(long *param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (((param_1 != (long *)0x0) && (*param_1 != 0)) && (param_1[1] != 0)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x38);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c4d2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)();
      return uVar1;
    }
    return 0xc;
  }
  return 2;
}


// ===== 00c4d2e4  FUN_00c4d2e4 =====

undefined8 FUN_00c4d2e4(long *param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (((param_1 != (long *)0x0) && (*param_1 != 0)) && (param_1[1] != 0)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x18);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c4d304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)();
      return uVar1;
    }
    return 0xc;
  }
  return 2;
}


// ===== 00c4d318  FUN_00c4d318 =====

undefined4 FUN_00c4d318(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}


// ===== 00c4d324  FUN_00c4d324 =====

int FUN_00c4d324(undefined8 *param_1,int *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 **ppuVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  char *pcVar9;
  ulong uVar10;
  code *pcVar11;
  ulong uVar12;
  undefined1 **ppuVar13;
  undefined1 **ppuVar14;
  int *piVar15;
  int iVar16;
  undefined *puVar17;
  long lVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  int local_218;
  uint local_214;
  uint local_210;
  int local_20c;
  long *local_208;
  undefined1 *local_200;
  undefined1 *puStack_1f8;
  undefined1 *local_1f0;
  undefined1 *puStack_1e8;
  undefined1 *puStack_1e0;
  undefined1 *puStack_1d8;
  undefined1 *local_1d0;
  undefined1 *puStack_1c8;
  undefined1 *puStack_1c0;
  undefined1 *puStack_1b8;
  undefined1 *local_1b0;
  undefined1 *puStack_1a8;
  undefined1 *puStack_1a0;
  undefined1 *puStack_198;
  undefined1 *local_190;
  undefined1 *puStack_188;
  undefined1 *local_180 [7];
  undefined1 *puStack_148;
  undefined1 *local_140;
  undefined1 *puStack_138;
  undefined1 *puStack_130;
  undefined1 *puStack_128;
  undefined1 *local_120;
  undefined1 *puStack_118;
  undefined1 *puStack_110;
  undefined1 *puStack_108;
  undefined1 *local_100 [7];
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  local_180[1] = &DAT_aaaaaaaaaaaaaaaa;
  local_180[0] = &DAT_aaaaaaaaaaaaaaaa;
  local_180[3] = &DAT_aaaaaaaaaaaaaaaa;
  local_180[2] = &DAT_aaaaaaaaaaaaaaaa;
  local_180[5] = &DAT_aaaaaaaaaaaaaaaa;
  local_180[4] = &DAT_aaaaaaaaaaaaaaaa;
  puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
  local_180[6] = &DAT_aaaaaaaaaaaaaaaa;
  puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
  local_140 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
  local_120 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_110 = &DAT_aaaaaaaaaaaaaaaa;
  if (DAT_00d60168 != 0) {
    FUN_00c4c870(3,"%s: running self-test for cipher %s\n",PTR_s_cipher_00d60170,param_1[8]);
  }
  if (param_2 == (int *)0x0) {
LAB_00c4e03c:
    iVar4 = 0xe;
  }
  else {
    if (param_1 != (undefined8 *)0x0) {
      local_208 = (long *)&DAT_aaaaaaaaaaaaaaaa;
      local_218 = 0;
      local_210 = 0xaaaaaaaa;
      local_20c = -0x55555556;
      local_100[1] = &DAT_aaaaaaaaaaaaaaaa;
      local_100[0] = &DAT_aaaaaaaaaaaaaaaa;
      local_100[3] = &DAT_aaaaaaaaaaaaaaaa;
      local_100[2] = &DAT_aaaaaaaaaaaaaaaa;
      local_100[5] = &DAT_aaaaaaaaaaaaaaaa;
      local_100[4] = &DAT_aaaaaaaaaaaaaaaa;
      puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
      local_100[6] = &DAT_aaaaaaaaaaaaaaaa;
      puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
      local_c0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
      local_a0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
      piVar15 = param_2;
      do {
        if ((code *)*param_1 == (code *)0x0) goto LAB_00c4dfe4;
        iVar4 = (*(code *)*param_1)(&local_208,*piVar15,piVar15[0x12]);
        if (iVar4 != 0) goto LAB_00c4e040;
        if (DAT_00d60168 != 0) {
          FUN_00c4c870(3,"%s: testing encryption\n",PTR_s_cipher_00d60170);
        }
        if ((local_208 == (long *)0x0) || (*local_208 == 0)) goto LAB_00c4dfe4;
        if (local_208[1] == 0) goto LAB_00c4dfec;
        iVar4 = (**(code **)(*local_208 + 0x10))(local_208[1],*(undefined8 *)(piVar15 + 2));
        puVar17 = PTR_s_cipher_00d60170;
        if (iVar4 != 0) goto joined_r0x00c4e004;
        if (0x80 < (uint)piVar15[10]) {
          if ((local_208 == (long *)0x0) || (lVar18 = *local_208, lVar18 == 0)) goto LAB_00c4dfe4;
LAB_00c4da3c:
          (**(code **)(lVar18 + 8))();
          iVar4 = 2;
          goto LAB_00c4e040;
        }
        if (piVar15[6] == 0) {
          uVar8 = 0;
        }
        else {
          uVar10 = 0;
          do {
            if (uVar10 == 0x80) goto LAB_00c4e090;
            *(undefined1 *)((long)local_100 + uVar10) =
                 *(undefined1 *)(*(long *)(piVar15 + 8) + uVar10);
            uVar10 = uVar10 + 1;
            uVar8 = (ulong)(uint)piVar15[6];
          } while (uVar10 < uVar8);
        }
        if (DAT_00d60168 != 0) {
          uVar7 = FUN_00c4c9cc(local_100,uVar8);
          FUN_00c4c870(3,"%s: plaintext:    %s\n",puVar17,uVar7);
        }
        if ((local_208 == (long *)0x0) || (*local_208 == 0)) goto LAB_00c4dfe4;
        if (local_208[1] == 0) goto LAB_00c4dfec;
        iVar4 = (**(code **)(*local_208 + 0x30))(local_208[1],*(undefined8 *)(piVar15 + 4),0);
        puVar17 = PTR_s_cipher_00d60170;
        if (iVar4 != 0) goto joined_r0x00c4e004;
        if ((*(uint *)((long)local_208 + 0x14) & 0xfffffffe) == 6) {
          if (DAT_00d60168 != 0) {
            uVar7 = FUN_00c4c9cc(*(undefined8 *)(piVar15 + 4),0xc);
            FUN_00c4c870(3,"%s: IV:    %s\n",puVar17,uVar7);
          }
          if ((local_208 == (long *)0x0) || (*local_208 == 0)) goto LAB_00c4dfe4;
          if (local_208[1] == 0) goto LAB_00c4dfec;
          pcVar11 = *(code **)(*local_208 + 0x18);
          if (pcVar11 == (code *)0x0) goto LAB_00c4e00c;
          iVar4 = (*pcVar11)(local_208[1],*(undefined8 *)(piVar15 + 0x10),piVar15[0xe]);
          puVar17 = PTR_s_cipher_00d60170;
          if (iVar4 != 0) goto joined_r0x00c4e004;
          if (DAT_00d60168 != 0) {
            uVar7 = FUN_00c4c9cc(*(undefined8 *)(piVar15 + 0x10),piVar15[0xe]);
            FUN_00c4c870(3,"%s: AAD:    %s\n",puVar17,uVar7);
          }
        }
        local_210 = piVar15[6];
        if ((local_208 == (long *)0x0) || (*local_208 == 0)) goto LAB_00c4dfe4;
        if (local_208[1] == 0) goto LAB_00c4dfec;
        iVar4 = (**(code **)(*local_208 + 0x20))(local_208[1],local_100,&local_210);
        if (iVar4 != 0) goto joined_r0x00c4e004;
        if ((*(uint *)((long)local_208 + 0x14) & 0xfffffffe) == 6) {
          if (0x80 < local_210) goto LAB_00c4e090;
          if ((local_208 == (long *)0x0) || (*local_208 == 0)) goto LAB_00c4dfe4;
          if (local_208[1] == 0) goto LAB_00c4dfec;
          pcVar11 = *(code **)(*local_208 + 0x38);
          if (pcVar11 == (code *)0x0) goto LAB_00c4e00c;
          iVar4 = (*pcVar11)(local_208[1],(long)local_100 + (ulong)local_210,&local_20c);
          if (iVar4 != 0) goto joined_r0x00c4e004;
          local_210 = local_210 + local_20c;
        }
        puVar17 = PTR_s_cipher_00d60170;
        if (DAT_00d60168 != 0) {
          uVar7 = FUN_00c4c9cc(local_100,piVar15[10]);
          FUN_00c4c870(3,"%s: ciphertext:   %s\n",puVar17,uVar7);
        }
        if (local_210 != piVar15[10]) {
LAB_00c4d9f8:
          if ((local_208 != (long *)0x0) && (*local_208 != 0)) {
            (**(code **)(*local_208 + 8))();
          }
          goto LAB_00c4da10;
        }
        if (local_210 != 0) {
          uVar8 = 0;
          do {
            if (uVar8 == 0x80) goto LAB_00c4e090;
            if (*(char *)((long)local_100 + uVar8) != *(char *)(*(long *)(piVar15 + 0xc) + uVar8)) {
              if (((DAT_00d60168 == 0) ||
                  (FUN_00c4c870(3,"%s: test case %d failed\n",PTR_s_cipher_00d60170,local_218),
                  DAT_00d60168 == 0)) ||
                 (FUN_00c4c870(3,"%s: (failure at byte %u)\n",PTR_s_cipher_00d60170,
                               uVar8 & 0xffffffff), puVar17 = PTR_s_cipher_00d60170,
                 DAT_00d60168 == 0)) goto LAB_00c4d9f8;
              uVar7 = FUN_00c4c9cc(local_100,piVar15[6] << 1);
              FUN_00c4c870(3,"%s: c computed: %s\n",puVar17,uVar7);
              puVar17 = PTR_s_cipher_00d60170;
              if (DAT_00d60168 == 0) goto LAB_00c4d9f8;
              uVar7 = FUN_00c4c9cc(*(undefined8 *)(piVar15 + 0xc),piVar15[6] << 1);
              pcVar9 = "%s: c expected: %s\n";
              goto LAB_00c4d9ec;
            }
            uVar8 = uVar8 + 1;
          } while (local_210 != uVar8);
        }
        if (DAT_00d60168 != 0) {
          FUN_00c4c870(3,"%s: testing decryption\n",PTR_s_cipher_00d60170);
        }
        if ((local_208 == (long *)0x0) || (*local_208 == 0)) goto LAB_00c4dfe4;
        if (local_208[1] == 0) goto LAB_00c4dfec;
        iVar4 = (**(code **)(*local_208 + 0x10))(local_208[1],*(undefined8 *)(piVar15 + 2));
        puVar17 = PTR_s_cipher_00d60170;
        if (iVar4 != 0) goto joined_r0x00c4e004;
        if (0x80 < (uint)piVar15[10]) {
          if ((local_208 != (long *)0x0) && (lVar18 = *local_208, lVar18 != 0)) goto LAB_00c4da3c;
          goto LAB_00c4dfe4;
        }
        if (piVar15[10] != 0) {
          uVar8 = 0;
          do {
            if (uVar8 == 0x80) goto LAB_00c4e090;
            *(undefined1 *)((long)local_100 + uVar8) =
                 *(undefined1 *)(*(long *)(piVar15 + 0xc) + uVar8);
            uVar8 = uVar8 + 1;
          } while (uVar8 < (uint)piVar15[10]);
        }
        if (DAT_00d60168 != 0) {
          uVar7 = FUN_00c4c9cc(local_100,piVar15[6]);
          FUN_00c4c870(3,"%s: ciphertext:    %s\n",puVar17,uVar7);
        }
        if ((local_208 == (long *)0x0) || (*local_208 == 0)) goto LAB_00c4dfe4;
        if (local_208[1] == 0) goto LAB_00c4dfec;
        iVar4 = (**(code **)(*local_208 + 0x30))(local_208[1],*(undefined8 *)(piVar15 + 4),1);
        if (iVar4 != 0) goto joined_r0x00c4e004;
        if ((*(uint *)((long)local_208 + 0x14) & 0xfffffffe) == 6) {
          if ((local_208 == (long *)0x0) || (*local_208 == 0)) goto LAB_00c4dfe4;
          if (local_208[1] == 0) goto LAB_00c4dfec;
          pcVar11 = *(code **)(*local_208 + 0x18);
          if (pcVar11 == (code *)0x0) goto LAB_00c4e00c;
          iVar4 = (*pcVar11)(local_208[1],*(undefined8 *)(piVar15 + 0x10),piVar15[0xe]);
          puVar17 = PTR_s_cipher_00d60170;
          if (iVar4 != 0) goto joined_r0x00c4e004;
          if (DAT_00d60168 != 0) {
            uVar7 = FUN_00c4c9cc(*(undefined8 *)(piVar15 + 0x10),piVar15[0xe]);
            FUN_00c4c870(3,"%s: AAD:    %s\n",puVar17,uVar7);
          }
        }
        local_210 = piVar15[10];
        if ((local_208 == (long *)0x0) || (*local_208 == 0)) goto LAB_00c4dfe4;
        if (local_208[1] == 0) goto LAB_00c4dfec;
        iVar4 = (**(code **)(*local_208 + 0x28))(local_208[1],local_100,&local_210);
        puVar17 = PTR_s_cipher_00d60170;
        if (iVar4 != 0) goto joined_r0x00c4e004;
        if (DAT_00d60168 != 0) {
          uVar7 = FUN_00c4c9cc(local_100,piVar15[6]);
          FUN_00c4c870(3,"%s: plaintext:   %s\n",puVar17,uVar7);
        }
        if (local_210 != piVar15[6]) goto LAB_00c4d9f8;
        if (local_210 != 0) {
          uVar8 = 0;
          iVar4 = 0;
          do {
            if (uVar8 == 0x80) goto LAB_00c4e090;
            if (*(char *)((long)local_100 + uVar8) != *(char *)(*(long *)(piVar15 + 8) + uVar8)) {
              if ((DAT_00d60168 != 0) &&
                 (FUN_00c4c870(3,"%s: test case %d failed\n",PTR_s_cipher_00d60170,local_218),
                 DAT_00d60168 != 0)) {
                FUN_00c4c870(3,"%s: (failure at byte %u)\n",PTR_s_cipher_00d60170,uVar8 & 0xffffffff
                            );
              }
              iVar4 = 0xb;
            }
            puVar17 = PTR_s_cipher_00d60170;
            uVar8 = uVar8 + 1;
          } while (uVar8 < (uint)piVar15[6]);
          if (iVar4 != 0) {
            if (DAT_00d60168 != 0) {
              uVar7 = FUN_00c4c9cc(local_100,piVar15[6] << 1);
              FUN_00c4c870(3,"%s: p computed: %s\n",puVar17,uVar7);
              puVar17 = PTR_s_cipher_00d60170;
              if (DAT_00d60168 != 0) {
                uVar7 = FUN_00c4c9cc(*(undefined8 *)(piVar15 + 8),piVar15[6] << 1);
                pcVar9 = "%s: p expected: %s\n";
LAB_00c4d9ec:
                FUN_00c4c870(3,pcVar9,puVar17,uVar7);
              }
            }
            goto LAB_00c4d9f8;
          }
        }
        if ((local_208 == (long *)0x0) || (*local_208 == 0)) goto LAB_00c4dfe4;
        iVar4 = (**(code **)(*local_208 + 8))();
        if (iVar4 != 0) goto LAB_00c4e040;
        piVar15 = *(int **)(piVar15 + 0x14);
        local_218 = local_218 + 1;
      } while (piVar15 != (int *)0x0);
      if ((code *)*param_1 != (code *)0x0) {
        iVar4 = (*(code *)*param_1)(&local_208,*param_2,param_2[0x12]);
        if (iVar4 != 0) goto LAB_00c4e040;
        iVar16 = 0;
        do {
          puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
          local_190 = &DAT_aaaaaaaaaaaaaaaa;
          local_214 = 0xaaaaaaaa;
          puStack_1e8 = &DAT_aaaaaaaaaaaaaaaa;
          local_1f0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_1d8 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_1e0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_1c8 = &DAT_aaaaaaaaaaaaaaaa;
          local_1d0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_1b8 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_1c0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_1a8 = &DAT_aaaaaaaaaaaaaaaa;
          local_1b0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_198 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_1a0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_1f8 = &DAT_aaaaaaaaaaaaaaaa;
          local_200 = &DAT_aaaaaaaaaaaaaaaa;
          uVar5 = rand();
          rand();
          rand();
          rand();
          local_214 = uVar5 & 0x3f;
          if (DAT_00d60168 != 0) {
            FUN_00c4c870(3,"%s: random plaintext length %d\n\n",PTR_s_cipher_00d60170,local_214);
          }
          if (local_214 == 0) {
            uVar8 = 0;
          }
          else {
            ppuVar14 = local_100;
            uVar5 = local_214;
            do {
              iVar4 = rand();
              uVar5 = uVar5 - 1;
              *(char *)ppuVar14 = (char)iVar4;
              ppuVar14 = (undefined1 **)((long)ppuVar14 + 1);
            } while (uVar5 != 0);
            uVar8 = (ulong)local_214;
          }
          puVar17 = PTR_s_cipher_00d60170;
          if (DAT_00d60168 != 0) {
            uVar7 = FUN_00c4c9cc(local_100);
            FUN_00c4c870(3,"%s: plaintext:    %s\n",puVar17,uVar7);
            uVar8 = (ulong)local_214;
          }
          if ((uint)uVar8 != 0) {
            if ((uint)uVar8 < 0x21) {
              uVar12 = 0;
            }
            else {
              uVar10 = uVar8 - 1;
              if (0x7f < uVar10) {
                uVar10 = 0x80;
              }
              uVar1 = uVar10 + 1 & 0x1f;
              uVar12 = 0x20;
              if (uVar1 != 0) {
                uVar12 = uVar1;
              }
              ppuVar14 = local_180 + 2;
              uVar12 = (uVar10 + 1) - uVar12;
              ppuVar13 = local_100 + 2;
              uVar10 = uVar12;
              do {
                ppuVar3 = ppuVar13 + -1;
                puVar19 = ppuVar13[-2];
                puVar21 = ppuVar13[1];
                puVar20 = *ppuVar13;
                uVar10 = uVar10 - 0x20;
                ppuVar13 = ppuVar13 + 4;
                ppuVar14[-1] = *ppuVar3;
                ppuVar14[-2] = puVar19;
                ppuVar14[1] = puVar21;
                *ppuVar14 = puVar20;
                ppuVar14 = ppuVar14 + 4;
              } while (uVar10 != 0);
            }
            do {
              if (uVar12 == 0x80) goto LAB_00c4e090;
              *(undefined1 *)((long)local_180 + uVar12) = *(undefined1 *)((long)local_100 + uVar12);
              uVar12 = uVar12 + 1;
            } while (uVar8 != uVar12);
          }
          iVar4 = *param_2;
          if (0x40 < iVar4) {
            if (local_208 == (long *)0x0) goto LAB_00c4e03c;
            lVar18 = *local_208;
            iVar4 = 0xe;
            goto joined_r0x00c4e014;
          }
          if (iVar4 != 0) {
            ppuVar14 = &puStack_1c0;
            do {
              iVar6 = rand();
              iVar4 = iVar4 + -1;
              *(char *)ppuVar14 = (char)iVar6;
              ppuVar14 = (undefined1 **)((long)ppuVar14 + 1);
            } while (iVar4 != 0);
          }
          lVar18 = 0;
          do {
            iVar4 = rand();
            *(char *)((long)&local_200 + lVar18) = (char)iVar4;
            lVar18 = lVar18 + 1;
          } while ((int)lVar18 != 0x40);
          if ((local_208 == (long *)0x0) || (*local_208 == 0)) goto LAB_00c4dfe4;
          if (local_208[1] == 0) goto LAB_00c4dfec;
          iVar4 = (**(code **)(*local_208 + 0x10))(local_208[1],&puStack_1c0);
          if (iVar4 != 0) goto joined_r0x00c4e004;
          if ((local_208 == (long *)0x0) || (*local_208 == 0)) goto LAB_00c4dfe4;
          if (local_208[1] == 0) goto LAB_00c4dfec;
          iVar4 = (**(code **)(*local_208 + 0x30))(local_208[1],*(undefined8 *)(param_2 + 4),0);
          if (iVar4 != 0) goto joined_r0x00c4e004;
          if ((*(uint *)((long)local_208 + 0x14) & 0xfffffffe) == 6) {
            if ((local_208 == (long *)0x0) || (*local_208 == 0)) goto LAB_00c4dfe4;
            if (local_208[1] == 0) goto LAB_00c4dfec;
            pcVar11 = *(code **)(*local_208 + 0x18);
            if (pcVar11 == (code *)0x0) goto LAB_00c4e00c;
            iVar4 = (*pcVar11)(local_208[1],*(undefined8 *)(param_2 + 0x10),param_2[0xe]);
            puVar17 = PTR_s_cipher_00d60170;
            if (iVar4 != 0) goto joined_r0x00c4e004;
            if (DAT_00d60168 != 0) {
              uVar7 = FUN_00c4c9cc(*(undefined8 *)(param_2 + 0x10),param_2[0xe]);
              FUN_00c4c870(3,"%s: AAD:    %s\n",puVar17,uVar7);
            }
          }
          uVar5 = local_214;
          if ((local_208 == (long *)0x0) || (*local_208 == 0)) goto LAB_00c4dfe4;
          if (local_208[1] == 0) goto LAB_00c4dfec;
          uVar8 = (ulong)local_214;
          iVar4 = (**(code **)(*local_208 + 0x20))(local_208[1],local_100,&local_214);
          if (iVar4 != 0) goto joined_r0x00c4e004;
          if ((*(uint *)((long)local_208 + 0x14) & 0xfffffffe) == 6) {
            if (0x80 < local_214) {
LAB_00c4e090:
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(0x5512,0xc4e094);
              (*pcVar11)();
            }
            if ((local_208 == (long *)0x0) || (*local_208 == 0)) goto LAB_00c4dfe4;
            if (local_208[1] == 0) goto LAB_00c4dfec;
            pcVar11 = *(code **)(*local_208 + 0x38);
            if (pcVar11 == (code *)0x0) goto LAB_00c4e00c;
            iVar4 = (*pcVar11)(local_208[1],(long)local_100 + (ulong)local_214,&local_20c);
            if (iVar4 != 0) goto joined_r0x00c4e004;
            local_214 = local_214 + local_20c;
          }
          puVar17 = PTR_s_cipher_00d60170;
          if (DAT_00d60168 != 0) {
            uVar7 = FUN_00c4c9cc(local_100,local_214);
            FUN_00c4c870(3,"%s: ciphertext:   %s\n",puVar17,uVar7);
          }
          if ((local_208 == (long *)0x0) || (*local_208 == 0)) goto LAB_00c4dfe4;
          if (local_208[1] == 0) goto LAB_00c4dfec;
          iVar4 = (**(code **)(*local_208 + 0x10))(local_208[1],&puStack_1c0);
          if (iVar4 != 0) goto joined_r0x00c4e004;
          if ((local_208 == (long *)0x0) || (*local_208 == 0)) goto LAB_00c4dfe4;
          if (local_208[1] == 0) goto LAB_00c4dfec;
          iVar4 = (**(code **)(*local_208 + 0x30))(local_208[1],*(undefined8 *)(param_2 + 4),1);
          if (iVar4 != 0) goto joined_r0x00c4e004;
          if ((*(uint *)((long)local_208 + 0x14) & 0xfffffffe) == 6) {
            if ((local_208 == (long *)0x0) || (*local_208 == 0)) goto LAB_00c4dfe4;
            if (local_208[1] == 0) goto LAB_00c4dfec;
            pcVar11 = *(code **)(*local_208 + 0x18);
            if (pcVar11 == (code *)0x0) goto LAB_00c4e00c;
            iVar4 = (*pcVar11)(local_208[1],*(undefined8 *)(param_2 + 0x10),param_2[0xe]);
            puVar17 = PTR_s_cipher_00d60170;
            if (iVar4 != 0) goto joined_r0x00c4e004;
            if (DAT_00d60168 != 0) {
              uVar7 = FUN_00c4c9cc(*(undefined8 *)(param_2 + 0x10),param_2[0xe]);
              FUN_00c4c870(3,"%s: AAD:    %s\n",puVar17,uVar7);
            }
          }
          if ((local_208 == (long *)0x0) || (*local_208 == 0)) goto LAB_00c4dfe4;
          if (local_208[1] == 0) goto LAB_00c4dfec;
          iVar4 = (**(code **)(*local_208 + 0x28))(local_208[1],local_100,&local_214);
          puVar17 = PTR_s_cipher_00d60170;
          if (iVar4 != 0) goto joined_r0x00c4e004;
          if (DAT_00d60168 != 0) {
            uVar7 = FUN_00c4c9cc(local_100,local_214);
            FUN_00c4c870(3,"%s: plaintext[2]: %s\n",puVar17,uVar7);
          }
          if (local_214 != uVar5) {
LAB_00c4e078:
            if (local_208 == (long *)0x0) goto LAB_00c4da10;
            lVar18 = *local_208;
            iVar4 = 0xb;
            goto joined_r0x00c4e014;
          }
          if (uVar5 != 0) {
            uVar10 = 0;
            iVar4 = 0;
            do {
              if (uVar10 == 0x80) goto LAB_00c4e090;
              if (*(char *)((long)local_100 + uVar10) != *(char *)((long)local_180 + uVar10)) {
                if (DAT_00d60168 == 0) {
                  iVar4 = 0xb;
                }
                else {
                  FUN_00c4c870(3,"%s: random test case %d failed\n",PTR_s_cipher_00d60170,local_218)
                  ;
                  if (DAT_00d60168 != 0) {
                    FUN_00c4c870(3,"%s: (failure at byte %u)\n",PTR_s_cipher_00d60170,
                                 uVar10 & 0xffffffff);
                  }
                  iVar4 = 0xb;
                }
              }
              uVar10 = uVar10 + 1;
            } while (uVar8 != uVar10);
            if (iVar4 != 0) goto LAB_00c4e078;
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 != 0x80);
        if ((local_208 != (long *)0x0) && (*local_208 != 0)) {
          iVar4 = (**(code **)(*local_208 + 8))();
          goto LAB_00c4e040;
        }
      }
    }
LAB_00c4dfe4:
    iVar4 = 2;
  }
  goto LAB_00c4e040;
LAB_00c4e00c:
  iVar4 = 0xc;
  goto LAB_00c4e010;
LAB_00c4dfec:
  iVar4 = 2;
  goto LAB_00c4e010;
LAB_00c4da10:
  iVar4 = 0xb;
  goto LAB_00c4e040;
joined_r0x00c4e004:
  if (local_208 == (long *)0x0) goto LAB_00c4e040;
LAB_00c4e010:
  lVar18 = *local_208;
joined_r0x00c4e014:
  if (lVar18 != 0) {
    (**(code **)(lVar18 + 8))();
  }
LAB_00c4e040:
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00c4e098  FUN_00c4e098 =====

void FUN_00c4e098(long param_1)

{
  FUN_00c4d324(param_1,*(undefined8 *)(param_1 + 0x48));
  return;
}


// ===== 00c4e0a4  FUN_00c4e0a4 =====

undefined8 FUN_00c4e0a4(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  char *pcVar6;
  
  if (DAT_00dbb518 == '\x01') {
    FUN_00c4e2ec();
    return 0;
  }
  uVar3 = FUN_00c4c84c();
  puVar1 = PTR_s_crypto_kernel_00d60180;
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  plVar4 = DAT_00dbb530;
  if (PTR_s_crypto_kernel_00d60180 == (undefined *)0x0) {
LAB_00c4e2c8:
    uVar3 = 2;
  }
  else {
    for (; plVar4 != (long *)0x0; plVar4 = (long *)plVar4[1]) {
      iVar2 = strncmp(puVar1,*(char **)(*plVar4 + 8),0x40);
      if (iVar2 == 0) goto LAB_00c4e2c8;
    }
    plVar4 = (long *)FUN_00c4c76c(0x10);
    if (plVar4 != (long *)0x0) {
      *plVar4 = (long)&DAT_00d60178;
      puVar1 = PTR_DAT_00d52f38;
      plVar4[1] = (long)DAT_00dbb530;
      pcVar6 = *(char **)(puVar1 + 8);
      DAT_00dbb530 = plVar4;
      if (pcVar6 == (char *)0x0) goto LAB_00c4e2c8;
      do {
        iVar2 = strncmp(pcVar6,*(char **)(*plVar4 + 8),0x40);
        if (iVar2 == 0) goto LAB_00c4e2c8;
        plVar4 = (long *)plVar4[1];
      } while (plVar4 != (long *)0x0);
      plVar4 = (long *)FUN_00c4c76c(0x10);
      if (plVar4 != (long *)0x0) {
        *plVar4 = (long)puVar1;
        puVar1 = PTR_DAT_00d52f28;
        plVar4[1] = (long)DAT_00dbb530;
        pcVar6 = *(char **)(puVar1 + 8);
        DAT_00dbb530 = plVar4;
        if (pcVar6 == (char *)0x0) goto LAB_00c4e2c8;
        do {
          iVar2 = strncmp(pcVar6,*(char **)(*plVar4 + 8),0x40);
          if (iVar2 == 0) goto LAB_00c4e2c8;
          plVar4 = (long *)plVar4[1];
        } while (plVar4 != (long *)0x0);
        puVar5 = (undefined8 *)FUN_00c4c76c(0x10);
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = puVar1;
          puVar5[1] = DAT_00dbb530;
          DAT_00dbb530 = puVar5;
          uVar3 = FUN_00c4e474(PTR_DAT_00d52f58);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar3 = FUN_00c4e518(PTR_PTR_FUN_00d52f30,0);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar3 = FUN_00c4e518(PTR_PTR_FUN_00d52f20,1);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar3 = FUN_00c4e518(PTR_PTR_FUN_00d52f18,5);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar3 = FUN_00c4e474(PTR_DAT_00d52f08);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar3 = FUN_00c4e518(PTR_PTR_FUN_00d52f10,4);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar3 = FUN_00c4e518(PTR_PTR_FUN_00d52f00,6);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar3 = FUN_00c4e518(PTR_PTR_FUN_00d52ef8,7);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar3 = FUN_00c4e474(PTR_DAT_00d52ef0);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar3 = FUN_00c4e5d4(PTR_PTR_FUN_00d52f50,0);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar3 = FUN_00c4e5d4(PTR_PTR_FUN_00d52f48,3);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar3 = FUN_00c4e474(PTR_DAT_00d52f40);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          DAT_00dbb518 = 1;
          return uVar3;
        }
      }
    }
    uVar3 = 3;
  }
  return uVar3;
}


// ===== 00c4e2ec  FUN_00c4e2ec =====

undefined8 FUN_00c4e2ec(void)

{
  char *pcVar1;
  int __status;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = DAT_00dbb528;
  lVar4 = DAT_00dbb520;
  if (DAT_00dbb520 != 0) {
    do {
      FUN_00c4c870(2,"cipher: %s\n",*(undefined8 *)(*(long *)(lVar4 + 8) + 0x40));
      FUN_00c4c870(2,"  self-test: ");
      __status = FUN_00c4e098(*(undefined8 *)(lVar4 + 8));
      if (__status != 0) goto LAB_00c4e450;
      FUN_00c4c870(2,"passed\n");
      plVar2 = (long *)(lVar4 + 0x10);
      lVar4 = *plVar2;
    } while (*plVar2 != 0);
  }
  if (lVar3 != 0) {
    do {
      FUN_00c4c870(2,"auth func: %s\n",*(undefined8 *)(*(long *)(lVar3 + 8) + 0x30));
      FUN_00c4c870(2,"  self-test: ");
      __status = FUN_00c4ec9c(*(undefined8 *)(lVar3 + 8));
      if (__status != 0) {
LAB_00c4e450:
        FUN_00c4c870(0,"failed with error code %d\n",__status);
                    /* WARNING: Subroutine does not return */
        exit(__status);
      }
      FUN_00c4c870(2,"passed\n");
      lVar3 = *(long *)(lVar3 + 0x10);
    } while (lVar3 != 0);
  }
  plVar2 = DAT_00dbb530;
  FUN_00c4c870(2,"debug modules loaded:\n");
  if (plVar2 != (long *)0x0) {
    do {
      FUN_00c4c870(2,"  %s ",*(undefined8 *)(*plVar2 + 8));
      pcVar1 = "(off)\n";
      if (*(int *)*plVar2 != 0) {
        pcVar1 = "(on)\n";
      }
      FUN_00c4c870(2,pcVar1);
      plVar2 = (long *)plVar2[1];
    } while (plVar2 != (long *)0x0);
  }
  return 0;
}


// ===== 00c4e474  FUN_00c4e474 =====

undefined8 FUN_00c4e474(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *__s1;
  long *plVar3;
  
  if (param_1 == 0) {
    return 2;
  }
  __s1 = *(char **)(param_1 + 8);
  if (__s1 == (char *)0x0) {
LAB_00c4e4f8:
    uVar2 = 2;
  }
  else {
    plVar3 = DAT_00dbb530;
    if (DAT_00dbb530 != (long *)0x0) {
      do {
        iVar1 = strncmp(__s1,*(char **)(*plVar3 + 8),0x40);
        if (iVar1 == 0) goto LAB_00c4e4f8;
        plVar3 = (long *)plVar3[1];
      } while (plVar3 != (long *)0x0);
    }
    plVar3 = (long *)FUN_00c4c76c(0x10);
    if (plVar3 == (long *)0x0) {
      uVar2 = 3;
    }
    else {
      uVar2 = 0;
      *plVar3 = param_1;
      plVar3[1] = (long)DAT_00dbb530;
      DAT_00dbb530 = plVar3;
    }
  }
  return uVar2;
}


// ===== 00c4e518  FUN_00c4e518 =====

undefined8 FUN_00c4e518(long param_1,int param_2)

{
  undefined8 uVar1;
  int *piVar2;
  
  if (param_1 == 0) {
    return 2;
  }
  if (*(int *)(param_1 + 0x50) == param_2) {
    uVar1 = FUN_00c4e098(param_1);
    piVar2 = DAT_00dbb520;
    if ((int)uVar1 == 0) {
      for (; piVar2 != (int *)0x0; piVar2 = *(int **)(piVar2 + 4)) {
        if ((param_2 == *piVar2) || (param_1 == *(long *)(piVar2 + 2))) goto LAB_00c4e5b4;
      }
      piVar2 = (int *)FUN_00c4c76c(0x18);
      if (piVar2 == (int *)0x0) {
        uVar1 = 3;
      }
      else {
        uVar1 = 0;
        *(int **)(piVar2 + 4) = DAT_00dbb520;
        DAT_00dbb520 = piVar2;
        *(long *)(piVar2 + 2) = param_1;
        *piVar2 = param_2;
      }
    }
  }
  else {
LAB_00c4e5b4:
    uVar1 = 2;
  }
  return uVar1;
}


// ===== 00c4e5d4  FUN_00c4e5d4 =====

undefined8 FUN_00c4e5d4(long param_1,int param_2)

{
  undefined8 uVar1;
  int *piVar2;
  
  if (param_1 == 0) {
    return 2;
  }
  if (*(int *)(param_1 + 0x40) == param_2) {
    uVar1 = FUN_00c4ec9c(param_1);
    piVar2 = DAT_00dbb528;
    if ((int)uVar1 == 0) {
      for (; piVar2 != (int *)0x0; piVar2 = *(int **)(piVar2 + 4)) {
        if ((param_2 == *piVar2) || (param_1 == *(long *)(piVar2 + 2))) goto LAB_00c4e670;
      }
      piVar2 = (int *)FUN_00c4c76c(0x18);
      if (piVar2 == (int *)0x0) {
        uVar1 = 3;
      }
      else {
        uVar1 = 0;
        *(int **)(piVar2 + 4) = DAT_00dbb528;
        DAT_00dbb528 = piVar2;
        *(long *)(piVar2 + 2) = param_1;
        *piVar2 = param_2;
      }
    }
  }
  else {
LAB_00c4e670:
    uVar1 = 2;
  }
  return uVar1;
}


// ===== 00c4e690  FUN_00c4e690 =====

undefined8 FUN_00c4e690(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = DAT_00dbb520;
  lVar1 = DAT_00dbb528;
  if (DAT_00dbb520 != 0) {
    do {
      DAT_00dbb520 = *(long *)(lVar3 + 0x10);
      if (DAT_00d60178 != 0) {
        FUN_00c4c870(3,"%s: freeing memory for cipher %s\n",PTR_s_crypto_kernel_00d60180,
                     *(undefined8 *)(*(long *)(lVar3 + 8) + 0x40));
      }
      FUN_00c4c7fc(lVar3);
      lVar3 = DAT_00dbb520;
      lVar1 = DAT_00dbb528;
    } while (DAT_00dbb520 != 0);
  }
  while (lVar1 != 0) {
    DAT_00dbb528 = *(long *)(lVar1 + 0x10);
    if (DAT_00d60178 != 0) {
      FUN_00c4c870(3,"%s: freeing memory for authentication %s\n",PTR_s_crypto_kernel_00d60180,
                   *(undefined8 *)(*(long *)(lVar1 + 8) + 0x30));
    }
    FUN_00c4c7fc(lVar1);
    lVar1 = DAT_00dbb528;
  }
  DAT_00dbb528 = 0;
  plVar2 = DAT_00dbb530;
  while (plVar2 != (long *)0x0) {
    DAT_00dbb530 = (long *)plVar2[1];
    if (DAT_00d60178 != 0) {
      FUN_00c4c870(3,"%s: freeing memory for debug module %s\n",PTR_s_crypto_kernel_00d60180,
                   *(undefined8 *)(*plVar2 + 8));
    }
    FUN_00c4c7fc(plVar2);
    plVar2 = DAT_00dbb530;
  }
  DAT_00dbb530 = plVar2;
  DAT_00dbb518 = 0;
  return 0;
}


// ===== 00c4e7e0  FUN_00c4e7e0 =====

undefined8 FUN_00c4e7e0(long param_1,int param_2)

{
  undefined8 uVar1;
  int *piVar2;
  
  if (param_1 == 0) {
    return 2;
  }
  if (*(int *)(param_1 + 0x40) == param_2) {
    uVar1 = FUN_00c4ec9c(param_1);
    piVar2 = DAT_00dbb528;
    if ((int)uVar1 == 0) {
      for (; piVar2 != (int *)0x0; piVar2 = *(int **)(piVar2 + 4)) {
        if (param_2 == *piVar2) {
          uVar1 = FUN_00c4e99c(param_1,*(undefined8 *)(*(long *)(piVar2 + 2) + 0x38));
          if ((int)uVar1 != 0) {
            return uVar1;
          }
          goto LAB_00c4e864;
        }
        if (param_1 == *(long *)(piVar2 + 2)) goto LAB_00c4e87c;
      }
      piVar2 = (int *)FUN_00c4c76c(0x18);
      if (piVar2 == (int *)0x0) {
        uVar1 = 3;
      }
      else {
        *(int **)(piVar2 + 4) = DAT_00dbb528;
        DAT_00dbb528 = piVar2;
LAB_00c4e864:
        uVar1 = 0;
        *(long *)(piVar2 + 2) = param_1;
        *piVar2 = param_2;
      }
    }
  }
  else {
LAB_00c4e87c:
    uVar1 = 2;
  }
  return uVar1;
}


// ===== 00c4e8b0  FUN_00c4e8b0 =====

undefined8 FUN_00c4e8b0(int param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  int *piVar2;
  
  if (DAT_00dbb518 != '\x01') {
    return 5;
  }
  piVar2 = DAT_00dbb520;
  if (DAT_00dbb520 != (int *)0x0) {
    do {
      if (param_1 == *piVar2) {
        if (*(undefined8 **)(piVar2 + 2) == (undefined8 *)0x0) {
          return 1;
        }
                    /* WARNING: Could not recover jumptable at 0x00c4e908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*(code *)**(undefined8 **)(piVar2 + 2))(param_2,param_3,param_4);
        return uVar1;
      }
      piVar2 = *(int **)(piVar2 + 4);
    } while (piVar2 != (int *)0x0);
  }
  return 1;
}


// ===== 00c4e914  FUN_00c4e914 =====

undefined8 FUN_00c4e914(int param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  int *piVar2;
  
  if (DAT_00dbb518 != '\x01') {
    return 5;
  }
  piVar2 = DAT_00dbb528;
  if (DAT_00dbb528 != (int *)0x0) {
    do {
      if (param_1 == *piVar2) {
        if (*(undefined8 **)(piVar2 + 2) == (undefined8 *)0x0) {
          return 1;
        }
                    /* WARNING: Could not recover jumptable at 0x00c4e96c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*(code *)**(undefined8 **)(piVar2 + 2))(param_2,param_3,param_4);
        return uVar1;
      }
      piVar2 = *(int **)(piVar2 + 4);
    } while (piVar2 != (int *)0x0);
  }
  return 1;
}


// ===== 00c4e978  FUN_00c4e978 =====

undefined4 FUN_00c4e978(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


// ===== 00c4e984  FUN_00c4e984 =====

undefined4 FUN_00c4e984(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}


// ===== 00c4e990  FUN_00c4e990 =====

undefined4 FUN_00c4e990(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}


// ===== 00c4e99c  FUN_00c4e99c =====

int FUN_00c4e99c(undefined8 *param_1,undefined4 *param_2)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulong uVar7;
  long *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  if (DAT_00d60188 != 0) {
    FUN_00c4c870(3,"%s: running self-test for auth function %s\n",PTR_s_auth_func_00d60190,
                 param_1[6]);
  }
  if (param_2 == (undefined4 *)0x0) {
    iVar4 = 0xe;
  }
  else {
    iVar6 = 0;
    local_98 = (long *)&DAT_aaaaaaaaaaaaaaaa;
    do {
      if (0x20 < (int)param_2[8]) {
        iVar4 = 2;
        goto LAB_00c4ec54;
      }
      iVar4 = (*(code *)*param_1)(&local_98,*param_2);
      if (iVar4 != 0) goto LAB_00c4ec54;
      iVar4 = (**(code **)(*local_98 + 0x10))
                        (local_98[1],*(undefined8 *)(param_2 + 2),
                         *(undefined4 *)((long)local_98 + 0x14));
      if ((iVar4 != 0) || (iVar4 = (**(code **)(*local_98 + 0x28))(local_98[1]), iVar4 != 0)) {
LAB_00c4ec30:
        (**(code **)(*local_98 + 8))();
        goto LAB_00c4ec54;
      }
      thunk_FUN_0078cba8(&local_90,(long)(int)param_2[8]);
      iVar4 = (**(code **)(*local_98 + 0x18))
                        (local_98[1],*(undefined8 *)(param_2 + 6),param_2[4],(int)local_98[2],
                         &local_90);
      puVar2 = PTR_s_auth_func_00d60190;
      if (iVar4 != 0) goto LAB_00c4ec30;
      if (DAT_00d60188 != 0) {
        uVar5 = FUN_00c4c9cc(*(undefined8 *)(param_2 + 2),*param_2);
        FUN_00c4c870(3,"%s: key: %s\n",puVar2,uVar5);
        puVar2 = PTR_s_auth_func_00d60190;
        if (DAT_00d60188 != 0) {
          uVar5 = FUN_00c4c9cc(*(undefined8 *)(param_2 + 6),param_2[4]);
          FUN_00c4c870(3,"%s: data: %s\n",puVar2,uVar5);
          puVar2 = PTR_s_auth_func_00d60190;
          if (DAT_00d60188 != 0) {
            uVar5 = FUN_00c4c9cc(&local_90,param_2[8]);
            FUN_00c4c870(3,"%s: tag computed: %s\n",puVar2,uVar5);
            puVar2 = PTR_s_auth_func_00d60190;
            if (DAT_00d60188 != 0) {
              uVar5 = FUN_00c4c9cc(*(undefined8 *)(param_2 + 10),param_2[8]);
              FUN_00c4c870(3,"%s: tag expected: %s\n",puVar2,uVar5);
            }
          }
        }
      }
      if (0 < (int)param_2[8]) {
        uVar7 = 0;
        iVar4 = 0;
        do {
          if (uVar7 == 0x20) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(0x5512,0xc4ec98);
            (*pcVar3)();
          }
          if (*(char *)((long)&local_90 + uVar7) != *(char *)(*(long *)(param_2 + 10) + uVar7)) {
            if ((DAT_00d60188 != 0) &&
               (FUN_00c4c870(3,"%s: test case %d failed\n",PTR_s_auth_func_00d60190,iVar6),
               DAT_00d60188 != 0)) {
              FUN_00c4c870(3,"%s:   (mismatch at octet %d)\n",PTR_s_auth_func_00d60190,
                           uVar7 & 0xffffffff);
            }
            iVar4 = 0xb;
          }
          uVar7 = uVar7 + 1;
        } while ((long)uVar7 < (long)(int)param_2[8]);
        if (iVar4 != 0) {
          iVar4 = 0xb;
          goto LAB_00c4ec30;
        }
      }
      iVar4 = (**(code **)(*local_98 + 8))();
      if (iVar4 != 0) goto LAB_00c4ec54;
      param_2 = *(undefined4 **)(param_2 + 0xc);
      iVar6 = iVar6 + 1;
    } while (param_2 != (undefined4 *)0x0);
    iVar4 = 0;
  }
LAB_00c4ec54:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}


// ===== 00c4ec9c  FUN_00c4ec9c =====

void FUN_00c4ec9c(long param_1)

{
  FUN_00c4e99c(param_1,*(undefined8 *)(param_1 + 0x38));
  return;
}


// ===== 00c4eca8  FUN_00c4eca8 =====

undefined8 FUN_00c4eca8(long *param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(int *)PTR_DAT_00d52f28 != 0) {
    FUN_00c4c870(3,"%s: allocating cipher with key length %d\n",
                 *(undefined8 *)(PTR_DAT_00d52f28 + 8),param_2);
  }
  lVar1 = FUN_00c4c76c(0x18);
  *param_1 = lVar1;
  if (lVar1 == 0) {
    uVar2 = 3;
  }
  else {
    *(undefined4 *)(lVar1 + 0x14) = 0;
    uVar2 = 0;
    *(undefined ***)*param_1 = &PTR_FUN_00d4d620;
    *(undefined8 *)(*param_1 + 8) = 1;
    *(undefined4 *)(*param_1 + 0x10) = param_2;
  }
  return uVar2;
}


// ===== 00c4ed40  FUN_00c4ed40 =====

undefined8 FUN_00c4ed40(undefined8 param_1)

{
  thunk_FUN_0078cba8(param_1,0x18);
  FUN_00c4c7fc(param_1);
  return 0;
}


// ===== 00c4ed78  FUN_00c4ed78 =====

undefined8 FUN_00c4ed78(void)

{
  if (DAT_00d60168 != 0) {
    FUN_00c4c870(3,"%s: initializing null cipher\n",PTR_s_cipher_00d60170);
  }
  return 0;
}


// ===== 00c4edbc  FUN_00c4edbc =====

undefined8 FUN_00c4edbc(void)

{
  return 0;
}


// ===== 00c4edc8  FUN_00c4edc8 =====

undefined8 FUN_00c4edc8(void)

{
  return 0;
}


// ===== 00c4edd4  FUN_00c4edd4 =====

undefined8 FUN_00c4edd4(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined **ppuVar4;
  undefined4 uVar5;
  uint uVar6;
  
  if (DAT_00d60198 != 0) {
    FUN_00c4c870(3,"%s: allocating cipher with key length %d\n",PTR_s_aes_icm_ossl_00d601a0,
                 param_2 & 0xffffffff);
  }
  uVar6 = (uint)param_2;
  if (0x2e < uVar6) {
    return 2;
  }
  if ((0x404040000000U >> (param_2 & 0x3f) & 1) == 0) {
    return 2;
  }
  lVar1 = FUN_00c4c76c(0x18);
  *param_1 = lVar1;
  if (lVar1 == 0) {
    return 3;
  }
  lVar1 = FUN_00c4c76c(0x30);
  if (lVar1 == 0) {
LAB_00c4eea8:
    FUN_00c4c7fc(*param_1);
    *param_1 = 0;
    return 3;
  }
  lVar2 = FUN_00728fd8();
  *(long *)(lVar1 + 0x28) = lVar2;
  if (lVar2 == 0) {
    FUN_00c4c7fc(lVar1);
    goto LAB_00c4eea8;
  }
  *(long *)(*param_1 + 8) = lVar1;
  if (uVar6 == 0x1e) {
    uVar3 = 0x10;
    ppuVar4 = &PTR_FUN_00d4d678;
    uVar5 = 1;
  }
  else if (uVar6 == 0x2e) {
    uVar3 = 0x20;
    ppuVar4 = &PTR_FUN_00d4d728;
    uVar5 = 5;
  }
  else {
    if (uVar6 != 0x26) goto LAB_00c4eef4;
    uVar3 = 0x18;
    ppuVar4 = &PTR_FUN_00d4d6d0;
    uVar5 = 4;
  }
  *(undefined4 *)(*param_1 + 0x14) = uVar5;
  *(undefined ***)*param_1 = ppuVar4;
  *(undefined4 *)(lVar1 + 0x20) = uVar3;
LAB_00c4eef4:
  *(uint *)(*param_1 + 0x10) = uVar6;
  return 0;
}


// ===== 00c4ef14  FUN_00c4ef14 =====

undefined8 FUN_00c4ef14(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    if (lVar1 != 0) {
      FUN_00729080(*(undefined8 *)(lVar1 + 0x28));
      thunk_FUN_0078cba8(lVar1,0x30);
      FUN_00c4c7fc(lVar1);
    }
    FUN_00c4c7fc(param_1);
    return 0;
  }
  return 2;
}


// ===== 00c4ef78  FUN_00c4ef78 =====

bool FUN_00c4ef78(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar1 = (undefined8 *)(param_2 + *(int *)(param_1 + 4));
  puVar6 = param_1 + 2;
  param_1[3] = 0;
  *puVar6 = 0;
  param_1[1] = 0;
  *param_1 = 0;
  uVar5 = *(undefined8 *)((long)puVar1 + 6);
  *param_1 = *puVar1;
  *(undefined8 *)((long)param_1 + 6) = uVar5;
  uVar4 = *puVar1;
  uVar5 = *(undefined8 *)((long)puVar1 + 6);
  *(undefined2 *)((long)param_1 + 0x1e) = 0;
  *(undefined2 *)((long)param_1 + 0xe) = 0;
  *puVar6 = uVar4;
  *(undefined8 *)((long)param_1 + 0x16) = uVar5;
  puVar2 = PTR_s_aes_icm_ossl_00d601a0;
  if (DAT_00d60198 != 0) {
    uVar5 = FUN_00c4c9cc(param_2);
    FUN_00c4c870(3,"%s: key:  %s\n",puVar2,uVar5);
    puVar2 = PTR_s_aes_icm_ossl_00d601a0;
    if (DAT_00d60198 != 0) {
      uVar5 = FUN_00c4ca54(puVar6);
      FUN_00c4c870(3,"%s: offset: %s\n",puVar2,uVar5);
    }
  }
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0x10) {
    uVar5 = FUN_00729e94();
  }
  else if (iVar3 == 0x18) {
    uVar5 = FUN_0072a024();
  }
  else {
    if (iVar3 != 0x20) {
      return (bool)2;
    }
    uVar5 = FUN_0072a11c();
  }
  FUN_007290f0(param_1[5]);
  iVar3 = FUN_0072955c(param_1[5],uVar5,0,param_2,0);
  return iVar3 == 0;
}


// ===== 00c4f0bc  FUN_00c4f0bc =====

undefined8 FUN_00c4f0bc(long param_1,long param_2,int *param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  int local_34;
  
  puVar1 = PTR_s_aes_icm_ossl_00d601a0;
  local_34 = 0;
  if (DAT_00d60198 != 0) {
    uVar3 = FUN_00c4ca54(param_1);
    FUN_00c4c870(3,"%s: rs0: %s\n",puVar1,uVar3);
  }
  iVar2 = FUN_00729574(*(undefined8 *)(param_1 + 0x28),param_2,&local_34,param_2,*param_3);
  if (iVar2 != 0) {
    *param_3 = local_34;
    iVar2 = FUN_007296dc(*(undefined8 *)(param_1 + 0x28),param_2 + local_34,&local_34);
    if (iVar2 != 0) {
      *param_3 = *param_3 + local_34;
      return 0;
    }
  }
  return 8;
}


// ===== 00c4f184  FUN_00c4f184 =====

bool FUN_00c4f184(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *local_40;
  undefined1 *puStack_38;
  
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00c4caa8(&local_40);
  puVar1 = PTR_s_aes_icm_ossl_00d601a0;
  if (DAT_00d60198 != 0) {
    uVar3 = FUN_00c4ca54(&local_40);
    FUN_00c4c870(3,"%s: setting iv: %s\n",puVar1,uVar3);
  }
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_1[1] = CONCAT17((byte)((ulong)puStack_38 >> 0x38) ^ (byte)((ulong)uVar4 >> 0x38),
                        CONCAT16((byte)((ulong)puStack_38 >> 0x30) ^ (byte)((ulong)uVar4 >> 0x30),
                                 CONCAT15((byte)((ulong)puStack_38 >> 0x28) ^
                                          (byte)((ulong)uVar4 >> 0x28),
                                          CONCAT14((byte)((ulong)puStack_38 >> 0x20) ^
                                                   (byte)((ulong)uVar4 >> 0x20),
                                                   CONCAT13((byte)((ulong)puStack_38 >> 0x18) ^
                                                            (byte)((ulong)uVar4 >> 0x18),
                                                            CONCAT12((byte)((ulong)puStack_38 >>
                                                                           0x10) ^
                                                                     (byte)((ulong)uVar4 >> 0x10),
                                                                     CONCAT11((byte)((ulong)
                                                  puStack_38 >> 8) ^ (byte)((ulong)uVar4 >> 8),
                                                  (byte)puStack_38 ^ (byte)uVar4)))))));
  *param_1 = CONCAT17((byte)((ulong)local_40 >> 0x38) ^ (byte)((ulong)uVar3 >> 0x38),
                      CONCAT16((byte)((ulong)local_40 >> 0x30) ^ (byte)((ulong)uVar3 >> 0x30),
                               CONCAT15((byte)((ulong)local_40 >> 0x28) ^
                                        (byte)((ulong)uVar3 >> 0x28),
                                        CONCAT14((byte)((ulong)local_40 >> 0x20) ^
                                                 (byte)((ulong)uVar3 >> 0x20),
                                                 CONCAT13((byte)((ulong)local_40 >> 0x18) ^
                                                          (byte)((ulong)uVar3 >> 0x18),
                                                          CONCAT12((byte)((ulong)local_40 >> 0x10) ^
                                                                   (byte)((ulong)uVar3 >> 0x10),
                                                                   CONCAT11((byte)((ulong)local_40
                                                                                  >> 8) ^
                                                                            (byte)((ulong)uVar3 >> 8
                                                                                  ),(byte)local_40 ^
                                                                                    (byte)uVar3)))))
                              ));
  puVar1 = PTR_s_aes_icm_ossl_00d601a0;
  if (DAT_00d60198 != 0) {
    uVar3 = FUN_00c4ca54(param_1);
    FUN_00c4c870(3,"%s: set_counter: %s\n",puVar1,uVar3);
  }
  iVar2 = FUN_0072955c(param_1[5],0,0,0,param_1);
  return iVar2 == 0;
}


// ===== 00c4f258  FUN_00c4f258 =====

undefined8 FUN_00c4f258(long *param_1,int param_2,int param_3)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined **ppuVar5;
  
  if ((DAT_00d601c0 != 0) &&
     (FUN_00c4c870(3,"%s: allocating cipher with key length %d\n",PTR_s_aes_gcm_00d601c8,param_2),
     DAT_00d601c0 != 0)) {
    FUN_00c4c870(3,"%s: allocating cipher with tag length %d\n",PTR_s_aes_gcm_00d601c8,param_3);
  }
  if (((param_2 != 0x2c) && (param_2 != 0x1c)) || ((param_3 != 0x10 && (param_3 != 8)))) {
    return 2;
  }
  lVar1 = FUN_00c4c76c(0x18);
  *param_1 = lVar1;
  if (lVar1 == 0) {
    return 3;
  }
  puVar2 = (undefined4 *)FUN_00c4c76c(0x18);
  if (puVar2 == (undefined4 *)0x0) {
LAB_00c4f358:
    FUN_00c4c7fc(*param_1);
    *param_1 = 0;
    return 3;
  }
  lVar1 = FUN_00728fd8();
  *(long *)(puVar2 + 2) = lVar1;
  if (lVar1 == 0) {
    FUN_00c4c7fc(puVar2);
    goto LAB_00c4f358;
  }
  *(undefined4 **)(*param_1 + 8) = puVar2;
  if (param_2 == 0x1c) {
    uVar3 = 0x10;
    uVar4 = 6;
    ppuVar5 = &PTR_FUN_00d4d9e8;
  }
  else {
    if (param_2 != 0x2c) goto LAB_00c4f390;
    uVar3 = 0x20;
    uVar4 = 7;
    ppuVar5 = &PTR_FUN_00d4da40;
  }
  *(undefined ***)*param_1 = ppuVar5;
  *(undefined4 *)(*param_1 + 0x14) = uVar4;
  *puVar2 = uVar3;
  puVar2[1] = param_3;
LAB_00c4f390:
  *(int *)(*param_1 + 0x10) = param_2;
  return 0;
}


// ===== 00c4f3b0  FUN_00c4f3b0 =====

undefined8 FUN_00c4f3b0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_00729080(*(undefined8 *)(lVar1 + 8));
    thunk_FUN_0078cba8(lVar1,0x18);
    FUN_00c4c7fc(lVar1);
  }
  FUN_00c4c7fc(param_1);
  return 0;
}


// ===== 00c4f404  FUN_00c4f404 =====

undefined4 FUN_00c4f404(int *param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  param_1[4] = 2;
  puVar1 = PTR_s_aes_gcm_00d601c8;
  if (DAT_00d601c0 != 0) {
    uVar3 = FUN_00c4c9cc(param_2,*param_1);
    FUN_00c4c870(3,"%s: key:  %s\n",puVar1,uVar3);
  }
  if (*param_1 == 0x10) {
    uVar3 = FUN_00729f10();
  }
  else {
    if (*param_1 != 0x20) {
      return 2;
    }
    uVar3 = FUN_0072a198();
  }
  FUN_007290f0(*(undefined8 *)(param_1 + 2));
  iVar2 = FUN_00729154(*(undefined8 *)(param_1 + 2),uVar3,0,param_2,0,0);
  uVar4 = 5;
  if (iVar2 != 0) {
    iVar2 = FUN_007293fc(*(undefined8 *)(param_1 + 2),9,0xc,0);
    uVar4 = 5;
    if (iVar2 != 0) {
      uVar4 = 0;
    }
  }
  return uVar4;
}


// ===== 00c4f4ec  FUN_00c4f4ec =====

void FUN_00c4f4ec(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  puVar2 = PTR_s_aes_gcm_00d601c8;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (DAT_00d601c0 != 0) {
    uVar4 = FUN_00c4c9cc(param_2,param_3);
    FUN_00c4c870(3,"%s: setting AAD: %s\n",puVar2,uVar4);
  }
  if (*(int *)(param_1 + 0x10) == 1) {
    local_58 = 0;
    uStack_50 = 0;
    iVar3 = FUN_007293fc(*(undefined8 *)(param_1 + 8),0x11,*(undefined4 *)(param_1 + 4),&local_58);
    if (iVar3 == 0) {
      uVar5 = 0xb;
      goto LAB_00c4f5a4;
    }
  }
  iVar3 = FUN_00729c30(*(undefined8 *)(param_1 + 8),0,param_2,param_3);
  uVar5 = 0;
  if (iVar3 != param_3 || (iVar3 == -1 || iVar3 + 1 < 0 != SCARRY4(iVar3,1))) {
    uVar5 = 0xb;
  }
LAB_00c4f5a4:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 00c4f5dc  FUN_00c4f5dc =====

undefined8 FUN_00c4f5dc(long param_1,undefined8 param_2,undefined4 *param_3)

{
  if (*(uint *)(param_1 + 0x10) < 2) {
    FUN_00729c30(*(undefined8 *)(param_1 + 8),param_2,param_2,*param_3);
    return 0;
  }
  return 2;
}


// ===== 00c4f620  FUN_00c4f620 =====

undefined8 FUN_00c4f620(long param_1,long param_2,int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (1 < *(uint *)(param_1 + 0x10)) {
    return 2;
  }
  iVar1 = FUN_007293fc(*(undefined8 *)(param_1 + 8),0x11,*(int *)(param_1 + 4),
                       param_2 + (ulong)(uint)(*param_3 - *(int *)(param_1 + 4)));
  if (iVar1 != 0) {
    FUN_00729c30(*(undefined8 *)(param_1 + 8),param_2,param_2,*param_3 - *(int *)(param_1 + 4));
    uVar2 = FUN_00729c30(*(undefined8 *)(param_1 + 8),0,0,0);
    if ((int)uVar2 == 0) {
      *param_3 = *param_3 - *(int *)(param_1 + 4);
      return uVar2;
    }
  }
  return 7;
}


// ===== 00c4f6d8  FUN_00c4f6d8 =====

undefined4 FUN_00c4f6d8(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if (1 < param_3) {
    return 2;
  }
  *(uint *)(param_1 + 0x10) = param_3;
  puVar1 = PTR_s_aes_gcm_00d601c8;
  if (DAT_00d601c0 != 0) {
    uVar3 = FUN_00c4c9cc(param_2,0xc);
    FUN_00c4c870(3,"%s: setting iv: %s\n",puVar1,uVar3);
    param_3 = *(uint *)(param_1 + 0x10);
  }
  iVar2 = FUN_00729154(*(undefined8 *)(param_1 + 8),0,0,0,param_2,param_3 == 0);
  uVar4 = 5;
  if (iVar2 != 0) {
    uVar4 = 0;
  }
  return uVar4;
}


// ===== 00c4f788  FUN_00c4f788 =====

undefined8 FUN_00c4f788(long param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_00729c30(*(undefined8 *)(param_1 + 8),0,0,0);
  iVar1 = FUN_007293fc(*(undefined8 *)(param_1 + 8),0x10,*(undefined4 *)(param_1 + 4),param_2);
  if (iVar1 == 0) {
    uVar2 = 0xb;
  }
  else {
    uVar2 = 0;
    *param_3 = *(undefined4 *)(param_1 + 4);
  }
  return uVar2;
}


// ===== 00c4f7fc  FUN_00c4f7fc =====

undefined8 FUN_00c4f7fc(long *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_00d52f38;
  if (*(int *)PTR_DAT_00d52f38 != 0) {
    FUN_00c4c870(3,"%s: allocating auth func with key length %d\n",
                 *(undefined8 *)(PTR_DAT_00d52f38 + 8),param_2);
    if (*(int *)puVar1 != 0) {
      FUN_00c4c870(3,"%s:                           tag length %d\n",*(undefined8 *)(puVar1 + 8),
                   param_3);
    }
  }
  puVar2 = (undefined8 *)FUN_00c4c76c(0x21);
  if (puVar2 == (undefined8 *)0x0) {
    uVar3 = 3;
  }
  else {
    *param_1 = (long)puVar2;
    uVar3 = 0;
    *puVar2 = &PTR_FUN_00d4da98;
    *(undefined8 **)(*param_1 + 8) = puVar2 + 4;
    *(undefined4 *)(*param_1 + 0x10) = param_3;
    *(undefined4 *)(*param_1 + 0x18) = param_3;
    *(undefined4 *)(*param_1 + 0x14) = param_2;
  }
  return uVar3;
}


// ===== 00c4f8c4  FUN_00c4f8c4 =====

undefined8 FUN_00c4f8c4(undefined8 param_1)

{
  thunk_FUN_0078cba8(param_1,0x21);
  FUN_00c4c7fc(param_1);
  return 0;
}


// ===== 00c4f8fc  FUN_00c4f8fc =====

undefined8 FUN_00c4f8fc(void)

{
  return 0;
}


// ===== 00c4f908  FUN_00c4f908 =====

undefined8 FUN_00c4f908(void)

{
  return 0;
}


// ===== 00c4f914  FUN_00c4f914 =====

undefined8 FUN_00c4f914(void)

{
  return 0;
}


// ===== 00c4f920  FUN_00c4f920 =====

undefined8 FUN_00c4f920(void)

{
  return 0;
}


// ===== 00c4f92c  FUN_00c4f92c =====

undefined8 FUN_00c4f92c(long *param_1,undefined4 param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  if ((DAT_00d601d0 != 0) &&
     (FUN_00c4c870(3,"%s: allocating auth func with key length %d\n",
                   PTR_s_hmac_sha_1_openssl_00d601d8,param_2), DAT_00d601d0 != 0)) {
    FUN_00c4c870(3,"%s:                           tag length %d\n",PTR_s_hmac_sha_1_openssl_00d601d8
                 ,param_3);
  }
  if (param_3 < 0x15) {
    lVar2 = FUN_00c4c76c(0x20);
    *param_1 = lVar2;
    if (lVar2 != 0) {
      plVar3 = (long *)FUN_00c4c76c(8);
      if (plVar3 != (long *)0x0) {
        lVar2 = FUN_0073a860();
        *plVar3 = lVar2;
        if (lVar2 != 0) {
          *(long **)(*param_1 + 8) = plVar3;
          *(undefined ***)*param_1 = &PTR_FUN_00d4dae0;
          *(int *)(*param_1 + 0x10) = param_3;
          *(undefined4 *)(*param_1 + 0x14) = param_2;
          *(undefined4 *)(*param_1 + 0x18) = 0;
          return 0;
        }
        FUN_00c4c7fc(plVar3);
      }
      FUN_00c4c7fc(*param_1);
      *param_1 = 0;
    }
    uVar1 = 3;
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}


// ===== 00c4fa3c  FUN_00c4fa3c =====

undefined8 FUN_00c4fa3c(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_0073a898(*puVar1);
    thunk_FUN_0078cba8(puVar1,8);
    FUN_00c4c7fc(puVar1);
  }
  thunk_FUN_0078cba8(param_1,0x20);
  FUN_00c4c7fc(param_1);
  return 0;
}


// ===== 00c4fa9c  FUN_00c4fa9c =====

undefined4 FUN_00c4fa9c(undefined8 *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_1;
  uVar2 = FUN_0072aac4();
  iVar1 = FUN_0073a394(uVar4,param_2,(long)param_3,uVar2,0);
  uVar3 = 7;
  if (iVar1 != 0) {
    uVar3 = 0;
  }
  return uVar3;
}


// ===== 00c4faf8  FUN_00c4faf8 =====

void FUN_00c4faf8(undefined8 *param_1,undefined8 param_2,int param_3,uint param_4,void *param_5)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  uint local_74;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined4 local_60;
  long local_58;
  
  puVar2 = PTR_s_hmac_sha_1_openssl_00d601d8;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_60 = 0xaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  if (DAT_00d601d0 != 0) {
    uVar4 = FUN_00c4c9cc(param_2,param_3);
    FUN_00c4c870(3,"%s: input: %s\n",puVar2,uVar4);
  }
  if ((int)param_4 < 0x15) {
    iVar3 = FUN_0073a6a4(*param_1,param_2,(long)param_3);
    if (iVar3 != 0) {
      local_74 = 0xaaaaaaaa;
      iVar3 = FUN_0073a6d0(*param_1,&local_70,&local_74);
      if (iVar3 != 0) {
        uVar4 = 7;
        if ((-1 < (int)param_4) && (param_4 <= local_74)) {
          if (param_4 != 0) {
            memcpy(param_5,&local_70,(ulong)param_4);
          }
          puVar2 = PTR_s_hmac_sha_1_openssl_00d601d8;
          if (DAT_00d601d0 != 0) {
            uVar4 = FUN_00c4c9cc(&local_70,param_4);
            FUN_00c4c870(3,"%s: output: %s\n",puVar2,uVar4);
          }
          uVar4 = 0;
        }
        goto LAB_00c4fc24;
      }
    }
    uVar4 = 7;
  }
  else {
    uVar4 = 2;
  }
LAB_00c4fc24:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 00c4fc58  FUN_00c4fc58 =====

undefined4 FUN_00c4fc58(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  puVar1 = PTR_s_hmac_sha_1_openssl_00d601d8;
  if (DAT_00d601d0 != 0) {
    uVar3 = FUN_00c4c9cc(param_2,param_3);
    FUN_00c4c870(3,"%s: input: %s\n",puVar1,uVar3);
  }
  iVar2 = FUN_0073a6a4(*param_1,param_2,(long)param_3);
  uVar4 = 7;
  if (iVar2 != 0) {
    uVar4 = 0;
  }
  return uVar4;
}


// ===== 00c4fce0  FUN_00c4fce0 =====

undefined4 FUN_00c4fce0(undefined8 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0073a394(*param_1,0,0,0,0);
  uVar2 = 7;
  if (iVar1 != 0) {
    uVar2 = 0;
  }
  return uVar2;
}


// ===== 00c4fd1c  FUN_00c4fd1c =====

undefined8 FUN_00c4fd1c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_00c4ccc8(param_1 + 1);
    if ((int)uVar1 == 0) {
      *param_1 = 0;
    }
    else {
      uVar1 = 3;
    }
    return uVar1;
  }
  return 2;
}


// ===== 00c4fd68  FUN_00c4fd68 =====

undefined8 FUN_00c4fd68(long param_1)

{
  FUN_00c4cd60(param_1 + 8);
  return 0;
}


// ===== 00c4fd8c  FUN_00c4fd8c =====

undefined4 FUN_00c4fd8c(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


// ===== 00c4fd98  FUN_00c4fd98 =====

uint FUN_00c4fd98(long param_1,int param_2)

{
  uint uVar1;
  
  if (0 < param_2) {
    return 0;
  }
  uVar1 = (param_2 + *(int *)(param_1 + 8)) - 1;
  if (-1 < (int)uVar1) {
    return -(*(uint *)(*(long *)(param_1 + 0x10) + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f)
            & 1) & 9;
  }
  return 10;
}


// ===== 00c4fde4  FUN_00c4fde4 =====

undefined8 FUN_00c4fde4(long *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if ((int)param_2 < 1) {
    iVar2 = param_2 + (int)param_1[1];
  }
  else {
    *param_1 = *param_1 + (ulong)(param_2 & 0xffff);
    FUN_00c4cd98(param_1 + 1);
    iVar2 = (int)param_1[1];
  }
  uVar1 = iVar2 - 1U >> 5;
  *(uint *)(param_1[2] + (ulong)uVar1 * 4) =
       1 << (ulong)(iVar2 - 1U & 0x1f) | *(uint *)(param_1[2] + (ulong)uVar1 * 4);
  return 0;
}


// ===== 00c4fe5c  FUN_00c4fe5c =====

int FUN_00c4fe5c(ulong *param_1,ulong *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar7 = *param_1;
  if (uVar7 < 0x8001) {
    *param_2 = (ulong)param_3 & 0xffff;
    return (param_3 & 0xffff) - (uint)(ushort)*param_1;
  }
  uVar1 = (uint)uVar7 & 0xffff;
  uVar2 = param_3 & 0xffff;
  uVar8 = uVar7 >> 0x10;
  iVar5 = uVar2 - uVar1;
  iVar4 = iVar5;
  uVar3 = uVar8;
  if (uVar2 < uVar1 - 0x8000) {
    uVar3 = uVar8 + 1;
    iVar4 = (uVar2 | 0x10000) - uVar1;
  }
  if (0x8000 < iVar5) {
    iVar5 = iVar5 + -0x10000;
    uVar8 = uVar8 + 0xffffffff;
  }
  bVar6 = ((uint)uVar7 >> 0xf & 1) == 0;
  if (bVar6) {
    uVar3 = uVar8;
  }
  if (bVar6) {
    iVar4 = iVar5;
  }
  *param_2 = (ulong)param_3 & 0xffff | (uVar3 & 0xffffffff) << 0x10;
  return iVar4;
}


// ===== 00c4fee8  FUN_00c4fee8 =====

undefined8 FUN_00c4fee8(ulong *param_1,uint param_2,ulong param_3)

{
  if ((ulong)param_2 < *param_1 >> 0x10) {
    return 10;
  }
  *param_1 = param_3 & 0xffff | (ulong)param_2 << 0x10;
  FUN_00c4cd48(param_1 + 1);
  return 0;
}


// ===== 00c4ff30  FUN_00c4ff30 =====

undefined8 FUN_00c4ff30(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  return 0;
}


// ===== 00c4ff48  FUN_00c4ff48 =====

uint FUN_00c4ff48(uint *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if ((ulong)uVar1 + 0x80 <= (ulong)param_2) {
    return 0;
  }
  if (param_2 < uVar1) {
    return 10;
  }
  return -(param_1[(ulong)(param_2 - uVar1 >> 5) + 2] >> (ulong)(param_2 - uVar1 & 0x1f) & 1) & 9;
}


// ===== 00c4ff94  FUN_00c4ff94 =====

undefined8 FUN_00c4ff94(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2 - *param_1;
  if (param_2 < *param_1) {
    return 9;
  }
  iVar1 = uVar2 - 0x7f;
  if (uVar2 < 0x7f || iVar1 == 0) {
    param_1[(ulong)(uVar2 >> 5) + 2] = param_1[(ulong)(uVar2 >> 5) + 2] | 1 << (ulong)(uVar2 & 0x1f)
    ;
  }
  else {
    FUN_00c4cb30(param_1 + 2,iVar1);
    param_1[5] = param_1[5] | 0x80000000;
    *param_1 = *param_1 + iVar1;
  }
  return 0;
}


// ===== 00c50024  FUN_00c50024 =====

undefined8 FUN_00c50024(uint *param_1)

{
  if (0x7ffffffe < *param_1) {
    return 0xf;
  }
  *param_1 = *param_1 + 1;
  return 0;
}


// ===== 00c50054  FUN_00c50054 =====

undefined4 FUN_00c50054(undefined4 *param_1)

{
  return *param_1;
}


// ===== 00c50060  FUN_00c50060 =====

undefined8 FUN_00c50060(undefined8 *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = 2;
  if ((param_2 < 0x15) && (param_3 < 0x15)) {
    puVar2 = (undefined8 *)operator_new__(0x38);
    if (puVar2 == (undefined8 *)0x0) {
      uVar1 = 3;
    }
    else {
      uVar1 = 0;
      *param_1 = puVar2;
      *puVar2 = &PTR_FUN_00d4db60;
      puVar2[1] = puVar2 + 4;
      *(int *)(puVar2 + 2) = param_3;
      *(int *)((long)puVar2 + 0x14) = param_2;
      *(undefined4 *)(puVar2 + 3) = 0;
    }
  }
  return uVar1;
}


// ===== 00c500e0  FUN_00c500e0 =====

undefined8 FUN_00c500e0(void *param_1)

{
  FUN_00841100(param_1,0x38);
  if (param_1 != (void *)0x0) {
    operator_delete__(param_1);
  }
  return 0;
}


// ===== 00c5011c  FUN_00c5011c =====

undefined8 FUN_00c5011c(void *param_1,void *param_2,int param_3)

{
  if (0x14 < param_3) {
    return 2;
  }
  memcpy(param_1,param_2,(long)param_3);
  *(int *)((long)param_1 + 0x14) = param_3;
  return 0;
}


// ===== 00c50168  FUN_00c50168 =====

undefined8 FUN_00c50168(void)

{
  return 0;
}


// ===== 00c50174  FUN_00c50174 =====

undefined8 FUN_00c50174(void)

{
  return 0;
}


// ===== 00c50180  FUN_00c50180 =====

undefined8 FUN_00c50180(void)

{
  int in_w3;
  void *in_x4;
  
  memcpy(in_x4,&DAT_0025974b,(long)in_w3);
  return 0;
}


// ===== 00c501b0  FUN_00c501b0 =====

ulong FUN_00c501b0(void)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = FUN_00c4e7e0(&PTR_FUN_00d4db60,4);
  if ((int)uVar1 != 0) {
    uVar2 = FUN_004249b0();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f6220,"../../pc/external_hmac.cc",0x493,
                   "Error in replacing default auth module, error: ",uVar1 & 0xffffffff);
    }
    uVar1 = 1;
  }
  return uVar1;
}


// ===== 00c50218  FUN_00c50218 =====

bool FUN_00c50218(void *param_1,size_t param_2,void *param_3,size_t param_4,void *param_5,
                 size_t param_6,void *param_7,size_t param_8)

{
  bool bVar1;
  int iVar2;
  
  if (param_2 == param_6) {
    iVar2 = memcmp(param_1,param_5,param_2);
    if ((iVar2 == 0) && (param_4 == param_8)) {
      iVar2 = memcmp(param_3,param_7,param_4);
      bVar1 = iVar2 != 0;
    }
    else {
      bVar1 = true;
    }
    return bVar1;
  }
  return true;
}


// ===== 00c502a0  FUN_00c502a0 =====

void * FUN_00c502a0(undefined8 param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x650);
  FUN_00c50324(pvVar1,param_4,param_1,param_2,param_3,*(undefined8 *)(param_4 + 0x28),
               *(undefined8 *)(param_4 + 0x30),0,*(undefined8 *)(param_4 + 0x38),
               *(undefined8 *)(param_4 + 0x40),*(undefined8 *)(param_4 + 0x48));
  return pvVar1;
}


// ===== 00c50324  FUN_00c50324 =====

/* WARNING: Removing unreachable block (ram,0x00c5090c) */
/* WARNING: Removing unreachable block (ram,0x00c509d4) */

void FUN_00c50324(undefined8 *param_1,long *param_2,undefined8 *param_3,ulong param_4,
                 undefined4 param_5,undefined8 param_6,long param_7,long param_8,undefined8 param_9,
                 undefined8 param_10,long *param_11)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  void *pvVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *local_210;
  long lStack_208;
  code *local_200;
  undefined8 uStack_1f8;
  char **local_1e8;
  char *local_1e0;
  char *pcStack_1d8;
  long *local_1d0;
  code *local_1c8;
  code *pcStack_1c0;
  undefined1 *local_1b8;
  undefined1 *puStack_1b0;
  undefined8 *local_1a8;
  undefined1 *puStack_1a0;
  code *local_198;
  undefined8 *puStack_190;
  undefined8 *local_188;
  undefined1 *puStack_180;
  code *local_178;
  undefined8 *puStack_170;
  undefined8 *local_168;
  undefined1 *puStack_160;
  code *local_158;
  undefined8 *puStack_150;
  undefined8 *local_148;
  undefined1 *puStack_140;
  undefined1 *local_138;
  undefined1 *puStack_130;
  undefined8 *local_128;
  long *local_120;
  code *local_118;
  code *pcStack_110;
  undefined1 *local_108;
  undefined1 *puStack_100;
  undefined8 *local_f8;
  undefined1 *puStack_f0;
  code *local_e8;
  undefined8 *puStack_e0;
  undefined8 *local_d8;
  undefined1 *puStack_d0;
  code *local_c8;
  undefined8 *puStack_c0;
  undefined8 *local_b8;
  undefined1 *puStack_b0;
  code *local_a8;
  undefined8 *puStack_a0;
  undefined8 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  FUN_00be0be8();
  *param_1 = &PTR_FUN_00d4dbf0;
  param_1[0x42] = &PTR_FUN_00d4dd38;
  lVar8 = *param_2;
  param_1[0x43] = lVar8;
  if (lVar8 != 0) {
    FUN_00d0f740(1,lVar8 + 8);
  }
  lVar10 = param_2[4];
  lVar8 = param_2[3];
  lVar11 = param_2[1];
  param_1[0x45] = param_2[2];
  param_1[0x44] = lVar11;
  param_1[0x47] = lVar10;
  param_1[0x46] = lVar8;
  if (0x7ffffffffffffff6 < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_4 < 0x17) {
    puVar5 = param_1 + 0x48;
    *(char *)((long)param_1 + 599) = (char)param_4;
  }
  else {
    uVar12 = (param_4 & 0x7ffffffffffffff8) + 8;
    uVar1 = 0x19;
    if (uVar12 != 0x18) {
      uVar1 = uVar12;
    }
    puVar5 = (undefined8 *)operator_new(uVar1);
    param_1[0x49] = param_4;
    param_1[0x48] = puVar5;
    param_1[0x4a] = uVar1 | 0x8000000000000000;
  }
  if ((undefined8 *)((long)puVar5 + param_4) < puVar5) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((puVar5 <= param_3) && (param_3 < (undefined8 *)((long)puVar5 + param_4))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memmove(puVar5,param_3,param_4);
  *(undefined1 *)((long)puVar5 + param_4) = 0;
  if (param_8 != 0) {
    param_7 = param_8;
  }
  param_1[0x4d] = param_7;
  param_1[0x62] = param_1 + 99;
  param_1[100] = 0;
  param_1[99] = 0;
  *(undefined8 *)((long)param_1 + 0x301) = 0;
  *(undefined8 *)((long)param_1 + 0x28c) = 0;
  *(undefined8 *)((long)param_1 + 0x284) = 0;
  *(undefined8 *)((long)param_1 + 0x29c) = 0;
  *(undefined8 *)((long)param_1 + 0x294) = 0;
  *(undefined8 *)((long)param_1 + 0x2ac) = 0;
  *(undefined8 *)((long)param_1 + 0x2a4) = 0;
  *(undefined8 *)((long)param_1 + 700) = 0;
  *(undefined8 *)((long)param_1 + 0x2b4) = 0;
  *(undefined8 *)((long)param_1 + 0x2cc) = 0;
  *(undefined8 *)((long)param_1 + 0x2c4) = 0;
  *(undefined8 *)((long)param_1 + 0x2dc) = 0;
  *(undefined8 *)((long)param_1 + 0x2d4) = 0;
  *(undefined8 *)((long)param_1 + 0x2ec) = 0;
  *(undefined8 *)((long)param_1 + 0x2e4) = 0;
  *(undefined8 *)((long)param_1 + 0x2fc) = 0;
  *(undefined8 *)((long)param_1 + 0x2f4) = 0;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  *(undefined8 *)((long)param_1 + 0x37c) = 2;
  param_1[0x72] = 0;
  param_1[0x71] = 0;
  *(undefined4 *)(param_1 + 0x4b) = param_5;
  param_1[0x4c] = param_6;
  param_1[0x4e] = param_8;
  param_1[0x4f] = param_9;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x6b) = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0;
  param_1[0x6e] = 0;
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  param_1[0x73] = 0;
  uVar12 = 1000000;
  FUN_00be06ac(param_1 + 0x74,&lsda_exception_table_002625a0,25000000,0,0,
               &lsda_exception_table_002625a0,1,300000000,1000000);
  *(undefined1 *)((long)param_1 + 0x48c) = 0;
  param_1[0x90] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x96) = 0;
  *(undefined4 *)((long)param_1 + 0x487) = 0;
  FUN_00c5b8e4(param_1 + 0x97);
  *(undefined4 *)(param_1 + 0xae) = 500;
  plVar7 = param_1 + 0x9d;
  *(undefined4 *)(param_1 + 0xaf) = 30000;
  param_1[0xa9] = 0;
  param_1[0x9e] = 0;
  *plVar7 = 0;
  param_1[0xa0] = 0;
  param_1[0x9f] = 0;
  param_1[0xa2] = 0;
  param_1[0xa1] = 0;
  param_1[0xa4] = 0;
  param_1[0xa3] = 0;
  param_1[0xa6] = 0;
  param_1[0xa5] = 0;
  *(undefined8 *)((long)param_1 + 0x53c) = 0;
  *(undefined8 *)((long)param_1 + 0x534) = 0;
  uVar3 = DAT_001f5700;
  *(undefined1 *)(param_1 + 0xaa) = 0;
  *(undefined1 *)((long)param_1 + 0x554) = 0;
  *(undefined1 *)(param_1 + 0xab) = 0;
  *(undefined1 *)((long)param_1 + 0x55c) = 0;
  *(undefined1 *)(param_1 + 0xac) = 0;
  *(undefined1 *)((long)param_1 + 0x564) = 0;
  *(undefined1 *)(param_1 + 0xad) = 0;
  *(undefined2 *)((long)param_1 + 0x56c) = 1;
  *(undefined2 *)((long)param_1 + 0x574) = 0;
  *(undefined1 *)((long)param_1 + 0x576) = 0;
  *(undefined1 *)((long)param_1 + 0x57c) = 1;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)((long)param_1 + 0x584) = 0;
  *(int *)(param_1 + 0xb1) = (int)uVar3;
  *(undefined1 *)(param_1 + 0xb2) = 0;
  param_1[0xb3] = 1;
  param_1[0xba] = 0;
  param_1[0xb9] = 0;
  param_1[0xb7] = 0;
  param_1[0xb6] = 0;
  param_1[0xb5] = 0;
  param_1[0xb8] = param_1 + 0xb9;
  puVar5 = (undefined8 *)operator_new(0x38);
  param_1[0xb4] = puVar5;
  param_1[0xc4] = FUN_00433984;
  puVar5[1] = 0;
  *puVar5 = 0;
  puVar5[3] = 0;
  puVar5[2] = 0;
  *puVar5 = puVar5 + 1;
  puVar5[5] = 0;
  puVar5[4] = 0;
  uVar3 = DAT_001f5650;
  puVar5[3] = puVar5 + 4;
  param_1[0xbb] = param_1 + 0xbc;
  puVar5[6] = uVar3;
  param_1[0xbd] = 0;
  param_1[0xbc] = 0;
  param_1[0xc0] = 0;
  param_1[0xbf] = 0;
  param_1[0xbe] = param_1 + 0xbf;
  param_1[0xc1] = uVar3;
  param_1[0xc5] = 0;
  param_1[200] = FUN_00433984;
  param_1[0xc9] = 0;
  if (((DAT_00dbb570 & 1) == 0) && (iVar4 = FUN_0054fdd4(&DAT_00dbb570), iVar4 != 0)) {
    DAT_00dbb568 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbb570);
  }
  local_1e8 = (char **)0x0;
  pcStack_1d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1e0 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbb568 != '\0') {
    uVar12 = uVar12 & 0xffffffffffffff00;
    FUN_0066d348(0x42,DAT_00dbb568,"P2PTransportChannel::P2PTransportChannel",0,0,0,0,0,uVar12);
    local_1e0 = DAT_00dbb568;
    pcStack_1d8 = "P2PTransportChannel::P2PTransportChannel";
    local_1e8 = &local_1e0;
  }
  lVar8 = param_1[0x4c];
  local_210 = param_1;
  local_1d0 = (long *)operator_new(0x20);
  local_1d0[2] = (long)FUN_004473ec;
  local_1d0[3] = (long)FUN_00c5ab30;
  local_1d0[1] = lStack_208;
  *local_1d0 = (long)local_210;
  local_1c8 = FUN_00c595a0;
  local_200 = FUN_00433984;
  uStack_1f8 = 0;
  pcStack_1c0 = FUN_00c595b0;
  FUN_007b5b08(lVar8 + 0xc0,param_1,&local_1d0);
  (*local_200)(0,&local_210,&local_210);
  param_1[0x97] = param_1[0x47];
  FUN_00c50b18(param_1,param_1[0x44]);
  local_120 = (long *)param_1[0x43];
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
  local_a8 = (code *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
  local_b8 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_c0 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
  local_c8 = (code *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
  local_d8 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_e0 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
  local_e8 = (code *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_f0 = &DAT_aaaaaaaaaaaaaaaa;
  local_f8 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_100 = &DAT_aaaaaaaaaaaaaaaa;
  local_108 = &DAT_aaaaaaaaaaaaaaaa;
  pcStack_110 = (code *)&DAT_aaaaaaaaaaaaaaaa;
  local_118 = (code *)&DAT_aaaaaaaaaaaaaaaa;
  if (local_120 != (long *)0x0) {
    FUN_00d0f740(1,local_120 + 1);
  }
  pcStack_110 = (code *)param_1[0x45];
  local_118 = (code *)param_1[0x44];
  puStack_100 = (undefined1 *)param_1[0x47];
  local_108 = (undefined1 *)param_1[0x46];
  local_c8 = FUN_00c5ab8c;
  puStack_c0 = &DAT_002597c0;
  local_e8 = FUN_00c5ab78;
  puStack_e0 = &DAT_002597a0;
  local_a8 = FUN_00c5aba0;
  puStack_a0 = &DAT_002597e0;
  local_f8 = param_1;
  local_d8 = param_1;
  local_b8 = param_1;
  local_98 = param_1 + 0xaa;
  (**(code **)(*(long *)param_1[0x44] + 0x10))
            (&puStack_90,(long *)param_1[0x44],"WebRTC-IceControllerFieldTrials",0x1f);
  if (param_11 == (long *)0x0) {
    pvVar6 = operator_new(0x38);
    puVar5 = (undefined8 *)0x0;
    if (param_1 != (undefined8 *)0x0) {
      puVar5 = param_1 + 0x42;
    }
    FUN_00c5c07c(pvVar6,puVar5,param_10,&local_120);
    plVar7 = (long *)param_1[0x9d];
    param_1[0x9d] = pvVar6;
    if (plVar7 == (long *)0x0) goto LAB_00c509cc;
    lVar8 = *plVar7;
  }
  else {
    local_1d0 = local_120;
    puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
    local_138 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_140 = &DAT_aaaaaaaaaaaaaaaa;
    local_148 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
    puStack_150 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
    local_158 = (code *)&DAT_aaaaaaaaaaaaaaaa;
    puStack_160 = &DAT_aaaaaaaaaaaaaaaa;
    local_168 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
    puStack_170 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
    local_178 = (code *)&DAT_aaaaaaaaaaaaaaaa;
    puStack_180 = &DAT_aaaaaaaaaaaaaaaa;
    local_188 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
    puStack_190 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
    local_198 = (code *)&DAT_aaaaaaaaaaaaaaaa;
    puStack_1a0 = &DAT_aaaaaaaaaaaaaaaa;
    local_1a8 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
    puStack_1b0 = &DAT_aaaaaaaaaaaaaaaa;
    local_1b8 = &DAT_aaaaaaaaaaaaaaaa;
    pcStack_1c0 = (code *)&DAT_aaaaaaaaaaaaaaaa;
    local_1c8 = (code *)&DAT_aaaaaaaaaaaaaaaa;
    local_128 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
    if (local_120 != (long *)0x0) {
      FUN_00d0f740(1,local_120 + 1);
    }
    pcStack_1c0 = pcStack_110;
    local_1c8 = local_118;
    puStack_1b0 = puStack_100;
    local_1b8 = local_108;
    puStack_1a0 = puStack_f0;
    local_1a8 = local_f8;
    puStack_190 = puStack_e0;
    local_198 = local_e8;
    if ((code *)*puStack_e0 != (code *)0x0) {
      local_1a8 = (undefined8 *)(*(code *)*puStack_e0)(local_f8);
    }
    puStack_180 = puStack_d0;
    local_188 = local_d8;
    puStack_170 = puStack_c0;
    local_178 = local_c8;
    if ((code *)*puStack_c0 != (code *)0x0) {
      local_188 = (undefined8 *)(*(code *)*puStack_c0)(local_d8);
    }
    puStack_160 = puStack_b0;
    local_168 = local_b8;
    puStack_150 = puStack_a0;
    local_158 = local_a8;
    if ((code *)*puStack_a0 != (code *)0x0) {
      local_168 = (undefined8 *)(*(code *)*puStack_a0)(local_b8);
    }
    local_148 = local_98;
    local_138 = local_88;
    puStack_140 = puStack_90;
    puStack_130 = puStack_80;
    local_128 = param_1 + 0x42;
    lVar8 = (**(code **)(*param_11 + 0x10))(param_11,&local_1d0);
    plVar9 = (long *)*plVar7;
    *plVar7 = lVar8;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))(plVar9);
    }
    if ((long)puStack_130 < 0) {
      operator_delete(puStack_140);
    }
    if ((code *)puStack_150[1] != (code *)0x0) {
      (*(code *)puStack_150[1])(local_168);
    }
    if ((code *)puStack_170[1] != (code *)0x0) {
      (*(code *)puStack_170[1])(local_188);
    }
    if ((code *)puStack_190[1] != (code *)0x0) {
      (*(code *)puStack_190[1])(local_1a8);
    }
    plVar7 = local_1d0;
    if ((local_1d0 == (long *)0x0) || (iVar4 = FUN_00d0f7a0(0xffffffff,local_1d0 + 1), iVar4 != 1))
    goto LAB_00c509cc;
    lVar8 = *plVar7;
  }
  (**(code **)(lVar8 + 8))(plVar7);
LAB_00c509cc:
  if ((code *)puStack_a0[1] != (code *)0x0) {
    (*(code *)puStack_a0[1])(local_b8);
  }
  if ((code *)puStack_c0[1] != (code *)0x0) {
    (*(code *)puStack_c0[1])(local_d8);
  }
  if ((code *)puStack_e0[1] != (code *)0x0) {
    (*(code *)puStack_e0[1])(local_f8);
  }
  plVar7 = local_120;
  if ((local_120 != (long *)0x0) && (iVar4 = FUN_00d0f7a0(0xffffffff,local_120 + 1), iVar4 == 1)) {
    (**(code **)(*plVar7 + 8))(plVar7);
  }
  if ((local_1e8 != (char **)0x0) && (**local_1e8 != '\0')) {
    FUN_0066d348(0x45,*local_1e8,local_1e8[1],0,0,0,0,0,uVar12 & 0xffffffffffffff00);
  }
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00c50b18  FUN_00c50b18 =====

/* WARNING: Removing unreachable block (ram,0x00c50f80) */
/* WARNING: Removing unreachable block (ram,0x00c50d38) */
/* WARNING: Removing unreachable block (ram,0x00c51324) */

void FUN_00c50b18(long *param_1,long *param_2)

{
  long *plVar1;
  int *****pppppiVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  void *pvVar7;
  void *pvVar8;
  ulong uVar9;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  int ****local_78;
  ulong local_70;
  byte bStack_61;
  int local_44;
  
  (**(code **)(*param_2 + 0x10))(&local_78,param_2,"WebRTC-ExtraICEPing",0x13);
  uVar5 = local_70;
  if (-1 < (char)bStack_61) {
    uVar5 = (ulong)bStack_61;
  }
  if (uVar5 < 7) {
    bVar3 = false;
  }
  else {
    pppppiVar2 = (int *****)local_78;
    if (-1 < (char)bStack_61) {
      pppppiVar2 = &local_78;
    }
    bVar3 = *(int *)pppppiVar2 == 0x62616e45 && *(int *)((long)pppppiVar2 + 3) == 0x64656c62;
  }
  if ((char)bStack_61 < '\0') {
    operator_delete(local_78);
  }
  if ((bVar3) && (uVar5 = FUN_00417e08(), (uVar5 & 1) == 0)) {
    FUN_00623bb0(&DAT_001f4e98,"../../p2p/base/p2p_transport_channel.cc",0x1691,
                 "Set WebRTC-ExtraICEPing: Enabled");
  }
  plVar1 = param_1 + 0xaf;
  puVar6 = (undefined8 *)
           FUN_00c544dc("skip_relay_to_non_relay_connections",param_1 + 0xaa,"max_outstanding_pings"
                        ,(long)param_1 + 0x554,"initial_select_dampening",(long)param_1 + 0x55c,
                        "initial_select_dampening_ping_received",(long)param_1 + 0x564,
                        "announce_goog_ping",(long)param_1 + 0x56c,"enable_goog_ping",
                        (long)param_1 + 0x56d,"rtt_estimate_halftime_ms",param_1 + 0xae,
                        "send_ping_on_switch_ice_controlling",(long)param_1 + 0x574,
                        "send_ping_on_selected_ice_controlling",(long)param_1 + 0x575,
                        "send_ping_on_nomination_ice_controlled",(long)param_1 + 0x576,
                        "dead_connection_timeout_ms",plVar1,"stop_gather_on_strongly_connected",
                        (long)param_1 + 0x57c,"enable_goog_delta",(long)param_1 + 0x58a,
                        "answer_goog_delta",(long)param_1 + 0x58b);
  (**(code **)(*param_2 + 0x10))(&local_78,param_2,"WebRTC-IceFieldTrials",0x15);
  uVar5 = local_70;
  pppppiVar2 = (int *****)local_78;
  if (-1 < (char)bStack_61) {
    uVar5 = (ulong)bStack_61;
    pppppiVar2 = &local_78;
  }
  FUN_006659ac(puVar6,pppppiVar2,uVar5);
  if (puVar6 != (undefined8 *)0x0) {
    pvVar7 = (void *)*puVar6;
    if (pvVar7 != (void *)0x0) {
      pvVar8 = (void *)puVar6[1];
      uVar9 = (ulong)((long)pvVar8 + (-0x20 - ((long)pvVar8 << 0x3b))) >> 5;
      uVar5 = (ulong)(((long)pvVar7 - (long)pvVar8 << 0x3b) - ((long)pvVar7 - (long)pvVar8)) >> 5;
      if (uVar9 <= uVar5) {
        uVar5 = uVar9;
      }
      if ((1 < uVar5) && ((((int)pvVar7 - (int)pvVar8 | -(int)pvVar8) & 0x1fU) == 0)) {
        uVar5 = uVar5 & 0x7fffffffffffffe;
        pvVar8 = (void *)((long)pvVar8 + uVar5 * -0x20);
        do {
          uVar5 = uVar5 - 2;
        } while (uVar5 != 0);
      }
      do {
        if (pvVar8 == pvVar7) {
          puVar6[1] = pvVar7;
          operator_delete(pvVar7);
          goto LAB_00c50dcc;
        }
        pvVar8 = (void *)((long)pvVar8 + -0x20);
      } while (pvVar8 != (void *)0x0);
      goto LAB_00c51000;
    }
LAB_00c50dcc:
    operator_delete(puVar6);
  }
  if ((int)*plVar1 < 30000) {
    uVar5 = FUN_004022fc();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f1906,"../../p2p/base/p2p_transport_channel.cc",0x17da,
                   "dead_connection_timeout_ms set to ",(int)*plVar1," increasing it to 30000");
    }
    *(int *)plVar1 = 30000;
  }
  if (((char)param_1[0xaa] == '\x01') && (uVar5 = FUN_00417e08(), (uVar5 & 1) == 0)) {
    FUN_00623bb0(&DAT_001f4e98,"../../p2p/base/p2p_transport_channel.cc",0x1811,
                 "Set skip_relay_to_non_relay_connections");
  }
  if (((char)param_1[0xab] == '\x01') && (uVar5 = FUN_00417e08(), (uVar5 & 1) == 0)) {
    if ((*(byte *)(param_1 + 0xab) & 1) == 0) goto LAB_00c51338;
    FUN_00623bb0(&DAT_001f4e94,"../../p2p/base/p2p_transport_channel.cc",0x1831,
                 "Set max_outstanding_pings: ",*(undefined4 *)((long)param_1 + 0x554));
  }
  if (((char)param_1[0xac] == '\x01') && (uVar5 = FUN_00417e08(), (uVar5 & 1) == 0)) {
    if ((*(byte *)(param_1 + 0xac) & 1) == 0) goto LAB_00c51338;
    FUN_00623bb0(&DAT_001f4e94,"../../p2p/base/p2p_transport_channel.cc",0x1859,
                 "Set initial_select_dampening: ",*(undefined4 *)((long)param_1 + 0x55c));
  }
  if (((char)param_1[0xad] == '\x01') && (uVar5 = FUN_00417e08(), (uVar5 & 1) == 0)) {
    if ((*(byte *)(param_1 + 0xad) & 1) == 0) {
LAB_00c51338:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    FUN_00623bb0(&DAT_001f4e94,"../../p2p/base/p2p_transport_channel.cc",0x1881,
                 "Set initial_select_dampening_ping_received: ",
                 *(undefined4 *)((long)param_1 + 0x564));
  }
  puVar6 = (undefined8 *)FUN_00974124("override_dscp",param_1 + 0xb0);
  (**(code **)(*param_2 + 0x10))(&local_78,param_2,"WebRTC-DscpFieldTrial",0x15);
  uVar5 = local_70;
  pppppiVar2 = (int *****)local_78;
  if (-1 < (char)bStack_61) {
    uVar5 = (ulong)bStack_61;
    pppppiVar2 = &local_78;
  }
  FUN_006659ac(puVar6,pppppiVar2,uVar5);
  if (puVar6 != (undefined8 *)0x0) {
    pvVar7 = (void *)*puVar6;
    if (pvVar7 != (void *)0x0) {
      pvVar8 = (void *)puVar6[1];
      uVar9 = (ulong)((long)pvVar8 + (-0x20 - ((long)pvVar8 << 0x3b))) >> 5;
      uVar5 = (ulong)(((long)pvVar7 - (long)pvVar8 << 0x3b) - ((long)pvVar7 - (long)pvVar8)) >> 5;
      if (uVar9 <= uVar5) {
        uVar5 = uVar9;
      }
      if ((1 < uVar5) && ((((int)pvVar7 - (int)pvVar8 | -(int)pvVar8) & 0x1fU) == 0)) {
        uVar5 = uVar5 & 0x7fffffffffffffe;
        pvVar8 = (void *)((long)pvVar8 + uVar5 * -0x20);
        do {
          uVar5 = uVar5 - 2;
        } while (uVar5 != 0);
      }
      do {
        if (pvVar8 == pvVar7) {
          puVar6[1] = pvVar7;
          operator_delete(pvVar7);
          goto LAB_00c51024;
        }
        pvVar8 = (void *)((long)pvVar8 + -0x20);
      } while (pvVar8 != (void *)0x0);
LAB_00c51000:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
LAB_00c51024:
    operator_delete(puVar6);
  }
  if (*(char *)((long)param_1 + 0x584) == '\x01') {
    (**(code **)(*param_1 + 0x20))(param_1,5,(int)param_1[0xb0]);
  }
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*param_2 + 0x10))(&local_90,param_2,"WebRTC-SetSocketReceiveBuffer",0x1d);
  local_44 = 0;
  iVar4 = sscanf((char *)&local_90,"Enabled-%d",&local_44);
  if (0 < local_44) {
    uVar5 = FUN_00417e08(iVar4);
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f1906,"../../p2p/base/p2p_transport_channel.cc",0x1921,
                   "Set WebRTC-SetSocketReceiveBuffer: Enabled and set to ",local_44,&DAT_0019c442);
    }
    (**(code **)(*param_1 + 0x20))(param_1,1,local_44 << 10);
  }
  (**(code **)(*param_2 + 0x10))(&local_78,param_2,"WebRTC-PiggybackIceCheckAcknowledgement",0x27);
  uVar5 = local_70;
  if (-1 < (char)bStack_61) {
    uVar5 = (ulong)bStack_61;
  }
  if (uVar5 < 7) {
    bVar3 = false;
  }
  else {
    pppppiVar2 = (int *****)local_78;
    if (-1 < (char)bStack_61) {
      pppppiVar2 = &local_78;
    }
    bVar3 = *(int *)pppppiVar2 == 0x62616e45 && *(int *)((long)pppppiVar2 + 3) == 0x64656c62;
  }
  if ((char)bStack_61 < '\0') {
    operator_delete(local_78);
  }
  *(bool *)(param_1 + 0xb1) = bVar3;
  (**(code **)(*param_2 + 0x10))(&local_78,param_2,"WebRTC-ExtraICEPing",0x13);
  uVar5 = local_70;
  if (-1 < (char)bStack_61) {
    uVar5 = (ulong)bStack_61;
  }
  if (uVar5 < 7) {
    bVar3 = false;
  }
  else {
    pppppiVar2 = (int *****)local_78;
    if (-1 < (char)bStack_61) {
      pppppiVar2 = &local_78;
    }
    bVar3 = *(int *)pppppiVar2 == 0x62616e45 && *(int *)((long)pppppiVar2 + 3) == 0x64656c62;
  }
  if ((char)bStack_61 < '\0') {
    operator_delete(local_78);
  }
  *(bool *)((long)param_1 + 0x589) = bVar3;
  if ((*(byte *)((long)param_1 + 0x58a) & 1) == 0) {
    FUN_00c708a0(param_1 + 0xb2);
  }
  (**(code **)(*param_2 + 0x10))(&local_78,param_2,"WebRTC-RFC8888CongestionControlFeedback",0x27);
  if (-1 < (char)bStack_61) {
    local_70 = (ulong)bStack_61;
  }
  if (local_70 < 7) {
    bVar3 = false;
  }
  else {
    pppppiVar2 = (int *****)local_78;
    if (-1 < (char)bStack_61) {
      pppppiVar2 = &local_78;
    }
    bVar3 = *(int *)pppppiVar2 == 0x62616e45 && *(int *)((long)pppppiVar2 + 3) == 0x64656c62;
  }
  if ((char)bStack_61 < '\0') {
    operator_delete(local_78);
  }
  if (bVar3) {
    uVar5 = FUN_00417e08();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../p2p/base/p2p_transport_channel.cc",0x19a9,
                   "Set WebRTC-RFC8888CongestionControlFeedback: Enable and set ECN recving mode");
    }
    (**(code **)(*param_1 + 0x20))(param_1,8,1);
  }
  return;
}


// ===== 00c5134c  FUN_00c5134c =====

void FUN_00c5134c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  void *pvVar5;
  long *plVar6;
  undefined8 *puVar7;
  void *pvVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  code *pcVar12;
  uint uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  void *pvVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  undefined1 auVar21 [16];
  char **local_58;
  char *local_50;
  char *pcStack_48;
  
  *param_1 = &PTR_FUN_00d4dbf0;
  param_1[0x42] = &PTR_FUN_00d4dd38;
  if (((DAT_00dbb580 & 1) == 0) && (iVar4 = FUN_0054fdd4(&DAT_00dbb580), iVar4 != 0)) {
    DAT_00dbb578 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbb580);
  }
  local_58 = (char **)0x0;
  pcStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbb578 != '\0') {
    FUN_0066d348(0x42,DAT_00dbb578,"P2PTransportChannel::~P2PTransportChannel",0,0,0,0,0,0);
    local_50 = DAT_00dbb578;
    pcStack_48 = "P2PTransportChannel::~P2PTransportChannel";
    local_58 = &local_50;
  }
  FUN_00841cf8(param_1 + 0x71);
  pvVar16 = (void *)param_1[0x5b];
  uVar14 = param_1[0x5c] - (long)pvVar16;
  if (uVar14 == 0) {
    lVar18 = 0;
    pvVar5 = (void *)0x0;
  }
  else {
    if ((long)uVar14 < 0) {
      auVar21 = FUN_00c595f0();
      lVar17 = auVar21._8_8_;
      lVar18 = auVar21._0_8_;
      plVar6 = *(long **)(lVar18 + 0x2d8);
      plVar9 = *(long **)(lVar18 + 0x2e0);
      plVar11 = plVar6;
      if (plVar6 != plVar9) {
        uVar14 = (long)plVar9 + (-8 - (long)plVar6);
        uVar13 = (uint)uVar14;
        if ((~uVar13 & 0x18) != 0) {
          uVar19 = (ulong)((uVar13 >> 3) + 1) & 3;
          do {
            plVar11 = plVar6;
            if (*plVar6 == lVar17) goto LAB_00c51ad0;
            uVar19 = uVar19 - 1;
            plVar6 = plVar6 + 1;
          } while (uVar19 != 0);
        }
        plVar11 = plVar9;
        if (0x17 < uVar14) {
          plVar6 = plVar6 + 2;
          do {
            if (plVar6[-2] == lVar17) {
              plVar11 = plVar6 + -2;
              break;
            }
            if (plVar6[-1] == lVar17) {
              plVar11 = plVar6 + -1;
              break;
            }
            plVar11 = plVar6;
            if (*plVar6 == lVar17) break;
            if (plVar6[1] == lVar17) {
              plVar11 = plVar6 + 1;
              break;
            }
            plVar1 = plVar6 + 2;
            plVar6 = plVar6 + 4;
            plVar11 = plVar9;
          } while (plVar1 != plVar9);
        }
      }
LAB_00c51ad0:
      FUN_00c62f44(lVar17);
      plVar6 = *(long **)(lVar18 + 0x2e0);
      if (plVar11 == plVar6) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:1160: libc++ Hardening assertion __position != end() failed: vector::erase(iterator) called with a non-dereferenceable iterator\n"
                  );
      }
      memmove(plVar11,plVar11 + 1,(long)plVar6 - (long)(plVar11 + 1));
      plVar11 = *(long **)(lVar18 + 0x2e0);
      uVar19 = (ulong)((long)plVar11 + (-8 - ((long)plVar11 << 0x3d))) >> 3;
      uVar14 = (((long)plVar6 - (long)plVar11 << 0x3d) - ((long)plVar6 - (long)plVar11)) + 8U >> 3;
      if (uVar19 <= uVar14) {
        uVar14 = uVar19;
      }
      if ((1 < uVar14) && ((-(int)plVar11 & 7U) == 0)) {
        uVar14 = uVar14 & 0x1ffffffffffffffe;
        plVar11 = plVar11 + -uVar14;
        do {
          uVar14 = uVar14 - 2;
        } while (uVar14 != 0);
      }
      do {
        if (plVar11 == plVar6 + -1) {
          *(long **)(lVar18 + 0x2e0) = plVar6 + -1;
          if (*(char *)(lVar17 + 0xa08) == '\x01') {
            pcVar12 = *(code **)(*(long *)(lVar17 + 0xa00) + 8);
            if (pcVar12 != (code *)0x0) {
              (*pcVar12)(*(undefined8 *)(lVar17 + 0x9e8));
            }
            *(undefined1 *)(lVar17 + 0xa08) = 0;
          }
          if (*(char *)(lVar17 + 0xa30) == '\x01') {
            pcVar12 = *(code **)(*(long *)(lVar17 + 0xa28) + 8);
            if (pcVar12 != (code *)0x0) {
              (*pcVar12)(*(undefined8 *)(lVar17 + 0xa10));
            }
            *(undefined1 *)(lVar17 + 0xa30) = 0;
          }
          (**(code **)(lVar17 + 0xa70))(0,lVar17 + 0xa60,lVar17 + 0xa60);
          *(code **)(lVar17 + 0xa70) = FUN_00433984;
          *(undefined8 *)(lVar17 + 0xa78) = 0;
          (**(code **)(lVar17 + 0xa90))(0,lVar17 + 0xa80,lVar17 + 0xa80);
          *(code **)(lVar17 + 0xa90) = FUN_00433984;
          *(undefined8 *)(lVar17 + 0xa98) = 0;
                    /* WARNING: Could not recover jumptable at 0x00c51c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(**(long **)(lVar18 + 0x4e8) + 0x28))(*(long **)(lVar18 + 0x4e8),lVar17);
          return;
        }
        plVar11 = plVar11 + -1;
      } while (plVar11 != (long *)0x0);
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    pvVar5 = operator_new(uVar14);
    lVar18 = (long)pvVar5 + uVar14;
    memcpy(pvVar5,pvVar16,uVar14);
    uVar19 = 0;
    do {
      lVar17 = *(long *)((long)pvVar5 + uVar19);
      FUN_007b5df8(lVar17 + 0xac0,param_1);
      FUN_00c51a60(param_1,lVar17);
      FUN_00c65358(lVar17);
      uVar19 = uVar19 + 8;
    } while (uVar14 != uVar19);
  }
  FUN_007b5df8(param_1[0x4c] + 0xc0,param_1);
  lVar20 = param_1[0x9e];
  lVar17 = param_1[0x9f];
  while (lVar20 != lVar17) {
    lVar3 = lVar17 + -0x1a0;
    if (lVar3 == 0) goto LAB_00c51928;
    plVar6 = *(long **)(lVar17 + -8);
    *(undefined8 *)(lVar17 + -8) = 0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    FUN_00aff0f8(lVar3);
    lVar17 = lVar3;
  }
  param_1[0x9f] = lVar20;
  if (pvVar5 != (void *)0x0) {
    if ((lVar18 - (lVar18 << 0x3d)) - 8U <
        (ulong)(((long)pvVar5 - lVar18 << 0x3d) - ((long)pvVar5 - lVar18))) goto LAB_00c51928;
    operator_delete(pvVar5);
  }
  if ((local_58 != (char **)0x0) && (**local_58 != '\0')) {
    FUN_0066d348(0x45,*local_58,local_58[1],0,0,0,0,0,0);
  }
  (*(code *)param_1[200])(0,param_1 + 0xc6,param_1 + 0xc6);
  (*(code *)param_1[0xc4])(0,param_1 + 0xc2,param_1 + 0xc2);
  local_58 = (char **)(param_1 + 0xbe);
  FUN_00c59608(&local_58,param_1[0xbf]);
  local_58 = (char **)(param_1 + 0xbb);
  FUN_00c5967c(&local_58,param_1[0xbc]);
  FUN_00c51c90(param_1 + 0xb2);
  pvVar16 = (void *)param_1[0xa1];
  if (pvVar16 != (void *)0x0) {
    pvVar5 = pvVar16;
    pvVar8 = (void *)param_1[0xa2];
    if (pvVar16 != (void *)param_1[0xa2]) {
      do {
        pvVar5 = (void *)((long)pvVar8 + -0x1a0);
        if (pvVar5 == (void *)0x0) goto LAB_00c51928;
        plVar6 = *(long **)((long)pvVar8 + -8);
        *(undefined8 *)((long)pvVar8 + -8) = 0;
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 8))();
        }
        FUN_00aff0f8(pvVar5);
        pvVar8 = pvVar5;
      } while (pvVar5 != pvVar16);
      pvVar5 = (void *)param_1[0xa1];
    }
    param_1[0xa2] = pvVar16;
    operator_delete(pvVar5);
  }
  pvVar16 = (void *)param_1[0x9e];
  if (pvVar16 != (void *)0x0) {
    pvVar5 = pvVar16;
    pvVar8 = (void *)param_1[0x9f];
    if (pvVar16 != (void *)param_1[0x9f]) {
      do {
        pvVar5 = (void *)((long)pvVar8 + -0x1a0);
        if (pvVar5 == (void *)0x0) goto LAB_00c51928;
        plVar6 = *(long **)((long)pvVar8 + -8);
        *(undefined8 *)((long)pvVar8 + -8) = 0;
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 8))();
        }
        FUN_00aff0f8(pvVar5);
        pvVar8 = pvVar5;
      } while (pvVar5 != pvVar16);
      pvVar5 = (void *)param_1[0x9e];
    }
    param_1[0x9f] = pvVar16;
    operator_delete(pvVar5);
  }
  plVar6 = (long *)param_1[0x9d];
  param_1[0x9d] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  FUN_00c5b900(param_1 + 0x97);
  FUN_00be08b0(param_1 + 0x74);
  pvVar16 = (void *)param_1[0x71];
  if ((pvVar16 != (void *)0x0) && (iVar4 = FUN_00d0f7a0(0xffffffff,pvVar16), iVar4 == 1)) {
    operator_delete(pvVar16);
  }
  puVar15 = (undefined8 *)param_1[0x6c];
  if (puVar15 != (undefined8 *)0x0) {
    puVar10 = (undefined8 *)param_1[0x6d];
    puVar7 = puVar15;
    if (puVar15 != puVar10) {
      do {
        puVar7 = puVar10 + -7;
        if (puVar7 == (undefined8 *)0x0) goto LAB_00c51928;
        if (*(char *)((long)puVar10 + -9) < '\0') {
          operator_delete((void *)puVar10[-4]);
          cVar2 = *(char *)((long)puVar10 + -0x21);
        }
        else {
          cVar2 = *(char *)((long)puVar10 + -0x21);
        }
        if (cVar2 < '\0') {
          operator_delete((void *)*puVar7);
        }
        puVar10 = puVar7;
      } while (puVar7 != puVar15);
      puVar7 = (undefined8 *)param_1[0x6c];
    }
    param_1[0x6d] = puVar15;
    operator_delete(puVar7);
  }
  if (*(char *)((long)param_1 + 0x357) < '\0') {
    operator_delete((void *)param_1[0x68]);
    cVar2 = *(char *)((long)param_1 + 0x33f);
  }
  else {
    cVar2 = *(char *)((long)param_1 + 0x33f);
  }
  if (cVar2 < '\0') {
    operator_delete((void *)param_1[0x65]);
  }
  local_58 = (char **)(param_1 + 0x62);
  FUN_00c5aabc(&local_58,param_1[99]);
  pvVar16 = (void *)param_1[0x5e];
  if (pvVar16 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x5f];
    pvVar8 = pvVar16;
    if (pvVar16 != pvVar5) {
      do {
        pvVar5 = (void *)((long)pvVar5 + -0x1a0);
        if (pvVar5 == (void *)0x0) goto LAB_00c51928;
        FUN_00aff0f8(pvVar5);
      } while (pvVar5 != pvVar16);
      pvVar8 = (void *)param_1[0x5e];
    }
    param_1[0x5f] = pvVar16;
    operator_delete(pvVar8);
  }
  pvVar16 = (void *)param_1[0x5b];
  if (pvVar16 == (void *)0x0) {
LAB_00c5183c:
    pvVar16 = (void *)param_1[0x57];
    if (pvVar16 == (void *)0x0) {
LAB_00c518bc:
      pvVar16 = (void *)param_1[0x54];
      if (pvVar16 == (void *)0x0) {
LAB_00c5194c:
        plVar6 = (long *)param_1[0x51];
        if (plVar6 != (long *)0x0) {
          plVar11 = (long *)param_1[0x52];
          plVar9 = plVar6;
          if (plVar6 != plVar11) {
            do {
              plVar11 = plVar11 + -1;
              if (plVar11 == (long *)0x0) goto LAB_00c51928;
              plVar9 = (long *)*plVar11;
              *plVar11 = 0;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))();
              }
            } while (plVar11 != plVar6);
            plVar9 = (long *)param_1[0x51];
          }
          param_1[0x52] = plVar6;
          operator_delete(plVar9);
        }
        plVar6 = (long *)param_1[0x4e];
        param_1[0x4e] = 0;
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 8))();
        }
        if (*(char *)((long)param_1 + 599) < '\0') {
          operator_delete((void *)param_1[0x48]);
        }
        plVar6 = (long *)param_1[0x43];
        if ((plVar6 != (long *)0x0) && (iVar4 = FUN_00d0f7a0(0xffffffff,plVar6 + 1), iVar4 == 1)) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
        FUN_00be0c5c(param_1);
        return;
      }
      pvVar5 = (void *)param_1[0x55];
      uVar19 = (ulong)((long)pvVar5 + (-8 - ((long)pvVar5 << 0x3d))) >> 3;
      uVar14 = (ulong)(((long)pvVar16 - (long)pvVar5 << 0x3d) - ((long)pvVar16 - (long)pvVar5)) >> 3
      ;
      if (uVar19 <= uVar14) {
        uVar14 = uVar19;
      }
      if ((1 < uVar14) && ((((int)pvVar16 - (int)pvVar5 | -(int)pvVar5) & 7U) == 0)) {
        uVar14 = uVar14 & 0x1ffffffffffffffe;
        pvVar5 = (void *)((long)pvVar5 + uVar14 * -8);
        do {
          uVar14 = uVar14 - 2;
        } while (uVar14 != 0);
      }
      do {
        if (pvVar5 == pvVar16) {
          param_1[0x55] = pvVar16;
          operator_delete(pvVar16);
          goto LAB_00c5194c;
        }
        pvVar5 = (void *)((long)pvVar5 + -8);
      } while (pvVar5 != (void *)0x0);
    }
    else {
      pvVar5 = (void *)param_1[0x58];
      uVar19 = (ulong)((long)pvVar5 + (-8 - ((long)pvVar5 << 0x3d))) >> 3;
      uVar14 = (ulong)(((long)pvVar16 - (long)pvVar5 << 0x3d) - ((long)pvVar16 - (long)pvVar5)) >> 3
      ;
      if (uVar19 <= uVar14) {
        uVar14 = uVar19;
      }
      if ((1 < uVar14) && ((((int)pvVar16 - (int)pvVar5 | -(int)pvVar5) & 7U) == 0)) {
        uVar14 = uVar14 & 0x1ffffffffffffffe;
        pvVar5 = (void *)((long)pvVar5 + uVar14 * -8);
        do {
          uVar14 = uVar14 - 2;
        } while (uVar14 != 0);
      }
      do {
        if (pvVar5 == pvVar16) {
          param_1[0x58] = pvVar16;
          operator_delete(pvVar16);
          goto LAB_00c518bc;
        }
        pvVar5 = (void *)((long)pvVar5 + -8);
      } while (pvVar5 != (void *)0x0);
    }
  }
  else {
    pvVar5 = (void *)param_1[0x5c];
    uVar19 = (ulong)((long)pvVar5 + (-8 - ((long)pvVar5 << 0x3d))) >> 3;
    uVar14 = (ulong)(((long)pvVar16 - (long)pvVar5 << 0x3d) - ((long)pvVar16 - (long)pvVar5)) >> 3;
    if (uVar19 <= uVar14) {
      uVar14 = uVar19;
    }
    if ((1 < uVar14) && ((((int)pvVar16 - (int)pvVar5 | -(int)pvVar5) & 7U) == 0)) {
      uVar14 = uVar14 & 0x1ffffffffffffffe;
      pvVar5 = (void *)((long)pvVar5 + uVar14 * -8);
      do {
        uVar14 = uVar14 - 2;
      } while (uVar14 != 0);
    }
    do {
      if (pvVar5 == pvVar16) {
        param_1[0x5c] = pvVar16;
        operator_delete(pvVar16);
        goto LAB_00c5183c;
      }
      pvVar5 = (void *)((long)pvVar5 + -8);
    } while (pvVar5 != (void *)0x0);
  }
LAB_00c51928:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00c51a60  FUN_00c51a60 =====

void FUN_00c51a60(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  code *pcVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar8 = *(long **)(param_1 + 0x2d8);
  plVar2 = *(long **)(param_1 + 0x2e0);
  plVar3 = plVar8;
  if (plVar8 != plVar2) {
    uVar6 = (long)plVar2 + (-8 - (long)plVar8);
    uVar5 = (uint)uVar6;
    if ((~uVar5 & 0x18) != 0) {
      uVar7 = (ulong)((uVar5 >> 3) + 1) & 3;
      do {
        plVar3 = plVar8;
        if (*plVar8 == param_2) goto LAB_00c51ad0;
        uVar7 = uVar7 - 1;
        plVar8 = plVar8 + 1;
      } while (uVar7 != 0);
    }
    plVar3 = plVar2;
    if (0x17 < uVar6) {
      plVar8 = plVar8 + 2;
      do {
        if (plVar8[-2] == param_2) {
          plVar3 = plVar8 + -2;
          break;
        }
        if (plVar8[-1] == param_2) {
          plVar3 = plVar8 + -1;
          break;
        }
        plVar3 = plVar8;
        if (*plVar8 == param_2) break;
        if (plVar8[1] == param_2) {
          plVar3 = plVar8 + 1;
          break;
        }
        plVar1 = plVar8 + 2;
        plVar8 = plVar8 + 4;
        plVar3 = plVar2;
      } while (plVar1 != plVar2);
    }
  }
LAB_00c51ad0:
  FUN_00c62f44(param_2);
  plVar8 = *(long **)(param_1 + 0x2e0);
  if (plVar3 == plVar8) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:1160: libc++ Hardening assertion __position != end() failed: vector::erase(iterator) called with a non-dereferenceable iterator\n"
              );
  }
  memmove(plVar3,plVar3 + 1,(long)plVar8 - (long)(plVar3 + 1));
  plVar3 = *(long **)(param_1 + 0x2e0);
  uVar7 = (ulong)((long)plVar3 + (-8 - ((long)plVar3 << 0x3d))) >> 3;
  uVar6 = (((long)plVar8 - (long)plVar3 << 0x3d) - ((long)plVar8 - (long)plVar3)) + 8U >> 3;
  if (uVar7 <= uVar6) {
    uVar6 = uVar7;
  }
  if ((1 < uVar6) && ((-(int)plVar3 & 7U) == 0)) {
    uVar6 = uVar6 & 0x1ffffffffffffffe;
    plVar3 = plVar3 + -uVar6;
    do {
      uVar6 = uVar6 - 2;
    } while (uVar6 != 0);
  }
  do {
    if (plVar3 == plVar8 + -1) {
      *(long **)(param_1 + 0x2e0) = plVar8 + -1;
      if (*(char *)(param_2 + 0xa08) == '\x01') {
        pcVar4 = *(code **)(*(long *)(param_2 + 0xa00) + 8);
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(*(undefined8 *)(param_2 + 0x9e8));
        }
        *(undefined1 *)(param_2 + 0xa08) = 0;
      }
      if (*(char *)(param_2 + 0xa30) == '\x01') {
        pcVar4 = *(code **)(*(long *)(param_2 + 0xa28) + 8);
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(*(undefined8 *)(param_2 + 0xa10));
        }
        *(undefined1 *)(param_2 + 0xa30) = 0;
      }
      (**(code **)(param_2 + 0xa70))(0,param_2 + 0xa60,param_2 + 0xa60);
      *(code **)(param_2 + 0xa70) = FUN_00433984;
      *(undefined8 *)(param_2 + 0xa78) = 0;
      (**(code **)(param_2 + 0xa90))(0,param_2 + 0xa80,param_2 + 0xa80);
      *(code **)(param_2 + 0xa90) = FUN_00433984;
      *(undefined8 *)(param_2 + 0xa98) = 0;
                    /* WARNING: Could not recover jumptable at 0x00c51c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x4e8) + 0x28))(*(long **)(param_1 + 0x4e8),param_2);
      return;
    }
    plVar3 = plVar3 + -1;
  } while (plVar3 != (long *)0x0);
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00c51c90  FUN_00c51c90 =====

void FUN_00c51c90(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  void *local_28;
  
  local_28 = (void *)(param_1 + 0x30);
  FUN_00c5967c(&local_28,*(undefined8 *)(param_1 + 0x38));
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)(param_1 + 0x20);
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
    *(void **)(param_1 + 0x20) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (pvVar1 != (void *)0x0) {
    local_28 = (void *)((long)pvVar1 + 0x18);
    FUN_00c59608(&local_28,*(undefined8 *)((long)pvVar1 + 0x20));
    local_28 = pvVar1;
    FUN_00c5967c(&local_28,*(undefined8 *)((long)pvVar1 + 8));
    operator_delete(pvVar1);
  }
  return;
}


// ===== 00c51d9c  FUN_00c51d9c =====

void FUN_00c51d9c(long param_1)

{
  FUN_00c5134c(param_1 + -0x210);
  return;
}


// ===== 00c51da8  FUN_00c51da8 =====

void FUN_00c51da8(void *param_1)

{
  FUN_00c5134c();
  operator_delete(param_1);
  return;
}


// ===== 00c51dd8  FUN_00c51dd8 =====

void FUN_00c51dd8(long param_1)

{
  FUN_00c5134c((void *)(param_1 + -0x210));
  operator_delete((void *)(param_1 + -0x210));
  return;
}


// ===== 00c51e0c  FUN_00c51e0c =====

void FUN_00c51e0c(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long local_80 [2];
  code *local_70;
  code *pcStack_68;
  long *local_60;
  long *local_58;
  code *pcStack_50;
  code *local_48;
  
  local_60 = param_2;
  (**(code **)(*param_2 + 0x88))
            (param_2,(ulong)(*(long *)(param_1 + 0x290) - *(long *)(param_1 + 0x288)) >> 3);
  local_70 = FUN_004473ec;
  pcStack_68 = FUN_00c5acfc;
  local_80[0] = param_1;
  FUN_00be4244(param_2,param_1,local_80);
  (*local_70)(0,local_80,local_80);
  local_58 = (long *)operator_new(0x20);
  *local_58 = param_1;
  local_58[2] = (long)FUN_004473ec;
  local_58[3] = (long)FUN_00c5ad08;
  pcStack_50 = FUN_00c59710;
  local_48 = FUN_00c59720;
  FUN_007b5b08(param_2 + 0x11,param_1,&local_58);
  local_58 = (long *)operator_new(0x20);
  *local_58 = param_1;
  local_58[2] = (long)FUN_004473ec;
  local_58[3] = (long)FUN_00c5ad14;
  pcStack_50 = FUN_00c59760;
  local_48 = FUN_00c59770;
  FUN_007b5b08(param_2 + 0x15,param_1,&local_58);
  local_58 = (long *)operator_new(0x20);
  *local_58 = param_1;
  local_58[2] = (long)FUN_004473ec;
  local_58[3] = (long)FUN_00c5adcc;
  pcStack_50 = FUN_00c597b0;
  local_48 = FUN_00c597c0;
  FUN_007b5b08(param_2 + 0x19,param_1,&local_58);
  local_58 = (long *)operator_new(0x20);
  *local_58 = param_1;
  local_58[2] = (long)FUN_004473ec;
  local_58[3] = (long)FUN_00c5ade8;
  pcStack_50 = FUN_00c59760;
  local_48 = FUN_00c59770;
  FUN_007b5b08(param_2 + 0x1d,param_1,&local_58);
  local_58 = (long *)operator_new(0x20);
  *local_58 = param_1;
  local_58[2] = (long)FUN_004473ec;
  local_58[3] = (long)FUN_00c5ae40;
  pcStack_50 = FUN_00c59800;
  local_48 = FUN_00c59810;
  FUN_007b5b08(param_2 + 0x21,param_1,&local_58);
  plVar1 = *(long **)(param_1 + 0x290);
  if (*(long **)(param_1 + 0x288) != plVar1) {
    (**(code **)(*(long *)plVar1[-1] + 0x78))();
    plVar1 = *(long **)(param_1 + 0x290);
  }
  if (plVar1 < *(long **)(param_1 + 0x298)) {
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    local_60 = (long *)0x0;
    plVar2 = plVar1 + 1;
    *plVar1 = (long)param_2;
  }
  else {
    plVar2 = (long *)FUN_00be4ff8(param_1 + 0x288,&local_60);
  }
  *(long **)(param_1 + 0x290) = plVar2;
  FUN_00c5a784(param_1 + 0x2b8,*(undefined8 *)(param_1 + 0x2c0),*(long *)(param_1 + 0x2a0),
               *(long *)(param_1 + 0x2a8),
               *(long *)(param_1 + 0x2a8) - *(long *)(param_1 + 0x2a0) >> 3);
  plVar1 = local_60;
  lVar4 = *(long *)(param_1 + 0x2a8);
  lVar3 = *(long *)(param_1 + 0x2a0);
  uVar6 = (lVar4 - (lVar4 << 0x3d)) - 8U >> 3;
  uVar5 = (ulong)((lVar3 - lVar4 << 0x3d) - (lVar3 - lVar4)) >> 3;
  if (uVar6 <= uVar5) {
    uVar5 = uVar6;
  }
  if ((1 < uVar5) && ((((int)lVar3 - (int)lVar4 | -(int)lVar4) & 7U) == 0)) {
    uVar5 = uVar5 & 0x1ffffffffffffffe;
    lVar4 = lVar4 + uVar5 * -8;
    do {
      uVar5 = uVar5 - 2;
    } while (uVar5 != 0);
  }
  do {
    if (lVar4 == lVar3) {
      *(long *)(param_1 + 0x2a8) = lVar3;
      local_60 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      return;
    }
    lVar4 = lVar4 + -8;
  } while (lVar4 != 0);
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00c520f8  FUN_00c520f8 =====

void FUN_00c520f8(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  code *pcVar6;
  undefined *puVar7;
  long local_80 [2];
  code *local_70;
  code *pcStack_68;
  long local_60;
  long *local_58;
  code *pcStack_50;
  code *local_48;
  
  local_60 = param_2;
  FUN_00c62cd0(param_2,*(undefined8 *)(param_1 + 0x3a0),*(undefined8 *)(param_1 + 0x3a8));
  FUN_00c62c98(param_2,*(undefined8 *)(param_1 + 0x438),*(undefined8 *)(param_1 + 0x440));
  FUN_00c62ca8(param_2,param_1 + 0x448);
  FUN_00c62cc0(param_2,*(undefined8 *)(param_1 + 0x450),*(undefined8 *)(param_1 + 0x458));
  local_70 = FUN_004473ec;
  pcStack_68 = FUN_00c5ae4c;
  local_80[0] = param_1;
  FUN_00c62ea0(param_2,local_80);
  (*local_70)(0,local_80,local_80);
  local_58 = (long *)operator_new(0x20);
  *local_58 = param_1;
  local_58[2] = (long)FUN_004473ec;
  local_58[3] = (long)FUN_00c5afcc;
  pcStack_50 = FUN_00c59850;
  local_48 = FUN_00c59860;
  FUN_007b5b08(param_2 + 0xae0,param_1,&local_58);
  local_58 = (long *)operator_new(0x20);
  *local_58 = param_1;
  local_58[2] = (long)FUN_004473ec;
  local_58[3] = (long)FUN_00c5b028;
  pcStack_50 = FUN_00c59850;
  local_48 = FUN_00c59860;
  FUN_007b5b08(param_2 + 0xaa0,param_1,&local_58);
  local_58 = (long *)operator_new(0x20);
  *local_58 = param_1;
  local_58[2] = (long)FUN_004473ec;
  local_58[3] = (long)FUN_00c5b034;
  pcStack_50 = FUN_00c59850;
  local_48 = FUN_00c59860;
  FUN_007b5b08(param_2 + 0xac0,param_1,&local_58);
  local_58 = (long *)operator_new(0x20);
  *local_58 = param_1;
  local_58[2] = (long)FUN_004473ec;
  local_58[3] = (long)FUN_00c5b040;
  pcStack_50 = FUN_00c59850;
  local_48 = FUN_00c59860;
  FUN_007b5b08(param_2 + 0xb00,param_1,&local_58);
  *(undefined1 *)(param_1 + 0x308) = 1;
  FUN_00c67028(param_2,param_1 + 0x4b8);
  FUN_00c62ce0(param_2,param_1 + 0x550);
  if (*(char *)(param_2 + 0xa08) == '\x01') {
    lVar5 = *(long *)(param_2 + 0xa00);
    *(undefined **)(param_2 + 0xa00) = &DAT_001fbc50;
    *(undefined8 *)(param_2 + 0x9f8) = 0;
    pcVar6 = *(code **)(lVar5 + 8);
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(*(undefined8 *)(param_2 + 0x9e8));
    }
    *(long *)(param_2 + 0x9e8) = param_1;
    *(code **)(param_2 + 0x9f8) = FUN_00c5b04c;
    *(undefined **)(param_2 + 0xa00) = &DAT_00259800;
    puVar7 = &DAT_001fbc50;
  }
  else {
    puVar7 = &DAT_00259800;
    *(long *)(param_2 + 0x9e8) = param_1;
    *(code **)(param_2 + 0x9f8) = FUN_00c5b04c;
    *(undefined **)(param_2 + 0xa00) = &DAT_00259800;
    *(undefined1 *)(param_2 + 0xa08) = 1;
  }
  if (*(char *)(param_2 + 0xa30) == '\x01') {
    lVar5 = *(long *)(param_2 + 0xa28);
    *(undefined **)(param_2 + 0xa28) = &DAT_001fbc50;
    *(undefined8 *)(param_2 + 0xa20) = 0;
    pcVar6 = *(code **)(lVar5 + 8);
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(*(undefined8 *)(param_2 + 0xa10));
    }
    *(long *)(param_2 + 0xa10) = param_1;
    *(code **)(param_2 + 0xa20) = FUN_00c5b058;
    *(undefined **)(param_2 + 0xa28) = &DAT_00259820;
    pcVar6 = DAT_001fbc58;
  }
  else {
    if ((undefined8 *)(param_2 + 0xa10) == (undefined8 *)0x0) goto LAB_00c5246c;
    *(code **)(param_2 + 0xa20) = FUN_00c5b058;
    *(long *)(param_2 + 0xa10) = param_1;
    *(undefined **)(param_2 + 0xa28) = &DAT_00259820;
    *(undefined1 *)(param_2 + 0xa30) = 1;
    pcVar6 = DAT_00259828;
  }
  if (pcVar6 != (code *)0x0) {
    (*pcVar6)(param_1);
  }
  if (*(code **)(puVar7 + 8) != (code *)0x0) {
    (**(code **)(puVar7 + 8))(param_1);
  }
  if (*(long *)(param_1 + 0x628) != 0) {
    (**(code **)(param_2 + 0xa70))(0,param_2 + 0xa60,param_2 + 0xa60);
    *(long *)(param_2 + 0xa60) = param_1;
    *(code **)(param_2 + 0xa70) = FUN_004473ec;
    *(code **)(param_2 + 0xa78) = FUN_00c5b178;
    (**(code **)(param_2 + 0xa90))(0,param_2 + 0xa80,param_2 + 0xa80);
    *(long *)(param_2 + 0xa80) = param_1;
    *(code **)(param_2 + 0xa90) = FUN_004473ec;
    *(code **)(param_2 + 0xa98) = FUN_00c5b18c;
  }
  if (param_2 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 0x38);
    uVar2 = FUN_00c66d04(param_2);
    FUN_00c5b998(param_1 + 0x4b8,0,uVar1,uVar2);
  }
  plVar3 = *(long **)(param_1 + 0x2e0);
  if (plVar3 < *(long **)(param_1 + 0x2e8)) {
    if (plVar3 == (long *)0x0) {
LAB_00c5246c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    plVar4 = plVar3 + 1;
    *plVar3 = param_2;
  }
  else {
    plVar4 = (long *)FUN_00c598a0(param_1 + 0x2d8,&local_60);
  }
  *(long **)(param_1 + 0x2e0) = plVar4;
  (**(code **)(**(long **)(param_1 + 0x4e8) + 0x18))(*(long **)(param_1 + 0x4e8),local_60);
  return;
}


// ===== 00c52490  FUN_00c52490 =====

void FUN_00c52490(undefined8 param_1,undefined8 *param_2,long param_3)

{
  for (param_3 = param_3 << 3; param_3 != 0; param_3 = param_3 + -8) {
    FUN_00c67fd8(*param_2);
    param_2 = param_2 + 1;
  }
  return;
}


// ===== 00c524cc  FUN_00c524cc =====

void FUN_00c524cc(undefined8 param_1,undefined8 *param_2,long param_3)

{
  for (param_3 = param_3 << 3; param_3 != 0; param_3 = param_3 + -8) {
    FUN_00c67fd8(*param_2);
    param_2 = param_2 + 1;
  }
  return;
}


// ===== 00c52508  FUN_00c52508 =====

void FUN_00c52508(long param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (*(int *)(param_1 + 0x37c) != param_2) {
    puVar1 = *(undefined8 **)(param_1 + 0x2a0);
    puVar2 = *(undefined8 **)(param_1 + 0x2a8);
    *(int *)(param_1 + 0x37c) = param_2;
    for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
      (**(code **)(*(long *)*puVar1 + 0x20))((long *)*puVar1,param_2);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x2c0);
    for (puVar1 = *(undefined8 **)(param_1 + 0x2b8); puVar1 != puVar2; puVar1 = puVar1 + 1) {
      (**(code **)(*(long *)*puVar1 + 0x20))((long *)*puVar1,param_2);
    }
  }
  return;
}


// ===== 00c525a4  FUN_00c525a4 =====

undefined4 FUN_00c525a4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x37c);
}


// ===== 00c525b0  FUN_00c525b0 =====

undefined4 FUN_00c525b0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x16c);
}


// ===== 00c525bc  FUN_00c525bc =====

undefined4 FUN_00c525bc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x398);
}


// ===== 00c525c8  FUN_00c525c8 =====

undefined4 FUN_00c525c8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x39c);
}


// ===== 00c525d4  FUN_00c525d4 =====

long FUN_00c525d4(long param_1)

{
  return param_1 + 0x240;
}


// ===== 00c525e0  FUN_00c525e0 =====

undefined4 FUN_00c525e0(long param_1)

{
  return *(undefined4 *)(param_1 + 600);
}


// ===== 00c525ec  FUN_00c525ec =====

undefined1 FUN_00c525ec(long param_1)

{
  return *(undefined1 *)(param_1 + 0x489);
}


// ===== 00c525f8  FUN_00c525f8 =====

undefined1 FUN_00c525f8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x488);
}


// ===== 00c52604  FUN_00c52604 =====

undefined4 FUN_00c52604(long param_1)

{
  return *(undefined4 *)(param_1 + 0x380);
}


// ===== 00c52610  FUN_00c52610 =====

ulong FUN_00c52610(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x2d0);
  if (uVar2 != 0) {
    iVar1 = FUN_00c668f8();
    if (iVar1 < 1) {
      uVar2 = 0;
    }
    else {
      uVar3 = FUN_00c66c3c(*(undefined8 *)(param_1 + 0x2d0));
      uVar2 = uVar3 / 1000;
      if (499 < uVar3 % 1000) {
        uVar2 = uVar2 + 1;
      }
      if ((uVar3 & 0x8000000000000000) != 0) {
        uVar2 = -(-uVar3 / 1000) - (ulong)(500 < -uVar3 % 1000);
      }
      uVar2 = uVar2 & 0xffffffff | 0x100000000;
    }
  }
  return uVar2;
}


// ===== 00c526b8  FUN_00c526b8 =====

void FUN_00c526b8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_510 [408];
  undefined **local_378;
  undefined1 auStack_370 [408];
  undefined1 auStack_1d8 [408];
  
  if (*(long *)(param_2 + 0x2d0) == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 0x67) = 0;
  }
  else {
    memset(auStack_370,0xaa,0x330);
    local_378 = &PTR_FUN_00d499b0;
    FUN_00afeb90(auStack_370);
    FUN_00afeb90(auStack_1d8);
    uVar1 = (**(code **)(**(long **)(param_2 + 0x2d0) + 0x10))();
    FUN_00be4140(auStack_510,*(undefined8 *)(param_2 + 0x260),uVar1);
    FUN_00c527dc(auStack_370,auStack_510);
    FUN_00aff0f8(auStack_510);
    uVar1 = (**(code **)(**(long **)(param_2 + 0x2d0) + 0x18))();
    FUN_00c52b94(auStack_510,param_2,uVar1);
    FUN_00c527dc(auStack_1d8,auStack_510);
    FUN_00aff0f8(auStack_510);
    *param_1 = &PTR_FUN_00d499b0;
    FUN_00afef10(param_1 + 1,auStack_370);
    FUN_00afef10(param_1 + 0x34,auStack_1d8);
    *(undefined1 *)(param_1 + 0x67) = 1;
    FUN_00aff0f8(auStack_1d8);
    FUN_00aff0f8(auStack_370);
  }
  return;
}


// ===== 00c527dc  FUN_00c527dc =====

undefined8 * FUN_00c527dc(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 == param_2) {
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
    FUN_007e8d84(param_1 + 10,param_2 + 10);
    *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
    *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
    uVar4 = param_2[0x1e];
    *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(param_2 + 0x1f);
    param_1[0x1e] = uVar4;
    FUN_007e8d84(param_1 + 0x23,param_2 + 0x23);
    *(undefined4 *)(param_1 + 0x2f) = *(undefined4 *)(param_2 + 0x2f);
  }
  else {
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
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
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
    FUN_007e8d84(param_1 + 10,param_2 + 10);
    *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
    bVar2 = *(byte *)((long)param_2 + 0xb7);
    if (*(char *)((long)param_1 + 0xb7) < '\0') {
      uVar1 = param_2[0x15];
      puVar3 = (undefined8 *)param_2[0x14];
      if (-1 < (char)bVar2) {
        uVar1 = (ulong)bVar2;
        puVar3 = param_2 + 0x14;
      }
      FUN_00547f08(param_1 + 0x14,puVar3,uVar1);
    }
    else if ((char)bVar2 < '\0') {
      FUN_00547fc0(param_1 + 0x14,param_2[0x14],param_2[0x15]);
    }
    else {
      uVar5 = param_2[0x15];
      uVar4 = param_2[0x14];
      param_1[0x16] = param_2[0x16];
      param_1[0x15] = uVar5;
      param_1[0x14] = uVar4;
    }
    bVar2 = *(byte *)((long)param_2 + 0xcf);
    if (*(char *)((long)param_1 + 0xcf) < '\0') {
      uVar1 = param_2[0x18];
      puVar3 = (undefined8 *)param_2[0x17];
      if (-1 < (char)bVar2) {
        uVar1 = (ulong)bVar2;
        puVar3 = param_2 + 0x17;
      }
      FUN_00547f08(param_1 + 0x17,puVar3,uVar1);
    }
    else if ((char)bVar2 < '\0') {
      FUN_00547fc0(param_1 + 0x17,param_2[0x17],param_2[0x18]);
    }
    else {
      uVar5 = param_2[0x18];
      uVar4 = param_2[0x17];
      param_1[0x19] = param_2[0x19];
      param_1[0x18] = uVar5;
      param_1[0x17] = uVar4;
    }
    *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
    bVar2 = *(byte *)((long)param_2 + 0xef);
    if (*(char *)((long)param_1 + 0xef) < '\0') {
      uVar1 = param_2[0x1c];
      puVar3 = (undefined8 *)param_2[0x1b];
      if (-1 < (char)bVar2) {
        uVar1 = (ulong)bVar2;
        puVar3 = param_2 + 0x1b;
      }
      FUN_00547f08(param_1 + 0x1b,puVar3,uVar1);
    }
    else if ((char)bVar2 < '\0') {
      FUN_00547fc0(param_1 + 0x1b,param_2[0x1b],param_2[0x1c]);
    }
    else {
      uVar5 = param_2[0x1c];
      uVar4 = param_2[0x1b];
      param_1[0x1d] = param_2[0x1d];
      param_1[0x1c] = uVar5;
      param_1[0x1b] = uVar4;
    }
    uVar4 = param_2[0x1e];
    *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(param_2 + 0x1f);
    param_1[0x1e] = uVar4;
    bVar2 = *(byte *)((long)param_2 + 0x117);
    if (*(char *)((long)param_1 + 0x117) < '\0') {
      uVar1 = param_2[0x21];
      puVar3 = (undefined8 *)param_2[0x20];
      if (-1 < (char)bVar2) {
        uVar1 = (ulong)bVar2;
        puVar3 = param_2 + 0x20;
      }
      FUN_00547f08(param_1 + 0x20,puVar3,uVar1);
    }
    else if ((char)bVar2 < '\0') {
      FUN_00547fc0(param_1 + 0x20,param_2[0x20],param_2[0x21]);
    }
    else {
      uVar5 = param_2[0x21];
      uVar4 = param_2[0x20];
      param_1[0x22] = param_2[0x22];
      param_1[0x21] = uVar5;
      param_1[0x20] = uVar4;
    }
    FUN_007e8d84(param_1 + 0x23,param_2 + 0x23);
    bVar2 = *(byte *)((long)param_2 + 0x177);
    if (*(char *)((long)param_1 + 0x177) < '\0') {
      uVar1 = param_2[0x2d];
      puVar3 = (undefined8 *)param_2[0x2c];
      if (-1 < (char)bVar2) {
        uVar1 = (ulong)bVar2;
        puVar3 = param_2 + 0x2c;
      }
      FUN_00547f08(param_1 + 0x2c,puVar3,uVar1);
    }
    else if ((char)bVar2 < '\0') {
      FUN_00547fc0(param_1 + 0x2c,param_2[0x2c],param_2[0x2d]);
    }
    else {
      uVar5 = param_2[0x2d];
      uVar4 = param_2[0x2c];
      param_1[0x2e] = param_2[0x2e];
      param_1[0x2d] = uVar5;
      param_1[0x2c] = uVar4;
    }
    *(undefined4 *)(param_1 + 0x2f) = *(undefined4 *)(param_2 + 0x2f);
    bVar2 = *(byte *)((long)param_2 + 0x197);
    if (*(char *)((long)param_1 + 0x197) < '\0') {
      uVar1 = param_2[0x31];
      puVar3 = (undefined8 *)param_2[0x30];
      if (-1 < (char)bVar2) {
        uVar1 = (ulong)bVar2;
        puVar3 = param_2 + 0x30;
      }
      FUN_00547f08(param_1 + 0x30,puVar3,uVar1);
    }
    else if ((char)bVar2 < '\0') {
      FUN_00547fc0(param_1 + 0x30,param_2[0x30],param_2[0x31]);
    }
    else {
      uVar5 = param_2[0x31];
      uVar4 = param_2[0x30];
      param_1[0x32] = param_2[0x32];
      param_1[0x31] = uVar5;
      param_1[0x30] = uVar4;
    }
  }
  return param_1;
}


// ===== 00c52b94  FUN_00c52b94 =====

void FUN_00c52b94(undefined8 param_1,long param_2,long param_3)

{
  size_t sVar1;
  undefined8 *__s2;
  byte bVar2;
  long *plVar3;
  undefined8 *__s1;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  size_t sVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  uVar9 = *(ulong *)(param_3 + 0x58);
  plVar3 = (long *)*(long *)(param_3 + 0x50);
  if (-1 < (char)*(byte *)(param_3 + 0x67)) {
    uVar9 = (ulong)*(byte *)(param_3 + 0x67);
    plVar3 = (long *)(param_3 + 0x50);
  }
  sVar8 = strlen(PTR_s__local_00d52670);
  if (sVar8 == 0) {
    bVar5 = true;
  }
  else if (uVar9 < sVar8) {
    bVar5 = false;
  }
  else {
    iVar7 = memcmp((void *)((long)plVar3 + (uVar9 - sVar8)),PTR_s__local_00d52670,sVar8);
    bVar5 = iVar7 == 0;
  }
  bVar6 = FUN_00aff308(param_3);
  uVar9 = FUN_00aff308(param_3);
  if ((uVar9 & 1) == 0) {
    bVar4 = false;
  }
  else {
    puVar10 = *(undefined8 **)(param_2 + 0x368);
    puVar11 = *(undefined8 **)(param_2 + 0x360);
    sVar8 = *(size_t *)(param_3 + 0xa8);
    __s1 = (undefined8 *)*(void **)(param_3 + 0xa0);
    if (-1 < (char)*(byte *)(param_3 + 0xb7)) {
      sVar8 = (ulong)*(byte *)(param_3 + 0xb7);
      __s1 = (undefined8 *)(param_3 + 0xa0);
    }
    if (puVar10 == puVar11) {
LAB_00c52cb8:
      bVar4 = puVar10 == puVar11 || puVar10 == (undefined8 *)0x38;
    }
    else {
      do {
        puVar12 = puVar10 + -7;
        bVar2 = *(byte *)((long)puVar10 + -0x21);
        sVar1 = puVar10[-6];
        if (-1 < (char)bVar2) {
          sVar1 = (ulong)bVar2;
        }
        if (sVar8 == sVar1) {
          __s2 = (undefined8 *)*puVar12;
          if (-1 < (char)bVar2) {
            __s2 = puVar12;
          }
          iVar7 = memcmp(__s1,__s2,sVar8);
          if (iVar7 == 0) goto LAB_00c52cb8;
        }
        puVar10 = puVar12;
      } while (puVar12 != puVar11);
      bVar4 = true;
    }
  }
  FUN_00b00460(param_1,param_3,bVar5 | bVar6 & 1,0,bVar4);
  return;
}


// ===== 00c52d08  FUN_00c52d08 =====

undefined4 FUN_00c52d08(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *******pppppppuVar3;
  ulong uVar4;
  undefined4 uVar5;
  long *plVar6;
  long *plVar7;
  void *local_98 [2];
  char cStack_81;
  undefined8 ******local_80 [2];
  char cStack_69;
  undefined8 *****local_68;
  undefined8 ******local_60;
  undefined8 ******local_58;
  undefined8 uStack_50;
  long *local_48;
  long *local_40;
  long *local_38;
  
  if (*(char *)(param_1 + 0x308) == '\x01') {
    plVar6 = *(long **)(param_1 + 0x2d8);
    plVar7 = *(long **)(param_1 + 0x2e0);
    local_48 = (long *)0x0;
    local_40 = (long *)0x0;
    local_38 = (long *)0x0;
    if (plVar6 == plVar7) {
      uVar5 = 3;
    }
    else {
      do {
        local_60 = (undefined8 ******)*plVar6;
        uVar2 = FUN_00c65344();
        if ((uVar2 & 1) != 0) {
          if (local_40 < local_38) {
            if (local_40 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                        );
            }
            *local_40 = (long)local_60;
            local_40 = local_40 + 1;
          }
          else {
            local_40 = (long *)FUN_00c598a0(&local_48,&local_60);
          }
        }
        plVar1 = local_40;
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar7);
      if (local_48 == local_40) {
        uVar5 = 3;
      }
      else {
        local_58 = (undefined8 *******)0x0;
        uStack_50 = 0;
        plVar6 = local_48;
        local_60 = &local_58;
        do {
          local_68 = (undefined8 *****)(**(code **)(*(long *)*plVar6 + 0x20))();
          for (pppppppuVar3 = (undefined8 *******)local_58; pppppppuVar3 != (undefined8 *******)0x0;
              pppppppuVar3 = (undefined8 *******)*pppppppuVar3) {
            while (pppppppuVar3[4] <= local_68) {
              if (local_68 <= pppppppuVar3[4]) {
                if (pppppppuVar3 == &local_58) goto LAB_00c52de0;
                uVar2 = FUN_0044075c();
                if ((uVar2 & 1) == 0) {
                  FUN_00c52fa8(local_80,param_1);
                  FUN_00bcc3dc(local_98,local_68);
                  FUN_00623bb0("\r\n\t\n\t","../../p2p/base/p2p_transport_channel.cc",0xde8,local_80
                               ,": Ice not completed yet for this channel as ",local_98,
                               " has more than 1 connection.");
                  if (cStack_81 < '\0') {
                    operator_delete(local_98[0]);
                  }
                  if (cStack_69 < '\0') {
                    operator_delete(local_80[0]);
                  }
                }
                uVar5 = 1;
                goto LAB_00c52e54;
              }
              pppppppuVar3 = (undefined8 *******)pppppppuVar3[1];
              if (pppppppuVar3 == (undefined8 *******)0x0) goto LAB_00c52de0;
            }
          }
LAB_00c52de0:
          FUN_00c5b558(0,&local_60,&local_60,&local_68);
          plVar6 = plVar6 + 1;
        } while (plVar6 != plVar1);
        FUN_00c5bab4(param_1 + 0x4b8);
        uVar5 = 2;
LAB_00c52e54:
        local_80[0] = &local_60;
        FUN_00c5b4e4(local_80,local_58);
      }
      if (local_48 != (long *)0x0) {
        uVar4 = (ulong)((long)local_40 + (-8 - ((long)local_40 << 0x3d))) >> 3;
        uVar2 = (ulong)(((long)local_48 - (long)local_40 << 0x3d) -
                       ((long)local_48 - (long)local_40)) >> 3;
        if (uVar4 <= uVar2) {
          uVar2 = uVar4;
        }
        plVar6 = local_40;
        if ((1 < uVar2) && ((((int)local_48 - (int)local_40 | -(int)local_40) & 7U) == 0)) {
          uVar2 = uVar2 & 0x1ffffffffffffffe;
          plVar6 = local_40 + -uVar2;
          do {
            uVar2 = uVar2 - 2;
          } while (uVar2 != 0);
        }
        while (plVar6 != local_48) {
          plVar6 = plVar6 + -1;
          if (plVar6 == (long *)0x0) {
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
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}


// ===== 00c52fa8  FUN_00c52fa8 =====

void FUN_00c52fa8(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 ***pppuVar3;
  long lVar4;
  long lVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 **local_48;
  ulong uStack_40;
  ulong local_38;
  
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  FUN_00547cac(&local_60,"Channel[",8);
  lVar5 = (long)*(char *)(param_2 + 599);
  if (lVar5 < 0) {
    lVar4 = *(long *)(param_2 + 0x240);
    lVar5 = *(long *)(param_2 + 0x248);
  }
  else {
    lVar4 = param_2 + 0x240;
  }
  FUN_00547cac(&local_60,lVar4,lVar5);
  FUN_00547cac(&local_60,&DAT_001e3d0b,1);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005f55c4(&local_48,0x16,*(undefined4 *)(param_2 + 600));
  uVar1 = uStack_40;
  pppuVar3 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar3 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar3,uVar1);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  FUN_00547cac(&local_60,&DAT_001e3d0b,1);
  puVar2 = &UNK_0019f343;
  if (*(char *)(param_2 + 0x488) == '\0') {
    puVar2 = &DAT_001e47a3;
  }
  FUN_00547cac(&local_60,puVar2,1);
  puVar2 = &DAT_001ec3d1;
  if (*(char *)(param_2 + 0x489) == '\0') {
    puVar2 = &DAT_001e47a3;
  }
  FUN_00547cac(&local_60,puVar2,1);
  param_1[1] = uStack_58;
  *param_1 = local_60;
  param_1[2] = local_50;
  return;
}


// ===== 00c530f0  FUN_00c530f0 =====

void FUN_00c530f0(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uStack_59;
  char *local_58;
  undefined8 local_50;
  undefined1 *local_48;
  char *local_40;
  char **ppcStack_38;
  undefined8 *local_30;
  char **ppcStack_28;
  
  uVar3 = FUN_00417e08();
  if ((uVar3 & 1) == 0) {
    local_58 = "../../p2p/base/p2p_transport_channel.cc";
    local_50 = 0xf71;
    local_48 = &uStack_59;
    ppcStack_38 = &local_58;
    local_40 = "Set ICE ufrag: ";
    ppcStack_28 = &local_40;
    local_30 = param_2;
    uVar4 = (**(code **)*param_1)(param_1);
    FUN_00623bb0("\r\t\n\t\n\t\n",*ppcStack_38,*(undefined4 *)(ppcStack_38 + 1),local_40,local_30,
                 " pwd: ",param_2 + 3," on transport ",uVar4);
  }
  if (param_1 + 0x65 != param_2) {
    bVar1 = *(byte *)((long)param_2 + 0x17);
    if (*(char *)((long)param_1 + 0x33f) < '\0') {
      uVar3 = param_2[1];
      puVar2 = (undefined8 *)*param_2;
      if (-1 < (char)bVar1) {
        uVar3 = (ulong)bVar1;
        puVar2 = param_2;
      }
      FUN_00547f08(param_1 + 0x65,puVar2,uVar3);
    }
    else if ((char)bVar1 < '\0') {
      FUN_00547fc0(param_1 + 0x65,*param_2,param_2[1]);
    }
    else {
      uVar5 = param_2[1];
      uVar4 = *param_2;
      param_1[0x67] = param_2[2];
      param_1[0x66] = uVar5;
      param_1[0x65] = uVar4;
    }
    bVar1 = *(byte *)((long)param_2 + 0x2f);
    if (*(char *)((long)param_1 + 0x357) < '\0') {
      uVar3 = param_2[4];
      puVar2 = (undefined8 *)param_2[3];
      if (-1 < (char)bVar1) {
        uVar3 = (ulong)bVar1;
        puVar2 = param_2 + 3;
      }
      FUN_00547f08(param_1 + 0x68,puVar2,uVar3);
    }
    else if ((char)bVar1 < '\0') {
      FUN_00547fc0(param_1 + 0x68,param_2[3],param_2[4]);
    }
    else {
      uVar5 = param_2[4];
      uVar4 = param_2[3];
      param_1[0x6a] = param_2[5];
      param_1[0x69] = uVar5;
      param_1[0x68] = uVar4;
    }
  }
  *(undefined1 *)(param_1 + 0x6b) = *(undefined1 *)(param_2 + 6);
  return;
}


// ===== 00c5325c  FUN_00c5325c =====

void FUN_00c5325c(long param_1,undefined8 *param_2)

{
  char *pcVar1;
  size_t __n;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar6 = FUN_00417e08();
  if ((uVar6 & 1) == 0) {
    pcVar1 = "enabled";
    if (*(char *)(param_2 + 6) == '\0') {
      pcVar1 = "disabled";
    }
    FUN_00623bb0("\r\t\n\t\t","../../p2p/base/p2p_transport_channel.cc",0xfc9,
                 "Received remote ICE parameters: ufrag=",param_2,", renomination ",pcVar1);
  }
  puVar7 = *(undefined8 **)(param_1 + 0x368);
  if ((*(undefined8 **)(param_1 + 0x360) != puVar7) && (puVar7 + -7 != (undefined8 *)0x0)) {
    uVar6 = FUN_00c59994(puVar7 + -7,param_2);
    if ((uVar6 & 1) != 0) goto LAB_00c53368;
    puVar7 = *(undefined8 **)(param_1 + 0x368);
  }
  if (puVar7 < *(undefined8 **)(param_1 + 0x370)) {
    if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      FUN_005478d8(puVar7,*param_2,param_2[1]);
      if (-1 < *(char *)((long)param_2 + 0x2f)) goto LAB_00c53324;
LAB_00c5334c:
      FUN_005478d8(puVar7 + 3,param_2[3],param_2[4]);
    }
    else {
      uVar12 = param_2[1];
      uVar11 = *param_2;
      puVar7[2] = param_2[2];
      puVar7[1] = uVar12;
      *puVar7 = uVar11;
      if (*(char *)((long)param_2 + 0x2f) < '\0') goto LAB_00c5334c;
LAB_00c53324:
      uVar12 = param_2[4];
      uVar11 = param_2[3];
      puVar7[5] = param_2[5];
      puVar7[4] = uVar12;
      puVar7[3] = uVar11;
    }
    puVar10 = puVar7 + 7;
    *(undefined1 *)(puVar7 + 6) = *(undefined1 *)(param_2 + 6);
  }
  else {
    puVar10 = (undefined8 *)FUN_00c59a88(param_1 + 0x360,param_2);
  }
  *(undefined8 **)(param_1 + 0x368) = puVar10;
LAB_00c53368:
  lVar8 = *(long *)(param_1 + 0x2f0);
  lVar9 = *(long *)(param_1 + 0x2f8);
  if (lVar8 != lVar9) {
    do {
      bVar3 = *(byte *)(lVar8 + 0xb7);
      bVar4 = *(byte *)((long)param_2 + 0x17);
      __n = *(size_t *)(lVar8 + 0xa8);
      if (-1 < (char)bVar3) {
        __n = (ulong)bVar3;
      }
      sVar2 = param_2[1];
      if (-1 < (char)bVar4) {
        sVar2 = (ulong)bVar4;
      }
      if (__n == sVar2) {
        puVar7 = (undefined8 *)*(void **)(lVar8 + 0xa0);
        if (-1 < (char)bVar3) {
          puVar7 = (undefined8 *)(lVar8 + 0xa0);
        }
        puVar10 = (undefined8 *)*param_2;
        if (-1 < (char)bVar4) {
          puVar10 = param_2;
        }
        iVar5 = memcmp(puVar7,puVar10,__n);
        if (iVar5 == 0) {
          if (*(char *)(lVar8 + 0xcf) < '\0') {
            if (*(long *)(lVar8 + 0xc0) == 0) goto LAB_00c533f8;
          }
          else if (*(char *)(lVar8 + 0xcf) == '\0') {
LAB_00c533f8:
            uVar6 = param_2[4];
            puVar7 = (undefined8 *)param_2[3];
            if (-1 < (char)*(byte *)((long)param_2 + 0x2f)) {
              uVar6 = (ulong)*(byte *)((long)param_2 + 0x2f);
              puVar7 = param_2 + 3;
            }
            FUN_00b008fc(lVar8 + 0xb8,puVar7,uVar6);
          }
        }
      }
      lVar8 = lVar8 + 0x1a0;
    } while (lVar8 != lVar9);
  }
  puVar10 = *(undefined8 **)(param_1 + 0x2e0);
  for (puVar7 = *(undefined8 **)(param_1 + 0x2d8); puVar7 != puVar10; puVar7 = puVar7 + 1) {
    FUN_00c67954(*puVar7,param_2,
                 (int)((ulong)(*(long *)(param_1 + 0x368) - *(long *)(param_1 + 0x360)) >> 3) *
                 -0x49249249 + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00c53484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x4e8) + 0x48))(*(long **)(param_1 + 0x4e8),1);
  return;
}


// ===== 00c534ac  FUN_00c534ac =====

void FUN_00c534ac(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x378) = param_2;
  return;
}


// ===== 00c534b8  FUN_00c534b8 =====

/* WARNING: Removing unreachable block (ram,0x00c543dc) */
/* WARNING: Removing unreachable block (ram,0x00c54208) */
/* WARNING: Removing unreachable block (ram,0x00c54034) */
/* WARNING: Removing unreachable block (ram,0x00c53efc) */
/* WARNING: Removing unreachable block (ram,0x00c53dec) */
/* WARNING: Removing unreachable block (ram,0x00c53cdc) */
/* WARNING: Removing unreachable block (ram,0x00c53b8c) */
/* WARNING: Removing unreachable block (ram,0x00c53a60) */
/* WARNING: Removing unreachable block (ram,0x00c53890) */
/* WARNING: Removing unreachable block (ram,0x00c53744) */
/* WARNING: Removing unreachable block (ram,0x00c53608) */
/* WARNING: Removing unreachable block (ram,0x00c53624) */
/* WARNING: Removing unreachable block (ram,0x00c53760) */
/* WARNING: Removing unreachable block (ram,0x00c538ac) */
/* WARNING: Removing unreachable block (ram,0x00c53a7c) */
/* WARNING: Removing unreachable block (ram,0x00c53ba8) */
/* WARNING: Removing unreachable block (ram,0x00c53cf8) */
/* WARNING: Removing unreachable block (ram,0x00c53e08) */
/* WARNING: Removing unreachable block (ram,0x00c53f18) */
/* WARNING: Removing unreachable block (ram,0x00c54050) */
/* WARNING: Removing unreachable block (ram,0x00c54224) */
/* WARNING: Removing unreachable block (ram,0x00c543f8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00c534b8(long *param_1,long *param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  char *local_90;
  char **ppcStack_88;
  void *local_80;
  undefined8 uStack_78;
  long local_70;
  char **local_68;
  void *local_58;
  undefined8 uStack_50;
  undefined7 local_48;
  undefined1 uStack_41;
  undefined1 uStack_21;
  
  if ((int)param_1[0x78] != (int)param_2[4]) {
    if (param_1[0x51] == param_1[0x52]) {
      *(int *)(param_1 + 0x78) = (int)param_2[4];
      uVar4 = FUN_00417e08();
      if ((uVar4 & 1) == 0) {
        FUN_00623bb0(&DAT_001f6220,"../../p2p/base/p2p_transport_channel.cc",0x1139,
                     "Set continual_gathering_policy to ",(int)param_1[0x78]);
      }
    }
    else {
      uVar4 = FUN_004249b0();
      if ((uVar4 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../p2p/base/p2p_transport_channel.cc",0x111b,
                     "Trying to change continual gathering policy when gathering has already started!"
                    );
      }
    }
  }
  bVar1 = *(byte *)(param_2 + 3);
  if ((bVar1 & *(byte *)(param_1 + 0x77)) == 0) {
    if (*(byte *)(param_1 + 0x77) != bVar1) {
LAB_00c53590:
      lVar7 = param_2[2];
      *(char *)(param_1 + 0x77) = (char)param_2[3];
      param_1[0x76] = lVar7;
      uVar4 = FUN_00417e08();
      if ((uVar4 & 1) == 0) {
        local_a8 = "../../p2p/base/p2p_transport_channel.cc";
        local_a0 = 0x1181;
        local_98 = &uStack_21;
        ppcStack_88 = &local_a8;
        local_90 = "Set backup connection ping interval to ";
        local_b0 = FUN_00be08d8(param_1 + 0x74);
        FUN_005f3380(&local_58,&local_b0);
        local_70 = CONCAT17(uStack_41,local_48);
        local_68 = &local_90;
        uStack_78 = uStack_50;
        local_80 = local_58;
        FUN_00623bb0(&DAT_002258de,*ppcStack_88,*(undefined4 *)(ppcStack_88 + 1),local_90,&local_80,
                     " milliseconds.");
        if (local_70 < 0) {
          operator_delete(local_80);
        }
      }
    }
  }
  else {
    if ((bVar1 & 1) == 0) goto LAB_00c544c8;
    if (param_1[0x76] != param_2[2]) goto LAB_00c53590;
  }
  bVar1 = *(byte *)(param_2 + 1);
  if ((bVar1 & *(byte *)(param_1 + 0x75)) == 0) {
    if (*(byte *)(param_1 + 0x75) != bVar1) {
LAB_00c536a4:
      puVar8 = (undefined8 *)param_1[0x5b];
      puVar9 = (undefined8 *)param_1[0x5c];
      lVar7 = *param_2;
      *(char *)(param_1 + 0x75) = (char)param_2[1];
      param_1[0x74] = lVar7;
      for (; puVar8 != puVar9; puVar8 = puVar8 + 1) {
        FUN_00c62cd0(*puVar8,param_1[0x74],param_1[0x75]);
      }
      uVar4 = FUN_00417e08();
      if ((uVar4 & 1) == 0) {
        local_a8 = "../../p2p/base/p2p_transport_channel.cc";
        local_a0 = 0x11c9;
        local_98 = &uStack_21;
        ppcStack_88 = &local_a8;
        local_90 = "Set ICE receiving timeout to ";
        local_b0 = FUN_00be08b8(param_1 + 0x74);
        FUN_005f3380(&local_58,&local_b0);
        local_70 = CONCAT17(uStack_41,local_48);
        local_68 = &local_90;
        uStack_78 = uStack_50;
        local_80 = local_58;
        FUN_00623bb0(&DAT_002258de,*ppcStack_88,*(undefined4 *)(ppcStack_88 + 1),local_90,&local_80,
                     " milliseconds");
        if (local_70 < 0) {
          operator_delete(local_80);
        }
      }
    }
  }
  else {
    if ((bVar1 & 1) == 0) goto LAB_00c544c8;
    if (param_1[0x74] != *param_2) goto LAB_00c536a4;
  }
  *(undefined1 *)((long)param_1 + 0x3c4) = *(undefined1 *)((long)param_2 + 0x24);
  uVar4 = FUN_00417e08();
  if ((uVar4 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e94,"../../p2p/base/p2p_transport_channel.cc",0x1201,
                 "Set ping most likely connection to ",*(undefined1 *)((long)param_1 + 0x3c4));
  }
  bVar1 = *(byte *)(param_2 + 6);
  if ((bVar1 & *(byte *)(param_1 + 0x7a)) == 0) {
    if (*(byte *)(param_1 + 0x7a) != bVar1) {
LAB_00c53818:
      lVar7 = param_2[5];
      *(char *)(param_1 + 0x7a) = (char)param_2[6];
      param_1[0x79] = lVar7;
      uVar4 = FUN_00417e08();
      if ((uVar4 & 1) == 0) {
        local_a8 = "../../p2p/base/p2p_transport_channel.cc";
        local_a0 = 0x1239;
        local_98 = &uStack_21;
        ppcStack_88 = &local_a8;
        local_90 = "Set stable_writable_connection_ping_interval to ";
        local_b0 = FUN_00be08fc(param_1 + 0x74);
        FUN_005f3380(&local_58,&local_b0);
        local_70 = CONCAT17(uStack_41,local_48);
        local_68 = &local_90;
        uStack_78 = uStack_50;
        local_80 = local_58;
        FUN_00623bb0(&DAT_001f6510,*ppcStack_88,*(undefined4 *)(ppcStack_88 + 1),local_90,&local_80)
        ;
        if (local_70 < 0) {
          operator_delete(local_80);
        }
      }
    }
  }
  else {
    if ((bVar1 & 1) == 0) goto LAB_00c544c8;
    if (param_1[0x79] != param_2[5]) goto LAB_00c53818;
  }
  if ((char)param_1[0x7b] != (char)param_2[7]) {
    if (param_1[0x5b] == param_1[0x5c]) {
      *(char *)(param_1 + 0x7b) = (char)param_2[7];
      uVar4 = FUN_00417e08();
      if ((uVar4 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e94,"../../p2p/base/p2p_transport_channel.cc",0x12a1,
                     "Set presume writable when fully relayed to ",(char)param_1[0x7b]);
      }
    }
    else {
      uVar4 = FUN_004249b0();
      if ((uVar4 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../p2p/base/p2p_transport_channel.cc",0x127b,
                     "Trying to change \'presume writable\' while connections already exist!");
      }
    }
  }
  cVar2 = *(char *)((long)param_2 + 0x39);
  *(char *)((long)param_1 + 0x3d9) = cVar2;
  if (((cVar2 == '\x01') && ((int)param_1[0x78] != 1)) && (uVar4 = FUN_004022fc(), (uVar4 & 1) == 0)
     ) {
    FUN_00623bb0(&DAT_001f4e98,"../../p2p/base/p2p_transport_channel.cc",0x12ea,
                 "surface_ice_candidates_on_ice_transport_type_changed is ineffective since we do not gather continually."
                );
  }
  bVar1 = *(byte *)(param_2 + 9);
  if ((bVar1 & *(byte *)(param_1 + 0x7d)) == 0) {
    if (*(byte *)(param_1 + 0x7d) != bVar1) {
LAB_00c539e8:
      lVar7 = param_2[8];
      *(char *)(param_1 + 0x7d) = (char)param_2[9];
      param_1[0x7c] = lVar7;
      uVar4 = FUN_00417e08();
      if ((uVar4 & 1) == 0) {
        local_a8 = "../../p2p/base/p2p_transport_channel.cc";
        local_a0 = 0x1331;
        local_98 = &uStack_21;
        ppcStack_88 = &local_a8;
        local_90 = "Set regather_on_failed_networks_interval to ";
        local_b0 = FUN_00be0920(param_1 + 0x74);
        FUN_005f3380(&local_58,&local_b0);
        local_70 = CONCAT17(uStack_41,local_48);
        local_68 = &local_90;
        uStack_78 = uStack_50;
        local_80 = local_58;
        FUN_00623bb0(&DAT_001f6510,*ppcStack_88,*(undefined4 *)(ppcStack_88 + 1),local_90,&local_80)
        ;
        if (local_70 < 0) {
          operator_delete(local_80);
        }
      }
      uVar4 = FUN_00841d54(param_1 + 0x71);
      if ((uVar4 & 1) != 0) {
        (**(code **)(*param_1 + 0xf8))(param_1);
      }
    }
  }
  else {
    if ((bVar1 & 1) == 0) goto LAB_00c544c8;
    if (param_1[0x7c] != param_2[8]) goto LAB_00c539e8;
  }
  bVar1 = *(byte *)(param_2 + 0xb);
  if ((bVar1 & *(byte *)(param_1 + 0x7f)) == 0) {
    if (*(byte *)(param_1 + 0x7f) != bVar1) {
LAB_00c53b14:
      lVar7 = param_2[10];
      *(char *)(param_1 + 0x7f) = (char)param_2[0xb];
      param_1[0x7e] = lVar7;
      uVar4 = FUN_00417e08();
      if ((uVar4 & 1) == 0) {
        local_a8 = "../../p2p/base/p2p_transport_channel.cc";
        local_a0 = 0x1381;
        local_98 = &uStack_21;
        ppcStack_88 = &local_a8;
        local_90 = "Set receiving_switching_delay to ";
        local_b0 = FUN_00be0944(param_1 + 0x74);
        FUN_005f3380(&local_58,&local_b0);
        local_70 = CONCAT17(uStack_41,local_48);
        local_68 = &local_90;
        uStack_78 = uStack_50;
        local_80 = local_58;
        FUN_00623bb0(&DAT_001f6510,*ppcStack_88,*(undefined4 *)(ppcStack_88 + 1),local_90,&local_80)
        ;
        if (local_70 < 0) {
          operator_delete(local_80);
        }
      }
    }
  }
  else {
    if ((bVar1 & 1) == 0) goto LAB_00c544c8;
    if (param_1[0x7e] != param_2[10]) goto LAB_00c53b14;
  }
  if ((int)param_1[0x80] != (int)param_2[0xc]) {
    *(int *)(param_1 + 0x80) = (int)param_2[0xc];
    uVar4 = FUN_00417e08();
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e94,"../../p2p/base/p2p_transport_channel.cc",0x13b1,
                   "Set default nomination mode to ",(int)param_1[0x80]);
    }
  }
  bVar1 = *(byte *)(param_2 + 0xe);
  if ((bVar1 & *(byte *)(param_1 + 0x82)) == 0) {
    if (*(byte *)(param_1 + 0x82) != bVar1) {
LAB_00c53c64:
      lVar7 = param_2[0xd];
      *(char *)(param_1 + 0x82) = (char)param_2[0xe];
      param_1[0x81] = lVar7;
      uVar4 = FUN_00417e08();
      if ((uVar4 & 1) == 0) {
        local_a8 = "../../p2p/base/p2p_transport_channel.cc";
        local_a0 = 0x13f1;
        local_98 = &uStack_21;
        ppcStack_88 = &local_a8;
        local_90 = "Set strong ping interval to ";
        local_b0 = FUN_00be0968(param_1 + 0x74);
        FUN_005f3380(&local_58,&local_b0);
        local_70 = CONCAT17(uStack_41,local_48);
        local_68 = &local_90;
        uStack_78 = uStack_50;
        local_80 = local_58;
        FUN_00623bb0(&DAT_001f6510,*ppcStack_88,*(undefined4 *)(ppcStack_88 + 1),local_90,&local_80)
        ;
        if (local_70 < 0) {
          operator_delete(local_80);
        }
      }
    }
  }
  else {
    if ((bVar1 & 1) == 0) goto LAB_00c544c8;
    if (param_1[0x81] != param_2[0xd]) goto LAB_00c53c64;
  }
  bVar1 = *(byte *)(param_2 + 0x10);
  if ((bVar1 & *(byte *)(param_1 + 0x84)) == 0) {
    if (*(byte *)(param_1 + 0x84) != bVar1) {
LAB_00c53d74:
      lVar7 = param_2[0xf];
      *(char *)(param_1 + 0x84) = (char)param_2[0x10];
      param_1[0x83] = lVar7;
      uVar4 = FUN_00417e08();
      if ((uVar4 & 1) == 0) {
        local_a8 = "../../p2p/base/p2p_transport_channel.cc";
        local_a0 = 0x1439;
        local_98 = &uStack_21;
        ppcStack_88 = &local_a8;
        local_90 = "Set weak ping interval to ";
        local_b0 = FUN_00be098c(param_1 + 0x74);
        FUN_005f3380(&local_58,&local_b0);
        local_70 = CONCAT17(uStack_41,local_48);
        local_68 = &local_90;
        uStack_78 = uStack_50;
        local_80 = local_58;
        FUN_00623bb0(&DAT_001f6510,*ppcStack_88,*(undefined4 *)(ppcStack_88 + 1),local_90,&local_80)
        ;
        if (local_70 < 0) {
          operator_delete(local_80);
        }
      }
    }
  }
  else {
    if ((bVar1 & 1) == 0) goto LAB_00c544c8;
    if (param_1[0x83] != param_2[0xf]) goto LAB_00c53d74;
  }
  bVar1 = *(byte *)(param_2 + 0x12);
  if ((bVar1 & *(byte *)(param_1 + 0x86)) == 0) {
    if (*(byte *)(param_1 + 0x86) != bVar1) {
LAB_00c53e84:
      lVar7 = param_2[0x11];
      *(char *)(param_1 + 0x86) = (char)param_2[0x12];
      param_1[0x85] = lVar7;
      uVar4 = FUN_00417e08();
      if ((uVar4 & 1) == 0) {
        local_a8 = "../../p2p/base/p2p_transport_channel.cc";
        local_a0 = 0x1471;
        local_98 = &uStack_21;
        ppcStack_88 = &local_a8;
        local_90 = "Set min ping interval to ";
        local_b0 = FUN_00be09b0(param_1 + 0x74);
        FUN_005f3380(&local_58,&local_b0);
        local_70 = CONCAT17(uStack_41,local_48);
        local_68 = &local_90;
        uStack_78 = uStack_50;
        local_80 = local_58;
        FUN_00623bb0(&DAT_001f6510,*ppcStack_88,*(undefined4 *)(ppcStack_88 + 1),local_90,&local_80)
        ;
        if (local_70 < 0) {
          operator_delete(local_80);
        }
      }
    }
  }
  else {
    if ((bVar1 & 1) == 0) goto LAB_00c544c8;
    if (param_1[0x85] != param_2[0x11]) goto LAB_00c53e84;
  }
  bVar1 = *(byte *)(param_2 + 0x14);
  if ((bVar1 & *(byte *)(param_1 + 0x88)) == 0) {
    if (*(byte *)(param_1 + 0x88) != bVar1) {
LAB_00c53f94:
      puVar8 = (undefined8 *)param_1[0x5b];
      puVar9 = (undefined8 *)param_1[0x5c];
      lVar7 = param_2[0x13];
      *(char *)(param_1 + 0x88) = (char)param_2[0x14];
      param_1[0x87] = lVar7;
      for (; puVar8 != puVar9; puVar8 = puVar8 + 1) {
        FUN_00c62c98(*puVar8,param_1[0x87],param_1[0x88]);
      }
      uVar4 = FUN_00417e08();
      if ((uVar4 & 1) == 0) {
        local_a8 = "../../p2p/base/p2p_transport_channel.cc";
        local_a0 = 0x14b9;
        local_98 = &uStack_21;
        ppcStack_88 = &local_a8;
        local_90 = "Set unwritable timeout to ";
        local_b0 = FUN_00be09d0(param_1 + 0x74);
        FUN_005f3380(&local_58,&local_b0);
        local_70 = CONCAT17(uStack_41,local_48);
        local_68 = &local_90;
        uStack_78 = uStack_50;
        local_80 = local_58;
        FUN_00623bb0(&DAT_001f6510,*ppcStack_88,*(undefined4 *)(ppcStack_88 + 1),local_90,&local_80)
        ;
        if (local_70 < 0) {
          operator_delete(local_80);
        }
      }
    }
  }
  else {
    if ((bVar1 & 1) == 0) goto LAB_00c544c8;
    if (param_1[0x87] != param_2[0x13]) goto LAB_00c53f94;
  }
  bVar1 = *(byte *)((long)param_2 + 0xac);
  if ((bVar1 & *(byte *)((long)param_1 + 0x44c)) == 0) {
    if (*(byte *)((long)param_1 + 0x44c) != bVar1) {
LAB_00c540cc:
      puVar8 = (undefined8 *)param_1[0x5b];
      puVar9 = (undefined8 *)param_1[0x5c];
      lVar7 = param_2[0x15];
      *(undefined1 *)((long)param_1 + 0x44c) = *(undefined1 *)((long)param_2 + 0xac);
      *(int *)(param_1 + 0x89) = (int)lVar7;
      for (; puVar8 != puVar9; puVar8 = puVar8 + 1) {
        FUN_00c62ca8(*puVar8,param_1 + 0x89);
      }
      uVar4 = FUN_00417e08();
      if ((uVar4 & 1) == 0) {
        uVar3 = FUN_00be09f4(param_1 + 0x74);
        FUN_00623bb0(&DAT_001f4e94,"../../p2p/base/p2p_transport_channel.cc",0x1501,
                     "Set unwritable min checks to ",uVar3);
      }
    }
  }
  else {
    if ((bVar1 & 1) == 0) goto LAB_00c544c8;
    if ((int)param_1[0x89] != (int)param_2[0x15]) goto LAB_00c540cc;
  }
  bVar1 = *(byte *)(param_2 + 0x17);
  if ((bVar1 & *(byte *)(param_1 + 0x8b)) == 0) {
    if (*(byte *)(param_1 + 0x8b) != bVar1) {
LAB_00c54168:
      puVar8 = (undefined8 *)param_1[0x5b];
      puVar9 = (undefined8 *)param_1[0x5c];
      lVar7 = param_2[0x16];
      *(char *)(param_1 + 0x8b) = (char)param_2[0x17];
      param_1[0x8a] = lVar7;
      for (; puVar8 != puVar9; puVar8 = puVar8 + 1) {
        FUN_00c62cc0(*puVar8,param_1[0x8a],param_1[0x8b]);
      }
      uVar4 = FUN_00417e08();
      if ((uVar4 & 1) == 0) {
        local_a8 = "../../p2p/base/p2p_transport_channel.cc";
        local_a0 = 0x1549;
        local_98 = &uStack_21;
        ppcStack_88 = &local_a8;
        local_90 = "Set inactive timeout to ";
        local_b0 = FUN_00be0a18(param_1 + 0x74);
        FUN_005f3380(&local_58,&local_b0);
        local_70 = CONCAT17(uStack_41,local_48);
        local_68 = &local_90;
        uStack_78 = uStack_50;
        local_80 = local_58;
        FUN_00623bb0(&DAT_001f6510,*ppcStack_88,*(undefined4 *)(ppcStack_88 + 1),local_90,&local_80)
        ;
        if (local_70 < 0) {
          operator_delete(local_80);
        }
      }
    }
  }
  else {
    if ((bVar1 & 1) == 0) goto LAB_00c544c8;
    if (param_1[0x8a] != param_2[0x16]) goto LAB_00c54168;
  }
  bVar1 = *(byte *)((long)param_2 + 0xd4);
  plVar5 = param_1 + 0x8e;
  if ((bVar1 & *(byte *)((long)param_1 + 0x474)) == 0) {
    if (*(byte *)((long)param_1 + 0x474) != bVar1) {
LAB_00c542a0:
      lVar7 = param_2[0x1a];
      *(undefined1 *)((long)param_1 + 0x474) = *(undefined1 *)((long)param_2 + 0xd4);
      *(int *)plVar5 = (int)lVar7;
      (**(code **)(*(long *)param_1[0x9d] + 0x48))((long *)param_1[0x9d],2);
      uVar4 = FUN_00417e08();
      if ((uVar4 & 1) == 0) {
        if (*(char *)((long)param_1 + 0x474) == '\x01') {
          iVar6 = (int)*plVar5;
        }
        else {
          iVar6 = -1;
        }
        FUN_00623bb0(&DAT_001f4e94,"../../p2p/base/p2p_transport_channel.cc",0x1589,
                     "Set network preference to ",iVar6);
      }
    }
  }
  else {
    if ((bVar1 & 1) == 0) goto LAB_00c544c8;
    if ((int)*plVar5 != (int)param_2[0x1a]) goto LAB_00c542a0;
  }
  bVar1 = *(byte *)(param_2 + 0x19);
  if ((bVar1 & *(byte *)(param_1 + 0x8d)) == 0) {
    if (*(byte *)(param_1 + 0x8d) == bVar1) goto LAB_00c54440;
  }
  else {
    if ((bVar1 & 1) == 0) {
LAB_00c544c8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    if (param_1[0x8c] == param_2[0x18]) goto LAB_00c54440;
  }
  lVar7 = param_2[0x18];
  *(char *)(param_1 + 0x8d) = (char)param_2[0x19];
  param_1[0x8c] = lVar7;
  if (param_1[0x51] == param_1[0x52]) {
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = *(long **)(param_1[0x52] + -8);
  }
  (**(code **)(*plVar5 + 0x58))(plVar5,param_1 + 0x8c);
  uVar4 = FUN_00417e08();
  if ((uVar4 & 1) == 0) {
    local_a8 = "../../p2p/base/p2p_transport_channel.cc";
    local_a0 = 0x15f1;
    local_98 = &uStack_21;
    ppcStack_88 = &local_a8;
    local_90 = "Set STUN keepalive interval to ";
    local_b0 = FUN_00be0a3c(param_2);
    FUN_005f3380(&local_58,&local_b0);
    local_70 = CONCAT17(uStack_41,local_48);
    local_68 = &local_90;
    uStack_78 = uStack_50;
    local_80 = local_58;
    FUN_00623bb0(&DAT_001f6510,*ppcStack_88,*(undefined4 *)(ppcStack_88 + 1),local_90,&local_80);
    if (local_70 < 0) {
      operator_delete(local_80);
    }
  }
LAB_00c54440:
  *(int *)(param_1 + 0x8f) = (int)param_2[0x1b];
  (**(code **)(*(long *)param_1[0x4c] + 0x28))();
  (**(code **)(*(long *)param_1[0x9d] + 0x10))((long *)param_1[0x9d],param_1 + 0x74);
  if (*(char *)((long)param_1 + 0x47c) != *(char *)((long)param_2 + 0xdc)) {
    *(char *)((long)param_1 + 0x47c) = *(char *)((long)param_2 + 0xdc);
    uVar4 = FUN_00417e08();
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e94,"../../p2p/base/p2p_transport_channel.cc",0x1641,
                   "Set DTLS handshake in STUN to ",*(undefined1 *)((long)param_2 + 0xdc));
    }
  }
  return;
}


// ===== 00c544dc  FUN_00c544dc =====

void * FUN_00c544dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                   undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                   undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                   undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                   undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28)

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
  
  puVar5 = (undefined8 *)operator_new(0x1c0);
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
                    if (puVar5 + 0x24 != (undefined8 *)0x0) {
                      puVar5[0x25] = 0;
                      puVar5[0x24] = 0;
                      puVar5[0x27] = 0;
                      puVar5[0x26] = 0;
                      if (puVar5 + 0x28 != (undefined8 *)0x0) {
                        puVar5[0x29] = 0;
                        puVar5[0x28] = 0;
                        puVar5[0x2b] = 0;
                        puVar5[0x2a] = 0;
                        if (puVar5 + 0x2c != (undefined8 *)0x0) {
                          puVar5[0x2d] = 0;
                          puVar5[0x2c] = 0;
                          puVar5[0x2f] = 0;
                          puVar5[0x2e] = 0;
                          if (puVar5 + 0x30 != (undefined8 *)0x0) {
                            puVar5[0x31] = 0;
                            puVar5[0x30] = 0;
                            puVar5[0x33] = 0;
                            puVar5[0x32] = 0;
                            puVar3 = PTR_FUN_00d51f60;
                            if (puVar5 != (undefined8 *)0xfffffffffffffe60) {
                              *puVar5 = param_1;
                              puVar5[1] = param_2;
                              puVar4 = PTR_FUN_00d51f68;
                              puVar5[2] = puVar3;
                              puVar5[3] = puVar4;
                              puVar1 = PTR_FUN_00d520d8;
                              puVar5[4] = param_3;
                              puVar5[5] = param_4;
                              puVar2 = PTR_FUN_00d520e0;
                              puVar5[8] = param_5;
                              puVar5[9] = param_6;
                              puVar5[0xe] = puVar1;
                              puVar5[6] = puVar1;
                              puVar5[7] = puVar2;
                              puVar5[10] = puVar1;
                              puVar5[0xb] = puVar2;
                              puVar5[0xc] = param_7;
                              puVar5[0xd] = param_8;
                              puVar5[0x17] = puVar4;
                              puVar5[0xf] = puVar2;
                              puVar5[0x10] = param_9;
                              puVar5[0x11] = param_10;
                              puVar5[0x12] = puVar3;
                              puVar5[0x13] = puVar4;
                              puVar5[0x14] = param_11;
                              puVar5[0x15] = param_12;
                              puVar5[0x16] = puVar3;
                              puVar1 = PTR_FUN_00d51f50;
                              puVar5[0x18] = param_13;
                              puVar5[0x19] = param_14;
                              puVar2 = PTR_FUN_00d51f58;
                              puVar5[0x1a] = puVar1;
                              puVar5[0x37] = puVar4;
                              puVar5[0x1b] = puVar2;
                              puVar5[0x1c] = param_15;
                              puVar5[0x1d] = param_16;
                              puVar5[0x1e] = puVar3;
                              puVar5[0x1f] = puVar4;
                              puVar5[0x20] = param_17;
                              puVar5[0x21] = param_18;
                              puVar5[0x22] = puVar3;
                              puVar5[0x23] = puVar4;
                              puVar5[0x24] = param_19;
                              puVar5[0x25] = param_20;
                              puVar5[0x26] = puVar3;
                              puVar5[0x27] = puVar4;
                              puVar5[0x28] = param_21;
                              puVar5[0x29] = param_22;
                              puVar5[0x2a] = puVar1;
                              puVar5[0x2b] = puVar2;
                              puVar5[0x2c] = param_23;
                              puVar5[0x2d] = param_24;
                              puVar5[0x2e] = puVar3;
                              puVar5[0x2f] = puVar4;
                              puVar5[0x30] = param_25;
                              puVar5[0x31] = param_26;
                              puVar5[0x32] = puVar3;
                              puVar5[0x33] = puVar4;
                              puVar5[0x34] = param_27;
                              puVar5[0x35] = param_28;
                              puVar5[0x36] = puVar3;
                              pvVar6 = operator_new(0x18);
                              local_78 = puVar5;
                              local_70 = puVar5 + 0x38;
                              local_68 = puVar5 + 0x38;
                              FUN_0066597c(pvVar6,&local_78);
                              if (local_78 != (undefined8 *)0x0) {
                                uVar8 = (ulong)((long)local_70 + (-0x20 - ((long)local_70 << 0x3b)))
                                        >> 5;
                                uVar7 = (ulong)(((long)local_78 - (long)local_70 << 0x3b) -
                                               ((long)local_78 - (long)local_70)) >> 5;
                                if (uVar8 <= uVar7) {
                                  uVar7 = uVar8;
                                }
                                puVar5 = local_70;
                                if ((1 < uVar7) &&
                                   ((((int)local_78 - (int)local_70 | -(int)local_70) & 0x1fU) == 0)
                                   ) {
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


// ===== 00c5478c  FUN_00c5478c =====

long FUN_00c5478c(long param_1)

{
  return param_1 + 0x3a0;
}


// ===== 00c54798  FUN_00c54798 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00c54798(long *******param_1)

{
  char cVar1;
  char cVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  long *****__s1;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long ******__n;
  long *******ppppppplVar10;
  long *******ppppppplVar11;
  long ******pppppplVar12;
  long *****ppppplVar13;
  ulong uVar14;
  long *******ppppppplVar15;
  long *******ppppppplVar16;
  long ******__n_00;
  long *****__s1_00;
  long lVar17;
  long ******pppppplVar18;
  long ******pppppplVar19;
  long ******pppppplVar20;
  long *******local_88;
  long *******local_80;
  long *******local_70;
  long lStack_68;
  long *******local_48;
  
  cVar1 = *(char *)((long)param_1 + 0x33f);
  pppppplVar12 = (long ******)(long)cVar1;
  ppppppplVar15 = param_1 + 0x65;
  pppppplVar18 = pppppplVar12;
  if ((long)pppppplVar12 < 0) {
    pppppplVar18 = param_1[0x66];
  }
  if (pppppplVar18 == (long ******)0x0) {
LAB_00c54844:
    uVar6 = FUN_004249b0();
    if ((uVar6 & 1) == 0) {
      FUN_00623bb0("\r\t\n\t\n","../../p2p/base/p2p_transport_channel.cc",0x1a7b,
                   "Cannot gather candidates because ICE parameters are empty ufrag: ",
                   param_1 + 0x65," pwd: ",param_1 + 0x68);
      return;
    }
    return;
  }
  cVar2 = *(char *)((long)param_1 + 0x357);
  pppppplVar20 = (long ******)(long)cVar2;
  pppppplVar18 = pppppplVar20;
  if ((long)pppppplVar20 < 0) {
    pppppplVar18 = param_1[0x69];
  }
  if (pppppplVar18 == (long ******)0x0) goto LAB_00c54844;
  pppppplVar18 = param_1[0x51];
  pppppplVar19 = param_1[0x52];
  ppppppplVar16 = param_1 + 0x68;
  if (pppppplVar18 == pppppplVar19) goto LAB_00c548f0;
  ppppplVar13 = pppppplVar19[-1];
  __n = (long ******)(long)*(char *)((long)ppppplVar13 + 0x47);
  if ((long)__n < 0) {
    __s1 = (long *****)ppppplVar13[6];
    __n = (long ******)ppppplVar13[7];
    __n_00 = (long ******)(long)*(char *)((long)ppppplVar13 + 0x5f);
    if (-1 < (long)__n_00) goto LAB_00c5481c;
LAB_00c548a8:
    __s1_00 = (long *****)ppppplVar13[9];
    __n_00 = (long ******)ppppplVar13[10];
    if (-1 < cVar1) goto LAB_00c54824;
LAB_00c548b0:
    ppppppplVar10 = (long *******)param_1[0x65];
    pppppplVar12 = param_1[0x66];
    if (-1 < cVar2) goto LAB_00c5482c;
LAB_00c548bc:
    ppppppplVar11 = (long *******)param_1[0x68];
    pppppplVar20 = param_1[0x69];
    if (__n != pppppplVar12) goto LAB_00c548f0;
  }
  else {
    __s1 = ppppplVar13 + 6;
    __n_00 = (long ******)(long)*(char *)((long)ppppplVar13 + 0x5f);
    if ((long)__n_00 < 0) goto LAB_00c548a8;
LAB_00c5481c:
    __s1_00 = ppppplVar13 + 9;
    if (cVar1 < '\0') goto LAB_00c548b0;
LAB_00c54824:
    ppppppplVar10 = param_1 + 0x65;
    if (cVar2 < '\0') goto LAB_00c548bc;
LAB_00c5482c:
    ppppppplVar11 = param_1 + 0x68;
    if (__n != pppppplVar12) goto LAB_00c548f0;
  }
  iVar4 = memcmp(__s1,ppppppplVar10,(size_t)__n);
  if (((iVar4 == 0) && (__n_00 == pppppplVar20)) &&
     (iVar4 = memcmp(__s1_00,ppppppplVar11,(size_t)__n_00), iVar4 == 0)) {
    return;
  }
LAB_00c548f0:
  if (*(int *)(param_1 + 0x70) != 1) {
    local_88 = (long *******)&local_70;
    *(undefined4 *)(param_1 + 0x70) = 1;
    local_70 = param_1;
    FUN_007b6160(param_1 + 0x26,&local_88,FUN_00c59c0c);
    pppppplVar18 = param_1[0x51];
    pppppplVar19 = param_1[0x52];
  }
  for (; pppppplVar18 != pppppplVar19; pppppplVar18 = pppppplVar18 + 1) {
    uVar6 = (*(code *)(**pppppplVar18)[8])();
    if ((uVar6 & 1) == 0) {
      (*(code *)(**pppppplVar18)[4])();
    }
  }
  pppppplVar18 = param_1[0x4c];
  puVar7 = (undefined8 *)(*(code *)**param_1)(param_1);
  uVar6 = puVar7[1];
  puVar3 = (undefined8 *)*puVar7;
  if (-1 < (char)*(byte *)((long)puVar7 + 0x17)) {
    uVar6 = (ulong)*(byte *)((long)puVar7 + 0x17);
    puVar3 = puVar7;
  }
  uVar5 = (*(code *)(*param_1)[0xc])(param_1);
  pppppplVar12 = (long ******)(long)*(char *)((long)param_1 + 0x33f);
  if ((long)pppppplVar12 < 0) {
    ppppppplVar10 = (long *******)param_1[0x65];
    pppppplVar12 = param_1[0x66];
    cVar1 = *(char *)((long)param_1 + 0x357);
  }
  else {
    ppppppplVar10 = param_1 + 0x65;
    cVar1 = *(char *)((long)param_1 + 0x357);
  }
  pppppplVar20 = (long ******)(long)cVar1;
  if ((long)pppppplVar20 < 0) {
    ppppppplVar11 = (long *******)param_1[0x68];
    pppppplVar20 = param_1[0x69];
  }
  else {
    ppppppplVar11 = param_1 + 0x68;
  }
  plVar8 = (long *)FUN_00be390c(pppppplVar18,puVar3,uVar6,uVar5,ppppppplVar10,pppppplVar12,
                                ppppppplVar11,pppppplVar20);
  if (plVar8 == (long *)0x0) {
    pppppplVar18 = param_1[0x4c];
    puVar7 = (undefined8 *)(*(code *)**param_1)(param_1);
    uVar6 = puVar7[1];
    puVar3 = (undefined8 *)*puVar7;
    if (-1 < (char)*(byte *)((long)puVar7 + 0x17)) {
      uVar6 = (ulong)*(byte *)((long)puVar7 + 0x17);
      puVar3 = puVar7;
    }
    uVar5 = (*(code *)(*param_1)[0xc])(param_1);
    pppppplVar12 = (long ******)(long)*(char *)((long)param_1 + 0x33f);
    if ((long)pppppplVar12 < 0) {
      ppppppplVar15 = (long *******)param_1[0x65];
      pppppplVar12 = param_1[0x66];
    }
    pppppplVar20 = (long ******)(long)*(char *)((long)param_1 + 0x357);
    if ((long)pppppplVar20 < 0) {
      ppppppplVar16 = (long *******)param_1[0x68];
      pppppplVar20 = param_1[0x69];
    }
    uVar9 = FUN_00be38c4(pppppplVar18,puVar3,uVar6,uVar5,ppppppplVar15,pppppplVar12,ppppppplVar16,
                         pppppplVar20);
    FUN_00c51e0c(param_1,uVar9);
    if (param_1[0x51] == param_1[0x52]) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:439: libc++ Hardening assertion !empty() failed: back() called on an empty vector\n"
                );
    }
    (*(code *)(*param_1[0x52][-1])[3])();
    return;
  }
  FUN_00c51e0c(param_1,plVar8);
  (**(code **)(*plVar8 + 0x68))(&local_88,plVar8);
  if (local_80 != local_88) {
    lVar17 = 0;
    uVar6 = 0;
    do {
      lStack_68 = (long)local_88 + lVar17;
      local_70 = (long *******)&local_48;
      local_48 = param_1;
      FUN_007b6160(param_1 + 0x36,&local_70,FUN_00c59d34);
      uVar6 = uVar6 + 1;
      lVar17 = lVar17 + 0x198;
    } while (uVar6 < (ulong)(((long)local_80 - (long)local_88 >> 3) * -0x505050505050505));
  }
  ppppppplVar16 = local_88;
  ppppppplVar15 = local_80;
  if (local_88 != (long *******)0x0) {
    while (ppppppplVar16 != ppppppplVar15) {
      ppppppplVar15 = ppppppplVar15 + -0x33;
      if (ppppppplVar15 == (long *******)0x0) goto LAB_00c54b58;
      FUN_00aff0f8(ppppppplVar15);
    }
    local_80 = ppppppplVar16;
    operator_delete(local_88);
  }
  (**(code **)(*plVar8 + 0x60))(&local_88,plVar8);
  ppppppplVar16 = local_80;
  uVar9 = extraout_x1;
  for (ppppppplVar15 = local_88; ppppppplVar15 != ppppppplVar16; ppppppplVar15 = ppppppplVar15 + 1)
  {
    FUN_00c54c7c(param_1,uVar9,*ppppppplVar15);
    uVar9 = extraout_x1_00;
  }
  if (local_88 != (long *******)0x0) {
    uVar14 = (ulong)((long)local_80 + (-8 - ((long)local_80 << 0x3d))) >> 3;
    uVar6 = (ulong)(((long)local_88 - (long)local_80 << 0x3d) - ((long)local_88 - (long)local_80))
            >> 3;
    if (uVar14 <= uVar6) {
      uVar6 = uVar14;
    }
    ppppppplVar15 = local_80;
    if ((1 < uVar6) && ((((int)local_88 - (int)local_80 | -(int)local_80) & 7U) == 0)) {
      uVar6 = uVar6 & 0x1ffffffffffffffe;
      ppppppplVar15 = local_80 + -uVar6;
      do {
        uVar6 = uVar6 - 2;
      } while (uVar6 != 0);
    }
    while (ppppppplVar15 != local_88) {
      ppppppplVar15 = ppppppplVar15 + -1;
      if (ppppppplVar15 == (long *******)0x0) {
LAB_00c54b58:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    local_80 = local_88;
    operator_delete(local_88);
  }
  uVar6 = (**(code **)(*plVar8 + 0x70))(plVar8);
  if ((uVar6 & 1) != 0) {
    FUN_00c55000(param_1);
    return;
  }
  return;
}


// ===== 00c54c7c  FUN_00c54c7c =====

void FUN_00c54c7c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  ulong unaff_x26;
  long local_170 [2];
  code *local_160;
  code *pcStack_158;
  long local_150 [2];
  code *local_140;
  code *pcStack_138;
  long local_130 [2];
  code *local_120;
  code *pcStack_118;
  void *local_110 [2];
  char cStack_f9;
  undefined1 uStack_f1;
  char *local_f0;
  undefined8 local_e8;
  undefined1 *local_e0;
  void **local_d8;
  char **local_d0;
  char *local_c8;
  void ***pppvStack_c0;
  ulong local_b8;
  char **local_b0;
  undefined *local_a8;
  ulong *puStack_a0;
  long *local_98;
  long local_90 [2];
  code *local_80;
  undefined *local_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  plVar10 = *(long **)(param_1 + 0x310);
  local_98 = param_3;
  if (plVar10 != (long *)(param_1 + 0x318)) {
    do {
      plVar2 = local_98;
      iVar4 = (**(code **)(*local_98 + 0x68))
                        (local_98,*(undefined4 *)((long)plVar10 + 0x1c),(int)plVar10[4]);
      if ((iVar4 < 0) && (uVar6 = FUN_00417e08(), (uVar6 & 1) == 0)) {
        local_f0 = "../../p2p/base/p2p_transport_channel.cc";
        local_e8 = 0x1c59;
        local_e0 = &uStack_f1;
        (**(code **)(*plVar2 + 0x110))(local_110,plVar2);
        local_d8 = local_110;
        local_d0 = &local_f0;
        pppvStack_c0 = &local_d8;
        local_c8 = ": SetOption(";
        unaff_x26 = unaff_x26 & 0xffffffff00000000 | (ulong)*(uint *)((long)plVar10 + 0x1c);
        local_b0 = &local_c8;
        local_a8 = &DAT_001e1644;
        lVar9 = plVar10[4];
        local_b8 = unaff_x26;
        puStack_a0 = &local_b8;
        uVar5 = (**(code **)(*plVar2 + 0x78))(plVar2);
        puVar7 = (undefined8 *)((undefined8 *)puStack_a0[1])[1];
        puVar8 = (undefined8 *)puVar7[1];
        FUN_00623bb0(&DAT_00259840,*puVar8,*(undefined4 *)(puVar8 + 1),*puVar7,
                     *(undefined8 *)puStack_a0[1],(int)*puStack_a0,local_a8,(int)lVar9,") failed: ",
                     uVar5);
        if (cStack_f9 < '\0') {
          operator_delete(local_110[0]);
        }
      }
      plVar2 = (long *)plVar10[1];
      plVar11 = plVar10;
      if ((long *)plVar10[1] == (long *)0x0) {
        do {
          plVar10 = (long *)plVar11[2];
          bVar3 = plVar11 != (long *)*plVar10;
          plVar11 = plVar10;
        } while (bVar3);
      }
      else {
        do {
          plVar10 = plVar2;
          plVar2 = (long *)*plVar10;
        } while ((long *)*plVar10 != (long *)0x0);
      }
    } while (plVar10 != (long *)(param_1 + 0x318));
  }
  plVar10 = local_98;
  (**(code **)(*local_98 + 0x20))(local_98,*(undefined4 *)(param_1 + 0x37c));
  (**(code **)(*plVar10 + 0x30))(plVar10,*(undefined8 *)(*(long *)(param_1 + 0x260) + 0xe0));
  puVar7 = *(undefined8 **)(param_1 + 0x2a8);
  if (puVar7 < *(undefined8 **)(param_1 + 0x2b0)) {
    if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar8 = puVar7 + 1;
    *puVar7 = plVar10;
  }
  else {
    puVar8 = (undefined8 *)FUN_00c59c28(param_1 + 0x2a0,&local_98);
  }
  *(undefined8 **)(param_1 + 0x2a8) = puVar8;
  local_120 = FUN_004473ec;
  pcStack_118 = FUN_00c5b660;
  local_130[0] = param_1;
  (**(code **)(*local_98 + 0xa0))(local_98,param_1,local_130);
  (*local_120)(0,local_130,local_130);
  local_140 = FUN_004473ec;
  pcStack_138 = FUN_00c5b66c;
  local_150[0] = param_1;
  (**(code **)(*local_98 + 0x100))(local_98,param_1,local_150);
  (*local_140)(0,local_150,local_150);
  local_80 = FUN_00c5b6b0;
  local_78 = &DAT_00259850;
  local_90[0] = param_1;
  (**(code **)(*local_98 + 0xc0))(local_98,param_1,local_90);
  if (*(code **)(local_78 + 8) != (code *)0x0) {
    (**(code **)(local_78 + 8))(local_90[0]);
  }
  local_160 = FUN_004473ec;
  pcStack_158 = FUN_00c5b6bc;
  local_170[0] = param_1;
  (**(code **)(*local_98 + 200))(local_98,local_170);
  (*local_160)(0,local_170,local_170);
  lVar9 = *(long *)(param_1 + 0x2f0);
  if (lVar9 != *(long *)(param_1 + 0x2f8)) {
    do {
      FUN_00c55154(param_1,local_98,lVar9,*(undefined8 *)(lVar9 + 0x198));
      lVar9 = lVar9 + 0x1a0;
    } while (lVar9 != *(long *)(param_1 + 0x2f8));
  }
  (**(code **)(**(long **)(param_1 + 0x4e8) + 0x50))(*(long **)(param_1 + 0x4e8),3);
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00c55000  FUN_00c55000 =====

void FUN_00c55000(long *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long **local_40;
  ulong local_38;
  long **local_30;
  long *local_28;
  
  if ((int)param_1[0x78] == 1) {
    uVar2 = FUN_00417e08();
    if ((uVar2 & 1) == 0) {
      local_40 = (long **)0x1b2dd3;
      local_38 = 0x1e51;
      local_30 = &local_28;
      uVar3 = (**(code **)*param_1)(param_1);
      uVar1 = (**(code **)(*param_1 + 0x60))(param_1);
      FUN_00623bb0(&DAT_001f647d,local_40,local_38 & 0xffffffff,"P2PTransportChannel: ",uVar3,
                   ", component ",uVar1,
                   " gathering complete, but using continual gathering so not changing gathering state."
                  );
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x70) = 2;
    uVar2 = FUN_00417e08();
    if ((uVar2 & 1) == 0) {
      local_40 = (long **)0x1b2dd3;
      local_38 = 0x1e89;
      local_30 = &local_28;
      uVar3 = (**(code **)*param_1)(param_1);
      uVar1 = (**(code **)(*param_1 + 0x60))(param_1);
      FUN_00623bb0(&DAT_001f647d,local_40,local_38 & 0xffffffff,"P2PTransportChannel: ",uVar3,
                   ", component ",uVar1," gathering complete");
    }
    local_40 = &local_28;
    local_28 = param_1;
    FUN_007b6160(param_1 + 0x26,&local_40,FUN_00c59c0c);
  }
  return;
}


// ===== 00c55154  FUN_00c55154 =====

undefined8 FUN_00c55154(long param_1,long *param_2,long param_3,long *param_4)

{
  undefined1 uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  void **local_b8;
  void ***pppvStack_b0;
  char cStack_a1;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  void *local_80 [2];
  char cStack_69;
  char *local_68;
  ulong local_60;
  void ***local_58;
  void **local_50;
  char **ppcStack_48;
  
  uVar3 = *(ulong *)(param_3 + 0x28);
  plVar4 = (long *)*(long *)(param_3 + 0x20);
  if (-1 < (char)*(byte *)(param_3 + 0x37)) {
    uVar3 = (ulong)*(byte *)(param_3 + 0x37);
    plVar4 = (long *)(param_3 + 0x20);
  }
  uVar3 = (**(code **)(*param_2 + 0x48))(param_2,plVar4,uVar3);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  if (((*(char *)(param_1 + 0x550) == '\x01') &&
      (iVar2 = (**(code **)(*param_2 + 0x10))(param_2), iVar2 != *(int *)(param_3 + 0xd0))) &&
     ((iVar2 == 3 || (uVar3 = FUN_00aff31c(param_3), (uVar3 & 1) != 0)))) {
    uVar3 = FUN_00417e08();
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    local_68 = "../../p2p/base/p2p_transport_channel.cc";
    local_60 = 0x2df9;
    local_58 = (void ***)&stack0xffffffffffffffdf;
    FUN_00c52fa8(local_80,param_1);
    ppcStack_48 = &local_68;
    pppvStack_b0 = &local_50;
    local_b8 = (void **)0x1b8d42;
    local_50 = local_80;
    local_90 = FUN_00afdb88(iVar2);
    local_a0 = FUN_00aff330(param_3);
    FUN_00623bb0(&DAT_00259870,*pppvStack_b0[1],*(undefined4 *)(pppvStack_b0[1] + 1),*pppvStack_b0,
                 local_b8,local_90,&DAT_0019fec4,local_a0);
  }
  else {
    plVar4 = (long *)(**(code **)(*param_2 + 0x58))(param_2,param_3 + 0x50);
    if ((plVar4 == (long *)0x0) ||
       (lVar5 = (**(code **)(*plVar4 + 0x18))(), *(uint *)(lVar5 + 0xf8) < *(uint *)(param_3 + 0xf8)
       )) {
      uVar1 = param_2 != param_4;
      if ((param_4 == (long *)0x0) && (uVar1 = 2, (*(byte *)(param_1 + 0x280) & 1) != 0)) {
        return 0;
      }
      lVar5 = (**(code **)(*param_2 + 0x60))(param_2,param_3,uVar1);
      if (lVar5 != 0) {
        FUN_00c520f8(param_1,lVar5);
        uVar3 = FUN_00417e08();
        if ((uVar3 & 1) == 0) {
          local_68 = "../../p2p/base/p2p_transport_channel.cc";
          local_60 = 0x2ec1;
          local_58 = &local_50;
          FUN_00c52fa8(local_80,param_1);
          pppvStack_b0 = (void ***)&local_68;
          local_b8 = local_80;
          FUN_00623bb0(&DAT_00259877,local_68,local_60 & 0xffffffff,local_80,
                       ": Created connection with origin: ",uVar1,", total: ",
                       *(long *)(param_1 + 0x2e0) - *(long *)(param_1 + 0x2d8) >> 3);
          if (cStack_69 < '\0') {
            operator_delete(local_80[0]);
          }
        }
        return 1;
      }
      return 0;
    }
    uVar6 = (**(code **)(*plVar4 + 0x18))(plVar4);
    uVar3 = FUN_00aff354(param_3,uVar6);
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    uVar3 = FUN_00417e08();
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    local_68 = "../../p2p/base/p2p_transport_channel.cc";
    local_60 = 0x2f11;
    local_58 = &local_50;
    uVar6 = (**(code **)(*plVar4 + 0x18))(plVar4);
    FUN_00aff5b4(local_80,uVar6,1);
    FUN_00aff5b4(&local_b8,param_3,1);
    FUN_00623bb0("\r\t\n\t\n",local_68,local_60 & 0xffffffff,
                 "Attempt to change a remote candidate. Existing remote candidate: ",local_80,
                 "New remote candidate: ",&local_b8);
    if (cStack_a1 < '\0') {
      operator_delete(local_b8);
    }
  }
  if (cStack_69 < '\0') {
    operator_delete(local_80[0]);
  }
  return 0;
}


// ===== 00c55480  FUN_00c55480 =====

/* WARNING: Removing unreachable block (ram,0x00c55a20) */
/* WARNING: Removing unreachable block (ram,0x00c559ec) */

void FUN_00c55480(long *param_1,long *param_2,undefined8 param_3,int param_4,undefined8 param_5,
                 undefined8 *param_6,uint param_7)

{
  void *__s2;
  undefined8 *puVar1;
  size_t sVar2;
  undefined8 *__s2_00;
  ulong uVar3;
  undefined4 uVar4;
  byte bVar5;
  byte bVar6;
  undefined8 ****ppppuVar7;
  int iVar8;
  undefined4 uVar9;
  ulong uVar10;
  size_t sVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  long lVar15;
  char *pcVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined1 auVar20 [16];
  undefined2 local_400;
  void *local_3e8 [2];
  char cStack_3d1;
  undefined1 uStack_3c9;
  char *local_3c8;
  ulong local_3c0;
  undefined1 *local_3b8;
  undefined1 *local_230;
  undefined1 *puStack_228;
  undefined1 *local_220;
  undefined1 *puStack_218;
  undefined1 *puStack_210;
  undefined1 *puStack_208;
  undefined1 *local_200;
  undefined1 *puStack_1f8;
  undefined1 *puStack_1f0;
  undefined1 *puStack_1e8;
  undefined1 *local_1e0;
  undefined1 *puStack_1d8;
  undefined1 *puStack_1d0;
  undefined1 *puStack_1c8;
  undefined1 *local_1c0;
  undefined1 *puStack_1b8;
  undefined1 *puStack_1b0;
  undefined1 *puStack_1a8;
  undefined1 *local_1a0;
  undefined1 *puStack_198;
  undefined1 *puStack_190;
  undefined1 *puStack_188;
  undefined1 *local_180;
  undefined1 *puStack_178;
  undefined1 *puStack_170;
  undefined1 *puStack_168;
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
  undefined8 ***local_90;
  ulong uStack_88;
  ulong local_80;
  
  lVar15 = param_1[0x5f];
  for (lVar17 = param_1[0x5e]; lVar17 != lVar15; lVar17 = lVar17 + 0x1a0) {
    bVar5 = *(byte *)(lVar17 + 0xb7);
    bVar6 = *(byte *)((long)param_6 + 0x17);
    sVar11 = *(size_t *)(lVar17 + 0xa8);
    if (-1 < (char)bVar5) {
      sVar11 = (ulong)bVar5;
    }
    sVar2 = param_6[1];
    if (-1 < (char)bVar6) {
      sVar2 = (ulong)bVar6;
    }
    if (sVar11 == sVar2) {
      puVar13 = (undefined8 *)*(void **)(lVar17 + 0xa0);
      if (-1 < (char)bVar5) {
        puVar13 = (undefined8 *)(lVar17 + 0xa0);
      }
      puVar1 = (undefined8 *)*param_6;
      if (-1 < (char)bVar6) {
        puVar1 = param_6;
      }
      iVar8 = memcmp(puVar13,puVar1,sVar11);
      if ((iVar8 == 0) && (uVar10 = FUN_007e973c(lVar17 + 0x50,param_3), (uVar10 & 1) != 0)) {
        auVar20 = FUN_00b00a9c(param_4);
        sVar11 = (size_t)*(char *)(lVar17 + 0x37);
        if ((long)sVar11 < 0) {
          __s2 = *(void **)(lVar17 + 0x20);
          sVar11 = *(size_t *)(lVar17 + 0x28);
        }
        else {
          __s2 = (void *)(lVar17 + 0x20);
        }
        if ((auVar20._8_8_ == sVar11) && (iVar8 = memcmp(auVar20._0_8_,__s2,sVar11), iVar8 == 0))
        goto LAB_00c55588;
      }
    }
  }
  lVar17 = 0;
LAB_00c55588:
  puVar13 = (undefined8 *)param_1[0x6d];
  puVar18 = (undefined8 *)param_1[0x6c];
  local_90 = (undefined8 ****)0x0;
  uStack_88 = 0;
  local_80 = 0;
  sVar11 = param_6[1];
  puVar1 = (undefined8 *)*param_6;
  if (-1 < (char)*(byte *)((long)param_6 + 0x17)) {
    sVar11 = (ulong)*(byte *)((long)param_6 + 0x17);
    puVar1 = param_6;
  }
  if (puVar13 == puVar18) {
LAB_00c5562c:
    if ((long)puVar13 - (long)puVar18 == 0) goto LAB_00c5568c;
    iVar8 = (int)((ulong)((long)puVar13 - (long)puVar18) >> 3) * -0x49249249 + -1;
    if ((puVar13 != (undefined8 *)0x38) && (&local_90 != (undefined8 ****)(puVar13 + -4))) {
      local_80 = puVar13[-2];
      uStack_88 = puVar13[-3];
      local_90 = (undefined8 ***)puVar13[-4];
    }
  }
  else {
    do {
      puVar19 = puVar13 + -7;
      bVar5 = *(byte *)((long)puVar13 + -0x21);
      sVar2 = puVar13[-6];
      if (-1 < (char)bVar5) {
        sVar2 = (ulong)bVar5;
      }
      if (sVar11 == sVar2) {
        __s2_00 = (undefined8 *)*puVar19;
        if (-1 < (char)bVar5) {
          __s2_00 = puVar19;
        }
        iVar8 = memcmp(puVar1,__s2_00,sVar11);
        if (iVar8 == 0) goto LAB_00c5562c;
      }
      puVar13 = puVar19;
    } while (puVar19 != puVar18);
LAB_00c5568c:
    iVar8 = 0;
  }
  puStack_218 = &DAT_aaaaaaaaaaaaaaaa;
  local_220 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_208 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_210 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1f8 = &DAT_aaaaaaaaaaaaaaaa;
  local_200 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1e8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1c8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_198 = &DAT_aaaaaaaaaaaaaaaa;
  local_1a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_190 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
  local_180 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_170 = &DAT_aaaaaaaaaaaaaaaa;
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
  puStack_228 = &DAT_aaaaaaaaaaaaaaaa;
  local_230 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00afeb90(&local_230);
  if (lVar17 == 0) {
    lVar15 = FUN_00c69f88(param_5,0x24);
    if (lVar15 != 0) {
      uVar4 = *(undefined4 *)(lVar15 + 0xc);
      lVar15 = FUN_00c69f88(param_5,0xc057);
      if (lVar15 == 0) {
        uVar14 = 0;
        local_400 = 0;
      }
      else {
        uVar14 = *(undefined4 *)(lVar15 + 0xc);
        local_400 = (undefined2)((uint)uVar14 >> 0x10);
      }
      uVar9 = (**(code **)(*param_1 + 0x60))(param_1);
      auVar20 = FUN_00b00a9c(param_4);
      uVar10 = param_6[1];
      puVar13 = (undefined8 *)*param_6;
      if (-1 < (char)*(byte *)((long)param_6 + 0x17)) {
        uVar10 = (ulong)*(byte *)((long)param_6 + 0x17);
        puVar13 = param_6;
      }
      uVar3 = uStack_88;
      ppppuVar7 = (undefined8 ****)local_90;
      if (-1 < (long)local_80) {
        uVar3 = local_80 >> 0x38;
        ppppuVar7 = &local_90;
      }
      FUN_00afec28(&local_3c8,uVar9,auVar20._0_8_,auVar20._8_8_,param_3,uVar4,puVar13,uVar10,
                   ppppuVar7,uVar3,2,iVar8,&DAT_001b3348,0,local_400,(short)uVar14);
      FUN_00c527dc(&local_230,&local_3c8);
      FUN_00aff0f8(&local_3c8);
      if (param_4 == 2) {
        FUN_00b008fc(&puStack_d0,"active",6);
      }
      FUN_00b00874(&local_230);
      goto LAB_00c55850;
    }
    uVar10 = FUN_004022fc();
    if ((uVar10 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../p2p/base/p2p_transport_channel.cc",0x20aa,
                   "P2PTransportChannel::OnUnknownAddress - No STUN_ATTR_PRIORITY found in the stun request message"
                  );
    }
    pcVar16 = "Bad Request";
    sVar11 = strlen("Bad Request");
    lVar17 = *param_2;
    uVar12 = 400;
  }
  else {
    FUN_00c527dc(&local_230,lVar17);
LAB_00c55850:
    lVar15 = (**(code **)(*param_2 + 0x58))(param_2,&local_1e0);
    if (lVar15 == 0) {
      lVar15 = (**(code **)(*param_2 + 0x60))(param_2,&local_230,0);
      if (lVar15 != 0) {
        uVar10 = FUN_00417e08();
        if ((uVar10 & 1) == 0) {
          local_3c8 = "../../p2p/base/p2p_transport_channel.cc";
          local_3c0 = 0x22d9;
          local_3b8 = &uStack_3c9;
          pcVar16 = "peer reflexive";
          if (lVar17 != 0) {
            pcVar16 = "resurrected";
          }
          FUN_00aff5b4(local_3e8,&local_230,1);
          FUN_00623bb0("\r\t\t\t\n",local_3c8,local_3c0 & 0xffffffff,"Adding connection from ",
                       pcVar16," candidate: ",local_3e8);
          if (cStack_3d1 < '\0') {
            operator_delete(local_3e8[0]);
          }
        }
        FUN_00c520f8(param_1,lVar15);
        FUN_00c6355c(lVar15,param_5);
        (**(code **)(*(long *)param_1[0x9d] + 0x50))((long *)param_1[0x9d],5);
        goto LAB_00c559dc;
      }
    }
    else if ((param_7 & 1) != 0) {
      uVar10 = FUN_00417e08();
      if ((uVar10 & 1) == 0) {
        FUN_00aff5b4(&local_3c8,&local_230,1);
        FUN_00623bb0(&DAT_001f4e90,"../../p2p/base/p2p_transport_channel.cc",0x2229,
                     "Connection already exists for peer reflexive candidate: ",&local_3c8);
        if ((long)local_3b8 < 0) {
          operator_delete(local_3c8);
        }
      }
      goto LAB_00c559dc;
    }
    pcVar16 = "Server Error";
    sVar11 = strlen("Server Error");
    lVar17 = *param_2;
    uVar12 = 500;
  }
  (**(code **)(lVar17 + 0xb0))(param_2,param_5,param_3,uVar12,pcVar16,sVar11);
LAB_00c559dc:
  FUN_00aff0f8(&local_230);
  return;
}


// ===== 00c55a30  FUN_00c55a30 =====

void FUN_00c55a30(long param_1,long param_2)

{
  ulong uVar1;
  void *local_38 [2];
  char cStack_21;
  
  if (*(long *)(param_1 + 0x2d0) != param_2) {
    if ((param_2 != 0) && ((*(byte *)(param_1 + 0x576) & 1) != 0)) {
      FUN_00c58740(param_1,param_2);
      (**(code **)(**(long **)(param_1 + 0x4e8) + 0x30))(*(long **)(param_1 + 0x4e8),param_2);
    }
    uVar1 = (**(code **)(**(long **)(param_1 + 0x4e8) + 0x58))
                      (*(long **)(param_1 + 0x4e8),6,param_2);
    if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00c55ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x4e8) + 0x48))(*(long **)(param_1 + 0x4e8),6);
      return;
    }
    uVar1 = FUN_00417e08();
    if ((uVar1 & 1) == 0) {
      FUN_00c61eb8(local_38,param_2);
      FUN_00623bb0(&DAT_001f4e90,"../../p2p/base/p2p_transport_channel.cc",0x24f9,
                   "Not switching the selected connection on controlled side yet: ",local_38);
      if (cStack_21 < '\0') {
        operator_delete(local_38[0]);
      }
    }
  }
  return;
}


// ===== 00c55b28  FUN_00c55b28 =====

void FUN_00c55b28(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  void *local_78 [2];
  char cStack_61;
  long local_60;
  long *plStack_58;
  code *local_50;
  code *pcStack_48;
  long *local_38;
  
  if (*(long **)(param_1 + 0x268) == (long *)0x0) {
    uVar3 = FUN_004022fc();
    if ((uVar3 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../p2p/base/p2p_transport_channel.cc",0x2542,
                   "Dropping ICE candidate with hostname address (no AsyncResolverFactory)");
      return;
    }
  }
  else {
    plStack_58 = (long *)(**(code **)(**(long **)(param_1 + 0x268) + 0x20))();
    uVar3 = *(ulong *)(param_1 + 0x4f8);
    local_38 = plStack_58;
    if (uVar3 < *(ulong *)(param_1 + 0x500)) {
      if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_00afef10(uVar3,param_2);
      local_38 = (long *)0x0;
      lVar2 = uVar3 + 0x1a0;
      *(long **)(uVar3 + 0x198) = plStack_58;
    }
    else {
      lVar2 = FUN_00c59d6c(param_1 + 0x4f0,param_2,&local_38);
    }
    *(long *)(param_1 + 0x4f8) = lVar2;
    local_50 = FUN_004473ec;
    pcStack_48 = FUN_00c5b6fc;
    local_60 = param_1;
    (**(code **)(*plStack_58 + 0x10))(plStack_58,param_2 + 0x50,&local_60);
    (*local_50)(0,&local_60,&local_60);
    uVar3 = FUN_00417e08();
    if ((uVar3 & 1) == 0) {
      FUN_007e9004(local_78,param_2 + 0x50);
      FUN_00623bb0(&DAT_001f4e90,"../../p2p/base/p2p_transport_channel.cc",0x2591,
                   "Asynchronously resolving ICE candidate hostname ",local_78);
      if (cStack_61 < '\0') {
        operator_delete(local_78[0]);
      }
    }
    plVar1 = local_38;
    local_38 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
  }
  return;
}


// ===== 00c55cc0  FUN_00c55cc0 =====

void FUN_00c55cc0(long param_1,long param_2)

{
  undefined1 *__n;
  undefined1 *puVar1;
  undefined8 ******__s1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined1 *local_1e0;
  undefined1 *puStack_1d8;
  undefined1 *local_1d0;
  undefined1 *puStack_1c8;
  undefined1 *puStack_1c0;
  undefined1 *puStack_1b8;
  undefined1 *local_1b0;
  undefined1 *puStack_1a8;
  undefined1 *puStack_1a0;
  undefined1 *puStack_198;
  undefined1 *local_190;
  undefined1 *puStack_188;
  undefined1 *puStack_180;
  undefined1 *puStack_178;
  undefined1 *local_170;
  undefined1 *puStack_168;
  undefined1 *puStack_160;
  undefined1 *puStack_158;
  undefined1 *local_150;
  undefined1 *puStack_148;
  undefined8 *****local_140;
  undefined1 *local_138;
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
  
  uVar3 = FUN_00c55f2c();
  if ((*(long *)(param_1 + 0x360) != *(long *)(param_1 + 0x368)) &&
     (uVar3 < (int)((ulong)(*(long *)(param_1 + 0x368) - *(long *)(param_1 + 0x360)) >> 3) *
              -0x49249249 - 1U)) {
    uVar5 = FUN_004022fc();
    if ((uVar5 & 1) != 0) {
      return;
    }
    FUN_00623bb0(&DAT_001f4eff,"../../p2p/base/p2p_transport_channel.cc",0x25e2,
                 "Dropping a remote candidate because its ufrag ",param_2 + 0xa0,
                 " indicates it was for a previous generation.");
    return;
  }
  puStack_1c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1b8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_198 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
  local_190 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_180 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
  local_170 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_160 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
  local_150 = &DAT_aaaaaaaaaaaaaaaa;
  local_138 = &DAT_aaaaaaaaaaaaaaaa;
  local_140 = (undefined8 *****)&DAT_aaaaaaaaaaaaaaaa;
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
  puStack_1d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1e0 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00afef10(&local_1e0,param_2);
  lVar8 = *(long *)(param_1 + 0x368);
  puStack_e8 = (undefined1 *)CONCAT44(puStack_e8._4_4_,uVar3);
  if ((*(long *)(param_1 + 0x360) != lVar8) &&
     (puVar9 = (undefined8 *)(lVar8 + -0x38), puVar9 != (undefined8 *)0x0)) {
    uVar5 = *(ulong *)(param_2 + 0xa8);
    if ((*(byte *)(param_2 + 0xb7) & 0x80) == 0) {
      uVar5 = (ulong)*(byte *)(param_2 + 0xb7);
    }
    if (uVar5 == 0) {
      lVar7 = (long)*(char *)(lVar8 + -0x21);
      if (lVar7 < 0) {
        puVar9 = *(undefined8 **)(lVar8 + -0x38);
        lVar7 = *(long *)(lVar8 + -0x30);
      }
      FUN_00b008fc(&local_140,puVar9,lVar7);
      puVar9 = (undefined8 *)0x0;
      if (*(long *)(param_1 + 0x360) != *(long *)(param_1 + 0x368)) {
        puVar9 = (undefined8 *)(*(long *)(param_1 + 0x368) + -0x38);
      }
    }
    bVar2 = *(byte *)((long)puVar9 + 0x17);
    __n = local_138;
    if (-1 < (long)local_130) {
      __n = (undefined1 *)((ulong)local_130 >> 0x38);
    }
    puVar1 = (undefined1 *)puVar9[1];
    if (-1 < (char)bVar2) {
      puVar1 = (undefined1 *)(ulong)bVar2;
    }
    if (__n == puVar1) {
      __s1 = (undefined8 ******)local_140;
      if (-1 < (long)local_130) {
        __s1 = &local_140;
      }
      puVar6 = (undefined8 *)*puVar9;
      if (-1 < (char)bVar2) {
        puVar6 = puVar9;
      }
      iVar4 = memcmp(__s1,puVar6,(size_t)__n);
      if (iVar4 == 0) {
        uVar5 = *(ulong *)(param_2 + 0xc0);
        if ((*(byte *)(param_2 + 0xcf) & 0x80) == 0) {
          uVar5 = (ulong)*(byte *)(param_2 + 0xcf);
        }
        if (uVar5 == 0) {
          lVar8 = (long)*(char *)((long)puVar9 + 0x2f);
          if (lVar8 < 0) {
            puVar6 = (undefined8 *)puVar9[3];
            lVar8 = puVar9[4];
          }
          else {
            puVar6 = puVar9 + 3;
          }
          FUN_00b008fc(&puStack_128,puVar6,lVar8);
        }
        goto LAB_00c55ed0;
      }
    }
    uVar5 = FUN_004022fc();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e90,"../../p2p/base/p2p_transport_channel.cc",0x269a,
                   "A remote candidate arrives with an unknown ufrag: ",param_2 + 0xa0);
    }
  }
LAB_00c55ed0:
  uVar5 = FUN_007e95a4(&local_190);
  if ((uVar5 & 1) == 0) {
    FUN_00c56044(param_1,&local_1e0);
  }
  else if ((*(byte *)(*(long *)(param_1 + 0x260) + 0x24) & 3) != 0) {
    FUN_00c55b28(param_1,&local_1e0);
  }
  FUN_00aff0f8(&local_1e0);
  return;
}


// ===== 00c55f2c  FUN_00c55f2c =====

int FUN_00c55f2c(long param_1,long param_2)

{
  undefined8 *__s2;
  byte bVar1;
  ulong uVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *__s1;
  size_t __n;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  __n = (size_t)*(char *)(param_2 + 0xb7);
  __s1 = (undefined8 *)(param_2 + 0xa0);
  if ((long)__n < 0) {
    __n = *(size_t *)(param_2 + 0xa8);
    if (__n == 0) goto LAB_00c55ff0;
    __s1 = (undefined8 *)*__s1;
  }
  else if (*(char *)(param_2 + 0xb7) == '\0') {
LAB_00c55ff0:
    if (*(int *)(param_2 + 0xf8) != 0) {
      return *(int *)(param_2 + 0xf8);
    }
    if (*(long *)(param_1 + 0x360) == *(long *)(param_1 + 0x368)) {
      return 0;
    }
    uVar5 = *(long *)(param_1 + 0x368) - *(long *)(param_1 + 0x360);
    goto LAB_00c56010;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x368);
  puVar6 = *(undefined8 **)(param_1 + 0x360);
  uVar2 = (long)puVar4 - (long)puVar6;
  if (uVar2 == 0) {
LAB_00c55fc4:
    uVar5 = (long)puVar4 - (long)puVar6;
    if ((uVar5 != 0) && (puVar4 != (undefined8 *)0x38)) {
LAB_00c56010:
      return (int)(uVar5 >> 3) * -0x49249249 + -1;
    }
  }
  else {
    do {
      puVar7 = puVar4 + -7;
      bVar1 = *(byte *)((long)puVar4 + -0x21);
      uVar5 = puVar4[-6];
      if (-1 < (char)bVar1) {
        uVar5 = (ulong)bVar1;
      }
      if (__n == uVar5) {
        __s2 = (undefined8 *)*puVar7;
        if (-1 < (char)bVar1) {
          __s2 = puVar7;
        }
        iVar3 = memcmp(__s1,__s2,__n);
        if (iVar3 == 0) goto LAB_00c55fc4;
      }
      puVar4 = puVar7;
    } while (puVar7 != puVar6);
  }
  return (int)(uVar2 >> 3) * -0x49249249;
}


// ===== 00c56044  FUN_00c56044 =====

void FUN_00c56044(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long local_70;
  long *plStack_68;
  code *local_60;
  code *pcStack_58;
  void *local_50 [2];
  char cStack_39;
  long *local_38;
  
  if (*(long **)(param_1 + 0x278) == (long *)0x0) {
    uVar2 = FUN_0044075c();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../p2p/base/p2p_transport_channel.cc",0x2918,
                   "No LocalNetworkAccessPermissionFactory");
    }
    FUN_00c566c8(param_1,param_2);
    return;
  }
  plVar1 = (long *)(**(code **)(**(long **)(param_1 + 0x278) + 0x10))();
  local_38 = plVar1;
  uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_2 + 0x50);
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_0044075c();
    if ((uVar2 & 1) == 0) {
      FUN_007e8ea8(param_2 + 0x50);
      FUN_007e9f18(local_50);
      FUN_00623bb0(&DAT_001f4eff,"../../p2p/base/p2p_transport_channel.cc",0x2958,
                   "No need to request permission for candidate: ",local_50,&DAT_001ea377);
      if (cStack_39 < '\0') {
        operator_delete(local_50[0]);
      }
    }
    FUN_00c566c8(param_1,param_2);
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x510);
    if (uVar2 < *(ulong *)(param_1 + 0x518)) {
      if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_00afef10(uVar2,param_2);
      local_38 = (long *)0x0;
      lVar3 = uVar2 + 0x1a0;
      *(long **)(uVar2 + 0x198) = plVar1;
    }
    else {
      lVar3 = FUN_00c5a050(param_1 + 0x508,param_2,&local_38);
    }
    *(long *)(param_1 + 0x510) = lVar3;
    uVar2 = FUN_0044075c();
    if ((uVar2 & 1) == 0) {
      FUN_007e9004(local_50,param_2 + 0x50);
      FUN_00623bb0(&DAT_001f4e90,"../../p2p/base/p2p_transport_channel.cc",0x29a8,
                   "Asynchronously requesting LNA permission.",local_50);
      if (cStack_39 < '\0') {
        operator_delete(local_50[0]);
      }
    }
    local_60 = FUN_004473ec;
    pcStack_58 = FUN_00c5b70c;
    local_70 = param_1;
    plStack_68 = plVar1;
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2 + 0x50,&local_70);
    (*local_60)(0,&local_70,&local_70);
    plVar1 = local_38;
  }
  if (plVar1 != (long *)0x0) {
    local_38 = (long *)0x0;
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  return;
}


// ===== 00c56270  FUN_00c56270 =====

void FUN_00c56270(long param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_378 [408];
  undefined1 *local_1e0;
  undefined1 *puStack_1d8;
  undefined1 *local_1d0;
  undefined1 *puStack_1c8;
  undefined1 *puStack_1c0;
  undefined1 *puStack_1b8;
  undefined1 *local_1b0;
  undefined1 *puStack_1a8;
  undefined1 *puStack_1a0;
  undefined1 *puStack_198;
  undefined1 *local_190;
  undefined1 *puStack_188;
  undefined1 *puStack_180;
  undefined1 *puStack_178;
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
  
  lVar6 = *(long *)(param_1 + 0x4f0);
  lVar5 = *(long *)(param_1 + 0x4f8);
  if (lVar6 != lVar5) {
    do {
      if (*(long **)(lVar6 + 0x198) == param_2) goto LAB_00c562c0;
      lVar6 = lVar6 + 0x1a0;
    } while (lVar6 != lVar5);
LAB_00c563b0:
    uVar3 = FUN_004249b0();
    if ((uVar3 & 1) != 0) {
      return;
    }
    FUN_00623bb0(&DAT_001f4e98,"../../p2p/base/p2p_transport_channel.cc",0x27ab,
                 "Unexpected AsyncDnsResolver return");
    return;
  }
LAB_00c562c0:
  if (lVar6 == lVar5) goto LAB_00c563b0;
  puStack_1c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1b8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_198 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
  local_190 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_180 = &DAT_aaaaaaaaaaaaaaaa;
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
  puStack_1d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1e0 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00afef10(&local_1e0,lVar6);
  FUN_00afef10(auStack_378,&local_1e0);
  uVar2 = (**(code **)(*param_2 + 0x20))(param_2);
  FUN_00c56488(param_1,auStack_378,uVar2);
  FUN_00aff0f8(auStack_378);
  lVar5 = *(long *)(param_1 + 0x4f8);
  if (lVar6 == lVar5) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:1160: libc++ Hardening assertion __position != end() failed: vector::erase(iterator) called with a non-dereferenceable iterator\n"
              );
  }
  lVar7 = lVar6;
  if (lVar6 + 0x1a0 == lVar5) {
    if (lVar6 == lVar5) goto LAB_00c56400;
  }
  else {
    do {
      lVar6 = lVar7 + 0x1a0;
      FUN_00c527dc(lVar7,lVar7 + 0x1a0);
      uVar2 = *(undefined8 *)(lVar7 + 0x338);
      plVar4 = *(long **)(lVar7 + 0x198);
      *(undefined8 *)(lVar7 + 0x338) = 0;
      *(undefined8 *)(lVar7 + 0x198) = uVar2;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      lVar1 = lVar7 + 0x340;
      lVar7 = lVar6;
    } while (lVar1 != lVar5);
    lVar5 = *(long *)(param_1 + 0x4f8);
    if (lVar6 == lVar5) goto LAB_00c56400;
  }
  do {
    lVar7 = lVar5 + -0x1a0;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    plVar4 = *(long **)(lVar5 + -8);
    *(undefined8 *)(lVar5 + -8) = 0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    FUN_00aff0f8(lVar7);
    lVar5 = lVar7;
  } while (lVar7 != lVar6);
LAB_00c56400:
  *(long *)(param_1 + 0x4f8) = lVar6;
  FUN_00aff0f8(&local_1e0);
  return;
}


// ===== 00c56488  FUN_00c56488 =====

/* WARNING: Removing unreachable block (ram,0x00c56530) */
/* WARNING: Removing unreachable block (ram,0x00c566b4) */

void FUN_00c56488(undefined8 param_1,long param_2,long *param_3)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  void *local_c0 [2];
  char cStack_a9;
  void *local_a8 [2];
  char cStack_91;
  char *local_90;
  undefined1 *puStack_88;
  void **local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  char *local_48;
  ulong local_40;
  undefined1 *local_38;
  undefined1 uStack_11;
  
  iVar1 = (**(code **)(*param_3 + 0x18))(param_3);
  if (iVar1 == 0) {
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = (void **)&DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_007e8a64(&local_90);
    uVar3 = (**(code **)(*param_3 + 0x10))(param_3,10,&local_90);
    if (((uVar3 & 1) == 0) &&
       (uVar3 = (**(code **)(*param_3 + 0x10))(param_3,2,&local_90), (uVar3 & 1) == 0)) {
      uVar3 = FUN_00417e08();
      if ((uVar3 & 1) == 0) {
        FUN_007e9004(&local_48,param_2 + 0x50);
        FUN_00623bb0(&DAT_001f4eff,"../../p2p/base/p2p_transport_channel.cc",0x2889,
                     "ICE candidate hostname ",&local_48," could not be resolved");
      }
    }
    else {
      uVar3 = FUN_00417e08();
      if ((uVar3 & 1) == 0) {
        local_48 = "../../p2p/base/p2p_transport_channel.cc";
        local_40 = 0x28b9;
        local_38 = &uStack_11;
        FUN_007e9004(local_a8,param_2 + 0x50);
        FUN_007e8ea8(&local_90);
        FUN_007e9f18(local_c0);
        FUN_00623bb0("\r\t\n\t\n",local_48,local_40 & 0xffffffff,"Resolved ICE candidate hostname ",
                     local_a8,&DAT_0019fec4,local_c0);
        if (cStack_a9 < '\0') {
          operator_delete(local_c0[0]);
        }
        if (cStack_91 < '\0') {
          operator_delete(local_a8[0]);
        }
      }
      FUN_007e8d84(param_2 + 0x50,&local_90);
      FUN_00c56044(param_1,param_2);
    }
    if ((long)local_80 < 0) {
      operator_delete(local_90);
    }
  }
  else {
    uVar3 = FUN_004022fc();
    if ((uVar3 & 1) == 0) {
      local_90 = "../../p2p/base/p2p_transport_channel.cc";
      puStack_88 = (undefined1 *)0x2822;
      local_80 = local_a8;
      FUN_007e9004(&local_48,param_2 + 0x50);
      uVar2 = (**(code **)(*param_3 + 0x18))(param_3);
      FUN_00623bb0(&DAT_001f614e,local_90,(ulong)puStack_88 & 0xffffffff,
                   "Failed to resolve ICE candidate hostname ",&local_48," with error ",uVar2);
    }
  }
  return;
}


// ===== 00c566c8  FUN_00c566c8 =====

void FUN_00c566c8(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  
  lVar2 = FUN_0066631c("WebRTC.PeerConnection.CandidateAddressType",0x2a,4);
  if (lVar2 != 0) {
    uVar1 = FUN_007e9680(param_2 + 0x50);
    FUN_00666568(lVar2,uVar1);
  }
  puVar6 = *(undefined8 **)(param_1 + 0x2e0);
  for (puVar4 = *(undefined8 **)(param_1 + 0x2d8); puVar4 != puVar6; puVar4 = puVar4 + 1) {
    FUN_00c67ae4(*puVar4,param_2);
  }
  lVar2 = *(long *)(param_1 + 0x2f0);
  if (*(long *)(param_1 + 0x2f8) != lVar2) {
    uVar5 = 0;
    lVar7 = -0x1a0;
    do {
      lVar7 = lVar7 + 0x1a0;
      uVar3 = FUN_00aff354(lVar2 + lVar7,param_2);
      if ((uVar3 & 1) != 0) goto LAB_00c567d0;
      lVar2 = *(long *)(param_1 + 0x2f0);
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulong)((*(long *)(param_1 + 0x2f8) - lVar2 >> 5) * 0x4ec4ec4ec4ec4ec5));
  }
  puVar4 = *(undefined8 **)(param_1 + 0x2a8);
  while (puVar4 != *(undefined8 **)(param_1 + 0x2a0)) {
    puVar4 = puVar4 + -1;
    FUN_00c55154(param_1,*puVar4,param_2,0);
  }
  FUN_00c56ca0(param_1,param_2,0);
LAB_00c567d0:
                    /* WARNING: Could not recover jumptable at 0x00c567f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x4e8) + 0x50))(*(long **)(param_1 + 0x4e8),4);
  return;
}


// ===== 00c567f8  FUN_00c567f8 =====

void FUN_00c567f8(long param_1,long param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  void *local_1f8 [2];
  char cStack_1e1;
  undefined1 *local_1e0;
  undefined1 *puStack_1d8;
  undefined1 *local_1d0;
  undefined1 *puStack_1c8;
  undefined1 *puStack_1c0;
  undefined1 *puStack_1b8;
  undefined1 *local_1b0;
  undefined1 *puStack_1a8;
  undefined1 *puStack_1a0;
  undefined1 *puStack_198;
  undefined1 *local_190;
  undefined1 *puStack_188;
  undefined1 *puStack_180;
  undefined1 *puStack_178;
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
  
  lVar6 = *(long *)(param_1 + 0x508);
  lVar4 = *(long *)(param_1 + 0x510);
  if (lVar6 != lVar4) {
    do {
      if (*(long *)(lVar6 + 0x198) == param_2) goto LAB_00c56848;
      lVar6 = lVar6 + 0x1a0;
    } while (lVar6 != lVar4);
LAB_00c56904:
    uVar2 = FUN_004249b0();
    if ((uVar2 & 1) != 0) {
      return;
    }
    FUN_00623bb0(&DAT_001f4e98,"../../p2p/base/p2p_transport_channel.cc",0x2a4b,
                 "Unexpected LocalNetworkAccessPermission return");
    return;
  }
LAB_00c56848:
  if (lVar6 == lVar4) goto LAB_00c56904;
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
  puStack_1c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1b8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_198 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
  local_190 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_180 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1e0 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00afef10(&local_1e0,lVar6);
  lVar4 = *(long *)(param_1 + 0x510);
  if (lVar6 == lVar4) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:1160: libc++ Hardening assertion __position != end() failed: vector::erase(iterator) called with a non-dereferenceable iterator\n"
              );
  }
  lVar7 = lVar6;
  if (lVar6 + 0x1a0 == lVar4) {
    if (lVar6 == lVar4) goto LAB_00c56954;
  }
  else {
    do {
      lVar6 = lVar7 + 0x1a0;
      FUN_00c527dc(lVar7,lVar7 + 0x1a0);
      uVar5 = *(undefined8 *)(lVar7 + 0x338);
      plVar3 = *(long **)(lVar7 + 0x198);
      *(undefined8 *)(lVar7 + 0x338) = 0;
      *(undefined8 *)(lVar7 + 0x198) = uVar5;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      lVar1 = lVar7 + 0x340;
      lVar7 = lVar6;
    } while (lVar1 != lVar4);
    lVar4 = *(long *)(param_1 + 0x510);
    if (lVar6 == lVar4) goto LAB_00c56954;
  }
  do {
    lVar7 = lVar4 + -0x1a0;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    plVar3 = *(long **)(lVar4 + -8);
    *(undefined8 *)(lVar4 + -8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    FUN_00aff0f8(lVar7);
    lVar4 = lVar7;
  } while (lVar7 != lVar6);
LAB_00c56954:
  *(long *)(param_1 + 0x510) = lVar6;
  if (param_3 == 0) {
    FUN_00c566c8(param_1,&local_1e0);
  }
  else {
    uVar2 = FUN_00417e08();
    if ((uVar2 & 1) == 0) {
      FUN_007e9004(local_1f8,&local_190);
      FUN_00623bb0(&DAT_001f4eff,"../../p2p/base/p2p_transport_channel.cc",0x2a91,
                   "LNA Permission denied for ",local_1f8,&DAT_001ea377);
      if (cStack_1e1 < '\0') {
        operator_delete(local_1f8[0]);
      }
    }
  }
  FUN_00aff0f8(&local_1e0);
  return;
}


// ===== 00c56a4c  FUN_00c56a4c =====

/* WARNING: Removing unreachable block (ram,0x00c56b20) */
/* WARNING: Removing unreachable block (ram,0x00c56b24) */
/* WARNING: Removing unreachable block (ram,0x00c56b48) */

void FUN_00c56a4c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_380 [408];
  void *local_1e8 [2];
  char cStack_1d1;
  
  FUN_00afef10(auStack_380);
  uVar7 = *(ulong *)(param_1 + 0x2f8);
  uVar8 = *(ulong *)(param_1 + 0x2f0);
  FUN_00afef10(local_1e8,auStack_380);
  uVar6 = uVar8;
  if (uVar8 == uVar7) {
LAB_00c56ac0:
    uVar2 = uVar6;
    uVar5 = uVar6;
    if (uVar6 != uVar7) {
      while (uVar1 = uVar5, uVar5 = uVar1 + 0x1a0, uVar2 = uVar6, uVar5 != uVar7) {
        uVar2 = FUN_00aff508(local_1e8,uVar5);
        if ((uVar2 & 1) == 0) {
          FUN_00c527dc(uVar6,uVar5);
          *(undefined8 *)(uVar6 + 0x198) = *(undefined8 *)(uVar1 + 0x338);
          uVar6 = uVar6 + 0x1a0;
        }
      }
    }
  }
  else {
    do {
      uVar2 = FUN_00aff508(local_1e8,uVar6);
      if ((uVar2 & 1) != 0) goto LAB_00c56ac0;
      uVar6 = uVar6 + 0x1a0;
      uVar2 = uVar7;
    } while (uVar6 != uVar7);
  }
  uVar6 = *(ulong *)(param_1 + 0x2f8);
  if (uVar6 < uVar2) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:1170: libc++ Hardening assertion __first <= __last failed: vector::erase(first, last) called with invalid range\n"
              );
  }
  if (uVar2 != uVar6) {
    while (uVar2 != uVar6) {
      uVar6 = uVar6 - 0x1a0;
      if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_00aff0f8(uVar6);
    }
    *(ulong *)(param_1 + 0x2f8) = uVar2;
  }
  FUN_00aff0f8(local_1e8);
  lVar3 = *(long *)(param_1 + 0x2f8);
  lVar4 = *(long *)(param_1 + 0x2f0);
  FUN_00aff0f8(auStack_380);
  if ((lVar3 - lVar4 != uVar7 - uVar8) && (uVar6 = FUN_0044075c(), (uVar6 & 1) == 0)) {
    FUN_00aff5b4(local_1e8,param_2,1);
    FUN_00623bb0(&DAT_001f4e90,"../../p2p/base/p2p_transport_channel.cc",0x2bc8,
                 "Removed remote candidate ",local_1e8);
    if (cStack_1d1 < '\0') {
      operator_delete(local_1e8[0]);
    }
  }
  return;
}


// ===== 00c56c34  FUN_00c56c34 =====

void FUN_00c56c34(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x2f8);
  lVar2 = *(long *)(param_1 + 0x2f0);
  while( true ) {
    if (lVar2 == lVar1) {
      *(long *)(param_1 + 0x2f8) = lVar2;
      return;
    }
    lVar1 = lVar1 + -0x1a0;
    if (lVar1 == 0) break;
    FUN_00aff0f8(lVar1);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00c56ca0  FUN_00c56ca0 =====

void FUN_00c56ca0(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  void *local_208 [2];
  char cStack_1f1;
  undefined8 local_70;
  
  lVar4 = *(long *)(param_1 + 0x2f8);
  lVar3 = *(long *)(param_1 + 0x2f0);
  if (lVar4 != lVar3) {
    uVar6 = 0;
    do {
      if (*(uint *)(lVar3 + uVar6 * 0x1a0 + 0xf8) < *(uint *)(param_2 + 0xf8)) {
        uVar2 = FUN_00417e08();
        if ((uVar2 & 1) == 0) {
          if ((ulong)((*(long *)(param_1 + 0x2f8) - *(long *)(param_1 + 0x2f0) >> 5) *
                     0x4ec4ec4ec4ec4ec5) <= uVar6) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                      );
          }
          FUN_007e924c(local_208,*(long *)(param_1 + 0x2f0) + uVar6 * 0x1a0 + 0x50);
          FUN_00623bb0(&DAT_001f4e90,"../../p2p/base/p2p_transport_channel.cc",0x30d1,
                       "Pruning candidate from old generation: ",local_208);
          if (cStack_1f1 < '\0') {
            operator_delete(local_208[0]);
          }
        }
        lVar4 = *(long *)(param_1 + 0x2f0) + uVar6 * 0x1a0;
        lVar3 = *(long *)(param_1 + 0x2f8);
        if (lVar4 == lVar3) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__vector/vector.h:1160: libc++ Hardening assertion __position != end() failed: vector::erase(iterator) called with a non-dereferenceable iterator\n"
                    );
        }
        lVar5 = lVar4;
        if (lVar4 + 0x1a0 != lVar3) {
          do {
            lVar4 = lVar5 + 0x1a0;
            FUN_00c527dc(lVar5,lVar5 + 0x1a0);
            lVar1 = lVar5 + 0x340;
            *(undefined8 *)(lVar5 + 0x198) = *(undefined8 *)(lVar5 + 0x338);
            lVar5 = lVar4;
          } while (lVar1 != lVar3);
          lVar3 = *(long *)(param_1 + 0x2f8);
        }
        while (lVar4 != lVar3) {
          lVar3 = lVar3 + -0x1a0;
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          FUN_00aff0f8(lVar3);
        }
        lVar3 = *(long *)(param_1 + 0x2f0);
        *(long *)(param_1 + 0x2f8) = lVar4;
      }
      else {
        uVar6 = uVar6 + 1;
      }
    } while (uVar6 < (ulong)((lVar4 - lVar3 >> 5) * 0x4ec4ec4ec4ec4ec5));
    if (lVar4 != lVar3) {
      uVar6 = 0;
      lVar4 = -0x1a0;
      do {
        lVar4 = lVar4 + 0x1a0;
        uVar2 = FUN_00aff354(lVar3 + lVar4,param_2);
        if ((uVar2 & 1) != 0) {
          uVar6 = FUN_00417e08();
          if ((uVar6 & 1) != 0) {
            return;
          }
          FUN_00aff5b4(local_208,param_2,1);
          FUN_00623bb0(&DAT_001f4e90,"../../p2p/base/p2p_transport_channel.cc",0x3121,
                       "Duplicate candidate: ",local_208);
          if (-1 < cStack_1f1) {
            return;
          }
          operator_delete(local_208[0]);
          return;
        }
        lVar3 = *(long *)(param_1 + 0x2f0);
        uVar6 = uVar6 + 1;
      } while (uVar6 < (ulong)((*(long *)(param_1 + 0x2f8) - lVar3 >> 5) * 0x4ec4ec4ec4ec4ec5));
    }
  }
  FUN_00afef10(local_208,param_2);
  uVar6 = *(ulong *)(param_1 + 0x2f8);
  local_70 = param_3;
  if (uVar6 < *(ulong *)(param_1 + 0x300)) {
    if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    FUN_00afef10(uVar6,local_208);
    lVar4 = uVar6 + 0x1a0;
    *(undefined8 *)(uVar6 + 0x198) = local_70;
  }
  else {
    lVar4 = FUN_00c5a334(param_1 + 0x2f0,local_208);
  }
  *(long *)(param_1 + 0x2f8) = lVar4;
  FUN_00aff0f8(local_208);
  return;
}


// ===== 00c56f90  FUN_00c56f90 =====

undefined8 FUN_00c56f90(long param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  ulong unaff_x22;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 uStack_99;
  char *local_98;
  undefined8 local_90;
  undefined1 *local_88;
  char *local_80;
  char **ppcStack_78;
  ulong local_70;
  char **local_68;
  
  if ((param_2 == 5) && ((*(byte *)(param_1 + 0x584) & 1) != 0)) {
    param_3 = *(int *)(param_1 + 0x580);
  }
  plVar4 = *(long **)(param_1 + 0x318);
  if (plVar4 != (long *)0x0) {
    do {
      while (*(int *)((long)plVar4 + 0x1c) <= (int)param_2) {
        if ((int)param_2 <= *(int *)((long)plVar4 + 0x1c)) {
          if (plVar4 != (long *)(param_1 + 0x318)) {
            if ((int)plVar4[4] == param_3) {
              return 0;
            }
            *(int *)(plVar4 + 4) = param_3;
            goto LAB_00c57048;
          }
          goto LAB_00c57028;
        }
        plVar4 = (long *)plVar4[1];
        if (plVar4 == (long *)0x0) goto LAB_00c57028;
      }
      plVar4 = (long *)*plVar4;
    } while (plVar4 != (long *)0x0);
  }
LAB_00c57028:
  local_98 = (char *)CONCAT44(param_3,param_2);
  FUN_00c5b724(0,param_1 + 0x310,param_1 + 0x310,&local_98);
LAB_00c57048:
  puVar5 = *(undefined8 **)(param_1 + 0x2a0);
  puVar6 = *(undefined8 **)(param_1 + 0x2a8);
  if (puVar5 != puVar6) {
    do {
      plVar4 = (long *)*puVar5;
      iVar1 = (**(code **)(*plVar4 + 0x68))(plVar4,param_2,param_3);
      if ((iVar1 < 0) && (uVar3 = FUN_004022fc(), (uVar3 & 1) == 0)) {
        local_98 = "../../p2p/base/p2p_transport_channel.cc";
        local_90 = 0x321a;
        local_88 = &uStack_99;
        ppcStack_78 = &local_98;
        local_80 = "SetOption(";
        unaff_x22 = unaff_x22 & 0xffffffff00000000 | (ulong)param_2;
        local_68 = &local_80;
        local_70 = unaff_x22;
        uVar2 = (**(code **)(*plVar4 + 0x78))(plVar4);
        FUN_00623bb0(&DAT_001f6676,*(undefined8 *)local_68[1],*(undefined4 *)(local_68[1] + 8),
                     *local_68,local_70 & 0xffffffff,&DAT_001e1644,param_3,") failed: ",uVar2);
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar6);
  }
  return 0;
}


// ===== 00c57154  FUN_00c57154 =====

undefined8 FUN_00c57154(long param_1,int param_2,undefined4 *param_3)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x318);
  if (plVar1 != (long *)0x0) {
    do {
      while (param_2 < *(int *)((long)plVar1 + 0x1c)) {
        plVar1 = (long *)*plVar1;
        if (plVar1 == (long *)0x0) {
          return 0;
        }
      }
      if (param_2 <= *(int *)((long)plVar1 + 0x1c)) {
        if (plVar1 == (long *)(param_1 + 0x318)) {
          return 0;
        }
        *param_3 = (int)plVar1[4];
        return 1;
      }
      plVar1 = (long *)plVar1[1];
    } while (plVar1 != (long *)0x0);
  }
  return 0;
}


// ===== 00c571b0  FUN_00c571b0 =====

undefined4 FUN_00c571b0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x284);
}


// ===== 00c571bc  FUN_00c571bc =====

ulong FUN_00c571bc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  if (param_5 == 0) {
    uVar3 = FUN_00c572bc(param_1,*(undefined8 *)(param_1 + 0x2d0));
    if ((uVar3 & 1) != 0) {
      *(long *)(param_1 + 0x530) = *(long *)(param_1 + 0x530) + 1;
      puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
      local_90 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
      uStack_60 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
      local_50 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
      *(int *)(param_1 + 0x480) = (int)*(undefined8 *)(param_4 + 8);
      puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
      local_a0 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_00897be8(&local_a0,param_4);
      uStack_60 = (undefined1 *)CONCAT44(1,(undefined4)uStack_60);
      uVar1 = (**(code **)(**(long **)(param_1 + 0x2d0) + 0x38))
                        (*(long **)(param_1 + 0x2d0),param_2,param_3,&local_a0);
      if ((int)uVar1 < 1) {
        uVar2 = (**(code **)(**(long **)(param_1 + 0x2d0) + 0x40))();
        *(undefined4 *)(param_1 + 0x284) = uVar2;
      }
      else {
        *(ulong *)(param_1 + 0x520) = *(long *)(param_1 + 0x520) + (ulong)uVar1;
      }
      FUN_00897c8c(&local_a0);
      return (ulong)uVar1;
    }
    uVar2 = 0x6b;
  }
  else {
    uVar2 = 0x16;
  }
  *(undefined4 *)(param_1 + 0x284) = uVar2;
  return 0xffffffff;
}


// ===== 00c572bc  FUN_00c572bc =====

undefined8 FUN_00c572bc(long param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_2 != (long *)0x0) {
    uVar2 = FUN_00c63548(param_2);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    uVar3 = FUN_00c66be4(param_2);
    if ((int)uVar3 == 1) {
      return uVar3;
    }
    iVar1 = FUN_00c66be4(param_2);
    if ((iVar1 == 2) && (*(char *)(param_1 + 0x3d8) == '\x01')) {
      (**(code **)(*param_2 + 0x10))(param_2);
      uVar2 = FUN_00aff31c();
      if ((uVar2 & 1) != 0) {
        (**(code **)(*param_2 + 0x18))(param_2);
        uVar2 = FUN_00aff31c();
        if ((uVar2 & 1) != 0) {
          return 1;
        }
        (**(code **)(*param_2 + 0x18))(param_2);
        uVar3 = FUN_00aff308();
        return uVar3;
      }
    }
  }
  return 0;
}


// ===== 00c5737c  FUN_00c5737c =====

undefined8 FUN_00c5737c(long *param_1,long *param_2)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined1 auStack_5f0 [408];
  undefined1 local_458 [120];
  undefined1 auStack_3e0 [408];
  undefined1 auStack_248 [488];
  
  lVar9 = *param_2;
  lVar11 = param_2[1];
  while (lVar9 != lVar11) {
    lVar11 = lVar11 + -0x1b8;
    if (lVar11 == 0) goto LAB_00c5766c;
    FUN_00aff0f8(lVar11);
  }
  lVar11 = param_2[3];
  lVar1 = param_2[4];
  param_2[1] = lVar9;
  while (lVar11 != lVar1) {
    lVar1 = lVar1 + -0x3f8;
    if (lVar1 == 0) {
LAB_00c5766c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    FUN_00c6e96c(lVar1);
  }
  param_2[4] = lVar11;
  if (param_1[0x51] != param_1[0x52]) {
    plVar6 = *(long **)(param_1[0x52] + -8);
    (**(code **)(*plVar6 + 0x50))(plVar6,param_2);
  }
  plVar10 = (long *)param_1[0x5c];
  for (plVar6 = (long *)param_1[0x5b]; plVar6 != plVar10; plVar6 = plVar6 + 1) {
    lVar9 = *plVar6;
    memset(local_458,0xaa,0x3f8);
    FUN_00c67c70(local_458,lVar9);
    FUN_00be4140(auStack_5f0,param_1[0x4c],auStack_3e0);
    FUN_00c527dc(auStack_3e0,auStack_5f0);
    FUN_00aff0f8(auStack_5f0);
    FUN_00c52b94(auStack_5f0,param_1,auStack_248);
    FUN_00c527dc(auStack_248,auStack_5f0);
    FUN_00aff0f8(auStack_5f0);
    uVar7 = param_2[4];
    local_458[0] = param_1[0x5a] == lVar9;
    if (uVar7 < (ulong)param_2[5]) {
      if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_00c6e8e4(uVar7,local_458);
      lVar9 = uVar7 + 0x3f8;
    }
    else {
      lVar9 = FUN_00c5a5c0(param_2 + 3,local_458);
    }
    param_2[4] = lVar9;
    FUN_00c6e96c(local_458);
  }
  *(int *)(param_2 + 6) = (int)param_1[0xa8];
  param_2[7] = param_1[0xa4];
  param_2[8] = param_1[0xa5];
  param_2[9] = param_1[0xa6];
  param_2[10] = param_1[0xa7];
  uVar5 = (**(code **)(*param_1 + 0x68))(param_1);
  plVar6 = param_1 + 0x65;
  *(undefined4 *)(param_2 + 0xb) = uVar5;
  if (param_2 + 0xc != plVar6) {
    bVar2 = *(byte *)((long)param_1 + 0x33f);
    if (*(char *)((long)param_2 + 0x77) < '\0') {
      uVar7 = param_1[0x66];
      plVar10 = (long *)param_1[0x65];
      if (-1 < (char)bVar2) {
        uVar7 = (ulong)bVar2;
        plVar10 = plVar6;
      }
      FUN_00547f08(param_2 + 0xc,plVar10,uVar7);
    }
    else if ((char)bVar2 < '\0') {
      FUN_00547fc0(param_2 + 0xc,param_1[0x65],param_1[0x66]);
    }
    else {
      lVar11 = param_1[0x66];
      lVar9 = *plVar6;
      param_2[0xe] = param_1[0x67];
      param_2[0xd] = lVar11;
      param_2[0xc] = lVar9;
    }
  }
  puVar8 = (undefined8 *)param_1[0x5c];
  puVar4 = (undefined8 *)param_1[0x5b];
  do {
    if (puVar4 == puVar8) {
      if ((*(byte *)(param_1 + 0x61) & 1) == 0) {
        bVar3 = false;
        goto LAB_00c575e4;
      }
      uVar5 = 4;
      goto LAB_00c57638;
    }
    uVar7 = FUN_00c65344(*puVar4);
    puVar4 = puVar4 + 1;
  } while ((uVar7 & 1) == 0);
  bVar3 = true;
LAB_00c575e4:
  uVar7 = (**(code **)(*param_1 + 8))(param_1);
  if (((uVar7 & 1) == 0) && ((*(byte *)((long)param_1 + 0x48a) & 1) != 0)) {
    uVar5 = 5;
  }
  else if (bVar3 || (*(byte *)(param_1 + 0x61) & 1) != 0) {
    if ((bVar3) && (uVar7 = (**(code **)(*param_1 + 8))(param_1), (uVar7 & 1) == 0)) {
      uVar5 = 1;
    }
    else {
      uVar5 = 2;
    }
  }
  else {
    uVar5 = 0;
  }
LAB_00c57638:
  *(undefined4 *)(param_2 + 0xf) = uVar5;
  return 1;
}


// ===== 00c57694  FUN_00c57694 =====

void FUN_00c57694(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 0x494);
  uVar1 = *(undefined8 *)(param_2 + 0x48c);
  uVar4 = *(undefined8 *)(param_2 + 0x4a4);
  uVar3 = *(undefined8 *)(param_2 + 0x49c);
  param_1[4] = *(undefined8 *)(param_2 + 0x4ac);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}


// ===== 00c576b0  FUN_00c576b0 =====

void FUN_00c576b0(long param_1)

{
  ulong __n;
  undefined8 uVar1;
  void *__dest;
  void *__src;
  ulong uVar2;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x228) + 0x10))();
  __src = *(void **)(param_1 + 0x2d8);
  __n = *(long *)(param_1 + 0x2e0) - (long)__src;
  if (__n == 0) {
    return;
  }
  if ((long)__n < 0) {
    FUN_00c595f0();
  }
  else {
    __dest = operator_new(__n);
    memcpy(__dest,__src,__n);
    uVar2 = 0;
    do {
      FUN_00c65828(*(undefined8 *)((long)__dest + uVar2),uVar1);
      uVar2 = uVar2 + 8;
    } while (__n != uVar2);
    if (__dest == (void *)0x0) {
      return;
    }
    if (__n - (__n << 0x3d) <= (((long)__dest + __n) - ((long)__dest + __n << 0x3d)) - 8) {
      operator_delete(__dest);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00c57794  FUN_00c57794 =====

void FUN_00c57794(long param_1)

{
  FUN_00c576b0(param_1 + -0x210);
  return;
}


// ===== 00c577a0  FUN_00c577a0 =====

/* WARNING: Removing unreachable block (ram,0x00c577fc) */

void FUN_00c577a0(long param_1)

{
  void *pvVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  void *pvVar7;
  long local_70 [2];
  code *local_60;
  code *pcStack_58;
  void *local_48 [3];
  undefined1 uStack_11;
  
  uVar3 = FUN_00417e08();
  if ((uVar3 & 1) == 0) {
    FUN_00c52fa8(local_48,param_1);
    FUN_00623bb0(&DAT_00223e94,"../../p2p/base/p2p_transport_channel.cc",0x3671,local_48,
                 ": Have a pingable connection for the first time; starting to ping.");
  }
  FUN_00841cf8(param_1 + 0x388);
  uVar4 = FUN_005d6490();
  uVar5 = FUN_00be0920(param_1 + 0x3a0);
  local_60 = FUN_004473ec;
  pcStack_58 = FUN_00c5b820;
  local_70[0] = param_1;
  uVar6 = FUN_00622394();
  FUN_00841954(local_48,uVar4,uVar5,local_70,0,uVar6,&uStack_11);
  pvVar1 = local_48[0];
  pvVar7 = *(void **)(param_1 + 0x388);
  local_48[0] = (void *)0x0;
  *(void **)(param_1 + 0x388) = pvVar1;
  if (pvVar7 != (void *)0x0) {
    iVar2 = FUN_00d0f7a0(0xffffffff,pvVar7);
    if (iVar2 == 1) {
      operator_delete(pvVar7);
    }
    pvVar1 = local_48[0];
    if ((local_48[0] != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,local_48[0]), iVar2 == 1))
    {
      operator_delete(pvVar1);
    }
  }
  (*local_60)(0,local_70,local_70);
  return;
}


// ===== 00c578ec  FUN_00c578ec =====

void FUN_00c578ec(long param_1)

{
  FUN_00c577a0(param_1 + -0x210);
  return;
}


// ===== 00c578f8  FUN_00c578f8 =====

void FUN_00c578f8(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x2e0);
  puVar1 = *(undefined8 **)(param_1 + 0x2d8);
  do {
    if (puVar1 == puVar3) {
      FUN_00c57958(param_1);
      break;
    }
    iVar2 = FUN_00c66be4(*puVar1);
    puVar1 = puVar1 + 1;
  } while (iVar2 == 3);
  FUN_00c57abc(param_1);
  return;
}


// ===== 00c57958  FUN_00c57958 =====

void FUN_00c57958(long param_1)

{
  ulong __n;
  bool bVar1;
  void *__dest;
  void *__src;
  long lVar2;
  ulong uVar3;
  
  __src = *(void **)(param_1 + 0x2d8);
  __n = *(long *)(param_1 + 0x2e0) - (long)__src;
  if (__n == 0) {
    return;
  }
  if ((long)__n < 0) {
    FUN_00c595f0();
  }
  else {
    __dest = operator_new(__n);
    memcpy(__dest,__src,__n);
    uVar3 = 0;
    bVar1 = false;
    do {
      lVar2 = *(long *)((long)__dest + uVar3);
      if (*(long *)(param_1 + 0x2d0) == lVar2) {
        bVar1 = true;
        *(undefined8 *)(param_1 + 0x2d0) = 0;
      }
      uVar3 = uVar3 + 8;
      FUN_007b5df8(lVar2 + 0xac0,param_1);
      FUN_00c51a60(param_1,lVar2);
      FUN_00c65358(lVar2);
    } while (__n != uVar3);
    if (bVar1) {
      uVar3 = FUN_00417e08();
      if ((uVar3 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../p2p/base/p2p_transport_channel.cc",0x3f21,
                     "Selected connection destroyed. Will choose a new one.");
      }
      FUN_00c5801c(param_1,0,9);
      (**(code **)(**(long **)(param_1 + 0x4e8) + 0x48))(*(long **)(param_1 + 0x4e8),9);
    }
    if (__dest == (void *)0x0) {
      return;
    }
    if (__n - (__n << 0x3d) <= (((long)__dest + __n) - ((long)__dest + __n << 0x3d)) - 8) {
      operator_delete(__dest);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00c57abc  FUN_00c57abc =====

void FUN_00c57abc(long *param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  long **local_50 [2];
  char cStack_39;
  long *local_38;
  
  lVar4 = param_1[0x5a];
  if (lVar4 == 0) goto LAB_00c57b5c;
  uVar5 = FUN_00c63548();
  if ((uVar5 & 1) == 0) {
    plVar7 = (long *)param_1[0x5a];
    iVar3 = FUN_00c66be4(plVar7);
    if ((iVar3 == 2) && ((char)param_1[0x7b] == '\x01')) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      uVar5 = FUN_00aff31c();
      if ((uVar5 & 1) != 0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
        uVar5 = FUN_00aff31c();
        if ((uVar5 & 1) == 0) {
          (**(code **)(*plVar7 + 0x18))(plVar7);
          lVar4 = FUN_00aff308();
          goto LAB_00c57b5c;
        }
        goto LAB_00c57ae8;
      }
    }
    lVar4 = 0;
  }
  else {
LAB_00c57ae8:
    lVar4 = 1;
  }
LAB_00c57b5c:
  FUN_00c585e8(param_1,(uint)lVar4 & 1);
  puVar6 = (undefined8 *)param_1[0x5b];
  puVar8 = (undefined8 *)param_1[0x5c];
  if (puVar6 == puVar8) {
    bVar2 = 0;
  }
  else {
    do {
      puVar10 = puVar6 + 1;
      bVar2 = FUN_00c66bf0(*puVar6);
      if ((bVar2 & 1) != 0) break;
      puVar6 = puVar10;
    } while (puVar10 != puVar8);
  }
  if (*(byte *)(param_1 + 0x91) != (bVar2 & 1)) {
    *(byte *)(param_1 + 0x91) = bVar2 & 1;
    FUN_00bc87f0(param_1,param_1);
  }
  iVar3 = FUN_00c52d08(param_1);
  puVar8 = (undefined8 *)param_1[0x5c];
  puVar6 = (undefined8 *)param_1[0x5b];
  do {
    if (puVar6 == puVar8) {
      if ((*(byte *)(param_1 + 0x61) & 1) != 0) {
        iVar9 = 4;
        goto LAB_00c57c64;
      }
      bVar1 = false;
      goto LAB_00c57c10;
    }
    uVar5 = FUN_00c65344(*puVar6);
    puVar6 = puVar6 + 1;
  } while ((uVar5 & 1) == 0);
  bVar1 = true;
LAB_00c57c10:
  uVar5 = (**(code **)(*param_1 + 8))(param_1);
  if (((uVar5 & 1) == 0) && ((*(byte *)((long)param_1 + 0x48a) & 1) != 0)) {
    iVar9 = 5;
  }
  else if (bVar1 || (*(byte *)(param_1 + 0x61) & 1) != 0) {
    if ((bVar1) && (uVar5 = (**(code **)(*param_1 + 8))(param_1), (uVar5 & 1) == 0)) {
      iVar9 = 1;
    }
    else {
      iVar9 = 2;
    }
  }
  else {
    iVar9 = 0;
  }
LAB_00c57c64:
  if (((int)param_1[0x73] != iVar3) && (uVar5 = FUN_00417e08(), (uVar5 & 1) == 0)) {
    FUN_00c52fa8(local_50,param_1);
    FUN_00623bb0(&DAT_00259883,"../../p2p/base/p2p_transport_channel.cc",0x3cf9,local_50,
                 ": Transport channel state changed from ",(int)param_1[0x73],&DAT_0019fec4,iVar3);
    if (cStack_39 < '\0') {
      operator_delete(local_50[0]);
    }
  }
  if ((*(int *)((long)param_1 + 0x39c) != iVar9) || ((int)param_1[0x73] != iVar3)) {
    local_50[0] = &local_38;
    *(int *)((long)param_1 + 0x39c) = iVar9;
    *(int *)(param_1 + 0x73) = iVar3;
    local_38 = param_1;
    FUN_007b6160(param_1 + 0x3e,local_50,FUN_00c59d50);
  }
  return;
}


// ===== 00c57d30  FUN_00c57d30 =====

void FUN_00c57d30(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0xd0);
  puVar2 = *(undefined8 **)(param_1 + 200);
  do {
    if (puVar2 == puVar1) {
      FUN_00c57958(param_1 + -0x210);
      break;
    }
    iVar3 = FUN_00c66be4(*puVar2);
    puVar2 = puVar2 + 1;
  } while (iVar3 == 3);
  FUN_00c57abc(param_1 + -0x210);
  return;
}


// ===== 00c57d8c  FUN_00c57d8c =====

undefined8 FUN_00c57d8c(long param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((*(int *)(param_1 + 0x37c) == 0) ||
     ((*(long *)(param_1 + 0x2d0) != 0 && (uVar1 = FUN_00c62c74(), (uVar1 & 1) != 0)))) {
    for (param_3 = param_3 << 3; param_3 != 0; param_3 = param_3 + -8) {
      FUN_00c65294(*param_2);
      param_2 = param_2 + 1;
    }
    uVar2 = 1;
  }
  else {
    uVar1 = FUN_004022fc();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../p2p/base/p2p_transport_channel.cc",0x38a2,
                   "Not allowed to prune connections");
    }
    uVar2 = 0;
  }
  return uVar2;
}


// ===== 00c57e18  FUN_00c57e18 =====

undefined8 FUN_00c57e18(long param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((*(int *)(param_1 + 0x16c) == 0) ||
     ((*(long *)(param_1 + 0xc0) != 0 && (uVar1 = FUN_00c62c74(), (uVar1 & 1) != 0)))) {
    for (param_3 = param_3 << 3; param_3 != 0; param_3 = param_3 + -8) {
      FUN_00c65294(*param_2);
      param_2 = param_2 + 1;
    }
    uVar2 = 1;
  }
  else {
    uVar1 = FUN_004022fc();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../p2p/base/p2p_transport_channel.cc",0x38a2,
                   "Not allowed to prune connections");
    }
    uVar2 = 0;
  }
  return uVar2;
}


// ===== 00c57ea4  FUN_00c57ea4 =====

void FUN_00c57ea4(byte *param_1,long param_2,long *param_3)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  code *pcVar9;
  
  bVar2 = FUN_00c572bc();
  lVar8 = *param_3;
  *param_1 = bVar2 & 1;
  lVar8 = (**(code **)(lVar8 + 0x10))(param_3);
  uVar6 = FUN_009881a4(param_3 + 8);
  if ((uVar6 & 1) == 0) {
    plVar7 = (long *)0x0;
  }
  else {
    plVar7 = (long *)param_3[9];
  }
  iVar3 = (**(code **)(*plVar7 + 0x10))();
  pcVar9 = *(code **)(*param_3 + 0x18);
  *(ulong *)(param_1 + 4) =
       (ulong)(*(uint *)(lVar8 + 0xf0) & 0xffff) << 0x20 | (ulong)*(ushort *)(lVar8 + 0x178) << 0x30
       | (ulong)*(uint *)(lVar8 + 0xf0);
  param_1[0xc] = iVar3 == 3;
  lVar8 = (*pcVar9)(param_3);
  (**(code **)(*param_3 + 0x18))(param_3);
  bVar2 = FUN_00aff31c();
  uVar4 = *(uint *)(lVar8 + 0xf0);
  if (uVar4 == 0) {
    uVar4 = FUN_00bcce98(*(undefined2 *)(lVar8 + 0x17a));
  }
  uVar1 = *(ushort *)(lVar8 + 0x178);
  lVar8 = *param_3;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x480);
  param_1[0x18] = bVar2 & 1;
  pcVar9 = *(code **)(lVar8 + 0x10);
  *(ulong *)(param_1 + 0x10) = (ulong)(uVar4 & 0xffff) << 0x20 | (ulong)uVar1 << 0x30 | (ulong)uVar4
  ;
  lVar8 = (*pcVar9)(param_3);
  FUN_007e8ea8(lVar8 + 0x50);
  iVar3 = FUN_007e9c6c();
  lVar8 = (**(code **)(*param_3 + 0x10))(param_3);
  uVar6 = *(ulong *)(lVar8 + 0x28);
  plVar7 = (long *)*(long *)(lVar8 + 0x20);
  if (-1 < (char)*(byte *)(lVar8 + 0x37)) {
    uVar6 = (ulong)*(byte *)(lVar8 + 0x37);
    plVar7 = (long *)(lVar8 + 0x20);
  }
  iVar5 = FUN_00b00a24(plVar7,uVar6);
  *(int *)(param_1 + 0x20) = iVar5 + iVar3;
  return;
}


// ===== 00c58014  FUN_00c58014 =====

void FUN_00c58014(void)

{
  FUN_00c5801c();
  return;
}


// ===== 00c5801c  FUN_00c5801c =====

/* WARNING: Removing unreachable block (ram,0x00c5821c) */
/* WARNING: Removing unreachable block (ram,0x00c581f0) */

void FUN_00c5801c(long *param_1,long param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  void *local_750;
  undefined1 auStack_748 [15];
  char cStack_739;
  undefined1 auStack_5b0 [408];
  byte local_418;
  char *local_410;
  ulong uStack_408;
  undefined1 *local_400;
  undefined **local_3f8;
  undefined4 local_3f0 [102];
  undefined1 auStack_258 [408];
  ulong local_c0;
  void *local_b8 [2];
  char cStack_a1;
  ulong local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_68 [24];
  undefined1 uStack_31;
  
  lVar8 = param_1[0x5a];
  param_1[0x5a] = param_2;
  if (param_2 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 0x38);
    uVar3 = FUN_00c66d04(param_2);
    FUN_00c5b998(param_1 + 0x97,3,uVar1,uVar3);
  }
  if ((char)param_1[0x96] == '\x01') {
    *(undefined1 *)(param_1 + 0x96) = 0;
  }
  if (lVar8 != 0) {
    FUN_00c6581c(lVar8,0);
  }
  if (param_1[0x5a] == 0) {
    uVar4 = FUN_00417e08();
    if ((uVar4 & 1) == 0) {
      FUN_00c52fa8(&local_410,param_1);
      FUN_00623bb0(&DAT_00223e94,"../../p2p/base/p2p_transport_channel.cc",0x3ac1,&local_410,
                   ": No selected connection");
      if ((long)local_400 < 0) {
        operator_delete(local_410);
      }
    }
    goto LAB_00c582f8;
  }
  *(int *)((long)param_1 + 0x484) = *(int *)((long)param_1 + 0x484) + 1;
  FUN_00c6581c(param_1[0x5a],1);
  if ((lVar8 == 0) || (uVar4 = FUN_00417e08(), (uVar4 & 1) != 0)) {
LAB_00c58128:
    uVar4 = FUN_00417e08();
  }
  else {
    local_410 = "../../p2p/base/p2p_transport_channel.cc";
    local_400 = &uStack_31;
    uStack_408 = 0x3a39;
    FUN_00c52fa8(&local_750,param_1);
    FUN_00c61eb8(local_68,lVar8);
    FUN_00623bb0(&DAT_0025987e,local_410,uStack_408 & 0xffffffff,&local_750,
                 ": Previous selected connection: ",local_68);
    if (-1 < cStack_739) goto LAB_00c58128;
    operator_delete(local_750);
    uVar4 = FUN_00417e08();
  }
  if ((uVar4 & 1) == 0) {
    local_410 = "../../p2p/base/p2p_transport_channel.cc";
    local_400 = &uStack_31;
    uStack_408 = 0x3a51;
    FUN_00c52fa8(&local_750,param_1);
    FUN_00c61eb8(local_68,param_1[0x5a]);
    FUN_00623bb0(&DAT_0025987e,local_410,uStack_408 & 0xffffffff,&local_750,
                 ": New selected connection: ",local_68);
    if (cStack_739 < '\0') {
      operator_delete(local_750);
    }
  }
  uVar4 = FUN_00c63548(param_1[0x5a]);
  if ((uVar4 & 1) != 0) goto LAB_00c58258;
  plVar9 = (long *)param_1[0x5a];
  iVar2 = FUN_00c66be4(plVar9);
  if ((iVar2 == 2) && ((char)param_1[0x7b] == '\x01')) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    uVar4 = FUN_00aff31c();
    if ((uVar4 & 1) != 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
      uVar4 = FUN_00aff31c();
      if ((uVar4 & 1) == 0) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
        uVar4 = FUN_00aff308();
        if ((uVar4 & 1) == 0) goto LAB_00c582d0;
      }
LAB_00c58258:
      FUN_00bc871c(param_1,param_1);
    }
  }
LAB_00c582d0:
  FUN_00c57ea4(&local_410,param_1,param_1[0x5a]);
  *(undefined1 *)(param_1 + 0x96) = 1;
  *(ulong *)((long)param_1 + 0x494) = uStack_408;
  *(undefined8 *)((long)param_1 + 0x48c) = local_410;
  *(undefined ***)((long)param_1 + 0x4a4) = local_3f8;
  *(undefined1 **)((long)param_1 + 0x49c) = local_400;
  *(undefined4 *)((long)param_1 + 0x4ac) = local_3f0[0];
LAB_00c582f8:
  if (((param_2 != 0) && (*(int *)((long)param_1 + 0x37c) == 0)) &&
     (((lVar8 != 0 && ((*(byte *)((long)param_1 + 0x574) & 1) != 0)) ||
      (*(char *)((long)param_1 + 0x575) == '\x01')))) {
    FUN_00c58740(param_1,param_2);
    (**(code **)(*(long *)param_1[0x9d] + 0x30))((long *)param_1[0x9d],param_2);
  }
  uStack_88 = *(undefined8 *)((long)param_1 + 0x494);
  local_90 = *(undefined8 *)((long)param_1 + 0x48c);
  uStack_78 = *(undefined8 *)((long)param_1 + 0x4a4);
  uStack_80 = *(undefined8 *)((long)param_1 + 0x49c);
  local_70 = *(undefined8 *)((long)param_1 + 0x4ac);
  FUN_00bc88d0(param_1,&local_90);
  lVar6 = param_1[0x5a];
  if ((lVar6 != 0) && (param_1[0x35] != 0)) {
    memset(&local_410,0xaa,0x378);
    puVar5 = (undefined8 *)(**(code **)*param_1)(param_1);
    if (*(char *)((long)puVar5 + 0x17) < '\0') {
      FUN_005478d8(&local_410,*puVar5,puVar5[1]);
    }
    else {
      local_400 = (undefined1 *)puVar5[2];
      uStack_408 = puVar5[1];
      local_410 = (char *)*puVar5;
    }
    (**(code **)(*param_1 + 0xd8))(&local_750,param_1);
    if ((local_418 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1074: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    local_3f8 = &PTR_FUN_00d499b0;
    FUN_00afef10(local_3f0,auStack_748);
    FUN_00afef10(auStack_258,auStack_5b0);
    uVar4 = FUN_00c66bd8(param_1[0x5a]);
    if ((long)uVar4 < 0) {
      local_c0 = -(-uVar4 / 1000) - (ulong)(500 < -uVar4 % 1000);
    }
    else {
      local_c0 = uVar4 / 1000;
      if (499 < uVar4 % 1000) {
        local_c0 = local_c0 + 1;
      }
    }
    FUN_00c6f76c(local_b8,param_3);
    if (lVar8 == 0) {
      local_a0 = 0;
    }
    else {
      lVar6 = (**(code **)(*(long *)param_1[0x45] + 0x10))();
      lVar8 = FUN_00c62ae0(lVar8);
      if (lVar8 <= param_1[0xa9]) {
        lVar8 = param_1[0xa9];
      }
      uVar4 = 0x7fffffffffffffff;
      if (((lVar6 == 0x7fffffffffffffff) ||
          (uVar7 = 0x8000000000000000, lVar8 == -0x8000000000000000)) ||
         ((lVar6 != -0x8000000000000000 &&
          ((lVar8 != 0x7fffffffffffffff && (uVar7 = lVar6 - lVar8, uVar4 = uVar7, -1 < (long)uVar7))
          )))) {
        local_a0 = uVar4 / 1000;
        if (499 < uVar4 % 1000) {
          local_a0 = local_a0 + 1;
        }
      }
      else {
        local_a0 = -(-uVar7 / 1000) - (ulong)(500 < -uVar7 % 1000);
      }
    }
    if (local_418 == 1) {
      FUN_00aff0f8(auStack_5b0);
      FUN_00aff0f8(auStack_748);
    }
    (*(code *)param_1[0x35])(param_1 + 0x32,&local_410);
    if (cStack_a1 < '\0') {
      operator_delete(local_b8[0]);
    }
    FUN_00aff0f8(auStack_258);
    FUN_00aff0f8(local_3f0);
    if ((long)local_400 < 0) {
      operator_delete(local_410);
    }
    lVar6 = param_1[0x5a];
  }
  *(int *)(param_1 + 0xa8) = (int)param_1[0xa8] + 1;
  (**(code **)(*(long *)param_1[0x9d] + 0x20))((long *)param_1[0x9d],lVar6);
  return;
}


// ===== 00c585dc  FUN_00c585dc =====

void FUN_00c585dc(long param_1)

{
  FUN_00c5801c(param_1 + -0x210);
  return;
}


// ===== 00c585e8  FUN_00c585e8 =====

void FUN_00c585e8(long param_1,byte param_2)

{
  ulong uVar1;
  void *local_48 [2];
  char cStack_31;
  
  if (*(byte *)(param_1 + 0x489) != (param_2 & 1)) {
    uVar1 = FUN_0044075c();
    if ((uVar1 & 1) == 0) {
      FUN_00c52fa8(local_48,param_1);
      FUN_00623bb0(&DAT_00259892,"../../p2p/base/p2p_transport_channel.cc",0x47d0,local_48,
                   ": Changed writable_ to ",param_2 & 1);
      if (cStack_31 < '\0') {
        operator_delete(local_48[0]);
      }
    }
    *(byte *)(param_1 + 0x489) = param_2 & 1;
    if ((param_2 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x48a) = 1;
      FUN_00bc871c(param_1,param_1);
    }
    FUN_00bc863c(param_1,param_1);
  }
  return;
}


// ===== 00c586ac  FUN_00c586ac =====

undefined8 FUN_00c586ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x390);
}


// ===== 00c586b8  FUN_00c586b8 =====

undefined8 FUN_00c586b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x180);
}


// ===== 00c586c4  FUN_00c586c4 =====

void FUN_00c586c4(long param_1,undefined8 param_2)

{
  FUN_00c58740();
                    /* WARNING: Could not recover jumptable at 0x00c586fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x4e8) + 0x30))(*(long **)(param_1 + 0x4e8),param_2);
  return;
}


// ===== 00c58700  FUN_00c58700 =====

void FUN_00c58700(long param_1,undefined8 param_2)

{
  FUN_00c58740(param_1 + -0x210);
                    /* WARNING: Could not recover jumptable at 0x00c5873c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x2d8) + 0x30))(*(long **)(param_1 + 0x2d8),param_2);
  return;
}


// ===== 00c58740  FUN_00c58740 =====

void FUN_00c58740(long param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0x37c) == 0) {
    if (((*(char *)(param_1 + 0x358) != '\x01') ||
        (*(long *)(param_1 + 0x360) == *(long *)(param_1 + 0x368))) ||
       (*(char *)(*(long *)(param_1 + 0x368) + -8) != '\x01')) {
      uVar1 = (**(code **)(**(long **)(param_1 + 0x4e8) + 0x40))
                        (*(long **)(param_1 + 0x4e8),param_2,*(undefined4 *)(param_1 + 0x400),
                         *(undefined4 *)(param_1 + 0x378));
      uVar4 = 0;
      goto LAB_00c587d4;
    }
    if (param_2 == *(long *)(param_1 + 0x2d0)) {
      uVar4 = *(undefined4 *)(param_1 + 0x484);
      uVar1 = 0;
      goto LAB_00c587d4;
    }
  }
  uVar4 = 0;
  uVar1 = 0;
LAB_00c587d4:
  FUN_00c62c5c(param_2,uVar4);
  FUN_00c62c50(param_2,uVar1 & 1);
  uVar2 = (**(code **)(**(long **)(param_1 + 0x228) + 0x10))();
  *(undefined8 *)(param_1 + 0x390) = uVar2;
  uVar3 = FUN_00c708b0(param_1 + 0x590);
  FUN_00c64438(param_2,uVar2,uVar3);
  return;
}


// ===== 00c58828  FUN_00c58828 =====

void FUN_00c58828(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  
  if (*(char *)(param_1 + 0x57c) == '\x01') {
    uVar2 = FUN_00c66c08(param_2);
    lVar4 = (**(code **)(*param_2 + 0x10))(param_2);
    uVar1 = *(uint *)(lVar4 + 0xf8);
    if (*(long *)(param_1 + 0x288) == *(long *)(param_1 + 0x290)) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = *(long **)(*(long *)(param_1 + 0x290) + -8);
    }
    uVar3 = (**(code **)(*plVar5 + 0x80))();
    if ((uVar2 & 1) == 0 && uVar3 <= uVar1) {
      if (*(long *)(param_1 + 0x288) == *(long *)(param_1 + 0x290)) {
        plVar5 = (long *)0x0;
      }
      else {
        plVar5 = *(long **)(*(long *)(param_1 + 0x290) + -8);
      }
      uVar6 = (**(code **)(*plVar5 + 0x28))();
      if ((uVar6 & 1) != 0) {
        plVar8 = *(long **)(param_1 + 0x290);
        for (plVar5 = *(long **)(param_1 + 0x288); plVar5 != plVar8; plVar5 = plVar5 + 1) {
          uVar6 = (**(code **)(*(long *)*plVar5 + 0x40))();
          if ((uVar6 & 1) == 0) {
            if (*(int *)(param_1 + 0x3c0) == 1) {
              if (*(long *)(param_1 + 0x288) == *(long *)(param_1 + 0x290)) {
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__vector/vector.h:439: libc++ Hardening assertion !empty() failed: back() called on an empty vector\n"
                          );
              }
              plVar7 = (long *)*plVar5;
              lVar4 = 0x30;
              if (plVar7 != *(long **)(*(long *)(param_1 + 0x290) + -8)) {
                lVar4 = 0x20;
              }
            }
            else {
              plVar7 = (long *)*plVar5;
              lVar4 = 0x20;
            }
            (**(code **)(*plVar7 + lVar4))();
          }
        }
      }
    }
  }
  (**(code **)(**(long **)(param_1 + 0x4e8) + 0x48))(*(long **)(param_1 + 0x4e8),8);
                    /* WARNING: Could not recover jumptable at 0x00c58990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x4e8) + 0x38))(*(long **)(param_1 + 0x4e8),param_2);
  return;
}


// ===== 00c589a8  FUN_00c589a8 =====

void FUN_00c589a8(long param_1,long param_2)

{
  ulong uVar1;
  void *local_70 [2];
  char cStack_59;
  char *local_58;
  ulong local_50;
  undefined1 *local_48;
  void **local_40;
  char **ppcStack_38;
  undefined1 uStack_11;
  
  FUN_00c51a60();
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    local_58 = "../../p2p/base/p2p_transport_channel.cc";
    local_50 = 0x43a9;
    local_48 = &uStack_11;
    FUN_00c52fa8(local_70,param_1);
    ppcStack_38 = &local_58;
    local_40 = local_70;
    FUN_00623bb0(&DAT_0025988a,local_58,local_50 & 0xffffffff,local_70,": Removed connection ",
                 param_2,&DAT_001a2df6,*(long *)(param_1 + 0x2e0) - *(long *)(param_1 + 0x2d8) >> 3,
                 " remaining)");
    if (cStack_59 < '\0') {
      operator_delete(local_70[0]);
    }
  }
  if (*(long *)(param_1 + 0x2d0) == param_2) {
    uVar1 = FUN_00417e08();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../p2p/base/p2p_transport_channel.cc",0x3f21,
                   "Selected connection destroyed. Will choose a new one.");
    }
    FUN_00c5801c(param_1,0,9);
    (**(code **)(**(long **)(param_1 + 0x4e8) + 0x48))(*(long **)(param_1 + 0x4e8),9);
  }
  else {
    FUN_00c57abc(param_1);
  }
  return;
}


// ===== 00c58ae0  FUN_00c58ae0 =====

void FUN_00c58ae0(long param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  
  plVar2 = *(long **)(param_1 + 0x2a8);
  plVar6 = *(long **)(param_1 + 0x2a0);
  if (plVar6 == plVar2) {
LAB_00c58ba8:
    if ((plVar6 != plVar2) && (plVar3 = plVar6 + 1, plVar7 = plVar6, plVar3 != plVar2)) {
      do {
        plVar6 = plVar7;
        if (*plVar3 != param_2) {
          plVar6 = plVar7 + 1;
          *plVar7 = *plVar3;
        }
        plVar3 = plVar3 + 1;
        plVar7 = plVar6;
      } while (plVar3 != plVar2);
      plVar2 = *(long **)(param_1 + 0x2a8);
    }
    if (plVar2 < plVar6) goto LAB_00c58e4c;
    if (plVar6 != plVar2) {
      memmove(plVar6,plVar2,0);
      plVar2 = *(long **)(param_1 + 0x2a8);
      uVar5 = (ulong)((long)plVar2 + (-8 - ((long)plVar2 << 0x3d))) >> 3;
      uVar4 = (ulong)(((long)plVar6 - (long)plVar2 << 0x3d) - ((long)plVar6 - (long)plVar2)) >> 3;
      if (uVar5 <= uVar4) {
        uVar4 = uVar5;
      }
      if ((1 < uVar4) && ((((int)plVar6 - (int)plVar2 | -(int)plVar2) & 7U) == 0)) {
        uVar4 = uVar4 & 0x1ffffffffffffffe;
        plVar2 = plVar2 + -uVar4;
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      do {
        if (plVar2 == plVar6) {
          *(long **)(param_1 + 0x2a8) = plVar6;
          goto LAB_00c58c6c;
        }
        plVar2 = plVar2 + -1;
      } while (plVar2 != (long *)0x0);
      goto LAB_00c58dd0;
    }
  }
  else {
    uVar4 = (long)plVar2 + (-8 - (long)plVar6);
    uVar1 = (uint)uVar4;
    if ((~uVar1 & 0x18) != 0) {
      uVar5 = (ulong)((uVar1 >> 3) + 1) & 3;
      do {
        if (*plVar6 == param_2) goto LAB_00c58ba8;
        uVar5 = uVar5 - 1;
        plVar6 = plVar6 + 1;
      } while (uVar5 != 0);
    }
    if (0x17 < uVar4) {
      plVar6 = plVar6 + 2;
      do {
        if (plVar6[-2] == param_2) {
          plVar6 = plVar6 + -2;
          goto LAB_00c58ba8;
        }
        if (plVar6[-1] == param_2) {
          plVar6 = plVar6 + -1;
          goto LAB_00c58ba8;
        }
        if (*plVar6 == param_2) goto LAB_00c58ba8;
        if (plVar6[1] == param_2) {
          plVar6 = plVar6 + 1;
          goto LAB_00c58ba8;
        }
        plVar3 = plVar6 + 2;
        plVar6 = plVar6 + 4;
      } while (plVar3 != plVar2);
    }
  }
LAB_00c58c6c:
  plVar2 = *(long **)(param_1 + 0x2c0);
  plVar6 = *(long **)(param_1 + 0x2b8);
  if (plVar6 == plVar2) {
LAB_00c58d18:
    if ((plVar6 != plVar2) && (plVar3 = plVar6 + 1, plVar7 = plVar6, plVar3 != plVar2)) {
      do {
        plVar6 = plVar7;
        if (*plVar3 != param_2) {
          plVar6 = plVar7 + 1;
          *plVar7 = *plVar3;
        }
        plVar3 = plVar3 + 1;
        plVar7 = plVar6;
      } while (plVar3 != plVar2);
      plVar2 = *(long **)(param_1 + 0x2c0);
    }
    if (plVar2 < plVar6) {
LAB_00c58e4c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:1170: libc++ Hardening assertion __first <= __last failed: vector::erase(first, last) called with invalid range\n"
                );
    }
    if (plVar6 != plVar2) {
      memmove(plVar6,plVar2,0);
      plVar2 = *(long **)(param_1 + 0x2c0);
      uVar5 = (ulong)((long)plVar2 + (-8 - ((long)plVar2 << 0x3d))) >> 3;
      uVar4 = (ulong)(((long)plVar6 - (long)plVar2 << 0x3d) - ((long)plVar6 - (long)plVar2)) >> 3;
      if (uVar5 <= uVar4) {
        uVar4 = uVar5;
      }
      if ((1 < uVar4) && ((((int)plVar6 - (int)plVar2 | -(int)plVar2) & 7U) == 0)) {
        uVar4 = uVar4 & 0x1ffffffffffffffe;
        plVar2 = plVar2 + -uVar4;
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      do {
        if (plVar2 == plVar6) {
          *(long **)(param_1 + 0x2c0) = plVar6;
          goto LAB_00c58de8;
        }
        plVar2 = plVar2 + -1;
      } while (plVar2 != (long *)0x0);
LAB_00c58dd0:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
  }
  else {
    uVar4 = (long)plVar2 + (-8 - (long)plVar6);
    uVar1 = (uint)uVar4;
    if ((~uVar1 & 0x18) != 0) {
      uVar5 = (ulong)((uVar1 >> 3) + 1) & 3;
      do {
        if (*plVar6 == param_2) goto LAB_00c58d18;
        uVar5 = uVar5 - 1;
        plVar6 = plVar6 + 1;
      } while (uVar5 != 0);
    }
    if (0x17 < uVar4) {
      plVar6 = plVar6 + 2;
      do {
        if (plVar6[-2] == param_2) {
          plVar6 = plVar6 + -2;
          goto LAB_00c58d18;
        }
        if (plVar6[-1] == param_2) {
          plVar6 = plVar6 + -1;
          goto LAB_00c58d18;
        }
        if (*plVar6 == param_2) goto LAB_00c58d18;
        if (plVar6[1] == param_2) {
          plVar6 = plVar6 + 1;
          goto LAB_00c58d18;
        }
        plVar3 = plVar6 + 2;
        plVar6 = plVar6 + 4;
      } while (plVar3 != plVar2);
    }
  }
LAB_00c58de8:
  uVar4 = FUN_00417e08();
  if ((uVar4 & 1) == 0) {
    FUN_00623bb0(&DAT_001f6d4b,"../../p2p/base/p2p_transport_channel.cc",0x44d1,
                 "Removed port because it is destroyed: ",
                 *(long *)(param_1 + 0x2a8) - *(long *)(param_1 + 0x2a0) >> 3," remaining");
    return;
  }
  return;
}


// ===== 00c58e60  FUN_00c58e60 =====

void FUN_00c58e60(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  void *local_98 [2];
  char cStack_81;
  undefined1 uStack_79;
  char *local_78;
  ulong local_70;
  undefined1 *local_68;
  
  puVar4 = (undefined8 *)*param_3;
  puVar1 = (undefined8 *)param_3[1];
  if (puVar4 != puVar1) {
    do {
      plVar3 = (long *)*puVar4;
      uVar2 = FUN_00c58f7c(param_1,plVar3);
      if (((uVar2 & 1) != 0) && (uVar2 = FUN_00417e08(), (uVar2 & 1) == 0)) {
        local_78 = "../../p2p/base/p2p_transport_channel.cc";
        local_70 = 0x4521;
        local_68 = &uStack_79;
        (**(code **)(*plVar3 + 0x110))(local_98,plVar3);
        FUN_00623bb0(&DAT_001f64a8,local_78,local_70 & 0xffffffff,"Removed port: ",local_98,
                     &DAT_001d5e07,*(long *)(param_1 + 0x2a8) - *(long *)(param_1 + 0x2a0) >> 3,
                     " remaining");
        if (cStack_81 < '\0') {
          operator_delete(local_98[0]);
        }
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != puVar1);
  }
  return;
}


// ===== 00c58f7c  FUN_00c58f7c =====

undefined8 FUN_00c58f7c(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long local_18;
  
  plVar2 = *(long **)(param_1 + 0x2a0);
  plVar6 = *(long **)(param_1 + 0x2a8);
  if (plVar2 == plVar6) {
joined_r0x00c5903c:
    if (plVar2 != plVar6) {
      local_18 = param_2;
      memmove(plVar2,plVar2 + 1,(long)plVar6 - (long)(plVar2 + 1));
      plVar2 = *(long **)(param_1 + 0x2a8);
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
      while (plVar2 != plVar6 + -1) {
        plVar2 = plVar2 + -1;
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      plVar2 = *(long **)(param_1 + 0x2c0);
      *(long **)(param_1 + 0x2a8) = plVar6 + -1;
      if (plVar2 < *(long **)(param_1 + 0x2c8)) {
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        plVar6 = plVar2 + 1;
        *plVar2 = param_2;
      }
      else {
        plVar6 = (long *)FUN_00c59c28(param_1 + 0x2b8,&local_18);
      }
      *(long **)(param_1 + 0x2c0) = plVar6;
      return 1;
    }
  }
  else {
    uVar4 = (long)plVar6 + (-8 - (long)plVar2);
    uVar3 = (uint)uVar4;
    if ((~uVar3 & 0x18) != 0) {
      uVar5 = (ulong)((uVar3 >> 3) + 1) & 3;
      do {
        if (*plVar2 == param_2) goto joined_r0x00c5903c;
        uVar5 = uVar5 - 1;
        plVar2 = plVar2 + 1;
      } while (uVar5 != 0);
    }
    if (0x17 < uVar4) {
      plVar2 = plVar2 + 2;
      do {
        if (plVar2[-2] == param_2) {
          plVar2 = plVar2 + -2;
          goto joined_r0x00c5903c;
        }
        if (plVar2[-1] == param_2) {
          plVar2 = plVar2 + -1;
          goto joined_r0x00c5903c;
        }
        if (*plVar2 == param_2) goto joined_r0x00c5903c;
        if (plVar2[1] == param_2) {
          plVar2 = plVar2 + 1;
          goto joined_r0x00c5903c;
        }
        plVar1 = plVar2 + 2;
        plVar2 = plVar2 + 4;
      } while (plVar1 != plVar6);
    }
  }
  return 0;
}


// ===== 00c59144  FUN_00c59144 =====

long * FUN_00c59144(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long *plVar5;
  long local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  long *local_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *local_48;
  long *local_38;
  long lStack_30;
  undefined1 **local_28;
  
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00c700c8(&local_90,param_1 + 0x5d8);
  if ((int)local_90 == 0) {
    if (((ulong)local_48 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    uVar2 = FUN_00417e08();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../p2p/base/p2p_transport_channel.cc",0x49b1,
                   "Applied GOOG_DELTA");
    }
    local_38 = &local_98;
    local_28 = &local_60;
    local_98 = param_1;
    lStack_30 = param_1 + 0x5d8;
    FUN_007b6160(param_1 + 0xf0,&local_38,FUN_00c5b898);
    plVar5 = local_68;
    local_68 = (long *)0x0;
  }
  else {
    uVar2 = FUN_004249b0();
    if ((uVar2 & 1) == 0) {
      uVar3 = FUN_005ecd5c(&local_90);
      FUN_00623bb0(&DAT_001f4ed3,"../../p2p/base/p2p_transport_channel.cc",0x49db,
                   "Failed to apply GOOG_DELTA: ",uVar3);
    }
    plVar5 = (long *)0x0;
  }
  if ((char)local_48 == '\x01') {
    if (local_60 != (undefined1 *)0x0) {
      uVar2 = (ulong)(((long)local_60 - (long)puStack_58 << 0x3f) -
                     ((long)local_60 - (long)puStack_58)) >> 1;
      if ((ulong)(puStack_58 + ((long)puStack_58 << 0x3f) + -2) >> 1 <= uVar2) {
        uVar2 = (ulong)(puStack_58 + ((long)puStack_58 << 0x3f) + -2) >> 1;
      }
      puVar4 = puStack_58;
      if ((1 < uVar2) && ((((int)local_60 - (uint)puStack_58 | (uint)puStack_58) & 1) == 0)) {
        uVar2 = uVar2 & 0x7ffffffffffffffe;
        puVar4 = puStack_58 + uVar2 * -2;
        do {
          uVar2 = uVar2 - 2;
        } while (uVar2 != 0);
      }
      while (puVar4 != local_60) {
        puVar4 = puVar4 + -2;
        if (puVar4 == (undefined1 *)0x0) {
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
    plVar1 = local_68;
    local_68 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
  }
  if ((long)puStack_78 < 0) {
    operator_delete(puStack_88);
  }
  return plVar5;
}


// ===== 00c59314  FUN_00c59314 =====

void FUN_00c59314(long param_1,int *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long local_38;
  long *plStack_30;
  long local_28;
  
  if (*param_2 == 0) {
    uVar1 = FUN_004249b0();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../p2p/base/p2p_transport_channel.cc",0x4a23,
                   "Applied GOOG_DELTA_ACK");
    }
    if ((*(byte *)(param_2 + 0xc) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    FUN_00c70dfc(param_1 + 0x590,*(undefined8 *)(param_2 + 10));
    plStack_30 = &local_38;
    local_38 = param_1;
    local_28 = param_1 + 0x590;
    FUN_007b6160(param_1 + 0x110,&plStack_30,FUN_00c5b8c8);
  }
  else {
    FUN_00c708a0(param_1 + 0x590);
    uVar1 = FUN_004249b0();
    if ((uVar1 & 1) == 0) {
      uVar2 = FUN_005ecd5c(param_2);
      FUN_00623bb0(&DAT_001f4ed3,"../../p2p/base/p2p_transport_channel.cc",0x4a53,
                   "Failed GOOG_DELTA_ACK: ",uVar2);
      return;
    }
  }
  return;
}


// ===== 00c59410  FUN_00c59410 =====

void FUN_00c59410(long param_1,long param_2)

{
  (**(code **)(param_1 + 0x620))(0,param_1 + 0x610,param_1 + 0x610);
  *(undefined8 *)(param_1 + 0x628) = 0;
  *(code **)(param_1 + 0x620) = FUN_00433984;
  (**(code **)(param_2 + 0x10))(1,param_2,param_1 + 0x610);
  *(undefined8 *)(param_1 + 0x620) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x628) = *(undefined8 *)(param_2 + 0x18);
  *(code **)(param_2 + 0x10) = FUN_00433984;
  *(undefined8 *)(param_2 + 0x18) = 0;
  (**(code **)(param_1 + 0x640))(0,param_1 + 0x630,param_1 + 0x630);
  *(code **)(param_1 + 0x640) = FUN_00433984;
  *(undefined8 *)(param_1 + 0x648) = 0;
  (**(code **)(param_2 + 0x30))(1,param_2 + 0x20,param_1 + 0x630);
  *(undefined8 *)(param_1 + 0x640) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x648) = *(undefined8 *)(param_2 + 0x38);
  *(code **)(param_2 + 0x30) = FUN_00433984;
  *(undefined8 *)(param_2 + 0x38) = 0;
  return;
}


// ===== 00c594d0  FUN_00c594d0 =====

void FUN_00c594d0(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  (**(code **)(param_1 + 0x620))(0,param_1 + 0x610,param_1 + 0x610);
  *(code **)(param_1 + 0x620) = FUN_00433984;
  *(undefined8 *)(param_1 + 0x628) = 0;
  (**(code **)(param_1 + 0x640))(0,param_1 + 0x630,param_1 + 0x630);
  plVar2 = *(long **)(param_1 + 0x2d8);
  plVar3 = *(long **)(param_1 + 0x2e0);
  *(code **)(param_1 + 0x640) = FUN_00433984;
  *(undefined8 *)(param_1 + 0x648) = 0;
  for (; plVar2 != plVar3; plVar2 = plVar2 + 1) {
    lVar1 = *plVar2;
    (**(code **)(lVar1 + 0xa70))(0,lVar1 + 0xa60,lVar1 + 0xa60);
    *(code **)(lVar1 + 0xa70) = FUN_00433984;
    *(undefined8 *)(lVar1 + 0xa78) = 0;
    (**(code **)(lVar1 + 0xa90))(0,lVar1 + 0xa80,lVar1 + 0xa80);
    *(code **)(lVar1 + 0xa90) = FUN_00433984;
    *(undefined8 *)(lVar1 + 0xa98) = 0;
  }
  return;
}


// ===== 00c59590  FUN_00c59590 =====

undefined1  [16] FUN_00c59590(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 1;
  auVar1._0_8_ = param_1 + 0x590;
  return auVar1;
}


// ===== 00c595a0  FUN_00c595a0 =====

void FUN_00c595a0(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c595ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}


// ===== 00c595b0  FUN_00c595b0 =====

void FUN_00c595b0(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  (**(code **)((long)pvVar1 + 0x10))(0,pvVar1,pvVar1);
  operator_delete(pvVar1);
  return;
}


// ===== 00c595f0  FUN_00c595f0 =====

void FUN_00c595f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00c59608  FUN_00c59608 =====

void FUN_00c59608(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00c59608(param_1,*param_2);
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


// ===== 00c5967c  FUN_00c5967c =====

void FUN_00c5967c(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00c5967c(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar1 = (long *)param_2[5];
      puVar2 = (undefined8 *)param_2[1];
      param_2[5] = 0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      operator_delete(param_2);
      param_2 = puVar2;
    } while (puVar2 != (undefined8 *)0x0);
  }
  return;
}


// ===== 00c59710  FUN_00c59710 =====

void FUN_00c59710(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c5971c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}


// ===== 00c59720  FUN_00c59720 =====

void FUN_00c59720(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  (**(code **)((long)pvVar1 + 0x10))(0,pvVar1,pvVar1);
  operator_delete(pvVar1);
  return;
}


// ===== 00c59760  FUN_00c59760 =====

void FUN_00c59760(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c5976c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}


// ===== 00c59770  FUN_00c59770 =====

void FUN_00c59770(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  (**(code **)((long)pvVar1 + 0x10))(0,pvVar1,pvVar1);
  operator_delete(pvVar1);
  return;
}


// ===== 00c597b0  FUN_00c597b0 =====

void FUN_00c597b0(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c597bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}


// ===== 00c597c0  FUN_00c597c0 =====

void FUN_00c597c0(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  (**(code **)((long)pvVar1 + 0x10))(0,pvVar1,pvVar1);
  operator_delete(pvVar1);
  return;
}


// ===== 00c59800  FUN_00c59800 =====

void FUN_00c59800(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c5980c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}


// ===== 00c59810  FUN_00c59810 =====

void FUN_00c59810(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  (**(code **)((long)pvVar1 + 0x10))(0,pvVar1,pvVar1);
  operator_delete(pvVar1);
  return;
}


// ===== 00c59850  FUN_00c59850 =====

void FUN_00c59850(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c5985c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}


// ===== 00c59860  FUN_00c59860 =====

void FUN_00c59860(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  (**(code **)((long)pvVar1 + 0x10))(0,pvVar1,pvVar1);
  operator_delete(pvVar1);
  return;
}


// ===== 00c598a0  FUN_00c598a0 =====

undefined8 * FUN_00c598a0(long *param_1,undefined8 *param_2)

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
    FUN_00c595f0();
LAB_00c59990:
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
    if (uVar5 >> 0x3d != 0) goto LAB_00c59990;
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


// ===== 00c59994  FUN_00c59994 =====

bool FUN_00c59994(undefined8 *param_1,undefined8 *param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  
  bVar5 = *(byte *)((long)param_1 + 0x17);
  bVar6 = *(byte *)((long)param_2 + 0x17);
  sVar1 = param_1[1];
  if (-1 < (char)bVar5) {
    sVar1 = (ulong)bVar5;
  }
  sVar2 = param_2[1];
  if (-1 < (char)bVar6) {
    sVar2 = (ulong)bVar6;
  }
  if (sVar1 == sVar2) {
    puVar3 = (undefined8 *)*param_1;
    if (-1 < (char)bVar5) {
      puVar3 = param_1;
    }
    puVar4 = (undefined8 *)*param_2;
    if (-1 < (char)bVar6) {
      puVar4 = param_2;
    }
    iVar7 = memcmp(puVar3,puVar4,sVar1);
    if (iVar7 == 0) {
      bVar5 = *(byte *)((long)param_1 + 0x2f);
      bVar6 = *(byte *)((long)param_2 + 0x2f);
      sVar1 = param_1[4];
      if (-1 < (char)bVar5) {
        sVar1 = (ulong)bVar5;
      }
      sVar2 = param_2[4];
      if (-1 < (char)bVar6) {
        sVar2 = (ulong)bVar6;
      }
      if (sVar1 == sVar2) {
        puVar3 = (undefined8 *)param_1[3];
        if (-1 < (char)bVar5) {
          puVar3 = param_1 + 3;
        }
        puVar4 = (undefined8 *)param_2[3];
        if (-1 < (char)bVar6) {
          puVar4 = param_2 + 3;
        }
        iVar7 = memcmp(puVar3,puVar4,sVar1);
        if (iVar7 == 0) {
          return *(char *)(param_1 + 6) == *(char *)(param_2 + 6);
        }
      }
    }
    return false;
  }
  return false;
}


// ===== 00c59a88  FUN_00c59a88 =====

long FUN_00c59a88(long *param_1,undefined8 *param_2)

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
  uVar3 = (lVar6 >> 3) * 0x6db6db6db6db6db7 + 1;
  if (0x492492492492492 < uVar3) {
    FUN_00be54a4();
LAB_00c59c08:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  local_50 = (void *)0x0;
  lVar4 = param_1[2] - *param_1 >> 3;
  uVar5 = lVar4 * -0x2492492492492492;
  if (uVar5 < uVar3 || uVar5 - uVar3 == 0) {
    uVar5 = uVar3;
  }
  if (0x249249249249248 < (ulong)(lVar4 * 0x6db6db6db6db6db7)) {
    uVar5 = 0x492492492492492;
  }
  if (uVar5 != 0) {
    if (0x492492492492492 < uVar5) goto LAB_00c59c08;
    local_50 = operator_new(uVar5 * 0x38);
  }
  puVar1 = (undefined8 *)((long)local_50 + lVar6);
  local_38 = (void *)((long)local_50 + uVar5 * 0x38);
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
  local_40 = puVar1 + 7;
  *(undefined1 *)(puVar1 + 6) = *(undefined1 *)(param_2 + 6);
  FUN_00be5288(param_1,&local_50);
  lVar6 = param_1[1];
  FUN_00be53d0(&local_50);
  return lVar6;
}


// ===== 00c59c0c  FUN_00c59c0c =====

void FUN_00c59c0c(undefined8 *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00c59c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x20))(param_2,*(undefined8 *)*param_1);
  return;
}


// ===== 00c59c28  FUN_00c59c28 =====

undefined8 * FUN_00c59c28(long *param_1,undefined8 *param_2)

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
    FUN_00c59d1c();
LAB_00c59d18:
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
    if (uVar5 >> 0x3d != 0) goto LAB_00c59d18;
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


// ===== 00c59d1c  FUN_00c59d1c =====

void FUN_00c59d1c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00c59d34  FUN_00c59d34 =====

void FUN_00c59d34(undefined8 *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00c59d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x20))(param_2,*(undefined8 *)*param_1,param_1[1]);
  return;
}


// ===== 00c59d50  FUN_00c59d50 =====

void FUN_00c59d50(undefined8 *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00c59d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x20))(param_2,*(undefined8 *)*param_1);
  return;
}


// ===== 00c59d6c  FUN_00c59d6c =====

long FUN_00c59d6c(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  void *local_60;
  long local_58;
  long local_50;
  void *local_48;
  
  lVar8 = param_1[1] - *param_1;
  uVar4 = (lVar8 >> 5) * 0x4ec4ec4ec4ec4ec5 + 1;
  if (uVar4 < 0x9d89d89d89d89e) {
    local_60 = (void *)0x0;
    lVar5 = param_1[2] - *param_1 >> 5;
    uVar6 = lVar5 * -0x6276276276276276;
    if (uVar6 < uVar4 || uVar6 - uVar4 == 0) {
      uVar6 = uVar4;
    }
    if (0x4ec4ec4ec4ec4d < (ulong)(lVar5 * 0x4ec4ec4ec4ec4ec5)) {
      uVar6 = 0x9d89d89d89d89d;
    }
    if (uVar6 != 0) {
      if (0x9d89d89d89d89d < uVar6) goto LAB_00c59f20;
      local_60 = operator_new(uVar6 * 0x1a0);
    }
    lVar8 = (long)local_60 + lVar8;
    local_48 = (void *)((long)local_60 + uVar6 * 0x1a0);
    local_58 = lVar8;
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    FUN_00afef10(lVar8,param_2);
    uVar3 = *param_3;
    local_50 = lVar8 + 0x1a0;
    *param_3 = 0;
    *(undefined8 *)(lVar8 + 0x198) = uVar3;
    FUN_00c59f24(param_1,&local_60);
    lVar5 = local_58;
    lVar7 = param_1[1];
    lVar8 = local_50;
    while( true ) {
      if (lVar5 == lVar8) {
        if (local_60 != (void *)0x0) {
          local_50 = lVar8;
          operator_delete(local_60);
        }
        return lVar7;
      }
      lVar1 = lVar8 + -0x1a0;
      if (lVar1 == 0) break;
      plVar2 = *(long **)(lVar8 + -8);
      *(undefined8 *)(lVar8 + -8) = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      FUN_00aff0f8(lVar1);
      lVar8 = lVar1;
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  FUN_00c5a038();
LAB_00c59f20:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 00c59f24  FUN_00c59f24 =====

void FUN_00c59f24(long *param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar4 = *param_1;
  lVar7 = param_1[1];
  lVar5 = param_2[1] + (lVar4 - lVar7);
  lVar3 = lVar4;
  lVar6 = lVar5;
  if (lVar7 != lVar4) {
    do {
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_00afef10(lVar6,lVar3);
      uVar2 = *(undefined8 *)(lVar3 + 0x198);
      *(undefined8 *)(lVar3 + 0x198) = 0;
      lVar3 = lVar3 + 0x1a0;
      *(undefined8 *)(lVar6 + 0x198) = uVar2;
      lVar6 = lVar6 + 0x1a0;
    } while (lVar3 != lVar7);
    do {
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar1 = *(long **)(lVar4 + 0x198);
      *(undefined8 *)(lVar4 + 0x198) = 0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      FUN_00aff0f8(lVar4);
      lVar4 = lVar4 + 0x1a0;
    } while (lVar4 != lVar7);
  }
  param_2[1] = lVar5;
  lVar3 = *param_1;
  lVar5 = param_1[2];
  param_1[1] = lVar3;
  lVar7 = param_2[1];
  lVar4 = param_2[3];
  param_1[1] = param_2[2];
  *param_1 = lVar7;
  param_1[2] = lVar4;
  param_2[2] = lVar3;
  param_2[3] = lVar5;
  *param_2 = lVar3;
  param_2[1] = lVar3;
  return;
}


// ===== 00c5a038  FUN_00c5a038 =====

void FUN_00c5a038(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00c5a050  FUN_00c5a050 =====

long FUN_00c5a050(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  void *local_60;
  long local_58;
  long local_50;
  void *local_48;
  
  lVar8 = param_1[1] - *param_1;
  uVar4 = (lVar8 >> 5) * 0x4ec4ec4ec4ec4ec5 + 1;
  if (uVar4 < 0x9d89d89d89d89e) {
    local_60 = (void *)0x0;
    lVar5 = param_1[2] - *param_1 >> 5;
    uVar6 = lVar5 * -0x6276276276276276;
    if (uVar6 < uVar4 || uVar6 - uVar4 == 0) {
      uVar6 = uVar4;
    }
    if (0x4ec4ec4ec4ec4d < (ulong)(lVar5 * 0x4ec4ec4ec4ec4ec5)) {
      uVar6 = 0x9d89d89d89d89d;
    }
    if (uVar6 != 0) {
      if (0x9d89d89d89d89d < uVar6) goto LAB_00c5a204;
      local_60 = operator_new(uVar6 * 0x1a0);
    }
    lVar8 = (long)local_60 + lVar8;
    local_48 = (void *)((long)local_60 + uVar6 * 0x1a0);
    local_58 = lVar8;
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    FUN_00afef10(lVar8,param_2);
    uVar3 = *param_3;
    local_50 = lVar8 + 0x1a0;
    *param_3 = 0;
    *(undefined8 *)(lVar8 + 0x198) = uVar3;
    FUN_00c5a208(param_1,&local_60);
    lVar5 = local_58;
    lVar7 = param_1[1];
    lVar8 = local_50;
    while( true ) {
      if (lVar5 == lVar8) {
        if (local_60 != (void *)0x0) {
          local_50 = lVar8;
          operator_delete(local_60);
        }
        return lVar7;
      }
      lVar1 = lVar8 + -0x1a0;
      if (lVar1 == 0) break;
      plVar2 = *(long **)(lVar8 + -8);
      *(undefined8 *)(lVar8 + -8) = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      FUN_00aff0f8(lVar1);
      lVar8 = lVar1;
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  FUN_00c5a31c();
LAB_00c5a204:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 00c5a208  FUN_00c5a208 =====

void FUN_00c5a208(long *param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar4 = *param_1;
  lVar7 = param_1[1];
  lVar5 = param_2[1] + (lVar4 - lVar7);
  lVar3 = lVar4;
  lVar6 = lVar5;
  if (lVar7 != lVar4) {
    do {
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_00afef10(lVar6,lVar3);
      uVar2 = *(undefined8 *)(lVar3 + 0x198);
      *(undefined8 *)(lVar3 + 0x198) = 0;
      lVar3 = lVar3 + 0x1a0;
      *(undefined8 *)(lVar6 + 0x198) = uVar2;
      lVar6 = lVar6 + 0x1a0;
    } while (lVar3 != lVar7);
    do {
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar1 = *(long **)(lVar4 + 0x198);
      *(undefined8 *)(lVar4 + 0x198) = 0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      FUN_00aff0f8(lVar4);
      lVar4 = lVar4 + 0x1a0;
    } while (lVar4 != lVar7);
  }
  param_2[1] = lVar5;
  lVar3 = *param_1;
  lVar5 = param_1[2];
  param_1[1] = lVar3;
  lVar7 = param_2[1];
  lVar4 = param_2[3];
  param_1[1] = param_2[2];
  *param_1 = lVar7;
  param_1[2] = lVar4;
  param_2[2] = lVar3;
  param_2[3] = lVar5;
  *param_2 = lVar3;
  param_2[1] = lVar3;
  return;
}


// ===== 00c5a31c  FUN_00c5a31c =====

void FUN_00c5a31c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00c5a334  FUN_00c5a334 =====

long FUN_00c5a334(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  void *local_50;
  long local_48;
  long local_40;
  void *local_38;
  
  lVar5 = param_1[1] - *param_1;
  uVar1 = (lVar5 >> 5) * 0x4ec4ec4ec4ec4ec5 + 1;
  if (uVar1 < 0x9d89d89d89d89e) {
    local_50 = (void *)0x0;
    lVar2 = param_1[2] - *param_1 >> 5;
    uVar3 = lVar2 * -0x6276276276276276;
    if (uVar3 < uVar1 || uVar3 - uVar1 == 0) {
      uVar3 = uVar1;
    }
    if (0x4ec4ec4ec4ec4d < (ulong)(lVar2 * 0x4ec4ec4ec4ec4ec5)) {
      uVar3 = 0x9d89d89d89d89d;
    }
    if (uVar3 != 0) {
      if (0x9d89d89d89d89d < uVar3) goto LAB_00c5a4b4;
      local_50 = operator_new(uVar3 * 0x1a0);
    }
    lVar5 = (long)local_50 + lVar5;
    local_38 = (void *)((long)local_50 + uVar3 * 0x1a0);
    local_48 = lVar5;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    FUN_00afef10(lVar5,param_2);
    local_40 = lVar5 + 0x1a0;
    *(undefined8 *)(lVar5 + 0x198) = *(undefined8 *)(param_2 + 0x198);
    FUN_00c5a4b8(param_1,&local_50);
    lVar2 = local_48;
    lVar4 = param_1[1];
    lVar5 = local_40;
    while( true ) {
      if (lVar2 == lVar5) {
        if (local_50 != (void *)0x0) {
          local_40 = lVar5;
          operator_delete(local_50);
        }
        return lVar4;
      }
      lVar5 = lVar5 + -0x1a0;
      if (lVar5 == 0) break;
      FUN_00aff0f8(lVar5);
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  FUN_00c5a5a8();
LAB_00c5a4b4:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 00c5a4b8  FUN_00c5a4b8 =====

void FUN_00c5a4b8(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = *param_1;
  lVar4 = param_1[1];
  lVar3 = param_2[1] + (lVar2 - lVar4);
  lVar6 = lVar2;
  lVar5 = lVar3;
  if (lVar4 != lVar2) {
    do {
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_00afef10(lVar5,lVar6);
      lVar1 = lVar6 + 0x1a0;
      *(undefined8 *)(lVar5 + 0x198) = *(undefined8 *)(lVar6 + 0x198);
      lVar6 = lVar1;
      lVar5 = lVar5 + 0x1a0;
    } while (lVar1 != lVar4);
    do {
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_00aff0f8(lVar2);
      lVar2 = lVar2 + 0x1a0;
    } while (lVar2 != lVar4);
  }
  param_2[1] = lVar3;
  lVar2 = *param_1;
  lVar4 = param_1[2];
  param_1[1] = lVar2;
  lVar6 = param_2[1];
  lVar3 = param_2[3];
  param_1[1] = param_2[2];
  *param_1 = lVar6;
  param_1[2] = lVar3;
  param_2[2] = lVar2;
  param_2[3] = lVar4;
  *param_2 = lVar2;
  param_2[1] = lVar2;
  return;
}


// ===== 00c5a5a8  FUN_00c5a5a8 =====

void FUN_00c5a5a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00c5a5c0  FUN_00c5a5c0 =====

long FUN_00c5a5c0(long *param_1,undefined8 param_2)

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
  uVar3 = (lVar6 >> 3) * 0x7efdfbf7efdfbf7f + 1;
  if (uVar3 < 0x40810204081021) {
    lVar4 = param_1[2] - *param_1 >> 3;
    uVar5 = lVar4 * -0x204081020408102;
    if (uVar5 < uVar3 || uVar5 - uVar3 == 0) {
      uVar5 = uVar3;
    }
    if (0x2040810204080f < (ulong)(lVar4 * 0x7efdfbf7efdfbf7f)) {
      uVar5 = 0x40810204081020;
    }
    if (uVar5 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      if (0x40810204081020 < uVar5) goto LAB_00c5a768;
      pvVar2 = operator_new(uVar5 * 0x3f8);
      lVar6 = (long)pvVar2 + lVar6;
    }
    if (lVar6 == 0) {
LAB_00c5a73c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    FUN_00c6e8e4(lVar6,param_2);
    pvVar7 = (void *)*param_1;
    pvVar1 = (void *)param_1[1];
    lVar4 = (long)pvVar7 + (lVar6 - (long)pvVar1);
    pvVar8 = pvVar7;
    lVar9 = lVar4;
    if (pvVar1 != pvVar7) {
      do {
        if (lVar9 == 0) goto LAB_00c5a73c;
        FUN_00c6e8e4(lVar9,pvVar8);
        pvVar8 = (void *)((long)pvVar8 + 0x3f8);
        lVar9 = lVar9 + 0x3f8;
      } while (pvVar8 != pvVar1);
      do {
        if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_00c6e96c(pvVar7);
        pvVar7 = (void *)((long)pvVar7 + 0x3f8);
      } while (pvVar7 != pvVar1);
      pvVar7 = (void *)*param_1;
    }
    *param_1 = lVar4;
    param_1[1] = lVar6 + 0x3f8;
    param_1[2] = (long)((long)pvVar2 + uVar5 * 0x3f8);
    if (pvVar7 != (void *)0x0) {
      operator_delete(pvVar7);
    }
    return lVar6 + 0x3f8;
  }
  FUN_00c5a76c();
LAB_00c5a768:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 00c5a76c  FUN_00c5a76c =====

void FUN_00c5a76c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00c5a784  FUN_00c5a784 =====

undefined8 *
FUN_00c5a784(long *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  void *pvVar3;
  void *pvVar4;
  size_t sVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  size_t __n;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar12 = param_2;
  if (0 < param_5) {
    puVar13 = (undefined8 *)param_1[1];
    if (param_1[2] - (long)puVar13 >> 3 < param_5) {
      lVar14 = *param_1;
      uVar2 = param_5 + ((long)puVar13 - lVar14 >> 3);
      if (uVar2 >> 0x3d != 0) {
        FUN_00c59d1c();
LAB_00c5aa9c:
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar6 = param_1[2] - lVar14;
      uVar7 = (long)uVar6 >> 2;
      if (uVar7 <= uVar2) {
        uVar7 = uVar2;
      }
      if (0x7ffffffffffffff7 < uVar6) {
        uVar7 = 0x1fffffffffffffff;
      }
      if (uVar7 == 0) {
        pvVar3 = (void *)0x0;
      }
      else {
        if (uVar7 >> 0x3d != 0) goto LAB_00c5aa9c;
        pvVar3 = operator_new(uVar7 << 3);
      }
      puVar12 = (undefined8 *)((long)pvVar3 + ((long)param_2 - lVar14));
      puVar9 = puVar12;
      if (param_5 * 8 != 0) {
        uVar11 = param_5 * 8 - 8U >> 3;
        uVar6 = (ulong)(lVar14 - ((long)pvVar3 + (long)param_2)) >> 3;
        uVar2 = uVar6;
        if (uVar11 <= uVar6) {
          uVar2 = uVar11;
        }
        puVar13 = puVar12;
        if (0x2b < uVar2) {
          if (uVar11 <= uVar6) {
            uVar6 = uVar11;
          }
          if (((((-(int)((long)pvVar3 + (long)param_2) & 7U) == 0) && (puVar12 <= puVar12 + uVar6))
              && (param_3 <= param_3 + uVar6)) &&
             (0x1f < (ulong)((((long)pvVar3 + (long)param_2) - (long)param_3) - lVar14))) {
            uVar6 = uVar2 + 1 & 3;
            puVar9 = (undefined8 *)((long)pvVar3 + ((long)param_2 - lVar14) + 0x10);
            uVar11 = 4;
            if (uVar6 != 0) {
              uVar11 = uVar6;
            }
            puVar8 = param_3 + 2;
            lVar14 = (uVar2 + 1) - uVar11;
            puVar13 = puVar12 + lVar14;
            param_3 = param_3 + lVar14;
            do {
              puVar1 = puVar8 + -1;
              uVar15 = puVar8[-2];
              uVar17 = puVar8[1];
              uVar16 = *puVar8;
              lVar14 = lVar14 + -4;
              puVar8 = puVar8 + 4;
              puVar9[-1] = *puVar1;
              puVar9[-2] = uVar15;
              puVar9[1] = uVar17;
              *puVar9 = uVar16;
              puVar9 = puVar9 + 4;
            } while (lVar14 != 0);
          }
        }
        do {
          if (puVar13 == (undefined8 *)0x0) {
LAB_00c5aa84:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          puVar9 = puVar13 + 1;
          *puVar13 = *param_3;
          puVar13 = puVar9;
          param_3 = param_3 + 1;
        } while (puVar9 != puVar12 + param_5);
        puVar13 = (undefined8 *)param_1[1];
        puVar9 = puVar12 + param_5;
      }
      memcpy(puVar9,param_2,(long)puVar13 - (long)param_2);
      lVar14 = param_1[1];
      param_1[1] = (long)param_2;
      sVar5 = (long)param_2 - *param_1;
      memcpy((void *)((long)puVar12 - sVar5),(void *)*param_1,sVar5);
      pvVar4 = (void *)*param_1;
      *param_1 = (long)puVar12 - sVar5;
      param_1[1] = (long)puVar9 + (lVar14 - (long)param_2);
      param_1[2] = (long)((long)pvVar3 + uVar7 * 8);
      if (pvVar4 != (void *)0x0) {
        operator_delete(pvVar4);
      }
    }
    else {
      sVar5 = (long)puVar13 - (long)param_2;
      if ((long)sVar5 >> 3 < param_5) {
        __n = param_4 - ((long)param_3 + sVar5);
        memmove(puVar13,(void *)((long)param_3 + sVar5),__n);
        lVar14 = (long)puVar13 + __n;
        param_1[1] = lVar14;
        if (0 < (long)sVar5 >> 3) {
          lVar10 = lVar14;
          if ((undefined8 *)(lVar14 + param_5 * -8) < puVar13) {
            puVar8 = (undefined8 *)(param_4 + (long)param_2);
            lVar10 = -(long)param_3;
            puVar9 = puVar8 + -param_5;
            do {
              if (puVar8 == param_3) goto LAB_00c5aa84;
              puVar1 = (undefined8 *)((long)puVar9 + lVar10);
              puVar9 = puVar9 + 1;
              *(undefined8 *)((long)puVar8 + lVar10) = *puVar1;
              puVar8 = puVar8 + 1;
            } while ((undefined8 *)((long)puVar9 + lVar10) < puVar13);
            lVar10 = (long)puVar8 - (long)param_3;
          }
          param_1[1] = lVar10;
          memmove((void *)(lVar14 - (lVar14 - (long)(param_2 + param_5))),param_2,
                  lVar14 - (long)(param_2 + param_5));
          memmove(param_2,param_3,sVar5);
        }
      }
      else {
        puVar9 = puVar13;
        for (puVar8 = puVar13 + -param_5; puVar8 < puVar13; puVar8 = puVar8 + 1) {
          if (puVar9 == (undefined8 *)0x0) goto LAB_00c5aa84;
          *puVar9 = *puVar8;
          puVar9 = puVar9 + 1;
        }
        param_1[1] = (long)puVar9;
        memmove((void *)((long)puVar13 - ((long)puVar13 - (long)(param_2 + param_5))),param_2,
                (long)puVar13 - (long)(param_2 + param_5));
        memmove(param_2,param_3,param_5 * 8);
      }
    }
  }
  return puVar12;
}


// ===== 00c5aaa0  FUN_00c5aaa0 =====

void FUN_00c5aaa0(undefined8 *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00c5aab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x20))(param_2,*(undefined8 *)*param_1,param_1[1]);
  return;
}


// ===== 00c5aabc  FUN_00c5aabc =====

void FUN_00c5aabc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00c5aabc(param_1,*param_2);
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


// ===== 00c5ab30  FUN_00c5ab30 =====

void FUN_00c5ab30(long *param_1,int param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_2 != param_3) {
    lVar2 = *param_1;
    if (((*(long *)(lVar2 + 0x288) != *(long *)(lVar2 + 0x290)) &&
        (plVar1 = *(long **)(*(long *)(lVar2 + 0x290) + -8), plVar1 != (long *)0x0)) &&
       (*(char *)(lVar2 + 0x3d9) == '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x00c5ab70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x10))(plVar1,param_3);
      return;
    }
  }
  return;
}


// ===== 00c5ab78  FUN_00c5ab78 =====

void FUN_00c5ab78(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c5ab88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x50))();
  return;
}


// ===== 00c5ab8c  FUN_00c5ab8c =====

void FUN_00c5ab8c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c5ab9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x68))();
  return;
}


// ===== 00c5aba0  FUN_00c5aba0 =====

bool FUN_00c5aba0(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  lVar10 = *param_1;
  uVar2 = FUN_009881a4(param_2 + 8);
  if ((uVar2 & 1) == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_2[9];
  }
  plVar5 = *(long **)(lVar10 + 0x2a0);
  plVar4 = *(long **)(lVar10 + 0x2a8);
  if (plVar5 != plVar4) {
    uVar2 = (long)plVar4 + (-8 - (long)plVar5);
    uVar7 = (uint)uVar2;
    if ((~uVar7 & 0x18) != 0) {
      uVar8 = (ulong)((uVar7 >> 3) + 1) & 3;
      do {
        if (*plVar5 == lVar6) goto joined_r0x00c5ac74;
        uVar8 = uVar8 - 1;
        plVar5 = plVar5 + 1;
      } while (uVar8 != 0);
    }
    if (0x17 < uVar2) {
      plVar5 = plVar5 + 2;
      while( true ) {
        if (plVar5[-2] == lVar6) {
          plVar5 = plVar5 + -2;
          goto joined_r0x00c5ac74;
        }
        if (plVar5[-1] == lVar6) break;
        if (*plVar5 == lVar6) goto joined_r0x00c5ac74;
        if (plVar5[1] == lVar6) {
          plVar5 = plVar5 + 1;
          goto joined_r0x00c5ac74;
        }
        plVar1 = plVar5 + 2;
        plVar5 = plVar5 + 4;
        if (plVar1 == plVar4) {
          return true;
        }
      }
      plVar5 = plVar5 + -1;
joined_r0x00c5ac74:
      if (plVar5 != plVar4) {
        uVar3 = (**(code **)(*param_2 + 0x18))(param_2);
        lVar6 = *(long *)(lVar10 + 0x2f0);
        lVar10 = *(long *)(lVar10 + 0x2f8);
        if (lVar6 != lVar10) {
          do {
            uVar2 = FUN_00b00230(lVar6,uVar3);
            lVar9 = lVar6;
            if ((uVar2 & 1) != 0) break;
            lVar6 = lVar6 + 0x1a0;
            lVar9 = lVar10;
          } while (lVar6 != lVar10);
          return lVar9 == lVar10;
        }
      }
    }
  }
  return true;
}


// ===== 00c5acfc  FUN_00c5acfc =====

void FUN_00c5acfc(undefined8 *param_1)

{
  FUN_00c54c7c(*param_1);
  return;
}


// ===== 00c5ad08  FUN_00c5ad08 =====

void FUN_00c5ad08(undefined8 *param_1)

{
  FUN_00c58e60(*param_1);
  return;
}


// ===== 00c5ad14  FUN_00c5ad14 =====

void FUN_00c5ad14(long *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *local_60;
  long lStack_58;
  long local_38;
  
  lStack_58 = *param_3;
  if (param_3[1] != lStack_58) {
    lVar3 = *param_1;
    lVar1 = 0;
    uVar2 = 0;
    do {
      lStack_58 = lStack_58 + lVar1;
      local_60 = &local_38;
      local_38 = lVar3;
      FUN_007b6160(lVar3 + 0x1b0,&local_60,FUN_00c59d34);
      lStack_58 = *param_3;
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x198;
    } while (uVar2 < (ulong)((param_3[1] - lStack_58 >> 3) * -0x505050505050505));
  }
  return;
}


// ===== 00c5adcc  FUN_00c5adcc =====

void FUN_00c5adcc(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x168);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c5ade0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(*param_1 + 0x150);
    return;
  }
  return;
}


// ===== 00c5ade8  FUN_00c5ade8 =====

void FUN_00c5ade8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x3c0) == 1) {
    if (*(long *)(lVar1 + 0x288) == *(long *)(lVar1 + 0x290)) {
      if (param_2 != 0) {
        return;
      }
    }
    else if (param_2 != *(long *)(*(long *)(lVar1 + 0x290) + -8)) {
      return;
    }
    if (*(code **)(lVar1 + 0x188) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c5ae38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x188))(lVar1 + 0x170,lVar1);
      return;
    }
  }
  return;
}


// ===== 00c5ae40  FUN_00c5ae40 =====

void FUN_00c5ae40(undefined8 *param_1)

{
  FUN_00c55000(*param_1);
  return;
}


// ===== 00c5ae4c  FUN_00c5ae4c =====

void FUN_00c5ae4c(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  lVar9 = *param_1;
  if (param_2 != *(long *)(lVar9 + 0x2d0)) {
    plVar5 = *(long **)(lVar9 + 0x2d8);
    plVar4 = *(long **)(lVar9 + 0x2e0);
    if (plVar5 == plVar4) {
      return;
    }
    uVar7 = (long)plVar4 + (-8 - (long)plVar5);
    uVar6 = (uint)uVar7;
    if ((~uVar6 & 0x18) != 0) {
      uVar8 = (ulong)((uVar6 >> 3) + 1) & 3;
      do {
        if (*plVar5 == param_2) goto joined_r0x00c5af28;
        uVar8 = uVar8 - 1;
        plVar5 = plVar5 + 1;
      } while (uVar8 != 0);
    }
    if (uVar7 < 0x18) {
      return;
    }
    plVar5 = plVar5 + 2;
    while( true ) {
      if (plVar5[-2] == param_2) {
        if (plVar5 + -2 == plVar4) {
          return;
        }
        goto LAB_00c5af2c;
      }
      if (plVar5[-1] == param_2) break;
      if (*plVar5 == param_2) goto joined_r0x00c5af28;
      if (plVar5[1] == param_2) {
        plVar5 = plVar5 + 1;
        goto joined_r0x00c5af28;
      }
      plVar1 = plVar5 + 2;
      plVar5 = plVar5 + 4;
      if (plVar1 == plVar4) {
        return;
      }
    }
    plVar5 = plVar5 + -1;
joined_r0x00c5af28:
    if (plVar5 == plVar4) {
      return;
    }
  }
LAB_00c5af2c:
  *(long *)(lVar9 + 0x538) = *(long *)(lVar9 + 0x538) + 1;
  *(long *)(lVar9 + 0x528) = *(long *)(lVar9 + 0x528) + *(long *)(param_3 + 8);
  lVar3 = FUN_00c66bd8(param_2);
  lVar2 = *(long *)(lVar9 + 0x548);
  if (*(long *)(lVar9 + 0x548) <= lVar3) {
    lVar2 = lVar3;
  }
  *(long *)(lVar9 + 0x548) = lVar2;
  FUN_00bc8500(lVar9,param_3);
  if ((*(int *)(lVar9 + 0x37c) == 1) && (param_2 != *(long *)(lVar9 + 0x2d0))) {
                    /* WARNING: Could not recover jumptable at 0x00c5afa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(lVar9 + 0x4e8) + 0x58))(*(long **)(lVar9 + 0x4e8),7,param_2);
    return;
  }
  return;
}


// ===== 00c5afcc  FUN_00c5afcc =====

void FUN_00c5afcc(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  if ((param_2 == plVar2[0x5a]) && (uVar1 = (**(code **)(*plVar2 + 8))(plVar2), (uVar1 & 1) != 0)) {
    FUN_00bc871c(plVar2,plVar2);
    return;
  }
  return;
}


// ===== 00c5b028  FUN_00c5b028 =====

void FUN_00c5b028(undefined8 *param_1)

{
  FUN_00c58828(*param_1);
  return;
}


// ===== 00c5b034  FUN_00c5b034 =====

void FUN_00c5b034(undefined8 *param_1)

{
  FUN_00c589a8(*param_1);
  return;
}


// ===== 00c5b040  FUN_00c5b040 =====

void FUN_00c5b040(undefined8 *param_1)

{
  FUN_00c55a30(*param_1);
  return;
}


// ===== 00c5b04c  FUN_00c5b04c =====

void FUN_00c5b04c(undefined8 *param_1)

{
  FUN_00c59144(*param_1);
  return;
}


// ===== 00c5b058  FUN_00c5b058 =====

void FUN_00c5b058(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  void *local_98;
  undefined8 uStack_90;
  long local_88;
  undefined3 local_80;
  undefined1 uStack_7d;
  undefined3 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68 [2];
  void *local_60;
  undefined8 uStack_58;
  long local_50;
  undefined4 local_48;
  undefined3 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar1 = *param_2;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    FUN_005478d8(&local_98,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
  }
  else {
    uStack_90 = *(undefined8 *)(param_2 + 4);
    local_98 = *(void **)(param_2 + 2);
    local_88 = *(long *)(param_2 + 6);
  }
  uStack_70 = *(undefined8 *)(param_2 + 0xc);
  local_78 = *(undefined8 *)(param_2 + 10);
  uVar2 = *param_1;
  local_80 = (undefined3)param_2[8];
  uStack_7d = (undefined1)*(undefined4 *)((long)param_2 + 0x23);
  uStack_7c = (undefined3)((uint)*(undefined4 *)((long)param_2 + 0x23) >> 8);
  local_68[0] = uVar1;
  if (local_88 < 0) {
    FUN_005478d8(&local_60,local_98,uStack_90);
  }
  else {
    uStack_58 = uStack_90;
    local_60 = local_98;
    local_50 = local_88;
  }
  local_48 = CONCAT13(uStack_7d,local_80);
  uStack_44 = uStack_7c;
  uStack_38 = uStack_70;
  local_40 = local_78;
  FUN_00c59314(uVar2,local_68);
  if (local_50 < 0) {
    operator_delete(local_60);
  }
  if (local_88 < 0) {
    operator_delete(local_98);
  }
  return;
}


// ===== 00c5b178  FUN_00c5b178 =====

void FUN_00c5b178(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c5b188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x628))(*param_1 + 0x610);
  return;
}


// ===== 00c5b18c  FUN_00c5b18c =====

void FUN_00c5b18c(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte bVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  void *__src;
  void *unaff_x22;
  long lVar5;
  void *local_90;
  void *local_88;
  void *local_80;
  char local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  uStack_68 = param_2[1];
  local_70 = *param_2;
  local_60 = param_2[2];
  bVar1 = *(byte *)(param_3 + 3);
  if ((bVar1 & 1) == 0) {
    uStack_68 = param_2[1];
    local_70 = *param_2;
    local_60 = param_2[2];
    __src = (void *)0x0;
    lVar5 = *param_1;
    local_90 = (void *)((ulong)local_90 & 0xffffffffffffff00);
    local_78 = '\0';
  }
  else {
    unaff_x22 = (void *)param_3[1];
    param_3[1] = 0;
    param_3[2] = 0;
    __src = (void *)*param_3;
    *param_3 = 0;
    lVar5 = *param_1;
    local_88 = (void *)0x0;
    local_80 = (void *)0x0;
    uVar3 = (long)unaff_x22 - (long)__src;
    local_90 = (void *)0x0;
    if (uVar3 != 0) {
      if ((long)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005da79c();
      }
      local_90 = operator_new(uVar3);
      pvVar2 = (void *)((long)local_90 + uVar3);
      local_80 = pvVar2;
      memcpy(local_90,__src,uVar3);
      local_88 = pvVar2;
    }
    local_78 = '\x01';
  }
  FUN_00c5b394(lVar5 + 0x610,&local_70,&local_90);
  if ((local_78 == '\x01') && (local_90 != (void *)0x0)) {
    uVar4 = (ulong)((long)local_88 + (-4 - ((long)local_88 << 0x3e))) >> 2;
    uVar3 = (ulong)(((long)local_90 - (long)local_88 << 0x3e) - ((long)local_90 - (long)local_88))
            >> 2;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    pvVar2 = local_88;
    if ((1 < uVar3) && ((((int)local_90 - (int)local_88 | -(int)local_88) & 3U) == 0)) {
      uVar3 = uVar3 & 0x3ffffffffffffffe;
      pvVar2 = (void *)((long)local_88 + uVar3 * -4);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    do {
      if (pvVar2 == local_90) {
        local_88 = local_90;
        operator_delete(local_90);
        goto LAB_00c5b2e8;
      }
      pvVar2 = (void *)((long)pvVar2 + -4);
    } while (pvVar2 != (void *)0x0);
  }
  else {
LAB_00c5b2e8:
    if ((__src == (void *)0x0) || (bVar1 == 0)) {
      return;
    }
    uVar4 = (ulong)((long)unaff_x22 + (-4 - ((long)unaff_x22 << 0x3e))) >> 2;
    uVar3 = (ulong)(((long)__src - (long)unaff_x22 << 0x3e) - ((long)__src - (long)unaff_x22)) >> 2;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    if ((1 < uVar3) && ((((int)__src - (int)unaff_x22 | -(int)unaff_x22) & 3U) == 0)) {
      uVar3 = uVar3 & 0x3ffffffffffffffe;
      unaff_x22 = (void *)((long)unaff_x22 + uVar3 * -4);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    do {
      if (unaff_x22 == __src) {
        operator_delete(__src);
        return;
      }
      unaff_x22 = (void *)((long)unaff_x22 + -4);
    } while (unaff_x22 != (void *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00c5b394  FUN_00c5b394 =====

void FUN_00c5b394(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  void *local_70;
  void *local_68;
  void *local_60;
  char local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  uStack_48 = param_2[1];
  local_50 = *param_2;
  local_40 = param_2[2];
  local_70 = (void *)((ulong)local_70 & 0xffffffffffffff00);
  local_58 = '\0';
  if (*(char *)(param_3 + 3) == '\x01') {
    pvVar2 = (void *)*param_3;
    local_70 = (void *)0x0;
    local_68 = (void *)0x0;
    local_60 = (void *)0x0;
    uVar3 = param_3[1] - (long)pvVar2;
    if (uVar3 != 0) {
      if ((long)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005da79c();
      }
      local_70 = operator_new(uVar3);
      pvVar1 = (void *)((long)local_70 + uVar3);
      local_60 = pvVar1;
      memcpy(local_70,pvVar2,uVar3);
      local_68 = pvVar1;
    }
    local_58 = '\x01';
  }
  (**(code **)(param_1 + 0x38))(param_1 + 0x20,&local_50,&local_70);
  if ((local_58 == '\x01') && (local_70 != (void *)0x0)) {
    uVar4 = (ulong)((long)local_68 + (-4 - ((long)local_68 << 0x3e))) >> 2;
    uVar3 = (ulong)(((long)local_70 - (long)local_68 << 0x3e) - ((long)local_70 - (long)local_68))
            >> 2;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    pvVar2 = local_68;
    if ((1 < uVar3) && ((((int)local_70 - (int)local_68 | -(int)local_68) & 3U) == 0)) {
      uVar3 = uVar3 & 0x3ffffffffffffffe;
      pvVar2 = (void *)((long)local_68 + uVar3 * -4);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    while (pvVar2 != local_70) {
      pvVar2 = (void *)((long)pvVar2 + -4);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    local_68 = local_70;
    operator_delete(local_70);
  }
  return;
}


// ===== 00c5b4e4  FUN_00c5b4e4 =====

void FUN_00c5b4e4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00c5b4e4(param_1,*param_2);
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


// ===== 00c5b558  FUN_00c5b558 =====

undefined1  [16] FUN_00c5b558(undefined8 param_1,long *param_2,undefined8 param_3,ulong *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  
  plVar3 = param_2 + 1;
  plVar6 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar2 = plVar1, plVar3 = plVar2, *param_4 < (ulong)plVar2[4]) {
        plVar1 = (long *)*plVar2;
        plVar6 = plVar2;
        if ((long *)*plVar2 == (long *)0x0) goto LAB_00c5b5c4;
      }
      if (*param_4 <= (ulong)plVar2[4]) {
        uVar4 = 0;
        goto LAB_00c5b630;
      }
      plVar1 = (long *)plVar2[1];
    } while ((long *)plVar2[1] != (long *)0x0);
    plVar6 = plVar2 + 1;
  }
LAB_00c5b5c4:
  plVar2 = (long *)operator_new(0x28);
  if ((plVar2 == (long *)0x0) || (*plVar2 = 0, plVar2 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar5 = *param_4;
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[2] = (long)plVar3;
  plVar2[4] = uVar5;
  *plVar6 = (long)plVar2;
  plVar3 = plVar2;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar3 = (long *)*plVar6;
  }
  FUN_005d5b94(param_2[1],plVar3);
  uVar4 = 1;
  param_2[2] = param_2[2] + 1;
LAB_00c5b630:
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = plVar2;
  return auVar7;
}


// ===== 00c5b660  FUN_00c5b660 =====

void FUN_00c5b660(undefined8 *param_1)

{
  FUN_00c55480(*param_1);
  return;
}


// ===== 00c5b66c  FUN_00c5b66c =====

void FUN_00c5b66c(long *param_1,undefined8 param_2)

{
  long local_28;
  long *plStack_20;
  undefined8 local_18;
  
  local_28 = *param_1;
  plStack_20 = &local_28;
  local_18 = param_2;
  FUN_007b6160(local_28 + 0x50,&plStack_20,FUN_00c5aaa0);
  return;
}


// ===== 00c5b6b0  FUN_00c5b6b0 =====

void FUN_00c5b6b0(undefined8 *param_1)

{
  FUN_00c58ae0(*param_1);
  return;
}


// ===== 00c5b6bc  FUN_00c5b6bc =====

void FUN_00c5b6bc(long *param_1)

{
  long local_20;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)&local_20;
  local_20 = *param_1;
  FUN_007b6160(local_20 + 0x1d0,&puStack_18,FUN_00c59d50);
  return;
}


// ===== 00c5b6fc  FUN_00c5b6fc =====

void FUN_00c5b6fc(undefined8 *param_1)

{
  FUN_00c56270(*param_1,param_1[1]);
  return;
}


// ===== 00c5b70c  FUN_00c5b70c =====

void FUN_00c5b70c(undefined8 *param_1,undefined4 param_2)

{
  FUN_00c567f8(*param_1,param_1[1],param_2);
  return;
}


// ===== 00c5b724  FUN_00c5b724 =====

undefined1  [16] FUN_00c5b724(undefined8 param_1,long *param_2,undefined8 param_3,int *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  plVar3 = param_2 + 1;
  plVar4 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar2 = plVar1, plVar3 = plVar2, *param_4 < *(int *)((long)plVar2 + 0x1c)) {
        plVar1 = (long *)*plVar2;
        plVar4 = plVar2;
        if ((long *)*plVar2 == (long *)0x0) goto LAB_00c5b790;
      }
      if (*param_4 <= *(int *)((long)plVar2 + 0x1c)) {
        uVar5 = 0;
        goto LAB_00c5b7f0;
      }
      plVar1 = (long *)plVar2[1];
    } while ((long *)plVar2[1] != (long *)0x0);
    plVar4 = plVar2 + 1;
  }
LAB_00c5b790:
  plVar2 = (long *)operator_new(0x28);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar5 = *(undefined8 *)param_4;
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[2] = (long)plVar3;
  *(undefined8 *)((long)plVar2 + 0x1c) = uVar5;
  *plVar4 = (long)plVar2;
  plVar3 = plVar2;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar3 = (long *)*plVar4;
  }
  FUN_005d5b94(param_2[1],plVar3);
  uVar5 = 1;
  param_2[2] = param_2[2] + 1;
LAB_00c5b7f0:
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = plVar2;
  return auVar6;
}


// ===== 00c5b820  FUN_00c5b820 =====

void FUN_00c5b820(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (((*(long *)(lVar3 + 0x288) != *(long *)(lVar3 + 0x290)) &&
      (plVar1 = *(long **)(*(long *)(lVar3 + 0x290) + -8), plVar1 != (long *)0x0)) &&
     (uVar2 = (**(code **)(*plVar1 + 0x38))(), (uVar2 & 1) != 0)) {
    if (*(long *)(lVar3 + 0x288) == *(long *)(lVar3 + 0x290)) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = *(long **)(*(long *)(lVar3 + 0x290) + -8);
    }
    (**(code **)(*plVar1 + 0x48))();
  }
  FUN_00be0920(lVar3 + 0x3a0);
  return;
}


// ===== 00c5b898  FUN_00c5b898 =====

void FUN_00c5b898(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)param_1[2];
  lVar3 = ((long *)param_1[2])[1] - lVar2;
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00c5b8c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x20))(param_2,*(undefined8 *)*param_1,param_1[1],lVar1,lVar3 >> 1);
  return;
}


// ===== 00c5b8c8  FUN_00c5b8c8 =====

void FUN_00c5b8c8(undefined8 *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00c5b8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x20))(param_2,*(undefined8 *)*param_1,param_1[1]);
  return;
}


// ===== 00c5b8e4  FUN_00c5b8e4 =====

void FUN_00c5b8e4(undefined8 *param_1)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0x3f800000;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}


// ===== 00c5b900  FUN_00c5b900 =====

void FUN_00c5b900(long param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  puVar1 = (undefined8 *)*(void **)(param_1 + 0x18);
  while (puVar1 != (undefined8 *)0x0) {
    if (puVar1 == (undefined8 *)0xfffffffffffffff0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    pvVar2 = (void *)*puVar1;
    FUN_00c5bfb0((long)puVar1 + 0x14);
    operator_delete(puVar1);
    puVar1 = (undefined8 *)pvVar2;
  }
  pvVar2 = *(void **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar2);
  return;
}


// ===== 00c5b998  FUN_00c5b998 =====

void FUN_00c5b998(long *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  void *pvVar1;
  undefined4 local_3c;
  long *local_38;
  
  if (*param_1 != 0) {
    local_38 = param_1 + 1;
    local_3c = param_3;
    FUN_00c5bb24(&local_38,&local_3c,&local_3c);
    param_1 = (long *)*param_1;
    pvVar1 = operator_new(0x38);
    FUN_00c5bfb8(pvVar1,param_2,local_3c,param_4);
    (**(code **)(*param_1 + 0x28))(param_1,pvVar1);
  }
  return;
}


// ===== 00c5ba2c  FUN_00c5ba2c =====

void FUN_00c5ba2c(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *pvVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
    pvVar1 = operator_new(0x20);
    FUN_00c5c034(pvVar1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00c5ba98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x28))(plVar2,pvVar1);
    return;
  }
  return;
}


// ===== 00c5bab4  FUN_00c5bab4 =====

void FUN_00c5bab4(undefined8 *param_1)

{
  void *pvVar1;
  long *plVar2;
  long *plVar3;
  
  for (plVar3 = (long *)param_1[3]; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
    plVar2 = (long *)*param_1;
    pvVar1 = operator_new(0x38);
    FUN_00c5bfb8(pvVar1,1,*(undefined4 *)(plVar3 + 2),(long)plVar3 + 0x14);
    (**(code **)(*plVar2 + 0x28))(plVar2,pvVar1);
  }
  return;
}


// ===== 00c5bb24  FUN_00c5bb24 =====

undefined1  [16]
FUN_00c5bb24(undefined8 *param_1,uint *param_2,undefined4 *param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  undefined1 *puVar14;
  uint uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 auVar18 [16];
  
  plVar12 = (long *)*param_1;
  uVar1 = *param_2;
  puVar14 = (undefined1 *)(ulong)uVar1;
  puVar16 = (undefined1 *)plVar12[1];
  if (puVar16 == (undefined1 *)0x0) {
    puVar17 = &DAT_aaaaaaaaaaaaaaaa;
  }
  else {
    puVar5 = puVar16 + -1;
    uVar15 = (uint)puVar16;
    if (((ulong)puVar16 & (ulong)puVar5) == 0) {
      puVar17 = (undefined1 *)(ulong)(uVar15 - 1 & uVar1);
    }
    else {
      puVar17 = puVar14;
      if (puVar16 <= puVar14) {
        uVar2 = 0;
        if (uVar15 != 0) {
          uVar2 = uVar1 / uVar15;
        }
        puVar17 = (undefined1 *)(ulong)(uVar1 - uVar2 * uVar15);
      }
    }
    puVar7 = *(undefined8 **)(*plVar12 + (long)puVar17 * 8);
    if (puVar7 != (undefined8 *)0x0) {
      for (plVar13 = (long *)*puVar7; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
        puVar9 = (undefined1 *)plVar13[1];
        if (puVar9 == puVar14) {
          if (*(uint *)(plVar13 + 2) == uVar1) {
            uVar4 = 0;
            goto LAB_00c5bdcc;
          }
        }
        else {
          if (((ulong)puVar16 & (ulong)puVar5) == 0) {
            puVar9 = (undefined1 *)((ulong)puVar9 & (ulong)puVar5);
          }
          else if (puVar16 <= puVar9) {
            uVar8 = 0;
            if (puVar16 != (undefined1 *)0x0) {
              uVar8 = (ulong)puVar9 / (ulong)puVar16;
            }
            puVar9 = puVar9 + -(uVar8 * (long)puVar16);
          }
          if (puVar9 != puVar17) break;
        }
      }
    }
  }
  plVar13 = (long *)operator_new(0x30);
  if (plVar13 == (long *)0x0) {
LAB_00c5bdec:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  *plVar13 = 0;
  plVar13[1] = (long)puVar14;
  if (plVar13 == (long *)0xfffffffffffffff0) goto LAB_00c5bdec;
  *(undefined4 *)(plVar13 + 2) = *param_3;
  FUN_00c5bf70((long)plVar13 + 0x14,param_4);
  if ((float)(plVar12[3] + 1) <= *(float *)(plVar12 + 4) * (float)puVar16) goto LAB_00c5bd54;
  if (puVar16 < (undefined1 *)0x3) {
    uVar8 = 1;
  }
  else {
    uVar8 = (ulong)(((ulong)puVar16 & (ulong)(puVar16 + -1)) != 0);
  }
  uVar8 = uVar8 | (long)puVar16 << 1;
  uVar11 = (ulong)((float)(plVar12[3] + 1) / *(float *)(plVar12 + 4));
  if (uVar8 <= uVar11) {
    uVar8 = uVar11;
  }
  if (uVar8 - 1 == 0) {
    uVar8 = 2;
  }
  else if ((uVar8 & uVar8 - 1) != 0) {
    uVar8 = FUN_005204f8(uVar8);
  }
  uVar11 = plVar12[1];
  if (uVar11 < uVar8) {
LAB_00c5bca8:
    FUN_00c5be00(plVar12,uVar8);
  }
  else if (uVar8 < uVar11) {
    uVar3 = (ulong)((float)(ulong)plVar12[3] / *(float *)(plVar12 + 4));
    if ((uVar11 < 3) || ((uVar11 & uVar11 - 1) != 0)) {
      uVar3 = FUN_005204f8();
    }
    else if (1 < uVar3) {
      uVar3 = 1L << (-LZCOUNT(uVar3 - 1) & 0x3fU);
    }
    if (uVar8 <= uVar3) {
      uVar8 = uVar3;
    }
    if (uVar8 < uVar11) goto LAB_00c5bca8;
  }
  puVar16 = (undefined1 *)plVar12[1];
  if (((ulong)puVar16 & (ulong)(puVar16 + -1)) == 0) {
    puVar17 = (undefined1 *)(ulong)((int)puVar16 - 1U & uVar1);
  }
  else {
    puVar17 = puVar14;
    if (puVar16 <= puVar14) {
      uVar8 = 0;
      if (puVar16 != (undefined1 *)0x0) {
        uVar8 = (ulong)puVar14 / (ulong)puVar16;
      }
      puVar17 = puVar14 + -(uVar8 * (long)puVar16);
    }
  }
LAB_00c5bd54:
  lVar6 = *plVar12;
  plVar10 = *(long **)(lVar6 + (long)puVar17 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = plVar12 + 2;
    *plVar13 = *plVar10;
    *plVar10 = (long)plVar13;
    *(long **)(lVar6 + (long)puVar17 * 8) = plVar10;
    if (*plVar13 != 0) {
      puVar14 = *(undefined1 **)(*plVar13 + 8);
      if (((ulong)puVar16 & (ulong)(puVar16 + -1)) == 0) {
        puVar14 = (undefined1 *)((ulong)puVar14 & (ulong)(puVar16 + -1));
      }
      else if (puVar16 <= puVar14) {
        uVar8 = 0;
        if (puVar16 != (undefined1 *)0x0) {
          uVar8 = (ulong)puVar14 / (ulong)puVar16;
        }
        puVar14 = puVar14 + -(uVar8 * (long)puVar16);
      }
      *(long **)(*plVar12 + (long)puVar14 * 8) = plVar13;
    }
  }
  else {
    *plVar13 = *plVar10;
    *plVar10 = (long)plVar13;
  }
  uVar4 = 1;
  plVar12[3] = plVar12[3] + 1;
LAB_00c5bdcc:
  auVar18._8_8_ = uVar4;
  auVar18._0_8_ = plVar13;
  return auVar18;
}


// ===== 00c5be00  FUN_00c5be00 =====

void FUN_00c5be00(long *param_1,ulong param_2)

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


// ===== 00c5bf54  FUN_00c5bf54 =====

void FUN_00c5bf54(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[3] = 0;
  param_1[4] = param_3;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  return;
}


// ===== 00c5bf70  FUN_00c5bf70 =====

void FUN_00c5bf70(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  return;
}


// ===== 00c5bfb0  FUN_00c5bfb0 =====

void FUN_00c5bfb0(void)

{
  return;
}


// ===== 00c5bfb8  FUN_00c5bfb8 =====

void FUN_00c5bfb8(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  *(undefined4 *)(param_1 + 2) = param_2;
  *(undefined4 *)((long)param_1 + 0x14) = param_3;
  *param_1 = &PTR_FUN_00d4dda0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = *param_4;
  *(undefined4 *)((long)param_1 + 0x1c) = param_4[1];
  *(undefined4 *)(param_1 + 4) = param_4[2];
  *(undefined4 *)((long)param_1 + 0x24) = param_4[3];
  *(undefined4 *)(param_1 + 5) = param_4[4];
  *(undefined4 *)((long)param_1 + 0x2c) = param_4[5];
  *(undefined4 *)(param_1 + 6) = param_4[6];
  return;
}


// ===== 00c5c008  FUN_00c5c008 =====

void FUN_00c5c008(void)

{
  return;
}


// ===== 00c5c010  FUN_00c5c010 =====

void FUN_00c5c010(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00c5c01c  FUN_00c5c01c =====

undefined8 FUN_00c5c01c(void)

{
  return 0xc;
}


// ===== 00c5c028  FUN_00c5c028 =====

undefined8 FUN_00c5c028(void)

{
  return 0;
}


// ===== 00c5c034  FUN_00c5c034 =====

void FUN_00c5c034(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 2) = param_2;
  *(undefined4 *)((long)param_1 + 0x14) = param_3;
  *param_1 = &PTR_FUN_00d4ddd8;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = param_4;
  return;
}


// ===== 00c5c050  FUN_00c5c050 =====

void FUN_00c5c050(void)

{
  return;
}


// ===== 00c5c058  FUN_00c5c058 =====

void FUN_00c5c058(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00c5c064  FUN_00c5c064 =====

undefined8 FUN_00c5c064(void)

{
  return 0xd;
}


// ===== 00c5c070  FUN_00c5c070 =====

undefined8 FUN_00c5c070(void)

{
  return 0;
}


// ===== 00c5c07c  FUN_00c5c07c =====

void FUN_00c5c07c(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  void *pvVar2;
  long *plVar3;
  
  *param_1 = &PTR_FUN_00d4de10;
  uVar1 = FUN_007e06bc();
  param_1[1] = uVar1;
  FUN_007ebca0(param_1 + 2);
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = param_2;
  if (param_3 == (long *)0x0) {
    pvVar2 = operator_new(0x1d8);
    FUN_00c5cd80(pvVar2,param_4);
    plVar3 = (long *)param_1[5];
    param_1[5] = pvVar2;
  }
  else {
    uVar1 = (**(code **)(*param_3 + 0x10))(param_3,param_4);
    plVar3 = (long *)param_1[5];
    param_1[5] = uVar1;
  }
  if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c5c108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 8))(plVar3);
    return;
  }
  return;
}


// ===== 00c5c140  FUN_00c5c140 =====

void FUN_00c5c140(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  void *pvVar3;
  
  plVar2 = (long *)param_1[5];
  param_1[5] = 0;
  *param_1 = &PTR_FUN_00d4de10;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_007ebdcc(param_1[2]);
  pvVar3 = (void *)param_1[2];
  if ((pvVar3 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar3), iVar1 == 1)) {
    operator_delete(pvVar3);
    return;
  }
  return;
}


// ===== 00c5c1c4  FUN_00c5c1c4 =====

void FUN_00c5c1c4(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  void *pvVar3;
  
  plVar2 = (long *)param_1[5];
  param_1[5] = 0;
  *param_1 = &PTR_FUN_00d4de10;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_007ebdcc(param_1[2]);
  pvVar3 = (void *)param_1[2];
  if ((pvVar3 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar3), iVar1 == 1)) {
    operator_delete(pvVar3);
  }
  operator_delete(param_1);
  return;
}


// ===== 00c5c244  FUN_00c5c244 =====

void FUN_00c5c244(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c5c254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x28) + 0x10))();
  return;
}


// ===== 00c5c258  FUN_00c5c258 =====

void FUN_00c5c258(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c5c268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x28) + 0x50))();
  return;
}


// ===== 00c5c26c  FUN_00c5c26c =====

void FUN_00c5c26c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c5c27c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x28) + 0x20))();
  return;
}


// ===== 00c5c280  FUN_00c5c280 =====

void FUN_00c5c280(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c5c290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x28) + 0x60))();
  return;
}


// ===== 00c5c294  FUN_00c5c294 =====

void FUN_00c5c294(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  void *local_38 [2];
  char cStack_21;
  
  uVar1 = FUN_0044075c();
  if ((uVar1 & 1) == 0) {
    FUN_00c61eb8(local_38,param_2);
    FUN_00623bb0(&DAT_001f4e90,"../../p2p/base/wrapping_active_ice_controller.cc",0x2d8,
                 "Connection report for ",local_38);
    if (cStack_21 < '\0') {
      operator_delete(local_38[0]);
    }
  }
  return;
}


// ===== 00c5c310  FUN_00c5c310 =====

void FUN_00c5c310(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00c5c328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x28) + 0x18))(*(long **)(param_1 + 0x28));
  return;
}


// ===== 00c5c32c  FUN_00c5c32c =====

void FUN_00c5c32c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c5c33c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x28) + 0x28))();
  return;
}


// ===== 00c5c340  FUN_00c5c340 =====

void FUN_00c5c340(long param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 uStack_55;
  undefined1 local_54 [4];
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  
  (**(code **)(**(long **)(param_1 + 0x30) + 0x28))();
  plVar1 = *(long **)(param_1 + 0x28);
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x10))();
  (**(code **)(*plVar1 + 0x48))(&local_70,plVar1,uVar4);
  iVar3 = (int)local_60;
  if (((ulong)puStack_68 & 1) != 0) {
    (**(code **)(**(long **)(param_1 + 0x30) + 0x40))(*(long **)(param_1 + 0x30),local_70);
  }
  plVar1 = *(long **)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    FUN_00d0f740(1,lVar2);
  }
  local_50[0] = (long *)operator_new(0x30);
  *local_50[0] = lVar2;
  local_50[0][4] = (long)FUN_004473ec;
  local_50[0][5] = (long)FUN_00c5cd4c;
  local_50[0][2] = param_1;
  local_40 = FUN_005db390;
  pcStack_38 = FUN_005db348;
  local_54[0] = 0;
  (**(code **)(*plVar1 + 0x10))(plVar1,local_50,(long)iVar3 * 1000,local_54,&uStack_55);
  (*local_40)(0,local_50,local_50);
  return;
}


// ===== 00c5c464  FUN_00c5c464 =====

void FUN_00c5c464(long param_1,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 uStack_52;
  undefined1 uStack_51;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  
  if ((*(byte *)(param_1 + 0x19) & 1) == 0) {
    plVar1 = *(long **)(param_1 + 8);
    lVar2 = *(long *)(param_1 + 0x10);
    if (lVar2 != 0) {
      FUN_00d0f740(1,lVar2);
    }
    local_50[0] = (long *)operator_new(0x30);
    *local_50[0] = lVar2;
    local_50[0][4] = (long)FUN_004473ec;
    local_50[0][5] = (long)FUN_00c5cd58;
    local_50[0][2] = param_1;
    *(undefined4 *)(local_50[0] + 3) = param_2;
    local_40 = FUN_005db390;
    pcStack_38 = FUN_005db348;
    (**(code **)(*plVar1 + 8))(plVar1,local_50,&uStack_51,&uStack_52);
    (*local_40)(0,local_50,local_50);
    *(undefined1 *)(param_1 + 0x19) = 1;
  }
  return;
}


// ===== 00c5c534  FUN_00c5c534 =====

void FUN_00c5c534(void)

{
  FUN_00c5c53c();
  return;
}


// ===== 00c5c53c  FUN_00c5c53c =====

void FUN_00c5c53c(long param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  void *__dest;
  ulong uVar2;
  undefined1 *puVar3;
  void *pvVar4;
  undefined1 *local_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined8 uStack_bf;
  void *local_b0;
  void *local_a8;
  void *local_a0;
  undefined1 *local_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 local_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  
  (**(code **)(**(long **)(param_1 + 0x30) + 0x28))();
  *(undefined1 *)(param_1 + 0x19) = 0;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_78 = 0xaa;
  uStack_77 = 0xaaaaaaaaaaaaaa;
  local_80 = 0xaa;
  uStack_7f = 0xaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_88 = 0xaa;
  uStack_87 = 0xaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(**(long **)(param_1 + 0x28) + 0x70))(&local_90,*(long **)(param_1 + 0x28),param_2);
  puVar1 = local_68;
  puVar3 = local_70;
  uStack_bf = CONCAT17(uStack_78,uStack_7f);
  local_a8 = (void *)0x0;
  local_a0 = (void *)0x0;
  uStack_c8 = uStack_88;
  local_d0 = local_90;
  uVar2 = (long)local_68 - (long)local_70;
  uStack_c7 = uStack_87;
  uStack_c0 = local_80;
  local_b0 = (void *)0x0;
  if (uVar2 == 0) {
    FUN_00c5c754(param_1,param_2,&local_d0);
  }
  else {
    if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00c5cd28();
    }
    __dest = operator_new(uVar2);
    pvVar4 = (void *)((long)__dest + uVar2);
    local_b0 = __dest;
    local_a0 = pvVar4;
    memcpy(__dest,puVar3,uVar2);
    local_a8 = pvVar4;
    FUN_00c5c754(param_1,param_2,&local_d0);
    if (__dest != (void *)0x0) {
      uVar2 = (((long)(puVar3 + (-(long)__dest - (long)puVar1)) << 0x3d) -
              (long)(puVar3 + (-(long)__dest - (long)puVar1))) - 8U >> 3;
      if ((ulong)(puVar1 + ((long)puVar3 << 0x3d) + (-(long)puVar3 - ((long)puVar1 << 0x3d))) >> 3
          <= uVar2) {
        uVar2 = (ulong)(puVar1 + ((long)puVar3 << 0x3d) + (-(long)puVar3 - ((long)puVar1 << 0x3d)))
                >> 3;
      }
      if ((1 < uVar2) &&
         ((((int)puVar3 - (int)puVar1 | ((int)puVar3 - (int)puVar1) - (int)__dest) & 7U) == 0)) {
        uVar2 = uVar2 & 0x1ffffffffffffffe;
        pvVar4 = (void *)((long)pvVar4 + uVar2 * -8);
        do {
          uVar2 = uVar2 - 2;
        } while (uVar2 != 0);
      }
      do {
        if (pvVar4 == __dest) {
          operator_delete(__dest);
          goto LAB_00c5c688;
        }
        pvVar4 = (void *)((long)pvVar4 + -8);
      } while (pvVar4 != (void *)0x0);
      goto LAB_00c5c6fc;
    }
  }
LAB_00c5c688:
  FUN_00c5c8f8(param_1);
  if (local_70 == (undefined1 *)0x0) {
    return;
  }
  uVar2 = (ulong)(((long)local_70 - (long)local_68 << 0x3d) - ((long)local_70 - (long)local_68)) >>
          3;
  if ((ulong)(local_68 + (-8 - ((long)local_68 << 0x3d))) >> 3 <= uVar2) {
    uVar2 = (ulong)(local_68 + (-8 - ((long)local_68 << 0x3d))) >> 3;
  }
  puVar3 = local_68;
  if ((1 < uVar2) && ((((int)local_70 - (int)local_68 | -(int)local_68) & 7U) == 0)) {
    uVar2 = uVar2 & 0x1ffffffffffffffe;
    puVar3 = local_68 + uVar2 * -8;
    do {
      uVar2 = uVar2 - 2;
    } while (uVar2 != 0);
  }
  do {
    if (puVar3 == local_70) {
      local_68 = local_70;
      operator_delete(local_70);
      return;
    }
    puVar3 = puVar3 + -8;
  } while (puVar3 != (undefined1 *)0x0);
LAB_00c5c6fc:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00c5c754  FUN_00c5c754 =====

void FUN_00c5c754(long param_1,undefined4 param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  long *local_60 [2];
  code *local_50;
  code *pcStack_48;
  undefined1 local_24 [3];
  undefined1 uStack_21;
  
  if (*(char *)(param_3 + 1) == '\x01') {
    uVar5 = FUN_00417e08();
    if ((uVar5 & 1) == 0) {
      FUN_00c6f76c(local_60,param_2);
      FUN_00623bb0(&DAT_001f4e90,"../../p2p/base/wrapping_active_ice_controller.cc",0x611,
                   "Switching selected connection due to: ",local_60);
      if ((long)local_50 < 0) {
        operator_delete(local_60[0]);
      }
    }
    if ((*(byte *)(param_3 + 1) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005dc08c();
    }
    (**(code **)(**(long **)(param_1 + 0x30) + 0x48))(*(long **)(param_1 + 0x30),*param_3,param_2);
  }
  if (*(char *)(param_3 + 3) == '\x01') {
    plVar1 = *(long **)(param_1 + 8);
    lVar2 = *(long *)(param_1 + 0x10);
    if (lVar2 != 0) {
      FUN_00d0f740(1,lVar2);
      if ((*(byte *)(param_3 + 3) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                  );
      }
    }
    uVar3 = *(undefined4 *)(param_3 + 2);
    local_60[0] = (long *)operator_new(0x30);
    *local_60[0] = lVar2;
    local_60[0][4] = (long)FUN_004473ec;
    local_60[0][5] = (long)FUN_00c5cd6c;
    local_60[0][2] = param_1;
    *(undefined4 *)(local_60[0] + 3) = uVar3;
    local_50 = FUN_005db390;
    pcStack_48 = FUN_005db348;
    local_24[0] = 0;
    (**(code **)(*plVar1 + 0x10))
              (plVar1,local_60,(long)*(int *)((long)param_3 + 0x14) * 1000,local_24,&uStack_21);
    (*local_50)(0,local_60,local_60);
  }
  lVar4 = param_3[5] - param_3[4];
  lVar2 = 0;
  if (lVar4 != 0) {
    lVar2 = param_3[4];
  }
  (**(code **)(**(long **)(param_1 + 0x30) + 0x38))(*(long **)(param_1 + 0x30),lVar2,lVar4 >> 3);
  return;
}


// ===== 00c5c8f8  FUN_00c5c8f8 =====

void FUN_00c5c8f8(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  FUN_00c5cbf4();
  (**(code **)(**(long **)(param_1 + 0x30) + 0x30))();
  if (((*(byte *)(param_1 + 0x18) & 1) == 0) &&
     (uVar3 = (**(code **)(**(long **)(param_1 + 0x28) + 0x40))(), (uVar3 & 1) != 0)) {
    plVar1 = *(long **)(param_1 + 8);
    lVar2 = *(long *)(param_1 + 0x10);
    if (lVar2 != 0) {
      FUN_00d0f740(1,lVar2);
    }
    local_50[0] = (long *)operator_new(0x30);
    *local_50[0] = lVar2;
    local_50[0][4] = (long)FUN_004473ec;
    local_50[0][5] = (long)FUN_00c5cd40;
    local_50[0][2] = param_1;
    local_40 = FUN_005db390;
    pcStack_38 = FUN_005db348;
    (**(code **)(*plVar1 + 8))(plVar1,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    (**(code **)(**(long **)(param_1 + 0x30) + 0x20))();
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  return;
}


// ===== 00c5c9f4  FUN_00c5c9f4 =====

undefined1 FUN_00c5c9f4(long param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  void *__dest;
  ulong uVar3;
  undefined1 *puVar4;
  void *pvVar5;
  undefined1 *local_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined8 uStack_bf;
  void *local_b0;
  void *local_a8;
  void *local_a0;
  undefined1 *local_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 local_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  
  uStack_78 = 0xaa;
  uStack_77 = 0xaaaaaaaaaaaaaa;
  local_80 = 0xaa;
  uStack_7f = 0xaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_88 = 0xaa;
  uStack_87 = 0xaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(**(long **)(param_1 + 0x28) + 0x68))(&local_90);
  puVar2 = local_68;
  puVar4 = local_70;
  uStack_bf = CONCAT17(uStack_78,uStack_7f);
  local_a8 = (void *)0x0;
  local_a0 = (void *)0x0;
  uStack_c8 = uStack_88;
  local_d0 = local_90;
  uVar3 = (long)local_68 - (long)local_70;
  uStack_c7 = uStack_87;
  uStack_c0 = local_80;
  local_b0 = (void *)0x0;
  if (uVar3 == 0) {
    FUN_00c5c754(param_1,param_2,&local_d0);
  }
  else {
    if ((long)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00c5cd28();
    }
    __dest = operator_new(uVar3);
    pvVar5 = (void *)((long)__dest + uVar3);
    local_b0 = __dest;
    local_a0 = pvVar5;
    memcpy(__dest,puVar4,uVar3);
    local_a8 = pvVar5;
    FUN_00c5c754(param_1,param_2,&local_d0);
    if (__dest != (void *)0x0) {
      uVar3 = (((long)(puVar4 + (-(long)__dest - (long)puVar2)) << 0x3d) -
              (long)(puVar4 + (-(long)__dest - (long)puVar2))) - 8U >> 3;
      if ((ulong)(puVar2 + ((long)puVar4 << 0x3d) + (-(long)puVar4 - ((long)puVar2 << 0x3d))) >> 3
          <= uVar3) {
        uVar3 = (ulong)(puVar2 + ((long)puVar4 << 0x3d) + (-(long)puVar4 - ((long)puVar2 << 0x3d)))
                >> 3;
      }
      if ((1 < uVar3) &&
         ((((int)puVar4 - (int)puVar2 | ((int)puVar4 - (int)puVar2) - (int)__dest) & 7U) == 0)) {
        uVar3 = uVar3 & 0x1ffffffffffffffe;
        pvVar5 = (void *)((long)pvVar5 + uVar3 * -8);
        do {
          uVar3 = uVar3 - 2;
        } while (uVar3 != 0);
      }
      do {
        if (pvVar5 == __dest) {
          operator_delete(__dest);
          goto LAB_00c5cb28;
        }
        pvVar5 = (void *)((long)pvVar5 + -8);
      } while (pvVar5 != (void *)0x0);
      goto LAB_00c5cb98;
    }
  }
LAB_00c5cb28:
  uVar1 = uStack_88;
  if (local_70 == (undefined1 *)0x0) {
    return uStack_88;
  }
  uVar3 = (ulong)(((long)local_70 - (long)local_68 << 0x3d) - ((long)local_70 - (long)local_68)) >>
          3;
  if ((ulong)(local_68 + (-8 - ((long)local_68 << 0x3d))) >> 3 <= uVar3) {
    uVar3 = (ulong)(local_68 + (-8 - ((long)local_68 << 0x3d))) >> 3;
  }
  puVar4 = local_68;
  if ((1 < uVar3) && ((((int)local_70 - (int)local_68 | -(int)local_68) & 7U) == 0)) {
    uVar3 = uVar3 & 0x1ffffffffffffffe;
    puVar4 = local_68 + uVar3 * -8;
    do {
      uVar3 = uVar3 - 2;
    } while (uVar3 != 0);
  }
  do {
    if (puVar4 == local_70) {
      local_68 = local_70;
      operator_delete(local_70);
      return uVar1;
    }
    puVar4 = puVar4 + -8;
  } while (puVar4 != (undefined1 *)0x0);
LAB_00c5cb98:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00c5cbf4  FUN_00c5cbf4 =====

void FUN_00c5cbf4(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
  if ((iVar1 == 0) ||
     ((*(long *)(param_1 + 0x20) != 0 && (uVar2 = FUN_00c62c74(), (uVar2 & 1) != 0)))) {
    puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    local_30 = &DAT_aaaaaaaaaaaaaaaa;
    (**(code **)(**(long **)(param_1 + 0x28) + 0x78))(&local_40);
    puVar3 = (undefined1 *)0x0;
    if ((long)puStack_38 - (long)local_40 != 0) {
      puVar3 = local_40;
    }
    (**(code **)(**(long **)(param_1 + 0x30) + 0x50))
              (*(long **)(param_1 + 0x30),puVar3,(long)puStack_38 - (long)local_40 >> 3);
    if (local_40 != (undefined1 *)0x0) {
      uVar2 = (ulong)(((long)local_40 - (long)puStack_38 << 0x3d) -
                     ((long)local_40 - (long)puStack_38)) >> 3;
      if ((ulong)(puStack_38 + (-8 - ((long)puStack_38 << 0x3d))) >> 3 <= uVar2) {
        uVar2 = (ulong)(puStack_38 + (-8 - ((long)puStack_38 << 0x3d))) >> 3;
      }
      puVar3 = puStack_38;
      if ((1 < uVar2) && ((((int)local_40 - (int)puStack_38 | -(int)puStack_38) & 7U) == 0)) {
        uVar2 = uVar2 & 0x1ffffffffffffffe;
        puVar3 = puStack_38 + uVar2 * -8;
        do {
          uVar2 = uVar2 - 2;
        } while (uVar2 != 0);
      }
      while (puVar3 != local_40) {
        puVar3 = puVar3 + -8;
        if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      puStack_38 = local_40;
      operator_delete(local_40);
    }
  }
  return;
}


// ===== 00c5cd14  FUN_00c5cd14 =====

void FUN_00c5cd14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c5cd24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x28) + 0x58))();
  return;
}


// ===== 00c5cd28  FUN_00c5cd28 =====

void FUN_00c5cd28(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00c5cd40  FUN_00c5cd40 =====

void FUN_00c5cd40(undefined8 *param_1)

{
  FUN_00c5c340(*param_1);
  return;
}


// ===== 00c5cd4c  FUN_00c5cd4c =====

void FUN_00c5cd4c(undefined8 *param_1)

{
  FUN_00c5c340(*param_1);
  return;
}


// ===== 00c5cd58  FUN_00c5cd58 =====

void FUN_00c5cd58(undefined8 *param_1)

{
  FUN_00c5c53c(*param_1,*(undefined4 *)(param_1 + 1));
  return;
}


// ===== 00c5cd6c  FUN_00c5cd6c =====

void FUN_00c5cd6c(undefined8 *param_1)

{
  FUN_00c5c53c(*param_1,*(undefined4 *)(param_1 + 1));
  return;
}


// ===== 00c5cd80  FUN_00c5cd80 =====

void FUN_00c5cd80(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_00d4de88;
  lVar2 = *param_2;
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    FUN_00d0f740(1,lVar2 + 8);
  }
  lVar5 = param_2[4];
  lVar2 = param_2[3];
  lVar6 = param_2[1];
  param_1[3] = param_2[2];
  param_1[2] = lVar6;
  param_1[5] = lVar5;
  param_1[4] = lVar2;
  lVar2 = param_2[5];
  param_1[7] = param_2[6];
  param_1[6] = lVar2;
  param_1[8] = param_2[7];
  puVar3 = (undefined8 *)param_2[8];
  param_1[9] = puVar3;
  pcVar4 = (code *)*puVar3;
  if (pcVar4 != (code *)0x0) {
    uVar1 = (*pcVar4)(param_2[5]);
    param_1[6] = uVar1;
  }
  lVar2 = param_2[9];
  param_1[0xb] = param_2[10];
  param_1[10] = lVar2;
  param_1[0xc] = param_2[0xb];
  puVar3 = (undefined8 *)param_2[0xc];
  param_1[0xd] = puVar3;
  pcVar4 = (code *)*puVar3;
  if (pcVar4 != (code *)0x0) {
    uVar1 = (*pcVar4)(param_2[9]);
    param_1[10] = uVar1;
  }
  lVar2 = param_2[0xd];
  param_1[0xf] = param_2[0xe];
  param_1[0xe] = lVar2;
  param_1[0x10] = param_2[0xf];
  puVar3 = (undefined8 *)param_2[0x10];
  param_1[0x11] = puVar3;
  pcVar4 = (code *)*puVar3;
  if (pcVar4 != (code *)0x0) {
    uVar1 = (*pcVar4)(param_2[0xd]);
    param_1[0xe] = uVar1;
  }
  FUN_00be0620(param_1 + 0x12);
  lVar2 = param_2[0x11];
  param_1[0x33] = param_1 + 0x34;
  param_1[0x34] = 0;
  param_1[0x2e] = lVar2;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = param_1 + 0x37;
  *(undefined1 *)(param_1 + 0x39) = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  return;
}


// ===== 00c5ce94  FUN_00c5ce94 =====

void FUN_00c5ce94(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *local_8;
  
  *param_1 = &PTR_FUN_00d4de88;
  local_8 = param_1 + 0x36;
  FUN_00c5f8a4(&local_8,param_1[0x37]);
  local_8 = param_1 + 0x33;
  FUN_00c5f8a4(&local_8,param_1[0x34]);
  pvVar2 = (void *)param_1[0x30];
  if (pvVar2 != (void *)0x0) {
    pvVar3 = (void *)param_1[0x31];
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
    while (pvVar3 != pvVar2) {
      pvVar3 = (void *)((long)pvVar3 + -8);
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[0x31] = pvVar2;
    operator_delete(pvVar2);
  }
  FUN_00be08b0(param_1 + 0x12);
  if (*(code **)(param_1[0x11] + 8) != (code *)0x0) {
    (**(code **)(param_1[0x11] + 8))(param_1[0xe]);
  }
  if (*(code **)(param_1[0xd] + 8) != (code *)0x0) {
    (**(code **)(param_1[0xd] + 8))(param_1[10]);
  }
  if (*(code **)(param_1[9] + 8) != (code *)0x0) {
    (**(code **)(param_1[9] + 8))(param_1[6]);
  }
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar6 + 1), iVar1 == 1)) {
    (**(code **)(*plVar6 + 8))(plVar6);
  }
  return;
}


// ===== 00c5cfec  FUN_00c5cfec =====

void FUN_00c5cfec(void *param_1)

{
  FUN_00c5ce94();
  operator_delete(param_1);
  return;
}


// ===== 00c5d01c  FUN_00c5d01c =====

void FUN_00c5d01c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = param_2[4];
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  uVar5 = param_2[1];
  uVar4 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  *(undefined8 *)(param_1 + 0xb8) = param_2[5];
  *(undefined8 *)(param_1 + 0xb0) = uVar3;
  *(undefined8 *)(param_1 + 200) = uVar2;
  *(undefined8 *)(param_1 + 0xc0) = uVar1;
  *(undefined8 *)(param_1 + 0x98) = uVar5;
  *(undefined8 *)(param_1 + 0x90) = uVar4;
  *(undefined8 *)(param_1 + 0xa8) = uVar7;
  *(undefined8 *)(param_1 + 0xa0) = uVar6;
  uVar3 = param_2[0xc];
  uVar2 = param_2[0xf];
  uVar1 = param_2[0xe];
  uVar5 = param_2[9];
  uVar4 = param_2[8];
  uVar7 = param_2[0xb];
  uVar6 = param_2[10];
  *(undefined8 *)(param_1 + 0xf8) = param_2[0xd];
  *(undefined8 *)(param_1 + 0xf0) = uVar3;
  *(undefined8 *)(param_1 + 0x108) = uVar2;
  *(undefined8 *)(param_1 + 0x100) = uVar1;
  *(undefined8 *)(param_1 + 0xd8) = uVar5;
  *(undefined8 *)(param_1 + 0xd0) = uVar4;
  *(undefined8 *)(param_1 + 0xe8) = uVar7;
  *(undefined8 *)(param_1 + 0xe0) = uVar6;
  uVar3 = param_2[0x14];
  uVar2 = param_2[0x17];
  uVar1 = param_2[0x16];
  uVar5 = param_2[0x11];
  uVar4 = param_2[0x10];
  uVar7 = param_2[0x13];
  uVar6 = param_2[0x12];
  *(undefined8 *)(param_1 + 0x138) = param_2[0x15];
  *(undefined8 *)(param_1 + 0x130) = uVar3;
  *(undefined8 *)(param_1 + 0x148) = uVar2;
  *(undefined8 *)(param_1 + 0x140) = uVar1;
  *(undefined8 *)(param_1 + 0x118) = uVar5;
  *(undefined8 *)(param_1 + 0x110) = uVar4;
  *(undefined8 *)(param_1 + 0x128) = uVar7;
  *(undefined8 *)(param_1 + 0x120) = uVar6;
  uVar1 = *(undefined8 *)((long)param_2 + 0xcd);
  uVar3 = param_2[0x19];
  uVar2 = param_2[0x18];
  *(undefined8 *)(param_1 + 0x165) = *(undefined8 *)((long)param_2 + 0xd5);
  *(undefined8 *)(param_1 + 0x15d) = uVar1;
  *(undefined8 *)(param_1 + 0x158) = uVar3;
  *(undefined8 *)(param_1 + 0x150) = uVar2;
  return;
}


// ===== 00c5d068  FUN_00c5d068 =====

void FUN_00c5d068(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x178) = param_2;
  return;
}


// ===== 00c5d074  FUN_00c5d074 =====

void FUN_00c5d074(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_8;
  
  puVar1 = *(undefined8 **)(param_1 + 0x188);
  local_8 = param_2;
  if (puVar1 < *(undefined8 **)(param_1 + 400)) {
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
    puVar2 = (undefined8 *)FUN_00c5f7b0(param_1 + 0x180,&local_8);
  }
  *(undefined8 **)(param_1 + 0x188) = puVar2;
  FUN_00c5f918(0,param_1 + 0x1b0,param_1 + 0x1b0,&local_8);
  return;
}


// ===== 00c5d0f0  FUN_00c5d0f0 =====

void FUN_00c5d0f0(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long local_28;
  
  local_28 = param_2;
  FUN_00c5d298(param_1 + 0x198,&local_28);
  FUN_00c5d298(param_1 + 0x1b0,&local_28);
  plVar3 = *(long **)(param_1 + 0x180);
  plVar2 = *(long **)(param_1 + 0x188);
  if (plVar3 == plVar2) {
LAB_00c5d1e0:
    if (plVar3 != plVar2) {
      memmove(plVar3,plVar3 + 1,(long)plVar2 - (long)(plVar3 + 1));
      plVar3 = *(long **)(param_1 + 0x188);
      uVar6 = (ulong)((long)plVar3 + (-8 - ((long)plVar3 << 0x3d))) >> 3;
      uVar5 = (((long)plVar2 - (long)plVar3 << 0x3d) - ((long)plVar2 - (long)plVar3)) + 8U >> 3;
      if (uVar6 <= uVar5) {
        uVar5 = uVar6;
      }
      if ((1 < uVar5) && ((-(int)plVar3 & 7U) == 0)) {
        uVar5 = uVar5 & 0x1ffffffffffffffe;
        plVar3 = plVar3 + -uVar5;
        do {
          uVar5 = uVar5 - 2;
        } while (uVar5 != 0);
      }
      do {
        if (plVar3 == plVar2 + -1) {
          *(long **)(param_1 + 0x188) = plVar2 + -1;
          if (*(long *)(param_1 + 0x178) == local_28) {
            *(undefined8 *)(param_1 + 0x178) = 0;
          }
          return;
        }
        plVar3 = plVar3 + -1;
      } while (plVar3 != (long *)0x0);
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
  }
  else {
    uVar5 = (long)plVar2 + (-8 - (long)plVar3);
    uVar4 = (uint)uVar5;
    if ((~uVar4 & 0x18) != 0) {
      uVar6 = (ulong)((uVar4 >> 3) + 1) & 3;
      do {
        if (*plVar3 == local_28) goto LAB_00c5d1e0;
        uVar6 = uVar6 - 1;
        plVar3 = plVar3 + 1;
      } while (uVar6 != 0);
    }
    if (0x17 < uVar5) {
      plVar3 = plVar3 + 2;
      do {
        if (plVar3[-2] == local_28) {
          plVar3 = plVar3 + -2;
          goto LAB_00c5d1e0;
        }
        if (plVar3[-1] == local_28) {
          plVar3 = plVar3 + -1;
          goto LAB_00c5d1e0;
        }
        if (*plVar3 == local_28) goto LAB_00c5d1e0;
        if (plVar3[1] == local_28) {
          plVar3 = plVar3 + 1;
          goto LAB_00c5d1e0;
        }
        plVar1 = plVar3 + 2;
        plVar3 = plVar3 + 4;
      } while (plVar1 != plVar2);
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:1160: libc++ Hardening assertion __position != end() failed: vector::erase(iterator) called with a non-dereferenceable iterator\n"
            );
}


// ===== 00c5d298  FUN_00c5d298 =====

long * FUN_00c5d298(undefined8 *param_1,ulong *param_2)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  plVar3 = (long *)param_1[1];
  if (plVar3 != (long *)0x0) {
    plVar6 = plVar3;
    do {
      while ((ulong)plVar6[4] <= *param_2) {
        if (*param_2 <= (ulong)plVar6[4]) {
          if (plVar6 != param_1 + 1) {
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
            if ((long *)*param_1 == plVar6) {
              *param_1 = plVar5;
            }
            param_1[2] = param_1[2] + -1;
            FUN_005d5d48(plVar3,plVar6);
            if (plVar6 != (long *)0xffffffffffffffe0) {
              operator_delete(plVar6);
              return (long *)1;
            }
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          goto LAB_00c5d310;
        }
        plVar6 = (long *)plVar6[1];
        if (plVar6 == (long *)0x0) goto LAB_00c5d310;
      }
      plVar6 = (long *)*plVar6;
    } while (plVar6 != (long *)0x0);
LAB_00c5d310:
    plVar3 = (long *)0x0;
  }
  return plVar3;
}


// ===== 00c5d38c  FUN_00c5d38c =====

uint FUN_00c5d38c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar4 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  puVar1 = *(undefined8 **)(param_1 + 0x180);
  puVar2 = *(undefined8 **)(param_1 + 0x188);
  if (puVar1 == puVar2) {
    uVar3 = 0;
  }
  else {
    do {
      puVar5 = puVar1 + 1;
      uVar3 = FUN_00c5debc(param_1,*puVar1,uVar4);
      if ((uVar3 & 1) != 0) break;
      puVar1 = puVar5;
    } while (puVar5 != puVar2);
  }
  return uVar3 & 1;
}


// ===== 00c5d408  FUN_00c5d408 =====

void FUN_00c5d408(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  undefined8 uVar10;
  
  puVar2 = (undefined8 *)param_2[0x31];
  for (puVar1 = (undefined8 *)param_2[0x30]; puVar1 != puVar2; puVar1 = puVar1 + 1) {
    uVar10 = *puVar1;
    uVar5 = FUN_00c65344(uVar10);
    if (((uVar5 & 1) != 0) && (iVar3 = FUN_00c67948(uVar10), iVar3 < 3)) {
      bVar9 = true;
      if (param_2[0x2f] == 0) goto LAB_00c5d48c;
      goto LAB_00c5d480;
    }
  }
  bVar9 = false;
  if (param_2[0x2f] != 0) {
LAB_00c5d480:
    uVar4 = FUN_00c66c08();
    if (!bVar9 && (uVar4 & 1) == 0) {
      uVar5 = FUN_00be0968(param_2 + 0x12);
      goto LAB_00c5d4a8;
    }
  }
LAB_00c5d48c:
  uVar5 = FUN_00be098c(param_2 + 0x12);
LAB_00c5d4a8:
  uVar6 = FUN_00be09b0(param_2 + 0x12);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  lVar7 = (**(code **)(*(long *)param_2[3] + 0x10))((long *)param_2[3]);
  lVar8 = 0x7fffffffffffffff;
  if ((param_3 != 0x7fffffffffffffff) && (uVar5 != 0x7fffffffffffffff)) {
    lVar8 = -0x8000000000000000;
    if (uVar5 != 0x8000000000000000 && param_3 != -0x8000000000000000) {
      lVar8 = uVar5 + param_3;
    }
  }
  if (lVar7 < lVar8) {
    lVar8 = 0;
  }
  else {
    lVar8 = (**(code **)(*param_2 + 0x58))(param_2);
  }
  lVar7 = FUN_00be08b8(param_2 + 0x12);
  uVar6 = lVar7 / 10;
  if ((long)uVar6 < 0xc351) {
    uVar6 = 50000;
  }
  if ((long)uVar5 <= (long)uVar6) {
    uVar6 = uVar5;
  }
  if (lVar8 == 0) {
    *(undefined1 *)param_1 = 0;
  }
  else {
    *param_1 = lVar8;
  }
  *(bool *)(param_1 + 1) = lVar8 != 0;
  iVar3 = (int)(uVar6 / 1000);
  if (499 < uVar6 % 1000) {
    iVar3 = iVar3 + 1;
  }
  if ((uVar5 & 0x8000000000000000) != 0) {
    iVar3 = -(int)(-uVar6 / 1000) - (uint)(500 < -uVar6 % 1000);
  }
  *(int *)(param_1 + 2) = iVar3;
  return;
}


// ===== 00c5d5dc  FUN_00c5d5dc =====

void FUN_00c5d5dc(long param_1,long param_2)

{
  ulong extraout_x1;
  long local_8;
  
  if ((param_2 != 0) &&
     (local_8 = param_2, FUN_00c5f918(0,param_1 + 0x198,param_1 + 0x198,&local_8),
     (extraout_x1 & 1) != 0)) {
    FUN_00c5d298(param_1 + 0x1b0,&local_8);
  }
  return;
}


// ===== 00c5d62c  FUN_00c5d62c =====

long * FUN_00c5d62c(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *local_80;
  long *local_78;
  long *local_68;
  long *local_60;
  long *local_58;
  
  uVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  if (*(long *)(param_1 + 0x178) == 0) {
LAB_00c5d6b0:
    local_68 = (long *)0x0;
    local_60 = (long *)0x0;
    local_58 = (long *)0x0;
    FUN_00c5dc00(&local_80,param_1);
    plVar10 = local_78;
    plVar9 = local_80;
    for (plVar6 = local_80; plVar6 != plVar10; plVar6 = plVar6 + 1) {
      local_80 = plVar9;
      uVar3 = FUN_00c5db24(param_1,*plVar6,uVar2);
      if ((uVar3 & 1) != 0) {
        if (local_60 < local_58) {
          if (local_60 == (long *)0x0) goto LAB_00c5dadc;
          *local_60 = *plVar6;
          local_60 = local_60 + 1;
        }
        else {
          local_60 = (long *)FUN_00c5f7b0(&local_68,plVar6);
        }
      }
      plVar9 = local_80;
    }
    if (plVar9 != (long *)0x0) {
      uVar8 = (ulong)((long)local_78 + (-8 - ((long)local_78 << 0x3d))) >> 3;
      uVar3 = (ulong)(((long)plVar9 - (long)local_78 << 0x3d) - ((long)plVar9 - (long)local_78)) >>
              3;
      if (uVar8 <= uVar3) {
        uVar3 = uVar8;
      }
      if ((1 < uVar3) && ((((int)plVar9 - (int)local_78 | -(int)local_78) & 7U) == 0)) {
        uVar3 = uVar3 & 0x1ffffffffffffffe;
        local_78 = local_78 + -uVar3;
        do {
          uVar3 = uVar3 - 2;
        } while (uVar3 != 0);
      }
      do {
        if (local_78 == plVar9) {
          operator_delete(plVar9);
          goto LAB_00c5d7a8;
        }
        local_78 = local_78 + -1;
      } while (local_78 != (long *)0x0);
      goto LAB_00c5daac;
    }
LAB_00c5d7a8:
    plVar7 = local_60;
    plVar10 = local_68;
    plVar11 = local_68;
    plVar6 = local_68;
    if (local_68 != local_60) {
      while (plVar10 = plVar11, plVar6 = plVar6 + 1, plVar6 != plVar7) {
        plVar9 = (long *)*plVar10;
        lVar4 = FUN_00c62ac8(*plVar6);
        lVar5 = FUN_00c62ac8(plVar9);
        plVar11 = plVar6;
        if (lVar5 <= lVar4) {
          plVar11 = plVar10;
        }
      }
    }
    plVar6 = local_60;
    if (plVar10 != local_60) {
      plVar9 = (long *)*plVar10;
    }
    if (local_68 != (long *)0x0) {
      uVar8 = (ulong)((long)local_60 + (-8 - ((long)local_60 << 0x3d))) >> 3;
      uVar3 = (ulong)(((long)local_68 - (long)local_60 << 0x3d) - ((long)local_68 - (long)local_60))
              >> 3;
      if (uVar8 <= uVar3) {
        uVar3 = uVar8;
      }
      plVar7 = local_60;
      if ((1 < uVar3) && (((ulong)local_68 & 7) == 0)) {
        uVar3 = uVar3 & 0x1ffffffffffffffe;
        plVar7 = local_60 + -uVar3;
        do {
          uVar3 = uVar3 - 2;
        } while (uVar3 != 0);
      }
      do {
        if (plVar7 == local_68) {
          local_60 = local_68;
          operator_delete(local_68);
          goto joined_r0x00c5dad4;
        }
        plVar7 = plVar7 + -1;
      } while (plVar7 != (long *)0x0);
      goto LAB_00c5daac;
    }
joined_r0x00c5dad4:
    if (plVar10 != plVar6) {
      return plVar9;
    }
  }
  else {
    uVar3 = FUN_00c66bfc(*(long *)(param_1 + 0x178));
    if ((((uVar3 & 1) != 0) &&
        (uVar3 = FUN_00c63548(*(undefined8 *)(param_1 + 0x178)), (uVar3 & 1) != 0)) &&
       (uVar3 = FUN_00c5db24(param_1,*(undefined8 *)(param_1 + 0x178),uVar2), (uVar3 & 1) != 0)) {
      return *(long **)(param_1 + 0x178);
    }
    if ((*(long *)(param_1 + 0x178) == 0) || (uVar3 = FUN_00c66c08(), (uVar3 & 1) != 0))
    goto LAB_00c5d6b0;
  }
  plVar6 = (long *)FUN_00c5dd8c(param_1,uVar2);
  if (plVar6 != (long *)0x0) {
    return plVar6;
  }
  if (*(long *)(param_1 + 0x1c0) + *(long *)(param_1 + 0x1a8) !=
      *(long *)(param_1 + 0x188) - *(long *)(param_1 + 0x180) >> 3) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../p2p/base/basic_ice_controller.cc",0xc9,
                 "connections_.size() == pinged_connections_.size() + unpinged_connections_.size()",
                 &DAT_001f5fa0);
  }
  plVar9 = *(long **)(param_1 + 0x1b0);
  plVar6 = (long *)(param_1 + 0x1b8);
  while (plVar9 != plVar6) {
    uVar3 = FUN_00c5debc(param_1,plVar9[4],uVar2);
    if ((uVar3 & 1) != 0) goto LAB_00c5d950;
    plVar10 = (long *)plVar9[1];
    plVar7 = plVar9;
    if ((long *)plVar9[1] == (long *)0x0) {
      do {
        plVar9 = (long *)plVar7[2];
        bVar1 = plVar7 != (long *)*plVar9;
        plVar7 = plVar9;
      } while (bVar1);
    }
    else {
      do {
        plVar9 = plVar10;
        plVar10 = (long *)*plVar9;
      } while ((long *)*plVar9 != (long *)0x0);
    }
  }
  FUN_00c5fa20(param_1 + 0x1b0,*(undefined8 *)(param_1 + 0x198),param_1 + 0x1a0);
  local_68 = (long *)(param_1 + 0x198);
  FUN_00c5f8a4(&local_68,*(undefined8 *)(param_1 + 0x1a0));
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(long *)(param_1 + 0x198) = param_1 + 0x1a0;
LAB_00c5d950:
  plVar9 = *(long **)(param_1 + 0x1b0);
  local_68 = (long *)0x0;
  local_60 = (long *)0x0;
  local_58 = (long *)0x0;
  if (plVar9 == plVar6) {
LAB_00c5da4c:
    plVar9 = (long *)0x0;
  }
  else {
    do {
      plVar10 = plVar9 + 4;
      uVar3 = FUN_00c5debc(param_1,*plVar10,uVar2);
      if ((uVar3 & 1) != 0) {
        if (local_60 < local_58) {
          if (local_60 == (long *)0x0) {
LAB_00c5dadc:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          *local_60 = *plVar10;
          local_60 = local_60 + 1;
        }
        else {
          local_60 = (long *)FUN_00c5f7b0(&local_68,plVar10);
        }
      }
      plVar10 = local_60;
      plVar7 = (long *)plVar9[1];
      plVar11 = plVar9;
      if ((long *)plVar9[1] == (long *)0x0) {
        do {
          plVar9 = (long *)plVar11[2];
          bVar1 = plVar11 != (long *)*plVar9;
          plVar11 = plVar9;
        } while (bVar1);
      }
      else {
        do {
          plVar9 = plVar7;
          plVar7 = (long *)*plVar9;
        } while ((long *)*plVar9 != (long *)0x0);
      }
    } while (plVar9 != plVar6);
    plVar9 = local_68;
    plVar7 = local_68;
    plVar6 = local_68;
    if (local_68 != local_60) {
      while (plVar9 = plVar7, plVar6 = plVar6 + 1, plVar6 != plVar10) {
        lVar4 = *plVar6;
        plVar7 = plVar9;
        if ((*plVar9 != lVar4) &&
           (lVar5 = FUN_00c5e038(param_1,*plVar9,lVar4), plVar7 = plVar6, lVar5 != lVar4)) {
          plVar7 = plVar9;
        }
      }
    }
    if (plVar9 == local_60) goto LAB_00c5da4c;
    plVar9 = (long *)*plVar9;
  }
  if (local_68 == (long *)0x0) {
    return plVar9;
  }
  uVar8 = (ulong)((long)local_60 + (-8 - ((long)local_60 << 0x3d))) >> 3;
  uVar3 = (ulong)(((long)local_68 - (long)local_60 << 0x3d) - ((long)local_68 - (long)local_60)) >>
          3;
  if (uVar8 <= uVar3) {
    uVar3 = uVar8;
  }
  plVar6 = local_60;
  if (1 < uVar3 && ((ulong)local_68 & 7) == 0) {
    uVar3 = uVar3 & 0x1ffffffffffffffe;
    plVar6 = local_60 + -uVar3;
    do {
      uVar3 = uVar3 - 2;
    } while (uVar3 != 0);
  }
  do {
    if (plVar6 == local_68) {
      local_60 = local_68;
      operator_delete(local_68);
      return plVar9;
    }
    plVar6 = plVar6 + -1;
  } while (plVar6 != (long *)0x0);
LAB_00c5daac:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00c5db24  FUN_00c5db24 =====

bool FUN_00c5db24(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  iVar1 = FUN_00c67948(param_2);
  if (iVar1 < 3) {
    lVar2 = FUN_00be098c(param_1 + 0x90);
    lVar3 = FUN_00be09b0(param_1 + 0x90);
    if (lVar2 <= lVar3) {
      lVar2 = lVar3;
    }
  }
  else {
    lVar2 = FUN_00be08fc(param_1 + 0x90);
    lVar3 = lVar2;
    if (899999 < lVar2) {
      lVar3 = 900000;
    }
    if (((*(long *)(param_1 + 0x178) == 0) || (uVar4 = FUN_00c66c08(), (uVar4 & 1) != 0)) ||
       (uVar4 = FUN_00c66c48(param_2,param_3), (uVar4 & 1) == 0)) {
      lVar2 = lVar3;
    }
  }
  lVar5 = FUN_00c62ac8(param_2);
  lVar3 = 0x7fffffffffffffff;
  if ((lVar5 != 0x7fffffffffffffff) && (lVar2 != 0x7fffffffffffffff)) {
    lVar3 = -0x8000000000000000;
    if (lVar2 != -0x8000000000000000 && lVar5 != -0x8000000000000000) {
      lVar3 = lVar5 + lVar2;
    }
  }
  return lVar3 <= param_3;
}


// ===== 00c5dc00  FUN_00c5dc00 =====

void FUN_00c5dc00(undefined8 *param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  long *plStack_50;
  undefined8 local_48;
  undefined1 uStack_21;
  
  *param_1 = 0;
  param_1[1] = 0;
  plVar6 = *(long **)(param_2 + 0x178);
  param_1[2] = 0;
  local_68 = 0;
  local_60 = 0;
  local_70 = &local_68;
  if (plVar6 != (long *)0x0) {
    local_48 = (**(code **)(*plVar6 + 0x20))(plVar6);
    local_58 = &local_48;
    lVar2 = FUN_00c5fd40(0,&local_70,&local_70,&DAT_001f94c3,&local_58,&uStack_21);
    *(long **)(lVar2 + 0x28) = plVar6;
  }
  puVar4 = *(undefined8 **)(param_2 + 0x188);
  puVar5 = local_70;
  for (puVar7 = *(undefined8 **)(param_2 + 0x180); local_70 = puVar5, puVar7 != puVar4;
      puVar7 = puVar7 + 1) {
    plVar6 = (long *)*puVar7;
    local_58 = (undefined8 *)(**(code **)(*plVar6 + 0x20))(plVar6);
    plStack_50 = plVar6;
    FUN_00c5fe48(0,&local_70,&local_70,&local_58);
    puVar5 = local_70;
  }
  do {
    if (puVar5 == &local_68) {
      local_58 = &local_70;
      FUN_00c5fccc(&local_58,local_68);
      return;
    }
    local_58 = (undefined8 *)puVar5[5];
    uVar3 = FUN_00c63548();
    if (((uVar3 & 1) != 0) && (uVar3 = FUN_00c66bfc(local_58), (uVar3 & 1) != 0)) {
      puVar7 = (undefined8 *)param_1[1];
      if (puVar7 < (undefined8 *)param_1[2]) {
        if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar4 = puVar7 + 1;
        *puVar7 = local_58;
      }
      else {
        puVar4 = (undefined8 *)FUN_00c5f7b0(param_1,&local_58);
      }
      param_1[1] = puVar4;
    }
    puVar7 = (undefined8 *)puVar5[1];
    puVar4 = puVar5;
    if ((undefined8 *)puVar5[1] == (undefined8 *)0x0) {
      do {
        puVar5 = (undefined8 *)puVar4[2];
        bVar1 = puVar4 != (undefined8 *)*puVar5;
        puVar4 = puVar5;
      } while (bVar1);
    }
    else {
      do {
        puVar5 = puVar7;
        puVar7 = (undefined8 *)*puVar5;
      } while ((undefined8 *)*puVar5 != (undefined8 *)0x0);
    }
  } while( true );
}


// ===== 00c5dd8c  FUN_00c5dd8c =====

long FUN_00c5dd8c(long param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  void *local_68 [2];
  char cStack_51;
  
  plVar8 = *(long **)(param_1 + 0x180);
  plVar1 = *(long **)(param_1 + 0x188);
  if (plVar8 == plVar1) {
    lVar6 = 0;
  }
  else {
    lVar5 = 0;
    do {
      lVar7 = *plVar8;
      uVar2 = FUN_00c5debc(param_1,lVar7,param_2);
      lVar6 = lVar5;
      if (((uVar2 & 1) != 0) && (uVar2 = FUN_00c63548(lVar7), (uVar2 & 1) == 0)) {
        lVar3 = FUN_00c66904(lVar7);
        lVar4 = FUN_00c62ac8(lVar7);
        if ((lVar4 < lVar3) && (lVar6 = lVar7, lVar5 != 0)) {
          lVar7 = FUN_00c66904(lVar7);
          lVar3 = FUN_00c66904(lVar5);
          if (lVar3 <= lVar7) {
            lVar6 = lVar5;
          }
        }
      }
      plVar8 = plVar8 + 1;
      lVar5 = lVar6;
    } while (plVar8 != plVar1);
    if ((lVar6 != 0) && (uVar2 = FUN_00417e08(), (uVar2 & 1) == 0)) {
      FUN_00c61eb8(local_68,lVar6);
      FUN_00623bb0(&DAT_001f4e90,"../../p2p/base/basic_ice_controller.cc",0x811,
                   "Selecting connection for triggered check: ",local_68);
      if (cStack_51 < '\0') {
        operator_delete(local_68[0]);
      }
    }
  }
  return lVar6;
}


// ===== 00c5debc  FUN_00c5debc =====

ulong FUN_00c5debc(long param_1,long *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = (**(code **)(*param_2 + 0x18))(param_2);
  uVar3 = *(ulong *)(lVar2 + 0xa8);
  if ((*(byte *)(lVar2 + 0xb7) & 0x80) == 0) {
    uVar3 = (ulong)*(byte *)(lVar2 + 0xb7);
  }
  if (uVar3 != 0) {
    uVar3 = *(ulong *)(lVar2 + 0xc0);
    if ((*(byte *)(lVar2 + 0xcf) & 0x80) == 0) {
      uVar3 = (ulong)*(byte *)(lVar2 + 0xcf);
    }
    if ((((uVar3 != 0) && (iVar1 = FUN_00c6793c(param_2), iVar1 != 3)) &&
        ((uVar3 = FUN_00c66bfc(param_2), (uVar3 & 1) != 0 ||
         (uVar3 = FUN_00c63548(param_2), (uVar3 & 1) != 0)))) &&
       (uVar3 = FUN_00c67f44(param_2,*(long *)(param_1 + 0x170) + 4), (uVar3 & 1) == 0)) {
      if ((*(long *)(param_1 + 0x178) != 0) && (uVar3 = FUN_00c66c08(), (uVar3 & 1) == 0)) {
        iVar1 = (**(code **)(param_1 + 0x40))(param_1 + 0x30);
        if ((iVar1 == 2) &&
           ((param_2 != *(long **)(param_1 + 0x178) &&
            (uVar3 = FUN_00c65344(param_2), (uVar3 & 1) != 0)))) {
          iVar1 = FUN_00c668f8(param_2);
          if (iVar1 != 0) {
            lVar4 = FUN_00c62ad4(param_2);
            lVar5 = FUN_00be08d8(param_1 + 0x90);
            lVar2 = 0x7fffffffffffffff;
            if ((lVar4 != 0x7fffffffffffffff) && (lVar5 != 0x7fffffffffffffff)) {
              lVar2 = -0x8000000000000000;
              if (lVar5 != -0x8000000000000000 && lVar4 != -0x8000000000000000) {
                lVar2 = lVar5 + lVar4;
              }
            }
            return (ulong)(lVar2 <= param_3);
          }
        }
        else {
          uVar3 = FUN_00c65344(param_2);
          if ((uVar3 & 1) == 0) {
            return 0;
          }
          uVar3 = FUN_00c63548(param_2);
          if ((uVar3 & 1) != 0) {
            uVar3 = FUN_00c5db24(param_1,param_2,param_3);
            return uVar3;
          }
        }
      }
      return 1;
    }
  }
  return 0;
}


// ===== 00c5e038  FUN_00c5e038 =====

long FUN_00c5e038(long param_1,long param_2,long param_3)

{
  void *__src;
  long lVar1;
  long lVar2;
  long lVar3;
  long *__dest;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  
  if ((*(char *)(param_1 + 0xb4) == '\x01') &&
     (lVar1 = FUN_00c5e1d0(param_1,param_2,param_3), lVar1 != 0)) {
    return lVar1;
  }
  lVar2 = FUN_00c62ac8(param_2);
  lVar3 = FUN_00c62ac8(param_3);
  lVar1 = param_2;
  if (lVar3 <= lVar2) {
    lVar2 = FUN_00c62ac8(param_2);
    lVar3 = FUN_00c62ac8(param_3);
    lVar1 = param_3;
    if (lVar2 <= lVar3) goto LAB_00c5e0c4;
  }
  if (lVar1 != 0) {
    return lVar1;
  }
LAB_00c5e0c4:
  __src = *(void **)(param_1 + 0x180);
  lVar1 = *(long *)(param_1 + 0x188);
  uVar5 = lVar1 - (long)__src;
  lVar2 = lRam0000000000000000;
  if (uVar5 != 0) {
    if ((long)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00c5cd28();
    }
    __dest = (long *)operator_new(uVar5);
    plVar6 = (long *)((long)__dest + uVar5);
    memcpy(__dest,__src,uVar5);
    uVar4 = 0;
    do {
      lVar2 = *(long *)((long)__dest + uVar4);
      if ((lVar2 == param_2) || (lVar2 == param_3)) goto LAB_00c5e118;
      uVar4 = uVar4 + 8;
    } while (uVar5 != uVar4);
    lVar2 = *plVar6;
LAB_00c5e118:
    if (__dest != (long *)0x0) {
      lVar3 = (long)__src - ((long)__dest + lVar1);
      uVar4 = (ulong)(((lVar1 - (lVar1 << 0x3d)) - (long)__src) + ((long)__src << 0x3d)) >> 3;
      uVar5 = ((lVar3 << 0x3d) - lVar3) - 8U >> 3;
      if (uVar4 <= uVar5) {
        uVar5 = uVar4;
      }
      if ((1 < uVar5) && (((int)__src - (int)lVar1 & 7U) == 0)) {
        uVar5 = uVar5 & 0x1ffffffffffffffe;
        plVar6 = plVar6 + -uVar5;
        do {
          uVar5 = uVar5 - 2;
        } while (uVar5 != 0);
      }
      while (plVar6 != __dest) {
        plVar6 = plVar6 + -1;
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      operator_delete(__dest);
    }
  }
  return lVar2;
}


// ===== 00c5e1d0  FUN_00c5e1d0 =====

long * FUN_00c5e1d0(undefined8 param_1,long *param_2,long *param_3)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  size_t __n;
  undefined8 *puVar8;
  
  (**(code **)(*param_2 + 0x10))(param_2);
  uVar6 = FUN_00aff31c();
  if ((uVar6 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x18))(param_2);
    uVar3 = FUN_00aff31c();
  }
  (**(code **)(*param_3 + 0x10))(param_3);
  uVar6 = FUN_00aff31c();
  if ((uVar6 & 1) == 0) {
    uVar4 = 0;
LAB_00c5e264:
    if (((uVar3 ^ 1) & 1) == 0) {
      return param_2;
    }
  }
  else {
    (**(code **)(*param_3 + 0x18))(param_3);
    uVar4 = FUN_00aff31c();
    if ((uVar4 & 1) == 0) goto LAB_00c5e264;
  }
  if (((uVar3 | uVar4 ^ 0xffffffff) & 1) == 0) {
    return param_3;
  }
  if ((uVar3 & uVar4 & 1) == 0) {
    return (long *)0x0;
  }
  lVar7 = (**(code **)(*param_2 + 0x10))(param_2);
  puVar8 = (undefined8 *)(lVar7 + 0x38);
  __n = strlen("udp");
  if ((long)*(char *)(lVar7 + 0x4f) < 0) {
    if (__n == *(size_t *)(lVar7 + 0x40)) {
      if (__n == 0xffffffffffffffff) goto LAB_00c5e39c;
      puVar8 = (undefined8 *)*puVar8;
      goto LAB_00c5e2d8;
    }
LAB_00c5e2f8:
    bVar1 = false;
  }
  else {
    if (__n != (long)*(char *)(lVar7 + 0x4f)) goto LAB_00c5e2f8;
LAB_00c5e2d8:
    iVar5 = memcmp(puVar8,PTR_DAT_00d528e8,__n);
    bVar1 = iVar5 == 0;
  }
  lVar7 = (**(code **)(*param_3 + 0x10))(param_3);
  puVar8 = (undefined8 *)(lVar7 + 0x38);
  if ((long)*(char *)(lVar7 + 0x4f) < 0) {
    if (__n == *(size_t *)(lVar7 + 0x40)) {
      if (__n == 0xffffffffffffffff) {
LAB_00c5e39c:
                    /* WARNING: Subroutine does not return */
        FUN_005f5590();
      }
      puVar8 = (undefined8 *)*puVar8;
      goto LAB_00c5e340;
    }
LAB_00c5e360:
    bVar2 = false;
  }
  else {
    if (__n != (long)*(char *)(lVar7 + 0x4f)) goto LAB_00c5e360;
LAB_00c5e340:
    iVar5 = memcmp(puVar8,PTR_DAT_00d528e8,__n);
    bVar2 = iVar5 == 0;
    if (bVar2) goto LAB_00c5e370;
  }
  if (!(bool)(bVar1 ^ 1)) {
    return param_2;
  }
LAB_00c5e370:
  if (!(bool)(bVar1 & bVar2)) {
    return (long *)0x0;
  }
  return param_3;
}


// ===== 00c5e3a0  FUN_00c5e3a0 =====

/* WARNING: Removing unreachable block (ram,0x00c5e628) */
/* WARNING: Removing unreachable block (ram,0x00c5e598) */
/* WARNING: Removing unreachable block (ram,0x00c5e718) */
/* WARNING: Removing unreachable block (ram,0x00c5e57c) */
/* WARNING: Removing unreachable block (ram,0x00c5e60c) */
/* WARNING: Removing unreachable block (ram,0x00c5e698) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00c5e3a0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined1 uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  long local_100;
  long local_f8;
  undefined1 uStack_e9;
  char *local_e8;
  char **local_e0;
  undefined1 *local_d8;
  char *local_d0;
  char **ppcStack_c8;
  char *local_c0;
  undefined8 uStack_b8;
  long local_b0;
  char **local_a8;
  char *local_a0;
  char **ppcStack_98;
  char *local_90;
  undefined8 uStack_88;
  char **local_80;
  char **local_78;
  char *local_68;
  undefined8 uStack_60;
  char **local_58;
  long local_38;
  
  if (((*(byte *)(*(long *)(param_2 + 0x170) + 0x10) & 1) == 0) &&
     ((*(byte *)(*(long *)(param_2 + 0x170) + 0x18) & 1) == 0)) {
    *param_1 = param_4;
    *(undefined1 *)(param_1 + 1) = 1;
    *(undefined1 *)(param_1 + 2) = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    goto LAB_00c5e7ac;
  }
  lVar5 = (**(code **)(**(long **)(param_2 + 0x18) + 0x10))();
  local_38 = lVar5;
  lVar6 = FUN_00c66904(param_4);
  lVar9 = *(long *)(param_2 + 0x170);
  if ((lVar6 < 1) || ((*(byte *)(lVar9 + 0x18) & 1) == 0)) {
    if (*(char *)(lVar9 + 0x10) == '\x01') {
      lVar6 = 0xc;
      goto LAB_00c5e42c;
    }
    uVar10 = 0;
  }
  else {
    lVar6 = 0x14;
LAB_00c5e42c:
    uVar10 = *(uint *)(lVar9 + lVar6);
  }
  plVar1 = (long *)(param_2 + 0x1c8);
  plVar2 = plVar1;
  if (*(byte *)(param_2 + 0x1d0) == 0) {
    plVar2 = &local_38;
  }
  lVar9 = *plVar2;
  lVar6 = lVar9;
  if (lVar9 != -0x8000000000000000) {
    lVar6 = lVar9 + (long)(int)uVar10 * 1000;
  }
  lVar3 = lVar9;
  if (lVar9 != 0x7fffffffffffffff) {
    lVar3 = lVar6;
  }
  if (lVar5 < lVar3) {
    if ((*(byte *)(param_2 + 0x1d0) & 1) == 0) {
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *(long *)(param_2 + 0x1c8) = lVar5;
      *(undefined1 *)(param_2 + 0x1d0) = 1;
      uVar7 = FUN_00417e08();
      if ((uVar7 & 1) == 0) {
        local_68 = "../../p2p/base/basic_ice_controller.cc";
        uStack_60 = 0xf09;
        local_58 = &local_a0;
        local_e0 = &local_68;
        local_e8 = "set initial_select_timestamp_ = ";
        FUN_005f3500(&local_c0,&local_38);
        if (local_b0 < 0) {
          FUN_005478d8(&local_90,local_c0,uStack_b8);
          local_78 = &local_e8;
          if (local_b0 < 0) {
            operator_delete(local_c0);
          }
        }
        else {
          uStack_88 = uStack_b8;
          local_90 = local_c0;
          local_80 = (char **)local_b0;
          local_78 = &local_e8;
        }
        FUN_00623bb0(&DAT_001f6510,*(undefined8 *)local_78[1],*(undefined4 *)(local_78[1] + 8),
                     *local_78,&local_90);
      }
    }
    lVar5 = *(long *)(param_2 + 0x170);
    uVar11 = uVar10;
    if ((*(char *)(lVar5 + 0x10) == '\x01') &&
       (uVar11 = *(uint *)(lVar5 + 0xc), (int)uVar10 <= (int)*(uint *)(lVar5 + 0xc))) {
      uVar11 = uVar10;
    }
    uVar10 = uVar11;
    if ((*(char *)(lVar5 + 0x18) == '\x01') &&
       (uVar10 = *(uint *)(lVar5 + 0x14), (int)uVar11 <= (int)*(uint *)(lVar5 + 0x14))) {
      uVar10 = uVar11;
    }
    uVar7 = FUN_00417e08();
    if ((uVar7 & 1) == 0) {
      FUN_00623bb0(&DAT_001f1906,"../../p2p/base/basic_ice_controller.cc",0xf69,
                   "delay initial selection up to ",uVar10,&DAT_001e9f22);
    }
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    param_1[2] = (ulong)uVar10 << 0x20 | 10;
    uVar8 = 1;
  }
  else {
    uVar7 = FUN_00417e08();
    if ((uVar7 & 1) == 0) {
      local_e8 = "../../p2p/base/basic_ice_controller.cc";
      local_e0 = (char **)0xea1;
      local_d8 = &uStack_e9;
      ppcStack_c8 = &local_e8;
      local_d0 = "reset initial_select_timestamp_ = ";
      if (*(char *)(param_2 + 0x1d0) == '\x01') {
        local_f8 = *plVar1;
      }
      else {
        local_f8 = 0;
      }
      FUN_005f3500(&local_90,&local_f8);
      local_a8 = &local_d0;
      uStack_b8 = uStack_88;
      local_c0 = local_90;
      local_b0 = (long)local_80;
      lVar6 = -0x8000000000000000;
      if (lVar5 != -0x8000000000000000 && lVar9 != 0x7fffffffffffffff) {
        lVar6 = lVar5 - lVar9;
      }
      ppcStack_98 = &local_c0;
      local_a0 = " selection delayed by: ";
      local_100 = 0x7fffffffffffffff;
      if (lVar5 != 0x7fffffffffffffff && lVar9 != -0x8000000000000000) {
        local_100 = lVar6;
      }
      FUN_005f3380(&local_68,&local_100);
      local_78 = &local_a0;
      uStack_88 = uStack_60;
      local_90 = local_68;
      local_80 = local_58;
      puVar4 = *(undefined8 **)(ppcStack_98[3] + 8);
      FUN_00623bb0("\r\t\n\t\n",*puVar4,*(undefined4 *)(puVar4 + 1),*(undefined8 *)ppcStack_98[3],
                   ppcStack_98,local_a0,&local_90);
      if (local_b0 < 0) {
        operator_delete(local_c0);
      }
    }
    if (*(char *)(param_2 + 0x1d0) == '\x01') {
      *(undefined1 *)(param_2 + 0x1d0) = 0;
    }
    uVar8 = 0;
    *param_1 = param_4;
    *(undefined1 *)(param_1 + 1) = 1;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  *(undefined1 *)(param_1 + 3) = uVar8;
LAB_00c5e7ac:
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  return;
}


// ===== 00c5e7e8  FUN_00c5e7e8 =====

void FUN_00c5e7e8(long *param_1,long param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined1 uVar7;
  int iVar8;
  undefined1 auVar9 [16];
  char local_34 [4];
  
  auVar9 = FUN_00c5eaa0(param_2,param_4);
  if (((auVar9 & (undefined1  [16])0x1) != (undefined1  [16])0x0) &&
     (*(long *)(param_2 + 0x178) != param_4)) {
    if (*(long *)(param_2 + 0x178) == 0) {
      FUN_00c5e3a0(param_1,param_2,auVar9._8_8_,param_4);
      return;
    }
    iVar1 = FUN_00c5eb60(param_2,param_4);
    if ((iVar1 != -1) || (uVar2 = FUN_00c66bf0(param_4), (uVar2 & 1) != 0)) {
      local_34[0] = '\0';
      uVar3 = (**(code **)(**(long **)(param_2 + 0x18) + 0x10))();
      uVar2 = uVar3 / 1000;
      if (499 < uVar3 % 1000) {
        uVar2 = uVar2 + 1;
      }
      if ((uVar3 & 0x8000000000000000) != 0) {
        uVar2 = -(-uVar3 / 1000) - (ulong)(500 < -uVar3 % 1000);
      }
      uVar3 = FUN_00be0944(param_2 + 0x90);
      if ((long)uVar3 < 0) {
        uVar6 = -(-uVar3 / 1000) - (ulong)(500 < -uVar3 % 1000);
      }
      else {
        uVar6 = uVar3 / 1000;
        if (499 < uVar3 % 1000) {
          uVar6 = uVar6 + 1;
        }
      }
      iVar1 = FUN_00c5ecd4(param_2,*(undefined8 *)(param_2 + 0x178),param_4,uVar2 - uVar6,1,local_34
                          );
      if (local_34[0] == '\x01') {
        lVar4 = FUN_00be0944(param_2 + 0x90);
        if (lVar4 < 1) {
          uVar7 = 0;
          iVar8 = -0x55555556;
          param_3 = 0xaaaaaa00;
        }
        else {
          uVar2 = FUN_00be0944(param_2 + 0x90);
          if ((long)uVar2 < 0) {
            iVar8 = -(int)(-uVar2 / 1000) - (uint)(500 < -uVar2 % 1000);
          }
          else {
            iVar8 = (int)(uVar2 / 1000);
            if (499 < uVar2 % 1000) {
              iVar8 = iVar8 + 1;
            }
          }
          uVar7 = 1;
        }
      }
      else {
        uVar7 = 0;
        iVar8 = -0x55555556;
        param_3 = 0xaaaaaa00;
      }
      if (iVar1 < 0) {
LAB_00c5ea84:
        uVar7 = 0;
        *param_1 = param_4;
        *(undefined1 *)(param_1 + 1) = 1;
        *(undefined1 *)(param_1 + 2) = 0;
      }
      else {
        if (iVar1 == 0) {
          lVar5 = FUN_00c66c3c(param_4);
          lVar4 = FUN_00c66c3c(*(undefined8 *)(param_2 + 0x178));
          if (lVar4 != 0x7fffffffffffffff) {
            if (lVar4 != -0x8000000000000000) {
              lVar4 = lVar4 + -10000;
            }
            if (lVar4 < lVar5) goto LAB_00c5ea34;
          }
          goto LAB_00c5ea84;
        }
LAB_00c5ea34:
        *(undefined1 *)param_1 = 0;
        *(undefined1 *)(param_1 + 1) = 0;
        *(undefined4 *)(param_1 + 2) = param_3;
        *(int *)((long)param_1 + 0x14) = iVar8;
      }
      *(undefined1 *)(param_1 + 3) = uVar7;
      goto LAB_00c5e8f8;
    }
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
LAB_00c5e8f8:
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  return;
}


// ===== 00c5eaa0  FUN_00c5eaa0 =====

undefined8 FUN_00c5eaa0(long param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_2 != (long *)0x0) {
    uVar2 = FUN_00c63548(param_2);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    uVar3 = FUN_00c66be4(param_2);
    if ((int)uVar3 == 1) {
      return uVar3;
    }
    iVar1 = FUN_00c66be4(param_2);
    if ((iVar1 == 2) && (*(char *)(param_1 + 200) == '\x01')) {
      (**(code **)(*param_2 + 0x10))(param_2);
      uVar2 = FUN_00aff31c();
      if ((uVar2 & 1) != 0) {
        (**(code **)(*param_2 + 0x18))(param_2);
        uVar2 = FUN_00aff31c();
        if ((uVar2 & 1) != 0) {
          return 1;
        }
        (**(code **)(*param_2 + 0x18))(param_2);
        uVar3 = FUN_00aff308();
        return uVar3;
      }
    }
  }
  return 0;
}


// ===== 00c5eb60  FUN_00c5eb60 =====

uint FUN_00c5eb60(long param_1,long *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  
  uVar9 = *(ulong *)(param_1 + 0x160);
  lVar6 = (**(code **)(*param_2 + 0x20))(param_2);
  iVar1 = *(int *)(lVar6 + 0xa0);
  lVar6 = (**(code **)(*param_3 + 0x20))(param_3);
  iVar8 = (int)uVar9;
  bVar3 = iVar1 != iVar8;
  uVar7 = 0;
  if (*(int *)(lVar6 + 0xa0) == iVar8) {
    uVar7 = (uint)(uVar9 >> 0x20) & (uint)bVar3;
  }
  uVar7 = -uVar7;
  if (!bVar3 && (*(int *)(lVar6 + 0xa0) != iVar8 && (uVar9 & 0x100000000) != 0)) {
    uVar7 = 1;
  }
  if (uVar7 != 0) {
    return uVar7;
  }
  lVar6 = (**(code **)(*param_2 + 0x20))(param_2);
  iVar1 = *(int *)(lVar6 + 0xa0);
  lVar6 = (**(code **)(*param_3 + 0x20))(param_3);
  iVar8 = *(int *)(param_1 + 0x168);
  iVar2 = *(int *)(lVar6 + 0xa0);
  if (iVar8 < 3) {
    if (iVar8 == 1) {
LAB_00c5ec5c:
      if ((iVar1 == 8) && (iVar2 != 8)) goto LAB_00c5eca8;
      if ((iVar1 != 8) && (iVar2 == 8)) {
        return 0xffffffff;
      }
    }
    else if (iVar8 == 2) goto LAB_00c5ec80;
LAB_00c5ecb0:
    uVar4 = FUN_00c66cb4(param_2);
    uVar5 = FUN_00c66cb4(param_3);
    uVar7 = (uint)(uVar4 < uVar5);
    if (uVar5 < uVar4) {
      uVar7 = 0xffffffff;
    }
  }
  else {
    if (iVar8 != 4) {
      if (iVar8 != 3) goto LAB_00c5ecb0;
      goto LAB_00c5ec5c;
    }
LAB_00c5ec80:
    if ((iVar1 == 8) && (iVar2 != 8)) {
      return 0xffffffff;
    }
    if ((iVar1 == 8) || (iVar2 != 8)) goto LAB_00c5ecb0;
LAB_00c5eca8:
    uVar7 = 1;
  }
  return uVar7;
}


// ===== 00c5ecd4  FUN_00c5ecd4 =====

undefined8 FUN_00c5ecd4(long param_1,long param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../p2p/base/basic_ice_controller.cc",0x2d8,"a != nullptr",&DAT_001f5fa0);
  }
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../p2p/base/basic_ice_controller.cc",0x2d9,"b != nullptr",&DAT_001f5fa0);
  }
  uVar4 = FUN_00c5f044(param_1,param_2,param_3);
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  iVar1 = (**(code **)(param_1 + 0x60))(param_1 + 0x50);
  if (iVar1 != 1) {
LAB_00c5edb0:
    uVar4 = FUN_00c5f36c(param_1,param_2,param_3);
    return uVar4;
  }
  uVar2 = FUN_00c62c68(param_2);
  uVar3 = FUN_00c62c68(param_3);
  if (uVar3 < uVar2) {
LAB_00c5ed4c:
    uVar4 = 1;
  }
  else {
    uVar2 = FUN_00c62c68(param_2);
    uVar3 = FUN_00c62c68(param_3);
    if (uVar3 <= uVar2) {
      lVar5 = FUN_00c66bd8(param_2);
      lVar6 = FUN_00c66bd8(param_3);
      if (lVar6 < lVar5) goto LAB_00c5ed4c;
      lVar5 = FUN_00c66bd8(param_2);
      lVar6 = FUN_00c66bd8(param_3);
      if (lVar6 <= lVar5) goto LAB_00c5edb0;
    }
    uVar4 = 0xffffffff;
  }
  return uVar4;
}


// ===== 00c5ee10  FUN_00c5ee10 =====

void FUN_00c5ee10(undefined8 param_1,long *param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  void *pvVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  void *local_a0 [2];
  char cStack_89;
  long *local_88;
  undefined8 local_80;
  undefined1 *local_78;
  char *local_70;
  long **pplStack_68;
  undefined1 uStack_41;
  
  puVar4 = PTR_DAT_00d51ca8;
  lVar1 = param_2[0x30];
  lVar3 = param_2[0x31];
  uVar7 = lVar3 - lVar1 >> 3;
  uVar8 = uVar7;
  local_88 = param_2;
  if (0x80 < (long)uVar7) {
    do {
      pvVar5 = (void *)FUN_00546b60(uVar8 << 3,puVar4);
      if (pvVar5 != (void *)0x0) {
        FUN_00c5ff50(lVar1,lVar3,&local_88,uVar7,pvVar5,uVar8);
        operator_delete(pvVar5);
        uVar8 = FUN_0044075c();
        if ((uVar8 & 1) != 0) goto LAB_00c5ef54;
        goto LAB_00c5eed4;
      }
      uVar8 = uVar8 >> 1;
    } while (uVar8 != 0);
  }
  FUN_00c5ff50(lVar1,lVar3,&local_88,uVar7,0,0);
  uVar8 = FUN_0044075c();
  if ((uVar8 & 1) == 0) {
LAB_00c5eed4:
    local_88 = (long *)0x1b5e15;
    local_80 = 0x11e0;
    lVar1 = param_2[0x30];
    lVar3 = param_2[0x31];
    local_78 = &uStack_41;
    pplStack_68 = &local_88;
    local_70 = "Sorting ";
    FUN_00c6f76c(local_a0,param_3);
    FUN_00623bb0(&DAT_001f6ac0,*pplStack_68,*(undefined4 *)(pplStack_68 + 1),local_70,
                 lVar3 - lVar1 >> 3," available connections due to: ",local_a0);
    if (cStack_89 < '\0') {
      operator_delete(local_a0[0]);
    }
  }
LAB_00c5ef54:
  if (param_2[0x31] != param_2[0x30]) {
    uVar8 = 0;
    do {
      uVar7 = FUN_0044075c();
      if ((uVar7 & 1) == 0) {
        if ((ulong)(param_2[0x31] - param_2[0x30] >> 3) <= uVar8) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                    );
        }
        FUN_00c61eb8(&local_88,*(undefined8 *)(param_2[0x30] + uVar8 * 8));
        FUN_00623bb0(&DAT_001f627a,"../../p2p/base/basic_ice_controller.cc",0x1200,&local_88);
        if ((long)local_78 < 0) {
          operator_delete(local_88);
        }
      }
      puVar2 = (undefined8 *)param_2[0x30];
      uVar8 = uVar8 + 1;
    } while (uVar8 < (ulong)(param_2[0x31] - (long)puVar2 >> 3));
    if (puVar2 != (undefined8 *)param_2[0x31]) {
      uVar6 = *puVar2;
      goto LAB_00c5eff4;
    }
  }
  uVar6 = 0;
LAB_00c5eff4:
  (**(code **)(*param_2 + 0x68))(param_1,param_2,param_3,uVar6);
  return;
}


// ===== 00c5f044  FUN_00c5f044 =====

undefined8
FUN_00c5f044(long param_1,long *param_2,long *param_3,long param_4,ulong param_5,undefined1 *param_6
            )

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = FUN_00c63548(param_2);
  if ((uVar6 & 1) == 0) {
    iVar4 = FUN_00c66be4(param_2);
    if ((iVar4 == 2) && (*(char *)(param_1 + 200) == '\x01')) {
      (**(code **)(*param_2 + 0x10))(param_2);
      uVar6 = FUN_00aff31c();
      if ((uVar6 & 1) != 0) {
        (**(code **)(*param_2 + 0x18))(param_2);
        uVar6 = FUN_00aff31c();
        if ((uVar6 & 1) != 0) goto LAB_00c5f084;
        (**(code **)(*param_2 + 0x18))(param_2);
        uVar2 = FUN_00aff308();
        uVar2 = uVar2 ^ 1;
        goto LAB_00c5f0f8;
      }
    }
    uVar2 = 1;
  }
  else {
LAB_00c5f084:
    uVar2 = 0;
  }
LAB_00c5f0f8:
  uVar6 = FUN_00c63548(param_3);
  if ((uVar6 & 1) != 0) {
LAB_00c5f104:
    uVar3 = 1;
    goto LAB_00c5f184;
  }
  iVar4 = FUN_00c66be4(param_3);
  if ((iVar4 == 2) && (*(char *)(param_1 + 200) == '\x01')) {
    (**(code **)(*param_3 + 0x10))(param_3);
    uVar6 = FUN_00aff31c();
    if ((uVar6 & 1) == 0) goto LAB_00c5f178;
    (**(code **)(*param_3 + 0x18))(param_3);
    uVar6 = FUN_00aff31c();
    if ((uVar6 & 1) != 0) goto LAB_00c5f104;
    (**(code **)(*param_3 + 0x18))(param_3);
    uVar3 = FUN_00aff308();
    uVar1 = uVar2 | uVar3;
  }
  else {
LAB_00c5f178:
    uVar3 = 0;
    uVar1 = uVar2;
  }
  if ((uVar1 & 1) == 0) {
    return 1;
  }
LAB_00c5f184:
  if ((uVar2 & uVar3 & 1) != 0) {
    return 0xffffffff;
  }
  iVar4 = FUN_00c66be4(param_2);
  iVar5 = FUN_00c66be4(param_3);
  if (iVar5 <= iVar4) {
    iVar4 = FUN_00c66be4(param_3);
    iVar5 = FUN_00c66be4(param_2);
    if (iVar4 < iVar5) {
      return 0xffffffff;
    }
    uVar6 = FUN_00c66bf0(param_2);
    if (((uVar6 & 1) == 0) || (uVar6 = FUN_00c66bf0(param_3), (uVar6 & 1) != 0)) {
      uVar6 = FUN_00c66bf0(param_2);
      if (((uVar6 & 1) == 0) && (uVar6 = FUN_00c66bf0(param_3), (uVar6 & 1) != 0)) {
        if ((param_5 & 1) == 0) {
          return 0xffffffff;
        }
        uVar6 = FUN_00c67c64(param_2);
        if ((long)uVar6 < 0) {
          uVar7 = -(-uVar6 / 1000) - (ulong)(500 < -uVar6 % 1000);
        }
        else {
          uVar7 = uVar6 / 1000;
          if (499 < uVar6 % 1000) {
            uVar7 = uVar7 + 1;
          }
        }
        if ((long)uVar7 <= param_4) {
          uVar6 = FUN_00c67c64(param_3);
          if ((long)uVar6 < 0) {
            uVar7 = -(-uVar6 / 1000) - (ulong)(500 < -uVar6 % 1000);
          }
          else {
            uVar7 = uVar6 / 1000;
            if (499 < uVar6 % 1000) {
              uVar7 = uVar7 + 1;
            }
          }
          if ((long)uVar7 <= param_4) {
            return 0xffffffff;
          }
        }
        *param_6 = 1;
      }
      iVar4 = FUN_00c66be4(param_2);
      if ((iVar4 == 0) && (iVar4 = FUN_00c66be4(param_3), iVar4 == 0)) {
        uVar6 = FUN_00c66bfc(param_2);
        if (((uVar6 & 1) != 0) && (uVar6 = FUN_00c66bfc(param_3), (uVar6 & 1) == 0)) {
          return 1;
        }
        uVar6 = FUN_00c66bfc(param_2);
        if (((uVar6 & 1) == 0) && (uVar6 = FUN_00c66bfc(param_3), (uVar6 & 1) != 0)) {
          return 0xffffffff;
        }
      }
      return 0;
    }
  }
  return 1;
}


// ===== 00c5f36c  FUN_00c5f36c =====

ulong FUN_00c5f36c(long param_1,long *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  uVar8 = FUN_00c5eb60();
  if ((int)uVar8 == 0) {
    uVar8 = (**(code **)(*param_2 + 0x30))(param_2);
    uVar9 = (**(code **)(*param_3 + 0x30))(param_3);
    if (uVar9 < uVar8) {
      uVar8 = 1;
    }
    else {
      uVar8 = (**(code **)(*param_2 + 0x30))(param_2);
      uVar9 = (**(code **)(*param_3 + 0x30))(param_3);
      if (uVar8 < uVar9) {
        uVar8 = 0xffffffff;
      }
      else {
        lVar10 = (**(code **)(*param_2 + 0x18))(param_2);
        iVar1 = *(int *)(lVar10 + 0xf8);
        iVar4 = (**(code **)(*param_2 + 0x28))(param_2);
        lVar10 = (**(code **)(*param_3 + 0x18))(param_3);
        iVar2 = *(int *)(lVar10 + 0xf8);
        iVar5 = (**(code **)(*param_3 + 0x28))(param_3);
        uVar3 = (iVar4 + iVar1) - (iVar2 + iVar5);
        uVar8 = (ulong)uVar3;
        if (uVar3 == 0) {
          uVar6 = (**(code **)(param_1 + 0x80))(param_1 + 0x70,param_2);
          uVar7 = (**(code **)(param_1 + 0x80))(param_1 + 0x70,param_3);
          uVar3 = -(uVar6 & (uVar7 ^ 0xffffffff) & 1);
          if ((uVar7 & (uVar6 ^ 0xffffffff) & 1) != 0) {
            uVar3 = 1;
          }
          uVar8 = (ulong)uVar3;
        }
      }
    }
  }
  return uVar8;
}


// ===== 00c5f4ac  FUN_00c5f4ac =====

void FUN_00c5f4ac(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *local_98;
  long **local_90;
  long *plStack_88;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long *local_58;
  undefined1 uStack_31;
  
  *param_1 = 0;
  param_1[1] = 0;
  plVar5 = *(long **)(param_2 + 0x178);
  param_1[2] = 0;
  local_70 = &local_68;
  local_68 = 0;
  uStack_60 = 0;
  if (plVar5 != (long *)0x0) {
    local_58 = (long *)(**(code **)(*plVar5 + 0x20))(plVar5);
    local_90 = &local_58;
    lVar2 = FUN_00c5fd40(0,&local_70,&local_70,&DAT_001f94c3,&local_90,&local_98);
    *(long **)(lVar2 + 0x28) = plVar5;
  }
  puVar7 = *(undefined8 **)(param_2 + 0x180);
  puVar8 = *(undefined8 **)(param_2 + 0x188);
  if (puVar7 != puVar8) {
    do {
      puVar6 = puVar7 + 1;
      plVar5 = (long *)*puVar7;
      local_90 = (long **)(**(code **)(*plVar5 + 0x20))(plVar5);
      plStack_88 = plVar5;
      FUN_00c5fe48(0,&local_70,&local_70,&local_90);
      puVar7 = puVar6;
    } while (puVar6 != puVar8);
    puVar7 = *(undefined8 **)(param_2 + 0x180);
    puVar8 = *(undefined8 **)(param_2 + 0x188);
  }
  if (puVar7 != puVar8) {
    do {
      local_58 = (long *)*puVar7;
      plVar5 = *(long **)(param_2 + 0x178);
      (**(code **)(*local_58 + 0x20))();
      FUN_00bca960(&local_90);
      uVar4 = FUN_007ea478(&local_90);
      if ((uVar4 & 1) == 0) {
        local_98 = (long *)(**(code **)(*local_58 + 0x20))();
        local_90 = &local_98;
        lVar2 = FUN_00c5fd40(0,&local_70,&local_70,&DAT_001f94c3,&local_90,&uStack_31);
        plVar5 = *(long **)(lVar2 + 0x28);
      }
      if ((((plVar5 != (long *)0x0) && (local_58 != plVar5)) &&
          (uVar4 = FUN_00c66c08(plVar5), (uVar4 & 1) == 0)) &&
         (iVar1 = FUN_00c5f36c(param_2,plVar5,local_58), -1 < iVar1)) {
        puVar6 = (undefined8 *)param_1[1];
        if (puVar6 < (undefined8 *)param_1[2]) {
          if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          puVar3 = puVar6 + 1;
          *puVar6 = local_58;
        }
        else {
          puVar3 = (undefined8 *)FUN_00c5f7b0(param_1,&local_58);
        }
        param_1[1] = puVar3;
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 != puVar8);
  }
  local_90 = &local_70;
  FUN_00c5fccc(&local_90,local_68);
  return;
}


// ===== 00c5f6a0  FUN_00c5f6a0 =====

ulong FUN_00c5f6a0(long *param_1,long param_2,int param_3,int param_4)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  
  if (param_3 == 2) {
    lVar3 = param_1[0x2f];
    if (param_4 != 1) {
      if ((lVar3 == 0) || (uVar1 = FUN_00c63548(lVar3), (uVar1 & 1) == 0)) {
        uVar2 = 1;
      }
      else {
        uVar1 = FUN_00c5f36c(param_1,param_1[0x2f],param_2);
        uVar2 = (uint)(uVar1 >> 0x1f) & 1;
      }
      if (param_2 == lVar3) {
        uVar2 = 1;
      }
      return (ulong)uVar2;
    }
    if (param_2 == lVar3) {
      uVar1 = FUN_00c63548(param_2);
      return uVar1;
    }
  }
  else if (param_3 == 1) {
    if (param_4 != 1) {
      return 1;
    }
                    /* WARNING: Could not recover jumptable at 0x00c5f6f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x50))(param_1,param_2,0);
    return uVar1;
  }
  return 0;
}


